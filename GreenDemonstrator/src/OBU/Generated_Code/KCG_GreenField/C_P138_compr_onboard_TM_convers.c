/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P138_compr_onboard_TM_convers.h"

/* TM_conversions::C_P138_compr_onboard */
void C_P138_compr_onboard_TM_convers(
  /* TM_conversions::C_P138_compr_onboard::PacketData */ CompressedPacketData_T_Common_T *PacketData,
  /* TM_conversions::C_P138_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_ *Metadata_Element,
  /* TM_conversions::C_P138_compr_onboard::P138_onboard */ P138_OBU_T_TM *P138_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::C_P138_compr_onboard::_L45 */
  static array_int_6 _L45;
  
  kcg_copy_array_int_6(&_L45, (array_int_6 *) &(*PacketData)[0]);
  (*P138_onboard).valid = _L45[0] == 138;
  else_clock_1_IfBlock1 = _L45[1] == INT_Q_DIR_nomiinal_TM_conversio;
  IfBlock1_clock_1 = _L45[3] == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_ck_IfBlock1 */ if (else_clock_1_IfBlock1) {
    (*P138_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversio;
  }
  else {
    _2_else_clock_1_IfBlock1 = _L45[1] == INT_Q_DIR_reverse_TM_conversion;
    /* 1_ck_anon_activ */ if (_2_else_clock_1_IfBlock1) {
      (*P138_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversio;
    }
    else {
      _1_else_clock_1_IfBlock1 = _L45[1] == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
        (*P138_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P138_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*P138_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversion;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L45[3] == INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*P138_onboard).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = _L45[3] == INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*P138_onboard).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P138_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversion;
      }
    }
  }
  (*P138_onboard).d_startreverse = /* 1 */
    CAST_Int_to_D_STARTREVERSE_TM_c(_L45[4]);
  (*P138_onboard).l_reversearea = /* 1 */
    CAST_Int_to_L_REVERSEAREA_TM_co(_L45[5]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P138_compr_onboard_TM_convers.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */
