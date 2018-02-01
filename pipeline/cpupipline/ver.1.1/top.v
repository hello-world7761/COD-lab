`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:45 03/27/2017 
// Design Name: 
// Module Name:    top 
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
module top(
	input clk,
	input rst_n,
	output [31:0] pc_addr,
	output [31:0] irF,
	output [31:0] irD
    );

wire RegWriteW,PCSrcD,MemtoRegD,MemWriteD,BranchD,ALUSrcAD,RegWriteD,jumpD,RegDstD;
wire [31:0] /*irF,*/pcplusF,/*irD,*/pcplusD,r3_dinW,alu_outM,pcchangeD,signimmD,signimmcD,r1_doutD,r2_doutD;
wire [4:0] r3_addrW,ALUControlD,rsD,rtD,rdD,shamtD,ALUControlE,rsE,rtE,rdE,shamtE,r3_addrE,r3_addrM;
wire [1:0] ALUSrcBD,ALUSrcBE;
wire [5:0] opD,functD,opE,functE,opM,opW;
wire RegWriteE,MemtoRegE,MemWriteE,ALUSrcAE,RegDstE,RegWriteM,MemtoRegM,MemWriteM,MemtoRegW;
wire [31:0] signimmE,signimmcE,r1_doutE,r2_doutE, pcplusE,alu_outE,r2_doutM,doutbM,alu_outW,doutbW;

assign pc_addr = pcplusF - 4;

IF			u_IF(
.clk		(clk		),
.rst_n	(rst_n	),
.PCSrc	(PCSrcD	),
.pcchange(pcchangeD),
//.douta	(douta	),
.irF		(irF		),
.pcplusF (pcplusF ),
.jump		(jumpD	)
);

IF_ID		u_IF_ID(
.clk		(clk		),
.rst_n	(rst_n	),
.irF		(irF		),
.pcplusF (pcplusF ),
.irD		(irD		),
.pcplusD (pcplusD )
);

ID				u_ID(
.clk			(clk			),
.rst_n		(rst_n		),
.irD			(irD			),
.pcplusD 	(pcplusD 	),
.r3_addrW	(r3_addrW	),
.RegWriteW	(RegWriteW	),
.r3_dinW		(r3_dinW		),
.alu_outM	(alu_outM	),
.PCSrcD		(PCSrcD		),
.MemtoRegD	(MemtoRegD	),
.MemWriteD	(MemWriteD	),
.ALUControlD(ALUControlD),
.pcchangeD	(pcchangeD	),
.BranchD		(BranchD		),
.ALUSrcAD	(ALUSrcAD	),
.ALUSrcBD	(ALUSrcBD	),
.RegWriteD	(RegWriteD	),
.jumpD		(jumpD		),
.rsD			(rsD			),
.rtD			(rtD			),
.rdD			(rdD			),
.signimmD	(signimmD	),
.signimmcD	(signimmcD	),
.shamtD		(shamtD		),
.RegDstD		(RegDstD		),
.opD			(opD			),
.r1_doutD	(r1_doutD	),
.r2_doutD	(r2_doutD	),
.functD		(functD		)
);

ID_EX			u_ID_EX(
.clk			(clk			),
.rst_n		(rst_n		),
.RegWriteD	(RegWriteD	),
.MemtoRegD	(MemtoRegD	),
.MemWriteD	(MemWriteD	),
.ALUControlD(ALUControlD),
.ALUSrcAD	(ALUSrcAD	),
.RegDstD		(RegDstD		),
.rsD			(rsD			),
.rtD			(rtD			),
.rdD			(rdD			),
.signimmD	(signimmD	),
.signimmcD	(signimmcD	),
.ALUSrcBD	(ALUSrcBD	),
.shamtD		(shamtD		),
.opD			(opD			),
.r1_doutD	(r1_doutD	),
.r2_doutD	(r2_doutD	),
.functD		(functD		),
.pcplusD 	(pcplusD 	),
.RegWriteE	(RegWriteE	),
.MemtoRegE	(MemtoRegE	),
.MemWriteE	(MemWriteE	),
.ALUControlE(ALUControlE),
.ALUSrcAE	(ALUSrcAE	),
.RegDstE		(RegDstE		),
.rsE			(rsE			),
.rtE			(rtE			),
.rdE			(rdE			),
.signimmE	(signimmE	),
.signimmcE	(signimmcE	),
.ALUSrcBE	(ALUSrcBE	),
.shamtE		(shamtE		),
.r1_doutE	(r1_doutE	),
.r2_doutE	(r2_doutE	),
.opE			(opE			),
.functE		(functE		),
.pcplusE		(pcplusE		)
);

EX				u_EX(
.ALUControlE(ALUControlE),
.ALUSrcAE	(ALUSrcAE	),
.RegDstE		(RegDstE		),
.rtE			(rtE			),
.rdE			(rdE			),
.signimmE	(signimmE	),
.signimmcE	(signimmcE	),
.shamtE		(shamtE		),
.ALUSrcBE	(ALUSrcBE	),
.r1_doutE	(r1_doutE	),
.r2_doutE	(r2_doutE	),
.functE		(functE		),
.pcplusE		(pcplusE		),
.opE			(opE			),
.alu_outE	(alu_outE	),
.r3_addrE	(r3_addrE	)
);

EX_MEM		u_EX_MEM(
.clk			(clk			),
.rst_n		(rst_n		),
.RegWriteE	(RegWriteE	),
.MemtoRegE	(MemtoRegE	),
.MemWriteE	(MemWriteE	),
.alu_outE	(alu_outE	),
.r3_addrE	(r3_addrE	),
.opE			(opE			),
.r2_doutE	(r2_doutE	),
.RegWriteM	(RegWriteM	),
.MemtoRegM	(MemtoRegM	),
.MemWriteM	(MemWriteM	),
.alu_outM	(alu_outM	),
.r3_addrM	(r3_addrM	),
.opM			(opM			),
.r2_doutM	(r2_doutM	)
);

MEM			u_MEM(
.clk			(clk			),
.rst_n		(rst_n		),
.MemWriteM	(MemWriteM	),
.alu_outM	(alu_outM	),
.opM			(opM			),
.r2_doutM	(r2_doutM	),
.doutbM		(doutbM		)
);

MEM_WB		u_MEM_WB(
.clk			(clk			),
.rst_n		(rst_n		),
.RegWriteM	(RegWriteM	),
.MemtoRegM	(MemtoRegM	),
.alu_outM	(alu_outM	),
.r3_addrM	(r3_addrM	),
.opM			(opM			),
.doutbM		(doutbM		),
.RegWriteW	(RegWriteW	),
.MemtoRegW	(MemtoRegW	),
.alu_outW	(alu_outW	),
.r3_addrW	(r3_addrW	),
.opW			(opW			),
.doutbW		(doutbW		)
);

WB				u_WB(
.clk			(clk			),
.rst_n		(rst_n		),
.MemtoRegW	(MemtoRegW	),
.alu_outW	(alu_outW	),
.doutbW		(doutbW		),
.opW			(opW			),
.r3_dinW		(r3_dinW		)
);

endmodule
