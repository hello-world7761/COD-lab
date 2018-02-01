`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:07:58 05/02/2017 
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
output signed [7:0] pc,
output [4:0] r1_addr,
output [4:0] r2_addr,
output [4:0] r3_addr,
output [31:0] r1_dout,
output [31:0] r2_dout,
output [31:0] r3_din,
output [31:0] alu_b,
output [4:0] alu_op,
output [31:0] alu_out,
output  r3_wr,
output wea,
output [31:0] dout,
output [5:0] addra,
output [5:0] addrb,
output [31:0] instruction,
output [31:0] b_pc,
output [2:0] curstate
    );
wire [31:0] alu_a;
REG_FILE uuu(
.clk(clk),
.rst_n(rst_n),
.r1_addr(r1_addr),
.r2_addr(r2_addr),
.r3_addr(r3_addr),
.r3_din(r3_din),
.r3_wr(r3_wr),
.r1_dout(r1_dout),
.r2_dout(r2_dout)
);
alu ttt(
.alu_a(alu_a),
.alu_b(alu_b),
.alu_op(alu_op),
.alu_out(alu_out)
);
control utt(
.clk(clk),
.rst_n(rst_n),
.dout(dout),
.r1_dout(r1_dout),
.r2_dout(r2_dout),
.alu_out(alu_out),
.instruction(instruction),
.pc(pc),
.r1_addr(r1_addr),
.r2_addr(r2_addr),
.r3_addr(r3_addr),
.r3_din(r3_din),
.wea(wea),
.addrb(addrb),
.addra(addra),
.alu_a(alu_a),
.alu_b(alu_b),
.alu_op(alu_op),
.r3_wr(r3_wr),
.b_pc(b_pc),
.curstate(curstate)
);
id_memory utu(
.clka(clk),
.wea(wea),
.addra(addra),
.dina(r2_dout),
.clkb(clk),
.addrb(addrb),
.doutb(dout)
);
endmodule
