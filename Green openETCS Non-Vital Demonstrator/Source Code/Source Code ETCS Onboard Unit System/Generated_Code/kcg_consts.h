/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* cEmptyChangeTractionSystem */
extern const Change_traction_system_T_TIU_Types_Pkg cEmptyChangeTractionSystem;

/* cPassengerDoorControlInfo */
extern const Passenger_door_control_info_T_TIU_Types_Pkg cPassengerDoorControlInfo;

/* cEmptyChangeOfAllowedCurrentConsumption */
extern const Change_of_allowed_current_consumption_T_TIU_Types_Pkg cEmptyChangeOfAllowedCurrentConsumption;

/* cEmptyDMIAdhesionFactorData */
extern const DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg cEmptyDMIAdhesionFactorData;

/* cEmptyDMITrainRunningNumber */
extern const DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg cEmptyDMITrainRunningNumber;

/* cEmptyDMIDriverIdentifier */
extern const DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg cEmptyDMIDriverIdentifier;

/* cEmptyDMIRadioNet */
extern const DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIRadioNet;

/* cEmptyDMIDisplayControl */
extern const DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIDisplayControl;

/* cDMIIdentifierRequest */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cDMIIdentifierRequest;

/* cEmptyDMIEVCcodedTrainData */
extern const DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIEVCcodedTrainData;

/* cEmptyRadioNetworkIds */
extern const radioNetWorkIDs_T_MoRC_Pck cEmptyRadioNetworkIds;

/* cMoRCConnectionStatusTimerInterval */
#define cMoRCConnectionStatusTimerInterval 0

/* cEmptyDMIMA */
extern const movementAuthorityForDMI_T_DMI_Types_Pkg cEmptyDMIMA;

/* cEmptyLocationBasedEvents */
extern const LocationBasedEvents_T_ProvidePositionReport_Pkg cEmptyLocationBasedEvents;

/* cEmptyMoRC_OnboardTelefonNumbers */
extern const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cEmptyMoRC_OnboardTelefonNumbers;

/* cEmptyBrakeInhibitionCommand */
extern const Brake_inhibition_command_T_TIU_Types_Pkg cEmptyBrakeInhibitionCommand;

/* cEmptyTrainCommand */
extern const Type_I_train_commands_T_TIU_Types_Pkg cEmptyTrainCommand;

/* cNo_Levels */
extern const DMI_LevelList_T_DMI_Types_Pkg cNo_Levels;

/* cOwnVersion */
#define cOwnVersion M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* cEmptyPassedBG */
extern const passedBG_T_BG_Types_Pkg cEmptyPassedBG;

/* cEmtpyIsolationStatus */
extern const Isolation_Status_T_TIU_Types_Pkg cEmtpyIsolationStatus;

/* cEmptyData_From_STM */
extern const T_Data_From_STM_Level_And_Mode_Types_Pkg cEmptyData_From_STM;

/* cBusStart */
extern const M_TrainTrackMessageBus_t_TM_TrainTrack_Bus cBusStart;

/* cNoRadioCmd */
extern const radioManagementMessage_T_Common_Types_Pkg cNoRadioCmd;

/* cEmptyTrainPosition */
extern const trainPosition_T_TrainPosition_Types_Pck cEmptyTrainPosition;

/* cEmptyBrakeCommand */
extern const Brake_command_T_TIU_Types_Pkg cEmptyBrakeCommand;

/* cEmptySpeedForDMI */
extern const speedSupervisionForDMI_T_DMI_Types_Pkg cEmptySpeedForDMI;

/* cEmptyPositionedBGs */
extern const positionedBGs_T_TrainPosition_Types_Pck cEmptyPositionedBGs;

/* cEmptyTrainProperties */
extern const trainProperties_T_TrainPosition_Types_Pck cEmptyTrainProperties;

/* cMLInitialModesAndLevel */
extern const T_Mode_Level_Level_And_Mode_Types_Pkg cMLInitialModesAndLevel;

/* cNoPersistentData */
extern const ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg cNoPersistentData;

/* cNoP0 */
extern const PT0_PositionReport_T_Packet_TrainTypes_Pkg cNoP0;

/* cNoP1 */
extern const PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg cNoP1;

/* cNoPacketsForML */
extern const T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg cNoPacketsForML;

/* Level_And_Mode_Types_Pkg::C_Cycle_Duration */
#define C_Cycle_Duration_Level_And_Mode_Types_Pkg 300

/* Level_And_Mode_Types_Pkg::C_Driver_Ack_Delay */
#define C_Driver_Ack_Delay_Level_And_Mode_Types_Pkg 5000

/* InputManagement::cImmediateAck_Distance */
#define cImmediateAck_Distance_InputManagement 32767

/* Level_And_Mode_Types_Pkg::M_Max_ModeProfile */
#define M_Max_ModeProfile_Level_And_Mode_Types_Pkg 3

/* Level_And_Mode_Types_Pkg::M_Max_TransitionInPriorityTable */
#define M_Max_TransitionInPriorityTable_Level_And_Mode_Types_Pkg 7

/* manage_DMI_Output_Pkg::cDefaultTrainData */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg cDefaultTrainData_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cDefaultDynamic */
extern const DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg cDefaultDynamic_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::ctimeInterval */
#define ctimeInterval_manage_DMI_Output_Pkg 300

/* manage_DMI_Output_Pkg::cOutputStatus */
extern const dmiOutputs_T_manage_DMI_Output_Pkg cOutputStatus_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyInitRequest */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyInitRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cSendInitRequest */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cSendInitRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cNoMenu */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cNoMenu_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuTrainData */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cMenuTrainData_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuStart */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cMenuStart_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuLevel */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cMenuLevel_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyIconRequest */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyIconRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cIconClearEB */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cIconClearEB_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cIconRequestEB */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cIconRequestEB_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyVersion */
extern const DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyVersion_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyLevelData */
extern const DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyLevelData_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cNoTrackCondition */
extern const DMI_trackCondition_T_DMI_Types_Pkg cNoTrackCondition_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptySpeedProfileElement */
extern const DMI_speedProfileElement_T_DMI_Types_Pkg cEmptySpeedProfileElement_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyGradientProfileElement */
extern const DMI_gradientProfileElement_T_DMI_Types_Pkg cEmptyGradientProfileElement_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cTextSpecial_BG */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cTextSpecial_BG_manage_DMI_Output_Pkg;

/* manage_TextMessages_Pkg::cText_Level_0 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_0_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_1 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_1_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_2 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_2_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_3 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_3_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_NTC */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_NTC_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_SR */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_SR_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_OS */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_OS_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_SH */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_SH_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_LS */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_LS_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_SN */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_SN_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_UN */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_UN_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_TR */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_TR_manage_TextMessages_Pkg;

/* manage_DMI_Output_Pkg::cDefaultText */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cDefaultText_manage_DMI_Output_Pkg;

/* MoRC_Pck::cNoMessageToRBC */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cNoMessageToRBC_MoRC_Pck;

/* MoRC_Pck::cTerminateSafeRadioConnectionCmd */
extern const mobileSWCmd_Type_MoRC_Pck cTerminateSafeRadioConnectionCmd_MoRC_Pck;

/* MoRC_Pck::cRegisterSafeRadioConnectionCmd */
extern const mobileSWCmd_Type_MoRC_Pck cRegisterSafeRadioConnectionCmd_MoRC_Pck;

/* MoRC_Pck::cMaxNoOfConnectionRetries */
#define cMaxNoOfConnectionRetries_MoRC_Pck 3

/* MoRC_Pck::cRadioConnectionReestablishingTimeout */
#define cRadioConnectionReestablishingTimeout_MoRC_Pck 10000

/* MoRC_Pck::cTerminationOfCommunicationSession_MaxNoOfRepetitions */
#define cTerminationOfCommunicationSession_MaxNoOfRepetitions_MoRC_Pck 5

/* MoRC_Pck::cTerminationOfCommunicationSessionRepetitionInterval */
#define cTerminationOfCommunicationSessionRepetitionInterval_MoRC_Pck 1000

/* MoRC_Pck::cInvalidRadioNetworkID */
extern const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cInvalidRadioNetworkID_MoRC_Pck;

/* MoRC_Pck::cInvalidMobileSWStatus */
extern const mobileSWStatus_Type_MoRC_Pck cInvalidMobileSWStatus_MoRC_Pck;

/* MoRC_Pck::cInvalidMobileSWCmd */
extern const mobileSWCmd_Type_MoRC_Pck cInvalidMobileSWCmd_MoRC_Pck;

/* MoRC_Pck::cInvalidMobileHWStatus */
extern const mobileHWStatus_Type_MoRC_Pck cInvalidMobileHWStatus_MoRC_Pck;

/* MoRC_Pck::cMobileSWStatus_noHW */
extern const mobileSWStatus_Type_MoRC_Pck cMobileSWStatus_noHW_MoRC_Pck;

/* MoRC_Pck::cInvalidRadioNetworkID_value */
#define cInvalidRadioNetworkID_value_MoRC_Pck 0

/* MoRC_Pck::cInvalidmobileHWCmd */
extern const mobileHWCmd_Type_MoRC_Pck cInvalidmobileHWCmd_MoRC_Pck;

/* MoRC_Pck::cPositionReportRepetitionInterval */
#define cPositionReportRepetitionInterval_MoRC_Pck 10000

/* MoRC_Pck::cPositionReoport_MaxNoOfRepetitions */
#define cPositionReoport_MaxNoOfRepetitions_MoRC_Pck 5

/* MoRC_Pck::Coder_Pkg::cInvalidOrder */
extern const p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg cInvalidOrder_MoRC_Pck_Coder_Pkg;

/* MoRC_Pck::Coder_Pkg::cEmptyOutPackets */
extern const outPackets_T_Common_Types_Pkg cEmptyOutPackets_MoRC_Pck_Coder_Pkg;

/* MoRC_Pck::cNID_MESSAGE_RBC_RIU_SystemVersion */
#define cNID_MESSAGE_RBC_RIU_SystemVersion_MoRC_Pck 32

/* Id_Pkg::cm38_Initiation_of_a_Communication_Session */
#define cm38_Initiation_of_a_Communication_Session_Id_Pkg 38

/* Id_Pkg::cm39_Acknowledgement_of_termination_of_a_communication_session */
#define cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg 39

/* MoRC_Pck::Coder_Pkg::cNID_RBC_contactLastKnownRBC */
#define cNID_RBC_contactLastKnownRBC_MoRC_Pck_Coder_Pkg 16383

/* MoRC_Pck::Coder_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard */
#define cNID_RADIO_useTheShortNumberStoredOnboard_MoRC_Pck_Coder_Pkg 0xFFFFFFFF

/* TM_conversions::INT_Q_RBC_establish */
#define INT_Q_RBC_establish_TM_conversions 1

/* TM_conversions::INT_Q_RBC_terminate */
#define INT_Q_RBC_terminate_TM_conversions 0

/* TM_conversions::ENUM_Q_RBC_terminate */
#define ENUM_Q_RBC_terminate_TM_conversions Q_RBC_Terminate_communication_session

/* TM_conversions::ENUM_Q_RBC_establish */
#define ENUM_Q_RBC_establish_TM_conversions Q_RBC_Establish_communication_session

/* TM_conversions::INT_Q_SLEEPSESSION_execute */
#define INT_Q_SLEEPSESSION_execute_TM_conversions 1

/* TM_conversions::INT_Q_SLEEPSESSION_ignore */
#define INT_Q_SLEEPSESSION_ignore_TM_conversions 0

/* TM_conversions::ENUM_Q_SLEEPSESSION_execute */
#define ENUM_Q_SLEEPSESSION_execute_TM_conversions Q_SLEEPSESSION_Execute_session_establishment_order

/* TM_conversions::ENUM_Q_SLEEPSESSION_ignore */
#define ENUM_Q_SLEEPSESSION_ignore_TM_conversions Q_SLEEPSESSION_Ignore_session_establishment_order

/* Id_Pkg::co154_No_Compatible_Version_Support */
#define co154_No_Compatible_Version_Support_Id_Pkg 154

/* Id_Pkg::co159_Session_established */
#define co159_Session_established_Id_Pkg 159

/* Id_Pkg::co156_Termination_of_a_communication_session */
#define co156_Termination_of_a_communication_session_Id_Pkg 156

/* Id_Pkg::co155_Initiation_of_a_communication_session */
#define co155_Initiation_of_a_communication_session_Id_Pkg 155

/* TM_TrainToTrack::DIM_max_elements_P003 */
#define DIM_max_elements_P003_TM_TrainToTrack (3 + DIM_nid_radio_list_TM_TrainToTrack)

/* DMI_Types_Pkg::cDMI_maxSpeedProfile */
#define cDMI_maxSpeedProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxGradientProfile */
#define cDMI_maxGradientProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxTrackCondProfile */
#define cDMI_maxTrackCondProfile_DMI_Types_Pkg 32

/* ManageProcedure_Pkg::cNID_BG_Radio_Header */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg cNID_BG_Radio_Header_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket42_to_MoRC */
extern const P42_SessionManagement_T_Packet_Types_Pkg cpacket42_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket45_nid_mn_to_MoRC */
#define cpacket45_nid_mn_to_MoRC_ManageProcedure_Pkg 1234

/* ManageProcedure_Pkg::cpacket45_to_MoRC */
extern const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cpacket45_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC */
extern const P42_SessionManagement_T_Packet_Types_Pkg cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cdefault_manageT */
extern const radioManagementMessage_T_Common_Types_Pkg cdefault_manageT_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cSendingRBC */
extern const RBC_Id_T_Common_Types_Pkg cSendingRBC_ManageProcedure_Pkg;

/* API_RadioCommunication_Pkg::cInitOutputToRadioAPI */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cInitOutputToRadioAPI_API_RadioCommunication_Pkg;

/* SDM_Commands_Pkg::cSupervisionStatus */
#define cSupervisionStatus_SDM_Commands_Pkg Undefined_Supervision_SDM_Types_Pkg

/* SDM_Commands_Pkg::cSDM_Types */
#define cSDM_Types_SDM_Commands_Pkg No_SDM_Type_SDM_Types_Pkg

/* DMI_Types_Pkg::cDMIUnknownSpeed */
#define cDMIUnknownSpeed_DMI_Types_Pkg (- 1)

/* TargetManagement_pkg::emptyMRSPSection */
extern const MRSP_internal_section_T_TargetManagement_types emptyMRSPSection_TargetManagement_pkg;

/* TargetManagement_pkg::emptyTarget */
extern const Target_real_T_TargetManagement_types emptyTarget_TargetManagement_pkg;

/* SDM_Types_Pkg::V_ebi_min */
#define V_ebi_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_ebi_min */
#define dV_ebi_min_SDM_Types_Pkg 2.083333333

/* SDM_Types_Pkg::dV_ebi_max */
#define dV_ebi_max_SDM_Types_Pkg 4.166666667

/* SDM_Types_Pkg::V_ebi_max */
#define V_ebi_max_SDM_Types_Pkg 58.333333333

/* SDM_Types_Pkg::V_warning_min */
#define V_warning_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_warning_min */
#define dV_warning_min_SDM_Types_Pkg 1.111111111

/* SDM_Types_Pkg::dV_warning_max */
#define dV_warning_max_SDM_Types_Pkg 1.388888889

/* SDM_Types_Pkg::V_warning_max */
#define V_warning_max_SDM_Types_Pkg 38.888888889

/* SDM_Types_Pkg::V_sbi_min */
#define V_sbi_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_sbi_min */
#define dV_sbi_min_SDM_Types_Pkg 1.527777778

/* SDM_Types_Pkg::dV_sbi_max */
#define dV_sbi_max_SDM_Types_Pkg 2.777777778

/* SDM_Types_Pkg::V_sbi_max */
#define V_sbi_max_SDM_Types_Pkg 58.333333333

/* SDM_Types_Pkg::T_preindication */
#define T_preindication_SDM_Types_Pkg 7.0

/* TargetLimits_Pkg::cMAX_Onboard_V_Release_Iterations */
#define cMAX_Onboard_V_Release_Iterations_TargetLimits_Pkg 10

/* SDM_Types_Pkg::T_warning */
#define T_warning_SDM_Types_Pkg 2.0

/* SDM_Types_Pkg::T_driver */
#define T_driver_SDM_Types_Pkg 4.0

/* CalcBrakingCurves_types::cMAX_BC_ARCS */
#define cMAX_BC_ARCS_CalcBrakingCurves_types (cMAX_DISTANCE_STEPS_CalcBrakingCurves_types + cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types)

/* SDMConversionModelPkg::cBrakePositionGCt */
#define cBrakePositionGCt_SDMConversionModelPkg 0.16

/* SDMConversionModelPkg::cBrakePositionPCt */
#define cBrakePositionPCt_SDMConversionModelPkg 0.2

/* SDMConversionModelPkg::cBrakePositionLengthShort */
#define cBrakePositionLengthShort_SDMConversionModelPkg 900.0

/* SDMConversionModelPkg::cBrakePositionGECoeff */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionGECoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionFreightLongECoeff */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionFreightLongECoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionFreightLongSCoeff */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionFreightLongSCoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionPassengerSCoeff */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionPassengerSCoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionFreightShortSCoeff */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionFreightShortSCoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionPECoeff */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionPECoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionLengthMin */
#define cBrakePositionLengthMin_SDMConversionModelPkg 400.0

/* SDMConversionModelPkg::cLKrIntLookUp */
extern const array_int_32 cLKrIntLookUp_SDMConversionModelPkg;

/* SDMConversionModelPkg::cKvIntSetLength */
#define cKvIntSetLength_SDMConversionModelPkg cNIterMax_Packet_Types_Pkg

/* SDMConversionModelPkg::cEmptyKvIntSet */
extern const nvkvintset_T_Packet_Types_Pkg cEmptyKvIntSet_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePercentServiceMax */
#define cBrakePercentServiceMax_SDMConversionModelPkg 135

/* SDMConversionModelPkg::cBrakePercentALookup */
extern const array_int_6_221 cBrakePercentALookup_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePercentV_lim */
extern const Array04_TM cBrakePercentV_lim_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePercentSpeedLookup */
extern const array_int_221 cBrakePercentSpeedLookup_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePercentSteps */
#define cBrakePercentSteps_SDMConversionModelPkg (cBrakePercentStepsMax_SDMConversionModelPkg - cBrakePercentStepsMin_SDMConversionModelPkg + 1)

/* SDMConversionModelPkg::cBrakePercentStepsMax */
#define cBrakePercentStepsMax_SDMConversionModelPkg 250

/* SDMConversionModelPkg::cBrakePercentStepsMin */
#define cBrakePercentStepsMin_SDMConversionModelPkg 30

/* SDMConversionModelPkg::cKvMergedLength */
#define cKvMergedLength_SDMConversionModelPkg (cBrakePercentSpeedSteps_SDMConversionModelPkg + cKvIntLength_SDMConversionModelPkg)

/* SDMConversionModelPkg::cKvIntLength */
#define cKvIntLength_SDMConversionModelPkg cNIterMax_Packet_Types_Pkg

/* SDMConversionModelPkg::cBrakePercentSpeedSteps */
#define cBrakePercentSpeedSteps_SDMConversionModelPkg 6

/* CalcBrakingCurves_types::cMAX_SPEED_VALUE_STEP */
#define cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types (cNIterMax_Packet_Types_Pkg + 6 + 1)

/* CalcBrakingCurves_types::cMAX_DISTANCE_STEPS */
#define cMAX_DISTANCE_STEPS_CalcBrakingCurves_types GradientMaxSectionsTrainlengthCompensated_SDM_GradientAcceleration_types

/* SDM_GradientAcceleration_types::GradientMaxSectionsTrainlengthCompensated */
#define GradientMaxSectionsTrainlengthCompensated_SDM_GradientAcceleration_types (GradientMaxSections_TrackAtlasTypes * 2)

/* SDM_Types_Pkg::A_gravity */
#define A_gravity_SDM_Types_Pkg 981

/* SDM_Types_Pkg::M_rotating_max */
#define M_rotating_max_SDM_Types_Pkg 15

/* SDM_Types_Pkg::M_rotating_min */
#define M_rotating_min_SDM_Types_Pkg 2

/* Level_And_Mode_Types_Pkg::M_Default_Transition */
extern const T_LevelTransition_Level_And_Mode_Types_Pkg M_Default_Transition_Level_And_Mode_Types_Pkg;

/* DMI_Types_Pkg::cDMI_EVC_Status_Default */
extern const DMI_EVC_status_T_DMI_Types_Pkg cDMI_EVC_Status_Default_DMI_Types_Pkg;

/* DMI_Types_Pkg::cEmptyTestStatusList */
extern const DMI_TXT_MSGList_status_T_DMI_Types_Pkg cEmptyTestStatusList_DMI_Types_Pkg;

/* manage_DMI_Input_Pkg::cDMIIconAckDefault */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMIIconAckDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIDriverRequestDefault */
extern const DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg cDMIDriverRequestDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITextMessageAckDefault */
extern const DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMITextMessageAckDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIIdentifierDefault */
extern const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg cDMIIdentifierDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIDriverIdentifierDefault */
extern const DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg cDMIDriverIdentifierDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITrainRunningNumberDefault */
extern const DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg cDMITrainRunningNumberDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIRadioNetDataDefault */
extern const DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg cDMIRadioNetDataDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITrainDataDefault */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg cDMITrainDataDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITrainDataAckDefault */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMITrainDataAckDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIAdhesionFactorDefault */
extern const DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg cDMIAdhesionFactorDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cAckModesAndLevels */
extern const DMI_To_Modes_T_DMI_Types_Pkg cAckModesAndLevels_manage_DMI_Input_Pkg;

/* DMI_Types_Pkg::cDMI_charsInText */
#define cDMI_charsInText_DMI_Types_Pkg 255

/* DMI_Messages_Bothways_Pkg::cDiverIdentifierLength */
#define cDiverIdentifierLength_DMI_Messages_Bothways_Pkg 9

/* manage_TextMessages_Pkg::cNoDMI_ML */
extern const DMI_To_Modes_T_DMI_Types_Pkg cNoDMI_ML_manage_TextMessages_Pkg;

/* DMI_Types_Pkg::cDMI_TextMsgListSize */
#define cDMI_TextMsgListSize_DMI_Types_Pkg 31

/* DMI_Types_Pkg::cFreeTestStatusElement */
extern const DMI_TXT_MSG_status_T_DMI_Types_Pkg cFreeTestStatusElement_DMI_Types_Pkg;

/* manage_DMI_Input_Pkg::cNoDriverRequestToModes */
extern const DMI_DriverRequest_T_DMI_Types_Pkg cNoDriverRequestToModes_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cNoLevelTransitionInfo */
extern const T_LevelTansitionInfo_Level_And_Mode_Types_Pkg cNoLevelTransitionInfo_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cNo_STM */
#define cNo_STM_manage_DMI_Input_Pkg (- 1)

/* manage_DMI_Input_Pkg::cNoMATrigger */
extern const Driver2MAR_T_MA_Request cNoMATrigger_manage_DMI_Input_Pkg;

/* BG_Types_Pkg::cUnknownBG */
#define cUnknownBG_BG_Types_Pkg 16383

/* Radio_Types_Pkg::cEmptyRadioMsg */
extern const RadioMessage_T_Radio_Types_Pkg cEmptyRadioMsg_Radio_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::cEmptyStore */
extern const TelegramStore_T_Receive_TrackSide_Msg_Pkg cEmptyStore_Receive_TrackSide_Msg_Pkg;

/* BG_Types_Pkg::cMaxDistanceBalisesInGroup */
extern const OdometryLocations_T_Obu_BasicTypes_Pkg cMaxDistanceBalisesInGroup_BG_Types_Pkg;

/* BG_Types_Pkg::cEmptyTelegramArray */
extern const TelegramArray_T_BG_Types_Pkg cEmptyTelegramArray_BG_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::cEmptyCollector */
extern const BGCollector_T_Receive_TrackSide_Msg_Pkg cEmptyCollector_Receive_TrackSide_Msg_Pkg;

/* BG_Types_Pkg::cemptyPosition */
extern const centerOfBalisePosition_T_BG_Types_Pkg cemptyPosition_BG_Types_Pkg;

/* BG_Types_Pkg::cEmpty_BaliseTlg */
extern const Telegram_T_BG_Types_Pkg cEmpty_BaliseTlg_BG_Types_Pkg;

/* BG_Types_Pkg::cEmptyBGMessages */
extern const BG_Message_T_BG_Types_Pkg cEmptyBGMessages_BG_Types_Pkg;

/* CheckBGConsistency_Pkg::cRecivedMesg_PlaceHolder */
extern const ReceivedMessage_T_Common_Types_Pkg cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cTelegram */
extern const Telegram_T_BG_Types_Pkg cTelegram_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cInConsistentTelegram */
extern const Telegram_T_BG_Types_Pkg cInConsistentTelegram_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cTheTelegramFitsWithAll */
#define cTheTelegramFitsWithAll_CheckBGConsistency_Pkg 255

/* CheckBGConsistency_Pkg::cTheTelegramNeverFitsAnyMessage */
#define cTheTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg 254

/* CheckBGConsistency_Pkg::cEurobalise */
#define cEurobalise_CheckBGConsistency_Pkg msrc_Eurobalise_Common_Types_Pkg

/* CheckBGConsistency_Pkg::cRadioMetadata */
extern const RadioMetadata_T_Common_Types_Pkg cRadioMetadata_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cNoRadioHeader */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg cNoRadioHeader_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cSendingRBC */
extern const RBC_Id_T_Common_Types_Pkg cSendingRBC_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cQDirLRBGunknown */
#define cQDirLRBGunknown_CheckBGConsistency_Pkg Q_DIRLRBG_Unknown

/* CheckBGConsistency_Pkg::cQqDirTrain */
#define cQqDirTrain_CheckBGConsistency_Pkg Q_DIRTRAIN_Unknown

/* CheckBGConsistency_Pkg::cMetaDataElement */
extern const MetadataElement_T_Common_Types_Pkg cMetaDataElement_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cMetaData */
extern const Metadata_T_Common_Types_Pkg cMetaData_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cQDirLrbgNominal */
#define cQDirLrbgNominal_CheckBGConsistency_Pkg Q_DIRLRBG_Nominal

/* CheckBGConsistency_Pkg::cQqDirTrainNominal */
#define cQqDirTrainNominal_CheckBGConsistency_Pkg Q_DIRTRAIN_Nominal

/* CheckBGConsistency_Pkg::cQqDirTrainRevers */
#define cQqDirTrainRevers_CheckBGConsistency_Pkg Q_DIRTRAIN_Reverse

/* CheckBGConsistency_Pkg::cQDirLrbgRevers */
#define cQDirLrbgRevers_CheckBGConsistency_Pkg Q_DIRLRBG_Reverse

/* CheckBGConsistency_Pkg::cNoStoredBG */
extern const positionedBG_T_TrainPosition_Types_Pck cNoStoredBG_CheckBGConsistency_Pkg;

/* TM_conversions::ENUM_M_VERSION_Previous_versions */
#define ENUM_M_VERSION_Previous_versions_TM_conversions M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* TM_conversions::ENUM_M_VERSION_Version_1_0 */
#define ENUM_M_VERSION_Version_1_0_TM_conversions M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_1 */
#define ENUM_M_VERSION_Version_1_1_TM_conversions M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_2_0 */
#define ENUM_M_VERSION_Version_2_0_TM_conversions M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* TM_conversions::INT_M_VERSION_previous_M */
#define INT_M_VERSION_previous_M_TM_conversions 15

/* TM_conversions::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM_conversions 32

/* TM_conversions::INT_M_VERSION_1_1 */
#define INT_M_VERSION_1_1_TM_conversions 17

/* TM_conversions::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM_conversions 16

/* ValidateDataDirection_Pkg::cEmptyLRBG */
extern const positionedBG_T_TrainPosition_Types_Pck cEmptyLRBG_ValidateDataDirection_Pkg;

/* BG_Types_Pkg::cEmptyBG_Header */
extern const BG_Header_T_BG_Types_Pkg cEmptyBG_Header_BG_Types_Pkg;

/* BG_Types_Pkg::cMaxNoBalises */
#define cMaxNoBalises_BG_Types_Pkg 8

/* CheckEuroradioMessage::cPermittedRadioPackets1 */
extern const MetadataTruthtable_T1_CheckEuroradioMessage cPermittedRadioPackets1_CheckEuroradioMessage;

/* CheckEuroradioMessage::cTTrainUnknown1 */
#define cTTrainUnknown1_CheckEuroradioMessage 4294967295

/* CheckEuroradioMessage::cRadioSessionConnecting1 */
#define cRadioSessionConnecting1_CheckEuroradioMessage morc_st_establishing_Radio_Types_Pkg

/* DataDictionary_Pkg::LevelDecisionTableFromBalise */
extern const LevelDecisionTableType_DataDictionary_Pkg LevelDecisionTableFromBalise_DataDictionary_Pkg;

/* DataDictionary_Pkg::LevelDecisionTableFromRBC */
extern const LevelDecisionTableType_DataDictionary_Pkg LevelDecisionTableFromRBC_DataDictionary_Pkg;

/* DataDictionary_Pkg::ModeDecisionTable */
extern const ModeDecisionTableType_DataDictionary_Pkg ModeDecisionTable_DataDictionary_Pkg;

/* Config_Pkg::MAX_PACKAGES */
#define MAX_PACKAGES_Config_Pkg 30

/* Common_Types_Pkg::cNoMetaDataElement */
extern const MetadataElement_T_Common_Types_Pkg cNoMetaDataElement_Common_Types_Pkg;

/* xdebugSupport_Pkg::cNoML */
extern const dataCollectionForLevelTransition_T_xdebugSupport_Pkg cNoML_xdebugSupport_Pkg;

/* xdebugSupport_Pkg::Default_P80_legacy */
extern const P80_ModeProfiles_T_Packet_Types_Pkg Default_P80_legacy_xdebugSupport_Pkg;

/* xdebugSupport_Pkg::Default_P135_legacy */
extern const P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg Default_P135_legacy_xdebugSupport_Pkg;

/* xdebugSupport_Pkg::Default_P63_legacy */
extern const P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg Default_P63_legacy_xdebugSupport_Pkg;

/* xdebugSupport_Pkg::Default_P12_legacy */
extern const P12_Level1MovementAuthorities_T_Packet_Types_Pkg Default_P12_legacy_xdebugSupport_Pkg;

/* xdebugSupport_Pkg::cNoP41Element */
extern const P41_LevelTransitionOrder_T_Packet_Types_Pkg cNoP41Element_xdebugSupport_Pkg;

/* Id_Pkg::cp041_Level_Transition_Order */
#define cp041_Level_Transition_Order_Id_Pkg 41

/* Id_Pkg::cp046_Conditional_Level_Transition_Order */
#define cp046_Conditional_Level_Transition_Order_Id_Pkg 46

/* Common_Types_Pkg::cDefaultRM */
extern const ReceivedMessage_T_Common_Types_Pkg cDefaultRM_Common_Types_Pkg;

/* xdebugSupport_Pkg::cNoPro */
extern const probesBalises_T_xdebugSupport_Pkg cNoPro_xdebugSupport_Pkg;

/* radioOutput_Pkg::noP000 */
extern const P000_TM_TrainToTrack noP000_radioOutput_Pkg;

/* radioOutput_Pkg::noP001 */
extern const P001_TM_TrainToTrack noP001_radioOutput_Pkg;

/* radioOutput_Pkg::noP044 */
extern const P044_TM_TrainToTrack noP044_radioOutput_Pkg;

/* ids::cp004_ErrorReporting */
#define cp004_ErrorReporting_ids 4

/* ids::cp005_TrainRunningNumber */
#define cp005_TrainRunningNumber_ids 5

/* TM_conversions::ENUM_M_ERROR_balise_group_linking_conistency */
#define ENUM_M_ERROR_balise_group_linking_conistency_TM_conversions M_ERROR_Balise_group_linking_consistency_error

/* TM_conversions::ENUM_M_ERROR_Double_linking_error */
#define ENUM_M_ERROR_Double_linking_error_TM_conversions M_ERROR_Double_linking_error

/* TM_conversions::ENUM_M_ERROR_Double_repositioning_error */
#define ENUM_M_ERROR_Double_repositioning_error_TM_conversions M_ERROR_Double_repositioning_error

/* TM_conversions::ENUM_M_ERROR_Linked_balise_group_message_consistency_erro */
#define ENUM_M_ERROR_Linked_balise_group_message_consistency_erro_TM_conversions M_ERROR_Linked_balise_group_message_consistency_erro

/* TM_conversions::ENUM_M_ERROR_Radio_message_consistency_error */
#define ENUM_M_ERROR_Radio_message_consistency_error_TM_conversions M_ERROR_Radio_message_consistency_error

/* TM_conversions::ENUM_M_ERROR_Radio_safe_radio_connection_error */
#define ENUM_M_ERROR_Radio_safe_radio_connection_error_TM_conversions M_ERROR_Radio_safe_radio_connection_error

/* TM_conversions::ENUM_M_ERROR_Radio_sequence_error */
#define ENUM_M_ERROR_Radio_sequence_error_TM_conversions M_ERROR_Radio_sequence_error

/* TM_conversions::ENUM_M_ERROR_Safety_critical_failure */
#define ENUM_M_ERROR_Safety_critical_failure_TM_conversions M_ERROR_Safety_critical_failure

/* TM_conversions::ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error */
#define ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions M_ERROR_Unlinked_balise_group_message_consistency_error

/* TM_conversions::INT_M_ERROR_Safety_critical_failure */
#define INT_M_ERROR_Safety_critical_failure_TM_conversions 6

/* TM_conversions::INT_M_ERROR_Unlinked_balise_group_message_consistency_error */
#define INT_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions 2

/* TM_conversions::INT_M_ERROR_Radio_sequence_error */
#define INT_M_ERROR_Radio_sequence_error_TM_conversions 4

/* TM_conversions::INT_M_ERROR_Radio_safe_radio_connection_error */
#define INT_M_ERROR_Radio_safe_radio_connection_error_TM_conversions 5

/* TM_conversions::INT_M_ERROR_Radio_message_consistency_error */
#define INT_M_ERROR_Radio_message_consistency_error_TM_conversions 3

/* TM_conversions::INT_M_ERROR_Linked_balise_group_message_consistency_error */
#define INT_M_ERROR_Linked_balise_group_message_consistency_error_TM_conversions 1

/* TM_conversions::INT_M_ERROR_Double_repositioning_error */
#define INT_M_ERROR_Double_repositioning_error_TM_conversions 8

/* TM_conversions::INT_M_ERROR_Double_linking_error */
#define INT_M_ERROR_Double_linking_error_TM_conversions 7

/* TM_conversions::INT_M_ERROR_balise_group_linking_conistency */
#define INT_M_ERROR_balise_group_linking_conistency_TM_conversions 0

/* TM_TrainToTrack::DIM_max_elements_P004 */
#define DIM_max_elements_P004_TM_TrainToTrack 3

/* TM_TrainToTrack::DIM_max_elements_P005 */
#define DIM_max_elements_P005_TM_TrainToTrack 3

/* TM_TrainToTrack::DEFAULT_P044_int */
extern const P044_TrainTrack_int_TM_TrainToTrack DEFAULT_P044_int_TM_TrainToTrack;

/* TM_TrainToTrack::DIM_max_elements_P044 */
#define DIM_max_elements_P044_TM_TrainToTrack (11 + DIM_voltage_list_TM_TrainToTrack * 2 + 1 + DIM_nid_ntc_list_TM_TrainToTrack)

/* TM_conversions::INT_M_LOC_every_LRBG */
#define INT_M_LOC_every_LRBG_TM_conversions 1

/* TM_conversions::INT_M_LOC_not_when_LRBG */
#define INT_M_LOC_not_when_LRBG_TM_conversions 2

/* TM_conversions::INT_M_LOC_now */
#define INT_M_LOC_now_TM_conversions 0

/* TM_conversions::ENUM_M_LOC_now */
#define ENUM_M_LOC_now_TM_conversions M_LOC_Now

/* TM_conversions::ENUM_M_LOC_not_when_LRBG */
#define ENUM_M_LOC_not_when_LRBG_TM_conversions M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group

/* TM_conversions::ENUM_M_LOC_every_LRBG */
#define ENUM_M_LOC_every_LRBG_TM_conversions M_LOC_Every_LRBG_compliant_balise_group

/* TM::DIM_MaxElementsPacket058 */
#define DIM_MaxElementsPacket058_TM (DIM_N_ITER_TM * 2 + 8)

/* TM::DEFAULT_P058_OBU_section */
extern const P058_section_enum_T_TM DEFAULT_P058_OBU_section_TM;

/* TM_conversions::INT_Q_LGTLOC_max_safe_front_end */
#define INT_Q_LGTLOC_max_safe_front_end_TM_conversions 1

/* TM_conversions::INT_Q_LGTLOC_min_safe_rear_end */
#define INT_Q_LGTLOC_min_safe_rear_end_TM_conversions 0

/* TM_conversions::ENUM_Q_LGTLOC_max_safe_front_end */
#define ENUM_Q_LGTLOC_max_safe_front_end_TM_conversions Q_LGTLOC_Max_safe_front_end

/* TM_conversions::ENUM_Q_LGTLOC_min_safe_rear_end */
#define ENUM_Q_LGTLOC_min_safe_rear_end_TM_conversions Q_LGTLOC_Min_safe_rear_end

/* TM_lib_internal::DIM_P058_n_sections */
#define DIM_P058_n_sections_TM_lib_internal 2

/* TM_specific::DEFAULT_P058_legacy */
extern const P58_PositionReportParameters_T_Packet_Types_Pkg DEFAULT_P058_legacy_TM_specific;

/* ProvidePositionReport_Pkg::emptyPacket58 */
extern const P58_PositionReportParameters_T_Packet_Types_Pkg emptyPacket58_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cReportedBGList */
extern const ReportedBGList_T_ProvidePositionReport_Pkg cReportedBGList_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyHeader */
extern const Radio_TrainTrack_Header_T_Radio_Types_Pkg emptyHeader_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyPacket5 */
extern const PT5_TrainRunningNumber_Packet_TrainTypes_Pkg emptyPacket5_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyPacket4 */
extern const PT4_ErrorReporting_T_Packet_TrainTypes_Pkg emptyPacket4_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cxT_TRAIN */
#define cxT_TRAIN_ProvidePositionReport_Pkg 0

/* ProvidePositionReport_Pkg::cxQ_MARQSTREASON */
#define cxQ_MARQSTREASON_ProvidePositionReport_Pkg Q_MARQSTREASON_Start_selected_by_driver

/* ProvidePositionReport_Pkg::cxNID_EM */
#define cxNID_EM_ProvidePositionReport_Pkg 0

/* ProvidePositionReport_Pkg::cxNID_TEXTMESSAGE */
#define cxNID_TEXTMESSAGE_ProvidePositionReport_Pkg 0

/* ProvidePositionReport_Pkg::cxQ_EMERGENCYSTOP */
#define cxQ_EMERGENCYSTOP_ProvidePositionReport_Pkg Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA

/* Packet_Types_Pkg::cIterPacket58 */
#define cIterPacket58_Packet_Types_Pkg 2

/* ProvidePositionReport_Pkg::cPositionedBG_T */
extern const positionedBG_T_TrainPosition_Types_Pck cPositionedBG_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cLocationBasedEvents_T */
extern const LocationBasedEvents_T_ProvidePositionReport_Pkg cLocationBasedEvents_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cRBC_Communication_T */
extern const RBC_Communication_T_ProvidePositionReport_Pkg cRBC_Communication_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cTrainToTrackStatus_T */
extern const TrainToTrackStatus_T_BG_Types_Pkg cTrainToTrackStatus_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cOdomerty */
extern const odometry_T_Obu_BasicTypes_Pkg cOdomerty_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::c_maxReportedBGs */
#define c_maxReportedBGs_ProvidePositionReport_Pkg 8

/* ProvidePositionReport_Pkg::cInitPT3 */
extern const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cInitPT3_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cInitPT11 */
extern const PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg cInitPT11_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cInitPT9 */
extern const PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg cInitPT9_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyPacket0 */
extern const PT0_PositionReport_T_Packet_TrainTypes_Pkg emptyPacket0_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyPacket1 */
extern const PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg emptyPacket1_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cModeAndLevelStatus */
extern const ModeLevel2PositionReport_T_ProvidePositionReport_Pkg cModeAndLevelStatus_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cQ_SCALE */
#define cQ_SCALE_ProvidePositionReport_Pkg Q_SCALE_10_cm_scale

/* ProvidePositionReport_Pkg::cMinSafeRearEnd */
#define cMinSafeRearEnd_ProvidePositionReport_Pkg 0

/* ProvidePositionReport_Pkg::cPassedBG */
extern const positionedBG_T_TrainPosition_Types_Pck cPassedBG_ProvidePositionReport_Pkg;

/* TIU_Types_Pkg::emptyTIUInfo */
extern const Message_Train_Interface_to_EVC_T_TIU_Types_Pkg emptyTIUInfo_TIU_Types_Pkg;

/* cEmptyTrainData */
extern const trainData_T_TIU_Types_Pkg cEmptyTrainData;

/* cCenterDetectionAccuracyDefault */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cCenterDetectionAccuracyDefault;

/* cD_Antenna2FE */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cD_Antenna2FE;

/* cD_FE2RE */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cD_FE2RE;

/* cLocationAccuracyDefault */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cLocationAccuracyDefault;

/* trainData_pkg::cNoMessage */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cNoMessage_trainData_pkg;

/* TM_conversions::ENUM_NC_CDTRAIN_080mm */
#define ENUM_NC_CDTRAIN_080mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_80_mm

/* TM_conversions::ENUM_NC_CDTRAIN_100mm */
#define ENUM_NC_CDTRAIN_100mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_100_mm

/* TM_conversions::ENUM_NC_CDTRAIN_130mm */
#define ENUM_NC_CDTRAIN_130mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_130_mm

/* TM_conversions::ENUM_NC_CDTRAIN_150mm */
#define ENUM_NC_CDTRAIN_150mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_150_mm

/* TM_conversions::ENUM_NC_CDTRAIN_165mm */
#define ENUM_NC_CDTRAIN_165mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_165_mm

/* TM_conversions::ENUM_NC_CDTRAIN_180mm */
#define ENUM_NC_CDTRAIN_180mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_180_mm

/* TM_conversions::ENUM_NC_CDTRAIN_210mm */
#define ENUM_NC_CDTRAIN_210mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_210_mm

/* TM_conversions::ENUM_NC_CDTRAIN_225mm */
#define ENUM_NC_CDTRAIN_225mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_225_mm

/* TM_conversions::ENUM_NC_CDTRAIN_245mm */
#define ENUM_NC_CDTRAIN_245mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_245_mm

/* TM_conversions::ENUM_NC_CDTRAIN_275mm */
#define ENUM_NC_CDTRAIN_275mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_275_mm

/* TM_conversions::ENUM_NC_CDTRAIN_300mm */
#define ENUM_NC_CDTRAIN_300mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_300_mm

/* TM_conversions::INT_NC_CDTRAIN_300mm */
#define INT_NC_CDTRAIN_300mm_TM_conversions 10

/* TM_conversions::INT_NC_CDTRAIN_275mm */
#define INT_NC_CDTRAIN_275mm_TM_conversions 9

/* TM_conversions::INT_NC_CDTRAIN_245mm */
#define INT_NC_CDTRAIN_245mm_TM_conversions 8

/* TM_conversions::INT_NC_CDTRAIN_225mm */
#define INT_NC_CDTRAIN_225mm_TM_conversions 7

/* TM_conversions::INT_NC_CDTRAIN_210mm */
#define INT_NC_CDTRAIN_210mm_TM_conversions 6

/* TM_conversions::INT_NC_CDTRAIN_180mm */
#define INT_NC_CDTRAIN_180mm_TM_conversions 5

/* TM_conversions::INT_NC_CDTRAIN_165mm */
#define INT_NC_CDTRAIN_165mm_TM_conversions 4

/* TM_conversions::INT_NC_CDTRAIN_150mm */
#define INT_NC_CDTRAIN_150mm_TM_conversions 3

/* TM_conversions::INT_NC_CDTRAIN_130mm */
#define INT_NC_CDTRAIN_130mm_TM_conversions 2

/* TM_conversions::INT_NC_CDTRAIN_100mm */
#define INT_NC_CDTRAIN_100mm_TM_conversions 1

/* TM_conversions::INT_NC_CDTRAIN_080mm */
#define INT_NC_CDTRAIN_080mm_TM_conversions 0

/* TM_conversions::ENUM_NC_TRAIN_no_train_categroy */
#define ENUM_NC_TRAIN_no_train_categroy_TM_conversions NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category

/* TM_conversions::ENUM_NC_TRAIN_freight_P */
#define ENUM_NC_TRAIN_freight_P_TM_conversions NC_TRAIN_Freight_train_braked_in_P_position

/* TM_conversions::ENUM_NC_TRAIN_freight_G */
#define ENUM_NC_TRAIN_freight_G_TM_conversions NC_TRAIN_Freight_train_braked_in_G_position

/* TM_conversions::ENUM_NC_TRAIN_passenger */
#define ENUM_NC_TRAIN_passenger_TM_conversions NC_TRAIN_Passenger_train

/* TM_conversions::INT_NC_TRAIN_no_train_categroy */
#define INT_NC_TRAIN_no_train_categroy_TM_conversions 0

/* TM_conversions::INT_NC_TRAIN_passenger */
#define INT_NC_TRAIN_passenger_TM_conversions 3

/* TM_conversions::INT_NC_TRAIN_freight_G */
#define INT_NC_TRAIN_freight_G_TM_conversions 2

/* TM_conversions::INT_NC_TRAIN_freight_P */
#define INT_NC_TRAIN_freight_P_TM_conversions 1

/* TM_conversions::DIM_L_TRAIN_max */
#define DIM_L_TRAIN_max_TM_conversions 4095

/* TM_conversions::DIM_L_TRAIN_min */
#define DIM_L_TRAIN_min_TM_conversions 0

/* TM_conversions::ENUM_M_LOADINGGAUGE_G1 */
#define ENUM_M_LOADINGGAUGE_G1_TM_conversions M_LOADINGGAUGE_G1

/* TM_conversions::ENUM_M_LOADINGGAUGE_GA */
#define ENUM_M_LOADINGGAUGE_GA_TM_conversions M_LOADINGGAUGE_GA

/* TM_conversions::ENUM_M_LOADINGGAUGE_GB */
#define ENUM_M_LOADINGGAUGE_GB_TM_conversions M_LOADINGGAUGE_GB

/* TM_conversions::ENUM_M_LOADINGGAUGE_GC */
#define ENUM_M_LOADINGGAUGE_GC_TM_conversions M_LOADINGGAUGE_GC

/* TM_conversions::ENUM_M_LOADINGGAUGE_does_not_fit */
#define ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles

/* TM_conversions::INT_M_LOADINGGAUGE_does_not_fit */
#define INT_M_LOADINGGAUGE_does_not_fit_TM_conversions 0

/* TM_conversions::INT_M_LOADINGGAUGE_GC */
#define INT_M_LOADINGGAUGE_GC_TM_conversions 4

/* TM_conversions::INT_M_LOADINGGAUGE_GB */
#define INT_M_LOADINGGAUGE_GB_TM_conversions 3

/* TM_conversions::INT_M_LOADINGGAUGE_GA */
#define INT_M_LOADINGGAUGE_GA_TM_conversions 2

/* TM_conversions::INT_M_LOADINGGAUGE_G1 */
#define INT_M_LOADINGGAUGE_G1_TM_conversions 1

/* TM_conversions::ENUM_M_AXLELOADCAT_A */
#define ENUM_M_AXLELOADCAT_A_TM_conversions M_AXLELOADCAT_A

/* TM_conversions::ENUM_M_AXLELOADCAT_B1 */
#define ENUM_M_AXLELOADCAT_B1_TM_conversions M_AXLELOADCAT_B1

/* TM_conversions::ENUM_M_AXLELOADCAT_B2 */
#define ENUM_M_AXLELOADCAT_B2_TM_conversions M_AXLELOADCAT_B2

/* TM_conversions::ENUM_M_AXLELOADCAT_C2 */
#define ENUM_M_AXLELOADCAT_C2_TM_conversions M_AXLELOADCAT_C2

/* TM_conversions::ENUM_M_AXLELOADCAT_C3 */
#define ENUM_M_AXLELOADCAT_C3_TM_conversions M_AXLELOADCAT_C3

/* TM_conversions::ENUM_M_AXLELOADCAT_D2 */
#define ENUM_M_AXLELOADCAT_D2_TM_conversions M_AXLELOADCAT_D2

/* TM_conversions::ENUM_M_AXLELOADCAT_D3 */
#define ENUM_M_AXLELOADCAT_D3_TM_conversions M_AXLELOADCAT_D3

/* TM_conversions::ENUM_M_AXLELOADCAT_D4 */
#define ENUM_M_AXLELOADCAT_D4_TM_conversions M_AXLELOADCAT_D4

/* TM_conversions::ENUM_M_AXLELOADCAT_D4XL */
#define ENUM_M_AXLELOADCAT_D4XL_TM_conversions M_AXLELOADCAT_D4XL

/* TM_conversions::ENUM_M_AXLELOADCAT_E4 */
#define ENUM_M_AXLELOADCAT_E4_TM_conversions M_AXLELOADCAT_E4

/* TM_conversions::ENUM_M_AXLELOADCAT_E5 */
#define ENUM_M_AXLELOADCAT_E5_TM_conversions M_AXLELOADCAT_E5

/* TM_conversions::ENUM_M_AXLELOADCAT_HS17 */
#define ENUM_M_AXLELOADCAT_HS17_TM_conversions M_AXLELOADCAT_HS17

/* TM_conversions::INT_M_AXLELOADCAT_E5 */
#define INT_M_AXLELOADCAT_E5_TM_conversions 12

/* TM_conversions::INT_M_AXLELOADCAT_HS17 */
#define INT_M_AXLELOADCAT_HS17_TM_conversions 1

/* TM_conversions::INT_M_AXLELOADCAT_E4 */
#define INT_M_AXLELOADCAT_E4_TM_conversions 11

/* TM_conversions::INT_M_AXLELOADCAT_D4XL */
#define INT_M_AXLELOADCAT_D4XL_TM_conversions 10

/* TM_conversions::INT_M_AXLELOADCAT_D4 */
#define INT_M_AXLELOADCAT_D4_TM_conversions 9

/* TM_conversions::INT_M_AXLELOADCAT_D3 */
#define INT_M_AXLELOADCAT_D3_TM_conversions 8

/* TM_conversions::INT_M_AXLELOADCAT_D2 */
#define INT_M_AXLELOADCAT_D2_TM_conversions 7

/* TM_conversions::INT_M_AXLELOADCAT_C4 */
#define INT_M_AXLELOADCAT_C4_TM_conversions 6

/* TM_conversions::INT_M_AXLELOADCAT_C3 */
#define INT_M_AXLELOADCAT_C3_TM_conversions 5

/* TM_conversions::INT_M_AXLELOADCAT_C2 */
#define INT_M_AXLELOADCAT_C2_TM_conversions 4

/* TM_conversions::INT_M_AXLELOADCAT_B2 */
#define INT_M_AXLELOADCAT_B2_TM_conversions 3

/* TM_conversions::INT_M_AXLELOADCAT_B1 */
#define INT_M_AXLELOADCAT_B1_TM_conversions 2

/* TM_conversions::INT_M_AXLELOADCAT_A */
#define INT_M_AXLELOADCAT_A_TM_conversions 0

/* TM_conversions::ENUM_M_AIRTIGHT_fitted */
#define ENUM_M_AIRTIGHT_fitted_TM_conversions M_AIRTIGHT_Fitted

/* TM_conversions::ENUM_M_AIRTIGHT_not_fitted */
#define ENUM_M_AIRTIGHT_not_fitted_TM_conversions M_AIRTIGHT_Not_fitted

/* TM_conversions::INT_M_AIRTIGHT_not_fitted */
#define INT_M_AIRTIGHT_not_fitted_TM_conversions 0

/* TM_conversions::INT_M_AIRTIGHT_fitted */
#define INT_M_AIRTIGHT_fitted_TM_conversions 1

/* TM_TrainToTrack::DIM_max_elements_P011 */
#define DIM_max_elements_P011_TM_TrainToTrack (11 + DIM_voltage_list_TM_TrainToTrack * 2 + 1 + DIM_nid_ntc_list_TM_TrainToTrack)

/* TM_TrainToTrack::DEFAULT_P011_voltage_sections_array_flat */
extern const P011_voltage_sections_array_flat_t_TM_TrainToTrack DEFAULT_P011_voltage_sections_array_flat_TM_TrainToTrack;

/* TM_conversions::ENUM_M_VOLTAGE_Line_not_fitted */
#define ENUM_M_VOLTAGE_Line_not_fitted_TM_conversions M_VOLTAGE_Line_not_fitted_with_any_traction_system

/* TM_conversions::ENUM_M_VOLTAGE_AC_25_kV_50_Hz */
#define ENUM_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions M_VOLTAGE_AC_25_kV_50_Hz

/* TM_conversions::ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz */
#define ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions M_VOLTAGE_AC_15_kV_16_7_Hz

/* TM_conversions::ENUM_M_VOLTAGE_DC_3_kV */
#define ENUM_M_VOLTAGE_DC_3_kV_TM_conversions M_VOLTAGE_DC_3_kV

/* TM_conversions::ENUM_M_VOLTAGE_DC_1_5_kV */
#define ENUM_M_VOLTAGE_DC_1_5_kV_TM_conversions M_VOLTAGE_DC_1_5_kV

/* TM_conversions::ENUM_M_VOLTAGE_DC_600_or_750_V */
#define ENUM_M_VOLTAGE_DC_600_or_750_V_TM_conversions M_VOLTAGE_DC_600_or_750_V

/* TM_conversions::INT_M_VOLTAGE_Line_not_fitted */
#define INT_M_VOLTAGE_Line_not_fitted_TM_conversions 0

/* TM_conversions::INT_M_VOLTAGE_DC_600_or_750_V */
#define INT_M_VOLTAGE_DC_600_or_750_V_TM_conversions 5

/* TM_conversions::INT_M_VOLTAGE_DC_1_5_kV */
#define INT_M_VOLTAGE_DC_1_5_kV_TM_conversions 4

/* TM_conversions::INT_M_VOLTAGE_DC_3_kV */
#define INT_M_VOLTAGE_DC_3_kV_TM_conversions 3

/* TM_conversions::INT_M_VOLTAGE_AC_15_kV_16_7_Hz */
#define INT_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions 2

/* TM_conversions::INT_M_VOLTAGE_AC_25_kV_50_Hz */
#define INT_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions 1

/* Id_Pkg::co129_Validated_Train_Data */
#define co129_Validated_Train_Data_Id_Pkg 129

/* TM_TrainToTrack::DIM_voltage_list */
#define DIM_voltage_list_TM_TrainToTrack 4

/* TM_TrainToTrack::DIM_nid_ntc_list */
#define DIM_nid_ntc_list_TM_TrainToTrack 5

/* ids::cp011_ValidatedTrainData */
#define cp011_ValidatedTrainData_ids 11

/* trainData_pkg::cNoPackets */
extern const outPackets_T_Common_Types_Pkg cNoPackets_trainData_pkg;

/* trainData_pkg::cMsgBasicHeader */
extern const Radio_TrainTrack_Header_T_Radio_Types_Pkg cMsgBasicHeader_trainData_pkg;

/* Id_Pkg::co146_Acknowledgement */
#define co146_Acknowledgement_Id_Pkg 146

/* Id_Pkg::cm08_Acknowledgement_of_Train_Data */
#define cm08_Acknowledgement_of_Train_Data_Id_Pkg 8

/* Id_Pkg::cm03_Movement_Authority */
#define cm03_Movement_Authority_Id_Pkg 3

/* trainData_Types_pkg::cNoTrigger */
extern const trainData_Trigger_T_trainData_Types_pkg cNoTrigger_trainData_Types_pkg;

/* Id_Pkg::cm24_General_Message */
#define cm24_General_Message_Id_Pkg 24

/* trainData_Types_pkg::cNoStates */
extern const trainDataStatus_T_trainData_Types_pkg cNoStates_trainData_Types_pkg;

/* trainData_Types_pkg::cEmptyTrainData */
extern const trainData_T_TIU_Types_Pkg cEmptyTrainData_trainData_Types_pkg;

/* RadioSupport_Pkg::cEmptyMsg */
extern const M_TrainTrack_Message_T_TM_radio_messages cEmptyMsg_RadioSupport_Pkg;

/* DMI_Types_Pkg::cDMI_maxLevels */
#define cDMI_maxLevels_DMI_Types_Pkg 32

/* TrackAtlasTypes::DEFAULT_P003 */
extern const P003_OBU_T_TM DEFAULT_P003_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_to_Mode_and_Level */
extern const DataForModeAndLevel_t_TrackAtlasTypes DEFAULT_to_Mode_and_Level_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_to_DMI */
extern const DataForDMI_t_TrackAtlasTypes DEFAULT_to_DMI_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_MovementAuthority */
extern const MovementAuthority_t_TrackAtlasTypes DEFAULT_MovementAuthority_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_TrainTrack */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg DEFAULT_TrainTrack_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_to_Supervision */
extern const DataForSupervision_nextGen_t_TrackAtlasTypes DEFAULT_to_Supervision_TrackAtlasTypes;

/* TrackAtlas::Mode_NTC */
#define Mode_NTC_TrackAtlas M_MODE_National_System

/* TrackAtlas::NTC_values_to_supervision */
extern const DataForSupervision_nextGen_t_TrackAtlasTypes NTC_values_to_supervision_TrackAtlas;

/* MA_Request::cPacket132 */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cPacket132_MA_Request;

/* MA_Request::cMA_RequestParam */
extern const P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg cMA_RequestParam_MA_Request;

/* MA_Request::cNid_em */
#define cNid_em_MA_Request 0

/* MA_Request::cQemergencyStop */
#define cQemergencyStop_MA_Request Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA

/* MA_Request::cNidTextMessage */
#define cNidTextMessage_MA_Request 0

/* MA_Request::DEFAULT_P009 */
extern const P009_TM_TrainToTrack DEFAULT_P009_MA_Request;

/* TM_TrainToTrack::DIM_max_elements_P009 */
#define DIM_max_elements_P009_TM_TrainToTrack 3

/* TM_conversions::ENUM_Q_MARQSTREASON_driver */
#define ENUM_Q_MARQSTREASON_driver_TM_conversions Q_MARQSTREASON_Start_selected_by_driver

/* TM_conversions::ENUM_Q_MARQSTREASON_timer_preindication_LOA */
#define ENUM_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached

/* TM_conversions::ENUM_Q_MARQSTREASON_section_timer */
#define ENUM_Q_MARQSTREASON_section_timer_TM_conversions Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached

/* TM_conversions::ENUM_Q_MARQSTREASON_track_description_deleted */
#define ENUM_Q_MARQSTREASON_track_description_deleted_TM_conversions Q_MARQSTREASON_Track_description_deleted

/* TM_conversions::ENUM_Q_MARQSTREASON_TAF */
#define ENUM_Q_MARQSTREASON_TAF_TM_conversions Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location

/* TM_conversions::INT_Q_MARQSTREASON_driver */
#define INT_Q_MARQSTREASON_driver_TM_conversions 0

/* TM_conversions::INT_Q_MARQSTREASON_track_description_deleted */
#define INT_Q_MARQSTREASON_track_description_deleted_TM_conversions 3

/* TM_conversions::INT_Q_MARQSTREASON_section_timer */
#define INT_Q_MARQSTREASON_section_timer_TM_conversions 2

/* TM_conversions::INT_Q_MARQSTREASON_timer_preindication_LOA */
#define INT_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions 1

/* XCP_numeric::ZERO_real */
#define ZERO_real_XCP_numeric 0.0

/* XCP_numeric::ZERO_int */
#define ZERO_int_XCP_numeric 0

/* TM_lib_internal::DEFAULT_TrainTrackBus_m */
extern const M_TrainTrackMessageBus_t_TM_TrainTrack_Bus DEFAULT_TrainTrackBus_m_TM_lib_internal;

/* TrackAtlasTypes::DEFAULT_MA_level_23 */
#define DEFAULT_MA_level_23_TrackAtlasTypes MA_L23_TrackAtlasTypes

/* TrackAtlasTypes::DEFAULT_Endtimer */
extern const Endtimer_t_TrackAtlasTypes DEFAULT_Endtimer_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_MA_sectionlist */
extern const MovementAuthoritySectionlist_t_TrackAtlasTypes DEFAULT_MA_sectionlist_TrackAtlasTypes;

/* TrackAtlasTypes::MAsMaxSections */
#define MAsMaxSections_TrackAtlasTypes 10

/* TM::ENUM_Q_SCALE_10cm_QSCALE */
#define ENUM_Q_SCALE_10cm_QSCALE_TM Q_SCALE_10_cm_scale

/* TM::ENUM_Q_SCALE_10m_QSCALE */
#define ENUM_Q_SCALE_10m_QSCALE_TM Q_SCALE_10_m_scale

/* TA_MA::INIT_P15_OBU */
extern const P015_OBU_T_TM INIT_P15_OBU_TA_MA;

/* TA_MRSP::DEFAULT_MRSP_Profile */
extern const MRSP_Profile_t_TrackAtlasTypes DEFAULT_MRSP_Profile_TA_MRSP;

/* TA_MRSP::XSSPold */
extern const SSP_cat_t_TA_MRSP XSSPold_TA_MRSP;

/* TA_MRSP::DEFAULT_MRSP_section */
extern const MRSP_section_t_TrackAtlasTypes DEFAULT_MRSP_section_TA_MRSP;

/* TA_MRSP::DEFAULT_SSP_targets */
extern const SSP_t_list_t_TA_MRSP DEFAULT_SSP_targets_TA_MRSP;

/* TA_MRSP::DEFAULT_indexed_target */
extern const SSP_t_indexed_matrix_element_TA_MRSP DEFAULT_indexed_target_TA_MRSP;

/* TA_MRSP::DEFAULT_relevant_target */
extern const SSP_relevant_target_t_TA_MRSP DEFAULT_relevant_target_TA_MRSP;

/* TA_MRSP::DEFAULT_SSP_section */
extern const SSP_section_t_TA_MRSP DEFAULT_SSP_section_TA_MRSP;

/* TA_MRSP::DEFAULT_SSP_Init_ValidSSPsection */
extern const SSP_Mark_ValidSSPsection_TA_MRSP DEFAULT_SSP_Init_ValidSSPsection_TA_MRSP;

/* TA_MRSP::DIM_SSP */
#define DIM_SSP_TA_MRSP (DIM_n_categories_TA_MRSP * DIM_maxSSP_individual_sections_TA_MRSP)

/* TA_MRSP::DIM_n_categories */
#define DIM_n_categories_TA_MRSP 11

/* TA_MRSP::int_ZERO */
#define int_ZERO_TA_MRSP 0

/* TA_MRSP::SP_NTC */
extern const SSP_cat_t_TA_MRSP SP_NTC_TA_MRSP;

/* TA_MRSP::TOP_SSP_cat */
extern const SSP_cat_t_TA_MRSP TOP_SSP_cat_TA_MRSP;

/* TM_baseline2::DEFAULT_P027v1_OBU_section */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027v1_OBU_section_TM_baseline2;

/* TA_SSP::DEFAULT_SSP_section */
extern const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_SSP_section_TA_SSP;

/* TrackAtlasTypes::DEFAULT_StaticSpeedProfile */
extern const StaticSpeedProfile_t_TrackAtlasTypes DEFAULT_StaticSpeedProfile_TrackAtlasTypes;

/* TrackAtlasTypes::DIM_SSP */
#define DIM_SSP_TrackAtlasTypes 50

/* TM_conversions::INT_Q_NVSBTSMPERM_Yes */
#define INT_Q_NVSBTSMPERM_Yes_TM_conversions 1

/* TM_conversions::INT_Q_NVSBTSMPERM_No */
#define INT_Q_NVSBTSMPERM_No_TM_conversions 0

/* TM_conversions::ENUM_Q_NVSBTSMPERM_No */
#define ENUM_Q_NVSBTSMPERM_No_TM_conversions Q_NVSBTSMPERM_No

/* TM_conversions::ENUM_Q_NVSBTSMPERM_Yes */
#define ENUM_Q_NVSBTSMPERM_Yes_TM_conversions Q_NVSBTSMPERM_Yes

/* TM_conversions::INT_Q_NVEMRRLS_revoke_at_standstill */
#define INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions 0

/* TM_conversions::INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions 1

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_at_standstill */
#define ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded

/* TM_conversions::INT_M_NVCONTACT_Apply_service_brake */
#define INT_M_NVCONTACT_Apply_service_brake_TM_conversions 1

/* TM_conversions::INT_M_NVCONTACT_No_Reaction */
#define INT_M_NVCONTACT_No_Reaction_TM_conversions 2

/* TM_conversions::INT_M_NVCONTACT_Train_trip */
#define INT_M_NVCONTACT_Train_trip_TM_conversions 0

/* TM_conversions::ENUM_M_NVCONTACT_Train_trip */
#define ENUM_M_NVCONTACT_Train_trip_TM_conversions M_NVCONTACT_Train_trip

/* TM_conversions::ENUM_M_NVCONTACT_No_Reaction */
#define ENUM_M_NVCONTACT_No_Reaction_TM_conversions M_NVCONTACT_No_Reaction

/* TM_conversions::ENUM_M_NVCONTACT_Apply_service_brake */
#define ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions M_NVCONTACT_Apply_service_brake

/* TM_conversions::INT_M_NVDERUN_no */
#define INT_M_NVDERUN_no_TM_conversions 0

/* TM_conversions::INT_M_NVDERUN_yes */
#define INT_M_NVDERUN_yes_TM_conversions 1

/* TM_conversions::ENUM_M_NVDERUN_yes */
#define ENUM_M_NVDERUN_yes_TM_conversions M_NVDERUN_Yes

/* TM_conversions::ENUM_M_NVDERUN_no */
#define ENUM_M_NVDERUN_no_TM_conversions M_NVDERUN_No

/* TM_conversions::INT_Q_NVDRIVER_ADHES_Allowed */
#define INT_Q_NVDRIVER_ADHES_Allowed_TM_conversions 1

/* TM_conversions::INT_Q_NVDRIVER_ADHES_NotAllowed */
#define INT_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions 0

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_NotAllowed */
#define ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions Q_NVDRIVER_ADHES_Not_allowed

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_Allowed */
#define ENUM_Q_NVDRIVER_ADHES_Allowed_TM_conversions Q_NVDRIVER_ADHES_Allowed

/* TM_baseline2::DEFAULT_P003V1_OBU_section */
extern const P003V1_section_enum_T_TM_baseline2 DEFAULT_P003V1_OBU_section_TM_baseline2;

/* TM_baseline2::DIM_MaxElementsPacket003V1 */
#define DIM_MaxElementsPacket003V1_TM_baseline2 (DIM_N_ITER_TM * 1 + 6 + 18)

/* TA_Storage::INIT_P3V1 */
extern const P003V1_OBU_T_TM_baseline2 INIT_P3V1_TA_Storage;

/* TA_Export::DEFAULT_MRSP_section */
extern const MRSP_section_t_TrackAtlasTypes DEFAULT_MRSP_section_TA_Export;

/* TrackAtlasTypes::DEFAULT_LRBG */
#define DEFAULT_LRBG_TrackAtlasTypes 354

/* TrackAtlasTypes::DEFAULT_Location_T */
#define DEFAULT_Location_T_TrackAtlasTypes 0

/* TM::DIM_MaxElementsPacket012 */
#define DIM_MaxElementsPacket012_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 7)

/* TM_lib_internal::DIM_P012_n_sections */
#define DIM_P012_n_sections_TM_lib_internal 4

/* TM::DIM_MaxElementsPacket135 */
#define DIM_MaxElementsPacket135_TM 3

/* TM::DIM_MaxElementsPacket046 */
#define DIM_MaxElementsPacket046_TM ((DIM_N_ITER_TM + 1) * 2 + 4)

/* TM::DEFAULT_P046_OBU_section */
extern const P046_section_enum_T_TM DEFAULT_P046_OBU_section_TM;

/* TM_lib_internal::DIM_P046_n_sections */
#define DIM_P046_n_sections_TM_lib_internal 2

/* TM_specific::DEFAULT_P046_legacy */
extern const P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg DEFAULT_P046_legacy_TM_specific;

/* TM::DEFAULT_P041_OBU_section */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM;

/* TM::DIM_MaxElementsPacket041 */
#define DIM_MaxElementsPacket041_TM ((DIM_N_ITER_TM + 1) * 3 + 6)

/* TM_lib_internal::DEFAULT_P041_OBU_section */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM_lib_internal;

/* TM_conversions::INT_M_LEVELTR_Level_0 */
#define INT_M_LEVELTR_Level_0_TM_conversions 0

/* TM_conversions::INT_M_LEVELTR_Level_1 */
#define INT_M_LEVELTR_Level_1_TM_conversions 2

/* TM_conversions::INT_M_LEVELTR_Level_2 */
#define INT_M_LEVELTR_Level_2_TM_conversions 3

/* TM_conversions::INT_M_LEVELTR_Level_3 */
#define INT_M_LEVELTR_Level_3_TM_conversions 4

/* TM_conversions::INT_M_LEVELTR_Level_NTC */
#define INT_M_LEVELTR_Level_NTC_TM_conversions 1

/* TM_conversions::ENUM_M_LEVELTR_Level_NTC */
#define ENUM_M_LEVELTR_Level_NTC_TM_conversions M_LEVELTR_Level_NTC_specified_by_NID_NTC

/* TM_conversions::ENUM_M_LEVELTR_Level_3 */
#define ENUM_M_LEVELTR_Level_3_TM_conversions M_LEVELTR_Level_3

/* TM_conversions::ENUM_M_LEVELTR_Level_2 */
#define ENUM_M_LEVELTR_Level_2_TM_conversions M_LEVELTR_Level_2

/* TM_conversions::ENUM_M_LEVELTR_Level_1 */
#define ENUM_M_LEVELTR_Level_1_TM_conversions M_LEVELTR_Level_1

/* TM_conversions::ENUM_M_LEVELTR_Level_0 */
#define ENUM_M_LEVELTR_Level_0_TM_conversions M_LEVELTR_Level_0

/* TM_lib_internal::DIM_P041_n_sections */
#define DIM_P041_n_sections_TM_lib_internal 3

/* TM_specific::DEFAULT_P041_legacy */
extern const P41_LevelTransistionOrders_T_Packet_Types_Pkg DEFAULT_P041_legacy_TM_specific;

/* TM_baseline2::NID_META_P027V1_body */
#define NID_META_P027V1_body_TM_baseline2 27016000

/* TM_baseline2::DEFAULT_P027V1_section_enum */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027V1_section_enum_TM_baseline2;

/* TM_conversions::INT_Q_FRONT_train_length_delay */
#define INT_Q_FRONT_train_length_delay_TM_conversions 0

/* TM_conversions::INT_Q_FRONT_no_train_length_delay */
#define INT_Q_FRONT_no_train_length_delay_TM_conversions 1

/* TM_conversions::ENUM_Q_FRONT_train_length_delay */
#define ENUM_Q_FRONT_train_length_delay_TM_conversions Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element

/* TM_conversions::ENUM_Q_FRONT_no_train_length_delay */
#define ENUM_Q_FRONT_no_train_length_delay_TM_conversions Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element

/* TM::DIM_MaxElementsPacket027v1_section */
#define DIM_MaxElementsPacket027v1_section_TM (DIM_N_ITER_TM * 2 + 4)

/* TM_lib_internal::DIM_P027V1_n_sections_qdiff */
#define DIM_P027V1_n_sections_qdiff_TM_lib_internal 7

/* TM_baseline2::DEFAULT_P027v1_OBU_section_qdiff */
extern const P027V1_section_enum_qdiff_T_TM_baseline2 DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2;

/* TM_baseline2::DEFAULT_P027V1_legacy */
extern const P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg DEFAULT_P027V1_legacy_TM_baseline2;

/* TM_conversions::INT_Q_SRSTOP_go */
#define INT_Q_SRSTOP_go_TM_conversions 1

/* TM_conversions::INT_Q_SRSTOP_stop */
#define INT_Q_SRSTOP_stop_TM_conversions 0

/* TM_conversions::ENUM_Q_SRSTOP_stop */
#define ENUM_Q_SRSTOP_stop_TM_conversions Q_SRSTOP_Stop_if_in_SR_mode

/* TM_conversions::ENUM_Q_SRSTOP_go */
#define ENUM_Q_SRSTOP_go_TM_conversions Q_SRSTOP_Go_if_in_SR_mode

/* TM::DEFAULT_P139_legacy */
extern const P139_ReversingSupervisionInformation_T_Packet_Types_Pkg DEFAULT_P139_legacy_TM;

/* TM::DIM_MaxElementsPacket139 */
#define DIM_MaxElementsPacket139_TM 6

/* TM_conversions::INT_Q_OVERLAP_overlap_info */
#define INT_Q_OVERLAP_overlap_info_TM_conversions 1

/* TM_conversions::INT_Q_OVERLAP_no_overlap_info */
#define INT_Q_OVERLAP_no_overlap_info_TM_conversions 0

/* TM_conversions::ENUM_Q_OVERLAP_overlap_info */
#define ENUM_Q_OVERLAP_overlap_info_TM_conversions Q_OVERLAP_Overlap_information_to_follow

/* TM_conversions::ENUM_Q_OVERLAP_no_overlap_info */
#define ENUM_Q_OVERLAP_no_overlap_info_TM_conversions Q_OVERLAP_No_overlap_information

/* TM_conversions::INT_Q_DANGERPOINT_no_dangerpoint_info */
#define INT_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions 0

/* TM_conversions::INT_Q_DANGERPOINT_dangerpoint_info */
#define INT_Q_DANGERPOINT_dangerpoint_info_TM_conversions 1

/* TM_conversions::ENUM_Q_DANGERPOINT_dangerpoint_info */
#define ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions Q_DANGERPOINT_No_danger_point_information

/* TM_conversions::ENUM_Q_DANGERPOINT_no_dangerpoint_info */
#define ENUM_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions Q_DANGERPOINT_Danger_point_information_to_follow

/* TM_conversions::INT_Q_ENDTIMER_no_endsection_timer_info */
#define INT_Q_ENDTIMER_no_endsection_timer_info_TM_conversions 0

/* TM_conversions::INT_Q_ENDTIMER_endsection_timer_info_follows */
#define INT_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions 1

/* TM_conversions::ENUM_Q_ENDTIMER_endsection_timer_info_follows */
#define ENUM_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions Q_ENDTIMER_End_section_timer_information_to_follow

/* TM_conversions::ENUM_Q_ENDTIMER_no_endsection_timer_info */
#define ENUM_Q_ENDTIMER_no_endsection_timer_info_TM_conversions Q_ENDTIMER_No_End_section_timer_information

/* TM::DIM_MaxElementsPacket015 */
#define DIM_MaxElementsPacket015_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 6)

/* TM::DEFAULT_P015_OBU_section */
extern const P015_section_enum_T_TM DEFAULT_P015_OBU_section_TM;

/* TM_conversions::INT_Q_SECTIONTIMER_sectiontimer */
#define INT_Q_SECTIONTIMER_sectiontimer_TM_conversions 1

/* TM_conversions::INT_Q_SECTIONTIMER_no_sectiontimer */
#define INT_Q_SECTIONTIMER_no_sectiontimer_TM_conversions 0

/* TM_conversions::ENUM_Q_SECTIONTIMER_sectiontimer */
#define ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions Q_SECTIONTIMER_Section_Timer_information_to_follow

/* TM_conversions::ENUM_Q_SECTIONTIMER_no_sectiontimer */
#define ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions Q_SECTIONTIMER_No_Section_Timer_information

/* TM_lib_internal::DIM_P015_n_sections */
#define DIM_P015_n_sections_TM_lib_internal 4

/* TM_specific::DEFAULT_P015_legacy */
extern const P15_Level23MovementAuthorities_T_Packet_Types_Pkg DEFAULT_P015_legacy_TM_specific;

/* TM::DEFAULT_P138_legacy */
extern const P138_ReversingAreaInformation_T_Packet_Types_Pkg DEFAULT_P138_legacy_TM;

/* TM::DIM_MaxElementsPacket136 */
#define DIM_MaxElementsPacket136_TM 6

/* TM::DIM_MaxElementsPacket138 */
#define DIM_MaxElementsPacket138_TM 6

/* TM_specific::DEFAULT_P021_legacy */
extern const P21_GradientProfiles_T_Packet_Types_Pkg DEFAULT_P021_legacy_TM_specific;

/* TM_radio_messages::nid_message_TrackTrain_015 */
#define nid_message_TrackTrain_015_TM_radio_messages 15

/* TM_radio_messages::nid_message_TrackTrain_016 */
#define nid_message_TrackTrain_016_TM_radio_messages 16

/* TM_radio_messages::nid_message_TrackTrain_002 */
#define nid_message_TrackTrain_002_TM_radio_messages 2

/* TM_radio_messages::nid_message_TrackTrain_027 */
#define nid_message_TrackTrain_027_TM_radio_messages 27

/* TM_radio_messages::nid_message_TrackTrain_028 */
#define nid_message_TrackTrain_028_TM_radio_messages 28

/* TM_radio_messages::nid_message_TrackTrain_006 */
#define nid_message_TrackTrain_006_TM_radio_messages 6

/* TA_Export::Default_P63_legacy */
extern const P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg Default_P63_legacy_TA_Export;

/* TA_Export::Default_P80_legacy */
extern const P80_ModeProfiles_T_Packet_Types_Pkg Default_P80_legacy_TA_Export;

/* Packet_Types_Pkg::cNIterMaxModeProfiles */
#define cNIterMaxModeProfiles_Packet_Types_Pkg 3

/* TA_Export::Default_P12_legacy */
extern const P12_Level1MovementAuthorities_T_Packet_Types_Pkg Default_P12_legacy_TA_Export;

/* Packet_Types_Pkg::cNIterMaxMA */
#define cNIterMaxMA_Packet_Types_Pkg 5

/* TA_Export::Default_P135_legacy */
extern const P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg Default_P135_legacy_TA_Export;

/* TrackAtlasTypes::DEFAULT_StaticSpeedSection */
extern const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_StaticSpeedSection_TrackAtlasTypes;

/* TrackAtlasTypes::MRSPMaxSections */
#define MRSPMaxSections_TrackAtlasTypes 200

/* TA_Export::END_OF_SSP */
#define END_OF_SSP_TA_Export 635

/* TA_Export::END_OF_SSP_encoding */
#define END_OF_SSP_encoding_TA_Export (- 1)

/* MA_Request::cM_version */
#define cM_version_MA_Request M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_lib_internal::DEFAULT_M_TrainTrackMessage_buffer */
extern const M_TrainTrackMessage_buffer_t_TM_lib_internal DEFAULT_M_TrainTrackMessage_buffer_TM_lib_internal;

/* TM_lib_internal::DIM_FIFO_demo */
#define DIM_FIFO_demo_TM_lib_internal 5

/* TM_lib_internal::EMPTY_TrainTrackMessage */
extern const M_TrainTrack_Message_T_TM_radio_messages EMPTY_TrainTrackMessage_TM_lib_internal;

/* TM_lib_internal::DIM_FIFO_TrainTrackMessage */
#define DIM_FIFO_TrainTrackMessage_TM_lib_internal 5

/* TM_TrainTrack_Bus::BusWidth */
#define BusWidth_TM_TrainTrack_Bus (CycleTime_TM_TrainTrack_Bus / Time_10ms_TM_TrainTrack_Bus)

/* TM_TrainTrack_Bus::CycleTime */
#define CycleTime_TM_TrainTrack_Bus 50

/* TM_TrainTrack_Bus::Time_10ms */
#define Time_10ms_TM_TrainTrack_Bus 10

/* TM_radio_messages::DEFAULT_TrainToTrackMessage */
extern const M_TrainTrack_Message_T_TM_radio_messages DEFAULT_TrainToTrackMessage_TM_radio_messages;

/* TM_TrainToTrack::DIM_max_elements_P001 */
#define DIM_max_elements_P001_TM_TrainToTrack 17

/* TM_conversions::ENUM_Q_DIRLRBG_nominal */
#define ENUM_Q_DIRLRBG_nominal_TM_conversions Q_DIRLRBG_Nominal

/* TM_conversions::ENUM_Q_DIRLRBG_reverse */
#define ENUM_Q_DIRLRBG_reverse_TM_conversions Q_DIRLRBG_Reverse

/* TM_conversions::ENUM_Q_DIRLRBG_unknown */
#define ENUM_Q_DIRLRBG_unknown_TM_conversions Q_DIRLRBG_Unknown

/* TM_conversions::INT_Q_DIRLRBG_unknown */
#define INT_Q_DIRLRBG_unknown_TM_conversions 2

/* TM_conversions::INT_Q_DIRLRBG_reverse */
#define INT_Q_DIRLRBG_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIRLRBG_nominal */
#define INT_Q_DIRLRBG_nominal_TM_conversions 1

/* TM_conversions::ENUM_Q_DLRBG_nominal */
#define ENUM_Q_DLRBG_nominal_TM_conversions Q_DLRBG_Nominal

/* TM_conversions::ENUM_Q_DLRBG_reverse */
#define ENUM_Q_DLRBG_reverse_TM_conversions Q_DLRBG_Reverse

/* TM_conversions::ENUM_Q_DLRBG_unknown */
#define ENUM_Q_DLRBG_unknown_TM_conversions Q_DLRBG_Unknown

/* TM_conversions::INT_Q_DLRBG_unknown */
#define INT_Q_DLRBG_unknown_TM_conversions 2

/* TM_conversions::INT_Q_DLRBG_reverse */
#define INT_Q_DLRBG_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DLRBG_nominal */
#define INT_Q_DLRBG_nominal_TM_conversions 1

/* TM_conversions::DIM_L_max */
#define DIM_L_max_TM_conversions 32767

/* TM_conversions::DIM_L_min */
#define DIM_L_min_TM_conversions 0

/* TM_conversions::ENUM_Q_LENGTH_no_info_available */
#define ENUM_Q_LENGTH_no_info_available_TM_conversions Q_LENGTH_No_train_integrity_information_available

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_device */
#define ENUM_Q_LENGTH_confimed_by_device_TM_conversions Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_driver */
#define ENUM_Q_LENGTH_confimed_by_driver_TM_conversions Q_LENGTH_Train_integrity_confirmed_by_driver

/* TM_conversions::ENUM_Q_LENGTH_integrity_lost */
#define ENUM_Q_LENGTH_integrity_lost_TM_conversions Q_LENGTH_Train_integrity_lost

/* TM_conversions::INT_Q_LENGTH_integrity_lost */
#define INT_Q_LENGTH_integrity_lost_TM_conversions 3

/* TM_conversions::INT_Q_LENGTH_confimed_by_driver */
#define INT_Q_LENGTH_confimed_by_driver_TM_conversions 2

/* TM_conversions::INT_Q_LENGTH_confimed_by_device */
#define INT_Q_LENGTH_confimed_by_device_TM_conversions 1

/* TM_conversions::INT_Q_LENGTH_no_info_available */
#define INT_Q_LENGTH_no_info_available_TM_conversions 0

/* TM_conversions::DIM_L_TRAININT_min */
#define DIM_L_TRAININT_min_TM_conversions 0

/* TM_conversions::DIM_L_TRAININT_max */
#define DIM_L_TRAININT_max_TM_conversions 32767

/* TM_conversions::ENUM_Q_DIRTRAIN_nominal */
#define ENUM_Q_DIRTRAIN_nominal_TM_conversions Q_DIRTRAIN_Nominal

/* TM_conversions::ENUM_Q_DIRTRAIN_reverse */
#define ENUM_Q_DIRTRAIN_reverse_TM_conversions Q_DIRTRAIN_Reverse

/* TM_conversions::ENUM_Q_DIRTRAIN_unknown */
#define ENUM_Q_DIRTRAIN_unknown_TM_conversions Q_DIRTRAIN_Unknown

/* TM_conversions::INT_Q_DIRTRAIN_unknown */
#define INT_Q_DIRTRAIN_unknown_TM_conversions 2

/* TM_conversions::INT_Q_DIRTRAIN_reverse */
#define INT_Q_DIRTRAIN_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIRTRAIN_nominal */
#define INT_Q_DIRTRAIN_nominal_TM_conversions 1

/* TM_conversions::ENUM_M_MODE_Full_Supervision */
#define ENUM_M_MODE_Full_Supervision_TM_conversions M_MODE_Full_Supervision

/* TM_conversions::ENUM_M_MODE_Isolation */
#define ENUM_M_MODE_Isolation_TM_conversions M_MODE_Isolation

/* TM_conversions::ENUM_M_MODE_Limited_Supervision */
#define ENUM_M_MODE_Limited_Supervision_TM_conversions M_MODE_Limited_Supervision

/* TM_conversions::ENUM_M_MODE_National_System */
#define ENUM_M_MODE_National_System_TM_conversions M_MODE_National_System

/* TM_conversions::ENUM_M_MODE_Non_Leading */
#define ENUM_M_MODE_Non_Leading_TM_conversions M_MODE_Non_Leading

/* TM_conversions::ENUM_M_MODE_On_Sight */
#define ENUM_M_MODE_On_Sight_TM_conversions M_MODE_On_Sight

/* TM_conversions::ENUM_M_MODE_Passive_Shunting */
#define ENUM_M_MODE_Passive_Shunting_TM_conversions M_MODE_No_Power

/* TM_conversions::ENUM_M_MODE_Post_Trip */
#define ENUM_M_MODE_Post_Trip_TM_conversions M_MODE_Post_Trip

/* TM_conversions::ENUM_M_MODE_Reversing */
#define ENUM_M_MODE_Reversing_TM_conversions M_MODE_Reversing

/* TM_conversions::ENUM_M_MODE_Shunting */
#define ENUM_M_MODE_Shunting_TM_conversions M_MODE_Shunting

/* TM_conversions::ENUM_M_MODE_Sleeping */
#define ENUM_M_MODE_Sleeping_TM_conversions M_MODE_Sleeping

/* TM_conversions::ENUM_M_MODE_Staff_Responsible */
#define ENUM_M_MODE_Staff_Responsible_TM_conversions M_MODE_Staff_Responsible

/* TM_conversions::ENUM_M_MODE_Stand_By */
#define ENUM_M_MODE_Stand_By_TM_conversions M_MODE_Stand_By

/* TM_conversions::ENUM_M_MODE_System_Failure */
#define ENUM_M_MODE_System_Failure_TM_conversions M_MODE_System_Failure

/* TM_conversions::ENUM_M_MODE_Trip */
#define ENUM_M_MODE_Trip_TM_conversions M_MODE_Trip

/* TM_conversions::ENUM_M_MODE_Unfitted */
#define ENUM_M_MODE_Unfitted_TM_conversions M_MODE_Unfitted

/* TM_conversions::INT_M_MODE_System_Failure */
#define INT_M_MODE_System_Failure_TM_conversions 9

/* TM_conversions::INT_M_MODE_Unfitted */
#define INT_M_MODE_Unfitted_TM_conversions 4

/* TM_conversions::INT_M_MODE_Trip */
#define INT_M_MODE_Trip_TM_conversions 7

/* TM_conversions::INT_M_MODE_Stand_By */
#define INT_M_MODE_Stand_By_TM_conversions 6

/* TM_conversions::INT_M_MODE_Staff_Responsible */
#define INT_M_MODE_Staff_Responsible_TM_conversions 2

/* TM_conversions::INT_M_MODE_Sleeping */
#define INT_M_MODE_Sleeping_TM_conversions 5

/* TM_conversions::INT_M_MODE_Shunting */
#define INT_M_MODE_Shunting_TM_conversions 3

/* TM_conversions::INT_M_MODE_Reversing */
#define INT_M_MODE_Reversing_TM_conversions 14

/* TM_conversions::INT_M_MODE_Post_Trip */
#define INT_M_MODE_Post_Trip_TM_conversions 8

/* TM_conversions::INT_M_MODE_Passive_Shunting */
#define INT_M_MODE_Passive_Shunting_TM_conversions 15

/* TM_conversions::INT_M_MODE_On_Sight */
#define INT_M_MODE_On_Sight_TM_conversions 1

/* TM_conversions::INT_M_MODE_Non_Leading */
#define INT_M_MODE_Non_Leading_TM_conversions 11

/* TM_conversions::INT_M_MODE_National_System */
#define INT_M_MODE_National_System_TM_conversions 13

/* TM_conversions::INT_M_MODE_Limited_Supervision */
#define INT_M_MODE_Limited_Supervision_TM_conversions 12

/* TM_conversions::INT_M_MODE_Isolation */
#define INT_M_MODE_Isolation_TM_conversions 10

/* TM_conversions::INT_M_MODE_Full_Supervision */
#define INT_M_MODE_Full_Supervision_TM_conversions 0

/* TM_conversions::ENUM_M_LEVEL_Level_0 */
#define ENUM_M_LEVEL_Level_0_TM_conversions M_LEVEL_Level_0

/* TM_conversions::ENUM_M_LEVEL_Level_1 */
#define ENUM_M_LEVEL_Level_1_TM_conversions M_LEVEL_Level_1

/* TM_conversions::ENUM_M_LEVEL_Level_2 */
#define ENUM_M_LEVEL_Level_2_TM_conversions M_LEVEL_Level_2

/* TM_conversions::ENUM_M_LEVEL_Level_3 */
#define ENUM_M_LEVEL_Level_3_TM_conversions M_LEVEL_Level_3

/* TM_conversions::ENUM_M_LEVEL_Level_NTC */
#define ENUM_M_LEVEL_Level_NTC_TM_conversions M_LEVEL_Level_NTC_specified_by_NID_NTC

/* TM_conversions::INT_M_LEVEL_Level_NTC */
#define INT_M_LEVEL_Level_NTC_TM_conversions 1

/* TM_conversions::INT_M_LEVEL_Level_3 */
#define INT_M_LEVEL_Level_3_TM_conversions 4

/* TM_conversions::INT_M_LEVEL_Level_2 */
#define INT_M_LEVEL_Level_2_TM_conversions 3

/* TM_conversions::INT_M_LEVEL_Level_1 */
#define INT_M_LEVEL_Level_1_TM_conversions 2

/* TM_conversions::INT_M_LEVEL_Level_0 */
#define INT_M_LEVEL_Level_0_TM_conversions 0

/* TM_TrainToTrack::DIM_max_elements_P000 */
#define DIM_max_elements_P000_TM_TrainToTrack 17

/* TM_TrainToTrack::INVALID_NID_PACKET */
#define INVALID_NID_PACKET_TM_TrainToTrack 999

/* TM_radio_messages::DIM_max_payload */
#define DIM_max_payload_TM_radio_messages 50

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update */
#define ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update */
#define ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_uncond_accepted */
#define ENUM_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_rejected */
#define ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions Q_EMERGENCYSTOP_Emergency_stop

/* TM_conversions::INT_Q_EMERGENCYSTOP_rejected */
#define INT_Q_EMERGENCYSTOP_rejected_TM_conversions 3

/* TM_conversions::INT_Q_EMERGENCYSTOP_uncond_accepted */
#define INT_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions 2

/* TM_conversions::INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update */
#define INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions 1

/* TM_conversions::INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update */
#define INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions 0

/* TA_EmergencyStop::cMSG147_NONE */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cMSG147_NONE_TA_EmergencyStop;

/* TA_EmergencyStop::DEFAULT_M147 */
extern const M_147_T_TM_radio_messages DEFAULT_M147_TA_EmergencyStop;

/* Id_Pkg::cm15_Conditional_Emergency_Stop */
#define cm15_Conditional_Emergency_Stop_Id_Pkg 15

/* Id_Pkg::cm16_Unconditional_Emergency_Stop */
#define cm16_Unconditional_Emergency_Stop_Id_Pkg 16

/* Id_Pkg::cm18_Revocation_of_Emergency_Stop */
#define cm18_Revocation_of_Emergency_Stop_Id_Pkg 18

/* TA_EmergencyStop::cNID_EM_NONE */
#define cNID_EM_NONE_TA_EmergencyStop 0

/* MA_Request::cPT11_ValidateTrainData */
extern const PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg cPT11_ValidateTrainData_MA_Request;

/* MA_Request::cPT3_OBUTelephoneNumber */
extern const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cPT3_OBUTelephoneNumber_MA_Request;

/* MA_Request::cPT4_ErrorReporting */
extern const PT4_ErrorReporting_T_Packet_TrainTypes_Pkg cPT4_ErrorReporting_MA_Request;

/* MA_Request::cPT5_TrainRunningNumber */
extern const PT5_TrainRunningNumber_Packet_TrainTypes_Pkg cPT5_TrainRunningNumber_MA_Request;

/* MA_Request::cPT9_Level23 */
extern const PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg cPT9_Level23_MA_Request;

/* TA_EmergencyStop::cQ_MARQSREASON_NONE */
#define cQ_MARQSREASON_NONE_TA_EmergencyStop Q_MARQSTREASON_Start_selected_by_driver

/* TA_EmergencyStop::cNID_TEXTMESSAGE_NONE */
#define cNID_TEXTMESSAGE_NONE_TA_EmergencyStop 0

/* TA_EmergencyStop::cEOA_NONE */
#define cEOA_NONE_TA_EmergencyStop 0

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_EMPTY */
extern const NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store;

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_SIZE */
#define cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store 8

/* TM::DIM_MaxElementsPacket021 */
#define DIM_MaxElementsPacket021_TM ((DIM_N_ITER_TM + 1) * 3 + 4 + 1)

/* TM_conversions::DIM_G_max */
#define DIM_G_max_TM_conversions 255

/* TM_conversions::DIM_G_min */
#define DIM_G_min_TM_conversions 0

/* TM_conversions::INT_Q_GDIR_downhill */
#define INT_Q_GDIR_downhill_TM_conversions 0

/* TM_conversions::INT_Q_GDIR_uphill */
#define INT_Q_GDIR_uphill_TM_conversions 1

/* TM_conversions::ENUM_Q_GDIR_downhill */
#define ENUM_Q_GDIR_downhill_TM_conversions Q_GDIR_downhill

/* TM_lib_internal::DIM_P021_n_sections */
#define DIM_P021_n_sections_TM_lib_internal 3

/* TA_Lib_internal::ENUM_MsgSource_Balise */
#define ENUM_MsgSource_Balise_TA_Lib_internal msrc_Eurobalise_Common_Types_Pkg

/* TA_Lib_internal::ENUM_MsgSource_Euroradio */
#define ENUM_MsgSource_Euroradio_TA_Lib_internal msrc_Euroradio_Common_Types_Pkg

/* TA_MRSP::DIM_maxSSP_individual_sections */
#define DIM_maxSSP_individual_sections_TA_MRSP 33

/* TM::DEFAULT_P021_OBU_section */
extern const P021_section_enum_T_TM DEFAULT_P021_OBU_section_TM;

/* TM_conversions::ENUM_Q_GDIR_uphill */
#define ENUM_Q_GDIR_uphill_TM_conversions Q_GDIR_uphill

/* TrackAtlasTypes::DEFAULT_GradientSection */
extern const Gradient_section_t_TrackAtlasTypes DEFAULT_GradientSection_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_GradientProfile */
extern const GradientProfile_t_TrackAtlasTypes DEFAULT_GradientProfile_TrackAtlasTypes;

/* TA_Gradient::DEFAULT_GP_Section */
extern const Gradient_section_t_TrackAtlasTypes DEFAULT_GP_Section_TA_Gradient;

/* TrackAtlasTypes::GradientMaxSections */
#define GradientMaxSections_TrackAtlasTypes DIM_GP_TrackAtlasTypes

/* TrackAtlasTypes::DIM_GP */
#define DIM_GP_TrackAtlasTypes 50

/* Packet_TrainTypes_Pkg::cmaxNumberTelephoneNumbers */
#define cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg 1

/* Packet_TrainTypes_Pkg::cDigitsInTelephoneNumber */
#define cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg 15

/* Packet_TrainTypes_Pkg::cMaxNationalSystem */
#define cMaxNationalSystem_Packet_TrainTypes_Pkg 5

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity */
#define cMaxTractionIdentity_Packet_TrainTypes_Pkg 4

/* CalculateTrainPosition_Pkg::cNoPositionErrors */
extern const positionErrors_T_TrainPosition_Types_Pck cNoPositionErrors_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::cNoPositionedBGs */
extern const positionedBGs_T_TrainPosition_Types_Pck cNoPositionedBGs_CalculateTrainPosition_Pkg;

/* Obu_BasicTypes_Pkg::cOdometryInitialValue */
extern const OdometryLocations_T_Obu_BasicTypes_Pkg cOdometryInitialValue_Obu_BasicTypes_Pkg;

/* CalculateTrainPosition_Pkg::cNoPassedBG */
extern const passedBG_T_BG_Types_Pkg cNoPassedBG_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::cNoInfoFromLinking */
extern const infoFromLinking_T_TrainPosition_Types_Pck cNoInfoFromLinking_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoRefPrevBGs */
extern const refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* TrainPosition_Types_Pck::cQ_SCALE_10_cm_resolution */
#define cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck 10

/* TrainPosition_Types_Pck::cQ_SCALE_1_m_resolution */
#define cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck 100

/* TrainPosition_Types_Pck::cQ_SCALE_10_m_resolution */
#define cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck 1000

/* TrainPosition_Types_Pck::cQLOCACC_resolution */
#define cQLOCACC_resolution_TrainPosition_Types_Pck 100

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoLinkedBG_index */
extern const linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::noValidIndex */
#define noValidIndex_CalculateTrainPosition_Pkg_gp_functions_Pkg (- 1)

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_x_unlinkedBGs */
#define cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg 2

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_8_LRBGs */
#define cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg 3

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBGCounters_0 */
extern const BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBG_find_0 */
extern const BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cEmptyPositionedBG */
extern const positionedBG_T_TrainPosition_Types_Pck cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* Obu_BasicTypes_Pkg::cLocWithInAcc_0 */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cLocWithInAcc_0_Obu_BasicTypes_Pkg;

/* TrainPosition_Types_Pck::cMaxNoOfStoredBGs */
#define cMaxNoOfStoredBGs_TrainPosition_Types_Pck (1 * cMaxNoOfLinkedBGs_BG_Types_Pkg + 8)

/* CalculateTrainPosition_Pkg::cNoValidIndex */
#define cNoValidIndex_CalculateTrainPosition_Pkg (- 1)

/* CalculateTrainPosition_Pkg::cNoPositionedBG */
extern const positionedBG_T_TrainPosition_Types_Pck cNoPositionedBG_CalculateTrainPosition_Pkg;

/* TM_conversions::INT_Q_SCALE_10cm */
#define INT_Q_SCALE_10cm_TM_conversions 0

/* TM_conversions::INT_Q_SCALE_1m */
#define INT_Q_SCALE_1m_TM_conversions 1

/* TM_conversions::INT_Q_SCALE_10m */
#define INT_Q_SCALE_10m_TM_conversions 2

/* TM_conversions::ENUM_Q_SCALE_10cm */
#define ENUM_Q_SCALE_10cm_TM_conversions Q_SCALE_10_cm_scale

/* TM_conversions::ENUM_Q_SCALE_10m */
#define ENUM_Q_SCALE_10m_TM_conversions Q_SCALE_10_m_scale

/* TM_conversions::ENUM_Q_SCALE_1m */
#define ENUM_Q_SCALE_1m_TM_conversions Q_SCALE_1_m_scale

/* TM_conversions::INT_Q_DIR_nomiinal */
#define INT_Q_DIR_nomiinal_TM_conversions 1

/* TM_conversions::INT_Q_DIR_reverse */
#define INT_Q_DIR_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIR_both */
#define INT_Q_DIR_both_TM_conversions 2

/* TM_conversions::ENUM_Q_DIR_both */
#define ENUM_Q_DIR_both_TM_conversions Q_DIR_Both_directions

/* TM_conversions::ENUM_Q_DIR_reverse */
#define ENUM_Q_DIR_reverse_TM_conversions Q_DIR_Reverse

/* TM_conversions::ENUM_Q_DIR_nominal */
#define ENUM_Q_DIR_nominal_TM_conversions Q_DIR_Nominal

/* TM::DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005_TM ((DIM_N_ITER_TM + 1) * 7 + 5)

/* TM_lib_internal::DEFAULT_P005_OBU_section */
extern const P005_section_enum_T_TM DEFAULT_P005_OBU_section_TM_lib_internal;

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_conversions::INT_Q_NEWCOUNTRY_same */
#define INT_Q_NEWCOUNTRY_same_TM_conversions 0

/* TM_conversions::INT_Q_NEWCOUNTRY_not_same */
#define INT_Q_NEWCOUNTRY_not_same_TM_conversions 1

/* TM_conversions::ENUM_Q_NEWCOUNTRY_not_same */
#define ENUM_Q_NEWCOUNTRY_not_same_TM_conversions Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows

/* TM_conversions::ENUM_Q_NEWCOUNTRY_same */
#define ENUM_Q_NEWCOUNTRY_same_TM_conversions Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows

/* TM_conversions::INT_Q_LINKREACTION_Apply_servicebrake */
#define INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions 1

/* TM_conversions::INT_Q_LINKREACTION_Train_trip */
#define INT_Q_LINKREACTION_Train_trip_TM_conversions 0

/* TM_conversions::INT_Q_LINKREACTION_No_Reaction */
#define INT_Q_LINKREACTION_No_Reaction_TM_conversions 2

/* TM_conversions::ENUM_Q_LINKREACTION_Train_trip */
#define ENUM_Q_LINKREACTION_Train_trip_TM_conversions Q_LINKREACTION_Train_trip

/* TM_conversions::ENUM_Q_LINKREACTION_No_Reaction */
#define ENUM_Q_LINKREACTION_No_Reaction_TM_conversions Q_LINKREACTION_No_Reaction

/* TM_conversions::ENUM_Q_LINKREACTION_Apply_servicebrake */
#define ENUM_Q_LINKREACTION_Apply_servicebrake_TM_conversions Q_LINKREACTION_Apply_service_brake

/* TM_conversions::INT_Q_LINKORIENTATION_nominal */
#define INT_Q_LINKORIENTATION_nominal_TM_conversions 1

/* TM_conversions::INT_Q_LINKORIENTATION_reverse */
#define INT_Q_LINKORIENTATION_reverse_TM_conversions 0

/* TM_conversions::ENUM_Q_LINKORIENTATION_reverse */
#define ENUM_Q_LINKORIENTATION_reverse_TM_conversions Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction

/* TM_conversions::ENUM_Q_LINKORIENTATION_nominal */
#define ENUM_Q_LINKORIENTATION_nominal_TM_conversions Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction

/* TM_lib_internal::DIM_P005_n_sections */
#define DIM_P005_n_sections_TM_lib_internal 7

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define DIM_offset_metadata_nid_packet_TM_lib_internal 1000000

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define DIM_offset_metadata_q_dir_TM_lib_internal 100000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define DIM_offset_metadata_m_version_TM_lib_internal 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define DIM_offset_metadata_id_TM_lib_internal 1

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* TM_specific::DEFAULT_LinkedBGs_T */
extern const LinkedBGs_T_BG_Types_Pkg DEFAULT_LinkedBGs_T_TM_specific;

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 33

/* BG_Types_Pkg::cNID_LRBG_unknown */
#define cNID_LRBG_unknown_BG_Types_Pkg 16777215

/* BG_Types_Pkg::cNID_LRBG_14Bits_Multiplicator */
#define cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg 16384

/* BG_Types_Pkg::cNID_BG_unknown */
#define cNID_BG_unknown_BG_Types_Pkg 16383

/* EVC_PermanentData_Pkg::cP3NationalValuesUtrechtAmsterdam */
extern const P3_NationalValues_T_Packet_Types_Pkg cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg;

/* Packet_Types_Pkg::cNIterMax */
#define cNIterMax_Packet_Types_Pkg 7

/* EVC_PermanentData_Pkg::cP003_PermanentData */
extern const P003_permanent_data_T_TM_baseline2 cP003_PermanentData_EVC_PermanentData_Pkg;

/* EVC_PermanentData_Pkg::cP203_PermanentData */
extern const P203V1_OBU_T_TM_baseline2 cP203_PermanentData_EVC_PermanentData_Pkg;

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* EVC_PermanentData_Pkg::cMoRC_own_P3ng */
extern const P003_TM_TrainToTrack cMoRC_own_P3ng_EVC_PermanentData_Pkg;

/* TM_TrainToTrack::DIM_nid_radio_list */
#define DIM_nid_radio_list_TM_TrainToTrack 5

#endif /* _KCG_CONSTS_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_consts.h
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */

