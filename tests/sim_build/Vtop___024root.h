// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop_core;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_core* __PVT__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance;
    Vtop_core* __PVT__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top_stub__DOT__clk;
        CData/*0:0*/ tb_top_stub__DOT__reset;
        CData/*0:0*/ tb_top_stub__DOT__start;
        CData/*0:0*/ tb_top_stub__DOT__done;
        CData/*0:0*/ tb_top_stub__DOT__device_control_write_enable;
        CData/*7:0*/ tb_top_stub__DOT__device_control_data;
        CData/*0:0*/ tb_top_stub__DOT__program_mem_read_valid;
        CData/*0:0*/ tb_top_stub__DOT__program_mem_read_ready;
        CData/*3:0*/ tb_top_stub__DOT__data_mem_read_valid;
        CData/*3:0*/ tb_top_stub__DOT__data_mem_read_ready;
        CData/*3:0*/ tb_top_stub__DOT__data_mem_write_valid;
        CData/*3:0*/ tb_top_stub__DOT__data_mem_write_ready;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__clk;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__reset;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__start;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__done;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__device_control_write_enable;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__device_control_data;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_mem_read_valid;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_mem_read_ready;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__data_mem_read_valid;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__data_mem_read_ready;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__data_mem_write_valid;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__data_mem_write_ready;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__thread_count;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__core_start;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__core_reset;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__core_done;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__lsu_read_valid;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__lsu_read_ready;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__lsu_write_valid;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__lsu_write_ready;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__fetcher_read_valid;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__fetcher_read_ready;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__pmc_mem_write_valid_dummy;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__pmc_mem_write_ready_dummy;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__reset;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_write_enable;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_data;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__thread_count;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__device_control_register;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__reset;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_valid;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_ready;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_valid;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_ready;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_valid;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_ready;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_valid;
        CData/*3:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_ready;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__channel_serving_consumer;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__reset;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_valid;
    };
    struct {
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_ready;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_valid;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_ready;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_valid;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_ready;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_valid;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_ready;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__channel_serving_consumer;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1e00fab__0;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_ha2779ebd__0;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb6bf7dd6__0;
        CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__0;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1e00fab__1;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_he2d7c88a__0;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hb1ea3a47__0;
        CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__1;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_ha2779ebd__1;
        CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__2;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_he2d7c88a__1;
        CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__3;
        CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__4;
        CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_h1c2d826c__5;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__reset;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__thread_count;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_done;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__total_blocks;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_dispatched;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__blocks_done;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bd_next;
        CData/*7:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__bn_next;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_busy_next;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_r;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_start_next;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_r;
        CData/*1:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_reset_next;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_r;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__done_next;
        CData/*0:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__start_execution;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__dcr_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__fetcher_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__decoder_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__scheduler_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__alu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__lsu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__register_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__0__KET____DOT__pc_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__alu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__lsu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__register_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__1__KET____DOT__pc_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__alu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__lsu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__register_instance__DOT__clk__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__2__KET____DOT__pc_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__alu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__lsu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__register_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__threads__BRA__3__KET____DOT__pc_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__fetcher_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__decoder_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__scheduler_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__alu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__lsu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__register_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__0__KET____DOT__pc_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__alu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__lsu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__register_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__1__KET____DOT__pc_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__alu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__lsu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__register_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__2__KET____DOT__pc_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__alu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__lsu_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__register_instance__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__threads__BRA__3__KET____DOT__pc_instance__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT____Vlvbound_hfd2c729e__0;
        IData/*31:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j;
        IData/*31:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j;
        IData/*31:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 1> tb_top_stub__DOT__program_mem_read_address;
        VlUnpacked<SData/*15:0*/, 1> tb_top_stub__DOT__program_mem_read_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__data_mem_read_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__data_mem_read_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__data_mem_write_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__data_mem_write_data;
        VlUnpacked<CData/*7:0*/, 1> tb_top_stub__DOT__dut__DOT__program_mem_read_address;
        VlUnpacked<SData/*15:0*/, 1> tb_top_stub__DOT__dut__DOT__program_mem_read_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__data_mem_read_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__data_mem_read_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__data_mem_write_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__data_mem_write_data;
        VlUnpacked<CData/*7:0*/, 2> tb_top_stub__DOT__dut__DOT__core_block_id;
        VlUnpacked<CData/*2:0*/, 2> tb_top_stub__DOT__dut__DOT__core_thread_count;
        VlUnpacked<CData/*7:0*/, 8> tb_top_stub__DOT__dut__DOT__lsu_read_address;
        VlUnpacked<CData/*7:0*/, 8> tb_top_stub__DOT__dut__DOT__lsu_read_data;
        VlUnpacked<CData/*7:0*/, 8> tb_top_stub__DOT__dut__DOT__lsu_write_address;
        VlUnpacked<CData/*7:0*/, 8> tb_top_stub__DOT__dut__DOT__lsu_write_data;
        VlUnpacked<CData/*7:0*/, 2> tb_top_stub__DOT__dut__DOT__fetcher_read_address;
        VlUnpacked<SData/*15:0*/, 2> tb_top_stub__DOT__dut__DOT__fetcher_read_data;
        VlUnpacked<CData/*7:0*/, 1> tb_top_stub__DOT__dut__DOT__pmc_mem_write_address_dummy;
        VlUnpacked<SData/*15:0*/, 1> tb_top_stub__DOT__dut__DOT__pmc_mem_write_data_dummy;
        VlUnpacked<SData/*15:0*/, 2> tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_data;
        VlUnpacked<CData/*7:0*/, 2> tb_top_stub__DOT__dut__DOT____Vcellinp__program_memory_controller__consumer_write_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data;
        VlUnpacked<CData/*7:0*/, 8> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_address;
        VlUnpacked<CData/*7:0*/, 8> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data;
        VlUnpacked<CData/*7:0*/, 8> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_address;
        VlUnpacked<CData/*7:0*/, 8> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_write_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_data;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address;
        VlUnpacked<CData/*7:0*/, 4> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data;
        VlUnpacked<CData/*2:0*/, 4> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state;
        VlUnpacked<CData/*2:0*/, 4> tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer;
        VlUnpacked<CData/*7:0*/, 2> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_address;
        VlUnpacked<SData/*15:0*/, 2> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data;
        VlUnpacked<CData/*7:0*/, 2> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_address;
        VlUnpacked<SData/*15:0*/, 2> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_write_data;
        VlUnpacked<CData/*7:0*/, 1> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address;
        VlUnpacked<SData/*15:0*/, 1> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_data;
        VlUnpacked<CData/*7:0*/, 1> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address;
        VlUnpacked<SData/*15:0*/, 1> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data;
        VlUnpacked<CData/*2:0*/, 1> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state;
        VlUnpacked<CData/*0:0*/, 1> tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer;
        VlUnpacked<CData/*7:0*/, 2> tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id;
        VlUnpacked<CData/*2:0*/, 2> tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count;
        VlUnpacked<CData/*7:0*/, 2> tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r;
        VlUnpacked<CData/*2:0*/, 2> tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r;
        VlUnpacked<CData/*7:0*/, 2> tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_next;
        VlUnpacked<CData/*2:0*/, 2> tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_next;
    };
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 4>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_read_address;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 4>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_address;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 4>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__mem_write_data;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 8>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__consumer_read_data;
    VlNBACommitQueue<VlUnpacked<CData/*2:0*/, 4>, false, CData/*2:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__current_consumer;
    VlNBACommitQueue<VlUnpacked<CData/*2:0*/, 4>, false, CData/*2:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__controller_state;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 1>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_read_address;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 1>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_address;
    VlNBACommitQueue<VlUnpacked<SData/*15:0*/, 1>, false, SData/*15:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__mem_write_data;
    VlNBACommitQueue<VlUnpacked<SData/*15:0*/, 2>, false, SData/*15:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__consumer_read_data;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 1>, false, CData/*0:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__current_consumer;
    VlNBACommitQueue<VlUnpacked<CData/*2:0*/, 1>, false, CData/*2:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__controller_state;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 2>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_block_id_r;
    VlNBACommitQueue<VlUnpacked<CData/*2:0*/, 2>, false, CData/*2:0*/, 1> __VdlyCommitQueuetb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__core_thread_count_r;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<43> __VactTriggered;
    VlTriggerVec<43> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*0:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__WRITE_ENABLE = 1U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__IDLE = 0U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__READ_WAITING = 2U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__WRITE_WAITING = 3U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__READ_RELAYING = 4U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__WRITE_RELAYING = 5U;
    static constexpr CData/*0:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__WRITE_ENABLE = 0U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__IDLE = 0U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__READ_WAITING = 2U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__WRITE_WAITING = 3U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__READ_RELAYING = 4U;
    static constexpr CData/*2:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__WRITE_RELAYING = 5U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__DATA_MEM_ADDR_BITS = 8U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__DATA_MEM_DATA_BITS = 8U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__DATA_MEM_NUM_CHANNELS = 4U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__PROGRAM_MEM_ADDR_BITS = 8U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__PROGRAM_MEM_DATA_BITS = 0x00000010U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__PROGRAM_MEM_NUM_CHANNELS = 1U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__NUM_CORES = 2U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__THREADS_PER_BLOCK = 4U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__NUM_LSUS = 8U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__NUM_FETCHERS = 2U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__lsu_xbar__BRA__0__KET____DOT__lsu_index = 0U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__lsu_xbar__BRA__1__KET____DOT__lsu_index = 1U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__lsu_xbar__BRA__2__KET____DOT__lsu_index = 2U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__lsu_xbar__BRA__3__KET____DOT__lsu_index = 3U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__lsu_xbar__BRA__0__KET____DOT__lsu_index = 4U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__lsu_xbar__BRA__1__KET____DOT__lsu_index = 5U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__lsu_xbar__BRA__2__KET____DOT__lsu_index = 6U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__lsu_xbar__BRA__3__KET____DOT__lsu_index = 7U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__ADDR_BITS = 8U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__DATA_BITS = 8U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__NUM_CONSUMERS = 8U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__data_memory_controller__DOT__NUM_CHANNELS = 4U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__ADDR_BITS = 8U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__DATA_BITS = 0x00000010U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__NUM_CONSUMERS = 2U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__program_memory_controller__DOT__NUM_CHANNELS = 1U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__NUM_CORES = 2U;
    static constexpr IData/*31:0*/ tb_top_stub__DOT__dut__DOT__dispatch_instance__DOT__THREADS_PER_BLOCK = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
