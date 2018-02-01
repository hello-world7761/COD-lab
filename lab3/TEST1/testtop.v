`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:04:42 03/20/2017
// Design Name:   top
// Module Name:   G:/program/regfile/testtop.v
// Project Name:  regfile
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

module testtop;

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

