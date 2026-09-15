// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"
#include "Vspi_master__Syms.h"
#include "Vspi_master___024root.h"

void Vspi_master___024root___ctor_var_reset(Vspi_master___024root* vlSelf);

Vspi_master___024root::Vspi_master___024root(Vspi_master__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_master___024root___ctor_var_reset(this);
}

void Vspi_master___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vspi_master___024root::~Vspi_master___024root() {
}
