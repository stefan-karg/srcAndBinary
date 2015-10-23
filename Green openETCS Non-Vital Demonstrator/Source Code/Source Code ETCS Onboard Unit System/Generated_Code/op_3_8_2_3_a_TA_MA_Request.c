/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_a_TA_MA_Request.h"

/* TA_MA_Request::op_3_8_2_3_a */
void op_3_8_2_3_a_TA_MA_Request(
  /* TA_MA_Request::op_3_8_2_3_a::t_mar */ T_MAR t_mar,
  /* TA_MA_Request::op_3_8_2_3_a::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::op_3_8_2_3_a::preindicationLoc */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  /* TA_MA_Request::op_3_8_2_3_a::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::op_3_8_2_3_a::exception */ kcg_bool *exception,
  /* TA_MA_Request::op_3_8_2_3_a::triggerMA */ kcg_bool *triggerMA)
{
  /* TA_MA_Request::op_3_8_2_3_a::_L21 */
  static kcg_bool _L21;
  /* TA_MA_Request::op_3_8_2_3_a::_L20 */
  static kcg_real _L20;
  /* TA_MA_Request::op_3_8_2_3_a::_L25 */
  static kcg_bool _L25;
  /* TA_MA_Request::op_3_8_2_3_a::_L24 */
  static kcg_real _L24;
  /* TA_MA_Request::op_3_8_2_3_a::_L27 */
  static kcg_real _L27;
  
  _L27 = - 1.0;
  /* 1 */
  DIV_real_XCP_numeric(
    (kcg_real) (preindicationLoc - (*trainPosition).trainPosition.d_max),
    100.0,
    _L27,
    &_L20,
    &_L21);
  /* 2 */
  DIV_real_XCP_numeric(
    _L20,
    (kcg_real) (*odometry).speed.v_upper * 0.28,
    _L27,
    &_L24,
    &_L25);
  *triggerMA = (kcg_real) t_mar <= _L24;
  *exception = _L25 | _L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_8_2_3_a_TA_MA_Request.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */
