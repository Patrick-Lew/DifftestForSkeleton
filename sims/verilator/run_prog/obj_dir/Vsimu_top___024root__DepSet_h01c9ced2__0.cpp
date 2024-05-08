// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024root.h"

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);

VL_INLINE_OPT void Vsimu_top___024root___sequent__TOP__7(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___sequent__TOP__7\n"); );
    // Body
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(vlSelf->coreid, (IData)(vlSelf->valid), vlSelf->code, vlSelf->pc, vlSelf->cycleCnt, vlSelf->instrCnt);
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ is_TLBFILL, CData/*7:0*/ TLBFILL_index, CData/*0:0*/ is_CNTinst, QData/*63:0*/ timer_64_value, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata, CData/*0:0*/ csr_rstat, IData/*31:0*/ csr_data);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ excp_valid, CData/*0:0*/ eret, IData/*31:0*/ intrNo, IData/*31:0*/ cause, QData/*63:0*/ exceptionPC, IData/*31:0*/ exceptionInst);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ paddr, QData/*63:0*/ vaddr);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ storePAddr, QData/*63:0*/ storeVAddr, QData/*63:0*/ storeData);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ crmd, QData/*63:0*/ prmd, QData/*63:0*/ euen, QData/*63:0*/ ecfg, QData/*63:0*/ estat, QData/*63:0*/ era, QData/*63:0*/ badv, QData/*63:0*/ eentry, QData/*63:0*/ tlbidx, QData/*63:0*/ tlbehi, QData/*63:0*/ tlbelo0, QData/*63:0*/ tlbelo1, QData/*63:0*/ asid, QData/*63:0*/ pgdl, QData/*63:0*/ pgdh, QData/*63:0*/ save0, QData/*63:0*/ save1, QData/*63:0*/ save2, QData/*63:0*/ save3, QData/*63:0*/ tid, QData/*63:0*/ tcfg, QData/*63:0*/ tval, QData/*63:0*/ ticlr, QData/*63:0*/ llbctl, QData/*63:0*/ tlbrentry, QData/*63:0*/ dmw0, QData/*63:0*/ dmw1);

VL_INLINE_OPT void Vsimu_top___024root___sequent__TOP__10(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___sequent__TOP__10\n"); );
    // Body
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v4 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v5 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v6 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v7 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v4 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v5 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v6 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v7 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v4 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v5 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v6 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v7 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v4 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v5 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v6 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v7 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_3_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_2_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_1_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_0_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_1 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_freeList__DOT__freePtr_1 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_freeList__DOT__freePtr_1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_freeList__DOT__freePtr_0 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_freeList__DOT__freePtr_0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_freeList__DOT__retirePtr 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_freeList__DOT__retirePtr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_32 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_32;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_31 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_31;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_92 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_92;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_27 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_27;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_26 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_26;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_44 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_44;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_90 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_90;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_interrupt 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_interrupt;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_25 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_25;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__tag_3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__tag_2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__tag_1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__tag_0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid 
        = vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferBlockOffset 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferBlockOffset;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid 
        = vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_redirectPC 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_redirectPC;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = 2U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = 2U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_0) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_0) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__unnamedblk1__DOT__i = 4U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_1) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_1) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__unnamedblk1__DOT__i = 4U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_2) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_2) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__unnamedblk1__DOT__i = 4U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_3) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_3) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__unnamedblk1__DOT__i = 4U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_0) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_0) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__unnamedblk2__DOT__i = 4U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_1) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_1) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__unnamedblk2__DOT__i = 4U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_2) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_2) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__unnamedblk2__DOT__i = 4U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_3) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_3) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__unnamedblk2__DOT__i = 4U;
        }
    }
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(0U, 0ULL, (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_1)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_2)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_3)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_4)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_5)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_6)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_7)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_8)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_9)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_10)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_11)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_12)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_13)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_14)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_15)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_16)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_17)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_18)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_19)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_20)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_21)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_22)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_23)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_24)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_25)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_26)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_27)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_28)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_29)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_30)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DaRAT_val_31)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_3_1) {
        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitIndex_3_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_3_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitPC_3_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitInstr_3_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestSkip_3_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsTlbFill_3_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestTlbFillIndex_3_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsCount_3_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCount_3_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWen_3_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdest_3_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdata_3_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrRstat_3_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrData_3_1);
    }
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestExcpEventExcpValid_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestExcpEventEret_1, 
                                                                          (0x7ffU 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestExcpEventIntrNO_1 
                                                                              >> 2U)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestExcpEventCause_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestExcpEventEPC_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestExcpEventInst_1);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_2_1) {
        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitIndex_2_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_2_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitPC_2_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitInstr_2_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestSkip_2_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsTlbFill_2_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestTlbFillIndex_2_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsCount_2_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCount_2_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWen_2_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdest_2_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdata_2_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrRstat_2_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrData_2_1);
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_0_1) {
        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitIndex_0_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_0_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitPC_0_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitInstr_0_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestSkip_0_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsTlbFill_0_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestTlbFillIndex_0_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsCount_0_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCount_0_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWen_0_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdest_0_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdata_0_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrRstat_0_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrData_0_1);
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_1_1) {
        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitIndex_1_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_1_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitPC_1_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitInstr_1_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestSkip_1_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsTlbFill_1_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestTlbFillIndex_1_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsCount_1_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCount_1_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWen_1_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdest_1_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdata_1_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrRstat_1_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrData_1_1);
    }
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitIndex_4_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestLoadEventValid_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestLoadEventPAddr_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestLoadEventVAddr_1);
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitIndex_4_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestStoreEventValid_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestStoreEventPAddr_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestStoreEventVAddr_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestStoreEventData_1);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_4_1) {
        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitIndex_4_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitValid_4_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitPC_4_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestInstrCommitInstr_4_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestSkip_4_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsTlbFill_4_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestTlbFillIndex_4_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestIsCount_4_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCount_4_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWen_4_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdest_4_1, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestWdata_4_1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrRstat_4_1), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT___zz_DifftestDelayBundle_DifftestCsrData_4_1);
    }
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(0U, (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_30 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_29) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_28) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_27) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_26) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_interrupt) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_25))))))))), (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_33 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_32) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_31))))), 0ULL, (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_37 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_36) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_35) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_34)))))), (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_46) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_45) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_44) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_43) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_42) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_41) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_40) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_39) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_38))))))))))), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_47)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_48)), (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_50 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_49)))), (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_55) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_54) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_53) 
                                                                                << 0x18U) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_52 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_51))))))), (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_57 
                                                                                << 0xdU) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_56)))), (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_65) 
                                                                                << 0x1cU) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_64 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_63) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_62) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_61) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_60) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_59) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_58)))))))))), (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_73) 
                                                                                << 0x1cU) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_72 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_71) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_70) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_69) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_68) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_67) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_66)))))))))), (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_77) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_76) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_75) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_74)))))), (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_79 
                                                                                << 0xcU) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_78)))), (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_81 
                                                                                << 0xcU) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_80)))), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_82)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_83)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_84)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_85)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_counter_id)), (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_88 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_87) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_86))))), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_89)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT__ticlr)), (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_93 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_92) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_91) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_90)))))), (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_95 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_94)))), (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_103) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_102) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_101) 
                                                                                << 0x19U) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_100 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_99) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_98) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_97) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_96)))))))))), (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_111) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_110) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_109) 
                                                                                << 0x19U) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_108 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_107) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_106) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_105) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr__DOT___zz_io_swRead_value_104)))))))))));
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wstrb;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wdata;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3_portB_rdData 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram
            [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1];
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2_portB_rdData 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram
            [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1];
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1_portB_rdData 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram
            [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1];
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0_portB_rdData 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram
            [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1];
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wstrb;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3_portA_rdData 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2_portA_rdData 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1_portA_rdData 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0_portA_rdData 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_branchResult 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_branchResult_branchResult));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_branchResult_branchResult 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_branchResult_branchResult));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_branchResult_branchResult 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_branchResult_branchResult));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_roop_lsuROOp 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_roop_lsuROOp)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_uop_lsuCoOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuCoOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_uop_divuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_uop_divuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_uop_muluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_uop_muluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_roop_cruROOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_roop_cruROOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_branchInfo_predictPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_branchInfo_predictResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_uop_cruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_uop_cruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_branchInfo_predictPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_branchInfo_predictResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__counter_value 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__counter_valueNext;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_branchResult_branchResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_branchResult_branchResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_branchResult_branchResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_branchResult_branchResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_branchResult_branchResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_branchResult_branchResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_branchResult_branchResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_branchResult_branchResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_branchResult_branchResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_branchResult_branchResult;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_uop_lsuCoOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_uop_divuOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_uop_muluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_roop_cruROOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_uop_bruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_branchInfo_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_branchInfo_predictResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_uop_bruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_uop_cruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_branchInfo_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_branchInfo_predictResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__counter_value = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_branchResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_branchResult_branchResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_branchResult_branchResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_branchResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_branchResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_branchResult_branchResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_branchResult_branchResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_branchResult_branchResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_branchResult_branchResult = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_roop_lsuROOp 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_roop_lsuROOp)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuCoOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuCoOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_uop_divuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_uop_divuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_uop_muluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_uop_muluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_roop_cruROOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_roop_cruROOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_branchInfo_predictPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_branchInfo_predictResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_uop_cruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_uop_cruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_branchInfo_predictPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_branchInfo_predictResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuCoOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuCoOp;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuCoOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_uop_divuOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_uop_muluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_roop_cruROOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_uop_bruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_branchInfo_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_branchInfo_predictResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_uop_cruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_uop_bruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_branchInfo_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_branchInfo_predictResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuCoOp = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_roop_lsuROOp 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_roop_lsuROOp)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuCoOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuCoOp;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuCoOp = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_roop_lsuROOp 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_roop_lsuROOp)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_uop_divuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_uop_divuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_uop_divuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_uop_divuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_uop_muluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_uop_muluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_branchResult_targetPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_branchResult_predictFail;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_uop_muluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_uop_muluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_branchInfo_predictResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_branchInfo_predictPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_roop_cruROOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_roop_cruROOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_branchInfo_predictPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_branchInfo_predictResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_roop_cruROOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_roop_cruROOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_branchInfo_predictResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_branchInfo_predictPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_uop_cruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_uop_cruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_robIdx;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_branchInfo_predictPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_branchInfo_predictResult 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_uop_cruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_uop_cruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_srcReady_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_srcReady_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_srcReady_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_srcReady_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_srcReady_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_srcReady_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_srcReady_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_srcReady_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_srcReady_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_srcReady_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_srcReady_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_srcReady_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_uop_lsuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_uop_aluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_uop_aluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_srcReady_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_srcReady_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_srcReady_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_srcReady_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_srcReady_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_srcReady_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_uop_aluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_uop_aluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_uop_aluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_uop_aluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_uop_aluOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_uop_aluOp;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_uop_divuOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_uop_divuOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_uop_muluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_branchResult_targetPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_branchResult_predictFail = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_uop_muluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_branchInfo_predictResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_branchInfo_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_uop_bruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_roop_cruROOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_branchInfo_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_branchInfo_predictResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_uop_bruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_roop_cruROOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_branchInfo_predictResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_branchInfo_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_uop_bruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_uop_cruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_robIdx = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_branchInfo_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_branchInfo_predictResult = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_exceptionInfo_exception = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_exceptionInfo_eCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_exceptionInfo_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_imm = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_uop_bruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_uop_cruOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_srcReady_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_srcReady_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_srcReady_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_srcReady_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_srcReady_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_srcReady_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_uop_lsuOp = 0xcU;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_uop_aluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_uop_aluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuOp = 0xcU;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_uop_aluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_uop_aluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuOp = 0xcU;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuOp = 0xcU;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_uop_aluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_uop_aluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_uop_aluOp = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_uop_aluOp = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_1_branchInfo_predictResult 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_1_branchInfo_predictResult;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_1_branchInfo_predictPC 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_1_branchInfo_predictPC;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_0_branchInfo_predictResult 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_0_branchInfo_predictResult;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_0_branchInfo_predictPC 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_0_branchInfo_predictPC;
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = 0U;
    }
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
            = (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count));
        vlSelf->num_csn = ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfeU : 0xfdU)
                                : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfbU : 0xf7U))
                            : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xefU : 0xdfU)
                                : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xbfU : 0x7fU)));
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = 0U;
        vlSelf->num_csn = 0xffU;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                                                  >> 3U)))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count))));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag))))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid 
                = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
            = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int 
            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE) 
               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                  >> 0xdU));
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t) 
                             - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
            = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = 0x27fU;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_tlb_pageInfo_d 
            = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_tlb__DOT__when_TLB_l177)) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_tlb__DOT__when_TLB_l178) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_tlb__DOT__when_TLB_l185) 
                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_tlb__DOT___zz___05Fzz_io_iCacheReq_pageInfo_ppn_6)
                               ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_tlb__DOT___zz_io_iCacheReq_pageInfo_d)
                               : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_tlb__DOT___zz_io_iCacheReq_pageInfo_d_1))))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_exceptionInfo_1_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_exceptionInfo_0_eSubCode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_exceptionInfo_1_eCode = 8U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_exceptionInfo_0_eCode = 8U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_2) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_2 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_2)
                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1)
                    : 0U);
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_0) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_0 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174)
                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1)
                    : 0U);
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_3) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_3 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_3)
                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1)
                    : 0U);
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_1) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_1) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_1 = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_1 = 0U;
            }
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_0) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_0 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174)
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1
                    : 0U);
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_3) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_3 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_3)
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1
                    : 0U);
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_2) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_2 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_2)
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1
                    : 0U);
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_3 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1Bypass_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_3 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1Bypass_2 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur)));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur)));
    }
    if (vlSelf->aresetn) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferHead 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferHeadNext;
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l292) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_writeBack 
                = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_missBuffer_0_writeBack_7))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__wayDirty)
                          : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_missBuffer_0_writeBack_7))
                              ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__wayDirty) 
                                 >> 1U) : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_missBuffer_0_writeBack_7))
                                            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__wayDirty) 
                                               >> 2U)
                                            : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__wayDirty) 
                                               >> 3U)))));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferHead = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_writeBack = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_3) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_3) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v0 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData);
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v0 = 1U;
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v0 = 0U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v1 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                            >> 8U));
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v1 = 8U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v1 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v2 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                            >> 0x10U));
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v2 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v3 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                   >> 0x18U);
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v3 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_3) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_3) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v4 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v4 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v4 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v4 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v5 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v5 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v5 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v5 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v6 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v6 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v6 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v6 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v7 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v7 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v7 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_3__DOT__ram__v7 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_2) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_2) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v0 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData);
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v0 = 1U;
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v0 = 0U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v1 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                            >> 8U));
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v1 = 8U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v1 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v2 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                            >> 0x10U));
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v2 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v3 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                   >> 0x18U);
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v3 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_2) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_2) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v4 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v4 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v4 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v4 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v5 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v5 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v5 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v5 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v6 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v6 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v6 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v6 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v7 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v7 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v7 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_2__DOT__ram__v7 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_1) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_1) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v0 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData);
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v0 = 1U;
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v0 = 0U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v1 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                            >> 8U));
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v1 = 8U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v1 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v2 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                            >> 0x10U));
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v2 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v3 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                   >> 0x18U);
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v3 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_1) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_1) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v4 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v4 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v4 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v4 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v5 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v5 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v5 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v5 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v6 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v6 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v6 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v6 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v7 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v7 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v7 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_1__DOT__ram__v7 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_0) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_0) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v0 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData);
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v0 = 1U;
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v0 = 0U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v1 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                            >> 8U));
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v1 = 8U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v1 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v2 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                            >> 0x10U));
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v2 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v3 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_latestWrite_prevData 
                   >> 0x18U);
            vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v3 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_0) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_0) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v4 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v4 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v4 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v4 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v5 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v5 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v5 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v5 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v6 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v6 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v6 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v6 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWMask1))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v7 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v7 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v7 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__data_0__DOT__ram__v7 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1;
            }
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_1_exceptionInfo_eSubCode 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_1_exceptionInfo_eSubCode;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_1_exceptionInfo_eCode 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_1_exceptionInfo_eCode;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_0_exceptionInfo_eSubCode 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_0_exceptionInfo_eSubCode;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_0_exceptionInfo_eCode 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_0_exceptionInfo_eCode;
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11))
                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9))
                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l335) {
            if ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_15_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_14_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x2000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_13_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_0_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_2_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_1_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_20_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_12_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_18_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_16_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x40U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_6_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_5_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x10U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_4_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_3_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x400000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_22_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x200000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_21_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_19_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x200000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_21_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_7_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_10_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_8_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_25_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_24_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_9_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_17_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_11_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_3_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_23_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_24_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x4000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_26_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x8000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_27_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_1_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_2_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_20_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x10000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_28_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x20000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_29_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_30_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20 
                 >> 0x1fU)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_31_1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1;
            }
            if ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_0_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x10U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_4_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_5_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x40U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_6_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_7_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_8_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_9_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_10_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_11_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_12_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x2000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_13_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_14_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_15_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_16_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_17_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_18_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_19_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x400000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_22_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_23_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_25_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x4000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_26_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x8000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_27_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x10000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_28_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x20000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_29_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_30_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
            if ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20 
                 >> 0x1fU)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_31_2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2;
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_15_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_14_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_13_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_0_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_2_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_1_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_20_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_12_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_18_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_16_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_6_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_5_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_4_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_3_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_22_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_21_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_19_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_21_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_7_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_10_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_8_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_25_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_24_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_9_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_17_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_11_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_3_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_23_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_24_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_26_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_27_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_1_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_2_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_20_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_28_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_29_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_30_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_31_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_0_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_4_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_5_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_6_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_7_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_8_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_9_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_10_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_11_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_12_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_13_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_14_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_15_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_16_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_17_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_18_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_19_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_22_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_23_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_25_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_26_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_27_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_28_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_29_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_30_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_31_2 = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU_io_output_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueDIVU_io_output_rData_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT___zz_issueEntry_imm;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU_io_output_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueMULU_io_output_rData_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT___zz_issueEntry_imm;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU_io_output_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueMULU_io_output_rData_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT___zz_issueEntry_psrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueMULU_io_output_rData_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT___zz_issueEntry_psrc_1;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read)
                                        ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 2U)))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0 
            = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0) 
                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchNum)));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1 
            = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1) 
                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchNum)));
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1 = 1U;
    }
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read)
                ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))
                         ? 1U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                    >> 3U))));
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l335) {
            if ((0x8000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_27_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x4000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_26_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_25_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_23_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x200000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_21_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_20_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_18_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x2000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_13_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_9_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_8_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_5_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x10U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_4_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_3_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_0_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_15_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_14_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_11_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_10_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x40U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_6_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_30_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20 
                 >> 0x1fU)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_31_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x10000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_28_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_2_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_7_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x20000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_29_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_24_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_19_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_1_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_12_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_16_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_17_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
            if ((0x400000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_22_0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0;
            }
        }
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
            = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read))
                ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))
                         ? 1U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))));
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_27_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_26_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_25_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_23_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_21_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_20_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_18_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_13_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_9_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_8_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_5_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_4_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_3_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_0_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_15_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_14_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_11_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_10_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_6_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_30_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_31_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_28_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_2_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_7_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_29_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_24_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_19_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_1_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_12_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_16_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_17_0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__lruBit_22_0 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d))))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                       >> 1U) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d)))))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_rData_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT___zz_issueEntry_psrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_rData_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT___zz_issueEntry_psrc_0;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_awsize;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 8U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_awsize;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 8U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 0xbU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 0xbU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen = 0xfU;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen = 0xfU;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                               >> 4U)));
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count)));
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3)))
                ? vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2
                : ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer));
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 
            = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write) 
                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read) 
                   & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))
                         ? 1U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                    >> 1U))));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 1U;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 
            = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_1_exceptionInfo_exception 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_1_exceptionInfo_exception;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_0_exceptionInfo_exception 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_0_exceptionInfo_exception;
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roDIVU_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roDIVU_io_toFU_rData_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueDIVU_io_output_rData_pc;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number 
            = (3U & ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                      ? ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                          ? ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? 0U : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                       ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                          >> 0x12U)
                                       : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                          >> 0x11U)))
                          : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x10U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0xfU))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0xeU) : 0U)))
                      : ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                          ? ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x15U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x14U))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x13U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x13U)))
                          : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x13U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x12U))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x11U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x10U))))));
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_valid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roLSU_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rData_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_rData_pc;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_srcReady_1));
    if (vlSelf->aresetn) {
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_psrc_0;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_psrc_0;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_psrc_1;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_psrc_1;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bready))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (4U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol 
                = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                         >> 6U));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared 
                = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                         >> 7U));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_srcReady_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_srcReady_0;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_prd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_0 = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    if (vlSelf->aresetn) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xf0U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr) 
                                   | ((3U | ((8U & 
                                              ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)) 
                                               << 3U)) 
                                             | (4U 
                                                & ((~ 
                                                    (0x7fffffffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))) 
                                                   << 2U)))) 
                                      ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals))))));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((0x80U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                              ? ((0xcU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          << 2U)) | 
                                 ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 1U)) | 
                                  (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 3U)))) : 
                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                              << 1U)) << 7U)) | ((0x40U 
                                                  & (((0x10U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                                       ? 
                                                      ((0xcU 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                              >> 1U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                                >> 3U))))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                       << 1U)) 
                                                     << 5U)) 
                                                 | ((0x20U 
                                                     & (((0x10U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                                          ? 
                                                         ((0xcU 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                                 >> 1U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                                   >> 3U))))
                                                          : 
                                                         ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                          << 1U)) 
                                                        << 3U)) 
                                                    | (0x10U 
                                                       & (((0x10U 
                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                                            ? 
                                                           ((0xcU 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                                   >> 1U)) 
                                                               | (1U 
                                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                                     >> 3U))))
                                                            : 
                                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                            << 1U)) 
                                                          << 1U))))));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__block_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__block_1;
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__io_input_fire) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__block_1 = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__when_DIVU_l26) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__block_1 = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuDIVU__DOT__block_1 = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__dispatchInfoOut_0_asrc_1 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchInfoOut_0_asrc_1;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__dispatchInfoOut_0_asrc_0 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchInfoOut_0_asrc_0;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag))))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
        if ((1U & (~ (IData)(vlSelf->aresetn)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = 0ULL;
        }
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = 0x14U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = 4U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = 0x12345678U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = 4U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
    } else if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1bU;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                    }
                } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1aU;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                      & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                     & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                            & (0xd0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                        = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                           - (IData)(1U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                             & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                            & (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                            & (0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)))) {
                    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                               & ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL)))))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
                    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                                & (0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                ? ((0x3ff0003fffULL 
                                    & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                   | ((QData)((IData)(
                                                      (0x3fffU 
                                                       & ((IData)(1U) 
                                                          + (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                     >> 0xeU)))))) 
                                      << 0xeU)) : (
                                                   (((1U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 8U))) 
                                                     | (2U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                            >> 8U)))) 
                                                    | (3U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                           >> 8U))))
                                                    ? 
                                                   ((0x30003fffffULL 
                                                     & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                    | ((QData)((IData)(
                                                                       (0x3fffU 
                                                                        & ((IData)(1U) 
                                                                           + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                       << 0x16U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 8U)))
                                                     ? 
                                                    ((0x3c003fffffULL 
                                                      & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                     | ((QData)((IData)(
                                                                        (0xfffU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                        << 0x16U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 8U)))
                                                      ? 
                                                     ((0x3c00ffffffULL 
                                                       & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                      | ((QData)((IData)(
                                                                         (0x3ffU 
                                                                          & ((IData)(1U) 
                                                                             + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x18U)))))) 
                                                         << 0x18U))
                                                      : 
                                                     ((0x3001ffffffULL 
                                                       & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                      | ((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & ((IData)(1U) 
                                                                             + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x19U)))))) 
                                                         << 0x19U))))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x19U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x18U;
            }
        } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if (((0xaU != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                         & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                            = (((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                  | (0xaU == (0xfU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                 | (0xbU == (0xfU & 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U)))) 
                                | (0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))))
                                ? 2U : 3U);
                    } else if (((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xd0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                & (0xd0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                                ? 0x17U : 0x18U);
                    }
                } else if ((0x15U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x16U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     >= (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                } else if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
                } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    }
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x15U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                }
            } else if (((0xaU != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                    = (7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xcU));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 1U;
            } else if ((0x70U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                         > (0xffU & (((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                                     - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                        - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                    } else if ((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                        - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                            = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM) 
                                     - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffffff00ULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffff00ffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffff00ffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffff00ffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xff00ffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        }
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x16U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x12U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x12U;
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT))) {
                if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) 
                              & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                             & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                               < (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                                             - (IData)(4U)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
                }
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                      > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                            = ((4U <= vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                   - (IData)(4U)) : 0U);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                            = (0x3fffU & ((4U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT)
                                           : ((IData)(4U) 
                                              + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                    }
                }
            } else if (((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x10U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                        ? 0x11U : 0x12U);
            } else if (((0x12U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                     & (0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x13U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            }
        } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                    & (0x80U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
        } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                = ((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                     >> 8U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                     >> 8U)))) 
                    | (0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                        >> 8U)))) ? 3U
                    : ((((0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 8U))) | 
                         (0xcU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 8U)))) 
                        | (0xdU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 8U))))
                        ? 4U : 5U));
        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
            if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                  >> 9U)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0x7fffffU 
                                               & ((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U)))
                                                   : 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                    ? (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U)))))))) 
                              << 8U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)(((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0x7fffffU 
                                               & ((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U)))
                                                   : 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                    ? (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U)))))))) 
                              << 8U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)(((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            } else if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xdU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xdU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffe000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xcU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x1fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x1fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = ((0x3ffffff000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                       | (IData)((IData)(((IData)((0x200U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                          << 0xbU))));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                       | ((QData)((IData)((0xfffffU 
                                           & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                         >> 0x10U)))))) 
                          << 0x10U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                    = (0x3fffU & ((IData)((0x300U == 
                                           (0x300U 
                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                       > ((0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0x10U)) 
                                          - (0xfffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                       ? ((0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0x10U)) 
                                          - (0xfffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                       : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                   : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x7ffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x7ffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
            }
        }
    } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            } else if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            > (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                        - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                             < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                            & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(2U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0xaU;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        }
    } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                          != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT)) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)))) {
                        if ((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                         & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                                        & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                          < (0x3fffU 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(4U)))))) 
                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))) {
                            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 == (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(1U))))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
                            }
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                        }
                        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                              > (0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                             - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                        } else if (((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                        } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 != (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(1U))))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                    = (0x3fffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count)));
                            }
                            if ((0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                       - (IData)(1U));
                            }
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                            if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffffff00U 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffff00ffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xff00ffffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                            }
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        if ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                        }
                    }
                } else if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 7U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        if ((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                      >> 9U)))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                = (0x3fffffff00ULL 
                                   & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                = ((0x3f800000ffULL 
                                    & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                   | ((QData)((IData)(
                                                      (0x7fffffU 
                                                       & ((IData)(
                                                                  (0x200U 
                                                                   == 
                                                                   (0x300U 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                      >> 8U)))
                                                           : 
                                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                            ? (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U))
                                                            : 
                                                           ((IData)(1U) 
                                                            + (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U)))))))) 
                                      << 8U));
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                = (0x3fffU & ((IData)(
                                                      ((0x300U 
                                                        == 
                                                        (0x300U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                   ? 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x10U) 
                                                     - 
                                                     (0xfU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                   : 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x100U) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                        }
                    } else if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xdU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x1fffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xdU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x1fffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffe000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xcU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3ffffff000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xbU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0xfffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0xfffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7ffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7ffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                    ? 6U : 4U);
        }
    } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                  & (0x30U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                 | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                       >> 0xbU)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                        ? 3U : 4U);
            } else if (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x30U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x30U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                    = ((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 8U))) | 
                         (0xaU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 8U)))) 
                        | (0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 8U))))
                        ? 3U : ((((0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                  | (0xcU == (0xfU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                 | (0xdU == (0xfU & 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U))))
                                 ? 4U : 5U));
            }
        } else if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                 > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                            - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                        > (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                    - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                        >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                         < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                             - (IData)(1U)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(2U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 2U;
        }
    } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
             == (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                    == ((0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                        - (IData)(1U)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     < (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                       > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     <= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
            if (((IData)((0U != (6U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                 & (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                     | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                    | (0x50U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                        ? 3U : 0x10U);
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                         >> 2U) & (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x10U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if ((0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                        >> 8U));
        if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            }
            if ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
            if ((IData)((((((0x202U == (0x202U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xbU)) & ((~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                              >> 8U)) 
                                          | (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                               >> 8U) 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                         >> 8U))) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 1U) & (IData)((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                              >> 8U))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xbU)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                    = (IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)));
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((IData)((((((0x204U == (0x204U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                                 & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                    >> 0xbU)) & ((~ 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                   >> 8U)) 
                                                 | (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                      >> 8U) 
                                                     & (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                >> 8U))) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                            >> 0xbU)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                 >> 8U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                    = (IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)));
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                            >> 0xbU)) & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                    >> 8U))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
                    = (1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                             >> 4U));
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x90U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 6U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xffU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 7U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((((((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                               | (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                              | (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                             | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                            | (0x50U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                           | (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                          | (0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                         | (0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                    = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
                if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                }
            }
        } else {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)))) {
                if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0x3fffffffffULL;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                }
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                         & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__missBuffer_0 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__missBuffer_1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_wayDirty 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_stage1Out_payload_wayDirty_9) 
                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_stage1Out_payload_wayDirty_6) 
                           << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_stage1Out_payload_wayDirty_3) 
                                      << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_stage1Out_payload_wayDirty))));
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
                     & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr 
                    = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                             >> 6U));
            }
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = 3U;
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictResult;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictResult;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictResult;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictResult;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictResult;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictResult;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictResult;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictResult;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictPC;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictPC;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictPC;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictPC;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eSubCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eSubCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictResult;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictResult;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictResult;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictResult;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_pc;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_pc;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictPC;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictPC;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictPC;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictPC;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictPC;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictPC;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictResult;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictResult;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictResult;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_branchInfo_predictResult 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictResult;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictPC;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictPC;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictPC;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictPC;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_branchInfo_predictPC;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_branchInfo_predictPC 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_branchInfo_predictPC;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eSubCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eSubCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eSubCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eSubCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eSubCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eSubCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eSubCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eSubCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eSubCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eSubCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eSubCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eSubCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_eSubCode;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_eSubCode;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_pc;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_pc;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_pc;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_pc;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_pc;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_pc;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_pc;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_pc;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_pc;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_pc;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_pc;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_pc;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_pc;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_pc;
        }
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = 0U;
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1;
        }
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roDIVU_io_toFU_ready) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roDIVU_io_toFU_rValid 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueDIVU_io_output_rValid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roDIVU_io_toFU_rValid = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r 
        = ((IData)(vlSelf->aresetn) & (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset))
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d))))));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bready))))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 0U;
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
                & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 1U;
    }
    if (vlSelf->aresetn) {
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
             & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_src2 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_src2;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_src1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_src1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_uop_muluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_uop_muluOp;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_out_arsize;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 8U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_out_arsize;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 8U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_out_arburst;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 0xbU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_out_arburst;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 0xbU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_out_arlen));
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_out_arlen));
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsException 
            = (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rData_exceptionInfo_exception)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU1_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_pc;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU0_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_pc;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU1_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_uop_bruOp;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU0_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_uop_bruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_uop_bruOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_uop_cruOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_uop_cruOp;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l292) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_ll 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_ll;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_signed 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_signed;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_ll = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_signed = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU1_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_uop_aluOp;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU0_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_uop_aluOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_uop_aluOp;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l292) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_load 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_load;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_load = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0 
            = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0) 
                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_fetchNum)));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1 
            = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1) 
                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_fetchNum)));
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1 = 1U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_out_araddr;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                       >> 0xdU));
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_valid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_payload_valid;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rData_exceptionInfo_exception) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_exceptionInfo_eSubCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rData_exceptionInfo_eSubCode;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_exceptionInfo_eCode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rData_exceptionInfo_eCode;
        } else {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_exceptionInfo_eSubCode = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_exceptionInfo_eCode = 9U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU1_io_toFU_ready) {
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src3 
                = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))
                    ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_imm 
                       << 2U) : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))
                                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_imm 
                                     << 2U) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_imm 
                                               << 2U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src4 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_pc;
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU1__DOT__reg2;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src4 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU1__DOT__reg1;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_imm;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src4 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_pc;
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src3 
                = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_imm
                    : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_imm 
                       << 2U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src4 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_pc;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU0_io_toFU_ready) {
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src4 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_pc;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src3 
                = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))
                    ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_imm 
                       << 2U) : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))
                                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_imm 
                                     << 2U) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_imm 
                                               << 2U)));
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src4 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU0__DOT__reg1;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU0__DOT__reg2;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src4 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_pc;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_imm;
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src4 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_pc;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src3 
                = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_imm
                    : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_imm 
                       << 2U));
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU1_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_src2 
            = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))
                ? 4U : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))
                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_imm
                         : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_roop_aluROOp))
                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_imm
                             : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU1__DOT__reg2)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU0_io_toFU_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_src1 
            = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_pc
                : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))
                    ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_roop_aluROOp))
                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_csr_io_swRead_value
                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_pc)
                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roALU0__DOT__reg1));
    }
    if (vlSelf->aresetn) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r 
            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d)))));
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l292) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_prd 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_prd;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_prd = 0U;
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_3_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_data_7;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_3_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_3_1__DOT__mem_reg__v0 
                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                            >> 6U));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_3__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_data_7;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_3__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_3__DOT__mem_reg__v0 
                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                            >> 6U));
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_1) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_1) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_2_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_data_6;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_2_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_2_1__DOT__mem_reg__v0 
                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                            >> 6U));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_2__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_data_6;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_2__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_2__DOT__mem_reg__v0 
                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                            >> 6U));
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_2) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_2) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_1_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_data_5;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_1_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_1_1__DOT__mem_reg__v0 
                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                            >> 6U));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_data_5;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_1__DOT__mem_reg__v0 
                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                            >> 6U));
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_3) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_3) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_0_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_data_4;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_0_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_0_1__DOT__mem_reg__v0 
                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                            >> 6U));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_0__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_data_4;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_0__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__tag_0__DOT__mem_reg__v0 
                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                            >> 6U));
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_4) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_4) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3_1__DOT__mem_reg__v0 
                = (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                             >> 2U));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3__DOT__mem_reg__v0 
                = (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                             >> 2U));
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_5) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_5) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2_1__DOT__mem_reg__v0 
                = (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                             >> 2U));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2__DOT__mem_reg__v0 
                = (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                             >> 2U));
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_6) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_6) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1_1__DOT__mem_reg__v0 
                = (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                             >> 2U));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1__DOT__mem_reg__v0 
                = (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                             >> 2U));
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_7) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_7) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0_1__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0_1__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0_1__DOT__mem_reg__v0 
                = (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                             >> 2U));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0__DOT__mem_reg__v0 
                = (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr 
                             >> 2U));
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_0 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_0) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_0 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_1 = 0U;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_1 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_1) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask) 
                       >> 1U))));
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_0_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_4_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_6_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_5_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_2_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_3_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_1_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception;
        }
    }
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))) {
        if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__queue_7_exceptionInfo_exception 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_wayValid_1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_stage1Out_payload_wayValid_1_6) 
                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_stage1Out_payload_wayValid_1_4) 
                           << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_stage1Out_payload_wayValid_1_2) 
                                      << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_stage1Out_payload_wayValid_1))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_wayValid_0 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_stage1Out_payload_wayValid_0_9) 
                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_stage1Out_payload_wayValid_0_6) 
                           << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_stage1Out_payload_wayValid_0_3) 
                                      << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_stage1Out_payload_wayValid_0))));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roLSU_io_toFU_ready) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rValid 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_rValid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rValid = 0U;
    }
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
            = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)))) 
               & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma) 
                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu))) 
                  | ((~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) 
                     & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_1_inst 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_1_inst_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_0_inst 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_0_inst_1;
        if ((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc) 
                   | (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc))))))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                               - (IData)(1U)) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle)));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next;
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc) 
                              - (IData)(1U)));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                             ? ((IData)(0x16U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value))
                             : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value)));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_1_inst 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_1_inst_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__infoOut_0_inst 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_infoOut_0_inst_1;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_7 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & ((~ (((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1)) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                      >> 1U)) | ((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)))) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_7) 
                 | (((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                        >> 1U)) | ((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_6 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & ((~ (((6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1)) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                      >> 1U)) | ((6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)))) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_6) 
                 | (((6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                        >> 1U)) | ((6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_3 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & ((~ (((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1)) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                      >> 1U)) | ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)))) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_3) 
                 | (((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                        >> 1U)) | ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_5 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & ((~ (((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1)) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                      >> 1U)) | ((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)))) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_5) 
                 | (((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                        >> 1U)) | ((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & ((~ (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1)) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                      >> 1U)) | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)))) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_0) 
                 | (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                        >> 1U)) | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & ((~ (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1)) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                      >> 1U)) | ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)))) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_1) 
                 | (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                        >> 1U)) | ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & ((~ (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1)) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                      >> 1U)) | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)))) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_2) 
                 | (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                        >> 1U)) | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_4 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & ((~ (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_1)) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                      >> 1U)) | ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__head_0)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)))) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__valid_4) 
                 | (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_1)) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                        >> 1U)) | ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__tail_0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_isStoreTag 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__iCacheStoreTag;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_isIndexInvalidate 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__iCacheIndexInvalidate;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_isHitInvalidate 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__iCacheHitInvalidate;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_srcReady_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_srcReady_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_srcReady_1));
    if (vlSelf->aresetn) {
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
              & (1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                 == (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg) 
                              >> 1U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 1U;
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
        }
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__dispatchInfoOut_1_asrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchInfoOut_1_asrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__dispatchInfoOut_1_asrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchInfoOut_1_asrc_1;
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__when_MEMService_l26) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__opBuffer_asid 
                = (0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rData_src1);
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__dispatchInfoOut_1_asrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchInfoOut_1_asrc_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT__dispatchInfoOut_1_asrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchInfoOut_1_asrc_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__opBuffer_asid = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_isStoreTag 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__dCacheStoreTag;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l267) {
            if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_1_prevDirty 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_prevDirty;
            }
            if ((1U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_0_prevDirty 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_prevDirty;
            }
            if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_2_prevDirty 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_prevDirty;
            }
            if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_3_prevDirty 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_prevDirty;
            }
            if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_4_prevDirty 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_prevDirty;
            }
            if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_5_prevDirty 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_prevDirty;
            }
            if ((0x40U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_6_prevDirty 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_prevDirty;
            }
            if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_7_prevDirty 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_prevDirty;
            }
            if ((0x10U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_4_waySelect 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_waySelect;
            }
            if ((8U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_3_waySelect 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_waySelect;
            }
            if ((4U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_2_waySelect 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_waySelect;
            }
            if ((2U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_1_waySelect 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_waySelect;
            }
            if ((0x80U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_7_waySelect 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_waySelect;
            }
            if ((0x20U & ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferTail)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_5_waySelect 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_writeBuffer_0_waySelect;
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_1_prevDirty = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_0_prevDirty = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_2_prevDirty = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_3_prevDirty = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_4_prevDirty = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_5_prevDirty = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_6_prevDirty = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_7_prevDirty = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_4_waySelect = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_3_waySelect = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_2_waySelect = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_1_waySelect = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_7_waySelect = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBuffer_5_waySelect = 0U;
    }
}
