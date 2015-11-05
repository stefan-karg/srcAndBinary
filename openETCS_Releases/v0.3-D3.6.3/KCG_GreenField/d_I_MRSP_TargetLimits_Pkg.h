/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */
#ifndef _d_I_MRSP_TargetLimits_Pkg_H_
#define _d_I_MRSP_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingC.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::d_I_MRSP */
extern void d_I_MRSP_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_I_MRSP::V_MRSP */ V_internal_real_Type_SDM_Types_ V_MRSP,
  /* TargetLimits_Pkg::d_I_MRSP::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::d_I_MRSP::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_I_MRSP::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::d_I_MRSP::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_I_MRSP::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_I_MRSP::D_I */ L_internal_real_Type_SDM_Types_ *D_I);

#endif /* _d_I_MRSP_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** d_I_MRSP_TargetLimits_Pkg.h
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */

