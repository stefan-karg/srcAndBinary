/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */
#ifndef _sendBrakesToDMI_manage_DMI_Output_Pkg_H_
#define _sendBrakesToDMI_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Output_Pkg::sendBrakesToDMI */
extern void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */ DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_iconRequest);

#endif /* _sendBrakesToDMI_manage_DMI_Output_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendBrakesToDMI_manage_DMI_Output_Pkg.h
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */

