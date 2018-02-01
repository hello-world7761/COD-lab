`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:57 05/15/2017 
// Design Name: 
// Module Name:    EX 
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
module EX(
	input clk,
	input rst_n,
	input [4:0] ALUControlE,
	input ALUSrcAE,
	input RegDstE,
	input [4:0] rtE,
	input [4:0] rsE,
	input [4:0] rdE,
	input [4:0] rsD,
	input [4:0] rtD,
	input [31:0]signimmE,
	input [31:0]signimmcE,
	input [1:0] ALUSrcBE,
	input [4:0] shamtE,
	input [31:0] r1_doutE,
	input [31:0] r2_doutE,
	input [5:0] functE,
	input [31:0] pcplusE,
	input [5:0] opE,
	input [4:0] r3_addrM,
	input [4:0] r3_addrW,
	input MemtoRegW,
	input RegWriteW,
	input RegWriteM,
	input MemtoRegM,
	input [31:0] r3_dinW,
	input [31:0] alu_outM,
	output  [31:0] alu_outE,
	output reg [4:0] r3_addrE,
	output reg [31:0] r2_doutEC,
	output [1:0] forwardAD, 
	output [1:0] forwardBD
    );
	 
reg [31:0] alu_ina, alu_inb,alu_first;
wire [1:0] forwardAE,forwardBE;
always@(*)
begin
case(RegDstE)
	1'h0:r3_addrE = rtE;
	1'h1:r3_addrE = rdE;
default: r3_addrE = rtE;
endcase
end

always@(*)
begin
case(ALUSrcAE)
	1'h1:
	begin
	if(opE == 6'h0 && (functE == 6'h0 || functE == 6'h2 || functE == 6'h3))//for sll srl sra
		alu_ina = shamtE;
	else
		alu_ina = r1_doutE;
	end
	1'h0:alu_ina = (pcplusE - 4);
default: alu_ina = r1_doutE;
endcase
end

always@(*)
case(ALUSrcBE)
	2'h0:alu_inb = r2_doutEC;
	2'h1:alu_inb = 32'h4;
	2'h2:alu_inb = signimmE;
	2'h3:alu_inb = signimmcE;
default:alu_inb = r2_doutE;
endcase

always@(*)
begin
case(forwardAE)
2'b00:alu_first = alu_ina;
2'b01:alu_first = r3_dinW;
2'b10:alu_first = alu_outM;
endcase
end

always@(*)
begin
case(forwardBE)
2'b00:r2_doutEC = r2_doutE;
2'b01:r2_doutEC = r3_dinW;
2'b10:r2_doutEC = alu_outM;
endcase
end

ALU	u_ALU(
.alu_a	(alu_first		),
.alu_b	(alu_inb			),
.alu_out	(alu_outE		),
.alu_op	(ALUControlE	)
);

forward	u_forward(
.clk			(clk			),
.rst_n		(rst_n		),
.rsE			(rsE			),
.rtE			(rtE			),
.rsD			(rsD			),
.rtD			(rtD			),
.r3_addrW	(r3_addrW	),
.r3_addrM	(r3_addrM	),
.MemtoRegW	(MemtoRegW	),
.RegWriteW	(RegWriteW	),
.RegWriteM	(RegWriteM	),
.MemtoRegM	(MemtoRegM	),
.forwardAE	(forwardAE	),
.forwardBE	(forwardBE	),
.forwardAD	(forwardAD	),
.forwardBD	(forwardBD	)
);

endmodule
