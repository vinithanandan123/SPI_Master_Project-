`timescale 1ns/1ps

module tb_spi_master;

reg clk;
reg reset;
reg start;
reg [7:0] data_in;

wire busy;
wire done;
wire sclk;
wire mosi;
wire cs;

spi_master uut (
    .clk(clk),
    .reset(reset),
    .start(start),
    .data_in(data_in),

    .busy(busy),
    .done(done),
    .sclk(sclk),
    .mosi(mosi),
    .cs(cs)
);

always #5 clk = ~clk;

initial begin

    $dumpfile("spi_master.vcd");
    $dumpvars(0, tb_spi_master);

    clk   = 0;
    reset = 1;
    start = 0;
    data_in = 8'b00000000;

    #20;

    reset = 0;

    #20;

    data_in = 8'b10101010;
    start = 1;

    #10;

    start = 0;

    wait(done);

    #20;

    $finish;

end

endmodule
