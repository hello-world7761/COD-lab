`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:59:19 03/14/2017 
// Design Name: 
// Module Name:    alu 
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
module alu(  
  input  signed	    [31:0]	alu_a,
  input  signed	    [31:0]	alu_b,
  input	             [4:0]	alu_op,
  output    	reg    [31:0]	alu_out
    );
	 always@(*)
	 begin
	 case(alu_op)
		1: 	alu_out <= alu_a + alu_b;	
		2: 	alu_out <= alu_a - alu_b;		
		3: 	alu_out <= alu_a & alu_b;
		4:	 	alu_out <= alu_a | alu_b;
		5:		alu_out <= alu_a ^ alu_b;
		6:		alu_out <= ~(alu_a | alu_b);	
		default:alu_out <= 0;
		endcase
		end

endmodule
