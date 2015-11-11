/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet4_ProvidePositionRe.h"

/* ProvidePositionReport_Pkg::Build_Packet4 */
void Build_Packet4_ProvidePositionRe(
  /* ProvidePositionReport_Pkg::Build_Packet4::errorMsg */ ErrorMessage_T_ProvidePositionR *errorMsg,
  /* ProvidePositionReport_Pkg::Build_Packet4::packet4 */ PT4_ErrorReporting_T_Packet_Tra *packet4)
{
  (*packet4).valid = (*errorMsg).present;
  (*packet4).m_error = (*errorMsg).errorType;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet4_ProvidePositionRe.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */
