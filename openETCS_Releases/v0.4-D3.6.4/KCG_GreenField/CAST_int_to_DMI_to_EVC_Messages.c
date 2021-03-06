/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_to_EVC_Messages.h"

/* Messages::CAST_int_to_DMI_to_EVC */
void CAST_int_to_DMI_to_EVC_Messages(
  /* Messages::CAST_int_to_DMI_to_EVC::dmi_to_evc_int */ DMI_to_EVC_Message_int_T_API_DM *dmi_to_evc_int,
  /* Messages::CAST_int_to_DMI_to_EVC::dmi_to_evc_ct */ DMI_to_EVC_Message_T_API_DMI_Pk *dmi_to_evc_ct)
{
  (*dmi_to_evc_ct).present = kcg_true;
  /* 1 */
  Write_int_to_DMI_Status_DATA_Pa(
    (DMI_Status_int_array_T_DATA *) &(*dmi_to_evc_int)[1],
    &(*dmi_to_evc_ct).status);
  /* 1 */
  Write_int_to_DMI_identifier_DAT(
    (DMI_Identifier_int_array_T_DATA *) &(*dmi_to_evc_int)[5],
    &(*dmi_to_evc_ct).identifier);
  /* 1 */
  Write_int_to_DMI_Driver_Reqest_(
    (DMI_Driver_Request_int_array_T_ *) &(*dmi_to_evc_int)[266],
    &(*dmi_to_evc_ct).driverRequest);
  /* 1 */
  Write_int_to_DMI_Driver_Identif(
    (DMI_Driver_Identifier_int_array *) &(*dmi_to_evc_int)[269],
    &(*dmi_to_evc_ct).driverIdentifier);
  /* 1 */
  C_int_to_DMI_Train_Running_Numb(
    (DMI_Train_Running_Number_int_ar *) &(*dmi_to_evc_int)[280],
    &(*dmi_to_evc_ct).trainRunningNumber);
  /* 1 */
  Write_int_to_DMI_Radio_Net_Data(
    (DMI_Radio_Net_Data_int_array_T_ *) &(*dmi_to_evc_int)[283],
    &(*dmi_to_evc_ct).radioNetData);
  /* 1 */
  Write_int_to_DMI_Text_Message_A(
    (DMI_Text_Message_Ack_int_array_ *) &(*dmi_to_evc_int)[285],
    &(*dmi_to_evc_ct).textMessageAck);
  /* 1 */
  Write_int_to_DMI_Train_Data_Ack(
    (DMI_Train_Data_Ack_int_array_T_ *) &(*dmi_to_evc_int)[289],
    &(*dmi_to_evc_ct).trainDataAck);
  /* 1 */
  C_int_to_DMI_Train_Data_DATA_Pa(
    (DMI_Train_Data_int_array_T_DATA *) &(*dmi_to_evc_int)[292],
    &(*dmi_to_evc_ct).trainData);
  /* 1 */
  C_int_to_DMI_Adhesion_Factor_Da(
    (DMI_Adhesion_Factor_Data_int_ar *) &(*dmi_to_evc_int)[301],
    &(*dmi_to_evc_ct).adhesionFactor);
  /* 1 */
  Write_int_to_DMI_Icon_Ack_DATA_(
    (DMI_Icon_Ack_int_array_T_DATA *) &(*dmi_to_evc_int)[304],
    &(*dmi_to_evc_ct).iconAck);
  /* 1 */
  C_int_to_DMI_Level_Data_DATA_Pa(
    (DMI_Level_Data_int_array_T_DATA *) &(*dmi_to_evc_int)[307],
    &(*dmi_to_evc_ct).selectedLevel);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_to_EVC_Messages.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

