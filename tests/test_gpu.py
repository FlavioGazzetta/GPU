# tests/test_gpu.py
import cocotb
from cocotb.triggers import RisingEdge
from program_rom import demo_program
from pyuvm import uvm_root
from uvm_env import GpuTest  # ensures class is imported/registered so run_test can find it


CLK_PERIOD_NS = 10  # matches tb_top_stub.sv clock

async def reset_and_config(dut, threads=4):
    # Wait a few cycles, then release reset driven in tb_top_stub
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.reset.value = 0

    # Write DCR (thread_count)
    dut.device_control_write_enable.value = 1
    dut.device_control_data.value = threads
    await RisingEdge(dut.clk)
    dut.device_control_write_enable.value = 0

async def start_kernel(dut):
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

async def program_memory_model(dut, program):
    ch = 0
    while True:
        await RisingEdge(dut.clk)
        if int(dut.program_mem_read_valid.value) == 1:
            addr = int(dut.program_mem_read_address[ch].value)
            dut.program_mem_read_data[ch].value = program[addr] & 0xFFFF
            dut.program_mem_read_ready.value = 1
        else:
            dut.program_mem_read_ready.value = 0

async def data_memory_model(dut, depth=256):
    """Multi-channel data memory model: handle packed valid/ready vectors."""
    NUM_CH = len(dut.data_mem_read_address)
    mem = [0] * depth

    while True:
        await RisingEdge(dut.clk)

        # Packed vectors → ints
        read_valid_vec  = int(dut.data_mem_read_valid.value)
        write_valid_vec = int(dut.data_mem_write_valid.value)

        # Default not ready; we’ll set bits if we service requests
        read_ready_vec  = 0
        write_ready_vec = 0

        # Loads
        for ch in range(NUM_CH):
            if (read_valid_vec >> ch) & 1:
                addr = int(dut.data_mem_read_address[ch].value) % depth
                dut.data_mem_read_data[ch].value = mem[addr] & 0xFF
                read_ready_vec |= (1 << ch)

        dut.data_mem_read_ready.value = read_ready_vec

        # Stores
        for ch in range(NUM_CH):
            if (write_valid_vec >> ch) & 1:
                addr = int(dut.data_mem_write_address[ch].value) % depth
                data = int(dut.data_mem_write_data[ch].value) & 0xFF
                mem[addr] = data
                write_ready_vec |= (1 << ch)

        dut.data_mem_write_ready.value = write_ready_vec

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

    # Kick off kernel
    await start_kernel(dut)

    # Run the registered PyUVM test by name (GpuTest is imported above)
    await uvm_root().run_test("GpuTest")

    # A small grace period
    for _ in range(5):
        await RisingEdge(dut.clk)

    dut._log.info("✅ Smoke test finished")
