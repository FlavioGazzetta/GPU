# tests/monitors.py
from pyuvm import uvm_component, uvm_analysis_port, ConfigDB
import cocotb
from cocotb.triggers import RisingEdge
from types import SimpleNamespace
from coverage import sample_cov  # falls back to no-op if not installed

class InstrMonitor(uvm_component):
    def build_phase(self):
        super().build_phase()
        self.dut = ConfigDB().get(self, "", "dut")
        self.ap  = uvm_analysis_port("ap", self)

    async def run_phase(self):
        dut = self.dut
        ch = 0
        while True:
            await RisingEdge(dut.clk)
            if (int(dut.program_mem_read_valid.value) & 1) and (int(dut.program_mem_read_ready.value) & 1):
                pc     = int(dut.program_mem_read_address[ch].value) & 0xFF
                instr  = int(dut.program_mem_read_data[ch].value) & 0xFFFF
                opcode = (instr >> 12) & 0xF
                sample = SimpleNamespace(opcode=opcode, is_branch=(opcode == 0x1), nzp_outcome=None)
                sample_cov(sample)
                self.ap.write({"pc": pc, "instr": instr, "opcode": opcode})

class DataWriteMonitor(uvm_component):
    def build_phase(self):
        super().build_phase()
        self.dut = ConfigDB().get(self, "", "dut")
        self.ap  = uvm_analysis_port("ap", self)

    async def run_phase(self):
        dut = self.dut
        NUM_CH = len(dut.data_mem_write_address)
        while True:
            await RisingEdge(dut.clk)
            wv = int(dut.data_mem_write_valid.value)
            wr = int(dut.data_mem_write_ready.value)
            for ch in range(NUM_CH):
                if ((wv >> ch) & 1) and ((wr >> ch) & 1):
                    addr = int(dut.data_mem_write_address[ch].value) & 0xFF
                    data = int(dut.data_mem_write_data[ch].value) & 0xFF
                    self.ap.write({"addr": addr, "data": data, "ch": ch})
