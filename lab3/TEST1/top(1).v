`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:07:40 03/27/2017 
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
	 wire wea;
	 wire [31:0] doutb;
	 wire [5:0] addra;
	 wire [5:0] addrb;
	 wire [31:0] alu_in;
	 assign alu_op=5'h01;
ram RAM(  
  .clka(clk),
  .wea(wea),
  .addra(addra),
  .dina(r3_din),
  .clkb(clk),
  .addrb(addrb),
  .doutb(doutb)
  );
control uut(
  .clk(clk),
  .rst_n(rst_n),
  .doutb(doutb),
  .aluin(alu_in),
  .din(r3_din),
  .wea(wea),
  .addra(addra),
  .addrb(addrb),
  .r1_addr(r1_addr),
  .r2_addr(r2_addr),
  .r3_addr(r3_addr),
  .r3_wr(r3_wr)
  );
alu utt(
   .alu_a(r1_dout),
	.alu_b(r2_dout),
	.alu_op(alu_op),
	.alu_out(alu_in)
	);
REG_FILE ttt(
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
  
  
  
 endmodule
