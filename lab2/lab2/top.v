`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:40:38 03/21/2017 
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
input			      clk,
input			      rst_n,
output reg[31:0]	      r1_dout,
output reg [31:0]	      r2_dout
    );
wire [4:0]        r1_addr;
wire	[4:0]       r2_addr;
wire	[4:0]	      r3_addr;
wire	[31:0]      r3_din;
wire			      r3_wr;
wire [4:0]	   alu_op;
wire [31:0] temp1;
wire [31:0] temp2;
wire [31:0] temp3;
alu alu_lab(
.alu_a(temp1),
.alu_b(temp2),
.alu_out(r3_din),
.alu_op(alu_op)
);
REG_FILE REG_lab(
.clk(clk),
.rst_n(rst_n),
.r1_addr(r1_addr),
.r2_addr(r2_addr),
.r3_addr(r3_addr),
.r3_din(r3_din),
.r3_wr(r3_wr),
.r1_dout(temp1),
.r2_dout(temp2)
);
Control Control_lab(
.clk(clk),
.rst_n(rst_n),
.alu_op(alu_op),
.r3_wr(r3_wr),
.r1_addr(r1_addr),
.r2_addr(r2_addr),
.r3_addr(r3_addr)
);
endmodule
