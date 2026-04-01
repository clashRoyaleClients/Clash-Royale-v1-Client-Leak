class LogicClaimAchievementRewardCommand
{
public:

    _QWORD *__fastcall LogicClaimAchievementRewardCommand::LogicClaimAchievementRewardCommand(__int64 a1, __int64 a2)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      *result = &off_100469FB8;
      result[4] = a2;
      return result;
    }

    __int64 __fastcall LogicClaimAchievementRewardCommand::destruct(AllianceJoinRequestFailedMessage *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_QWORD *)this + 4) = 0;
      return result;
    }

    __int64 __fastcall LogicClaimAchievementRewardCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      unsigned int *PlayerAvatar; // x21
      __int64 result; // x0
      AreaEffectObject *v8; // x1
      int v9; // w22
      _BOOL4 IsAchievementRewardClaimed; // w0
      bool v11; // w8
      int v12; // w22
      #1146 *Home; // x0
      int *v14; // x1
      #1157 *AchievementManager; // x0
      __int64 GameListener; // x0
    
      PlayerAvatar = (unsigned int *)LogicGameMode::getPlayerAvatar(a2);
      result = 1;
      if ( PlayerAvatar )
      {
        v8 = *(AreaEffectObject **)(a1 + 32);
        if ( v8 )
        {
          if ( LogicClientAvatar::isAchievementCompleted((__int64)PlayerAvatar, v8) )
          {
            v9 = a3 & 2;
            IsAchievementRewardClaimed = LogicClientAvatar::getIsAchievementRewardClaimed(
                                           (__int64)PlayerAvatar,
                                           *(AreaEffectObject **)(a1 + 32));
            v11 = IsAchievementRewardClaimed;
            if ( IsAchievementRewardClaimed )
              result = 4;
            else
              result = 0;
            if ( v9 && !v11 )
            {
              v12 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 112LL);
              Home = (#1146 *)LogicGameMode::getHome(a2);
              LogicClientAvatar::xpGainHelper(PlayerAvatar, v12, Home);
              v14 = *(int **)(a1 + 32);
              if ( v14[27] >= 1 )
              {
                LogicClientAvatar::addFreeDiamonds((tween::Bounce *)PlayerAvatar, v14[27], (const char *)0x10);
                v14 = *(int **)(a1 + 32);
              }
              LogicClientAvatar::setAchievementRewardClaimed(
                (tween::Bounce *)PlayerAvatar,
                (const AreaEffectObject *)v14,
                1);
              AchievementManager = (#1157 *)LogicGameMode::getAchievementManager(a2);
              LogicAchievementManager::refreshStatus(AchievementManager);
              GameListener = LogicGameMode::getGameListener(a2);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 424LL))(
                GameListener,
                *(_QWORD *)(a1 + 32));
              return 0;
            }
          }
          else
          {
            return 3;
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicClaimAchievementRewardCommand::getCommandType(AllianceJoinRequestFailedMessage *this)
    {
      return 535;
    }

    __int64 __fastcall LogicClaimAchievementRewardCommand::encode(AreaEffectObject **this, #1226 *a2)
    {
      ByteStreamHelper::writeDataReference((int)a2, *(this + 4));
      return LogicCommand::encode((__int64)this, a2);
    }

    void __fastcall LogicClaimAchievementRewardCommand::decode(__int64 a1, ByteStreamHelper *a2, int a3)
    {
      *(_QWORD *)(a1 + 32) = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x3C, a3);
      LogicCommand::decode((_DWORD *)a1, a2);
    }

    void __fastcall LogicClaimAchievementRewardCommand::~LogicClaimAchievementRewardCommand(
            AllianceJoinRequestFailedMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicClaimAchievementRewardCommand::~LogicClaimAchievementRewardCommand(
            AllianceJoinRequestFailedMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicClaimAchievementRewardCommand
