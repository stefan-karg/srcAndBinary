/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_N_Iter_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_N_Iter */
kcg_bool Supervision_N_Iter_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::niter */ N_ITER niter,
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::iterpacket */ IterPacket58List_T_Packet_Types_Pkg *iterpacket)
{
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::trigger */
  static kcg_bool trigger;
  
  trigger = kcg_false;
  return trigger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_N_Iter_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */
