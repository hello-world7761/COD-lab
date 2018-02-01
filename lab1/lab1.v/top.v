`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:11:41 03/14/2017 
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
module top (
  input  signed	    [31:0]	alu_a,
  input  signed	    [31:0]	alu_b,
  input	             [4:0]	alu_op,
  output        	    [31:0]	alu_out    );
  wire [31:0] temp1;
  wire [31:0] temp2;
  wire [31:0] temp3;
  alu a(
  .alu_a(alu_a),
  .alu_b(alu_b),
  .alu_op(alu_op),
  .alu_out(temp1)
  );
  alu b(
  .alu_a(temp1),
  .alu_b(alu_b),
  .alu_op(alu_op),
  .alu_out(temp2)
  );
  alu c(
  .alu_a(temp2),
  .alu_b(temp1),
  .alu_op(alu_op),
  .alu_out(temp3)
  );
  alu d(
  .alu_a(temp3),
  .alu_b(temp2),
  .alu_op(alu_op),
  .alu_out(alu_out)
  );

endmodule
