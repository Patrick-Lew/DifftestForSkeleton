module Ram_1w_1rs
#(
    parameter wordCount = 512 ,
    parameter wordWidth = 32   ,
    parameter clockCrossing = 0,
    parameter technology = "auto",
    parameter readUnderWrite = "dontCare",
    parameter wrAddressWidth = 9 ,
    parameter wrDataWidth = 32,
    parameter wrMaskWidth = 1,
    parameter wrMaskEnable = 0,
    parameter rdAddressWidth = 9,
    parameter rdDataWidth = 32

    //   .wordCount(32),
    // .wordWidth(21),
    // .clockCrossing(1'b0),
    // .technology("auto"),
    // .readUnderWrite("dontCare"),
    // .wrAddressWidth(5),
    // .wrDataWidth(21),
    // .wrMaskWidth(1),
    // .wrMaskEnable(1'b0),
    // .rdAddressWidth(5),
    // .rdDataWidth(21)
)
(
    input wr_clk,
    input wr_en,
    input wr_mask,
    input [wrAddressWidth-1:0] wr_addr,
    input [wrDataWidth-1:0] wr_data,
    input rd_clk,
    input rd_en,
    input [wrAddressWidth-1:0] rd_addr,
    output [wrDataWidth-1:0] rd_data
    // input  [ 8:0]          addra   ,
    // input                  clka    ,
    // input  [31:0]          dina    ,
    // output [31:0]          douta   ,
    // input                  ena     ,
    // input  [ 3:0]          wea      
);

    // .wr_clk  (aclk                ), //i
    // .wr_en   (data_3_wr_en        ), //i
    // .wr_mask (data_3_wr_mask      ), //i
    // .wr_addr (_zz_wr_addr_3[8:0]  ), //i
    // .wr_data (_zz_wr_data_3[31:0] ), //i
    // .rd_clk  (aclk                ), //i
    // .rd_en   (data_3_rd_en        ), //i
    // .rd_addr (data_3_rd_addr[8:0] ), //i
    // .rd_data (data_3_rd_data[31:0])  //o

reg [wrDataWidth-1:0] mem_reg [wordCount-1:0];
reg [wrDataWidth-1:0] output_buffer;

always @(posedge wr_clk) begin
    if (wr_en || rd_en) begin
        if (wr_en) begin
            mem_reg[wr_addr] <= wr_mask ? wr_data : mem_reg[wr_addr];
        end
        else begin
            output_buffer <= mem_reg[rd_addr];
        end
    end
end

assign data_3_rd_data = output_buffer;

endmodule

module Ram_2wrs #(
    parameter wordCount = 512,
    parameter wordWidth = 32,
    parameter clockCrossing = 1'b0,
    parameter technology = "auto",
    parameter portA_readUnderWrite = "dontCare",
    parameter portA_duringWrite = "dontCare",
    parameter portA_addressWidth = 9,
    parameter portA_dataWidth = 32,
    parameter portA_maskWidth = 4,
    parameter portA_maskEnable = 1'b1,
    parameter portB_readUnderWrite = "dontCare",
    parameter portB_duringWrite = "dontCare",
    parameter portB_addressWidth = 9,
    parameter portB_dataWidth = 32,
    parameter portB_maskWidth = 4,
    parameter portB_maskEnable = 1'b1
) (
    input wire portA_clk,
    input wire portA_en,
    input wire portA_wr,
    input wire [portA_maskWidth-1:0] portA_mask,
    input wire [portA_addressWidth-1:0] portA_addr,
    input wire [portA_dataWidth-1:0] portA_wrData,
    output reg [portA_dataWidth-1:0] portA_rdData,
    input wire portB_clk,
    input wire portB_en,
    input wire portB_wr,
    input wire [portB_maskWidth-1:0] portB_mask,
    input wire [portB_addressWidth-1:0] portB_addr,
    input wire [portB_dataWidth-1:0] portB_wrData,
    output reg [portB_dataWidth-1:0] portB_rdData
);

    reg [wordWidth-1:0] ram [0:wordCount-1];

    always @(posedge portA_clk) begin
        if (portA_en) begin
            if (portA_wr) begin
                if (portA_maskEnable) begin
                    for (int i = 0; i < portA_maskWidth; i = i + 1) begin
                        if (portA_mask[i] != 0) begin
                            ram[portA_addr][i*8 +: 8] <= portA_wrData[i*8 +: 8];
                        end
                    end
                end else begin
                    ram[portA_addr] <= portA_wrData;
                end
            end
            end
            portA_rdData <= ram[portA_addr];
        end
    

    always @(posedge portB_clk) begin
        if (portB_en) begin
            if (portB_wr) begin
                if (portB_maskEnable) begin
                    for (int i = 0; i < portB_maskWidth; i = i + 1) begin
                        if (portB_mask[i] != 0) begin
                            ram[portB_addr][i*8 +: 8] <= portB_wrData[i*8 +: 8];
                        end
                    end
                end else begin
                    ram[portB_addr] <= portB_wrData;
                end
            end
            portB_rdData <= ram[portB_addr];
        end
    end

endmodule