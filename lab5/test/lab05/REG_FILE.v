`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:14:31 03/20/2017 
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
	input		clk,
	input		rst_n,
	input	[4:0]		r1_addr,
	input	[4:0]	   r2_addr,
	input	[4:0]	  	r3_addr,
	input	[31:0]   r3_din,
	input		r3_wr,
	output	[31:0]	r1_dout,
	output	[31:0]	r2_dout 
	);
	
reg [31:0] regfile [31:0];
reg [5:0] i;

assign r1_dout = regfile[r1_addr];
assign r2_dout = regfile[r2_addr];

always@(posedge clk or negedge rst_n)
begin
	if(~rst_n)
	begin
		regfile[0] <= 32'b1;
		regfile[1] <= 32'b1;
		for(i=6'd2;i<32;i=i+1)
			regfile[i] <= 32'b0;
	end
	else if(r3_wr)
			regfile[r3_addr] <= r3_din;
end
endmodule
