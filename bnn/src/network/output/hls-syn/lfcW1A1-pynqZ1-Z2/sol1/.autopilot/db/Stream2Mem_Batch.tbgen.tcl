set moduleName Stream2Mem_Batch
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {Stream2Mem_Batch}
set C_modelType { void 0 }
set C_modelArgList {
	{ memOutStrm_V_V int 64 regular {fifo 0 volatile }  }
	{ in_V int 64 regular {axi_master 1}  }
	{ out_V3 int 61 regular {fifo 0}  }
	{ numReps_channel22 int 32 regular {fifo 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "memOutStrm_V_V", "interface" : "fifo", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "in_V", "interface" : "axi_master", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V3", "interface" : "fifo", "bitwidth" : 61, "direction" : "READONLY"} , 
 	{ "Name" : "numReps_channel22", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 61
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ memOutStrm_V_V_dout sc_in sc_lv 64 signal 0 } 
	{ memOutStrm_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ memOutStrm_V_V_read sc_out sc_logic 1 signal 0 } 
	{ m_axi_in_V_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_in_V_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_in_V_AWADDR sc_out sc_lv 64 signal 1 } 
	{ m_axi_in_V_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_in_V_AWLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_in_V_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_in_V_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_in_V_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_in_V_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_in_V_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_in_V_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_in_V_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_in_V_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_in_V_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_in_V_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_in_V_WDATA sc_out sc_lv 64 signal 1 } 
	{ m_axi_in_V_WSTRB sc_out sc_lv 8 signal 1 } 
	{ m_axi_in_V_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_in_V_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_in_V_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_in_V_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_in_V_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_in_V_ARADDR sc_out sc_lv 64 signal 1 } 
	{ m_axi_in_V_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_in_V_ARLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_in_V_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_in_V_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_in_V_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_in_V_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_in_V_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_in_V_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_in_V_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_in_V_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_in_V_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_in_V_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_in_V_RDATA sc_in sc_lv 64 signal 1 } 
	{ m_axi_in_V_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_in_V_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_in_V_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_in_V_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_in_V_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_in_V_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_in_V_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_in_V_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_in_V_BUSER sc_in sc_lv 1 signal 1 } 
	{ out_V3_dout sc_in sc_lv 61 signal 2 } 
	{ out_V3_empty_n sc_in sc_logic 1 signal 2 } 
	{ out_V3_read sc_out sc_logic 1 signal 2 } 
	{ numReps_channel22_dout sc_in sc_lv 32 signal 3 } 
	{ numReps_channel22_empty_n sc_in sc_logic 1 signal 3 } 
	{ numReps_channel22_read sc_out sc_logic 1 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "memOutStrm_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "memOutStrm_V_V", "role": "dout" }} , 
 	{ "name": "memOutStrm_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memOutStrm_V_V", "role": "empty_n" }} , 
 	{ "name": "memOutStrm_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memOutStrm_V_V", "role": "read" }} , 
 	{ "name": "m_axi_in_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_in_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_in_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "in_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_in_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "AWID" }} , 
 	{ "name": "m_axi_in_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_in_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_in_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_in_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_in_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_in_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_in_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_in_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_in_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_in_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_in_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_in_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "in_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_in_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_in_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_in_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "WID" }} , 
 	{ "name": "m_axi_in_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_in_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_in_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_in_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "in_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_in_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "ARID" }} , 
 	{ "name": "m_axi_in_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_in_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_in_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_in_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_in_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_in_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_in_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_in_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_in_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_in_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_in_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_in_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "in_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_in_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_in_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "RID" }} , 
 	{ "name": "m_axi_in_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_in_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_in_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_in_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_in_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_in_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "BID" }} , 
 	{ "name": "m_axi_in_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V", "role": "BUSER" }} , 
 	{ "name": "out_V3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":61, "type": "signal", "bundle":{"name": "out_V3", "role": "dout" }} , 
 	{ "name": "out_V3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V3", "role": "empty_n" }} , 
 	{ "name": "out_V3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V3", "role": "read" }} , 
 	{ "name": "numReps_channel22_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "numReps_channel22", "role": "dout" }} , 
 	{ "name": "numReps_channel22_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "numReps_channel22", "role": "empty_n" }} , 
 	{ "name": "numReps_channel22_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "numReps_channel22", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "Stream2Mem_Batch",
		"VariableLatency" : "1",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "memOutStrm_V_V", "Type" : "Fifo", "Direction" : "I",
			"BlockSignal" : [
			{"Name" : "memOutStrm_V_V_blk_n", "Type" : "RtlSignal"}],
			"SubConnect" : [
			{"ID" : "1", "SubInstance" : "grp_Stream2Mem_fu_58", "Port" : "in_V_V"},
			{"ID" : "2", "SubInstance" : "grp_Stream2Mem_64u_8u_s_fu_68", "Port" : "in_V_V"}]},
		{"Name" : "in_V", "Type" : "MAXI", "Direction" : "O",
			"BlockSignal" : [
			{"Name" : "in_V_blk_n_AW", "Type" : "RtlSignal"},
			{"Name" : "in_V_blk_n_W", "Type" : "RtlSignal"},
			{"Name" : "in_V_blk_n_B", "Type" : "RtlSignal"}],
			"SubConnect" : [
			{"ID" : "1", "SubInstance" : "grp_Stream2Mem_fu_58", "Port" : "out_V"},
			{"ID" : "2", "SubInstance" : "grp_Stream2Mem_64u_8u_s_fu_68", "Port" : "out_V"}]},
		{"Name" : "out_V3", "Type" : "Fifo", "Direction" : "I",
			"BlockSignal" : [
			{"Name" : "out_V3_blk_n", "Type" : "RtlSignal"}]},
		{"Name" : "numReps_channel22", "Type" : "Fifo", "Direction" : "I",
			"BlockSignal" : [
			{"Name" : "numReps_channel22_blk_n", "Type" : "RtlSignal"}]}],
		"WaitState" : [
		{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Stream2Mem_fu_58"}],
		"SubInstanceBlock" : [
		{"SubInstance" : "grp_Stream2Mem_64u_8u_s_fu_68", "SubBlockPort" : ["in_V_V_blk_n", "out_V_blk_n_AW", "out_V_blk_n_W", "out_V_blk_n_B"]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_Stream2Mem_fu_58", "Parent" : "0",
		"CDFG" : "Stream2Mem",
		"VariableLatency" : "1",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I",
			"BlockSignal" : [
			{"Name" : "in_V_V_blk_n", "Type" : "RtlSignal"}]},
		{"Name" : "out_V", "Type" : "MAXI", "Direction" : "O",
			"BlockSignal" : [
			{"Name" : "out_V_blk_n_AW", "Type" : "RtlSignal"},
			{"Name" : "out_V_blk_n_W", "Type" : "RtlSignal"},
			{"Name" : "out_V_blk_n_B", "Type" : "RtlSignal"}]},
		{"Name" : "out_V3", "Type" : "None", "Direction" : "I"},
		{"Name" : "tmp_2", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_Stream2Mem_64u_8u_s_fu_68", "Parent" : "0",
		"CDFG" : "Stream2Mem_64u_8u_s",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I",
			"BlockSignal" : [
			{"Name" : "in_V_V_blk_n", "Type" : "RtlPort"}]},
		{"Name" : "out_V", "Type" : "MAXI", "Direction" : "O",
			"BlockSignal" : [
			{"Name" : "out_V_blk_n_AW", "Type" : "RtlPort"},
			{"Name" : "out_V_blk_n_W", "Type" : "RtlPort"},
			{"Name" : "out_V_blk_n_B", "Type" : "RtlPort"}]},
		{"Name" : "out_V3", "Type" : "None", "Direction" : "I"},
		{"Name" : "tmp_3", "Type" : "None", "Direction" : "I"}]}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "4294967295", "Max" : "4294967295"}
]}

set Spec2ImplPortList { 
	memOutStrm_V_V { ap_fifo {  { memOutStrm_V_V_dout fifo_data 0 64 }  { memOutStrm_V_V_empty_n fifo_status 0 1 }  { memOutStrm_V_V_read fifo_update 1 1 } } }
	in_V { m_axi {  { m_axi_in_V_AWVALID VALID 1 1 }  { m_axi_in_V_AWREADY READY 0 1 }  { m_axi_in_V_AWADDR ADDR 1 64 }  { m_axi_in_V_AWID ID 1 1 }  { m_axi_in_V_AWLEN LEN 1 32 }  { m_axi_in_V_AWSIZE SIZE 1 3 }  { m_axi_in_V_AWBURST BURST 1 2 }  { m_axi_in_V_AWLOCK LOCK 1 2 }  { m_axi_in_V_AWCACHE CACHE 1 4 }  { m_axi_in_V_AWPROT PROT 1 3 }  { m_axi_in_V_AWQOS QOS 1 4 }  { m_axi_in_V_AWREGION REGION 1 4 }  { m_axi_in_V_AWUSER USER 1 1 }  { m_axi_in_V_WVALID VALID 1 1 }  { m_axi_in_V_WREADY READY 0 1 }  { m_axi_in_V_WDATA DATA 1 64 }  { m_axi_in_V_WSTRB STRB 1 8 }  { m_axi_in_V_WLAST LAST 1 1 }  { m_axi_in_V_WID ID 1 1 }  { m_axi_in_V_WUSER USER 1 1 }  { m_axi_in_V_ARVALID VALID 1 1 }  { m_axi_in_V_ARREADY READY 0 1 }  { m_axi_in_V_ARADDR ADDR 1 64 }  { m_axi_in_V_ARID ID 1 1 }  { m_axi_in_V_ARLEN LEN 1 32 }  { m_axi_in_V_ARSIZE SIZE 1 3 }  { m_axi_in_V_ARBURST BURST 1 2 }  { m_axi_in_V_ARLOCK LOCK 1 2 }  { m_axi_in_V_ARCACHE CACHE 1 4 }  { m_axi_in_V_ARPROT PROT 1 3 }  { m_axi_in_V_ARQOS QOS 1 4 }  { m_axi_in_V_ARREGION REGION 1 4 }  { m_axi_in_V_ARUSER USER 1 1 }  { m_axi_in_V_RVALID VALID 0 1 }  { m_axi_in_V_RREADY READY 1 1 }  { m_axi_in_V_RDATA DATA 0 64 }  { m_axi_in_V_RLAST LAST 0 1 }  { m_axi_in_V_RID ID 0 1 }  { m_axi_in_V_RUSER USER 0 1 }  { m_axi_in_V_RRESP RESP 0 2 }  { m_axi_in_V_BVALID VALID 0 1 }  { m_axi_in_V_BREADY READY 1 1 }  { m_axi_in_V_BRESP RESP 0 2 }  { m_axi_in_V_BID ID 0 1 }  { m_axi_in_V_BUSER USER 0 1 } } }
	out_V3 { ap_fifo {  { out_V3_dout fifo_data 0 61 }  { out_V3_empty_n fifo_status 0 1 }  { out_V3_read fifo_update 1 1 } } }
	numReps_channel22 { ap_fifo {  { numReps_channel22_dout fifo_data 0 32 }  { numReps_channel22_empty_n fifo_status 0 1 }  { numReps_channel22_read fifo_update 1 1 } } }
}
