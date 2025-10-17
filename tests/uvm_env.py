from pyuvm import uvm_component, uvm_sequence, uvm_driver, uvm_env, uvm_test
import cocotb
from cocotb.triggers import RisingEdge, Event, Timer

class DoneMonitor(uvm_component):
    def build_phase(self):
        self.done_seen = Event()

    async def run_phase(self):
        dut = cocotb.top
        while True:
            await RisingEdge(dut.clk)
            if int(dut.dut.done.value) == 1:
                self.logger.info("done=1 observed")
                self.done_seen.set()
                return

class GpuSeq(uvm_sequence):
    async def body(self):
        # sequences in pyuvm don't have .logger; keep it simple
        # (or use print("Launching GPU run"))
        return

class GpuDriver(uvm_driver):
    async def run_phase(self):
        await Timer(1, unit="ps")  # yield once

class GpuEnv(uvm_env):
    def build_phase(self):
        self.monitor = DoneMonitor("monitor", self)
        self.driver  = GpuDriver("driver", self)

class GpuTest(uvm_test):
    def build_phase(self):
        self.env = GpuEnv("env", self)

    async def run_phase(self):
        seq = GpuSeq.create("seq")
        await seq.start(None)
        await self.env.monitor.done_seen.wait()
        self.logger.info("GPU completed")
