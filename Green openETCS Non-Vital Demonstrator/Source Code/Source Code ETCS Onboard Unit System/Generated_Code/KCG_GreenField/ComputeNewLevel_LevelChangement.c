/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeNewLevel_LevelChangement.h"

/* LevelChangement::ComputeNewLevel */
void ComputeNewLevel_LevelChangement(
  /* LevelChangement::ComputeNewLevel::current_level */ M_LEVEL current_level,
  /* LevelChangement::ComputeNewLevel::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition,
  /* LevelChangement::ComputeNewLevel::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* LevelChangement::ComputeNewLevel::next_level */ M_LEVEL *next_level,
  /* LevelChangement::ComputeNewLevel::IsNewLevel */ kcg_bool *IsNewLevel)
{
  *IsNewLevel = (*selected_level_transition).is_set & (current_level !=
      (*selected_level_transition).transition.level) &
    (((*selected_level_transition).transition.transitionType ==
        M_TransitionType_Conditional_Le) |
      ((*selected_level_transition).transition.transitionType ==
        M_TransitionType_DriverInit_Lev) |
      (((*selected_level_transition).transition.transitionType ==
          M_TransitionType_Normal_Level_A) &
        ((*selected_level_transition).transition.position <=
          (*trainPosition).estimatedFrontEndPosition)));
  /* 1 */ if (*IsNewLevel) {
    *next_level = (*selected_level_transition).transition.level;
  }
  else {
    *next_level = current_level;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ComputeNewLevel_LevelChangement.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */
