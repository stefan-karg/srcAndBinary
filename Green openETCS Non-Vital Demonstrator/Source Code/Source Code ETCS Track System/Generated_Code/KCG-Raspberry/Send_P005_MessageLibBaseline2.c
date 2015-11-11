/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P005_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P005 */
void Send_P005_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P005::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P005::P005 */P005_trackside_int_T_TM *P005,
  /* MessageLibBaseline2::Send_P005::B_data_out */CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  kcg_bool tmp;
  
  if ((*P005).valid) {
    /* 1 */ Write_P005_TM_trackside(P005, B_data_in, &tmp, B_data_out);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, B_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P005_MessageLibBaseline2.c
** Generation date: 2015-11-10T18:22:09
*************************************************************$ */

