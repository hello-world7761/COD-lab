`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:44:22 03/27/2017
// Design Name:   RAM
// Module Name:   E:/RAM/RAMtest.v
// Project Name:  RAM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RAMtest;

	// Inputs
	reg clka;
	reg [0:0] wea;
	reg [31:0] addra;
	reg [31:0] dina;
	reg clkb;
	reg [31:0] addrb;

	// Outputs
	wire [31:0] doutb;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.clka(clka), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.clkb(clkb), 
		.addrb(addrb), 
		.doutb(doutb)
	);

	initial begin
		// Initialize Inputs
		clka = 0;
		wea = 0;
		addra = 0;
		dina = 0;
		clkb = 0;
		addrb = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
	initial
	begin
	clka = 0;
	clkb = 0;
	forever #5 
	begin
	clka = ~clka;
	clkb = ~clkb;
	end
	end
	
	always@(posedge clka)
	addrb <= addrb+1;
      
endmodule

