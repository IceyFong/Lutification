#include "DoCompute.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void DoCompute::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        Stream2Mem_Batch_U0_ap_start = ap_const_logic_0;
    } else {
        Stream2Mem_Batch_U0_ap_start = ap_const_logic_1;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_1_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_hs_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_1_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_1_U0_ap_ready = ap_sync_Matrix_Vector_Activa_1_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_2_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_hs_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_2_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_2_U0_ap_ready = ap_sync_Matrix_Vector_Activa_2_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_3_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_hs_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_3_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_3_U0_ap_ready = ap_sync_Matrix_Vector_Activa_3_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_hs_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_U0_ap_ready = ap_sync_Matrix_Vector_Activa_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Mem2Stream_Batch12_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_hs_ready.read()))) {
            ap_sync_reg_Mem2Stream_Batch12_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Mem2Stream_Batch12_U0_ap_ready = ap_sync_Mem2Stream_Batch12_U0_ap_ready.read();
        }
    }
}

}

