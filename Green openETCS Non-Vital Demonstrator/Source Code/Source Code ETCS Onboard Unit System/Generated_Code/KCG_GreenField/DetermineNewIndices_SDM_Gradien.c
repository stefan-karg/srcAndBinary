/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineNewIndices_SDM_Gradien.h"

/* SDM_GradientAcceleration_Pkg::DetermineNewIndices */
void DetermineNewIndices_SDM_Gradien(
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::Accu */ ACC_SDM_GradientAcceleration_Pk *Accu,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::IncFrontIdx */ kcg_bool IncFrontIdx,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::frontIndex */ kcg_int *frontIndex,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::rearIndex */ kcg_int *rearIndex)
{
  /* 3 */ if (IncFrontIdx) {
    *rearIndex = (*Accu).rearIndex;
    *frontIndex = (*Accu).frontIndex + 1;
  }
  else {
    *rearIndex = 1 + (*Accu).rearIndex;
    *frontIndex = (*Accu).frontIndex;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DetermineNewIndices_SDM_Gradien.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

