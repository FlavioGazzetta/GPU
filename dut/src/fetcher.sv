`default_nettype none
`timescale 1ns/1ns

// INSTRUCTION FETCHER
// > Retrieves the instruction at the current PC from global data memory
// > Each core has it's own fetcher
module fetcher #(
    parameter int PROGRAM_MEM_ADDR_BITS = 8,
    parameter int PROGRAM_MEM_DATA_BITS = 16
) (
    input  logic clk,
    input  logic reset,

    input logic [PROGRAM_MEM_ADDR_BITS-1:0] spec_pc,
    input logic spec_en, //should be asserted during Decode
    
    // Execution State
    input  logic [2:0]                      core_state,
    input  logic [7:0]                      current_pc,

    // Program Memory
    output logic                            mem_read_valid,
    output logic [PROGRAM_MEM_ADDR_BITS-1:0] mem_read_address,
    input  logic                            mem_read_ready,
    input  logic [PROGRAM_MEM_DATA_BITS-1:0] mem_read_data,

    // Fetcher Output
    output logic [2:0]                      fetcher_state,
    output logic [PROGRAM_MEM_DATA_BITS-1:0] instruction
);
    localparam logic [2:0] IDLE = 3'b000, FETCHING = 3'b001, FETCHED = 3'b010;

    logic                                   p_valid;
    logic [PROGRAM_MEM_ADDR_BITS-1:0]       p_pc;
    logic [PROGRAM_MEM_DATA_BITS-1:0]       p_instr;

    // define a 1-bit enumeration txn_t with DEM = demand Fetch and PF = Prefetch
    typedef enum logic [0:0] {DEM, PF} txn_t;
    txn_t txn_kind;

    always_ff @(posedge clk) begin
        if (reset) begin
            fetcher_state    <= IDLE;
            mem_read_valid   <= 1'b0;
            mem_read_address <= '0;
            instruction      <= '0;

            p_valid          <= 1'b0;
            p_pc             <= '0;
            p_instr          <= '0;
            txn_kind         <= DEM;

        end else begin
            // -------------------------
            // Prefetcher (runs anytime)
            // -------------------------
            // Fire a prefetch when asked, if buffer empty and no demand fetch in progress.
            if (spec_en && !p_valid && (fetcher_state != FETCHING) && !mem_read_valid) begin
                mem_read_valid   <= 1'b1;
                mem_read_address <= spec_pc;
                txn_kind         <= PF;
            end

            // Complete any outstanding memory read
            if (mem_read_valid && mem_read_ready) begin
                mem_read_valid <= 1'b0;
                if (txn_kind == PF) begin
                    p_valid <= 1'b1;
                    p_pc    <= mem_read_address;
                    p_instr <= mem_read_data;
                end else begin
                    // demand fetch completion
                    instruction   <= mem_read_data;
                    fetcher_state <= FETCHED;
                end
            end

            // -------------------------
            // Demand fetch state machine
            // -------------------------
            unique case (fetcher_state)
                IDLE: begin
                    if (core_state == 3'b001 /* FETCH */) begin
                        // If we already have the right line prefetched, consume it immediately.
                        if (p_valid && (p_pc == current_pc)) begin
                            instruction   <= p_instr;
                            p_valid       <= 1'b0; // consume buffer
                            fetcher_state <= FETCHED;
                        end else begin
                            // Issue demand fetch
                            mem_read_valid   <= 1'b1;
                            mem_read_address <= current_pc;
                            txn_kind         <= DEM;
                            fetcher_state    <= FETCHING;
                        end
                    end
                end

                FETCHING: begin
                    // wait for mem_read_ready → handled above
                end

                FETCHED: begin
                    if (core_state == 3'b010 /* DECODE */) begin
                        fetcher_state <= IDLE;
                    end
                end
            endcase
        end
    end
endmodule
