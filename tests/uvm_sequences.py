# tests/uvm_sequences.py

from pyuvm import ConfigDB
import cocotb
from cocotb.triggers import RisingEdge
from uvm_env import GpuTest
from program_rom import NOP, BRNZP, CMP, ADD, SUB, MUL, DIV, LDR, STR, CONST, RET, enc

CLK = lambda dut: RisingEdge(dut.clk)

def pad(img, n=256): return img + [enc(NOP)] * (n - len(img))


async def write_dcr(dut, threads=4):
    """
    Match the C++ harness behavior for configuring thread count:
      - Wait a few cycles (align with tb_top_stub reset)
      - Deassert reset
      - Write DCR once (WE=1 for one cycle)
    """
    for _ in range(5):
        await CLK(dut)
    dut.reset.value = 0

    dut.device_control_data.value = threads & 0xFF
    dut.device_control_write_enable.value = 1
    await CLK(dut)
    dut.device_control_write_enable.value = 0


# Small helpers to build programs
def prog_const(rd, imm): return [enc(CONST, rd=rd, imm8=imm)]
def prog_store(addr_reg, data_reg): return [enc(STR, rs=addr_reg, rt=data_reg)]
def prog_load(rd, addr_reg): return [enc(LDR, rd=rd, rs=addr_reg)]
def prog_alu(rd, rs, rt, op): return [enc(op, rd=rd, rs=rs, rt=rt)]
def prog_cmp(rs, rt): return [enc(CMP, rs=rs, rt=rt)]
def prog_br(mask, imm): return [enc(BRNZP, rd=(mask & 0x7), imm8=imm)]


class BaseGpuTest(GpuTest):
    async def run_phase(self):
        self.raise_objection()
        try:
            await self.do_run()
        finally:
            self.drop_objection()

    async def run_once(self, program_image, threads=4, preload=None, exp=None):
        # Get/seed DUT into ConfigDB if needed
        try:
            dut = ConfigDB().get(self, "", "dut")
        except Exception:
            dut = cocotb.top
            ConfigDB().set(self, "*", "dut", dut)

        env        = self.env
        prog_model = env.prog_model
        data_model = env.data_model

        # Load program ROM image
        prog_model.load_image(pad(program_image))

        # Optional data preload
        if preload is not None:
            env.data_model = type(data_model)(
                depth=data_model.depth,
                read_latency=data_model.rlat,
                write_latency=data_model.wlat,
                preload=preload
            )
            ConfigDB().set(self.env, "*", "data_model", env.data_model)

        # Scoreboard expectations
        if exp is not None:
            env.sb.set_expected(exp)

        # Configure DCR
        dut._log.info("[UVM] run_once(): writing DCR")
        await write_dcr(dut, threads=threads)

        # ---- Hold start HIGH like the C++ harness until 'done' ----
        dut.start.value = 1

        # Locate 'done' (supports tb_top_stub.dut.done)
        done_sig = getattr(dut, "done", None)
        if done_sig is None:
            root_gpu = getattr(dut, "dut", None)
            if root_gpu is None:
                raise RuntimeError("Couldn't find GPU 'done' at dut.done or dut.dut.done")
            done_sig = root_gpu.done

        # Bounded wait with breadcrumbs
        max_cycles = 20000
        saw_prog_read = False
        for cyc in range(max_cycles):
            # progress probe: top-level program bus lives on tb_top_stub
            if int(dut.program_mem_read_valid.value) and int(dut.program_mem_read_ready.value):
                saw_prog_read = True

            if int(done_sig.value) == 1:
                break

            if (cyc % 1000) == 0 and cyc != 0:
                dut._log.info(f"[UVM] waiting... cyc={cyc}, pmem rv={int(dut.program_mem_read_valid.value)}, rr={int(dut.program_mem_read_ready.value)}")

            await CLK(dut)
        else:
            rv = int(dut.program_mem_read_valid.value)
            rr = int(dut.program_mem_read_ready.value)
            dut._log.error(f"[UVM] TIMEOUT: done never asserted (max_cycles={max_cycles}) "
                           f"(pmem rv={rv}, rr={rr}, saw_prog_read={saw_prog_read})")
            # Deassert start before failing to leave DUT in a sane state
            dut.start.value = 0
            raise AssertionError("Timeout waiting for GPU 'done'")

        # Kernel finished — deassert start (mirror C++ harness post-run tick)
        dut.start.value = 0

        # (optional) dump coverage
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


class TestPrefetch(BaseGpuTest):
    async def do_run(self):
        """
        Verify instruction prefetch: with ROM latency, later FETCHes
        should be satisfied from the prefetch buffer (no bus read that cycle).
        """
        p = [enc(CONST, rd=1, imm8=5), enc(NOP), enc(NOP), enc(RET)]
        p += [enc(NOP)] * (256 - len(p))  # pad

        # Get DUT and environment
        try:
            dut = ConfigDB().get(self, "", "dut")
        except Exception:
            dut = cocotb.top
            ConfigDB().set(self, "*", "dut", dut)

        dut._log.info(">>> TestPrefetch starting; forcing ROM latency")

        # Slow down program ROM so prefetch can hide latency
        self.env.prog_model.latency = 2
        self.env.prog_model.load_image(p)

        # Configure only; start will be held HIGH in run_once() below
        await write_dcr(dut, threads=4)

        # The GPU instance inside tb_top_stub is named 'dut'
        gpu   = getattr(dut, "dut", dut)
        core  = gpu.cores[0].core_instance
        fetch = core.fetcher_instance

        # Start the kernel (held high like C++). We piggy-back the parent wait loop
        dut.start.value = 1

        # 1) First demand fetch must assert bus (top-level bus lives on tb_top_stub)
        while True:
            await CLK(dut)
            if int(dut.program_mem_read_valid.value) == 1:
                break

        # 2) Look for a FETCH cycle where bus isn't asserted, yet next cycle we are FETCHED
        saw_prefetch_hit = False
        for _ in range(400):
            await CLK(dut)
            in_fetch = (int(core.core_state.value) == 0b001)
            if in_fetch:
                bus_req = int(dut.program_mem_read_valid.value)   # top-level
                await CLK(dut)
                became_fetched = (int(fetch.fetcher_state.value) == 0b010)
                if became_fetched and (bus_req == 0):
                    saw_prefetch_hit = True
                    break

        assert saw_prefetch_hit, "Expected a prefetch hit (FETCHED without asserting program_mem_read_valid)."

        # Let BaseGpuTest.run_once()’s waiting/deassert handle completion in the parent call
