`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:58:30 04/17/2017 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
    input clk,
    input rst_n,
	 output [7:0]pc,
	 output [31:0]insc,
//	 output [5:0] data_men_addr
//	 output [5:0] text_men_addr
	 output [31:0] spo,
	 output [4:0]read_reg1,
	 output [31:0] alu_out,
	 output ALUSrc,
	 output [1:0]ALUOP,
	 output [5:0]funct,
	 output [4:0] read_reg2,
	 output [4:0] write_reg,
	 output wea_reg,
	 output [31:0] reg_out1,
	 output [31:0] reg_out2,
	 output MemtoReg,
	 output [31:0] r3_din,
	 output [31:0] alu_a,
	 output [31:0] alu_b,
	 output [4:0] alu_op,
	 output [15:0] imm,
	 output branch,
	 output [31:0]ex_imm,
	 output PCSrc,
	 output [25:0] target_address,
	 output MemWrite
	// ALUSrc,ALUOP,funct,reg_out1,reg_out2,ex_imm,alu_a,alu_b,alu_op
    );
wire [5:0] op;	 
//wire [4:0] read_reg1;
/*wire [4:0] read_reg2;
wire [4:0] write_reg;
wire wea_reg;
wire [31:0] reg_out1;
wire [31:0] reg_out2;
wire MemtoReg;
wire [31:0] r3_din;
wire [31:0] alu_a;
wire [31:0] alu_b;
wire [4:0] alu_op;*/
//wire [31:0] alu_out;
//wire [1:0]ALUOP;
//wire [5:0]funct;
/*wire [15:0] imm;
wire branch;
wire [31:0]ex_imm;*/
//wire [7:0]pc;
//wire [5:0] text_men_addr;
//wire [5:0] data_mem_addr;
//wire [31:0] spo;
//wire MemWrite;
//wire [31:0]insc;
//wire PCSrc;
//wire [25:0] target_address;
//wire ALUSrc;
decode u_decode(insc,read_reg1,read_reg2,write_reg,wea_reg,ALUOP,funct,imm,branch,MemtoReg,MemWrite,PCSrc,target_address,op,ALUSrc);
REG_WRITE_DATA u_rwd(alu_out,spo,MemtoReg,r3_din);
REG_FILE u_reg(clk,rst_n,read_reg1,read_reg2,write_reg,r3_din,wea_reg,reg_out1,reg_out2);
ALU u_alu(alu_a,alu_b,alu_op,alu_out);
ALU_control u_aluc(ALUSrc,ALUOP,funct,reg_out1,reg_out2,ex_imm,alu_a,alu_b,alu_op);
EX_IMM u_eximm(imm,ex_imm);
data_RAM u_dataram(alu_out[7:2],reg_out2,clk,MemWrite,spo);
NEXT_PC u_npc(op,PCSrc,target_address,branch,alu_out,ex_imm,clk,rst_n,pc);
//fetch u_fetch(pc,text_mem_addr);
text_RAM u_textram(pc[7:2],0,clk,1'b0,insc);
//READ_RAM u_readram(alu_out,data_mem_addr);
endmodule
