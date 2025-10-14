`default_nettype none
`timescale 1ns/1ns

// SCHEDULER
// > Manages the entire control flow of a single compute core processing 1 block
// 1. FETCH  2. DECODE  3. REQUEST  4. WAIT  5. EXECUTE  6. UPDATE
// > No branch divergence (all threads assumed to converge)
module scheduler #(
    parameter int THREADS_PER_BLOCK = 4
) (
    input  logic clk,
    input  logic reset,
    input  logic start,
    
    // Control Signals
    input  logic       decoded_mem_read_enable,   // (kept for interface parity; behavior unchanged)
    input  logic       decoded_mem_write_enable,  // (unused here, as in original)
    input  logic       decoded_ret,

    // Memory Access State
    input  logic [2:0]              fetcher_state,
    input  logic [1:0]              lsu_state   [THREADS_PER_BLOCK],

    // Current & Next PC
    output logic [7:0]              current_pc,
    input  logic [7:0]              next_pc     [THREADS_PER_BLOCK],

    // Execution State
    output logic [2:0]              core_state,
    output logic                    done
);
    localparam logic [2:0] IDLE    = 3'b000, // Waiting to start
                           FETCH   = 3'b001, // Fetch instructions from program memory
                           DECODE  = 3'b010, // Decode instructions into control signals
                           REQUEST = 3'b011, // Trigger async LSU requests (if any)
                           WAIT    = 3'b100, // Wait for LSUs
                           EXECUTE = 3'b101, // Execute ALU/PC calculations
                           UPDATE  = 3'b110, // Update registers, NZP, and PC
                           DONE_S  = 3'b111; // Done executing this block

    always_ff @(posedge clk) begin 
        if (reset) begin
            current_pc <= 8'd0;
            core_state <= IDLE;
            done       <= 1'b0;
        end else begin 
            unique case (core_state)
                IDLE: begin
                    // Here after reset (before kernel is launched, or after previous block)
                    if (start) begin 
                        // Start by fetching the next instruction for this block based on PC
                        core_state <= FETCH;
                    end
                end

                FETCH: begin 
                    // Move on once fetcher_state = FETCHED
                    if (fetcher_state == 3'b010) begin 
                        core_state <= DECODE;
                    end
                end

                DECODE: begin
                    // Decode is synchronous so we move on after one cycle
                    core_state <= REQUEST;
                end

                REQUEST: begin 
                    // Request is synchronous so we move on after one cycle
                    core_state <= WAIT;
                end

                WAIT: begin
                    // Wait for all LSUs to finish their request before continuing
                    logic any_lsu_waiting;   // automatic inside block
                    any_lsu_waiting = 1'b0;
                    for (int i = 0; i < THREADS_PER_BLOCK; i++) begin
                        // Make sure no lsu_state = REQUESTING or WAITING
                        if (lsu_state[i] == 2'b01 || lsu_state[i] == 2'b10) begin
                            any_lsu_waiting = 1'b1;
                            break;
                        end
                    end

                    // If no LSU is waiting for a response, move onto the next stage
                    if (!any_lsu_waiting) begin
                        core_state <= EXECUTE;
                    end
                end

                EXECUTE: begin
                    // Execute is synchronous so we move on after one cycle
                    core_state <= UPDATE;
                end

                UPDATE: begin 
                if (decoded_ret) begin 
                    // If we reach a RET instruction, this block is done executing
                    done       <= 1'b1;
                    core_state <= DONE_S;
                end else begin 
                    // Use lane 0 (valid even when fewer than THREADS_PER_BLOCK are active)
                    current_pc <= next_pc[0];
                    core_state <= FETCH;
                end
                end


                DONE_S: begin 
                    // no-op (hold state)
                end
            endcase
        end
    end
endmodule
