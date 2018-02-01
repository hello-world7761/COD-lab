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
output reg r3_wr
    );
reg state;
always@(posedge clk or negedge rst_n) 
begin
   if(~rst_n)
	begin
	  state=1'b0;
	  r1_addr=5'b00;
	  r2_addr=5'b01;
	  r3_addr=5'b10;
	  r3_wr=0;
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
	  r2_addr=r2_addr+5'b1;
	  r1_addr=r1_addr+5'b1;
	  state=1'b0;
	  end
	end
end
endmodule

