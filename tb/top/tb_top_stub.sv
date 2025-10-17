`timescale 1ns/1ps
`default_nettype none

// -----------------------------------------------------------------------------
// Tiny-GPU Verilator + Cocotb Top-Level Stub
// -----------------------------------------------------------------------------
// This module instantiates the GPU DUT and exposes only simple top-level ports
// (clk, reset, start, done, DCR). The memories are left unconnected so cocotb
// can drive them through hierarchical handles or simple Python models.
// -----------------------------------------------------------------------------

module tb_top_stub;

  // ---------------------------------------------------------------------------
  // Clock / Reset / Control
  // ---------------------------------------------------------------------------
  logic clk;
  logic reset;
  logic start;
  logic done;

  // Device Control Register interface
  logic        device_control_write_enable;
  logic [7:0]  device_control_data;

  // ---------------------------------------------------------------------------
  // Program memory interface (1-channel)
  // ---------------------------------------------------------------------------
  logic                       program_mem_read_valid;
  logic [7:0]                 program_mem_read_address   [1];
  logic                       program_mem_read_ready;
  logic [15:0]                program_mem_read_data      [1];

  // ---------------------------------------------------------------------------
  // Data memory interface (4-channel)
  // ---------------------------------------------------------------------------
  logic [3:0]                 data_mem_read_valid;
  logic [7:0]                 data_mem_read_address      [4];
  logic [3:0]                 data_mem_read_ready;
  logic [7:0]                 data_mem_read_data         [4];
  logic [3:0]                 data_mem_write_valid;
  logic [7:0]                 data_mem_write_address     [4];
  logic [7:0]                 data_mem_write_data        [4];
  logic [3:0]                 data_mem_write_ready;

  // ---------------------------------------------------------------------------
  // GPU DUT
  // ---------------------------------------------------------------------------
  gpu dut (
    .clk(clk),
    .reset(reset),
    .start(start),
    .done(done),

    .device_control_write_enable(device_control_write_enable),
    .device_control_data(device_control_data),

    // Program memory
    .program_mem_read_valid   (program_mem_read_valid),
    .program_mem_read_address (program_mem_read_address),
    .program_mem_read_ready   (program_mem_read_ready),
    .program_mem_read_data    (program_mem_read_data),

    // Data memory
    .data_mem_read_valid      (data_mem_read_valid),
    .data_mem_read_address    (data_mem_read_address),
    .data_mem_read_ready      (data_mem_read_ready),
    .data_mem_read_data       (data_mem_read_data),
    .data_mem_write_valid     (data_mem_write_valid),
    .data_mem_write_address   (data_mem_write_address),
    .data_mem_write_data      (data_mem_write_data),
    .data_mem_write_ready     (data_mem_write_ready)
  );

  // ---------------------------------------------------------------------------
  // Clock generation
  // ---------------------------------------------------------------------------
  initial clk = 1'b0;
  always #5ns clk = ~clk;     // 100 MHz clock

  // ---------------------------------------------------------------------------
  // Reset sequence (optional for standalone runs)
  // Cocotb can drive reset; this is just a default power-on pulse.
  // ---------------------------------------------------------------------------
  initial begin
    reset = 1'b1;
    start = 1'b0;
    device_control_write_enable = 1'b0;
    device_control_data = '0;
    program_mem_read_ready = 1'b0;
    data_mem_read_ready    = '0;
    data_mem_write_ready   = '0;

    #20ns;
    reset = 1'b0;
  end

  // ---------------------------------------------------------------------------
  // Optional standalone stimulus (disabled when cocotb drives it)
  // Uncomment to sanity-check without Python
  // ---------------------------------------------------------------------------
  /*
  initial begin
    @(negedge reset);
    #50ns;
    device_control_write_enable = 1;
    device_control_data = 8'd8;   // 8 threads
    #10ns device_control_write_enable = 0;
    start = 1;
    #20ns start = 0;

    wait(done);
    $display("✅ GPU finished computation at %0t ns", $time);
    $finish;
  end
  */

endmodule

`default_nettype wire
