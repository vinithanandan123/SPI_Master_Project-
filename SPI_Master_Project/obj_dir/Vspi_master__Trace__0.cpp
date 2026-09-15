// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_master__Syms.h"


void Vspi_master___024root__trace_chg_0_sub_0(Vspi_master___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_master___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_chg_0\n"); );
    // Init
    Vspi_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_master___024root*>(voidSelf);
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_master___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_master___024root__trace_chg_0_sub_0(Vspi_master___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_spi_master__DOT__busy));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_spi_master__DOT__done));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_spi_master__DOT__sclk));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_spi_master__DOT__mosi));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_spi_master__DOT__cs));
        bufp->chgCData(oldp+5,(vlSelfRef.tb_spi_master__DOT__uut__DOT__shift_reg),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_spi_master__DOT__uut__DOT__bit_count),4);
    }
    bufp->chgBit(oldp+7,(vlSelfRef.tb_spi_master__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.tb_spi_master__DOT__reset));
    bufp->chgBit(oldp+9,(vlSelfRef.tb_spi_master__DOT__start));
    bufp->chgCData(oldp+10,(vlSelfRef.tb_spi_master__DOT__data_in),8);
}

void Vspi_master___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_cleanup\n"); );
    // Init
    Vspi_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_master___024root*>(voidSelf);
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
