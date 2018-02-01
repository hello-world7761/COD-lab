`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:17:55 05/15/2017 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
	input clk,
	input rst_n,
	input [31:0] irF,
	output reg [31:0] irD,
	input [31:0] pcplusF,
	output reg [31:0] pcplusD
    );
	 
always@(posedge clk or negedge rst_n)
begin
	if(~rst_n)
	begin
		irD <= 32'h0;
		pcplusD <= 32'h0;
	end
	else
	begin
		irD <= irF;
		pcplusD <= pcplusF;
	end
end


endmodule
