`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:02:08 05/02/2017
// Design Name:   top
// Module Name:   G:/program/multi_cycle_cpu/test.v
// Project Name:  multi_cycle_cpu
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
	wire [7:0] pc;
	wire [4:0] r1_addr;
	wire [4:0] r2_addr;
	wire [4:0] r3_addr;
	wire [31:0] r1_dout;
	wire [31:0] r2_dout;
	wire [31:0] r3_din;
	wire [31:0] alu_b;
	wire [4:0] alu_op;
	wire [31:0] alu_out;
	wire r3_wr;
	wire wea;
	wire [31:0] dout;
	wire [5:0] addra;
	wire [5:0] addrb;
	wire [31:0] instruction;
	wire [31:0] b_pc;
	wire [2:0] curstate;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.pc(pc), 
		.r1_addr(r1_addr), 
		.r2_addr(r2_addr), 
		.r3_addr(r3_addr), 
		.r1_dout(r1_dout), 
		.r2_dout(r2_dout), 
		.r3_din(r3_din), 
		.alu_b(alu_b), 
		.alu_op(alu_op), 
		.alu_out(alu_out), 
		.r3_wr(r3_wr), 
		.wea(wea), 
		.dout(dout), 
		.addra(addra), 
		.addrb(addrb), 
		.instruction(instruction), 
		.b_pc(b_pc),
		.curstate(curstate)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#1;
      rst_n = 1;
		// Add stimulus here

	end
   always
	begin
		clk=~clk;
		#1;
	end
endmodule

