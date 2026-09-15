# serial Peripheral Interface
# Master Controller using Verilog

A synthesizable SPI Master Controller designed and verified using Verilog HDL. 
The project demonstrates serial data transmission using SPI protocol and is simulated using Verilator with waveform analysis through GTKWave.

## Project Overview

SPI (Serial Peripheral Interface) is a synchronous serial communication protocol commonly used for communication between microcontrollers, sensors, memory devices, ADCs, DACs, and other peripheral devices.

This project implements an SPI Master Controller capable of transmitting 8-bit data through the MOSI line while generating the SPI clock and chip-select signals.

## Features

- 8-bit SPI data transmission
- Master-side SPI controller
- MOSI serial data output
- SCLK generation
- Chip Select (CS) control
- Start and Done control signals
- Busy status indication
- Synchronous digital design
- Verilog HDL implementation
- Verilator-based simulation
- VCD waveform generation
- GTKWave waveform analysis

## Project Structure

```text
SPI-Master-Verilog/
│
├── rtl/
│   └── spi_master.v
│
├── tb/
│   └── tb_spi_master.v
│
├── docs/
│   └── waveform/
│
├── README.md
├── .gitignore
└── LICENSE
Clock generation
Start control
Chip Select
SPI Clock
MOSI data
Busy status
Transfer completion
Future Improvements
Add MISO input support
Implement SPI Slave module
Support SPI Modes 0, 1, 2 and 3
Add configurable clock divider
Add parameterized data width
Add SystemVerilog assertions
Perform RTL synthesis using an open-source ASIC flow
Perform timing and area analysis








