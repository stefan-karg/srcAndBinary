/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Square_mathext_V_internal_real_Type.h"

/* mathext::Square */
kcg_real Square_mathext_V_internal_real_Type(
  /* mathext::Square::Square_In */ kcg_real Square_In)
{
  /* mathext::Square::Square_Out */
  static kcg_real Square_Out;
  
  Square_Out = Square_In * Square_In;
  return Square_Out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Square_mathext_V_internal_real_Type.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

