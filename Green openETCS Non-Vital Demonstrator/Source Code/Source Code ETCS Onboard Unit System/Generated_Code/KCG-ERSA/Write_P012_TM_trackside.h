/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */
#ifndef _Write_P012_TM_trackside_H_
#define _Write_P012_TM_trackside_H_

#include "kcg_types.h"
#include "C_P012_tracksim_compr_TM_conversions.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_trackside::Write_P012 */
extern void Write_P012_TM_trackside(
  /* TM_trackside::Write_P012::Packet12 */ P012_trackside_int_T_TM *Packet12,
  /* TM_trackside::Write_P012::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P012::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P012::RadioPacketsOut */ CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut);

#endif /* _Write_P012_TM_trackside_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P012_TM_trackside.h
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */

