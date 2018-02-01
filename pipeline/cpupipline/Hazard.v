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
	//input RegWriteD,
	//input RegDstD,
	output reg stallF,
	output reg stallD,
	output reg clear
    );
reg stopforever;
always@(*)
begin
	if(~rst_n)
	begin
		stallF = 0;
		stallD = 0;
		clear = 0;
		stopforever = 0;
	end
	else if(stopforever||memread_en)//stop and read mem
	begin
		stallF = 1;
		stallD = 1;
		clear = 1;
		stopforever = 1;
	end//add code for the ex and mem seg influence the reg of branch
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
