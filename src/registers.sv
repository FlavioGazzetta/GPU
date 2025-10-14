`default_nettype none
`timescale 1ns/1ns

// REGISTER FILE
// > Each thread within each core has it's own register file with 13 free registers and 3 read-only registers
// > Read-only registers hold the familiar %blockIdx, %blockDim, and %threadIdx values critical to SIMD
module registers #(
    parameter int THREADS_PER_BLOCK = 4,
    parameter int THREAD_ID         = 0,
    parameter int DATA_BITS         = 8
) (
    input  logic clk,
    input  logic reset,
    input  logic enable, // If current block has less threads then block size, some registers will be inactive

    // Kernel Execution
    input  logic [7:0] block_id,

    // State
    input  logic [2:0] core_state,

    // Instruction Signals
    input  logic [3:0] decoded_rd_address,
    input  logic [3:0] decoded_rs_address,
    input  logic [3:0] decoded_rt_address,

    // Control Signals
    input  logic        decoded_reg_write_enable,
    input  logic [1:0]  decoded_reg_input_mux,
    input  logic [DATA_BITS-1:0] decoded_immediate,

    // Thread Unit Outputs
    input  logic [DATA_BITS-1:0] alu_out,
    input  logic [DATA_BITS-1:0] lsu_out,

    // Registers
    output logic [7:0] rs,
    output logic [7:0] rt
);
    localparam logic [1:0] ARITHMETIC = 2'b00,
                           MEMORY     = 2'b01,
                           CONSTANT   = 2'b10;

    // 16 registers per thread (13 free registers and 3 read-only registers)
    logic [7:0] registers [16];

    always_ff @(posedge clk) begin
        if (reset) begin
            // Empty rs, rt
            rs <= 8'd0;
            rt <= 8'd0;

            // Initialize all free registers
            registers[0]  <= 8'd0;
            registers[1]  <= 8'd0;
            registers[2]  <= 8'd0;
            registers[3]  <= 8'd0;
            registers[4]  <= 8'd0;
            registers[5]  <= 8'd0;
            registers[6]  <= 8'd0;
            registers[7]  <= 8'd0;
            registers[8]  <= 8'd0;
            registers[9]  <= 8'd0;
            registers[10] <= 8'd0;
            registers[11] <= 8'd0;
            registers[12] <= 8'd0;

            // Initialize read-only registers
            registers[13] <= 8'd0;                      // %blockIdx
            registers[14] <= THREADS_PER_BLOCK[7:0];    // %blockDim
            registers[15] <= THREAD_ID[7:0];            // %threadIdx
        end else if (enable) begin 
            // [Bad Solution] Shouldn't need to set this every cycle
            registers[13] <= block_id; // Update the block_id when a new block is issued from dispatcher
            
            // Fill rs/rt when core_state = REQUEST
            if (core_state == 3'b011) begin 
                rs <= registers[decoded_rs_address];
                rt <= registers[decoded_rt_address];
            end

            // Store rd when core_state = UPDATE
            if (core_state == 3'b110) begin 
                // Only allow writing to R0 - R12
                if (decoded_reg_write_enable && (decoded_rd_address < 4'd13)) begin
                    unique case (decoded_reg_input_mux)
                        ARITHMETIC: begin 
                            // ADD, SUB, MUL, DIV
                            registers[decoded_rd_address] <= alu_out[7:0];
                        end
                        MEMORY: begin 
                            // LDR
                            registers[decoded_rd_address] <= lsu_out[7:0];
                        end
                        CONSTANT: begin 
                            // CONST
                            registers[decoded_rd_address] <= decoded_immediate[7:0];
                        end
                        default: begin
                            // no change
                            registers[decoded_rd_address] <= registers[decoded_rd_address];
                        end
                    endcase
                end
            end
        end
        // When not enabled, hold state (matches original behavior)
    end
endmodule
