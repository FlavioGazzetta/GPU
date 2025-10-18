// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_core.h"

void Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc_unused[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc_unused[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc_unused[3U];
    vlSelfRef.fetcher_instance__DOT__spec_en = vlSelfRef.spec_en;
    vlSelfRef.fetcher_instance__DOT__spec_pc = vlSelfRef.spec_pc;
    vlSelfRef.fetcher_state = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    vlSelfRef.instruction = vlSelfRef.fetcher_instance__DOT__instruction;
    vlSelfRef.decoded_ret = vlSelfRef.decoder_instance__DOT__decoded_ret;
    vlSelfRef.lsu_state[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.next_pc[0U] = vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.next_pc[1U] = vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.next_pc[2U] = vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.next_pc[3U] = vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.current_pc = vlSelfRef.scheduler_instance__DOT__current_pc;
    vlSelfRef.program_mem_read_address = vlSelfRef.fetcher_instance__DOT__mem_read_address;
    vlSelfRef.program_mem_read_valid = vlSelfRef.fetcher_instance__DOT__mem_read_valid;
    vlSelfRef.decoded_rd_address = vlSelfRef.decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.decoded_rs_address = vlSelfRef.decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.decoded_rt_address = vlSelfRef.decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.decoded_nzp = vlSelfRef.decoder_instance__DOT__decoded_nzp;
    vlSelfRef.decoded_reg_write_enable = vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.decoded_nzp_write_enable = vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.decoded_reg_input_mux = vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.decoded_alu_arithmetic_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.decoded_alu_output_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.decoded_pc_mux = vlSelfRef.decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.data_mem_read_valid = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                       << 3U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                         << 1U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid)));
    vlSelfRef.data_mem_write_valid = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                        << 3U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                          << 1U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid)));
    vlSelfRef.lsu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.decoded_mem_read_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.decoded_mem_write_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.decoded_immediate = vlSelfRef.decoder_instance__DOT__decoded_immediate;
    vlSelfRef.alu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out;
    vlSelfRef.alu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out;
    vlSelfRef.alu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out;
    vlSelfRef.alu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out;
    vlSelfRef.rt[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rs[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.done = vlSelfRef.scheduler_instance__DOT__done;
    vlSelfRef.core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    vlSelfRef.data_mem_write_data[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.data_mem_write_data[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.data_mem_write_data[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.data_mem_write_data[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.data_mem_write_address[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_address[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_address[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_address[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_read_address[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_read_address[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_read_address[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_read_address[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.program_mem_read_data = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__fetcher_read_data
        [0U];
    vlSelfRef.program_mem_read_ready = (1U & (IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__fetcher_read_ready));
    vlSelfRef.clk = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.start = (1U & (IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_start));
    vlSelfRef.block_id = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_block_id
        [0U];
    vlSelfRef.data_mem_read_ready = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready;
    vlSelfRef.data_mem_write_ready = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready;
    vlSelfRef.thread_count = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_thread_count
        [0U];
    vlSelfRef.reset = (1U & (IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_reset));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[3U];
    vlSelfRef.scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.fetcher_state;
    vlSelfRef.decoder_instance__DOT__instruction = vlSelfRef.instruction;
    vlSelfRef.scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.decoded_ret;
    vlSelfRef.scheduler_instance__DOT__lsu_state[0U] 
        = vlSelfRef.lsu_state[0U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[1U] 
        = vlSelfRef.lsu_state[1U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[2U] 
        = vlSelfRef.lsu_state[2U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[3U] 
        = vlSelfRef.lsu_state[3U];
    vlSelfRef.scheduler_instance__DOT__next_pc[0U] 
        = vlSelfRef.next_pc[0U];
    vlSelfRef.scheduler_instance__DOT__next_pc[1U] 
        = vlSelfRef.next_pc[1U];
    vlSelfRef.scheduler_instance__DOT__next_pc[2U] 
        = vlSelfRef.next_pc[2U];
    vlSelfRef.scheduler_instance__DOT__next_pc[3U] 
        = vlSelfRef.next_pc[3U];
    vlSelfRef.fetcher_instance__DOT__current_pc = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[3U];
    vlSelfRef.scheduler_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.scheduler_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[3U];
    vlSelfRef.fetcher_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.decoder_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.program_mem_read_data;
    vlSelfRef.fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.program_mem_read_ready;
    vlSelfRef.fetcher_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.decoder_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.scheduler_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.scheduler_instance__DOT__start = vlSelfRef.start;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & (IData)(vlSelfRef.data_mem_read_ready));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 3U));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & (IData)(vlSelfRef.data_mem_write_ready));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 3U));
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable 
        = (0U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable 
        = (1U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable 
        = (2U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable 
        = (3U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.fetcher_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.decoder_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.scheduler_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__enable 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__enable 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__enable 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__enable 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__enable 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__enable 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__enable 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__enable 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__enable 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__enable 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__enable 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__enable 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable;
}

void Vtop_core___act_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___act_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.fetcher_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.decoder_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.scheduler_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.block_id = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_block_id
        [0U];
    vlSelfRef.thread_count = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_thread_count
        [0U];
    vlSelfRef.start = (1U & (IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_start));
    vlSelfRef.reset = (1U & (IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_reset));
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__11(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.program_mem_read_ready = (1U & (IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__fetcher_read_ready));
    vlSelfRef.program_mem_read_data = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__fetcher_read_data
        [0U];
    vlSelfRef.fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.program_mem_read_ready;
    vlSelfRef.fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.program_mem_read_data;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__12(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem_read_ready = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready;
    vlSelfRef.data_mem_write_ready = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & (IData)(vlSelfRef.data_mem_read_ready));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 3U));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & (IData)(vlSelfRef.data_mem_write_ready));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 3U));
}

void Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc_unused[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc_unused[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc_unused[3U];
    vlSelfRef.fetcher_instance__DOT__spec_en = vlSelfRef.spec_en;
    vlSelfRef.fetcher_instance__DOT__spec_pc = vlSelfRef.spec_pc;
    vlSelfRef.fetcher_state = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    vlSelfRef.instruction = vlSelfRef.fetcher_instance__DOT__instruction;
    vlSelfRef.decoded_ret = vlSelfRef.decoder_instance__DOT__decoded_ret;
    vlSelfRef.lsu_state[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.next_pc[0U] = vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.next_pc[1U] = vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.next_pc[2U] = vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.next_pc[3U] = vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc;
    vlSelfRef.current_pc = vlSelfRef.scheduler_instance__DOT__current_pc;
    vlSelfRef.program_mem_read_address = vlSelfRef.fetcher_instance__DOT__mem_read_address;
    vlSelfRef.program_mem_read_valid = vlSelfRef.fetcher_instance__DOT__mem_read_valid;
    vlSelfRef.decoded_rd_address = vlSelfRef.decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.decoded_rs_address = vlSelfRef.decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.decoded_rt_address = vlSelfRef.decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.decoded_nzp = vlSelfRef.decoder_instance__DOT__decoded_nzp;
    vlSelfRef.decoded_reg_write_enable = vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.decoded_nzp_write_enable = vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.decoded_reg_input_mux = vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.decoded_alu_arithmetic_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.decoded_alu_output_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.decoded_pc_mux = vlSelfRef.decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.data_mem_read_valid = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                       << 3U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid) 
                                         << 1U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid)));
    vlSelfRef.data_mem_write_valid = ((((IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                        << 3U) | ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid) 
                                          << 1U) | (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid)));
    vlSelfRef.lsu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.lsu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.decoded_mem_read_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.decoded_mem_write_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.decoded_immediate = vlSelfRef.decoder_instance__DOT__decoded_immediate;
    vlSelfRef.alu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out;
    vlSelfRef.alu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out;
    vlSelfRef.alu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out;
    vlSelfRef.alu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out;
    vlSelfRef.rt[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rt[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
    vlSelfRef.rs[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rs[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.done = vlSelfRef.scheduler_instance__DOT__done;
    vlSelfRef.core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    vlSelfRef.data_mem_write_data[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.data_mem_write_data[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.data_mem_write_data[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.data_mem_write_data[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data;
    vlSelfRef.data_mem_write_address[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_address[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_address[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_address[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_read_address[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_read_address[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_read_address[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_read_address[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.program_mem_read_data = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__fetcher_read_data
        [1U];
    vlSelfRef.program_mem_read_ready = (1U & ((IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__fetcher_read_ready) 
                                              >> 1U));
    vlSelfRef.clk = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.start = (1U & ((IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_start) 
                             >> 1U));
    vlSelfRef.block_id = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_block_id
        [1U];
    vlSelfRef.data_mem_read_ready = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready;
    vlSelfRef.data_mem_write_ready = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready;
    vlSelfRef.thread_count = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_thread_count
        [1U];
    vlSelfRef.reset = (1U & ((IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_reset) 
                             >> 1U));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[3U];
    vlSelfRef.scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.fetcher_state;
    vlSelfRef.decoder_instance__DOT__instruction = vlSelfRef.instruction;
    vlSelfRef.scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.decoded_ret;
    vlSelfRef.scheduler_instance__DOT__lsu_state[0U] 
        = vlSelfRef.lsu_state[0U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[1U] 
        = vlSelfRef.lsu_state[1U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[2U] 
        = vlSelfRef.lsu_state[2U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[3U] 
        = vlSelfRef.lsu_state[3U];
    vlSelfRef.scheduler_instance__DOT__next_pc[0U] 
        = vlSelfRef.next_pc[0U];
    vlSelfRef.scheduler_instance__DOT__next_pc[1U] 
        = vlSelfRef.next_pc[1U];
    vlSelfRef.scheduler_instance__DOT__next_pc[2U] 
        = vlSelfRef.next_pc[2U];
    vlSelfRef.scheduler_instance__DOT__next_pc[3U] 
        = vlSelfRef.next_pc[3U];
    vlSelfRef.fetcher_instance__DOT__current_pc = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[3U];
    vlSelfRef.scheduler_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable 
        = vlSelfRef.decoded_mem_read_enable;
    vlSelfRef.scheduler_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable 
        = vlSelfRef.decoded_mem_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[3U];
    vlSelfRef.fetcher_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.decoder_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.program_mem_read_data;
    vlSelfRef.fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.program_mem_read_ready;
    vlSelfRef.fetcher_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.decoder_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.scheduler_instance__DOT__clk = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.scheduler_instance__DOT__start = vlSelfRef.start;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & (IData)(vlSelfRef.data_mem_read_ready));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 3U));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & (IData)(vlSelfRef.data_mem_write_ready));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 3U));
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable 
        = (0U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable 
        = (1U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable 
        = (2U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable 
        = (3U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.fetcher_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.decoder_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.scheduler_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__enable 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__enable 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__enable 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__enable 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__enable 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__enable 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__enable 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__enable 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__enable 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__enable 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__enable 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__enable 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.block_id = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_block_id
        [1U];
    vlSelfRef.thread_count = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_thread_count
        [1U];
    vlSelfRef.start = (1U & ((IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_start) 
                             >> 1U));
    vlSelfRef.reset = (1U & ((IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__core_reset) 
                             >> 1U));
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__11(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.program_mem_read_ready = (1U & ((IData)(vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__fetcher_read_ready) 
                                              >> 1U));
    vlSelfRef.program_mem_read_data = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__fetcher_read_data
        [1U];
    vlSelfRef.fetcher_instance__DOT__mem_read_ready 
        = vlSelfRef.program_mem_read_ready;
    vlSelfRef.fetcher_instance__DOT__mem_read_data 
        = vlSelfRef.program_mem_read_data;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__12(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem_read_ready = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready;
    vlSelfRef.data_mem_write_ready = vlSymsp->TOP.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data 
        = vlSelfRef.data_mem_read_data[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & (IData)(vlSelfRef.data_mem_read_ready));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_read_ready) 
                 >> 3U));
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & (IData)(vlSelfRef.data_mem_write_ready));
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 1U));
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 2U));
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready 
        = (1U & ((IData)(vlSelfRef.data_mem_write_ready) 
                 >> 3U));
}
