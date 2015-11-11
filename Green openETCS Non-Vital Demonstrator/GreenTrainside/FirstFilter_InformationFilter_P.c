/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FirstFilter_InformationFilter_P.h"

/* InformationFilter_Pkg::FirstFilter::FirstFilter */
void FirstFilter_InformationFilter_P(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::outMessage */ ReceivedMessage_T_Common_Types_ *outMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  static kcg_int tmp_1;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter */
  static Metadata_T_Common_Types_Pkg tmp;
  static kcg_int i;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L1 */
  static array_bool_30 _L1;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L114 */
  static array_bool_30 _L114;
  
  *outStoreInTransitionBuffer = kcg_false;
  (*outMessage).valid = (*inMessage).valid;
  (*outMessage).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common(
    &(*outMessage).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_P(
    &(*outMessage).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy__11_Radio_TrackTrain_H(
    &(*outMessage).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*outMessage).sendingRBC,
    &(*inMessage).sendingRBC);
  for (i = 0; i < 30; i++) {
    tmp_1 = /* 1 */
      GetPacketId_InformationFilter_P(&(*inMessage).packets.PacketHeaders[i]);
    /* 1 */
    LevelFilter_InformationFilter_P(
      inPendingL1Transition,
      inPendingL2L3Transition,
      inPendingAckOfTrainData,
      inEmergencyStopAccepted,
      inLastAckTextMessageId,
      inPendingNTCTransition,
      inSPPAndGradientOnBoard,
      inMACoverNotFullLength,
      inLevel,
      (*inMessage).source,
      tmp_1,
      &_L114[i],
      &_L1[i]);
  }
  kcg_copy_CompressedPackets_T_Co(
    &(*outMessage).packets,
    &(*inMessage).packets);
  for (i = 0; i < 30; i++) {
    /* SetValidFlag */
    SetValidFlag_InformationFilter_(
      _L1[i],
      &(*inMessage).packets.PacketHeaders[i],
      &tmp[i]);
    *outStoreInTransitionBuffer = *outStoreInTransitionBuffer | _L114[i];
  }
  kcg_copy_Metadata_T_Common_Type(&(*outMessage).packets.PacketHeaders, &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FirstFilter_InformationFilter_P.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */
