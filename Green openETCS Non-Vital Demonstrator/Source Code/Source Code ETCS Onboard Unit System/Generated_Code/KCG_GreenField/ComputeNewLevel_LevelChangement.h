/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _ComputeNewLevel_LevelChangemen
#define _ComputeNewLevel_LevelChangemen

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* LevelChangement::ComputeNewLevel */
extern void ComputeNewLevel_LevelChangement(
  /* LevelChangement::ComputeNewLevel::current_level */ M_LEVEL current_level,
  /* LevelChangement::ComputeNewLevel::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition,
  /* LevelChangement::ComputeNewLevel::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* LevelChangement::ComputeNewLevel::next_level */ M_LEVEL *next_level,
  /* LevelChangement::ComputeNewLevel::IsNewLevel */ kcg_bool *IsNewLevel);

#endif /* _ComputeNewLevel_LevelChangemen */
/* $**************** KCG Version 6.4 (build i21) ****************
** ComputeNewLevel_LevelChangement.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

