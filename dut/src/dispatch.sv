`default_nettype none
`timescale 1ns/1ns

// ============================================================
//  DISPATCH UNIT (latch-free, width-safe, debug-friendly)
// ============================================================

module dispatch #(
    parameter int NUM_CORES          = 2,
    parameter int THREADS_PER_BLOCK  = 4
) (
    input  logic clk,
    input  logic reset,
    input  logic start,

    // Kernel Metadata
    input  logic [7:0] thread_count,

    // Core States
    input  logic [NUM_CORES-1:0]                          core_done,
    output logic [NUM_CORES-1:0]                          core_start,
    output logic [NUM_CORES-1:0]                          core_reset,
    output logic [7:0]                                    core_block_id     [NUM_CORES],
    output logic [$clog2(THREADS_PER_BLOCK):0]            core_thread_count [NUM_CORES],

    // Kernel Execution
    output logic done
);

    // --------------------------------------------------------
    // State registers
    // --------------------------------------------------------
    logic [7:0] total_blocks;

    logic [7:0] blocks_dispatched, blocks_done;
    logic [7:0] bd_next, bn_next;

    logic [NUM_CORES-1:0] core_busy, core_busy_next;
    logic [NUM_CORES-1:0] core_start_r, core_start_next;
    logic [NUM_CORES-1:0] core_reset_r, core_reset_next;

    // Register the per-core metadata to avoid latches
    logic [7:0]                                   core_block_id_r     [NUM_CORES];
    logic [$clog2(THREADS_PER_BLOCK):0]           core_thread_count_r [NUM_CORES];
    logic [7:0]                                   core_block_id_next     [NUM_CORES];
    logic [$clog2(THREADS_PER_BLOCK):0]           core_thread_count_next [NUM_CORES];

    logic done_r, done_next;
    logic start_execution;

    // Drive outputs from registered state
    assign core_start        = core_start_r;
    assign core_reset        = core_reset_r;
    assign core_block_id     = core_block_id_r;
    assign core_thread_count = core_thread_count_r;
    assign done              = done_r;

    // --------------------------------------------------------
    // 8-bit safe computation of total blocks
    // --------------------------------------------------------
    assign total_blocks = (thread_count + 8'(THREADS_PER_BLOCK) - 8'd1) / 8'(THREADS_PER_BLOCK);

    // --------------------------------------------------------
    // Combinational next-state logic
    // --------------------------------------------------------
    always_comb begin
        // Defaults: hold current registered values
        bd_next              = blocks_dispatched;
        bn_next              = blocks_done;

        core_start_next      = '0;                 // one-cycle pulse
        core_reset_next      = core_reset_r;       // usually held then toggled
        core_busy_next       = core_busy;
        done_next            = done_r;

        // Default next = current for registered arrays (prevents latches)
        for (int i = 0; i < NUM_CORES; i++) begin
            core_block_id_next[i]     = core_block_id_r[i];
            core_thread_count_next[i] = core_thread_count_r[i];
        end

        // Dispatch new work on cores released from reset
        for (int i = 0; i < NUM_CORES; i++) begin
            if (core_reset_r[i]) begin
                core_reset_next[i] = 1'b0;

                if (bd_next < total_blocks) begin
                    core_start_next[i]      = 1'b1;
                    core_busy_next[i]       = 1'b1;

                    // Assign metadata
                    core_block_id_next[i]   = bd_next;
                    core_thread_count_next[i] = $bits(core_thread_count_next[i])'(
                        (bd_next == total_blocks - 8'd1)
                            ? (thread_count - (bd_next * 8'(THREADS_PER_BLOCK)))
                            : 8'(THREADS_PER_BLOCK)
                    );

`ifdef DEBUG_LOG
                    $display("[%0t][DISPATCH] core=%0d START block_id=%0d threads=%0d total_blocks=%0d",
                             $time, i, bd_next,
                             (bd_next == total_blocks - 8'd1)
                               ? (thread_count - (bd_next * 8'(THREADS_PER_BLOCK)))
                               : 8'(THREADS_PER_BLOCK),
                             total_blocks);
`endif
                    bd_next = bd_next + 8'd1;
                end
            end
        end

        // Handle completions
        for (int i = 0; i < NUM_CORES; i++) begin
            if (core_busy[i] && core_done[i]) begin
                core_reset_next[i] = 1'b1;
                core_start_next[i] = 1'b0;
                core_busy_next[i]  = 1'b0;
                bn_next            = bn_next + 8'd1;

`ifdef DEBUG_LOG
                $display("[%0t][DISPATCH] core=%0d DONE blocks_done=%0d/%0d",
                         $time, i, bn_next, total_blocks);
`endif
            end
        end

        // Mark kernel completion
        if (bn_next == total_blocks)
            done_next = 1'b1;
    end

    // --------------------------------------------------------
    // Sequential state update
    // --------------------------------------------------------
    always_ff @(posedge clk) begin
        if (reset) begin
            blocks_dispatched <= '0;
            blocks_done       <= '0;

            core_busy         <= '0;
            core_start_r      <= '0;
            core_reset_r      <= {NUM_CORES{1'b1}}; // hold cores in reset at power-up

            done_r            <= 1'b0;
            start_execution   <= 1'b0;

            foreach (core_block_id_r[i])     core_block_id_r[i]     <= '0;
            foreach (core_thread_count_r[i]) core_thread_count_r[i] <= THREADS_PER_BLOCK[$bits(core_thread_count_r[i])-1:0];

        end else if (start) begin
            // pseudo-posedge(start) to initialize a run
            if (!start_execution)
                start_execution <= 1'b1;

            // Register transitions
            blocks_dispatched <= bd_next;
            blocks_done       <= bn_next;

            core_busy         <= core_busy_next;
            core_start_r      <= core_start_next;
            core_reset_r      <= core_reset_next;

            done_r            <= done_next;

            for (int i = 0; i < NUM_CORES; i++) begin
                core_block_id_r[i]     <= core_block_id_next[i];
                core_thread_count_r[i] <= core_thread_count_next[i];
            end
        end
    end

endmodule
