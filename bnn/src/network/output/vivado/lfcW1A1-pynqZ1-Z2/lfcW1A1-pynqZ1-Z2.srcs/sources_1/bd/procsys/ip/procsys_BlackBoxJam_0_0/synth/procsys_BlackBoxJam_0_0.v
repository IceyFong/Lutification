// (c) Copyright 1995-2020 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:BlackBoxJam:1.0
// IP Revision: 2005071843

(* X_CORE_INFO = "BlackBoxJam,Vivado 2016.3" *)
(* CHECK_LICENSE_TYPE = "procsys_BlackBoxJam_0_0,BlackBoxJam,{}" *)
(* CORE_GENERATION_INFO = "procsys_BlackBoxJam_0_0,BlackBoxJam,{x_ipProduct=Vivado 2016.3,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=BlackBoxJam,x_ipVersion=1.0,x_ipCoreRevision=2005071843,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_S_AXI_CONTROL_ADDR_WIDTH=7,C_S_AXI_CONTROL_DATA_WIDTH=32,C_M_AXI_HOSTMEM_ID_WIDTH=1,C_M_AXI_HOSTMEM_ADDR_WIDTH=64,C_M_AXI_HOSTMEM_DATA_WIDTH=64,C_M_AXI_HOSTMEM_AWUSER_WIDTH=1,C_M_AXI_HOSTMEM_ARUSER_WIDTH=1,C_M_AXI_HOSTMEM_WUSER_WIDTH=1,C_M_AXI_HOSTMEM_RUSER_WIDTH=1,C_M_AXI_HOSTMEM_BUSER_W\
IDTH=1,C_M_AXI_HOSTMEM_USER_VALUE=0x00000000,C_M_AXI_HOSTMEM_PROT_VALUE=000,C_M_AXI_HOSTMEM_CACHE_VALUE=0011}" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module procsys_BlackBoxJam_0_0 (
  s_axi_control_AWADDR,
  s_axi_control_AWVALID,
  s_axi_control_AWREADY,
  s_axi_control_WDATA,
  s_axi_control_WSTRB,
  s_axi_control_WVALID,
  s_axi_control_WREADY,
  s_axi_control_BRESP,
  s_axi_control_BVALID,
  s_axi_control_BREADY,
  s_axi_control_ARADDR,
  s_axi_control_ARVALID,
  s_axi_control_ARREADY,
  s_axi_control_RDATA,
  s_axi_control_RRESP,
  s_axi_control_RVALID,
  s_axi_control_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt,
  m_axi_hostmem_AWADDR,
  m_axi_hostmem_AWLEN,
  m_axi_hostmem_AWSIZE,
  m_axi_hostmem_AWBURST,
  m_axi_hostmem_AWLOCK,
  m_axi_hostmem_AWREGION,
  m_axi_hostmem_AWCACHE,
  m_axi_hostmem_AWPROT,
  m_axi_hostmem_AWQOS,
  m_axi_hostmem_AWVALID,
  m_axi_hostmem_AWREADY,
  m_axi_hostmem_WDATA,
  m_axi_hostmem_WSTRB,
  m_axi_hostmem_WLAST,
  m_axi_hostmem_WVALID,
  m_axi_hostmem_WREADY,
  m_axi_hostmem_BRESP,
  m_axi_hostmem_BVALID,
  m_axi_hostmem_BREADY,
  m_axi_hostmem_ARADDR,
  m_axi_hostmem_ARLEN,
  m_axi_hostmem_ARSIZE,
  m_axi_hostmem_ARBURST,
  m_axi_hostmem_ARLOCK,
  m_axi_hostmem_ARREGION,
  m_axi_hostmem_ARCACHE,
  m_axi_hostmem_ARPROT,
  m_axi_hostmem_ARQOS,
  m_axi_hostmem_ARVALID,
  m_axi_hostmem_ARREADY,
  m_axi_hostmem_RDATA,
  m_axi_hostmem_RRESP,
  m_axi_hostmem_RLAST,
  m_axi_hostmem_RVALID,
  m_axi_hostmem_RREADY
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control AWADDR" *)
input wire [6 : 0] s_axi_control_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control AWVALID" *)
input wire s_axi_control_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control AWREADY" *)
output wire s_axi_control_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control WDATA" *)
input wire [31 : 0] s_axi_control_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control WSTRB" *)
input wire [3 : 0] s_axi_control_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control WVALID" *)
input wire s_axi_control_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control WREADY" *)
output wire s_axi_control_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control BRESP" *)
output wire [1 : 0] s_axi_control_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control BVALID" *)
output wire s_axi_control_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control BREADY" *)
input wire s_axi_control_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control ARADDR" *)
input wire [6 : 0] s_axi_control_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control ARVALID" *)
input wire s_axi_control_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control ARREADY" *)
output wire s_axi_control_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control RDATA" *)
output wire [31 : 0] s_axi_control_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control RRESP" *)
output wire [1 : 0] s_axi_control_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control RVALID" *)
output wire s_axi_control_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control RREADY" *)
input wire s_axi_control_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWADDR" *)
output wire [63 : 0] m_axi_hostmem_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWLEN" *)
output wire [7 : 0] m_axi_hostmem_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWSIZE" *)
output wire [2 : 0] m_axi_hostmem_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWBURST" *)
output wire [1 : 0] m_axi_hostmem_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWLOCK" *)
output wire [1 : 0] m_axi_hostmem_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWREGION" *)
output wire [3 : 0] m_axi_hostmem_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWCACHE" *)
output wire [3 : 0] m_axi_hostmem_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWPROT" *)
output wire [2 : 0] m_axi_hostmem_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWQOS" *)
output wire [3 : 0] m_axi_hostmem_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWVALID" *)
output wire m_axi_hostmem_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem AWREADY" *)
input wire m_axi_hostmem_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem WDATA" *)
output wire [63 : 0] m_axi_hostmem_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem WSTRB" *)
output wire [7 : 0] m_axi_hostmem_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem WLAST" *)
output wire m_axi_hostmem_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem WVALID" *)
output wire m_axi_hostmem_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem WREADY" *)
input wire m_axi_hostmem_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem BRESP" *)
input wire [1 : 0] m_axi_hostmem_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem BVALID" *)
input wire m_axi_hostmem_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem BREADY" *)
output wire m_axi_hostmem_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARADDR" *)
output wire [63 : 0] m_axi_hostmem_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARLEN" *)
output wire [7 : 0] m_axi_hostmem_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARSIZE" *)
output wire [2 : 0] m_axi_hostmem_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARBURST" *)
output wire [1 : 0] m_axi_hostmem_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARLOCK" *)
output wire [1 : 0] m_axi_hostmem_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARREGION" *)
output wire [3 : 0] m_axi_hostmem_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARCACHE" *)
output wire [3 : 0] m_axi_hostmem_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARPROT" *)
output wire [2 : 0] m_axi_hostmem_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARQOS" *)
output wire [3 : 0] m_axi_hostmem_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARVALID" *)
output wire m_axi_hostmem_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem ARREADY" *)
input wire m_axi_hostmem_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem RDATA" *)
input wire [63 : 0] m_axi_hostmem_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem RRESP" *)
input wire [1 : 0] m_axi_hostmem_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem RLAST" *)
input wire m_axi_hostmem_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem RVALID" *)
input wire m_axi_hostmem_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_hostmem RREADY" *)
output wire m_axi_hostmem_RREADY;

  BlackBoxJam #(
    .C_S_AXI_CONTROL_ADDR_WIDTH(7),
    .C_S_AXI_CONTROL_DATA_WIDTH(32),
    .C_M_AXI_HOSTMEM_ID_WIDTH(1),
    .C_M_AXI_HOSTMEM_ADDR_WIDTH(64),
    .C_M_AXI_HOSTMEM_DATA_WIDTH(64),
    .C_M_AXI_HOSTMEM_AWUSER_WIDTH(1),
    .C_M_AXI_HOSTMEM_ARUSER_WIDTH(1),
    .C_M_AXI_HOSTMEM_WUSER_WIDTH(1),
    .C_M_AXI_HOSTMEM_RUSER_WIDTH(1),
    .C_M_AXI_HOSTMEM_BUSER_WIDTH(1),
    .C_M_AXI_HOSTMEM_USER_VALUE('H00000000),
    .C_M_AXI_HOSTMEM_PROT_VALUE('B000),
    .C_M_AXI_HOSTMEM_CACHE_VALUE('B0011)
  ) inst (
    .s_axi_control_AWADDR(s_axi_control_AWADDR),
    .s_axi_control_AWVALID(s_axi_control_AWVALID),
    .s_axi_control_AWREADY(s_axi_control_AWREADY),
    .s_axi_control_WDATA(s_axi_control_WDATA),
    .s_axi_control_WSTRB(s_axi_control_WSTRB),
    .s_axi_control_WVALID(s_axi_control_WVALID),
    .s_axi_control_WREADY(s_axi_control_WREADY),
    .s_axi_control_BRESP(s_axi_control_BRESP),
    .s_axi_control_BVALID(s_axi_control_BVALID),
    .s_axi_control_BREADY(s_axi_control_BREADY),
    .s_axi_control_ARADDR(s_axi_control_ARADDR),
    .s_axi_control_ARVALID(s_axi_control_ARVALID),
    .s_axi_control_ARREADY(s_axi_control_ARREADY),
    .s_axi_control_RDATA(s_axi_control_RDATA),
    .s_axi_control_RRESP(s_axi_control_RRESP),
    .s_axi_control_RVALID(s_axi_control_RVALID),
    .s_axi_control_RREADY(s_axi_control_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
    .m_axi_hostmem_AWID(),
    .m_axi_hostmem_AWADDR(m_axi_hostmem_AWADDR),
    .m_axi_hostmem_AWLEN(m_axi_hostmem_AWLEN),
    .m_axi_hostmem_AWSIZE(m_axi_hostmem_AWSIZE),
    .m_axi_hostmem_AWBURST(m_axi_hostmem_AWBURST),
    .m_axi_hostmem_AWLOCK(m_axi_hostmem_AWLOCK),
    .m_axi_hostmem_AWREGION(m_axi_hostmem_AWREGION),
    .m_axi_hostmem_AWCACHE(m_axi_hostmem_AWCACHE),
    .m_axi_hostmem_AWPROT(m_axi_hostmem_AWPROT),
    .m_axi_hostmem_AWQOS(m_axi_hostmem_AWQOS),
    .m_axi_hostmem_AWUSER(),
    .m_axi_hostmem_AWVALID(m_axi_hostmem_AWVALID),
    .m_axi_hostmem_AWREADY(m_axi_hostmem_AWREADY),
    .m_axi_hostmem_WID(),
    .m_axi_hostmem_WDATA(m_axi_hostmem_WDATA),
    .m_axi_hostmem_WSTRB(m_axi_hostmem_WSTRB),
    .m_axi_hostmem_WLAST(m_axi_hostmem_WLAST),
    .m_axi_hostmem_WUSER(),
    .m_axi_hostmem_WVALID(m_axi_hostmem_WVALID),
    .m_axi_hostmem_WREADY(m_axi_hostmem_WREADY),
    .m_axi_hostmem_BID(1'B0),
    .m_axi_hostmem_BRESP(m_axi_hostmem_BRESP),
    .m_axi_hostmem_BUSER(1'B0),
    .m_axi_hostmem_BVALID(m_axi_hostmem_BVALID),
    .m_axi_hostmem_BREADY(m_axi_hostmem_BREADY),
    .m_axi_hostmem_ARID(),
    .m_axi_hostmem_ARADDR(m_axi_hostmem_ARADDR),
    .m_axi_hostmem_ARLEN(m_axi_hostmem_ARLEN),
    .m_axi_hostmem_ARSIZE(m_axi_hostmem_ARSIZE),
    .m_axi_hostmem_ARBURST(m_axi_hostmem_ARBURST),
    .m_axi_hostmem_ARLOCK(m_axi_hostmem_ARLOCK),
    .m_axi_hostmem_ARREGION(m_axi_hostmem_ARREGION),
    .m_axi_hostmem_ARCACHE(m_axi_hostmem_ARCACHE),
    .m_axi_hostmem_ARPROT(m_axi_hostmem_ARPROT),
    .m_axi_hostmem_ARQOS(m_axi_hostmem_ARQOS),
    .m_axi_hostmem_ARUSER(),
    .m_axi_hostmem_ARVALID(m_axi_hostmem_ARVALID),
    .m_axi_hostmem_ARREADY(m_axi_hostmem_ARREADY),
    .m_axi_hostmem_RID(1'B0),
    .m_axi_hostmem_RDATA(m_axi_hostmem_RDATA),
    .m_axi_hostmem_RRESP(m_axi_hostmem_RRESP),
    .m_axi_hostmem_RLAST(m_axi_hostmem_RLAST),
    .m_axi_hostmem_RUSER(1'B0),
    .m_axi_hostmem_RVALID(m_axi_hostmem_RVALID),
    .m_axi_hostmem_RREADY(m_axi_hostmem_RREADY)
  );
endmodule
