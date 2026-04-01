class LogicGameMode
{
public:

    __int64 __fastcall LogicGameMode::LogicGameMode(__int64 a1, int a2)
    {
      __int64 v4; // x19
      LeaderboardPopup *v5; // x28
      LogicGameObjectManager *v6; // x26
      LogicBattle *v7; // x26
      _QWORD *v8; // x25
      LogicSummoner *v9; // x25
      const char *v10; // x2
      long double v11; // q0
    
      *(_QWORD *)(a1 + 40) = 0;
      v4 = a1 + 40;
      *(_QWORD *)(a1 + 48) = 0;
      LogicTime::LogicTime((LogicTime *)(a1 + 96));
      LogicRandom::LogicRandom((LogicRandom *)(a1 + 160));
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      memset((void *)(a1 + 264), 0, 0x70u);
      LogicTutorialManager::LogicTutorialManager((LogicTutorialManager *)(a1 + 392));
      LogicGameMode::initializeMembers((LogicGameMode *)a1);
      LogicArrayList<bool>::add(v4, (char *)(a1 + 424));
      *(_BYTE *)(a1 + 424) = 1;
      v5 = (LeaderboardPopup *)operator new(8);
      LogicAchievementManager::LogicAchievementManager(v5, (UnlockAccountPopup *)a1);
      *(_QWORD *)(a1 + 72) = v5;
      LogicTutorialManager::init((LogicTutorialManager *)(a1 + 392), (LogicGameMode *)a1);
      if ( a2 )
      {
        v6 = (LogicGameObjectManager *)operator new(80);
        LogicGameObjectManager::LogicGameObjectManager(v6, (UnlockAccountPopup *)a1);
        *(_QWORD *)(a1 + 64) = v6;
        v7 = (LogicBattle *)operator new(296);
        LogicBattle::LogicBattle(v7, (UnlockAccountPopup *)a1);
        *(_QWORD *)(a1 + 168) = v7;
      }
      LogicGameMode::assertLogicChangesAllowed(a1, &ASSERT_SET_RANDOM_SEED);
      *(_DWORD *)(a1 + 156) = 1131;
      LogicRandom::setIteratedRandomSeed((LogicRandom *)(a1 + 160), 1131);
      v8 = (_QWORD *)operator new(32);
      LogicCommandManager::LogicCommandManager(v8, a1);
      *(_QWORD *)(a1 + 56) = v8;
      v9 = (LogicSummoner *)operator new(8);
      LogicGameListener::LogicGameListener(v9);
      *(_QWORD *)(a1 + 192) = v9;
      *(_QWORD *)(a1 + 176) = v9;
      LogicArrayList<ByteStream *>::ensureCapacity(a1 + 328, 6000);
      LogicArrayList<int>::ensureCapacity(a1 + 344, 6000);
      LogicArrayList<int>::ensureCapacity(a1 + 360, 6000);
      *(__n128 *)&v11 = Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 52) != 0), (bool)"stack empty", v10);
      *(_BYTE *)(a1 + 424) = LogicArrayList<bool>::remove(v4, (unsigned int)(*(_DWORD *)(a1 + 52) - 1), v11);
      return a1;
    }

    __int64 __fastcall LogicGameMode::pushLogicChangesAllowed(UnlockAccountPopup *this)
    {
      return LogicArrayList<bool>::add((__int64)this + 40, (char *)this + 424);
    }

    __int64 __fastcall LogicGameMode::setLogicChangesAllowed(__int64 this, char a2)
    {
      *(_BYTE *)(this + 424) = a2;
      return this;
    }

    __int64 __fastcall LogicGameMode::setRandomSeed(UnlockAccountPopup *this, int a2)
    {
      LogicGameMode::assertLogicChangesAllowed(this, &ASSERT_SET_RANDOM_SEED);
      *((_DWORD *)this + 39) = a2;
      return LogicRandom::setIteratedRandomSeed((UnlockAccountPopup *)((char *)this + 160), a2);
    }

    __int64 __fastcall LogicGameMode::popLogicChangesAllowed(UnlockAccountPopup *this, __int64 a2, const char *a3)
    {
      char *v4; // x20
      long double v5; // q0
      __int64 result; // x0
    
      v4 = (char *)this + 40;
      *(__n128 *)&v5 = Debugger::doAssert((Debugger *)(*((_DWORD *)this + 13) != 0), (bool)"stack empty", a3);
      result = LogicArrayList<bool>::remove(v4, (unsigned int)(*((_DWORD *)this + 13) - 1), v5);
      *((_BYTE *)this + 424) = result;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicGameMode::LogicGameMode(LogicGameMode *this, int a2)
    {
      __ZN13LogicGameModeC2Eb((__int64)this, a2);
    }

    __int64 __fastcall LogicGameMode::destruct(UnlockAccountPopup *this)
    {
      __int64 i; // x21
      char *v3; // x22
      __int64 v4; // x0
      __int64 v5; // x0
      _QWORD *v6; // x20
      UnlockAccountPopup *v7; // x0
      _QWORD *v8; // x20
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 v11; // x0
      __int64 v12; // x0
      __int64 v13; // x0
      __int64 v14; // x0
      __int64 v15; // x0
      __int64 v16; // x0
      __int64 v17; // x0
      __int64 v18; // x0
      __int64 v19; // x0
      __int64 v20; // x8
      __int64 v21; // x21
      __int64 v22; // x20
      __int64 v23; // x8
      __int64 v24; // x8
      __int64 v25; // x21
      __int64 v26; // x20
      __int64 v27; // x8
      LogicSpacePartition **v28; // x0
      _QWORD *v29; // x20
      UnbindFacebookAccountMessage *v30; // x0
      void *v31; // x0
      __int64 v32; // x0
      _QWORD *v33; // x20
      __int64 v34; // x0
      __int64 v35; // x0
      CoOpenStreamEntry *v36; // x0
      _QWORD *v37; // x20
      __int64 v38; // x0
      __int64 v39; // x0
      __int64 v40; // x0
      __int64 v41; // x0
      __int64 v42; // x0
      LeaderboardPopup *v43; // x0
      void *v44; // x0
      DataGained *v45; // x0
      void *v46; // x0
    
      for ( i = 0; i != 16; i += 8 )
      {
        v3 = (char *)this + i;
        v4 = *(_QWORD *)((char *)this + i + 216);
        if ( v4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
          v5 = *((_QWORD *)v3 + 27);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          *((_QWORD *)v3 + 27) = 0;
        }
        v6 = (_QWORD *)*((_QWORD *)v3 + 31);
        if ( v6 )
        {
          if ( *v6 )
            operator delete[](*v6);
          operator delete(v6);
        }
        *((_QWORD *)v3 + 31) = 0;
      }
      v7 = (UnlockAccountPopup *)*((_QWORD *)this + 1);
      if ( v7 )
      {
        LogicGameMode::destruct(v7);
        v8 = (_QWORD *)*((_QWORD *)this + 1);
        if ( v8 )
        {
          v9 = v8[45];
          if ( v9 )
            operator delete[](v9);
          v8[45] = 0;
          v8[46] = 0;
          v10 = v8[43];
          if ( v10 )
            operator delete[](v10);
          v8[43] = 0;
          v8[44] = 0;
          v11 = v8[41];
          if ( v11 )
            operator delete[](v11);
          v8[41] = 0;
          v8[42] = 0;
          v12 = v8[39];
          if ( v12 )
            operator delete[](v12);
          v8[39] = 0;
          v8[40] = 0;
          v13 = v8[37];
          if ( v13 )
            operator delete[](v13);
          v8[37] = 0;
          v8[38] = 0;
          v14 = v8[35];
          if ( v14 )
            operator delete[](v14);
          v8[35] = 0;
          v8[36] = 0;
          v15 = v8[33];
          if ( v15 )
            operator delete[](v15);
          v8[33] = 0;
          v8[34] = 0;
          v16 = v8[29];
          if ( v16 )
            operator delete[](v16);
          v8[29] = 0;
          v8[30] = 0;
          v17 = v8[5];
          if ( v17 )
            operator delete[](v17);
          operator delete(v8);
        }
        *((_QWORD *)this + 1) = 0;
      }
      v18 = *((_QWORD *)this + 26);
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = *((_QWORD *)this + 26);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        *((_QWORD *)this + 26) = 0;
      }
      v20 = *((int *)this + 81);
      if ( (int)v20 >= 1 )
      {
        v21 = v20 - 1;
        do
        {
          v22 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v21);
          if ( v22 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          }
          v23 = v21-- + 1;
        }
        while ( v23 > 1 );
      }
      v24 = *((int *)this + 85);
      if ( (int)v24 >= 1 )
      {
        v25 = v24 - 1;
        do
        {
          v26 = *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v25);
          if ( v26 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
          }
          v27 = v25-- + 1;
        }
        while ( v27 > 1 );
      }
      v28 = (LogicSpacePartition **)*((_QWORD *)this + 8);
      if ( v28 )
      {
        LogicGameObjectManager::destruct(v28);
        v29 = (_QWORD *)*((_QWORD *)this + 8);
        if ( v29 )
        {
          if ( *v29 )
            operator delete[](*v29);
          operator delete(v29);
        }
        *((_QWORD *)this + 8) = 0;
      }
      v30 = (UnbindFacebookAccountMessage *)*((_QWORD *)this + 21);
      if ( v30 )
      {
        LogicBattle::destruct(v30);
        v31 = (void *)*((_QWORD *)this + 21);
        if ( v31 )
          operator delete(v31);
        *((_QWORD *)this + 21) = 0;
      }
      LogicTime::destruct((__int64)this + 96);
      v32 = *((_QWORD *)this + 7);
      if ( v32 )
      {
        LogicCommandManager::destruct(v32);
        v33 = (_QWORD *)*((_QWORD *)this + 7);
        if ( v33 )
        {
          if ( *v33 )
            operator delete[](*v33);
          operator delete(v33);
        }
        *((_QWORD *)this + 7) = 0;
      }
      *((_QWORD *)this + 22) = 0;
      v34 = *((_QWORD *)this + 24);
      if ( v34 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        v35 = *((_QWORD *)this + 24);
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
        *((_QWORD *)this + 24) = 0;
      }
      LogicRandom::destruct((UnlockAccountPopup *)((char *)this + 160));
      v36 = (CoOpenStreamEntry *)*((_QWORD *)this + 10);
      if ( v36 )
      {
        LogicClientHome::destruct(v36);
        v37 = (_QWORD *)*((_QWORD *)this + 10);
        if ( v37 )
        {
          v38 = v37[47];
          if ( v38 )
            operator delete[](v38);
          v37[47] = 0;
          v37[48] = 0;
          String::~String();
          v39 = v37[33];
          if ( v39 )
            operator delete[](v39);
          v37[33] = 0;
          v37[34] = 0;
          v40 = v37[13];
          if ( v40 )
            operator delete[](v40);
          v37[13] = 0;
          v37[14] = 0;
          v41 = v37[5];
          if ( v41 )
            operator delete[](v41);
          v37[5] = 0;
          v37[6] = 0;
          v42 = v37[3];
          if ( v42 )
            operator delete[](v42);
          operator delete(v37);
        }
        *((_QWORD *)this + 10) = 0;
      }
      v43 = (LeaderboardPopup *)*((_QWORD *)this + 9);
      if ( v43 )
      {
        LogicAchievementManager::destruct(v43);
        v44 = (void *)*((_QWORD *)this + 9);
        if ( v44 )
          operator delete(v44);
        *((_QWORD *)this + 9) = 0;
      }
      LogicGameMode::deleteReplayEvents(this);
      v45 = (DataGained *)*((_QWORD *)this + 2);
      if ( v45 )
      {
        LogicReplay::destruct(v45);
        v46 = (void *)*((_QWORD *)this + 2);
        if ( v46 )
          operator delete(v46);
        *((_QWORD *)this + 2) = 0;
      }
      LogicTutorialManager::destruct((UnlockAccountPopup *)((char *)this + 392));
      return LogicGameMode::initializeMembers(this);
    }

    void __fastcall LogicGameMode::deleteReplayEvents(__int64 a1)
    {
      _QWORD *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x22
      __int64 v5; // x21
      __int64 v6; // x8
    
      v2 = *(_QWORD **)(a1 + 24);
      if ( v2 )
      {
        v3 = *((int *)v2 + 3);
        if ( (int)v3 < 1 )
          goto LABEL_14;
        v4 = v3 - 1;
        do
        {
          v5 = *(_QWORD *)(*v2 + 8 * v4);
          if ( v5 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*(_QWORD *)(*v2 + 8 * v4));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
            v2 = *(_QWORD **)(a1 + 24);
          }
          v6 = v4-- + 1;
        }
        while ( v6 > 1 );
        if ( v2 )
        {
    LABEL_14:
          if ( *v2 )
            operator delete[](*v2);
          operator delete(v2);
        }
        *(_QWORD *)(a1 + 24) = 0;
      }
    }

    __int64 __fastcall LogicGameMode::loadHomeState(
            __int64 a1,
            LogicClientHome *a2,
            LogicClientAvatar *a3,
            int a4,
            int a5,
            int a6)
    {
      __int64 v12; // x25
      const char *v13; // x2
      long double v14; // q0
    
      v12 = a1 + 40;
      LogicArrayList<bool>::add(a1 + 40, (char *)(a1 + 424));
      *(_BYTE *)(a1 + 424) = 1;
      *(_DWORD *)(a1 + 36) = 1;
      LogicGameMode::setHome((LogicGameMode *)a1, a2);
      LogicGameMode::setHomeOwnerAvatar((LogicGameMode *)a1, a3);
      LogicGameMode::fastForwardTime((LogicGameMode *)a1, a4, a5);
      LogicGameMode::assertLogicChangesAllowed(a1, &ASSERT_SET_RANDOM_SEED);
      *(_DWORD *)(a1 + 156) = a6;
      LogicRandom::setIteratedRandomSeed((LogicRandom *)(a1 + 160), a6);
      LogicClientHome::loadingFinished(*(CoOpenStreamEntry **)(a1 + 80));
      *(__n128 *)&v14 = Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 52) != 0), (bool)"stack empty", v13);
      *(_BYTE *)(a1 + 424) = LogicArrayList<bool>::remove(v12, (unsigned int)(*(_DWORD *)(a1 + 52) - 1), v14);
      return LogicAchievementManager::refreshStatus(*(LeaderboardPopup **)(a1 + 72));
    }

    CoOpenStreamEntry *__fastcall LogicGameMode::setHome(LogicGameMode *a1, LogicClientHome *a2)
    {
      CoOpenStreamEntry *result; // x0
      _QWORD *v5; // x19
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
    
      result = (CoOpenStreamEntry *)*((_QWORD *)a1 + 10);
      if ( result != a2 )
      {
        if ( result )
        {
          LogicClientHome::destruct(result);
          v5 = (_QWORD *)*((_QWORD *)a1 + 10);
          if ( v5 )
          {
            v6 = v5[47];
            if ( v6 )
              operator delete[](v6);
            v5[47] = 0;
            v5[48] = 0;
            String::~String();
            v7 = v5[33];
            if ( v7 )
              operator delete[](v7);
            v5[33] = 0;
            v5[34] = 0;
            v8 = v5[13];
            if ( v8 )
              operator delete[](v8);
            v5[13] = 0;
            v5[14] = 0;
            v9 = v5[5];
            if ( v9 )
              operator delete[](v9);
            v5[5] = 0;
            v5[6] = 0;
            v10 = v5[3];
            if ( v10 )
              operator delete[](v10);
            operator delete(v5);
          }
          *((_QWORD *)a1 + 10) = 0;
        }
        *((_QWORD *)a1 + 10) = a2;
        return (CoOpenStreamEntry *)LogicClientHome::setLogicGameMode(a2, a1);
      }
      return result;
    }

    void __fastcall LogicGameMode::setHomeOwnerAvatar(__int64 a1, __int64 a2)
    {
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v4, "setHomeOwnerAvatar");
      LogicGameMode::assertLogicChangesAllowed(a1, &v4);
      String::~String();
      *(_QWORD *)(a1 + 88) = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, a1);
    }

    void __fastcall LogicGameMode::fastForwardTime(__int64 a1, String *a2, int a3)
    {
      int v4; // w20
      LogicClientHome *v6; // x0
      _QWORD v7[3]; // [xsp+0h] [xbp-50h] BYREF
      _QWORD v8[3]; // [xsp+18h] [xbp-38h] BYREF
    
      v4 = (int)a2;
      String::valueOf(v7, a2, (int)a2);
      operator+(v8, "fastForwardTime ", v7);
      LogicGameMode::assertLogicChangesAllowed(a1, v8);
      String::~String();
      String::~String();
      if ( v4 >= 1 )
      {
        v6 = *(LogicClientHome **)(a1 + 80);
        if ( v6 )
          LogicClientHome::fastForward(v6, v4, a3);
      }
    }

    __int64 __fastcall LogicGameMode::loadReplay(__int64 a1, __int64 a2, #1234 *a3)
    {
      __int64 v6; // x20
      const char *v7; // x1
      #1232 *JSONNumber; // x0
      int IntValue; // w23
      #1234 *JSONObject; // x23
      const char *v11; // x2
      __int64 JSONArray; // x22
      const char *v13; // x2
      int v14; // w23
      __int64 v15; // x24
      Application *v16; // x0
      const #1234 *v17; // x1
      __int64 CommandFromJSON; // x0
      const char *v19; // x2
      __int64 v20; // x21
      int v21; // w22
      _QWORD *v22; // x23
      __int64 v23; // x0
      __int64 v24; // x23
      const char *v25; // x1
      __int64 v26; // x25
      LogicBattleEvent *v27; // x26
      long double v28; // q0
      __int64 result; // x0
      LogicBattleEvent *v30; // [xsp+8h] [xbp-48h] BYREF
    
      v6 = a1 + 40;
      LogicArrayList<bool>::add(a1 + 40, (char *)(a1 + 424));
      *(_BYTE *)(a1 + 424) = 1;
      if ( *(_DWORD *)(a1 + 36) )
        Debugger::error((__siginfo *)"loadReplay called twice?", v7);
      *(_DWORD *)(a1 + 36) = 4;
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(a2, &LogicReplay::JSON_SEED);
      IntValue = LogicJSONNumber::getIntValue(JSONNumber);
      LogicGameMode::assertLogicChangesAllowed(a1, &ASSERT_SET_RANDOM_SEED);
      *(_DWORD *)(a1 + 156) = IntValue;
      LogicRandom::setIteratedRandomSeed((LogicRandom *)(a1 + 160), IntValue);
      JSONObject = (#1234 *)LogicJSONObject::getJSONObject(a2, &LogicReplay::JSON_BATTLE);
      Debugger::doAssert((Debugger *)(JSONObject != 0), (bool)"cannot find battle object from replay json", v11);
      LogicBattle::setType(*(_QWORD *)(a1 + 168), 3);
      LogicBattle::loadReplay(*(UnbindFacebookAccountMessage **)(a1 + 168), JSONObject, a3);
      JSONArray = LogicJSONObject::getJSONArray(a2, &LogicReplay::JSON_COMMANDS);
      Debugger::doAssert((Debugger *)(JSONArray != 0), (bool)"cannot find cmd array from replay json", v13);
      v14 = LogicJSONArray::size(JSONArray);
      if ( v14 >= 1 )
      {
        v15 = 0;
        do
        {
          v16 = (Application *)LogicJSONArray::getJSONObject(JSONArray, v15);
          CommandFromJSON = LogicCommandManager::loadCommandFromJSON(v16, v17);
          LogicCommandManager::addCommand(*(_QWORD *)(a1 + 56), CommandFromJSON);
          v15 = (unsigned int)(v15 + 1);
        }
        while ( v14 != (_DWORD)v15 );
      }
      v20 = LogicJSONObject::getJSONArray(a2, &LogicReplay::JSON_EVENTS);
      if ( v20 )
      {
        LogicGameMode::deleteReplayEvents(a1);
        v21 = LogicJSONArray::size(v20);
        v22 = (_QWORD *)operator new(16);
        *v22 = 0;
        v22[1] = 0;
        *((_DWORD *)v22 + 2) = v21;
        v23 = is_mul_ok(v21, 8u) ? 8LL * v21 : -1LL;
        *v22 = operator new[](v23);
        *(_QWORD *)(a1 + 24) = v22;
        if ( v21 >= 1 )
        {
          v24 = 0;
          do
          {
            v26 = LogicJSONArray::getJSONObject(v20, v24);
            if ( v26 )
            {
              v27 = (LogicBattleEvent *)operator new(48);
              LogicBattleEvent::LogicBattleEvent(v27);
              v30 = v27;
              (*(void (__fastcall **)(LogicBattleEvent *, __int64))(*(_QWORD *)v27 + 48LL))(v27, v26);
              LogicArrayList<LogicBattleEvent *>::add(*(_QWORD *)(a1 + 24), &v30);
            }
            else
            {
              Debugger::warning((__siginfo *)"invalid json object type in replay events", v25);
            }
            v24 = (unsigned int)(v24 + 1);
          }
          while ( (int)v24 < v21 );
        }
      }
      *(__n128 *)&v28 = Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 52) != 0), (bool)"stack empty", v19);
      result = LogicArrayList<bool>::remove(v6, (unsigned int)(*(_DWORD *)(a1 + 52) - 1), v28);
      *(_BYTE *)(a1 + 424) = result;
      return result;
    }

    __int64 __fastcall LogicGameMode::getHome(UnlockAccountPopup *this)
    {
      return *((_QWORD *)this + 10);
    }

    __int64 __fastcall LogicGameMode::assertLogicChangesAllowed(__int64 result, __int64 a2)
    {
      const String *v2; // x1
      _QWORD v3[3]; // [xsp+8h] [xbp-28h] BYREF
    
      if ( !*(_BYTE *)(result + 424) )
      {
        operator+(v3, "logic changes not allowed: ", a2);
        Debugger::error((Debugger *)v3, v2);
      }
      return result;
    }

    __int64 __fastcall LogicGameMode::getPlayerAvatar(__int64 a1)
    {
      return *(_QWORD *)(a1 + 88);
    }

    __int64 __fastcall LogicGameMode::updateOneTick(__int64 a1)
    {
      __int64 v2; // x20
      ChangeAllianceMemberRoleOkMessage **v3; // x0
      const char *v4; // x2
      long double v5; // q0
    
      v2 = a1 + 40;
      LogicArrayList<bool>::add(a1 + 40, (char *)(a1 + 424));
      *(_BYTE *)(a1 + 424) = 1;
      v3 = *(ChangeAllianceMemberRoleOkMessage ***)(a1 + 168);
      if ( !v3 || !LogicBattle::isFinished(v3) )
      {
        LogicGameMode::tick((LogicGameMode *)a1);
        LogicTime::increaseTick((_DWORD *)(a1 + 96));
        if ( *(_DWORD *)(a1 + 36) == 4 )
          LogicGameMode::updateReplayEventPlayback((LogicGameMode *)a1);
      }
      *(__n128 *)&v5 = Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 52) != 0), (bool)"stack empty", v4);
      *(_BYTE *)(a1 + 424) = LogicArrayList<bool>::remove(v2, (unsigned int)(*(_DWORD *)(a1 + 52) - 1), v5);
      return 0;
    }

    __int64 __fastcall LogicGameMode::tick(__int64 a1, __int64 a2, const char *a3)
    {
      UnbindFacebookAccountMessage *v4; // x0
      __int64 result; // x0
      CoOpenStreamEntry *v6; // x0
      __int64 v7; // x1
      const char *v8; // x2
    
      v4 = *(UnbindFacebookAccountMessage **)(a1 + 168);
      if ( !v4 )
        goto LABEL_5;
      if ( (unsigned int)LogicBattle::isEndConditionMatched(v4, a2, a3) )
        LogicGameMode::battleEnded((LogicGameMode *)a1);
      result = LogicBattle::isFinished(*(ChangeAllianceMemberRoleOkMessage ***)(a1 + 168));
      if ( (result & 1) == 0 )
      {
    LABEL_5:
        LogicTutorialManager::tick((LogicTutorialManager *)(a1 + 392));
        LogicCommandManager::tick(*(UnlockAccountPopup ***)(a1 + 56));
        v6 = *(CoOpenStreamEntry **)(a1 + 80);
        if ( v6 )
        {
          return LogicClientHome::tick(v6);
        }
        else
        {
          result = *(_QWORD *)(a1 + 168);
          if ( result )
          {
            LogicBattle::tick((ChangeAllianceMemberRoleOkMessage **)result);
            result = LogicBattle::isEndConditionMatched(*(UnbindFacebookAccountMessage **)(a1 + 168), v7, v8);
            if ( (_DWORD)result )
              return LogicGameMode::battleEnded((LogicGameMode *)a1);
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicGameMode::updateReplayEventPlayback(__int64 result)
    {
      __int64 v1; // x19
      __int64 v2; // x8
      __int64 v3; // x21
      __int64 v4; // x23
      int v5; // w22
      Projectile *v6; // x20
      __int64 v7; // x23
    
      v1 = result;
      v2 = *(_QWORD *)(result + 24);
      if ( v2 )
      {
        v3 = *(int *)(v2 + 12);
        v4 = *(int *)(result + 32);
        if ( (int)v4 < (int)v3 )
        {
          v5 = *(_DWORD *)(result + 96);
          v6 = *(Projectile **)(*(_QWORD *)v2 + 8 * v4);
          result = LogicBattleEvent::getTick(v6, 0);
          if ( v5 >= (int)result )
          {
            v7 = v4 + 1;
            do
            {
              result = (*(__int64 (__fastcall **)(_QWORD, Projectile *))(**(_QWORD **)(v1 + 176) + 280LL))(
                         *(_QWORD *)(v1 + 176),
                         v6);
              *(_DWORD *)(v1 + 32) = v7;
              if ( v7 >= v3 )
                break;
              v6 = *(Projectile **)(**(_QWORD **)(v1 + 24) + 8 * v7);
              result = LogicBattleEvent::getTick(v6, 0);
              ++v7;
            }
            while ( v5 >= (int)result );
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicGameMode::battleEnded(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicBattle::isBattleEndedCalled(*(UnbindFacebookAccountMessage **)(a1 + 168));
      if ( (result & 1) == 0 )
      {
        LogicBattle::battleEnded(*(_QWORD *)(a1 + 168), 0);
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 176) + 40LL))(*(_QWORD *)(a1 + 176));
      }
      return result;
    }

    __int64 __fastcall LogicGameMode::getState(__int64 a1)
    {
      return *(unsigned int *)(a1 + 36);
    }

    __int64 __fastcall LogicGameMode::calculateChecksum(__int64 a1)
    {
      __int64 v3; // x19
      _BYTE v4[24]; // [xsp+8h] [xbp-28h] BYREF
    
      if ( *(_QWORD *)(a1 + 80) )
        return LogicClientHome::getChecksum();
      ChecksumEncoder::ChecksumEncoder((#1226 *)v4);
      v3 = LogicGameMode::encode(a1, v4, 0, 0);
      ChecksumEncoder::destruct((ChecksumEncoder *)v4);
      return v3;
    }

    __int64 __fastcall LogicGameMode::encode(__int64 a1, #1226 *a2, int a3, const tween::Bounce *a4)
    {
      int Offset; // w22
      #1226 *v9; // x23
      void (__fastcall *v10)(#1226 *, __int64); // x26
      __int64 v11; // x0
      AreaEffectObject **v12; // x0
      __int64 v13; // x24
      __int64 v14; // x0
      __int64 v15; // x24
    
      ChecksumEncoder::resetCheckSum(a2);
      if ( (*(unsigned int (__fastcall **)(#1226 *))(*(_QWORD *)a2 + 104LL))(a2) )
      {
        ByteStream::ensureCapacity(a2, 3 * *(_DWORD *)(a1 + 376) / 2);
        Offset = ByteStream::getOffset(a2);
        v9 = a2;
      }
      else
      {
        Offset = 0;
        v9 = 0;
      }
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 96));
      v10 = *(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL);
      v11 = ChecksumEncoder::getCheckSum(a2);
      v10(a2, v11);
      (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, 11);
      LogicTime::encode((unsigned int *)(a1 + 96), (__int64)a2);
      LogicRandom::encode(a1 + 160, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 156));
      v12 = *(AreaEffectObject ***)(a1 + 168);
      if ( v12 )
      {
        LogicBattle::encode(v12, a2, a4);
        if ( (int)LogicBattle::getPlayerCount(*(UnbindFacebookAccountMessage **)(a1 + 168)) >= 1 )
        {
          v13 = 0;
          do
          {
            v14 = *(_QWORD *)(a1 + 216 + 8 * v13);
            if ( v14 )
              (*(void (__fastcall **)(__int64, #1226 *))(*(_QWORD *)v14 + 24LL))(v14, a2);
            ++v13;
          }
          while ( v13 < (int)LogicBattle::getPlayerCount(*(UnbindFacebookAccountMessage **)(a1 + 168)) );
        }
      }
      else
      {
        LogicClientHome::encode(*(_QWORD *)(a1 + 80), a2);
      }
      (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, 12);
      LogicTutorialManager::encode((DonatorEntry *)(a1 + 392), a2);
      v15 = ChecksumEncoder::getCheckSum(a2);
      (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, v15);
      if ( a3 )
        LogicCommandManager::encode(*(_QWORD *)(a1 + 56), a2);
      if ( v9 )
        *(_DWORD *)(a1 + 376) = ByteStream::getOffset(v9) - Offset;
      return v15;
    }

    _QWORD *__fastcall LogicGameMode::setGameListener(_QWORD *result, __int64 a2)
    {
      result[22] = a2;
      result[23] = a2;
      if ( !a2 )
        result[22] = result[24];
      return result;
    }

    __int64 __fastcall LogicGameMode::getGameListener(UnlockAccountPopup *this)
    {
      return *((_QWORD *)this + 22);
    }

    __int64 __fastcall LogicGameMode::getRandomInt(__int64 a1, int a2)
    {
      LogicGameMode::assertLogicChangesAllowed(a1, (__int64)&ASSERT_GET_RANDOM_INT);
      return LogicRandom::rand((LogicRandom *)(a1 + 160), a2);
    }

    __int64 __fastcall LogicGameMode::getAchievementManager(UnlockAccountPopup *this)
    {
      return *((_QWORD *)this + 9);
    }

    bool __fastcall LogicGameMode::isImmediateMessageExecution(UnlockAccountPopup *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 21);
      return !v1 || (unsigned int)(*(_DWORD *)(v1 + 16) - 1) < 3;
    }

    __int64 __fastcall LogicGameMode::getTick(UnlockAccountPopup *this)
    {
      return *((unsigned int *)this + 24);
    }

    __int64 __fastcall LogicGameMode::getLogicTime(UnlockAccountPopup *this)
    {
      return (__int64)this + 96;
    }

    __int64 __fastcall LogicGameMode::updateSectorTicks(__int64 a1, float a2, float a3)
    {
      bool isFinished; // w21
      __int64 v7; // x20
      _BOOL4 v8; // w0
    
      isFinished = LogicBattle::isFinished(*(ChangeAllianceMemberRoleOkMessage ***)(a1 + 168));
      v7 = LogicGameMode::update((LogicGameMode *)a1, a2, a3);
      v8 = LogicBattle::isFinished(*(ChangeAllianceMemberRoleOkMessage ***)(a1 + 168));
      if ( !isFinished && v8 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 176) + 40LL))(*(_QWORD *)(a1 + 176));
      return v7;
    }

    __int64 __fastcall LogicGameMode::update(__int64 a1, __int64 a2, int a3, float a4, float a5)
    {
      NotificationBadge *v6; // x21
      __int64 v7; // x20
      ChangeAllianceMemberRoleOkMessage **v8; // x0
      _BOOL4 isFinished; // w0
      int v10; // w21
    
      *(_BYTE *)(a1 + 424) = 1;
      v6 = (NotificationBadge *)(a1 + 96);
      v7 = LogicTime::update((NotificationBadge *)(a1 + 96), a4, a5, a2, a3);
      if ( LogicTime::isClientOffSync(v6) )
        LogicGameMode::setOutOfSync((LogicGameMode *)a1, 0);
      v8 = *(ChangeAllianceMemberRoleOkMessage ***)(a1 + 168);
      if ( !v8 )
      {
        if ( (int)v7 < 1 )
          goto LABEL_10;
        goto LABEL_8;
      }
      isFinished = LogicBattle::isFinished(v8);
      if ( (int)v7 >= 1 && !isFinished )
      {
    LABEL_8:
        v10 = v7 + 1;
        do
        {
          LogicGameMode::executeOneTick((LogicGameMode *)a1);
          --v10;
        }
        while ( v10 > 1 );
      }
    LABEL_10:
      *(_BYTE *)(a1 + 424) = 0;
      return v7;
    }

    __int64 __fastcall LogicGameMode::getLogicRandom(UnlockAccountPopup *this)
    {
      return (__int64)this + 160;
    }

    void __fastcall LogicGameMode::decode(__int64 a1, #1225 *a2, int a3, LogicSummoner *a4)
    {
      int Offset; // w21
      __int64 v9; // x0
      const char *v10; // x1
      int v11; // w24
      __int64 v12; // x8
      char v13; // w28
      int v14; // w8
      int v15; // w8
      __int64 v16; // x25
      __int64 v17; // x0
      __int64 v18; // x27
      int v19; // w8
      const char *v20; // x1
      UnbindFacebookAccountMessage *v21; // x0
      __int64 v22; // x24
      __int64 v23; // x25
      LogicClientAvatar *v24; // x23
      const String *v25; // x1
      CoOpenStreamEntry *v26; // x23
      __siginfo v27; // [xsp+18h] [xbp-68h] BYREF
    
      Offset = ByteStream::getOffset(a2);
      v9 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v11 = v9;
      v12 = *(unsigned int *)(a1 + 384);
      if ( (int)v9 >= (int)v12 || ((a3 ^ 1) & 1) != 0 || *(_DWORD *)(*(_QWORD *)(a1 + 168) + 16LL) == 2 )
      {
        *(_DWORD *)(a1 + 380) = v9;
        *(_DWORD *)(a1 + 384) = v9;
        v13 = *(_BYTE *)(a1 + 424);
        *(_BYTE *)(a1 + 424) = 1;
        *(_BYTE *)(a1 + 429) |= a3;
        if ( a3 )
        {
          v14 = *(_DWORD *)(a1 + 356);
          if ( v14 >= 1 )
            LogicGameMode::clearClientTicks((LogicGameMode *)a1, v14 - 1);
          *(_DWORD *)(a1 + 292) = 0;
          *(_DWORD *)(a1 + 308) = 0;
          v15 = *(_DWORD *)(a1 + 324);
          v16 = (unsigned int)(v15 - 1);
          if ( v15 >= 1 )
          {
            do
            {
              v17 = LogicArrayList<ByteStream *>::remove(a1 + 312, v16);
              v18 = v17;
              if ( v17 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
              }
              v19 = v16 + 1;
              v16 = (unsigned int)(v16 - 1);
            }
            while ( v19 > 1 );
          }
          *(_BYTE *)(a1 + 425) = 0;
          LogicTime::setServerTick((NotificationBadge *)(a1 + 96), v11, 1);
        }
        (*(void (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
        if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2) != 11 )
          goto LABEL_29;
        LogicTime::decode((NotificationBadge *)(a1 + 96), a2, a3);
        LogicRandom::decode((LogicRandom *)(a1 + 160), a2);
        *(_DWORD *)(a1 + 156) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
        v21 = *(UnbindFacebookAccountMessage **)(a1 + 168);
        if ( v21 )
        {
          LogicBattle::decode(v21, a2, a3, a4);
          if ( (int)LogicBattle::getPlayerCount(*(UnbindFacebookAccountMessage **)(a1 + 168)) >= 1 )
          {
            v22 = 0;
            v23 = a1 + 216;
            do
            {
              v24 = *(LogicClientAvatar **)(v23 + 8 * v22);
              if ( !v24 )
              {
                v24 = (LogicClientAvatar *)operator new(248);
                LogicClientAvatar::LogicClientAvatar(v24);
                *(_QWORD *)(v23 + 8 * v22) = v24;
              }
              (*(void (__fastcall **)(LogicClientAvatar *, #1225 *))(*(_QWORD *)v24 + 32LL))(v24, a2);
              ++v22;
            }
            while ( v22 < (int)LogicBattle::getPlayerCount(*(UnbindFacebookAccountMessage **)(a1 + 168)) );
          }
        }
        else
        {
          v26 = *(CoOpenStreamEntry **)(a1 + 80);
          if ( !v26 )
          {
            v26 = (CoOpenStreamEntry *)operator new(408);
            LogicClientHome::LogicClientHome(v26);
            *(_QWORD *)(a1 + 80) = v26;
          }
          LogicClientHome::decode(v26, a2);
        }
        if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2) != 12 )
    LABEL_29:
          Debugger::error((__siginfo *)"Full update stream is corrupted!", v20);
        LogicTutorialManager::decode((DonatorEntry *)(a1 + 392), a2);
        (*(void (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
        if ( a3 )
          LogicCommandManager::decode(*(_QWORD *)(a1 + 56), a2);
        *(_DWORD *)(a1 + 376) = ByteStream::getOffset(a2) - Offset;
        *(_BYTE *)(a1 + 424) = v13;
      }
      else
      {
        String::format((String *)"LogicGameMode::decode ignoring old server state %d - %d", v10, v9, v12);
        Debugger::warning(&v27, v25);
        String::~String();
      }
    }

    __int64 __fastcall LogicGameMode::clearClientTicks(__int64 result, int a2)
    {
      int v2; // w19
      __int64 *v3; // x20
      __int64 *v4; // x21
    
      v2 = a2;
      if ( (a2 & 0x80000000) == 0 )
      {
        v3 = (__int64 *)(result + 360);
        v4 = (__int64 *)(result + 344);
        do
        {
          LogicArrayList<int>::remove(v3, v2);
          result = LogicArrayList<int>::remove(v4, v2);
        }
        while ( v2-- > 0 );
      }
      return result;
    }

    __int64 __fastcall LogicGameMode::addPlayer(LogicGameMode *a1, LogicClientAvatar *a2)
    {
      return LogicGameMode::addPlayer(a1, a2, 0);
    }

    __int64 __fastcall LogicGameMode::addPlayer(__int64 a1, char *a2, int a3)
    {
      int v4; // w2
    
      if ( *(_QWORD *)(a1 + 216) )
      {
        if ( *(_QWORD *)(a1 + 224) )
          Debugger::error((__siginfo *)"addPlayer called too many times", a2);
        v4 = 1;
      }
      else
      {
        v4 = 0;
      }
      *(_QWORD *)(a1 + 8LL * v4 + 216) = a2;
      return LogicBattle::addPlayer(*(UnbindFacebookAccountMessage **)(a1 + 168), (tween::Bounce *)a2, v4, a3);
    }

    __int64 __fastcall LogicGameMode::getAvatar(__int64 a1, int a2)
    {
      if ( a2 > 1 )
        return 0;
      else
        return *(_QWORD *)(a1 + 8LL * a2 + 216);
    }

    __int64 __fastcall LogicGameMode::getAvatarByAccountID(__int64 a1, int a2, int a3)
    {
      __int64 v5; // x23
      __int64 v6; // x24
      __int64 v7; // x21
      __int64 AccountId; // x22
    
      v5 = 0;
      v6 = a1 + 216;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v6 + 8 * v5);
        if ( v7 )
        {
          AccountId = LogicClientAvatar::getAccountId(*(tween::Bounce **)(v6 + 8 * v5));
          if ( (unsigned int)LogicLong::getHigherInt(AccountId) == a2
            && (unsigned int)LogicLong::getLowerInt(AccountId) == a3 )
          {
            break;
          }
        }
        if ( ++v5 >= 2 )
          return 0;
      }
      return v7;
    }

    __int64 __fastcall LogicGameMode::executeOneTick(__int64 a1)
    {
      NotificationBadge *v2; // x20
      int v3; // w21
      ByteStream *v4; // x0
      ByteStream *v5; // x21
      __int64 v6; // x1
      const char *v7; // x2
      const char *v8; // x2
      UnlockAccountPopup **v9; // x0
      long double v10; // q0
      __int64 v11; // x24
      __int64 result; // x0
      bool v13; // cc
      sigval *p_si_value; // x23
      __int64 v15; // x8
      __int64 v16; // x22
      int v17; // w25
      __int64 v18; // x21
      __int64 v19; // x8
      #1225 *v20; // x21
      int v21; // w23
      int v22; // w25
      __int64 v23; // x0
      const char *v24; // x1
      __int64 v25; // x20
      int v26; // w2
      __siginfo v27; // [xsp+10h] [xbp-80h] BYREF
    
      v2 = (NotificationBadge *)(a1 + 96);
      v3 = *(_DWORD *)(a1 + 96);
      if ( v3 == (unsigned int)LogicTime::getMaxTick((NotificationBadge *)(a1 + 96)) )
      {
        *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 96);
        v4 = *(ByteStream **)(a1 + 208);
        if ( v4 )
        {
          ByteStream::resetOffset(v4);
          v5 = *(ByteStream **)(a1 + 208);
        }
        else
        {
          v5 = (ByteStream *)operator new(48);
          ByteStream::ByteStream(v5, 10);
          *(_QWORD *)(a1 + 208) = v5;
        }
        LogicGameMode::encode(a1, v5, 1, 0);
      }
      LogicArrayList<bool>::add(a1 + 40, (char *)(a1 + 424));
      *(_BYTE *)(a1 + 424) = 1;
      LogicGameMode::tick(a1, v6, v7);
      LogicTime::increaseTick(v2);
      v9 = *(UnlockAccountPopup ***)(a1 + 16);
      if ( v9 )
        LogicReplay::tick(v9);
      if ( *(_DWORD *)(a1 + 36) == 4 )
        LogicGameMode::updateReplayEventPlayback(a1);
      *(__n128 *)&v10 = Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 52) != 0), (bool)"stack empty", v8);
      *(_BYTE *)(a1 + 424) = LogicArrayList<bool>::remove(a1 + 40, (unsigned int)(*(_DWORD *)(a1 + 52) - 1), v10);
      v11 = *(int *)(a1 + 96);
      HIDWORD(v27.__pad[1]) = v11;
      result = LogicTime::getMaxTick(v2);
      if ( (int)v11 % 10 )
        v13 = 0;
      else
        v13 = (int)v11 <= (int)result;
      if ( v13 )
      {
        p_si_value = &v27.si_value;
        ChecksumEncoder::ChecksumEncoder((#1226 *)&v27.si_value);
        v15 = *(int *)(a1 + 292);
        if ( (int)v15 < 1 )
        {
          v17 = 0;
          v18 = 0;
          v16 = 0xFFFFFFFFLL;
        }
        else
        {
          v16 = 0;
          while ( *(_DWORD *)(*(_QWORD *)(a1 + 280) + 4 * v16) != (_DWORD)v11 )
          {
            if ( ++v16 >= v15 )
              goto LABEL_24;
          }
          if ( (_DWORD)v16 == -1 )
          {
    LABEL_24:
            v17 = 0;
            v18 = 0;
            p_si_value = &v27.si_value;
            v16 = 0xFFFFFFFFLL;
            goto LABEL_25;
          }
          v19 = *(_QWORD *)(a1 + 312);
          v20 = *(#1225 **)(v19 + 8 * v16);
          if ( v20 )
          {
            ByteStream::resetOffset(*(ByteStream **)(v19 + 8 * v16));
            p_si_value = (sigval *)operator new(40);
            LogicDebugChecksumEncoder::LogicDebugChecksumEncoder((LogicDebugChecksumEncoder *)p_si_value, v20);
            v17 = 1;
            v18 = (__int64)p_si_value;
          }
          else
          {
            v18 = 0;
            p_si_value = &v27.si_value;
            v17 = 1;
          }
        }
    LABEL_25:
        v21 = LogicGameMode::encode(a1, (#1226 *)p_si_value, 0, 0);
        HIDWORD(v27.si_addr) = v21;
        LogicArrayList<int>::add(a1 + 344, (int *)&v27.__pad[1] + 1);
        LogicArrayList<int>::add(a1 + 360, (int *)&v27.si_addr + 1);
        if ( v17 )
        {
          v22 = *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4LL * (int)v16);
          LogicArrayList<int>::remove((__int64 *)(a1 + 296), v16);
          LogicArrayList<int>::remove((__int64 *)(a1 + 280), v16);
          v23 = LogicArrayList<ByteStream *>::remove(a1 + 312, v16);
          v25 = v23;
          if ( v23 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
          }
          if ( v22 != v21 )
          {
            String::format((String *)"Client is off-sync1 (tick %d)", v24, v11);
            Debugger::hudPrint(&v27, (const String *)0xFFFFFFFFLL, v26);
            String::~String();
            LogicGameMode::setOutOfSync((LogicGameMode *)a1, 1);
          }
        }
        if ( v18 )
        {
          LogicDebugChecksumEncoder::setOtherByteStream(v18, 0);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        }
        return ChecksumEncoder::destruct((ChecksumEncoder *)&v27.si_value);
      }
      return result;
    }

    void __fastcall LogicGameMode::setOutOfSync(__int64 a1, const char *a2)
    {
      int v2; // w20
      int v4; // w8
      __int64 v5; // x21
      __int64 v6; // x0
      __int64 v7; // x23
      int v8; // w8
      NotificationBadge *v9; // x19
      __int64 v10; // x21
      unsigned int v11; // t1
      const String *v12; // x1
      __int64 MaxTick; // x0
      const char *v14; // x1
      const String *v15; // x1
      __siginfo var60; // [xsp+10h] [xbp-60h] BYREF
    
      v2 = (int)a2;
      if ( !*(_BYTE *)(a1 + 425) )
      {
        *(_BYTE *)(a1 + 427) = (_BYTE)a2;
        *(_WORD *)(a1 + 425) = 257;
        v4 = *(_DWORD *)(a1 + 324);
        v5 = (unsigned int)(v4 - 1);
        if ( v4 >= 1 )
        {
          do
          {
            v6 = LogicArrayList<ByteStream *>::remove(a1 + 312, v5);
            v7 = v6;
            if ( v6 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            }
            v8 = v5 + 1;
            v5 = (unsigned int)(v5 - 1);
          }
          while ( v8 > 1 );
        }
        *(_DWORD *)(a1 + 292) = 0;
        *(_DWORD *)(a1 + 308) = 0;
        v11 = *(_DWORD *)(a1 + 96);
        v9 = (NotificationBadge *)(a1 + 96);
        v10 = v11;
        if ( v2 )
        {
          String::format((String *)"Check sum mismatch. Request full update. (client tick %d)", a2, v10);
          Debugger::warning((__siginfo *)&var60.si_addr, v12);
        }
        else
        {
          MaxTick = LogicTime::getMaxTick(v9);
          String::format(
            (String *)"Tick mismatch. Request full update. (client tick %d), server tick %d",
            v14,
            v10,
            MaxTick);
          Debugger::warning(&var60, v15);
        }
        String::~String();
      }
    }

    __int64 __fastcall LogicGameMode::isOutOfSync(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 426);
    }

    __int64 __fastcall LogicGameMode::removeRequestFullUpdateFlag(__int64 result)
    {
      *(_BYTE *)(result + 426) = 0;
      return result;
    }

    void __fastcall LogicGameMode::endTurnReceivedFromServer(__int64 a1, const char *a2, __int64 a3, LogicEffectData *a4)
    {
      __int64 v8; // x8
      const String *v9; // x1
      char v10; // w25
      __int64 Commands; // x23
      int v12; // w27
      __int64 v13; // x28
      char v14; // w26
      int v15; // w24
      PvpMatchmakeNotificationMessage *v16; // x25
      const char *v17; // x1
      int TickWhenGiven; // w0
      int v19; // w2
      ByteStream *v20; // x0
      int v21; // w8
      NotificationBadge *v22; // x24
      int v23; // w25
      __int64 v24; // x26
      __int64 v25; // x1
      int i; // w8
      const String *v27; // x1
      __int64 v28; // x24
      __int64 v29; // x1
      int ServerTickDataLength; // w23
      ByteStream *v31; // x24
      char *v32; // x0
      __int64 v33; // x0
      sigval *p_si_addr; // x1
      __int64 v35; // x8
      const char *v36; // x1
      int v37; // w2
      int v38; // w8
      __int64 v39; // x9
      _DWORD *v40; // x9
      __int64 v41; // x9
      int v42; // w8
      _DWORD *v43; // x9
      __int64 *v44; // x9
      __int64 v45; // x20
      int v46; // w8
      _QWORD *v47; // x9
      char v48; // [xsp+1Ch] [xbp-B4h]
      __siginfo v49; // [xsp+20h] [xbp-B0h] BYREF
    
      v49.__pad[5] = __PAIR64__((unsigned int)a2, a3);
      v8 = *(unsigned int *)(a1 + 380);
      if ( (int)v8 > (int)a2 )
      {
        String::format((String *)"LogicGameMode::endTurnReceivedFromServer ignoring old server tick %d - %d", a2, a2, v8);
        Debugger::warning((__siginfo *)&v49.__pad[2], v9);
        String::~String();
        return;
      }
      v10 = *(_BYTE *)(a1 + 424);
      *(_BYTE *)(a1 + 424) = 1;
      *(_DWORD *)(a1 + 380) = (_DWORD)a2;
      Commands = SectorHeartbeatMessage::getCommands(a4);
      v12 = *(_DWORD *)(Commands + 12);
      if ( v12 < 1 )
        goto LABEL_24;
      v48 = v10;
      v13 = 0;
      v14 = 0;
      v15 = 0xFFFFFFF;
      do
      {
        v16 = *(PvpMatchmakeNotificationMessage **)(*(_QWORD *)Commands + 8 * v13);
        if ( (int)LogicCommand::getAgeInTicks(v16, *(_DWORD *)(a1 + 96)) >= 21 )
        {
          TickWhenGiven = LogicCommand::getTickWhenGiven(v16);
          v15 = LogicMath::min((LogicMath *)(unsigned int)(TickWhenGiven + 20), v15, v19);
          v14 = 1;
        }
        ++v13;
      }
      while ( v12 != (_DWORD)v13 );
      if ( (v14 & 1) == 0 )
      {
    LABEL_21:
        v10 = v48;
        v28 = 0;
        do
        {
          v29 = *(_QWORD *)(*(_QWORD *)Commands + v28);
          *(_QWORD *)(*(_QWORD *)Commands + v28) = 0;
          LogicCommandManager::addCommand(*(_QWORD *)(a1 + 56), v29);
          --v12;
          v28 += 8;
        }
        while ( v12 );
    LABEL_24:
        v22 = (NotificationBadge *)(a1 + 96);
        goto LABEL_25;
      }
      v20 = *(ByteStream **)(a1 + 208);
      if ( !v20 )
      {
        Debugger::warning((__siginfo *)"Client has gone over maxTick but unable to find a state for reverting", v17);
        goto LABEL_21;
      }
      v21 = *(_DWORD *)(a1 + 200);
      if ( v21 < v15 - 200 || v21 > v15 )
      {
        String::format(
          (String *)"Client has gone over maxTick but restore point tick is not is valid range (Restore point tick %d Server tick %d)",
          v17,
          *(unsigned int *)(a1 + 200),
          a2);
        Debugger::warning((__siginfo *)&v49.si_band, v27);
        String::~String();
        goto LABEL_21;
      }
      v22 = (NotificationBadge *)(a1 + 96);
      v23 = *(_DWORD *)(a1 + 96);
      ByteStream::resetOffset(v20);
      LogicGameMode::decode(a1, *(#1225 **)(a1 + 208), 0, 0);
      LogicTime::setServerTick((NotificationBadge *)(a1 + 96), (int)a2, 0);
      v24 = 0;
      do
      {
        v25 = *(_QWORD *)(*(_QWORD *)Commands + v24);
        *(_QWORD *)(*(_QWORD *)Commands + v24) = 0;
        LogicCommandManager::addCommand(*(_QWORD *)(a1 + 56), v25);
        --v12;
        v24 += 8;
      }
      while ( v12 );
      for ( i = *(_DWORD *)v22; i < v23; i = *(_DWORD *)(a1 + 96) )
        LogicGameMode::executeOneTick(a1);
      v10 = v48;
    LABEL_25:
      LogicTime::setServerTick(v22, (int)a2, 0);
      LogicArrayList<int>::add(a1 + 280, (int *)&v49.__pad[5] + 1);
      LogicArrayList<int>::add(a1 + 296, (int *)&v49.__pad[5]);
      ServerTickDataLength = SectorHeartbeatMessage::getServerTickDataLength(a4);
      if ( ServerTickDataLength < 1 )
      {
        v33 = a1 + 312;
        v49.si_addr = 0;
        p_si_addr = (sigval *)&v49.si_addr;
      }
      else
      {
        v31 = (ByteStream *)operator new(48);
        ByteStream::ByteStream(v31, 0);
        v49.si_value.sival_ptr = v31;
        v32 = (char *)SectorHeartbeatMessage::removeServerTickData(a4);
        ByteStream::setByteArray(v31, v32, ServerTickDataLength);
        ByteStream::resetOffset(v31);
        v33 = a1 + 312;
        p_si_addr = &v49.si_value;
      }
      LogicArrayList<ByteStream *>::add(v33, p_si_addr);
      v35 = *(int *)(a1 + 356);
      if ( (int)v35 >= 1 )
      {
        v36 = 0;
        while ( *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * (_QWORD)v36) != (_DWORD)a2 )
        {
          if ( (__int64)++v36 >= v35 )
            goto LABEL_37;
        }
        if ( (_DWORD)v36 != -1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 360) + 4LL * (_QWORD)v36) == (_DWORD)a3 )
          {
            LogicGameMode::clearClientTicks(a1, (int)v36);
          }
          else
          {
            String::format(
              (String *)"Client is off-sync2 (tick %d, client:%d server:%d)",
              v36,
              a2,
              *(unsigned int *)(*(_QWORD *)(a1 + 360) + 4LL * (_QWORD)v36),
              a3);
            Debugger::hudPrint(&v49, (const String *)0xFFFFFFFFLL, v37);
            String::~String();
            LogicGameMode::setOutOfSync(a1, (const char *)1);
          }
        }
      }
    LABEL_37:
      v38 = *(_DWORD *)(a1 + 292);
      if ( v38 >= 141 )
      {
        v39 = *(_QWORD *)(a1 + 280);
        *(_DWORD *)(a1 + 292) = v38 - 1;
        v40 = (_DWORD *)(v39 + 4);
        do
        {
          *(v40 - 1) = *v40;
          --v38;
          ++v40;
        }
        while ( v38 > 1 );
        v41 = *(_QWORD *)(a1 + 296);
        v42 = *(_DWORD *)(a1 + 308);
        *(_DWORD *)(a1 + 308) = v42 - 1;
        if ( v42 >= 2 )
        {
          v43 = (_DWORD *)(v41 + 4);
          do
          {
            *(v43 - 1) = *v43;
            --v42;
            ++v43;
          }
          while ( v42 > 1 );
        }
        v44 = *(__int64 **)(a1 + 312);
        v45 = *v44;
        v46 = *(_DWORD *)(a1 + 324);
        *(_DWORD *)(a1 + 324) = v46 - 1;
        if ( v46 >= 2 )
        {
          v47 = v44 + 1;
          do
          {
            *(v47 - 1) = *v47;
            --v46;
            ++v47;
          }
          while ( v46 > 1 );
        }
        if ( v45 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
        }
      }
      *(_BYTE *)(a1 + 424) = v10;
    }

    __int64 __fastcall LogicGameMode::updateScores(__int64 result, tween::Bounce *a2, int *a3)
    {
      __int64 v5; // x21
      HomeScreen *Globals; // x0
      __int64 StartingArena; // x22
      _DWORD *v8; // x26
      int v9; // w25
      int v10; // w23
      int v11; // w4
      int v12; // w4
      int v13; // w2
      int v14; // w4
      int v15; // w22
      int v16; // w23
      int v17; // w24
      int v18; // w4
      int v19; // w2
      int v20; // w25
      int v21; // w9
      int v22; // w8
      int v23; // w10
      int v24; // w11
      int v25; // w9
      int v26; // w10
      UnbindFacebookAccountMessage *v27; // x0
      int *AccountId; // x0
      __int64 AccountIndex; // x0
      const char *v30; // x26
      int v31; // w9
      const char *v32; // x27
      LogicJSONParser *BattleLog; // x21
      __int64 Player; // x26
      __int64 v35; // x21
      int v36; // w2
    
      v5 = result;
      if ( a2 )
      {
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        StartingArena = LogicGlobals::getStartingArena(Globals);
        result = LogicClientAvatar::getArena(a2);
        if ( result != StartingArena )
        {
          result = LogicClientAvatar::getArena((tween::Bounce *)a3);
          if ( result != StartingArena )
          {
            v8 = (_DWORD *)LogicDataTables::getGlobals();
            v9 = v8[70];
            v10 = v8[71];
            result = LogicELOMath::calculateNewRating((LogicELOMath *)1, *((_DWORD *)a2 + 16), a3[16], v9, v11);
            v13 = *((_DWORD *)a2 + 16);
            if ( (int)result - v13 >= v10 )
            {
              result = LogicELOMath::calculateNewRating((LogicELOMath *)1, a3[16], v13, v9, v12);
              v15 = a3[16];
              if ( (int)result - v15 >= v10 )
              {
                v16 = *((_DWORD *)a2 + 16);
                v17 = LogicELOMath::calculateNewRating((LogicELOMath *)1, v16, a3[16], v9, v14) - v16;
                v20 = LogicELOMath::calculateNewRating(0, v15, v16, v9, v18) - v15;
                v21 = v8[69];
                v22 = v8[29];
                if ( v17 < 0 && v16 < v21 )
                {
                  if ( v16 >= v22 )
                    v23 = (v16 - v22) * v17 / (v21 - v22);
                  else
                    v23 = 0;
                  if ( v23 + v16 >= v22 )
                    v24 = v23;
                  else
                    v24 = v22 - v16;
                  if ( v16 < v22 )
                    v17 = v23;
                  else
                    v17 = v24;
                }
                if ( v20 < 0 && v15 < v21 )
                {
                  if ( v15 >= v22 )
                    v25 = (v15 - v22) * v20 / (v21 - v22);
                  else
                    v25 = 0;
                  if ( v25 + v15 >= v22 )
                    v26 = v25;
                  else
                    v26 = v22 - v15;
                  if ( v15 < v22 )
                    v20 = v25;
                  else
                    v20 = v26;
                }
                v27 = *(UnbindFacebookAccountMessage **)(v5 + 168);
                if ( v27 && LogicBattle::getBattleLog(v27) )
                {
                  AccountId = (int *)LogicClientAvatar::getAccountId(a2);
                  AccountIndex = LogicBattle::getAccountIndex(
                                   *(UnbindFacebookAccountMessage **)(v5 + 168),
                                   *AccountId,
                                   AccountId[1]);
                  v30 = (const char *)AccountIndex;
                  v31 = AccountIndex + 2;
                  if ( (int)AccountIndex + 1 >= 0 )
                    v31 = AccountIndex + 1;
                  v32 = (const char *)((_DWORD)AccountIndex + 1 - (v31 & 0xFFFFFFFE));
                  BattleLog = (LogicJSONParser *)LogicBattle::getBattleLog(*(UnbindFacebookAccountMessage **)(v5 + 168));
                  Player = LogicBattleLog::getPlayer(BattleLog, v30);
                  v35 = LogicBattleLog::getPlayer(BattleLog, v32);
                  LogicBattleLogPlayer::setPrevScore(Player, v16);
                  LogicBattleLogPlayer::setScore(Player, v17 + v16);
                  LogicBattleLogPlayer::setPrevScore(v35, v15);
                  LogicBattleLogPlayer::setScore(v35, v20 + v15);
                }
                LogicClientAvatar::scoreChanged((int *)a2, v17, v19);
                return LogicClientAvatar::scoreChanged(a3, v20, v36);
              }
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicGameMode::isFullUpdateReceived(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 429);
    }

    __int64 __fastcall LogicGameMode::getTutorialManager(__int64 a1)
    {
      return a1 + 392;
    }

    __int64 __fastcall LogicGameMode::hasFinishedTutorial(__int64 a1, __int64 a2, const LogicMusicData *a3)
    {
      UnbindFacebookAccountMessage *v4; // x0
    
      v4 = *(UnbindFacebookAccountMessage **)(a1 + 168);
      if ( v4 )
        return LogicBattle::isTutorialCompleted(v4, a3);
      else
        return LogicClientHome::hasFinishedTutorial(*(_QWORD *)(a1 + 80), a3);
    }

    __int64 __fastcall LogicGameMode::getCurrentTimestamp(__int64 a1)
    {
      __int64 v1; // x0
    
      v1 = LogicClientAvatar::getChangeListener(*(tween::Bounce **)(a1 + 88));
      if ( v1 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 128LL))(v1);
      else
        return 0xFFFFFFFFLL;
    }

    __int64 __fastcall LogicGameMode::isFullUpdatePending(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 425);
    }

    _QWORD *__fastcall LogicGameMode::setGameListenerEnabled(_QWORD *result, int a2)
    {
      __int64 v2; // x8
    
      v2 = result[23];
      if ( v2 )
      {
        if ( !a2 )
          v2 = result[24];
        result[22] = v2;
      }
      return result;
    }

    __int64 __fastcall LogicGameMode::initializeMembers(__int64 result)
    {
      __int64 v1; // x8
      __int64 v2; // x9
    
      v1 = 0;
      *(_DWORD *)(result + 156) = 0;
      *(_BYTE *)(result + 428) = 0;
      *(_BYTE *)(result + 424) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 92) = 0;
      *(_QWORD *)(result + 84) = 0;
      *(_QWORD *)(result + 76) = 0;
      *(_QWORD *)(result + 68) = 0;
      *(_QWORD *)(result + 60) = 0;
      *(_QWORD *)(result + 52) = 0;
      *(_QWORD *)(result + 184) = 0;
      *(_QWORD *)(result + 192) = 0;
      *(_QWORD *)(result + 168) = 0;
      *(_QWORD *)(result + 176) = 0;
      do
      {
        v2 = result + v1;
        *(_QWORD *)(v2 + 216) = 0;
        *(_QWORD *)(v2 + 248) = 0;
        v1 += 8;
      }
      while ( v1 != 16 );
      *(_QWORD *)(result + 8) = 0;
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 200) = 0;
      *(_QWORD *)(result + 208) = 0;
      *(_BYTE *)(result + 425) = 0;
      *(_BYTE *)(result + 426) = 0;
      *(_BYTE *)(result + 427) = 0;
      *(_DWORD *)(result + 376) = 5000;
      *(_QWORD *)(result + 16) = 0;
      *(_DWORD *)(result + 380) = -1;
      *(_DWORD *)(result + 384) = -1;
      *(_BYTE *)(result + 429) = 0;
      *(_QWORD *)(result + 72) = 0;
      return result;
    }

}; // end class LogicGameMode
