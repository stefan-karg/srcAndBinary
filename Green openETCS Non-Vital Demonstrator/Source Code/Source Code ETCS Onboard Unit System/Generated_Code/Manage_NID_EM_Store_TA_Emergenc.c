/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_NID_EM_Store_TA_Emergenc.h"

/* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
void Manage_NID_EM_Store_TA_Emergenc(
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::add */ kcg_bool add,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::remove */ kcg_bool remove,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::inStore */ NID_EM_Store_T_TA_EmergencyStop *inStore,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */ kcg_bool *handled,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */ NID_EM_Store_T_TA_EmergencyStop *outStore)
{
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
  static NID_EM_STORE_Acc_T_TA_Emergency acc2;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
  static NID_EM_STORE_Acc_T_TA_Emergency acc1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
  static NID_EM_STORE_Acc_T_TA_Emergency acc;
  static kcg_int i;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L2 */
  static array_98011 _L2_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L1 */
  static NID_EM_STORE_Acc_T_TA_Emergency _L1_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L2 */
  static array_98011 _L24_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L1 */
  static NID_EM_STORE_Acc_T_TA_Emergency _L13_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = add & ((*inStore).nfree > 0);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1.handled = kcg_false;
    _L1_IfBlock1.nid_em = nid_em;
    _L1_IfBlock1.nfree = (*inStore).nfree;
    /* 9 */ for (i = 0; i < 8; i++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_(&acc1, &_L1_IfBlock1);
      /* 1 */
      NID_EM_Store_Find_TA_EmergencyS(
        &acc1,
        &(*inStore).items[i],
        &_L1_IfBlock1);
    }
    /* 6 */ for (i = 0; i < 8; i++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_(&acc, &_L1_IfBlock1);
      /* 2 */
      NID_EM_Store_Add_TA_EmergencySt(
        &acc,
        &(*inStore).items[i],
        &_L1_IfBlock1,
        &_L2_IfBlock1[i]);
    }
    (*outStore).nfree = _L1_IfBlock1.nfree;
    kcg_copy_array_98011(&(*outStore).items, &_L2_IfBlock1);
    *handled = _L1_IfBlock1.handled;
  }
  else {
    else_clock_IfBlock1 = remove & ((*inStore).nfree <
        cNID_EM_STORE_SIZE_TA_Emergency);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L13_IfBlock1.handled = kcg_false;
      _L13_IfBlock1.nid_em = nid_em;
      _L13_IfBlock1.nfree = (*inStore).nfree;
      /* 7 */ for (i = 0; i < 8; i++) {
        kcg_copy_NID_EM_STORE_Acc_T_TA_(&acc2, &_L13_IfBlock1);
        /* 1 */
        NID_EM_Store_Remove_TA_Emergenc(
          &acc2,
          &(*inStore).items[i],
          &_L13_IfBlock1,
          &_L24_IfBlock1[i]);
      }
      (*outStore).nfree = _L13_IfBlock1.nfree;
      kcg_copy_array_98011(&(*outStore).items, &_L24_IfBlock1);
      *handled = _L13_IfBlock1.handled;
    }
    else {
      *handled = kcg_false;
      kcg_copy_NID_EM_Store_T_TA_Emer(outStore, inStore);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_NID_EM_Store_TA_Emergenc.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

