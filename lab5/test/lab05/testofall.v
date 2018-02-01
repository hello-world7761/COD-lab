`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:38:04 04/17/2017
// Design Name:   top
// Module Name:   E:/zuchengyuanli/lab05/testofall.v
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

module testofall;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [7:0] pc;
	wire [31:0] insc;
	wire [31:0] spo;
	wire [4:0] read_reg1;
	wire [31:0] alu_out;
	wire ALUSrc;
	wire [1:0] ALUOP;
	wire [5:0] funct;
	wire [4:0] read_reg2;
	wire [4:0] write_reg;
	wire wea_reg;
	wire [31:0] reg_out1;
	wire [31:0] reg_out2;
	wire MemtoReg;
	wire [31:0] r3_din;
	wire [31:0] alu_a;
	wire [31:0] alu_b;
	wire [4:0] alu_op;
	wire [15:0] imm;
	wire branch;
	wire [31:0] ex_imm;
	wire PCSrc;
	wire [25:0] target_address;
	wire MemWrite;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.pc(pc), 
		.insc(insc), 
		.spo(spo), 
		.read_reg1(read_reg1), 
		.alu_out(alu_out), 
		.ALUSrc(ALUSrc), 
		.ALUOP(ALUOP), 
		.funct(funct), 
		.read_reg2(read_reg2), 
		.write_reg(write_reg), 
		.wea_reg(wea_reg), 
		.reg_out1(reg_out1), 
		.reg_out2(reg_out2), 
		.MemtoReg(MemtoReg), 
		.r3_din(r3_din), 
		.alu_a(alu_a), 
		.alu_b(alu_b), 
		.alu_op(alu_op), 
		.imm(imm), 
		.branch(branch), 
		.ex_imm(ex_imm), 
		.PCSrc(PCSrc), 
		.target_address(target_address), 
		.MemWrite(MemWrite)
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
      always #2 clk = ~clk;
endmodule

