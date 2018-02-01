`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:45:43 04/17/2017 
// Design Name: 
// Module Name:    ALU_control 
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
module ALU_control(
	 input ALUSrc,
    input [1:0] ALUOP,
    input [5:0] funct,
	 input [31:0] r1_dout,
	 input [31:0] r2_dout,
	 input [31:0] ex_imm,
	 output reg [31:0] alu_a,
	 output reg [31:0] alu_b,
    output reg [4:0] alu_op
    );

always@(*)
begin
	case(ALUOP)
	2'b00:
		alu_op = 5'd1;
	2'b01:
		alu_op = 5'd2;
	2'b10://因为此处只需实现add指令
		alu_op = 5'd1;
	default:
		alu_op = 5'd1;
	endcase
end
always@(*)//ALU
begin
	if(ALUSrc)
		alu_b = ex_imm;
	else	if(ALUOP == 2'b11)
		alu_b = 0;
	else
		alu_b = r2_dout;
		
	alu_a = r1_dout;
end	
endmodule
