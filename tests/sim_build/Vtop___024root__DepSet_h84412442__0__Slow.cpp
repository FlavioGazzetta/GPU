// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0(Vtop_core* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance));
        Vtop_core___ico_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__0((&vlSymsp->TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_data[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_data
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_data[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_data
        [1U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_address[0U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_address
        [0U];
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_address[1U] 
        = vlSelfRef.tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_address
        [1U];
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
