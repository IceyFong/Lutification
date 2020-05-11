# This script segment is generated automatically by AutoPilot

set id 17
set name BlackBoxJam_mul_3cud
set corename simcore_mul
set op mul
set stage_num 5
set max_latency -1
set registered_input 1
set in0_width 32
set in0_signed 1
set in1_width 10
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 18
set name BlackBoxJam_mux_1dEe
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set in1_width 64
set in1_signed 0
set in2_width 64
set in2_signed 0
set in3_width 64
set in3_signed 0
set in4_width 64
set in4_signed 0
set in5_width 64
set in5_signed 0
set in6_width 64
set in6_signed 0
set in7_width 64
set in7_signed 0
set in8_width 64
set in8_signed 0
set in9_width 64
set in9_signed 0
set in10_width 64
set in10_signed 0
set in11_width 64
set in11_signed 0
set in12_width 64
set in12_signed 0
set in13_width 64
set in13_signed 0
set in14_width 4
set in14_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    in5_width ${in5_width} \
    in5_signed ${in5_signed} \
    in6_width ${in6_width} \
    in6_signed ${in6_signed} \
    in7_width ${in7_width} \
    in7_signed ${in7_signed} \
    in8_width ${in8_width} \
    in8_signed ${in8_signed} \
    in9_width ${in9_width} \
    in9_signed ${in9_signed} \
    in10_width ${in10_width} \
    in10_signed ${in10_signed} \
    in11_width ${in11_width} \
    in11_signed ${in11_signed} \
    in12_width ${in12_width} \
    in12_signed ${in12_signed} \
    in13_width ${in13_width} \
    in13_signed ${in13_signed} \
    in14_width ${in14_width} \
    in14_signed ${in14_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    in5_width ${in5_width} \
    in5_signed ${in5_signed} \
    in6_width ${in6_width} \
    in6_signed ${in6_signed} \
    in7_width ${in7_width} \
    in7_signed ${in7_signed} \
    in8_width ${in8_width} \
    in8_signed ${in8_signed} \
    in9_width ${in9_width} \
    in9_signed ${in9_signed} \
    in10_width ${in10_width} \
    in10_signed ${in10_signed} \
    in11_width ${in11_width} \
    in11_signed ${in11_signed} \
    in12_width ${in12_width} \
    in12_signed ${in12_signed} \
    in13_width ${in13_width} \
    in13_signed ${in13_signed} \
    in14_width ${in14_width} \
    in14_signed ${in14_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name weights0_m_weights_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V \
    op interface \
    ports { weights0_m_weights_V_address0 { O 9 vector } weights0_m_weights_V_ce0 { O 1 bit } weights0_m_weights_V_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name weights0_m_weights_V_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_1 \
    op interface \
    ports { weights0_m_weights_V_1_address0 { O 9 vector } weights0_m_weights_V_1_ce0 { O 1 bit } weights0_m_weights_V_1_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name weights0_m_weights_V_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_2 \
    op interface \
    ports { weights0_m_weights_V_2_address0 { O 9 vector } weights0_m_weights_V_2_ce0 { O 1 bit } weights0_m_weights_V_2_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name weights0_m_weights_V_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_3 \
    op interface \
    ports { weights0_m_weights_V_3_address0 { O 9 vector } weights0_m_weights_V_3_ce0 { O 1 bit } weights0_m_weights_V_3_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name weights0_m_weights_V_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_4 \
    op interface \
    ports { weights0_m_weights_V_4_address0 { O 9 vector } weights0_m_weights_V_4_ce0 { O 1 bit } weights0_m_weights_V_4_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name weights0_m_weights_V_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_5 \
    op interface \
    ports { weights0_m_weights_V_5_address0 { O 9 vector } weights0_m_weights_V_5_ce0 { O 1 bit } weights0_m_weights_V_5_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name weights0_m_weights_V_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_6 \
    op interface \
    ports { weights0_m_weights_V_6_address0 { O 9 vector } weights0_m_weights_V_6_ce0 { O 1 bit } weights0_m_weights_V_6_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name weights0_m_weights_V_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_7 \
    op interface \
    ports { weights0_m_weights_V_7_address0 { O 9 vector } weights0_m_weights_V_7_ce0 { O 1 bit } weights0_m_weights_V_7_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name weights0_m_weights_V_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_8 \
    op interface \
    ports { weights0_m_weights_V_8_address0 { O 9 vector } weights0_m_weights_V_8_ce0 { O 1 bit } weights0_m_weights_V_8_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name weights0_m_weights_V_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_9 \
    op interface \
    ports { weights0_m_weights_V_9_address0 { O 9 vector } weights0_m_weights_V_9_ce0 { O 1 bit } weights0_m_weights_V_9_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name weights0_m_weights_V_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_10 \
    op interface \
    ports { weights0_m_weights_V_10_address0 { O 9 vector } weights0_m_weights_V_10_ce0 { O 1 bit } weights0_m_weights_V_10_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name weights0_m_weights_V_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_11 \
    op interface \
    ports { weights0_m_weights_V_11_address0 { O 9 vector } weights0_m_weights_V_11_ce0 { O 1 bit } weights0_m_weights_V_11_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name weights0_m_weights_V_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_12 \
    op interface \
    ports { weights0_m_weights_V_12_address0 { O 9 vector } weights0_m_weights_V_12_ce0 { O 1 bit } weights0_m_weights_V_12_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name weights0_m_weights_V_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_13 \
    op interface \
    ports { weights0_m_weights_V_13_address0 { O 9 vector } weights0_m_weights_V_13_ce0 { O 1 bit } weights0_m_weights_V_13_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name weights0_m_weights_V_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_14 \
    op interface \
    ports { weights0_m_weights_V_14_address0 { O 9 vector } weights0_m_weights_V_14_ce0 { O 1 bit } weights0_m_weights_V_14_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name weights0_m_weights_V_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_15 \
    op interface \
    ports { weights0_m_weights_V_15_address0 { O 9 vector } weights0_m_weights_V_15_ce0 { O 1 bit } weights0_m_weights_V_15_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name weights0_m_weights_V_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_16 \
    op interface \
    ports { weights0_m_weights_V_16_address0 { O 9 vector } weights0_m_weights_V_16_ce0 { O 1 bit } weights0_m_weights_V_16_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name weights0_m_weights_V_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_17 \
    op interface \
    ports { weights0_m_weights_V_17_address0 { O 9 vector } weights0_m_weights_V_17_ce0 { O 1 bit } weights0_m_weights_V_17_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name weights0_m_weights_V_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_18 \
    op interface \
    ports { weights0_m_weights_V_18_address0 { O 9 vector } weights0_m_weights_V_18_ce0 { O 1 bit } weights0_m_weights_V_18_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name weights0_m_weights_V_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_19 \
    op interface \
    ports { weights0_m_weights_V_19_address0 { O 9 vector } weights0_m_weights_V_19_ce0 { O 1 bit } weights0_m_weights_V_19_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name weights0_m_weights_V_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_20 \
    op interface \
    ports { weights0_m_weights_V_20_address0 { O 9 vector } weights0_m_weights_V_20_ce0 { O 1 bit } weights0_m_weights_V_20_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 44 \
    name weights0_m_weights_V_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_21 \
    op interface \
    ports { weights0_m_weights_V_21_address0 { O 9 vector } weights0_m_weights_V_21_ce0 { O 1 bit } weights0_m_weights_V_21_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name weights0_m_weights_V_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_22 \
    op interface \
    ports { weights0_m_weights_V_22_address0 { O 9 vector } weights0_m_weights_V_22_ce0 { O 1 bit } weights0_m_weights_V_22_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name weights0_m_weights_V_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_23 \
    op interface \
    ports { weights0_m_weights_V_23_address0 { O 9 vector } weights0_m_weights_V_23_ce0 { O 1 bit } weights0_m_weights_V_23_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name weights0_m_weights_V_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_24 \
    op interface \
    ports { weights0_m_weights_V_24_address0 { O 9 vector } weights0_m_weights_V_24_ce0 { O 1 bit } weights0_m_weights_V_24_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name weights0_m_weights_V_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_25 \
    op interface \
    ports { weights0_m_weights_V_25_address0 { O 9 vector } weights0_m_weights_V_25_ce0 { O 1 bit } weights0_m_weights_V_25_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name weights0_m_weights_V_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_26 \
    op interface \
    ports { weights0_m_weights_V_26_address0 { O 9 vector } weights0_m_weights_V_26_ce0 { O 1 bit } weights0_m_weights_V_26_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name weights0_m_weights_V_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_27 \
    op interface \
    ports { weights0_m_weights_V_27_address0 { O 9 vector } weights0_m_weights_V_27_ce0 { O 1 bit } weights0_m_weights_V_27_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name weights0_m_weights_V_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_28 \
    op interface \
    ports { weights0_m_weights_V_28_address0 { O 9 vector } weights0_m_weights_V_28_ce0 { O 1 bit } weights0_m_weights_V_28_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name weights0_m_weights_V_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_29 \
    op interface \
    ports { weights0_m_weights_V_29_address0 { O 9 vector } weights0_m_weights_V_29_ce0 { O 1 bit } weights0_m_weights_V_29_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name weights0_m_weights_V_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_30 \
    op interface \
    ports { weights0_m_weights_V_30_address0 { O 9 vector } weights0_m_weights_V_30_ce0 { O 1 bit } weights0_m_weights_V_30_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name weights0_m_weights_V_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights0_m_weights_V_31 \
    op interface \
    ports { weights0_m_weights_V_31_address0 { O 9 vector } weights0_m_weights_V_31_ce0 { O 1 bit } weights0_m_weights_V_31_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights0_m_weights_V_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name threshs0_m_threshold_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_31 \
    op interface \
    ports { threshs0_m_threshold_31_address0 { O 5 vector } threshs0_m_threshold_31_ce0 { O 1 bit } threshs0_m_threshold_31_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name threshs0_m_threshold_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_30 \
    op interface \
    ports { threshs0_m_threshold_30_address0 { O 5 vector } threshs0_m_threshold_30_ce0 { O 1 bit } threshs0_m_threshold_30_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name threshs0_m_threshold_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_19 \
    op interface \
    ports { threshs0_m_threshold_19_address0 { O 5 vector } threshs0_m_threshold_19_ce0 { O 1 bit } threshs0_m_threshold_19_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name threshs0_m_threshold_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_8 \
    op interface \
    ports { threshs0_m_threshold_8_address0 { O 5 vector } threshs0_m_threshold_8_ce0 { O 1 bit } threshs0_m_threshold_8_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name threshs0_m_threshold_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_5 \
    op interface \
    ports { threshs0_m_threshold_5_address0 { O 5 vector } threshs0_m_threshold_5_ce0 { O 1 bit } threshs0_m_threshold_5_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name threshs0_m_threshold_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_4 \
    op interface \
    ports { threshs0_m_threshold_4_address0 { O 5 vector } threshs0_m_threshold_4_ce0 { O 1 bit } threshs0_m_threshold_4_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name threshs0_m_threshold_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_3 \
    op interface \
    ports { threshs0_m_threshold_3_address0 { O 5 vector } threshs0_m_threshold_3_ce0 { O 1 bit } threshs0_m_threshold_3_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name threshs0_m_threshold_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_2 \
    op interface \
    ports { threshs0_m_threshold_2_address0 { O 5 vector } threshs0_m_threshold_2_ce0 { O 1 bit } threshs0_m_threshold_2_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 63 \
    name threshs0_m_threshold_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_1 \
    op interface \
    ports { threshs0_m_threshold_1_address0 { O 5 vector } threshs0_m_threshold_1_ce0 { O 1 bit } threshs0_m_threshold_1_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name threshs0_m_threshold \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold \
    op interface \
    ports { threshs0_m_threshold_address0 { O 5 vector } threshs0_m_threshold_ce0 { O 1 bit } threshs0_m_threshold_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 65 \
    name threshs0_m_threshold_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_29 \
    op interface \
    ports { threshs0_m_threshold_29_address0 { O 5 vector } threshs0_m_threshold_29_ce0 { O 1 bit } threshs0_m_threshold_29_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 66 \
    name threshs0_m_threshold_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_28 \
    op interface \
    ports { threshs0_m_threshold_28_address0 { O 5 vector } threshs0_m_threshold_28_ce0 { O 1 bit } threshs0_m_threshold_28_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 67 \
    name threshs0_m_threshold_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_27 \
    op interface \
    ports { threshs0_m_threshold_27_address0 { O 5 vector } threshs0_m_threshold_27_ce0 { O 1 bit } threshs0_m_threshold_27_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 68 \
    name threshs0_m_threshold_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_26 \
    op interface \
    ports { threshs0_m_threshold_26_address0 { O 5 vector } threshs0_m_threshold_26_ce0 { O 1 bit } threshs0_m_threshold_26_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 69 \
    name threshs0_m_threshold_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_25 \
    op interface \
    ports { threshs0_m_threshold_25_address0 { O 5 vector } threshs0_m_threshold_25_ce0 { O 1 bit } threshs0_m_threshold_25_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 70 \
    name threshs0_m_threshold_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_24 \
    op interface \
    ports { threshs0_m_threshold_24_address0 { O 5 vector } threshs0_m_threshold_24_ce0 { O 1 bit } threshs0_m_threshold_24_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 71 \
    name threshs0_m_threshold_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_23 \
    op interface \
    ports { threshs0_m_threshold_23_address0 { O 5 vector } threshs0_m_threshold_23_ce0 { O 1 bit } threshs0_m_threshold_23_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name threshs0_m_threshold_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_22 \
    op interface \
    ports { threshs0_m_threshold_22_address0 { O 5 vector } threshs0_m_threshold_22_ce0 { O 1 bit } threshs0_m_threshold_22_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name threshs0_m_threshold_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_21 \
    op interface \
    ports { threshs0_m_threshold_21_address0 { O 5 vector } threshs0_m_threshold_21_ce0 { O 1 bit } threshs0_m_threshold_21_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name threshs0_m_threshold_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_20 \
    op interface \
    ports { threshs0_m_threshold_20_address0 { O 5 vector } threshs0_m_threshold_20_ce0 { O 1 bit } threshs0_m_threshold_20_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name threshs0_m_threshold_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_18 \
    op interface \
    ports { threshs0_m_threshold_18_address0 { O 5 vector } threshs0_m_threshold_18_ce0 { O 1 bit } threshs0_m_threshold_18_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 76 \
    name threshs0_m_threshold_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_17 \
    op interface \
    ports { threshs0_m_threshold_17_address0 { O 5 vector } threshs0_m_threshold_17_ce0 { O 1 bit } threshs0_m_threshold_17_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 77 \
    name threshs0_m_threshold_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_16 \
    op interface \
    ports { threshs0_m_threshold_16_address0 { O 5 vector } threshs0_m_threshold_16_ce0 { O 1 bit } threshs0_m_threshold_16_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 78 \
    name threshs0_m_threshold_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_15 \
    op interface \
    ports { threshs0_m_threshold_15_address0 { O 5 vector } threshs0_m_threshold_15_ce0 { O 1 bit } threshs0_m_threshold_15_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 79 \
    name threshs0_m_threshold_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_14 \
    op interface \
    ports { threshs0_m_threshold_14_address0 { O 5 vector } threshs0_m_threshold_14_ce0 { O 1 bit } threshs0_m_threshold_14_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 80 \
    name threshs0_m_threshold_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_13 \
    op interface \
    ports { threshs0_m_threshold_13_address0 { O 5 vector } threshs0_m_threshold_13_ce0 { O 1 bit } threshs0_m_threshold_13_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 81 \
    name threshs0_m_threshold_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_12 \
    op interface \
    ports { threshs0_m_threshold_12_address0 { O 5 vector } threshs0_m_threshold_12_ce0 { O 1 bit } threshs0_m_threshold_12_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 82 \
    name threshs0_m_threshold_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_11 \
    op interface \
    ports { threshs0_m_threshold_11_address0 { O 5 vector } threshs0_m_threshold_11_ce0 { O 1 bit } threshs0_m_threshold_11_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 83 \
    name threshs0_m_threshold_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_10 \
    op interface \
    ports { threshs0_m_threshold_10_address0 { O 5 vector } threshs0_m_threshold_10_ce0 { O 1 bit } threshs0_m_threshold_10_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 84 \
    name threshs0_m_threshold_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_9 \
    op interface \
    ports { threshs0_m_threshold_9_address0 { O 5 vector } threshs0_m_threshold_9_ce0 { O 1 bit } threshs0_m_threshold_9_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name threshs0_m_threshold_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_7 \
    op interface \
    ports { threshs0_m_threshold_7_address0 { O 5 vector } threshs0_m_threshold_7_ce0 { O 1 bit } threshs0_m_threshold_7_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name threshs0_m_threshold_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename threshs0_m_threshold_6 \
    op interface \
    ports { threshs0_m_threshold_6_address0 { O 5 vector } threshs0_m_threshold_6_ce0 { O 1 bit } threshs0_m_threshold_6_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'threshs0_m_threshold_6'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name in_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_V \
    op interface \
    ports { in_V_V_dout { I 64 vector } in_V_V_empty_n { I 1 bit } in_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name out_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V \
    op interface \
    ports { out_V_V_din { O 32 vector } out_V_V_full_n { I 1 bit } out_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name reps \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_reps \
    op interface \
    ports { reps_dout { I 32 vector } reps_empty_n { I 1 bit } reps_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name reps_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_reps_out \
    op interface \
    ports { reps_out_din { O 32 vector } reps_out_full_n { I 1 bit } reps_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


