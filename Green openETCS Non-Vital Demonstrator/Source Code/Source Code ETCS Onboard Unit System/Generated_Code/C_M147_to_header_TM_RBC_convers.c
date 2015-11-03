/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M147_to_header_TM_RBC_convers.h"

/* TM_RBC_conversions::C_M147_to_header */
void C_M147_to_header_TM_RBC_convers(
  /* TM_RBC_conversions::C_M147_to_header::Message_Data_in */ M_147_T_TM_radio_messages *Message_Data_in,
  /* TM_RBC_conversions::C_M147_to_header::Message_Header_Out */ M_TrainTrack_MessageHd_T_TM_rad *Message_Header_Out)
{
  (*Message_Header_Out).valid = (*Message_Data_in).valid;
  (*Message_Header_Out).field3 = 0;
  (*Message_Header_Out).nid_message = /* 1 */
    CAST_NID_MESSAGE_to_int_TM_conv((*Message_Data_in).nid_message);
  (*Message_Header_Out).l_message = /* 1 */
    CAST_L_MESSAGE_to_int_TM_conver((*Message_Data_in).l_message);
  (*Message_Header_Out).t_train = /* 1 */
    CAST_T_TRAIN_to_int_TM_conversi((*Message_Data_in).t_train);
  (*Message_Header_Out).nid_engine = /* 1 */
    CAST_NID_ENGINE_to_int_TM_conve((*Message_Data_in).nid_engine);
  (*Message_Header_Out).field1 = /* 1 */
    CAST_NID_EM_to_int_TM_conversio((*Message_Data_in).nid_em);
  (*Message_Header_Out).field2 = /* 1 */
    CAST_Q_EMERGENCYSTOP_to_int_TM_((*Message_Data_in).q_emergencystop);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_M147_to_header_TM_RBC_convers.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

