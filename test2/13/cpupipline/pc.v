`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:57:48 04/15/2017 
// Design Name: 
// Module Name:    PC 
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
module PC(
	input clk,
	input rst_n,
	input PCSrc,
	input [31:0] pcchange,
	input jump,
	input IRWrite,
	input PCWrite,
	input [31:0] douta,
	output reg [31:0] ir,
	output reg [31:0] pc
    );
	 reg [31:0] pcplus;
	 reg change;
always@(posedge clk or negedge rst_n)
begin
	if(~rst_n)
	begin
		pc <= 32'h0;
		change <= 1'h0;
	end
	else if(PCWrite == 1'h1)
	begin
		if (jump == 1'h1)
		begin
			pc <= pcchange;
			change <= 1'h1;
		end
		else if (PCSrc == 1'h1&&jump == 1'h0)
		begin
			pc <= pcchange;
			change <= 1'h1;
		end
		else if(change == 1'h0)
			pc <= pcplus;
	end
	else
	begin
		pc <= pc;
		change <= 1'h0;
	end
end

always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
	pcplus <= 32'h0;
else
	pcplus <= pc + 32'h4;
end

always@(*)
begin
case(IRWrite)
1'h1:
	ir = douta;
default: ir = ir;
endcase
end


endmodule
