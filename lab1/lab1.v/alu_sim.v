`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:14:38 03/14/2017
// Design Name:   alu
// Module Name:   D:/study/COD lab/lab1/lab1.v/alu_sim.v
// Project Name:  lab1.v
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_sim;
	reg [31:0] alu_a;
	reg [31:0] alu_b;
	reg [4:0] alu_op;
	wire [31:0] alu_out;

	alu uut (
		.alu_a(alu_a), 
		.alu_b(alu_b), 
		.alu_op(alu_op), 
		.alu_out(alu_out)
	);
	initial begin	
		alu_a = 3;
		alu_b = 2;
		alu_op = 0;
		#100;
		alu_op = 0;
	#100;
		alu_op = 1;	
		#100;
		alu_op = 2;
		#100;
		alu_op = 3;
		#100;
		alu_op =4;
			#100;
		alu_op = 5;
			#100;
		alu_op = 6;
	end      
endmodule

