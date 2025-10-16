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
    localparam logic [2:0] IDLE     = 3'b000,
                           FETCHING = 3'b001,
                           FETCHED  = 3'b010;
    
    always_ff @(posedge clk) begin
        if (reset) begin
            fetcher_state   <= IDLE;
            mem_read_valid  <= 1'b0;
            mem_read_address<= '0;
            instruction     <= '0;
        end else begin
            unique case (fetcher_state)
                IDLE: begin
                    // Start fetching when core_state = FETCH
                    if (core_state == 3'b001) begin
                        fetcher_state   <= FETCHING;
                        mem_read_valid  <= 1'b1;
                        mem_read_address<= current_pc; // same behavior as original
                    end
                end
                FETCHING: begin
                    // Wait for response from program memory
                    if (mem_read_ready) begin
                        fetcher_state  <= FETCHED;
                        instruction    <= mem_read_data; // Store the instruction when received
                        mem_read_valid <= 1'b0;
                    end
                end
                FETCHED: begin
                    // Reset when core_state = DECODE
                    if (core_state == 3'b010) begin 
                        fetcher_state <= IDLE;
                    end
                end
            endcase
        end
    end
endmodule
