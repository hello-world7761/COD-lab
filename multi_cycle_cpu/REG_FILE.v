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
input	  clk,
input	  rst_n,
input	[4:0]	r1_addr,
input	[4:0]	r2_addr,
input	[4:0]	r3_addr,
input	[31:0] r3_din,
input	 r3_wr,
output reg [31:0] r1_dout,
output reg [31:0]	r2_dout
    );
reg [31:0] register[0:31];//32位的寄存器数组，一共32个
integer k,i;
always@(posedge clk or negedge rst_n)
begin
 if(~rst_n)    //初始化
 begin
   for(k=0;k<32;k=k+1)
	  register[k]=32'b0;
 end
 else if(r3_wr)   //如果可写
 begin
   i=r3_addr;
	register[i]=r3_din;
	i=r1_addr;
	r1_dout=register[i];
	i=r2_addr;
	r2_dout=register[i];
 end
 else
 begin           //如果不可写
   i=r1_addr;
	r1_dout=register[i];
	i=r2_addr;
	r2_dout=register[i];
	end            //该寄存器实现的是读写全双工，
	               //可以读写同时进行，如果在用一个寄存器上
						//同时使用读写时，先写后读
end



endmodule
