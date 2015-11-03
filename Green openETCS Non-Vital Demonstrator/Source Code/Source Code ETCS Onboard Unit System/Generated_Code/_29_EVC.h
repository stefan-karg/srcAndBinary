/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef __29_EVC_H_
#define __29_EVC_H_

#include "kcg_types.h"
#include "maintainTrainProperties_EVC_Sup.h"
#include "patchEmergencyBrakeMsg_EVC_Supp.h"
#include "maintainMobileConnectionContext.h"
#include "maintainMobileRegistrationConte.h"
#include "probe_RadioOutput_RadioSupport_.h"
#include "ManageLevelAndMode.h"
#include "TIU_OutputIntegration_output_to.h"
#include "manageDMI_Output_manage_DMI_Out.h"
#include "Master_Procedure_ManageProcedur.h"
#include "SpeedSupervision_Integration_Sp.h"
#include "manageDMI_Input_manage_DMI_Inpu.h"
#include "Manage_TrackSideInformati_Manag.h"
#include "setProbesBalises_xdebugSupport_.h"
#include "distanceLastBG_xdebugSupport_Pk.h"
#include "distanceLastMSG_xdebugSupport_P.h"
#include "setProbes_xdebugSupport_Pkg.h"
#include "ProvidePositionReport_ProvidePo.h"
#include "collectRadioOutput_radioOutput_.h"
#include "manageTIU_input_input_from_TIU_.h"
#include "keepP42_EVC_Support_Pkg.h"
#include "trainData_trainData_pkg.h"
#include "checkGeneralMessage_trainData_p.h"
#include "probe_MsgOut_RadioSupport_Pkg.h"
#include "TrackAtlas_TrackAtlas.h"
#include "calculateTrainPosition_Calculat.h"
#include "MoRC_HO_MoRC_HO_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------   local probes  ------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* EVC::probe_Odometry */ probe_Odometry;
  probesBalises_T_xdebugSupport_P /* EVC::probe_Balises */ probe_Balises;
  kcg_real /* EVC::probe_distMsg */ probe_distMsg;
  kcg_real /* EVC::probe_distBG */ probe_distBG;
  NID_MESSAGE /* EVC::probe_MSGinAfterFilter */ probe_MSGinAfterFilter;
  NID_LRBG /* EVC::probe_LRBG */ probe_LRBG;
  NID_BG /* EVC::probe_BG_afterCheck */ probe_BG_afterCheck;
  NID_MESSAGE /* EVC::probe_Msg_1 */ probe_Msg_1;
  NID_MESSAGE /* EVC::probe_Msg_2 */ probe_Msg_2;
  NID_MESSAGE /* EVC::probe_Msg_3 */ probe_Msg_3;
  NID_MESSAGE /* EVC::probe_Msg_4 */ probe_Msg_4;
  NID_MESSAGE /* EVC::probe_Msg_5 */ probe_Msg_5;
  NID_MESSAGE /* EVC::probe_MSGout */ probe_MSGout;
  T_TRAIN /* EVC::probe_TTrain */ probe_TTrain;
  NID_PACKET /* EVC::probe_nid_packet2 */ probe_nid_packet2;
  NID_PACKET /* EVC::probe_nid_packet1 */ probe_nid_packet1;
  kcg_bool /* EVC::probe_newInput */ probe_newInput;
  NID_MESSAGE /* EVC::probe_MSG_in */ probe_MSG_in;
  NID_BG /* EVC::probe_BG_ID */ probe_BG_ID;
  NID_MESSAGE /* EVC::probe_lastMSG_in */ probe_lastMSG_in;
  NID_BG /* EVC::probe_lastBG_ID */ probe_lastBG_ID;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init18;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  radioManagementMessage_T_Common /* EVC::PROC_radioCmdFromProcedures */ PROC_radioCmdFromProcedures;
  kcg_bool /* EVC::PROC_powerUp_to_MoRC */ PROC_powerUp_to_MoRC;
  kcg_bool /* EVC::PROC_statusstartofmissionongoing_to_MoRC */ PROC_statusstartofmissionongoin;
  kcg_bool /* EVC::PROC_powerOff_to_MoRC */ PROC_powerOff_to_MoRC;
  DMI_EVC_status_T_DMI_Types_Pkg /* EVC::DMI_currentDMIStatus */ DMI_currentDMIStatus;
  trainPosition_T_TrainPosition_T /* EVC::CALC_TrainPosition */ CALC_TrainPosition;
  speedSupervisionForDMI_T_DMI_Ty /* EVC::DMI_sdmToDMI */ DMI_sdmToDMI;
  trainData_T_TIU_Types_Pkg /* EVC::td_trainData */ td_trainData;
  connection_ids_T_Handover_Pkg /* EVC::MoRC_supervisingRBC_Id */ MoRC_supervisingRBC_Id;
  positionedBGs_T_TrainPosition_T /* EVC::CALC_BGs */ CALC_BGs;
  trainProperties_T_TrainPosition /* EVC::TIU_trainProperties */ TIU_trainProperties;
  kcg_bool /* EVC::MoRC_newSessionEstablished */ MoRC_newSessionEstablished;
  T_internal_Type_Obu_BasicTypes_ /* EVC::MSG_lastRadioMsgTimestamp */ MSG_lastRadioMsgTimestamp;
  NID_NTC /* EVC::EVC_currentNTC */ EVC_currentNTC;
  T_Mode_Level_Level_And_Mode_Typ /* EVC::ML_ModeAndLevel */ ML_ModeAndLevel;
  ps_dataForStartOfMission_T_API_ /* EVC::EVC_PersistentData */ EVC_PersistentData;
  DMI_TXT_MSGList_status_T_DMI_Ty /* EVC::EVC_TextMessageStatusList */ EVC_TextMessageStatusList;
  trainData_Events_T_trainData_Ty /* EVC::td_events */ td_events;
  PT0_PositionReport_T_Packet_Tra /* EVC::rep_P0 */ rep_P0;
  trainDataStatus_T_trainData_Typ /* EVC::td_status */ td_status;
  PT1_PositionReport_2BG_T_Packet /* EVC::rep_P1 */ rep_P1;
  morcStatus_T_RCM_Session_Types_ /* EVC::MoRC_RadioStatus_1 */ MoRC_RadioStatus_1;
  NID_RADIO /* EVC::MoRC_RadioID_1 */ MoRC_RadioID_1;
  NID_MN /* EVC::MoRC_MN_1 */ MoRC_MN_1;
  kcg_bool /* EVC::_L477 */ _L477;
  kcg_bool /* EVC::EVC_ready */ EVC_ready;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_probe_MsgOut_RadioSupport_ /* 3 */ _17_Context_3;
  outC_collectRadioOutput_radioOu /* 1 */ _16_Context_1;
  outC_checkGeneralMessage_trainD /* 3 */ _15_Context_3;
  outC_setProbes_xdebugSupport_Pk /* 2 */ _14_Context_2;
  outC_distanceLastMSG_xdebugSupp /* 2 */ _13_Context_2;
  outC_distanceLastBG_xdebugSuppo /* 2 */ _12_Context_2;
  outC_setProbesBalises_xdebugSup /* 2 */ _11_Context_2;
  outC_manageDMI_Output_manage_DM /* 2 */ _10_Context_2;
  outC_Master_Procedure_ManagePro /* 2 */ _9_Context_2;
  outC_MoRC_HO_MoRC_HO_Pkg /* 1 */ _8_Context_1;
  outC_keepP42_EVC_Support_Pkg /* 1 */ Context_1;
  outC_ProvidePositionReport_Prov /* 2 */ _7_Context_2;
  outC_TIU_OutputIntegration_outp /* 2 */ _6_Context_2;
  outC_SpeedSupervision_Integrati /* 2 */ _5_Context_2;
  outC_ManageLevelAndMode /* 2 */ _4_Context_2;
  outC_TrackAtlas_TrackAtlas /* 2 */ _3_Context_2;
  outC_trainData_trainData_pkg /* 2 */ _2_Context_2;
  outC_manageDMI_Input_manage_DMI /* 3 */ _1_Context_3;
  outC_calculateTrainPosition_Cal /* 3 */ Context_3;
  outC_Manage_TrackSideInformati_ /* 2 */ Context_2;
  outC_manageTIU_input_input_from /* 5 */ Context_5;
  /* ----------------- no clocks of observable data ------------------ */
} outC__29_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* EVC */
extern void _29_EVC(void);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _29_EVC_reset(void);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _29_EVC_init(void);
#endif /* KCG_USER_DEFINED_INIT */

extern outC__29_EVC Ctxt__29_EVC;

/* EVC::EVC_reset */
extern kcg_bool EVC_reset;
/* EVC::API_Odometry */
extern odometry_T_Obu_BasicTypes_Pkg API_Odometry;
/* EVC::API_SystemTime */
extern T_internal_Type_Obu_BasicTypes_ API_SystemTime;
/* EVC::API_fromTrack */
extern API_TrackSideInput_T_API_Msg_Pk API_fromTrack;
/* EVC::API_fromDMI */
extern DMI_to_EVC_Message_int_T_API_DM API_fromDMI;
/* EVC::API_fromTIU */
extern TIU_Input_msg_API_TIU_Pkg API_fromTIU;
/* EVC::API_mobileHWStatus */
extern mobileHWStatus_Type_MoRC_Pck API_mobileHWStatus;
/* EVC::API_persistentData */
extern ps_dataForStartOfMission_T_API_ API_persistentData;

/* EVC::debugCurrentLevel */
extern M_LEVEL debugCurrentLevel;
/* EVC::debugCurrentMode */
extern M_MODE debugCurrentMode;
/* EVC::debugIinterventionSpeed */
extern kcg_real debugIinterventionSpeed;
/* EVC::debugPermittedSpeed */
extern kcg_real debugPermittedSpeed;
/* EVC::debugTrainPositionDeltaMin */
extern L_internal_Type_Obu_BasicTypes_ debugTrainPositionDeltaMin;
/* EVC::debugTrainPositionDeltaMax */
extern L_internal_Type_Obu_BasicTypes_ debugTrainPositionDeltaMax;
/* EVC::debugTrainPositionNominal */
extern L_internal_Type_Obu_BasicTypes_ debugTrainPositionNominal;
/* EVC::EVC_ready */
extern kcg_bool EVC_ready;
/* EVC::API_toTIU */
extern TIU_Output_msg_API_TIU_Pkg API_toTIU;
/* EVC::API_toDMI */
extern EVC_to_DMI_Message_int_T_API_DM API_toDMI;
/* EVC::API_RTM_management */
extern RadioManagement_T_API_RadioComm API_RTM_management;
/* EVC::API_toRBC */
extern M_TrainTrack_Message_T_TM_radio API_toRBC;
/* EVC::resetOut */
extern kcg_bool resetOut;

#endif /* __29_EVC_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** _29_EVC.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

