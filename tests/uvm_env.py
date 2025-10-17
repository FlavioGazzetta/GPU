# tests/uvm_env.py
from pyuvm import (
    uvm_env, uvm_test, uvm_subscriber, uvm_component, ConfigDB
)
from agents import ProgramMemDriver, DataMemDriver
from monitors import InstrMonitor, DataWriteMonitor
from uvm_models import GpuCfg, ProgramMemModel, DataMemModel
import cocotb


class _RunCtl(uvm_component):
    async def run_phase(self):
        # keep the run phase alive for at least a tick
        self.raise_objection()
        import cocotb
        from cocotb.triggers import Timer
        await Timer(1, unit="ns")
        self.drop_objection()

class GpuScoreboard(uvm_subscriber):
    """
    Scoreboard implemented as a pyuvm uvm_subscriber.
    Monitors connect their uvm_analysis_port to self.analysis_export.
    """
    def build_phase(self):
        super().build_phase()
        self.expected = {}   # addr -> data
        self.seen     = {}   # addr -> data
        self.runctl = _RunCtl("runctl", self)

    def set_expected(self, exp_dict):
        self.expected = dict(exp_dict)

    def write(self, tr):
        # tr is {"addr": a, "data": d} from DataWriteMonitor
        a = tr["addr"]
        d = tr["data"]
        self.seen[a] = d

    def check_phase(self):
        # Verify expected writes at end of test
        for a, d in self.expected.items():
            got = self.seen.get(a, None)
            assert got == d, f"Scoreboard mismatch at mem[{a}]: exp 0x{d:02x}, got {got}"

class GpuEnv(uvm_env):
    def build_phase(self):
        super().build_phase()

        # Get DUT (fallback to cocotb.top if ConfigDB isn't set for this path)
        try:
            dut = ConfigDB().get(self, "", "dut")
        except Exception:
            dut = cocotb.top  # safe fallback

        # Discover channel counts
        num_prog_ch = len(dut.program_mem_read_address)
        num_data_ch = len(dut.data_mem_read_address)

        # Models + cfg
        self.cfg        = GpuCfg(num_prog_ch=num_prog_ch, num_data_ch=num_data_ch)
        self.prog_model = ProgramMemModel()
        self.data_model = DataMemModel()

        # Publish to children
        for k, v in [
            ("dut", dut),
            ("cfg", self.cfg),
            ("prog_model", self.prog_model),
            ("data_model", self.data_model),
        ]:
            ConfigDB().set(self, "*", k, v)

        # Components
        self.pm_drv    = ProgramMemDriver("pm_drv", self)
        self.dm_drv    = DataMemDriver("dm_drv", self)
        self.instr_mon = InstrMonitor("instr_mon", self)
        self.dw_mon    = DataWriteMonitor("dw_mon", self)
        self.sb        = GpuScoreboard("sb", self)

    def connect_phase(self):
        # Move connects here so child build_phase has completed
        self.dw_mon.ap.connect(self.sb.analysis_export)
        # instr_mon feeds coverage via coverage.sample_cov (optional, handled in monitors)

class GpuTest(uvm_test):
    """Base UVM test that builds env; subclasses implement do_run()."""
    def build_phase(self):
        super().build_phase()
        self.env = GpuEnv("env", self)

        # Ensure 'dut' is visible from this test scope downward even if the
        # cocotb-side prep ran before the UVM tree existed.
        try:
            _ = ConfigDB().get(self, "", "dut")
        except Exception:
            dut = cocotb.top
            ConfigDB().set(self, "*", "dut", dut)

