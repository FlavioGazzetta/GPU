`timescale 1ns/1ps
`default_nettype none

module tb_top;
  import uvm_pkg::*; `include "uvm_macros.svh"
  // If you have your UVM pkg already, pull it in so run_test finds the test.
  // import gpu_pkg::*;

  // ----------------------------------------------------------------
  // Clock / Reset
  // ----------------------------------------------------------------
  bit clk   = 1'b0;
  bit reset = 1'b1;
  always #5 clk = ~clk;  // 100 MHz

  // ----------------------------------------------------------------
  // Match gpu.sv parameters (you can override via plusargs later)
  // ----------------------------------------------------------------
  localparam int DATA_MEM_ADDR_BITS       = 8;
  localparam int DATA_MEM_DATA_BITS       = 8;
  localparam int DATA_MEM_NUM_CHANNELS    = 4;
  localparam int PROGRAM_MEM_ADDR_BITS    = 8;
  localparam int PROGRAM_MEM_DATA_BITS    = 16;
  localparam int PROGRAM_MEM_NUM_CHANNELS = 1;
  localparam int NUM_CORES                = 2;
  localparam int THREADS_PER_BLOCK        = 4;

  // ----------------------------------------------------------------
  // DUT <-> External world signals (exactly as in gpu.sv)
  // ----------------------------------------------------------------

  // Kernel control
  logic start;
  logic done;

  // Device Control Register (threads, etc.)
  logic        device_control_write_enable;
  logic [7:0]  device_control_data;

  // Program Memory (multi-channel read-only)
  logic [PROGRAM_MEM_NUM_CHANNELS-1:0]              program_mem_read_valid;
  logic [PROGRAM_MEM_ADDR_BITS-1:0]                 program_mem_read_address  [PROGRAM_MEM_NUM_CHANNELS];
  logic [PROGRAM_MEM_NUM_CHANNELS-1:0]              program_mem_read_ready;
  logic [PROGRAM_MEM_DATA_BITS-1:0]                 program_mem_read_data     [PROGRAM_MEM_NUM_CHANNELS];

  // Data Memory (multi-channel read/write)
  logic [DATA_MEM_NUM_CHANNELS-1:0]                 data_mem_read_valid;
  logic [DATA_MEM_ADDR_BITS-1:0]                    data_mem_read_address     [DATA_MEM_NUM_CHANNELS];
  logic [DATA_MEM_NUM_CHANNELS-1:0]                 data_mem_read_ready;
  logic [DATA_MEM_DATA_BITS-1:0]                    data_mem_read_data        [DATA_MEM_NUM_CHANNELS];

  logic [DATA_MEM_NUM_CHANNELS-1:0]                 data_mem_write_valid;
  logic [DATA_MEM_ADDR_BITS-1:0]                    data_mem_write_address    [DATA_MEM_NUM_CHANNELS];
  logic [DATA_MEM_DATA_BITS-1:0]                    data_mem_write_data       [DATA_MEM_NUM_CHANNELS];
  logic [DATA_MEM_NUM_CHANNELS-1:0]                 data_mem_write_ready;

  // ----------------------------------------------------------------
  // Simple external memories (per your controller handshakes)
  //  - Program memory: ROM-like (loadable via tasks/backdoor)
  //  - Data memory: byte-addressed RAM
  //  Each channel responds independently with 1-cycle latency.
  // ----------------------------------------------------------------
  localparam int PMEM_DEPTH = 1 << PROGRAM_MEM_ADDR_BITS;
  localparam int DMEM_DEPTH = 1 << DATA_MEM_ADDR_BITS;

  logic [PROGRAM_MEM_DATA_BITS-1:0] pmem [0:PMEM_DEPTH-1];
  logic [DATA_MEM_DATA_BITS-1:0]    dmem [0:DMEM_DEPTH-1];

  // Program memory: 1-cycle read response per channel
  genvar pch;
  generate
    for (pch = 0; pch < PROGRAM_MEM_NUM_CHANNELS; pch++) begin : g_pmem
      always_ff @(posedge clk) begin
        program_mem_read_ready[pch] <= 1'b0;
        if (program_mem_read_valid[pch]) begin
          program_mem_read_data[pch]  <= pmem[ program_mem_read_address[pch] ];
          program_mem_read_ready[pch] <= 1'b1;
        end
      end
    end
  endgenerate

  // Data memory: 1-cycle read & write handshakes per channel
  genvar dch;
  generate
    for (dch = 0; dch < DATA_MEM_NUM_CHANNELS; dch++) begin : g_dmem
      // READ
      always_ff @(posedge clk) begin
        data_mem_read_ready[dch] <= 1'b0;
        if (data_mem_read_valid[dch]) begin
          data_mem_read_data[dch]  <= dmem[ data_mem_read_address[dch] ];
          data_mem_read_ready[dch] <= 1'b1;
        end
      end
      // WRITE
      always_ff @(posedge clk) begin
        data_mem_write_ready[dch] <= 1'b0;
        if (data_mem_write_valid[dch]) begin
          dmem[ data_mem_write_address[dch] ] <= data_mem_write_data[dch];
          data_mem_write_ready[dch] <= 1'b1;
        end
      end
    end
  endgenerate

  // ----------------------------------------------------------------
  // Handy backdoor tasks for UVM sequences (optional)
  //  You can call these via hierarchical path from sequences/tests:
  //    tb_top.pmem_write(adr, data16);
  //    tb_top.dmem_poke(adr, data8);
  //    int v = tb_top.dmem_peek(adr);
  // ----------------------------------------------------------------
  task automatic pmem_write (int addr, logic [PROGRAM_MEM_DATA_BITS-1:0] data);
    if (addr >= 0 && addr < PMEM_DEPTH) pmem[addr] = data;
  endtask

  task automatic dmem_poke (int addr, byte data);
    if (addr >= 0 && addr < DMEM_DEPTH) dmem[addr] = data;
  endtask

  function automatic byte dmem_peek (int addr);
    if (addr >= 0 && addr < DMEM_DEPTH) return dmem[addr];
    return '0;
  endfunction

  // Pulse start; expose as a task for convenience
  task automatic kick_kernel();
    @(posedge clk); start <= 1'b1;
    @(posedge clk); start <= 1'b0;
  endtask

  // Set device control register (threads); exposes a clean pulse
  task automatic set_thread_count(byte th);
    device_control_data          <= th;
    device_control_write_enable  <= 1'b1;
    @(posedge clk);
    device_control_write_enable  <= 1'b0;
  endtask

  // ----------------------------------------------------------------
  // DUT instance (parameters default to the same as locals above)
  // ----------------------------------------------------------------
  gpu #(
    .DATA_MEM_ADDR_BITS      (DATA_MEM_ADDR_BITS),
    .DATA_MEM_DATA_BITS      (DATA_MEM_DATA_BITS),
    .DATA_MEM_NUM_CHANNELS   (DATA_MEM_NUM_CHANNELS),
    .PROGRAM_MEM_ADDR_BITS   (PROGRAM_MEM_ADDR_BITS),
    .PROGRAM_MEM_DATA_BITS   (PROGRAM_MEM_DATA_BITS),
    .PROGRAM_MEM_NUM_CHANNELS(PROGRAM_MEM_NUM_CHANNELS),
    .NUM_CORES               (NUM_CORES),
    .THREADS_PER_BLOCK       (THREADS_PER_BLOCK)
  ) dut (
    .clk   (clk),
    .reset (reset),

    // Kernel Execution
    .start (start),
    .done  (done),

    // DCR
    .device_control_write_enable(device_control_write_enable),
    .device_control_data        (device_control_data),

    // Program Memory
    .program_mem_read_valid   (program_mem_read_valid),
    .program_mem_read_address (program_mem_read_address),
    .program_mem_read_ready   (program_mem_read_ready),
    .program_mem_read_data    (program_mem_read_data),

    // Data Memory
    .data_mem_read_valid    (data_mem_read_valid),
    .data_mem_read_address  (data_mem_read_address),
    .data_mem_read_ready    (data_mem_read_ready),
    .data_mem_read_data     (data_mem_read_data),
    .data_mem_write_valid   (data_mem_write_valid),
    .data_mem_write_address (data_mem_write_address),
    .data_mem_write_data    (data_mem_write_data),
    .data_mem_write_ready   (data_mem_write_ready)
  );

  // ----------------------------------------------------------------
  // Power-on & UVM launch
  //  - You can pre-load pmem/dmem here or in your UVM sequence (backdoor tasks)
  // ----------------------------------------------------------------
  initial begin
    // defaults
    start                          = 1'b0;
    device_control_write_enable    = 1'b0;
    device_control_data            = '0;

    // optional: clear memories
    foreach (pmem[i]) pmem[i] = '0;
    foreach (dmem[i]) dmem[i] = '0;

    // Reset sequence
    repeat (5) @(posedge clk);
    reset = 1'b0;

    // Launch UVM (override with +UVM_TESTNAME=...)
    run_test("gpu_smoke_test");
  end

endmodule

`default_nettype wire
