/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Overlap_TA_MA_new.h"

/* TA_MA_new::Normalize_Overlap */
void Normalize_Overlap_TA_MA_new(
  /* TA_MA_new::Normalize_Overlap::d_endsection */ L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* TA_MA_new::Normalize_Overlap::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA_new::Normalize_Overlap::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::Normalize_Overlap::q_overlap */ kcg_bool *q_overlap,
  /* TA_MA_new::Normalize_Overlap::overlap */ DP_or_OL_t_TrackAtlasTypes *overlap)
{
  /* TA_MA_new::Normalize_Overlap::_L1 */ V_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* TA_MA_new::Normalize_Overlap::_L2 */ kcg_bool _L2;
  
  /* 1 */
  EVAL_V_Release_TA_Lib_internal(
    (*Packet15_in).v_releaseol,
    (*NV_in).v_nvrel,
    &_L1,
    &_L2);
  *q_overlap = /* 1 */ EVAL_Q_OVERLAP_TA_Lib_internal((*Packet15_in).q_overlap);
  /* 1 */ if (*q_overlap) {
    (*overlap).v_release = _L1;
    (*overlap).calc_v_release_onboard = _L2;
    (*overlap).d_DP_or_OL = /* 1 */
      Eval_Q_SCALE_TA_MRSP((*Packet15_in).q_scale, (*Packet15_in).d_ol) +
      d_endsection;
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      overlap,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_OL_TrackAtlasTypes);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Overlap_TA_MA_new.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */
