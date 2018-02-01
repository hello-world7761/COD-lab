`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:31:07 05/15/2017 
// Design Name: 
// Module Name:    IF 
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
module IF(
	input clk,
	input rst_n,
	input PCSrc,
	input [31:0] pcchange,
	input jump,
	input stall,
	input one_step_en,
	output  [31:0] irF,
	output reg [31:0] pcplusF,
	output reg [31:0] pc
    );
	 
reg [31:0] pcplus;
reg flow;
reg [9:0] addra2;
always@(*)
begin
if(~rst_n)
	flow = 0;
else if(flow == 1)
	addra2 = addra2;
else if(pc[10] != 1)
	addra2 = pc[9:0];
else
	begin
		addra2 = addra2;
		flow = 1;
	end
end

always@(*)
pcplusF = pcplus;

always@(posedge clk or negedge rst_n)
begin
	if(~rst_n)
		pc <= 32'h0;
	else if(stall)
		pc <= pc;
	else
	begin
		if (jump == 1'h1)
			pc <= pcchange;
		else if (PCSrc == 1'h1&&jump == 1'h0)
			pc <= pcchange;
		else 
			pc <= pcplus;
	end
end

always@(*)
begin
if(~rst_n)
	pcplus <= 32'h0;
else
	pcplus <= pc + 32'h4;
end


ROM	u_ROM(
.a				(addra2/4		),
.spo			(irF				)
);

endmodule
