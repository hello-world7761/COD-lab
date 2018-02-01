`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:40:15 04/17/2017
// Design Name:   top
// Module Name:   G:/program/single_cycle_cpu/test.v
// Project Name:  single_cycle_cpu
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
	wire [31:0] r3_din;
	wire we;
	wire [5:0] rom_a;
	wire [5:0] ram_a;
	wire [31:0] alu_b;
	wire [4:0] alu_op;
	wire r3_wr;
   wire [31:0]rom_spo;
	wire [31:0] r1_dout;
   wire [31:0] r2_dout;
   wire [31:0] alu_out;
	wire [31:0] spo;
	wire [17:0] b_pc;
	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.pc(pc), 
		.r1_addr(r1_addr), 
		.r2_addr(r2_addr), 
		.r3_addr(r3_addr), 
		.r3_din(r3_din), 
		.we(we), 
		.rom_a(rom_a), 
		.ram_a(ram_a), 
		.alu_b(alu_b), 
		.alu_op(alu_op), 
		.r3_wr(r3_wr),
		.rom_spo(rom_spo),
		.r1_dout(r1_dout),
		.r2_dout(r2_dout),
		.alu_out(alu_out),
		.spo(spo),
		.b_pc(b_pc)
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

