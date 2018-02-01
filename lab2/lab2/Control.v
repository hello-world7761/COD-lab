`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:20:12 03/21/2017 
// Design Name: 
// Module Name:    Control 
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
module Control(
input clk,
input rst_n,
output reg [4:0]	alu_op,
output reg r3_wr,
output reg [4:0]	r1_addr,
output reg [4:0]	r2_addr,
output reg [4:0]	r3_addr
    );
always@(posedge clk  or negedge rst_n)
begin
if(~rst_n)
begin
r1_addr<=5'h0;
r2_addr<=5'h1;
r3_addr<=5'h2;
r3_wr<=1'b1;
alu_op<=5'h1;
end
else if(r3_addr<5'b11111)
begin
r1_addr<=r1_addr+5'h1;
r2_addr<=r1_addr+5'h1;
r3_addr<=r1_addr+5'h1;
r3_wr<=1'b1;
alu_op<=5'h1;
end
else 
begin
r1_addr<=5'h0;
r2_addr<=5'h1;
r3_addr<=5'h2;
r3_wr<=1'b0;
alu_op<=5'h0;
end
end
endmodule
