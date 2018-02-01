`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:20:11 04/17/2017
// Design Name:   top
// Module Name:   E:/zuchengyuanli/lab05/testaaaa.v
// Project Name:  lab05
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

module testaaaa;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [7:0] pc;
	wire [31:0] insc;
	wire [31:0] spo;
	wire [4:0] read_reg1;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.pc(pc), 
		.insc(insc), 
		.spo(spo), 
		.read_reg1(read_reg1)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#100;
        rst_n = 1;
		 
		// Add stimulus here

	end
      always #1 clk = ~clk;
endmodule

