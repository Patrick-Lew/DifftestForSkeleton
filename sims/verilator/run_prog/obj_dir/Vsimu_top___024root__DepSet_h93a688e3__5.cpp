// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vsimu_top__ConstPool__TABLE_hb5679b3a_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vsimu_top__ConstPool__TABLE_h75b89ad4_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsimu_top__ConstPool__TABLE_h85f884b8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsimu_top__ConstPool__TABLE_hb8badf5e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsimu_top__ConstPool__TABLE_h8716a3d8_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsimu_top__ConstPool__TABLE_h1ea79695_0;
extern const VlUnpacked<VlWide<3>/*71:0*/, 8> Vsimu_top__ConstPool__TABLE_h8bd020b9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsimu_top__ConstPool__TABLE_h98fe88d5_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vsimu_top__ConstPool__TABLE_hdd1a9b56_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 8> Vsimu_top__ConstPool__TABLE_hcacf5fd1_0;
extern const VlUnpacked<QData/*55:0*/, 16> Vsimu_top__ConstPool__TABLE_h505b1bcc_0;

VL_INLINE_OPT void Vsimu_top___024root___combo__TOP__20(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___combo__TOP__20\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portRen1_0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portWen1_0;
    CData/*4:0*/ simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1;
    CData/*4:0*/ simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0;
    CData/*2:0*/ __Vtableidx32;
    CData/*5:0*/ __Vtableidx34;
    SData/*10:0*/ __Vtableidx37;
    CData/*4:0*/ __Vtableidx38;
    CData/*4:0*/ __Vtableidx39;
    CData/*4:0*/ __Vtableidx40;
    CData/*4:0*/ __Vtableidx41;
    CData/*6:0*/ __Vtableidx42;
    CData/*2:0*/ __Vtableidx50;
    CData/*7:0*/ __Vtableidx55;
    CData/*6:0*/ __Vtableidx60;
    CData/*5:0*/ __Vtableidx62;
    CData/*3:0*/ __Vtableidx124;
    CData/*3:0*/ __Vtableidx216;
    CData/*3:0*/ __Vtableidx226;
    CData/*3:0*/ __Vtableidx227;
    CData/*3:0*/ __Vtableidx228;
    CData/*3:0*/ __Vtableidx229;
    CData/*3:0*/ __Vtableidx230;
    SData/*9:0*/ __Vtableidx244;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlSelf->ram_rdata;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
    vlSelf->simu_top__DOT__soc__DOT__m0_bready = (1U 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 2U) 
                                                     | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
                                                   & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                       >> 3U) 
                                                      | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp 
        = (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
            & (0xeU == (IData)(vlSelf->btn_key_row)))
            ? 1U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                     & (0xdU == (IData)(vlSelf->btn_key_row)))
                     ? 0x10U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                 & (0xbU == (IData)(vlSelf->btn_key_row)))
                                 ? 0x100U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                              & (7U 
                                                 == (IData)(vlSelf->btn_key_row)))
                                              ? 0x1000U
                                              : (((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                  & (0xeU 
                                                     == (IData)(vlSelf->btn_key_row)))
                                                  ? 2U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                   & (0xdU 
                                                      == (IData)(vlSelf->btn_key_row)))
                                                   ? 0x20U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                    & (0xbU 
                                                       == (IData)(vlSelf->btn_key_row)))
                                                    ? 0x200U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlSelf->btn_key_row)))
                                                     ? 0x2000U
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                      & (0xeU 
                                                         == (IData)(vlSelf->btn_key_row)))
                                                      ? 4U
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                       & (0xdU 
                                                          == (IData)(vlSelf->btn_key_row)))
                                                       ? 0x40U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                        & (0xbU 
                                                           == (IData)(vlSelf->btn_key_row)))
                                                        ? 0x400U
                                                        : 
                                                       (((3U 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                         & (7U 
                                                            == (IData)(vlSelf->btn_key_row)))
                                                         ? 0x4000U
                                                         : 
                                                        (((4U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                          & (0xeU 
                                                             == (IData)(vlSelf->btn_key_row)))
                                                          ? 8U
                                                          : 
                                                         (((4U 
                                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                           & (0xdU 
                                                              == (IData)(vlSelf->btn_key_row)))
                                                           ? 0x80U
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                            & (0xbU 
                                                               == (IData)(vlSelf->btn_key_row)))
                                                            ? 0x800U
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                             & (7U 
                                                                == (IData)(vlSelf->btn_key_row)))
                                                             ? 0x8000U
                                                             : 0U))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
            ? ((IData)(((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                         >> 0x13U) & (~ (IData)((0xfU 
                                                 == (IData)(vlSelf->btn_key_row))))))
                ? 1U : 0U) : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                               ? ((0xfU == (IData)(vlSelf->btn_key_row))
                                   ? 2U : 7U) : ((2U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                  ? 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->btn_key_row))
                                                   ? 3U
                                                   : 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->btn_key_row))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->btn_key_row))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                     ? 
                                                    (((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                                       >> 0x13U) 
                                                      & (0xfU 
                                                         == (IData)(vlSelf->btn_key_row)))
                                                      ? 0U
                                                      : 7U)
                                                     : 0U))))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlSelf->aresetn));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlSelf->aresetn));
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_awvalid) 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                                      | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid)
                                                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid)
                                                     : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_arvalid)) 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                                      | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wvalid) 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                                     | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__m0_rready = ((
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid))
                                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_rready)
                                                    : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready)) 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 3U) 
                                                     | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__cpu_wready = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                                      | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__cpu_arready = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
            | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_newReset 
        = ((IData)(vlSelf->aresetn) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)));
    vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [2U];
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
    }
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1) 
                  << 1U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1) 
                  << 2U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1) 
                  << 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6b0a6e8b__1) 
                  << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid) 
           & (1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_dCache_rvalid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid) 
           & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid)));
    vlSelf->ram_wen = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb) 
                       & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb) 
           & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hed3c57db__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h0a0be960__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h3999def9__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1) 
                  << 1U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1) 
                  << 2U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1) 
                  << 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hd5a052b4__1) 
                  << 4U));
    }
    simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portRen1_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wready) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l539 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite 
        = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite) 
           | (0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferLSMask) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_store))
                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWData
                        : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite 
        = ((0xffff00ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite) 
           | (0xff00U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferLSMask) 
                            >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_store))
                           ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWData 
                              >> 8U) : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                        >> 8U)) << 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite 
        = ((0xff00ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite) 
           | (0xff0000U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferLSMask) 
                              >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_store))
                             ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWData 
                                >> 0x10U) : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite 
        = ((0xffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferLSMask) 
                 >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_store))
                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWData 
                   >> 0x18U) : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                >> 0x18U)) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData 
        = ((0x1fU >= (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_vaddr))
            ? (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
               >> (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_vaddr))
            : 0U);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_3 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask)) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready)) 
              & ((0x7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr) 
                 == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_pc_0))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask)) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready)) 
               & ((0x7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__transferAddr) 
                  == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_pc_1))) 
              << 1U));
    __Vtableidx62 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_rready) 
                      << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_dCache_rvalid) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_store) 
                                            << 3U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferUpdate 
        = Vsimu_top__ConstPool__TABLE_hb5679b3a_0[__Vtableidx62];
    simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portWen1_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_dCache_rvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_rready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l510 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_dCache_rvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_rready));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xe000U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xff10U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                  >> 3U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                     >> 2U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                  >> 3U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
               >> 3U) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))));
    __Vtableidx244 = ((0xfffffe00U & (((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                        << 9U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                  << 7U)) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                          << 9U) & 
                                         ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          << 7U)))) 
                      | ((0x100U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                    << 8U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                                                << 7U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                                   << 6U) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                            << 2U)) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = Vsimu_top__ConstPool__TABLE_h75b89ad4_0[__Vtableidx244];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData 
            >> 7U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_signed));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_axiShuffle_1 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiShiftedData 
            >> 0xfU) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_signed));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)));
    __Vtableidx41 = ((0x10U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__replacingWay) 
                               << 4U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200) 
                                           << 3U) | 
                                          (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat)) 
                                            << 2U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateReg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_7 
        = Vsimu_top__ConstPool__TABLE_h85f884b8_0[__Vtableidx41];
    __Vtableidx40 = ((0x10U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__replacingWay) 
                               << 3U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_1) 
                                           << 3U) | 
                                          (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat)) 
                                            << 2U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateReg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_6 
        = Vsimu_top__ConstPool__TABLE_h85f884b8_0[__Vtableidx40];
    __Vtableidx39 = ((0x10U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__replacingWay) 
                               << 2U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_2) 
                                           << 3U) | 
                                          (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat)) 
                                            << 2U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateReg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_5 
        = Vsimu_top__ConstPool__TABLE_h85f884b8_0[__Vtableidx39];
    __Vtableidx38 = ((0x10U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__replacingWay) 
                               << 1U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l200_3) 
                                           << 3U) | 
                                          (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat)) 
                                            << 2U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateReg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_4 
        = Vsimu_top__ConstPool__TABLE_h85f884b8_0[__Vtableidx38];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss)) 
           | (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_valid) 
                    & (~ ((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__hit_0)) 
                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception)) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_0)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss)) 
           | ((IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_valid) 
                        >> 1U) & (~ ((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__hit_1)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_1)) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask) 
                                        >> 1U))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask)) 
           | (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_valid) 
                    & (((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__hit_0)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_exceptionInfo_exception)) 
                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask)) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_0)) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask)) 
           | ((IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_valid) 
                        >> 1U) & (((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__hit_1)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_exceptionInfo_exception)) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask) 
                                       >> 1U)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_1)) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWData1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__refilling)
            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferUpdate)
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__mergedWrite
                : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_storeData);
    __Vtableidx55 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                      << 7U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l510) 
                                 << 6U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferUncached) 
                                            << 5U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wlast) 
                                               << 4U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l539) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiFinish 
        = Vsimu_top__ConstPool__TABLE_hb8badf5e_0[__Vtableidx55];
    __Vtableidx60 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l510) 
                      << 6U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferUncached) 
                                 << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wlast) 
                                            << 4U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l539) 
                                               << 3U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad 
        = Vsimu_top__ConstPool__TABLE_h8716a3d8_0[__Vtableidx60];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg;
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg))) {
        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg))) {
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg)))) {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l539) {
                    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_wlast) {
                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext 
                            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferUncached)
                                ? 1U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferCACOP)
                                         ? 1U : 2U));
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_awvalid) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                       | (~ (IData)(vlSelf->enable_delay)))))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext = 6U;
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l510) {
            if (vlSelf->simu_top__DOT__soc__DOT__m0_rlast) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg))) {
        if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l510) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext = 4U;
            }
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext 
                = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_valid) 
                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)))
                    ? 3U : 4U);
        }
    } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg))) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l436) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext 
                = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_uncached) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_store)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_writeBack))
                    ? 5U : 2U);
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l453) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext = 5U;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_wantStart) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext = 1U;
    }
    vlSelf->write_uart_valid = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->ram_ren = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__missAddr 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_pc_0
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_pc_1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_0_inst 
        = ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_0) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask)))
            ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask))
                ? vlSelf->simu_top__DOT__soc__DOT__m0_rdata
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__missBuffer_0)
            : ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_portData_0_inst_4))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0_rd_data
                : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_portData_0_inst_4))
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1_rd_data
                    : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_portData_0_inst_4))
                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2_rd_data
                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3_rd_data))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_1_inst 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fetchMask_1) 
             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss) 
                >> 1U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask) 
                           >> 1U)) ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__bufWriteMask))
                                       ? vlSelf->simu_top__DOT__soc__DOT__m0_rdata
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__missBuffer_1)
            : ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_portData_1_inst_4))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_0_1_rd_data
                : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_portData_1_inst_4))
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_1_1_rd_data
                    : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_portData_1_inst_4))
                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_2_1_rd_data
                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__data_3_1_rd_data))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_ctrl_busy 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__refilling) 
            | ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid) 
              & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_isHitInvalidate) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_isIndexInvalidate)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_isStoreTag))));
    __Vtableidx42 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_wantStart) 
                      << 6U) | (((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))) 
                                 << 5U) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_arbiter_io_iCache_rvalid) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_rready))) 
                                            << 4U) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_axi_arvalid) 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_axi_arvalid)))) 
                                               << 3U) 
                                              | (((((0U 
                                                     != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__miss)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateReg))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext 
        = Vsimu_top__ConstPool__TABLE_h1ea79695_0[__Vtableidx42];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask 
        = (((2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_allowMask_1)) 
                   << 1U)) | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_allowMask)))) 
           & ((((IData)((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask))) 
                << 1U) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__availMask))) 
              >> ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                   ? 0U : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                            ? 1U : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                                     ? 1U : 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_prd)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_prd));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_20 
        = ((IData)(1U) << (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_vaddr 
                                        >> 6U) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_vaddr 
                                                  >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_53 
        = ((IData)(1U) << (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferRAddr 
                                        >> 6U) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_vaddr 
                                                  >> 6U))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0 
            = (0U != (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                            >> 2U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                     >> 1U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                     >> 3U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l341 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l341_1 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                     >> 1U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l341_2 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                     >> 2U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l341_3 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
                     >> 3U));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_0 
            = (0U != (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                            >> 2U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_1 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                     >> 1U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_lruBit_0_2 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                     >> 3U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l341 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l341_1 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                     >> 1U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l341_2 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                     >> 2U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l341_3 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                     >> 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid 
        = ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateReg)) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rValid) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad))) 
                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_load) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_sc))) 
               & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit))) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__cacopActive))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad) 
           | (((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_exception)) 
                | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_normalMemOp))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rValid)) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__cacopActive))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__noStructuralHazard 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)) 
                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__miss)) 
                     | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_valid)))) 
                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_store)) 
                    | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz___05Fzz_writeBufferAvail)))));
    __Vtableidx50 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext_string[0U] 
        = Vsimu_top__ConstPool__TABLE_h8bd020b9_0[__Vtableidx50][0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext_string[1U] 
        = Vsimu_top__ConstPool__TABLE_h8bd020b9_0[__Vtableidx50][1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiCtrl_stateNext_string[2U] 
        = Vsimu_top__ConstPool__TABLE_h8bd020b9_0[__Vtableidx50][2U];
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_0_inst_1 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz___05Fzz_io_output_info_0_inst_1))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_1_inst
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_0_inst);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_io_output_info_1_inst_1 
        = ((1U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz___05Fzz_io_output_info_0_inst_1)))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_1_inst
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__portData_0_inst);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__when_MEMService_l113 
        = (1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_ctrl_busy) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_ctrl_busy))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_StateMachine_l253 
        = ((2U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateReg)) 
           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_StateMachine_l253_1 
        = ((3U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateReg)) 
           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__fsm_stateNext)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_fetchNum 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))
            ? 0U : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))
                     ? 1U : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask))
                              ? 1U : 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_acceptMask 
        = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_in_allowMask) 
                 << ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                      ? 0U : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                               ? 1U : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask))
                                        ? 1U : 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0 
        = ((((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__muluReq_ohFirst_masked))
              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_0_valid)
              : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_0)) 
            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_0) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_0) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_0) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_0) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_0) 
                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_0) 
               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1 
        = ((((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__muluReq_ohFirst_masked))
              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_1_valid)
              : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_1)) 
            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_1) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_1) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_1) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_1) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_1) 
                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_payload_psrc_1) 
               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0 
        = ((((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu0Sel))
              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_0_valid)
              : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_0)) 
            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                  | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_0) 
                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1 
        = ((((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu0Sel))
              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_1_valid)
              : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_1)) 
            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                  | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_payload_psrc_1) 
                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0 
        = ((((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu1Sel))
              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_0_valid)
              : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_0)) 
            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                  | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_0) 
                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1 
        = ((((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu1Sel))
              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_1_valid)
              : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_1)) 
            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                  | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire)))))))) 
              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_payload_psrc_1) 
                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__io_output_fire 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_ready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend 
        = ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_store) 
               & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rValid)) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_exception))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__noStructuralHazard)) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__cacopActive)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage2In_ready 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__noStructuralHazard) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush));
    __Vtableidx34 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__when_MEMService_l123) 
                      << 5U) | (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__opBuffer_op)) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__when_MEMService_l113) 
                                            << 3U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateReg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_willClear 
        = Vsimu_top__ConstPool__TABLE_h98fe88d5_0[__Vtableidx34];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en = 0U;
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_StateMachine_l253_1) {
        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat))) {
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__replacingWay))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en = 1U;
            }
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_1 = 0U;
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__replacingWay))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_1 = 1U;
            }
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_2 = 0U;
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__replacingWay))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_2 = 1U;
            }
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_3 = 0U;
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__replacingWay))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_3 = 1U;
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_1 = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_2 = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_3 = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_2 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_wr_en_3 = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l131 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_acceptMask) 
           & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__when_Cache_l131_1 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_acceptMask) 
            >> 1U) & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__acceptMask) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT___zz_acceptMask)) 
            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rData_valid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush));
    if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_rValid)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready = 1U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_srcReady_0 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_srcReady_0 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_0))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_srcReady_0 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_0))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_srcReady_0 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_0))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_srcReady_1 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_srcReady_1 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_1))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_srcReady_1 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_1))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_srcReady_1 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_srcReady_1))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_srcReady_0 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_srcReady_0 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_0))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_srcReady_0 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_0))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_srcReady_0 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_0))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_srcReady_1 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_srcReady_1 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_1))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_srcReady_1 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_1))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_srcReady_1 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_srcReady_1))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_srcReady_0 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_srcReady_0 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_0))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_srcReady_0 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_0))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_srcReady_0 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_0))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_srcReady_1 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_srcReady_1 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_1))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_srcReady_1 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_1))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_srcReady_1 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_srcReady_1))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l335 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__io_output_fire) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferUncached))
                : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_normalMemOp) 
                   & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat))))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_exception)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__dirtyUpdate 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__io_output_fire) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__axiLoad)
                ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferUncached)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__missBuffer_0_store))
                : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_lsCtrlBundle_store) 
                   & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rData_tlb_pageInfo_mat))))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__exceptionInfo_exception)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l267 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_0 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
            & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portWen1_0)) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__miss))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend)) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_1 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
             >> 1U) & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portWen1_0)) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                 >> 1U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__miss))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend)) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_2 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
             >> 2U) & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portWen1_0)) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                 >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__miss))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend)) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_3 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__transferWaySelect) 
             >> 3U) & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portWen1_0)) 
           | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__hit) 
                 >> 3U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__miss))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__writeBufferAppend)) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l292 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__miss) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage2In_ready)) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage2In_ready;
    if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_rValid)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready = 1U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_valueNext 
        = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_value) 
                 + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_willIncrement)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_willClear) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_valueNext = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_ready 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_ready;
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_ready = 1U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_0 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portRen1_0) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_0) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0) 
              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_1 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portRen1_0) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_1) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0) 
              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_2 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portRen1_0) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_2));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_2) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0) 
              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen1_3 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT___zz_portRen1_0) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_3));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__when_LSU_l174_3 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen1_3) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr0) 
              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portAddr1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_thrown_ready;
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready = 1U;
    }
    __Vtableidx37 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_wantStart) 
                      << 0xaU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_wakeupMem) 
                                   << 9U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__when_MEMService_l123) 
                                              << 8U) 
                                             | (((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__opBuffer_op)) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__when_MEMService_l113) 
                                                    << 6U) 
                                                   | ((0x20U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_ctrl_busy) 
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_ctrl_busy))) 
                                                          << 5U)) 
                                                      | (((3U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__invCounter_valueNext)) 
                                                          << 4U) 
                                                         | (((5U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__tlbOp_1)) 
                                                             << 3U) 
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateReg)))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext 
        = Vsimu_top__ConstPool__TABLE_hdd1a9b56_0[__Vtableidx37];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_0_ready 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_ready) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stall))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__allowMask)) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_1_ready 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_ready) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stall))) 
            & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__allowMask))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_2));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portRen0_3 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__portWen0_3));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_fire 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roLSU_io_toFU_ready 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stage1Out_ready) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU__DOT__stall))) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush));
    if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roLSU_io_toFU_rValid)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roLSU_io_toFU_ready = 1U;
    }
    __Vtableidx32 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext_string[0U] 
        = Vsimu_top__ConstPool__TABLE_hcacf5fd1_0[__Vtableidx32][0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext_string[1U] 
        = Vsimu_top__ConstPool__TABLE_hcacf5fd1_0[__Vtableidx32][1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_memService__DOT__fsm_stateNext_string[2U] 
        = Vsimu_top__ConstPool__TABLE_hcacf5fd1_0[__Vtableidx32][2U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__acceptMask 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_1_ready) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__valid_1)) 
            << 1U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_0_ready) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__valid_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_payload_valid 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_payload_valid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__valid_0) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_0_ready)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_payload_valid 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_payload_valid)) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__valid_1) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache_io_input_1_ready)) 
               & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__pc_1 
                   >> 0xbU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__pc_0 
                                >> 0xbU))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_roLSU_io_toFU_ready;
    if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_rValid)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready = 1U;
    }
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__acceptMask))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT___zz___05Fzz_branchInfo_0_predictPC = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT___zz___05Fzz_branchInfo_1_predictPC = 0U;
    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__acceptMask))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT___zz___05Fzz_branchInfo_0_predictPC = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT___zz___05Fzz_branchInfo_1_predictPC = 1U;
    } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT__acceptMask))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT___zz___05Fzz_branchInfo_0_predictPC = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT___zz___05Fzz_branchInfo_1_predictPC = 1U;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT___zz___05Fzz_branchInfo_0_predictPC = 2U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_pc__DOT___zz___05Fzz_branchInfo_1_predictPC = 2U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_valid 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_payload_valid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__cacopEn));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead 
        = ((0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__readyToIssue) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead 
        = ((0xdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead)) 
           | (((0U != (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__readyToIssue))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready)) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead 
        = ((0xbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead)) 
           | (((0U != (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__readyToIssue))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready)) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead 
        = ((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead)) 
           | (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__readyToIssue)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready)) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_input_ready 
        = ((0U != (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry))) 
           | ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__readyToIssue)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_output_ready)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_valid 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_valid;
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_flush) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_thrown_valid = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_fire 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_iCache__DOT__stage1Out_ready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_branchResult_branchResult 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead) 
               >> 3U)) & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                              >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_branchResult)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_branchResult_branchResult 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                   >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_branchResult))
            : ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_branchResult)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_branchResult_branchResult 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                   >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_branchResult))
            : ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                   >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_branchResult)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_branchResult_branchResult 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                   >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_branchResult))
            : ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                   >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_branchResult)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq)) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_out_availMask) 
               & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_io_out_dispatchInfo_0_fuType))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_input_ready)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq)) 
           | (0xfffffffeU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_out_availMask) 
                              & ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_io_out_dispatchInfo_1_fuType)) 
                                 << 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU_io_input_ready) 
                                            << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq) 
                 - (IData)(1U))));
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_0_io_roopLSU_lsuROOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__tail_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_io_out_info_0_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_io_out_info_0_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_0_io_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_0_io_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_0_io_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_io_out_info_0_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__freelistRdShuffle_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_0_io_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_0_io_uopLSU_lsuCoOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_0_io_uopLSU_lsuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_0_prd;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_1_prd;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_1_1_io_roopLSU_lsuROOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__tail_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_io_out_info_1_branchInfo_predictPC;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_io_out_info_1_branchInfo_predictResult;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_1_1_io_exceptionInfo_exception;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_1_1_io_exceptionInfo_eCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_1_1_io_exceptionInfo_eSubCode;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_io_out_info_1_pc;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__freelistRdShuffle_1;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_1_1_io_imm;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_1_1_io_uopLSU_lsuCoOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__decoder_1_1_io_uopLSU_lsuOp;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrc_1_0;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrc_1_1;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__resAvail 
        = ((((2U & (((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__needRd) 
                         >> 1U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_freeList_io_dispatch_availMask) 
                                    >> (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__needRd)))) 
                    << 1U)) | (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__needRd)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_freeList_io_dispatch_availMask)))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__stageReg_availROBMask)) 
           & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu0Sel) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu1Sel)) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__muluReq_ohFirst_masked)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__divuReq_ohFirst_masked)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_roop_lsuROOp 
        = (1U & ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
                  ? ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                         >> 4U)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp))
                  : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_roop_lsuROOp))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_roop_lsuROOp 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_roop_lsuROOp))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_roop_lsuROOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_roop_lsuROOp 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_roop_lsuROOp))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_roop_lsuROOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_roop_lsuROOp 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_roop_lsuROOp))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_roop_lsuROOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_roop_lsuROOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_robIdx 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                          : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_robIdx)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_robIdx 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_robIdx))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_robIdx)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_robIdx 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_robIdx))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_robIdx)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_robIdx 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_robIdx))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_robIdx)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_robIdx)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_branchResult_targetPC 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_targetPC));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_branchResult_targetPC 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_targetPC)
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_targetPC));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_branchResult_targetPC 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_targetPC)
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_targetPC));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_branchResult_targetPC 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_targetPC)
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_targetPC
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_targetPC));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_branchResult_predictFail 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_predictFail)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_branchResult_predictFail 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_predictFail))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_branchResult_predictFail)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_branchResult_predictFail 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_predictFail))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_branchResult_predictFail)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_branchResult_predictFail 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_branchResult_predictFail))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_branchResult_predictFail)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_branchResult_predictFail)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_exceptionInfo_exception 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_exception)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_exceptionInfo_exception 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_exception))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_exception)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_exceptionInfo_exception 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_exception))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_exception)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_exceptionInfo_exception 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_exception))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_exception)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_exception)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_exceptionInfo_eCode 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                          : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eCode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_exceptionInfo_eCode 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eCode))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eCode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_exceptionInfo_eCode 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eCode))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eCode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_exceptionInfo_eCode 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eCode))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eCode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_exceptionInfo_eSubCode 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eSubCode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_exceptionInfo_eSubCode 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eSubCode))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_exceptionInfo_eSubCode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_exceptionInfo_eSubCode 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eSubCode))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_exceptionInfo_eSubCode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_exceptionInfo_eSubCode 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_exceptionInfo_eSubCode))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_exceptionInfo_eSubCode)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_exceptionInfo_eSubCode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_pc 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_pc));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_pc 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_pc)
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_pc));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_pc 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_pc)
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_pc));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_pc 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_pc)
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_pc
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_pc));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_prd 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                          : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_prd)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_prd 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_prd))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_prd)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_prd 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_prd))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_prd)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_prd 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_prd))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_prd)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_prd)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_imm 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_imm));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_imm 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_imm)
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_imm));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_imm 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_imm)
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_imm));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_imm 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_imm)
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_imm
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_imm));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuCoOp 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                          : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuCoOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuCoOp 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuCoOp))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_uop_lsuCoOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuCoOp 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuCoOp))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuCoOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuCoOp 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuCoOp))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_uop_lsuCoOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuCoOp)));
    __Vtableidx124 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__io_lsuIQ_payload_uop_lsuOp_string 
        = Vsimu_top__ConstPool__TABLE_h505b1bcc_0[__Vtableidx124];
    __Vtableidx216 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__io_input_payload_uop_lsuOp_string 
        = Vsimu_top__ConstPool__TABLE_h505b1bcc_0[__Vtableidx216];
    __Vtableidx226 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_uop_lsuOp_string 
        = Vsimu_top__ConstPool__TABLE_h505b1bcc_0[__Vtableidx226];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuOp 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp)
                : 0xcU) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuOp 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuOp))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_uop_lsuOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuOp 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuOp))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_uop_lsuOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuOp 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_uop_lsuOp))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_lsuIQ_payload_uop_lsuOp)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_uop_lsuOp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_psrc_0 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                          : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_psrc_0 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_psrc_0 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_psrc_0 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_0))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0 
        = ((((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked))
              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_0_valid)
              : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_0)) 
            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_0) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_psrc_1 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                : 0U) : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                          : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_psrc_1 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_psrc_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_psrc_1 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_psrc_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_psrc_1 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_psrc_1))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_psrc_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1 
        = ((((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked))
              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_sRAT__DOT___zz_io_srcReadPort_0_1_valid)
              : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__actualSrcReady_1_1)) 
            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitLSU_io_prf_idx)) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitDIVU_io_prf_idx)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitMULU_io_prf_idx)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU1_io_prf_idx)) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_commitALU0_io_prf_idx))))))) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rData_prd)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__stage12_rValid)) 
              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rData_prd)) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_fuMULU__DOT__io_input_rValid)) 
                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rData_prd)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roMULU_io_toFU_rValid)) 
                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_output_payload_prd)) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_fuLSU_io_wakeOut_1_valid)) 
                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rData_prd)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU1_io_toFU_rValid)) 
                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rData_prd)) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU1_io_output_rValid)) 
                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT___zz_issueEntry_prd)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__io_output_fire)) 
                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rData_prd)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_roALU0_io_toFU_rValid)) 
                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rData_prd)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__toplevel_cpuClockingArea_areaFlushReset_issueQueueALU0_io_output_rValid)) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_payload_psrc_1) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT___zz_issueEntry_prd)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__io_output_fire))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask 
        = ((((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__resAvail)) 
             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_out_availMask) 
                >> 1U)) << 1U) | (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__resAvail) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue_io_out_availMask))));
    __Vtableidx230 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuOp;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_uop_lsuOp_string 
        = Vsimu_top__ConstPool__TABLE_h505b1bcc_0[__Vtableidx230];
    __Vtableidx227 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuOp;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_uop_lsuOp_string 
        = Vsimu_top__ConstPool__TABLE_h505b1bcc_0[__Vtableidx227];
    __Vtableidx228 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuOp;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_uop_lsuOp_string 
        = Vsimu_top__ConstPool__TABLE_h505b1bcc_0[__Vtableidx228];
    __Vtableidx229 = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuOp;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_uop_lsuOp_string 
        = Vsimu_top__ConstPool__TABLE_h505b1bcc_0[__Vtableidx229];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_srcReady_0 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_srcReady_0 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_0))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_srcReady_0 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_0))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_srcReady_0 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_0))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_0)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_srcReady_1 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_srcReady_1 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_1))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_srcReady_1 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_1))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_srcReady_1)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_srcReady_1 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_srcReady_1))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__appendEntry_srcReady_1)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_srcReady_1)));
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchNum = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_freelist_disPatchNum = 0U;
    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchNum = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_freelist_disPatchNum = 1U;
    } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchNum = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_freelist_disPatchNum = 1U;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_instQueue__DOT___zz_dispatchNum = 2U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT___zz_io_freelist_disPatchNum = 2U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_sratWrite_0_wen 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__needRd)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_sratWrite_1_wen 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__needRd)) 
                 >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid 
        = (0U != ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu0Sel) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid 
        = (0U != ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__alu1Sel) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid 
        = (0U != ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__muluReq_ohFirst_masked) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid 
        = (0U != ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__divuReq_ohFirst_masked) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid 
        = (0U != ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__lsuReq_ohFirst_masked) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_dispatchNum 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask))
            ? 0U : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask))
                     ? 1U : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher__DOT__dispatchMask))
                              ? 1U : 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_3_valid 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_0_valid 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_valid))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_0_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_1_valid 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_valid))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_1_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queueNext_2_valid 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_3_valid))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu0IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU0__DOT__queue_2_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_3_valid 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_0_valid 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_valid))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_0_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_1_valid 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_valid))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_1_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queueNext_2_valid 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_3_valid))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_alu1IQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueALU1__DOT__queue_2_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_3_valid 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_0_valid 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_valid))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_0_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_1_valid 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_valid))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_1_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queueNext_2_valid 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_3_valid))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_muluIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueMULU__DOT__queue_2_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_3_valid 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_0_valid 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_valid))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_0_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_1_valid 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_valid))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_1_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queueNext_2_valid 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_3_valid))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_divuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueDIVU__DOT__queue_2_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_3_valid 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked) 
                >> 4U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_0_valid 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_valid))
            : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_0_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_1_valid 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_valid))
            : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_1_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queueNext_2_valid 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__shiftAhead))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_3_valid))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__emptyEntry_ohFirst_masked))
                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_dispatcher_io_lsuIQ_valid)
                : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_areaFlushReset_issueQueueLSU__DOT__queue_2_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_tail_0 
        = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__tail_0) 
                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_dispatchNum)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_tail_1_2 
        = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__tail_1) 
                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_dispatchNum)));
    simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1 
        = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__tail_0) 
                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_dispatchNum)));
    simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4 
        = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__tail_1) 
                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_dispatchNum)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask 
        = ((0x10U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
            ? ((8U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                ? ((4U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                    ? ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_31_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_30_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_29_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_28_valid)))
                    : ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_27_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_26_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_25_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_24_valid))))
                : ((4U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                    ? ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_23_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_22_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_21_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_20_valid)))
                    : ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_19_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_18_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_17_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_16_valid)))))
            : ((8U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                ? ((4U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                    ? ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_15_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_14_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_13_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_12_valid)))
                    : ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_11_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_10_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_9_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_8_valid))))
                : ((4U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                    ? ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_7_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_6_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_5_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_4_valid)))
                    : ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_3_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_2_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_1))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_1_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_0_valid))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_3 
        = ((0x10U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
            ? ((8U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                ? ((4U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                    ? ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_31_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_30_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_29_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_28_valid)))
                    : ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_27_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_26_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_25_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_24_valid))))
                : ((4U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                    ? ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_23_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_22_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_21_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_20_valid)))
                    : ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_19_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_18_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_17_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_16_valid)))))
            : ((8U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                ? ((4U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                    ? ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_15_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_14_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_13_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_12_valid)))
                    : ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_11_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_10_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_9_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_8_valid))))
                : ((4U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                    ? ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_7_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_6_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_5_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_4_valid)))
                    : ((2U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                        ? ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_3_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_2_valid))
                        : ((1U & (IData)(simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT___zz_stage_availROBMask_4))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_1_valid)
                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mycpu__DOT__cpuClockingArea_rob__DOT__rob_0_valid))))));
}

void Vsimu_top___024root___sequent__TOP__7(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__10(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__11(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__12(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__13(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__14(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__15(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__16(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__17(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__18(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___sequent__TOP__19(Vsimu_top___024root* vlSelf);

void Vsimu_top___024root___eval(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vsimu_top___024root___sequent__TOP__7(vlSelf);
    }
    if (((IData)(vlSelf->aclk) & (~ (IData)(vlSelf->__Vclklast__TOP__aclk)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vsimu_top___024root___sequent__TOP__10(vlSelf);
        Vsimu_top___024root___sequent__TOP__11(vlSelf);
        Vsimu_top___024root___sequent__TOP__12(vlSelf);
        Vsimu_top___024root___sequent__TOP__13(vlSelf);
        Vsimu_top___024root___sequent__TOP__14(vlSelf);
        Vsimu_top___024root___sequent__TOP__15(vlSelf);
        Vsimu_top___024root___sequent__TOP__16(vlSelf);
        Vsimu_top___024root___sequent__TOP__17(vlSelf);
        Vsimu_top___024root___sequent__TOP__18(vlSelf);
        Vsimu_top___024root___sequent__TOP__19(vlSelf);
    }
    Vsimu_top___024root___combo__TOP__20(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__aclk = vlSelf->aclk;
}

#ifdef VL_DEBUG
void Vsimu_top___024root___eval_debug_assertions(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->valid & 0xfeU))) {
        Verilated::overWidthError("valid");}
    if (VL_UNLIKELY((vlSelf->code & 0xf8U))) {
        Verilated::overWidthError("code");}
    if (VL_UNLIKELY((vlSelf->aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
    if (VL_UNLIKELY((vlSelf->aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((vlSelf->enable_delay & 0xfeU))) {
        Verilated::overWidthError("enable_delay");}
    if (VL_UNLIKELY((vlSelf->random_seed & 0xff800000U))) {
        Verilated::overWidthError("random_seed");}
    if (VL_UNLIKELY((vlSelf->uart_rx & 0xfeU))) {
        Verilated::overWidthError("uart_rx");}
    if (VL_UNLIKELY((vlSelf->uart_tx & 0xfeU))) {
        Verilated::overWidthError("uart_tx");}
    if (VL_UNLIKELY((vlSelf->btn_key_row & 0xf0U))) {
        Verilated::overWidthError("btn_key_row");}
    if (VL_UNLIKELY((vlSelf->btn_step & 0xfcU))) {
        Verilated::overWidthError("btn_step");}
}
#endif  // VL_DEBUG
