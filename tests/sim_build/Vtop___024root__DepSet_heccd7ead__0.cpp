// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__reset = 1U;
    vlSelfRef.tb_top_stub__DOT__start = 0U;
    vlSelfRef.tb_top_stub__DOT__device_control_write_enable = 0U;
    vlSelfRef.tb_top_stub__DOT__device_control_data = 0U;
    vlSelfRef.tb_top_stub__DOT__program_mem_read_ready = 0U;
    vlSelfRef.tb_top_stub__DOT__data_mem_read_ready = 0U;
    vlSelfRef.tb_top_stub__DOT__data_mem_write_ready = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "../tb/top/tb_top_stub.sv", 
                                         94);
    vlSelfRef.tb_top_stub__DOT__reset = 0U;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
void Vtop___024root___eval_ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__start = vlSelfRef.tb_top_stub__DOT__start;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_write_enable 
        = vlSelfRef.tb_top_stub__DOT__device_control_write_enable;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_data 
        = vlSelfRef.tb_top_stub__DOT__device_control_data;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__program_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__data_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_ready 
        = vlSelfRef.tb_top_stub__DOT__data_mem_write_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__reset = vlSelfRef.tb_top_stub__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__clk = vlSelfRef.tb_top_stub__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__start;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_write_enable 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_write_enable;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_data 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_data;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__clk;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__clk;
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution;
    __Vdly__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution = 0;
    CData/*7:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r__v2;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r__v2 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r__v2;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r__v2 = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r__v2;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r__v2 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r__v2;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r__v2 = 0;
    // Body
    __Vdly__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution;
    if (vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__reset) {
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r.enqueue(4U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r.enqueue(4U, 1U);
    } else if (vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start) {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i)) {
            __VdlyVal__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r__v2 
                = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_next
                [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i)];
            __VdlyDim0__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r__v2 
                = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r__v2, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r__v2));
            __VdlyVal__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r__v2 
                = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_next
                [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i)];
            __VdlyDim0__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r__v2 
                = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r__v2, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r__v2));
            vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i);
        }
    }
    if (vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__reset) {
        __Vdly__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_r = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_dispatched = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_done = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_r = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_r = 3U;
    } else if (vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution)))) {
            __Vdly__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution = 1U;
        }
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_r 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_next;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_dispatched 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_done 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bn_next;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy_next;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_r 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_next;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_r 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_next;
    }
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r);
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution 
        = __Vdly__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_r;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_r;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_r;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_block_id[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_block_id[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_thread_count[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_thread_count[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_start 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__done = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__core_reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset;
    vlSelfRef.tb_top_stub__DOT__done = vlSelfRef.tb_top_stub__DOT__dut__DOT__done;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer;
    __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer = 0;
    CData/*0:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v1;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v1;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address__v1;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address__v1;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address__v1 = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v1;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v1;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v1 = 0;
    CData/*0:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v2;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v2 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v2;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address__v1;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address__v1;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data__v1;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data__v1;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data__v1 = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v2;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v2 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v2;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2 = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v3;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v3 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v3;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v3 = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v4;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v4 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v4;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v4 = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v5;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v5 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v5;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v5 = 0;
    CData/*2:0*/ __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v6;
    __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v6 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v6;
    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v6 = 0;
    // Body
    __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer;
    if (vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__reset) {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready = 0U;
        vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_ready = 0U;
        __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer = 0U;
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data.enqueue(0U, 1U);
    } else {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i = 0U;
        while (VL_GTS_III(32, 1U, vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) {
            if ((0U == ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))
                         ? vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state
                        [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]
                         : 0U))) {
                vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0U;
                {
                    while (VL_GTS_III(32, 2U, vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)) {
                        if ((1U & (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_valid) 
                                    >> (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)) 
                                   & (~ ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer) 
                                         >> (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)))))) {
                            __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer 
                                = ((IData)(__Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer) 
                                   | (3U & ((IData)(1U) 
                                            << (1U 
                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j))));
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1e00fab__0 
                                = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j);
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v1 
                                    = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1e00fab__0;
                                __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v1 
                                    = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                                vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v1, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v1));
                            }
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_ha2779ebd__0 = 1U;
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb6bf7dd6__0 
                                = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_address
                                [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)];
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid 
                                    = (((~ ((IData)(1U) 
                                            << (1U 
                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))) 
                                        & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid)) 
                                       | (1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_ha2779ebd__0) 
                                                << 
                                                (1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))));
                            }
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address__v1 
                                    = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb6bf7dd6__0;
                                __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address__v1 
                                    = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                                vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address__v1, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address__v1));
                            }
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__0 = 2U;
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v1 
                                    = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__0;
                                __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v1 
                                    = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                                vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v1, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v1));
                            }
                            goto __Vlabel0;
                        } else if ((1U & (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_valid) 
                                           >> (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)) 
                                          & (~ ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer) 
                                                >> 
                                                (1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)))))) {
                            __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer 
                                = ((IData)(__Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer) 
                                   | (3U & ((IData)(1U) 
                                            << (1U 
                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j))));
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1e00fab__1 
                                = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j);
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v2 
                                    = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1e00fab__1;
                                __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v2 
                                    = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                                vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v2, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer__v2));
                            }
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_he2d7c88a__0 = 1U;
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1ea3a47__0 
                                = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_address
                                [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)];
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid 
                                    = (((~ ((IData)(1U) 
                                            << (1U 
                                                & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))) 
                                        & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid)) 
                                       | (1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_he2d7c88a__0) 
                                                << 
                                                (1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))));
                            }
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address__v1 
                                    = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1ea3a47__0;
                                __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address__v1 
                                    = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                                vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address__v1, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address__v1));
                            }
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hfd2c729e__0 
                                = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_data
                                [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j)];
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data__v1 
                                    = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hfd2c729e__0;
                                __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data__v1 
                                    = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                                vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data__v1, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data__v1));
                            }
                            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__1 = 3U;
                            if (VL_LIKELY(((0U >= (1U 
                                                   & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                                __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v2 
                                    = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__1;
                                __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v2 
                                    = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                                vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v2, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v2));
                            }
                            goto __Vlabel0;
                        }
                        vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j 
                            = ((IData)(1U) + vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j);
                    }
                    __Vlabel0: ;
                }
            } else if ((2U == ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))
                                ? vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state
                               [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]
                                : 0U))) {
                if (((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                     && (1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_ready) 
                               >> (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_ha2779ebd__1 = 0U;
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready 
                        = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready) 
                           | (3U & ((IData)(1U) << 
                                    ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                                     && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                                     [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]))));
                    __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2 
                        = ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                           && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                           [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]);
                    if ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))) {
                        vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid 
                            = (((~ ((IData)(1U) << 
                                    (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))) 
                                & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid)) 
                               | (1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_ha2779ebd__1) 
                                        << (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))));
                        __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2 
                            = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_data
                            [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)];
                    } else {
                        __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2 = 0U;
                    }
                    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data__v2));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__2 = 4U;
                    if (VL_LIKELY(((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                        __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v3 
                            = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__2;
                        __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v3 
                            = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v3, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v3));
                    }
                }
            } else if ((3U == ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))
                                ? vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state
                               [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]
                                : 0U))) {
                if (((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                     && (1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_ready) 
                               >> (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_he2d7c88a__1 = 0U;
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_ready 
                        = ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_ready) 
                           | (3U & ((IData)(1U) << 
                                    ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                                     && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                                     [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]))));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__3 = 5U;
                    if (VL_LIKELY(((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                        vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid 
                            = (((~ ((IData)(1U) << 
                                    (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))) 
                                & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid)) 
                               | (1U & ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_he2d7c88a__1) 
                                        << (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))));
                    }
                    if (VL_LIKELY(((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                        __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v4 
                            = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__3;
                        __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v4 
                            = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v4, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v4));
                    }
                }
            } else if ((4U == ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))
                                ? vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state
                               [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]
                                : 0U))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_valid) 
                              >> ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                                  && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                                  [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]))))) {
                    __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer 
                        = ((~ ((IData)(1U) << ((0U 
                                                >= 
                                                (1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                                               && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                                               [(1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]))) 
                           & (IData)(__Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready 
                        = ((~ ((IData)(1U) << ((0U 
                                                >= 
                                                (1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                                               && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                                               [(1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]))) 
                           & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__4 = 0U;
                    if (VL_LIKELY(((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                        __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v5 
                            = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__4;
                        __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v5 
                            = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v5, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v5));
                    }
                }
            } else if ((5U == ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))
                                ? vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state
                               [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]
                                : 0U))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_valid) 
                              >> ((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                                  && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                                  [(1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]))))) {
                    __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer 
                        = ((~ ((IData)(1U) << ((0U 
                                                >= 
                                                (1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                                               && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                                               [(1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]))) 
                           & (IData)(__Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_ready 
                        = ((~ ((IData)(1U) << ((0U 
                                                >= 
                                                (1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)) 
                                               && vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer
                                               [(1U 
                                                 & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i)]))) 
                           & (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_ready));
                    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__5 = 0U;
                    if (VL_LIKELY(((0U >= (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i))))) {
                        __VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v6 
                            = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__5;
                        __VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v6 
                            = (1U & vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
                        vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state.enqueue(__VdlyVal__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v6, (IData)(__VdlyDim0__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state__v6));
                    }
                }
            }
            vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i);
        }
    }
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer 
        = __Vdly__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer;
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address);
    vlSelfRef.__VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data.commit(vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data);
    vlSelfRef.tb_top_stub__DOT__dut__DOT__pmc_mem_write_valid_dummy 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__pmc_mem_write_address_dummy[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__pmc_mem_write_data_dummy[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__fetcher_read_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__program_mem_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_valid;
    vlSelfRef.tb_top_stub__DOT__program_mem_read_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_address
        [0U];
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__start = vlSelfRef.tb_top_stub__DOT__start;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_write_enable 
        = vlSelfRef.tb_top_stub__DOT__device_control_write_enable;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_data 
        = vlSelfRef.tb_top_stub__DOT__device_control_data;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__program_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__data_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_ready 
        = vlSelfRef.tb_top_stub__DOT__data_mem_write_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__reset = vlSelfRef.tb_top_stub__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__start;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__program_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_read_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_ready 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__data_mem_write_ready;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__reset) {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_register = 0U;
    } else if (vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_write_enable) {
        vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_register 
            = vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_data;
    }
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__thread_count 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_register;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__thread_count 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__thread_count;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__thread_count 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__thread_count;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__total_blocks 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (0x000000ffU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__thread_count))), 2U));
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__reset 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__reset;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_write_enable 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_write_enable;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_data 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__device_control_data;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_valid 
        = (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid) 
            << 4U) | (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid));
    vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_valid 
        = (((IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid) 
            << 4U) | (IData)(vlSelfRef.tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid));
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
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_read_valid;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_valid 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT__lsu_write_valid;
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000040000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<43> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___timing_resume(vlSelf);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../tb/top/tb_top_stub.sv", 12, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../tb/top/tb_top_stub.sv", 12, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../tb/top/tb_top_stub.sv", 12, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
