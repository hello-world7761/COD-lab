`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:13 05/15/2017 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
	input clk,
	input rst_n,
	input RegWriteD,
	input MemtoRegD,
	input MemWriteD,
	input [4:0]ALUControlD,
	input ALUSrcAD,
	input RegDstD,
	input [4:0]rsD,
	input [4:0]rtD,
	input [4:0]rdD,
	input [31:0]signimmD,
	input [31:0]signimmcD,
	input [1:0] ALUSrcBD,
	input [4:0]shamtD,
	input [5:0]opD,
	input [31:0] r1_doutD,
	input [31:0] r2_doutD,
	input [5:0] functD,
	input [31:0] pcplusD,
	output reg RegWriteE,
	output reg MemtoRegE,
	output reg MemWriteE,
	output reg [4:0]ALUControlE,
	output reg ALUSrcAE,
	output reg RegDstE,
	output reg [4:0]rsE,
	output reg [4:0]rtE,
	output reg [4:0]rdE,
	output reg [31:0]signimmE,
	output reg [31:0]signimmcE,
	output reg [1:0] ALUSrcBE,
	output reg [4:0] shamtE,
	output reg [31:0] r1_doutE,
	output reg [31:0] r2_doutE,
	output reg [5:0] opE,
	output reg [5:0] functE,
	output reg [31:0] pcplusE
    );
always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
begin
	RegWriteE <= 0;
	MemtoRegE <= 0;
	MemWriteE <= 0;
	ALUControlE <= 5'h0;
	ALUSrcAE <= 0;
	RegDstE <= 0;
	rsE <= 5'h0;
	rtE <= 5'h0;
	rdE <= 5'h0;
	signimmE <= 32'h0;
	signimmcE <= 32'h0;
	ALUSrcBE <= 2'h0;
	shamtE <= 5'h0;
	r1_doutE <= 32'h0;
	r2_doutE <= 32'h0;
	opE <= 6'h0;
	functE <= 6'h0;
	pcplusE <= 32'h0;
end
else
begin
	RegWriteE <= RegWriteD;
	MemtoRegE <= MemtoRegD;
	MemWriteE <= MemWriteD;
	ALUControlE <= ALUControlD;
	ALUSrcAE <= ALUSrcAD;
	RegDstE <= RegDstD;
	rsE <= rsD;
	rtE <= rtD;
	rdE <= rdD;
	signimmE <= signimmD;
	signimmcE <= signimmcD;
	ALUSrcBE <= ALUSrcBD;
	shamtE <= shamtD;
	r1_doutE <= r1_doutD;
	r2_doutE <= r2_doutD;
	opE <= opD;
	functE <= functD;
	pcplusE <= pcplusD;
end
end

endmodule
