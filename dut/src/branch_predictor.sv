`default_nettype none
`timescale 1ns/1ns

// Simple per-core branch predictor:
// - 2-bit BHT (weak-N as reset)
// - direct-mapped BTB (target cache)
// Query at DECODE; update at UPDATE.

module branch_predictor #(
  parameter int PC_BITS   = 8,
  parameter int BHT_BITS  = 6,                      // 64-entry BHT
  parameter int BHT_SIZE  = (1 << BHT_BITS),
  parameter int BTB_SIZE  = 64                      // 64-entry BTB (direct-mapped)
) (
  input  logic                   clk,
  input  logic                   reset,

  // ---- Query (DECODE) ----
  input  logic                   q_valid,           // instruction is a branch
  input  logic [PC_BITS-1:0]     q_pc,              // branch PC
  input  logic [PC_BITS-1:0]     q_target,          // decoded absolute target
  output logic                   q_pred_taken,
  output logic [PC_BITS-1:0]     q_pred_target,

  // ---- Update (resolution at UPDATE) ----
  input  logic                   u_valid,
  input  logic [PC_BITS-1:0]     u_pc,              // branch PC
  input  logic                   u_taken,
  input  logic [PC_BITS-1:0]     u_target
);

  // 2-bit saturating counters: 00/01 = predict N, 10/11 = predict T
  logic [1:0] bht [BHT_SIZE];

  // Direct-mapped BTB (no tag for tiny PC)
  logic               btb_v [BTB_SIZE];
  logic [PC_BITS-1:0] btb_tgt [BTB_SIZE];

  function automatic logic [$clog2(BHT_SIZE)-1:0] bht_idx(input logic [PC_BITS-1:0] pc);
    return pc[$clog2(BHT_SIZE)-1:0]; // low bits
  endfunction

  function automatic logic [$clog2(BTB_SIZE)-1:0] btb_idx(input logic [PC_BITS-1:0] pc);
    return pc[$clog2(BTB_SIZE)-1:0];
  endfunction

  // Combinational query
  always_comb begin
    q_pred_taken  = 1'b0;
    q_pred_target = q_target;        // fallback
    if (q_valid) begin
      logic [1:0] c = bht[bht_idx(q_pc)];
      q_pred_taken = c[1];           // 10/11 => taken
      if (btb_v[btb_idx(q_pc)]) begin
        q_pred_target = btb_tgt[btb_idx(q_pc)];
      end
    end
  end

  // Train on UPDATE
  always_ff @(posedge clk) begin
    // Declare temps at the TOP of the block (Verilator-friendly)
    int unsigned i;
    int unsigned j;

    if (reset) begin
      for (int k = 0; k < BHT_SIZE; k++) bht[k] <= 2'b01; // weak N
      for (int m = 0; m < BTB_SIZE; m++) begin
        btb_v[m]   <= 1'b0;
        btb_tgt[m] <= '0;
      end
    end else if (u_valid) begin
      // Compute indices
      i = bht_idx(u_pc);
      j = btb_idx(u_pc);

      // BHT update
      unique case ({u_taken, bht[i]})
        // taken → increment
        3'b1_00: bht[i] <= 2'b01;
        3'b1_01: bht[i] <= 2'b10;
        3'b1_10: bht[i] <= 2'b11;
        3'b1_11: bht[i] <= 2'b11;
        // not-taken → decrement
        3'b0_00: bht[i] <= 2'b00;
        3'b0_01: bht[i] <= 2'b00;
        3'b0_10: bht[i] <= 2'b01;
        3'b0_11: bht[i] <= 2'b10;
      endcase

      // BTB update on taken
      if (u_taken) begin
        btb_v[j]   <= 1'b1;
        btb_tgt[j] <= u_target;
      end
    end
  end
endmodule
