# tests/agents.py

from pyuvm import uvm_driver, ConfigDB
import cocotb
from cocotb.triggers import RisingEdge


def _width_of(sig):
    try:
        return sig.value.n_bits
    except Exception:
        return 1


class ProgramMemDriver(uvm_driver):
    def build_phase(self):
        super().build_phase()
        self.cdbus = ConfigDB().get(self, "", "dut")
        self.cfg   = ConfigDB().get(self, "", "cfg")
        self.model = ConfigDB().get(self, "", "prog_model")

    async def run_phase(self):
        dut = self.cdbus
        rr_w = _width_of(dut.program_mem_read_ready)

        # Clear initial drives
        dut.program_mem_read_ready.value = 0
        for ch in range(self.cfg.num_prog_ch):
            dut.program_mem_read_data[ch].value = 0

        while True:
            await RisingEdge(dut.clk)

            rv = int(dut.program_mem_read_valid.value)
            ready_mask = 0

            for ch in range(self.cfg.num_prog_ch):
                # keep clean by default
                dut.program_mem_read_data[ch].value = 0

                if (rv >> ch) & 1:
                    addr = int(dut.program_mem_read_address[ch].value)
                    data, latency = self.model.fetch(addr)

                    for _ in range(latency):
                        await RisingEdge(dut.clk)

                    dut.program_mem_read_data[ch].value = data & 0xFFFF
                    ready_mask |= (1 << ch)

            dut.program_mem_read_ready.value = (1 if ready_mask else 0) if rr_w == 1 else ready_mask


class DataMemDriver(uvm_driver):
    def build_phase(self):
        super().build_phase()
        self.cdbus = ConfigDB().get(self, "", "dut")
        self.cfg   = ConfigDB().get(self, "", "cfg")
        self.model = ConfigDB().get(self, "", "data_model")

    async def run_phase(self):
        dut = self.cdbus

        rready_w = _width_of(dut.data_mem_read_ready)
        wready_w = _width_of(dut.data_mem_write_ready)

        # Clear initial drives
        dut.data_mem_read_ready.value  = 0
        dut.data_mem_write_ready.value = 0
        for ch in range(self.cfg.num_data_ch):
            dut.data_mem_read_data[ch].value = 0

        while True:
            await RisingEdge(dut.clk)

            rbits = int(dut.data_mem_read_valid.value)
            wbits = int(dut.data_mem_write_valid.value)

            read_ready_mask  = 0
            write_ready_mask = 0

            # READS
            for ch in range(self.cfg.num_data_ch):
                dut.data_mem_read_data[ch].value = 0  # keep clean by default
                if (rbits >> ch) & 1:
                    a = int(dut.data_mem_read_address[ch].value)
                    d, lat = self.model.read(a)
                    for _ in range(lat):
                        await RisingEdge(dut.clk)
                    dut.data_mem_read_data[ch].value = d & 0xFF
                    read_ready_mask |= (1 << ch)

            # WRITES
            for ch in range(self.cfg.num_data_ch):
                if (wbits >> ch) & 1:
                    a = int(dut.data_mem_write_address[ch].value)
                    d = int(dut.data_mem_write_data[ch].value)

                    # Helpful breadcrumb for debugging LSU → bus correlation
                    dut._log.info(f"[DRV][WR-REQ] ch={ch} addr={a & 0xFF:02x} data={d & 0xFF:02x}")

                    lat = self.model.write(a, d)
                    for _ in range(lat):
                        await RisingEdge(dut.clk)
                    write_ready_mask |= (1 << ch)

            dut.data_mem_read_ready.value  = (1 if read_ready_mask  else 0) if rready_w == 1 else read_ready_mask
            dut.data_mem_write_ready.value = (1 if write_ready_mask else 0) if wready_w == 1 else write_ready_mask
