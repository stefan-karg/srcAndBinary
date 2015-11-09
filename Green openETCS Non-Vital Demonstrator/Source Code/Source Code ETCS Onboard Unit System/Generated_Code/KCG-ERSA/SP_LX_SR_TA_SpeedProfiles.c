/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_LX_SR_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_LX_SR */
void SP_LX_SR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_LX_SR::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_LX_SR::PacketsIn */ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_LX_SR::LX_SR */SSP_cat_t_TA_MRSP *LX_SR)
{
  kcg_copy_SSP_cat_t_TA_MRSP(LX_SR, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_LX_SR_TA_SpeedProfiles.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */
