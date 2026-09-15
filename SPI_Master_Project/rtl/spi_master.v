`timescale 1ns/1ps
    module spi_master (
    input  wire       clk,
    input  wire       reset,
    input  wire       start,
    input  wire [7:0] data_in,

    output reg        busy,
    output reg        done,
    output reg        sclk,
    output reg        mosi,
    output reg        cs
);

reg [7:0] shift_reg;
reg [3:0] bit_count;

always @(posedge clk or posedge reset) begin

    if (reset) begin
        busy      <= 1'b0;
        done      <= 1'b0;
        sclk      <= 1'b0;
        mosi      <= 1'b0;
        cs        <= 1'b1;
        shift_reg <= 8'b0;
        bit_count <= 4'b0;
    end

    else begin

        done <= 1'b0;

        if (start && !busy) begin

            busy      <= 1'b1;
            cs        <= 1'b0;
            shift_reg <= data_in;
            bit_count <= 4'd0;
            mosi      <= data_in[7];
            sclk      <= 1'b0;

        end

        else if (busy) begin

            sclk <= ~sclk;

            if (sclk == 1'b1) begin

                shift_reg <= {shift_reg[6:0], 1'b0};
                bit_count <= bit_count + 1'b1;

                if (bit_count == 4'd7) begin
                    busy <= 1'b0;
                    done <= 1'b1;
                    cs   <= 1'b1;
                    mosi <= 1'b0;
                    sclk <= 1'b0;
                end

                else begin
                    mosi <= shift_reg[6];
                end

            end

        end

    end

end

endmodule
