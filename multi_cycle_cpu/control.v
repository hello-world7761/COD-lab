`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:38:34 05/02/2017 
// Design Name: 
// Module Name:    control 
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
module control(
input clk,
input rst_n,
input [31:0] dout,
input [31:0] r1_dout,
input [31:0] r2_dout,
input [31:0] alu_out,
output reg [31:0] instruction,
output reg signed [7:0] pc,
output reg [4:0] r1_addr,
output reg [4:0] r2_addr,
output reg [4:0] r3_addr,
output reg [31:0] r3_din,
output reg wea,
output reg [5:0] addrb,
output reg [5:0] addra,
output reg [31:0] alu_a,
output reg [31:0] alu_b,
output reg [4:0] alu_op,
output reg r3_wr,
output reg signed [31:0] b_pc,
output reg [2:0] curstate
);
parameter init=3'b00, fi=3'b01,id=3'b10, ex=3'b11, me=3'b100, wb=3'b101;
reg [2:0] nextstate;
reg flag;
reg signed [31:0] judge;
reg signed [31:0] offset;
reg signed [31:0] b_offset;
reg [7:0] next_pc;
reg [27:0] j_pc;
always@(posedge clk or negedge rst_n)
begin
	if(~rst_n)
		curstate<=init;
	else
	   curstate<=nextstate;
end
always@(*)
begin
	case(curstate)
	init:nextstate=fi;
	fi:nextstate=id;
	id:
	begin
		if(instruction[31:26]==6'b000010)   nextstate=fi;
		else nextstate=ex;
	end
	ex:
	begin
		if(instruction[31:26]==6'b001000||instruction[31:26]==6'b000000) //add or addi
			nextstate=wb;
		else if(instruction[31:26]==6'b100011||instruction[31:26]==6'b101011)//lw or sw
			nextstate=me;
		else if(instruction[31:26]==6'b000111)  //bgtz
			nextstate=fi;
	end
	me:
	begin
		if(instruction[31:26]==6'b100011) //lw
			nextstate=wb;
		else if(instruction[31:26]==6'b101011) //sw
			nextstate=fi;
	end
	wb: nextstate=fi;
	endcase
end
always@(*)
begin
  if(~rst_n) next_pc=0;             //next_pc��ʼ��  
  else if(curstate!=init&&curstate!=fi) next_pc=pc+4;    //next_pc��Ϊpc+4
  //offset=instruction[15:0]<<2;      //pcƫ���������ڷ�ָ֧��
  b_pc=alu_out;
  j_pc=instruction[25:0]<<2;        //��תָ��õ���pc
end
always@(*)
begin
  if(~rst_n)   
  begin
	pc=8'b0;                       //pc��ʼ��	wea=0;
	r3_wr=0;
	r1_addr=0;
	r2_addr=0;
	judge=0;
  end
  else
  begin
		if(instruction[15]==1)
			offset={16'b11111_1111_1111_1111,instruction[15:0]};
		else offset={16'b0000_0000_0000_0000,instruction[15:0]};  //alu�ĵڶ���������ԴΪ����������λ��չ		
		b_offset=offset<<2;
	case(curstate)
	fi:
	begin
		if(instruction[31:26]==6'b000010) pc=j_pc[7:0];
		else if(instruction[31:26]==6'b000111&&judge>0) pc=b_pc[7:0];
		else pc=next_pc[7:0];   //ѡ��pc		
		addrb=pc>>2;
		wea=0;
		r3_wr=0;
	end
	id:
	begin
	   instruction=dout;
		if(instruction[31:26]==6'b001000)     //addi
		begin
			alu_a=r1_dout;
			alu_b=offset;                     //alu�ĵڶ���������ԴΪ����������λ��չ
			r1_addr=instruction[25:21];      
			r3_addr=instruction[20:16];               //ȷ���������Ĵ�����			
			//r3_din=alu_out;                           //������������alu�����			
			alu_op=5'h01;
			r3_wr=0;
		end
		else if(instruction[31:26]==6'b000000)    //add
		begin
			r1_addr=instruction[25:21];
			r2_addr=instruction[20:16];
			r3_addr=instruction[15:11];              //ȷ���������Ĵ����ź�д�Ĵ�����			
			alu_b=r2_dout;                           //alu�ĵڶ���������ԴΪ�ڶ������Ĵ���
			alu_a=r1_dout;
			alu_op=5'h01;
			//r3_din=alu_out;                          //���д�ؼĴ�����
			r3_wr=0;
		end
		else if(instruction[31:26]==6'b100011)   //lw
		begin
			r1_addr=instruction[25:21];                       //�õ����Ĵ�����
			alu_a=r1_dout;
			alu_b=offset;                 //alu�ĵڶ���������ԴΪ����������λ��չ			
			alu_op=5'h01;
			r3_addr=instruction[20:16];                        //�õ�Ŀ�ļĴ�����
			//r3_din=spo;
			r3_wr=0;
		end
		else if(instruction[31:26]==6'b101011)   //sw
		begin
			r1_addr=instruction[25:21];
			r2_addr=instruction[20:16];                      //�õ��������Ĵ�����		
			alu_a=r1_dout;
			alu_b=offset; //alu�ĵڶ���������ԴΪ����������λ�ؽ�			
			alu_op=5'h01;
			r3_wr=0;
		end
		else if(instruction[31:26]==6'b000111) //bgtz
		begin
			r1_addr=instruction[25:21];
			judge=r1_dout;                                    //judge=r1_dout>0��Ϊ�Ƿ���ת�������ж�			
			alu_a=next_pc;
			alu_b=b_offset;
		end
	end
	ex:
	begin
		if(instruction[31:26]==6'b001000||instruction[31:26]==6'b000000)  //add or addi
		begin
			r3_din=alu_out;
			r3_wr=1;
		end
		else if(instruction[31:26]==6'b100011) //lw
		begin
			addrb=alu_out[7:2];                //�õ�������ַ
			r3_wr=1;
		end
		else if(instruction[31:26]==6'b101011) //sw
		begin
			addra=alu_out[7:2];                //�õ�д����ַ
			wea=1;
			//dina=r1_dout;
		end
	end
	me:
	begin
		wea=0;
		r3_din=dout;
	end
	wb:r3_wr=0;
	endcase
  end
end

endmodule


