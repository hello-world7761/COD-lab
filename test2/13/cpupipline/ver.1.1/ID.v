`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:45:26 05/15/2017 
// Design Name: 
// Module Name:    ID 
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
module ID(
	input clk,
	input rst_n,
	input [31:0] irD,
	input [31:0] pcplusD,
	input [4:0] r3_addrW,
	input RegWriteW,
	input [31:0] r3_dinW,
	input [31:0] alu_outM,
	output reg PCSrcD,
	output reg MemtoRegD,
	output reg MemWriteD,
	output reg [4:0] ALUControlD,
	output reg [31:0] pcchangeD,
	output reg BranchD,
	output reg ALUSrcAD,
	output reg [1:0] ALUSrcBD,
	output reg RegWriteD,
	output reg jumpD,
	output reg [4:0] rsD,
	output reg [4:0] rtD,
	output reg [4:0] rdD,
	output reg [31:0] signimmD,
	output reg [31:0] signimmcD,
	output reg [4:0] shamtD,
	output reg RegDstD,
	output reg [5:0] opD,
	output  [31:0] r1_doutD,
	output  [31:0] r2_doutD,
	output reg [5:0] functD
    );
reg [25:0] jumpaddr;
//wire [31:0] r1_dout,r2_dout;
reg [5:0] op;
reg [15:0] imm;
reg JumpFlag;
always@(*)
begin
opD = irD[31:26];
shamtD = irD[10:6];
rsD = irD[25:21];
rtD = irD[20:16];
rdD = irD[15:11];
imm = irD[15:0];
functD = irD[5:0];
jumpaddr = irD[25:0];
op = opD;
end

REG_FILE u_REGFILE(
.clk		(clk			),
.rst_n	(rst_n		),
.r1_addr	(rsD			),
.r2_addr	(rtD			),
.r3_addr	(r3_addrW	),
.r3_din	(r3_dinW		),
.r3_wr	(RegWriteW	),
.r1_dout	(r1_doutD	),
.r2_dout	(r2_doutD	)
);

always@(*)
begin
		MemWriteD <= 1'h0;
		RegWriteD <= 1'h0;
		ALUSrcAD <= 1'h0;
		ALUSrcBD <= 2'b00;
		MemtoRegD <= 1'h0;
		RegDstD <= 1'h0;
		BranchD <= 1'h0;
		jumpD <= 1'h0;
		case(op)
		6'b000000://r-type
			begin
				if(functD == 6'b001000)//jr
				jumpD <= 1'h1;
				else//other r-type
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b00;
					RegDstD <= 1'h1;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			end
			6'b001000://addi ok
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			6'b001100://andi ok
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			6'b001101://ori
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			6'b001110://xori
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			6'b001010://slti
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			6'b001011://sltiu
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			6'b001001://addiu
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			6'b001111://lui
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h0;
					RegWriteD <= 1'h1;
				end
			6'b100011://lw ok
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h1;
					RegWriteD <= 1'h1;
				end
			6'b101011://sw ok
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					MemWriteD <= 1'h1;
				end
			6'b101000://sb
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					MemWriteD <= 1'h1;
				end
			6'b101001://sh
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					MemWriteD <= 1'h1;
				end
			6'b100000://lb
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h1;
					RegWriteD <= 1'h1;
				end
			6'b100100://lbu
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h1;
					RegWriteD <= 1'h1;
				end
			6'b100101://lhu
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b10;
					RegDstD <= 1'h0;
					MemtoRegD <= 1'h1;
					RegWriteD <= 1'h1;
				end
			6'b000101://bne ok
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b00;
					BranchD <= 1'h1;
				end
			6'b000111://bgtz ok
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b00;
					BranchD <= 1'h1;
				end
			6'b000100://beq
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b00;
					BranchD <= 1'h1;
				end
			6'b000001://bgez or bltz
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b00;
					BranchD <= 1'h1;
				end
			6'b000110://blez
				begin
					ALUSrcAD <= 1'h1;
					ALUSrcBD <= 2'b00;
					BranchD <= 1'h1;
				end
			6'b000010://j ok
				jumpD <= 1'h1;
			endcase
end

always@(*)//alu decoder
begin
	if(~rst_n)
		ALUControlD <= 5'h0;
	else if(op == 6'h0)
		case(functD)//add code here
			6'b100000:ALUControlD <= 5'h01;//add
			6'b100001:ALUControlD <= 5'h01;//addu
			6'b100010:ALUControlD <= 5'h02;//sub
			6'b100011:ALUControlD <= 5'h02;//subu
			6'b100100:ALUControlD <= 5'h03;//and
			6'b100101:ALUControlD <= 5'h04;//or
			6'b100110:ALUControlD <= 5'h05;//xor
			6'b100111:ALUControlD <= 5'h06;//nor
			6'b000000:ALUControlD <= 5'h07;//sll
			6'b000100:ALUControlD <= 5'h07;//sllv
			6'b000010:ALUControlD <= 5'h08;//srl
			6'b000110:ALUControlD <= 5'h08;//srlv
			6'b000011:ALUControlD <= 5'h09;//sra
			6'b000111:ALUControlD <= 5'h09;//srav
			6'b101010:ALUControlD <= 5'h0b;//slt
			6'b101011:ALUControlD <= 5'h0c;//sltu
		default:ALUControlD <= 5'h0;
		endcase
	else if(op == 6'b001100)
		ALUControlD <= 5'h03;//andi
	else if(op == 6'b001101)
		ALUControlD <= 5'h04;//ori
	else if(op == 6'b001110)
		ALUControlD <= 5'h05;//xori
	else if(op == 6'b001111)
		ALUControlD <= 5'h0a;//lui
	else if(op == 6'b001010)
		ALUControlD <= 5'h0b;//slti
	else if(op == 6'b001011)
		ALUControlD <= 5'h0c;//sltiu
	else if(op == 6'b000101 || op == 6'b000100)
		ALUControlD <= 5'h02;//sub for bne and beq
	else
		ALUControlD <= 5'h01;
end

always@(*)
begin
	if(op == 6'b001001 || op == 6'b001011)//addiu sltiu
	signimmD = imm;
	else
	begin
	if(imm[15]==0)
		begin
			signimmD[31:16] = 16'h0;
			signimmD[15:0] = imm;
		end
	else
		begin
			signimmD[31:16] = 16'hffff;
			signimmD[15:0] = imm;
		end
	end
end

always@(*)
begin
	if(BranchD == 1'h1)
		signimmcD = signimmD << 2;
	else
		signimmcD = signimmD;
end

always@(*)
begin
	if(jumpD == 1'h1 && op == 6'b000010)
		begin
			pcchangeD[27:2] = jumpaddr;
			pcchangeD[1:0] = 2'b00;
			pcchangeD[31:28] = pcplusD[31:28];
		end
	else if(jumpD == 1'h1 && op == 6'b000000)
		pcchangeD = r1_doutD;//for jr
	else
		pcchangeD = signimmcD + pcplusD;
end

always@(*)
begin
case(op)//BranchD add code here
6'b000111://bgtz
begin
	if($signed(alu_outM)>0)
		JumpFlag <= 1'h1;
	else
		JumpFlag <= 1'h0;
end
6'b000101://bne
begin
	if(alu_outM == 0)
		JumpFlag <= 1'h0;
	else
		JumpFlag <= 1'h1;
end
6'b000100://beq
begin
	if(alu_outM == 0)
		JumpFlag <= 1'h1;
	else
		JumpFlag <= 1'h0;
end
6'b000110://blez
begin
	if($signed(alu_outM)<=0)
		JumpFlag <= 1'h1;
	else
		JumpFlag <= 1'h0;
end
6'b000001://bgez and bltz
begin
	if(rtD == 0)//bltz
	begin
		if($signed(alu_outM)<0)
			JumpFlag <= 1'h1;
		else
			JumpFlag <= 1'h0;
	end		
	else if(rtD == 1)//bgez
	begin
		if($signed(alu_outM)>=0)
			JumpFlag <= 1'h1;
		else
			JumpFlag <= 1'h0;
	end		
end
default: JumpFlag <= 1'h0;
endcase
end

always@(*)
case(BranchD)
	1'h0:PCSrcD = 1'h0;
	1'h1:PCSrcD = JumpFlag;
default:PCSrcD = 1'h0;
endcase

endmodule
