`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:03:56 03/21/2017
// Design Name:   top
// Module Name:   D:/study/COD lab/lab2/lab2_test/lab2/test.v
// Project Name:  lab2
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

module test;

// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk =1;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#1;
      rst_n= 1; 
		// Add stimulus here

	end
   always
	begin
	   clk=~clk;
		#1;
	end
endmodule
