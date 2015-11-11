/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_LGTLOC_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_LGTLOC_to_int */
kcg_int CAST_Q_LGTLOC_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_LGTLOC_to_int::q_lgtloc */Q_LGTLOC q_lgtloc)
{
  /* TM_conversions::CAST_Q_LGTLOC_to_int::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_LGTLOC_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_LGTLOC_to_int::q_lgtloc_int */ kcg_int q_lgtloc_int;
  
  IfBlock1_clock = q_lgtloc == ENUM_Q_LGTLOC_max_safe_front_end_TM_conversions;
  if (IfBlock1_clock) {
    q_lgtloc_int = INT_Q_LGTLOC_max_safe_front_end_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_lgtloc ==
      ENUM_Q_LGTLOC_min_safe_rear_end_TM_conversions;
    if (else_clock_IfBlock1) {
      q_lgtloc_int = INT_Q_LGTLOC_min_safe_rear_end_TM_conversions;
    }
    else {
      q_lgtloc_int = INT_Q_LGTLOC_max_safe_front_end_TM_conversions;
    }
  }
  return q_lgtloc_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_LGTLOC_to_int_TM_conversions.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

