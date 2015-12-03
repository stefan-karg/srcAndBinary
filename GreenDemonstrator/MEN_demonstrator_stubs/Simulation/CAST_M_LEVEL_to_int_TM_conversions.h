/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _CAST_M_LEVEL_to_int_TM_conversions_H_
#define _CAST_M_LEVEL_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */ m_level_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else */ _3_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else */ _2_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::then::_L2 */ _L2_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else::then::_L1 */ _L17_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else::then::_L2 */ _L28_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else::else::_L1 */ _L19_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else::else::_L2 */ _L210_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else */ else_clock_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::then::_L2 */ _L26_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::then::_L1 */ _L15_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::then::_L6 */ _L6_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::then::_L7 */ _L74_IfBlock1;
  M_LEVEL /* TM_conversions::CAST_M_LEVEL_to_int::m_level_in */ m_level_in;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::error */ error;
  M_LEVEL /* TM_conversions::CAST_M_LEVEL_to_int::_L4 */ _L4;
  kcg_bool /* TM_conversions::CAST_M_LEVEL_to_int::_L7 */ _L7;
} outC_CAST_M_LEVEL_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_M_LEVEL_to_int */
extern void CAST_M_LEVEL_to_int_TM_conversions(
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level */M_LEVEL m_level,
  outC_CAST_M_LEVEL_to_int_TM_conversions *outC);

extern void CAST_M_LEVEL_to_int_reset_TM_conversions(
  outC_CAST_M_LEVEL_to_int_TM_conversions *outC);

#endif /* _CAST_M_LEVEL_to_int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_LEVEL_to_int_TM_conversions.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
