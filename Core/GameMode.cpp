class GameMode
{
public:

    __int64 GameMode::getInstance()
    {
      __int64 Instance; // x0
      LogicProgressSimulator *v1; // x19
    
      Instance = GameStateManager::getInstance();
      v1 = (LogicProgressSimulator *)Instance;
      if ( Instance && (GameStateManager::isState(Instance, 5) || GameStateManager::isState((__int64)v1, 4)) )
        return GameStateManager::getCurrentState(v1);
      else
        return 0;
    }

    __int64 __fastcall GameMode::GameMode(__int64 a1, int a2)
    {
      LogicTimeUtil *v4; // x0
      int CurrentTime; // w0
      ByteStream *v6; // x20
      LogicDebugByteStream *v7; // x20
    
      *(_QWORD *)a1 = off_100467D98;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      ByteStream::ByteStream((ByteStream *)(a1 + 168), 10);
      *(_BYTE *)(a1 + 220) = 0;
      *(_BYTE *)(a1 + 228) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 84) = 1065353216;
      *(_QWORD *)(a1 + 36) = 0;
      *(_QWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      v4 = (LogicTimeUtil *)memset((void *)(a1 + 88), 0, 0x4Cu);
      *(_DWORD *)(a1 + 216) = 0;
      *(_BYTE *)(a1 + 229) = 1;
      *(_BYTE *)(a1 + 227) = 0;
      *(_WORD *)(a1 + 225) = 0;
      *(_DWORD *)(a1 + 221) = 0;
      *(_DWORD *)(a1 + 56) = a2;
      CurrentTime = LogicTimeUtil::getCurrentTime(v4);
      LogicMersenneTwisterRandom::initialize((#1233 *)&s_random, CurrentTime);
      v6 = (ByteStream *)operator new(48);
      ByteStream::ByteStream(v6, 1024);
      *(_QWORD *)(a1 + 136) = v6;
      v7 = (LogicDebugByteStream *)operator new(88);
      LogicDebugByteStream::LogicDebugByteStream(v7);
      *(_QWORD *)(a1 + 144) = v7;
      *(_DWORD *)(a1 + 84) = 1065353216;
      return a1;
    }

    __int64 __fastcall GameMode::setTimeModifier(__int64 this, float a2)
    {
      float v2; // s1
    
      if ( a2 == 0.0 )
      {
        *(_DWORD *)(this + 84) = 0;
      }
      else
      {
        v2 = 0.5;
        if ( a2 >= 0.5 )
        {
          v2 = 4.0;
          if ( a2 <= 4.0 )
            v2 = a2;
        }
        *(float *)(this + 84) = v2;
      }
      return this;
    }

    // attributes: thunk
    void __fastcall GameMode::GameMode(GameMode *this, int a2)
    {
      __ZN8GameModeC2Ei((__int64)this, a2);
    }

    __int64 __fastcall GameMode::~GameMode(__int64 a1)
    {
      BadgePopup *refreshed; // x0
      BadgePopup *Instance; // x0
      BadgePopup *v4; // x0
      __int64 v5; // x0
      __int64 *v6; // x24
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
      BadgePopup *v19; // x0
      int *v20; // x21
      __int64 v21; // x23
      void *v22; // x22
      int v23; // w8
      int v24; // w22
      void (__fastcall ***v25)(_QWORD); // x0
      void (__fastcall ***v26)(_QWORD); // x23
      int v27; // w8
      __int64 v28; // x0
      __int64 v29; // x0
      __int64 v30; // x0
      __int64 v31; // x0
      __int64 v32; // x0
      __int64 v33; // x0
    
      *(_QWORD *)a1 = off_100467D98;
      refreshed = (BadgePopup *)LocalNotificationManager::refreshNotifications((LocalNotificationManager *)LocalNotificationManager::sm_pInstance);
      Instance = (BadgePopup *)GUI::getInstance(refreshed);
      if ( Instance )
      {
        v4 = (BadgePopup *)GUI::getInstance(Instance);
        GUI::destroyPopups(v4);
      }
      v6 = (__int64 *)(a1 + 48);
      v5 = *(_QWORD *)(a1 + 48);
      if ( v5 )
      {
        if ( !*(_BYTE *)(a1 + 221) || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 440LL))(v5), (v5 = *v6) != 0) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        *v6 = 0;
      }
      v7 = *(UnlockAccountPopup **)(a1 + 112);
      if ( v7 )
      {
        LogicGameMode::destruct(v7);
        v8 = *(_QWORD **)(a1 + 112);
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
        *(_QWORD *)(a1 + 112) = 0;
      }
      v18 = *(_QWORD *)(a1 + 120);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      *(_QWORD *)(a1 + 120) = 0;
      v19 = *(BadgePopup **)(a1 + 88);
      if ( v19 )
        v19 = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)v19 + 8LL))(v19);
      *(_QWORD *)(a1 + 88) = 0;
      GUI::destructInstance(v19);
      v20 = *(int **)(a1 + 152);
      if ( v20 )
      {
        if ( v20[3] < 1 )
          goto LABEL_64;
        v21 = 0;
        do
        {
          v22 = *(void **)(*(_QWORD *)v20 + 8 * v21);
          if ( v22 )
          {
            LogicDataTableResource::destruct(*(LogicDataTableResource **)(*(_QWORD *)v20 + 8 * v21));
            String::~String();
            operator delete(v22);
            v20 = *(int **)(a1 + 152);
          }
          ++v21;
        }
        while ( v21 < v20[3] );
        if ( v20 )
        {
    LABEL_64:
          if ( *(_QWORD *)v20 )
            operator delete[](*(_QWORD *)v20);
          operator delete(v20);
        }
        *(_QWORD *)(a1 + 152) = 0;
      }
      v23 = *(_DWORD *)(a1 + 28);
      v24 = v23 - 1;
      if ( v23 >= 1 )
      {
        do
        {
          v25 = (void (__fastcall ***)(_QWORD))LogicArrayList<LogicCommand *>::remove((__int64 *)(a1 + 16), v24);
          v26 = v25;
          if ( v25 )
          {
            (**v25)(v25);
            (*v26)[2](v26);
          }
          v27 = v24-- + 1;
        }
        while ( v27 > 1 );
      }
      v28 = *(_QWORD *)(a1 + 96);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      *(_QWORD *)(a1 + 96) = 0;
      v29 = *(_QWORD *)(a1 + 136);
      if ( v29 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        v30 = *(_QWORD *)(a1 + 136);
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
        *(_QWORD *)(a1 + 136) = 0;
      }
      v31 = *(_QWORD *)(a1 + 144);
      if ( v31 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        v32 = *(_QWORD *)(a1 + 144);
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
        *(_QWORD *)(a1 + 144) = 0;
      }
      ByteStream::destruct((#1225 *)(a1 + 168));
      *(_BYTE *)(a1 + 220) = 0;
      *(_BYTE *)(a1 + 228) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 84) = 1065353216;
      *(_QWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *v6 = 0;
      *(_QWORD *)(a1 + 56) = 0;
      memset((void *)(a1 + 88), 0, 0x4Cu);
      *(_DWORD *)(a1 + 216) = 0;
      *(_BYTE *)(a1 + 229) = 1;
      *(_BYTE *)(a1 + 227) = 0;
      *(_WORD *)(a1 + 225) = 0;
      *(_DWORD *)(a1 + 221) = 0;
      v33 = *(_QWORD *)(a1 + 16);
      if ( v33 )
        operator delete[](v33);
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return a1;
    }

    void __fastcall GameMode::saveOffline(VisitHomeMessage *this, const String *a2)
    {
      ;
    }

    // attributes: thunk
    __int64 __fastcall GameMode::~GameMode(__int64 a1)
    {
      return __ZN8GameModeD2Ev(a1);
    }

    void __fastcall GameMode::~GameMode(void *a1)
    {
      GameMode::~GameMode((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall GameMode::enter(__int64 a1)
    {
      __int64 v2; // x0
      ResourceListener *v3; // x20
      int v4; // w21
      UnlockAccountPopup *v5; // x0
      UnlockAccountPopup *v6; // x20
      SectorManager *v7; // x21
      GameMode *v8; // x0
      CommandStorage *v9; // x20
      AllianceStreamMessage *v10; // x0
      GameMain *Instance; // x0
    
      v2 = *(_QWORD *)(a1 + 120);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 120) = 0;
      v3 = (ResourceListener *)operator new(40);
      ResourceListener::ResourceListener(v3);
      *(_QWORD *)(a1 + 120) = v3;
      *(_DWORD *)(a1 + 32) = 0;
      v4 = *(_DWORD *)(a1 + 56);
      v5 = (UnlockAccountPopup *)operator new(432);
      v6 = v5;
      if ( v4 )
      {
        LogicGameMode::LogicGameMode(v5, 1);
        *(_QWORD *)(a1 + 112) = v6;
        v7 = (SectorManager *)operator new(32);
        SectorManager::SectorManager(v7, v6);
        *(_QWORD *)(a1 + 96) = v7;
      }
      else
      {
        v8 = LogicGameMode::LogicGameMode(v5, 0);
        *(_QWORD *)(a1 + 112) = v6;
      }
      GameMode::addResourcesToLoad(v8, *(ResourceListener **)(a1 + 120));
      ResourceListener::startLoading(*(ResourceListener **)(a1 + 120));
      *(_DWORD *)(a1 + 128) = -1431655765
                            * ((*(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) - *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL)) >> 3);
      v9 = (CommandStorage *)operator new(16);
      CommandStorage::CommandStorage(v9);
      *(_QWORD *)(a1 + 104) = v9;
      LogicCommandManager::setListener(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL), (__int64)v9);
      *(_DWORD *)(a1 + 132) = 0;
      *(_BYTE *)(a1 + 220) = 0;
      FacebookManager::enterGame((LogicBuyChestCommand *)FacebookManager::sm_pInstance);
      v10 = (AllianceStreamMessage *)FriendManager::enterGame((ReportUserStatusMessage *)FriendManager::sm_pInstance);
      *(_DWORD *)(a1 + 84) = 1065353216;
      Instance = (GameMain *)GameMain::getInstance(v10);
      return GameMain::callPartnerIntegrations(Instance);
    }

    __int64 __fastcall GameMode::addResourcesToLoad(__int64 a1, ResourceListener *a2)
    {
      ResourceListener::addFile(a2, "sc/effects.sc", -1, -1, -1, -1);
      ResourceListener::addFile(a2, &Resources::SC_UI, -1, -1, -1, -1);
      ResourceListener::addFile(a2, &Resources::SC_UI_CHEST, -1, -1, -1, -1);
      ResourceListener::addFile(a2, &Resources::SC_UI_STICKERS, -1, -1, -1, -1);
      ResourceListener::addFile(a2, &Resources::SC_UI_ARENA, -1, -1, -1, -1);
      ResourceListener::addFile(a2, &Resources::SC_UI_SPELLS, -1, -1, -1, -1);
      ResourceListener::addFile(a2, &Resources::SC_UI_PANELS, -1, -1, -1, -1);
      return ResourceListener::addFile(a2, "sc/tutorial.sc", -1, -1, -1, -1);
    }

    void __fastcall GameMode::exit(VisitHomeMessage *this)
    {
      ;
    }

    bool __fastcall GameMode::isLoaded(VisitHomeMessage *this)
    {
      return *((_DWORD *)this + 8) == 7;
    }

    __int64 __fastcall GameMode::getLoadingProgress(__int64 this)
    {
      if ( *(_DWORD *)(this + 32) != 7 && *(_QWORD *)(this + 120) )
      {
        if ( *(_DWORD *)(this + 128) )
          return ResourceManager::resourceToLoad((#1179 *)this);
      }
      return this;
    }

    String *__usercall GameMode::getLoadingTitle@<X0>(String *a1@<X8>)
    {
      return String::String(a1, "Loading..");
    }

    __int64 __fastcall GameMode::updateLoading(__int64 result)
    {
      __int64 v1; // x19
      #1179 *v2; // x0
      int v3; // w8
      int v4; // w8
      LogicProgressSimulator *Instance; // x0
      LogicProgressSimulator *v6; // x0
      LogicJSONParser *ReplayData; // x20
      const char *v8; // x2
      LogicProgressSimulator *v9; // x0
      LogicJSONObject *ReplayBattleLogJSON; // x21
      const char *v11; // x2
      const String *v12; // x1
      const LogicJSONObject *v13; // x20
      const char *v14; // x2
      __int64 JSONObject; // x22
      const char *v16; // x2
      #1232 *JSONNumber; // x22
      const char *v18; // x1
      LogicDataTables *IntValue; // x0
      int v20; // w1
      LogicJSONObject *DataById; // x0
      const ChangeAllianceMemberRoleOkMessage *v22; // x1
      LogicProgressSimulator *v23; // x20
      __int64 v24; // x8
      LogicClientHome *v25; // x21
      __int64 HomeGameState; // x0
      const char *v27; // x1
      int v28; // w2
      LogicClientAvatar *PlayerAvatar; // x22
      int HomePassedTimeSeconds; // w23
      int HomeRandomSeed; // w0
      AllianceStreamMessage *v32; // x0
      __int64 v33; // x20
      VisitHomeMessage *v34; // x1
      AllianceStreamMessage *v35; // x0
      BadgePopup *v36; // x0
      __int64 v37; // x20
      void (__fastcall *v38)(__int64, __int64); // x21
      __int64 v39; // x0
      BattleScreen *v40; // x20
      #1179 *v41; // x0
      __siginfo var60; // [xsp+10h] [xbp-60h] BYREF
    
      v1 = result;
      switch ( *(_DWORD *)(result + 32) )
      {
        case 0:
          if ( *(_DWORD *)(result + 56) == 1 )
          {
            result = GameStateManager::getInstance();
            if ( *(_DWORD *)(result + 16) == 1 )
            {
              v4 = 2;
            }
            else
            {
              result = GameStateManager::getInstance();
              if ( *(_DWORD *)(result + 16) == 3 )
                v4 = 3;
              else
                v4 = 1;
            }
          }
          else
          {
            v4 = 4;
          }
          *(_DWORD *)(v1 + 32) = v4;
          *(_DWORD *)(v1 + 84) = 1065353216;
          return result;
        case 1:
        case 2:
          if ( *(_DWORD *)(result + 56) != 1 )
            goto LABEL_7;
          result = *(_QWORD *)(result + 112);
          if ( result )
          {
            if ( *(_QWORD *)(result + 168) )
            {
              result = LogicGameMode::isFullUpdateReceived();
              if ( (_DWORD)result )
              {
                BattleScreen::startResourceLoading(*(UnbindFacebookAccountMessage **)(*(_QWORD *)(v1 + 112) + 168LL));
                result = ResourceManager::resourceToLoad(v2);
                *(_DWORD *)(v1 + 128) = result;
    LABEL_7:
                v3 = 4;
                goto LABEL_23;
              }
            }
          }
          return result;
        case 3:
          Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
          result = GameStateManager::hasReplayData(Instance);
          if ( (_DWORD)result )
          {
            v6 = (LogicProgressSimulator *)GameStateManager::getInstance();
            ReplayData = (LogicJSONParser *)GameStateManager::getReplayData(v6);
            Debugger::doAssert((Debugger *)(ReplayData != 0), (bool)"replay json string is null", v8);
            v9 = (LogicProgressSimulator *)GameStateManager::getInstance();
            ReplayBattleLogJSON = (LogicJSONObject *)GameStateManager::getReplayBattleLogJSON(v9);
            Debugger::doAssert((Debugger *)(ReplayBattleLogJSON != 0), (bool)"replay is missing battle log json", v11);
            v13 = (const LogicJSONObject *)LogicJSONParser::parseJSONObject(ReplayData, v12);
            Debugger::doAssert((Debugger *)(v13 != 0), (bool)"failed parsin replay json string", v14);
            JSONObject = LogicJSONObject::getJSONObject(v13, &LogicReplay::JSON_BATTLE);
            Debugger::doAssert((Debugger *)(JSONObject != 0), (bool)"cannot find battle object from replay json", v16);
            String::String((String *)&var60.si_addr, "location");
            JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(JSONObject, &var60.si_addr);
            String::~String();
            if ( !JSONNumber )
              Debugger::error((__siginfo *)"failed to load location data from replay data", v18);
            IntValue = (LogicDataTables *)LogicJSONNumber::getIntValue(JSONNumber);
            DataById = (LogicJSONObject *)LogicDataTables::getDataById(IntValue, v20);
            RenderSystem::loadTilemap(DataById, v22);
            LogicGameMode::loadReplay(*(LogicGameMode **)(v1 + 112), v13, ReplayBattleLogJSON);
            BattleScreen::startResourceLoading(*(UnbindFacebookAccountMessage **)(*(_QWORD *)(v1 + 112) + 168LL));
            result = ResourceManager::resourceToLoad(v41);
            *(_DWORD *)(v1 + 128) = result;
            *(_DWORD *)(v1 + 32) = 4;
            if ( v13 )
            {
              (*(void (__fastcall **)(const LogicJSONObject *))(*(_QWORD *)v13 + 16LL))(v13);
              return (*(__int64 (__fastcall **)(const LogicJSONObject *))(*(_QWORD *)v13 + 8LL))(v13);
            }
          }
          return result;
        case 4:
          result = GameMode::loadNextResource((GameMode *)result);
          if ( !(_DWORD)result )
            return result;
          v3 = 5;
          goto LABEL_23;
        case 5:
          result = GameStateManager::getInstance();
          v23 = (LogicProgressSimulator *)result;
          v24 = *(_QWORD *)(v1 + 112);
          if ( v24 && *(_QWORD *)(v24 + 168) )
            goto LABEL_22;
          result = GameStateManager::hasReplayData((LogicProgressSimulator *)result);
          if ( (_DWORD)result )
          {
            if ( *((_DWORD *)v23 + 4) == 3 )
              goto LABEL_22;
          }
          result = GameStateManager::hasGameData(v23);
          if ( !(_DWORD)result )
            return result;
          v25 = (LogicClientHome *)GameStateManager::removeHomeData(v23);
          HomeGameState = GameStateManager::getHomeGameState(v23);
          String::format((String *)"gameState: %d", v27, HomeGameState);
          Debugger::hudPrint(&var60, (const String *)0xFFFFFFFFLL, v28);
          String::~String();
          PlayerAvatar = (LogicClientAvatar *)GameStateManager::getPlayerAvatar(v23);
          HomePassedTimeSeconds = GameStateManager::getHomePassedTimeSeconds(v23);
          HomeRandomSeed = GameStateManager::getHomeRandomSeed(v23);
          result = LogicGameMode::loadHomeState(
                     *(LogicGameMode **)(v1 + 112),
                     v25,
                     PlayerAvatar,
                     HomePassedTimeSeconds,
                     -1,
                     HomeRandomSeed);
    LABEL_22:
          v3 = 6;
    LABEL_23:
          *(_DWORD *)(v1 + 32) = v3;
          return result;
        case 6:
          v32 = *(AllianceStreamMessage **)(result + 120);
          if ( v32 )
            v32 = (AllianceStreamMessage *)(*(__int64 (__fastcall **)(AllianceStreamMessage *))(*(_QWORD *)v32 + 8LL))(v32);
          *(_QWORD *)(v1 + 120) = 0;
          v33 = GameMain::getInstance(v32);
          GUI::constructInstance((BadgePopup *)v1, v34);
          v36 = (BadgePopup *)GameMain::getInstance(v35);
          if ( *((_BYTE *)v36 + 356) )
          {
            v36 = (BadgePopup *)GUI::getInstance(v36);
            *((_BYTE *)v36 + 8) = 0;
          }
          v37 = *(_QWORD *)(v33 + 88);
          v38 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 160LL);
          v39 = GUI::getInstance(v36);
          v38(v37, v39);
          if ( *(_DWORD *)(v1 + 56) )
          {
            v40 = (BattleScreen *)operator new(416);
            BattleScreen::BattleScreen(v40, (VisitHomeMessage *)v1);
          }
          else
          {
            v40 = (BattleScreen *)operator new(192);
            HomeScreen::HomeScreen(v40, (GameMode *)v1);
          }
          *(_QWORD *)(v1 + 48) = v40;
          *(_DWORD *)(v1 + 32) = 7;
          result = (*(__int64 (__fastcall **)(BattleScreen *))(*(_QWORD *)v40 + 432LL))(v40);
          *(_BYTE *)(v1 + 221) = 1;
          return result;
        default:
          return result;
      }
    }

    bool GameMode::loadNextResource()
    {
      #1179 *NativeTime; // x0
      xTimer *v1; // x19
      uint64_t v2; // x0
      unsigned __int64 v3; // x2
      float v4; // s0
    
      NativeTime = (#1179 *)xTimer::getNativeTime();
      v1 = NativeTime;
      do
      {
        NativeTime = (#1179 *)ResourceManager::resourceToLoad(NativeTime);
        if ( !(_DWORD)NativeTime )
          break;
        ResourceManager::loadNextResource(NativeTime);
        v2 = xTimer::getNativeTime();
        NativeTime = (#1179 *)xTimer::getPassedTimeMs(v1, v2, v3);
      }
      while ( v4 < 0.1 );
      return (unsigned int)ResourceManager::resourceToLoad(NativeTime) == 0;
    }

    __int64 __fastcall GameMode::touchPressed(__int64 a1)
    {
      __int64 v2; // x0
    
      v2 = *(_QWORD *)(a1 + 48);
      if ( v2 && !*(_DWORD *)(a1 + 64) )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 464LL))(v2);
      else
        return 0;
    }

    __int64 __fastcall GameMode::touchMoved(__int64 a1)
    {
      __int64 v2; // x0
    
      v2 = *(_QWORD *)(a1 + 48);
      if ( v2 && !*(_DWORD *)(a1 + 64) )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 472LL))(v2);
      else
        return 0;
    }

    __int64 __fastcall GameMode::touchReleased(__int64 a1)
    {
      __int64 v2; // x0
    
      v2 = *(_QWORD *)(a1 + 48);
      if ( v2 && !*(_DWORD *)(a1 + 64) )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 480LL))(v2);
      else
        return 0;
    }

    __int64 __fastcall GameMode::touchCancelled(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 48);
      if ( result )
      {
        if ( !*(_DWORD *)(a1 + 64) )
          return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 488LL))(result);
      }
      return result;
    }

    LogicPageOpenedCommand *__fastcall GameMode::update(__int64 a1, long double a2)
    {
      long double v2; // q9
      float v5; // s0
      float v6; // s1
      bool v7; // zf
      float v8; // s2
      float v9; // s1
      int v10; // w20
      __int64 v11; // x21
      pthread_attr_t *Tick; // x0
      int v13; // w20
      int v14; // w0
      BadgePopup *v15; // x0
      int v16; // w8
      float v17; // s0
      float v18; // s1
      float v19; // s2
      float v21; // s2
      float v23; // s0
      BadgePopup *Instance; // x0
      LogicPageOpenedCommand *result; // x0
      GameMain *v26; // x0
      _BYTE v27[24]; // [xsp+8h] [xbp-48h] BYREF
    
      v5 = 0.1;
      if ( *(float *)&a2 <= 0.1 )
        v5 = *(float *)&a2;
      v6 = *(float *)(a1 + 84);
      v7 = v6 == 1.0;
      v8 = v5 * v6;
      v9 = v6 * *(float *)&a2;
      if ( v7 )
      {
        *(float *)&v2 = *(float *)&a2;
      }
      else
      {
        v5 = v8;
        *(float *)&v2 = v9;
      }
      *(_BYTE *)(a1 + 228) = 1;
      GameMode::updateLogic((GameMode *)a1, v5);
      *(_BYTE *)(a1 + 228) = 0;
      ChecksumEncoder::ChecksumEncoder((#1226 *)v27);
      LogicGameMode::encode(*(_QWORD *)(a1 + 112), v27, 1, 0);
      if ( (LogicGameMode::isImmediateMessageExecution(*(UnlockAccountPopup **)(a1 + 112)) & 1) == 0 )
      {
        v10 = *(_DWORD *)(a1 + 28);
        if ( v10 >= 1 )
        {
          v11 = 0;
          do
            GameMode::addCommand((GameMode *)a1, *(LogicCommand **)(*(_QWORD *)(a1 + 16) + 8 * v11++), 1);
          while ( v10 != (_DWORD)v11 );
        }
        *(_DWORD *)(a1 + 28) = 0;
        if ( (LogicGameMode::isFullUpdatePending(*(_QWORD *)(a1 + 112)) & 1) == 0
          && !LogicBattle::isFinished(*(ChangeAllianceMemberRoleOkMessage ***)(*(_QWORD *)(a1 + 112) + 168LL)) )
        {
          Tick = (pthread_attr_t *)LogicGameMode::getTick(*(UnlockAccountPopup **)(a1 + 112));
          v13 = (int)Tick;
          if ( (int)Tick > *(_DWORD *)(a1 + 216) + 20 * *(_DWORD *)(LogicDataTables::getClientGlobals(Tick) + 316LL) )
          {
            ChecksumEncoder::resetCheckSum((#1226 *)v27);
            v14 = LogicGameMode::encode(*(_QWORD *)(a1 + 112), v27, 0, 0);
            GameMode::sendSectorCommandMessage((VisitHomeMessage *)a1, 0, v13, v14);
          }
        }
      }
      v15 = (BadgePopup *)(*(__int64 (__fastcall **)(_QWORD, long double, long double))(**(_QWORD **)(a1 + 48) + 448LL))(
                            *(_QWORD *)(a1 + 48),
                            v2,
                            a2);
      v16 = *(_DWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(float *)(a1 + 68);
        v18 = v17 + *(float *)&a2;
        *(float *)(a1 + 68) = v17 + *(float *)&a2;
        if ( v16 == 2 )
        {
          v19 = *(float *)(a1 + 72);
          if ( v18 >= v19 && v17 >= v19 )
          {
            *(_QWORD *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 72) = 0;
          }
        }
        else if ( v16 == 1 )
        {
          v21 = *(float *)(a1 + 72);
          if ( v18 >= v21 && v17 >= v21 )
          {
            *(_QWORD *)(a1 + 68) = 0;
            v23 = *(float *)(a1 + 80);
            if ( v23 <= 0.0 )
            {
              *(_DWORD *)(a1 + 64) = 0;
            }
            else
            {
              *(_DWORD *)(a1 + 64) = 2;
              *(float *)(a1 + 72) = v23;
            }
          }
        }
      }
      Instance = (BadgePopup *)GUI::getInstance(v15);
      GUI::update(Instance, a2);
      ChecksumEncoder::resetCheckSum((#1226 *)v27);
      LogicGameMode::encode(*(_QWORD *)(a1 + 112), v27, 1, 0);
      ChecksumEncoder::destruct((ChecksumEncoder *)v27);
      *(_BYTE *)(a1 + 229) = 0;
      if ( !*(_BYTE *)(a1 + 225) )
      {
        *(_BYTE *)(a1 + 225) = 1;
        if ( GameCenterManager::sm_pInstance )
          GameCenterManager::authorize((LogicDiamondsAddedCommand *)GameCenterManager::sm_pInstance);
      }
      if ( FacebookManager::sm_pInstance )
        ImageSet::load(*(#1277 **)(FacebookManager::sm_pInstance + 8));
      if ( FriendManager::sm_pInstance )
        FriendManager::update((String **)FriendManager::sm_pInstance, *(float *)&a2);
      result = (LogicPageOpenedCommand *)BillingManager::sm_pInstance;
      if ( BillingManager::sm_pInstance )
        result = (LogicPageOpenedCommand *)BillingManager::handlePendingPurchase((#1155 *)BillingManager::sm_pInstance);
      if ( sm_checkAppRate == 1 )
      {
        result = (LogicPageOpenedCommand *)HomeScreen::getInstance(result);
        if ( result )
        {
          result = (LogicPageOpenedCommand *)LogicDataTables::getClientGlobals((pthread_attr_t *)result);
          if ( result )
          {
            result = (LogicPageOpenedCommand *)LogicDataTables::getClientGlobals((pthread_attr_t *)result);
            if ( *((_BYTE *)result + 492) )
            {
              v26 = (GameMain *)GameMain::getInstance(result);
              result = (LogicPageOpenedCommand *)GameMain::openAppRateDialog(v26);
              sm_checkAppRate = 0;
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall GameMode::updateLogic(__int64 a1, long double a2)
    {
      __int64 result; // x0
      float v5; // s0
      int v6; // w8
      int v7; // w22
      int v8; // w9
      int v9; // w24
      int i; // w25
      #1122 *updated; // x0
      UnlockAccountPopup *v12; // x0
      int Offset; // w21
      char *ByteArray; // x0
      NotificationBadge *LogicTime; // x21
      __int64 v16; // x1
      __int64 v17; // x2
      int v18; // w3
      float v19; // s8
      #1292 *v20; // x0
      __int64 Instance; // x20
      __int64 TimeMultiplier; // x0
      __int64 DiffToPreferredTick; // x0
      float v24; // s0
      String v25; // [xsp+8h] [xbp-A8h] BYREF
      _BYTE v26[48]; // [xsp+20h] [xbp-90h] BYREF
    
      result = GameMode::isPaused((VisitHomeMessage *)a1);
      if ( (result & 1) == 0 )
      {
        result = LogicGameMode::isImmediateMessageExecution(*(UnlockAccountPopup **)(a1 + 112));
        if ( (_DWORD)result )
        {
          v5 = *(float *)(a1 + 36) + *(float *)&a2;
          *(float *)(a1 + 36) = v5;
          v6 = (int)(float)(v5 / 0.05);
          if ( *(_BYTE *)(a1 + 229) )
            v6 = 1;
          if ( v6 < 0 )
            v6 = 0;
          v7 = *(unsigned __int8 *)(a1 + 223);
          if ( v6 )
            v8 = v6;
          else
            v8 = 1;
          if ( *(_BYTE *)(a1 + 223) )
            v9 = v8;
          else
            v9 = v6;
          if ( v9 >= 1 )
          {
            for ( i = 0; i < v9; ++i )
            {
              updated = (#1122 *)LogicGameMode::updateOneTick(*(LogicGameMode **)(a1 + 112));
              if ( (unsigned int)LogicVersion::isDev(updated) )
              {
                v12 = *(UnlockAccountPopup **)(a1 + 112);
                if ( *((_QWORD *)v12 + 21) )
                {
                  if ( (unsigned int)LogicGameMode::isImmediateMessageExecution(v12) )
                  {
                    ByteStream::ByteStream((ByteStream *)v26, 8096);
                    LogicGameMode::encode(*(_QWORD *)(a1 + 112), v26, 0, 0);
                    Offset = ByteStream::getOffset(v26);
                    ByteArray = (char *)ByteStream::getByteArray((#1225 *)v26);
                    ByteStream::writeBytes((ByteStream *)(a1 + 168), ByteArray, Offset);
                    ByteStream::destruct((#1225 *)v26);
                  }
                }
              }
              result = LogicGameMode::getTick(*(UnlockAccountPopup **)(a1 + 112));
              if ( (_DWORD)result == 200 * ((int)result / 200) )
                LOBYTE(v7) = 1;
            }
            v7 &= 1u;
            *(float *)(a1 + 36) = *(float *)(a1 + 36) + (float)((float)v9 * -0.05);
          }
          if ( v7 )
            result = GameMode::sendEndTurn((GameMode *)a1);
          *(_BYTE *)(a1 + 223) = 0;
        }
        else if ( *(_QWORD *)(a1 + 96) )
        {
          LogicTime = (NotificationBadge *)LogicGameMode::getLogicTime(*(UnlockAccountPopup **)(a1 + 112));
          LODWORD(v19) = COERCE_UNSIGNED_INT128(LogicTime::updateModifiedDeltaTime(LogicTime, a2, v16, v17, v18));
          Instance = DebugPerformanceHud::getInstance(v20);
          if ( Instance )
          {
            TimeMultiplier = LogicTime::getTimeMultiplier(LogicTime);
            DebugPerformanceHud::setValue(9, TimeMultiplier);
            DiffToPreferredTick = LogicTime::getDiffToPreferredTick(LogicTime);
            DebugPerformanceHud::setValue(10, DiffToPreferredTick);
            DebugPerformanceHud::setBounds(Instance, 10, 4294967276LL, 20, 1);
            String::String(&v25, "Tick diff");
            DebugPerformanceHud::setName(10, &v25);
            String::~String();
          }
          v24 = v19 + *(float *)(a1 + 36);
          *(float *)(a1 + 36) = v24;
          result = SectorManager::updateLogicTick(*(LogicGameMode ***)(a1 + 96), v24, v19);
          *(float *)(a1 + 36) = *(float *)(a1 + 36) + (float)((float)(int)result * -0.05);
        }
      }
      return result;
    }

    __int64 __fastcall GameMode::addCommand(__int64 a1, PvpMatchmakeNotificationMessage *a2, __int64 a3)
    {
      const char *v6; // x1
      __int64 result; // x0
      char *v8; // x0
      int Tick; // w22
      AllianceStreamMessage *v10; // x0
      _BOOL4 v11; // w8
      int v12; // w8
      __int64 ExecutorAccountId; // x0
      const #1236 *AccountID; // x0
      __int64 v15; // x2
      UnlockAccountPopup *v16; // x0
      bool v17; // w8
      int v18; // [xsp+Ch] [xbp-44h] BYREF
      PvpMatchmakeNotificationMessage *v19; // [xsp+10h] [xbp-40h] BYREF
      int v20; // [xsp+1Ch] [xbp-34h] BYREF
    
      v19 = a2;
      if ( !a2 )
      {
        Debugger::warning((__siginfo *)"executeCommand: pCommand == NULL", 0);
        return 0;
      }
      if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1) & 1) != 0 )
      {
        if ( (LogicGameMode::isImmediateMessageExecution(*(UnlockAccountPopup **)(a1 + 112)) & 1) == 0
          && *(_BYTE *)(a1 + 228) )
        {
          LogicArrayList<LogicCommand *>::add(a1 + 16, (__int64 *)&v19);
          return 0;
        }
        if ( !(unsigned int)LogicGameMode::isFullUpdatePending(*(_QWORD *)(a1 + 112)) )
        {
          Tick = LogicGameMode::getTick(*(UnlockAccountPopup **)(a1 + 112));
          v10 = (AllianceStreamMessage *)(*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2);
          v11 = 1;
          if ( (int)v10 >= 200 )
          {
            v10 = (AllianceStreamMessage *)(*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2);
            v11 = (int)v10 > 499;
          }
          if ( v11 )
            v12 = 1;
          else
            v12 = Tick;
          if ( Tick < 1 )
            Tick = v12;
          if ( !*(_BYTE *)(GameMain::getInstance(v10) + 357)
            || (ExecutorAccountId = LogicCommand::getExecutorAccountId(a2),
                (unsigned int)LogicLong::isZero(ExecutorAccountId)) )
          {
            AccountID = (const #1236 *)MessageManager::getAccountID(MessageManager::sm_pInstance);
            LogicCommand::setExecutorAccountId(a2, AccountID);
          }
          LogicCommand::setTickWhenGiven((__int64)a2, Tick);
          if ( (unsigned int)LogicGameMode::isImmediateMessageExecution(*(UnlockAccountPopup **)(a1 + 112)) )
          {
            if ( (*(int (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2) < 200
              || (*(int (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2) >= 500 )
            {
              v15 = *(_QWORD *)(a1 + 112);
              v20 = 0;
              if ( (GameMode::simulateCommand(a1, a2, v15, a3, &v20) & 1) == 0 )
                goto LABEL_11;
            }
            if ( *(_QWORD *)(*(_QWORD *)(a1 + 112) + 168LL)
              && (*(unsigned int (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2) == 1 )
            {
              Tick += 20;
            }
            LogicCommand::setExecuteTick((__int64)a2, Tick);
            LogicCommandManager::addCommand(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL), (__int64)a2);
            v16 = *(UnlockAccountPopup **)(a1 + 112);
            if ( v16 )
              v17 = LogicGameMode::getHome(v16) != 0;
            else
              v17 = 0;
            *(_BYTE *)(a1 + 223) |= v17;
          }
          else
          {
            v18 = 0;
            if ( (GameMode::simulateCommand(a1, a2, *(_QWORD *)(a1 + 112), 1, &v18) & 1) == 0 )
              goto LABEL_11;
            GameMode::sendSectorCommandMessage((VisitHomeMessage *)a1, a2, Tick, v18);
          }
          return 1;
        }
        v8 = "Can't send command because full update is pending";
      }
      else
      {
        v8 = "executeCommand: Game not loaded -> ignoring command!";
      }
      Debugger::warning((__siginfo *)v8, v6);
    LABEL_11:
      (**(void (__fastcall ***)(PvpMatchmakeNotificationMessage *))a2)(a2);
      (*(void (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 16LL))(a2);
      result = 0;
      v19 = 0;
      return result;
    }

    __int64 __fastcall GameMode::sendSectorCommandMessage(
            VisitHomeMessage *this,
            PvpMatchmakeNotificationMessage *a2,
            int a3,
            int a4)
    {
      SectorCommandMessage *v8; // x21
      __int64 result; // x0
    
      v8 = (SectorCommandMessage *)operator new(88);
      SectorCommandMessage::SectorCommandMessage(v8);
      SectorCommandMessage::setClientChecksum((__int64)v8, a4);
      SectorCommandMessage::setClientTick((__int64)v8, a3);
      SectorCommandMessage::setCommand(v8, a2);
      result = MessageManager::sendUdpMessage((MessageManager *)MessageManager::sm_pInstance, v8);
      *((_DWORD *)this + 54) = a3;
      return result;
    }

    __int64 __fastcall GameMode::sendEndTurn(__int64 a1)
    {
      int State; // w20
      __int64 result; // x0
      const char *v4; // x1
      int v5; // w20
      int v6; // w22
      __int64 v7; // x23
      PiranhaMessage *v8; // x21
      #1122 *v9; // x0
      int Offset; // w23
      char *v11; // x0
      __int64 v12; // x0
      char *v13; // x0
    
      State = LogicGameMode::getState(*(_QWORD *)(a1 + 112));
      result = LogicGameMode::isImmediateMessageExecution(*(UnlockAccountPopup **)(a1 + 112));
      if ( (result & 1) == 0 )
        Debugger::error((__siginfo *)"sendEndTurn called in non-immediate mode", v4);
      if ( (State & 0xFFFFFFFE) != 2 )
      {
        result = LogicGameMode::getTick(*(UnlockAccountPopup **)(a1 + 112));
        v5 = result;
        if ( *(_DWORD *)(a1 + 132) < (int)result )
        {
          v6 = LogicGameMode::calculateChecksum(*(_QWORD *)(a1 + 112));
          v7 = CommandStorage::removeCommands(*(CommandStorage **)(a1 + 104));
          v8 = (PiranhaMessage *)operator new(104);
          EndClientTurnMessage::EndClientTurnMessage((__int64)v8);
          EndClientTurnMessage::setCommands((__int64)v8, v7);
          EndClientTurnMessage::setTick((__int64)v8, v5);
          v9 = (#1122 *)EndClientTurnMessage::setChecksum((__int64)v8, v6);
          if ( (unsigned int)LogicVersion::isDev(v9) )
          {
            Offset = ByteStream::getOffset(a1 + 168);
            if ( Offset >= 1 )
            {
              v11 = (char *)ByteStream::removeByteArray((#1225 *)(a1 + 168));
              EndClientTurnMessage::setDebugByteArray((__int64)v8, v11, Offset);
              if ( Offset < 0LL )
                v12 = -1;
              else
                v12 = Offset;
              v13 = (char *)operator new[](v12);
              ByteStream::setByteArray((ByteStream *)(a1 + 168), v13, Offset);
              ByteStream::resetOffset((ByteStream *)(a1 + 168));
            }
          }
          result = MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v8);
          *(_DWORD *)(a1 + 132) = v5;
        }
      }
      return result;
    }

    __int64 __fastcall GameMode::sleepEnd(VisitHomeMessage *a1, long double a2)
    {
      __int64 result; // x0
    
      result = (*(__int64 (__fastcall **)(VisitHomeMessage *))(*(_QWORD *)a1 + 64LL))(a1);
      if ( (_DWORD)result )
      {
        result = GameMode::isPaused(a1);
        if ( (result & 1) == 0 )
          return GameMode::updateLogic((__int64)a1, a2);
      }
      return result;
    }

    __int64 __fastcall GameMode::isPaused(VisitHomeMessage *this)
    {
      AllianceStreamMessage *Instance; // x0
    
      if ( *((_BYTE *)this + 220) )
        return 1;
      Instance = (AllianceStreamMessage *)GameMain::getInstance(this);
      return GameMain::isNativeDialogVisible(Instance);
    }

    void __fastcall GameMode::draw(VisitHomeMessage *this)
    {
      ;
    }

    __int64 __fastcall GameMode::getAccountId(VisitHomeMessage *this)
    {
      return MessageManager::getAccountID(MessageManager::sm_pInstance);
    }

    __int64 __fastcall GameMode::simulateCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
    {
      int v5; // [xsp+Ch] [xbp-4h] BYREF
    
      v5 = 0;
      return GameMode::simulateCommand(a1, a2, a3, a4, &v5);
    }

    bool __fastcall GameMode::isHomeMode(VisitHomeMessage *this)
    {
      UnlockAccountPopup *v1; // x0
    
      v1 = (UnlockAccountPopup *)*((_QWORD *)this + 14);
      return v1 && LogicGameMode::getHome(v1) != 0;
    }

    bool __fastcall GameMode::simulateCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
    {
      __int64 v10; // x19
      __int64 v11; // x0
      const char *v12; // x1
      int v13; // w2
      __int64 v14; // x0
      const char *v15; // x1
      const String *v16; // x1
      String v18; // [xsp+18h] [xbp-78h] BYREF
      __siginfo var60; // [xsp+30h] [xbp-60h] BYREF
    
      ChecksumEncoder::ChecksumEncoder((#1226 *)&var60.si_addr);
      *a5 = LogicGameMode::encode(a3, &var60.si_addr, 0, 0);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 24LL))(
              a2,
              *(_QWORD *)(a1 + 112),
              1,
              a4);
      if ( (_DWORD)v10 && !*(_BYTE *)(a1 + 224) )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
        String::format((String *)"Simulation of command %d failed, error code %d", v12, v11, v10);
        Debugger::hudPrint(&var60, (const String *)0xFFFFFFFFLL, v13);
        String::~String();
      }
      ChecksumEncoder::resetCheckSum((#1226 *)&var60.si_addr);
      if ( (unsigned int)LogicGameMode::encode(a3, &var60.si_addr, 0, 0) != *a5 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
        String::format((String *)"Simulation of command %d modifies logic", v15, v14);
        Debugger::error((Debugger *)&v18, v16);
      }
      ChecksumEncoder::destruct((ChecksumEncoder *)&var60.si_addr);
      return (_DWORD)v10 == 0;
    }

    unsigned __int8 *__fastcall GameMode::setPaused(unsigned __int8 *result, int a2)
    {
      unsigned __int8 *v3; // x20
      LogicJSONObject **Instance; // x0
    
      v3 = result;
      if ( a2 != result[220] )
      {
        if ( a2 )
          result = (unsigned __int8 *)GameMode::sendEndTurn((__int64)result);
        v3[220] = a2;
        result = (unsigned __int8 *)BattleScreen::getInstance((LogicTutorialManager *)result);
        if ( result )
        {
          Instance = (LogicJSONObject **)BattleScreen::getInstance((LogicTutorialManager *)result);
          return (unsigned __int8 *)BattleScreen::setPaused(Instance, a2);
        }
      }
      return result;
    }

    __int64 __fastcall GameMode::getHomeScreen(__int64 a1)
    {
      if ( *(_DWORD *)(a1 + 56) )
        return 0;
      else
        return *(_QWORD *)(a1 + 48);
    }

    __int64 __fastcall GameMode::getBattleScreen(__int64 a1)
    {
      if ( *(_DWORD *)(a1 + 56) == 1 )
        return *(_QWORD *)(a1 + 48);
      else
        return 0;
    }

    __int64 __fastcall GameMode::changeScreen(__int64 result, int a2, float a3, float a4)
    {
      int v4; // w8
    
      *(_DWORD *)(result + 68) = 0;
      *(float *)(result + 76) = a3;
      *(float *)(result + 80) = a4;
      *(_DWORD *)(result + 60) = a2;
      if ( a3 > 0.0 )
      {
        *(float *)(result + 72) = a3;
        *(_DWORD *)(result + 60) = a2;
        v4 = 1;
    LABEL_8:
        *(_DWORD *)(result + 64) = v4;
        return result;
      }
      *(_QWORD *)(result + 68) = 0;
      if ( a4 <= 0.0 )
      {
        *(_DWORD *)(result + 64) = 0;
      }
      else
      {
        *(_DWORD *)(result + 64) = 2;
        *(float *)(result + 72) = a4;
      }
      if ( a4 > 0.0 )
      {
        *(float *)(result + 72) = a4;
        v4 = 2;
        goto LABEL_8;
      }
      *(_DWORD *)(result + 72) = 0;
      *(_DWORD *)(result + 64) = 0;
      return result;
    }

    __int64 GameMode::keyDown()
    {
      return 0;
    }

    __int64 __fastcall GameMode::debugDraw(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 48);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 456LL))(result);
      return result;
    }

    __int64 __fastcall GameMode::receiveSectorHeartbeat(__int64 a1, LogicEffectData *a2)
    {
      if ( *(_DWORD *)(a1 + 56) != 1 )
        return 0;
      SectorManager::receiveSectorHeartbeat(*(vm_address_t **)(a1 + 96), a2);
      return 1;
    }

    __int64 __fastcall GameMode::receiveSectorState(__int64 a1, #949 *a2, const char *a3)
    {
      __int64 result; // x0
    
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 96) != 0), (bool)"SectorManager NULL", a3);
      result = SectorManager::receiveSectorState(*(#844 **)(a1 + 96), a2);
      *(_DWORD *)(a1 + 36) = 0;
      return result;
    }

    __int64 GameMode::canHandleMessages()
    {
      return 1;
    }

    __int64 GameMode::getHomeId()
    {
      LogicProgressSimulator *Instance; // x0
      _BOOL8 v1; // x0
      const char *v2; // x2
      LogicProgressSimulator *v3; // x0
      tween::Bounce *PlayerAvatar; // x0
    
      Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
      v1 = GameStateManager::getPlayerAvatar(Instance) != 0;
      Debugger::doAssert((Debugger *)v1, (bool)"", v2);
      v3 = (LogicProgressSimulator *)GameStateManager::getInstance();
      PlayerAvatar = (tween::Bounce *)GameStateManager::getPlayerAvatar(v3);
      return LogicClientAvatar::getHomeId(PlayerAvatar);
    }

    __int64 GameMode::getPlayerAvatar()
    {
      LogicProgressSimulator *Instance; // x0
    
      Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
      return GameStateManager::getPlayerAvatar(Instance);
    }

    __int64 __fastcall GameMode::sendStartMissionMessage(VisitHomeMessage *this, const Character::AnimFrameIndices *a2)
    {
      __int64 Instance; // x0
      LogicJSONObject *Location; // x0
      const ChangeAllianceMemberRoleOkMessage *v5; // x1
      #1123 *v6; // x19
    
      Instance = GameStateManager::getInstance();
      GameStateManager::setWaitingForNPCSectorState(Instance, 1);
      Location = (LogicJSONObject *)LogicNpcData::getLocation(a2);
      RenderSystem::loadTilemap(Location, v5);
      v6 = (#1123 *)operator new(80);
      StartMissionMessage::StartMissionMessage(v6, a2);
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v6);
    }

    __int64 __fastcall GameMode::sendHomeLogicStoppedMessage(VisitHomeMessage *this, const char *a2)
    {
      const char *v3; // x1
      int v4; // w21
      HomeLogicStoppedMessage *v5; // x19
      int Tick; // w22
      __int64 v7; // x0
    
      Debugger::print((Debugger *)"sendHomeLogicStoppedMessage()", a2);
      if ( *((_DWORD *)this + 14) || !*((_QWORD *)this + 6) )
        return Debugger::warning((__siginfo *)"sendHomeLogicStoppedMessage in wrong state", v3);
      v4 = LogicGameMode::calculateChecksum(*((_QWORD *)this + 14));
      v5 = (HomeLogicStoppedMessage *)operator new(88);
      HomeLogicStoppedMessage::HomeLogicStoppedMessage(v5);
      Tick = LogicGameMode::getTick(*((UnlockAccountPopup **)this + 14));
      v7 = CommandStorage::removeCommands(*((CommandStorage **)this + 13));
      HomeLogicStoppedMessage::setCommands(v5, v7);
      HomeLogicStoppedMessage::setTick(v5, Tick);
      HomeLogicStoppedMessage::setChecksum(v5, v4);
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v5);
    }

    __int64 __fastcall GameMode::getBattleTopAvatar(VisitHomeMessage *this)
    {
      UnbindFacebookAccountMessage *v1; // x19
      __int64 BattleBottomAvatar; // x20
      const char *v3; // x2
      unsigned int v4; // w1
      const char *v5; // x2
    
      v1 = *(UnbindFacebookAccountMessage **)(*((_QWORD *)this + 14) + 168LL);
      BattleBottomAvatar = GameMode::getBattleBottomAvatar(this);
      v4 = BattleBottomAvatar == LogicBattle::getAvatar(v1, 0, v3);
      return LogicBattle::getAvatar(v1, v4, v5);
    }

    tween::Bounce *__fastcall GameMode::getBattleBottomAvatar(VisitHomeMessage *this)
    {
      UnbindFacebookAccountMessage *v2; // x19
      int *AccountID; // x0
      const char *v4; // x2
      unsigned int AccountIndex; // w8
      UnbindFacebookAccountMessage *v6; // x0
      unsigned int v7; // w1
      LogicProgressSimulator *Instance; // x0
      tween::Bounce *PlayerAvatar; // x20
      tween::Bounce *Avatar; // x22
      const char *v11; // x2
      tween::Bounce *v12; // x21
      __int64 AllianceId; // x23
      __int64 v14; // x0
      __int64 v15; // x22
      __int64 v16; // x0
      char v17; // w0
    
      v2 = *(UnbindFacebookAccountMessage **)(*((_QWORD *)this + 14) + 168LL);
      AccountID = (int *)MessageManager::getAccountID(MessageManager::sm_pInstance);
      AccountIndex = LogicBattle::getAccountIndex(
                       *(UnbindFacebookAccountMessage **)(*((_QWORD *)this + 14) + 168LL),
                       *AccountID,
                       AccountID[1]);
      if ( AccountIndex == -1 )
      {
        Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
        PlayerAvatar = (tween::Bounce *)GameStateManager::getPlayerAvatar(Instance);
        if ( (unsigned int)LogicClientAvatar::isInAlliance(PlayerAvatar) )
        {
          Avatar = (tween::Bounce *)LogicBattle::getAvatar(v2, 0, v4);
          v12 = (tween::Bounce *)LogicBattle::getAvatar(v2, 1u, v11);
          if ( (unsigned int)LogicClientAvatar::isInAlliance(Avatar) )
          {
            AllianceId = LogicClientAvatar::getAllianceId(Avatar);
            v14 = LogicClientAvatar::getAllianceId(PlayerAvatar);
            if ( (LogicLong::equals(AllianceId, v14) & 1) != 0 )
              return Avatar;
          }
          if ( (unsigned int)LogicClientAvatar::isInAlliance(v12) )
          {
            v15 = LogicClientAvatar::getAllianceId(v12);
            v16 = LogicClientAvatar::getAllianceId(PlayerAvatar);
            v17 = LogicLong::equals(v15, v16);
            Avatar = v12;
            if ( (v17 & 1) != 0 )
              return Avatar;
          }
        }
        v7 = 1;
        v6 = v2;
      }
      else
      {
        v6 = v2;
        v7 = AccountIndex;
      }
      return (tween::Bounce *)LogicBattle::getAvatar(v6, v7, v4);
    }

    __int64 __fastcall GameMode::isPlayerAvatarInBattle(VisitHomeMessage *this)
    {
      __int64 AccountID; // x20
      tween::Bounce *BattleBottomAvatar; // x0
      __int64 v4; // x0
    
      AccountID = MessageManager::getAccountID(MessageManager::sm_pInstance);
      BattleBottomAvatar = GameMode::getBattleBottomAvatar(this);
      v4 = LogicClientAvatar::getAccountId(BattleBottomAvatar);
      return LogicLong::equals(v4, AccountID);
    }

    __int64 __fastcall GameMode::serverCommandReceived(VisitHomeMessage *this, #1156 *a2)
    {
      if ( *((_QWORD *)this + 14) )
        return GameMode::addCommand((__int64)this, a2, 1);
      else
        return Debugger::warning((__siginfo *)"Received server command but logic game doesn't exist", (const char *)a2);
    }

    __int64 __fastcall GameMode::pingUpdated(VisitHomeMessage *this, float a2)
    {
      __int64 result; // x0
      PiranhaMessage *v5; // x20
    
      result = (*(__int64 (__fastcall **)(VisitHomeMessage *))(*(_QWORD *)this + 64LL))(this);
      if ( (_DWORD)result )
      {
        v5 = (PiranhaMessage *)operator new(72);
        ClientCapabilitiesMessage::ClientCapabilitiesMessage((__int64)v5);
        ClientCapabilitiesMessage::setPing((__int64)v5, (int)(float)(a2 * 1000.0));
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v5);
        result = *((_QWORD *)this + 6);
        if ( result )
          return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)result + 496LL))(
                   result,
                   (unsigned int)(int)(float)(a2 * 1000.0));
      }
      return result;
    }

    void __fastcall GameMode::hibernateStarted(VisitHomeMessage *this)
    {
      ;
    }

    __int64 __fastcall GameMode::isHelpshiftEnabled(pthread_attr_t *this)
    {
      const char *v1; // x1
    
      if ( *(_BYTE *)(LogicDataTables::getClientGlobals(this) + 472LL) )
        return Application::isSystemVersionGreaterOrEqualTo((Application *)"6.0", v1);
      else
        return 0;
    }

    void __fastcall GameMode::showAppRatingDialog(VisitHomeMessage *this)
    {
      sm_checkAppRate = 1;
    }

}; // end class GameMode
