/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */
#ifndef _establishSessionFromOBU_v2_MoR
#define _establishSessionFromOBU_v2_MoR

#include "kcg_types.h"
#include "sessionCmd_2_p42_v2_MoRC_Pck_Su.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  p42_sessionManagement_T_RCM_Msg /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::p42_establishSessionCmd */ p42_establishSessionCmd;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::send_m155_initiationOfACommunicationSession */ send_m155_initiationOfACommunic;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::send_m159_sessionEstablishedReport */ send_m159_sessionEstablishedRep;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::send_m154_noCompatibleVersionSupported */ send_m154_noCompatibleVersionSu;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::requestSafeRadioConnectionSetup */ requestSafeRadioConnectionSetup;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::terminateCommunicationSession */ terminateCommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::infomDriverNoCompatibleVersionSupported */ infomDriverNoCompatibleVersionS;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::established */ established;
  sessionStatus_T_RCM_Session_Typ /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionStatus */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _159_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */ SM1_state_nxt;
  sessionCmd_T_RCM_Session_Types_ /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionEstablishCmd_mem */ sessionEstablishCmd_mem;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_establishSessionFromOBU_v2;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
extern void establishSessionFromOBU_v2_MoRC(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_ *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::reset */ kcg_bool reset,
  outC_establishSessionFromOBU_v2 *outC);

extern void establishSessionFromOBU_v2_rese(
  outC_establishSessionFromOBU_v2 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void establishSessionFromOBU_v2_init(
  outC_establishSessionFromOBU_v2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _establishSessionFromOBU_v2_MoR */
/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromOBU_v2_MoRC.h
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */
