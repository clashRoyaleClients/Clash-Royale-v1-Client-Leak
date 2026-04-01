class LogicScrollMessageFactory
{
public:

    LogicMessageFactory *__fastcall LogicScrollMessageFactory::LogicScrollMessageFactory(LogicMessageFactory *a1, char a2)
    {
      LogicMessageFactory *result; // x0
    
      result = LogicMessageFactory::LogicMessageFactory(a1);
      *(_QWORD *)result = off_100463290;
      *((_BYTE *)result + 8) = a2;
      return result;
    }

    __int64 __fastcall LogicScrollMessageFactory::destruct(LogicMessageFactory *a1)
    {
      __int64 result; // x0
    
      result = LogicMessageFactory::destruct(a1);
      *((_BYTE *)a1 + 8) = 0;
      return result;
    }

    HomeBattleReplayMessage *__fastcall LogicScrollMessageFactory::createMessageByType(__int64 a1, int a2)
    {
      HomeBattleReplayMessage *v2; // x19
    
      if ( *(_BYTE *)(a1 + 8) )
      {
        v2 = 0;
        if ( a2 <= 12902 )
        {
          if ( a2 == 10108 )
          {
    LABEL_4:
            v2 = (HomeBattleReplayMessage *)operator new(72);
            UdpCheckConnectionMessage::UdpCheckConnectionMessage(v2);
          }
          return v2;
        }
        if ( a2 <= 21901 )
        {
          if ( a2 == 12903 )
          {
    LABEL_10:
            v2 = (HomeBattleReplayMessage *)operator new(72);
            RequestSectorStateMessage::RequestSectorStateMessage(v2);
            return v2;
          }
          if ( a2 != 12904 )
            return v2;
    LABEL_27:
          v2 = (HomeBattleReplayMessage *)operator new(88);
          SectorCommandMessage::SectorCommandMessage(v2);
          return v2;
        }
        if ( a2 == 21902 )
        {
    LABEL_22:
          v2 = (HomeBattleReplayMessage *)operator new(112);
          SectorHeartbeatMessage::SectorHeartbeatMessage(v2);
          return v2;
        }
        if ( a2 != 21903 )
          return v2;
    LABEL_29:
        v2 = (HomeBattleReplayMessage *)operator new(72);
        SectorStateMessage::SectorStateMessage(v2);
        return v2;
      }
      v2 = 0;
      if ( a2 > 10149 )
      {
        if ( a2 > 25891 )
        {
          if ( a2 > 26006 )
          {
            if ( a2 == 26007 )
            {
              v2 = (HomeBattleReplayMessage *)operator new(104);
              LogicDeviceLinkDoneMessage::LogicDeviceLinkDoneMessage(v2);
            }
            else if ( a2 == 26008 )
            {
              v2 = (HomeBattleReplayMessage *)operator new(80);
              LogicDeviceLinkErrorMessage::LogicDeviceLinkErrorMessage(v2);
            }
          }
          else if ( a2 == 25892 )
          {
            v2 = (HomeBattleReplayMessage *)operator new(72);
            DisconnectedMessage::DisconnectedMessage(v2);
          }
          else if ( a2 == 26005 )
          {
            v2 = (HomeBattleReplayMessage *)operator new(168);
            LogicDeviceLinkResponseMessage::LogicDeviceLinkResponseMessage(v2);
          }
        }
        else if ( a2 > 24400 )
        {
          switch ( a2 )
          {
            case 24401:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceRankingListMessage::AllianceRankingListMessage(v2);
              break;
            case 24402:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceLocalRankingListMessage::AllianceLocalRankingListMessage(v2);
              break;
            case 24403:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AvatarRankingListMessage::AvatarRankingListMessage(v2);
              break;
            case 24404:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AvatarLocalRankingListMessage::AvatarLocalRankingListMessage(v2);
              break;
            case 24405:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              RoyalTVContentMessage::RoyalTVContentMessage(v2);
              break;
            case 24411:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AvatarStreamMessage::AvatarStreamMessage(v2);
              break;
            case 24412:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AvatarStreamEntryMessage::AvatarStreamEntryMessage(v2);
              break;
            case 24413:
              v2 = (HomeBattleReplayMessage *)operator new(88);
              BattleReportStreamMessage::BattleReportStreamMessage(v2);
              break;
            case 24418:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AvatarStreamEntryRemovedMessage::AvatarStreamEntryRemovedMessage(v2);
              break;
            default:
              return v2;
          }
        }
        else if ( a2 > 24300 )
        {
          switch ( a2 )
          {
            case 24301:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceDataMessage::AllianceDataMessage(v2);
              break;
            case 24302:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              AllianceJoinFailedMessage::AllianceJoinFailedMessage(v2);
              break;
            case 24303:
              v2 = (HomeBattleReplayMessage *)operator new(88);
              AllianceJoinOkMessage::AllianceJoinOkMessage(v2);
              break;
            case 24304:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              JoinableAllianceListMessage::JoinableAllianceListMessage(v2);
              break;
            case 24305:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceLeaveOkMessage::AllianceLeaveOkMessage(v2);
              break;
            case 24306:
              v2 = (HomeBattleReplayMessage *)operator new(88);
              ChangeAllianceMemberRoleOkMessage::ChangeAllianceMemberRoleOkMessage(v2);
              break;
            case 24307:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              KickAllianceMemberOkMessage::KickAllianceMemberOkMessage(v2);
              break;
            case 24308:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceMemberMessage::AllianceMemberMessage(v2);
              break;
            case 24309:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceMemberRemovedMessage::AllianceMemberRemovedMessage(v2);
              break;
            case 24310:
              v2 = (HomeBattleReplayMessage *)operator new(88);
              AllianceListMessage::AllianceListMessage(v2);
              break;
            case 24311:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceStreamMessage::AllianceStreamMessage(v2);
              break;
            case 24312:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceStreamEntryMessage::AllianceStreamEntryMessage(v2);
              break;
            case 24318:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AllianceStreamEntryRemovedMessage::AllianceStreamEntryRemovedMessage(v2);
              break;
            case 24319:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              AllianceJoinRequestOkMessage::AllianceJoinRequestOkMessage(v2);
              break;
            case 24320:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              AllianceJoinRequestFailedMessage::AllianceJoinRequestFailedMessage(v2);
              break;
            case 24321:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              AllianceInvitationSendFailedMessage::AllianceInvitationSendFailedMessage(v2);
              break;
            case 24322:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              AllianceInvitationSentOkMessage::AllianceInvitationSentOkMessage(v2);
              break;
            case 24324:
              v2 = (HomeBattleReplayMessage *)operator new(112);
              AllianceFullEntryUpdateMessage::AllianceFullEntryUpdateMessage(v2);
              break;
            case 24332:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              AllianceCreateFailedMessage::AllianceCreateFailedMessage(v2);
              break;
            case 24333:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              AllianceChangeFailedMessage::AllianceChangeFailedMessage(v2);
              break;
            default:
              return v2;
          }
        }
        else if ( a2 > 24200 )
        {
          if ( a2 > 24213 )
          {
            if ( a2 == 24214 )
            {
              v2 = (HomeBattleReplayMessage *)operator new(72);
              FacebookAccountUnboundMessage::FacebookAccountUnboundMessage(v2);
            }
          }
          else if ( a2 > 24210 )
          {
            if ( a2 == 24211 )
            {
              v2 = (HomeBattleReplayMessage *)operator new(80);
              GamecenterAccountBoundMessage::GamecenterAccountBoundMessage(v2);
            }
            else if ( a2 == 24212 )
            {
              v2 = (HomeBattleReplayMessage *)operator new(104);
              GamecenterAccountAlreadyBoundMessage::GamecenterAccountAlreadyBoundMessage(v2);
            }
          }
          else if ( a2 == 24201 )
          {
            v2 = (HomeBattleReplayMessage *)operator new(72);
            FacebookAccountBoundMessage::FacebookAccountBoundMessage(v2);
          }
          else if ( a2 == 24202 )
          {
            v2 = (HomeBattleReplayMessage *)operator new(104);
            FacebookAccountAlreadyBoundMessage::FacebookAccountAlreadyBoundMessage(v2);
          }
        }
        else if ( a2 > 24100 )
        {
          switch ( a2 )
          {
            case 24101:
              v2 = (HomeBattleReplayMessage *)operator new(96);
              OwnHomeDataMessage::OwnHomeDataMessage(v2);
              break;
            case 24102:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              OwnAvatarDataMessage::OwnAvatarDataMessage(v2);
              break;
            case 24104:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              OutOfSyncMessage::OutOfSyncMessage(v2);
              break;
            case 24106:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              StopHomeLogicMessage::StopHomeLogicMessage(v2);
              break;
            case 24107:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              MatchmakeInfoMessage::MatchmakeInfoMessage(v2);
              break;
            case 24108:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              MatchmakeFailedMessage::MatchmakeFailedMessage(v2);
              break;
            case 24111:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              AvailableServerCommandMessage::AvailableServerCommandMessage(v2);
              break;
            case 24112:
              v2 = (HomeBattleReplayMessage *)operator new(120);
              UdpConnectionInfoMessage::UdpConnectionInfoMessage(v2);
              break;
            case 24113:
              v2 = (HomeBattleReplayMessage *)operator new(96);
              VisitedHomeDataMessage::VisitedHomeDataMessage(v2);
              break;
            case 24114:
              v2 = (HomeBattleReplayMessage *)operator new(88);
              HomeBattleReplayDataMessage::HomeBattleReplayDataMessage(v2);
              break;
            case 24115:
              v2 = (HomeBattleReplayMessage *)operator new(80);
              ServerErrorMessage::ServerErrorMessage(v2);
              break;
            case 24116:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              HomeBattleReplayFailedMessage::HomeBattleReplayFailedMessage(v2);
              break;
            case 24121:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              ChallengeFailedMessage::ChallengeFailedMessage(v2);
              break;
            case 24124:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              CancelChallengeDoneMessage::CancelChallengeDoneMessage(v2);
              break;
            case 24125:
              v2 = (HomeBattleReplayMessage *)operator new(72);
              CancelMatchmakeDoneMessage::CancelMatchmakeDoneMessage(v2);
              break;
            default:
              return v2;
          }
        }
        else if ( a2 > 20102 )
        {
          if ( a2 > 20116 )
          {
            if ( a2 > 20150 )
            {
              if ( a2 > 20299 )
              {
                if ( a2 > 21901 )
                {
                  if ( a2 <= 22951 )
                  {
                    if ( a2 == 21902 )
                      goto LABEL_22;
                    if ( a2 != 21903 )
                      return v2;
                    goto LABEL_29;
                  }
                  if ( a2 == 22952 )
                  {
                    v2 = (HomeBattleReplayMessage *)operator new(80);
                    BattleEventMessage::BattleEventMessage(v2);
                  }
                  else if ( a2 == 22957 )
                  {
                    v2 = (HomeBattleReplayMessage *)operator new(72);
                    PvpMatchmakeNotificationMessage::PvpMatchmakeNotificationMessage(v2);
                  }
                }
                else
                {
                  switch ( a2 )
                  {
                    case 20300:
                      v2 = (HomeBattleReplayMessage *)operator new(88);
                      AvatarNameCheckResponseMessage::AvatarNameCheckResponseMessage(v2);
                      break;
                    case 20801:
                      v2 = (HomeBattleReplayMessage *)operator new(72);
                      OpponentLeftMatchNotificationMessage::OpponentLeftMatchNotificationMessage(v2);
                      break;
                    case 20802:
                      v2 = (HomeBattleReplayMessage *)operator new(72);
                      OpponentRejoinsMatchNotificationMessage::OpponentRejoinsMatchNotificationMessage(v2);
                      break;
                  }
                }
              }
              else if ( a2 > 20204 )
              {
                if ( a2 > 20206 )
                {
                  if ( a2 == 20207 )
                  {
                    v2 = (HomeBattleReplayMessage *)operator new(72);
                    AllianceOnlineStatusUpdatedMessage::AllianceOnlineStatusUpdatedMessage(v2);
                  }
                  else if ( a2 == 20225 )
                  {
                    v2 = (HomeBattleReplayMessage *)operator new(152);
                    BattleResultMessage::BattleResultMessage(v2);
                  }
                }
                else if ( a2 == 20205 )
                {
                  v2 = (HomeBattleReplayMessage *)operator new(80);
                  AvatarNameChangeFailedMessage::AvatarNameChangeFailedMessage(v2);
                }
                else
                {
                  v2 = (HomeBattleReplayMessage *)operator new(80);
                  AvatarOnlineStatusUpdated::AvatarOnlineStatusUpdated(v2);
                }
              }
              else if ( a2 == 20151 )
              {
                v2 = (HomeBattleReplayMessage *)operator new(128);
                AppleBillingProcessedByServerMessage::AppleBillingProcessedByServerMessage(v2);
              }
              else if ( a2 == 20161 )
              {
                v2 = (HomeBattleReplayMessage *)operator new(72);
                ShutdownStartedMessage::ShutdownStartedMessage(v2);
              }
            }
            else if ( a2 >= 20118 )
            {
              if ( a2 > 20131 )
              {
                if ( a2 == 20132 )
                {
                  v2 = (HomeBattleReplayMessage *)operator new(88);
                  UnlockAccountOkMessage::UnlockAccountOkMessage(v2);
                }
                else if ( a2 == 20133 )
                {
                  v2 = (HomeBattleReplayMessage *)operator new(72);
                  UnlockAccountFailedMessage::UnlockAccountFailedMessage(v2);
                }
              }
              else if ( a2 == 20118 )
              {
                v2 = (HomeBattleReplayMessage *)operator new(72);
                ChatAccountBanStatusMessage::ChatAccountBanStatusMessage(v2);
              }
              else if ( a2 == 20121 )
              {
                v2 = (HomeBattleReplayMessage *)operator new(104);
                BillingRequestFailedMessage::BillingRequestFailedMessage(v2);
              }
            }
            else
            {
              v2 = (HomeBattleReplayMessage *)operator new(80);
              ReportUserStatusMessage::ReportUserStatusMessage(v2);
            }
          }
          else
          {
            switch ( a2 )
            {
              case 20103:
                v2 = (HomeBattleReplayMessage *)operator new(120);
                LoginFailedMessage::LoginFailedMessage(v2);
                break;
              case 20104:
                v2 = (HomeBattleReplayMessage *)operator new(184);
                LoginOkMessage::LoginOkMessage(v2);
                break;
              case 20105:
                v2 = (HomeBattleReplayMessage *)operator new(88);
                FriendListMessage::FriendListMessage(v2);
                break;
              case 20108:
                v2 = (HomeBattleReplayMessage *)operator new(72);
                KeepAliveServerMessage::KeepAliveServerMessage(v2);
                break;
              default:
                return v2;
            }
          }
        }
        else if ( a2 > 12902 )
        {
          if ( a2 > 14100 )
          {
            if ( a2 > 14200 )
            {
              if ( a2 > 14400 )
              {
                if ( a2 > 14417 )
                {
                  if ( a2 > 16001 )
                  {
                    if ( a2 == 16002 )
                    {
                      v2 = (HomeBattleReplayMessage *)operator new(96);
                      LogicDeviceLinkEnterCodeMessage::LogicDeviceLinkEnterCodeMessage(v2);
                    }
                    else if ( a2 == 16003 )
                    {
                      v2 = (HomeBattleReplayMessage *)operator new(152);
                      LogicDeviceLinkConfirmYesMessage::LogicDeviceLinkConfirmYesMessage(v2);
                    }
                  }
                  else if ( a2 == 14418 )
                  {
                    v2 = (HomeBattleReplayMessage *)operator new(80);
                    RemoveAvatarStreamEntryMessage::RemoveAvatarStreamEntryMessage(v2);
                  }
                  else if ( a2 == 14600 )
                  {
                    v2 = (HomeBattleReplayMessage *)operator new(80);
                    AvatarNameCheckRequestMessage::AvatarNameCheckRequestMessage(v2);
                  }
                }
                else
                {
                  switch ( a2 )
                  {
                    case 14401:
                      v2 = (HomeBattleReplayMessage *)operator new(88);
                      AskForAllianceRankingListMessage::AskForAllianceRankingListMessage(v2);
                      break;
                    case 14402:
                      v2 = (HomeBattleReplayMessage *)operator new(72);
                      AskForTVContentMessage::AskForTVContentMessage(v2);
                      break;
                    case 14403:
                      v2 = (HomeBattleReplayMessage *)operator new(80);
                      AskForAvatarRankingListMessage::AskForAvatarRankingListMessage(v2);
                      break;
                    case 14404:
                      v2 = (HomeBattleReplayMessage *)operator new(80);
                      AskForAvatarLocalRankingListMessage::AskForAvatarLocalRankingListMessage(v2);
                      break;
                    case 14405:
                      v2 = (HomeBattleReplayMessage *)operator new(72);
                      AskForAvatarStreamMessage::AskForAvatarStreamMessage(v2);
                      break;
                    case 14406:
                      v2 = (HomeBattleReplayMessage *)operator new(80);
                      AskForBattleReplayStreamMessage::AskForBattleReplayStreamMessage(v2);
                      break;
                    default:
                      return v2;
                  }
                }
              }
              else if ( a2 > 14300 )
              {
                switch ( a2 )
                {
                  case 14301:
                    v2 = (HomeBattleReplayMessage *)operator new(112);
                    CreateAllianceMessage::CreateAllianceMessage(v2);
                    break;
                  case 14302:
                    v2 = (HomeBattleReplayMessage *)operator new(80);
                    AskForAllianceDataMessage::AskForAllianceDataMessage(v2);
                    break;
                  case 14303:
                    v2 = (HomeBattleReplayMessage *)operator new(72);
                    AskForJoinableAlliancesListMessage::AskForJoinableAlliancesListMessage(v2);
                    break;
                  case 14304:
                    v2 = (HomeBattleReplayMessage *)operator new(72);
                    AskForAllianceStreamMessage::AskForAllianceStreamMessage(v2);
                    break;
                  case 14305:
                    v2 = (HomeBattleReplayMessage *)operator new(88);
                    JoinAllianceMessage::JoinAllianceMessage(v2);
                    break;
                  case 14306:
                    v2 = (HomeBattleReplayMessage *)operator new(88);
                    ChangeAllianceMemberRoleMessage::ChangeAllianceMemberRoleMessage(v2);
                    break;
                  case 14307:
                    v2 = (HomeBattleReplayMessage *)operator new(88);
                    KickAllianceMemberMessage::KickAllianceMemberMessage(v2);
                    break;
                  case 14308:
                    v2 = (HomeBattleReplayMessage *)operator new(72);
                    LeaveAllianceMessage::LeaveAllianceMessage(v2);
                    break;
                  case 14310:
                    v2 = (HomeBattleReplayMessage *)operator new(88);
                    DonateAllianceUnitMessage::DonateAllianceUnitMessage(v2);
                    break;
                  case 14315:
                    v2 = (HomeBattleReplayMessage *)operator new(80);
                    ChatToAllianceStreamMessage::ChatToAllianceStreamMessage(v2);
                    break;
                  case 14316:
                    v2 = (HomeBattleReplayMessage *)operator new(104);
                    ChangeAllianceSettingsMessage::ChangeAllianceSettingsMessage(v2);
                    break;
                  case 14317:
                    v2 = (HomeBattleReplayMessage *)operator new(96);
                    RequestJoinAllianceMessage::RequestJoinAllianceMessage(v2);
                    break;
                  case 14318:
                    v2 = (HomeBattleReplayMessage *)operator new(96);
                    SelectSpellsFromCoOpenMessage::SelectSpellsFromCoOpenMessage(v2);
                    break;
                  case 14319:
                    v2 = (HomeBattleReplayMessage *)operator new(80);
                    OfferChestForCoOpenMessage::OfferChestForCoOpenMessage(v2);
                    break;
                  case 14321:
                    v2 = (HomeBattleReplayMessage *)operator new(96);
                    RespondToAllianceJoinRequestMessage::RespondToAllianceJoinRequestMessage(v2);
                    break;
                  case 14322:
                    v2 = (HomeBattleReplayMessage *)operator new(80);
                    SendAllianceInvitationMessage::SendAllianceInvitationMessage(v2);
                    break;
                  case 14323:
                    v2 = (HomeBattleReplayMessage *)operator new(88);
                    JoinAllianceUsingInvitationMessage::JoinAllianceUsingInvitationMessage(v2);
                    break;
                  case 14324:
                    v2 = (HomeBattleReplayMessage *)operator new(112);
                    SearchAlliancesMessage::SearchAlliancesMessage(v2);
                    break;
                  case 14330:
                    v2 = (HomeBattleReplayMessage *)operator new(88);
                    SendAllianceMailMessage::SendAllianceMailMessage(v2);
                    break;
                  default:
                    return v2;
                }
              }
              else
              {
                switch ( a2 )
                {
                  case 14201:
                    v2 = (HomeBattleReplayMessage *)operator new(96);
                    BindFacebookAccountMessage::BindFacebookAccountMessage(v2);
                    break;
                  case 14211:
                    v2 = (HomeBattleReplayMessage *)operator new(72);
                    UnbindFacebookAccountMessage::UnbindFacebookAccountMessage(v2);
                    break;
                  case 14212:
                    v2 = (HomeBattleReplayMessage *)operator new(152);
                    BindGamecenterAccountMessage::BindGamecenterAccountMessage(v2);
                    break;
                }
              }
            }
            else
            {
              switch ( a2 )
              {
                case 14101:
                  v2 = (HomeBattleReplayMessage *)operator new(72);
                  GoHomeMessage::GoHomeMessage(v2);
                  break;
                case 14102:
                  v2 = (HomeBattleReplayMessage *)operator new(104);
                  EndClientTurnMessage::EndClientTurnMessage(v2);
                  break;
                case 14104:
                  v2 = (HomeBattleReplayMessage *)operator new(80);
                  StartMissionMessage::StartMissionMessage(v2);
                  break;
                case 14105:
                  v2 = (HomeBattleReplayMessage *)operator new(88);
                  HomeLogicStoppedMessage::HomeLogicStoppedMessage(v2);
                  break;
                case 14107:
                  v2 = (HomeBattleReplayMessage *)operator new(72);
                  CancelMatchmakeMessage::CancelMatchmakeMessage(v2);
                  break;
                case 14108:
                  v2 = (HomeBattleReplayMessage *)operator new(80);
                  ChangeHomeNameMessage::ChangeHomeNameMessage(v2);
                  break;
                case 14113:
                  v2 = (HomeBattleReplayMessage *)operator new(80);
                  VisitHomeMessage::VisitHomeMessage(v2);
                  break;
                case 14114:
                  v2 = (HomeBattleReplayMessage *)operator new(96);
                  HomeBattleReplayMessage::HomeBattleReplayMessage(v2);
                  break;
                case 14117:
                  v2 = (HomeBattleReplayMessage *)operator new(88);
                  HomeBattleReplayViewedMessage::HomeBattleReplayViewedMessage(v2);
                  break;
                case 14120:
                  v2 = (HomeBattleReplayMessage *)operator new(80);
                  AcceptChallengeMessage::AcceptChallengeMessage(v2);
                  break;
                case 14123:
                  v2 = (HomeBattleReplayMessage *)operator new(72);
                  CancelChallengeMessage::CancelChallengeMessage(v2);
                  break;
                default:
                  return v2;
              }
            }
          }
          else
          {
            if ( a2 <= 12904 )
            {
              if ( a2 == 12903 )
                goto LABEL_10;
              goto LABEL_27;
            }
            if ( a2 == 12905 )
            {
              v2 = (HomeBattleReplayMessage *)operator new(72);
              GetCurrentBattleReplayDataMessage::GetCurrentBattleReplayDataMessage(v2);
            }
            else if ( a2 == 12951 )
            {
              v2 = (HomeBattleReplayMessage *)operator new(80);
              SendBattleEventMessage::SendBattleEventMessage(v2);
            }
          }
        }
        else if ( a2 > 10511 )
        {
          if ( a2 == 10512 )
          {
            v2 = (HomeBattleReplayMessage *)operator new(80);
            AskForPlayingGamecenterFriendsMessage::AskForPlayingGamecenterFriendsMessage(v2);
          }
          else if ( a2 == 10513 )
          {
            v2 = (HomeBattleReplayMessage *)operator new(80);
            AskForPlayingFacebookFriendsMessage::AskForPlayingFacebookFriendsMessage(v2);
          }
        }
        else if ( a2 == 10150 )
        {
          v2 = (HomeBattleReplayMessage *)operator new(184);
          AppleBillingRequestMessage::AppleBillingRequestMessage(v2);
        }
        else if ( a2 == 10212 )
        {
          v2 = (HomeBattleReplayMessage *)operator new(88);
          ChangeAvatarNameMessage::ChangeAvatarNameMessage(v2);
        }
      }
      else
      {
        switch ( a2 )
        {
          case 10101:
            v2 = (HomeBattleReplayMessage *)operator new(296);
            LoginMessage::LoginMessage(v2);
            break;
          case 10107:
            v2 = (HomeBattleReplayMessage *)operator new(72);
            ClientCapabilitiesMessage::ClientCapabilitiesMessage(v2);
            break;
          case 10108:
            goto LABEL_4;
          case 10112:
            v2 = (HomeBattleReplayMessage *)operator new(72);
            AuthenticationCheckMessage::AuthenticationCheckMessage(v2);
            break;
          case 10113:
            v2 = (HomeBattleReplayMessage *)operator new(88);
            SetDeviceTokenMessage::SetDeviceTokenMessage(v2);
            break;
          case 10116:
            v2 = (HomeBattleReplayMessage *)operator new(72);
            ResetAccountMessage::ResetAccountMessage(v2);
            break;
          case 10117:
            v2 = (HomeBattleReplayMessage *)operator new(80);
            ReportUserMessage::ReportUserMessage(v2);
            break;
          case 10118:
            v2 = (HomeBattleReplayMessage *)operator new(88);
            AccountSwitchedMessage::AccountSwitchedMessage(v2);
            break;
          case 10121:
            v2 = (HomeBattleReplayMessage *)operator new(96);
            UnlockAccountMessage::UnlockAccountMessage(v2);
            break;
          default:
            return v2;
        }
      }
      return v2;
    }

    void LogicScrollMessageFactory::~LogicScrollMessageFactory()
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicScrollMessageFactory::~LogicScrollMessageFactory(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicScrollMessageFactory
