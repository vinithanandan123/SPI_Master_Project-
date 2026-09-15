// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"
#include "Vspi_master__Syms.h"
#include "Vspi_master___024root.h"

VL_INLINE_OPT VlCoroutine Vspi_master___024root___eval_initial__TOP__Vtiming__0(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x73746572U;
    __Vtemp_1[2U] = 0x695f6d61U;
    __Vtemp_1[3U] = 0x7370U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_spi_master__DOT__clk = 0U;
    vlSelfRef.tb_spi_master__DOT__reset = 1U;
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    vlSelfRef.tb_spi_master__DOT__data_in = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_spi_master.v", 
                                         41);
    vlSelfRef.tb_spi_master__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_spi_master.v", 
                                         45);
    vlSelfRef.tb_spi_master__DOT__data_in = 0xaaU;
    vlSelfRef.tb_spi_master__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_spi_master.v", 
                                         50);
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h25428905__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_master.done)", 
                                                             "tb_spi_master.v", 
                                                             54);
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_spi_master.v", 
                                         56);
    VL_FINISH_MT("tb_spi_master.v", 58, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__act(Vspi_master___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_master___024root___eval_triggers__act(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_spi_master__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_spi_master__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_spi_master__DOT__done) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0 
        = vlSelfRef.tb_spi_master__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__reset__0 
        = vlSelfRef.tb_spi_master__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__done__0 
        = vlSelfRef.tb_spi_master__DOT__done;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_master___024root___dump_triggers__act(vlSelf);
    }
#endif
}
