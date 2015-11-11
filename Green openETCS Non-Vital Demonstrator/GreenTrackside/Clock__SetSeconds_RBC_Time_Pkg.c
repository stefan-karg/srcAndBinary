/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__SetSeconds_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__SetSeconds */
void Clock__SetSeconds_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__SetSeconds::inClock */ Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__SetSeconds::inValue */ T_TRAIN inValue,
  /* RBC_Time_Pkg::Clock__SetSeconds::outClock */ Clock_T *outClock)
{
  kcg_copy_Clock_T(outClock, inClock);
  (*outClock).m_Value = inValue;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__SetSeconds_RBC_Time_Pkg.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */
