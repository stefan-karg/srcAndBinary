/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_TIMEOUTRQST_TM_co.h"

/* TM_conversions::CAST_Int_to_T_TIMEOUTRQST */
T_TIMEOUTRQST CAST_Int_to_T_TIMEOUTRQST_TM_co(
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::t_timeoutrqst_int */ kcg_int t_timeoutrqst_int)
{
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::t_timeoutrqst */
  static T_TIMEOUTRQST t_timeoutrqst;
  
  t_timeoutrqst = t_timeoutrqst_int;
  return t_timeoutrqst;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_TIMEOUTRQST_TM_co.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

