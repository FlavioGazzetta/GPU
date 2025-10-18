# tests/monitors.py
from pyuvm import uvm_component, uvm_analysis_port, ConfigDB
import cocotb
from cocotb.triggers import RisingEdge, ReadOnly
from types import SimpleNamespace

def _width(sig):
    try:
        return sig.value.n_bits
    except Exception:
        return 1

def _get(dut, *names):
    for n in names:
        if hasattr(dut, n):
            return getattr(dut, n)
    raise AttributeError(f"None of {names} found on DUT")

class InstrMonitor(uvm_component):
    def build_phase(self):
        super().build_phase()
        self.dut = ConfigDB().get(self, "", "dut")
        self.ap  = uvm_analysis_port("ap", self)

    async def run_phase(self):
        dut = self.dut
        # program/read interface is single channel on tb_top_stub
        pm_valid  = _get(dut, "program_mem_read_valid")
        pm_ready  = _get(dut, "program_mem_read_ready")
        pm_addr   = _get(dut, "program_mem_read_address")
        pm_data   = _get(dut, "program_mem_read_data")

        while True:
            await RisingEdge(dut.clk)
            await ReadOnly()
            rv = int(pm_valid.value)
            rr = int(pm_ready.value)
            if (rv & 1) and (rr & 1):
                pc    = int(pm_addr[0].value) & 0xFF
                instr = int(pm_data[0].value) & 0xFFFF
                opcode = (instr >> 12) & 0xF
                self.ap.write({"pc": pc, "instr": instr, "opcode": opcode})

class DataWriteMonitor(uvm_component):
    def build_phase(self):
        super().build_phase()
        self.dut = ConfigDB().get(self, "", "dut")
        self.ap  = uvm_analysis_port("ap", self)
        self._debug_shown = 0

    async def run_phase(self):
        dut = self.dut

        # Try to find an explicit "accept" signal first (common in simple SRAM wrappers)
        we = None
        try:
            we = _get(dut, "data_mem_write_en", "data_mem_we", "mem_write_en", "mem_we")
        except AttributeError:
            pass

        # Otherwise, fall back to valid/ready handshake
        wvalid = _get(dut, "data_mem_write_valid", "mem_write_valid", "write_valid")
        wready = getattr(dut, "data_mem_write_ready", None)
        addr   = _get(dut, "data_mem_write_address", "mem_write_address")
        wdata  = _get(dut, "data_mem_write_data", "mem_write_data")

        num_ch = len(addr)

        while True:
            await RisingEdge(dut.clk)
            await ReadOnly()

            # Build per-channel "accepted" bitmask
            accepted_mask = 0
            if we is not None:
                w = int(we.value)
                accepted_mask = w  # assume one bit per channel; scalar means all
            else:
                v = int(wvalid.value)
                if wready is None:
                    r_mask = (1 if v else 0)  # no ready -> treat as always ready for asserted channels
                else:
                    r_raw = int(wready.value)
                    r_mask = r_raw if _width(wready) > 1 else (0xF if r_raw else 0)
                accepted_mask = v & r_mask

            for ch in range(num_ch):
                ch_accepted = ((accepted_mask >> ch) & 1) != 0
                if ch_accepted:
                    a = int(addr[ch].value) & 0xFF
                    d = int(wdata[ch].value) & 0xFF
                    self.ap.write({"addr": a, "data": d, "ch": ch})
                else:
                    # Lightweight debugging for first few misses to help diagnose
                    if self._debug_shown < 12:
                        v = int(wvalid.value)
                        r = int(wready.value) if wready is not None else -1
                        self._debug_shown += 1
                        self.logger.debug(
                            f"[WRITE-MON] skipped ch{ch}: valid={((v>>ch)&1)}, "
                            f"ready={'-' if wready is None else ((r>>ch)&1 if _width(wready)>1 else r)}, "
                            f"we={'-' if we is None else ((int(we.value)>>ch)&1)}, "
                            f"addr=0x{int(addr[ch].value)&0xFF:02x}, data=0x{int(wdata[ch].value)&0xFF:02x}"
                        )
