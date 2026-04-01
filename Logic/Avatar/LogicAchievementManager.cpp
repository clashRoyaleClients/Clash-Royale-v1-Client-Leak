class LogicAchievementManager
{
public:

    void __fastcall LogicAchievementManager::LogicAchievementManager(LogicAchievementManager *this, UnlockAccountPopup *a2)
    {
      *(_QWORD *)this = a2;
    }

    _QWORD *__fastcall LogicAchievementManager::destruct(_QWORD *this)
    {
      *this = 0;
      return this;
    }

    __int64 __fastcall LogicAchievementManager::refreshStatus(LeaderboardPopup *this)
    {
      __int64 result; // x0
      __int64 Table; // x20
      tween::Bounce *PlayerAvatar; // x21
      __int64 v5; // x22
      __int64 v6; // x23
      int v7; // w8
      __int64 Home; // x0
      int TotalSpellCount; // w3
      __int64 v10; // x0
    
      result = LogicGameMode::getState(*(_QWORD *)this);
      if ( (_DWORD)result != 4 )
      {
        Table = LogicDataTables::getTable(60);
        PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)this);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
        if ( (int)result >= 1 )
        {
          v5 = 0;
          do
          {
            v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v5);
            v7 = *(_DWORD *)(v6 + 100);
            switch ( v7 )
            {
              case 2:
                TotalSpellCount = *(_DWORD *)(LogicClientAvatar::getArena(PlayerAvatar) + 144);
                break;
              case 3:
                Home = LogicGameMode::getHome(*(UnlockAccountPopup **)this);
                TotalSpellCount = LogicClientHome::getTotalSpellCount(Home);
                break;
              case 4:
                v10 = LogicGameMode::getHome(*(UnlockAccountPopup **)this);
                TotalSpellCount = (int)LogicClientHome::getReplaySeenCount(v10) > 0;
                break;
              default:
                TotalSpellCount = 0;
                break;
            }
            LogicAchievementManager::refreshAchievementProgress(this, PlayerAvatar, (const #1351 *)v6, TotalSpellCount);
            v5 = (unsigned int)(v5 + 1);
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
          }
          while ( (int)v5 < (int)result );
        }
      }
      return result;
    }

    __int64 __fastcall LogicAchievementManager::refreshAchievementProgress(
            LeaderboardPopup *this,
            tween::Bounce *a2,
            const #1351 *a3,
            LogicMath *a4)
    {
      __int64 result; // x0
      int AchievementProgress; // w22
      int v10; // w2
      int v11; // w2
      LogicMath *v12; // x23
      int v13; // w23
      int v14; // w22
      __int64 (*v15)(void); // x3
    
      result = LogicGameMode::getState(*(_QWORD *)this);
      if ( (_DWORD)result != 4 )
      {
        AchievementProgress = LogicClientAvatar::getAchievementProgress((__int64)a2, a3);
        v12 = (LogicMath *)LogicMath::min(a4, 1000000000, v10);
        if ( AchievementProgress < (int)v12 )
          LogicClientAvatar::setAchievementProgress(a2, a3, (int)v12);
        result = LogicMath::min(v12, *((_DWORD *)a3 + 26), v11);
        v13 = result;
        if ( AchievementProgress < (int)result )
        {
          v14 = *((_DWORD *)a3 + 26);
          result = LogicGameMode::getGameListener(*(UnlockAccountPopup **)this);
          if ( v13 == v14 )
          {
            if ( !result )
              return result;
            v15 = *(__int64 (**)(void))(*(_QWORD *)LogicGameMode::getGameListener(*(UnlockAccountPopup **)this) + 408LL);
          }
          else
          {
            if ( !result )
              return result;
            v15 = *(__int64 (**)(void))(*(_QWORD *)LogicGameMode::getGameListener(*(UnlockAccountPopup **)this) + 416LL);
          }
          return v15();
        }
      }
      return result;
    }

    __int64 __fastcall LogicAchievementManager::updateAchievementProgress(
            LeaderboardPopup *this,
            tween::Bounce *a2,
            int a3,
            int a4)
    {
      __int64 Table; // x23
      __int64 result; // x0
      __int64 v10; // x24
      AreaEffectObject *v11; // x25
      int AchievementProgress; // w0
    
      Table = LogicDataTables::getTable(60);
      result = LogicGameMode::getState(*(_QWORD *)this);
      if ( (_DWORD)result != 4 )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
        if ( (int)result >= 1 )
        {
          v10 = 0;
          do
          {
            v11 = (AreaEffectObject *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v10);
            if ( *((_DWORD *)v11 + 25) == a4 )
            {
              AchievementProgress = LogicClientAvatar::getAchievementProgress((__int64)a2, v11);
              LogicAchievementManager::refreshAchievementProgress(
                this,
                a2,
                v11,
                (LogicMath *)(unsigned int)(AchievementProgress + a3));
            }
            v10 = (unsigned int)(v10 + 1);
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
          }
          while ( (int)v10 < (int)result );
        }
      }
      return result;
    }

}; // end class LogicAchievementManager
