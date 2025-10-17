// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_stub__DOT__clk = 0U;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__pmc_mem_write_ready_dummy = 0U;
    vlSelfRef.tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_valid = 0U;
    vlSelfRef.tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_data[0U] = 0U;
    vlSelfRef.tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_data[1U] = 0U;
    vlSelfRef.tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_address[0U] = 0U;
    vlSelfRef.tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_address[1U] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../tb/top/tb_top_stub.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top_stub.dut.dcr_instance.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_top_stub.dut.data_memory_controller.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_top_stub.dut.program_memory_controller.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_top_stub.dut.dispatch_instance.clk)\n");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.fetcher_instance.clk)\n");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.decoder_instance.clk)\n");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.scheduler_instance.clk)\n");
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[0].alu_instance.clk)\n");
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[0].lsu_instance.clk)\n");
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[0].register_instance.clk)\n");
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[0].pc_instance.clk)\n");
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[1].alu_instance.clk)\n");
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[1].lsu_instance.clk)\n");
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[1].register_instance.clk)\n");
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[1].pc_instance.clk)\n");
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[2].alu_instance.clk)\n");
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[2].lsu_instance.clk)\n");
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[2].register_instance.clk)\n");
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[2].pc_instance.clk)\n");
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[3].alu_instance.clk)\n");
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[3].lsu_instance.clk)\n");
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[3].register_instance.clk)\n");
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[3].pc_instance.clk)\n");
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.fetcher_instance.clk)\n");
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.decoder_instance.clk)\n");
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.scheduler_instance.clk)\n");
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[0].alu_instance.clk)\n");
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[0].lsu_instance.clk)\n");
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[0].register_instance.clk)\n");
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[0].pc_instance.clk)\n");
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[1].alu_instance.clk)\n");
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[1].lsu_instance.clk)\n");
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[1].register_instance.clk)\n");
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[1].pc_instance.clk)\n");
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[2].alu_instance.clk)\n");
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[2].lsu_instance.clk)\n");
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[2].register_instance.clk)\n");
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[2].pc_instance.clk)\n");
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[3].alu_instance.clk)\n");
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[3].lsu_instance.clk)\n");
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[3].register_instance.clk)\n");
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[3].pc_instance.clk)\n");
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top_stub.dut.dcr_instance.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_top_stub.dut.data_memory_controller.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_top_stub.dut.program_memory_controller.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_top_stub.dut.dispatch_instance.clk)\n");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.fetcher_instance.clk)\n");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.decoder_instance.clk)\n");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.scheduler_instance.clk)\n");
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[0].alu_instance.clk)\n");
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[0].lsu_instance.clk)\n");
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[0].register_instance.clk)\n");
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[0].pc_instance.clk)\n");
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[1].alu_instance.clk)\n");
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[1].lsu_instance.clk)\n");
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[1].register_instance.clk)\n");
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[1].pc_instance.clk)\n");
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[2].alu_instance.clk)\n");
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[2].lsu_instance.clk)\n");
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[2].register_instance.clk)\n");
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[2].pc_instance.clk)\n");
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[3].alu_instance.clk)\n");
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[3].lsu_instance.clk)\n");
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[3].register_instance.clk)\n");
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(posedge tb_top_stub.dut.cores[0].core_instance.threads[3].pc_instance.clk)\n");
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.fetcher_instance.clk)\n");
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.decoder_instance.clk)\n");
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.scheduler_instance.clk)\n");
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[0].alu_instance.clk)\n");
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[0].lsu_instance.clk)\n");
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[0].register_instance.clk)\n");
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[0].pc_instance.clk)\n");
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[1].alu_instance.clk)\n");
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[1].lsu_instance.clk)\n");
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[1].register_instance.clk)\n");
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[1].pc_instance.clk)\n");
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[2].alu_instance.clk)\n");
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[2].lsu_instance.clk)\n");
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[2].register_instance.clk)\n");
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[2].pc_instance.clk)\n");
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[3].alu_instance.clk)\n");
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[3].lsu_instance.clk)\n");
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[3].register_instance.clk)\n");
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @(posedge tb_top_stub.dut.cores[1].core_instance.threads[3].pc_instance.clk)\n");
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_top_stub__DOT__clk = 0;
    vlSelf->tb_top_stub__DOT__reset = 0;
    vlSelf->tb_top_stub__DOT__start = 0;
    vlSelf->tb_top_stub__DOT__done = 0;
    vlSelf->tb_top_stub__DOT__device_control_write_enable = 0;
    vlSelf->tb_top_stub__DOT__device_control_data = 0;
    vlSelf->tb_top_stub__DOT__program_mem_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__program_mem_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__program_mem_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__program_mem_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__data_mem_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__data_mem_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__data_mem_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__data_mem_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__data_mem_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__data_mem_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__data_mem_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__data_mem_write_ready = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__clk = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__reset = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__start = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__done = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__device_control_write_enable = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__device_control_data = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_mem_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_mem_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__program_mem_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_mem_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_mem_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_mem_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_mem_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_mem_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_mem_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_mem_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_mem_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_mem_write_ready = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__thread_count = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__core_start = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__core_reset = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__core_done = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__core_block_id[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__core_thread_count[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__lsu_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__lsu_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__lsu_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__lsu_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__lsu_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__lsu_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__lsu_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__lsu_write_ready = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__fetcher_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__fetcher_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__fetcher_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__fetcher_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__pmc_mem_write_valid_dummy = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__pmc_mem_write_address_dummy[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__pmc_mem_write_data_dummy[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__pmc_mem_write_ready_dummy = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_data[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__reset = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_write_enable = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_data = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__thread_count = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_register = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__reset = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__reset = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_ready = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1e00fab__0 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_ha2779ebd__0 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb6bf7dd6__0 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__0 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1e00fab__1 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_he2d7c88a__0 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1ea3a47__0 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hfd2c729e__0 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__1 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_ha2779ebd__1 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__2 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_he2d7c88a__1 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__3 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__4 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__5 = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__reset = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__thread_count = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_done = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__total_blocks = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_dispatched = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_done = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bn_next = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy_next = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_r = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_next = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_r = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_next = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_next[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_next[__Vi0] = 0;
    }
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_r = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_next = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__fetcher_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__decoder_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__scheduler_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__alu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__lsu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__register_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__pc_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__alu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__lsu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__register_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__pc_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__alu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__lsu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__register_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__pc_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__alu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__lsu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__register_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__pc_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__fetcher_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__decoder_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__scheduler_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__alu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__lsu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__register_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__pc_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__alu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__lsu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__register_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__pc_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__alu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__lsu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__register_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__pc_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__alu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__lsu_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__register_instance__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__pc_instance__DOT__clk__0 = 0;
}
