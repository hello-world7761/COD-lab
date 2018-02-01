`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:05:10 03/27/2017 
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
//////////////////////////////////////////////////////////////////////////////////
module REG_FILE(
input clk,
input	  rst_n,
input	[4:0]	r1_addr,
input	[4:0]	r2_addr,
input	[4:0]	r3_addr,
input	[31:0] r3_din,
input	 r3_wr,
output [31:0] r1_dout,
output [31:0] r2_dout
    );
reg [31:0] register[0:31];//32λ�ļĴ������飬һ��32��
assign r1_dout=register[r1_addr];
assign r2_dout=register[r2_addr];
integer k;
always@(posedge clk or negedge rst_n)
begin
 if(~rst_n)    //��ʼ��
 begin
   for(k=0;k<32;k=k+1)
	  register[k]=32'b0;
 end
 else if(r3_wr)   //�����д
     register[r3_addr]=r3_din;
end



endmodule
