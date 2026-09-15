// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_master.h for the primary calling header

#include "Vtb_spi_master__pch.h"
#include "Vtb_spi_master___024root.h"

VL_ATTR_COLD void Vtb_spi_master___024root___eval_static(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_spi_master___024root___eval_final(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_spi_master___024root___eval_settle(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_master___024root___dump_triggers__act(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_spi_master.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_spi_master.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tb_spi_master.done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_master___024root___dump_triggers__nba(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_spi_master.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_spi_master.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tb_spi_master.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_spi_master___024root___ctor_var_reset(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_spi_master__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_master__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_master__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_master__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_master__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_master__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_master__DOT__sclk = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_master__DOT__mosi = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_master__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_master__DOT__uut__DOT__shift_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_master__DOT__uut__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_master__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_master__DOT__done__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
