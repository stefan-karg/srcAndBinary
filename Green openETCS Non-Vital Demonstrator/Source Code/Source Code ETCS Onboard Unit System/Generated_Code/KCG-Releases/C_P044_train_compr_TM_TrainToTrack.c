/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P044_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P044_train_compr */
void C_P044_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P044_train_compr::P044_in */ P044_TM_TrainToTrack *P044_in,
  /* TM_TrainToTrack::C_P044_train_compr::P044_int */ P044_TrainTrack_int_TM_TrainToTrack *P044_int)
{
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(
    P044_int,
    (P044_TrainTrack_int_TM_TrainToTrack *) &DEFAULT_P044_int_TM_TrainToTrack);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P044_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */
