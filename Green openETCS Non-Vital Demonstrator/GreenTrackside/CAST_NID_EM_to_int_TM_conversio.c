/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_EM_to_int_TM_conversio.h"

/* TM_conversions::CAST_NID_EM_to_int */
kcg_int CAST_NID_EM_to_int_TM_conversio(
  /* TM_conversions::CAST_NID_EM_to_int::nid_em */ NID_EM nid_em)
{
  /* TM_conversions::CAST_NID_EM_to_int::nid_em_int */
  static kcg_int nid_em_int;
  
  nid_em_int = nid_em;
  return nid_em_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_EM_to_int_TM_conversio.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
