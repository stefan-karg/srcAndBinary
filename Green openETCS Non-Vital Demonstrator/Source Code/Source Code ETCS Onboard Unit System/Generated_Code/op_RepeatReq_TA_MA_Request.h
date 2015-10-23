/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */
#ifndef _op_RepeatReq_TA_MA_Request_H_
#define _op_RepeatReq_TA_MA_Request_H_

#include "kcg_types.h"
#include "MOD_XCP_numeric.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_Request::op_RepeatReq::trigger */ trigger;
  kcg_bool /* TA_MA_Request::op_RepeatReq::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* TA_MA_Request::op_RepeatReq::_L6 */ _L6;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_RepeatReq_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::op_RepeatReq */
extern void op_RepeatReq_TA_MA_Request(
  /* TA_MA_Request::op_RepeatReq::tcycreq */ T_CYCLOC tcycreq,
  /* TA_MA_Request::op_RepeatReq::setRepeater */ kcg_bool setRepeater,
  /* TA_MA_Request::op_RepeatReq::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_RepeatReq_reset_TA_MA_Request(
  outC_op_RepeatReq_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_RepeatReq_init_TA_MA_Request(
  outC_op_RepeatReq_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_RepeatReq_TA_MA_Request_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_RepeatReq_TA_MA_Request.h
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */
