/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P002_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P002_tracksim_compr */
void C_P002_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P002_tracksim_compr::P002_from_track */ P002_trackside_int_T_TM *P002_from_track,
  /* TM_conversions::C_P002_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P002_tracksim_compr::P001_compressed */ CompressedPacketData_T_Common_Types_Pkg *P001_compressed)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  kcg_int i;
  
  (&(*P001_compressed)[0])[0] = (*P002_from_track).NID_PACKET;
  (&(*P001_compressed)[0])[1] = (*P002_from_track).Q_DIR;
  (&(*P001_compressed)[0])[2] = (*P002_from_track).L_PACKET;
  (&(*P001_compressed)[0])[3] = (*P002_from_track).M_VERSION;
  (*Header).valid = (*P002_from_track).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = DIM_MaxElementsPacket002_TM - 1;
  IfBlock1_clock_1 = (*P002_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  (*Header).nid_packet = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P002_from_track).NID_PACKET,
      (*P002_from_track).Q_DIR,
      0,
      2,
      INT_M_VERSION_2_0_TM);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P002_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P002_from_track).Q_DIR ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  for (i = 0; i < 496; i++) {
    (&(*P001_compressed)[4])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P002_tracksim_compr_TM_conversions.c
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */
