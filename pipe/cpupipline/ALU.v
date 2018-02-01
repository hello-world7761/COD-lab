`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:07:46 03/27/2017 
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
	 input signed [31:0] alu_a,
    input signed[31:0] alu_b,
    input [4:0] alu_op,
    output reg [31:0] alu_out
    );

parameter	A_NOP	= 5'h00;		
parameter	A_ADD	= 5'h01;	
parameter	A_SUB	= 5'h02;	
parameter	A_AND   	= 5'h03;	
parameter	A_OR    	= 5'h04;	
parameter	A_XOR   	= 5'h05;	
parameter	A_NOR   	= 5'h06;	
parameter	A_SLL		= 5'h07;
parameter	A_SRL		= 5'h08;
parameter	A_SRA		= 5'h09;
parameter   A_LUI		= 5'h0a;
parameter 	A_SLT		= 5'h0b;
parameter	A_SLTU	= 5'h0c;
parameter	A_DIV		= 5'h0d;
reg [32:0] alu_ua,alu_ub;
always@(*)
begin
alu_ua = {1'h0,alu_a};
alu_ub = {1'h0,alu_b};
end

always@(*)
begin
case(alu_op)
	A_NOP: alu_out = 32'h0;
	A_ADD: alu_out = alu_a + alu_b;
	A_SUB: alu_out = alu_a - alu_b;
	A_AND: alu_out = alu_a & alu_b;
	A_OR : alu_out = alu_a | alu_b;
	A_XOR: alu_out = alu_a ^ alu_b;
	A_NOR: alu_out = ~(alu_a | alu_b);
	A_SLL: alu_out = alu_b<<alu_a[4:0];
	A_SRL: alu_out = alu_b>>alu_a[4:0];
	A_SRA: alu_out = $signed(alu_b)>>>alu_a[4:0];
	A_LUI: alu_out = {alu_b[15:0],16'h0};
	A_SLT: alu_out = alu_a<alu_b?1:0;
	A_SLTU:alu_out = alu_ua<alu_ub?1:0;
	A_DIV:
	begin	
	if(alu_b != 0)
		alu_out = alu_a/alu_b;
	else
		alu_out = 32'h0;
	end
	default: alu_out = 32'h0;
endcase
end

endmodule
