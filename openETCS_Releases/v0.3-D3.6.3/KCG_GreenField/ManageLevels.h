/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _ManageLevels_H_
#define _ManageLevels_H_

#include "kcg_types.h"
#include "ProceedOnLevelChange_LevelChang.h"
#include "SelectLevelTransition_LevelTran.h"
#include "BuildOutputToRBC_OutputToRBC.h"
#include "ManageAck_Acknowledgement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* ManageLevels::nextLevel */ nextLevel;
  kcg_bool /* ManageLevels::TripTrainRequested */ TripTrainRequested;
  kcg_bool /* ManageLevels::needsAckFromDriver */ needsAckFromDriver;
  T_LevelTransition_Level_And_Mod /* ManageLevels::announcedLevelTransition */ announcedLevelTransition;
  kcg_bool /* ManageLevels::serviceBrakeRequested */ serviceBrakeRequested;
  kcg_bool /* ManageLevels::connectionToRBCRequested */ connectionToRBCRequested;
  kcg_bool /* ManageLevels::positionReportNeeded */ positionReportNeeded;
  kcg_bool /* ManageLevels::levelIsNew */ levelIsNew;
  kcg_bool /* ManageLevels::isAvailableForUse */ isAvailableForUse;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ManageAck_Acknowledgement /* 1 */ _2_Context_1;
  outC_BuildOutputToRBC_OutputToR /* 1 */ _1_Context_1;
  outC_SelectLevelTransition_Leve /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManageLevels;

/* ===========  node initialization and cycle functions  =========== */
/* ManageLevels */
extern void ManageLevels(
  /* ManageLevels::trainStandstill */ kcg_bool trainStandstill,
  /* ManageLevels::driverLevelTransition */ T_LevelTransition_Level_And_Mod *driverLevelTransition,
  /* ManageLevels::levelAck */ kcg_bool levelAck,
  /* ManageLevels::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ManageLevels::ERTMScapabilities */ T_ERTMS_capabilities_Level_And_ *ERTMScapabilities,
  /* ManageLevels::DataFromTrackToLevel */ T_Data_From_Track_To_Level_Leve *DataFromTrackToLevel,
  /* ManageLevels::MemorizedLevelIn */ M_LEVEL MemorizedLevelIn,
  outC_ManageLevels *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ManageLevels_reset(outC_ManageLevels *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ManageLevels_init(outC_ManageLevels *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ManageLevels_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ManageLevels.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
