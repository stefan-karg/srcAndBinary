/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_release_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_release */
void v_release_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_release::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::v_release::V_target */ V_internal_real_Type_SDM_Types_ V_target,
  /* TargetLimits_Pkg::v_release::D_EOA */ L_internal_real_Type_SDM_Types_ D_EOA,
  /* TargetLimits_Pkg::v_release::MA */ MA_section_real_T_TargetManagem *MA,
  /* TargetLimits_Pkg::v_release::V_ura */ V_internal_real_Type_SDM_Types_ V_ura,
  /* TargetLimits_Pkg::v_release::trainLocations */ TrainLocations_real_T_SDM_Types *trainLocations,
  /* TargetLimits_Pkg::v_release::trainData_int */ trainData_internal_t_SDM_Types_ *trainData_int,
  /* TargetLimits_Pkg::v_release::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_release::V_release */ V_internal_real_Type_SDM_Types_ *V_release,
  /* TargetLimits_Pkg::v_release::valid */ kcg_bool *valid)
{
  /* TargetLimits_Pkg::v_release */
  static V_internal_real_Type_SDM_Types_ acc;
  /* TargetLimits_Pkg::v_release */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TargetLimits_Pkg::v_release::_L9 */
  static V_internal_real_Type_SDM_Types_ _L9;
  /* TargetLimits_Pkg::v_release::_L21 */
  static L_internal_real_Type_SDM_Types_ _L21;
  
  _L9 = V_target;
  /* 1 */ if ((*MA).q_calculate_release) {
    _L21 = /* 1 */
      d_tripEOA_TargetLimits_Pkg(D_EOA, trainLocations, trainData_int);
    for (i = 0; i < 10; i++) {
      acc = _L9;
      /* 1 */
      v_ReleaseOnboardIterator_Target(
        acc,
        EBDcurve,
        V_ura,
        V_target,
        _L21,
        T,
        &cond_iterw,
        &_L9);
      if (!cond_iterw) {
        break;
      }
    }
    *V_release = _L9;
  }
  else {
    *V_release = (*MA).ReleaseSpeed;
  }
  *valid = !((*MA).q_calculate_release & (_L9 <= 0.0));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** v_release_TargetLimits_Pkg.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
