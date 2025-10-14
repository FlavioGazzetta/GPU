`default_nettype none
`timescale 1ns/1ns

// MEMORY CONTROLLER
// > Receives memory requests from all cores
// > Throttles requests based on limited external memory bandwidth
// > Waits for responses from external memory and distributes them back to cores
module controller #(
    parameter int ADDR_BITS     = 8,
    parameter int DATA_BITS     = 16,
    parameter int NUM_CONSUMERS = 4, // The number of consumers accessing memory through this controller
    parameter int NUM_CHANNELS  = 1, // The number of concurrent channels available to send requests to global memory
    parameter bit WRITE_ENABLE  = 1  // Whether this memory controller can write to memory (program memory is read-only)
) (
    input  logic clk,
    input  logic reset,

    // Consumer Interface (Fetchers / LSUs)
    input  logic [NUM_CONSUMERS-1:0]                        consumer_read_valid,
    input  logic [ADDR_BITS-1:0]                            consumer_read_address [NUM_CONSUMERS],
    output logic [NUM_CONSUMERS-1:0]                        consumer_read_ready,
    output logic [DATA_BITS-1:0]                            consumer_read_data   [NUM_CONSUMERS],
    input  logic [NUM_CONSUMERS-1:0]                        consumer_write_valid,
    input  logic [ADDR_BITS-1:0]                            consumer_write_address[NUM_CONSUMERS],
    input  logic [DATA_BITS-1:0]                            consumer_write_data  [NUM_CONSUMERS],
    output logic [NUM_CONSUMERS-1:0]                        consumer_write_ready,

    // Memory Interface (Data / Program)
    output logic [NUM_CHANNELS-1:0]                         mem_read_valid,
    output logic [ADDR_BITS-1:0]                            mem_read_address [NUM_CHANNELS],
    input  logic [NUM_CHANNELS-1:0]                         mem_read_ready,
    input  logic [DATA_BITS-1:0]                            mem_read_data   [NUM_CHANNELS],
    output logic [NUM_CHANNELS-1:0]                         mem_write_valid,
    output logic [ADDR_BITS-1:0]                            mem_write_address[NUM_CHANNELS],
    output logic [DATA_BITS-1:0]                            mem_write_data  [NUM_CHANNELS],
    input  logic [NUM_CHANNELS-1:0]                         mem_write_ready
);
    localparam logic [2:0] IDLE          = 3'b000,
                           READ_WAITING  = 3'b010,
                           WRITE_WAITING = 3'b011,
                           READ_RELAYING = 3'b100,
                           WRITE_RELAYING= 3'b101;

    // Keep track of state for each channel and which jobs each channel is handling
    logic [2:0] controller_state [NUM_CHANNELS];
    logic [$clog2(NUM_CONSUMERS)-1:0] current_consumer [NUM_CHANNELS]; // Which consumer is each channel currently serving
    logic [NUM_CONSUMERS-1:0]         channel_serving_consumer;        // Which consumers are being served (one channel each)

    // Sequential logic only; no behavior changes
    always_ff @(posedge clk) begin
        if (reset) begin
            mem_read_valid  <= '0;
            mem_write_valid <= '0;
            consumer_read_ready  <= '0;
            consumer_write_ready <= '0;
            channel_serving_consumer <= '0;

            // Zero unpacked arrays with foreach (required for SV/Verilator)
            foreach (mem_read_address[i])   mem_read_address[i]   <= '0;
            foreach (mem_write_address[i])  mem_write_address[i]  <= '0;
            foreach (mem_write_data[i])     mem_write_data[i]     <= '0;
            foreach (consumer_read_data[i]) consumer_read_data[i] <= '0;

            foreach (current_consumer[i])   current_consumer[i]   <= '0;
            foreach (controller_state[i])   controller_state[i]   <= '0; // IDLE == 3'b000
        end else begin
            // For each channel, we handle processing concurrently
            for (int i = 0; i < NUM_CHANNELS; i++) begin
                unique case (controller_state[i])
                    IDLE: begin
                        // While this channel is idle, cycle through consumers looking for one with a pending request
                        for (int j = 0; j < NUM_CONSUMERS; j++) begin
                            if (consumer_read_valid[j] && !channel_serving_consumer[j]) begin
                                channel_serving_consumer[j] <= 1'b1;
                                // width-safe cast of loop index
                                current_consumer[i]         <= $bits(current_consumer[i])'(j);

                                mem_read_valid[i]           <= 1'b1;
                                mem_read_address[i]         <= consumer_read_address[j];
                                controller_state[i]         <= READ_WAITING;

                                // Once we find a pending request, pick it up with this channel and stop looking for requests
                                break;
                            end else if (consumer_write_valid[j] && !channel_serving_consumer[j]) begin
                                channel_serving_consumer[j] <= 1'b1;
                                // width-safe cast of loop index
                                current_consumer[i]         <= $bits(current_consumer[i])'(j);

                                mem_write_valid[i]          <= 1'b1;
                                mem_write_address[i]        <= consumer_write_address[j];
                                mem_write_data[i]           <= consumer_write_data[j];
                                controller_state[i]         <= WRITE_WAITING;

                                // Once we find a pending request, pick it up with this channel and stop looking for requests
                                break;
                            end
                        end
                    end

                    READ_WAITING: begin
                        // Wait for response from memory for pending read request
                        if (mem_read_ready[i]) begin
                            mem_read_valid[i]                          <= 1'b0;
                            consumer_read_ready[current_consumer[i]]   <= 1'b1;
                            consumer_read_data[current_consumer[i]]    <= mem_read_data[i];
                            controller_state[i]                        <= READ_RELAYING;
                        end
                    end

                    WRITE_WAITING: begin
                        // Wait for response from memory for pending write request
                        if (mem_write_ready[i]) begin
                            mem_write_valid[i]                         <= 1'b0;
                            consumer_write_ready[current_consumer[i]]  <= 1'b1;
                            controller_state[i]                        <= WRITE_RELAYING;
                        end
                    end

                    // Wait until consumer acknowledges it received response, then reset
                    READ_RELAYING: begin
                        if (!consumer_read_valid[current_consumer[i]]) begin
                            channel_serving_consumer[current_consumer[i]] <= 1'b0;
                            consumer_read_ready[current_consumer[i]]      <= 1'b0;
                            controller_state[i]                           <= IDLE;
                        end
                    end

                    WRITE_RELAYING: begin
                        if (!consumer_write_valid[current_consumer[i]]) begin
                            channel_serving_consumer[current_consumer[i]] <= 1'b0;
                            consumer_write_ready[current_consumer[i]]      <= 1'b0;
                            controller_state[i]                            <= IDLE;
                        end
                    end
                endcase
            end
        end
    end
endmodule
