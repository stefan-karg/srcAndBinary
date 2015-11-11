/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352 */
void Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352::TrainPos */kcg_real TrainPos,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352::BG_message_out */CompressedBaliseMessage_TM *BG_message_out)
{
  B_data_internal_T_InfraLib tmp1;
  B_data_internal_T_InfraLib tmp;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352::_L14 */ kcg_bool _L14;
  
  /* 1 */ Balise_Group_Init_InfraLib(TrainPos, Engineering_Data, &tmp1);
  /* 1 */
  Balise_352_0_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &tmp1,
    (BaliseTelegramHeader_int_T_TM *) &BG352_header_B0_Balises426,
    0,
    &tmp);
  /* 1 */
  Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &tmp,
    (BaliseTelegramHeader_int_T_TM *) &BG352_header_B1_Balises426,
    1,
    &tmp1);
  /* 1 */
  Balise_Group_Close_InfraLib(&tmp1, BG_message_in, &_L14, BG_message_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

