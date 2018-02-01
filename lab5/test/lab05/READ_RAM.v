`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:47:30 04/17/2017 
// Design Name: 
// Module Name:    READ_RAM 
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
module READ_RAM(
    input [31:0] alu_out,
	 output [5:0] data_mem_addr);

assign data_mem_addr = alu_out[7:2];
endmodule
