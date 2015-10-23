/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbes_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void setProbes_init_xdebugSupport_Pkg(outC_setProbes_xdebugSupport_Pkg *outC)
{
  outC->isChanged = kcg_true;
  outC->init = kcg_true;
  outC->rem_radioMSG = 0;
  outC->rem_BG_ID = 0;
  outC->lastBG_ID = 0;
  outC->lastRadioMSG = 0;
  outC->packet_id2 = 0;
  outC->packet_id1 = 0;
  outC->BG_ID = 0;
  outC->radioMSG = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setProbes_reset_xdebugSupport_Pkg(outC_setProbes_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::setProbes */
void setProbes_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbes::inMsg */ API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbes::show24 */ kcg_bool show24,
  outC_setProbes_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::setProbes */
  static kcg_int tmp1;
  /* xdebugSupport_Pkg::setProbes */
  static kcg_int tmp;
  /* xdebugSupport_Pkg::setProbes::_L23 */
  static kcg_bool _L23;
  /* xdebugSupport_Pkg::setProbes::_L36 */
  static kcg_bool _L36;
  
  outC->radioMSG = (*inMsg).rtm_msg.Radio_Common_Header.nid_message;
  outC->BG_ID = (*inMsg).btm_msg.api_header.nid_bg;
  outC->packet_id1 = (*inMsg).packets.PacketHeaders[0].nid_packet;
  outC->packet_id2 = (*inMsg).packets.PacketHeaders[1].nid_packet;
  /* last_init_ck_msgID */ if (outC->init) {
    tmp1 = 0;
    tmp = 0;
  }
  else {
    tmp1 = outC->rem_BG_ID;
    tmp = outC->rem_radioMSG;
  }
  _L23 = tmp1 != outC->BG_ID;
  _L36 = (tmp != outC->radioMSG) & ((outC->radioMSG !=
        cm24_General_Message_Id_Pkg) | show24);
  outC->isChanged = (*inMsg).valid & (_L23 | _L36);
  /* 1 */ if ((*inMsg).valid & _L36) {
    outC->lastRadioMSG = outC->radioMSG;
  }
  else /* last_init_ck_lastMsgID */ if (outC->init) {
    outC->lastRadioMSG = 0;
  }
  /* 3 */ if ((*inMsg).valid & _L23) {
    outC->lastBG_ID = outC->BG_ID;
  }
  else /* last_init_ck_lastBGID */ if (outC->init) {
    outC->lastBG_ID = 0;
  }
  outC->init = kcg_false;
  outC->rem_radioMSG = outC->radioMSG;
  outC->rem_BG_ID = outC->BG_ID;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setProbes_xdebugSupport_Pkg.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */
