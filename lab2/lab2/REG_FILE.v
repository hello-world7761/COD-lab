`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:19 03/21/2017 
// Design Name: 
// Module Name:    REG_FILE 
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
///////
///////////////////////////////////////////////////////////////////////////
module REG_FILE(
input			          clk,
input			          rst_n,
input	[4:0]	          r1_addr,
input	[4:0]           r2_addr,
input	[4:0]	          r3_addr,
input	[31:0]          r3_din,
input			          r3_wr,
output reg [31:0]	    r1_dout,
output  reg [31:0]	 r2_dout
);
reg [31:0] register[31:0];
integer i;
always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
begin
   register[0]<=32'h1;
   register[1]<=32'h1;
   for(i=2;i<=31;i=i+1)
   begin
   register[i]<=32'h0;
   end
   end
else if(r3_addr)
register[r3_addr]<= r3_din;
else
begin
for(i=0;i<=31;i=i+1)
begin
register[i]<=register[i];
end
end
end
always@(*)
begin
r1_dout <= register[r1_addr];
r2_dout <= register[r2_addr];
end



endmodule
