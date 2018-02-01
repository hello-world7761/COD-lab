`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:57 03/20/2017 
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
output [31:0] result
    );
	assign result=r3_din;
   wire [4:0] alu_op;
	wire [31:0] r1_dout;
	wire [31:0] r2_dout;
	wire [31:0] r3_din;
	wire [4:0] r1_addr;
	wire [4:0] r2_addr;
	wire [4:0] r3_addr;
	wire r3_wr;
	assign alu_op=5'h01;
   wire [31:0] addra;
	wire wea;
	wire [31:0] addrb;
	wire [31:0] dina;
	wire [31:0] doutb;
alu uut
(
.alu_a(r1_dout),
.alu_b(r2_dout),
.alu_op(alu_op),
.alu_out(aluout)
);
REG_FILE utt(
.clk(clk),.rst_n(rst_n),.r1_addr(r1_addr),.r2_addr(r2_addr),.r3_addr(r3_addr),.r3_din(dina),.r3_wr(r3_wr),.r1_dout(r1_dout),.r2_dout(r2_dout)    );
control uuu(
.clk(clk),
.rst_n(rst_n),
.r1_addr(r1_addr),
.r2_addr(r2_addr),
.r3_addr(r3_addr),
.r3_wr(r3_wr),
.aluout(aluout),
.doutb(doutb),
.addra(addra),
.addrb(addrb),
.dina(r3_din),
.wea(wea)

);
RAM      Myram(
.clka     (clk    ),
.addra    (addra  ),
.wea      (wea    ),
.addrb    (addrb  ),
.clkb     (clk    ),
.doutb    (doutb  ),
.dina     (r3_din )
);
endmodule
