import cocotb
from pyuvm import uvm_root, ConfigDB

# Pull in the UVM tests (classes) so pyuvm can construct them by name
from uvm_sequences import (
    TestALU,
    TestLSU,
    TestBranchTaken,
    TestBranchNotTaken,
    TestTailThreads,
    TestControllerLatency,
    #TestPrefetch,
)

def _prep(dut):
    # Make DUT visible to all descendants; set at multiple scopes for safety.
    ConfigDB().set(None, "*", "dut", dut)
    ConfigDB().set(None, "uvm_test_top", "dut", dut)
    ConfigDB().set(None, "uvm_test_top.*", "dut", dut)

@cocotb.test()
async def uvm_alu(dut):
    _prep(dut)
    await uvm_root().run_test("TestALU")

@cocotb.test()
async def uvm_lsu(dut):
    _prep(dut)
    await uvm_root().run_test("TestLSU")

@cocotb.test()
async def uvm_branch_taken(dut):
    _prep(dut)
    await uvm_root().run_test("TestBranchTaken")

@cocotb.test()
async def uvm_branch_not_taken(dut):
    _prep(dut)
    await uvm_root().run_test("TestBranchNotTaken")

@cocotb.test()
async def uvm_tail_threads(dut):
    _prep(dut)
    await uvm_root().run_test("TestTailThreads")

@cocotb.test()
async def uvm_ctrl_latency(dut):
    _prep(dut)
    await uvm_root().run_test("TestControllerLatency")

# @cocotb.test()
# async def uvm_prefetch(dut):
#     _prep(dut)
#     await uvm_root().run_test("TestPrefetch")
