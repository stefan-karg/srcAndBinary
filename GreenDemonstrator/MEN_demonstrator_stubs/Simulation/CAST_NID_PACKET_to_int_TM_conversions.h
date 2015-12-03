/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _CAST_NID_PACKET_to_int_TM_conversions_H_
#define _CAST_NID_PACKET_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::CAST_NID_PACKET_to_int::nid_packet_int */ nid_packet_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_PACKET /* TM_conversions::CAST_NID_PACKET_to_int::_L1 */ _L1;
  kcg_int /* TM_conversions::CAST_NID_PACKET_to_int::_L5 */ _L5;
  kcg_bool /* TM_conversions::CAST_NID_PACKET_to_int::_L4 */ _L4;
  kcg_int /* TM_conversions::CAST_NID_PACKET_to_int::_L3 */ _L3;
  kcg_bool /* TM_conversions::CAST_NID_PACKET_to_int::_L2 */ _L2;
} outC_CAST_NID_PACKET_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_NID_PACKET_to_int */
extern void CAST_NID_PACKET_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_PACKET_to_int::nid_packet */NID_PACKET nid_packet,
  outC_CAST_NID_PACKET_to_int_TM_conversions *outC);

extern void CAST_NID_PACKET_to_int_reset_TM_conversions(
  outC_CAST_NID_PACKET_to_int_TM_conversions *outC);

#endif /* _CAST_NID_PACKET_to_int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_PACKET_to_int_TM_conversions.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
