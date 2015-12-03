/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BG_hasBeenReported_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::BG_hasBeenReported */
void BG_hasBeenReported_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::nidBg */ NID_BG nidBg,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::location */ OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::updatedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *updatedBGs)
{
  /* ProvidePositionReport_Pkg::BG_hasBeenReported */ kcg_bool acc;
  kcg_int i;
  
  *found = kcg_false;
  for (i = 0; i < 8; i++) {
    acc = *found;
    /* 3 */
    UpdateReportedBG_ProvidePositionReport_Pkg(
      acc,
      &(*reportedBGs)[i],
      nidBg,
      location,
      found,
      &(*updatedBGs)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BG_hasBeenReported_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */
