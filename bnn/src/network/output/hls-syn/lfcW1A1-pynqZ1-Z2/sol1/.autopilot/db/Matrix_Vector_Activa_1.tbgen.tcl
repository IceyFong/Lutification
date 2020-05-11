set moduleName Matrix_Vector_Activa_1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {Matrix_Vector_Activa.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_V_V int 8 regular {fifo 0 volatile }  }
	{ out_V_V int 16 regular {fifo 1 volatile }  }
	{ reps int 32 regular {fifo 0}  }
	{ reps_out int 32 regular {fifo 1}  }
	{ weights3_m_weights_V int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_1 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_2 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_3 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_4 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_5 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_6 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_7 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_8 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_9 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_10 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_11 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_12 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_13 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_14 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ weights3_m_weights_V_15 int 8 regular {array 512 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_15 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_14 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_7 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_6 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_5 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_4 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_3 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_2 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_1 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_13 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_12 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_11 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_10 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_9 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ threshs3_m_threshold_8 int 16 regular {array 4 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_V_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "out_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "reps", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "reps_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "weights3_m_weights_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "weights3_m_weights_V_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_15", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_14", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_7", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_6", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_5", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_4", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_3", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_2", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_1", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_13", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_12", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_11", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_10", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_9", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "threshs3_m_threshold_8", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 118
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ in_V_V_dout sc_in sc_lv 8 signal 0 } 
	{ in_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ in_V_V_read sc_out sc_logic 1 signal 0 } 
	{ out_V_V_din sc_out sc_lv 16 signal 1 } 
	{ out_V_V_full_n sc_in sc_logic 1 signal 1 } 
	{ out_V_V_write sc_out sc_logic 1 signal 1 } 
	{ reps_dout sc_in sc_lv 32 signal 2 } 
	{ reps_empty_n sc_in sc_logic 1 signal 2 } 
	{ reps_read sc_out sc_logic 1 signal 2 } 
	{ reps_out_din sc_out sc_lv 32 signal 3 } 
	{ reps_out_full_n sc_in sc_logic 1 signal 3 } 
	{ reps_out_write sc_out sc_logic 1 signal 3 } 
	{ weights3_m_weights_V_address0 sc_out sc_lv 9 signal 4 } 
	{ weights3_m_weights_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ weights3_m_weights_V_q0 sc_in sc_lv 8 signal 4 } 
	{ weights3_m_weights_V_1_address0 sc_out sc_lv 9 signal 5 } 
	{ weights3_m_weights_V_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ weights3_m_weights_V_1_q0 sc_in sc_lv 8 signal 5 } 
	{ weights3_m_weights_V_2_address0 sc_out sc_lv 9 signal 6 } 
	{ weights3_m_weights_V_2_ce0 sc_out sc_logic 1 signal 6 } 
	{ weights3_m_weights_V_2_q0 sc_in sc_lv 8 signal 6 } 
	{ weights3_m_weights_V_3_address0 sc_out sc_lv 9 signal 7 } 
	{ weights3_m_weights_V_3_ce0 sc_out sc_logic 1 signal 7 } 
	{ weights3_m_weights_V_3_q0 sc_in sc_lv 8 signal 7 } 
	{ weights3_m_weights_V_4_address0 sc_out sc_lv 9 signal 8 } 
	{ weights3_m_weights_V_4_ce0 sc_out sc_logic 1 signal 8 } 
	{ weights3_m_weights_V_4_q0 sc_in sc_lv 8 signal 8 } 
	{ weights3_m_weights_V_5_address0 sc_out sc_lv 9 signal 9 } 
	{ weights3_m_weights_V_5_ce0 sc_out sc_logic 1 signal 9 } 
	{ weights3_m_weights_V_5_q0 sc_in sc_lv 8 signal 9 } 
	{ weights3_m_weights_V_6_address0 sc_out sc_lv 9 signal 10 } 
	{ weights3_m_weights_V_6_ce0 sc_out sc_logic 1 signal 10 } 
	{ weights3_m_weights_V_6_q0 sc_in sc_lv 8 signal 10 } 
	{ weights3_m_weights_V_7_address0 sc_out sc_lv 9 signal 11 } 
	{ weights3_m_weights_V_7_ce0 sc_out sc_logic 1 signal 11 } 
	{ weights3_m_weights_V_7_q0 sc_in sc_lv 8 signal 11 } 
	{ weights3_m_weights_V_8_address0 sc_out sc_lv 9 signal 12 } 
	{ weights3_m_weights_V_8_ce0 sc_out sc_logic 1 signal 12 } 
	{ weights3_m_weights_V_8_q0 sc_in sc_lv 8 signal 12 } 
	{ weights3_m_weights_V_9_address0 sc_out sc_lv 9 signal 13 } 
	{ weights3_m_weights_V_9_ce0 sc_out sc_logic 1 signal 13 } 
	{ weights3_m_weights_V_9_q0 sc_in sc_lv 8 signal 13 } 
	{ weights3_m_weights_V_10_address0 sc_out sc_lv 9 signal 14 } 
	{ weights3_m_weights_V_10_ce0 sc_out sc_logic 1 signal 14 } 
	{ weights3_m_weights_V_10_q0 sc_in sc_lv 8 signal 14 } 
	{ weights3_m_weights_V_11_address0 sc_out sc_lv 9 signal 15 } 
	{ weights3_m_weights_V_11_ce0 sc_out sc_logic 1 signal 15 } 
	{ weights3_m_weights_V_11_q0 sc_in sc_lv 8 signal 15 } 
	{ weights3_m_weights_V_12_address0 sc_out sc_lv 9 signal 16 } 
	{ weights3_m_weights_V_12_ce0 sc_out sc_logic 1 signal 16 } 
	{ weights3_m_weights_V_12_q0 sc_in sc_lv 8 signal 16 } 
	{ weights3_m_weights_V_13_address0 sc_out sc_lv 9 signal 17 } 
	{ weights3_m_weights_V_13_ce0 sc_out sc_logic 1 signal 17 } 
	{ weights3_m_weights_V_13_q0 sc_in sc_lv 8 signal 17 } 
	{ weights3_m_weights_V_14_address0 sc_out sc_lv 9 signal 18 } 
	{ weights3_m_weights_V_14_ce0 sc_out sc_logic 1 signal 18 } 
	{ weights3_m_weights_V_14_q0 sc_in sc_lv 8 signal 18 } 
	{ weights3_m_weights_V_15_address0 sc_out sc_lv 9 signal 19 } 
	{ weights3_m_weights_V_15_ce0 sc_out sc_logic 1 signal 19 } 
	{ weights3_m_weights_V_15_q0 sc_in sc_lv 8 signal 19 } 
	{ threshs3_m_threshold_15_address0 sc_out sc_lv 2 signal 20 } 
	{ threshs3_m_threshold_15_ce0 sc_out sc_logic 1 signal 20 } 
	{ threshs3_m_threshold_15_q0 sc_in sc_lv 16 signal 20 } 
	{ threshs3_m_threshold_14_address0 sc_out sc_lv 2 signal 21 } 
	{ threshs3_m_threshold_14_ce0 sc_out sc_logic 1 signal 21 } 
	{ threshs3_m_threshold_14_q0 sc_in sc_lv 16 signal 21 } 
	{ threshs3_m_threshold_7_address0 sc_out sc_lv 2 signal 22 } 
	{ threshs3_m_threshold_7_ce0 sc_out sc_logic 1 signal 22 } 
	{ threshs3_m_threshold_7_q0 sc_in sc_lv 16 signal 22 } 
	{ threshs3_m_threshold_6_address0 sc_out sc_lv 2 signal 23 } 
	{ threshs3_m_threshold_6_ce0 sc_out sc_logic 1 signal 23 } 
	{ threshs3_m_threshold_6_q0 sc_in sc_lv 16 signal 23 } 
	{ threshs3_m_threshold_5_address0 sc_out sc_lv 2 signal 24 } 
	{ threshs3_m_threshold_5_ce0 sc_out sc_logic 1 signal 24 } 
	{ threshs3_m_threshold_5_q0 sc_in sc_lv 16 signal 24 } 
	{ threshs3_m_threshold_4_address0 sc_out sc_lv 2 signal 25 } 
	{ threshs3_m_threshold_4_ce0 sc_out sc_logic 1 signal 25 } 
	{ threshs3_m_threshold_4_q0 sc_in sc_lv 16 signal 25 } 
	{ threshs3_m_threshold_3_address0 sc_out sc_lv 2 signal 26 } 
	{ threshs3_m_threshold_3_ce0 sc_out sc_logic 1 signal 26 } 
	{ threshs3_m_threshold_3_q0 sc_in sc_lv 16 signal 26 } 
	{ threshs3_m_threshold_2_address0 sc_out sc_lv 2 signal 27 } 
	{ threshs3_m_threshold_2_ce0 sc_out sc_logic 1 signal 27 } 
	{ threshs3_m_threshold_2_q0 sc_in sc_lv 16 signal 27 } 
	{ threshs3_m_threshold_1_address0 sc_out sc_lv 2 signal 28 } 
	{ threshs3_m_threshold_1_ce0 sc_out sc_logic 1 signal 28 } 
	{ threshs3_m_threshold_1_q0 sc_in sc_lv 16 signal 28 } 
	{ threshs3_m_threshold_address0 sc_out sc_lv 2 signal 29 } 
	{ threshs3_m_threshold_ce0 sc_out sc_logic 1 signal 29 } 
	{ threshs3_m_threshold_q0 sc_in sc_lv 16 signal 29 } 
	{ threshs3_m_threshold_13_address0 sc_out sc_lv 2 signal 30 } 
	{ threshs3_m_threshold_13_ce0 sc_out sc_logic 1 signal 30 } 
	{ threshs3_m_threshold_13_q0 sc_in sc_lv 16 signal 30 } 
	{ threshs3_m_threshold_12_address0 sc_out sc_lv 2 signal 31 } 
	{ threshs3_m_threshold_12_ce0 sc_out sc_logic 1 signal 31 } 
	{ threshs3_m_threshold_12_q0 sc_in sc_lv 16 signal 31 } 
	{ threshs3_m_threshold_11_address0 sc_out sc_lv 2 signal 32 } 
	{ threshs3_m_threshold_11_ce0 sc_out sc_logic 1 signal 32 } 
	{ threshs3_m_threshold_11_q0 sc_in sc_lv 16 signal 32 } 
	{ threshs3_m_threshold_10_address0 sc_out sc_lv 2 signal 33 } 
	{ threshs3_m_threshold_10_ce0 sc_out sc_logic 1 signal 33 } 
	{ threshs3_m_threshold_10_q0 sc_in sc_lv 16 signal 33 } 
	{ threshs3_m_threshold_9_address0 sc_out sc_lv 2 signal 34 } 
	{ threshs3_m_threshold_9_ce0 sc_out sc_logic 1 signal 34 } 
	{ threshs3_m_threshold_9_q0 sc_in sc_lv 16 signal 34 } 
	{ threshs3_m_threshold_8_address0 sc_out sc_lv 2 signal 35 } 
	{ threshs3_m_threshold_8_ce0 sc_out sc_logic 1 signal 35 } 
	{ threshs3_m_threshold_8_q0 sc_in sc_lv 16 signal 35 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "in_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_V_V", "role": "dout" }} , 
 	{ "name": "in_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_V", "role": "empty_n" }} , 
 	{ "name": "in_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_V", "role": "read" }} , 
 	{ "name": "out_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_V_V", "role": "din" }} , 
 	{ "name": "out_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_V", "role": "full_n" }} , 
 	{ "name": "out_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_V", "role": "write" }} , 
 	{ "name": "reps_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "reps", "role": "dout" }} , 
 	{ "name": "reps_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "reps", "role": "empty_n" }} , 
 	{ "name": "reps_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "reps", "role": "read" }} , 
 	{ "name": "reps_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "reps_out", "role": "din" }} , 
 	{ "name": "reps_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "reps_out", "role": "full_n" }} , 
 	{ "name": "reps_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "reps_out", "role": "write" }} , 
 	{ "name": "weights3_m_weights_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_1", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_1", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_1", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_2", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_2", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_2", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_3", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_3", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_3", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_4", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_4", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_4", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_5", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_5", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_5", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_6", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_6", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_6", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_7", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_7", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_7", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_8", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_8", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_8", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_9", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_9", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_9", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_10", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_10", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_10", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_11", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_11", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_11", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_12", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_12", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_12", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_13", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_13", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_13", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_14", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_14", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_14", "role": "q0" }} , 
 	{ "name": "weights3_m_weights_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights3_m_weights_V_15", "role": "address0" }} , 
 	{ "name": "weights3_m_weights_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights3_m_weights_V_15", "role": "ce0" }} , 
 	{ "name": "weights3_m_weights_V_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weights3_m_weights_V_15", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_15", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_15", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_15", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_14", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_14", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_14", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_7", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_7", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_7", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_6", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_6", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_6", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_5", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_5", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_5", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_4", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_4", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_4", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_3", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_3", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_3", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_2", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_2", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_2", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_1", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_1", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_1", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_13", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_13", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_13", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_12", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_12", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_12", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_11", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_11", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_11", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_10", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_10", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_10", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_9", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_9", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_9", "role": "q0" }} , 
 	{ "name": "threshs3_m_threshold_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "threshs3_m_threshold_8", "role": "address0" }} , 
 	{ "name": "threshs3_m_threshold_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "threshs3_m_threshold_8", "role": "ce0" }} , 
 	{ "name": "threshs3_m_threshold_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "threshs3_m_threshold_8", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "Matrix_Vector_Activa_1",
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
		{"Name" : "out_V_V", "Type" : "Fifo", "Direction" : "O",
			"BlockSignal" : [
			{"Name" : "out_V_V_blk_n", "Type" : "RtlSignal"}]},
		{"Name" : "reps", "Type" : "Fifo", "Direction" : "I",
			"BlockSignal" : [
			{"Name" : "reps_blk_n", "Type" : "RtlSignal"}]},
		{"Name" : "reps_out", "Type" : "Fifo", "Direction" : "O",
			"BlockSignal" : [
			{"Name" : "reps_out_blk_n", "Type" : "RtlSignal"}]},
		{"Name" : "weights3_m_weights_V", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_1", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_2", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_3", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_4", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_5", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_6", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_7", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_8", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_9", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_10", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_11", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_12", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_13", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_14", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "weights3_m_weights_V_15", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_15", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_14", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_7", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_6", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_5", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_4", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_3", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_2", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_1", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_13", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_12", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_11", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_10", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_9", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "threshs3_m_threshold_8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BlackBoxJam_mux_1g8j_U293", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "4294967295", "Max" : "4294967295"}
]}

set Spec2ImplPortList { 
	in_V_V { ap_fifo {  { in_V_V_dout fifo_data 0 8 }  { in_V_V_empty_n fifo_status 0 1 }  { in_V_V_read fifo_update 1 1 } } }
	out_V_V { ap_fifo {  { out_V_V_din fifo_data 1 16 }  { out_V_V_full_n fifo_status 0 1 }  { out_V_V_write fifo_update 1 1 } } }
	reps { ap_fifo {  { reps_dout fifo_data 0 32 }  { reps_empty_n fifo_status 0 1 }  { reps_read fifo_update 1 1 } } }
	reps_out { ap_fifo {  { reps_out_din fifo_data 1 32 }  { reps_out_full_n fifo_status 0 1 }  { reps_out_write fifo_update 1 1 } } }
	weights3_m_weights_V { ap_memory {  { weights3_m_weights_V_address0 mem_address 1 9 }  { weights3_m_weights_V_ce0 mem_ce 1 1 }  { weights3_m_weights_V_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_1 { ap_memory {  { weights3_m_weights_V_1_address0 mem_address 1 9 }  { weights3_m_weights_V_1_ce0 mem_ce 1 1 }  { weights3_m_weights_V_1_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_2 { ap_memory {  { weights3_m_weights_V_2_address0 mem_address 1 9 }  { weights3_m_weights_V_2_ce0 mem_ce 1 1 }  { weights3_m_weights_V_2_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_3 { ap_memory {  { weights3_m_weights_V_3_address0 mem_address 1 9 }  { weights3_m_weights_V_3_ce0 mem_ce 1 1 }  { weights3_m_weights_V_3_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_4 { ap_memory {  { weights3_m_weights_V_4_address0 mem_address 1 9 }  { weights3_m_weights_V_4_ce0 mem_ce 1 1 }  { weights3_m_weights_V_4_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_5 { ap_memory {  { weights3_m_weights_V_5_address0 mem_address 1 9 }  { weights3_m_weights_V_5_ce0 mem_ce 1 1 }  { weights3_m_weights_V_5_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_6 { ap_memory {  { weights3_m_weights_V_6_address0 mem_address 1 9 }  { weights3_m_weights_V_6_ce0 mem_ce 1 1 }  { weights3_m_weights_V_6_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_7 { ap_memory {  { weights3_m_weights_V_7_address0 mem_address 1 9 }  { weights3_m_weights_V_7_ce0 mem_ce 1 1 }  { weights3_m_weights_V_7_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_8 { ap_memory {  { weights3_m_weights_V_8_address0 mem_address 1 9 }  { weights3_m_weights_V_8_ce0 mem_ce 1 1 }  { weights3_m_weights_V_8_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_9 { ap_memory {  { weights3_m_weights_V_9_address0 mem_address 1 9 }  { weights3_m_weights_V_9_ce0 mem_ce 1 1 }  { weights3_m_weights_V_9_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_10 { ap_memory {  { weights3_m_weights_V_10_address0 mem_address 1 9 }  { weights3_m_weights_V_10_ce0 mem_ce 1 1 }  { weights3_m_weights_V_10_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_11 { ap_memory {  { weights3_m_weights_V_11_address0 mem_address 1 9 }  { weights3_m_weights_V_11_ce0 mem_ce 1 1 }  { weights3_m_weights_V_11_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_12 { ap_memory {  { weights3_m_weights_V_12_address0 mem_address 1 9 }  { weights3_m_weights_V_12_ce0 mem_ce 1 1 }  { weights3_m_weights_V_12_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_13 { ap_memory {  { weights3_m_weights_V_13_address0 mem_address 1 9 }  { weights3_m_weights_V_13_ce0 mem_ce 1 1 }  { weights3_m_weights_V_13_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_14 { ap_memory {  { weights3_m_weights_V_14_address0 mem_address 1 9 }  { weights3_m_weights_V_14_ce0 mem_ce 1 1 }  { weights3_m_weights_V_14_q0 mem_dout 0 8 } } }
	weights3_m_weights_V_15 { ap_memory {  { weights3_m_weights_V_15_address0 mem_address 1 9 }  { weights3_m_weights_V_15_ce0 mem_ce 1 1 }  { weights3_m_weights_V_15_q0 mem_dout 0 8 } } }
	threshs3_m_threshold_15 { ap_memory {  { threshs3_m_threshold_15_address0 mem_address 1 2 }  { threshs3_m_threshold_15_ce0 mem_ce 1 1 }  { threshs3_m_threshold_15_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_14 { ap_memory {  { threshs3_m_threshold_14_address0 mem_address 1 2 }  { threshs3_m_threshold_14_ce0 mem_ce 1 1 }  { threshs3_m_threshold_14_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_7 { ap_memory {  { threshs3_m_threshold_7_address0 mem_address 1 2 }  { threshs3_m_threshold_7_ce0 mem_ce 1 1 }  { threshs3_m_threshold_7_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_6 { ap_memory {  { threshs3_m_threshold_6_address0 mem_address 1 2 }  { threshs3_m_threshold_6_ce0 mem_ce 1 1 }  { threshs3_m_threshold_6_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_5 { ap_memory {  { threshs3_m_threshold_5_address0 mem_address 1 2 }  { threshs3_m_threshold_5_ce0 mem_ce 1 1 }  { threshs3_m_threshold_5_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_4 { ap_memory {  { threshs3_m_threshold_4_address0 mem_address 1 2 }  { threshs3_m_threshold_4_ce0 mem_ce 1 1 }  { threshs3_m_threshold_4_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_3 { ap_memory {  { threshs3_m_threshold_3_address0 mem_address 1 2 }  { threshs3_m_threshold_3_ce0 mem_ce 1 1 }  { threshs3_m_threshold_3_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_2 { ap_memory {  { threshs3_m_threshold_2_address0 mem_address 1 2 }  { threshs3_m_threshold_2_ce0 mem_ce 1 1 }  { threshs3_m_threshold_2_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_1 { ap_memory {  { threshs3_m_threshold_1_address0 mem_address 1 2 }  { threshs3_m_threshold_1_ce0 mem_ce 1 1 }  { threshs3_m_threshold_1_q0 mem_dout 0 16 } } }
	threshs3_m_threshold { ap_memory {  { threshs3_m_threshold_address0 mem_address 1 2 }  { threshs3_m_threshold_ce0 mem_ce 1 1 }  { threshs3_m_threshold_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_13 { ap_memory {  { threshs3_m_threshold_13_address0 mem_address 1 2 }  { threshs3_m_threshold_13_ce0 mem_ce 1 1 }  { threshs3_m_threshold_13_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_12 { ap_memory {  { threshs3_m_threshold_12_address0 mem_address 1 2 }  { threshs3_m_threshold_12_ce0 mem_ce 1 1 }  { threshs3_m_threshold_12_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_11 { ap_memory {  { threshs3_m_threshold_11_address0 mem_address 1 2 }  { threshs3_m_threshold_11_ce0 mem_ce 1 1 }  { threshs3_m_threshold_11_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_10 { ap_memory {  { threshs3_m_threshold_10_address0 mem_address 1 2 }  { threshs3_m_threshold_10_ce0 mem_ce 1 1 }  { threshs3_m_threshold_10_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_9 { ap_memory {  { threshs3_m_threshold_9_address0 mem_address 1 2 }  { threshs3_m_threshold_9_ce0 mem_ce 1 1 }  { threshs3_m_threshold_9_q0 mem_dout 0 16 } } }
	threshs3_m_threshold_8 { ap_memory {  { threshs3_m_threshold_8_address0 mem_address 1 2 }  { threshs3_m_threshold_8_ce0 mem_ce 1 1 }  { threshs3_m_threshold_8_q0 mem_dout 0 16 } } }
}
