/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */
#ifndef _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_
#define _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "Square_mathext_V_internal_real_Type.h"

/* =====================  no input structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
extern void FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inAcceleration */A_internal_real_Type_SDM_Types_Pkg inAcceleration,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD0 */L_internal_real_Type_SDM_Types_Pkg inD0,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD1 */L_internal_real_Type_SDM_Types_Pkg inD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inBeginSpeed */V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::outSpeedAtD1 */V_internal_real_Type_SDM_Types_Pkg *outSpeedAtD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::valid */kcg_bool *valid);

#endif /* _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */
