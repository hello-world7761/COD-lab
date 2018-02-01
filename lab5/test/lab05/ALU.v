`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:06 03/14/2017 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] alu_a,
    input [31:0] alu_b,
    input [4:0] alu_op,
    output reg [31:0] alu_out
    );
always@(*)
begin
	case(alu_op)
		5'h0:		alu_out <= 0;
		5'h1:		alu_out <= alu_a + alu_b;
		5'h2:		alu_out <= alu_a - alu_b;
		5'h3:		alu_out <= alu_a & alu_b;
		5'h4:		alu_out <= alu_a | alu_b;
		5'h5:		alu_out <= alu_a ^ alu_b;
		5'h6:		alu_out <= ~(alu_a | alu_b);
		default:	alu_out <= 0;
	endcase
end
endmodule
