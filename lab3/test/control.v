`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:38:11 03/20/2017 
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
output reg [4:0] r1_addr,
output reg [4:0] r2_addr,
output reg [4:0] r3_addr,
output reg r3_wr,
//ram部分
input [31:0] doutb,
input [31:0] aluout,
output reg [31:0] addra,
output reg [31:0] addrb,
output reg [31:0] dina,
output reg wea
//临时变量
//output  reg	[31:0] comt_1,
//output  reg	[31:0] comt_2
    );
reg state;
reg [1:0] count;
always@(posedge clk or negedge rst_n)
begin
     if(~rst_n)
	 begin
	 count=2'b0;
	 addrb=32'b0;
	 end
	 else if(count <= 2'b01)
	 begin
	 count=count+1;
	 dina=1;
	 end
	 else
	   dina=aluout;   
end 

always@(posedge clk or negedge rst_n) 
begin
   if(~rst_n)
	begin
	  state=1'b0;
     r1_addr=5'b00;
	  r2_addr=5'b01;
	  r3_addr=5'b10;
	  r3_wr=0;
	  wea=0;
	  addra=32'b01;
	end
	else
	begin
	  if(state==1'b0)
	  begin
	  r3_wr=1;
	  state=1'b1;
	  end
	  else if(state==1'b1 && r3_addr<5'b11111)
	  begin
	  r3_wr=0;
	  r3_addr=r3_addr+5'b1;
	  wea=0;
	  state=1'b0;
	  end
	  if(r3_addr >= 5'b10)
	  begin  
	  r2_addr=r2_addr+5'b1;
	  r1_addr=r1_addr+5'b1;
	  wea=1;
	  addra=addra+32'b1;
	  end
	  else 
	  begin
	wea=0;
	r3_wr=0;
	end
	end
	end
endmodule

