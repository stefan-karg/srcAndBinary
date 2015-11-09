/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P046_extract_el_section */
kcg_int C_P046_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P046_extract_el_section::offset */kcg_int offset,
  /* TM_lib_internal::C_P046_extract_el_section::flat */P046_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P046_extract_el_section::modulo */kcg_int modulo)
{
  /* TM_lib_internal::C_P046_extract_el_section::element */
  static kcg_int element;
  
  if ((0 <= offset + modulo) & (offset + modulo < 66)) {
    element = (*flat)[offset + modulo];
  }
  else {
    element = 0;
  }
  return element;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_extract_el_section_TM_lib_internal.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */
