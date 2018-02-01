`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:18:52 04/09/2017 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
input clk,
input rst_n,
output [4:0] alu_op,
output [31:0] r1_dout,
output [31:0] r2_dout,
output wea,
output [31:0] alu_out
    );
wire clk_;
assign clk_=~clk;
wire [4:0] r1_addr;
wire [4:0] r2_addr;
wire [4:0] r3_addr;
wire [4:0] r3_din;
wire r3_wr;
wire [31:0] number;
wire [7:0] addra;
wire [7:0] addrb;
wire [31:0] dina;
wire [31:0] doutb;
alu uut(
.alu_a(r1_dout),
.alu_b(r2_dout),
.alu_op(alu_op),
.alu_out(alu_out)
);
REG_FILE utt(
.clk(clk),
.rst_n(rst_n),
.r1_addr(r1_addr),
.r2_addr(r2_addr),
.r3_addr(r3_addr),
.r3_din(doutb),
.r3_wr(r3_wr),
.r1_dout(r1_dout),
.r2_dout(r2_dout)
);
control ttt(
.clk(clk),
.rst_n(rst_n),
.doutb(doutb),
.r1_addr(r1_addr),
.r2_addr(r2_addr),
.r3_addr(r3_addr),
.r3_wr(r3_wr),
.alu_op(alu_op),
.wea(wea),
.addra(addra),
.addrb(addrb)
);
myram uuu(
.clka(clk_),
.wea(wea),
.addra(addra),
.dina(alu_out),
.clkb(clk),
.addrb(addrb),
.doutb(doutb)
);
endmodule
