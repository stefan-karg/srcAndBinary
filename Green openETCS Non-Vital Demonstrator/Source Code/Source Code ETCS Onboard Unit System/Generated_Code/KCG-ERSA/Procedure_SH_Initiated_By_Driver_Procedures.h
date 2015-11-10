/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
#ifndef _Procedure_SH_Initiated_By_Driver_Procedures_H_
#define _Procedure_SH_Initiated_By_Driver_Procedures_H_

#include "kcg_types.h"
#include "SH_Initiated_By_Driver_On_Procedures.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::Condition5 */ Condition5;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::Condition6 */ Condition6;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::Clean_BG_List_SH_Area */ Clean_BG_List_SH_Area;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::End_Of_Mission_Procedure_Req */ End_Of_Mission_Procedure_Req;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::Request_For_SH_To_RBC */ Request_For_SH_To_RBC;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Refused_By_RBC_To_DMI */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SH_Initiated_By_Driver /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */ SH_Initiated_By_Driver_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SH_Initiated_By_Driver_On_Procedures /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_SH_Initiated_By_Driver_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_SH_Initiated_By_Driver */
extern void Procedure_SH_Initiated_By_Driver_Procedures(
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Level */M_LEVEL Current_Level,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Driver_Req_SH */kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_SH_Initiated_By_Driver::On_Going_Mission */kcg_bool On_Going_Mission,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Shunting_Granted_By_RBC */kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Train_Standstill */kcg_bool Train_Standstill,
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC);

extern void Procedure_SH_Initiated_By_Driver_reset_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC);

#endif /* _Procedure_SH_Initiated_By_Driver_Procedures_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_SH_Initiated_By_Driver_Procedures.h
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
