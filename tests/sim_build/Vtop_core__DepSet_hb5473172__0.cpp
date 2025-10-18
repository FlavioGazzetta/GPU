// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_core.h"

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fetcher_instance__DOT__fetcher_state;
    __Vdly__fetcher_instance__DOT__fetcher_state = 0;
    CData/*0:0*/ __Vdly__fetcher_instance__DOT__mem_read_valid;
    __Vdly__fetcher_instance__DOT__mem_read_valid = 0;
    CData/*7:0*/ __Vdly__fetcher_instance__DOT__mem_read_address;
    __Vdly__fetcher_instance__DOT__mem_read_address = 0;
    CData/*0:0*/ __Vdly__fetcher_instance__DOT__p_valid;
    __Vdly__fetcher_instance__DOT__p_valid = 0;
    CData/*7:0*/ __Vdly__fetcher_instance__DOT__p_pc;
    __Vdly__fetcher_instance__DOT__p_pc = 0;
    SData/*15:0*/ __Vdly__fetcher_instance__DOT__p_instr;
    __Vdly__fetcher_instance__DOT__p_instr = 0;
    CData/*0:0*/ __Vdly__fetcher_instance__DOT__txn_kind;
    __Vdly__fetcher_instance__DOT__txn_kind = 0;
    // Body
    __Vdly__fetcher_instance__DOT__p_valid = vlSelfRef.fetcher_instance__DOT__p_valid;
    __Vdly__fetcher_instance__DOT__p_pc = vlSelfRef.fetcher_instance__DOT__p_pc;
    __Vdly__fetcher_instance__DOT__p_instr = vlSelfRef.fetcher_instance__DOT__p_instr;
    __Vdly__fetcher_instance__DOT__txn_kind = vlSelfRef.fetcher_instance__DOT__txn_kind;
    __Vdly__fetcher_instance__DOT__fetcher_state = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    __Vdly__fetcher_instance__DOT__mem_read_valid = vlSelfRef.fetcher_instance__DOT__mem_read_valid;
    __Vdly__fetcher_instance__DOT__mem_read_address 
        = vlSelfRef.fetcher_instance__DOT__mem_read_address;
    if (vlSelfRef.fetcher_instance__DOT__reset) {
        __Vdly__fetcher_instance__DOT__fetcher_state = 0U;
        __Vdly__fetcher_instance__DOT__mem_read_valid = 0U;
        __Vdly__fetcher_instance__DOT__mem_read_address = 0U;
        vlSelfRef.fetcher_instance__DOT__instruction = 0U;
        __Vdly__fetcher_instance__DOT__p_valid = 0U;
        __Vdly__fetcher_instance__DOT__p_pc = 0U;
        __Vdly__fetcher_instance__DOT__p_instr = 0U;
        __Vdly__fetcher_instance__DOT__txn_kind = 0U;
    } else {
        if (((((IData)(vlSelfRef.fetcher_instance__DOT__spec_en) 
               & (~ (IData)(vlSelfRef.fetcher_instance__DOT__p_valid))) 
              & (1U != (IData)(vlSelfRef.fetcher_instance__DOT__fetcher_state))) 
             & (~ (IData)(vlSelfRef.fetcher_instance__DOT__mem_read_valid)))) {
            __Vdly__fetcher_instance__DOT__mem_read_valid = 1U;
            __Vdly__fetcher_instance__DOT__mem_read_address 
                = vlSelfRef.fetcher_instance__DOT__spec_pc;
            __Vdly__fetcher_instance__DOT__txn_kind = 1U;
        }
        if (((IData)(vlSelfRef.fetcher_instance__DOT__mem_read_valid) 
             & (IData)(vlSelfRef.fetcher_instance__DOT__mem_read_ready))) {
            __Vdly__fetcher_instance__DOT__mem_read_valid = 0U;
            if (vlSelfRef.fetcher_instance__DOT__txn_kind) {
                __Vdly__fetcher_instance__DOT__p_valid = 1U;
                __Vdly__fetcher_instance__DOT__p_pc 
                    = vlSelfRef.fetcher_instance__DOT__mem_read_address;
                __Vdly__fetcher_instance__DOT__p_instr 
                    = vlSelfRef.fetcher_instance__DOT__mem_read_data;
            } else {
                vlSelfRef.fetcher_instance__DOT__instruction 
                    = vlSelfRef.fetcher_instance__DOT__mem_read_data;
                __Vdly__fetcher_instance__DOT__fetcher_state = 2U;
            }
        }
        if ((0U == (IData)(vlSelfRef.fetcher_instance__DOT__fetcher_state))) {
            if ((1U == (IData)(vlSelfRef.fetcher_instance__DOT__core_state))) {
                if (((IData)(vlSelfRef.fetcher_instance__DOT__p_valid) 
                     & ((IData)(vlSelfRef.fetcher_instance__DOT__p_pc) 
                        == (IData)(vlSelfRef.fetcher_instance__DOT__current_pc)))) {
                    vlSelfRef.fetcher_instance__DOT__instruction 
                        = vlSelfRef.fetcher_instance__DOT__p_instr;
                    __Vdly__fetcher_instance__DOT__p_valid = 0U;
                    __Vdly__fetcher_instance__DOT__fetcher_state = 2U;
                } else {
                    __Vdly__fetcher_instance__DOT__mem_read_valid = 1U;
                    __Vdly__fetcher_instance__DOT__mem_read_address 
                        = vlSelfRef.fetcher_instance__DOT__current_pc;
                    __Vdly__fetcher_instance__DOT__txn_kind = 0U;
                    __Vdly__fetcher_instance__DOT__fetcher_state = 1U;
                }
            }
        } else if ((1U != (IData)(vlSelfRef.fetcher_instance__DOT__fetcher_state))) {
            if ((2U == (IData)(vlSelfRef.fetcher_instance__DOT__fetcher_state))) {
                if ((2U == (IData)(vlSelfRef.fetcher_instance__DOT__core_state))) {
                    __Vdly__fetcher_instance__DOT__fetcher_state = 0U;
                }
            }
        }
    }
    vlSelfRef.fetcher_instance__DOT__p_valid = __Vdly__fetcher_instance__DOT__p_valid;
    vlSelfRef.fetcher_instance__DOT__p_pc = __Vdly__fetcher_instance__DOT__p_pc;
    vlSelfRef.fetcher_instance__DOT__p_instr = __Vdly__fetcher_instance__DOT__p_instr;
    vlSelfRef.fetcher_instance__DOT__txn_kind = __Vdly__fetcher_instance__DOT__txn_kind;
    vlSelfRef.fetcher_instance__DOT__fetcher_state 
        = __Vdly__fetcher_instance__DOT__fetcher_state;
    vlSelfRef.fetcher_instance__DOT__mem_read_valid 
        = __Vdly__fetcher_instance__DOT__mem_read_valid;
    vlSelfRef.fetcher_instance__DOT__mem_read_address 
        = __Vdly__fetcher_instance__DOT__mem_read_address;
    vlSelfRef.fetcher_state = vlSelfRef.fetcher_instance__DOT__fetcher_state;
    vlSelfRef.instruction = vlSelfRef.fetcher_instance__DOT__instruction;
    vlSelfRef.program_mem_read_valid = vlSelfRef.fetcher_instance__DOT__mem_read_valid;
    vlSelfRef.program_mem_read_address = vlSelfRef.fetcher_instance__DOT__mem_read_address;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0;
    // Body
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    if (vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__reset) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt = 0U;
        __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0 = 1U;
    } else if (vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__enable) {
        __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 
            = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__block_id;
        __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16 = 1U;
        if ((3U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__core_state))) {
            vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs 
                = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers
                [vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address];
            vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt 
                = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers
                [vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address];
        }
        if ((6U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__core_state))) {
            if (((IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable) 
                 & (0x0dU > (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address)))) {
                __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 
                    = ((0U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                        ? (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__alu_out)
                        : ((1U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                            ? (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out)
                            : ((2U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                                ? (IData)(vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate)
                                : vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers
                               [vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address])));
                __VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 
                    = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address;
                __VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17 = 1U;
            }
        }
    }
    if (__VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0x0aU] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0x0bU] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0x0cU] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0x0dU] = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0x0eU] = 4U;
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0x0fU] = 0U;
    }
    if (__VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[0x0dU] 
            = __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__threads__BRA__0__KET____DOT__register_instance__DOT__registers__v17;
    }
    vlSelfRef.rs[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rt[0U] = vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__rt;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0;
    // Body
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    if (vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__reset) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt = 0U;
        __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0 = 1U;
    } else if (vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__enable) {
        __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 
            = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__block_id;
        __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16 = 1U;
        if ((3U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__core_state))) {
            vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs 
                = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers
                [vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address];
            vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt 
                = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers
                [vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address];
        }
        if ((6U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__core_state))) {
            if (((IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable) 
                 & (0x0dU > (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address)))) {
                __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 
                    = ((0U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                        ? (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__alu_out)
                        : ((1U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                            ? (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out)
                            : ((2U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                                ? (IData)(vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate)
                                : vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers
                               [vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address])));
                __VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 
                    = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address;
                __VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17 = 1U;
            }
        }
    }
    if (__VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0x0aU] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0x0bU] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0x0cU] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0x0dU] = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0x0eU] = 4U;
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0x0fU] = 1U;
    }
    if (__VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[0x0dU] 
            = __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__threads__BRA__1__KET____DOT__register_instance__DOT__registers__v17;
    }
    vlSelfRef.rs[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rt[1U] = vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__rt;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__4(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0;
    // Body
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    if (vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__reset) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt = 0U;
        __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0 = 1U;
    } else if (vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__enable) {
        __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 
            = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__block_id;
        __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16 = 1U;
        if ((3U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__core_state))) {
            vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs 
                = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers
                [vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address];
            vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt 
                = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers
                [vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address];
        }
        if ((6U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__core_state))) {
            if (((IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable) 
                 & (0x0dU > (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address)))) {
                __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 
                    = ((0U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                        ? (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__alu_out)
                        : ((1U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                            ? (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out)
                            : ((2U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                                ? (IData)(vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate)
                                : vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers
                               [vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address])));
                __VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 
                    = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address;
                __VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17 = 1U;
            }
        }
    }
    if (__VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0x0aU] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0x0bU] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0x0cU] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0x0dU] = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0x0eU] = 4U;
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0x0fU] = 2U;
    }
    if (__VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[0x0dU] 
            = __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__threads__BRA__2__KET____DOT__register_instance__DOT__registers__v17;
    }
    vlSelfRef.rs[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rt[2U] = vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__rt;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__5(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0;
    CData/*7:0*/ __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*3:0*/ __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0;
    // Body
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 0U;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 0U;
    __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 0U;
    if (vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__reset) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt = 0U;
        __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0 = 1U;
    } else if (vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__enable) {
        __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 
            = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__block_id;
        __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16 = 1U;
        if ((3U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__core_state))) {
            vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs 
                = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers
                [vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address];
            vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt 
                = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers
                [vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address];
        }
        if ((6U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__core_state))) {
            if (((IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable) 
                 & (0x0dU > (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address)))) {
                __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 
                    = ((0U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                        ? (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__alu_out)
                        : ((1U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                            ? (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out)
                            : ((2U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux))
                                ? (IData)(vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate)
                                : vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers
                               [vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address])));
                __VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 
                    = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address;
                __VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17 = 1U;
            }
        }
    }
    if (__VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v0) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[1U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[2U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[3U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[4U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[5U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[6U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[7U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[8U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[9U] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0x0aU] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0x0bU] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0x0cU] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0x0dU] = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0x0eU] = 4U;
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0x0fU] = 3U;
    }
    if (__VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[0x0dU] 
            = __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v16;
    }
    if (__VdlySet__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17) {
        vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__registers[__VdlyDim0__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17] 
            = __VdlyVal__threads__BRA__3__KET____DOT__register_instance__DOT__registers__v17;
    }
    vlSelfRef.rs[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rs;
    vlSelfRef.rt[3U] = vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__rt;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__6(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__scheduler_instance__DOT__core_state;
    __Vdly__scheduler_instance__DOT__core_state = 0;
    // Body
    __Vdly__scheduler_instance__DOT__core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    if (vlSelfRef.scheduler_instance__DOT__reset) {
        vlSelfRef.scheduler_instance__DOT__current_pc = 0U;
        __Vdly__scheduler_instance__DOT__core_state = 0U;
        vlSelfRef.scheduler_instance__DOT__done = 0U;
    } else if ((4U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
        if ((2U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
            if ((1U & (~ (IData)(vlSelfRef.scheduler_instance__DOT__core_state)))) {
                if (vlSelfRef.scheduler_instance__DOT__decoded_ret) {
                    vlSelfRef.scheduler_instance__DOT__done = 1U;
                    __Vdly__scheduler_instance__DOT__core_state = 7U;
                } else {
                    vlSelfRef.scheduler_instance__DOT__current_pc 
                        = vlSelfRef.scheduler_instance__DOT__next_pc
                        [0U];
                    __Vdly__scheduler_instance__DOT__core_state = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
            __Vdly__scheduler_instance__DOT__core_state = 6U;
        } else {
            vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__any_lsu_waiting = 0U;
            vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                    if (((1U == vlSelfRef.scheduler_instance__DOT__lsu_state
                          [(3U & vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                         | (2U == vlSelfRef.scheduler_instance__DOT__lsu_state
                            [(3U & vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)]))) {
                        vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__any_lsu_waiting = 1U;
                        goto __Vlabel0;
                    }
                    vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                        = ((IData)(1U) + vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
                }
                __Vlabel0: ;
            }
            if ((1U & (~ (IData)(vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__any_lsu_waiting)))) {
                __Vdly__scheduler_instance__DOT__core_state = 5U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
        __Vdly__scheduler_instance__DOT__core_state 
            = ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))
                ? 4U : 3U);
    } else if ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
        if ((2U == (IData)(vlSelfRef.scheduler_instance__DOT__fetcher_state))) {
            __Vdly__scheduler_instance__DOT__core_state = 2U;
        }
    } else if (vlSelfRef.scheduler_instance__DOT__start) {
        __Vdly__scheduler_instance__DOT__core_state = 1U;
    }
    vlSelfRef.scheduler_instance__DOT__core_state = __Vdly__scheduler_instance__DOT__core_state;
    vlSelfRef.current_pc = vlSelfRef.scheduler_instance__DOT__current_pc;
    vlSelfRef.done = vlSelfRef.scheduler_instance__DOT__done;
    vlSelfRef.core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    vlSelfRef.fetcher_instance__DOT__current_pc = vlSelfRef.current_pc;
    vlSelfRef.fetcher_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__7(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    // Body
    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    if (vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__reset) {
        __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
    } else if (vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__enable) {
        if (vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable) {
            if ((2U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                if ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((6U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state))) {
                        __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                    }
                } else if (vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready) {
                    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out 
                        = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data;
                    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address 
                    = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rs;
                __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
            } else if ((3U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state))) {
                __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
            }
        }
        if (vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable) {
            if ((2U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                if ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((6U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state))) {
                        __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                    }
                } else if (vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready) {
                    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                    __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state))) {
                vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address 
                    = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rs;
                vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data 
                    = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rt;
                __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
            } else if ((3U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state))) {
                __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
            }
        }
    }
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.data_mem_read_address[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_write_address[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_data[0U] = vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__8(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    // Body
    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    if (vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__reset) {
        __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
    } else if (vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__enable) {
        if (vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable) {
            if ((2U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                if ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((6U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state))) {
                        __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                    }
                } else if (vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready) {
                    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out 
                        = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data;
                    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address 
                    = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rs;
                __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
            } else if ((3U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state))) {
                __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
            }
        }
        if (vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable) {
            if ((2U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                if ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((6U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state))) {
                        __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                    }
                } else if (vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready) {
                    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                    __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state))) {
                vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address 
                    = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rs;
                vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data 
                    = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rt;
                __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
            } else if ((3U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state))) {
                __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
            }
        }
    }
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.data_mem_read_address[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_write_address[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_data[1U] = vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__9(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    // Body
    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    if (vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__reset) {
        __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
    } else if (vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__enable) {
        if (vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable) {
            if ((2U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                if ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((6U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state))) {
                        __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                    }
                } else if (vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_ready) {
                    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out 
                        = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_data;
                    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address 
                    = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rs;
                __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
            } else if ((3U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state))) {
                __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
            }
        }
        if (vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable) {
            if ((2U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                if ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((6U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state))) {
                        __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                    }
                } else if (vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_ready) {
                    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                    __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state))) {
                vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address 
                    = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rs;
                vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data 
                    = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rt;
                __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
            } else if ((3U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state))) {
                __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
            }
        }
    }
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.data_mem_read_address[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_write_address[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_data[2U] = vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__mem_write_data;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__10(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0;
    // Body
    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state 
        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    if (vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__reset) {
        __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data = 0U;
    } else if (vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__enable) {
        if (vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable) {
            if ((2U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                if ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((6U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state))) {
                        __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                    }
                } else if (vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_ready) {
                    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 0U;
                    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out 
                        = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_data;
                    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_valid = 1U;
                vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address 
                    = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rs;
                __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
            } else if ((3U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state))) {
                __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
            }
        }
        if (vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable) {
            if ((2U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                if ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                    if ((6U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state))) {
                        __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 0U;
                    }
                } else if (vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_ready) {
                    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 0U;
                    __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state))) {
                vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_valid = 1U;
                vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address 
                    = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rs;
                vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data 
                    = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rt;
                __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 2U;
            } else if ((3U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state))) {
                __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state = 1U;
            }
        }
    }
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state 
        = __Vdly__threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_state[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_state;
    vlSelfRef.lsu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__lsu_out;
    vlSelfRef.data_mem_read_address[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_read_address;
    vlSelfRef.data_mem_write_address[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_address;
    vlSelfRef.data_mem_write_data[3U] = vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__mem_write_data;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__13(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.decoder_instance__DOT__reset) {
        vlSelfRef.decoder_instance__DOT__decoded_ret = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_nzp = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_rt_address = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_rs_address = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_rd_address = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_pc_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_immediate = 0U;
    } else if ((2U == (IData)(vlSelfRef.decoder_instance__DOT__core_state))) {
        vlSelfRef.decoder_instance__DOT__decoded_ret = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_nzp 
            = (7U & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                     >> 9U));
        vlSelfRef.decoder_instance__DOT__decoded_rt_address 
            = (0x0000000fU & (IData)(vlSelfRef.decoder_instance__DOT__instruction));
        vlSelfRef.decoder_instance__DOT__decoded_rs_address 
            = (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                              >> 4U));
        vlSelfRef.decoder_instance__DOT__decoded_rd_address 
            = (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                              >> 8U));
        vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_pc_mux = 0U;
        vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable = 0U;
        if ((1U & (~ ((((((((0U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                   >> 0x0cU))) 
                            | (1U == (0x0000000fU & 
                                      ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                       >> 0x0cU)))) 
                           | (2U == (0x0000000fU & 
                                     ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                      >> 0x0cU)))) 
                          | (3U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                   >> 0x0cU)))) 
                         | (4U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                  >> 0x0cU)))) 
                        | (5U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                 >> 0x0cU)))) 
                       | (6U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                >> 0x0cU)))) 
                      | (7U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                               >> 0x0cU))))))) {
            if ((8U != (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                       >> 0x0cU)))) {
                if ((9U != (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                           >> 0x0cU)))) {
                    if ((0x0fU == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                  >> 0x0cU)))) {
                        vlSelfRef.decoder_instance__DOT__decoded_ret = 1U;
                    }
                }
            }
            if ((8U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                       >> 0x0cU)))) {
                vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable = 1U;
            }
        }
        vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable = 0U;
        if (((((((((0U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                          >> 0x0cU))) 
                   | (1U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                            >> 0x0cU)))) 
                  | (2U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                           >> 0x0cU)))) 
                 | (3U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                          >> 0x0cU)))) 
                | (4U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                         >> 0x0cU)))) 
               | (5U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                        >> 0x0cU)))) 
              | (6U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                       >> 0x0cU)))) 
             | (7U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                      >> 0x0cU))))) {
            if ((0U != (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                       >> 0x0cU)))) {
                if ((1U != (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                           >> 0x0cU)))) {
                    if ((2U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                               >> 0x0cU)))) {
                        vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux = 1U;
                        vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable = 1U;
                    }
                    if ((2U != (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                               >> 0x0cU)))) {
                        if ((3U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                   >> 0x0cU)))) {
                            vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 0U;
                            vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
                        } else if ((4U == (0x0000000fU 
                                           & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                              >> 0x0cU)))) {
                            vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 1U;
                            vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
                        } else if ((5U == (0x0000000fU 
                                           & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                              >> 0x0cU)))) {
                            vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 2U;
                            vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
                        } else if ((6U == (0x0000000fU 
                                           & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                              >> 0x0cU)))) {
                            vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux = 3U;
                            vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 0U;
                        } else {
                            vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 1U;
                        }
                        vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable = 1U;
                        if ((3U != (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                   >> 0x0cU)))) {
                            if ((4U != (0x0000000fU 
                                        & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                           >> 0x0cU)))) {
                                if ((5U != (0x0000000fU 
                                            & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                               >> 0x0cU)))) {
                                    if ((6U != (0x0000000fU 
                                                & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                                   >> 0x0cU)))) {
                                        vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                           >> 0x0cU)))) {
                    vlSelfRef.decoder_instance__DOT__decoded_pc_mux = 1U;
                }
            }
        } else if ((8U != (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                          >> 0x0cU)))) {
            if ((9U == (0x0000000fU & ((IData)(vlSelfRef.decoder_instance__DOT__instruction) 
                                       >> 0x0cU)))) {
                vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux = 2U;
                vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable = 1U;
            }
        }
        vlSelfRef.decoder_instance__DOT__decoded_immediate 
            = (0x000000ffU & (IData)(vlSelfRef.decoder_instance__DOT__instruction));
    }
    vlSelfRef.decoded_ret = vlSelfRef.decoder_instance__DOT__decoded_ret;
    vlSelfRef.decoded_alu_output_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_output_mux;
    vlSelfRef.decoded_alu_arithmetic_mux = vlSelfRef.decoder_instance__DOT__decoded_alu_arithmetic_mux;
    vlSelfRef.decoded_reg_input_mux = vlSelfRef.decoder_instance__DOT__decoded_reg_input_mux;
    vlSelfRef.decoded_reg_write_enable = vlSelfRef.decoder_instance__DOT__decoded_reg_write_enable;
    vlSelfRef.decoded_nzp = vlSelfRef.decoder_instance__DOT__decoded_nzp;
    vlSelfRef.decoded_rt_address = vlSelfRef.decoder_instance__DOT__decoded_rt_address;
    vlSelfRef.decoded_rs_address = vlSelfRef.decoder_instance__DOT__decoded_rs_address;
    vlSelfRef.decoded_rd_address = vlSelfRef.decoder_instance__DOT__decoded_rd_address;
    vlSelfRef.decoded_nzp_write_enable = vlSelfRef.decoder_instance__DOT__decoded_nzp_write_enable;
    vlSelfRef.decoded_pc_mux = vlSelfRef.decoder_instance__DOT__decoded_pc_mux;
    vlSelfRef.decoded_mem_write_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_write_enable;
    vlSelfRef.decoded_mem_read_enable = vlSelfRef.decoder_instance__DOT__decoded_mem_read_enable;
    vlSelfRef.decoded_immediate = vlSelfRef.decoder_instance__DOT__decoded_immediate;
    vlSelfRef.scheduler_instance__DOT__decoded_ret 
        = vlSelfRef.decoded_ret;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux 
        = vlSelfRef.decoded_reg_input_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable 
        = vlSelfRef.decoded_reg_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address 
        = vlSelfRef.decoded_rt_address;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address 
        = vlSelfRef.decoded_rs_address;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address 
        = vlSelfRef.decoded_rd_address;
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
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__14(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__reset) {
        vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__nzp = 0U;
    } else if (vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__enable) {
        if ((5U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__core_state))) {
            vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc 
                = (0x000000ffU & ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux)
                                   ? ((0U != ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__nzp) 
                                              & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp)))
                                       ? (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate)
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__current_pc)))
                                   : ((IData)(1U) + (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__current_pc))));
        }
        if ((6U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__core_state))) {
            if (vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable) {
                vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__nzp 
                    = (7U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out));
            }
        }
    }
    vlSelfRef.next_pc[0U] = vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__next_pc;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__15(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__reset) {
        vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__nzp = 0U;
    } else if (vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__enable) {
        if ((5U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__core_state))) {
            vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc 
                = (0x000000ffU & ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux)
                                   ? ((0U != ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__nzp) 
                                              & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp)))
                                       ? (IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate)
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__current_pc)))
                                   : ((IData)(1U) + (IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__current_pc))));
        }
        if ((6U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__core_state))) {
            if (vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable) {
                vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__nzp 
                    = (7U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out));
            }
        }
    }
    vlSelfRef.next_pc[1U] = vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__next_pc;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__16(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__reset) {
        vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__nzp = 0U;
    } else if (vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__enable) {
        if ((5U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__core_state))) {
            vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc 
                = (0x000000ffU & ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux)
                                   ? ((0U != ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__nzp) 
                                              & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp)))
                                       ? (IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate)
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__current_pc)))
                                   : ((IData)(1U) + (IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__current_pc))));
        }
        if ((6U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__core_state))) {
            if (vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable) {
                vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__nzp 
                    = (7U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out));
            }
        }
    }
    vlSelfRef.next_pc[2U] = vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__next_pc;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__17(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__reset) {
        vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc = 0U;
        vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__nzp = 0U;
    } else if (vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__enable) {
        if ((5U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__core_state))) {
            vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc 
                = (0x000000ffU & ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux)
                                   ? ((0U != ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__nzp) 
                                              & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp)))
                                       ? (IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate)
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__current_pc)))
                                   : ((IData)(1U) + (IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__current_pc))));
        }
        if ((6U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__core_state))) {
            if (vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable) {
                vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__nzp 
                    = (7U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out));
            }
        }
    }
    vlSelfRef.next_pc[3U] = vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__next_pc;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__18(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__reset) {
        vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out = 0U;
    } else if (vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable) {
        if ((5U == (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__core_state))) {
            if (vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux) {
                vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff 
                    = (0x000001ffU & ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs) 
                                      - (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt)));
                vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out 
                    = ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff))) 
                        << 2U) | (((0U == VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff))) 
                                   << 1U) | VL_GTS_III(32, 0U, 
                                                       VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff)))));
            } else {
                vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out 
                    = (0x000000ffU & ((2U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                       ? ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                           ? VL_DIV_III(8, (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs), (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt))
                                           : ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs) 
                                              * (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt)))
                                       : ((1U & (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                           ? ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs) 
                                              - (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt))
                                           : ((IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs) 
                                              + (IData)(vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt)))));
            }
        }
    }
    vlSelfRef.alu_out[0U] = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__alu_out;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__19(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__reset) {
        vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out = 0U;
    } else if (vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable) {
        if ((5U == (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__core_state))) {
            if (vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux) {
                vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff 
                    = (0x000001ffU & ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs) 
                                      - (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt)));
                vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out 
                    = ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff))) 
                        << 2U) | (((0U == VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff))) 
                                   << 1U) | VL_GTS_III(32, 0U, 
                                                       VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff)))));
            } else {
                vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out 
                    = (0x000000ffU & ((2U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                       ? ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                           ? VL_DIV_III(8, (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs), (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt))
                                           : ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs) 
                                              * (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt)))
                                       : ((1U & (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                           ? ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs) 
                                              - (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt))
                                           : ((IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs) 
                                              + (IData)(vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt)))));
            }
        }
    }
    vlSelfRef.alu_out[1U] = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__alu_out;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__20(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__reset) {
        vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out = 0U;
    } else if (vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable) {
        if ((5U == (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__core_state))) {
            if (vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux) {
                vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff 
                    = (0x000001ffU & ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs) 
                                      - (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt)));
                vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out 
                    = ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff))) 
                        << 2U) | (((0U == VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff))) 
                                   << 1U) | VL_GTS_III(32, 0U, 
                                                       VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff)))));
            } else {
                vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out 
                    = (0x000000ffU & ((2U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                       ? ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                           ? VL_DIV_III(8, (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs), (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt))
                                           : ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs) 
                                              * (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt)))
                                       : ((1U & (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                           ? ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs) 
                                              - (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt))
                                           : ((IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs) 
                                              + (IData)(vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt)))));
            }
        }
    }
    vlSelfRef.alu_out[2U] = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__alu_out;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__21(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__reset) {
        vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out = 0U;
    } else if (vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable) {
        if ((5U == (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__core_state))) {
            if (vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux) {
                vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff 
                    = (0x000001ffU & ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs) 
                                      - (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt)));
                vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out 
                    = ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff))) 
                        << 2U) | (((0U == VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff))) 
                                   << 1U) | VL_GTS_III(32, 0U, 
                                                       VL_EXTENDS_II(32,9, (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__unnamedblk1__DOT__diff)))));
            } else {
                vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out 
                    = (0x000000ffU & ((2U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                       ? ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                           ? VL_DIV_III(8, (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs), (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt))
                                           : ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs) 
                                              * (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt)))
                                       : ((1U & (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux))
                                           ? ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs) 
                                              - (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt))
                                           : ((IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs) 
                                              + (IData)(vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt)))));
            }
        }
    }
    vlSelfRef.alu_out[3U] = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__alu_out;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__22(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fetcher_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__block_id 
        = vlSelfRef.block_id;
    vlSelfRef.scheduler_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.scheduler_instance__DOT__start = vlSelfRef.start;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.decoder_instance__DOT__reset = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__enable 
        = (0U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__enable 
        = (1U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__enable 
        = (2U < (IData)(vlSelfRef.thread_count));
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__reset 
        = vlSelfRef.reset;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__enable 
        = (3U < (IData)(vlSelfRef.thread_count));
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

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__23(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.scheduler_instance__DOT__fetcher_state 
        = vlSelfRef.fetcher_state;
    vlSelfRef.decoder_instance__DOT__instruction = vlSelfRef.instruction;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__24(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.decoder_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__current_pc 
        = vlSelfRef.current_pc;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__core_state 
        = vlSelfRef.core_state;
}

void Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.scheduler_instance__DOT__lsu_state[0U] 
        = vlSelfRef.lsu_state[0U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[1U] 
        = vlSelfRef.lsu_state[1U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[2U] 
        = vlSelfRef.lsu_state[2U];
    vlSelfRef.scheduler_instance__DOT__lsu_state[3U] 
        = vlSelfRef.lsu_state[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out 
        = vlSelfRef.lsu_out[3U];
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__25(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_pc_mux 
        = vlSelfRef.decoded_pc_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp 
        = vlSelfRef.decoded_nzp;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_immediate 
        = vlSelfRef.decoded_immediate;
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable 
        = vlSelfRef.decoded_nzp_write_enable;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_output_mux 
        = vlSelfRef.decoded_alu_output_mux;
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux 
        = vlSelfRef.decoded_alu_arithmetic_mux;
}

void Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.scheduler_instance__DOT__next_pc[0U] 
        = vlSelfRef.next_pc[0U];
    vlSelfRef.scheduler_instance__DOT__next_pc[1U] 
        = vlSelfRef.next_pc[1U];
    vlSelfRef.scheduler_instance__DOT__next_pc[2U] 
        = vlSelfRef.next_pc[2U];
    vlSelfRef.scheduler_instance__DOT__next_pc[3U] 
        = vlSelfRef.next_pc[3U];
}

void Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[0U];
    vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[1U];
    vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[2U];
    vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs 
        = vlSelfRef.rs[3U];
    vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt 
        = vlSelfRef.rt[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__0__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__0__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__1__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__1__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__2__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__2__KET____DOT__alu_instance__DOT__rt;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rs 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rs;
    vlSelfRef.threads__BRA__3__KET____DOT__lsu_instance__DOT__rt 
        = vlSelfRef.threads__BRA__3__KET____DOT__alu_instance__DOT__rt;
}

void Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_comb__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__0__KET____DOT__core_instance__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[0U];
    vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[1U];
    vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[2U];
    vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out 
        = vlSelfRef.alu_out[3U];
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__0__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__1__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__2__KET____DOT__pc_instance__DOT__alu_out;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__alu_out 
        = vlSelfRef.threads__BRA__3__KET____DOT__pc_instance__DOT__alu_out;
}

void Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__6(Vtop_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_core___nba_sequent__TOP__tb_top_stub__DOT__dut__DOT__cores__BRA__1__KET____DOT__core_instance__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__scheduler_instance__DOT__core_state;
    __Vdly__scheduler_instance__DOT__core_state = 0;
    // Body
    __Vdly__scheduler_instance__DOT__core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    if (vlSelfRef.scheduler_instance__DOT__reset) {
        vlSelfRef.scheduler_instance__DOT__current_pc = 0U;
        __Vdly__scheduler_instance__DOT__core_state = 0U;
        vlSelfRef.scheduler_instance__DOT__done = 0U;
    } else if ((4U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
        if ((2U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
            if ((1U & (~ (IData)(vlSelfRef.scheduler_instance__DOT__core_state)))) {
                if (vlSelfRef.scheduler_instance__DOT__decoded_ret) {
                    vlSelfRef.scheduler_instance__DOT__done = 1U;
                    __Vdly__scheduler_instance__DOT__core_state = 7U;
                } else {
                    vlSelfRef.scheduler_instance__DOT__current_pc 
                        = vlSelfRef.scheduler_instance__DOT__next_pc
                        [0U];
                    __Vdly__scheduler_instance__DOT__core_state = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
            __Vdly__scheduler_instance__DOT__core_state = 6U;
        } else {
            vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__any_lsu_waiting = 0U;
            vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                    if (((1U == vlSelfRef.scheduler_instance__DOT__lsu_state
                          [(3U & vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                         | (2U == vlSelfRef.scheduler_instance__DOT__lsu_state
                            [(3U & vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)]))) {
                        vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__any_lsu_waiting = 1U;
                        goto __Vlabel0;
                    }
                    vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                        = ((IData)(1U) + vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
                }
                __Vlabel0: ;
            }
            if ((1U & (~ (IData)(vlSelfRef.scheduler_instance__DOT__unnamedblk1__DOT__any_lsu_waiting)))) {
                __Vdly__scheduler_instance__DOT__core_state = 5U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
        __Vdly__scheduler_instance__DOT__core_state 
            = ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))
                ? 4U : 3U);
    } else if ((1U & (IData)(vlSelfRef.scheduler_instance__DOT__core_state))) {
        if ((2U == (IData)(vlSelfRef.scheduler_instance__DOT__fetcher_state))) {
            __Vdly__scheduler_instance__DOT__core_state = 2U;
        }
    } else if (vlSelfRef.scheduler_instance__DOT__start) {
        __Vdly__scheduler_instance__DOT__core_state = 1U;
    }
    vlSelfRef.scheduler_instance__DOT__core_state = __Vdly__scheduler_instance__DOT__core_state;
    vlSelfRef.current_pc = vlSelfRef.scheduler_instance__DOT__current_pc;
    vlSelfRef.done = vlSelfRef.scheduler_instance__DOT__done;
    vlSelfRef.core_state = vlSelfRef.scheduler_instance__DOT__core_state;
    vlSelfRef.fetcher_instance__DOT__current_pc = vlSelfRef.current_pc;
    vlSelfRef.fetcher_instance__DOT__core_state = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__0__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__1__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__2__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
    vlSelfRef.threads__BRA__3__KET____DOT__register_instance__DOT__core_state 
        = vlSelfRef.core_state;
}
