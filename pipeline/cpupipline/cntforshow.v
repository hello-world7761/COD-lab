`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:10:46 05/21/2017 
// Design Name: 
// Module Name:    cntforshow 
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
module cntforshow(
	 input clk,
    input rst_n,
    output reg [3:0] cnt
    );

reg [25:0] cnt_div;
reg cnt_en;
always@(posedge clk or negedge rst_n)
begin
	if(~rst_n)
		cnt_div <= 26'h0;
	else if(cnt_div == 26'd49_999_999)
		cnt_div <= 26'h0;
	else
		cnt_div <= cnt_div + 26'h1;
end

always@(posedge clk or negedge rst_n)
begin
	if(~rst_n)
		cnt_en <= 1'b0;
	else if(cnt_div == 26'd49_999_999)
		cnt_en <= 1'b1;
	else
		cnt_en <= 1'b0;
end

always@(posedge clk or negedge rst_n)
begin
if(~rst_n)
	cnt <= 4'h0;
else if(cnt_en)
begin
	if(cnt==4'hc)
	cnt <= 4'h0;
	else
	cnt <= cnt +4'h1;
end
else
	cnt <= cnt;
end


endmodule
