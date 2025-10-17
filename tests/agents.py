from pyuvm import uvm_driver, ConfigDB
import cocotb
from cocotb.triggers import RisingEdge

class ProgramMemDriver(uvm_driver):
    def build_phase(self):
        super().build_phase()
        self.cdbus = ConfigDB().get(self, "", "dut")         # HDL top
        self.cfg   = ConfigDB().get(self, "", "cfg")         # config (channels, depth)
        self.model = ConfigDB().get(self, "", "prog_model")  # program ROM model

    async def run_phase(self):
        dut = self.cdbus
        while True:
            await RisingEdge(dut.clk)

            rv = int(dut.program_mem_read_valid.value)

            # Determine if ready is a single bit or a bus
            try:
                ready_width = dut.program_mem_read_ready.value.n_bits
            except Exception:
                # Fallback if n_bits not available; assume 1-bit
                ready_width = 1

            ready_mask = 0

            for ch in range(self.cfg.num_prog_ch):
                if (rv >> ch) & 1:
                    addr = int(dut.program_mem_read_address[ch].value)
                    data, latency = self.model.fetch(addr)

                    for _ in range(latency):
                        await RisingEdge(dut.clk)

                    # data bus *is* an array per your TB
                    dut.program_mem_read_data[ch].value = data & 0xFFFF
                    ready_mask |= (1 << ch)

            # Drive ready correctly whether it's 1-bit or multi-bit
            if ready_width == 1:
                dut.program_mem_read_ready.value = 1 if ready_mask else 0
            else:
                dut.program_mem_read_ready.value = ready_mask


class DataMemDriver(uvm_driver):
    def build_phase(self):
        super().build_phase()
        self.cdbus = ConfigDB().get(self, "", "dut")
        self.cfg   = ConfigDB().get(self, "", "cfg")
        self.model = ConfigDB().get(self, "", "data_model")

    async def run_phase(self):
        dut = self.cdbus
        while True:
            await RisingEdge(dut.clk)

            # packed valid vectors -> read as ints
            rbits = int(dut.data_mem_read_valid.value)
            wbits = int(dut.data_mem_write_valid.value)

            # determine ready widths (1 if scalar)
            def width_of(sig):
                try:
                    return sig.value.n_bits
                except Exception:
                    return 1

            rready_w = width_of(dut.data_mem_read_ready)
            wready_w = width_of(dut.data_mem_write_ready)

            read_ready_mask  = 0
            write_ready_mask = 0

            # READS
            for ch in range(self.cfg.num_data_ch):
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
                    lat = self.model.write(a, d)
                    for _ in range(lat):
                        await RisingEdge(dut.clk)
                    write_ready_mask |= (1 << ch)

            # drive whole packed ready signals (handle 1-bit case)
            dut.data_mem_read_ready.value  = 1 if (rready_w == 1 and read_ready_mask)  else read_ready_mask
            dut.data_mem_write_ready.value = 1 if (wready_w == 1 and write_ready_mask) else write_ready_mask
