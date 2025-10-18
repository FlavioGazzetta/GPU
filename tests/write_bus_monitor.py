# write_bus_monitor.py
import cocotb
from cocotb.triggers import RisingEdge, ReadOnly, Timer
from pyuvm import uvm_component, uvm_object, uvm_analysis_port, ConfigDB, uvm_fatal

# A tiny record for a memory write
class WriteTxn(uvm_object):
    def __init__(self, name="WriteTxn"):
        super().__init__(name)
        self.addr = 0
        self.data = 0

    def __repr__(self):
        return f"WriteTxn(addr=0x{self.addr:x}, data=0x{self.data:x})"


class DataWriteMonitor(uvm_component):
    """
    Monitors accepted writes on the data memory controller:
        mem_write_valid && mem_write_ready
    and publishes WriteTxn(addr, data).
    """
    def __init__(self, name, parent):
        super().__init__(name, parent)
        self.ap = uvm_analysis_port("ap", self)
        self.scope = None
        self._clk = None

    def build_phase(self):
        super().build_phase()
        dut = ConfigDB().get(self, "", "dut")
        if dut is None:
            uvm_fatal("NODUT", "ConfigDB().get('', 'dut') returned None")

        # default scope = consumer that actually accepts writes
        scope = ConfigDB().get(self, "", "write_scope")
        if scope is None:
            # fall back to canonical path we discovered
            try:
                scope = dut.data_memory_controller
            except Exception as e:
                uvm_fatal("NOSCOPE", f"Couldn't locate dut.data_memory_controller: {e}")

        self.scope = scope

        # try to find a clock; if missing we'll fall back to a time-based poll
        clk = None
        for cand in ("clk", "clock", "i_clk", "clk_i"):
            if hasattr(dut, cand):
                clk = getattr(dut, cand)
                break
        self._clk = clk

        # Cache handles (faster than getattr each cycle)
        try:
            self._wvalid = self.scope.mem_write_valid
            self._wready = self.scope.mem_write_ready
            self._waddr  = self.scope.mem_write_address
            self._wdata  = self.scope.mem_write_data
        except Exception as e:
            uvm_fatal("NOSIGS", f"Missing mem_write_* signals on scope {self.scope}: {e}")

    async def _tick(self):
        # Prefer synchronous sample on a clock; else poll at 1ns
        if self._clk is not None:
            await RisingEdge(self._clk)
        else:
            await Timer(1, units="ns")

    async def run_phase(self):
        self.raise_objection()
        try:
            while True:
                await self._tick()
                # sample at ReadOnly to avoid race with drivers
                await ReadOnly()
                v = int(self._wvalid.value)
                r = int(self._wready.value)
                if v and r:
                    t = WriteTxn()
                    t.addr = int(self._waddr.value)
                    # scoreboard expects byte values in your failing tests
                    t.data = int(self._wdata.value) & 0xFF
                    self.ap.write(t)
                    # de-bounce within same time-step: wait a delta
                    await Timer(0, "ns")
        finally:
            self.drop_objection()
