// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_1(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5686);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgIData(oldp+0,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_branchResult_targetPC
                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_branchResult_targetPC)),32);
        tracep->chgBit(oldp+1,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_branchResult_branchResult)
                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_branchResult_branchResult))));
        tracep->chgBit(oldp+2,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_branchResult_predictFail)
                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_branchResult_predictFail))));
        tracep->chgBit(oldp+3,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_exceptionInfo_exception)
                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_exception))));
        tracep->chgCData(oldp+4,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_exceptionInfo_eCode)
                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_eCode))),6);
        tracep->chgBit(oldp+5,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_exceptionInfo_eSubCode)
                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_eSubCode))));
        tracep->chgBit(oldp+6,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked))
                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_0_valid)
                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_0))));
        tracep->chgBit(oldp+7,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked))
                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_1_valid)
                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_1))));
        tracep->chgCData(oldp+8,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu0Sel) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu1Sel)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__muluReq_ohFirst_masked)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__divuReq_ohFirst_masked)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked))),2);
        tracep->chgBit(oldp+9,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_srcReady_0) 
                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))));
        tracep->chgBit(oldp+10,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))));
        tracep->chgBit(oldp+11,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_0) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))));
        tracep->chgBit(oldp+12,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))));
        tracep->chgBit(oldp+13,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_0) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))));
        tracep->chgBit(oldp+14,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))));
        tracep->chgBit(oldp+15,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_0) 
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
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))));
        tracep->chgBit(oldp+16,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_1) 
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
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))));
        tracep->chgBit(oldp+17,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_valid))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_valid)))));
        tracep->chgBit(oldp+18,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_0))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_srcReady_0)))));
        tracep->chgBit(oldp+19,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_1))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_srcReady_1)))));
        tracep->chgBit(oldp+20,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_valid))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_valid)))));
        tracep->chgBit(oldp+21,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_0))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_0)))));
        tracep->chgBit(oldp+22,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_1))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_1)))));
        tracep->chgBit(oldp+23,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_valid))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_valid)))));
        tracep->chgBit(oldp+24,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_0))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_0)))));
        tracep->chgBit(oldp+25,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_1))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_1)))));
        tracep->chgBit(oldp+26,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_valid)))));
        tracep->chgBit(oldp+27,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_0)))));
        tracep->chgBit(oldp+28,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_1)))));
        tracep->chgBit(oldp+29,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_srcReady_0) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))));
        tracep->chgBit(oldp+30,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))));
        tracep->chgBit(oldp+31,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_0) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))));
        tracep->chgBit(oldp+32,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))));
        tracep->chgBit(oldp+33,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_0) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))));
        tracep->chgBit(oldp+34,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))));
        tracep->chgBit(oldp+35,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_0) 
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
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))));
        tracep->chgBit(oldp+36,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_1) 
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
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))))));
        tracep->chgBit(oldp+37,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_valid))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_valid)))));
        tracep->chgBit(oldp+38,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_0))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_srcReady_0)))));
        tracep->chgBit(oldp+39,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_1))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_srcReady_1)))));
        tracep->chgBit(oldp+40,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_valid))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_valid)))));
        tracep->chgBit(oldp+41,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_0))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_0)))));
        tracep->chgBit(oldp+42,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_1))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_1)))));
        tracep->chgBit(oldp+43,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_valid))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_valid)))));
        tracep->chgBit(oldp+44,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_0))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_0)))));
        tracep->chgBit(oldp+45,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_1))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_1)))));
        tracep->chgBit(oldp+46,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_valid)))));
        tracep->chgBit(oldp+47,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_0)))));
        tracep->chgBit(oldp+48,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_1)))));
        tracep->chgBit(oldp+49,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_valid))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_valid)))));
        tracep->chgBit(oldp+50,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_valid))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_valid)))));
        tracep->chgBit(oldp+51,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_valid))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_valid)))));
        tracep->chgBit(oldp+52,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__shiftAhead))
                                  ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked) 
                                      >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid))
                                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_valid)))));
        tracep->chgBit(oldp+53,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_0) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))));
        tracep->chgBit(oldp+54,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))));
        tracep->chgBit(oldp+55,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_0) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))));
        tracep->chgBit(oldp+56,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))));
        tracep->chgBit(oldp+57,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_0) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))));
        tracep->chgBit(oldp+58,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_1) 
                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1) 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))));
        tracep->chgBit(oldp+59,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_0) 
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
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))));
        tracep->chgBit(oldp+60,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_1) 
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
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))))));
        tracep->chgBit(oldp+61,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_valid))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_valid)))));
        tracep->chgCData(oldp+62,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_robIdx))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_robIdx)))),5);
        tracep->chgIData(oldp+63,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_targetPC)
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_targetPC))),32);
        tracep->chgBit(oldp+64,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                         >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_branchResult))
                                  : ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_branchResult)))));
        tracep->chgBit(oldp+65,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_predictFail))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_predictFail)))));
        tracep->chgBit(oldp+66,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_exception))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_exception)))));
        tracep->chgCData(oldp+67,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eCode))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eCode)))),6);
        tracep->chgBit(oldp+68,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eSubCode))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eSubCode)))));
        tracep->chgIData(oldp+69,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_pc)
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_pc))),32);
        tracep->chgCData(oldp+70,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_prd))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_prd)))),6);
        tracep->chgCData(oldp+71,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0)))),6);
        tracep->chgCData(oldp+72,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1)))),6);
        tracep->chgIData(oldp+73,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_imm)
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_imm))),32);
        tracep->chgCData(oldp+74,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuCoOp))
                                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_uop_lsuCoOp)))),5);
        tracep->chgBit(oldp+75,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_0))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_0)))));
        tracep->chgBit(oldp+76,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_1))
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_1)))));
        tracep->chgBit(oldp+77,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_valid))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_valid)))));
        tracep->chgCData(oldp+78,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_robIdx))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_robIdx)))),5);
        tracep->chgIData(oldp+79,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_targetPC)
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_targetPC))),32);
        tracep->chgBit(oldp+80,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                         >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_branchResult))
                                  : ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                         >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_branchResult)))));
        tracep->chgBit(oldp+81,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_predictFail))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_predictFail)))));
        tracep->chgBit(oldp+82,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_exception))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_exception)))));
        tracep->chgCData(oldp+83,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eCode))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eCode)))),6);
        tracep->chgBit(oldp+84,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eSubCode))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eSubCode)))));
        tracep->chgIData(oldp+85,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_pc)
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_pc))),32);
        tracep->chgCData(oldp+86,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_prd))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_prd)))),6);
        tracep->chgCData(oldp+87,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0)))),6);
        tracep->chgCData(oldp+88,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1)))),6);
        tracep->chgIData(oldp+89,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_imm)
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_imm))),32);
        tracep->chgCData(oldp+90,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuCoOp))
                                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuCoOp)))),5);
        tracep->chgBit(oldp+91,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_0))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_0)))));
        tracep->chgBit(oldp+92,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_1))
                                  : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_1)))));
        tracep->chgBit(oldp+93,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_valid))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_valid)))));
        tracep->chgCData(oldp+94,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_robIdx))
                                    : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_robIdx)))),5);
        tracep->chgIData(oldp+95,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_targetPC)
                                    : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_targetPC))),32);
        tracep->chgBit(oldp+96,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                         >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_branchResult))
                                  : ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                         >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_branchResult)))));
        tracep->chgBit(oldp+97,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_predictFail))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_predictFail)))));
        tracep->chgBit(oldp+98,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                  ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_exception))
                                  : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_exception)))));
        tracep->chgCData(oldp+99,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                    ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eCode))
                                    : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eCode)))),6);
        tracep->chgBit(oldp+100,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eSubCode))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eSubCode)))));
        tracep->chgIData(oldp+101,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_pc)
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_pc))),32);
        tracep->chgCData(oldp+102,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_prd))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_prd)))),6);
        tracep->chgCData(oldp+103,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0)))),6);
        tracep->chgCData(oldp+104,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1)))),6);
        tracep->chgIData(oldp+105,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_imm)
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_imm))),32);
        tracep->chgCData(oldp+106,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuCoOp))
                                     : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuCoOp)))),5);
        tracep->chgBit(oldp+107,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_0))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_0)))));
        tracep->chgBit(oldp+108,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_1))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_1)))));
        tracep->chgBit(oldp+109,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_valid)))));
        tracep->chgCData(oldp+110,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_robIdx)))),5);
        tracep->chgIData(oldp+111,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_targetPC))),32);
        tracep->chgBit(oldp+112,(((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
                                      >> 3U)) & ((~ 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                                   >> 3U)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_branchResult)))));
        tracep->chgBit(oldp+113,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_predictFail)))));
        tracep->chgBit(oldp+114,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_exception)))));
        tracep->chgCData(oldp+115,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eCode)))),6);
        tracep->chgBit(oldp+116,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eSubCode)))));
        tracep->chgIData(oldp+117,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_pc))),32);
        tracep->chgCData(oldp+118,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_prd)))),6);
        tracep->chgCData(oldp+119,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0)))),6);
        tracep->chgCData(oldp+120,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1)))),6);
        tracep->chgIData(oldp+121,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_imm))),32);
        tracep->chgCData(oldp+122,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                     ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                         : 0U) : ((8U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuCoOp)))),5);
        tracep->chgBit(oldp+123,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_0)))));
        tracep->chgBit(oldp+124,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_1)))));
        tracep->chgBit(oldp+125,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__readyToIssue)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready))));
        tracep->chgBit(oldp+126,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_0) 
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
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))));
        tracep->chgBit(oldp+127,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_1) 
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
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))));
        tracep->chgBit(oldp+128,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_0) 
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
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))));
        tracep->chgBit(oldp+129,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_1) 
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
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))));
        tracep->chgBit(oldp+130,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_0) 
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
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))));
        tracep->chgBit(oldp+131,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_1) 
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
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))));
        tracep->chgBit(oldp+132,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_0) 
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
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))));
        tracep->chgBit(oldp+133,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_1) 
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
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)))));
        tracep->chgBit(oldp+134,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_valid))
                                   : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_valid)))));
        tracep->chgBit(oldp+135,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_0))
                                   : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_0)))));
        tracep->chgBit(oldp+136,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_1))
                                   : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_1)))));
        tracep->chgBit(oldp+137,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_valid))
                                   : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_valid)))));
        tracep->chgBit(oldp+138,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_0))
                                   : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_0)))));
        tracep->chgBit(oldp+139,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_1))
                                   : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_1)))));
        tracep->chgBit(oldp+140,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_valid))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_valid)))));
        tracep->chgBit(oldp+141,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_0))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_0)))));
        tracep->chgBit(oldp+142,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_1))
                                   : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_1)))));
        tracep->chgBit(oldp+143,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_valid)))));
        tracep->chgBit(oldp+144,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_0)))));
        tracep->chgBit(oldp+145,(((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
                                   ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked) 
                                       >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1))
                                   : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_1)))));
        tracep->chgBit(oldp+146,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect)
                                         : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit)))));
        tracep->chgBit(oldp+147,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                         ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                                            >> 1U) : 
                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                                         >> 1U)))));
        tracep->chgBit(oldp+148,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                         ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                                            >> 2U) : 
                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                                         >> 2U)))));
        tracep->chgBit(oldp+149,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                         ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                                            >> 3U) : 
                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                                         >> 3U)))));
        tracep->chgBit(oldp+150,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__dirtyUpdate) 
                                  & ((0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferRAddr 
                                                   >> 6U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_vaddr 
                                                   >> 6U))) 
                                     == (0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__cacopEn)
                                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__opBuffer_vaddr
                                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__address) 
                                                  >> 6U))))));
        tracep->chgIData(oldp+151,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_size))
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
        tracep->chgBit(oldp+152,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready))));
        tracep->chgBit(oldp+153,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)))));
        tracep->chgBit(oldp+154,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_acceptMask)) 
                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_valid)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))));
        tracep->chgBit(oldp+155,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__valid_0) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_0_ready))));
        tracep->chgBit(oldp+156,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__valid_1) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_1_ready))));
        tracep->chgBit(oldp+157,((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)))));
        tracep->chgBit(oldp+158,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_arvalid) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid))))));
        tracep->chgBit(oldp+159,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready)))));
        tracep->chgBit(oldp+160,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_ctrl_busy) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_ctrl_busy))))));
        tracep->chgBit(oldp+161,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
        tracep->chgBit(oldp+162,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
        tracep->chgBit(oldp+163,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
        tracep->chgBit(oldp+164,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        tracep->chgBit(oldp+165,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
        tracep->chgBit(oldp+166,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
        tracep->chgBit(oldp+167,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
        tracep->chgBit(oldp+168,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
        tracep->chgBit(oldp+169,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                     | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
        tracep->chgBit(oldp+170,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+171,(vlSelf->simu_top__DOT__soc__DOT__cpu_wready));
        tracep->chgBit(oldp+172,(vlSelf->simu_top__DOT__soc__DOT__cpu_arready));
        tracep->chgIData(oldp+173,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
        tracep->chgBit(oldp+174,(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
        tracep->chgBit(oldp+175,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
        tracep->chgBit(oldp+176,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
        tracep->chgBit(oldp+177,(vlSelf->simu_top__DOT__soc__DOT__m0_bready));
        tracep->chgBit(oldp+178,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
        tracep->chgBit(oldp+179,(vlSelf->simu_top__DOT__soc__DOT__m0_rready));
        tracep->chgBit(oldp+180,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        tracep->chgBit(oldp+181,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        tracep->chgBit(oldp+182,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        tracep->chgBit(oldp+183,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        tracep->chgBit(oldp+184,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        tracep->chgBit(oldp+185,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                        >> 3U))));
        tracep->chgBit(oldp+186,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                        >> 3U))));
        tracep->chgBit(oldp+187,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        >> 3U))));
        tracep->chgBit(oldp+188,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                        >> 3U))));
        tracep->chgBit(oldp+189,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 3U))));
        tracep->chgBit(oldp+190,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                        >> 2U))));
        tracep->chgBit(oldp+191,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                        >> 2U))));
        tracep->chgBit(oldp+192,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        >> 2U))));
        tracep->chgBit(oldp+193,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                        >> 2U))));
        tracep->chgBit(oldp+194,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 2U))));
        tracep->chgBit(oldp+195,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        tracep->chgCData(oldp+196,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        tracep->chgBit(oldp+197,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        tracep->chgCData(oldp+198,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
        tracep->chgBit(oldp+199,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
        tracep->chgBit(oldp+200,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                        >> 1U))));
        tracep->chgBit(oldp+201,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                        >> 1U))));
        tracep->chgBit(oldp+202,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        >> 1U))));
        tracep->chgBit(oldp+203,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                        >> 1U))));
        tracep->chgBit(oldp+204,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 1U))));
        tracep->chgBit(oldp+205,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                        >> 4U))));
        tracep->chgBit(oldp+206,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                        >> 4U))));
        tracep->chgBit(oldp+207,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        >> 4U))));
        tracep->chgBit(oldp+208,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                        >> 4U))));
        tracep->chgBit(oldp+209,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 4U))));
        tracep->chgCData(oldp+210,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        tracep->chgCData(oldp+211,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        tracep->chgCData(oldp+212,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        tracep->chgCData(oldp+213,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        tracep->chgCData(oldp+214,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        tracep->chgBit(oldp+215,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        tracep->chgBit(oldp+216,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        tracep->chgBit(oldp+217,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        tracep->chgBit(oldp+218,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        tracep->chgBit(oldp+219,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        tracep->chgBit(oldp+220,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        tracep->chgBit(oldp+221,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        tracep->chgBit(oldp+222,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        tracep->chgBit(oldp+223,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        tracep->chgBit(oldp+224,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        tracep->chgBit(oldp+225,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        tracep->chgBit(oldp+226,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        tracep->chgBit(oldp+227,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        tracep->chgBit(oldp+228,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        tracep->chgBit(oldp+229,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        tracep->chgBit(oldp+230,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        tracep->chgBit(oldp+231,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        tracep->chgCData(oldp+232,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        tracep->chgSData(oldp+233,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        tracep->chgBit(oldp+234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready));
        tracep->chgBit(oldp+235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roLSU_io_toFU_ready));
        tracep->chgBit(oldp+236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid));
        tracep->chgBit(oldp+237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_dCache_rvalid));
        tracep->chgBit(oldp+238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_0_ready));
        tracep->chgBit(oldp+239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_1_ready));
        tracep->chgIData(oldp+240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1),32);
        tracep->chgIData(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1),32);
        tracep->chgBit(oldp+242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_ctrl_busy));
        tracep->chgBit(oldp+243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_valid));
        tracep->chgCData(oldp+244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd),6);
        tracep->chgBit(oldp+245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid));
        tracep->chgCData(oldp+246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask),2);
        tracep->chgCData(oldp+247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask),2);
        tracep->chgBit(oldp+248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_sratWrite_0_wen));
        tracep->chgBit(oldp+249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_sratWrite_1_wen));
        tracep->chgCData(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_freelist_disPatchNum),2);
        tracep->chgBit(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid));
        tracep->chgBit(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid));
        tracep->chgBit(oldp+253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid));
        tracep->chgBit(oldp+254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid));
        tracep->chgBit(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid));
        tracep->chgCData(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx),5);
        tracep->chgIData(oldp+257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC),32);
        tracep->chgBit(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail));
        tracep->chgBit(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception));
        tracep->chgCData(oldp+260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode),6);
        tracep->chgBit(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode));
        tracep->chgIData(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc),32);
        tracep->chgCData(oldp+263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd),6);
        tracep->chgCData(oldp+264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0),6);
        tracep->chgCData(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1),6);
        tracep->chgIData(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm),32);
        tracep->chgCData(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp),4);
        tracep->chgCData(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp),5);
        tracep->chgBit(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp));
        tracep->chgBit(oldp+270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_input_ready));
        tracep->chgBit(oldp+271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset));
        tracep->chgCData(oldp+272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__resAvail),2);
        tracep->chgCData(oldp+273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq),2);
        tracep->chgCData(oldp+274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked),2);
        tracep->chgQData(oldp+275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__io_lsuIQ_payload_uop_lsuOp_string),56);
        tracep->chgQData(oldp+277,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgCData(oldp+279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_fetchNum),2);
        tracep->chgCData(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchNum),2);
        tracep->chgBit(oldp+281,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))));
        tracep->chgBit(oldp+282,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                                        >> 1U))));
        tracep->chgBit(oldp+283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0));
        tracep->chgBit(oldp+284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1));
        tracep->chgBit(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0));
        tracep->chgBit(oldp+286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1));
        tracep->chgCData(oldp+287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead),4);
        tracep->chgBit(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0));
        tracep->chgBit(oldp+289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1));
        tracep->chgCData(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuOp),4);
        tracep->chgBit(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_roop_lsuROOp));
        tracep->chgCData(oldp+292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuOp),4);
        tracep->chgBit(oldp+293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_roop_lsuROOp));
        tracep->chgCData(oldp+294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuOp),4);
        tracep->chgBit(oldp+295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_roop_lsuROOp));
        tracep->chgCData(oldp+296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuOp),4);
        tracep->chgBit(oldp+297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_roop_lsuROOp));
        tracep->chgBit(oldp+298,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))));
        tracep->chgBit(oldp+299,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
                                        >> 1U))));
        tracep->chgBit(oldp+300,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
                                        >> 2U))));
        tracep->chgBit(oldp+301,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
                                        >> 3U))));
        tracep->chgQData(oldp+302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__io_input_payload_uop_lsuOp_string),56);
        tracep->chgQData(oldp+304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_uop_lsuOp_string),56);
        tracep->chgQData(oldp+306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuOp_string),56);
        tracep->chgQData(oldp+308,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgQData(oldp+310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuOp_string),56);
        tracep->chgQData(oldp+312,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgQData(oldp+314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuOp_string),56);
        tracep->chgQData(oldp+316,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgQData(oldp+318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuOp_string),56);
        tracep->chgQData(oldp+320,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_roop_lsuROOp)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_roop_lsuROOp)
                                         ? 0x726567696d6dULL
                                         : 0x3f3f3f3f3f3fULL)
                                     : 0x7265675f3120ULL)),48);
        tracep->chgBit(oldp+322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0));
        tracep->chgBit(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1));
        tracep->chgBit(oldp+324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_0));
        tracep->chgBit(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_0));
        tracep->chgBit(oldp+326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_1));
        tracep->chgBit(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_1));
        tracep->chgBit(oldp+328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_2));
        tracep->chgBit(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_2));
        tracep->chgBit(oldp+330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_3));
        tracep->chgBit(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_3));
        tracep->chgBit(oldp+332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_fire));
        tracep->chgBit(oldp+333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend));
        tracep->chgBit(oldp+334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferUpdate));
        tracep->chgBit(oldp+335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready));
        tracep->chgBit(oldp+336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage2In_ready));
        tracep->chgBit(oldp+337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready));
        tracep->chgIData(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1),32);
        tracep->chgBit(oldp+339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_0));
        tracep->chgBit(oldp+340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_1));
        tracep->chgBit(oldp+341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_2));
        tracep->chgBit(oldp+342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_3));
        tracep->chgIData(oldp+343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite),32);
        tracep->chgBit(oldp+344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174));
        tracep->chgBit(oldp+345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_1));
        tracep->chgBit(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_2));
        tracep->chgBit(oldp+347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_3));
        tracep->chgBit(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad));
        tracep->chgBit(oldp+349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiFinish));
        tracep->chgBit(oldp+350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__noStructuralHazard));
        tracep->chgBit(oldp+351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l267));
        tracep->chgBit(oldp+352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l292));
        tracep->chgBit(oldp+353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__io_output_fire));
        tracep->chgBit(oldp+354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l335));
        tracep->chgBit(oldp+355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__dirtyUpdate));
        tracep->chgIData(oldp+356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData),32);
        tracep->chgCData(oldp+357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext),3);
        tracep->chgBit(oldp+358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l510));
        tracep->chgBit(oldp+359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l539));
        tracep->chgWData(oldp+360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext_string),72);
        tracep->chgBit(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_7));
        tracep->chgBit(oldp+364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire));
        tracep->chgBit(oldp+365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_6));
        tracep->chgBit(oldp+366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_5));
        tracep->chgBit(oldp+367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_4));
        tracep->chgBit(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_3));
        tracep->chgBit(oldp+369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_2));
        tracep->chgBit(oldp+370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_1));
        tracep->chgBit(oldp+371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en));
        tracep->chgCData(oldp+372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss),2);
        tracep->chgBit(oldp+373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_valid));
        tracep->chgBit(oldp+374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_ready));
        tracep->chgCData(oldp+375,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_payload_valid),2);
        tracep->chgBit(oldp+376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_valid));
        tracep->chgBit(oldp+377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready));
        tracep->chgCData(oldp+378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask),2);
        tracep->chgCData(oldp+379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_acceptMask),2);
        tracep->chgCData(oldp+380,((((IData)((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask))) 
                                     << 1U) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask)))),2);
        tracep->chgIData(oldp+381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_0_inst),32);
        tracep->chgIData(oldp+382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_1_inst),32);
        tracep->chgIData(oldp+383,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__missAddr),32);
        tracep->chgCData(oldp+384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask),2);
        tracep->chgBit(oldp+385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l131));
        tracep->chgBit(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l131_1));
        tracep->chgBit(oldp+387,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask))));
        tracep->chgBit(oldp+388,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask) 
                                        >> 1U))));
        tracep->chgCData(oldp+389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext),2);
        tracep->chgBit(oldp+390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200));
        tracep->chgBit(oldp+391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_1));
        tracep->chgBit(oldp+392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_2));
        tracep->chgBit(oldp+393,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_3));
        tracep->chgBit(oldp+394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_StateMachine_l253));
        tracep->chgBit(oldp+395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_StateMachine_l253_1));
        tracep->chgIData(oldp+396,(((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext))
                                     ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext))
                                         ? 0x72656164U
                                         : 0x72657120U)
                                     : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext))
                                         ? 0x69646c65U
                                         : 0x424f4f54U))),32);
        tracep->chgBit(oldp+397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_willClear));
        tracep->chgCData(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_valueNext),2);
        tracep->chgCData(oldp+399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext),3);
        tracep->chgBit(oldp+400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__when_MEMService_l113));
        tracep->chgBit(oldp+401,((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_valueNext))));
        tracep->chgWData(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext_string),96);
        tracep->chgCData(oldp+405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__acceptMask),2);
        tracep->chgCData(oldp+406,(((2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_3)) 
                                           << 1U)) 
                                    | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask))))),2);
        tracep->chgCData(oldp+407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_dispatchNum),2);
        tracep->chgBit(oldp+408,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask))));
        tracep->chgBit(oldp+409,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                                        >> 1U))));
        tracep->chgBit(oldp+410,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        tracep->chgBit(oldp+411,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        tracep->chgBit(oldp+412,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        tracep->chgBit(oldp+413,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        tracep->chgBit(oldp+414,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
        tracep->chgBit(oldp+415,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        tracep->chgBit(oldp+416,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        tracep->chgBit(oldp+417,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        tracep->chgBit(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        tracep->chgBit(oldp+419,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        tracep->chgBit(oldp+420,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        tracep->chgBit(oldp+421,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        tracep->chgBit(oldp+422,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
    }
    tracep->chgBit(oldp+423,(vlSelf->aclk));
    tracep->chgBit(oldp+424,(vlSelf->aresetn));
    tracep->chgBit(oldp+425,(vlSelf->enable_delay));
    tracep->chgIData(oldp+426,(vlSelf->random_seed),23);
    tracep->chgBit(oldp+427,(vlSelf->ram_ren));
    tracep->chgIData(oldp+428,(vlSelf->ram_raddr),32);
    tracep->chgIData(oldp+429,(vlSelf->ram_rdata),32);
    tracep->chgCData(oldp+430,(vlSelf->ram_wen),4);
    tracep->chgIData(oldp+431,(vlSelf->ram_waddr),32);
    tracep->chgIData(oldp+432,(vlSelf->ram_wdata),32);
    tracep->chgIData(oldp+433,(vlSelf->debug0_wb_pc),32);
    tracep->chgBit(oldp+434,(vlSelf->debug0_wb_rf_wen));
    tracep->chgCData(oldp+435,(vlSelf->debug0_wb_rf_wnum),5);
    tracep->chgIData(oldp+436,(vlSelf->debug0_wb_rf_wdata),32);
    tracep->chgIData(oldp+437,(vlSelf->num_data),32);
    tracep->chgBit(oldp+438,(vlSelf->open_trace));
    tracep->chgBit(oldp+439,(vlSelf->num_monitor));
    tracep->chgCData(oldp+440,(vlSelf->confreg_uart_data),8);
    tracep->chgBit(oldp+441,(vlSelf->write_uart_valid));
    tracep->chgWData(oldp+442,(vlSelf->uart_ctr_bus),128);
    tracep->chgBit(oldp+446,(vlSelf->uart_rx));
    tracep->chgBit(oldp+447,(vlSelf->uart_tx));
    tracep->chgSData(oldp+448,(vlSelf->led),16);
    tracep->chgCData(oldp+449,(vlSelf->led_rg0),2);
    tracep->chgCData(oldp+450,(vlSelf->led_rg1),2);
    tracep->chgCData(oldp+451,(vlSelf->num_csn),8);
    tracep->chgCData(oldp+452,(vlSelf->num_a_g),7);
    tracep->chgCData(oldp+453,(vlSelf->btn_key_col),4);
    tracep->chgCData(oldp+454,(vlSelf->btn_key_row),4);
    tracep->chgCData(oldp+455,(vlSelf->btn_step),2);
    tracep->chgBit(oldp+456,(vlSelf->clock));
    tracep->chgCData(oldp+457,(vlSelf->coreid),8);
    tracep->chgBit(oldp+458,(vlSelf->valid));
    tracep->chgCData(oldp+459,(vlSelf->code),3);
    tracep->chgQData(oldp+460,(vlSelf->pc),64);
    tracep->chgQData(oldp+462,(vlSelf->cycleCnt),64);
    tracep->chgQData(oldp+464,(vlSelf->instrCnt),64);
    tracep->chgCData(oldp+466,(vlSelf->__SYM__switch),8);
    tracep->chgBit(oldp+467,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                 | (~ (IData)(vlSelf->enable_delay))))));
    tracep->chgBit(oldp+468,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                              & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                  >> 2U) | (~ (IData)(vlSelf->enable_delay))))));
    tracep->chgBit(oldp+469,((1U & (~ (IData)(vlSelf->aresetn)))));
    tracep->chgBit(oldp+470,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                     ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                        | (IData)(vlSelf->uart_tx))
                                     : (IData)(vlSelf->uart_rx)))));
    tracep->chgBit(oldp+471,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    tracep->chgIData(oldp+472,(vlSelf->__SYM__switch),32);
    tracep->chgIData(oldp+473,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
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
    tracep->chgBit(oldp+474,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                              & (~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))))));
    tracep->chgBit(oldp+475,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                              & (0xfU == (IData)(vlSelf->btn_key_row)))));
    tracep->chgBit(oldp+476,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                              & (~ (IData)(vlSelf->btn_step)))));
    tracep->chgBit(oldp+477,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                    & (IData)(vlSelf->btn_step)))));
    tracep->chgBit(oldp+478,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                              & (~ ((IData)(vlSelf->btn_step) 
                                    >> 1U)))));
    tracep->chgBit(oldp+479,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                              & ((IData)(vlSelf->btn_step) 
                                 >> 1U))));
    tracep->chgBit(oldp+480,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_awvalid) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                    | (~ (IData)(vlSelf->enable_delay)))))));
    tracep->chgBit(oldp+481,((1U & ((~ (IData)(vlSelf->aresetn)) 
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
