/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _Read_P046_TM_H_
#define _Read_P046_TM_H_

#include "kcg_types.h"
#include "C_P046_compr_onboard_TM_convers.h"
#include "RECV_ReadPackets_TM_lib_interna.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P046 */
extern void Read_P046_TM(
  /* TM::Read_P046::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P046::received */ kcg_bool *received,
  /* TM::Read_P046::P046_OBU_out */ P046_OBU_T_TM *P046_OBU_out);

#endif /* _Read_P046_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P046_TM.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

