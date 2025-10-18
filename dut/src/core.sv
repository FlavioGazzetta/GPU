`default_nettype none
`timescale 1ns/1ns

// COMPUTE CORE
// > Handles processing 1 block at a time
// > The core also has its own scheduler to manage control flow
// > Each core contains 1 fetcher & decoder, and register files, ALUs, LSUs, PC for each thread
module core #(
    parameter int DATA_MEM_ADDR_BITS     = 8,
    parameter int DATA_MEM_DATA_BITS     = 8,
    parameter int PROGRAM_MEM_ADDR_BITS  = 8,
    parameter int PROGRAM_MEM_DATA_BITS  = 16,
    parameter int THREADS_PER_BLOCK      = 4
) (
    input  logic clk,
    input  logic reset,

    // Kernel Execution
    input  logic start,
    output logic done,

    // Block Metadata
    input  logic [7:0] block_id,
    input  logic [$clog2(THREADS_PER_BLOCK):0] thread_count,

    // Program Memory
    output logic                             program_mem_read_valid,
    output logic [PROGRAM_MEM_ADDR_BITS-1:0] program_mem_read_address,
    input  logic                             program_mem_read_ready,
    input  logic [PROGRAM_MEM_DATA_BITS-1:0] program_mem_read_data,

    // Data Memory
    output logic [THREADS_PER_BLOCK-1:0]                       data_mem_read_valid,
    output logic [DATA_MEM_ADDR_BITS-1:0]                      data_mem_read_address [THREADS_PER_BLOCK],
    input  logic [THREADS_PER_BLOCK-1:0]                       data_mem_read_ready,
    input  logic [DATA_MEM_DATA_BITS-1:0]                      data_mem_read_data   [THREADS_PER_BLOCK],
    output logic [THREADS_PER_BLOCK-1:0]                       data_mem_write_valid,
    output logic [DATA_MEM_ADDR_BITS-1:0]                      data_mem_write_address[THREADS_PER_BLOCK],
    output logic [DATA_MEM_DATA_BITS-1:0]                      data_mem_write_data  [THREADS_PER_BLOCK],
    input  logic [THREADS_PER_BLOCK-1:0]                       data_mem_write_ready
);
    // ========= Core-wide state =========
    logic [2:0]  core_state;
    logic [2:0]  fetcher_state;
    logic [15:0] instruction;

    // ========= Inter-thread bundles =========
    // NOTE: Only ONE thread may drive current_pc (see below).
    logic [7:0] current_pc;

    logic [7:0] next_pc [THREADS_PER_BLOCK];
    logic [7:0] rs      [THREADS_PER_BLOCK];
    logic [7:0] rt      [THREADS_PER_BLOCK];
    logic [1:0] lsu_state [THREADS_PER_BLOCK];
    logic [7:0] lsu_out   [THREADS_PER_BLOCK];
    logic [7:0] alu_out   [THREADS_PER_BLOCK];

    // For “other” threads’ current_pc outputs (to avoid multiple drivers)
    logic [7:0] current_pc_unused [THREADS_PER_BLOCK];

    // ========= Decoded Instruction =========
    logic [3:0] decoded_rd_address;
    logic [3:0] decoded_rs_address;
    logic [3:0] decoded_rt_address;
    logic [2:0] decoded_nzp;
    logic [7:0] decoded_immediate;

    // Decoded Control
    logic       decoded_reg_write_enable;         // writeback enable
    logic       decoded_mem_read_enable;          // LSU read
    logic       decoded_mem_write_enable;         // LSU write
    logic       decoded_nzp_write_enable;         // NZP write
    logic [1:0] decoded_reg_input_mux;            // writeback mux
    logic [1:0] decoded_alu_arithmetic_mux;       // ALU arithmetic op
    logic       decoded_alu_output_mux;           // ALU select (arith vs pass)
    logic       decoded_pc_mux;                   // PC select (seq vs branch/jump)
    logic       decoded_ret;                      // RET (kernel return)

    // -------- Branch detect (BRnzp raises decoded_pc_mux) --------
    wire is_branch = (decoded_pc_mux == 1'b1);

    // Speculative prefetch hint
    logic        spec_en;
    logic [7:0]  spec_pc;

    // --- Branch predictor wires ---
    logic                     bp_q_valid;
    logic [7:0]               bp_q_pc, bp_q_target;
    logic                     bp_pred_taken;
    logic [7:0]               bp_pred_target;

    logic                     bp_u_valid;
    logic [7:0]               bp_u_pc, bp_u_target;
    logic                     bp_u_taken;

    // Latch the PC of the branch at DECODE so we can update later
    logic [7:0]               branch_pc_d;     // PC at DECODE
    logic [7:0]               branch_tgt_d;    // decoded immediate (absolute target)
    logic                     branch_inflight; // sticky from DECODE → UPDATE

    branch_predictor #(
      .PC_BITS(8),
      .BHT_BITS(6),
      .BHT_SIZE(64),
      .BTB_SIZE(64)
    ) bp (
      .clk(clk),
      .reset(reset),
      // query
      .q_valid      (bp_q_valid),
      .q_pc         (bp_q_pc),
      .q_target     (bp_q_target),
      .q_pred_taken (bp_pred_taken),
      .q_pred_target(bp_pred_target),
      // update
      .u_valid      (bp_u_valid),
      .u_pc         (bp_u_pc),
      .u_taken      (bp_u_taken),
      .u_target     (bp_u_target)
    );

    // ========= Fetcher =========
    fetcher #(
        .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
        .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS)
    ) fetcher_instance (
        .clk(clk),
        .reset(reset),
        .spec_en(spec_en),
        .spec_pc(spec_pc),
        .core_state(core_state),
        .current_pc(current_pc),
        .mem_read_valid(program_mem_read_valid),
        .mem_read_address(program_mem_read_address),
        .mem_read_ready(program_mem_read_ready),
        .mem_read_data(program_mem_read_data),
        .fetcher_state(fetcher_state),
        .instruction(instruction)
    );

    // ========= Decoder =========
    decoder decoder_instance (
        .clk(clk),
        .reset(reset),
        .core_state(core_state),
        .instruction(instruction),
        .decoded_rd_address(decoded_rd_address),
        .decoded_rs_address(decoded_rs_address),
        .decoded_rt_address(decoded_rt_address),
        .decoded_nzp(decoded_nzp),
        .decoded_immediate(decoded_immediate),
        .decoded_reg_write_enable(decoded_reg_write_enable),
        .decoded_mem_read_enable(decoded_mem_read_enable),
        .decoded_mem_write_enable(decoded_mem_write_enable),
        .decoded_nzp_write_enable(decoded_nzp_write_enable),
        .decoded_reg_input_mux(decoded_reg_input_mux),
        .decoded_alu_arithmetic_mux(decoded_alu_arithmetic_mux),
        .decoded_alu_output_mux(decoded_alu_output_mux),
        .decoded_pc_mux(decoded_pc_mux),
        .decoded_ret(decoded_ret)
    );

    // -------- Latch branch info at DECODE; keep it "in flight" until UPDATE --------
    always_ff @(posedge clk) begin
      if (reset) begin
        branch_pc_d     <= '0;
        branch_tgt_d    <= '0;
        branch_inflight <= 1'b0;
      end else begin
        // Latch on DECODE if a branch is seen
        if ((core_state == 3'b010) && is_branch) begin
          branch_pc_d     <= current_pc;
          branch_tgt_d    <= decoded_immediate;
          branch_inflight <= 1'b1;
        end
        // Clear after we train at UPDATE
        if ((core_state == 3'b110) && branch_inflight) begin
          branch_inflight <= 1'b0;
        end
      end
    end

    // -------- Query predictor in DECODE --------
    assign bp_q_valid  = (core_state == 3'b010) && is_branch;  // DECODE
    assign bp_q_pc     = current_pc;
    assign bp_q_target = decoded_immediate;  // absolute target in your ISA

    // -------- Phase A: predictive prefetch into fetcher's p_valid buffer --------
    always_comb begin
      spec_en = 1'b0;
      spec_pc = '0;
      if ((core_state == 3'b010) && is_branch) begin  // DECODE
        spec_en = 1'b1;
        spec_pc = bp_pred_taken ? bp_pred_target : (current_pc + 8'd1);
      end
    end

    // -------- Train predictor at UPDATE using final next_pc[0] --------
    always_comb begin
      bp_u_valid  = 1'b0;
      bp_u_pc     = '0;
      bp_u_taken  = 1'b0;
      bp_u_target = '0;

      if ((core_state == 3'b110) && branch_inflight) begin  // UPDATE
        bp_u_valid  = 1'b1;
        bp_u_pc     = branch_pc_d;
        bp_u_target = branch_tgt_d;
        // Taken iff the committed next PC equals the decoded target
        bp_u_taken  = (next_pc[0] == branch_tgt_d);
      end
    end

    // ========= Scheduler =========
    scheduler #(
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
    ) scheduler_instance (
        .clk(clk),
        .reset(reset),
        .start(start),
        .fetcher_state(fetcher_state),
        .core_state(core_state),
        .decoded_mem_read_enable(decoded_mem_read_enable),
        .decoded_mem_write_enable(decoded_mem_write_enable),
        .decoded_ret(decoded_ret),
        .lsu_state(lsu_state),
        .current_pc(current_pc),
        .next_pc(next_pc),
        .done(done)
    );

    // ========= Per-thread units =========
    genvar i;
    generate
        for (i = 0; i < THREADS_PER_BLOCK; i = i + 1) begin : threads
            // ALU
            alu alu_instance (
                .clk(clk),
                .reset(reset),
                .enable(i < thread_count),
                .core_state(core_state),
                .decoded_alu_arithmetic_mux(decoded_alu_arithmetic_mux),
                .decoded_alu_output_mux(decoded_alu_output_mux),
                .rs(rs[i]),
                .rt(rt[i]),
                .alu_out(alu_out[i])
            );

            // LSU
            lsu lsu_instance (
                .clk(clk),
                .reset(reset),
                .enable(i < thread_count),
                .core_state(core_state),
                .decoded_mem_read_enable(decoded_mem_read_enable),
                .decoded_mem_write_enable(decoded_mem_write_enable),
                .mem_read_valid(data_mem_read_valid[i]),
                .mem_read_address(data_mem_read_address[i]),
                .mem_read_ready(data_mem_read_ready[i]),
                .mem_read_data(data_mem_read_data[i]),
                .mem_write_valid(data_mem_write_valid[i]),
                .mem_write_address(data_mem_write_address[i]),
                .mem_write_data(data_mem_write_data[i]),
                .mem_write_ready(data_mem_write_ready[i]),
                .rs(rs[i]),
                .rt(rt[i]),
                .lsu_state(lsu_state[i]),
                .lsu_out(lsu_out[i])
            );

            // Register File
            registers #(
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
                .THREAD_ID(i),
                .DATA_BITS(DATA_MEM_DATA_BITS)
            ) register_instance (
                .clk(clk),
                .reset(reset),
                .enable(i < thread_count),
                .block_id(block_id),
                .core_state(core_state),
                .decoded_reg_write_enable(decoded_reg_write_enable),
                .decoded_reg_input_mux(decoded_reg_input_mux),
                .decoded_rd_address(decoded_rd_address),
                .decoded_rs_address(decoded_rs_address),
                .decoded_rt_address(decoded_rt_address),
                .decoded_immediate(decoded_immediate),
                .alu_out(alu_out[i]),
                .lsu_out(lsu_out[i]),
                .rs(rs[i]),
                .rt(rt[i])
            );

            // Program Counter
            pc #(
                .DATA_MEM_DATA_BITS(DATA_MEM_DATA_BITS),
                .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS)
            ) pc_instance (
                .clk(clk),
                .reset(reset),
                .enable(i < thread_count),
                .core_state(core_state),
                .decoded_nzp(decoded_nzp),
                .decoded_immediate(decoded_immediate),
                .decoded_nzp_write_enable(decoded_nzp_write_enable),
                .decoded_pc_mux(decoded_pc_mux),
                .alu_out(alu_out[i]),
                // IMPORTANT: Only one thread drives current_pc.
                .current_pc( (i == 0) ? current_pc : current_pc_unused[i] ),
                .next_pc(next_pc[i])
            );
        end
    endgenerate
endmodule
