// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "../tb/top/tb_top_stub.sv", 
                                             79);
        vlSelfRef.tb_top_stub__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_top_stub__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__pmc_mem_write_valid_dummy 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__pmc_mem_write_address_dummy[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__pmc_mem_write_data_dummy[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__pmc_mem_write_ready_dummy;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__data_mem_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__data_mem_read_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__data_mem_read_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__data_mem_read_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__start = vlSelfRef.tb_top_stub__DOT__start;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_write_enable 
        = vlSelfRef.tb_top_stub__DOT__device_control_write_enable;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_data 
        = vlSelfRef.tb_top_stub__DOT__device_control_data;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__program_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__program_mem_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__data_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_ready 
        = vlSelfRef.tb_top_stub__DOT__data_mem_write_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_r;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__reset = vlSelfRef.tb_top_stub__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_r;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__thread_count 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_register;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_r;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__clk = vlSelfRef.tb_top_stub__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [4U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [5U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [6U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [7U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__start;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_write_enable 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_write_enable;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_data 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_data;
    vlSelfRef.tb_top_stub__DOT__program_mem_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__program_mem_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__data_mem_write_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__done = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_start 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_block_id[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_block_id[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready 
        = (0x0000000fU & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_ready));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_ready) 
                          >> 4U));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready 
        = (0x0000000fU & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_ready));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_ready) 
                          >> 4U));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__thread_count 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__thread_count;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_thread_count[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_thread_count[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [4U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [5U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [6U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [7U];
    vlSelfRef.tb_top_stub__DOT__done = vlSelfRef.tb_top_stub__DOT__dut__DOT__done;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__thread_count 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__thread_count;
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [0U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [1U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [2U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [3U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [0U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [1U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [2U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__total_blocks 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (0x000000ffU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__thread_count))), 2U));
}

void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_address;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_address;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_valid 
        = (((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_valid) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_valid));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_done 
        = (((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.done) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.done));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_valid 
        = (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid) 
            << 4U) | (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_valid 
        = (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid) 
            << 4U) | (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_done 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__core_done;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_dispatched;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bn_next 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_done;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_next = 0U;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_next 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_r;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy_next 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_next 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_r;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_next[(1U 
                                                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i)] 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r
            [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i)];
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_next[(1U 
                                                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i)] 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r
            [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i)];
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_r) 
                   >> (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i)))) {
            vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_next 
                = ((~ ((IData)(1U) << (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i))) 
                   & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_next));
            if (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next) 
                 < (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__total_blocks))) {
                vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_next 
                    = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_next) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i))));
                vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy_next 
                    = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy_next) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i))));
                vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_next[(1U 
                                                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i)] 
                    = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next;
                vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_next[(1U 
                                                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i)] 
                    = (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next) 
                        == (0x000000ffU & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__total_blocks) 
                                           - (IData)(1U))))
                        ? (7U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__thread_count) 
                                 - VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next), 2U)))
                        : 4U);
                vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next)));
            }
        }
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i)) {
        if ((1U & (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy) 
                    & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_done)) 
                   >> (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i)))) {
            vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bn_next 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bn_next)));
            vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_next 
                = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_next) 
                   | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i))));
            vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_next 
                = ((~ ((IData)(1U) << (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i))) 
                   & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_next));
            vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy_next 
                = ((~ ((IData)(1U) << (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i))) 
                   & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy_next));
        }
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i);
    }
    if (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bn_next) 
         == (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__total_blocks))) {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_next = 1U;
    }
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data
        [4U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data
        [5U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data
        [6U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data
        [7U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address
        [4U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address
        [5U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address
        [6U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address
        [7U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address
        [4U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address
        [5U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address
        [6U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address
        [7U];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.fetcher_instance__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__fetcher_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.decoder_instance__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__decoder_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.scheduler_instance__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__scheduler_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__0__KET____DOT__alu_instance__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__alu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__0__KET____DOT__lsu_instance__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__lsu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__0__KET____DOT__register_instance__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__register_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000000aU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__0__KET____DOT__pc_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__pc_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000000bU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__1__KET____DOT__alu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__alu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000000cU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__1__KET____DOT__lsu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__lsu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000000dU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__1__KET____DOT__register_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__register_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000000eU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__1__KET____DOT__pc_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__pc_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000000fU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__2__KET____DOT__alu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__alu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000010U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__2__KET____DOT__lsu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__lsu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000011U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__2__KET____DOT__register_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__register_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000012U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__2__KET____DOT__pc_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__pc_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000013U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__3__KET____DOT__alu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__alu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000014U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__3__KET____DOT__lsu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__lsu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000015U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__3__KET____DOT__register_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__register_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000016U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__3__KET____DOT__pc_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__pc_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000017U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.fetcher_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__fetcher_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000018U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.decoder_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__decoder_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000019U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.scheduler_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__scheduler_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000001aU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__0__KET____DOT__alu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__alu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000001bU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__0__KET____DOT__lsu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__lsu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000001cU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__0__KET____DOT__register_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__register_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000001dU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__0__KET____DOT__pc_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__pc_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000001eU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__1__KET____DOT__alu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__alu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000001fU, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__1__KET____DOT__lsu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__lsu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000020U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__1__KET____DOT__register_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__register_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000021U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__1__KET____DOT__pc_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__pc_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000022U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__2__KET____DOT__alu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__alu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000023U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__2__KET____DOT__lsu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__lsu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000024U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__2__KET____DOT__register_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__register_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000025U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__2__KET____DOT__pc_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__pc_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000026U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__3__KET____DOT__alu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__alu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000027U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__3__KET____DOT__lsu_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__lsu_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000028U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__3__KET____DOT__register_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__register_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x00000029U, ((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__3__KET____DOT__pc_instance__DOT__clk) 
                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__pc_instance__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x0000002aU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk__0 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk__0 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk__0 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk__0 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__fetcher_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.fetcher_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__decoder_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.decoder_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__scheduler_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.scheduler_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__alu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__0__KET____DOT__alu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__lsu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__0__KET____DOT__lsu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__register_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__0__KET____DOT__register_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__pc_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__0__KET____DOT__pc_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__alu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__1__KET____DOT__alu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__lsu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__1__KET____DOT__lsu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__register_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__1__KET____DOT__register_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__pc_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__1__KET____DOT__pc_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__alu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__2__KET____DOT__alu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__lsu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__2__KET____DOT__lsu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__register_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__2__KET____DOT__register_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__pc_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__2__KET____DOT__pc_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__alu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__3__KET____DOT__alu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__lsu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__3__KET____DOT__lsu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__register_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__3__KET____DOT__register_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__pc_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.threads__BRA__3__KET____DOT__pc_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__fetcher_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.fetcher_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__decoder_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.decoder_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__scheduler_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.scheduler_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__alu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__0__KET____DOT__alu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__lsu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__0__KET____DOT__lsu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__register_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__0__KET____DOT__register_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__pc_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__0__KET____DOT__pc_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__alu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__1__KET____DOT__alu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__lsu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__1__KET____DOT__lsu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__register_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__1__KET____DOT__register_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__pc_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__1__KET____DOT__pc_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__alu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__2__KET____DOT__alu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__lsu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__2__KET____DOT__lsu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__register_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__2__KET____DOT__register_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__pc_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__2__KET____DOT__pc_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__alu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__3__KET____DOT__alu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__lsu_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__3__KET____DOT__lsu_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__register_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__3__KET____DOT__register_instance__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__pc_instance__DOT__clk__0 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.threads__BRA__3__KET____DOT__pc_instance__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_core___act_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000040000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
        Vtop_core___act_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___act_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1(Vtop_core* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__4(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__5(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__6(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__6(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__7(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__8(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__9(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__10(Vtop_core* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__11(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__11(Vtop_core* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__12(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__12(Vtop_core* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__13(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__14(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__15(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__16(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__17(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__18(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__19(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__20(Vtop_core* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__21(Vtop_core* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__22(Vtop_core* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__23(Vtop_core* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__24(Vtop_core* vlSelf);
void Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__25(Vtop_core* vlSelf);
void Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1(Vtop_core* vlSelf);
void Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2(Vtop_core* vlSelf);
void Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3(Vtop_core* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__4((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__5((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__4((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__5((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__6((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__6((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__7((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__8((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__9((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__10((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__7((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__8((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__9((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__10((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__11((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__11((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__12((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__12((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__13((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__13((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__14((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__15((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__16((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__17((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__14((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__15((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__16((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__17((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__18((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__19((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__20((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__21((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__18((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__19((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__20((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__21((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__22((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__22((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000000800010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__23((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__23((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000002000040ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__24((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000111100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__24((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000008888000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__25((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000444400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__25((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000022220000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000000000222200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000000000088880ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
    }
    if ((0x0000011110000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000004444000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000002000049ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x0000008888111100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_address;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_address;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer;
    __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v4;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v4;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address__v4;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address__v4;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v4;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v4 = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v5;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v5;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address__v4;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address__v4;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data__v4;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data__v4;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v5;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data__v8;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data__v8 = 0;
    CData/*2:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data__v8;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v6;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v7;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v8;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v9;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v9 = 0;
    // Body
    __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer;
    if (vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__reset) {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready = 0U;
        __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer = 0U;
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(0U, 4U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(0U, 5U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(0U, 6U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(0U, 7U);
    } else {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)) {
            if ((0U == vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state
                 [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) {
                vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0U;
                {
                    while (VL_GTS_III(32, 8U, vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)) {
                        if ((1U & (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_valid) 
                                    >> (7U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)) 
                                   & (~ ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                         >> (7U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)))))) {
                            __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer 
                                = ((IData)(__Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                   | (0x00ffU & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j))));
                            __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v4 
                                = (7U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j);
                            __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v4 
                                = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v4, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v4));
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid 
                                = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid) 
                                   | (0x0fU & ((IData)(1U) 
                                               << (3U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i))));
                            __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address__v4 
                                = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address
                                [(7U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)];
                            __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address__v4 
                                = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address__v4, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address__v4));
                            __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v4 
                                = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(2U, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v4));
                            goto __Vlabel0;
                        } else if ((1U & (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_valid) 
                                           >> (7U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)) 
                                          & (~ ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                                >> 
                                                (7U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)))))) {
                            __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer 
                                = ((IData)(__Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer) 
                                   | (0x00ffU & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j))));
                            __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v5 
                                = (7U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j);
                            __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v5 
                                = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v5, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer__v5));
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid 
                                = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid) 
                                   | (0x0fU & ((IData)(1U) 
                                               << (3U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i))));
                            __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address__v4 
                                = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address
                                [(7U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)];
                            __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address__v4 
                                = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address__v4, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address__v4));
                            __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data__v4 
                                = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data
                                [(7U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)];
                            __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data__v4 
                                = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data__v4, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data__v4));
                            __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v5 
                                = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(3U, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v5));
                            goto __Vlabel0;
                        }
                        vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j 
                            = ((IData)(1U) + vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j);
                    }
                    __Vlabel0: ;
                }
            } else if ((2U == vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state
                        [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) {
                if ((1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_ready) 
                           >> (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid 
                        = ((~ ((IData)(1U) << (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i))) 
                           & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready 
                        = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready) 
                           | (0x00ffU & ((IData)(1U) 
                                         << vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                                         [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])));
                    __VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data__v8 
                        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_data
                        [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)];
                    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data__v8 
                        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                        [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)];
                    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data__v8, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data__v8));
                    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v6 
                        = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(4U, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v6));
                }
            } else if ((3U == vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state
                        [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) {
                if ((1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_ready) 
                           >> (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid 
                        = ((~ ((IData)(1U) << (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i))) 
                           & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready 
                        = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready) 
                           | (0x00ffU & ((IData)(1U) 
                                         << vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                                         [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])));
                    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v7 
                        = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(5U, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v7));
                }
            } else if ((4U == vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state
                        [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_valid) 
                              >> vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                              [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])))) {
                    __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer 
                        = ((~ ((IData)(1U) << vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                               [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) 
                           & (IData)(__Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready 
                        = ((~ ((IData)(1U) << vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                               [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) 
                           & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready));
                    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v8 
                        = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v8));
                }
            } else if ((5U == vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state
                        [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_valid) 
                              >> vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                              [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])))) {
                    __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer 
                        = ((~ ((IData)(1U) << vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                               [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) 
                           & (IData)(__Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready 
                        = ((~ ((IData)(1U) << vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer
                               [(3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i)])) 
                           & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready));
                    __VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v9 
                        = (3U & vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
                    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.enqueue(0U, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state__v9));
                }
            }
            vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i);
        }
    }
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer 
        = __Vdly__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer;
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data);
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [4U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [5U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [6U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data
        [7U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__data_mem_write_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__data_mem_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__data_mem_read_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__data_mem_write_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready 
        = (0x0000000fU & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_ready));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_ready) 
                          >> 4U));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready 
        = (0x0000000fU & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_ready));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_ready) 
                          >> 4U));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [4U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [5U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [6U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_data
        [7U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [0U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [1U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [2U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data
        [3U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [0U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [1U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [2U];
    vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data
        [3U];
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_valid 
        = (((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.program_mem_read_valid) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.program_mem_read_valid));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_valid;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_done 
        = (((IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.done) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.done));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_done 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__core_done;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[2U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[3U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data
        [3U];
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[0U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[1U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[2U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[3U] 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_data
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid 
        = vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance.data_mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_address[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_address[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address
        [3U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[4U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[5U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[6U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [2U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_data[7U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data
        [3U];
}
