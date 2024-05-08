// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_1(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5629);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                   | ((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        tracep->chgIData(oldp+1,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        tracep->chgCData(oldp+2,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        tracep->chgBit(oldp+3,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->chgBit(oldp+4,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->chgBit(oldp+5,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->chgCData(oldp+6,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        tracep->chgCData(oldp+7,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        tracep->chgCData(oldp+8,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        tracep->chgBit(oldp+9,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        tracep->chgQData(oldp+10,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        tracep->chgIData(oldp+12,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                           >> 0xdU))),32);
        tracep->chgCData(oldp+13,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 0xbU)))),2);
        tracep->chgCData(oldp+14,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        tracep->chgCData(oldp+15,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 4U)))),4);
        tracep->chgCData(oldp+16,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 8U)))),3);
        tracep->chgBit(oldp+17,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        tracep->chgBit(oldp+18,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
        tracep->chgBit(oldp+19,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        tracep->chgCData(oldp+20,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        tracep->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        tracep->chgCData(oldp+22,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        tracep->chgIData(oldp+23,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        tracep->chgBit(oldp+24,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        tracep->chgBit(oldp+25,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgBit(oldp+26,(((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 2U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                   >> 2U)))));
        tracep->chgIData(oldp+27,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
        tracep->chgIData(oldp+28,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
        tracep->chgIData(oldp+29,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
        tracep->chgIData(oldp+30,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
        tracep->chgIData(oldp+31,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
        tracep->chgBit(oldp+32,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wlast))));
        tracep->chgBit(oldp+33,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast))));
        tracep->chgBit(oldp+34,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        tracep->chgBit(oldp+35,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
        tracep->chgBit(oldp+36,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 3U) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
        tracep->chgBit(oldp+37,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
        tracep->chgBit(oldp+38,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
        tracep->chgBit(oldp+39,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                    | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
        tracep->chgBit(oldp+40,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
        tracep->chgBit(oldp+41,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0x8000U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+42,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0x8010U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+43,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0x8020U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+44,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0x8030U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+45,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0x8040U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+46,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0x8050U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+47,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0x8060U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+48,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0x8070U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+49,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0xff00U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+50,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0xff30U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+51,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0xff40U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+52,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0xf020U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+53,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0xf030U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+54,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0xf040U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+55,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                 & (0xf050U == (0xffffU 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->chgBit(oldp+56,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid)))));
        tracep->chgBit(oldp+57,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid))));
        tracep->chgCData(oldp+58,((3U & ((((IData)(
                                                   (3U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask))) 
                                           << 1U) | 
                                          (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask))) 
                                         >> ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                                              ? 0U : 
                                             ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                                               ? 1U
                                               : ((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                                                   ? 1U
                                                   : 2U)))))),2);
        tracep->chgBit(oldp+59,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stall))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))));
        tracep->chgCData(oldp+60,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_robIdx)
                                    : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_robIdx))),5);
        tracep->chgIData(oldp+61,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                    ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_sc)
                                        ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_sc) 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferRAddr 
                                               == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT__llAddr)) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_90))
                                        : ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_size))
                                            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                << 0x1fU) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                         << 0x1cU) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                            << 0x1bU) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                                  << 0x19U) 
                                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                                     << 0x18U) 
                                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                                           << 0x16U) 
                                                                          | ((0x3fff00U 
                                                                              & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle))) 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData))))))))))))
                                            : ((1U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_size))
                                                ? (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                       << 0x1eU) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                          << 0x1dU) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                             << 0x1cU) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                << 0x1bU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                   << 0x1aU) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                            << 0x17U) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                               << 0x16U) 
                                                                              | ((0x3f0000U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1))) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData))))))))))))
                                                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData)))
                                    : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_sc)
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__scMatchHit)
                                        : ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_io_output_payload_data_2))
                                            ? ((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_size))
                                                ? (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                       << 0x1eU) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                          << 0x1dU) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                             << 0x1cU) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                                << 0x1bU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                                   << 0x1aU) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                                            << 0x17U) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1) 
                                                                               << 0x16U) 
                                                                              | ((0x3fff00U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_1))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0))))))))))))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_size))
                                                    ? 
                                                   (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                     << 0x1fU) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                        << 0x1eU) 
                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                           << 0x1dU) 
                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                              << 0x1cU) 
                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2) 
                                                                                << 0x16U) 
                                                                               | ((0x3f0000U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0_2))) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0))))))))))))
                                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_0))
                                            : ((1U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_io_output_payload_data_2))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_size))
                                                    ? 
                                                   (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                     << 0x1fU) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                        << 0x1eU) 
                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                           << 0x1dU) 
                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                              << 0x1cU) 
                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1) 
                                                                                << 0x16U) 
                                                                               | ((0x3fff00U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_1))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1))))))))))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_size))
                                                     ? 
                                                    (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                         << 0x1eU) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                            << 0x1dU) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                               << 0x1cU) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                                  << 0x1bU) 
                                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                                     << 0x1aU) 
                                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                                        << 0x19U) 
                                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                                           << 0x18U) 
                                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                                              << 0x17U) 
                                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2) 
                                                                                << 0x16U) 
                                                                                | ((0x3f0000U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1_2))) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1))))))))))))
                                                     : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_1))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_io_output_payload_data_2))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_size))
                                                     ? 
                                                    (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                         << 0x1eU) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                            << 0x1dU) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                               << 0x1cU) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                                  << 0x1bU) 
                                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                                     << 0x1aU) 
                                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                                        << 0x19U) 
                                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                                           << 0x18U) 
                                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                                              << 0x17U) 
                                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1) 
                                                                                << 0x16U) 
                                                                                | ((0x3fff00U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_1))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2))))))))))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_size))
                                                      ? 
                                                     (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                       << 0x1fU) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                          << 0x1eU) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                             << 0x1dU) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                                << 0x1cU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                                   << 0x1bU) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                                      << 0x1aU) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                                         << 0x19U) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2) 
                                                                                << 0x16U) 
                                                                                | ((0x3f0000U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2_2))) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2))))))))))))
                                                      : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_2))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_size))
                                                     ? 
                                                    (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                         << 0x1eU) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                            << 0x1dU) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                               << 0x1cU) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                                  << 0x1bU) 
                                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                                     << 0x1aU) 
                                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                                        << 0x19U) 
                                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                                           << 0x18U) 
                                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                                              << 0x17U) 
                                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1) 
                                                                                << 0x16U) 
                                                                                | ((0x3fff00U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_1))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3))))))))))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_size))
                                                      ? 
                                                     (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                       << 0x1fU) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                          << 0x1eU) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                             << 0x1dU) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                                << 0x1cU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                                   << 0x1bU) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                                      << 0x1aU) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                                         << 0x19U) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2) 
                                                                                << 0x16U) 
                                                                                | ((0x3f0000U 
                                                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3_2))) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3))))))))))))
                                                      : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_dataShuffle_3)))))))),32);
        tracep->chgIData(oldp+62,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_branchResult_targetPC
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_branchResult_targetPC)),32);
        tracep->chgBit(oldp+63,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_branchResult_branchResult)
                                  : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_branchResult_branchResult))));
        tracep->chgBit(oldp+64,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_branchResult_predictFail)
                                  : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_branchResult_predictFail))));
        tracep->chgBit(oldp+65,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_exceptionInfo_exception)
                                  : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_exception))));
        tracep->chgCData(oldp+66,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_exceptionInfo_eCode)
                                    : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_eCode))),6);
        tracep->chgBit(oldp+67,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_exceptionInfo_eSubCode)
                                  : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_eSubCode))));
        tracep->chgBit(oldp+68,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                                      : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_0) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                         | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))));
        tracep->chgBit(oldp+69,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                                      : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_1) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                         | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))));
        tracep->chgBit(oldp+70,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                                      : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_0) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                         | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))))));
        tracep->chgBit(oldp+71,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                                      : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_1) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                         | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))))));
        tracep->chgBit(oldp+72,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_valid))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_valid)))));
        tracep->chgCData(oldp+73,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_robIdx))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_robIdx)))),5);
        tracep->chgIData(oldp+74,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_targetPC)
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_targetPC))),32);
        tracep->chgBit(oldp+75,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                         >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_branchResult))
                                  : ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_branchResult)))));
        tracep->chgBit(oldp+76,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_predictFail))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_predictFail)))));
        tracep->chgBit(oldp+77,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_exception))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_exception)))));
        tracep->chgCData(oldp+78,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eCode))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eCode)))),6);
        tracep->chgBit(oldp+79,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eSubCode))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eSubCode)))));
        tracep->chgIData(oldp+80,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_pc)
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_pc))),32);
        tracep->chgCData(oldp+81,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_prd))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_prd)))),6);
        tracep->chgCData(oldp+82,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0)))),6);
        tracep->chgCData(oldp+83,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1)))),6);
        tracep->chgIData(oldp+84,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_imm)
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_imm))),32);
        tracep->chgCData(oldp+85,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuCoOp))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_uop_lsuCoOp)))),5);
        tracep->chgBit(oldp+86,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_valid))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_valid)))));
        tracep->chgCData(oldp+87,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_robIdx))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_robIdx)))),5);
        tracep->chgIData(oldp+88,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_targetPC)
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_targetPC))),32);
        tracep->chgBit(oldp+89,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                         >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_branchResult))
                                  : ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                         >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_branchResult)))));
        tracep->chgBit(oldp+90,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_predictFail))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_predictFail)))));
        tracep->chgBit(oldp+91,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_exception))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_exception)))));
        tracep->chgCData(oldp+92,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eCode))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eCode)))),6);
        tracep->chgBit(oldp+93,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eSubCode))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eSubCode)))));
        tracep->chgIData(oldp+94,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_pc)
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_pc))),32);
        tracep->chgCData(oldp+95,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_prd))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_prd)))),6);
        tracep->chgCData(oldp+96,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0)))),6);
        tracep->chgCData(oldp+97,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1)))),6);
        tracep->chgIData(oldp+98,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_imm)
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_imm))),32);
        tracep->chgCData(oldp+99,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuCoOp))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuCoOp)))),5);
        tracep->chgBit(oldp+100,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_valid))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_valid)))));
        tracep->chgCData(oldp+101,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_robIdx))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_robIdx)))),5);
        tracep->chgIData(oldp+102,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_targetPC)
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_targetPC))),32);
        tracep->chgBit(oldp+103,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                          >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_branchResult))
                                   : ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                          >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_branchResult)))));
        tracep->chgBit(oldp+104,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_predictFail))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_predictFail)))));
        tracep->chgBit(oldp+105,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_exception))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_exception)))));
        tracep->chgCData(oldp+106,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eCode))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eCode)))),6);
        tracep->chgBit(oldp+107,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eSubCode))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eSubCode)))));
        tracep->chgIData(oldp+108,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_pc)
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_pc))),32);
        tracep->chgCData(oldp+109,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_prd))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_prd)))),6);
        tracep->chgCData(oldp+110,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0)))),6);
        tracep->chgCData(oldp+111,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1)))),6);
        tracep->chgIData(oldp+112,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_imm)
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_imm))),32);
        tracep->chgCData(oldp+113,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuCoOp))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuCoOp)))),5);
        tracep->chgBit(oldp+114,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_valid)))));
        tracep->chgCData(oldp+115,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_robIdx)))),5);
        tracep->chgIData(oldp+116,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_targetPC))),32);
        tracep->chgBit(oldp+117,(((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
                                      >> 3U)) & ((~ 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                                   >> 3U)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_branchResult)))));
        tracep->chgBit(oldp+118,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_predictFail)))));
        tracep->chgBit(oldp+119,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_exception)))));
        tracep->chgCData(oldp+120,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eCode)))),6);
        tracep->chgBit(oldp+121,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eSubCode)))));
        tracep->chgIData(oldp+122,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_pc))),32);
        tracep->chgCData(oldp+123,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_prd)))),6);
        tracep->chgCData(oldp+124,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0)))),6);
        tracep->chgCData(oldp+125,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1)))),6);
        tracep->chgIData(oldp+126,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_imm))),32);
        tracep->chgCData(oldp+127,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuCoOp)))),5);
        tracep->chgBit(oldp+128,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_0) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                            | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                                  | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0) 
                                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))))));
        tracep->chgBit(oldp+129,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_1) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                            | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                                  | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1) 
                                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))))));
        tracep->chgBit(oldp+130,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_0) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid))))
                                   : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_0) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))))));
        tracep->chgBit(oldp+131,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_1) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid))))
                                   : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_1) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))))));
        tracep->chgBit(oldp+132,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_0) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid))))
                                   : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_0) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))))));
        tracep->chgBit(oldp+133,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_1) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid))))
                                   : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_1) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))))));
        tracep->chgBit(oldp+134,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_0) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid))))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_0) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))))));
        tracep->chgBit(oldp+135,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_1) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid))))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_1) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))))));
        tracep->chgBit(oldp+136,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_0) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_0) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))))));
        tracep->chgBit(oldp+137,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_1) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_1) 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_1) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))))));
        tracep->chgBit(oldp+138,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit)))));
        tracep->chgBit(oldp+139,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                         ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                                            >> 1U) : 
                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                                         >> 1U)))));
        tracep->chgBit(oldp+140,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                         ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                                            >> 2U) : 
                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                                         >> 2U)))));
        tracep->chgBit(oldp+141,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                         ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                                            >> 3U) : 
                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                                         >> 3U)))));
        tracep->chgBit(oldp+142,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__dirtyUpdate) 
                                  & ((0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferRAddr 
                                                   >> 6U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_vaddr 
                                                   >> 6U))) 
                                     == (0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__cacopEn)
                                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__opBuffer_vaddr
                                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__address) 
                                                  >> 6U))))));
        tracep->chgIData(oldp+143,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_size))
                                     ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                         << 0x1fU) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle) 
                                                                    << 0x16U) 
                                                                   | ((0x3fff00U 
                                                                       & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle))) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData))))))))))))
                                     : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_size))
                                         ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                             << 0x1fU) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                << 0x1eU) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1) 
                                                                        << 0x16U) 
                                                                       | ((0x3f0000U 
                                                                           & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1))) 
                                                                              << 0x10U)) 
                                                                          | (0xffffU 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData))))))))))))
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData))),32);
        tracep->chgBit(oldp+144,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready))));
        tracep->chgBit(oldp+145,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)))));
        tracep->chgBit(oldp+146,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_acceptMask)) 
                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_valid)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))));
        tracep->chgBit(oldp+147,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__valid_0) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_0_ready))));
        tracep->chgBit(oldp+148,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__valid_1) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_1_ready))));
        tracep->chgBit(oldp+149,((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)))));
        tracep->chgBit(oldp+150,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_arvalid) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid))))));
        tracep->chgBit(oldp+151,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready)))));
        tracep->chgBit(oldp+152,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_ctrl_busy) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_ctrl_busy))))));
        tracep->chgBit(oldp+153,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
        tracep->chgBit(oldp+154,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
        tracep->chgBit(oldp+155,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
        tracep->chgBit(oldp+156,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        tracep->chgBit(oldp+157,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
        tracep->chgBit(oldp+158,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
        tracep->chgBit(oldp+159,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
        tracep->chgBit(oldp+160,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
        tracep->chgBit(oldp+161,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                     | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
        tracep->chgBit(oldp+162,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+163,(vlSelf->simu_top__DOT__soc__DOT__cpu_wready));
        tracep->chgBit(oldp+164,(vlSelf->simu_top__DOT__soc__DOT__cpu_arready));
        tracep->chgIData(oldp+165,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
        tracep->chgBit(oldp+166,(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
        tracep->chgBit(oldp+167,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
        tracep->chgBit(oldp+168,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
        tracep->chgBit(oldp+169,(vlSelf->simu_top__DOT__soc__DOT__m0_bready));
        tracep->chgBit(oldp+170,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
        tracep->chgBit(oldp+171,(vlSelf->simu_top__DOT__soc__DOT__m0_rready));
        tracep->chgBit(oldp+172,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        tracep->chgBit(oldp+173,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        tracep->chgBit(oldp+174,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        tracep->chgBit(oldp+175,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        tracep->chgBit(oldp+176,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        tracep->chgBit(oldp+177,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                        >> 3U))));
        tracep->chgBit(oldp+178,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                        >> 3U))));
        tracep->chgBit(oldp+179,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        >> 3U))));
        tracep->chgBit(oldp+180,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                        >> 3U))));
        tracep->chgBit(oldp+181,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 3U))));
        tracep->chgBit(oldp+182,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                        >> 2U))));
        tracep->chgBit(oldp+183,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                        >> 2U))));
        tracep->chgBit(oldp+184,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        >> 2U))));
        tracep->chgBit(oldp+185,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                        >> 2U))));
        tracep->chgBit(oldp+186,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 2U))));
        tracep->chgBit(oldp+187,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        tracep->chgCData(oldp+188,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        tracep->chgBit(oldp+189,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        tracep->chgCData(oldp+190,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
        tracep->chgBit(oldp+191,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
        tracep->chgBit(oldp+192,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                        >> 1U))));
        tracep->chgBit(oldp+193,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                        >> 1U))));
        tracep->chgBit(oldp+194,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        >> 1U))));
        tracep->chgBit(oldp+195,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                        >> 1U))));
        tracep->chgBit(oldp+196,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 1U))));
        tracep->chgBit(oldp+197,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                        >> 4U))));
        tracep->chgBit(oldp+198,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                        >> 4U))));
        tracep->chgBit(oldp+199,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        >> 4U))));
        tracep->chgBit(oldp+200,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                        >> 4U))));
        tracep->chgBit(oldp+201,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 4U))));
        tracep->chgCData(oldp+202,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        tracep->chgCData(oldp+203,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        tracep->chgCData(oldp+204,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        tracep->chgCData(oldp+205,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        tracep->chgCData(oldp+206,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        tracep->chgBit(oldp+207,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        tracep->chgBit(oldp+208,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        tracep->chgBit(oldp+209,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        tracep->chgBit(oldp+210,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        tracep->chgBit(oldp+211,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        tracep->chgBit(oldp+212,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        tracep->chgBit(oldp+213,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        tracep->chgBit(oldp+214,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        tracep->chgBit(oldp+215,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        tracep->chgBit(oldp+216,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        tracep->chgBit(oldp+217,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        tracep->chgBit(oldp+218,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        tracep->chgBit(oldp+219,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        tracep->chgBit(oldp+220,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        tracep->chgBit(oldp+221,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        tracep->chgBit(oldp+222,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        tracep->chgBit(oldp+223,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        tracep->chgCData(oldp+224,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        tracep->chgSData(oldp+225,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        tracep->chgBit(oldp+226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready));
        tracep->chgBit(oldp+227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roLSU_io_toFU_ready));
        tracep->chgBit(oldp+228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid));
        tracep->chgBit(oldp+229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_dCache_rvalid));
        tracep->chgBit(oldp+230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_0_ready));
        tracep->chgBit(oldp+231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_1_ready));
        tracep->chgIData(oldp+232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1),32);
        tracep->chgIData(oldp+233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1),32);
        tracep->chgBit(oldp+234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_ctrl_busy));
        tracep->chgBit(oldp+235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_valid));
        tracep->chgCData(oldp+236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd),6);
        tracep->chgBit(oldp+237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid));
        tracep->chgCData(oldp+238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask),2);
        tracep->chgBit(oldp+239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset));
        tracep->chgCData(oldp+240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_fetchNum),2);
        tracep->chgBit(oldp+241,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))));
        tracep->chgBit(oldp+242,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                                        >> 1U))));
        tracep->chgBit(oldp+243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0));
        tracep->chgBit(oldp+244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1));
        tracep->chgBit(oldp+245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_srcReady_0));
        tracep->chgBit(oldp+246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_srcReady_1));
        tracep->chgBit(oldp+247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_srcReady_0));
        tracep->chgBit(oldp+248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_srcReady_1));
        tracep->chgBit(oldp+249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_srcReady_0));
        tracep->chgBit(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_srcReady_1));
        tracep->chgBit(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0));
        tracep->chgBit(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1));
        tracep->chgBit(oldp+253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_srcReady_0));
        tracep->chgBit(oldp+254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_srcReady_1));
        tracep->chgBit(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_srcReady_0));
        tracep->chgBit(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_srcReady_1));
        tracep->chgBit(oldp+257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_srcReady_0));
        tracep->chgBit(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_srcReady_1));
        tracep->chgCData(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead),4);
        tracep->chgBit(oldp+260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0));
        tracep->chgBit(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1));
        tracep->chgCData(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuOp),4);
        tracep->chgBit(oldp+263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_roop_lsuROOp));
        tracep->chgBit(oldp+264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_srcReady_0));
        tracep->chgBit(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_srcReady_1));
        tracep->chgCData(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuOp),4);
        tracep->chgBit(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_roop_lsuROOp));
        tracep->chgBit(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_srcReady_0));
        tracep->chgBit(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_srcReady_1));
        tracep->chgCData(oldp+270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuOp),4);
        tracep->chgBit(oldp+271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_roop_lsuROOp));
        tracep->chgBit(oldp+272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_srcReady_0));
        tracep->chgBit(oldp+273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_srcReady_1));
        tracep->chgCData(oldp+274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuOp),4);
        tracep->chgBit(oldp+275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_roop_lsuROOp));
        tracep->chgBit(oldp+276,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))));
        tracep->chgBit(oldp+277,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
                                        >> 1U))));
        tracep->chgBit(oldp+278,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
                                        >> 2U))));
        tracep->chgBit(oldp+279,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
                                        >> 3U))));
        tracep->chgQData(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuOp_string),56);
        tracep->chgQData(oldp+282,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgQData(oldp+284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuOp_string),56);
        tracep->chgQData(oldp+286,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgQData(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuOp_string),56);
        tracep->chgQData(oldp+290,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgQData(oldp+292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuOp_string),56);
        tracep->chgQData(oldp+294,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgBit(oldp+296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0));
        tracep->chgBit(oldp+297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1));
        tracep->chgBit(oldp+298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_0));
        tracep->chgBit(oldp+299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_0));
        tracep->chgBit(oldp+300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_1));
        tracep->chgBit(oldp+301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_1));
        tracep->chgBit(oldp+302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_2));
        tracep->chgBit(oldp+303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_2));
        tracep->chgBit(oldp+304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_3));
        tracep->chgBit(oldp+305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_3));
        tracep->chgBit(oldp+306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_fire));
        tracep->chgBit(oldp+307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend));
        tracep->chgBit(oldp+308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferUpdate));
        tracep->chgBit(oldp+309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready));
        tracep->chgBit(oldp+310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage2In_ready));
        tracep->chgBit(oldp+311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready));
        tracep->chgIData(oldp+312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1),32);
        tracep->chgBit(oldp+313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_0));
        tracep->chgBit(oldp+314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_1));
        tracep->chgBit(oldp+315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_2));
        tracep->chgBit(oldp+316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_3));
        tracep->chgIData(oldp+317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite),32);
        tracep->chgBit(oldp+318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174));
        tracep->chgBit(oldp+319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_1));
        tracep->chgBit(oldp+320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_2));
        tracep->chgBit(oldp+321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_3));
        tracep->chgBit(oldp+322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad));
        tracep->chgBit(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiFinish));
        tracep->chgBit(oldp+324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__noStructuralHazard));
        tracep->chgBit(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l267));
        tracep->chgBit(oldp+326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l292));
        tracep->chgBit(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__io_output_fire));
        tracep->chgBit(oldp+328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l335));
        tracep->chgBit(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__dirtyUpdate));
        tracep->chgIData(oldp+330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData),32);
        tracep->chgCData(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext),3);
        tracep->chgBit(oldp+332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l510));
        tracep->chgBit(oldp+333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l539));
        tracep->chgWData(oldp+334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext_string),72);
        tracep->chgBit(oldp+337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_7));
        tracep->chgBit(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire));
        tracep->chgBit(oldp+339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_6));
        tracep->chgBit(oldp+340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_5));
        tracep->chgBit(oldp+341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_4));
        tracep->chgBit(oldp+342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_3));
        tracep->chgBit(oldp+343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_2));
        tracep->chgBit(oldp+344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_1));
        tracep->chgBit(oldp+345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en));
        tracep->chgCData(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss),2);
        tracep->chgBit(oldp+347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_valid));
        tracep->chgBit(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_ready));
        tracep->chgCData(oldp+349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_payload_valid),2);
        tracep->chgBit(oldp+350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_valid));
        tracep->chgBit(oldp+351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready));
        tracep->chgCData(oldp+352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask),2);
        tracep->chgCData(oldp+353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_acceptMask),2);
        tracep->chgCData(oldp+354,((((IData)((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask))) 
                                     << 1U) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask)))),2);
        tracep->chgIData(oldp+355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_0_inst),32);
        tracep->chgIData(oldp+356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_1_inst),32);
        tracep->chgIData(oldp+357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__missAddr),32);
        tracep->chgCData(oldp+358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask),2);
        tracep->chgBit(oldp+359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l131));
        tracep->chgBit(oldp+360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l131_1));
        tracep->chgBit(oldp+361,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask))));
        tracep->chgBit(oldp+362,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask) 
                                        >> 1U))));
        tracep->chgCData(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext),2);
        tracep->chgBit(oldp+364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200));
        tracep->chgBit(oldp+365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_1));
        tracep->chgBit(oldp+366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_2));
        tracep->chgBit(oldp+367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_3));
        tracep->chgBit(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_StateMachine_l253));
        tracep->chgBit(oldp+369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_StateMachine_l253_1));
        tracep->chgIData(oldp+370,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext))
                                     ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext))
                                         ? 0x72656164U
                                         : 0x72657120U)
                                     : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext))
                                         ? 0x69646c65U
                                         : 0x424f4f54U))),32);
        tracep->chgBit(oldp+371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_willClear));
        tracep->chgCData(oldp+372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_valueNext),2);
        tracep->chgCData(oldp+373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext),3);
        tracep->chgBit(oldp+374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__when_MEMService_l113));
        tracep->chgBit(oldp+375,((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_valueNext))));
        tracep->chgWData(oldp+376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext_string),96);
        tracep->chgCData(oldp+379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__acceptMask),2);
        tracep->chgBit(oldp+380,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        tracep->chgBit(oldp+381,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        tracep->chgBit(oldp+382,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        tracep->chgBit(oldp+383,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        tracep->chgBit(oldp+384,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
        tracep->chgBit(oldp+385,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        tracep->chgBit(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        tracep->chgBit(oldp+387,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        tracep->chgBit(oldp+388,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        tracep->chgBit(oldp+389,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        tracep->chgBit(oldp+390,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        tracep->chgBit(oldp+391,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        tracep->chgBit(oldp+392,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
    }
    tracep->chgBit(oldp+393,(vlSelf->aclk));
    tracep->chgBit(oldp+394,(vlSelf->aresetn));
    tracep->chgBit(oldp+395,(vlSelf->enable_delay));
    tracep->chgIData(oldp+396,(vlSelf->random_seed),23);
    tracep->chgBit(oldp+397,(vlSelf->ram_ren));
    tracep->chgIData(oldp+398,(vlSelf->ram_raddr),32);
    tracep->chgIData(oldp+399,(vlSelf->ram_rdata),32);
    tracep->chgCData(oldp+400,(vlSelf->ram_wen),4);
    tracep->chgIData(oldp+401,(vlSelf->ram_waddr),32);
    tracep->chgIData(oldp+402,(vlSelf->ram_wdata),32);
    tracep->chgIData(oldp+403,(vlSelf->debug0_wb_pc),32);
    tracep->chgBit(oldp+404,(vlSelf->debug0_wb_rf_wen));
    tracep->chgCData(oldp+405,(vlSelf->debug0_wb_rf_wnum),5);
    tracep->chgIData(oldp+406,(vlSelf->debug0_wb_rf_wdata),32);
    tracep->chgIData(oldp+407,(vlSelf->num_data),32);
    tracep->chgBit(oldp+408,(vlSelf->open_trace));
    tracep->chgBit(oldp+409,(vlSelf->num_monitor));
    tracep->chgCData(oldp+410,(vlSelf->confreg_uart_data),8);
    tracep->chgBit(oldp+411,(vlSelf->write_uart_valid));
    tracep->chgWData(oldp+412,(vlSelf->uart_ctr_bus),128);
    tracep->chgBit(oldp+416,(vlSelf->uart_rx));
    tracep->chgBit(oldp+417,(vlSelf->uart_tx));
    tracep->chgSData(oldp+418,(vlSelf->led),16);
    tracep->chgCData(oldp+419,(vlSelf->led_rg0),2);
    tracep->chgCData(oldp+420,(vlSelf->led_rg1),2);
    tracep->chgCData(oldp+421,(vlSelf->num_csn),8);
    tracep->chgCData(oldp+422,(vlSelf->num_a_g),7);
    tracep->chgCData(oldp+423,(vlSelf->btn_key_col),4);
    tracep->chgCData(oldp+424,(vlSelf->btn_key_row),4);
    tracep->chgCData(oldp+425,(vlSelf->btn_step),2);
    tracep->chgBit(oldp+426,(vlSelf->clock));
    tracep->chgCData(oldp+427,(vlSelf->coreid),8);
    tracep->chgBit(oldp+428,(vlSelf->valid));
    tracep->chgCData(oldp+429,(vlSelf->code),3);
    tracep->chgQData(oldp+430,(vlSelf->pc),64);
    tracep->chgQData(oldp+432,(vlSelf->cycleCnt),64);
    tracep->chgQData(oldp+434,(vlSelf->instrCnt),64);
    tracep->chgCData(oldp+436,(vlSelf->__SYM__switch),8);
    tracep->chgBit(oldp+437,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                 | (~ (IData)(vlSelf->enable_delay))))));
    tracep->chgBit(oldp+438,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                              & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                  >> 2U) | (~ (IData)(vlSelf->enable_delay))))));
    tracep->chgBit(oldp+439,((1U & (~ (IData)(vlSelf->aresetn)))));
    tracep->chgBit(oldp+440,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                     ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                        | (IData)(vlSelf->uart_tx))
                                     : (IData)(vlSelf->uart_rx)))));
    tracep->chgBit(oldp+441,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    tracep->chgIData(oldp+442,(vlSelf->__SYM__switch),32);
    tracep->chgIData(oldp+443,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                            << 8U)) 
                                | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                               << 7U)) 
                                   | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                 << 6U)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__SYM__switch) 
                                           << 5U)) 
                                         | ((0x80U 
                                             & ((IData)(vlSelf->__SYM__switch) 
                                                << 4U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__SYM__switch) 
                                                   << 3U)) 
                                               | ((8U 
                                                   & ((IData)(vlSelf->__SYM__switch) 
                                                      << 2U)) 
                                                  | (2U 
                                                     & ((IData)(vlSelf->__SYM__switch) 
                                                        << 1U)))))))))),32);
    tracep->chgBit(oldp+444,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                              & (~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))))));
    tracep->chgBit(oldp+445,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                              & (0xfU == (IData)(vlSelf->btn_key_row)))));
    tracep->chgBit(oldp+446,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                              & (~ (IData)(vlSelf->btn_step)))));
    tracep->chgBit(oldp+447,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                    & (IData)(vlSelf->btn_step)))));
    tracep->chgBit(oldp+448,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                              & (~ ((IData)(vlSelf->btn_step) 
                                    >> 1U)))));
    tracep->chgBit(oldp+449,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                              & ((IData)(vlSelf->btn_step) 
                                 >> 1U))));
    tracep->chgBit(oldp+450,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_awvalid) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                    | (~ (IData)(vlSelf->enable_delay)))))));
    tracep->chgBit(oldp+451,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
}

void Vsimu_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_cleanup\n"); );
    // Init
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
