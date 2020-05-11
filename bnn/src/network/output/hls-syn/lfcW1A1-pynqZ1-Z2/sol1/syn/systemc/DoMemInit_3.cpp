#include "DoMemInit.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void DoMemInit::thread_targetLayer_read_read_fu_842_p2() {
    targetLayer_read_read_fu_842_p2 = targetLayer.read();
}

void DoMemInit::thread_threshs0_m_threshold_10_address0() {
    threshs0_m_threshold_10_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_10_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_10_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_10_d0() {
    threshs0_m_threshold_10_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_10_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_1C, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_10_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_10_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_11_address0() {
    threshs0_m_threshold_11_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_11_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_11_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_11_d0() {
    threshs0_m_threshold_11_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_11_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_1B, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_11_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_11_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_12_address0() {
    threshs0_m_threshold_12_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_12_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_12_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_12_d0() {
    threshs0_m_threshold_12_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_12_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_1A, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_12_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_12_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_13_address0() {
    threshs0_m_threshold_13_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_13_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_13_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_13_d0() {
    threshs0_m_threshold_13_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_13_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_19, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_13_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_13_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_14_address0() {
    threshs0_m_threshold_14_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_14_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_14_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_14_d0() {
    threshs0_m_threshold_14_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_14_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_18, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_14_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_14_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_15_address0() {
    threshs0_m_threshold_15_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_15_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_15_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_15_d0() {
    threshs0_m_threshold_15_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_15_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_17, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_15_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_15_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_16_address0() {
    threshs0_m_threshold_16_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_16_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_16_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_16_d0() {
    threshs0_m_threshold_16_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_16_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_16, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_16_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_16_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_17_address0() {
    threshs0_m_threshold_17_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_17_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_17_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_17_d0() {
    threshs0_m_threshold_17_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_17_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_15, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_17_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_17_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_18_address0() {
    threshs0_m_threshold_18_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_18_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_18_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_18_d0() {
    threshs0_m_threshold_18_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_18_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_14, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_18_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_18_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_19_address0() {
    threshs0_m_threshold_19_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_19_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_19_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_19_d0() {
    threshs0_m_threshold_19_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_19_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_19_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_19_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_1_address0() {
    threshs0_m_threshold_1_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_1_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_1_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_1_d0() {
    threshs0_m_threshold_1_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_1_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_1_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_1_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_20_address0() {
    threshs0_m_threshold_20_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_20_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_20_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_20_d0() {
    threshs0_m_threshold_20_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_20_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_13, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_20_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_20_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_21_address0() {
    threshs0_m_threshold_21_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_21_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_21_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_21_d0() {
    threshs0_m_threshold_21_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_21_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_12, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_21_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_21_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_22_address0() {
    threshs0_m_threshold_22_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_22_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_22_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_22_d0() {
    threshs0_m_threshold_22_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_22_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_11, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_22_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_22_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_23_address0() {
    threshs0_m_threshold_23_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_23_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_23_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_23_d0() {
    threshs0_m_threshold_23_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_23_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_10, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_23_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_23_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_24_address0() {
    threshs0_m_threshold_24_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_24_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_24_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_24_d0() {
    threshs0_m_threshold_24_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_24_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_F, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_24_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_24_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_25_address0() {
    threshs0_m_threshold_25_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_25_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_25_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_25_d0() {
    threshs0_m_threshold_25_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_25_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_E, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_25_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_25_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_26_address0() {
    threshs0_m_threshold_26_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_26_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_26_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_26_d0() {
    threshs0_m_threshold_26_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_26_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_D, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_26_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_26_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_27_address0() {
    threshs0_m_threshold_27_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_27_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_27_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_27_d0() {
    threshs0_m_threshold_27_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_27_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_C, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_27_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_27_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_28_address0() {
    threshs0_m_threshold_28_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_28_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_28_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_28_d0() {
    threshs0_m_threshold_28_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_28_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_B, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_28_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_28_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_29_address0() {
    threshs0_m_threshold_29_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_29_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_29_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_29_d0() {
    threshs0_m_threshold_29_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_29_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_29_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_29_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_2_address0() {
    threshs0_m_threshold_2_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_2_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_2_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_2_d0() {
    threshs0_m_threshold_2_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_2_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_2_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_2_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_30_address0() {
    threshs0_m_threshold_30_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_30_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_30_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_30_d0() {
    threshs0_m_threshold_30_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_30_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_30_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_30_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_31_address0() {
    threshs0_m_threshold_31_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_31_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_31_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_31_d0() {
    threshs0_m_threshold_31_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_31_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_31_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_31_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_3_address0() {
    threshs0_m_threshold_3_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_3_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_3_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_3_d0() {
    threshs0_m_threshold_3_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_3_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_3_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_3_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_4_address0() {
    threshs0_m_threshold_4_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_4_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_4_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_4_d0() {
    threshs0_m_threshold_4_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_4_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_4_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_4_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_5_address0() {
    threshs0_m_threshold_5_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_5_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_5_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_5_d0() {
    threshs0_m_threshold_5_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_5_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_5_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_5_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_6_address0() {
    threshs0_m_threshold_6_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_6_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_6_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_6_d0() {
    threshs0_m_threshold_6_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_6_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_1F, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_6_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_6_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_7_address0() {
    threshs0_m_threshold_7_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_7_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_7_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_7_d0() {
    threshs0_m_threshold_7_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_7_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_1E, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_7_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_7_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_8_address0() {
    threshs0_m_threshold_8_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_8_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_8_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_8_d0() {
    threshs0_m_threshold_8_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_8_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_8_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_8_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_9_address0() {
    threshs0_m_threshold_9_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_9_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_9_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_9_d0() {
    threshs0_m_threshold_9_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_9_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_1D, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_9_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_9_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_address0() {
    threshs0_m_threshold_address0 =  (sc_lv<5>) (tmp_s_fu_4852_p1.read());
}

void DoMemInit::thread_threshs0_m_threshold_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs0_m_threshold_ce0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs0_m_threshold_d0() {
    threshs0_m_threshold_d0 = tmp_8403_fu_4888_p1.read();
}

void DoMemInit::thread_threshs0_m_threshold_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_1) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_8404_fu_4924_p1.read())))) {
        threshs0_m_threshold_we0 = ap_const_logic_1;
    } else {
        threshs0_m_threshold_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_10_address0() {
    threshs1_m_threshold_10_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_10_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_10_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_10_d0() {
    threshs1_m_threshold_10_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_10_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_39)))) {
        threshs1_m_threshold_10_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_10_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_11_address0() {
    threshs1_m_threshold_11_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_11_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_11_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_11_d0() {
    threshs1_m_threshold_11_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_11_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_38)))) {
        threshs1_m_threshold_11_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_11_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_12_address0() {
    threshs1_m_threshold_12_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_12_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_12_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_12_d0() {
    threshs1_m_threshold_12_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_12_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_37)))) {
        threshs1_m_threshold_12_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_12_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_13_address0() {
    threshs1_m_threshold_13_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_13_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_13_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_13_d0() {
    threshs1_m_threshold_13_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_13_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_36)))) {
        threshs1_m_threshold_13_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_13_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_14_address0() {
    threshs1_m_threshold_14_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_14_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_14_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_14_d0() {
    threshs1_m_threshold_14_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_14_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_35)))) {
        threshs1_m_threshold_14_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_14_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_15_address0() {
    threshs1_m_threshold_15_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_15_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_15_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_15_d0() {
    threshs1_m_threshold_15_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_15_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_34)))) {
        threshs1_m_threshold_15_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_15_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_16_address0() {
    threshs1_m_threshold_16_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_16_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_16_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_16_d0() {
    threshs1_m_threshold_16_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_16_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_33)))) {
        threshs1_m_threshold_16_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_16_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_17_address0() {
    threshs1_m_threshold_17_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_17_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_17_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_17_d0() {
    threshs1_m_threshold_17_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_17_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_32)))) {
        threshs1_m_threshold_17_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_17_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_18_address0() {
    threshs1_m_threshold_18_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_18_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_18_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_18_d0() {
    threshs1_m_threshold_18_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_18_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_5)))) {
        threshs1_m_threshold_18_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_18_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_19_address0() {
    threshs1_m_threshold_19_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_19_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_19_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_19_d0() {
    threshs1_m_threshold_19_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_19_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_31)))) {
        threshs1_m_threshold_19_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_19_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_1_address0() {
    threshs1_m_threshold_1_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_1_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_1_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_1_d0() {
    threshs1_m_threshold_1_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_1_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_8)))) {
        threshs1_m_threshold_1_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_1_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_20_address0() {
    threshs1_m_threshold_20_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_20_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_20_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_20_d0() {
    threshs1_m_threshold_20_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_20_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_30)))) {
        threshs1_m_threshold_20_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_20_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_21_address0() {
    threshs1_m_threshold_21_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_21_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_21_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_21_d0() {
    threshs1_m_threshold_21_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_21_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_2F)))) {
        threshs1_m_threshold_21_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_21_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_22_address0() {
    threshs1_m_threshold_22_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_22_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_22_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_22_d0() {
    threshs1_m_threshold_22_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_22_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_2E)))) {
        threshs1_m_threshold_22_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_22_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_23_address0() {
    threshs1_m_threshold_23_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_23_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_23_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_23_d0() {
    threshs1_m_threshold_23_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_23_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_2D)))) {
        threshs1_m_threshold_23_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_23_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_24_address0() {
    threshs1_m_threshold_24_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_24_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_24_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_24_d0() {
    threshs1_m_threshold_24_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_24_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_2C)))) {
        threshs1_m_threshold_24_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_24_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_25_address0() {
    threshs1_m_threshold_25_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_25_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_25_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_25_d0() {
    threshs1_m_threshold_25_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_25_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_2B)))) {
        threshs1_m_threshold_25_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_25_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_26_address0() {
    threshs1_m_threshold_26_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_26_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_26_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_26_d0() {
    threshs1_m_threshold_26_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_26_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_2A)))) {
        threshs1_m_threshold_26_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_26_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_27_address0() {
    threshs1_m_threshold_27_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_27_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_27_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_27_d0() {
    threshs1_m_threshold_27_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_27_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_29)))) {
        threshs1_m_threshold_27_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_27_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_28_address0() {
    threshs1_m_threshold_28_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_28_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_28_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_28_d0() {
    threshs1_m_threshold_28_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_28_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_28)))) {
        threshs1_m_threshold_28_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_28_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_29_address0() {
    threshs1_m_threshold_29_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_29_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_29_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_29_d0() {
    threshs1_m_threshold_29_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_29_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_4)))) {
        threshs1_m_threshold_29_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_29_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_2_address0() {
    threshs1_m_threshold_2_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_2_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_2_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_2_d0() {
    threshs1_m_threshold_2_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_2_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_7)))) {
        threshs1_m_threshold_2_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_2_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_30_address0() {
    threshs1_m_threshold_30_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_30_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_30_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_30_d0() {
    threshs1_m_threshold_30_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_30_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_27)))) {
        threshs1_m_threshold_30_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_30_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_31_address0() {
    threshs1_m_threshold_31_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_31_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_31_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_31_d0() {
    threshs1_m_threshold_31_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_31_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_26)))) {
        threshs1_m_threshold_31_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_31_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_32_address0() {
    threshs1_m_threshold_32_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_32_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_32_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_32_d0() {
    threshs1_m_threshold_32_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_32_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_25)))) {
        threshs1_m_threshold_32_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_32_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_33_address0() {
    threshs1_m_threshold_33_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_33_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_33_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_33_d0() {
    threshs1_m_threshold_33_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_33_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_24)))) {
        threshs1_m_threshold_33_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_33_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_34_address0() {
    threshs1_m_threshold_34_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_34_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_34_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_34_d0() {
    threshs1_m_threshold_34_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_34_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_23)))) {
        threshs1_m_threshold_34_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_34_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_35_address0() {
    threshs1_m_threshold_35_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_35_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_35_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_35_d0() {
    threshs1_m_threshold_35_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_35_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_22)))) {
        threshs1_m_threshold_35_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_35_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_36_address0() {
    threshs1_m_threshold_36_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_36_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_36_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_36_d0() {
    threshs1_m_threshold_36_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_36_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_21)))) {
        threshs1_m_threshold_36_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_36_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_37_address0() {
    threshs1_m_threshold_37_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_37_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_37_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_37_d0() {
    threshs1_m_threshold_37_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_37_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_20)))) {
        threshs1_m_threshold_37_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_37_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_38_address0() {
    threshs1_m_threshold_38_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_38_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_38_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_38_d0() {
    threshs1_m_threshold_38_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_38_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_1F)))) {
        threshs1_m_threshold_38_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_38_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_39_address0() {
    threshs1_m_threshold_39_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_39_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_39_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_39_d0() {
    threshs1_m_threshold_39_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_39_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_1E)))) {
        threshs1_m_threshold_39_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_39_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_3_address0() {
    threshs1_m_threshold_3_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_3_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_3_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_3_d0() {
    threshs1_m_threshold_3_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_3_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_3F)))) {
        threshs1_m_threshold_3_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_3_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_40_address0() {
    threshs1_m_threshold_40_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_40_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_40_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_40_d0() {
    threshs1_m_threshold_40_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_40_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_3)))) {
        threshs1_m_threshold_40_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_40_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_41_address0() {
    threshs1_m_threshold_41_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_41_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_41_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_41_d0() {
    threshs1_m_threshold_41_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_41_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_1D)))) {
        threshs1_m_threshold_41_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_41_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_42_address0() {
    threshs1_m_threshold_42_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_42_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_42_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_42_d0() {
    threshs1_m_threshold_42_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_42_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_1C)))) {
        threshs1_m_threshold_42_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_42_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_43_address0() {
    threshs1_m_threshold_43_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_43_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_43_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_43_d0() {
    threshs1_m_threshold_43_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_43_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_1B)))) {
        threshs1_m_threshold_43_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_43_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_44_address0() {
    threshs1_m_threshold_44_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_44_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_44_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_44_d0() {
    threshs1_m_threshold_44_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_44_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_1A)))) {
        threshs1_m_threshold_44_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_44_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_45_address0() {
    threshs1_m_threshold_45_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_45_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_45_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_45_d0() {
    threshs1_m_threshold_45_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_45_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_19)))) {
        threshs1_m_threshold_45_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_45_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_46_address0() {
    threshs1_m_threshold_46_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_46_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_46_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_46_d0() {
    threshs1_m_threshold_46_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_46_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_18)))) {
        threshs1_m_threshold_46_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_46_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_47_address0() {
    threshs1_m_threshold_47_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_47_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_47_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_47_d0() {
    threshs1_m_threshold_47_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_47_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_17)))) {
        threshs1_m_threshold_47_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_47_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_48_address0() {
    threshs1_m_threshold_48_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_48_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_48_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_48_d0() {
    threshs1_m_threshold_48_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_48_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_16)))) {
        threshs1_m_threshold_48_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_48_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_49_address0() {
    threshs1_m_threshold_49_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_49_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_49_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_49_d0() {
    threshs1_m_threshold_49_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_49_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_15)))) {
        threshs1_m_threshold_49_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_49_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_4_address0() {
    threshs1_m_threshold_4_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_4_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_4_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_4_d0() {
    threshs1_m_threshold_4_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_4_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_3E)))) {
        threshs1_m_threshold_4_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_4_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_50_address0() {
    threshs1_m_threshold_50_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_50_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_50_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_50_d0() {
    threshs1_m_threshold_50_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_50_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_14)))) {
        threshs1_m_threshold_50_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_50_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_51_address0() {
    threshs1_m_threshold_51_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_51_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_51_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_51_d0() {
    threshs1_m_threshold_51_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_51_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_2)))) {
        threshs1_m_threshold_51_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_51_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_52_address0() {
    threshs1_m_threshold_52_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_52_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_52_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_52_d0() {
    threshs1_m_threshold_52_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_52_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_13)))) {
        threshs1_m_threshold_52_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_52_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_53_address0() {
    threshs1_m_threshold_53_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_53_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_53_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_53_d0() {
    threshs1_m_threshold_53_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_53_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_12)))) {
        threshs1_m_threshold_53_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_53_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_54_address0() {
    threshs1_m_threshold_54_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_54_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_54_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_54_d0() {
    threshs1_m_threshold_54_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_54_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_11)))) {
        threshs1_m_threshold_54_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_54_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_55_address0() {
    threshs1_m_threshold_55_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_55_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_55_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_55_d0() {
    threshs1_m_threshold_55_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_55_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_10)))) {
        threshs1_m_threshold_55_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_55_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_56_address0() {
    threshs1_m_threshold_56_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_56_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_56_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_56_d0() {
    threshs1_m_threshold_56_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_56_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_F)))) {
        threshs1_m_threshold_56_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_56_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_57_address0() {
    threshs1_m_threshold_57_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_57_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_57_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_57_d0() {
    threshs1_m_threshold_57_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_57_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_E)))) {
        threshs1_m_threshold_57_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_57_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_58_address0() {
    threshs1_m_threshold_58_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_58_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_58_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_58_d0() {
    threshs1_m_threshold_58_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_58_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_D)))) {
        threshs1_m_threshold_58_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_58_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_59_address0() {
    threshs1_m_threshold_59_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_59_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_59_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_59_d0() {
    threshs1_m_threshold_59_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_59_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_C)))) {
        threshs1_m_threshold_59_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_59_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_5_address0() {
    threshs1_m_threshold_5_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_5_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_5_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_5_d0() {
    threshs1_m_threshold_5_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_5_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_3D)))) {
        threshs1_m_threshold_5_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_5_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_60_address0() {
    threshs1_m_threshold_60_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_60_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_60_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_60_d0() {
    threshs1_m_threshold_60_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_60_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_B)))) {
        threshs1_m_threshold_60_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_60_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_61_address0() {
    threshs1_m_threshold_61_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_61_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_61_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_61_d0() {
    threshs1_m_threshold_61_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_61_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_A)))) {
        threshs1_m_threshold_61_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_61_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_62_address0() {
    threshs1_m_threshold_62_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_62_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_62_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_62_d0() {
    threshs1_m_threshold_62_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_62_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_1)))) {
        threshs1_m_threshold_62_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_62_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_63_address0() {
    threshs1_m_threshold_63_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_63_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_63_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_63_d0() {
    threshs1_m_threshold_63_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_63_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_0)))) {
        threshs1_m_threshold_63_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_63_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_6_address0() {
    threshs1_m_threshold_6_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_6_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_6_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_6_d0() {
    threshs1_m_threshold_6_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_6_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_3C)))) {
        threshs1_m_threshold_6_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_6_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_7_address0() {
    threshs1_m_threshold_7_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_7_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_7_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_7_d0() {
    threshs1_m_threshold_7_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_7_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_6)))) {
        threshs1_m_threshold_7_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_7_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_8_address0() {
    threshs1_m_threshold_8_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_8_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_8_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_8_d0() {
    threshs1_m_threshold_8_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_8_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_3B)))) {
        threshs1_m_threshold_8_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_8_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_9_address0() {
    threshs1_m_threshold_9_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_9_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_9_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_9_d0() {
    threshs1_m_threshold_9_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_9_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_3A)))) {
        threshs1_m_threshold_9_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_9_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_address0() {
    threshs1_m_threshold_address0 =  (sc_lv<4>) (tmp_2_fu_4572_p1.read());
}

void DoMemInit::thread_threshs1_m_threshold_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs1_m_threshold_ce0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs1_m_threshold_d0() {
    threshs1_m_threshold_d0 = tmp_8407_fu_4640_p1.read();
}

void DoMemInit::thread_threshs1_m_threshold_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_3) && 
          esl_seteq<1,6,6>(tmp_8408_fu_4708_p1.read(), ap_const_lv6_9)))) {
        threshs1_m_threshold_we0 = ap_const_logic_1;
    } else {
        threshs1_m_threshold_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_10_address0() {
    threshs2_m_threshold_10_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_10_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_10_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_10_d0() {
    threshs2_m_threshold_10_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_10_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_1C)))) {
        threshs2_m_threshold_10_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_10_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_11_address0() {
    threshs2_m_threshold_11_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_11_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_11_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_11_d0() {
    threshs2_m_threshold_11_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_11_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_1B)))) {
        threshs2_m_threshold_11_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_11_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_12_address0() {
    threshs2_m_threshold_12_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_12_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_12_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_12_d0() {
    threshs2_m_threshold_12_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_12_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_1A)))) {
        threshs2_m_threshold_12_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_12_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_13_address0() {
    threshs2_m_threshold_13_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_13_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_13_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_13_d0() {
    threshs2_m_threshold_13_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_13_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_19)))) {
        threshs2_m_threshold_13_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_13_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_14_address0() {
    threshs2_m_threshold_14_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_14_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_14_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_14_d0() {
    threshs2_m_threshold_14_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_14_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_18)))) {
        threshs2_m_threshold_14_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_14_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_15_address0() {
    threshs2_m_threshold_15_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_15_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_15_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_15_d0() {
    threshs2_m_threshold_15_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_15_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_17)))) {
        threshs2_m_threshold_15_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_15_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_16_address0() {
    threshs2_m_threshold_16_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_16_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_16_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_16_d0() {
    threshs2_m_threshold_16_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_16_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_16)))) {
        threshs2_m_threshold_16_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_16_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_17_address0() {
    threshs2_m_threshold_17_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_17_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_17_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_17_d0() {
    threshs2_m_threshold_17_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_17_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_15)))) {
        threshs2_m_threshold_17_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_17_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_18_address0() {
    threshs2_m_threshold_18_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_18_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_18_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_18_d0() {
    threshs2_m_threshold_18_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_18_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_14)))) {
        threshs2_m_threshold_18_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_18_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_19_address0() {
    threshs2_m_threshold_19_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_19_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_19_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_19_d0() {
    threshs2_m_threshold_19_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_19_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_2)))) {
        threshs2_m_threshold_19_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_19_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_1_address0() {
    threshs2_m_threshold_1_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_1_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_1_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_1_d0() {
    threshs2_m_threshold_1_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_1_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_8)))) {
        threshs2_m_threshold_1_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_1_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_20_address0() {
    threshs2_m_threshold_20_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_20_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_20_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_20_d0() {
    threshs2_m_threshold_20_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_20_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_13)))) {
        threshs2_m_threshold_20_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_20_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_21_address0() {
    threshs2_m_threshold_21_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_21_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_21_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_21_d0() {
    threshs2_m_threshold_21_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_21_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_12)))) {
        threshs2_m_threshold_21_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_21_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_22_address0() {
    threshs2_m_threshold_22_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_22_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_22_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_22_d0() {
    threshs2_m_threshold_22_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_22_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_11)))) {
        threshs2_m_threshold_22_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_22_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_23_address0() {
    threshs2_m_threshold_23_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_23_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_23_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_23_d0() {
    threshs2_m_threshold_23_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_23_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_10)))) {
        threshs2_m_threshold_23_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_23_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_24_address0() {
    threshs2_m_threshold_24_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_24_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_24_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_24_d0() {
    threshs2_m_threshold_24_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_24_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_F)))) {
        threshs2_m_threshold_24_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_24_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_25_address0() {
    threshs2_m_threshold_25_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_25_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_25_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_25_d0() {
    threshs2_m_threshold_25_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_25_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_E)))) {
        threshs2_m_threshold_25_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_25_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_26_address0() {
    threshs2_m_threshold_26_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_26_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_26_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_26_d0() {
    threshs2_m_threshold_26_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_26_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_D)))) {
        threshs2_m_threshold_26_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_26_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_27_address0() {
    threshs2_m_threshold_27_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_27_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_27_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_27_d0() {
    threshs2_m_threshold_27_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_27_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_C)))) {
        threshs2_m_threshold_27_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_27_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_28_address0() {
    threshs2_m_threshold_28_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_28_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_28_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_28_d0() {
    threshs2_m_threshold_28_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_28_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_B)))) {
        threshs2_m_threshold_28_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_28_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_29_address0() {
    threshs2_m_threshold_29_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_29_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_29_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_29_d0() {
    threshs2_m_threshold_29_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_29_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_A)))) {
        threshs2_m_threshold_29_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_29_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_2_address0() {
    threshs2_m_threshold_2_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_2_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_2_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_2_d0() {
    threshs2_m_threshold_2_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_2_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_7)))) {
        threshs2_m_threshold_2_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_2_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_30_address0() {
    threshs2_m_threshold_30_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_30_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_30_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_30_d0() {
    threshs2_m_threshold_30_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_30_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_1)))) {
        threshs2_m_threshold_30_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_30_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_31_address0() {
    threshs2_m_threshold_31_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_31_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_31_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_31_d0() {
    threshs2_m_threshold_31_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_31_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_0)))) {
        threshs2_m_threshold_31_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_31_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_3_address0() {
    threshs2_m_threshold_3_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_3_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_3_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_3_d0() {
    threshs2_m_threshold_3_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_3_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_6)))) {
        threshs2_m_threshold_3_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_3_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_4_address0() {
    threshs2_m_threshold_4_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_4_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_4_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_4_d0() {
    threshs2_m_threshold_4_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_4_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_5)))) {
        threshs2_m_threshold_4_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_4_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_5_address0() {
    threshs2_m_threshold_5_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_5_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_5_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_5_d0() {
    threshs2_m_threshold_5_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_5_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_4)))) {
        threshs2_m_threshold_5_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_5_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_6_address0() {
    threshs2_m_threshold_6_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_6_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_6_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_6_d0() {
    threshs2_m_threshold_6_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_6_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_1F)))) {
        threshs2_m_threshold_6_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_6_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_7_address0() {
    threshs2_m_threshold_7_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_7_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_7_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_7_d0() {
    threshs2_m_threshold_7_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_7_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_1E)))) {
        threshs2_m_threshold_7_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_7_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_8_address0() {
    threshs2_m_threshold_8_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_8_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_8_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_8_d0() {
    threshs2_m_threshold_8_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_8_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_3)))) {
        threshs2_m_threshold_8_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_8_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_9_address0() {
    threshs2_m_threshold_9_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_9_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_9_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_9_d0() {
    threshs2_m_threshold_9_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_9_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_1D)))) {
        threshs2_m_threshold_9_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_9_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_address0() {
    threshs2_m_threshold_address0 =  (sc_lv<5>) (tmp_4_fu_4456_p1.read());
}

void DoMemInit::thread_threshs2_m_threshold_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs2_m_threshold_ce0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs2_m_threshold_d0() {
    threshs2_m_threshold_d0 = tmp_8410_fu_4492_p1.read();
}

void DoMemInit::thread_threshs2_m_threshold_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_5) && 
          esl_seteq<1,5,5>(tmp_8411_fu_4528_p1.read(), ap_const_lv5_9)))) {
        threshs2_m_threshold_we0 = ap_const_logic_1;
    } else {
        threshs2_m_threshold_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_10_address0() {
    threshs3_m_threshold_10_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_10_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_10_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_10_d0() {
    threshs3_m_threshold_10_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_10_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_D)))) {
        threshs3_m_threshold_10_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_10_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_11_address0() {
    threshs3_m_threshold_11_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_11_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_11_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_11_d0() {
    threshs3_m_threshold_11_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_11_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_C)))) {
        threshs3_m_threshold_11_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_11_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_12_address0() {
    threshs3_m_threshold_12_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_12_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_12_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_12_d0() {
    threshs3_m_threshold_12_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_12_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_B)))) {
        threshs3_m_threshold_12_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_12_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_13_address0() {
    threshs3_m_threshold_13_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_13_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_13_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_13_d0() {
    threshs3_m_threshold_13_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_13_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_A)))) {
        threshs3_m_threshold_13_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_13_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_14_address0() {
    threshs3_m_threshold_14_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_14_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_14_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_14_d0() {
    threshs3_m_threshold_14_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_14_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_1)))) {
        threshs3_m_threshold_14_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_14_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_15_address0() {
    threshs3_m_threshold_15_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_15_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_15_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_15_d0() {
    threshs3_m_threshold_15_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_15_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_0)))) {
        threshs3_m_threshold_15_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_15_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_1_address0() {
    threshs3_m_threshold_1_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_1_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_1_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_1_d0() {
    threshs3_m_threshold_1_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_1_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_8)))) {
        threshs3_m_threshold_1_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_1_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_2_address0() {
    threshs3_m_threshold_2_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_2_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_2_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_2_d0() {
    threshs3_m_threshold_2_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_2_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_7)))) {
        threshs3_m_threshold_2_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_2_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_3_address0() {
    threshs3_m_threshold_3_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_3_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_3_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_3_d0() {
    threshs3_m_threshold_3_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_3_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_6)))) {
        threshs3_m_threshold_3_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_3_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_4_address0() {
    threshs3_m_threshold_4_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_4_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_4_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_4_d0() {
    threshs3_m_threshold_4_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_4_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_5)))) {
        threshs3_m_threshold_4_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_4_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_5_address0() {
    threshs3_m_threshold_5_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_5_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_5_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_5_d0() {
    threshs3_m_threshold_5_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_5_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_4)))) {
        threshs3_m_threshold_5_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_5_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_6_address0() {
    threshs3_m_threshold_6_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_6_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_6_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_6_d0() {
    threshs3_m_threshold_6_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_6_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_3)))) {
        threshs3_m_threshold_6_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_6_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_7_address0() {
    threshs3_m_threshold_7_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_7_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_7_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_7_d0() {
    threshs3_m_threshold_7_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_7_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_2)))) {
        threshs3_m_threshold_7_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_7_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_8_address0() {
    threshs3_m_threshold_8_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_8_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_8_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_8_d0() {
    threshs3_m_threshold_8_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_8_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_F)))) {
        threshs3_m_threshold_8_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_8_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_9_address0() {
    threshs3_m_threshold_9_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_9_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_9_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_9_d0() {
    threshs3_m_threshold_9_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_9_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_E)))) {
        threshs3_m_threshold_9_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_9_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_address0() {
    threshs3_m_threshold_address0 =  (sc_lv<2>) (tmp_6_fu_4368_p1.read());
}

void DoMemInit::thread_threshs3_m_threshold_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        threshs3_m_threshold_ce0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_threshs3_m_threshold_d0() {
    threshs3_m_threshold_d0 = tmp_8414_fu_4388_p1.read();
}

void DoMemInit::thread_threshs3_m_threshold_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_7) && 
          esl_seteq<1,4,4>(tmp_8415_fu_4408_p1.read(), ap_const_lv4_9)))) {
        threshs3_m_threshold_we0 = ap_const_logic_1;
    } else {
        threshs3_m_threshold_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_tmp_1_fu_4712_p1() {
    tmp_1_fu_4712_p1 = esl_zext<64,32>(targetInd.read());
}

void DoMemInit::thread_tmp_2_fu_4572_p1() {
    tmp_2_fu_4572_p1 = esl_zext<64,32>(targetInd.read());
}

void DoMemInit::thread_tmp_3_fu_4532_p1() {
    tmp_3_fu_4532_p1 = esl_zext<64,32>(targetInd.read());
}

void DoMemInit::thread_tmp_4_fu_4456_p1() {
    tmp_4_fu_4456_p1 = esl_zext<64,32>(targetInd.read());
}

void DoMemInit::thread_tmp_5_fu_4412_p1() {
    tmp_5_fu_4412_p1 = esl_zext<64,32>(targetInd.read());
}

void DoMemInit::thread_tmp_6_fu_4368_p1() {
    tmp_6_fu_4368_p1 = esl_zext<64,32>(targetInd.read());
}

void DoMemInit::thread_tmp_8402_fu_4964_p1() {
    tmp_8402_fu_4964_p1 = targetMem.read().range(5-1, 0);
}

void DoMemInit::thread_tmp_8403_fu_4888_p1() {
    tmp_8403_fu_4888_p1 = val_V.read().range(16-1, 0);
}

void DoMemInit::thread_tmp_8404_fu_4924_p1() {
    tmp_8404_fu_4924_p1 = targetMem.read().range(5-1, 0);
}

void DoMemInit::thread_tmp_8405_fu_4780_p1() {
    tmp_8405_fu_4780_p1 = val_V.read().range(32-1, 0);
}

void DoMemInit::thread_tmp_8406_fu_4848_p1() {
    tmp_8406_fu_4848_p1 = targetMem.read().range(6-1, 0);
}

void DoMemInit::thread_tmp_8407_fu_4640_p1() {
    tmp_8407_fu_4640_p1 = val_V.read().range(16-1, 0);
}

void DoMemInit::thread_tmp_8408_fu_4708_p1() {
    tmp_8408_fu_4708_p1 = targetMem.read().range(6-1, 0);
}

void DoMemInit::thread_tmp_8409_fu_4568_p1() {
    tmp_8409_fu_4568_p1 = targetMem.read().range(5-1, 0);
}

void DoMemInit::thread_tmp_8410_fu_4492_p1() {
    tmp_8410_fu_4492_p1 = val_V.read().range(16-1, 0);
}

void DoMemInit::thread_tmp_8411_fu_4528_p1() {
    tmp_8411_fu_4528_p1 = targetMem.read().range(5-1, 0);
}

void DoMemInit::thread_tmp_8412_fu_4432_p1() {
    tmp_8412_fu_4432_p1 = val_V.read().range(8-1, 0);
}

void DoMemInit::thread_tmp_8413_fu_4452_p1() {
    tmp_8413_fu_4452_p1 = targetMem.read().range(4-1, 0);
}

void DoMemInit::thread_tmp_8414_fu_4388_p1() {
    tmp_8414_fu_4388_p1 = val_V.read().range(16-1, 0);
}

void DoMemInit::thread_tmp_8415_fu_4408_p1() {
    tmp_8415_fu_4408_p1 = targetMem.read().range(4-1, 0);
}

void DoMemInit::thread_tmp_fu_4928_p1() {
    tmp_fu_4928_p1 = esl_zext<64,32>(targetInd.read());
}

void DoMemInit::thread_tmp_s_fu_4852_p1() {
    tmp_s_fu_4852_p1 = esl_zext<64,32>(targetInd.read());
}

void DoMemInit::thread_weights0_m_weights_V_10_address0() {
    weights0_m_weights_V_10_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_10_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_10_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_10_d0() {
    weights0_m_weights_V_10_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_10_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_10_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_10_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_11_address0() {
    weights0_m_weights_V_11_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_11_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_11_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_11_d0() {
    weights0_m_weights_V_11_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_11_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_B, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_11_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_11_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_12_address0() {
    weights0_m_weights_V_12_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_12_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_12_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_12_d0() {
    weights0_m_weights_V_12_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_12_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_C, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_12_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_12_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_13_address0() {
    weights0_m_weights_V_13_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_13_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_13_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_13_d0() {
    weights0_m_weights_V_13_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_13_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_D, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_13_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_13_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_14_address0() {
    weights0_m_weights_V_14_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_14_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_14_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_14_d0() {
    weights0_m_weights_V_14_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_14_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_E, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_14_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_14_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_15_address0() {
    weights0_m_weights_V_15_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_15_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_15_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_15_d0() {
    weights0_m_weights_V_15_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_15_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_F, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_15_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_15_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_16_address0() {
    weights0_m_weights_V_16_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_16_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_16_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_16_d0() {
    weights0_m_weights_V_16_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_16_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_10, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_16_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_16_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_17_address0() {
    weights0_m_weights_V_17_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_17_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_17_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_17_d0() {
    weights0_m_weights_V_17_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_17_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_11, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_17_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_17_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_18_address0() {
    weights0_m_weights_V_18_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_18_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_18_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_18_d0() {
    weights0_m_weights_V_18_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_18_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_12, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_18_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_18_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_19_address0() {
    weights0_m_weights_V_19_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_19_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_19_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_19_d0() {
    weights0_m_weights_V_19_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_19_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_13, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_19_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_19_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_1_address0() {
    weights0_m_weights_V_1_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_1_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_1_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_1_d0() {
    weights0_m_weights_V_1_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_1_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_1, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_1_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_1_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_20_address0() {
    weights0_m_weights_V_20_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_20_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_20_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_20_d0() {
    weights0_m_weights_V_20_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_20_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_14, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_20_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_20_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_21_address0() {
    weights0_m_weights_V_21_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_21_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_21_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_21_d0() {
    weights0_m_weights_V_21_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_21_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_15, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_21_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_21_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_22_address0() {
    weights0_m_weights_V_22_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_22_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_22_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_22_d0() {
    weights0_m_weights_V_22_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_22_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_16, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_22_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_22_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_23_address0() {
    weights0_m_weights_V_23_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_23_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_23_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_23_d0() {
    weights0_m_weights_V_23_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_23_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_17, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_23_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_23_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_24_address0() {
    weights0_m_weights_V_24_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_24_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_24_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_24_d0() {
    weights0_m_weights_V_24_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_24_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_18, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_24_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_24_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_25_address0() {
    weights0_m_weights_V_25_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_25_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_25_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_25_d0() {
    weights0_m_weights_V_25_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_25_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_19, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_25_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_25_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_26_address0() {
    weights0_m_weights_V_26_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_26_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_26_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_26_d0() {
    weights0_m_weights_V_26_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_26_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_1A, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_26_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_26_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_27_address0() {
    weights0_m_weights_V_27_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_27_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_27_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_27_d0() {
    weights0_m_weights_V_27_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_27_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_1B, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_27_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_27_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_28_address0() {
    weights0_m_weights_V_28_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_28_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_28_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_28_d0() {
    weights0_m_weights_V_28_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_28_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_1C, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_28_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_28_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_29_address0() {
    weights0_m_weights_V_29_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_29_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_29_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_29_d0() {
    weights0_m_weights_V_29_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_29_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_1D, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_29_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_29_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_2_address0() {
    weights0_m_weights_V_2_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_2_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_2_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_2_d0() {
    weights0_m_weights_V_2_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_2_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_2, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_2_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_2_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_30_address0() {
    weights0_m_weights_V_30_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_30_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_30_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_30_d0() {
    weights0_m_weights_V_30_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_30_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_1E, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_30_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_30_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_31_address0() {
    weights0_m_weights_V_31_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_31_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_31_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_31_d0() {
    weights0_m_weights_V_31_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_31_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_1F, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_31_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_31_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_3_address0() {
    weights0_m_weights_V_3_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_3_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_3_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_3_d0() {
    weights0_m_weights_V_3_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_3_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_3, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_3_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_3_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_4_address0() {
    weights0_m_weights_V_4_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_4_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_4_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_4_d0() {
    weights0_m_weights_V_4_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_4_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_4, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_4_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_4_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_5_address0() {
    weights0_m_weights_V_5_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_5_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_5_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_5_d0() {
    weights0_m_weights_V_5_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_5_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_5, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_5_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_5_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_6_address0() {
    weights0_m_weights_V_6_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_6_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_6_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_6_d0() {
    weights0_m_weights_V_6_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_6_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_6, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_6_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_6_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_7_address0() {
    weights0_m_weights_V_7_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_7_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_7_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_7_d0() {
    weights0_m_weights_V_7_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_7_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_7, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_7_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_7_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_8_address0() {
    weights0_m_weights_V_8_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_8_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_8_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_8_d0() {
    weights0_m_weights_V_8_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_8_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_8, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_8_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_8_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_9_address0() {
    weights0_m_weights_V_9_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_9_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_9_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_9_d0() {
    weights0_m_weights_V_9_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_9_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_9, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_9_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_9_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_address0() {
    weights0_m_weights_V_address0 =  (sc_lv<9>) (tmp_fu_4928_p1.read());
}

void DoMemInit::thread_weights0_m_weights_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights0_m_weights_V_ce0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights0_m_weights_V_d0() {
    weights0_m_weights_V_d0 = val_V.read();
}

void DoMemInit::thread_weights0_m_weights_V_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_0) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, tmp_8402_fu_4964_p1.read())))) {
        weights0_m_weights_V_we0 = ap_const_logic_1;
    } else {
        weights0_m_weights_V_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_10_address0() {
    weights1_m_weights_V_10_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_10_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_10_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_10_d0() {
    weights1_m_weights_V_10_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_10_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_10_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_10_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_11_address0() {
    weights1_m_weights_V_11_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_11_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_11_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_11_d0() {
    weights1_m_weights_V_11_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_11_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_11_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_11_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_12_address0() {
    weights1_m_weights_V_12_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_12_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_12_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_12_d0() {
    weights1_m_weights_V_12_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_12_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_12_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_12_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_13_address0() {
    weights1_m_weights_V_13_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_13_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_13_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_13_d0() {
    weights1_m_weights_V_13_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_13_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_13_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_13_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_14_address0() {
    weights1_m_weights_V_14_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_14_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_14_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_14_d0() {
    weights1_m_weights_V_14_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_14_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_14_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_14_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_15_address0() {
    weights1_m_weights_V_15_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_15_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_15_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_15_d0() {
    weights1_m_weights_V_15_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_15_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_15_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_15_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_16_address0() {
    weights1_m_weights_V_16_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_16_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_16_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_16_d0() {
    weights1_m_weights_V_16_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_16_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_16_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_16_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_17_address0() {
    weights1_m_weights_V_17_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_17_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_17_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_17_d0() {
    weights1_m_weights_V_17_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_17_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_17_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_17_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_18_address0() {
    weights1_m_weights_V_18_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_18_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_18_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_18_d0() {
    weights1_m_weights_V_18_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_18_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_18_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_18_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_19_address0() {
    weights1_m_weights_V_19_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_19_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_19_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_19_d0() {
    weights1_m_weights_V_19_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_19_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_19_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_19_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_1_address0() {
    weights1_m_weights_V_1_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_1_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_1_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_1_d0() {
    weights1_m_weights_V_1_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_1_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_1_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_1_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_20_address0() {
    weights1_m_weights_V_20_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_20_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_20_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_20_d0() {
    weights1_m_weights_V_20_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_20_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_20_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_20_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_21_address0() {
    weights1_m_weights_V_21_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_21_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_21_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_21_d0() {
    weights1_m_weights_V_21_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_21_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_21_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_21_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_22_address0() {
    weights1_m_weights_V_22_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_22_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_22_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_22_d0() {
    weights1_m_weights_V_22_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_22_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_22_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_22_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_23_address0() {
    weights1_m_weights_V_23_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_23_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_23_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_23_d0() {
    weights1_m_weights_V_23_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_23_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_17, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_23_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_23_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_24_address0() {
    weights1_m_weights_V_24_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_24_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_24_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_24_d0() {
    weights1_m_weights_V_24_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_24_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_18, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_24_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_24_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_25_address0() {
    weights1_m_weights_V_25_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_25_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_25_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_25_d0() {
    weights1_m_weights_V_25_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_25_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_19, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_25_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_25_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_26_address0() {
    weights1_m_weights_V_26_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_26_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_26_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_26_d0() {
    weights1_m_weights_V_26_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_26_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_1A, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_26_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_26_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_27_address0() {
    weights1_m_weights_V_27_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_27_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_27_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_27_d0() {
    weights1_m_weights_V_27_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_27_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_1B, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_27_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_27_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_28_address0() {
    weights1_m_weights_V_28_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_28_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_28_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_28_d0() {
    weights1_m_weights_V_28_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_28_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_1C, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_28_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_28_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_29_address0() {
    weights1_m_weights_V_29_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_29_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_29_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_29_d0() {
    weights1_m_weights_V_29_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_29_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_1D, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_29_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_29_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_2_address0() {
    weights1_m_weights_V_2_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_2_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_2_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_2_d0() {
    weights1_m_weights_V_2_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_2_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_2_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_2_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_30_address0() {
    weights1_m_weights_V_30_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_30_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_30_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_30_d0() {
    weights1_m_weights_V_30_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_30_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_1E, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_30_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_30_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_31_address0() {
    weights1_m_weights_V_31_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_31_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_31_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_31_d0() {
    weights1_m_weights_V_31_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_31_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_1F, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_31_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_31_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_32_address0() {
    weights1_m_weights_V_32_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_32_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_32_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_32_d0() {
    weights1_m_weights_V_32_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_32_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_20, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_32_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_32_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_33_address0() {
    weights1_m_weights_V_33_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_33_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_33_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_33_d0() {
    weights1_m_weights_V_33_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_33_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_21, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_33_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_33_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_34_address0() {
    weights1_m_weights_V_34_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_34_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_34_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_34_d0() {
    weights1_m_weights_V_34_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_34_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_22, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_34_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_34_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_35_address0() {
    weights1_m_weights_V_35_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_35_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_35_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_35_d0() {
    weights1_m_weights_V_35_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_35_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_23, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_35_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_35_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_36_address0() {
    weights1_m_weights_V_36_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_36_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_36_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_36_d0() {
    weights1_m_weights_V_36_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_36_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_24, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_36_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_36_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_37_address0() {
    weights1_m_weights_V_37_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_37_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_37_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_37_d0() {
    weights1_m_weights_V_37_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_37_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_25, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_37_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_37_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_38_address0() {
    weights1_m_weights_V_38_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_38_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_38_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_38_d0() {
    weights1_m_weights_V_38_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_38_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_26, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_38_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_38_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_39_address0() {
    weights1_m_weights_V_39_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_39_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_39_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_39_d0() {
    weights1_m_weights_V_39_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_39_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_27, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_39_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_39_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_3_address0() {
    weights1_m_weights_V_3_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_3_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_3_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_3_d0() {
    weights1_m_weights_V_3_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_3_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_3_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_3_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_40_address0() {
    weights1_m_weights_V_40_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_40_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_40_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_40_d0() {
    weights1_m_weights_V_40_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_40_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_28, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_40_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_40_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_41_address0() {
    weights1_m_weights_V_41_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_41_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_41_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_41_d0() {
    weights1_m_weights_V_41_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_41_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_29, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_41_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_41_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_42_address0() {
    weights1_m_weights_V_42_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_42_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_42_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_42_d0() {
    weights1_m_weights_V_42_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_42_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_2A, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_42_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_42_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_43_address0() {
    weights1_m_weights_V_43_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_43_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_43_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_43_d0() {
    weights1_m_weights_V_43_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_43_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_2B, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_43_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_43_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_44_address0() {
    weights1_m_weights_V_44_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_44_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_44_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_44_d0() {
    weights1_m_weights_V_44_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_44_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_2C, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_44_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_44_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_45_address0() {
    weights1_m_weights_V_45_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_45_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_45_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_45_d0() {
    weights1_m_weights_V_45_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_45_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_2D, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_45_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_45_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_46_address0() {
    weights1_m_weights_V_46_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_46_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_46_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_46_d0() {
    weights1_m_weights_V_46_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_46_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_2E, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_46_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_46_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_47_address0() {
    weights1_m_weights_V_47_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_47_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_47_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_47_d0() {
    weights1_m_weights_V_47_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_47_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_2F, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_47_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_47_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_48_address0() {
    weights1_m_weights_V_48_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_48_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_48_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_48_d0() {
    weights1_m_weights_V_48_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_48_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_30, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_48_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_48_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_49_address0() {
    weights1_m_weights_V_49_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_49_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_49_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_49_d0() {
    weights1_m_weights_V_49_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_49_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_31, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_49_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_49_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_4_address0() {
    weights1_m_weights_V_4_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_4_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_4_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_4_d0() {
    weights1_m_weights_V_4_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_4_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_4_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_4_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_50_address0() {
    weights1_m_weights_V_50_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_50_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_50_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_50_d0() {
    weights1_m_weights_V_50_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_50_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_32, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_50_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_50_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_51_address0() {
    weights1_m_weights_V_51_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_51_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_51_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_51_d0() {
    weights1_m_weights_V_51_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_51_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_33, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_51_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_51_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_52_address0() {
    weights1_m_weights_V_52_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_52_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_52_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_52_d0() {
    weights1_m_weights_V_52_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_52_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_34, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_52_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_52_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_53_address0() {
    weights1_m_weights_V_53_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_53_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_53_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_53_d0() {
    weights1_m_weights_V_53_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_53_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_35, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_53_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_53_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_54_address0() {
    weights1_m_weights_V_54_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_54_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_54_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_54_d0() {
    weights1_m_weights_V_54_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_54_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_36, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_54_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_54_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_55_address0() {
    weights1_m_weights_V_55_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_55_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_55_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_55_d0() {
    weights1_m_weights_V_55_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_55_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_37, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_55_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_55_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_56_address0() {
    weights1_m_weights_V_56_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_56_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_56_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_56_d0() {
    weights1_m_weights_V_56_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_56_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_38, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_56_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_56_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_57_address0() {
    weights1_m_weights_V_57_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_57_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_57_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_57_d0() {
    weights1_m_weights_V_57_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_57_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_39, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_57_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_57_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_58_address0() {
    weights1_m_weights_V_58_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_58_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_58_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_58_d0() {
    weights1_m_weights_V_58_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_58_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_3A, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_58_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_58_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_59_address0() {
    weights1_m_weights_V_59_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_59_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_59_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_59_d0() {
    weights1_m_weights_V_59_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_59_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_3B, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_59_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_59_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_5_address0() {
    weights1_m_weights_V_5_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_5_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_5_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_5_d0() {
    weights1_m_weights_V_5_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_5_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_5_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_5_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_60_address0() {
    weights1_m_weights_V_60_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_60_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_60_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_60_d0() {
    weights1_m_weights_V_60_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_60_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_3C, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_60_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_60_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_61_address0() {
    weights1_m_weights_V_61_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_61_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_61_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_61_d0() {
    weights1_m_weights_V_61_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_61_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_3D, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_61_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_61_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_62_address0() {
    weights1_m_weights_V_62_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_62_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_62_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_62_d0() {
    weights1_m_weights_V_62_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_62_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_3E, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_62_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_62_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_63_address0() {
    weights1_m_weights_V_63_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_63_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_63_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_63_d0() {
    weights1_m_weights_V_63_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_63_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_3F, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_63_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_63_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_6_address0() {
    weights1_m_weights_V_6_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_6_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_6_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_6_d0() {
    weights1_m_weights_V_6_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_6_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_6_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_6_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_7_address0() {
    weights1_m_weights_V_7_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_7_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_7_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_7_d0() {
    weights1_m_weights_V_7_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_7_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_7_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_7_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_8_address0() {
    weights1_m_weights_V_8_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_8_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_8_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_8_d0() {
    weights1_m_weights_V_8_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_8_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_8_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_8_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_9_address0() {
    weights1_m_weights_V_9_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_9_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_9_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_9_d0() {
    weights1_m_weights_V_9_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_9_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_9_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_9_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_address0() {
    weights1_m_weights_V_address0 =  (sc_lv<9>) (tmp_1_fu_4712_p1.read());
}

void DoMemInit::thread_weights1_m_weights_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights1_m_weights_V_ce0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights1_m_weights_V_d0() {
    weights1_m_weights_V_d0 = tmp_8405_fu_4780_p1.read();
}

void DoMemInit::thread_weights1_m_weights_V_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_2) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_8406_fu_4848_p1.read())))) {
        weights1_m_weights_V_we0 = ap_const_logic_1;
    } else {
        weights1_m_weights_V_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_10_address0() {
    weights2_m_weights_V_10_address0 =  (sc_lv<9>) (tmp_3_fu_4532_p1.read());
}

void DoMemInit::thread_weights2_m_weights_V_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights2_m_weights_V_10_ce0 = ap_const_logic_1;
    } else {
        weights2_m_weights_V_10_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_10_d0() {
    weights2_m_weights_V_10_d0 = val_V.read();
}

void DoMemInit::thread_weights2_m_weights_V_10_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_4) && 
          esl_seteq<1,5,5>(ap_const_lv5_A, tmp_8409_fu_4568_p1.read())))) {
        weights2_m_weights_V_10_we0 = ap_const_logic_1;
    } else {
        weights2_m_weights_V_10_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_11_address0() {
    weights2_m_weights_V_11_address0 =  (sc_lv<9>) (tmp_3_fu_4532_p1.read());
}

void DoMemInit::thread_weights2_m_weights_V_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights2_m_weights_V_11_ce0 = ap_const_logic_1;
    } else {
        weights2_m_weights_V_11_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_11_d0() {
    weights2_m_weights_V_11_d0 = val_V.read();
}

void DoMemInit::thread_weights2_m_weights_V_11_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_4) && 
          esl_seteq<1,5,5>(ap_const_lv5_B, tmp_8409_fu_4568_p1.read())))) {
        weights2_m_weights_V_11_we0 = ap_const_logic_1;
    } else {
        weights2_m_weights_V_11_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_12_address0() {
    weights2_m_weights_V_12_address0 =  (sc_lv<9>) (tmp_3_fu_4532_p1.read());
}

void DoMemInit::thread_weights2_m_weights_V_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights2_m_weights_V_12_ce0 = ap_const_logic_1;
    } else {
        weights2_m_weights_V_12_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_12_d0() {
    weights2_m_weights_V_12_d0 = val_V.read();
}

void DoMemInit::thread_weights2_m_weights_V_12_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_4) && 
          esl_seteq<1,5,5>(ap_const_lv5_C, tmp_8409_fu_4568_p1.read())))) {
        weights2_m_weights_V_12_we0 = ap_const_logic_1;
    } else {
        weights2_m_weights_V_12_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_13_address0() {
    weights2_m_weights_V_13_address0 =  (sc_lv<9>) (tmp_3_fu_4532_p1.read());
}

void DoMemInit::thread_weights2_m_weights_V_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        weights2_m_weights_V_13_ce0 = ap_const_logic_1;
    } else {
        weights2_m_weights_V_13_ce0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_13_d0() {
    weights2_m_weights_V_13_d0 = val_V.read();
}

void DoMemInit::thread_weights2_m_weights_V_13_we0() {
    if (((esl_seteq<1,32,32>(targetLayer_read_read_fu_842_p2.read(), ap_const_lv32_4) && 
          esl_seteq<1,5,5>(ap_const_lv5_D, tmp_8409_fu_4568_p1.read())))) {
        weights2_m_weights_V_13_we0 = ap_const_logic_1;
    } else {
        weights2_m_weights_V_13_we0 = ap_const_logic_0;
    }
}

void DoMemInit::thread_weights2_m_weights_V_14_address0() {
    weights2_m_weights_V_14_address0 =  (sc_lv<9>) (tmp_3_fu_4532_p1.read());
}

}

