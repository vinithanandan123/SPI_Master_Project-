// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_master.h for the primary calling header

#include "Vtb_spi_master__pch.h"
#include "Vtb_spi_master___024root.h"

VlCoroutine Vtb_spi_master___024root___eval_initial__TOP__Vtiming__0(Vtb_spi_master___024root* vlSelf);
VlCoroutine Vtb_spi_master___024root___eval_initial__TOP__Vtiming__1(Vtb_spi_master___024root* vlSelf);

void Vtb_spi_master___024root___eval_initial(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_spi_master___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_spi_master___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0 
        = vlSelfRef.tb_spi_master__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__reset__0 
        = vlSelfRef.tb_spi_master__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__done__0 
        = vlSelfRef.tb_spi_master__DOT__done;
}

VL_INLINE_OPT VlCoroutine Vtb_spi_master___024root___eval_initial__TOP__Vtiming__1(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_spi_master.v", 
                                             29);
        vlSelfRef.tb_spi_master__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__clk)));
    }
}

void Vtb_spi_master___024root___eval_act(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_spi_master___024root___nba_sequent__TOP__0(Vtb_spi_master___024root* vlSelf);

void Vtb_spi_master___024root___eval_nba(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_master___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_spi_master___024root___nba_sequent__TOP__0(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_spi_master__DOT__busy;
    __Vdly__tb_spi_master__DOT__busy = 0;
    CData/*0:0*/ __Vdly__tb_spi_master__DOT__sclk;
    __Vdly__tb_spi_master__DOT__sclk = 0;
    CData/*7:0*/ __Vdly__tb_spi_master__DOT__uut__DOT__shift_reg;
    __Vdly__tb_spi_master__DOT__uut__DOT__shift_reg = 0;
    CData/*3:0*/ __Vdly__tb_spi_master__DOT__uut__DOT__bit_count;
    __Vdly__tb_spi_master__DOT__uut__DOT__bit_count = 0;
    // Body
    __Vdly__tb_spi_master__DOT__busy = vlSelfRef.tb_spi_master__DOT__busy;
    __Vdly__tb_spi_master__DOT__sclk = vlSelfRef.tb_spi_master__DOT__sclk;
    __Vdly__tb_spi_master__DOT__uut__DOT__shift_reg 
        = vlSelfRef.tb_spi_master__DOT__uut__DOT__shift_reg;
    __Vdly__tb_spi_master__DOT__uut__DOT__bit_count 
        = vlSelfRef.tb_spi_master__DOT__uut__DOT__bit_count;
    if (vlSelfRef.tb_spi_master__DOT__reset) {
        __Vdly__tb_spi_master__DOT__busy = 0U;
        vlSelfRef.tb_spi_master__DOT__done = 0U;
        __Vdly__tb_spi_master__DOT__sclk = 0U;
        vlSelfRef.tb_spi_master__DOT__mosi = 0U;
        vlSelfRef.tb_spi_master__DOT__cs = 1U;
        __Vdly__tb_spi_master__DOT__uut__DOT__shift_reg = 0U;
        __Vdly__tb_spi_master__DOT__uut__DOT__bit_count = 0U;
    } else {
        vlSelfRef.tb_spi_master__DOT__done = 0U;
        if (((IData)(vlSelfRef.tb_spi_master__DOT__start) 
             & (~ (IData)(vlSelfRef.tb_spi_master__DOT__busy)))) {
            __Vdly__tb_spi_master__DOT__busy = 1U;
            vlSelfRef.tb_spi_master__DOT__cs = 0U;
            __Vdly__tb_spi_master__DOT__uut__DOT__shift_reg 
                = vlSelfRef.tb_spi_master__DOT__data_in;
            __Vdly__tb_spi_master__DOT__uut__DOT__bit_count = 0U;
            vlSelfRef.tb_spi_master__DOT__mosi = (1U 
                                                  & ((IData)(vlSelfRef.tb_spi_master__DOT__data_in) 
                                                     >> 7U));
            __Vdly__tb_spi_master__DOT__sclk = 0U;
        } else if (vlSelfRef.tb_spi_master__DOT__busy) {
            __Vdly__tb_spi_master__DOT__sclk = (1U 
                                                & (~ (IData)(vlSelfRef.tb_spi_master__DOT__sclk)));
            if (vlSelfRef.tb_spi_master__DOT__sclk) {
                __Vdly__tb_spi_master__DOT__uut__DOT__shift_reg 
                    = (0xfeU & ((IData)(vlSelfRef.tb_spi_master__DOT__uut__DOT__shift_reg) 
                                << 1U));
                __Vdly__tb_spi_master__DOT__uut__DOT__bit_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_master__DOT__uut__DOT__bit_count)));
                if ((7U == (IData)(vlSelfRef.tb_spi_master__DOT__uut__DOT__bit_count))) {
                    __Vdly__tb_spi_master__DOT__busy = 0U;
                    vlSelfRef.tb_spi_master__DOT__done = 1U;
                    vlSelfRef.tb_spi_master__DOT__cs = 1U;
                    vlSelfRef.tb_spi_master__DOT__mosi = 0U;
                    __Vdly__tb_spi_master__DOT__sclk = 0U;
                } else {
                    vlSelfRef.tb_spi_master__DOT__mosi 
                        = (1U & ((IData)(vlSelfRef.tb_spi_master__DOT__uut__DOT__shift_reg) 
                                 >> 6U));
                }
            }
        }
    }
    vlSelfRef.tb_spi_master__DOT__busy = __Vdly__tb_spi_master__DOT__busy;
    vlSelfRef.tb_spi_master__DOT__sclk = __Vdly__tb_spi_master__DOT__sclk;
    vlSelfRef.tb_spi_master__DOT__uut__DOT__shift_reg 
        = __Vdly__tb_spi_master__DOT__uut__DOT__shift_reg;
    vlSelfRef.tb_spi_master__DOT__uut__DOT__bit_count 
        = __Vdly__tb_spi_master__DOT__uut__DOT__bit_count;
}

void Vtb_spi_master___024root___timing_resume(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h25428905__0.resume(
                                                   "@([changed] tb_spi_master.done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_spi_master___024root___timing_commit(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h25428905__0.commit(
                                                   "@([changed] tb_spi_master.done)");
    }
}

void Vtb_spi_master___024root___eval_triggers__act(Vtb_spi_master___024root* vlSelf);

bool Vtb_spi_master___024root___eval_phase__act(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_spi_master___024root___eval_triggers__act(vlSelf);
    Vtb_spi_master___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_spi_master___024root___timing_resume(vlSelf);
        Vtb_spi_master___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_spi_master___024root___eval_phase__nba(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_spi_master___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_master___024root___dump_triggers__nba(Vtb_spi_master___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_master___024root___dump_triggers__act(Vtb_spi_master___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_spi_master___024root___eval(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_spi_master___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_spi_master.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_spi_master___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_spi_master.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_spi_master___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_spi_master___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_spi_master___024root___eval_debug_assertions(Vtb_spi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
