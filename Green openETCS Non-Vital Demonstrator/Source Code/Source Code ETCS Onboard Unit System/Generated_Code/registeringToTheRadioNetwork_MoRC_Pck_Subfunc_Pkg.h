/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */
#ifndef _registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg_H_
#define _registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "radioNetworkMobile_MoRC_Pck_Subfunc_Pkg.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::orderTheRegistrationOfItsConnectedMobiles */ orderTheRegistrationOfItsConnectedMobiles;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::actualRadioNetworkID */ actualRadioNetworkID;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  mobileHWCmd_Type_MoRC_Pck /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::mobileHWCmd */ mobileHWCmd;
  mobileSWStatus_Type_MoRC_Pck /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::mobileSWStatus */ mobileSWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::noValidActualRadioNetworkID_available */ noValidActualRadioNetworkID_available;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L108 */ _L108;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_radioNetworkMobile_MoRC_Pck_Subfunc_Pkg /* 1 */ _1_Context_1;
  outC_RisingEdge_digital /* 4 */ Context_4;
  outC_RisingEdge_digital /* 2 */ Context_2;
  outC_RisingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork */
extern void registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::atPowerUp */ kcg_bool atPowerUp,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::afterDriverEntryOfANewRadioNetworkID */ kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::level */ M_LEVEL level,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::registrationOrderedFromTrackside */ kcg_bool registrationOrderedFromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::registrationOrderFromTracksideCancelled */ kcg_bool registrationOrderFromTracksideCancelled,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::atPowerOff */ kcg_bool atPowerOff,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::RadioNetworkID_memorized */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_memorized,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::RadioNetworkID_fromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_fromDriver,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::RadioNetworkID_fromTrackside */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_fromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::triggerDecisionThatNoRadioNetworkIDAvailable */ kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::mobileSWCmd */ mobileSWCmd_Type_MoRC_Pck *mobileSWCmd,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::RadioNetworkID_Default */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void registeringToTheRadioNetwork_reset_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void registeringToTheRadioNetwork_init_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */

