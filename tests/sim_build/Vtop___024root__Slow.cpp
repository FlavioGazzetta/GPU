// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__WRITE_ENABLE;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__IDLE;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__READ_WAITING;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__WRITE_WAITING;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__READ_RELAYING;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__WRITE_RELAYING;
constexpr CData/*0:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__WRITE_ENABLE;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__IDLE;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__READ_WAITING;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__WRITE_WAITING;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__READ_RELAYING;
constexpr CData/*2:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__WRITE_RELAYING;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__DATA_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__DATA_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__DATA_MEM_NUM_CHANNELS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__PROGRAM_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__PROGRAM_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__PROGRAM_MEM_NUM_CHANNELS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__NUM_CORES;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__NUM_LSUS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__NUM_FETCHERS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__lsu_xbar__BRA__0__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__lsu_xbar__BRA__1__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__lsu_xbar__BRA__2__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__lsu_xbar__BRA__3__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__lsu_xbar__BRA__0__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__lsu_xbar__BRA__1__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__lsu_xbar__BRA__2__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__lsu_xbar__BRA__3__KET____DOT__lsu_index;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__ADDR_BITS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__DATA_BITS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__NUM_CONSUMERS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__NUM_CHANNELS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__ADDR_BITS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__DATA_BITS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__NUM_CONSUMERS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__NUM_CHANNELS;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__NUM_CORES;
constexpr IData/*31:0*/ Vtop___024root::tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__THREADS_PER_BLOCK;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
