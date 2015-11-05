/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_199_recalculate_BG_locations_a.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern */
void _199_recalculate_BG_locations_a(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::referenceBG */ positionedBG_T_TrainPosition_Ty *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern */
  static refBGs_T_CalculateTrainPosition acc;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::_L3 */
  static refBGs_T_CalculateTrainPosition _L3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::_L4 */
  static positionedBGs_T_TrainPosition_T _L4;
  
  kcg_copy_refBGs_T_CalculateTrai(
    &_L3,
    (refBGs_T_CalculateTrainPosition *) &cNoRefPrevBGs_CalculateTrainPos);
  kcg_copy_positionedBG_T_TrainPo(&_L3.refBG, referenceBG);
  for (i = 0; i < 41; i++) {
    kcg_copy_refBGs_T_CalculateTrai(&acc, &_L3);
    /* 1 */
    recalculate_BG_locations_astern(
      &acc,
      &(*BGs_in)[40 - i],
      trainProperties,
      &_L3,
      &_L4[i]);
  }
  for (i = 0; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPo(&(*BGs_out)[i], &_L4[40 - i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _199_recalculate_BG_locations_a.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

