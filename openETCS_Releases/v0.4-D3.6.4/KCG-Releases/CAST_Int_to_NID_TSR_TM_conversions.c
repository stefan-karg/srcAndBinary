/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_TSR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_TSR */
NID_TSR CAST_Int_to_NID_TSR_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_TSR::nid_tsr_int */ kcg_int nid_tsr_int)
{
  /* TM_conversions::CAST_Int_to_NID_TSR::nid_tsr */
  static NID_TSR nid_tsr;
  
  nid_tsr = nid_tsr_int;
  return nid_tsr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_TSR_TM_conversions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

