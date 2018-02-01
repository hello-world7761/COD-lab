`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:10:04 03/27/2017 
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
		input			      clk,
		input			      rst_n,
		input	[4:0]	    	r1_addr,
		input	[4:0]	      r2_addr,
		input	[4:0]	      r3_addr,
		input	[31:0]      r3_din,
		input			      r3_wr,
		output  reg [31:0]	   r1_dout,
		output  reg [31:0]	   r2_dout
    );

reg[0:31]mem[0:31];
reg[0:5] i;

always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
	begin
	mem[0] <= 32'h0;
	mem[1] <= 32'h0;
	for(i=2;i<32;i=i+1)
		mem[i] <= 32'h0;
	end
else if(r3_wr)
	begin
	mem[r3_addr] <= r3_din;
	end
else
	begin
	for(i=0;i<32;i=i+1)
	mem[i] <= mem[i];
	end
end

always@(*)
begin
r1_dout = mem[r1_addr];
r2_dout = mem[r2_addr];
end

endmodule
