`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:44:11 04/17/2017 
// Design Name: 
// Module Name:    EX_IMM 
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
module EX_IMM(
    input [15:0] imm,
    output [31:0] ex_imm
    );
reg [15:0]ex;
always@(*)
begin
	if(imm[15])
		ex<=16'hffff;
	else
		ex<= 16'h0;
end
assign ex_imm[15:0] = imm;
assign ex_imm[31:16] = ex;

endmodule
