`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:51 05/18/2017 
// Design Name: 
// Module Name:    forward 
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
module forward(
	input clk,
	input rst_n,
	input [4:0] rsE,
	input [4:0] rtE,
	input [4:0] rsD,
	input [4:0] rtD,
	input [4:0] r3_addrM,
	input [4:0] r3_addrW,
	input MemtoRegW,
	input RegWriteW,
	input RegWriteM,
	input MemtoRegM,
	output reg [1:0] forwardAE,
	output reg [1:0] forwardBE,
	output reg [1:0] forwardAD,
	output reg [1:0] forwardBD
    );

always@(*)
begin
		forwardAE = 2'h0;
		forwardBE = 2'h0;
	if((RegWriteW != 0) && (r3_addrW != 0) && (MemtoRegW != 0))//mem to alu 
	begin
		if(r3_addrW == rsE)
			forwardAE = 2'b01;
		if(r3_addrW == rtE)
			forwardBE = 2'b01;
	end
	if((RegWriteM != 0) && (r3_addrM != 0) && (MemtoRegM == 0))//ex/mem alu to alu 
	begin
		if(r3_addrM == rsE)
			forwardAE = 2'b10;
		if(r3_addrM == rtE)
			forwardBE = 2'b10;
	end
end

always@(*)
begin
		forwardAD = 2'h0;
		forwardBD = 2'h0;
	if((RegWriteM != 0) && (r3_addrM != 0) && (MemtoRegM == 0))//mem to alu 
	begin
		if(r3_addrM == rsD)
			forwardAD = 2'b01;
		if(r3_addrM == rtD)
			forwardBD = 2'b01;
	end
end

endmodule
