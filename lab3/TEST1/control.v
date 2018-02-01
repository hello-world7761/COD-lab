`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:22:33 03/27/2017 
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
input [31:0] aluin,
output reg [31:0] din,
output reg wea,
output reg [5:0] addra,
output reg [5:0] addrb,
output reg [4:0] r1_addr,
output reg [4:0] r2_addr,
output reg [4:0] r3_addr,
output reg r3_wr
    );
   reg state;
	reg [2:0] read;
always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
  begin
  read=2'b00;
  addrb=6'b00;
  end
  else if(read<=2'b10)
  begin
  read=read+1'b1;
  addrb=addrb+1'b1;
  din=doutb;
  end
  else
  din=aluin;
end
always@(posedge clk or negedge rst_n)
begin
  if(~rst_n)
  begin
  state=1'b0;
  wea=1'b0;
  addra=5'b01;
  r1_addr=5'b00;
  r2_addr=5'b01;
  r3_addr=5'b00;
  r3_wr=1;
  end
  else
  begin
  if(state==1'b0&&read>2'b01)  //此时为写状态
  begin
  r3_wr=1;
  state=1'b1;
  end
  else if(state==1'b1 &&r3_addr<5'b11111)//此时为读和地址递增
  begin
  r3_wr=0;
  wea=0;
  r3_addr=r3_addr+1;
  state=1'b0;
  if(r3_addr>=5'b10)
  begin
  r1_addr=r1_addr+5'b1;
  r2_addr=r2_addr+5'b1;
  addra=addra+5'b1;
  wea=1;
  end
  end
  else
  begin
  wea=0;
  r3_wr=0;
  end
  end
end

endmodule
