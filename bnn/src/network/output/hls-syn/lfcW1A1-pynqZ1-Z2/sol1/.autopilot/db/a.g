#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jf2715/BNN-PYNQ/bnn/src/network/output/hls-syn/lfcW1A1-pynqZ1-Z2/sol1/.autopilot/db/a.g.bc ${1+"$@"}
