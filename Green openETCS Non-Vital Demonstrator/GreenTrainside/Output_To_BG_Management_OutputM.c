/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_OutputM.h"

/* OutputManagement::Output_To_BG_Management */
void Output_To_BG_Management_OutputM(
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management_From_Mode */ T_Data_To_BG_Management_Level_A *Data_To_BG_Management_From_Mode,
  /* OutputManagement::Output_To_BG_Management::Connection_to_RBC_Requested */ kcg_bool Connection_to_RBC_Requested,
  /* OutputManagement::Output_To_BG_Management::PositionReportNeeded */ kcg_bool PositionReportNeeded,
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management */ T_Data_To_BG_Management_Level_A *Data_To_BG_Management)
{
  kcg_copy_T_Data_To_BG_Managemen(
    Data_To_BG_Management,
    Data_To_BG_Management_From_Mode);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_BG_Management_OutputM.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */
