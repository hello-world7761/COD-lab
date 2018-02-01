`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:57:10 04/17/2017 
// Design Name: 
// Module Name:    REG_WRITE_DATA 
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
module REG_WRITE_DATA(
    input [31:0] alu_out,
	 input [31:0] spo,
	 input MentoReg,
	 output reg [31:0] r3_din);
always@(*)
begin
	if(MentoReg)
		r3_din = spo;
	else
		r3_din = alu_out;
end


endmodule
