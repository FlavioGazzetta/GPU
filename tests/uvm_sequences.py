# tests/uvm_sequences.py
from pyuvm import ConfigDB
import cocotb
from cocotb.triggers import RisingEdge
from uvm_env import GpuTest
from program_rom import NOP, BRNZP, CMP, ADD, SUB, MUL, DIV, LDR, STR, CONST, RET, enc

CLK = lambda dut: RisingEdge(dut.clk)

def pad(img, n=256): return img + [enc(NOP)]*(n - len(img))

async def write_dcr_and_start(dut, threads=4):
    for _ in range(5): await CLK(dut)   # align with tb_top_stub reset behavior
    dut.reset.value = 0
    dut.device_control_write_enable.value = 1
    dut.device_control_data.value = threads & 0xFF
    await CLK(dut)
    dut.device_control_write_enable.value = 0
    dut.start.value = 1
    await CLK(dut)
    dut.start.value = 0

# Small helpers to build programs
def prog_const(rd, imm): return [enc(CONST, rd=rd, imm8=imm)]
def prog_store(addr_reg, data_reg): return [enc(STR, rs=addr_reg, rt=data_reg)]
def prog_load(rd, addr_reg): return [enc(LDR, rd=rd, rs=addr_reg)]
def prog_alu(rd, rs, rt, op): return [enc(op, rd=rd, rs=rs, rt=rt)]
def prog_cmp(rs, rt): return [enc(CMP, rs=rs, rt=rt)]
def prog_br(mask, imm): return [enc(BRNZP, rd=(mask & 0x7), imm8=imm)]

class BaseGpuTest(GpuTest):
    async def run_once(self, program_image, threads=4, preload=None, exp=None):
        # Be tolerant to ConfigDB timing/scope: try ConfigDB first, fall back to cocotb.top
        try:
            dut = ConfigDB().get(self, "", "dut")
        except Exception:
            dut = cocotb.top
            # Republish from this test downward so any children can also find it
            ConfigDB().set(self, "*", "dut", dut)

        env        = self.env
        prog_model = env.prog_model
        data_model = env.data_model

        # Program image (pad to 256 to avoid OOB accesses)
        prog_model.load_image(pad(program_image))

        # Optional preload of data memory: replace instance to keep ctor latencies
        if preload is not None:
            env.data_model = type(data_model)(
                depth=data_model.depth,
                read_latency=data_model.rlat,
                write_latency=data_model.wlat,
                preload=preload
            )
            ConfigDB().set(self.env, "*", "data_model", env.data_model)

        # Expected writes for the scoreboard
        if exp is not None:
            env.sb.set_expected(exp)

        # Start the kernel
        await write_dcr_and_start(dut, threads=threads)

        # Wait for completion (tb_top_stub may wrap GPU under .dut)
        done_sig = getattr(dut, "done", None) or dut.dut.done
        while int(done_sig.value) == 0:
            await CLK(dut)

        # Optionally export coverage here:
        # from coverage import report_cov; report_cov()


class TestALU(BaseGpuTest):
    async def do_run(self):
        p = []
        p += prog_const(1, 5)
        p += prog_const(2, 7)
        p += prog_alu(3, 1, 2, ADD)
        p += prog_alu(4, 1, 2, SUB)
        p += prog_alu(5, 1, 2, MUL)
        p += prog_alu(6, 2, 1, DIV)
        # store R3..R6 to mem[0..3]
        p += prog_store(0, 3)
        p += prog_const(0, 1); p += prog_store(0, 4)
        p += prog_const(0, 2); p += prog_store(0, 5)
        p += prog_const(0, 3); p += prog_store(0, 6)
        p += [enc(RET)]
        exp = {0:12, 1:((-2) & 0xFF), 2:35, 3:1}
        await self.run_once(p, threads=4, exp=exp)

class TestLSU(BaseGpuTest):
    async def do_run(self):
        preload = [0]*256
        preload[10] = 42
        p = []
        p += prog_const(0,10)
        p += prog_load(4,0)
        p += prog_const(0,1)
        p += prog_store(0,4)
        p += [enc(RET)]
        exp = {1:42}
        await self.run_once(p, threads=4, preload=preload, exp=exp)

class TestBranchTaken(BaseGpuTest):
    async def do_run(self):
        p = []
        p += prog_const(1,7); p += prog_const(2,3)
        p += prog_cmp(1,2)               # sets P
        p += prog_br(0b100, 12)          # branch to 12 if P
        # fallthrough path
        p += prog_const(0,2); p += prog_const(3,0xBB); p += prog_store(0,3); p += [enc(RET)]
        while len(p) < 12: p.append(enc(NOP))
        # taken label
        p += prog_const(0,2); p += prog_const(3,0xAA); p += prog_store(0,3); p += [enc(RET)]
        exp = {2:0xAA}
        await self.run_once(p, threads=4, exp=exp)

class TestBranchNotTaken(BaseGpuTest):
    async def do_run(self):
        p = []
        p += prog_const(1,2); p += prog_const(2,9)
        p += prog_cmp(1,2)               # sets N
        p += prog_br(0b100, 12)          # mask=P only -> not taken
        p += prog_const(0,2); p += prog_const(3,0xBB); p += prog_store(0,3); p += [enc(RET)]
        while len(p) < 12: p.append(enc(NOP))
        p += prog_const(0,2); p += prog_const(3,0xAA); p += prog_store(0,3); p += [enc(RET)]
        exp = {2:0xBB}
        await self.run_once(p, threads=4, exp=exp)

class TestTailThreads(BaseGpuTest):
    async def do_run(self):
        # 6 threads → tail block of 2 (THREADS_PER_BLOCK=4)
        p = []
        p += prog_const(0,0)
        p += [enc(STR, rs=0, rt=15)]             # mem[R0] = %threadIdx
        p += prog_const(3,1); p += prog_alu(0,0,3,ADD)
        p += [enc(STR, rs=0, rt=15)]
        p += [enc(RET)]
        await self.run_once(p, threads=6)

class TestControllerLatency(BaseGpuTest):
    async def do_run(self):
        # Adjust latencies
        env = self.env
        env.data_model.wlat = 2
        env.data_model.rlat = 1

        p = []
        p += prog_const(0,0); p += prog_const(1,0x11)
        for _ in range(4):
            p += prog_store(0,1)
            p += prog_const(3,1); p += prog_alu(0,0,3,ADD)
        p += [enc(RET)]
        exp = {0:0x11,1:0x11,2:0x11,3:0x11}
        await self.run_once(p, threads=4, exp=exp)
