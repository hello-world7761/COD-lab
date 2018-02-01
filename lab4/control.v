`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:03:33 04/09/2017 
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
input [31:0] doutb,
output reg [4:0] alu_op,
output reg [4:0]r1_addr,
output reg [4:0]r2_addr,
output reg [4:0]r3_addr,
output reg r3_wr,
output reg wea,
output reg [7:0] addra,
output reg [7:0] addrb
    );
parameter firstread=2'b00,secondread=2'b01,get_op_and_wr=2'b10,finish=2'b11;
reg [1:0] curstate;
reg [1:0] nextstate;
reg [7:0] addr1;
reg [7:0] addr2;
always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)  curstate<=firstread;
  else curstate<=nextstate;
end

always@(*)
begin
  case(curstate)
  firstread:  
   nextstate<=secondread;
  secondread:
    if(doutb==32'b1111_1111_1111_1111_1111_1111_1111_1111)   //-1ʱֹͣ
     nextstate<=finish;
    else nextstate<=get_op_and_wr;
  get_op_and_wr:
     nextstate<=firstread;
  finish: nextstate<=finish;
  endcase
end
always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
  begin
   r3_addr=5'b0;
	addr1=8'd0;
	addr2=8'd100;
	addra=8'd199;
	addrb=8'b0;
	r3_wr=0;
	wea=0;
	r1_addr=5'b0;
	r2_addr=5'b1;
	alu_op=5'b0;
  end
  else
  begin
  case(curstate)
  firstread:
  begin 
   r3_wr=0;
	if(r3_addr==0) r3_addr=r3_addr;
	else 
	begin
	r3_addr=r3_addr+1;
	r1_addr=r1_addr+2;
	r2_addr=r2_addr+2;
	wea=1;
	end
	if(addr1==0)  addr1=8'b0;
	else addr1=addr1+1;
	addrb=addr1;
  end
  secondread:
  begin
   r3_wr=1;
	wea=0;
	addr1=addr1+1;
	addrb=addr1;
	if(r3_addr!=0)
	alu_op=doutb[4:0];
  end
  get_op_and_wr:
  begin	
   r3_addr=r3_addr+1;
   r3_wr=1;
	wea=0;
	addr2=addr2+1;
	addrb=addr2;
	addra=addra+1;
  end
  finish:
  begin
   r3_wr=0;
	wea=0;
  end
  endcase
  end
end
endmodule

