/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_HO_MoRC_HO_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void MoRC_HO_init_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_true;
  outC->triggerPositionReport = kcg_true;
  outC->triggerTrainData = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->ready = kcg_true;
  outC->init = kcg_true;
  outC->p42_sessionManagementReceived_p = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = kcg_true;
  outC->m32_SystemVersionReceived_p = kcg_true;
  outC->p45_networkRegistrationReceived_p = kcg_true;
  outC->p45_networkRegistration_p.valid = kcg_true;
  outC->p45_networkRegistration_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p45_networkRegistration_p.q_dir = Q_DIR_Reverse;
  outC->p45_networkRegistration_p.nid_mn = 0;
  outC->p45_networkRegistration_p.origin.valid = kcg_true;
  outC->p45_networkRegistration_p.origin.nid_c = 0;
  outC->p45_networkRegistration_p.origin.rbc_id = 0;
  outC->p45_networkRegistration_p.origin.device_id = 0;
  outC->m39_AckOfTerminationOfACommunicationSession_p.valid = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSession_p.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.valid = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.nid_c = 0;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.rbc_id = 0;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.device_id = 0;
  outC->m39_AckOfTerminationOfACommunicationSession_p.lrbg = 0;
  outC->m38_initiationOfACommunicationSessionMsg_p.valid = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsg_p.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.valid = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.nid_c = 0;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.rbc_id = 0;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.device_id = 0;
  outC->m32_SystemVersion_p.valid = kcg_true;
  outC->m32_SystemVersion_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->m32_SystemVersion_p.versionSupported = kcg_true;
  outC->m32_SystemVersion_p.origin.valid = kcg_true;
  outC->m32_SystemVersion_p.origin.nid_c = 0;
  outC->m32_SystemVersion_p.origin.rbc_id = 0;
  outC->m32_SystemVersion_p.origin.device_id = 0;
  outC->m32_SystemVersion_p.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionManagement_p.valid = kcg_true;
  outC->p42_sessionManagement_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionManagement_p.q_dir = Q_DIR_Reverse;
  outC->p42_sessionManagement_p.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_sessionManagement_p.nid_c = 0;
  outC->p42_sessionManagement_p.nid_RBC = 0;
  outC->p42_sessionManagement_p.nid_radio = 0;
  outC->p42_sessionManagement_p.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_sessionManagement_p.origin.valid = kcg_true;
  outC->p42_sessionManagement_p.origin.nid_c = 0;
  outC->p42_sessionManagement_p.origin.rbc_id = 0;
  outC->p42_sessionManagement_p.origin.device_id = 0;
  outC->eventsAndPhases_p.atPowerUp = kcg_true;
  outC->eventsAndPhases_p.atPowerDown = kcg_true;
  outC->eventsAndPhases_p.atStartOfMission = kcg_true;
  outC->eventsAndPhases_p.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->eventsAndPhases_p.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->eventsAndPhases_p.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  outC->eventsAndPhases_p.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->eventsAndPhases_p.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->eventsAndPhases_p.endOfMissionIsExecuted = kcg_true;
  outC->eventsAndPhases_p.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  outC->eventsAndPhases_p.errorConditionRequiringTerminationDetected = kcg_true;
  outC->eventsAndPhases_p.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->eventsAndPhases_p.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->eventsAndPhases_p.trainExitedFromAnRBCArea = kcg_true;
  outC->eventsAndPhases_p.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->eventsAndPhases_p.level_1_isLeft = kcg_true;
  outC->mobileConnectionContext_1_p.valid = kcg_true;
  outC->mobileConnectionContext_1_p.mobileDeviceNo = 0;
  outC->mobileConnectionContext_1_p.status = mcs_disconnected_RCM_Types_Pkg;
  outC->mobileConnectionContext_1_p.nid_radio = 0;
  outC->mobileConnectionContext_1_p.settingUpConnectionHasFailed = kcg_true;
  outC->mobileConnectionContext_1_p.connectionLost = kcg_true;
  outC->mobileConnectionContext_1_p.isInRadioHole = kcg_true;
  outC->mobileRegistrationContext_1_p.valid = kcg_true;
  outC->mobileRegistrationContext_1_p.mobileDeviceNo = 0;
  outC->mobileRegistrationContext_1_p.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->mobileRegistrationContext_1_p.status = mrs_unregistered_RCM_Types_Pkg;
  outC->mobileRegistrationContext_1_p.nid_mn = 0;
  outC->level_p = M_LEVEL_Level_0;
  outC->mode_p = M_MODE_Full_Supervision;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->msgBus_2_RBC_2[i1].Message.valid = kcg_true;
    outC->msgBus_2_RBC_2[i1].Message.nid_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.l_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.t_train = 0;
    outC->msgBus_2_RBC_2[i1].Message.nid_engine = 0;
    outC->msgBus_2_RBC_2[i1].Message.field1 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field2 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field3 = 0;
    outC->msgBus_2_RBC_1[i1].Message.valid = kcg_true;
    outC->msgBus_2_RBC_1[i1].Message.nid_message = 0;
    outC->msgBus_2_RBC_1[i1].Message.l_message = 0;
    outC->msgBus_2_RBC_1[i1].Message.t_train = 0;
    outC->msgBus_2_RBC_1[i1].Message.nid_engine = 0;
    outC->msgBus_2_RBC_1[i1].Message.field1 = 0;
    outC->msgBus_2_RBC_1[i1].Message.field2 = 0;
    outC->msgBus_2_RBC_1[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->msgBus_2_RBC_2[i1].OptionalPackets[i] = 0;
      outC->msgBus_2_RBC_1[i1].OptionalPackets[i] = 0;
    }
  }
  outC->supervisingRBC.valid = kcg_true;
  outC->supervisingRBC.mobileDeviceNo = 0;
  outC->supervisingRBC.nid_c = 0;
  outC->supervisingRBC.nid_RBC = 0;
  outC->supervisingRBC.nid_radio = 0;
  outC->supervisingRBC.nid_mn = 0;
  outC->safeRadioIndication.valid = kcg_true;
  outC->safeRadioIndication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->mobileRegistrationCmd_2.valid = kcg_true;
  outC->mobileRegistrationCmd_2.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd_2.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd_2.network_id = 0;
  outC->mobileRegistrationCmd_1.valid = kcg_true;
  outC->mobileRegistrationCmd_1.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd_1.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd_1.network_id = 0;
  outC->mobileConnectionCmd_2.valid = kcg_true;
  outC->mobileConnectionCmd_2.mobileDeviceNo = 0;
  outC->mobileConnectionCmd_2.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd_2.nid_radio = 0;
  outC->mobileConnectionCmd_1.valid = kcg_true;
  outC->mobileConnectionCmd_1.mobileDeviceNo = 0;
  outC->mobileConnectionCmd_1.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd_1.nid_radio = 0;
  outC->radioStatus_2.registration.valid = kcg_true;
  outC->radioStatus_2.registration.mobileDeviceNo = 0;
  outC->radioStatus_2.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->radioStatus_2.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->radioStatus_2.registration.nid_mn = 0;
  outC->radioStatus_2.connection.valid = kcg_true;
  outC->radioStatus_2.connection.mobileDeviceNo = 0;
  outC->radioStatus_2.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->radioStatus_2.connection.nid_radio = 0;
  outC->radioStatus_2.connection.settingUpConnectionHasFailed = kcg_true;
  outC->radioStatus_2.connection.connectionLost = kcg_true;
  outC->radioStatus_2.connection.isInRadioHole = kcg_true;
  outC->radioStatus_2.session.valid = kcg_true;
  outC->radioStatus_2.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->radioStatus_2.session.nid_c = 0;
  outC->radioStatus_2.session.nid_rbc = 0;
  outC->radioStatus_2.session.nid_radio = 0;
  outC->radioStatus_1.registration.valid = kcg_true;
  outC->radioStatus_1.registration.mobileDeviceNo = 0;
  outC->radioStatus_1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->radioStatus_1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->radioStatus_1.registration.nid_mn = 0;
  outC->radioStatus_1.connection.valid = kcg_true;
  outC->radioStatus_1.connection.mobileDeviceNo = 0;
  outC->radioStatus_1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->radioStatus_1.connection.nid_radio = 0;
  outC->radioStatus_1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->radioStatus_1.connection.connectionLost = kcg_true;
  outC->radioStatus_1.connection.isInRadioHole = kcg_true;
  outC->radioStatus_1.session.valid = kcg_true;
  outC->radioStatus_1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->radioStatus_1.session.nid_c = 0;
  outC->radioStatus_1.session.nid_rbc = 0;
  outC->radioStatus_1.session.nid_radio = 0;
  /* 1 */
  mobileBusRouter_out_init_Handover_Pkg_handoverUtils_Pkg(&outC->_2_Context_1);
  /* 2 */ MoRC_Main_v2_init_MoRC_Pck(&outC->Context_2);
  /* 1 */ MoRC_Main_v2_init_MoRC_Pck(&outC->_1_Context_1);
  /* 1 */
  processHandingOver_init_Handover_Pkg_handoverUtils_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_HO_reset_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(&outC->_2_Context_1);
  /* 2 */ MoRC_Main_v2_reset_MoRC_Pck(&outC->Context_2);
  /* 1 */ MoRC_Main_v2_reset_MoRC_Pck(&outC->_1_Context_1);
  /* 1 */
  processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_HO_Pkg::MoRC_HO */
void MoRC_HO_MoRC_HO_Pkg(
  /* MoRC_HO_Pkg::MoRC_HO::mode */ M_MODE mode,
  /* MoRC_HO_Pkg::MoRC_HO::level */ M_LEVEL level,
  /* MoRC_HO_Pkg::MoRC_HO::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_HO_Pkg::MoRC_HO::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_HO_Pkg::MoRC_HO::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_1 */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_2 */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_1 */ mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_2 */ mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* MoRC_HO_Pkg::MoRC_HO::msgBusToRBC_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* MoRC_HO_Pkg::MoRC_HO::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MoRC_HO_Pkg::MoRC_HO::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* MoRC_HO_Pkg::MoRC_HO::t_train */ T_TRAIN t_train,
  /* MoRC_HO_Pkg::MoRC_HO::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MoRC_HO_Pkg::MoRC_HO::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_HO_Pkg::MoRC_HO::reset */ kcg_bool reset,
  /* MoRC_HO_Pkg::MoRC_HO::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* MoRC_HO_Pkg::MoRC_HO::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* MoRC_HO_Pkg::MoRC_HO::configData */ morc_configData_T_RCM_Session_Types_Pkg *configData,
  /* MoRC_HO_Pkg::MoRC_HO::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* MoRC_HO_Pkg::MoRC_HO::m_version */ M_VERSION m_version,
  outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  /* MoRC_HO_Pkg::MoRC_HO */
  static morcStatus_T_RCM_Session_Types_Pkg tmp1;
  /* MoRC_HO_Pkg::MoRC_HO */
  static morcStatus_T_RCM_Session_Types_Pkg tmp;
  
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->eventsAndPhases_p,
    eventsAndPhases);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->mobileConnectionContext_1_p,
    mobileConnectionContext_1);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->mobileRegistrationContext_1_p,
    mobileRegistrationContext_1);
  outC->level_p = level;
  outC->mode_p = mode;
  /* last_init_ck_morcStatus_2 */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &tmp1,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &tmp,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&tmp1, &outC->radioStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&tmp, &outC->radioStatus_2);
  }
  /* 1 */
  processHandingOver_Handover_Pkg_handoverUtils_Pkg(
    mode,
    &tmp1,
    &tmp,
    dataFromTrack_in,
    trainPosition,
    BGs,
    sessionManagementAbility,
    trainProperties,
    &outC->Context_1);
  outC->triggerTrainData = outC->Context_1.sendTrainData_2_acceptingRBC;
  outC->bufferInformationFromAcceptingRBC =
    outC->Context_1.bufferInformationFromAcceptingRBC;
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->supervisingRBC,
    &outC->Context_1.supervisingRBC);
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd =
    outC->Context_1.trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  /* 1 */
  MoRC_Main_v2_MoRC_Pck(
    &outC->Context_1.sessionCmds_2_MoRC_1,
    eventsAndPhases,
    atPowerUpRadioNetworkID,
    newRadioNetworkIDFromDriver,
    mode,
    level,
    mobileRegistrationContext_1,
    mobileConnectionContext_1,
    currentTime,
    reset,
    t_train,
    configData,
    &outC->_1_Context_1);
  outC->rejectOrderToContactRBC_or_RIU =
    outC->_1_Context_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->radioStatus_1,
    &outC->_1_Context_1.status);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->safeRadioIndication,
    &outC->_1_Context_1.safeRadioIndication);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd_1,
    &outC->_1_Context_1.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd_1,
    &outC->_1_Context_1.mobileRegistrationCmd);
  /* 2 */
  MoRC_Main_v2_MoRC_Pck(
    &outC->Context_1.sessionCmds_2_MoRC_2,
    eventsAndPhases,
    atPowerUpRadioNetworkID,
    newRadioNetworkIDFromDriver,
    mode,
    level,
    mobileRegistrationContext_2,
    mobileConnectionContext_2,
    currentTime,
    reset,
    t_train,
    configData,
    &outC->Context_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->radioStatus_2,
    &outC->Context_2.status);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd_2,
    &outC->Context_2.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd_2,
    &outC->Context_2.mobileRegistrationCmd);
  outC->infomDriverNoCompatibleVersionSupported =
    outC->_1_Context_1.infomDriverNoCompatibleVersionSupported |
    outC->Context_2.infomDriverNoCompatibleVersionSupported;
  /* 1 */ if (outC->_1_Context_1.lastReceivedRadioNetworkID.valid) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->lastReceivedRadioNetworkID,
      &outC->_1_Context_1.lastReceivedRadioNetworkID);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->lastReceivedRadioNetworkID,
      &outC->Context_2.lastReceivedRadioNetworkID);
  }
  outC->memorizeTheLastRadioNetworkID =
    outC->_1_Context_1.memorizeTheLastRadioNetworkID |
    outC->Context_2.memorizeTheLastRadioNetworkID;
  outC->triggerPositionReport =
    outC->Context_1.sendPositionReport_2_acceptingRBC |
    outC->Context_1.sendPositionReport_2_handingOverRBC |
    outC->_1_Context_1.sendAPositionReport |
    outC->Context_2.sendAPositionReport;
  outC->ready = !(outC->Context_1.notReady | outC->_1_Context_1.notReady |
      outC->Context_2.notReady);
  /* 1 */
  mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &outC->_1_Context_1.msgToTrackTriggers,
    &outC->Context_2.msgToTrackTriggers,
    outC->Context_1.useInformationFromAcceptingRBC,
    outC->Context_1.handingOverMobile_is_mobile_1,
    outC->Context_1.sendPositionReport_2_acceptingRBC,
    outC->Context_1.sendPositionReport_2_handingOverRBC,
    outC->_1_Context_1.sendAPositionReport,
    outC->Context_2.sendAPositionReport,
    outC->triggerTrainData,
    t_train,
    t_train_global,
    msgBusToRBC_in,
    sessionManagementAbility,
    (*configData).nid_engine,
    onboardPhoneNumbers_b,
    m_version,
    &outC->_2_Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_2_RBC_1,
    &outC->_2_Context_1.msgBus_2_RBC_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_2_RBC_2,
    &outC->_2_Context_1.msgBus_2_RBC_2);
  /* 1 */
  dec_p42_RCM_Utils_Pkg_decoders(
    dataFromTrack_in,
    &outC->p42_sessionManagement_p);
  outC->p42_sessionManagementReceived_p = outC->p42_sessionManagement_p.valid;
  /* 1 */
  dec_m38_RCM_Utils_Pkg_decoders(
    dataFromTrack_in,
    &outC->m38_initiationOfACommunicationSessionMsg_p);
  outC->m38_initiationOfACommunicationSessionMsgReceived_p =
    outC->m38_initiationOfACommunicationSessionMsg_p.valid;
  /* 1 */
  dec_m39_RCM_Utils_Pkg_decoders(
    dataFromTrack_in,
    &outC->m39_AckOfTerminationOfACommunicationSession_p);
  /* 1 */
  dec_m32_RCM_Utils_Pkg_decoders(
    dataFromTrack_in,
    kcg_true,
    &outC->m32_SystemVersion_p);
  outC->m32_SystemVersionReceived_p = outC->m32_SystemVersion_p.valid;
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p =
    outC->m39_AckOfTerminationOfACommunicationSession_p.valid;
  /* 1 */
  dec_p45_RCM_Utils_Pkg_decoders(
    dataFromTrack_in,
    &outC->p45_networkRegistration_p);
  outC->p45_networkRegistrationReceived_p =
    outC->p45_networkRegistration_p.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_HO_MoRC_HO_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

