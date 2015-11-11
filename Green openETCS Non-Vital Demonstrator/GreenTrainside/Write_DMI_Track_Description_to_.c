/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Track_Description_to_.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int */
void Write_DMI_Track_Description_to_(
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::dmi_track_description_ct */ DMI_Track_Description_T_DMI_Mes *dmi_track_description_ct,
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::dmi_track_description_int */ _51_DMI_Track_Description_int_a *dmi_track_description_int)
{
  /* ck__L14 */ if ((*dmi_track_description_ct).valid) {
    /* 1 */
    CAST_DMI_Track_Description_to_i(
      dmi_track_description_ct,
      dmi_track_description_int);
  }
  else {
    kcg_copy__51_DMI_Track_Descript(
      dmi_track_description_int,
      (_51_DMI_Track_Description_int_a *) &cDMI_Track_Description_in_DATA_);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Track_Description_to_.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
