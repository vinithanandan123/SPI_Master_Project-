// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_spi_master.h for the primary calling header

#ifndef VERILATED_VTB_SPI_MASTER___024ROOT_H_
#define VERILATED_VTB_SPI_MASTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_spi_master__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_spi_master___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_spi_master__DOT__clk;
    CData/*0:0*/ tb_spi_master__DOT__reset;
    CData/*0:0*/ tb_spi_master__DOT__start;
    CData/*7:0*/ tb_spi_master__DOT__data_in;
    CData/*0:0*/ tb_spi_master__DOT__busy;
    CData/*0:0*/ tb_spi_master__DOT__done;
    CData/*0:0*/ tb_spi_master__DOT__sclk;
    CData/*0:0*/ tb_spi_master__DOT__mosi;
    CData/*0:0*/ tb_spi_master__DOT__cs;
    CData/*7:0*/ tb_spi_master__DOT__uut__DOT__shift_reg;
    CData/*3:0*/ tb_spi_master__DOT__uut__DOT__bit_count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_master__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_master__DOT__done__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h25428905__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_spi_master__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_spi_master___024root(Vtb_spi_master__Syms* symsp, const char* v__name);
    ~Vtb_spi_master___024root();
    VL_UNCOPYABLE(Vtb_spi_master___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
