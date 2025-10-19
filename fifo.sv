`default_nettype none
`timescale 1ns/1ns

module sync_fifo #(
  parameter int DATA_WIDTH = 32,
  parameter int ADDR_WIDTH = 4   // depth = 2**ADDR_WIDTH
) (

    input  logic                     clk,
    input  logic                     rst_n,
    input  logic                     wr_en,
    input  logic [DATA_WIDTH-1:0]    wr_data,
    output logic                     full,
    input  logic                     rd_en,
    output logic [DATA_WIDTH-1:0]    rd_data,
    output logic                     empty

);

  localparam int DEPTH = 1 << ADDR_WIDTH;
  localparam int PTR_W = ADDR_WIDTH + 1; // extra wrap bit

  logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];

  // pointers
  logic [PTR_W-1:0] wptr, rptr;
  logic [PTR_W-1:0] wptr_n, rptr_n;

  // handy indices
  logic [ADDR_WIDTH-1:0] widx;
  logic [ADDR_WIDTH-1:0] ridx;

  // handshake fires
  logic wr_fire;
  logic rd_fire;

  // compute indices, fires, next pointers, and flags using logic-only style
  always_comb begin
    // handy slices
    widx = wptr[ADDR_WIDTH-1:0];
    ridx = rptr[ADDR_WIDTH-1:0];

    // handshake fires
    wr_fire = wr_en && !full;
    rd_fire = rd_en && !empty;

    // next pointers
    wptr_n = wptr + (wr_fire ? 1 : 0);
    rptr_n = rptr + (rd_fire ? 1 : 0);

    // flags
    empty  = (wptr == rptr);
    // if writer does an entire wrap over reader ==> wr = 1000 & rd = 0000 -> 1 != 0 but 000 = 000
    full   = (wptr[ADDR_WIDTH-1:0] == rptr[ADDR_WIDTH-1:0]) &&
             (wptr[ADDR_WIDTH]     != rptr[ADDR_WIDTH]);
  end

  //write logic
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      wptr <= '0;  // context-sized zero
    end else begin
      if (wr_fire) begin
        mem[widx] <= wr_data;  // write
      end
      wptr <= wptr_n;
    end
  end

  //read logic
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      rptr    <= '0;
      rd_data <= '0;
    end else begin
      if (rd_fire) begin
        rd_data <= mem[ridx];
      end
      rptr <= rptr_n;
    end
  end

endmodule

`default_nettype wire
