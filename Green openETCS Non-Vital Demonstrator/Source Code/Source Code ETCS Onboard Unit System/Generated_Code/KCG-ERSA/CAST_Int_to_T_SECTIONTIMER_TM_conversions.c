/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_SECTIONTIMER_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_SECTIONTIMER */
T_SECTIONTIMER CAST_Int_to_T_SECTIONTIMER_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_SECTIONTIMER::t_sectiontimer_int */kcg_int t_sectiontimer_int)
{
  /* TM_conversions::CAST_Int_to_T_SECTIONTIMER::t_sectiontimer */
  static T_SECTIONTIMER t_sectiontimer;
  
  t_sectiontimer = t_sectiontimer_int;
  return t_sectiontimer;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_SECTIONTIMER_TM_conversions.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */
