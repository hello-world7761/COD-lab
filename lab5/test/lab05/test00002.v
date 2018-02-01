`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:50:16 04/17/2017
// Design Name:   top
// Module Name:   E:/zuchengyuanli/lab05/test00002.v
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

module test00002;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [7:0] pc;
	wire [31:0] insc;
	wire [5:0]data_mem_addr;
//	wire [5:0] text_men_addr;
	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.pc(pc),
		.insc(insc),
		.data_mem_addr(data_mem_addr)
//		.text_men_addr(text_men_addr)
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
      always#1 clk = ~clk;
endmodule

