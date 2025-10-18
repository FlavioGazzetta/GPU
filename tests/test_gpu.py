# tests/test_gpu.py

import cocotb
from cocotb.triggers import RisingEdge
from program_rom import demo_program
from pyuvm import uvm_root
from uvm_env import GpuTest  # ensure class is imported/registered so run_test can find it

CLK_PERIOD_NS = 10  # matches tb_top_stub.sv clock


def _width_of(sig):
    try:
        return sig.value.n_bits
    except Exception:
        return 1


async def reset_and_config(dut, threads=4):
    # Wait a few cycles, then release reset driven in tb_top_stub
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.reset.value = 0

    # Write DCR (thread_count) for one full cycle (matches C++ harness)
    dut.device_control_data.value = threads & 0xFF
    dut.device_control_write_enable.value = 1
    await RisingEdge(dut.clk)
    dut.device_control_write_enable.value = 0


async def program_memory_model(dut, program):
    ch = 0
    rr_w = _width_of(dut.program_mem_read_ready)
    # Clear initial
    dut.program_mem_read_ready.value = 0
    dut.program_mem_read_data[ch].value = 0

    while True:
        await RisingEdge(dut.clk)
        rv = int(dut.program_mem_read_valid.value)
        if (rv & 1):
            addr = int(dut.program_mem_read_address[ch].value) & 0xFF
            dut.program_mem_read_data[ch].value = program[addr] & 0xFFFF
            dut.program_mem_read_ready.value = 1 if rr_w == 1 else 0b1
        else:
            dut.program_mem_read_ready.value = 0
            dut.program_mem_read_data[ch].value = 0


async def data_memory_model(dut, depth=256):
    """Multi-channel data memory model: handle packed valid/ready vectors."""
    NUM_CH = len(dut.data_mem_read_address)
    mem = [0] * depth
    rready_w = _width_of(dut.data_mem_read_ready)
    wready_w = _width_of(dut.data_mem_write_ready)

    # Clear initial
    dut.data_mem_read_ready.value  = 0
    dut.data_mem_write_ready.value = 0
    for ch in range(NUM_CH):
        dut.data_mem_read_data[ch].value = 0

    while True:
        await RisingEdge(dut.clk)
        read_valid_vec  = int(dut.data_mem_read_valid.value)
        write_valid_vec = int(dut.data_mem_write_valid.value)
        rmask = 0
        wmask = 0

        # Loads
        for ch in range(NUM_CH):
            dut.data_mem_read_data[ch].value = 0  # keep bus clean by default
            if (read_valid_vec >> ch) & 1:
                addr = int(dut.data_mem_read_address[ch].value) % depth
                dut.data_mem_read_data[ch].value = mem[addr] & 0xFF
                rmask |= (1 << ch)
        dut.data_mem_read_ready.value = (1 if rmask else 0) if rready_w == 1 else rmask

        # Stores
        for ch in range(NUM_CH):
            if (write_valid_vec >> ch) & 1:
                addr = int(dut.data_mem_write_address[ch].value) % depth
                data = int(dut.data_mem_write_data[ch].value) & 0xFF
                mem[addr] = data
                wmask |= (1 << ch)
        dut.data_mem_write_ready.value = (1 if wmask else 0) if wready_w == 1 else wmask


@cocotb.test()
async def gpu_smoke(dut):
    # Clean initial drives
    dut.start.value = 0
    dut.device_control_write_enable.value = 0

    # Preload program ROM
    program = demo_program()

    # Start memory models
    cocotb.start_soon(program_memory_model(dut, program))
    cocotb.start_soon(data_memory_model(dut))

    # Release reset & configure
    await reset_and_config(dut, threads=4)

    # Hold start HIGH for the duration (match C++ harness)
    dut.start.value = 1

    # Run the registered PyUVM test by name (GpuTest is imported above)
    await uvm_root().run_test("GpuTest")

    # Drop start after UVM completes
    dut.start.value = 0

    # A small grace period
    for _ in range(5):
        await RisingEdge(dut.clk)

    dut._log.info("✅ Smoke test finished")
