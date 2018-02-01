`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:19:23 05/17/2017 
// Design Name: 
// Module Name:    Hazard 
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
module Hazard(
	input clk,
	input rst_n,
	input BranchD,
	input [4:0] rsD,
	input [4:0] rtD,
	input [4:0] r3_addrE,
	input [4:0] r3_addrM,
	input MemtoRegE,
	input RegWriteE,
	input MemtoRegM,
	input RegWriteM,
	input PCSrcD,
	input jump,
	input [5:0] functD,
	input memread_en,
	input trap,
	input one_step,
	input one_step_en,
	//input RegWriteD,
	//input RegDstD,
	output reg stallF,
	output reg stallD,
	output reg clear
    );
reg stopforever;
reg cnt;
reg change;

always@( /*posedge clk or negedge rst_n or posedge*/ one_step)
begin
	if(~rst_n)
	begin
		cnt <= 0;
		change <= 0;
	end
	else if(one_step == 1 && change == 0)
	begin
		cnt <= 1;
		change <= 1;
	end
	else if(one_step == 0)
	begin
		cnt <= 0;
		change <= 0;
	end
	else
		cnt <= 0;
end

always@(*)
begin
	if(~rst_n)
	begin
		stallF = 0;
		stallD = 0;
		clear = 0;
		stopforever = 0;
	end
	else if(stopforever||trap)//inside trap stopforever
	begin
		stallF = 1;
		stallD = 1;
		clear = 1;
		stopforever = 1;
	end
	else if(memread_en||(one_step_en&~cnt))//outside stop for a while mem or one_step
	begin
		stallF = 1;
		stallD = 1;
		stopforever = 0;
		if(BranchD == 1||jump == 1)
			clear = 0;
		else
			clear = 1;
	end
	//add code for the ex and mem seg influence the reg of branch
	else if(((~BranchD&RegWriteE&MemtoRegE) == 1)&&(r3_addrE == rsD || r3_addrE == rtD))//lw with another ir use the load data
	begin
		stallF = 1;
		stallD = 1;
		clear = 0;
	end//add code for the ex and mem seg influence the reg of branch
	else if(((BranchD&RegWriteE) == 1)&&(r3_addrE == rsD || r3_addrE == rtD))
	begin
		stallF = 1;
		stallD = 1;
		clear = 0;//stall and wait,not clear
	end
	else if(((BranchD&RegWriteM&MemtoRegM) == 1)&&(r3_addrM == rsD || r3_addrM == rtD))
	begin
		stallF = 1;
		stallD = 1;
		clear = 0;//stall and wait,not clear
	end
	else if(((jump&RegWriteM) == 1)&&(functD == 6'b001000)&&(r3_addrM == rsD || r3_addrM == rtD))//jr
	begin
		stallF = 1;
		stallD = 1;
		clear = 0;//stall and wait,not clear
	end
	else if(((jump&RegWriteE) == 1)&&(functD == 6'b001000)&&(r3_addrE == rsD || r3_addrE == rtD))//jr
	begin
		stallF = 1;
		stallD = 1;
		clear = 0;//stall and wait,not clear
	end
	else
	begin
		stallF = 0;
		stallD = 0;
		if(PCSrcD == 1'h1||jump == 1'h1)
			clear = 1;//branch or jump,clear
		else
			clear = 0;//not branch,not clear
	end
end

endmodule
