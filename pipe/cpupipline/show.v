`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:09:34 05/21/2017 
// Design Name: 
// Module Name:    show 
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
module show(
	 input clk,
    input rst_n,
	 input [31:0] doutbM,
	 input memread_en,
	 output reg [3:0] sel,
    output reg [7:0] show_data
    );
	
reg [14:0] cnt_div;
reg [1:0]choose;
initial cnt_div <= 15'h0;	
reg [7:0] show_data0;
reg [3:0] decode_input;

always@(*)
begin
	if(~rst_n)
		decode_input = 4'h0;
	else if(choose == 2'h3)
	begin
		case(cnt)
		4'h2:decode_input = doutbM[31:28];
		4'h3:decode_input = doutbM[27:24];
		4'h4:decode_input = doutbM[23:20];
		4'h5:decode_input = doutbM[19:16];
		4'h7:decode_input = doutbM[15:12];
		4'h8:decode_input = doutbM[11:8];
		4'h9:decode_input = doutbM[7:4];
		4'ha:decode_input = doutbM[3:0];
		default:decode_input = 4'h0;
		endcase
	end
	else if(choose == 2'h2)
	begin
		case(cnt)
		4'h1:decode_input = doutbM[31:28];
		4'h2:decode_input = doutbM[27:24];
		4'h3:decode_input = doutbM[23:20];
		4'h4:decode_input = doutbM[19:16];
		4'h6:decode_input = doutbM[15:12];
		4'h7:decode_input = doutbM[11:8];
		4'h8:decode_input = doutbM[7:4];
		4'h9:decode_input = doutbM[3:0];
		default:decode_input = 4'h0;
		endcase
	end
	else if(choose == 2'h1)
	begin
		case(cnt)
		4'h0:decode_input = doutbM[31:28];
		4'h1:decode_input = doutbM[27:24];
		4'h2:decode_input = doutbM[23:20];
		4'h3:decode_input = doutbM[19:16];
		4'h5:decode_input = doutbM[15:12];
		4'h6:decode_input = doutbM[11:8];
		4'h7:decode_input = doutbM[7:4];
		4'h8:decode_input = doutbM[3:0];
		default:decode_input = 4'h0;
		endcase
	end
	else if(choose == 2'h0)
	begin
		case(cnt)
		4'hc:decode_input = doutbM[31:28];
		4'h0:decode_input = doutbM[27:24];
		4'h1:decode_input = doutbM[23:20];
		4'h2:decode_input = doutbM[19:16];
		4'h4:decode_input = doutbM[15:12];
		4'h5:decode_input = doutbM[11:8];
		4'h6:decode_input = doutbM[7:4];
		4'h7:decode_input = doutbM[3:0];
		default:decode_input = 4'h0;
		endcase
	end
	else
		decode_input = 4'h0;
end

always@(*)
begin
	if(~rst_n)
		show_data0 = 8'b1111_1101;
	else
	begin
		case(decode_input)
			4'h0:	show_data0 = 8'b0000_0011;
			4'h1: show_data0 = 8'b1001_1111;
			4'h2: show_data0 = 8'b0010_0101;
			4'h3: show_data0 = 8'b0000_1101;
			4'h4: show_data0 = 8'b1001_1001;
			4'h5: show_data0 = 8'b0100_1001;
			4'h6: show_data0 = 8'b0100_0001;
			4'h7: show_data0 = 8'b0001_1111;
			4'h8: show_data0 = 8'b0000_0001;
			4'h9:	show_data0 = 8'b0000_1001;
			4'ha: show_data0 = 8'b0001_0001;
			4'hb: show_data0 = 8'b1100_0001;
			4'hc: show_data0 = 8'b0110_0011;
			4'hd: show_data0 = 8'b1000_0101;
			4'he: show_data0 = 8'b0110_0001;
			4'hf: show_data0 = 8'b0111_0001;
			default:show_data0 = 8'b1111_1101;
		endcase
	end
end
	
wire [3:0] cnt;
cntforshow			u_cntfotshow(
.clk				(clk				),
.rst_n			(rst_n			),
.cnt				(cnt				)
);

always@(posedge clk)
begin
	if(cnt_div == 15'd32000)
		cnt_div <= 15'h0;
	else
		cnt_div <= cnt_div + 15'h1;
end

always@(posedge clk or negedge rst_n)
begin
	if(~rst_n)
		choose <= 2'h0 ;
	else if(cnt_div == 15'd32000)
	begin
		case(choose)
			2'h0: choose <= 2'h1 ;
			2'h1: choose <= 2'h2 ;
			2'h2: choose <= 2'h3 ;
			2'h3: choose <= 2'h0 ;
		endcase
	end
end

always@(choose)
begin
	if(choose == 2'h0)
		sel <= 4'b1110;
	else if(choose == 2'h1)
		sel <= 4'b1101;
	else if(choose == 2'h2)
		sel <= 4'b1011;
	else
		sel <= 4'b0111;
end

always@(*)
begin
	if(choose == 2'h3)//first 4 bit
	begin
		if(~rst_n)
			show_data = 8'b1111_1101;
		else if(~memread_en)
			show_data = 8'b1111_1101;
		else
		begin
			case(cnt)
			4'h0:show_data = 8'b1111_1101;
			4'h1:show_data = 8'b1111_1101;
			4'h6:show_data = 8'b1111_1101;
			4'hb:show_data = 8'b1111_1101;
			4'hc:show_data = 8'b1111_1101;
			default:show_data = show_data0;
			endcase
		end
	end
	else if(choose == 2'h2)//second 4 bit
	begin
		if(~rst_n)
			show_data = 8'b1111_1101;
		else if(~memread_en)
			show_data = 8'b1111_1101;
		else
		begin
			case(cnt)
			4'h0:show_data = 8'b1111_1101;
			4'h5:show_data = 8'b1111_1101;
			4'ha:show_data = 8'b1111_1101;
			4'hb:show_data = 8'b1111_1101;
			4'hc:show_data = 8'b1111_1101;
			default:show_data = show_data0;
			endcase
		end
	end
	else if(choose == 2'h1)//third 4 bit
	begin
		if(~rst_n)
			show_data = 8'b1111_1101;
		else if(~memread_en)
			show_data = 8'b1111_1101;
		else
		begin
			case(cnt)
			4'h4:show_data = 8'b1111_1101;
			4'h9:show_data = 8'b1111_1101;
			4'ha:show_data = 8'b1111_1101;
			4'hb:show_data = 8'b1111_1101;
			4'hc:show_data = 8'b1111_1101;
			default:show_data = show_data0;
			endcase
		end
	end
	else if(choose == 2'h0)//forth 4 bit
	begin
		if(~rst_n)
			show_data = 8'b1111_1101;
		else if(~memread_en)
			show_data = 8'b1111_1101;
		else
		begin
			case(cnt)
			4'h3:show_data = 8'b1111_1101;
			4'h9:show_data = 8'b1111_1101;
			4'ha:show_data = 8'b1111_1101;
			4'hb:show_data = 8'b1111_1101;
			4'h8:show_data = 8'b1111_1101;
			default:show_data = show_data0;
			endcase
		end
	end
begin

end
end


endmodule
