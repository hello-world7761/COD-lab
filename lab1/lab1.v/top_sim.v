`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:17:04 03/14/2017
// Design Name:   top
// Module Name:   D:/study/COD lab/lab1/lab1.v/top_sim.v
// Project Name:  lab1.v
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_sim;

	// Inputs
	reg [31:0] alu_a;
	reg [31:0] alu_b;
	reg [4:0] alu_op;

	// Outputs
	wire [31:0] alu_out;

	// Instantiate the Unit Under Test (UUT)
	top f (
		.alu_a(alu_a), 
		.alu_b(alu_b), 
		.alu_op(alu_op), 
		.alu_out(alu_out)
	);

	initial begin
		// Initialize Inputs
		alu_a = 2;
		alu_b = 2;
		alu_op = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

