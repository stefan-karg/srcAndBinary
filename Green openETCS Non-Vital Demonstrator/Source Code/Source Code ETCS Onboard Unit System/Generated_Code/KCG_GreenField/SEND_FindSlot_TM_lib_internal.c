/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_FindSlot_TM_lib_internal.h"

/* TM_lib_internal::SEND_FindSlot */
void SEND_FindSlot_TM_lib_internal(
  /* TM_lib_internal::SEND_FindSlot::a */ kcg_int a,
  /* TM_lib_internal::SEND_FindSlot::MessageIn */ MetadataElement_T_Common_Types_ *MessageIn,
  /* TM_lib_internal::SEND_FindSlot::EmptyHeader */ MetadataElement_T_Common_Types_ *EmptyHeader,
  /* TM_lib_internal::SEND_FindSlot::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::SEND_FindSlot::Acc */ kcg_int *Acc)
{
  *Cont = (*MessageIn).nid_packet != (*EmptyHeader).nid_packet;
  /* 1 */ if (*Cont) {
    *Acc = (*MessageIn).endAddress;
  }
  else {
    *Acc = a;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_FindSlot_TM_lib_internal.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

