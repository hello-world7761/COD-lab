`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:03 05/15/2017 
// Design Name: 
// Module Name:    WB 
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
module WB(
	input clk,
	input rst_n,
	input MemtoRegW,
	input [31:0] alu_outW,
	input [31:0] doutbW,
	input [5:0] opW,
	output reg [31:0] r3_dinW
    );

wire [1:0] addrchose;
assign addrchose = alu_outW[1:0];

always@(*)
case(MemtoRegW)
	1'h0:r3_dinW = alu_outW;
	1'h1:
	begin
	case (opW)
	6'h23:r3_dinW = doutbW;//lw
	6'h20://lb
	begin
		if(addrchose == 0)
			r3_dinW = $signed(doutbW[7:0]);
		else if(addrchose == 1)
			r3_dinW = $signed(doutbW[15:8]);
		else if(addrchose == 2)
			r3_dinW = $signed(doutbW[23:16]);
		else
			r3_dinW = $signed(doutbW[31:24]);
	end
	6'h24://lbu
	begin
		if(addrchose == 0)
			r3_dinW = doutbW[7:0];
		else if(addrchose == 1)
			r3_dinW = doutbW[15:8];
		else if(addrchose == 2)
			r3_dinW = doutbW[23:16];
		else
			r3_dinW = doutbW[31:24];
	end
	6'h21://lh
	begin
		if(addrchose == 0)
			r3_dinW = $signed(doutbW[15:0]);
		else
			r3_dinW = $signed(doutbW[31:16]);
	end
	6'h25://lhu
	begin
		if(addrchose == 0)
			r3_dinW = doutbW[15:0];
		else
			r3_dinW = doutbW[31:16];
	end
	default:r3_dinW = doutbW;
	endcase
	end
default:r3_dinW = alu_outW;
endcase

endmodule
