class LogicChest
{
public:

    void __fastcall LogicChest::LogicChest(LogicChest *this)
    {
      *((_DWORD *)this + 4) = 0;
      *(_QWORD *)((char *)this + 20) = 0xFFFFFFFFLL;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      *((_BYTE *)this + 42) = 0;
      *((_WORD *)this + 20) = 0;
      *((_QWORD *)this + 4) = 0;
    }

    void __fastcall LogicChest::LogicChest(LogicChest *this, const LogicRefreshAchievementsCommand *a2)
    {
      *((_DWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *(_QWORD *)((char *)this + 20) = 0xFFFFFFFFLL;
      *(_QWORD *)this = 0;
      *((_BYTE *)this + 42) = 0;
      *((_WORD *)this + 20) = 0;
      *((_QWORD *)this + 4) = 0;
      *(_QWORD *)this = a2;
      if ( (int)LogicTreasureChestData::getTotalTimeTakenSeconds((__int64)a2) <= 0 )
        *((_BYTE *)this + 41) = 1;
    }

    void __fastcall LogicChest::destruct(LogicSpawnPointData *this)
    {
      __int64 v2; // x0
      void *v3; // x0
      void **v4; // x0
      void **v5; // x20
    
      v2 = *((_QWORD *)this + 1);
      if ( v2 )
      {
        LogicTimer::destruct(v2);
        v3 = (void *)*((_QWORD *)this + 1);
        if ( v3 )
          operator delete(v3);
        *((_QWORD *)this + 1) = 0;
      }
      v5 = (void **)((char *)this + 32);
      v4 = (void **)*((_QWORD *)this + 4);
      if ( v4 )
      {
        LogicReward::destruct(v4);
        if ( *v5 )
          operator delete(*v5);
        *v5 = 0;
      }
      *((_DWORD *)this + 4) = 0;
      *(_QWORD *)((char *)this + 20) = 0xFFFFFFFFLL;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      *((_BYTE *)this + 42) = 0;
      *((_WORD *)this + 20) = 0;
      *v5 = 0;
    }

    __int64 __fastcall LogicChest::encode(__int64 a1, __int64 a2)
    {
      void (__fastcall *v4)(__int64, __int64); // x8
    
      ByteStreamHelper::writeDataReference(a2, *(AreaEffectObject **)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 41));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 40));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 42));
      v4 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)(a1 + 8) )
      {
        v4(a2, 1);
        LogicTimer::encode(*(unsigned int **)(a1 + 8), a2);
      }
      else
      {
        v4(a2, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 16));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 24));
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 20));
    }

    __int64 __fastcall LogicChest::decode(LogicSpawnPointData *this, #1225 *a2)
    {
      __int64 DataReference; // x0
      const char *v5; // x2
      long double v6; // q0
      __int64 v7; // x0
      void *v8; // x0
      LogicTimer *v9; // x21
      __int64 result; // x0
    
      DataReference = ByteStreamHelper::readDataReference((__int64)a2, 19);
      *(_QWORD *)this = DataReference;
      *(__n128 *)&v6 = Debugger::doAssert((Debugger *)(DataReference != 0), (bool)"", v5);
      v7 = *((_QWORD *)this + 1);
      if ( v7 )
      {
        LogicTimer::destruct(v7);
        v8 = (void *)*((_QWORD *)this + 1);
        if ( v8 )
          operator delete(v8);
        *((_QWORD *)this + 1) = 0;
      }
      *((_BYTE *)this + 41) = (*(__int64 (__fastcall **)(#1225 *, long double))(*(_QWORD *)a2 + 136LL))(a2, v6);
      *((_BYTE *)this + 40) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 42) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        v9 = (LogicTimer *)operator new(12);
        LogicTimer::LogicTimer(v9);
        *((_QWORD *)this + 1) = v9;
        LogicTimer::decode(v9, a2);
      }
      *((_DWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 6) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 5) = result;
      return result;
    }

    LogicChestOrderData *__fastcall LogicChest::tick(LogicChestOrderData **a1)
    {
      LogicChestOrderData *result; // x0
    
      result = a1[1];
      if ( result )
      {
        LogicTimer::tick(result);
        result = (LogicChestOrderData *)LogicTimer::isFinished(a1[1]);
        if ( (_DWORD)result )
          return (LogicChestOrderData *)LogicChest::unlockDone((LogicChest *)a1);
      }
      return result;
    }

    void __fastcall LogicChest::unlockDone(__int64 a1)
    {
      __int64 v2; // x0
      void *v3; // x0
    
      *(_BYTE *)(a1 + 41) = 1;
      v2 = *(_QWORD *)(a1 + 8);
      if ( v2 )
      {
        LogicTimer::destruct(v2);
        v3 = *(void **)(a1 + 8);
        if ( v3 )
          operator delete(v3);
        *(_QWORD *)(a1 + 8) = 0;
      }
    }

    __int64 __fastcall LogicChest::getTreasureChestData(LogicSpawnPointData *this)
    {
      return *(_QWORD *)this;
    }

    __int64 __fastcall LogicChest::setSlotIndex(__int64 this, int a2)
    {
      *(_DWORD *)(this + 20) = a2;
      return this;
    }

    bool __fastcall LogicChest::isUnlocking(LogicSpawnPointData *this)
    {
      return *((_QWORD *)this + 1) != 0;
    }

    bool __fastcall LogicChest::canStartUnlocking(LogicSpawnPointData *this)
    {
      return !*((_QWORD *)this + 1) && *((_BYTE *)this + 41) == 0;
    }

    _DWORD *__fastcall LogicChest::startUnlocking(__int64 a1, const char *a2)
    {
      int v2; // w19
      LogicTimer *v5; // x21
      int TotalTimeTakenSeconds; // w1
    
      v2 = (int)a2;
      if ( *(_QWORD *)(a1 + 8) || *(_BYTE *)(a1 + 41) )
        return (_DWORD *)Debugger::warning((__siginfo *)"LogicChest::startExporing() canStartExploring()==false", a2);
      v5 = (LogicTimer *)operator new(12);
      LogicTimer::LogicTimer(v5);
      *(_QWORD *)(a1 + 8) = v5;
      TotalTimeTakenSeconds = LogicTreasureChestData::getTotalTimeTakenSeconds(*(_QWORD *)a1);
      return LogicTimer::startTimer(*(_DWORD **)(a1 + 8), TotalTimeTakenSeconds, v2);
    }

    void __fastcall LogicChest::fastForward(__int64 a1, NotificationBadge *a2, int a3)
    {
      LogicChestOrderData *v4; // x0
    
      v4 = *(LogicChestOrderData **)(a1 + 8);
      if ( v4 )
      {
        LogicTimer::fastForward(v4, a2, a3);
        if ( LogicTimer::isFinished(*(LogicChestOrderData **)(a1 + 8)) )
          LogicChest::unlockDone(a1);
      }
    }

    __int64 __fastcall LogicChest::getUnlockingSecondsLeft(__int64 a1, __int64 a2, int a3)
    {
      LogicChestOrderData *v3; // x0
    
      v3 = *(LogicChestOrderData **)(a1 + 8);
      if ( v3 )
        return LogicTimer::getRemainingSeconds(v3, a2, a3);
      else
        return 0;
    }

    __int64 __fastcall LogicChest::isUnlocked(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 41);
    }

    __int64 __fastcall LogicChest::speedUpUnlocking(__int64 a1)
    {
      LogicChest::unlockDone(a1);
      return 1;
    }

    __int64 __fastcall LogicChest::setClaimed(__int64 result, UnlockAccountPopup *a2, __int64 a3)
    {
      __int64 v5; // x20
      CoOpenStreamEntry *Home; // x22
      __int64 v7; // x0
      __int64 GameListener; // x0
    
      v5 = result;
      *(_BYTE *)(result + 40) = 1;
      if ( a2 )
      {
        Home = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
        LogicClientHome::autoOpenChestsIfNeeded(Home);
        LogicClientHome::setClaimingReward(Home, 1);
        v7 = LogicClientHome::getChangeListener(Home);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v5, a3);
        GameListener = LogicGameMode::getGameListener(a2);
        return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)GameListener + 192LL))(
                 GameListener,
                 v5,
                 a3);
      }
      return result;
    }

    __int64 __fastcall LogicChest::setSource(__int64 result, int a2)
    {
      *(_DWORD *)(result + 24) = a2;
      return result;
    }

    __int64 __fastcall LogicChest::getSource(__int64 a1)
    {
      return *(unsigned int *)(a1 + 24);
    }

    __int64 __fastcall LogicChest::setNew(__int64 result, char a2)
    {
      *(_BYTE *)(result + 42) = a2;
      return result;
    }

    __int64 __fastcall LogicChest::isNew(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 42);
    }

}; // end class LogicChest
