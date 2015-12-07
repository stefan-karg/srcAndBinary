/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request */
void CAST_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::dmi_menu_request_int */ DMI_Menu_Request_int_array_T_DATA *dmi_menu_request_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request::dmi_menu_request_ct */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menu_request_ct)
{
  (*dmi_menu_request_ct).system_clock = (*dmi_menu_request_int)[1];
  (*dmi_menu_request_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_menu_request_int)[0]);
  /* 1 */
  CAST_int_to_DMI_Available_Menu_DATA_Variables(
    (*dmi_menu_request_int)[2],
    &(*dmi_menu_request_ct).available_menu);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */
