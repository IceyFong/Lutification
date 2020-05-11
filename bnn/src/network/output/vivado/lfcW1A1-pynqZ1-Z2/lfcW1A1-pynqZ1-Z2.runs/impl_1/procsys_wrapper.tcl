proc start_step { step } {
  set stopFile ".stop.rst"
  if {[file isfile .stop.rst]} {
    puts ""
    puts "*** Halting run - EA reset detected ***"
    puts ""
    puts ""
    return -code error
  }
  set beginFile ".$step.begin.rst"
  set platform "$::tcl_platform(platform)"
  set user "$::tcl_platform(user)"
  set pid [pid]
  set host ""
  if { [string equal $platform unix] } {
    if { [info exist ::env(HOSTNAME)] } {
      set host $::env(HOSTNAME)
    }
  } else {
    if { [info exist ::env(COMPUTERNAME)] } {
      set host $::env(COMPUTERNAME)
    }
  }
  set ch [open $beginFile w]
  puts $ch "<?xml version=\"1.0\"?>"
  puts $ch "<ProcessHandle Version=\"1\" Minor=\"0\">"
  puts $ch "    <Process Command=\".planAhead.\" Owner=\"$user\" Host=\"$host\" Pid=\"$pid\">"
  puts $ch "    </Process>"
  puts $ch "</ProcessHandle>"
  close $ch
}

proc end_step { step } {
  set endFile ".$step.end.rst"
  set ch [open $endFile w]
  close $ch
}

proc step_failed { step } {
  set endFile ".$step.error.rst"
  set ch [open $endFile w]
  close $ch
}

set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000

start_step init_design
set ACTIVE_STEP init_design
set rc [catch {
  create_msg_db init_design.pb
  set_property design_mode GateLvl [current_fileset]
  set_param project.singleFileAddWarning.threshold 0
  set_property webtalk.parent_dir /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.cache/wt [current_project]
  set_property parent.project_path /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.xpr [current_project]
  set_property ip_repo_paths /home/jf2715/BNN-PYNQ/bnn/src/network/output/hls-syn/lfcW1A1-pynqZ1-Z2/sol1/impl/ip [current_project]
  set_property ip_output_repo /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.cache/ip [current_project]
  set_property ip_cache_permissions {read write} [current_project]
  set_property XPM_LIBRARIES XPM_CDC [current_project]
  add_files -quiet /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.runs/synth_1/procsys_wrapper.dcp
  add_files -quiet /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_ps7_0/procsys_ps7_0.dcp
  set_property netlist_only true [get_files /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_ps7_0/procsys_ps7_0.dcp]
  add_files -quiet /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_BlackBoxJam_0_0/procsys_BlackBoxJam_0_0.dcp
  set_property netlist_only true [get_files /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_BlackBoxJam_0_0/procsys_BlackBoxJam_0_0.dcp]
  add_files -quiet /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_rst_ps7_100M_0/procsys_rst_ps7_100M_0.dcp
  set_property netlist_only true [get_files /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_rst_ps7_100M_0/procsys_rst_ps7_100M_0.dcp]
  add_files -quiet /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_auto_pc_0/procsys_auto_pc_0.dcp
  set_property netlist_only true [get_files /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_auto_pc_0/procsys_auto_pc_0.dcp]
  add_files -quiet /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_auto_pc_1/procsys_auto_pc_1.dcp
  set_property netlist_only true [get_files /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_auto_pc_1/procsys_auto_pc_1.dcp]
  read_xdc -ref procsys_ps7_0 -cells inst /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_ps7_0/procsys_ps7_0.xdc
  set_property processing_order EARLY [get_files /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_ps7_0/procsys_ps7_0.xdc]
  read_xdc -prop_thru_buffers -ref procsys_rst_ps7_100M_0 -cells U0 /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_rst_ps7_100M_0/procsys_rst_ps7_100M_0_board.xdc
  set_property processing_order EARLY [get_files /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_rst_ps7_100M_0/procsys_rst_ps7_100M_0_board.xdc]
  read_xdc -ref procsys_rst_ps7_100M_0 -cells U0 /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_rst_ps7_100M_0/procsys_rst_ps7_100M_0.xdc
  set_property processing_order EARLY [get_files /home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.srcs/sources_1/bd/procsys/ip/procsys_rst_ps7_100M_0/procsys_rst_ps7_100M_0.xdc]
  read_xdc /home/jf2715/BNN-PYNQ/bnn/src/library/script/pynqZ1-Z2/pynqZ1-Z2.xdc
  link_design -top procsys_wrapper -part xc7z020clg400-1
  write_hwdef -file procsys_wrapper.hwdef
  close_msg_db -file init_design.pb
} RESULT]
if {$rc} {
  step_failed init_design
  return -code error $RESULT
} else {
  end_step init_design
  unset ACTIVE_STEP 
}

start_step opt_design
set ACTIVE_STEP opt_design
set rc [catch {
  create_msg_db opt_design.pb
  opt_design -directive Explore
  write_checkpoint -force procsys_wrapper_opt.dcp
  report_drc -file procsys_wrapper_drc_opted.rpt
  close_msg_db -file opt_design.pb
} RESULT]
if {$rc} {
  step_failed opt_design
  return -code error $RESULT
} else {
  end_step opt_design
  unset ACTIVE_STEP 
}

start_step place_design
set ACTIVE_STEP place_design
set rc [catch {
  create_msg_db place_design.pb
  implement_debug_core 
  place_design -directive ExtraTimingOpt
  write_checkpoint -force procsys_wrapper_placed.dcp
  report_io -file procsys_wrapper_io_placed.rpt
  report_utilization -file procsys_wrapper_utilization_placed.rpt -pb procsys_wrapper_utilization_placed.pb
  report_control_sets -verbose -file procsys_wrapper_control_sets_placed.rpt
  close_msg_db -file place_design.pb
} RESULT]
if {$rc} {
  step_failed place_design
  return -code error $RESULT
} else {
  end_step place_design
  unset ACTIVE_STEP 
}

start_step phys_opt_design
set ACTIVE_STEP phys_opt_design
set rc [catch {
  create_msg_db phys_opt_design.pb
  phys_opt_design -directive AggressiveExplore
  write_checkpoint -force procsys_wrapper_physopt.dcp
  close_msg_db -file phys_opt_design.pb
} RESULT]
if {$rc} {
  step_failed phys_opt_design
  return -code error $RESULT
} else {
  end_step phys_opt_design
  unset ACTIVE_STEP 
}

  set_msg_config -source 4 -id {Route 35-39} -severity "critical warning" -new_severity warning
start_step route_design
set ACTIVE_STEP route_design
set rc [catch {
  create_msg_db route_design.pb
  route_design -directive Explore
  write_checkpoint -force procsys_wrapper_routed.dcp
  report_drc -file procsys_wrapper_drc_routed.rpt -pb procsys_wrapper_drc_routed.pb -rpx procsys_wrapper_drc_routed.rpx
  report_methodology -file procsys_wrapper_methodology_drc_routed.rpt -rpx procsys_wrapper_methodology_drc_routed.rpx
  report_timing_summary -max_paths 10 -file procsys_wrapper_timing_summary_routed.rpt -rpx procsys_wrapper_timing_summary_routed.rpx
  report_power -file procsys_wrapper_power_routed.rpt -pb procsys_wrapper_power_summary_routed.pb -rpx procsys_wrapper_power_routed.rpx
  report_route_status -file procsys_wrapper_route_status.rpt -pb procsys_wrapper_route_status.pb
  report_clock_utilization -file procsys_wrapper_clock_utilization_routed.rpt
  close_msg_db -file route_design.pb
} RESULT]
if {$rc} {
  write_checkpoint -force procsys_wrapper_routed_error.dcp
  step_failed route_design
  return -code error $RESULT
} else {
  end_step route_design
  unset ACTIVE_STEP 
}

start_step post_route_phys_opt_design
set ACTIVE_STEP post_route_phys_opt_design
set rc [catch {
  create_msg_db post_route_phys_opt_design.pb
  phys_opt_design -directive AggressiveExplore
  write_checkpoint -force procsys_wrapper_postroute_physopt.dcp
  report_timing_summary -warn_on_violation -max_paths 10 -file procsys_wrapper_timing_summary_postroute_physopted.rpt -rpx procsys_wrapper_timing_summary_postroute_physopted.rpx
  close_msg_db -file post_route_phys_opt_design.pb
} RESULT]
if {$rc} {
  step_failed post_route_phys_opt_design
  return -code error $RESULT
} else {
  end_step post_route_phys_opt_design
  unset ACTIVE_STEP 
}

start_step write_bitstream
set ACTIVE_STEP write_bitstream
set rc [catch {
  create_msg_db write_bitstream.pb
  set_property XPM_LIBRARIES XPM_CDC [current_project]
  catch { write_mem_info -force procsys_wrapper.mmi }
  write_bitstream -force -no_partial_bitfile procsys_wrapper.bit 
  catch { write_sysdef -hwdef procsys_wrapper.hwdef -bitfile procsys_wrapper.bit -meminfo procsys_wrapper.mmi -file procsys_wrapper.sysdef }
  catch {write_debug_probes -quiet -force debug_nets}
  close_msg_db -file write_bitstream.pb
} RESULT]
if {$rc} {
  step_failed write_bitstream
  return -code error $RESULT
} else {
  end_step write_bitstream
  unset ACTIVE_STEP 
}

