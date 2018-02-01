`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:34 03/27/2017 
// Design Name: 
// Module Name:    CONTROL 
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
module CONTROL(
	input clk,
	input rst_n,
	input [5:0] op,
	input [5:0] funct,
	input [31:0] r1_dout,
	input [31:0] r2_dout,
	input [4:0] RegDst0,
	input [4:0] RegDst1,
	input [31:0] alu_out,
	input [31:0] doutb,
	input [15:0] imm,
	input [25:0] jumpaddr,
	input [31:0] pc,
	input [4:0] shamt,
	output reg [31:0] r3_din,
	output reg [4:0] r3_addr,
	output reg [31:0] alu_ina,
	output reg [31:0] alu_inb,
	output reg MemWrite,
	output reg [4:0] ALUControl,
	output reg RegWrite,
	output reg PCSrc,
	output reg [31:0] pcchange,
	output reg jump,
	//output reg [9:0] addra,
	output reg IRWrite,
	output reg PCWrite,
	output reg [31:0] dina
    );

reg ALUSrcA,MemtoReg,Branch,RegDst,JumpFlag;
reg [31:0] signimm,signimmc,pcplus;
reg [4:0]cur_state,next_state;
reg [1:0] cnt_num;
reg [1:0] ALUSrcB;
wire [1:0] addrchose;
assign addrchose = alu_out[1:0];

always@(posedge clk or negedge rst_n)//state store
begin
	if(~rst_n)
		cur_state <= 5'h0;
	else
	begin
		cur_state <= next_state;
		if(cur_state == 5'h0)
		cnt_num <= 2'h0;
		else if(cnt_num <2'h2 && cur_state == 5'h1)
		cnt_num <= cnt_num + 2'h1;
		else
		cnt_num <= cnt_num;
	end
end

always@(*)//state change
begin
case(cur_state)
	5'h0://fetch
	next_state = 5'h1;
	5'h1://decode
	begin
	if(cnt_num == 2'h2)//wait for the read
	begin
		case(op)
			6'b000000://r-type
			begin
				if(funct == 6'b001000)
				next_state = 5'hb;
				else
				next_state = 5'h6;
			end
			6'b001000://addi ok
				next_state = 5'h9;
			6'b001100://andi ok
				next_state = 5'h9;
			6'b001101://ori
				next_state = 5'h9;
			6'b001110://xori
				next_state = 5'h9;
			6'b001010://slti
				next_state = 5'h9;
			6'b001011://sltiu
				next_state = 5'h9;
			6'b001001://addiu
				next_state = 5'h9;
			6'b001111://lui
				next_state = 5'h9;
			6'b100011://lw ok
				next_state = 5'h2;
			6'b101011://sw ok
				next_state = 5'h2;
			6'b101000://sb
				next_state = 5'h2;
			6'b101001://sh
				next_state = 5'h2;
			6'b100000://lb
				next_state = 5'h2;
			6'b100100://lbu
				next_state = 5'h2;
			6'b100001://lh
				next_state = 5'h2;
			6'b100101://lhu
				next_state = 5'h2;
			6'b000101://bne ok
				next_state = 5'h8;
			6'b000111://bgtz ok
				next_state = 5'h8;
			6'b000100://beq
				next_state = 5'h8;
			6'b000001://bgez or bltz
				next_state = 5'h8;
			6'b000110://blez
				next_state = 5'h8;
			6'b000010://j ok
				next_state = 5'hb;
		default:next_state = 5'h1;
		endcase
	end
	else
	begin
		next_state = 5'h1;
	end
	end
	5'h2://MemAdr
	begin
		case(op)
			6'b100011://lw ok
				next_state = 5'h3;
			6'b100000://lb
				next_state = 5'h3;
			6'b100100://lbu
				next_state = 5'h3;
			6'b100001://lh
				next_state = 5'h3;
			6'b100101://lhu
				next_state = 5'h3;
			6'b101000://sb
				next_state = 5'h3;
			6'b101001://sh
				next_state = 5'h3;
			6'b101011://sw ok
				next_state = 5'h5;
			default:next_state = 5'h3;
		endcase	
	end
	5'h3://MemRead
	begin
	if(op == 6'h28 || op == 6'h29)
		next_state = 5'h5;
	else
		next_state = 5'h4;
	end
	5'h4://MemWriteBack
	begin
	//if(cnt_num == 2'h2)//wait for the read
		next_state = 5'h0;
	//else
		//next_state = 5'h4;
	end
	5'h5://MemWrite
		next_state = 5'h0;
	5'h6://Execute
		next_state = 5'h7;
	5'h7://ALU WriteBack
		next_state = 5'h0;
	5'h8://Branch
		next_state = 5'h0;
	5'h9://ADDI Execute
		next_state = 5'ha;
	5'ha://ADDI WriteBack
		next_state = 5'h0;
	5'hb://Jump
		next_state = 5'h0;	
default: next_state = 5'h0;
endcase 
end

always@(*)
begin
case(cur_state)
	5'h0://fetch
	begin
		MemWrite <= 1'h0;
		RegWrite <= 1'h0;
		ALUSrcA <= 1'h0;
		ALUSrcB <= 2'b00;
		MemtoReg <= 1'h0;
		RegDst <= 1'h0;
		Branch <= 1'h0;
		jump <= 1'h0;
		IRWrite <= 1'h0;
		PCWrite <= 1'h1;
		ALUSrcA <= 1'h0;
		ALUSrcB <= 2'b01;
		//cnt_num <= 2'h0;
	end
	5'h1://Decode
	begin
		ALUSrcA <= 1'h0;
		ALUSrcB <= 2'b11;
		IRWrite <= 1'h1;
		PCWrite <= 1'h0;
	end
	5'h2://MemAdr
	begin
		IRWrite <= 1'h0;
		ALUSrcA <= 1'h1;
		ALUSrcB <= 2'b10;
	end
	5'h3://MemRead
	begin
		//cnt_num <= 2'h0;
	end
	5'h4://MemWriteback
	begin
		RegDst <= 1'h0;
		MemtoReg <= 1'h1;
		RegWrite <= 1'h1;
	end
	5'h5://MemWrite
	begin
		MemWrite <= 1'h1;
	end
	5'h6://Execute
	begin
		IRWrite <= 1'h0;
		ALUSrcA <= 1'h1;
		ALUSrcB <= 2'b00;
	end
	5'h7://ALU Writeback
	begin
		RegDst <= 1'h1;
		MemtoReg <= 1'h0;
		RegWrite <= 1'h1;
	end
	5'h8://Branch
	begin
		IRWrite <= 1'h0;
		ALUSrcA <= 1'h1;
		ALUSrcB <= 2'b00;
		Branch <= 1'h1;
		PCWrite <= 1'h1;
	end
	5'h9://ADDI Execute
	begin
		IRWrite <= 1'h0;
		ALUSrcA <= 1'h1;
		ALUSrcB <= 2'b10;
	end
	5'ha://ADDI Writeback
	begin
		RegDst <= 1'h0;
		MemtoReg <= 1'h0;
		RegWrite <= 1'h1;
	end
	5'hb://JUMP
	begin
		IRWrite <= 1'h0;
		jump <= 1'h1;
		PCWrite <= 1'h1;
	end
default:
begin
	MemWrite <= 1'h0;
	RegWrite <= 1'h0;
	ALUSrcA <= 1'h0;
	ALUSrcB <= 2'b00;
	MemtoReg <= 1'h0;
	RegDst <= 1'h0;
	Branch <= 1'h0;
	jump <= 1'h0;
end
endcase
end

always@(*)//alu decoder
begin
	if(~rst_n)
		ALUControl <= 5'h0;
	else if(op == 6'h0)
		case(funct)//add code here
			6'b100000:ALUControl <= 5'h01;//add
			6'b100001:ALUControl <= 5'h01;//addu
			6'b100010:ALUControl <= 5'h02;//sub
			6'b100011:ALUControl <= 5'h02;//subu
			6'b100100:ALUControl <= 5'h03;//and
			6'b100101:ALUControl <= 5'h04;//or
			6'b100110:ALUControl <= 5'h05;//xor
			6'b100111:ALUControl <= 5'h06;//nor
			6'b000000:ALUControl <= 5'h07;//sll
			6'b000100:ALUControl <= 5'h07;//sllv
			6'b000010:ALUControl <= 5'h08;//srl
			6'b000110:ALUControl <= 5'h08;//srlv
			6'b000011:ALUControl <= 5'h09;//sra
			6'b000111:ALUControl <= 5'h09;//srav
			6'b101010:ALUControl <= 5'h0b;//slt
			6'b101011:ALUControl <= 5'h0c;//sltu
		default:ALUControl <= 5'h0;
		endcase
	else if(op == 6'b001100)
		ALUControl <= 5'h03;//andi
	else if(op == 6'b001101)
		ALUControl <= 5'h04;//ori
	else if(op == 6'b001110)
		ALUControl <= 5'h05;//xori
	else if(op == 6'b001111)
		ALUControl <= 5'h0a;//lui
	else if(op == 6'b001010)
		ALUControl <= 5'h0b;//slti
	else if(op == 6'b001011)
		ALUControl <= 5'h0c;//sltiu
	else if(op == 6'b000101 || op == 6'b000100)
		ALUControl <= 5'h02;//sub for bne and beq
	else
		ALUControl <= 5'h01;
end

always@(*)
begin
	if(op == 6'b001001 || op == 6'b001011)//addiu sltiu
	signimm = imm;
	else
	begin
	if(imm[15]==0)
		begin
			signimm[31:16] = 16'h0;
			signimm[15:0] = imm;
		end
	else
		begin
			signimm[31:16] = 16'hffff;
			signimm[15:0] = imm;
		end
	end
end

always@(*)
begin
	if(Branch == 1'h1)
		signimmc = signimm << 2;
	else
		signimmc = signimm;
end

always@(*)
begin
	if(jump == 1'h1 && op == 6'b000010)
		begin
			pcchange[27:2] = jumpaddr;
			pcchange[1:0] = 2'b00;
			pcchange[31:28] = pcplus[31:28];
		end
	else if(jump == 1'h1 && op == 6'b000000)
		pcchange = r1_dout;//for jr
	else
		pcchange = signimmc + pcplus;
end

always@(pc)
pcplus = pc +32'h4;

always@(*)
begin
case(ALUSrcA)
	1'h1:
	begin
	if(op == 6'h0 && (funct == 6'h0 || funct == 6'h2 || funct == 6'h3))//for sll srl sra
		alu_ina = shamt;
	else
		alu_ina = r1_dout;
	end
	1'h0:alu_ina = pc;
default: alu_ina = r1_dout;
endcase
end

always@(*)
case(ALUSrcB)
	2'h0:alu_inb = r2_dout;
	2'h1:alu_inb = 32'h4;
	2'h2:alu_inb = signimm;
	2'h3:alu_inb = signimmc;
default:alu_inb = r2_dout;
endcase

always@(*)
begin
case(RegDst)
	1'h0:r3_addr = RegDst0;
	1'h1:r3_addr = RegDst1;
default: r3_addr = RegDst0;
endcase
end

always@(*)
case(MemtoReg)
	1'h0:r3_din = alu_out;
	1'h1:
	begin
	case (op)
	6'h23:r3_din = doutb;//lw
	6'h20://lb
	begin
		if(addrchose == 0)
			r3_din = $signed(doutb[7:0]);
		else if(addrchose == 1)
			r3_din = $signed(doutb[15:8]);
		else if(addrchose == 2)
			r3_din = $signed(doutb[23:16]);
		else
			r3_din = $signed(doutb[31:24]);
	end
	6'h24://lbu
	begin
		if(addrchose == 0)
			r3_din = doutb[7:0];
		else if(addrchose == 1)
			r3_din = doutb[15:8];
		else if(addrchose == 2)
			r3_din = doutb[23:16];
		else
			r3_din = doutb[31:24];
	end
	6'h21://lh
	begin
		if(addrchose == 0)
			r3_din = $signed(doutb[15:0]);
		else
			r3_din = $signed(doutb[31:16]);
	end
	6'h25://lhu
	begin
		if(addrchose == 0)
			r3_din = doutb[15:0];
		else
			r3_din = doutb[31:16];
	end
	default:r3_din = doutb;
	endcase
	end
default:r3_din = alu_out;
endcase

always@(*)
begin
case(op)//branch add code here
6'b000111://bgtz
begin
	if($signed(alu_out)>0)
		JumpFlag <= 1'h1;
	else
		JumpFlag <= 1'h0;
end
6'b000101://bne
begin
	if(alu_out == 0)
		JumpFlag <= 1'h0;
	else
		JumpFlag <= 1'h1;
end
6'b000100://beq
begin
	if(alu_out == 0)
		JumpFlag <= 1'h1;
	else
		JumpFlag <= 1'h0;
end
6'b000110://blez
begin
	if($signed(alu_out)<=0)
		JumpFlag <= 1'h1;
	else
		JumpFlag <= 1'h0;
end
6'b000001://bgez and bltz
begin
	if(RegDst0 == 0)//bltz
	begin
		if($signed(alu_out)<0)
			JumpFlag <= 1'h1;
		else
			JumpFlag <= 1'h0;
	end		
	else if(RegDst0 == 1)//bgez
	begin
		if($signed(alu_out)>=0)
			JumpFlag <= 1'h1;
		else
			JumpFlag <= 1'h0;
	end		
end
default: JumpFlag <= 1'h0;
endcase
end

always@(*)
case(Branch)
	1'h0:PCSrc = 1'h0;
	1'h1:PCSrc = JumpFlag;
default:PCSrc = 1'h0;
endcase

always@(*)
begin
if(op == 6'h28)//sb
begin
	if(addrchose == 0)
		dina = {doutb[31:8],r2_dout[7:0]};
	else if(addrchose == 1)
		dina = {doutb[31:16],r2_dout[7:0],doutb[7:0]};
	else if(addrchose == 2)
		dina = {doutb[31:24],r2_dout[7:0],doutb[15:0]};
	else
		dina = {r2_dout[7:0],doutb[23:0]};
end
else if(op == 6'h29)//sh
begin
	if(addrchose == 0)
		dina = {doutb[31:16],r2_dout[15:0]};
	else if(addrchose == 2)
		dina = {r2_dout[15:0],doutb[15:0]};
end
else//sw
	dina = r2_dout;
end

endmodule
