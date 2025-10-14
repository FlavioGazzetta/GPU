`default_nettype none
`timescale 1ns/1ns

// GPU
// > Built to use an external async memory with multi-channel read/write
// > Assumes that the program is loaded into program memory, data into data memory, and threads into
//   the device control register before the start signal is triggered
// > Has memory controllers to interface between external memory and its multiple cores
// > Configurable number of cores and thread capacity per core
module gpu #(
    parameter int DATA_MEM_ADDR_BITS       = 8,   // Number of bits in data memory address (256 rows)
    parameter int DATA_MEM_DATA_BITS       = 8,   // Number of bits in data memory value (8 bit data)
    parameter int DATA_MEM_NUM_CHANNELS    = 4,   // Number of concurrent channels for sending requests to data memory
    parameter int PROGRAM_MEM_ADDR_BITS    = 8,   // Number of bits in program memory address (256 rows)
    parameter int PROGRAM_MEM_DATA_BITS    = 16,  // Number of bits in program memory value (16 bit instruction)
    parameter int PROGRAM_MEM_NUM_CHANNELS = 1,   // Number of concurrent channels for sending requests to program memory
    parameter int NUM_CORES                = 2,   // Number of cores to include in this GPU
    parameter int THREADS_PER_BLOCK        = 4    // Number of threads to handle per block (per core)
) (
    input  logic clk,
    input  logic reset,

    // Kernel Execution
    input  logic start,
    output logic done,

    // Device Control Register
    input  logic       device_control_write_enable,
    input  logic [7:0] device_control_data,

    // Program Memory
    output logic [PROGRAM_MEM_NUM_CHANNELS-1:0]              program_mem_read_valid,
    output logic [PROGRAM_MEM_ADDR_BITS-1:0]                 program_mem_read_address [PROGRAM_MEM_NUM_CHANNELS],
    input  logic [PROGRAM_MEM_NUM_CHANNELS-1:0]              program_mem_read_ready,
    input  logic [PROGRAM_MEM_DATA_BITS-1:0]                 program_mem_read_data   [PROGRAM_MEM_NUM_CHANNELS],

    // Data Memory
    output logic [DATA_MEM_NUM_CHANNELS-1:0]                 data_mem_read_valid,
    output logic [DATA_MEM_ADDR_BITS-1:0]                    data_mem_read_address  [DATA_MEM_NUM_CHANNELS],
    input  logic [DATA_MEM_NUM_CHANNELS-1:0]                 data_mem_read_ready,
    input  logic [DATA_MEM_DATA_BITS-1:0]                    data_mem_read_data     [DATA_MEM_NUM_CHANNELS],
    output logic [DATA_MEM_NUM_CHANNELS-1:0]                 data_mem_write_valid,
    output logic [DATA_MEM_ADDR_BITS-1:0]                    data_mem_write_address [DATA_MEM_NUM_CHANNELS],
    output logic [DATA_MEM_DATA_BITS-1:0]                    data_mem_write_data    [DATA_MEM_NUM_CHANNELS],
    input  logic [DATA_MEM_NUM_CHANNELS-1:0]                 data_mem_write_ready
);
    // Control
    logic [7:0] thread_count;

    // Compute Core State
    logic [NUM_CORES-1:0]                           core_start;
    logic [NUM_CORES-1:0]                           core_reset;
    logic [NUM_CORES-1:0]                           core_done;
    logic [7:0]                                      core_block_id     [NUM_CORES];
    logic [$clog2(THREADS_PER_BLOCK):0]              core_thread_count [NUM_CORES];

    // LSU <> Data Memory Controller Channels
    localparam int NUM_LSUS = NUM_CORES * THREADS_PER_BLOCK;
    logic [NUM_LSUS-1:0]                             lsu_read_valid;
    logic [DATA_MEM_ADDR_BITS-1:0]                   lsu_read_address  [NUM_LSUS];
    logic [NUM_LSUS-1:0]                             lsu_read_ready;
    logic [DATA_MEM_DATA_BITS-1:0]                   lsu_read_data     [NUM_LSUS];
    logic [NUM_LSUS-1:0]                             lsu_write_valid;
    logic [DATA_MEM_ADDR_BITS-1:0]                   lsu_write_address [NUM_LSUS];
    logic [DATA_MEM_DATA_BITS-1:0]                   lsu_write_data    [NUM_LSUS];
    logic [NUM_LSUS-1:0]                             lsu_write_ready;

    // Fetcher <> Program Memory Controller Channels
    localparam int NUM_FETCHERS = NUM_CORES;
    logic [NUM_FETCHERS-1:0]                          fetcher_read_valid;
    logic [PROGRAM_MEM_ADDR_BITS-1:0]                 fetcher_read_address [NUM_FETCHERS];
    logic [NUM_FETCHERS-1:0]                          fetcher_read_ready;
    logic [PROGRAM_MEM_DATA_BITS-1:0]                 fetcher_read_data   [NUM_FETCHERS];
    
    // Device Control Register
    dcr dcr_instance (
        .clk(clk),
        .reset(reset),

        .device_control_write_enable(device_control_write_enable),
        .device_control_data(device_control_data),
        .thread_count(thread_count)
    );

    // Data Memory Controller
    controller #(
        .ADDR_BITS(DATA_MEM_ADDR_BITS),
        .DATA_BITS(DATA_MEM_DATA_BITS),
        .NUM_CONSUMERS(NUM_LSUS),
        .NUM_CHANNELS(DATA_MEM_NUM_CHANNELS)
    ) data_memory_controller (
        .clk(clk),
        .reset(reset),

        .consumer_read_valid (lsu_read_valid),
        .consumer_read_address(lsu_read_address),
        .consumer_read_ready (lsu_read_ready),
        .consumer_read_data  (lsu_read_data),
        .consumer_write_valid(lsu_write_valid),
        .consumer_write_address(lsu_write_address),
        .consumer_write_data (lsu_write_data),
        .consumer_write_ready(lsu_write_ready),

        .mem_read_valid (data_mem_read_valid),
        .mem_read_address(data_mem_read_address),
        .mem_read_ready (data_mem_read_ready),
        .mem_read_data  (data_mem_read_data),
        .mem_write_valid (data_mem_write_valid),
        .mem_write_address(data_mem_write_address),
        .mem_write_data  (data_mem_write_data),
        .mem_write_ready (data_mem_write_ready)
    );

    // Program Memory Controller (read-only; tie off write path)
    // Dummy signals to satisfy controller ports without changing behavior.
    logic [PROGRAM_MEM_NUM_CHANNELS-1:0]              pmc_mem_write_valid_dummy;
    logic [PROGRAM_MEM_ADDR_BITS-1:0]                 pmc_mem_write_address_dummy [PROGRAM_MEM_NUM_CHANNELS];
    logic [PROGRAM_MEM_DATA_BITS-1:0]                 pmc_mem_write_data_dummy    [PROGRAM_MEM_NUM_CHANNELS];
    // If your external program memory exposes a write_ready, drive it as 0 (never ready) or 1 as you prefer.
    // It is unused because WRITE_ENABLE=0, but the controller still has the port.
    logic [PROGRAM_MEM_NUM_CHANNELS-1:0]              pmc_mem_write_ready_dummy;
    assign pmc_mem_write_ready_dummy = '0;

        controller #(
        .ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
        .DATA_BITS(PROGRAM_MEM_DATA_BITS),
        .NUM_CONSUMERS(NUM_FETCHERS),
        .NUM_CHANNELS(PROGRAM_MEM_NUM_CHANNELS),
        .WRITE_ENABLE(0)
    ) program_memory_controller (
        .clk   (clk),
        .reset (reset),

        // READ consumers (fetchers)
        .consumer_read_valid  (fetcher_read_valid),
        .consumer_read_address(fetcher_read_address),
        .consumer_read_ready  (fetcher_read_ready),
        .consumer_read_data   (fetcher_read_data),

        // Memory (program) read path
        .mem_read_valid (program_mem_read_valid),
        .mem_read_address(program_mem_read_address),
        .mem_read_ready (program_mem_read_ready),
        .mem_read_data  (program_mem_read_data),

        // ---- TIE OFF unused WRITE consumer side (important!) ----
        .consumer_write_valid   ('0),
        .consumer_write_address ('{default:'0}),
        .consumer_write_data    ('{default:'0}),
        .consumer_write_ready   (),   // ignore

        // ---- Dummy write path (already unused) ----
        .mem_write_valid (pmc_mem_write_valid_dummy),
        .mem_write_address(pmc_mem_write_address_dummy),
        .mem_write_data  (pmc_mem_write_data_dummy),
        .mem_write_ready (pmc_mem_write_ready_dummy)
    );


    // Dispatcher
    dispatch #(
        .NUM_CORES(NUM_CORES),
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
    ) dispatch_instance (
        .clk(clk),
        .reset(reset),
        .start(start),
        .thread_count(thread_count),
        .core_done(core_done),
        .core_start(core_start),
        .core_reset(core_reset),
        .core_block_id(core_block_id),
        .core_thread_count(core_thread_count),
        .done(done)
    );

    // Compute Cores
    genvar i;
    generate
        for (i = 0; i < NUM_CORES; i = i + 1) begin : cores
            // EDA: separate per-core LSU <-> controller signals to avoid slicing limits
            logic [THREADS_PER_BLOCK-1:0]              core_lsu_read_valid;
            logic [DATA_MEM_ADDR_BITS-1:0]             core_lsu_read_address  [THREADS_PER_BLOCK];
            logic [THREADS_PER_BLOCK-1:0]              core_lsu_read_ready;
            logic [DATA_MEM_DATA_BITS-1:0]             core_lsu_read_data     [THREADS_PER_BLOCK];
            logic [THREADS_PER_BLOCK-1:0]              core_lsu_write_valid;
            logic [DATA_MEM_ADDR_BITS-1:0]             core_lsu_write_address [THREADS_PER_BLOCK];
            logic [DATA_MEM_DATA_BITS-1:0]             core_lsu_write_data    [THREADS_PER_BLOCK];
            logic [THREADS_PER_BLOCK-1:0]              core_lsu_write_ready;

            // Pass through signals between LSUs and data memory controller
            genvar j;
            for (j = 0; j < THREADS_PER_BLOCK; j = j + 1) begin : lsu_xbar
                localparam int lsu_index = i * THREADS_PER_BLOCK + j;
                always_comb begin
                    // core → global
                    lsu_read_valid   [lsu_index] = core_lsu_read_valid[j];
                    lsu_read_address [lsu_index] = core_lsu_read_address[j];
                    lsu_write_valid  [lsu_index] = core_lsu_write_valid[j];
                    lsu_write_address[lsu_index] = core_lsu_write_address[j];
                    lsu_write_data   [lsu_index] = core_lsu_write_data[j];

                    // global → core
                    core_lsu_read_ready [j] = lsu_read_ready [lsu_index];
                    core_lsu_read_data  [j] = lsu_read_data  [lsu_index];
                    core_lsu_write_ready[j] = lsu_write_ready[lsu_index];
                    end
            end

            // Compute Core
            core #(
                .DATA_MEM_ADDR_BITS    (DATA_MEM_ADDR_BITS),
                .DATA_MEM_DATA_BITS    (DATA_MEM_DATA_BITS),
                .PROGRAM_MEM_ADDR_BITS (PROGRAM_MEM_ADDR_BITS),
                .PROGRAM_MEM_DATA_BITS (PROGRAM_MEM_DATA_BITS),
                .THREADS_PER_BLOCK     (THREADS_PER_BLOCK)
            ) core_instance (
                .clk   (clk),
                .reset (core_reset[i]),
                .start (core_start[i]),
                .done  (core_done[i]),
                .block_id    (core_block_id[i]),
                .thread_count(core_thread_count[i]),
                
                .program_mem_read_valid  (fetcher_read_valid[i]),
                .program_mem_read_address(fetcher_read_address[i]),
                .program_mem_read_ready  (fetcher_read_ready[i]),
                .program_mem_read_data   (fetcher_read_data[i]),

                .data_mem_read_valid   (core_lsu_read_valid),
                .data_mem_read_address (core_lsu_read_address),
                .data_mem_read_ready   (core_lsu_read_ready),
                .data_mem_read_data    (core_lsu_read_data),
                .data_mem_write_valid  (core_lsu_write_valid),
                .data_mem_write_address(core_lsu_write_address),
                .data_mem_write_data   (core_lsu_write_data),
                .data_mem_write_ready  (core_lsu_write_ready)
            );
        end
    endgenerate
endmodule
