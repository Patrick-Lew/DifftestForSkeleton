module core_top
#(
	parameter TLBNUM = 32
)
(
    input           aclk,
    input           aresetn,
    input    [ 7:0] intrpt, 
    //AXI interface 
    //read reqest
    output   [ 3:0] arid,
    output   [31:0] araddr,
    output   [ 7:0] arlen,
    output   [ 2:0] arsize,
    output   [ 1:0] arburst,
    output   [ 1:0] arlock,
    output   [ 3:0] arcache,
    output   [ 2:0] arprot,
    output          arvalid,
    input           arready,
    //read back
    input    [ 3:0] rid,
    input    [31:0] rdata,
    input    [ 1:0] rresp,
    input           rlast,
    input           rvalid,
    output          rready,
    //write request
    output   [ 3:0] awid,
    output   [31:0] awaddr,
    output   [ 7:0] awlen,
    output   [ 2:0] awsize,
    output   [ 1:0] awburst,
    output   [ 1:0] awlock,
    output   [ 3:0] awcache,
    output   [ 2:0] awprot,
    output          awvalid,
    input           awready,
    //write data
    output   [ 3:0] wid,
    output   [31:0] wdata,
    output   [ 3:0] wstrb,
    output          wlast,
    output          wvalid,
    input           wready,
    //write back
    input    [ 3:0] bid,
    input    [ 1:0] bresp,
    input           bvalid,
    output          bready,

    //debug
    input           break_point,
    input           infor_flag,
    input  [ 4:0]   reg_num,
    output          ws_valid,
    output [31:0]   rf_rdata,

    output [31:0] debug0_wb_pc,
    output [ 3:0] debug0_wb_rf_wen,
    output [ 4:0] debug0_wb_rf_wnum,
    output [31:0] debug0_wb_rf_wdata,
    output [31:0] debug0_wb_inst
);


//     wire          aclk;
//     wire          aresetn;
//     wire [7:0]    intrpt;
//    wire [3:0]    arid;
//    wire [31:0]   araddr;
//    wire [7:0]    arlen;
//    wire [2:0]    arsize;
//    wire [1:0]    arburst;
//    wire [1:0]    arlock;
//    wire [3:0]    arcache;
//    wire [2:0]    arprot;
//    wire          arvalid;
//     wire          arready;
//     wire [3:0]    rid;
//     wire [31:0]   rdata;
//     wire [1:0]    rresp;
//     wire          rlast;
//     wire          rvalid;
//    wire          rready;
//    wire [3:0]    awid;
//    wire [31:0]   awaddr;
//    wire [7:0]    awlen;
//    wire [2:0]    awsize;
//    wire [1:0]    awburst;
//    wire [1:0]    awlock;
//    wire [3:0]    awcache;
//    wire [2:0]    awprot;
//    wire          awvalid;
//     wire          awready;
//    wire [3:0]    wid;
//    wire [31:0]   wdata;
//    wire [3:0]    wstrb;
//    wire          wlast;
//    wire          wvalid;
//     wire          wready;
//     wire [3:0]    bid;
//     wire [1:0]    bresp;
//     wire          bvalid;
//    wire          bready;
//    wire [31:0]   debug0_wb_pc;
//    wire [3:0]    debug0_wb_rf_wen;
//    wire [4:0]    debug0_wb_rf_wnum;
//    wire [31:0]   debug0_wb_rf_wdata;
      wire [31:0]   DaRAT_val_0;
   wire [31:0]   DaRAT_val_1;
   wire [31:0]   DaRAT_val_2;
   wire [31:0]   DaRAT_val_3;
   wire [31:0]   DaRAT_val_4;
   wire [31:0]   DaRAT_val_5;
   wire [31:0]   DaRAT_val_6;
   wire [31:0]   DaRAT_val_7;
   wire [31:0]   DaRAT_val_8;
   wire [31:0]   DaRAT_val_9;
   wire [31:0]   DaRAT_val_10;
   wire [31:0]   DaRAT_val_11;
   wire [31:0]   DaRAT_val_12;
   wire [31:0]   DaRAT_val_13;
   wire [31:0]   DaRAT_val_14;
   wire [31:0]   DaRAT_val_15;
   wire [31:0]   DaRAT_val_16;
   wire [31:0]   DaRAT_val_17;
   wire [31:0]   DaRAT_val_18;
   wire [31:0]   DaRAT_val_19;
   wire [31:0]   DaRAT_val_20;
   wire [31:0]   DaRAT_val_21;
   wire [31:0]   DaRAT_val_22;
   wire [31:0]   DaRAT_val_23;
   wire [31:0]   DaRAT_val_24;
   wire [31:0]   DaRAT_val_25;
   wire [31:0]   DaRAT_val_26;
   wire [31:0]   DaRAT_val_27;
   wire [31:0]   DaRAT_val_28;
   wire [31:0]   DaRAT_val_29;
   wire [31:0]   DaRAT_val_30;
   wire [31:0]   DaRAT_val_31;
//     wire          break_point;
//     wire          infor_flag;
//     wire [4:0]    reg_num;
//    wire          ws_valid;
//    wire [31:0]   rf_rdata;
   wire [7:0]    DifftestBundle_DifftestInstrCommitIndex_0;
   wire [7:0]    DifftestBundle_DifftestInstrCommitIndex_1;
   wire [7:0]    DifftestBundle_DifftestInstrCommitIndex_2;
   wire [7:0]    DifftestBundle_DifftestInstrCommitIndex_3;
   wire [7:0]    DifftestBundle_DifftestInstrCommitIndex_4;
   wire          DifftestBundle_DifftestInstrCommitValid_0;
   wire          DifftestBundle_DifftestInstrCommitValid_1;
   wire          DifftestBundle_DifftestInstrCommitValid_2;
   wire          DifftestBundle_DifftestInstrCommitValid_3;
   wire          DifftestBundle_DifftestInstrCommitValid_4;
   wire [63:0]   DifftestBundle_DifftestInstrCommitPC_0;
   wire [63:0]   DifftestBundle_DifftestInstrCommitPC_1;
   wire [63:0]   DifftestBundle_DifftestInstrCommitPC_2;
   wire [63:0]   DifftestBundle_DifftestInstrCommitPC_3;
   wire [63:0]   DifftestBundle_DifftestInstrCommitPC_4;
   wire [31:0]   DifftestBundle_DifftestInstrCommitInstr_0;
   wire [31:0]   DifftestBundle_DifftestInstrCommitInstr_1;
   wire [31:0]   DifftestBundle_DifftestInstrCommitInstr_2;
   wire [31:0]   DifftestBundle_DifftestInstrCommitInstr_3;
   wire [31:0]   DifftestBundle_DifftestInstrCommitInstr_4;
   wire          DifftestBundle_DifftestSkip_0;
   wire          DifftestBundle_DifftestSkip_1;
   wire          DifftestBundle_DifftestSkip_2;
   wire          DifftestBundle_DifftestSkip_3;
   wire          DifftestBundle_DifftestSkip_4;
   wire          DifftestBundle_DifftestIsTlbFill_0;
   wire          DifftestBundle_DifftestIsTlbFill_1;
   wire          DifftestBundle_DifftestIsTlbFill_2;
   wire          DifftestBundle_DifftestIsTlbFill_3;
   wire          DifftestBundle_DifftestIsTlbFill_4;
   wire [4:0]    DifftestBundle_DifftestTlbFillIndex_0;
   wire [4:0]    DifftestBundle_DifftestTlbFillIndex_1;
   wire [4:0]    DifftestBundle_DifftestTlbFillIndex_2;
   wire [4:0]    DifftestBundle_DifftestTlbFillIndex_3;
   wire [4:0]    DifftestBundle_DifftestTlbFillIndex_4;
   wire          DifftestBundle_DifftestIsCount_0;
   wire          DifftestBundle_DifftestIsCount_1;
   wire          DifftestBundle_DifftestIsCount_2;
   wire          DifftestBundle_DifftestIsCount_3;
   wire          DifftestBundle_DifftestIsCount_4;
   wire [63:0]   DifftestBundle_DifftestCount_0;
   wire [63:0]   DifftestBundle_DifftestCount_1;
   wire [63:0]   DifftestBundle_DifftestCount_2;
   wire [63:0]   DifftestBundle_DifftestCount_3;
   wire [63:0]   DifftestBundle_DifftestCount_4;
   wire          DifftestBundle_DifftestWen_0;
   wire          DifftestBundle_DifftestWen_1;
   wire          DifftestBundle_DifftestWen_2;
   wire          DifftestBundle_DifftestWen_3;
   wire          DifftestBundle_DifftestWen_4;
   wire [7:0]    DifftestBundle_DifftestWdest_0;
   wire [7:0]    DifftestBundle_DifftestWdest_1;
   wire [7:0]    DifftestBundle_DifftestWdest_2;
   wire [7:0]    DifftestBundle_DifftestWdest_3;
   wire [7:0]    DifftestBundle_DifftestWdest_4;
   wire [63:0]   DifftestBundle_DifftestWdata_0;
   wire [63:0]   DifftestBundle_DifftestWdata_1;
   wire [63:0]   DifftestBundle_DifftestWdata_2;
   wire [63:0]   DifftestBundle_DifftestWdata_3;
   wire [63:0]   DifftestBundle_DifftestWdata_4;
   wire          DifftestBundle_DifftestCsrRstat_0;
   wire          DifftestBundle_DifftestCsrRstat_1;
   wire          DifftestBundle_DifftestCsrRstat_2;
   wire          DifftestBundle_DifftestCsrRstat_3;
   wire          DifftestBundle_DifftestCsrRstat_4;
   wire [31:0]   DifftestBundle_DifftestCsrData_0;
   wire [31:0]   DifftestBundle_DifftestCsrData_1;
   wire [31:0]   DifftestBundle_DifftestCsrData_2;
   wire [31:0]   DifftestBundle_DifftestCsrData_3;
   wire [31:0]   DifftestBundle_DifftestCsrData_4;
   wire          DifftestBundle_DifftestExcpEventExcpValid;
   wire          DifftestBundle_DifftestExcpEventEret;
   wire [31:0]   DifftestBundle_DifftestExcpEventIntrNO;
   wire [31:0]   DifftestBundle_DifftestExcpEventCause;
   wire [63:0]   DifftestBundle_DifftestExcpEventEPC;
   wire [31:0]   DifftestBundle_DifftestExcpEventInst;
   wire          DifftestBundle_DifftestTrapEventValid;
   wire [7:0]    DifftestBundle_DifftestStoreEventValid;
   wire [63:0]   DifftestBundle_DifftestStoreEventPAddr;
   wire [63:0]   DifftestBundle_DifftestStoreEventVAddr;
   wire [63:0]   DifftestBundle_DifftestStoreEventData;
   wire [7:0]    DifftestBundle_DifftestLoadEventValid;
   wire [63:0]   DifftestBundle_DifftestLoadEventPAddr;
   wire [63:0]   DifftestBundle_DifftestLoadEventVAddr;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateCRMD;
   wire [63:0]   DifftestBundle_DifftestCSRRegStatePRMD;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateECFG;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateESTAT;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateERA;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateBADV;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateEENTRY;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTLBIDX;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTLBEHI;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTLBELO0;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTLBELO1;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateASID;
   wire [63:0]   DifftestBundle_DifftestCSRRegStatePGDL;
   wire [63:0]   DifftestBundle_DifftestCSRRegStatePGDH;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateSAVE0;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateSAVE1;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateSAVE2;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateSAVE3;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTID;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTCFG;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTVAL;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTICLR;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateLLBCTL;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateTLBRENTRY;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateDMW0;
   wire [63:0]   DifftestBundle_DifftestCSRRegStateDMW1;
   wire [7:0]    DifftestDelayBundle_DifftestInstrCommitIndex_0;
   wire [7:0]    DifftestDelayBundle_DifftestInstrCommitIndex_1;
   wire [7:0]    DifftestDelayBundle_DifftestInstrCommitIndex_2;
   wire [7:0]    DifftestDelayBundle_DifftestInstrCommitIndex_3;
   wire [7:0]    DifftestDelayBundle_DifftestInstrCommitIndex_4;
   wire          DifftestDelayBundle_DifftestInstrCommitValid_0;
   wire          DifftestDelayBundle_DifftestInstrCommitValid_1;
   wire          DifftestDelayBundle_DifftestInstrCommitValid_2;
   wire          DifftestDelayBundle_DifftestInstrCommitValid_3;
   wire          DifftestDelayBundle_DifftestInstrCommitValid_4;
   wire [63:0]   DifftestDelayBundle_DifftestInstrCommitPC_0;
   wire [63:0]   DifftestDelayBundle_DifftestInstrCommitPC_1;
   wire [63:0]   DifftestDelayBundle_DifftestInstrCommitPC_2;
   wire [63:0]   DifftestDelayBundle_DifftestInstrCommitPC_3;
   wire [63:0]   DifftestDelayBundle_DifftestInstrCommitPC_4;
   wire [31:0]   DifftestDelayBundle_DifftestInstrCommitInstr_0;
   wire [31:0]   DifftestDelayBundle_DifftestInstrCommitInstr_1;
   wire [31:0]   DifftestDelayBundle_DifftestInstrCommitInstr_2;
   wire [31:0]   DifftestDelayBundle_DifftestInstrCommitInstr_3;
   wire [31:0]   DifftestDelayBundle_DifftestInstrCommitInstr_4;
   wire          DifftestDelayBundle_DifftestSkip_0;
   wire          DifftestDelayBundle_DifftestSkip_1;
   wire          DifftestDelayBundle_DifftestSkip_2;
   wire          DifftestDelayBundle_DifftestSkip_3;
   wire          DifftestDelayBundle_DifftestSkip_4;
   wire          DifftestDelayBundle_DifftestIsTlbFill_0;
   wire          DifftestDelayBundle_DifftestIsTlbFill_1;
   wire          DifftestDelayBundle_DifftestIsTlbFill_2;
   wire          DifftestDelayBundle_DifftestIsTlbFill_3;
   wire          DifftestDelayBundle_DifftestIsTlbFill_4;
   wire [4:0]    DifftestDelayBundle_DifftestTlbFillIndex_0;
   wire [4:0]    DifftestDelayBundle_DifftestTlbFillIndex_1;
   wire [4:0]    DifftestDelayBundle_DifftestTlbFillIndex_2;
   wire [4:0]    DifftestDelayBundle_DifftestTlbFillIndex_3;
   wire [4:0]    DifftestDelayBundle_DifftestTlbFillIndex_4;
   wire          DifftestDelayBundle_DifftestIsCount_0;
   wire          DifftestDelayBundle_DifftestIsCount_1;
   wire          DifftestDelayBundle_DifftestIsCount_2;
   wire          DifftestDelayBundle_DifftestIsCount_3;
   wire          DifftestDelayBundle_DifftestIsCount_4;
   wire [63:0]   DifftestDelayBundle_DifftestCount_0;
   wire [63:0]   DifftestDelayBundle_DifftestCount_1;
   wire [63:0]   DifftestDelayBundle_DifftestCount_2;
   wire [63:0]   DifftestDelayBundle_DifftestCount_3;
   wire [63:0]   DifftestDelayBundle_DifftestCount_4;
   wire          DifftestDelayBundle_DifftestWen_0;
   wire          DifftestDelayBundle_DifftestWen_1;
   wire          DifftestDelayBundle_DifftestWen_2;
   wire          DifftestDelayBundle_DifftestWen_3;
   wire          DifftestDelayBundle_DifftestWen_4;
   wire [7:0]    DifftestDelayBundle_DifftestWdest_0;
   wire [7:0]    DifftestDelayBundle_DifftestWdest_1;
   wire [7:0]    DifftestDelayBundle_DifftestWdest_2;
   wire [7:0]    DifftestDelayBundle_DifftestWdest_3;
   wire [7:0]    DifftestDelayBundle_DifftestWdest_4;
   wire [63:0]   DifftestDelayBundle_DifftestWdata_0;
   wire [63:0]   DifftestDelayBundle_DifftestWdata_1;
   wire [63:0]   DifftestDelayBundle_DifftestWdata_2;
   wire [63:0]   DifftestDelayBundle_DifftestWdata_3;
   wire [63:0]   DifftestDelayBundle_DifftestWdata_4;
   wire          DifftestDelayBundle_DifftestCsrRstat_0;
   wire          DifftestDelayBundle_DifftestCsrRstat_1;
   wire          DifftestDelayBundle_DifftestCsrRstat_2;
   wire          DifftestDelayBundle_DifftestCsrRstat_3;
   wire          DifftestDelayBundle_DifftestCsrRstat_4;
   wire [31:0]   DifftestDelayBundle_DifftestCsrData_0;
   wire [31:0]   DifftestDelayBundle_DifftestCsrData_1;
   wire [31:0]   DifftestDelayBundle_DifftestCsrData_2;
   wire [31:0]   DifftestDelayBundle_DifftestCsrData_3;
   wire [31:0]   DifftestDelayBundle_DifftestCsrData_4;
   wire          DifftestDelayBundle_DifftestExcpEventExcpValid;
   wire          DifftestDelayBundle_DifftestExcpEventEret;
   wire [31:0]   DifftestDelayBundle_DifftestExcpEventIntrNO;
   wire [31:0]   DifftestDelayBundle_DifftestExcpEventCause;
   wire [63:0]   DifftestDelayBundle_DifftestExcpEventEPC;
   wire [31:0]   DifftestDelayBundle_DifftestExcpEventInst;
   wire [7:0]    DifftestDelayBundle_DifftestStoreEventValid;
   wire [63:0]   DifftestDelayBundle_DifftestStoreEventPAddr;
   wire [63:0]   DifftestDelayBundle_DifftestStoreEventVAddr;
   wire [63:0]   DifftestDelayBundle_DifftestStoreEventData;
   wire [7:0]    DifftestDelayBundle_DifftestLoadEventValid;
   wire [63:0]   DifftestDelayBundle_DifftestLoadEventPAddr;
   wire [63:0]   DifftestDelayBundle_DifftestLoadEventVAddr;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestInstrCommitIndex_0;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestInstrCommitIndex_1;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestInstrCommitIndex_2;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestInstrCommitIndex_3;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestInstrCommitIndex_4;
   wire           _zz_DifftestDelayBundle_DifftestInstrCommitValid_0;
   wire           _zz_DifftestDelayBundle_DifftestInstrCommitValid_1;
   wire           _zz_DifftestDelayBundle_DifftestInstrCommitValid_2;
   wire           _zz_DifftestDelayBundle_DifftestInstrCommitValid_3;
   wire           _zz_DifftestDelayBundle_DifftestInstrCommitValid_4;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestInstrCommitPC_0;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestInstrCommitPC_1;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestInstrCommitPC_2;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestInstrCommitPC_3;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestInstrCommitPC_4;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestInstrCommitInstr_0;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestInstrCommitInstr_1;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestInstrCommitInstr_2;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestInstrCommitInstr_3;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestInstrCommitInstr_4;
   wire           _zz_DifftestDelayBundle_DifftestSkip_0;
   wire           _zz_DifftestDelayBundle_DifftestSkip_1;
   wire           _zz_DifftestDelayBundle_DifftestSkip_2;
   wire           _zz_DifftestDelayBundle_DifftestSkip_3;
   wire           _zz_DifftestDelayBundle_DifftestSkip_4;
   wire           _zz_DifftestDelayBundle_DifftestIsTlbFill_0;
   wire           _zz_DifftestDelayBundle_DifftestIsTlbFill_1;
   wire           _zz_DifftestDelayBundle_DifftestIsTlbFill_2;
   wire           _zz_DifftestDelayBundle_DifftestIsTlbFill_3;
   wire           _zz_DifftestDelayBundle_DifftestIsTlbFill_4;
   wire  [4:0]    _zz_DifftestDelayBundle_DifftestTlbFillIndex_0;
   wire  [4:0]    _zz_DifftestDelayBundle_DifftestTlbFillIndex_1;
   wire  [4:0]    _zz_DifftestDelayBundle_DifftestTlbFillIndex_2;
   wire  [4:0]    _zz_DifftestDelayBundle_DifftestTlbFillIndex_3;
   wire  [4:0]    _zz_DifftestDelayBundle_DifftestTlbFillIndex_4;
   wire           _zz_DifftestDelayBundle_DifftestIsCount_0;
   wire           _zz_DifftestDelayBundle_DifftestIsCount_1;
   wire           _zz_DifftestDelayBundle_DifftestIsCount_2;
   wire           _zz_DifftestDelayBundle_DifftestIsCount_3;
   wire           _zz_DifftestDelayBundle_DifftestIsCount_4;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestCount_0;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestCount_1;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestCount_2;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestCount_3;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestCount_4;
   wire           _zz_DifftestDelayBundle_DifftestWen_0;
   wire           _zz_DifftestDelayBundle_DifftestWen_1;
   wire           _zz_DifftestDelayBundle_DifftestWen_2;
   wire           _zz_DifftestDelayBundle_DifftestWen_3;
   wire           _zz_DifftestDelayBundle_DifftestWen_4;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestWdest_0;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestWdest_1;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestWdest_2;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestWdest_3;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestWdest_4;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestWdata_0;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestWdata_1;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestWdata_2;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestWdata_3;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestWdata_4;
   wire           _zz_DifftestDelayBundle_DifftestCsrRstat_0;
   wire           _zz_DifftestDelayBundle_DifftestCsrRstat_1;
   wire           _zz_DifftestDelayBundle_DifftestCsrRstat_2;
   wire           _zz_DifftestDelayBundle_DifftestCsrRstat_3;
   wire           _zz_DifftestDelayBundle_DifftestCsrRstat_4;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestCsrData_0;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestCsrData_1;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestCsrData_2;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestCsrData_3;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestCsrData_4;
   wire           _zz_DifftestDelayBundle_DifftestExcpEventExcpValid;
   wire           _zz_DifftestDelayBundle_DifftestExcpEventEret;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestExcpEventIntrNO;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestExcpEventCause;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestExcpEventEPC;
   wire  [31:0]   _zz_DifftestDelayBundle_DifftestExcpEventInst;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestStoreEventValid;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestStoreEventPAddr;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestStoreEventVAddr;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestStoreEventData;
   wire  [7:0]    _zz_DifftestDelayBundle_DifftestLoadEventValid;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestLoadEventPAddr;
   wire  [63:0]   _zz_DifftestDelayBundle_DifftestLoadEventVAddr;



mycpu mycpu(
    .aclk(aclk),
    .aresetn(aresetn),
    .intrpt(intrpt),
    .arid(arid),
    .araddr(araddr),
    .arlen(arlen),
    .arsize(arsize),
    .arburst(arburst),
    .arlock(arlock),
    .arcache(arcache),
    .arprot(arprot),
    .arvalid(arvalid),
    .arready(arready),
    .rid(rid),
    .rdata(rdata),
    .rresp(rresp),
    .rlast(rlast),
    .rvalid(rvalid),
    .rready(rready),
    .awid(awid),
    .awaddr(awaddr),
    .awlen(awlen),
    .awsize(awsize),
    .awburst(awburst),
    .awlock(awlock),
    .awcache(awcache),
    .awprot(awprot),
    .awvalid(awvalid),
    .awready(awready),
    .wid(wid),
    .wdata(wdata),
    .wstrb(wstrb),
    .wlast(wlast),
    .wvalid(wvalid),
    .wready(wready),
    .bid(bid),
    .bresp(bresp),
    .bvalid(bvalid),
    .bready(bready),
    .debug0_wb_pc(debug0_wb_pc),
    .debug0_wb_rf_wen(debug0_wb_rf_wen),
    .debug0_wb_rf_wnum(debug0_wb_rf_wnum),
    .debug0_wb_rf_wdata(debug0_wb_rf_wdata),
    .DaRAT_val_0(DaRAT_val_0),
    .DaRAT_val_1(DaRAT_val_1),
    .DaRAT_val_2(DaRAT_val_2),
    .DaRAT_val_3(DaRAT_val_3),
    .DaRAT_val_4(DaRAT_val_4),
    .DaRAT_val_5(DaRAT_val_5),
    .DaRAT_val_6(DaRAT_val_6),
    .DaRAT_val_7(DaRAT_val_7),
    .DaRAT_val_8(DaRAT_val_8),
    .DaRAT_val_9(DaRAT_val_9),
    .DaRAT_val_10(DaRAT_val_10),
    .DaRAT_val_11(DaRAT_val_11),
    .DaRAT_val_12(DaRAT_val_12),
    .DaRAT_val_13(DaRAT_val_13),
    .DaRAT_val_14(DaRAT_val_14),
    .DaRAT_val_15(DaRAT_val_15),
    .DaRAT_val_16(DaRAT_val_16),
    .DaRAT_val_17(DaRAT_val_17),
    .DaRAT_val_18(DaRAT_val_18),
    .DaRAT_val_19(DaRAT_val_19),
    .DaRAT_val_20(DaRAT_val_20),
    .DaRAT_val_21(DaRAT_val_21),
    .DaRAT_val_22(DaRAT_val_22),
    .DaRAT_val_23(DaRAT_val_23),
    .DaRAT_val_24(DaRAT_val_24),
    .DaRAT_val_25(DaRAT_val_25),
    .DaRAT_val_26(DaRAT_val_26),
    .DaRAT_val_27(DaRAT_val_27),
    .DaRAT_val_28(DaRAT_val_28),
    .DaRAT_val_29(DaRAT_val_29),
    .DaRAT_val_30(DaRAT_val_30),
    .DaRAT_val_31(DaRAT_val_31),
    .break_point(break_point),
    .infor_flag(infor_flag),
    .reg_num(reg_num),
    .ws_valid(ws_valid),
    .rf_rdata(rf_rdata),
    .DifftestBundle_DifftestInstrCommitIndex_0(DifftestBundle_DifftestInstrCommitIndex_0),
    .DifftestBundle_DifftestInstrCommitIndex_1(DifftestBundle_DifftestInstrCommitIndex_1),
    .DifftestBundle_DifftestInstrCommitIndex_2(DifftestBundle_DifftestInstrCommitIndex_2),
    .DifftestBundle_DifftestInstrCommitIndex_3(DifftestBundle_DifftestInstrCommitIndex_3),
    .DifftestBundle_DifftestInstrCommitIndex_4(DifftestBundle_DifftestInstrCommitIndex_4),
    .DifftestBundle_DifftestInstrCommitValid_0(DifftestBundle_DifftestInstrCommitValid_0),
    .DifftestBundle_DifftestInstrCommitValid_1(DifftestBundle_DifftestInstrCommitValid_1),
    .DifftestBundle_DifftestInstrCommitValid_2(DifftestBundle_DifftestInstrCommitValid_2),
    .DifftestBundle_DifftestInstrCommitValid_3(DifftestBundle_DifftestInstrCommitValid_3),
    .DifftestBundle_DifftestInstrCommitValid_4(DifftestBundle_DifftestInstrCommitValid_4),
    .DifftestBundle_DifftestInstrCommitPC_0(DifftestBundle_DifftestInstrCommitPC_0),
    .DifftestBundle_DifftestInstrCommitPC_1(DifftestBundle_DifftestInstrCommitPC_1),
    .DifftestBundle_DifftestInstrCommitPC_2(DifftestBundle_DifftestInstrCommitPC_2),
    .DifftestBundle_DifftestInstrCommitPC_3(DifftestBundle_DifftestInstrCommitPC_3),
    .DifftestBundle_DifftestInstrCommitPC_4(DifftestBundle_DifftestInstrCommitPC_4),
    .DifftestBundle_DifftestInstrCommitInstr_0(DifftestBundle_DifftestInstrCommitInstr_0),
    .DifftestBundle_DifftestInstrCommitInstr_1(DifftestBundle_DifftestInstrCommitInstr_1),
    .DifftestBundle_DifftestInstrCommitInstr_2(DifftestBundle_DifftestInstrCommitInstr_2),
    .DifftestBundle_DifftestInstrCommitInstr_3(DifftestBundle_DifftestInstrCommitInstr_3),
    .DifftestBundle_DifftestInstrCommitInstr_4(DifftestBundle_DifftestInstrCommitInstr_4),
    .DifftestBundle_DifftestSkip_0(DifftestBundle_DifftestSkip_0),
    .DifftestBundle_DifftestSkip_1(DifftestBundle_DifftestSkip_1),
    .DifftestBundle_DifftestSkip_2(DifftestBundle_DifftestSkip_2),
    .DifftestBundle_DifftestSkip_3(DifftestBundle_DifftestSkip_3),
    .DifftestBundle_DifftestSkip_4(DifftestBundle_DifftestSkip_4),
    .DifftestBundle_DifftestIsTlbFill_0(DifftestBundle_DifftestIsTlbFill_0),
    .DifftestBundle_DifftestIsTlbFill_1(DifftestBundle_DifftestIsTlbFill_1),
    .DifftestBundle_DifftestIsTlbFill_2(DifftestBundle_DifftestIsTlbFill_2),
    .DifftestBundle_DifftestIsTlbFill_3(DifftestBundle_DifftestIsTlbFill_3),
    .DifftestBundle_DifftestIsTlbFill_4(DifftestBundle_DifftestIsTlbFill_4),
    .DifftestBundle_DifftestTlbFillIndex_0(DifftestBundle_DifftestTlbFillIndex_0),
    .DifftestBundle_DifftestTlbFillIndex_1(DifftestBundle_DifftestTlbFillIndex_1),
    .DifftestBundle_DifftestTlbFillIndex_2(DifftestBundle_DifftestTlbFillIndex_2),
    .DifftestBundle_DifftestTlbFillIndex_3(DifftestBundle_DifftestTlbFillIndex_3),
    .DifftestBundle_DifftestTlbFillIndex_4(DifftestBundle_DifftestTlbFillIndex_4),
    .DifftestBundle_DifftestIsCount_0(DifftestBundle_DifftestIsCount_0),
    .DifftestBundle_DifftestIsCount_1(DifftestBundle_DifftestIsCount_1),
    .DifftestBundle_DifftestIsCount_2(DifftestBundle_DifftestIsCount_2),
    .DifftestBundle_DifftestIsCount_3(DifftestBundle_DifftestIsCount_3),
    .DifftestBundle_DifftestIsCount_4(DifftestBundle_DifftestIsCount_4),
    .DifftestBundle_DifftestCount_0(DifftestBundle_DifftestCount_0),
    .DifftestBundle_DifftestCount_1(DifftestBundle_DifftestCount_1),
    .DifftestBundle_DifftestCount_2(DifftestBundle_DifftestCount_2),
    .DifftestBundle_DifftestCount_3(DifftestBundle_DifftestCount_3),
    .DifftestBundle_DifftestCount_4(DifftestBundle_DifftestCount_4),
    .DifftestBundle_DifftestWen_0(DifftestBundle_DifftestWen_0),
    .DifftestBundle_DifftestWen_1(DifftestBundle_DifftestWen_1),
    .DifftestBundle_DifftestWen_2(DifftestBundle_DifftestWen_2),
    .DifftestBundle_DifftestWen_3(DifftestBundle_DifftestWen_3),
    .DifftestBundle_DifftestWen_4(DifftestBundle_DifftestWen_4),
    .DifftestBundle_DifftestWdest_0(DifftestBundle_DifftestWdest_0),
    .DifftestBundle_DifftestWdest_1(DifftestBundle_DifftestWdest_1),
    .DifftestBundle_DifftestWdest_2(DifftestBundle_DifftestWdest_2),
    .DifftestBundle_DifftestWdest_3(DifftestBundle_DifftestWdest_3),
    .DifftestBundle_DifftestWdest_4(DifftestBundle_DifftestWdest_4),
    .DifftestBundle_DifftestWdata_0(DifftestBundle_DifftestWdata_0),
    .DifftestBundle_DifftestWdata_1(DifftestBundle_DifftestWdata_1),
    .DifftestBundle_DifftestWdata_2(DifftestBundle_DifftestWdata_2),
    .DifftestBundle_DifftestWdata_3(DifftestBundle_DifftestWdata_3),
    .DifftestBundle_DifftestWdata_4(DifftestBundle_DifftestWdata_4),
    .DifftestBundle_DifftestCsrRstat_0(DifftestBundle_DifftestCsrRstat_0),
    .DifftestBundle_DifftestCsrRstat_1(DifftestBundle_DifftestCsrRstat_1),
    .DifftestBundle_DifftestCsrRstat_2(DifftestBundle_DifftestCsrRstat_2),
    .DifftestBundle_DifftestCsrRstat_3(DifftestBundle_DifftestCsrRstat_3),
    .DifftestBundle_DifftestCsrRstat_4(DifftestBundle_DifftestCsrRstat_4),
    .DifftestBundle_DifftestCsrData_0(DifftestBundle_DifftestCsrData_0),
    .DifftestBundle_DifftestCsrData_1(DifftestBundle_DifftestCsrData_1),
    .DifftestBundle_DifftestCsrData_2(DifftestBundle_DifftestCsrData_2),
    .DifftestBundle_DifftestCsrData_3(DifftestBundle_DifftestCsrData_3),
    .DifftestBundle_DifftestCsrData_4(DifftestBundle_DifftestCsrData_4),
    .DifftestBundle_DifftestExcpEventExcpValid(DifftestBundle_DifftestExcpEventExcpValid),
    .DifftestBundle_DifftestExcpEventEret(DifftestBundle_DifftestExcpEventEret),
    .DifftestBundle_DifftestExcpEventIntrNO(DifftestBundle_DifftestExcpEventIntrNO),
    .DifftestBundle_DifftestExcpEventCause(DifftestBundle_DifftestExcpEventCause),
    .DifftestBundle_DifftestExcpEventEPC(DifftestBundle_DifftestExcpEventEPC),
    .DifftestBundle_DifftestExcpEventInst(DifftestBundle_DifftestExcpEventInst),
    .DifftestBundle_DifftestTrapEventValid(DifftestBundle_DifftestTrapEventValid),
    .DifftestBundle_DifftestStoreEventValid(DifftestBundle_DifftestStoreEventValid),
    .DifftestBundle_DifftestStoreEventPAddr(DifftestBundle_DifftestStoreEventPAddr),
    .DifftestBundle_DifftestStoreEventVAddr(DifftestBundle_DifftestStoreEventVAddr),
    .DifftestBundle_DifftestStoreEventData(DifftestBundle_DifftestStoreEventData),
    .DifftestBundle_DifftestLoadEventValid(DifftestBundle_DifftestLoadEventValid),
    .DifftestBundle_DifftestLoadEventPAddr(DifftestBundle_DifftestLoadEventPAddr),
    .DifftestBundle_DifftestLoadEventVAddr(DifftestBundle_DifftestLoadEventVAddr),
    .DifftestBundle_DifftestCSRRegStateCRMD(DifftestBundle_DifftestCSRRegStateCRMD),
    .DifftestBundle_DifftestCSRRegStatePRMD(DifftestBundle_DifftestCSRRegStatePRMD),
    .DifftestBundle_DifftestCSRRegStateECFG(DifftestBundle_DifftestCSRRegStateECFG),
    .DifftestBundle_DifftestCSRRegStateESTAT(DifftestBundle_DifftestCSRRegStateESTAT),
    .DifftestBundle_DifftestCSRRegStateERA(DifftestBundle_DifftestCSRRegStateERA),
    .DifftestBundle_DifftestCSRRegStateBADV(DifftestBundle_DifftestCSRRegStateBADV),
    .DifftestBundle_DifftestCSRRegStateEENTRY(DifftestBundle_DifftestCSRRegStateEENTRY),
    .DifftestBundle_DifftestCSRRegStateTLBIDX(DifftestBundle_DifftestCSRRegStateTLBIDX),
    .DifftestBundle_DifftestCSRRegStateTLBEHI(DifftestBundle_DifftestCSRRegStateTLBEHI),
    .DifftestBundle_DifftestCSRRegStateTLBELO0(DifftestBundle_DifftestCSRRegStateTLBELO0),
    .DifftestBundle_DifftestCSRRegStateTLBELO1(DifftestBundle_DifftestCSRRegStateTLBELO1),
    .DifftestBundle_DifftestCSRRegStateASID(DifftestBundle_DifftestCSRRegStateASID),
    .DifftestBundle_DifftestCSRRegStatePGDL(DifftestBundle_DifftestCSRRegStatePGDL),
    .DifftestBundle_DifftestCSRRegStatePGDH(DifftestBundle_DifftestCSRRegStatePGDH),
    .DifftestBundle_DifftestCSRRegStateSAVE0(DifftestBundle_DifftestCSRRegStateSAVE0),
    .DifftestBundle_DifftestCSRRegStateSAVE1(DifftestBundle_DifftestCSRRegStateSAVE1),
    .DifftestBundle_DifftestCSRRegStateSAVE2(DifftestBundle_DifftestCSRRegStateSAVE2),
    .DifftestBundle_DifftestCSRRegStateSAVE3(DifftestBundle_DifftestCSRRegStateSAVE3),
    .DifftestBundle_DifftestCSRRegStateTID(DifftestBundle_DifftestCSRRegStateTID),
    .DifftestBundle_DifftestCSRRegStateTCFG(DifftestBundle_DifftestCSRRegStateTCFG),
    .DifftestBundle_DifftestCSRRegStateTVAL(DifftestBundle_DifftestCSRRegStateTVAL),
    .DifftestBundle_DifftestCSRRegStateTICLR(DifftestBundle_DifftestCSRRegStateTICLR),
    .DifftestBundle_DifftestCSRRegStateLLBCTL(DifftestBundle_DifftestCSRRegStateLLBCTL),
    .DifftestBundle_DifftestCSRRegStateTLBRENTRY(DifftestBundle_DifftestCSRRegStateTLBRENTRY),
    .DifftestBundle_DifftestCSRRegStateDMW0(DifftestBundle_DifftestCSRRegStateDMW0),
    .DifftestBundle_DifftestCSRRegStateDMW1(DifftestBundle_DifftestCSRRegStateDMW1),
    .DifftestDelayBundle_DifftestInstrCommitIndex_0(DifftestDelayBundle_DifftestInstrCommitIndex_0),
    .DifftestDelayBundle_DifftestInstrCommitIndex_1(DifftestDelayBundle_DifftestInstrCommitIndex_1),
    .DifftestDelayBundle_DifftestInstrCommitIndex_2(DifftestDelayBundle_DifftestInstrCommitIndex_2),
    .DifftestDelayBundle_DifftestInstrCommitIndex_3(DifftestDelayBundle_DifftestInstrCommitIndex_3),
    .DifftestDelayBundle_DifftestInstrCommitIndex_4(DifftestDelayBundle_DifftestInstrCommitIndex_4),
    .DifftestDelayBundle_DifftestInstrCommitValid_0(DifftestDelayBundle_DifftestInstrCommitValid_0),
    .DifftestDelayBundle_DifftestInstrCommitValid_1(DifftestDelayBundle_DifftestInstrCommitValid_1),
    .DifftestDelayBundle_DifftestInstrCommitValid_2(DifftestDelayBundle_DifftestInstrCommitValid_2),
    .DifftestDelayBundle_DifftestInstrCommitValid_3(DifftestDelayBundle_DifftestInstrCommitValid_3),
    .DifftestDelayBundle_DifftestInstrCommitValid_4(DifftestDelayBundle_DifftestInstrCommitValid_4),
    .DifftestDelayBundle_DifftestInstrCommitPC_0(DifftestDelayBundle_DifftestInstrCommitPC_0),
    .DifftestDelayBundle_DifftestInstrCommitPC_1(DifftestDelayBundle_DifftestInstrCommitPC_1),
    .DifftestDelayBundle_DifftestInstrCommitPC_2(DifftestDelayBundle_DifftestInstrCommitPC_2),
    .DifftestDelayBundle_DifftestInstrCommitPC_3(DifftestDelayBundle_DifftestInstrCommitPC_3),
    .DifftestDelayBundle_DifftestInstrCommitPC_4(DifftestDelayBundle_DifftestInstrCommitPC_4),
    .DifftestDelayBundle_DifftestInstrCommitInstr_0(DifftestDelayBundle_DifftestInstrCommitInstr_0),
    .DifftestDelayBundle_DifftestInstrCommitInstr_1(DifftestDelayBundle_DifftestInstrCommitInstr_1),
    .DifftestDelayBundle_DifftestInstrCommitInstr_2(DifftestDelayBundle_DifftestInstrCommitInstr_2),
    .DifftestDelayBundle_DifftestInstrCommitInstr_3(DifftestDelayBundle_DifftestInstrCommitInstr_3),
    .DifftestDelayBundle_DifftestInstrCommitInstr_4(DifftestDelayBundle_DifftestInstrCommitInstr_4),
    .DifftestDelayBundle_DifftestSkip_0(DifftestDelayBundle_DifftestSkip_0),
    .DifftestDelayBundle_DifftestSkip_1(DifftestDelayBundle_DifftestSkip_1),
    .DifftestDelayBundle_DifftestSkip_2(DifftestDelayBundle_DifftestSkip_2),
    .DifftestDelayBundle_DifftestSkip_3(DifftestDelayBundle_DifftestSkip_3),
    .DifftestDelayBundle_DifftestSkip_4(DifftestDelayBundle_DifftestSkip_4),
    .DifftestDelayBundle_DifftestIsTlbFill_0(DifftestDelayBundle_DifftestIsTlbFill_0),
  .DifftestDelayBundle_DifftestIsTlbFill_1(DifftestDelayBundle_DifftestIsTlbFill_1),
  .DifftestDelayBundle_DifftestIsTlbFill_2(DifftestDelayBundle_DifftestIsTlbFill_2),
  .DifftestDelayBundle_DifftestIsTlbFill_3(DifftestDelayBundle_DifftestIsTlbFill_3),
  .DifftestDelayBundle_DifftestIsTlbFill_4(DifftestDelayBundle_DifftestIsTlbFill_4),
  .DifftestDelayBundle_DifftestTlbFillIndex_0(DifftestDelayBundle_DifftestTlbFillIndex_0),
  .DifftestDelayBundle_DifftestTlbFillIndex_1(DifftestDelayBundle_DifftestTlbFillIndex_1),
  .DifftestDelayBundle_DifftestTlbFillIndex_2(DifftestDelayBundle_DifftestTlbFillIndex_2),
  .DifftestDelayBundle_DifftestTlbFillIndex_3(DifftestDelayBundle_DifftestTlbFillIndex_3),
  .DifftestDelayBundle_DifftestTlbFillIndex_4(DifftestDelayBundle_DifftestTlbFillIndex_4),
  .DifftestDelayBundle_DifftestIsCount_0(DifftestDelayBundle_DifftestIsCount_0),
  .DifftestDelayBundle_DifftestIsCount_1(DifftestDelayBundle_DifftestIsCount_1),
  .DifftestDelayBundle_DifftestIsCount_2(DifftestDelayBundle_DifftestIsCount_2),
  .DifftestDelayBundle_DifftestIsCount_3(DifftestDelayBundle_DifftestIsCount_3),
  .DifftestDelayBundle_DifftestIsCount_4(DifftestDelayBundle_DifftestIsCount_4),
  .DifftestDelayBundle_DifftestCount_0(DifftestDelayBundle_DifftestCount_0),
  .DifftestDelayBundle_DifftestCount_1(DifftestDelayBundle_DifftestCount_1),
  .DifftestDelayBundle_DifftestCount_2(DifftestDelayBundle_DifftestCount_2),
  .DifftestDelayBundle_DifftestCount_3(DifftestDelayBundle_DifftestCount_3),
  .DifftestDelayBundle_DifftestCount_4(DifftestDelayBundle_DifftestCount_4),
  .DifftestDelayBundle_DifftestWen_0(DifftestDelayBundle_DifftestWen_0),
  .DifftestDelayBundle_DifftestWen_1(DifftestDelayBundle_DifftestWen_1),
  .DifftestDelayBundle_DifftestWen_2(DifftestDelayBundle_DifftestWen_2),
  .DifftestDelayBundle_DifftestWen_3(DifftestDelayBundle_DifftestWen_3),
  .DifftestDelayBundle_DifftestWen_4(DifftestDelayBundle_DifftestWen_4),
  .DifftestDelayBundle_DifftestWdest_0(DifftestDelayBundle_DifftestWdest_0),
  .DifftestDelayBundle_DifftestWdest_1(DifftestDelayBundle_DifftestWdest_1),
  .DifftestDelayBundle_DifftestWdest_2(DifftestDelayBundle_DifftestWdest_2),
  .DifftestDelayBundle_DifftestWdest_3(DifftestDelayBundle_DifftestWdest_3),
  .DifftestDelayBundle_DifftestWdest_4(DifftestDelayBundle_DifftestWdest_4),
  .DifftestDelayBundle_DifftestWdata_0(DifftestDelayBundle_DifftestWdata_0),
  .DifftestDelayBundle_DifftestWdata_1(DifftestDelayBundle_DifftestWdata_1),
  .DifftestDelayBundle_DifftestWdata_2(DifftestDelayBundle_DifftestWdata_2),
  .DifftestDelayBundle_DifftestWdata_3(DifftestDelayBundle_DifftestWdata_3),
  .DifftestDelayBundle_DifftestWdata_4(DifftestDelayBundle_DifftestWdata_4),
  .DifftestDelayBundle_DifftestCsrRstat_0(DifftestDelayBundle_DifftestCsrRstat_0),
  .DifftestDelayBundle_DifftestCsrRstat_1(DifftestDelayBundle_DifftestCsrRstat_1),
  .DifftestDelayBundle_DifftestCsrRstat_2(DifftestDelayBundle_DifftestCsrRstat_2),
  .DifftestDelayBundle_DifftestCsrRstat_3(DifftestDelayBundle_DifftestCsrRstat_3),
  .DifftestDelayBundle_DifftestCsrRstat_4(DifftestDelayBundle_DifftestCsrRstat_4),
  .DifftestDelayBundle_DifftestCsrData_0(DifftestDelayBundle_DifftestCsrData_0),
  .DifftestDelayBundle_DifftestCsrData_1(DifftestDelayBundle_DifftestCsrData_1),
  .DifftestDelayBundle_DifftestCsrData_2(DifftestDelayBundle_DifftestCsrData_2),
  .DifftestDelayBundle_DifftestCsrData_3(DifftestDelayBundle_DifftestCsrData_3),
  .DifftestDelayBundle_DifftestCsrData_4(DifftestDelayBundle_DifftestCsrData_4),
  .DifftestDelayBundle_DifftestExcpEventExcpValid(DifftestDelayBundle_DifftestExcpEventExcpValid),
  .DifftestDelayBundle_DifftestExcpEventEret(DifftestDelayBundle_DifftestExcpEventEret),
  .DifftestDelayBundle_DifftestExcpEventIntrNO(DifftestDelayBundle_DifftestExcpEventIntrNO),
  .DifftestDelayBundle_DifftestExcpEventCause(DifftestDelayBundle_DifftestExcpEventCause),
  .DifftestDelayBundle_DifftestExcpEventEPC(DifftestDelayBundle_DifftestExcpEventEPC),
  .DifftestDelayBundle_DifftestExcpEventInst(DifftestDelayBundle_DifftestExcpEventInst),
  .DifftestDelayBundle_DifftestStoreEventValid(DifftestDelayBundle_DifftestStoreEventValid),
  .DifftestDelayBundle_DifftestStoreEventPAddr(DifftestDelayBundle_DifftestStoreEventPAddr),
  .DifftestDelayBundle_DifftestStoreEventVAddr(DifftestDelayBundle_DifftestStoreEventVAddr),
  .DifftestDelayBundle_DifftestStoreEventData(DifftestDelayBundle_DifftestStoreEventData),
  .DifftestDelayBundle_DifftestLoadEventValid(DifftestDelayBundle_DifftestLoadEventValid),
  .DifftestDelayBundle_DifftestLoadEventPAddr(DifftestDelayBundle_DifftestLoadEventPAddr),
  .DifftestDelayBundle_DifftestLoadEventVAddr(DifftestDelayBundle_DifftestLoadEventVAddr),
  ._zz_DifftestDelayBundle_DifftestInstrCommitIndex_0(_zz_DifftestDelayBundle_DifftestInstrCommitIndex_0),
  ._zz_DifftestDelayBundle_DifftestInstrCommitIndex_1(_zz_DifftestDelayBundle_DifftestInstrCommitIndex_1),
  ._zz_DifftestDelayBundle_DifftestInstrCommitIndex_2(_zz_DifftestDelayBundle_DifftestInstrCommitIndex_2),
  ._zz_DifftestDelayBundle_DifftestInstrCommitIndex_3(_zz_DifftestDelayBundle_DifftestInstrCommitIndex_3),
  ._zz_DifftestDelayBundle_DifftestInstrCommitIndex_4(_zz_DifftestDelayBundle_DifftestInstrCommitIndex_4),
  ._zz_DifftestDelayBundle_DifftestInstrCommitValid_0(_zz_DifftestDelayBundle_DifftestInstrCommitValid_0),
  ._zz_DifftestDelayBundle_DifftestInstrCommitValid_1(_zz_DifftestDelayBundle_DifftestInstrCommitValid_1),
  ._zz_DifftestDelayBundle_DifftestInstrCommitValid_2(_zz_DifftestDelayBundle_DifftestInstrCommitValid_2),
  ._zz_DifftestDelayBundle_DifftestInstrCommitValid_3(_zz_DifftestDelayBundle_DifftestInstrCommitValid_3),
  ._zz_DifftestDelayBundle_DifftestInstrCommitValid_4(_zz_DifftestDelayBundle_DifftestInstrCommitValid_4),
  ._zz_DifftestDelayBundle_DifftestInstrCommitPC_0(_zz_DifftestDelayBundle_DifftestInstrCommitPC_0),
  ._zz_DifftestDelayBundle_DifftestInstrCommitPC_1(_zz_DifftestDelayBundle_DifftestInstrCommitPC_1),
  ._zz_DifftestDelayBundle_DifftestInstrCommitPC_2(_zz_DifftestDelayBundle_DifftestInstrCommitPC_2),
  ._zz_DifftestDelayBundle_DifftestInstrCommitPC_3(_zz_DifftestDelayBundle_DifftestInstrCommitPC_3),
  ._zz_DifftestDelayBundle_DifftestInstrCommitPC_4(_zz_DifftestDelayBundle_DifftestInstrCommitPC_4),
  ._zz_DifftestDelayBundle_DifftestInstrCommitInstr_0(_zz_DifftestDelayBundle_DifftestInstrCommitInstr_0),
  ._zz_DifftestDelayBundle_DifftestInstrCommitInstr_1(_zz_DifftestDelayBundle_DifftestInstrCommitInstr_1),
  ._zz_DifftestDelayBundle_DifftestInstrCommitInstr_2(_zz_DifftestDelayBundle_DifftestInstrCommitInstr_2),
  ._zz_DifftestDelayBundle_DifftestInstrCommitInstr_3(_zz_DifftestDelayBundle_DifftestInstrCommitInstr_3),
  ._zz_DifftestDelayBundle_DifftestInstrCommitInstr_4(_zz_DifftestDelayBundle_DifftestInstrCommitInstr_4),
  ._zz_DifftestDelayBundle_DifftestSkip_0(_zz_DifftestDelayBundle_DifftestSkip_0),
  ._zz_DifftestDelayBundle_DifftestSkip_1(_zz_DifftestDelayBundle_DifftestSkip_1),
  ._zz_DifftestDelayBundle_DifftestSkip_2(_zz_DifftestDelayBundle_DifftestSkip_2),
  ._zz_DifftestDelayBundle_DifftestSkip_3(_zz_DifftestDelayBundle_DifftestSkip_3),
  ._zz_DifftestDelayBundle_DifftestSkip_4(_zz_DifftestDelayBundle_DifftestSkip_4),
  ._zz_DifftestDelayBundle_DifftestIsTlbFill_0(_zz_DifftestDelayBundle_DifftestIsTlbFill_0),
  ._zz_DifftestDelayBundle_DifftestIsTlbFill_1(_zz_DifftestDelayBundle_DifftestIsTlbFill_1),
  ._zz_DifftestDelayBundle_DifftestIsTlbFill_2(_zz_DifftestDelayBundle_DifftestIsTlbFill_2),
  ._zz_DifftestDelayBundle_DifftestIsTlbFill_3(_zz_DifftestDelayBundle_DifftestIsTlbFill_3),
  ._zz_DifftestDelayBundle_DifftestIsTlbFill_4(_zz_DifftestDelayBundle_DifftestIsTlbFill_4),
  ._zz_DifftestDelayBundle_DifftestTlbFillIndex_0(_zz_DifftestDelayBundle_DifftestTlbFillIndex_0),
  ._zz_DifftestDelayBundle_DifftestTlbFillIndex_1(_zz_DifftestDelayBundle_DifftestTlbFillIndex_1),
  ._zz_DifftestDelayBundle_DifftestTlbFillIndex_2(_zz_DifftestDelayBundle_DifftestTlbFillIndex_2),
  ._zz_DifftestDelayBundle_DifftestTlbFillIndex_3(_zz_DifftestDelayBundle_DifftestTlbFillIndex_3),
  ._zz_DifftestDelayBundle_DifftestTlbFillIndex_4(_zz_DifftestDelayBundle_DifftestTlbFillIndex_4),
  ._zz_DifftestDelayBundle_DifftestIsCount_0(_zz_DifftestDelayBundle_DifftestIsCount_0),
  ._zz_DifftestDelayBundle_DifftestIsCount_1(_zz_DifftestDelayBundle_DifftestIsCount_1),
  ._zz_DifftestDelayBundle_DifftestIsCount_2(_zz_DifftestDelayBundle_DifftestIsCount_2),
  ._zz_DifftestDelayBundle_DifftestIsCount_3(_zz_DifftestDelayBundle_DifftestIsCount_3),
  ._zz_DifftestDelayBundle_DifftestIsCount_4(_zz_DifftestDelayBundle_DifftestIsCount_4),
  ._zz_DifftestDelayBundle_DifftestCount_0(_zz_DifftestDelayBundle_DifftestCount_0),
  ._zz_DifftestDelayBundle_DifftestCount_1(_zz_DifftestDelayBundle_DifftestCount_1),
  ._zz_DifftestDelayBundle_DifftestCount_2(_zz_DifftestDelayBundle_DifftestCount_2),
  ._zz_DifftestDelayBundle_DifftestCount_3(_zz_DifftestDelayBundle_DifftestCount_3),
  ._zz_DifftestDelayBundle_DifftestCount_4(_zz_DifftestDelayBundle_DifftestCount_4),
  ._zz_DifftestDelayBundle_DifftestWen_0(_zz_DifftestDelayBundle_DifftestWen_0),
  ._zz_DifftestDelayBundle_DifftestWen_1(_zz_DifftestDelayBundle_DifftestWen_1),
  ._zz_DifftestDelayBundle_DifftestWen_2(_zz_DifftestDelayBundle_DifftestWen_2),
  ._zz_DifftestDelayBundle_DifftestWen_3(_zz_DifftestDelayBundle_DifftestWen_3),
  ._zz_DifftestDelayBundle_DifftestWen_4(_zz_DifftestDelayBundle_DifftestWen_4),
  ._zz_DifftestDelayBundle_DifftestWdest_0(_zz_DifftestDelayBundle_DifftestWdest_0),
  ._zz_DifftestDelayBundle_DifftestWdest_1(_zz_DifftestDelayBundle_DifftestWdest_1),
  ._zz_DifftestDelayBundle_DifftestWdest_2(_zz_DifftestDelayBundle_DifftestWdest_2),
  ._zz_DifftestDelayBundle_DifftestWdest_3(_zz_DifftestDelayBundle_DifftestWdest_3),
  ._zz_DifftestDelayBundle_DifftestWdest_4(_zz_DifftestDelayBundle_DifftestWdest_4),
  ._zz_DifftestDelayBundle_DifftestWdata_0(_zz_DifftestDelayBundle_DifftestWdata_0),
  ._zz_DifftestDelayBundle_DifftestWdata_1(_zz_DifftestDelayBundle_DifftestWdata_1),
  ._zz_DifftestDelayBundle_DifftestWdata_2(_zz_DifftestDelayBundle_DifftestWdata_2),
  ._zz_DifftestDelayBundle_DifftestWdata_3(_zz_DifftestDelayBundle_DifftestWdata_3),
  ._zz_DifftestDelayBundle_DifftestWdata_4(_zz_DifftestDelayBundle_DifftestWdata_4),
  ._zz_DifftestDelayBundle_DifftestCsrRstat_0(_zz_DifftestDelayBundle_DifftestCsrRstat_0),
  ._zz_DifftestDelayBundle_DifftestCsrRstat_1(_zz_DifftestDelayBundle_DifftestCsrRstat_1),
  ._zz_DifftestDelayBundle_DifftestCsrRstat_2(_zz_DifftestDelayBundle_DifftestCsrRstat_2),
  ._zz_DifftestDelayBundle_DifftestCsrRstat_3(_zz_DifftestDelayBundle_DifftestCsrRstat_3),
  ._zz_DifftestDelayBundle_DifftestCsrRstat_4(_zz_DifftestDelayBundle_DifftestCsrRstat_4),
  ._zz_DifftestDelayBundle_DifftestCsrData_0(_zz_DifftestDelayBundle_DifftestCsrData_0),
  ._zz_DifftestDelayBundle_DifftestCsrData_1(_zz_DifftestDelayBundle_DifftestCsrData_1),
  ._zz_DifftestDelayBundle_DifftestCsrData_2(_zz_DifftestDelayBundle_DifftestCsrData_2),
  ._zz_DifftestDelayBundle_DifftestCsrData_3(_zz_DifftestDelayBundle_DifftestCsrData_3),
  ._zz_DifftestDelayBundle_DifftestCsrData_4(_zz_DifftestDelayBundle_DifftestCsrData_4),
  ._zz_DifftestDelayBundle_DifftestExcpEventExcpValid(_zz_DifftestDelayBundle_DifftestExcpEventExcpValid),
  ._zz_DifftestDelayBundle_DifftestExcpEventEret(_zz_DifftestDelayBundle_DifftestExcpEventEret),
  ._zz_DifftestDelayBundle_DifftestExcpEventIntrNO(_zz_DifftestDelayBundle_DifftestExcpEventIntrNO),
  ._zz_DifftestDelayBundle_DifftestExcpEventCause(_zz_DifftestDelayBundle_DifftestExcpEventCause),
  ._zz_DifftestDelayBundle_DifftestExcpEventEPC(_zz_DifftestDelayBundle_DifftestExcpEventEPC),
  ._zz_DifftestDelayBundle_DifftestExcpEventInst(_zz_DifftestDelayBundle_DifftestExcpEventInst),
  ._zz_DifftestDelayBundle_DifftestStoreEventValid(_zz_DifftestDelayBundle_DifftestStoreEventValid),
  ._zz_DifftestDelayBundle_DifftestStoreEventPAddr(_zz_DifftestDelayBundle_DifftestStoreEventPAddr),
  ._zz_DifftestDelayBundle_DifftestStoreEventVAddr(_zz_DifftestDelayBundle_DifftestStoreEventVAddr),
  ._zz_DifftestDelayBundle_DifftestStoreEventData(_zz_DifftestDelayBundle_DifftestStoreEventData),
  ._zz_DifftestDelayBundle_DifftestLoadEventValid(_zz_DifftestDelayBundle_DifftestLoadEventValid),
  ._zz_DifftestDelayBundle_DifftestLoadEventPAddr(_zz_DifftestDelayBundle_DifftestLoadEventPAddr),
  ._zz_DifftestDelayBundle_DifftestLoadEventVAddr(_zz_DifftestDelayBundle_DifftestLoadEventVAddr)
);

DifftestInstrCommit DifftestInstrCommit0(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (DifftestDelayBundle_DifftestInstrCommitIndex_0              ),
    .valid              (DifftestDelayBundle_DifftestInstrCommitValid_0   ),
    .pc                 (DifftestDelayBundle_DifftestInstrCommitPC_0         ),
    .instr              (DifftestDelayBundle_DifftestInstrCommitInstr_0       ),
    .skip               (DifftestBundle_DifftestSkip_0              ),
    .is_TLBFILL         (DifftestDelayBundle_DifftestIsTlbFill_0 ),
    .TLBFILL_index      (DifftestDelayBundle_DifftestTlbFillIndex_0 ),
    .is_CNTinst         (DifftestDelayBundle_DifftestIsCount_0   ),
    .timer_64_value     (DifftestDelayBundle_DifftestCount_0   ),
    .wen                (DifftestDelayBundle_DifftestWen_0        ),
    .wdest              (DifftestDelayBundle_DifftestWdest_0      ),
    .wdata              (DifftestDelayBundle_DifftestWdata_0      ),
    .csr_rstat          (DifftestBundle_DifftestCsrRstat_0),
    .csr_data           (DifftestDelayBundle_DifftestCsrData_0   )
);

DifftestInstrCommit DifftestInstrCommit1(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (DifftestDelayBundle_DifftestInstrCommitIndex_1              ),
    .valid              (DifftestDelayBundle_DifftestInstrCommitValid_1  ),
    .pc                 (DifftestDelayBundle_DifftestInstrCommitPC_1         ),
    .instr              (DifftestDelayBundle_DifftestInstrCommitInstr_1       ),
    .skip               (DifftestBundle_DifftestSkip_1             ),
    .is_TLBFILL         (DifftestDelayBundle_DifftestIsTlbFill_1 ),
    .TLBFILL_index      (DifftestDelayBundle_DifftestTlbFillIndex_1 ),
    .is_CNTinst         (DifftestDelayBundle_DifftestIsCount_1   ),
    .timer_64_value     (DifftestDelayBundle_DifftestCount_1   ),
    .wen                (DifftestDelayBundle_DifftestWen_1        ),
    .wdest              (DifftestDelayBundle_DifftestWdest_1      ),
    .wdata              (DifftestDelayBundle_DifftestWdata_1      ),
    .csr_rstat          (DifftestBundle_DifftestCsrRstat_1),
    .csr_data           (DifftestDelayBundle_DifftestCsrData_1   )
);

DifftestInstrCommit DifftestInstrCommit2(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (DifftestDelayBundle_DifftestInstrCommitIndex_2              ),
    .valid              (DifftestDelayBundle_DifftestInstrCommitValid_2      ),
    .pc                 (DifftestDelayBundle_DifftestInstrCommitPC_2         ),
    .instr              (DifftestDelayBundle_DifftestInstrCommitInstr_2       ),
    .skip               (DifftestDelayBundle_DifftestSkip_2              ),
    .is_TLBFILL         (DifftestDelayBundle_DifftestIsTlbFill_2 ),
    .TLBFILL_index      (DifftestDelayBundle_DifftestTlbFillIndex_2 ),
    .is_CNTinst         (DifftestDelayBundle_DifftestIsCount_2   ),
    .timer_64_value     (DifftestDelayBundle_DifftestCount_2   ),
    .wen                (DifftestDelayBundle_DifftestWen_2        ),
    .wdest              (DifftestDelayBundle_DifftestWdest_2      ),
    .wdata              (DifftestDelayBundle_DifftestWdata_2      ),
    .csr_rstat          (DifftestDelayBundle_DifftestCsrRstat_2),
    .csr_data           (DifftestDelayBundle_DifftestCsrData_2   )
);

DifftestInstrCommit DifftestInstrCommit3(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (DifftestDelayBundle_DifftestInstrCommitIndex_3              ),
    .valid              (DifftestDelayBundle_DifftestInstrCommitValid_3      ),
    .pc                 (DifftestDelayBundle_DifftestInstrCommitPC_3         ),
    .instr              (DifftestDelayBundle_DifftestInstrCommitInstr_3       ),
    .skip               (DifftestDelayBundle_DifftestSkip_3              ),
    .is_TLBFILL         (DifftestDelayBundle_DifftestIsTlbFill_3 ),
    .TLBFILL_index      (DifftestDelayBundle_DifftestTlbFillIndex_3 ),
    .is_CNTinst         (DifftestDelayBundle_DifftestIsCount_3   ),
    .timer_64_value     (DifftestDelayBundle_DifftestCount_3   ),
    .wen                (DifftestDelayBundle_DifftestWen_3        ),
    .wdest              (DifftestDelayBundle_DifftestWdest_3      ),
    .wdata              (DifftestDelayBundle_DifftestWdata_3      ),
    .csr_rstat          (DifftestDelayBundle_DifftestCsrRstat_3),
    .csr_data           (DifftestDelayBundle_DifftestCsrData_3   )
);

DifftestInstrCommit DifftestInstrCommit4(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (DifftestDelayBundle_DifftestInstrCommitIndex_4              ),
    .valid              (DifftestDelayBundle_DifftestInstrCommitValid_4      ),
    .pc                 (DifftestDelayBundle_DifftestInstrCommitPC_4         ),
    .instr              (DifftestDelayBundle_DifftestInstrCommitInstr_4       ),
    .skip               (DifftestDelayBundle_DifftestSkip_4              ),
    .is_TLBFILL         (DifftestDelayBundle_DifftestIsTlbFill_4 ),
    .TLBFILL_index      (DifftestDelayBundle_DifftestTlbFillIndex_4 ),
    .is_CNTinst         (DifftestDelayBundle_DifftestIsCount_4   ),
    .timer_64_value     (DifftestDelayBundle_DifftestCount_4   ),
    .wen                (DifftestDelayBundle_DifftestWen_4        ),
    .wdest              (DifftestDelayBundle_DifftestWdest_4      ),
    .wdata              (DifftestDelayBundle_DifftestWdata_4      ),
    .csr_rstat          (DifftestDelayBundle_DifftestCsrRstat_4),
    .csr_data           (DifftestDelayBundle_DifftestCsrData_4   )
);

DifftestExcpEvent DifftestExcpEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .excp_valid         (DifftestDelayBundle_DifftestExcpEventExcpValid ),
    .eret               (DifftestDelayBundle_DifftestExcpEventEret       ),
    .intrNo             (DifftestDelayBundle_DifftestExcpEventIntrNO[12:2]),
    .cause              (DifftestDelayBundle_DifftestExcpEventCause  ),
    .exceptionPC        (DifftestDelayBundle_DifftestExcpEventEPC         ),
    .exceptionInst      (DifftestDelayBundle_DifftestExcpEventInst       )
);

// DifftestTrapEvent DifftestTrapEvent(
//     .clock              (aclk           ),
//     .coreid             (0              ),
//     .valid              (trap           ),
//     .code               (trap_code      ),
//     .pc                 (cmt_pc         ),
//     .cycleCnt           (cycleCnt       ),
//     .instrCnt           (instrCnt       )
// );

DifftestStoreEvent DifftestStoreEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (     DifftestDelayBundle_DifftestInstrCommitIndex_4         ), //may should be set 0
    .valid              (     DifftestDelayBundle_DifftestStoreEventValid ),
    .storePAddr         (DifftestDelayBundle_DifftestStoreEventPAddr   ),
    .storeVAddr         (DifftestDelayBundle_DifftestStoreEventVAddr   ),
    .storeData          (DifftestDelayBundle_DifftestStoreEventData    )
);

DifftestLoadEvent DifftestLoadEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (DifftestDelayBundle_DifftestInstrCommitIndex_4              ),
    .valid              (DifftestDelayBundle_DifftestLoadEventValid ),
    .paddr              (DifftestDelayBundle_DifftestLoadEventPAddr   ),
    .vaddr              (DifftestDelayBundle_DifftestLoadEventVAddr   )
);

DifftestCSRRegState DifftestCSRRegState(
    .clock              (aclk               ),
    .coreid             (0                  ),
    .crmd               (DifftestBundle_DifftestCSRRegStateCRMD    ),
    .prmd               (DifftestBundle_DifftestCSRRegStatePRMD    ),
    .euen               (0                  ),
    .ecfg               (DifftestBundle_DifftestCSRRegStateECFG    ),
    .estat              (DifftestBundle_DifftestCSRRegStateESTAT   ),
    .era                (DifftestBundle_DifftestCSRRegStateERA     ),
    .badv               (DifftestBundle_DifftestCSRRegStateBADV    ),
    .eentry             (DifftestBundle_DifftestCSRRegStateEENTRY  ),
    .tlbidx             (DifftestBundle_DifftestCSRRegStateTLBIDX  ),
    .tlbehi             (DifftestBundle_DifftestCSRRegStateTLBEHI  ),
    .tlbelo0            (DifftestBundle_DifftestCSRRegStateTLBELO0 ),
    .tlbelo1            (DifftestBundle_DifftestCSRRegStateTLBELO1 ),
    .asid               (DifftestBundle_DifftestCSRRegStateASID    ),
    .pgdl               (DifftestBundle_DifftestCSRRegStatePGDL    ),
    .pgdh               (DifftestBundle_DifftestCSRRegStatePGDH    ),
    .save0              (DifftestBundle_DifftestCSRRegStateSAVE0   ),
    .save1              (DifftestBundle_DifftestCSRRegStateSAVE1   ),
    .save2              (DifftestBundle_DifftestCSRRegStateSAVE2   ),
    .save3              (DifftestBundle_DifftestCSRRegStateSAVE3   ),
    .tid                (DifftestBundle_DifftestCSRRegStateTID     ),
    .tcfg               (DifftestBundle_DifftestCSRRegStateTCFG    ),
    .tval               (DifftestBundle_DifftestCSRRegStateTVAL    ),
    .ticlr              (DifftestBundle_DifftestCSRRegStateTICLR   ),
    .llbctl             (DifftestBundle_DifftestCSRRegStateLLBCTL  ),
    .tlbrentry          (DifftestBundle_DifftestCSRRegStateTLBRENTRY),
    .dmw0               (DifftestBundle_DifftestCSRRegStateDMW0    ),
    .dmw1               (DifftestBundle_DifftestCSRRegStateDMW1    )
);

DifftestGRegState DifftestGRegState(
    .clock              (aclk       ),
    .coreid             (0          ),
    .gpr_0              (0          ),
    .gpr_1              (DaRAT_val_1   ),
    .gpr_2              (DaRAT_val_2    ),
    .gpr_3              (DaRAT_val_3    ),
    .gpr_4              (DaRAT_val_4    ),
    .gpr_5              (DaRAT_val_5    ),
    .gpr_6              (DaRAT_val_6    ),
    .gpr_7              (DaRAT_val_7    ),
    .gpr_8              (DaRAT_val_8    ),
    .gpr_9              (DaRAT_val_9    ),
    .gpr_10             (DaRAT_val_10   ),
    .gpr_11             (DaRAT_val_11   ),
    .gpr_12             (DaRAT_val_12   ),
    .gpr_13             (DaRAT_val_13   ),
    .gpr_14             (DaRAT_val_14   ),
    .gpr_15             (DaRAT_val_15   ),
    .gpr_16             (DaRAT_val_16   ),
    .gpr_17             (DaRAT_val_17   ),
    .gpr_18             (DaRAT_val_18   ),
    .gpr_19             (DaRAT_val_19   ),
    .gpr_20             (DaRAT_val_20   ),
    .gpr_21             (DaRAT_val_21   ),
    .gpr_22             (DaRAT_val_22   ),
    .gpr_23             (DaRAT_val_23   ),
    .gpr_24             (DaRAT_val_24   ),
    .gpr_25             (DaRAT_val_25   ),
    .gpr_26             (DaRAT_val_26   ),
    .gpr_27             (DaRAT_val_27   ),
    .gpr_28             (DaRAT_val_28   ),
    .gpr_29             (DaRAT_val_29   ),
    .gpr_30             (DaRAT_val_30   ),
    .gpr_31             (DaRAT_val_31   )
);



endmodule