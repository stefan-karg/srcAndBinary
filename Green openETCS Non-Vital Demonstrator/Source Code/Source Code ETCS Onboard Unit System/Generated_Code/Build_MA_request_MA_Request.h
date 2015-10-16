/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */
#ifndef _Build_MA_request_MA_Request_H_
#define _Build_MA_request_MA_Request_H_

#include "kcg_types.h"
#include "C_legacy_P000_TM_conversions_TrainToTrack.h"
#include "C_legacy_P001_TM_conversions_TrainToTrack.h"
#include "Send_M132_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_TM_transitional /* MA_Request::Build_MA_request::message132 */ message132;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* MA_Request::Build_MA_request::bus_out */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M132_TM_radio_messages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MA_request_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::Build_MA_request */
extern void Build_MA_request_MA_Request(
  /* MA_Request::Build_MA_request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* MA_Request::Build_MA_request::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* MA_Request::Build_MA_request::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* MA_Request::Build_MA_request::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* MA_Request::Build_MA_request::t_train */ T_TRAIN t_train,
  /* MA_Request::Build_MA_request::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Build_MA_request_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MA_request_reset_MA_Request(
  outC_Build_MA_request_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MA_request_init_MA_Request(
  outC_Build_MA_request_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_MA_request_MA_Request_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_request_MA_Request.h
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

