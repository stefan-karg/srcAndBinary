/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetPacketId_InformationFilter_P.h"

/* InformationFilter_Pkg::Common::GetPacketId */
kcg_int GetPacketId_InformationFilter_P(
  /* InformationFilter_Pkg::Common::GetPacketId::inPacket */ MetadataElement_T_Common_Types_ *inPacket)
{
  /* InformationFilter_Pkg::Common::GetPacketId::outPacketId */
  static kcg_int outPacketId;
  
  outPacketId = /* 1 */ T_extract_nid_packet_from_metad((*inPacket).nid_packet);
  return outPacketId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GetPacketId_InformationFilter_P.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

