/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVOVTRP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_NVOVTRP */
D_NVOVTRP CAST_Int_to_D_NVOVTRP_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_NVOVTRP::d_nvovtrp_int */ kcg_int d_nvovtrp_int)
{
  /* TM_conversions::CAST_Int_to_D_NVOVTRP::d_nvovtrp */
  static D_NVOVTRP d_nvovtrp;
  
  d_nvovtrp = d_nvovtrp_int;
  return d_nvovtrp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_NVOVTRP_TM_conversions.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */
