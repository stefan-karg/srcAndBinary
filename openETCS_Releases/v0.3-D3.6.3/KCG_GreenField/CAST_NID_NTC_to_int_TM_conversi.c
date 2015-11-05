/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_NTC_to_int_TM_conversi.h"

/* TM_conversions::CAST_NID_NTC_to_int */
kcg_int CAST_NID_NTC_to_int_TM_conversi(
  /* TM_conversions::CAST_NID_NTC_to_int::nid_ntc */ NID_NTC nid_ntc)
{
  /* TM_conversions::CAST_NID_NTC_to_int::nid_ntc_int */
  static kcg_int nid_ntc_int;
  
  nid_ntc_int = nid_ntc;
  return nid_ntc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_NTC_to_int_TM_conversi.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

