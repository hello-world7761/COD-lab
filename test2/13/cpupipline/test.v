`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:25:45 03/27/2017
// Design Name:   top
// Module Name:   E:/RAM/test.v
// Project Name:  RAM
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
	reg memread_en;
	reg [7:0] out_addr;
	reg break_en;
	reg [31:0] breakpoint;
	reg one_step_en;
	reg one_step;
	wire [31:0] pc_addr;
	wire [31:0] irF;
	wire [31:0] irD;
	wire [3:0] sel;
	wire [7:0] show_data;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n),
		.pc_addr(pc_addr),
		.memread_en(memread_en),
		.out_addr(out_addr),
		.break_en(break_en),
		.breakpoint(breakpoint),
		.irF(irF),
		.irD(irD),
		.sel(sel),
		.show_data(show_data),
		.one_step(one_step),
		.one_step_en(one_step_en)
	);
	
	always
		begin
			#10;
			clk=!clk;
		end
		
	always
	begin
		#50;
		one_step = !one_step;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		memread_en = 0;
		out_addr = 6'h0;
		break_en = 0;
		one_step_en = 0;
		one_step = 0;
		#10;
		rst_n = 1;
		break_en = 0;//please change this if you don't want to break
		breakpoint = 32'h3c;//break at the middle
		one_step_en = 0;//if you want to test one step, please change this

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
      
endmodule

