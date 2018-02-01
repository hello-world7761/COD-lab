`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:45 04/16/2017 
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
input [31:0] instruction,
input [31:0] spo,
input [31:0] r1_dout,
input [31:0] r2_dout,
input [31:0] alu_out,
output reg signed [7:0] pc,
output reg [4:0] r1_addr,
output reg [4:0] r2_addr,
output reg [4:0] r3_addr,
output reg [31:0] r3_din,
output reg we,
output reg [5:0] rom_a,
output reg [5:0] ram_a,
output reg [31:0] alu_b,
output reg [4:0] alu_op,
output reg r3_wr,
output reg signed [17:0] b_pc
);
reg flag;
reg signed [31:0] judge;
reg signed [17:0] offset;
reg signed [17:0] next_pc;
reg [27:0] j_pc;
always@(*)
begin
  if(~rst_n) next_pc=0;
  else if(flag==1) next_pc=pc+4;
  offset=instruction[15:0]<<2;
  b_pc=offset+next_pc;//branch
  j_pc=instruction[25:0]<<2;//jump
end
always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)   
  begin
    pc=7'b0;
	 flag=0;
  end
  else if(instruction[31:26]==6'b000010) pc=j_pc[7:0];
  else if(instruction[31:26]==6'b000111&&judge>0) pc=b_pc[7:0];//bgzt
  else 
  begin
    pc=next_pc[7:0];
	 flag=1;
  end
end
always@(*)
begin
  rom_a=pc>>2;
end
always@(*)
begin
  if(~rst_n)
  begin
   r3_wr=0;
	we=0;
	r1_addr=0;
	r2_addr=0;
  end
  else if(instruction[31:26]==6'b001000)     //addi
  begin
   if(instruction[15]==1)
	  alu_b={16'b11111_1111_1111_1111,instruction[15:0]};
	else alu_b={16'b0000_0000_0000_0000,instruction[15:0]};
	r1_addr=instruction[25:21];
	r3_addr=instruction[20:16];
	r3_din=alu_out;
	alu_op=5'h01;
	if(~clk) r3_wr=1;
	else r3_wr=0;
  end
  else if(instruction[31:26]==6'b000000)    //add
  begin
   r1_addr=instruction[25:21];
	r2_addr=instruction[20:16];
	r3_addr=instruction[15:11];
	alu_b=r2_dout;
	alu_op=5'h01;
	r3_din=alu_out;
	if(~clk) r3_wr=1;
	else r3_wr=0;
  end
  else if(instruction[31:26]==6'b100011)   //lw
  begin
   r1_addr=instruction[25:21];
	alu_b={16'b0000_0000_0000_0000,instruction[15:0]};
	alu_op=5'h01;
	ram_a=alu_out[7:2];
	r3_addr=instruction[20:16];
	r3_din=spo;
	if(~clk) r3_wr=1;
	else r3_wr=0;
  end
  else if(instruction[31:26]==6'b101011)   //sw
  begin
   r1_addr=instruction[25:21];
	r2_addr=instruction[20:16];
	alu_b={16'b0000_0000_0000_0000,instruction[15:0]};
	ram_a=alu_out[7:2];
	alu_op=5'h01;
	r3_wr=0;
	if(~clk) we=1;
	else we=0;
  end
  else if(instruction[31:26]==6'b000111) //bgtz
  begin
   r1_addr=instruction[25:21];
	judge=r1_dout;
  end
end
endmodule
