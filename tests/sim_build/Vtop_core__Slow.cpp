// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_core.h"

// Parameter definitions for Vtop_core
constexpr CData/*2:0*/ Vtop_core::fetcher_instance__DOT__IDLE;
constexpr CData/*2:0*/ Vtop_core::fetcher_instance__DOT__FETCHING;
constexpr CData/*2:0*/ Vtop_core::fetcher_instance__DOT__FETCHED;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__NOP;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__BRnzp;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__CMP;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__ADD;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__SUB;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__MUL;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__DIV;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__LDR;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__STR;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__CONST;
constexpr CData/*3:0*/ Vtop_core::decoder_instance__DOT__RET;
constexpr CData/*2:0*/ Vtop_core::scheduler_instance__DOT__IDLE;
constexpr CData/*2:0*/ Vtop_core::scheduler_instance__DOT__FETCH;
constexpr CData/*2:0*/ Vtop_core::scheduler_instance__DOT__DECODE;
constexpr CData/*2:0*/ Vtop_core::scheduler_instance__DOT__REQUEST;
constexpr CData/*2:0*/ Vtop_core::scheduler_instance__DOT__WAIT;
constexpr CData/*2:0*/ Vtop_core::scheduler_instance__DOT__EXECUTE;
constexpr CData/*2:0*/ Vtop_core::scheduler_instance__DOT__UPDATE;
constexpr CData/*2:0*/ Vtop_core::scheduler_instance__DOT__DONE_S;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__alu_instance__DOT__ADD;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__alu_instance__DOT__SUB;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__alu_instance__DOT__MUL;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__alu_instance__DOT__DIV;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__lsu_instance__DOT__IDLE;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__lsu_instance__DOT__REQUESTING;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__lsu_instance__DOT__WAITING;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__lsu_instance__DOT__DONE;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__register_instance__DOT__ARITHMETIC;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__register_instance__DOT__MEMORY;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__0__KET____DOT__register_instance__DOT__CONSTANT;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__alu_instance__DOT__ADD;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__alu_instance__DOT__SUB;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__alu_instance__DOT__MUL;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__alu_instance__DOT__DIV;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__lsu_instance__DOT__IDLE;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__lsu_instance__DOT__REQUESTING;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__lsu_instance__DOT__WAITING;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__lsu_instance__DOT__DONE;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__register_instance__DOT__ARITHMETIC;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__register_instance__DOT__MEMORY;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__1__KET____DOT__register_instance__DOT__CONSTANT;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__alu_instance__DOT__ADD;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__alu_instance__DOT__SUB;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__alu_instance__DOT__MUL;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__alu_instance__DOT__DIV;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__lsu_instance__DOT__IDLE;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__lsu_instance__DOT__REQUESTING;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__lsu_instance__DOT__WAITING;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__lsu_instance__DOT__DONE;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__register_instance__DOT__ARITHMETIC;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__register_instance__DOT__MEMORY;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__2__KET____DOT__register_instance__DOT__CONSTANT;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__alu_instance__DOT__ADD;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__alu_instance__DOT__SUB;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__alu_instance__DOT__MUL;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__alu_instance__DOT__DIV;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__lsu_instance__DOT__IDLE;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__lsu_instance__DOT__REQUESTING;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__lsu_instance__DOT__WAITING;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__lsu_instance__DOT__DONE;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__register_instance__DOT__ARITHMETIC;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__register_instance__DOT__MEMORY;
constexpr CData/*1:0*/ Vtop_core::threads__BRA__3__KET____DOT__register_instance__DOT__CONSTANT;
constexpr IData/*31:0*/ Vtop_core::DATA_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop_core::DATA_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::PROGRAM_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop_core::PROGRAM_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop_core::fetcher_instance__DOT__PROGRAM_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop_core::fetcher_instance__DOT__PROGRAM_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::scheduler_instance__DOT__THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__0__KET____DOT__register_instance__DOT__THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__0__KET____DOT__register_instance__DOT__THREAD_ID;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__0__KET____DOT__register_instance__DOT__DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__0__KET____DOT__pc_instance__DOT__DATA_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__0__KET____DOT__pc_instance__DOT__PROGRAM_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__1__KET____DOT__register_instance__DOT__THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__1__KET____DOT__register_instance__DOT__THREAD_ID;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__1__KET____DOT__register_instance__DOT__DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__1__KET____DOT__pc_instance__DOT__DATA_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__1__KET____DOT__pc_instance__DOT__PROGRAM_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__2__KET____DOT__register_instance__DOT__THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__2__KET____DOT__register_instance__DOT__THREAD_ID;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__2__KET____DOT__register_instance__DOT__DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__2__KET____DOT__pc_instance__DOT__DATA_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__2__KET____DOT__pc_instance__DOT__PROGRAM_MEM_ADDR_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__3__KET____DOT__register_instance__DOT__THREADS_PER_BLOCK;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__3__KET____DOT__register_instance__DOT__THREAD_ID;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__3__KET____DOT__register_instance__DOT__DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__3__KET____DOT__pc_instance__DOT__DATA_MEM_DATA_BITS;
constexpr IData/*31:0*/ Vtop_core::threads__BRA__3__KET____DOT__pc_instance__DOT__PROGRAM_MEM_ADDR_BITS;


void Vtop_core___ctor_var_reset(Vtop_core* vlSelf);

Vtop_core::Vtop_core(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_core___ctor_var_reset(this);
}

void Vtop_core::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_core::~Vtop_core() {
}
