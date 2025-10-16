`default_nettype none
`timescale 1ns/1ns

// LOAD-STORE UNIT
// > Handles asynchronous memory load and store operations and waits for response
// > Each thread in each core has its own LSU
// > LDR, STR instructions are executed here
module lsu (
    input  logic clk,
    input  logic reset,
    input  logic enable, // If current block has fewer threads than block size, some LSUs will be inactive

    // State
    input  logic [2:0] core_state,

    // Memory Control Signals
    input  logic decoded_mem_read_enable,
    input  logic decoded_mem_write_enable,

    // Registers
    input  logic [7:0] rs,
    input  logic [7:0] rt,

    // Data Memory
    output logic       mem_read_valid,
    output logic [7:0] mem_read_address,
    input  logic       mem_read_ready,
    input  logic [7:0] mem_read_data,
    output logic       mem_write_valid,
    output logic [7:0] mem_write_address,
    output logic [7:0] mem_write_data,
    input  logic       mem_write_ready,

    // LSU Outputs
    output logic [1:0] lsu_state,
    output logic [7:0] lsu_out
);
    localparam logic [1:0] IDLE = 2'b00,
                           REQUESTING = 2'b01,
                           WAITING = 2'b10,
                           DONE = 2'b11;

    always_ff @(posedge clk) begin
        if (reset) begin
            lsu_state         <= IDLE;
            lsu_out           <= 8'd0;
            mem_read_valid    <= 1'b0;
            mem_read_address  <= 8'd0;
            mem_write_valid   <= 1'b0;
            mem_write_address <= 8'd0;
            mem_write_data    <= 8'd0;
        end else if (enable) begin
            // If memory read enable is triggered (LDR instruction)
            if (decoded_mem_read_enable) begin
                case (lsu_state)
                    IDLE: begin
                        // Only read when core_state = REQUEST
                        if (core_state == 3'b011) begin
                            lsu_state <= REQUESTING;
                        end
                    end
                    REQUESTING: begin
                        mem_read_valid   <= 1'b1;
                        mem_read_address <= rs;
                        lsu_state        <= WAITING;
                    end
                    WAITING: begin
                        if (mem_read_ready == 1'b1) begin
                            mem_read_valid <= 1'b0;
                            lsu_out        <= mem_read_data;
                            lsu_state      <= DONE;
                        end
                    end
                    DONE: begin
                        // Reset when core_state = UPDATE
                        if (core_state == 3'b110) begin
                            lsu_state <= IDLE;
                        end
                    end
                endcase
            end

            // If memory write enable is triggered (STR instruction)
            if (decoded_mem_write_enable) begin
                case (lsu_state)
                    IDLE: begin
                        // Only write when core_state = REQUEST
                        if (core_state == 3'b011) begin
                            lsu_state <= REQUESTING;
                        end
                    end
                    REQUESTING: begin
                        mem_write_valid   <= 1'b1;
                        mem_write_address <= rs;
                        mem_write_data    <= rt;
                        lsu_state         <= WAITING;
                    end
                    WAITING: begin
                        if (mem_write_ready) begin
                            mem_write_valid <= 1'b0;
                            lsu_state       <= DONE;
                        end
                    end
                    DONE: begin
                        // Reset when core_state = UPDATE
                        if (core_state == 3'b110) begin
                            lsu_state <= IDLE;
                        end
                    end
                endcase
            end
        end
        // If not enabled, retain previous outputs/state (matches original behavior)
    end
endmodule
