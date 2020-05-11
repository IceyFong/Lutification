#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2016 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/mnt/applications/Xilinx/16.3/Vivado/2016.3/ids_lite/ISE/bin/lin64:/mnt/applications/Xilinx/16.3/Vivado/2016.3/bin
else
  PATH=/mnt/applications/Xilinx/16.3/Vivado/2016.3/ids_lite/ISE/bin/lin64:/mnt/applications/Xilinx/16.3/Vivado/2016.3/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=/mnt/applications/Xilinx/16.3/Vivado/2016.3/ids_lite/ISE/lib/lin64
else
  LD_LIBRARY_PATH=/mnt/applications/Xilinx/16.3/Vivado/2016.3/ids_lite/ISE/lib/lin64:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/jf2715/BNN-PYNQ/bnn/src/network/output/vivado/lfcW1A1-pynqZ1-Z2/lfcW1A1-pynqZ1-Z2.runs/impl_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

# pre-commands:
/bin/touch .init_design.begin.rst
EAStep vivado -log procsys_wrapper.vdi -applog -m64 -product Vivado -messageDb vivado.pb -mode batch -source procsys_wrapper.tcl -notrace


