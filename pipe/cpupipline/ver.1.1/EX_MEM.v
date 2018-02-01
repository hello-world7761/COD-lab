`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:37 05/15/2017 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
	input clk,
	input rst_n,
	input RegWriteE,
	input MemtoRegE,
	input MemWriteE,
	input [31:0] alu_outE,
	input [4:0] r3_addrE,
	input [5:0] opE,
	input [31:0] r2_doutE,
	output reg RegWriteM,
	output reg MemtoRegM,
	output reg MemWriteM,
	output reg [31:0] alu_outM,
	output reg [4:0] r3_addrM,
	output reg [5:0] opM,
	output reg [31:0] r2_doutM
    );
	 
always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
	begin
		RegWriteM <= 0;
		MemtoRegM <= 0;
		MemWriteM <= 0;
		alu_outM <= 32'h0;
		r3_addrM <= 5'h0;
		opM <= 6'h0;
		r2_doutM <= 32'h0;
	end
else 
	begin
		RegWriteM <= RegWriteE;
		MemtoRegM <= MemtoRegE;
		MemWriteM <= MemWriteE;
		alu_outM <= alu_outE;
		r3_addrM <= r3_addrE;
		opM <= opE;
		r2_doutM <= r2_doutE;
	end
end


endmodule
