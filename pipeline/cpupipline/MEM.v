`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:41 05/15/2017 
// Design Name: 
// Module Name:    MEM 
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
module MEM(
	input clk,
	input rst_n,
	input MemWriteM,
	input [31:0] alu_outM,
	input [5:0] opM,
	input [31:0] r2_doutM,
	input [9:0] out_addr,
	input memread_en,
	output  [31:0] doutbM
    );
	 
wire [1:0] addrchose;
wire [9:0] a;
reg [31:0] dina;
reg [9:0] addra;
assign addrchose = alu_outM[1:0];
always@(*)
begin
	if(~memread_en)
	addra = alu_outM[9:0];
	else
	addra = out_addr;//read form outside
end
assign a = addra/4;

always@(*)
begin
if(opM == 6'h28)//sb
begin
	if(addrchose == 0)
		dina = {doutbM[31:8],r2_doutM[7:0]};
	else if(addrchose == 1)
		dina = {doutbM[31:16],r2_doutM[7:0],doutbM[7:0]};
	else if(addrchose == 2)
		dina = {doutbM[31:24],r2_doutM[7:0],doutbM[15:0]};
	else
		dina = {r2_doutM[7:0],doutbM[23:0]};
end
else if(opM == 6'h29)//sh
begin
	if(addrchose == 0)
		dina = {doutbM[31:16],r2_doutM[15:0]};
	else if(addrchose == 2)
		dina = {r2_doutM[15:0],doutbM[15:0]};
end
else//sw
	dina = r2_doutM;
end

DRAM	u_DRAM(
.clk			(clk			),
.we			(MemWriteM	),
.a				(a				),
.d				(dina			),
.spo			(doutbM		)
);

endmodule
