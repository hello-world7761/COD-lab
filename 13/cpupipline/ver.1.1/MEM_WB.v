`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:53 05/15/2017 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
	input clk,
	input rst_n,
	input RegWriteM,
	input MemtoRegM,
	input [31:0] alu_outM,
	input [4:0] r3_addrM,
	input [5:0] opM,
	input [31:0] doutbM,
	output reg RegWriteW,
	output reg MemtoRegW,
	output reg [31:0] alu_outW,
	output reg [4:0] r3_addrW,
	output reg [5:0] opW,
	output reg [31:0] doutbW
    );

always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
	begin
		RegWriteW <= 0;
		MemtoRegW <= 0;
		alu_outW <= 32'h0;
		r3_addrW <= 5'h0;
		opW <= 6'h0;
		doutbW <= 32'h0;
	end
else
	begin
		RegWriteW <= RegWriteM;
		MemtoRegW <= MemtoRegM;
		alu_outW <= alu_outM;
		r3_addrW <= r3_addrM;
		opW <= opM;
		doutbW <= doutbM;
	end
end

endmodule
