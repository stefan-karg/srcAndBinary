/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_loop_TA_SSP.h"

/* TA_SSP::SSP_Normalize_Profile_loop */
void SSP_Normalize_Profile_loop_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Normalize_Profile_loop::ProfileIn */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_SSP::SSP_Normalize_Profile_loop::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Normalize_Profile_loop::ProfileNormalized_LRBG */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  /* TA_SSP::SSP_Normalize_Profile_loop */
  static StaticSpeedSection_t_TrackAtlasTypes tmp;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L4 */
  static StaticSpeedSection_t_TrackAtlasTypes _L4;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L10 */
  static kcg_int _L10;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L4, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L4,
      (StaticSpeedSection_t_TrackAtlasTypes *) &DEFAULT_SSP_section_TA_SSP);
  }
  /* 1 */ if (_L4.valid) {
    _L10 = _L4.d_static_abs - pos_BG;
  }
  else {
    _L10 = 0;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    ProfileNormalized_LRBG,
    ProfileIn);
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&tmp, &_L4);
  /* ck__L44 */ if (_L4.q_train_length_corr) {
    tmp.d_static_LRBG = /* 1 */
      TrainLength_Correction_TA_Lib_internal(
        ProfileIn,
        train_length,
        i,
        _L4.v_static,
        _L10);
  }
  else {
    tmp.d_static_LRBG = _L10;
  }
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &(*ProfileNormalized_LRBG)[i],
      &tmp);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Normalize_Profile_loop_TA_SSP.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

