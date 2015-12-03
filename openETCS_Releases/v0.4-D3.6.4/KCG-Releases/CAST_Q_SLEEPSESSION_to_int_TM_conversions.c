/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SLEEPSESSION_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_SLEEPSESSION_to_int */
kcg_int CAST_Q_SLEEPSESSION_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_SLEEPSESSION_to_int::q_sleepsession_int */ Q_SLEEPSESSION q_sleepsession_int)
{
  /* TM_conversions::CAST_Q_SLEEPSESSION_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_SLEEPSESSION_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_SLEEPSESSION_to_int::d */
  static kcg_int d;
  
  IfBlock1_clock = q_sleepsession_int ==
    ENUM_Q_SLEEPSESSION_execute_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    d = INT_Q_SLEEPSESSION_execute_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_sleepsession_int ==
      ENUM_Q_SLEEPSESSION_ignore_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      d = INT_Q_SLEEPSESSION_ignore_TM_conversions;
    }
    else {
      d = INT_Q_SLEEPSESSION_execute_TM_conversions;
    }
  }
  return d;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_SLEEPSESSION_to_int_TM_conversions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

