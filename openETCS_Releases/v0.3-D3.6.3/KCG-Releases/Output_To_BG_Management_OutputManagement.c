/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_OutputManagement.h"

/* OutputManagement::Output_To_BG_Management */
void Output_To_BG_Management_OutputManagement(
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management_From_Mode */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* OutputManagement::Output_To_BG_Management::Connection_to_RBC_Requested */ kcg_bool Connection_to_RBC_Requested,
  /* OutputManagement::Output_To_BG_Management::PositionReportNeeded */ kcg_bool PositionReportNeeded,
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management)
{
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    Data_To_BG_Management,
    Data_To_BG_Management_From_Mode);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_BG_Management_OutputManagement.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

