`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:24:10 04/16/2017 
// Design Name: 
// Module Name:    decode 
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
module decode( //“Î¬Î
    input [31:0] insc, //÷∏¡Ó
    output reg [4:0] read_reg1,
    output reg [4:0] read_reg2,
    output reg [4:0] write_reg,
	 output reg wea_reg,   
	 output reg [1:0] ALUOP,
    output [5:0] funct,
    output [15:0] imm,
	 output reg branch,
	 output reg MemtoReg,
	 output  reg MemWrite,
	 output reg PCSrc,
    output [25:0] target_address,
	 output [5:0]op,
	 output reg ALUSrc
    );
reg RegDst;
wire RegWrite;
reg [31:0] eximm;
assign	op = insc[31:26];
assign	funct = insc[5:0];
assign	target_address = insc[25:0];
assign	imm = insc[15:0];
always@(*)
begin
	case(op)
		6'b000000://add
		begin
			RegDst <= 1;
			ALUSrc <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			ALUOP <= 2'b10;
			branch <= 0;
			PCSrc <= 0;
		end
		6'b000010://j
		begin
			RegDst <= 1;
			ALUSrc <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			ALUOP <= 2'b01;
			branch <= 1;
			PCSrc <= 1;
		end
		6'b001000://addi
		begin
			RegDst <= 0;
			ALUSrc <= 1;
			MemWrite <= 0;
			MemtoReg <= 0;
			ALUOP <= 2'b10;
			branch <= 0;
			PCSrc <= 0;
		end
		6'b000111://bgtz
		begin
			RegDst <= 1;
			ALUSrc <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			ALUOP <= 2'b11;
			branch <= 1;
			PCSrc <= 0;
		end
		6'b100011://lw
		begin
			RegDst <= 0;
			ALUSrc <= 1;
			MemWrite <= 0;
			MemtoReg <= 1;
			ALUOP <= 2'b00;
			branch <= 0;
			PCSrc <= 0;
		end
		6'b101011://sw
		begin
			RegDst <= 1;
			ALUSrc <= 1;
			MemWrite <= 1;
			MemtoReg <= 0;
			ALUOP <= 2'b00;
			branch <= 0;
			PCSrc <= 0;
		end
		default:
		begin
			RegDst <= 1;
			ALUSrc <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			ALUOP <= 2'b00;
			branch <= 0;
			PCSrc <= 0;
		end
	endcase
end

assign	RegWrite = (~insc[28] & (~insc[27]))|(insc[31] & (~insc[29]));

always@(*)//REG
begin
	read_reg1 = insc[25:21];
	read_reg2 = insc[20:16];
	wea_reg = RegWrite;
	if(RegDst)
		write_reg = insc[15:11];
	else
		write_reg = insc[20:16];
end

endmodule
