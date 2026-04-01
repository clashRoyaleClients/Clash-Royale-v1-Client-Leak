class LogicRefreshAchievementsCommand
{
public:

    _QWORD *__fastcall LogicRefreshAchievementsCommand::LogicRefreshAchievementsCommand(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      *result = &off_100469D60;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicRefreshAchievementsCommand::destruct(__int64 result)
    {
      return LogicCommand::destruct(result);
    }

    __int64 __fastcall LogicRefreshAchievementsCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      #1157 *AchievementManager; // x0
    
      if ( !LogicGameMode::getPlayerAvatar(a2) )
        return 1;
      if ( (a3 & 2) != 0 )
      {
        AchievementManager = (#1157 *)LogicGameMode::getAchievementManager(a2);
        LogicAchievementManager::refreshStatus(AchievementManager);
      }
      return 0;
    }

    __int64 LogicRefreshAchievementsCommand::getCommandType()
    {
      return 538;
    }

    // attributes: thunk
    __int64 __fastcall LogicRefreshAchievementsCommand::encode(__int64 a1, #1317 *a2)
    {
      return LogicCommand::encode(a1, a2);
    }

    // attributes: thunk
    void __fastcall LogicRefreshAchievementsCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      LogicCommand::decode(a1, a2);
    }

    _QWORD *__fastcall LogicRefreshAchievementsCommand::~LogicRefreshAchievementsCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicRefreshAchievementsCommand::~LogicRefreshAchievementsCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicRefreshAchievementsCommand
