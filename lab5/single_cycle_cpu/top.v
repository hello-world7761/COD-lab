`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:02:27 04/17/2017 
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
output [31:0] r3_din,
output we,
output [5:0] rom_a,
output [5:0] ram_a,
output [31:0] alu_b,
output [4:0] alu_op,
output  r3_wr,
output [31:0] rom_spo,
output [31:0] r1_dout,
output [31:0] r2_dout,
output [31:0] alu_out,
output [31:0] spo,
output [17:0] b_pc
    );
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
.alu_a(r1_dout),
.alu_b(alu_b),
.alu_op(alu_op),
.alu_out(alu_out)
);
control uut(
.clk(clk),
.rst_n(rst_n),
.instruction(rom_spo),
.spo(spo),
.r1_dout(r1_dout),
.r2_dout(r2_dout),
.alu_out(alu_out),
.pc(pc),
.r1_addr(r1_addr),
.r2_addr(r2_addr),
.r3_addr(r3_addr),
.r3_din(r3_din),
.we(we),
.rom_a(rom_a),
.ram_a(ram_a),
.alu_b(alu_b),
.alu_op(alu_op),
.r3_wr(r3_wr),
.b_pc(b_pc)
);
myrom utu(
.a(rom_a),
.spo(rom_spo)
);
myram err(
.a(ram_a),
.d(r2_dout),
.clk(clk),
.we(we),
.spo(spo)
);
endmodule
