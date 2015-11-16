/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt */
void extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::index */kcg_int index,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::ACCU */extractTargetsMRSPACC_TargetManagement_pkg *ACCU,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::MRSP */MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::endCondition */kcg_bool *endCondition,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::ACCUout */extractTargetsMRSPACC_TargetManagement_pkg *ACCUout)
{
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L14 */
  static MRSP_internal_section_T_TargetManagement_types _L14;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L15 */
  static MRSP_internal_section_T_TargetManagement_types _L15;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L34 */
  static kcg_int _L34;
  
  if ((0 <= index + 1) & (index + 1 < 200)) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &_L15,
      &(*MRSP)[index + 1]);
  }
  else {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &_L15,
      (MRSP_internal_section_T_TargetManagement_types *)
        &emptyMRSPSection_TargetManagement_pkg);
  }
  *endCondition = _L15.valid;
  _L34 = 1 + (*ACCU).lastInsertedTargetIndex;
  if ((0 <= index) & (index < 200)) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &_L14,
      &(*MRSP)[index]);
  }
  else {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &_L14,
      (MRSP_internal_section_T_TargetManagement_types *)
        &emptyMRSPSection_TargetManagement_pkg);
  }
  if ((_L14.MRS > _L15.MRS) & _L14.valid & *endCondition) {
    (*ACCUout).lastInsertedTargetIndex = _L34;
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &(*ACCUout).targetList,
      &(*ACCU).targetList);
    if ((0 <= _L34) & (_L34 < 200)) {
      (*ACCUout).targetList[_L34].targetType = MRSP_TargetManagement_types;
      (*ACCUout).targetList[_L34].distance = _L15.Loc_Abs;
      (*ACCUout).targetList[_L34].speed = _L15.MRS;
    }
  }
  else {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(ACCUout, ACCU);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */
