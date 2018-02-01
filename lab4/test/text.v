`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:34:28 04/09/2017
// Design Name:   top
// Module Name:   G:/program/ram_and_fsm/text.v
// Project Name:  ram_and_fsm
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

module text;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [4:0] alu_op;
   wire [31:0] r1_dout;
	wire [31:0] r2_dout;
	wire wea;
	wire [31:0] alu_out;
	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.alu_op(alu_op),
		.r1_dout(r1_dout),
		.r2_dout(r2_dout),
		.wea(wea),
		.alu_out(alu_out)
	);
	initial begin
		// Initialize Inputs
		clk = 1;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#1;
      rst_n=1;
		// Add stimulus here

	end
	always
	begin
	   clk=~clk;
		#1;
	end
      
endmodule

