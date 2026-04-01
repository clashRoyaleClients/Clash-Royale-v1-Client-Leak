class BattleScreen
{
public:

    void __fastcall BattleScreen::BattleScreen(BattleScreen *this, #945 *a2)
    {
      #1080 *isReplay; // x0
      GameMain *Instance; // x0
      __int64 v6; // x0
      #1080 *StageWidth; // x0
      __int64 v8; // x0
      #1080 *StageHeight; // x0
      __int64 v10; // x0
      bool v11; // w20
      LogicJSONObject *v12; // x21
      const LogicSpellListener *v13; // x20
      SendAllianceMailMessage *v14; // x21
    
      GameScreen::GameScreen(this, a2);
      *(_QWORD *)this = off_100460320;
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 26) = 0;
      BattleScreen::initializeMembers(this);
      isReplay = (#1080 *)LogicBattle::isReplay(*(UnbindFacebookAccountMessage **)(*((_QWORD *)a2 + 14) + 168LL));
      if ( (_DWORD)isReplay )
      {
        isReplay = (#1080 *)GameSettings::isLandscapeReplay((ClanPage *)GameSettings::sm_pInstance);
        if ( (_DWORD)isReplay )
        {
          Instance = (GameMain *)GameMain::getInstance(isReplay);
          isReplay = (#1080 *)GameMain::setLandscape(Instance, 1);
        }
      }
      v6 = GameMain::getInstance(isReplay);
      StageWidth = (#1080 *)GameMain::getStageWidth(v6);
      *(float *)&BattleScreen::STAGE_WIDTH = (float)(int)StageWidth;
      v8 = GameMain::getInstance(StageWidth);
      StageHeight = (#1080 *)GameMain::getStageHeight(v8);
      *(float *)&BattleScreen::STAGE_HEIGHT = (float)(int)StageHeight;
      v10 = GameMain::getInstance(StageHeight);
      v11 = *(_DWORD *)(v10 + 120) == 2 && *(_DWORD *)(GameMain::getInstance((#1080 *)v10) + 124) != 0;
      v12 = (LogicJSONObject *)operator new(344);
      RenderSystem::RenderSystem(v12, 0, v11, 1, 0);
      *((_QWORD *)this + 30) = v12;
      *((_BYTE *)v12 + 64) = 1;
      v13 = *(const LogicSpellListener **)(GameScreen::getLogicGame(this) + 64);
      v14 = (SendAllianceMailMessage *)operator new(24);
      GameObjectManager::GameObjectManager(v14, v13, *((LogicJSONObject **)this + 30));
      *((_QWORD *)this + 33) = v14;
      LogicGameObjectManager::setListener(v13, v14);
      BattleScreen::sm_pInstance = (__int64)this;
    }

    // attributes: thunk
    void __fastcall BattleScreen::BattleScreen(BattleScreen *this, #945 *a2)
    {
      __ZN12BattleScreenC2EP8GameMode(this, a2);
    }

    void __fastcall BattleScreen::~BattleScreen(LogicTutorialManager *this)
    {
      GameMain *Instance; // x0
      LogicSpacePartition *v3; // x0
      void *v4; // x0
      __int64 LogicGame; // x0
      __int64 v6; // x21
      LogicSpellListener *v7; // x0
      __int64 v8; // x8
      __int64 v9; // x9
      unsigned __int64 v10; // x10
      unsigned int v11; // w22
      _QWORD *v12; // x21
      _QWORD *v13; // x24
      __int64 v14; // x8
      __int64 v15; // x21
      __int64 v16; // x0
      __int64 v17; // x8
      __int64 v18; // x0
      void *v19; // x21
      _QWORD *v20; // x21
      int v21; // w8
      __int64 v22; // x22
      #1142 *v23; // x0
      #1142 *v24; // x23
      int v25; // w8
      __int64 v26; // x0
      __int64 v27; // x0
      __int64 v28; // x0
      __int64 v29; // x0
      __int64 v30; // x0
      __int64 v31; // x0
      __int64 v32; // x0
      __int64 v33; // x0
      void *v34; // x0
    
      *(_QWORD *)this = off_100460320;
      Instance = (GameMain *)GameMain::getInstance(this);
      GameMain::setLandscape(Instance, 0);
      TutorialManager::releaseContent((LogicTutorialManager *)((char *)this + 8));
      v3 = (LogicSpacePartition *)*((_QWORD *)this + 35);
      if ( v3 )
      {
        LogicSpacePartition::destruct(v3);
        v4 = (void *)*((_QWORD *)this + 35);
        if ( v4 )
          operator delete(v4);
        *((_QWORD *)this + 35) = 0;
      }
      SoundManager::stopMusic((#1040 *)SoundManager::sm_pInstance);
      LogicGame = GameScreen::getLogicGame(this);
      v6 = LogicGame;
      if ( LogicGame )
      {
        v7 = *(LogicSpellListener **)(LogicGame + 64);
        if ( v7 )
        {
          LogicGameObjectManager::destructGameObjects(v7, 0, 1);
          LogicGameObjectManager::setListener(*(_QWORD *)(v6 + 64), 0);
        }
      }
      v8 = *((_QWORD *)this + 26);
      v9 = *((_QWORD *)this + 27);
      if ( v9 != v8 )
      {
        v10 = 0;
        v11 = 1;
        do
        {
          v12 = *(_QWORD **)(v8 + 8 * v10);
          if ( v12 )
          {
            if ( *v12 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
            operator delete(v12);
            v8 = *((_QWORD *)this + 26);
            v9 = *((_QWORD *)this + 27);
          }
          v10 = v11++;
        }
        while ( v10 < (v9 - v8) >> 3 );
      }
      v13 = (_QWORD *)((char *)this + 376);
      v14 = *((int *)this + 97);
      if ( (int)v14 >= 1 )
      {
        v15 = v14 - 1;
        do
        {
          v16 = *(_QWORD *)(*v13 + 8 * v15);
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          v17 = v15-- + 1;
        }
        while ( v17 > 1 );
      }
      *((_DWORD *)this + 97) = 0;
      v18 = *((_QWORD *)this + 36);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      *((_QWORD *)this + 36) = 0;
      v19 = (void *)*((_QWORD *)this + 31);
      if ( v19 )
      {
        SpellTargetIndicator::~SpellTargetIndicator(*((MovieClipHelper **)this + 31));
        operator delete(v19);
      }
      *((_QWORD *)this + 31) = 0;
      v20 = (_QWORD *)((char *)this + 192);
      v21 = *((_DWORD *)this + 51);
      v22 = (unsigned int)(v21 - 1);
      if ( v21 >= 1 )
      {
        do
        {
          v23 = (#1142 *)LogicArrayList<ReleasedSpellIndicator *>::remove((char *)this + 192, v22);
          v24 = v23;
          if ( v23 )
          {
            ReleasedSpellIndicator::~ReleasedSpellIndicator(v23);
            operator delete(v24);
          }
          v25 = v22 + 1;
          v22 = (unsigned int)(v22 - 1);
        }
        while ( v25 > 1 );
      }
      v26 = *((_QWORD *)this + 34);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      *((_QWORD *)this + 34) = 0;
      v27 = *((_QWORD *)this + 45);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      *((_QWORD *)this + 45) = 0;
      v28 = *((_QWORD *)this + 32);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      *((_QWORD *)this + 32) = 0;
      v29 = *((_QWORD *)this + 44);
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      *((_QWORD *)this + 44) = 0;
      v30 = *((_QWORD *)this + 30);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      *((_QWORD *)this + 30) = 0;
      v31 = *((_QWORD *)this + 19);
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
      *((_QWORD *)this + 19) = 0;
      v32 = *((_QWORD *)this + 29);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
      *((_QWORD *)this + 29) = 0;
      BattleScreen::sm_pInstance = 0;
      BattleScreen::initializeMembers(this);
      v33 = *((_QWORD *)this + 47);
      if ( v33 )
        operator delete[](v33);
      *v13 = 0;
      *((_QWORD *)this + 48) = 0;
      v34 = (void *)*((_QWORD *)this + 26);
      if ( v34 )
        operator delete(v34);
      if ( *v20 )
        operator delete[](*v20);
      *v20 = 0;
      *((_QWORD *)this + 25) = 0;
      *(_QWORD *)this = off_100467950;
      TutorialManager::~TutorialManager((LogicTutorialManager *)((char *)this + 8));
    }

    // attributes: thunk
    void __fastcall BattleScreen::~BattleScreen(LogicTutorialManager *this)
    {
      __ZN12BattleScreenD2Ev(this);
    }

    void __fastcall BattleScreen::~BattleScreen(LogicTutorialManager *this)
    {
      BattleScreen::~BattleScreen(this);
      operator delete(this);
    }

    #1106 *__fastcall BattleScreen::enter(LogicJSONObject **this)
    {
      bool v2; // w1
      int **v3; // x20
      LogicSpacePartition *v4; // x21
      const ChangeAllianceMemberRoleOkMessage *LocationData; // x21
      float v6; // s0
      int v7; // s1
      Sprite *v8; // x22
      LogicJSONObject *v9; // x23
      void (__fastcall *v10)(LogicJSONObject *, Sprite *, __int64); // x25
      const #1249 *Layer; // x0
      __int64 ChildIndex; // x0
      MovieClipHelper *v13; // x22
      CombatHUD *v14; // x22
      #1080 *v15; // x0
      #1080 *Instance; // x0
      #1080 *isEditorModeActive; // x0
      __int64 v18; // x22
      Sprite *v19; // x23
      __int64 AmbientSound; // x0
      #1080 *updated; // x0
      #1080 *v22; // x0
      #1106 *result; // x0
      #1106 *v24; // x20
    
      GameScreen::enter((GameScreen *)this);
      Application::setKeepScreenOn((Application *)1, v2);
      *((_BYTE *)this + 332) = 0;
      v3 = *(int ***)(GameScreen::getLogicGame((LogicChest *)this) + 168);
      v4 = (LogicSpacePartition *)operator new(24);
      LogicSpacePartition::LogicSpacePartition(v4, *v3[1], v3[1][1]);
      *(this + 35) = v4;
      LocationData = (const ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData((UnbindFacebookAccountMessage *)v3);
      RenderSystem::setLocationData(*(this + 30), LocationData);
      BattleScreen::updateRenderSystemTransform((LogicTutorialManager *)this);
      v6 = *(float *)&BattleScreen::STAGE_HEIGHT
         / (float)((*(float (__fastcall **)(_QWORD))(*(_QWORD *)*(this + 30) + 96LL))(*(this + 30))
                 + (float)(*(float *)&BattleScreen::OFFSET_Y * -2.0));
      v7 = *(_DWORD *)"ffF?";
      if ( v6 >= 0.775 )
      {
        v7 = 1063675494;
        if ( v6 <= 0.9 )
          v7 = LODWORD(v6);
      }
      *((_DWORD *)this + 45) = v7;
      *((_DWORD *)this + 46) = v7;
      *((_DWORD *)this + 47) = 1065353216;
      *((_DWORD *)this + 81) = 0;
      v8 = (Sprite *)operator new(96);
      Sprite::Sprite(v8, 3);
      *(this + 44) = v8;
      v9 = *(this + 30);
      v10 = *(void (__fastcall **)(LogicJSONObject *, Sprite *, __int64))(*(_QWORD *)v9 + 168LL);
      Layer = (const #1249 *)RenderSystem::getLayer(v9, 9);
      ChildIndex = Sprite::getChildIndex(v9, Layer);
      v10(v9, v8, ChildIndex);
      v13 = (MovieClipHelper *)operator new(160);
      SpellTargetIndicator::SpellTargetIndicator(v13, *(this + 44));
      *(this + 31) = v13;
      TutorialManager::initForCombat((#928 *)(this + 1), *(this + 44));
      v14 = (CombatHUD *)operator new(536);
      v15 = CombatHUD::CombatHUD(v14, *(this + 44));
      *(this + 32) = v14;
      Instance = (#1080 *)GameMain::getInstance(v15);
      isEditorModeActive = (#1080 *)GameMain::isEditorModeActive(Instance);
      if ( ((unsigned __int8)isEditorModeActive & 1) == 0 )
      {
        v18 = *(_QWORD *)(GameMain::getInstance(isEditorModeActive) + 72);
        v19 = (Sprite *)operator new(96);
        Sprite::Sprite(v19, 2);
        *(this + 19) = v19;
        *((_BYTE *)v19 + 64) = 1;
        DisplayObject::setXY(v19, *(float *)&BattleScreen::STAGE_WIDTH * 0.5, *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*(this + 19) + 168LL))(*(this + 19), *(this + 30), 0);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 168LL))(v18, *(this + 19), 0);
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v18 + 168LL))(v18, *(this + 32), 1);
        *((_DWORD *)this + 98) = LogicBattle::getSecondsLeft((#1028 **)v3) + 1000;
        BattleScreen::updateSounds((LogicTutorialManager *)this, (const UnbindFacebookAccountMessage *)v3);
      }
      AmbientSound = LogicLocationData::getAmbientSound(LocationData);
      *(this + 46) = (LogicJSONObject *)SoundManager::playSound(
                                          SoundManager::sm_pInstance,
                                          AmbientSound,
                                          0xFFFFFFFFLL,
                                          1.0,
                                          COERCE_LONG_DOUBLE((unsigned __int128)0));
      BattleScreen::updateIsPlayerInTop((LogicTutorialManager *)this);
      updated = (#1080 *)BattleScreen::updateViewTransform((LogicTutorialManager *)this, 0.0);
      v22 = (#1080 *)GameMain::getInstance(updated);
      if ( (GameMain::isEditorModeActive(v22) & 1) == 0
        && (LogicLocationData::getNoStartScreen(LocationData) & 1) == 0
        && (unsigned int)LogicBattle::showStartHUD((UnbindFacebookAccountMessage *)v3) )
      {
        BattleScreen::createBattleStartScreen((LogicTutorialManager *)this);
      }
      CombatHUD::start(*(this + 32));
      result = (#1106 *)MessageManager::removePendingBattleResultMessage((MessageManager *)MessageManager::sm_pInstance);
      v24 = result;
      if ( result )
      {
        BattleScreen::createBattleEndHUD((LogicTutorialManager *)this, result);
        (*(void (__fastcall **)(#1106 *))(*(_QWORD *)v24 + 48LL))(v24);
        return (#1106 *)(*(__int64 (__fastcall **)(#1106 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
      return result;
    }

    __int64 __fastcall BattleScreen::updateRenderSystemTransform(LogicTutorialManager *this)
    {
      #1080 *Instance; // x0
      #1080 *isEditorModeActive; // x0
      int v4; // w20
      __int64 LogicGame; // x0
      __int64 v6; // x8
      _BOOL4 v7; // w21
      float v8; // s8
      __int64 ClientGlobals; // x0
      int v10; // w8
    
      Instance = (#1080 *)GameMain::getInstance(this);
      isEditorModeActive = (#1080 *)GameMain::isEditorModeActive(Instance);
      if ( ((unsigned __int8)isEditorModeActive & 1) != 0 )
      {
        BattleScreen::SCALE = 1065353216;
        BattleScreen::OFFSET_Y = 0;
      }
      else
      {
        v4 = *(unsigned __int8 *)(GameMain::getInstance(isEditorModeActive) + 144);
        LogicGame = GameScreen::getLogicGame(this);
        v6 = *(_QWORD *)(LogicGame + 168);
        if ( v6 )
          v7 = *(_DWORD *)(v6 + 16) == 3;
        else
          v7 = 0;
        v8 = *(float *)&BattleScreen::STAGE_HEIGHT;
        if ( v4 )
        {
          *(float *)&BattleScreen::SCALE = *(float *)&BattleScreen::STAGE_HEIGHT / 880.0;
          BattleScreen::OFFSET_Y = 1122369536;
        }
        else
        {
          ClientGlobals = LogicDataTables::getClientGlobals((pthread_attr_t *)LogicGame);
          if ( v7 )
          {
            *(float *)&BattleScreen::SCALE = v8 / *(float *)(ClientGlobals + 148);
            v10 = *(_DWORD *)(LogicDataTables::getClientGlobals((pthread_attr_t *)ClientGlobals) + 152LL);
          }
          else
          {
            *(float *)&BattleScreen::SCALE = v8 / *(float *)(ClientGlobals + 140);
            v10 = *(_DWORD *)(LogicDataTables::getClientGlobals((pthread_attr_t *)ClientGlobals) + 144LL);
          }
          BattleScreen::OFFSET_Y = v10;
        }
      }
      (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 30) + 40LL))(
        *((_QWORD *)this + 30),
        *(float *)&BattleScreen::SCALE);
      return DisplayObject::setXY(
               *((DisplayObject **)this + 30),
               0.0,
               (float)(*(float *)&BattleScreen::OFFSET_Y * *(float *)&BattleScreen::SCALE)
             + (float)(*(float *)&BattleScreen::STAGE_HEIGHT * -0.5));
    }

    __int64 __fastcall BattleScreen::updateSounds(LogicTutorialManager *this, const UnbindFacebookAccountMessage *a2)
    {
      __int64 result; // x0
      int v5; // w22
      int SecondsLeft; // w19
      ChangeAllianceMemberRoleOkMessage *LocationData; // x0
      ChangeAllianceMemberRoleOkMessage *v8; // x21
      int MusicCount; // w23
      int v10; // w24
      int MusicStartTime; // w0
      __int64 Music; // x0
      int v14; // w23
      int v15; // w24
      int v16; // w26
      _DWORD *v17; // x25
      int SoundStartTime; // w22
      __int64 Sound; // x0
    
      result = LogicBattle::isBattleEndedCalled(a2);
      if ( (result & 1) == 0 )
      {
        v5 = LogicBattle::isOnOvertime(a2);
        SecondsLeft = LogicBattle::getSecondsLeft((#1028 **)a2);
        LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(a2);
        v8 = LocationData;
        if ( (v5 & 1) == 0 )
        {
          MusicCount = LogicLocationData::getMusicCount(LocationData);
          if ( MusicCount >= 1 )
          {
            v10 = 0;
            while ( 1 )
            {
              MusicStartTime = LogicLocationData::getMusicStartTime(v8, v10);
              if ( SecondsLeft <= MusicStartTime && *((_DWORD *)this + 98) > MusicStartTime )
                break;
              if ( ++v10 >= MusicCount )
                goto LABEL_11;
            }
            Music = LogicLocationData::getMusic(v8, v10);
            SoundManager::playMusic(SoundManager::sm_pInstance, Music);
          }
        }
    LABEL_11:
        result = LogicLocationData::getSoundCount(v8);
        v14 = result;
        if ( (int)result < 1 )
        {
    LABEL_17:
          v17 = (_DWORD *)((char *)this + 392);
        }
        else
        {
          v15 = 0;
          v16 = v5 ^ 1;
          v17 = (_DWORD *)((char *)this + 392);
          while ( 1 )
          {
            SoundStartTime = LogicLocationData::getSoundStartTime(v8, v15);
            result = LogicLocationData::getSoundPlayOvertime(v8, v15);
            if ( ((unsigned int)result | v16) == 1 && SecondsLeft <= SoundStartTime && *v17 > SoundStartTime )
              break;
            if ( ++v15 >= v14 )
              goto LABEL_17;
          }
          Sound = LogicLocationData::getSound(v8, v15);
          result = SoundManager::playSound(
                     SoundManager::sm_pInstance,
                     Sound,
                     0xFFFFFFFFLL,
                     1.0,
                     COERCE_LONG_DOUBLE((unsigned __int128)0));
        }
        *v17 = SecondsLeft;
      }
      return result;
    }

    __int64 __fastcall BattleScreen::updateIsPlayerInTop(vm_address_t *this)
    {
      #945 *Instance; // x0
      #962 *BattleBottomAvatar; // x20
      __int64 LogicGame; // x0
      bool v5; // w21
      LogicJSONObject *v6; // x19
      int v7; // w22
      int v8; // w3
    
      Instance = (#945 *)GameMode::getInstance(this);
      BattleBottomAvatar = (#962 *)GameMode::getBattleBottomAvatar(Instance);
      LogicGame = GameScreen::getLogicGame((LogicChest *)this);
      v5 = BattleBottomAvatar == (#962 *)LogicGameMode::getAvatar(LogicGame);
      v6 = (LogicJSONObject *)*(this + 30);
      v7 = *(_DWORD *)LogicClientAvatar::getAccountId(BattleBottomAvatar);
      v8 = *(_DWORD *)(LogicClientAvatar::getAccountId(BattleBottomAvatar) + 4);
      return RenderSystem::setBottomPlayerInfo(v6, v5, v7, v8);
    }

    __int64 __fastcall BattleScreen::updateViewTransform(LogicJSONObject **this, float a2)
    {
      __int64 result; // x0
      float v5; // s9
      float v6; // s10
      float v7; // s0
      float v8; // s1
      float v9; // s2
      float v10; // s2
      float v11; // s0
      float v12; // s1
      float v13; // s2
      float v14; // s2
      float v15; // s9
      float v16; // s0
      float v17; // s1
      float v18; // s2
      float v19; // s0
      int v20; // w20
      int TilemapHeight; // w0
      #1080 *v22; // x0
      __int64 Instance; // x0
      long double v24; // q1
    
      result = RenderSystem::isPaused(*(this + 30));
      if ( (result & 1) == 0 )
      {
        v5 = *((float *)this + 44);
        v6 = *((float *)this + 42);
        if ( *(_DWORD *)(GameMain::getInstance((#1080 *)result) + 120) )
        {
          v8 = *((float *)this + 41);
          v7 = *((float *)this + 42);
          v9 = v8 - v7;
          if ( (float)(v8 - v7) < 0.0 )
            v9 = -v9;
          if ( v9 > 0.01 )
          {
            v10 = (float)(a2 * 6.0) / 0.016667;
            if ( v10 >= 1.0 )
              v7 = (float)(v7 + (float)(v8 * (float)(v10 + -1.0))) / v10;
            else
              v7 = *((float *)this + 41);
          }
          *((float *)this + 41) = v7;
          v12 = *((float *)this + 43);
          v11 = *((float *)this + 44);
          v13 = v12 - v11;
          if ( (float)(v12 - v11) < 0.0 )
            v13 = -v13;
          if ( v13 > 0.001 )
          {
            v14 = (float)(a2 * 6.0) / 0.016667;
            if ( v14 >= 1.0 )
              v11 = (float)(v11 + (float)(v12 * (float)(v14 + -1.0))) / v14;
            else
              v11 = *((float *)this + 43);
          }
          *((float *)this + 43) = v11;
          if ( *(this + 34) )
          {
            v15 = *((float *)this + 45);
          }
          else
          {
            v15 = 1.0;
            if ( *((float *)this + 81) >= 1.0 )
              v15 = (float)(*((float *)this + 45) * 0.7) + 0.3;
          }
          BattleScreen::getCurrentZoomSpeed((LogicTutorialManager *)this);
          v17 = *((float *)this + 46);
          v18 = v17 - v15;
          if ( (float)(v17 - v15) < 0.0 )
            v18 = -(float)(v17 - v15);
          if ( v18 > 0.0002 )
          {
            v19 = (float)(v16 * a2) / 0.016667;
            if ( v19 >= 1.0 )
              v15 = (float)(v15 + (float)(v17 * (float)(v19 + -1.0))) / v19;
            else
              v15 = *((float *)this + 46);
          }
          *((float *)this + 46) = v15;
          v5 = v15 * *((float *)this + 43);
          v6 = *((float *)this + 41);
        }
        DisplayObject::rotate(*(this + 19), v6, v5, v5);
        v20 = 250 * RenderSystem::getTilemapWidth(*(this + 30));
        TilemapHeight = RenderSystem::getTilemapHeight(*(this + 30));
        v22 = (#1080 *)RenderSystem::logicToGlobal(
                         *(this + 30),
                         v20,
                         250 * TilemapHeight,
                         (float *)&BattleScreen::LEVEL_CENTER_SCREEN_X,
                         (float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
        Instance = GameMain::getInstance(v22);
        LODWORD(v24) = BattleScreen::LEVEL_CENTER_SCREEN_Y;
        return DisplayObject::globalToLocal(
                 *(_QWORD *)(Instance + 72),
                 &BattleScreen::LEVEL_CENTER_SCREEN_X,
                 &BattleScreen::LEVEL_CENTER_SCREEN_Y,
                 *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_X,
                 v24);
      }
      return result;
    }

    __int64 __fastcall BattleScreen::createBattleStartScreen(LogicTutorialManager *this)
    {
      #1381 *v2; // x20
      #1080 *v3; // x0
      __int64 Instance; // x0
    
      v2 = (#1381 *)operator new(200);
      BattleStartHUD::BattleStartHUD(v2);
      *((_QWORD *)this + 45) = v2;
      v3 = (#1080 *)DisplayObject::setPixelSnappedXY(
                      v2,
                      *(float *)&BattleScreen::STAGE_WIDTH * 0.5,
                      *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
      Instance = GameMain::getInstance(v3);
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(Instance + 80) + 160LL))(
               *(_QWORD *)(Instance + 80),
               *((_QWORD *)this + 45));
    }

    __int64 __fastcall BattleScreen::createBattleEndHUD(LogicTutorialManager *this, #1106 *a2)
    {
      __int64 result; // x0
      __int64 v5; // x0
      int v6; // w21
      __int64 v7; // x22
      int FullUpdateSize; // w21
      char *v9; // x22
      __int64 Game; // x0
      __int64 LogicGame; // x0
      LogicJSONString *v12; // x21
      #1080 *v13; // x0
      __int64 Instance; // x0
      #1225 *ByteStream; // x0
      char *v16; // x20
      __int64 v17; // x0
      int Length; // w19
      BattleResultMessage *v19; // x21
      ByteStream *v20; // x0
      _BYTE v21[48]; // [xsp+20h] [xbp-50h] BYREF
    
      if ( *((_QWORD *)this + 34) )
        return Debugger::warning((__siginfo *)"m_pBattleEndHUD already created", (const char *)a2);
      v5 = *((_QWORD *)this + 45);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 45) = 0;
      v6 = *((_DWORD *)this + 51);
      if ( v6 >= 1 )
      {
        v7 = 0;
        do
          ReleasedSpellIndicator::setToRemoveState(*(#1142 **)(*((_QWORD *)this + 24) + 8 * v7++));
        while ( v6 != (_DWORD)v7 );
      }
      *((_DWORD *)this + 82) = -1;
      SpellTargetIndicator::hide(*((MovieClipHelper **)this + 31));
      if ( a2 )
      {
        FullUpdateSize = BattleResultMessage::getFullUpdateSize(a2);
        v9 = (char *)BattleResultMessage::removeFullUpdateBytes(a2);
        if ( v9 )
        {
          ByteStream::ByteStream((ByteStream *)v21, 10);
          ByteStream::setByteArray((ByteStream *)v21, v9, FullUpdateSize);
          Game = GameScreen::getGame(this);
          SectorManager::receiveSectorState(*(LogicRegionData **)(Game + 96), (#1225 *)v21);
          ByteStream::destruct((#1225 *)v21);
        }
        RenderSystem::setPaused(*((LogicJSONObject **)this + 30), 1);
      }
      SoundManager::stopAllSounds(SoundManager::sm_pInstance, *((_QWORD *)this + 46));
      LogicGame = GameScreen::getLogicGame(this);
      LogicBattle::updatePrevCoordinates(*(UnbindFacebookAccountMessage **)(LogicGame + 168));
      v12 = (LogicJSONString *)operator new(352);
      BattleEndHUD::BattleEndHUD(v12, a2);
      *((_QWORD *)this + 34) = v12;
      v13 = (#1080 *)DisplayObject::setPixelSnappedXY(
                       v12,
                       *(float *)&BattleScreen::STAGE_WIDTH * 0.5,
                       *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
      Instance = GameMain::getInstance(v13);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(Instance + 88) + 168LL))(
        *(_QWORD *)(Instance + 88),
        *((_QWORD *)this + 34),
        0);
      CombatHUD::battleEnded(*((#1022 **)this + 32));
      CombatHUD::setHUDVisible(*((#1022 **)this + 32), 0, 0);
      result = CombatHUD::setHUDVisible(*((#1022 **)this + 32), 1, 0);
      if ( a2 )
      {
        if ( !BattleScreen::sm_pSavedBattleResultMessage )
        {
          ByteStream = (#1225 *)PiranhaMessage::getByteStream(a2);
          v16 = (char *)ByteStream::removeByteArray(ByteStream);
          v17 = PiranhaMessage::getByteStream(a2);
          Length = ByteStream::getLength(v17);
          v19 = (BattleResultMessage *)operator new(152);
          BattleResultMessage::BattleResultMessage(v19);
          BattleScreen::sm_pSavedBattleResultMessage = (__int64)v19;
          v20 = (ByteStream *)PiranhaMessage::getByteStream(v19);
          ByteStream::setByteArray(v20, v16, Length);
          return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)BattleScreen::sm_pSavedBattleResultMessage + 24LL))(BattleScreen::sm_pSavedBattleResultMessage);
        }
      }
      return result;
    }

    __int64 __fastcall BattleScreen::isLandscape(LogicTutorialManager *this)
    {
      return *(unsigned __int8 *)(GameMain::getInstance(this) + 144);
    }

    bool __fastcall BattleScreen::isReplay(LogicTutorialManager *this)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(GameScreen::getLogicGame(this) + 168);
      return v1 && *(_DWORD *)(v1 + 16) == 3;
    }

    __int64 __fastcall BattleScreen::exit(LogicTutorialManager *this)
    {
      bool v2; // w1
      #1080 *v3; // x0
      GameMain *Instance; // x0
    
      GameScreen::exit(this);
      MessageManager::clearUdpInfo((MessageManager *)MessageManager::sm_pInstance);
      SoundManager::stopAllSounds(SoundManager::sm_pInstance, 0);
      *((_QWORD *)this + 46) = 0;
      v3 = (#1080 *)Application::setKeepScreenOn(0, v2);
      Instance = (GameMain *)GameMain::getInstance(v3);
      return GameMain::disableBlur(Instance, 1);
    }

    __int64 __fastcall BattleScreen::handleTouchPressed(__int64 a1, __int64 a2)
    {
      __int64 LogicGame; // x0
      __int64 v5; // x8
      __int64 v6; // x0
      #1147 *TutorialManager; // x0
      __int64 CurrentTutorial; // x0
      const #943 *v9; // x21
      #1132 *v10; // x22
      GameMode *Game; // x0
      __int64 SelectedSpellButtonIndex; // x21
      char isTauntSelectorVisible; // w0
      __int64 v14; // x0
      __int64 SpellButton; // x24
      int *Spell; // x22
      #895 *SpellData; // x0
      TextField *SimulatedLastSpell; // x23
      MovieClipHelper *v19; // x24
      const #895 *v20; // x0
    
      LogicGame = GameScreen::getLogicGame((LogicChest *)a1);
      v5 = *(_QWORD *)(LogicGame + 168);
      if ( !v5 || *(_DWORD *)(v5 + 16) != 3 )
      {
        GameMain::getInstance((#1080 *)LogicGame);
        v6 = GameScreen::getLogicGame((LogicChest *)a1);
        TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(v6);
        CurrentTutorial = LogicTutorialManager::getCurrentTutorial(TutorialManager);
        v9 = (const #943 *)CurrentTutorial;
        if ( CurrentTutorial
          && LogicTutorialData::getBubbleObject(CurrentTutorial)
          && !(unsigned int)LogicTutorialData::getFinishRequirement(v9) )
        {
          v10 = (#1132 *)operator new(32);
          LogicCompleteTutorialBattleCommand::LogicCompleteTutorialBattleCommand(v10);
          LogicCompleteTutorialBattleCommand::setTutorialData(v10, v9);
          Game = (GameMode *)GameScreen::getGame((LogicChest *)a1);
          GameMode::addCommand(Game, v10, 1);
        }
        SelectedSpellButtonIndex = CombatHUD::getSelectedSpellButtonIndex(*(#1022 **)(a1 + 256), 0);
        isTauntSelectorVisible = CombatHUD::isTauntSelectorVisible(*(_QWORD *)(a1 + 256));
        if ( (_DWORD)SelectedSpellButtonIndex == -1 )
        {
          *(_DWORD *)(a1 + 336) = *(_DWORD *)(a2 + 76);
          *(_DWORD *)(a1 + 340) = *(_DWORD *)(a2 + 52);
          *(_DWORD *)(a1 + 344) = *(_DWORD *)(a2 + 56);
        }
        else if ( !(isTauntSelectorVisible & 1 | (*(_DWORD *)(a1 + 328) != -1)) )
        {
          v14 = GameScreen::getLogicGame((LogicChest *)a1);
          if ( (LogicBattle::isBattleEndedCalled(*(UnbindFacebookAccountMessage **)(v14 + 168)) & 1) == 0 )
          {
            SpellButton = CombatHUD::getSpellButton(*(_QWORD *)(a1 + 256), 0, SelectedSpellButtonIndex);
            Spell = (int *)SpellButton::getSpell();
            SpellData = (#895 *)LogicSpell::getSpellData((TextField *)Spell);
            SimulatedLastSpell = (TextField *)Spell;
            if ( (unsigned int)LogicSpellData::isMirror(SpellData) )
              SimulatedLastSpell = (TextField *)LogicSummoner::getSimulatedLastSpell(*(_QWORD *)(SpellButton + 464));
            if ( SimulatedLastSpell )
            {
              if ( *(_DWORD *)(a1 + 328) != *(_DWORD *)(a2 + 76) )
              {
                SpellTargetIndicator::hide(*(MovieClipHelper **)(a1 + 248));
                *(_DWORD *)(a1 + 328) = *(_DWORD *)(a2 + 76);
              }
              v19 = *(MovieClipHelper **)(a1 + 248);
              v20 = (const #895 *)LogicSpell::getSpellData(SimulatedLastSpell);
              SpellTargetIndicator::start(v19, v20, Spell[2], SelectedSpellButtonIndex, *(LogicJSONObject **)(a1 + 240));
              BattleScreen::updateSpellTargetIndicatorPosition(
                (LogicTutorialManager *)a1,
                *(float *)(a2 + 52),
                *(float *)(a2 + 56),
                0,
                *(MovieClipHelper **)(a1 + 248),
                1);
            }
          }
        }
      }
      return 0;
    }

    __int64 __fastcall BattleScreen::updateSpellTargetIndicatorPosition(
            LogicTutorialManager *this,
            float a2,
            long double a3,
            int a4,
            MovieClipHelper *a5,
            _BOOL4 a6)
    {
      float v9; // s8
      UnbindFacebookAccountMessage *v12; // x24
      #945 *Game; // x23
      #1094 *SpellData; // x22
      const char *v15; // x2
      #1240 *LogicGame; // x26
      char isBottomPlayerInLogicTop; // w0
      bool v18; // w6
      char isCoordinateInUIArea; // w26
      __int64 v20; // x27
      LogicDoSpellCommand *v21; // x27
      __int64 SpellButtonIndex; // x26
      __int64 AccountId; // x28
      unsigned int HigherInt; // w25
      const char *LowerInt; // x0
      __int64 LeaderCharacter; // x24
      int DeckSpellIndex; // w0
      __int64 v28; // x8
      int v29; // w23
      int GlobalID; // [xsp+Ch] [xbp-84h]
      int v32; // [xsp+10h] [xbp-80h] BYREF
      int v33; // [xsp+14h] [xbp-7Ch]
      _BYTE v34[4]; // [xsp+18h] [xbp-78h] BYREF
      int v35; // [xsp+1Ch] [xbp-74h]
      int v36; // [xsp+20h] [xbp-70h] BYREF
      int v37; // [xsp+24h] [xbp-6Ch] BYREF
      float v38; // [xsp+28h] [xbp-68h] BYREF
      float v39; // [xsp+2Ch] [xbp-64h] BYREF
    
      v9 = *(float *)&a3;
      v38 = 0.0;
      v39 = 0.0;
      DisplayObject::globalToLocal(*((_QWORD *)this + 30), &v39, &v38, a2, a3);
      v12 = *(UnbindFacebookAccountMessage **)(GameScreen::getLogicGame(this) + 168);
      Game = (#945 *)GameScreen::getGame(this);
      SpellData = (#1094 *)SpellTargetIndicator::getSpellData(a5);
      Debugger::doAssert((Debugger *)(SpellData != 0), (bool)"", v15);
      v36 = 0;
      v37 = 0;
      RenderSystem::screenToLogic(*((LogicJSONObject **)this + 30), a2, v9, &v37, &v36);
      LogicVector2::LogicVector2((LogicVector2 *)v34, v37, v36);
      LogicVector2::LogicVector2((LogicVector2 *)&v32, -1, -1);
      LogicGame = (#1240 *)GameScreen::getLogicGame(this);
      isBottomPlayerInLogicTop = RenderSystem::isBottomPlayerInLogicTop(*((LogicJSONObject **)this + 30));
      LogicSummoner::findPositionForSpell(
        SpellData,
        (const #895 *)v34,
        (const #1240 *)&v32,
        LogicGame,
        0,
        isBottomPlayerInLogicTop,
        v18);
      v37 = v32;
      v36 = v33;
      SpellTargetIndicator::setCurrentSpellPosition(a5, v32, v33);
      LogicVector2::destruct((LogicVector2 *)&v32);
      isCoordinateInUIArea = BattleScreen::isCoordinateInUIArea(this, v35);
      SpellTargetIndicator::updateScale(a5, v37, v36, *((LogicJSONObject **)this + 30), isCoordinateInUIArea);
      v20 = 0;
      if ( a4 )
      {
        if ( isCoordinateInUIArea & 1 | (SpellData == 0) || !a6 )
          goto LABEL_10;
        GlobalID = LogicData::getGlobalID(SpellData);
        v21 = (LogicDoSpellCommand *)operator new(48);
        LogicDoSpellCommand::LogicDoSpellCommand(v21);
        SpellButtonIndex = SpellTargetIndicator::getSpellButtonIndex(a5);
        AccountId = GameMode::getAccountId(Game);
        HigherInt = LogicLong::getHigherInt(AccountId);
        LowerInt = (const char *)LogicLong::getLowerInt(AccountId);
        LeaderCharacter = LogicBattle::getLeaderCharacter(v12, HigherInt, LowerInt);
        DeckSpellIndex = LogicSummoner::getDeckSpellIndex(LeaderCharacter, SpellButtonIndex);
        LogicDoSpellCommand::setSpellDeckIndex((__int64)v21, DeckSpellIndex);
        LogicDoSpellCommand::setCoordinate(v21, v37, v36);
        LogicSpellData::getBuffType(SpellData);
        v28 = *(_QWORD *)(GameScreen::getLogicGame(this) + 168);
        if ( v28 && *(_DWORD *)(v28 + 16) == 3 )
        {
          (**(void (__fastcall ***)(LogicDoSpellCommand *))v21)(v21);
          (*(void (__fastcall **)(LogicDoSpellCommand *))(*(_QWORD *)v21 + 16LL))(v21);
          v29 = 1;
        }
        else
        {
          v29 = GameMode::addCommand(Game, v21, 1);
          if ( !v29 )
            goto LABEL_10;
        }
        TutorialManager::setSpellDragDone((LogicTutorialManager *)((char *)this + 8));
        Summoner::spellCommandCreated(*(#1312 **)(LeaderCharacter + 40), SpellData);
        CombatHUD::fakeSpellUsed(*((#1022 **)this + 32), (const #1094 *)LeaderCharacter, SpellButtonIndex);
        if ( v29 )
        {
          BattleScreen::addReleasedTargetIndicator(this, v37, v36, GlobalID, a5, a6);
          v20 = 1;
    LABEL_11:
          SpellTargetIndicator::hide(a5);
          return v20;
        }
    LABEL_10:
        BattleScreen::addReleasedTargetIndicator(this, 0, 0, 0, a5, a6);
        v20 = 0;
        goto LABEL_11;
      }
      return v20;
    }

    __int64 __fastcall BattleScreen::handleTouchMoved(MovieClipHelper **this, __int64 a2, double a3, long double a4)
    {
      int v6; // w8
    
      v6 = *(_DWORD *)(a2 + 76);
      if ( v6 == *((_DWORD *)this + 82) )
      {
        LODWORD(a4) = *(_DWORD *)(a2 + 56);
        BattleScreen::updateSpellTargetIndicatorPosition(
          (LogicTutorialManager *)this,
          *(float *)(a2 + 52),
          a4,
          0,
          *(this + 31),
          1);
        v6 = *(_DWORD *)(a2 + 76);
      }
      if ( v6 == *((_DWORD *)this + 84) )
      {
        *((_DWORD *)this + 85) = *(_DWORD *)(a2 + 52);
        *((_DWORD *)this + 86) = *(_DWORD *)(a2 + 56);
      }
      return 0;
    }

    __int64 __fastcall BattleScreen::handleTouchReleased(__int64 a1, __int64 a2)
    {
      __int64 LogicGame; // x0
      __int64 v5; // x8
      long double v6; // q1
      int v7; // w8
      int updated; // w8
      #1022 *v9; // x0
      int isSpellDragActive; // w8
      CombatHUD *v11; // x0
      #1080 *isTauntSelectorVisible; // x0
      BadgePopup *Instance; // x0
      __int64 v14; // x21
      int v15; // w9
      const char *v16; // x1
      __int64 String; // x0
      __int64 v18; // x0
      _DWORD v20[2]; // [xsp+8h] [xbp-28h] BYREF
    
      LogicGame = GameScreen::getLogicGame((LogicChest *)a1);
      v5 = *(_QWORD *)(LogicGame + 168);
      if ( !v5 || *(_DWORD *)(v5 + 16) != 3 )
      {
        if ( *(_BYTE *)(GameMain::getInstance((#1080 *)LogicGame) + 356) && *(_QWORD *)(a1 + 272) )
        {
          BattleScreen::sendGoHomeMessage((LogicTutorialManager *)a1);
          return 0;
        }
        v7 = *(_DWORD *)(a1 + 328);
        if ( *(_DWORD *)(a2 + 76) == v7 )
        {
          LODWORD(v6) = *(_DWORD *)(a2 + 56);
          updated = BattleScreen::updateSpellTargetIndicatorPosition(
                      (LogicTutorialManager *)a1,
                      *(float *)(a2 + 52),
                      v6,
                      1,
                      *(MovieClipHelper **)(a1 + 248),
                      1);
          v9 = *(#1022 **)(a1 + 256);
          if ( v9 && ((updated ^ 1) & 1) == 0 )
            CombatHUD::selectSpellButton(v9, 0, -1);
          *(_DWORD *)(a1 + 328) = -1;
          SpellTargetIndicator::hide(*(MovieClipHelper **)(a1 + 248));
        }
        else if ( v7 == -1 )
        {
          isSpellDragActive = CombatHUD::isSpellDragActive(*(_QWORD *)(a1 + 256));
          v11 = *(CombatHUD **)(a1 + 256);
          if ( isSpellDragActive )
          {
            CombatHUD::cancelAllSpellDrags(v11);
          }
          else
          {
            isTauntSelectorVisible = (#1080 *)CombatHUD::isTauntSelectorVisible(v11);
            if ( ((unsigned __int8)isTauntSelectorVisible & 1) == 0 )
            {
              Instance = (BadgePopup *)GameMain::getInstance(isTauntSelectorVisible);
              if ( !*((_BYTE *)Instance + 357) )
              {
                v14 = GUI::getInstance(Instance);
                v15 = *(_DWORD *)(a2 + 56);
                v20[0] = *(_DWORD *)(a2 + 52);
                v20[1] = v15;
                String = StringTable::getString((#1308 *)"TID_NO_SPELL_SELECTED_TAP", v16);
                GUI::showFloaterTextAt(v14, v20, String, 4294914918LL, COERCE_LONG_DOUBLE((unsigned __int128)0));
              }
            }
          }
        }
      }
      v18 = *(_QWORD *)(a1 + 256);
      if ( v18 )
        CombatHUD::handleTouchReleased(v18, a2);
      if ( *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 336) )
      {
        *(_DWORD *)(a1 + 340) = -1082130432;
        *(_DWORD *)(a1 + 344) = -1082130432;
        *(_DWORD *)(a1 + 336) = -1;
      }
      return 0;
    }

    thread_state_t *__fastcall BattleScreen::sendGoHomeMessage(LogicTutorialManager *this)
    {
      thread_state_t *result; // x0
      GameStateManager *Instance; // x0
      thread_state_t *v4; // x0
      GameStateManager *v5; // x0
      thread_state_t *v6; // x0
      __int64 v7; // x0
      GoHomeMessage *v8; // x20
    
      result = (thread_state_t *)BattleScreen::destructSavedBattleResult(this);
      if ( !*((_BYTE *)this + 332) )
      {
        Instance = (GameStateManager *)GameStateManager::getInstance(result);
        v4 = (thread_state_t *)GameStateManager::clearGameData(Instance);
        v5 = (GameStateManager *)GameStateManager::getInstance(v4);
        v6 = (thread_state_t *)GameStateManager::clearReplayData(v5);
        v7 = GameStateManager::getInstance(v6);
        GameStateManager::changeState(v7, 4);
        v8 = (GoHomeMessage *)operator new(72);
        GoHomeMessage::GoHomeMessage(v8);
        result = (thread_state_t *)MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v8);
        *((_BYTE *)this + 332) = 1;
      }
      return result;
    }

    __int64 __fastcall BattleScreen::disableSpellTargeting(LogicTutorialManager *this)
    {
      *((_DWORD *)this + 82) = -1;
      return SpellTargetIndicator::hide(*((MovieClipHelper **)this + 31));
    }

    __int64 __fastcall BattleScreen::getCombatHUD(LogicTutorialManager *this)
    {
      return *((_QWORD *)this + 32);
    }

    __int64 __fastcall BattleScreen::handleTouchCancelled(__int64 this, int a2)
    {
      _DWORD *v3; // x19
    
      v3 = (_DWORD *)this;
      if ( *(_DWORD *)(this + 328) == a2 )
      {
        *(_DWORD *)(this + 328) = -1;
        this = SpellTargetIndicator::hide(*(MovieClipHelper **)(this + 248));
      }
      if ( v3[84] == a2 )
      {
        v3[85] = -1082130432;
        v3[86] = -1082130432;
        v3[84] = -1;
      }
      return this;
    }

    __int64 __fastcall BattleScreen::isSpellBlocked(LogicTutorialManager *this, float a2, long double a3, const #895 *a4)
    {
      float v5; // s8
      #1240 *LogicGame; // x21
      char isBottomPlayerInLogicTop; // w0
      bool v10; // w6
      __int64 v12; // [xsp+0h] [xbp-50h] BYREF
      _BYTE v13[4]; // [xsp+8h] [xbp-48h] BYREF
      int v14; // [xsp+Ch] [xbp-44h]
      int v15; // [xsp+10h] [xbp-40h] BYREF
      int v16; // [xsp+14h] [xbp-3Ch] BYREF
      float v17; // [xsp+18h] [xbp-38h] BYREF
      float v18; // [xsp+1Ch] [xbp-34h] BYREF
    
      v5 = *(float *)&a3;
      v17 = 0.0;
      v18 = 0.0;
      DisplayObject::globalToLocal(*((_QWORD *)this + 30), &v18, &v17, a2, a3);
      v15 = 0;
      v16 = 0;
      RenderSystem::screenToLogic(*((LogicJSONObject **)this + 30), a2, v5, &v16, &v15);
      LogicVector2::LogicVector2((LogicVector2 *)v13, v16, v15);
      LogicVector2::LogicVector2((LogicVector2 *)&v12, -1, -1);
      LogicGame = (#1240 *)GameScreen::getLogicGame(this);
      isBottomPlayerInLogicTop = RenderSystem::isBottomPlayerInLogicTop(*((LogicJSONObject **)this + 30));
      LogicSummoner::findPositionForSpell(
        a4,
        (const #895 *)v13,
        (const #1240 *)&v12,
        LogicGame,
        0,
        isBottomPlayerInLogicTop,
        v10);
      LogicVector2::destruct((LogicVector2 *)&v12);
      return BattleScreen::isCoordinateInUIArea(this, v14);
    }

    bool __fastcall BattleScreen::isCoordinateInUIArea(LogicJSONObject **this, int a2)
    {
      LogicDataTables *LogicGame; // x0
      UnbindFacebookAccountMessage *v5; // x21
      __int64 Globals; // x22
      int TilemapHeight; // w21
      int v8; // w23
    
      LogicGame = (LogicDataTables *)GameScreen::getLogicGame((LogicChest *)this);
      v5 = (UnbindFacebookAccountMessage *)*((_QWORD *)LogicGame + 21);
      Globals = LogicDataTables::getGlobals(LogicGame);
      TilemapHeight = LogicBattle::getTilemapHeight(v5);
      v8 = 500 * *(_DWORD *)(Globals + 196);
      if ( (unsigned int)RenderSystem::isBottomPlayerInLogicTop(*(this + 30)) )
        return v8 > a2;
      else
        return 500 * TilemapHeight - v8 <= a2;
    }

    __int64 __fastcall BattleScreen::addReleasedTargetIndicator(
            LogicTutorialManager *this,
            int a2,
            int a3,
            int a4,
            MovieClipHelper *a5,
            int a6)
    {
      __int64 v12; // x23
      #1142 *v13; // x21
      DisplayObject *v14; // x23
      float v15; // s0
      float v16; // s8
      float v17; // s0
      __int64 result; // x0
      #1142 *v19; // [xsp+8h] [xbp-58h] BYREF
    
      v12 = SpellTargetIndicator::removeSpellNameClip(a5);
      if ( a6 )
      {
        v13 = (#1142 *)operator new(56);
        ReleasedSpellIndicator::ReleasedSpellIndicator(v13);
        v19 = v13;
        *((_DWORD *)v13 + 2) = a2;
        *((_DWORD *)v13 + 3) = a3;
        *((_BYTE *)v13 + 48) = 0;
        *(_QWORD *)v13 = SpellTargetIndicator::removeAreaIndicator(a5);
        *((_DWORD *)v13 + 4) = a4;
        SpellTargetIndicator::removeDummyLogicObjects(a5, (char *)v13 + 24);
        *((_QWORD *)v13 + 5) = v12;
        v14 = *(DisplayObject **)v13;
        if ( *(_QWORD *)v13 )
        {
          SpellTargetIndicator::getX(a5);
          v16 = v15;
          SpellTargetIndicator::getY(a5);
          DisplayObject::setXY(v14, v16, v17);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 44) + 160LL))(
            *((_QWORD *)this + 44),
            *(_QWORD *)v13);
        }
        if ( !a4 )
          ReleasedSpellIndicator::setToRemoveState(v13);
        return LogicArrayList<ReleasedSpellIndicator *>::add((char *)this + 192, &v19);
      }
      else
      {
        result = SpellTargetIndicator::destroyDummyObjects(a5);
        if ( v12 )
          return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      }
      return result;
    }

    void __fastcall BattleScreen::update(LogicTutorialManager *this, long double a2, float a3)
    {
      float **v6; // x20
      float **v7; // x21
      float *v8; // x22
      float v9; // s0
      float **v10; // x8
      float **v11; // x9
      float **v12; // x8
      __int64 LogicGame; // x0
      _BOOL8 isNPCBattle; // x0
      BadgePopup *Instance; // x0
      vm_address_t *TopPopup; // x20
      GameMode *v17; // x0
      __int64 v18; // x0
      __int64 v19; // x8
      __int64 v20; // x21
      __int64 v21; // x0
      __int64 v22; // x8
      __int64 v23; // x8
      __int64 v24; // x0
      #1147 *TutorialManager; // x0
      #1257 *MovieClip; // x0
      __int64 v27; // x0
      double v28; // d1
      __int64 Game; // x0
      #945 *v30; // x0
      int isPaused; // w0
      float v32; // s0
      float v33; // s10
      __int64 v34; // x0
      LogicJSONString *v35; // x0
      bool v36; // w1
      bool v37; // w3
      __int64 v38; // x8
      __int64 v39; // x21
      #1142 *v40; // x22
      __int64 v41; // x8
      const UnbindFacebookAccountMessage *v42; // x20
      GameMode *v43; // x0
      char v44; // w22
      const char *v45; // x1
      #962 *WinnerAvatar; // x27
      #945 *v47; // x0
      __int64 AccountId; // x28
      vm_address_t *v49; // x24
      #945 *v50; // x0
      __int64 BattleBottomAvatar; // x26
      #945 *v52; // x0
      const #962 *BattleTopAvatar; // x23
      __int64 LeaderCharacter; // x25
      __int64 v55; // x21
      int Stars; // w23
      int v57; // w25
      int v58; // w26
      __int64 v59; // x0
      int v60; // w21
      const #941 *NextWinnerChest; // x27
      int v62; // w24
      int v63; // w28
      __int64 v64; // x8
      #1106 *v65; // x1
      const #1143 *Arena; // x0
      ChangeAllianceMemberRoleOkMessage *LocationData; // x0
      int NoEndScreen; // w0
      LogicJSONString *v69; // x0
      __int64 v70; // x20
      void (__fastcall *v71)(__int64, float); // x21
      float Alpha; // s0
      __int64 v73; // x0
      ChangeAllianceMemberRoleOkMessage *v74; // x0
      int MatchLengthSeconds; // w21
      ChangeAllianceMemberRoleOkMessage *v76; // x0
      int v77; // w22
      int MillisecondsGone; // w0
      float v79; // s1
      float v80; // s0
      float v81; // s0
      int v82; // w20
      int TotalFrames; // w0
      float v84; // s1
      float v85; // s0
      #941 *v86; // [xsp+0h] [xbp-B0h]
      float v87; // [xsp+10h] [xbp-A0h]
      int ExpReward; // [xsp+10h] [xbp-A0h]
      double v89; // [xsp+20h] [xbp-90h]
      int SecondsGone; // [xsp+20h] [xbp-90h]
      int v91; // [xsp+38h] [xbp-78h] BYREF
      int v92; // [xsp+3Ch] [xbp-74h] BYREF
    
      v6 = (float **)*((_QWORD *)this + 26);
      if ( v6 != *((float ***)this + 27) )
      {
        do
        {
          v7 = v6++;
          while ( 1 )
          {
            v8 = *v7;
            (*(void (__fastcall **)(_QWORD, float))(**(_QWORD **)*v7 + 80LL))(*(_QWORD *)*v7, 1.0 - (float)((*v7)[2] / 0.2));
            v9 = v8[2] + *(float *)&a2;
            v8[2] = v9;
            v10 = (float **)*((_QWORD *)this + 27);
            if ( v9 <= 0.2 )
              break;
            v11 = v6;
            if ( v6 != v10 )
            {
              memmove(v7, v6, (char *)v10 - (char *)v6);
              v11 = (float **)*((_QWORD *)this + 27);
            }
            v12 = v11 - 1;
            *((_QWORD *)this + 27) = v11 - 1;
            if ( v8 )
            {
              if ( *(_QWORD *)v8 )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
              operator delete(v8);
              v12 = (float **)*((_QWORD *)this + 27);
            }
            if ( v7 == v12 )
              goto LABEL_13;
          }
        }
        while ( v6 != v10 );
      }
    LABEL_13:
      LogicGame = GameScreen::getLogicGame(this);
      isNPCBattle = LogicBattle::isNPCBattle(*(UnbindFacebookAccountMessage **)(LogicGame + 168));
      if ( isNPCBattle )
      {
        Instance = (BadgePopup *)GUI::getInstance((BadgePopup *)isNPCBattle);
        TopPopup = (vm_address_t *)GUI::getTopPopup(Instance);
        v17 = (GameMode *)GameMode::getInstance(TopPopup);
        GameMode::setPaused(v17, TopPopup != 0);
      }
      v18 = *((_QWORD *)this + 29);
      if ( v18 )
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v18 + 272LL))(v18, a2);
      v19 = *((int *)this + 97);
      if ( (int)v19 >= 1 )
      {
        v20 = v19 - 1;
        do
        {
          if ( (unsigned int)MovieClip::isStopped(*(#1257 **)(*((_QWORD *)this + 47) + 8 * v20)) )
          {
            v21 = LogicArrayList<MovieClip *>::remove((char *)this + 376, v20);
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
          }
          v22 = v20-- + 1;
        }
        while ( v22 > 1 );
      }
      if ( *((_QWORD *)this + 19) )
        BattleScreen::updateViewTransform((LogicJSONObject **)this, *(float *)&a2);
      BattleScreen::updateIsPlayerInTop((vm_address_t *)this);
      v23 = *((_QWORD *)this + 45);
      if ( v23 )
      {
        if ( (*(_BYTE *)(v23 + 8) = *(_BYTE *)(*((_QWORD *)this + 32) + 528LL) ^ 1,
              v24 = GameScreen::getLogicGame(this),
              TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(v24),
              LogicTutorialManager::getCurrentTutorial(TutorialManager))
          && (unsigned int)LogicTutorialData::disableBattleStartScreen()
          || (BattleStartHUD::update(*((#1381 **)this + 45), a3),
              MovieClip = (#1257 *)GUIContainer::getMovieClip(*((#1254 **)this + 45)),
              (unsigned int)MovieClip::isStopped(MovieClip)) )
        {
          v27 = *((_QWORD *)this + 45);
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
          *((_QWORD *)this + 45) = 0;
        }
      }
      if ( *(float *)(GameScreen::getGame(this) + 36) * 1000.0 / 50.0 >= 0.0 )
      {
        Game = GameScreen::getGame(this);
        v28 = 1.0;
        if ( *(float *)(Game + 36) * 1000.0 / 50.0 <= 1.0 )
          v28 = *(float *)(GameScreen::getGame(this) + 36) * 1000.0 / 50.0;
      }
      else
      {
        v28 = 0.0;
      }
      v89 = v28;
      v30 = (#945 *)GameScreen::getGame(this);
      if ( (GameMode::isPaused(v30) & 1) != 0
        || (isPaused = RenderSystem::isPaused(*((LogicJSONObject **)this + 30)), v32 = *(float *)&a2, isPaused) )
      {
        v89 = 1.0;
        v32 = 0.0;
      }
      v87 = v32;
      v33 = v89;
      GameObjectManager::update(*((SendAllianceMailMessage **)this + 33), v32, v33);
      *((float *)this + 80) = *((float *)this + 80) + *(float *)&a2;
      v34 = GameScreen::getLogicGame(this);
      if ( (unsigned int)LogicBattle::isBattleEndedCalled(*(UnbindFacebookAccountMessage **)(v34 + 168)) )
        *((float *)this + 81) = *((float *)this + 81) + *(float *)&a2;
      v35 = (LogicJSONString *)*((_QWORD *)this + 34);
      if ( v35 )
      {
        *((_BYTE *)v35 + 8) = *(_BYTE *)(*((_QWORD *)this + 32) + 528LL) ^ 1;
        BattleEndHUD::update(v35, a3);
        if ( *(float *)(*((_QWORD *)this + 34) + 208LL) > 30.0 )
          Application::setKeepScreenOn(0, v36);
      }
      v91 = 0;
      v92 = 0;
      RenderSystem::screenToLogic(
        *((LogicJSONObject **)this + 30),
        *((float *)this + 85),
        *((float *)this + 86),
        &v92,
        &v91);
      LogicMovementComponent::setDebugTouchPosition(
        (LogicMovementComponent *)(unsigned int)v92,
        v91,
        *((_DWORD *)this + 84) != -1,
        v37);
      RenderSystem::update(*((LogicJSONObject **)this + 30), v87);
      if ( (unsigned int)CombatHUD::getSelectedSpellButtonIndex(*((#1022 **)this + 32), 0) == -1 )
      {
        SpellTargetIndicator::hide(*((MovieClipHelper **)this + 31));
      }
      else if ( *((_DWORD *)this + 82) != -1 )
      {
        SpellTargetIndicator::update(*((MovieClipHelper **)this + 31), *(float *)&a2);
      }
      CombatHUD::update(*((CombatHUD **)this + 32), *(float *)&a2, a3, v33);
      v38 = *((int *)this + 51);
      if ( (int)v38 >= 1 )
      {
        v39 = v38 - 1;
        do
        {
          v40 = *(#1142 **)(*((_QWORD *)this + 24) + 8 * v39);
          if ( (unsigned int)ReleasedSpellIndicator::update(v40, *(float *)&a2) )
          {
            if ( v40 )
            {
              ReleasedSpellIndicator::~ReleasedSpellIndicator(v40);
              operator delete(v40);
            }
            LogicArrayList<ReleasedSpellIndicator *>::remove((char *)this + 192, v39);
          }
          v41 = v39-- + 1;
        }
        while ( v41 > 1 );
      }
      v42 = *(const UnbindFacebookAccountMessage **)(GameScreen::getLogicGame(this) + 168);
      BattleScreen::updateSounds(this, v42);
      if ( LogicBattle::isNPCBattle(v42) )
      {
        if ( LogicBattle::isFinished((ChangeAllianceMemberRoleOkMessage **)v42) && !*((_QWORD *)this + 34) )
        {
          v43 = (GameMode *)GameScreen::getGame(this);
          v44 = 1;
          GameMode::setPaused(v43, 1);
          SecondsGone = LogicBattle::getSecondsGone((#1028 **)v42);
          WinnerAvatar = (#962 *)LogicBattle::getWinnerAvatar(v42, v45);
          v47 = (#945 *)GameScreen::getGame(this);
          AccountId = GameMode::getAccountId(v47);
          ExpReward = LogicBattle::getExpReward(v42);
          v49 = (vm_address_t *)LogicBattle::getLoserScoreChange(v42);
          v50 = (#945 *)GameMode::getInstance(v49);
          BattleBottomAvatar = GameMode::getBattleBottomAvatar(v50);
          v52 = (#945 *)GameMode::getInstance((vm_address_t *)BattleBottomAvatar);
          BattleTopAvatar = (const #962 *)GameMode::getBattleTopAvatar(v52);
          LeaderCharacter = LogicBattle::getLeaderCharacter(v42, (const #962 *)BattleBottomAvatar);
          v55 = LogicBattle::getLeaderCharacter(v42, BattleTopAvatar);
          Stars = LogicSummoner::getStars(LeaderCharacter, v55);
          v57 = LogicSummoner::getStars(v55, LeaderCharacter);
          v58 = *(_DWORD *)(BattleBottomAvatar + 64);
          if ( WinnerAvatar )
          {
            v59 = LogicClientAvatar::getAccountId(WinnerAvatar);
            if ( (unsigned int)LogicLong::equals(v59, AccountId) )
            {
              v60 = LogicBattle::getWinnerScoreChange(v42);
              if ( (LogicBattle::hasPlayerFinishedNpcLevel((__int64)v42) & 1) != 0 )
              {
                NextWinnerChest = 0;
                v62 = 0;
                v44 = 1;
                v63 = 1;
              }
              else
              {
                Arena = (const #1143 *)LogicBattle::getArena(v42);
                NextWinnerChest = (const #941 *)LogicClientAvatar::getNextWinnerChest(WinnerAvatar, Arena);
                v44 = 0;
                v63 = 1;
                v62 = ExpReward;
              }
            }
            else
            {
              NextWinnerChest = 0;
              v63 = 2;
              v44 = 1;
              v60 = (int)v49;
              v62 = 0;
            }
          }
          else
          {
            NextWinnerChest = 0;
            v60 = 0;
            v62 = 0;
            v63 = 3;
          }
          LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(v42);
          NoEndScreen = LogicLocationData::getNoEndScreen(LocationData);
          if ( (v44 & 1) != 0 || ((NoEndScreen ^ 1) & 1) != 0 )
          {
            BattleScreen::createBattleEndHUD(this, 0);
            v69 = (LogicJSONString *)*((_QWORD *)this + 34);
            if ( v69 )
            {
              LODWORD(v86) = v62;
              BattleEndHUD::setNPCResult(v69, v63, SecondsGone, v58, v60, Stars, v57, 0, v86, NextWinnerChest);
            }
          }
          else
          {
            BattleScreen::sendGoHomeMessage(this);
          }
        }
        if ( (unsigned int)LogicBattle::isBattleEndedCalled(v42) )
          RenderSystem::removeGroundHighlight(*((LogicJSONObject **)this + 30));
      }
      else
      {
        v64 = *(_QWORD *)(GameScreen::getLogicGame(this) + 168);
        if ( v64
          && *(_DWORD *)(v64 + 16) == 3
          && LogicBattle::isFinished((ChangeAllianceMemberRoleOkMessage **)v42)
          && !*((_QWORD *)this + 34) )
        {
          v65 = (#1106 *)BattleScreen::sm_pSavedBattleResultMessage;
          if ( !BattleScreen::sm_pSavedBattleResultMessage )
            v65 = 0;
          BattleScreen::createBattleEndHUD(this, v65);
        }
      }
      TutorialManager::update((LogicTutorialManager *)((char *)this + 8), a3);
      if ( (unsigned int)LogicBattle::isOnOvertime(v42) && (LogicBattle::isBattleEndedCalled(v42) & 1) == 0 )
      {
        if ( *((_QWORD *)this + 36) )
        {
          v74 = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(v42);
          MatchLengthSeconds = LogicLocationData::getMatchLengthSeconds(v74);
          v76 = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(v42);
          v77 = 1000 * LogicLocationData::getOvertimeLengthSeconds(v76);
          MillisecondsGone = LogicBattle::getMillisecondsGone((#1028 **)v42);
          v79 = (float)((float)(MillisecondsGone - 1000 * MatchLengthSeconds) / (float)v77)
              + (float)((float)(MillisecondsGone - 1000 * MatchLengthSeconds) / (float)v77);
          if ( v79 >= 0.0 )
          {
            v80 = 1.0;
            if ( v79 <= 1.0 )
              v80 = (float)((float)(MillisecondsGone - 1000 * MatchLengthSeconds) / (float)v77)
                  + (float)((float)(MillisecondsGone - 1000 * MatchLengthSeconds) / (float)v77);
          }
          else
          {
            v80 = 0.0;
          }
          v81 = *((float *)this + 78)
              + (float)((float)(*((float *)this + 76) + (float)(v80 * (float)(*((float *)this + 77) - *((float *)this + 76))))
                      * *(float *)&a2);
          *((float *)this + 78) = v81;
          v82 = (int)v81;
          TotalFrames = MovieClip::getTotalFrames(*((#1257 **)this + 37));
          MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 37), v82 % TotalFrames);
          v84 = (float)(*(float *)&a2 * 0.5) + *((float *)this + 79);
          if ( v84 >= 0.0 )
          {
            v85 = 1.0;
            if ( v84 <= 1.0 )
              v85 = (float)(*(float *)&a2 * 0.5) + *((float *)this + 79);
          }
          else
          {
            v85 = 0.0;
          }
          *((float *)this + 79) = v85;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 80LL))(*((_QWORD *)this + 36));
        }
        else
        {
          BattleScreen::addOverTimeGlow(this);
        }
      }
      else
      {
        v70 = *((_QWORD *)this + 36);
        if ( v70 )
        {
          v71 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v70 + 80LL);
          Alpha = DisplayObject::getAlpha(*((_QWORD *)this + 36));
          v71(v70, Alpha - *(float *)&a2);
          if ( DisplayObject::getAlpha(*((_QWORD *)this + 36)) <= 0.0 )
          {
            v73 = *((_QWORD *)this + 36);
            if ( v73 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
            *((_QWORD *)this + 36) = 0;
          }
        }
      }
    }

    __int64 __fastcall BattleScreen::screenToLogic(LogicJSONObject **this, float a2, float a3, int *a4, int *a5)
    {
      return RenderSystem::screenToLogic(*(this + 30), a2, a3, a4, a5);
    }

    __int64 __fastcall BattleScreen::addOverTimeGlow(LogicTutorialManager *this, __int64 a2, const char *a3)
    {
      long double v3; // q8
      long double v4; // q9
      __int64 v6; // x0
      #1249 *MovieClip; // x0
      MovieClip *MovieClipByName; // x0
    
      v6 = *((_QWORD *)this + 36);
      if ( !v6 )
      {
        *(float *)&v3 = *(float *)&BattleScreen::STAGE_WIDTH / 750.0;
        *(float *)&v4 = *(float *)&BattleScreen::STAGE_HEIGHT / 1334.0;
        MovieClip = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/effects.sc", "overtime_vignette", a3);
        *((_QWORD *)this + 36) = MovieClip;
        DisplayObject::setX(MovieClip, *(float *)&BattleScreen::STAGE_WIDTH * -0.5);
        DisplayObject::setY(*((DisplayObject **)this + 36), *(float *)&BattleScreen::STAGE_HEIGHT * -0.5);
        (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 36) + 48LL))(*((_QWORD *)this + 36), v3);
        (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 36) + 56LL))(*((_QWORD *)this + 36), v4);
        MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 36), 0);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 19) + 168LL))(
          *((_QWORD *)this + 19),
          *((_QWORD *)this + 36),
          *(unsigned int *)(*((_QWORD *)this + 32) + 56LL));
        v6 = *((_QWORD *)this + 36);
      }
      *((_DWORD *)this + 79) = 0;
      *((_DWORD *)this + 78) = 0;
      *((_QWORD *)this + 38) = 0x42C8000042700000LL;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v6 + 80LL))(v6, COERCE_LONG_DOUBLE((unsigned __int128)0));
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 36), "vfx");
      *((_QWORD *)this + 37) = MovieClipByName;
      return MovieClip::gotoAndStopFrameIndex(MovieClipByName, 0);
    }

    void __fastcall BattleScreen::debugDraw(LogicTutorialManager *this)
    {
      ;
    }

    void __fastcall BattleScreen::onBattleEnded(LogicTutorialManager *this)
    {
      ;
    }

    bool __fastcall BattleScreen::isBattleEndHUDVisible(LogicTutorialManager *this)
    {
      return *((_QWORD *)this + 34) != 0;
    }

    __int64 __fastcall BattleScreen::getBattleEndHUD(LogicTutorialManager *this)
    {
      return *((_QWORD *)this + 34);
    }

    __int64 __fastcall BattleScreen::onBattleClosed(LogicTutorialManager *this)
    {
      GameMode *Game; // x0
    
      Game = (GameMode *)GameScreen::getGame(this);
      return GameMode::changeScreen(Game, 0, 0.0, 0.0);
    }

    __int64 __fastcall BattleScreen::removeReferences(__int64 this, const GameMode *a2, int a3)
    {
      __int64 v3; // x8
      __int64 v4; // x9
      __int64 v5; // x10
    
      v3 = *(int *)(this + 204);
      if ( (int)v3 >= 1 )
      {
        v4 = 0;
        v5 = *(_QWORD *)(this + 192);
        while ( 1 )
        {
          this = *(_QWORD *)(v5 + 8 * v4);
          if ( !*(_BYTE *)(this + 48) && *(_DWORD *)(this + 20) == a3 )
            break;
          if ( ++v4 >= v3 )
            return this;
        }
        return ReleasedSpellIndicator::setToRemoveState((#1142 *)this);
      }
      return this;
    }

    __int64 __fastcall BattleScreen::playSound(LogicTutorialManager *this, const #1354 *a2)
    {
      return SoundManager::playSound(
               SoundManager::sm_pInstance,
               a2,
               0xFFFFFFFFLL,
               1.0,
               COERCE_LONG_DOUBLE((unsigned __int128)0));
    }

    __int64 __fastcall BattleScreen::destructSavedBattleResult(LogicTutorialManager *this)
    {
      __int64 result; // x0
    
      result = BattleScreen::sm_pSavedBattleResultMessage;
      if ( BattleScreen::sm_pSavedBattleResultMessage )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)BattleScreen::sm_pSavedBattleResultMessage + 48LL))(BattleScreen::sm_pSavedBattleResultMessage);
        result = BattleScreen::sm_pSavedBattleResultMessage;
        if ( BattleScreen::sm_pSavedBattleResultMessage )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)BattleScreen::sm_pSavedBattleResultMessage + 8LL))(BattleScreen::sm_pSavedBattleResultMessage);
        BattleScreen::sm_pSavedBattleResultMessage = 0;
      }
      return result;
    }

    bool __fastcall BattleScreen::isSlowZoom(LogicTutorialManager *this)
    {
      float v1; // s0
    
      BattleScreen::getCurrentZoomSpeed(this);
      return v1 > 20.0;
    }

    float __fastcall BattleScreen::getCurrentZoomSpeed(LogicTutorialManager *this)
    {
      __int64 v1; // x8
      float result; // s0
      __int64 LogicGame; // x0
      int isBattleEndedCalled; // w0
    
      v1 = *((_QWORD *)this + 45);
      if ( v1 && *(float *)(v1 + 188) < 3.8 && !*(_BYTE *)(v1 + 196) )
        return *(float *)"";
      if ( *((_QWORD *)this + 34) )
        return 450.0;
      LogicGame = GameScreen::getLogicGame(this);
      isBattleEndedCalled = LogicBattle::isBattleEndedCalled(*(UnbindFacebookAccountMessage **)(LogicGame + 168));
      result = 40.0;
      if ( !isBattleEndedCalled )
        return 12.0;
      return result;
    }

    __int64 __fastcall BattleScreen::getRenderSystem(LogicTutorialManager *this)
    {
      return *((_QWORD *)this + 30);
    }

    __int64 __fastcall BattleScreen::manaReceived(LogicJSONObject **this, int a2, const char *a3, __int64 a4)
    {
      int v5; // w21
      #1257 *MovieClip; // x20
      MovieClip *MovieClipByName; // x24
      const char *v10; // x1
      long double v11; // q1
      float v13; // [xsp+10h] [xbp-60h] BYREF
      float v14; // [xsp+14h] [xbp-5Ch] BYREF
      float v15; // [xsp+18h] [xbp-58h] BYREF
      float v16; // [xsp+1Ch] [xbp-54h] BYREF
      String v17; // [xsp+20h] [xbp-50h] BYREF
      #1257 *v18; // [xsp+38h] [xbp-38h] BYREF
    
      v5 = (int)a3;
      MovieClip = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "elixir_float_txt", a3);
      v18 = MovieClip;
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "icon");
      String::format((String *)"%d", v10, a4);
      MovieClip::setText(MovieClipByName, "txt", &v17);
      String::~String(&v17);
      MovieClip::playOnce(MovieClip);
      RenderSystem::logicToGlobal(*(this + 30), a2, v5, &v16, &v15);
      *(float *)&v11 = v15;
      DisplayObject::globalToLocal(*(this + 32), &v14, &v13, v16, v11);
      DisplayObject::setXY(MovieClip, v14, v13);
      (*(void (__fastcall **)(_QWORD, #1257 *))(*(_QWORD *)*(this + 32) + 160LL))(*(this + 32), MovieClip);
      return LogicArrayList<MovieClip *>::add((__int64)(this + 47), (__int64 *)&v18);
    }

    __int64 __fastcall BattleScreen::onSimulatedSpellUsed(__int64 this, int a2, const char *a3, const #895 *a4)
    {
      int v5; // w21
      __int64 v7; // x19
      #1257 *MovieClip; // x20
      MovieClip *MovieClipByName; // x24
      __int64 ManaCost; // x0
      const char *v11; // x1
      long double v12; // q1
      float v13; // [xsp+10h] [xbp-60h] BYREF
      float v14; // [xsp+14h] [xbp-5Ch] BYREF
      float v15; // [xsp+18h] [xbp-58h] BYREF
      float v16; // [xsp+1Ch] [xbp-54h] BYREF
      String v17; // [xsp+20h] [xbp-50h] BYREF
      #1257 *v18; // [xsp+38h] [xbp-38h] BYREF
    
      v5 = (int)a3;
      v7 = this;
      if ( !*(_BYTE *)(*(_QWORD *)(this + 256) + 528LL) )
      {
        MovieClip = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "elixir_float_txt", a3);
        v18 = MovieClip;
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "icon");
        ManaCost = LogicSpellData::getManaCost(a4);
        String::format((String *)"-%d", v11, ManaCost);
        MovieClip::setText(MovieClipByName, "txt", &v17);
        String::~String(&v17);
        MovieClip::playOnce(MovieClip);
        RenderSystem::logicToGlobal(*(LogicJSONObject **)(v7 + 240), a2, v5, &v16, &v15);
        *(float *)&v12 = v15;
        DisplayObject::globalToLocal(*(_QWORD *)(v7 + 256), &v14, &v13, v16, v12);
        DisplayObject::setXY(MovieClip, v14, v13);
        (*(void (__fastcall **)(_QWORD, #1257 *))(**(_QWORD **)(v7 + 256) + 160LL))(*(_QWORD *)(v7 + 256), MovieClip);
        return LogicArrayList<MovieClip *>::add(v7 + 376, (__int64 *)&v18);
      }
      return this;
    }

    __int64 __fastcall BattleScreen::onSpellUsed(CombatHUD **this, int a2, int a3, const #895 *a4, int a5)
    {
      __int64 SummonCharacter; // x0
      int DeployTime; // w0
      __int64 result; // x0
      int v13; // w23
      int v14; // w8
      __int64 i; // x24
    
      if ( !*((_BYTE *)*(this + 32) + 528)
        && (int)LogicSpellData::getSummonNumber(a4) >= 1
        && LogicSpellData::getSummonCharacter(a4) )
      {
        SummonCharacter = LogicSpellData::getSummonCharacter(a4);
        DeployTime = LogicCharacterData::getDeployTime(SummonCharacter);
        CombatHUD::showMiniTimer(*(this + 32), a2, a3, (float)DeployTime * 0.001, 1);
      }
      result = LogicData::getGlobalID(a4);
      v13 = result;
      v14 = *((_DWORD *)this + 51);
      if ( v14 >= 1 )
      {
        for ( i = 0; i < v14; ++i )
        {
          result = *((_QWORD *)*(this + 24) + i);
          if ( !*(_BYTE *)(result + 48)
            && *(_DWORD *)(result + 8) == a2
            && *(_DWORD *)(result + 12) == a3
            && *(_DWORD *)(result + 16) == v13 )
          {
            if ( a5 )
            {
              if ( !*(_DWORD *)(result + 20) )
                *(_DWORD *)(result + 20) = a5;
            }
            else
            {
              result = ReleasedSpellIndicator::setToRemoveState((#1142 *)result);
              v14 = *((_DWORD *)this + 51);
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall BattleScreen::onEnemySpellUsed(__int64 this, int a2, int a3, const #895 *a4)
    {
      __int64 v7; // x21
      __int64 SummonCharacter; // x0
      float v9; // s0
    
      v7 = this;
      if ( !*(_BYTE *)(*(_QWORD *)(this + 256) + 528LL) )
      {
        this = LogicSpellData::getSummonNumber(a4);
        if ( (int)this >= 1 )
        {
          this = LogicSpellData::getSummonCharacter(a4);
          if ( this )
          {
            SummonCharacter = LogicSpellData::getSummonCharacter(a4);
            v9 = (float)(int)LogicCharacterData::getDeployTime(SummonCharacter) * 0.001;
            return CombatHUD::showMiniTimer(*(CombatHUD **)(v7 + 256), a2, a3, v9, 0);
          }
        }
      }
      return this;
    }

    __int64 __fastcall BattleScreen::onBattleEvent(LogicTutorialManager *this, const Projectile *a2)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 32);
      if ( result )
        return CombatHUD::onBattleEvent(result, a2);
      return result;
    }

    __int64 __fastcall BattleScreen::sendBattleEvent(LogicTutorialManager *this, Projectile *a2, int a3)
    {
      pthread_attr_t *Type; // x0
      __int64 result; // x0
      SendBattleEventMessage *v8; // x20
    
      Type = (pthread_attr_t *)LogicBattleEvent::getType(a2);
      if ( (unsigned int)((_DWORD)Type - 1) > 1 )
      {
        if ( (unsigned __int8)Type == 3 )
        {
          result = LogicDataTables::getClientGlobals(Type);
          if ( !*(_BYTE *)(result + 368) )
            goto LABEL_9;
        }
      }
      else
      {
        result = LogicDataTables::getGlobals((LogicDataTables *)Type);
        if ( !*(_BYTE *)(result + 400) )
        {
    LABEL_9:
          if ( a2 )
          {
            (*(void (__fastcall **)(Projectile *))(*(_QWORD *)a2 + 16LL))(a2);
            return (*(__int64 (__fastcall **)(Projectile *))(*(_QWORD *)a2 + 8LL))(a2);
          }
          return result;
        }
      }
      if ( a3 )
        (*(void (__fastcall **)(LogicTutorialManager *, Projectile *))(*(_QWORD *)this + 280LL))(this, a2);
      v8 = (SendBattleEventMessage *)operator new(80);
      SendBattleEventMessage::SendBattleEventMessage(v8);
      SendBattleEventMessage::setBattleEvent((__int64)v8, (__int64)a2);
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v8);
    }

    __int64 __fastcall BattleScreen::getInstance(LogicTutorialManager *this)
    {
      return BattleScreen::sm_pInstance;
    }

    #1254 *__fastcall BattleScreen::setPaused(LogicJSONObject **a1, _BOOL4 a2)
    {
      #1254 *result; // x0
      MovieClip *MovieClip; // x0
    
      RenderSystem::setPaused(a1[30], a2);
      CombatHUD::setPaused(a1[32], 1);
      result = a1[45];
      if ( result )
      {
        MovieClip = (MovieClip *)GUIContainer::getMovieClip(result);
        if ( a2 )
        {
          result = (#1254 *)MovieClip::pause(MovieClip);
          *((_BYTE *)a1[45] + 8) = 0;
        }
        else
        {
          result = (#1254 *)MovieClip::play(MovieClip);
          *((_BYTE *)a1[45] + 8) = 1;
        }
      }
      return result;
    }

    void __fastcall BattleScreen::startResourceLoading(UnbindFacebookAccountMessage *a1)
    {
      #1091 *TilemapData; // x20
      ChangeAllianceMemberRoleOkMessage *LocationData; // x21
      const String *FileName; // x0
      const char *v5; // x2
      const String *OverlayFileName; // x0
      int i; // w21
      __int64 LeaderByIndex; // x0
      AcceptChallengeMessage *Deck; // x22
      const char *v10; // x23
      TextField *Spell; // x0
      LogicTutorialManager *SpellData; // x0
      #1178 *v13; // x2
      int BackgroundDecoCount; // w21
      __int64 v15; // x22
      LogicTutorialManager *BackgroundDecoData; // x0
      #1178 *v17; // x2
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 GameObjects; // x0
      _QWORD *v20; // x20
      __int64 v21; // x23
      __int64 j; // x24
      #916 *Data; // x21
      int DataType; // w22
      #1178 *v25; // x2
      #945 *Instance; // x0
      #962 *BattleBottomAvatar; // x0
      __int64 AccountId; // x21
      int HigherInt; // w20
      int LowerInt; // w0
      int AccountIndex; // w20
      const String *v32; // x2
      AcceptChallengeMessage *v33; // x19
      int SpellCnt; // w20
      const char *v35; // x21
      TextField *v36; // x0
      TextField *v37; // x22
      #895 *v38; // x0
      const String *IconFileName; // x0
      String v40; // [xsp+0h] [xbp-A0h] BYREF
      String v41; // [xsp+18h] [xbp-88h] BYREF
      String v42; // [xsp+30h] [xbp-70h] BYREF
      _BYTE v43[40]; // [xsp+48h] [xbp-58h] BYREF
    
      ResourceListener::ResourceListener((ResourceListener *)v43);
      TilemapData = (#1091 *)LogicBattle::getTilemapData(a1);
      LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(a1);
      FileName = (const String *)LogicTilemapData::getFileName(TilemapData);
      ResourceListener::addFile((ResourceListener *)v43, FileName, -1, -1, -1, -1);
      String::String(&v42, "image/range.png");
      ResourceListener::addImageFile(v43, &v42, 1, 1, 0, 1);
      String::~String(&v42);
      if ( *(_DWORD *)LogicLocationData::getOverlayFileName(LocationData)
        && *(_DWORD *)LogicLocationData::getOverlayExportName(LocationData) )
      {
        OverlayFileName = (const String *)LogicLocationData::getOverlayFileName(LocationData);
        ResourceListener::addFile((ResourceListener *)v43, OverlayFileName, -1, -1, -1, -1);
      }
      for ( i = 0; i < 2; ++i )
      {
        LeaderByIndex = LogicBattle::getLeaderByIndex(a1, i, v5);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)LeaderByIndex + 200LL))(LeaderByIndex) )
        {
          Deck = (AcceptChallengeMessage *)LogicBattle::getDeck(a1, i);
          v10 = 0;
          do
          {
            Spell = (TextField *)LogicSpellDeck::getSpell(Deck, v10);
            if ( Spell )
            {
              SpellData = (LogicTutorialManager *)LogicSpell::getSpellData(Spell);
              BattleScreen::loadAssetsFromSpell(SpellData, (const #895 *)v43, v13);
            }
            v10 = (const char *)(unsigned int)((_DWORD)v10 + 1);
          }
          while ( (int)v10 < 8 );
        }
      }
      BackgroundDecoCount = LogicTilemapData::getBackgroundDecoCount(TilemapData);
      if ( BackgroundDecoCount >= 1 )
      {
        v15 = 0;
        do
        {
          BackgroundDecoData = (LogicTutorialManager *)LogicTilemapData::getBackgroundDecoData(TilemapData, v15);
          BattleScreen::loadAssetsFromBackgroundDeco(BackgroundDecoData, (const #932 *)v43, v17);
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (int)v15 < BackgroundDecoCount );
      }
      LogicGameObjectManager = (LogicSpellListener *)LogicBattle::getLogicGameObjectManager(a1);
      GameObjects = LogicGameObjectManager::getGameObjects(LogicGameObjectManager);
      v20 = (_QWORD *)GameObjects;
      v21 = *(int *)(GameObjects + 12);
      if ( (int)v21 >= 1 )
      {
        for ( j = 0; j < v21; ++j )
        {
          Data = (#916 *)LogicGameObject::getData(*(GameMode **)(*v20 + 8 * j));
          DataType = LogicData::getDataType(Data);
          GameObjects = (*(__int64 (__fastcall **)(#916 *))(*(_QWORD *)Data + 56LL))(Data);
          if ( (_DWORD)GameObjects )
          {
            GameObjects = BattleScreen::loadAssetsFromCharacter(Data, (const #1025 *)v43, v25);
          }
          else if ( DataType > 12 )
          {
            if ( DataType > 41 )
            {
              if ( DataType == 42 )
              {
                GameObjects = BattleScreen::loadAssetsFromDeco(Data, (const #902 *)v43, v25);
              }
              else if ( DataType == 44 )
              {
                GameObjects = BattleScreen::loadAssetsFromSpawnPoint(Data, (const LogicTutorialData *)v43, v25);
              }
            }
            else if ( DataType == 13 )
            {
              GameObjects = BattleScreen::loadAssetsFromEgg(Data, (const #1076 *)v43, v25);
            }
            else if ( DataType == 22 )
            {
              GameObjects = BattleScreen::loadAssetsFromAreaEffectObject(Data, (const #1108 *)v43, v25);
            }
          }
          else if ( DataType == 10 )
          {
            GameObjects = BattleScreen::loadAssetsFromProjectile(Data, (const #1152 *)v43, v25);
          }
        }
      }
      Instance = (#945 *)GameMode::getInstance((vm_address_t *)GameObjects);
      if ( Instance )
      {
        BattleBottomAvatar = (#962 *)GameMode::getBattleBottomAvatar(Instance);
        AccountId = LogicClientAvatar::getAccountId(BattleBottomAvatar);
        HigherInt = LogicLong::getHigherInt(AccountId);
        LowerInt = LogicLong::getLowerInt(AccountId);
        AccountIndex = LogicBattle::getAccountIndex(a1, HigherInt, LowerInt);
        LogicLong::toString(&v40, AccountId);
        operator+(&v41, "cannot find account with id ", &v40);
        Debugger::doAssert((Debugger *)(AccountIndex != -1), (bool)&v41, v32);
        String::~String(&v41);
        String::~String(&v40);
        v33 = (AcceptChallengeMessage *)LogicBattle::getDeck(a1, AccountIndex);
        SpellCnt = LogicSpellDeck::getSpellCnt((__int64)v33);
        if ( SpellCnt >= 1 )
        {
          v35 = 0;
          do
          {
            v36 = (TextField *)LogicSpellDeck::getSpell(v33, v35);
            v37 = v36;
            if ( v36 && LogicSpell::getSpellData(v36) )
            {
              v38 = (#895 *)LogicSpell::getSpellData(v37);
              IconFileName = (const String *)LogicSpellData::getIconFileName(v38);
              ResourceListener::addFile((ResourceListener *)v43, IconFileName, -1, -1, -1, -1);
            }
            v35 = (const char *)(unsigned int)((_DWORD)v35 + 1);
          }
          while ( (int)v35 < SpellCnt );
        }
      }
      ResourceListener::startLoading((ResourceListener *)v43);
      ResourceListener::~ResourceListener((ResourceListener *)v43);
    }

    #895 *__fastcall BattleScreen::loadAssetsFromSpell(#895 *this, const #895 *a2, #1178 *a3)
    {
      #895 *v4; // x20
      LogicTutorialManager *SummonCharacter; // x0
      #1178 *v6; // x2
      LogicTutorialManager *Projectile; // x0
      #1178 *v8; // x2
      LogicTutorialManager *AreaEffectObject; // x0
      #1178 *v10; // x2
      LogicTutorialManager *BuffOnDamage; // x0
      #1178 *v12; // x2
      LogicTutorialManager *Effect; // x0
      #1178 *v14; // x2
    
      v4 = this;
      if ( this )
      {
        SummonCharacter = (LogicTutorialManager *)LogicSpellData::getSummonCharacter(this);
        BattleScreen::loadAssetsFromCharacter(SummonCharacter, a2, v6);
        Projectile = (LogicTutorialManager *)LogicSpellData::getProjectile(v4);
        BattleScreen::loadAssetsFromProjectile(Projectile, a2, v8);
        AreaEffectObject = (LogicTutorialManager *)LogicSpellData::getAreaEffectObject(v4);
        BattleScreen::loadAssetsFromAreaEffectObject(AreaEffectObject, a2, v10);
        BuffOnDamage = (LogicTutorialManager *)LogicSpellData::getBuffOnDamage(v4);
        BattleScreen::loadAssetsFromBuff(BuffOnDamage, a2, v12);
        Effect = (LogicTutorialManager *)LogicSpellData::getEffect(v4);
        return (#895 *)BattleScreen::loadAssetsFromEffect(Effect, a2, v14);
      }
      return this;
    }

    __int64 __fastcall BattleScreen::loadAssetsFromBackgroundDeco(__int64 this, const #932 *a2, #1178 *a3)
    {
      const String *FileName; // x1
    
      if ( this )
      {
        FileName = (const String *)LogicBackgroundDecoData::getFileName(this);
        return ResourceListener::addFile(a2, FileName, -1, -1, -1, -1);
      }
      return this;
    }

    #1025 *__fastcall BattleScreen::loadAssetsFromCharacter(#1025 *this, const #1025 *a2, #1178 *a3)
    {
      #1025 *v4; // x20
      const String *FileName; // x0
      LogicTutorialManager *AreaBuff; // x0
      #1178 *v7; // x2
      LogicTutorialManager *BuffOnDamage; // x0
      #1178 *v9; // x2
      LogicTutorialManager *StartingBuff; // x0
      #1178 *v11; // x2
      LogicTutorialManager *AttackStartEffect; // x0
      #1178 *v13; // x2
      LogicTutorialManager *v14; // x0
      #1178 *v15; // x2
      LogicTutorialManager *ChargeEffect; // x0
      #1178 *v17; // x2
      LogicTutorialManager *ContinuousEffect; // x0
      #1178 *v19; // x2
      LogicTutorialManager *DamageEffect; // x0
      #1178 *v21; // x2
      LogicTutorialManager *v22; // x0
      #1178 *v23; // x2
      LogicTutorialManager *LandingEffect; // x0
      #1178 *v25; // x2
      LogicTutorialManager *DeathEffect; // x0
      #1178 *v27; // x2
      LogicTutorialManager *ProjectileEffect; // x0
      #1178 *v29; // x2
      LogicTutorialManager *v30; // x0
      #1178 *v31; // x2
      LogicTutorialManager *SpawnEffect; // x0
      #1178 *v33; // x2
      LogicTutorialManager *TakeDamageEffect; // x0
      #1178 *v35; // x2
      LogicTutorialManager *Egg; // x0
      #1178 *v37; // x2
      LogicTutorialManager *HealthBar; // x0
      #1178 *v39; // x2
      LogicTutorialManager *MorphEffect; // x0
      #1178 *v41; // x2
      LogicTutorialManager *MorphCharacter; // x0
      #1178 *v43; // x2
      LogicTutorialManager *MorphResultCharacter; // x0
      #1178 *v45; // x2
      LogicTutorialManager *SpawnCharacter; // x0
      #1178 *v47; // x2
      LogicTutorialManager *Projectile; // x0
      #1178 *v49; // x2
      LogicTutorialManager *v50; // x0
      #1178 *v51; // x2
    
      v4 = this;
      if ( this )
      {
        FileName = (const String *)LogicCharacterData::getFileName(this, a2, a3);
        ResourceListener::addFile(a2, FileName, -1, -1, -1, -1);
        AreaBuff = (LogicTutorialManager *)LogicCharacterData::getAreaBuff(v4);
        BattleScreen::loadAssetsFromBuff(AreaBuff, a2, v7);
        BuffOnDamage = (LogicTutorialManager *)LogicCharacterData::getBuffOnDamage(v4);
        BattleScreen::loadAssetsFromBuff(BuffOnDamage, a2, v9);
        StartingBuff = (LogicTutorialManager *)LogicCharacterData::getStartingBuff(v4);
        BattleScreen::loadAssetsFromBuff(StartingBuff, a2, v11);
        AttackStartEffect = (LogicTutorialManager *)LogicCharacterData::getAttackStartEffect(v4, 0);
        BattleScreen::loadAssetsFromEffect(AttackStartEffect, a2, v13);
        v14 = (LogicTutorialManager *)LogicCharacterData::getAttackStartEffect(v4, 1);
        BattleScreen::loadAssetsFromEffect(v14, a2, v15);
        ChargeEffect = (LogicTutorialManager *)LogicCharacterData::getChargeEffect(v4);
        BattleScreen::loadAssetsFromEffect(ChargeEffect, a2, v17);
        ContinuousEffect = (LogicTutorialManager *)LogicCharacterData::getContinuousEffect(v4);
        BattleScreen::loadAssetsFromEffect(ContinuousEffect, a2, v19);
        DamageEffect = (LogicTutorialManager *)LogicCharacterData::getDamageEffect(v4, 0);
        BattleScreen::loadAssetsFromEffect(DamageEffect, a2, v21);
        v22 = (LogicTutorialManager *)LogicCharacterData::getDamageEffect(v4, 1);
        BattleScreen::loadAssetsFromEffect(v22, a2, v23);
        LandingEffect = (LogicTutorialManager *)LogicCharacterData::getLandingEffect(v4);
        BattleScreen::loadAssetsFromEffect(LandingEffect, a2, v25);
        DeathEffect = (LogicTutorialManager *)LogicCharacterData::getDeathEffect(v4);
        BattleScreen::loadAssetsFromEffect(DeathEffect, a2, v27);
        ProjectileEffect = (LogicTutorialManager *)LogicCharacterData::getProjectileEffect(v4, 0);
        BattleScreen::loadAssetsFromEffect(ProjectileEffect, a2, v29);
        v30 = (LogicTutorialManager *)LogicCharacterData::getProjectileEffect(v4, 1);
        BattleScreen::loadAssetsFromEffect(v30, a2, v31);
        SpawnEffect = (LogicTutorialManager *)LogicCharacterData::getSpawnEffect(v4);
        BattleScreen::loadAssetsFromEffect(SpawnEffect, a2, v33);
        TakeDamageEffect = (LogicTutorialManager *)LogicCharacterData::getTakeDamageEffect(v4);
        BattleScreen::loadAssetsFromEffect(TakeDamageEffect, a2, v35);
        Egg = (LogicTutorialManager *)LogicCharacterData::getEgg(v4);
        BattleScreen::loadAssetsFromEgg(Egg, a2, v37);
        HealthBar = (LogicTutorialManager *)LogicCharacterData::getHealthBar(v4);
        BattleScreen::loadAssetsFromHealthBar(HealthBar, a2, v39);
        MorphEffect = (LogicTutorialManager *)LogicCharacterData::getMorphEffect(v4);
        BattleScreen::loadAssetsFromEffect(MorphEffect, a2, v41);
        MorphCharacter = (LogicTutorialManager *)LogicCharacterData::getMorphCharacter(v4);
        BattleScreen::loadAssetsFromCharacter(MorphCharacter, a2, v43);
        MorphResultCharacter = (LogicTutorialManager *)LogicCharacterData::getMorphResultCharacter(v4);
        BattleScreen::loadAssetsFromCharacter(MorphResultCharacter, a2, v45);
        SpawnCharacter = (LogicTutorialManager *)LogicCharacterData::getSpawnCharacter(v4);
        BattleScreen::loadAssetsFromCharacter(SpawnCharacter, a2, v47);
        Projectile = (LogicTutorialManager *)LogicCharacterData::getProjectile(v4, 0);
        BattleScreen::loadAssetsFromProjectile(Projectile, a2, v49);
        v50 = (LogicTutorialManager *)LogicCharacterData::getProjectile(v4, 1);
        return (#1025 *)BattleScreen::loadAssetsFromProjectile(v50, a2, v51);
      }
      return this;
    }

    #1076 *__fastcall BattleScreen::loadAssetsFromEgg(#1076 *this, const #1076 *a2, #1178 *a3)
    {
      #1076 *v4; // x20
      LogicTutorialManager *DeathEffect; // x0
      #1178 *v6; // x2
      LogicTutorialManager *Effect; // x0
      #1178 *v8; // x2
      const String *FileName; // x1
    
      v4 = this;
      if ( this )
      {
        DeathEffect = (LogicTutorialManager *)LogicEggData::getDeathEffect(this, a2, a3);
        BattleScreen::loadAssetsFromEffect(DeathEffect, a2, v6);
        Effect = (LogicTutorialManager *)LogicEggData::getEffect(v4);
        BattleScreen::loadAssetsFromEffect(Effect, a2, v8);
        FileName = (const String *)LogicEggData::getFileName(v4);
        return (#1076 *)ResourceListener::addFile(a2, FileName, -1, -1, -1, -1);
      }
      return this;
    }

    __int64 __fastcall BattleScreen::loadAssetsFromProjectile(__int64 this, const #1152 *a2, #1178 *a3)
    {
      __int64 v4; // x20
      const String *FileName; // x0
      #1025 *SpawnCharacter; // x0
      #1178 *v7; // x2
      LogicTutorialManager *SpawnAreaEffectObject; // x0
      #1178 *v9; // x2
      LogicTutorialManager *TargetBuff; // x0
      #1178 *v11; // x2
      LogicTutorialManager *HitEffect; // x0
      #1178 *v13; // x2
      LogicTutorialManager *TrailEffectData; // x0
      #1178 *v15; // x2
    
      v4 = this;
      if ( this )
      {
        FileName = (const String *)LogicProjectileData::getFileName(this);
        ResourceListener::addFile(a2, FileName, -1, -1, -1, -1);
        SpawnCharacter = (#1025 *)LogicProjectileData::getSpawnCharacter(v4);
        BattleScreen::loadAssetsFromCharacter(SpawnCharacter, a2, v7);
        SpawnAreaEffectObject = (LogicTutorialManager *)LogicProjectileData::getSpawnAreaEffectObject(v4);
        BattleScreen::loadAssetsFromAreaEffectObject(SpawnAreaEffectObject, a2, v9);
        TargetBuff = (LogicTutorialManager *)LogicProjectileData::getTargetBuff(v4);
        BattleScreen::loadAssetsFromBuff(TargetBuff, a2, v11);
        HitEffect = (LogicTutorialManager *)LogicProjectileData::getHitEffect(v4);
        BattleScreen::loadAssetsFromEffect(HitEffect, a2, v13);
        TrailEffectData = (LogicTutorialManager *)LogicProjectileData::getTrailEffectData(v4);
        return BattleScreen::loadAssetsFromEffect(TrailEffectData, a2, v15);
      }
      return this;
    }

    #1108 *__fastcall BattleScreen::loadAssetsFromAreaEffectObject(#1108 *this, const #1108 *a2, #1178 *a3)
    {
      #1108 *v4; // x20
      LogicTutorialManager *Buff; // x0
      #1178 *v6; // x2
      LogicTutorialManager *HitEffect; // x0
      #1178 *v8; // x2
      LogicTutorialManager *LoopingEffect; // x0
      #1178 *v10; // x2
      LogicTutorialManager *ScaledEffect; // x0
      #1178 *v12; // x2
      LogicTutorialManager *OneShotEffect; // x0
      #1178 *v14; // x2
      __int64 Projectile; // x0
      #1178 *v16; // x2
    
      v4 = this;
      if ( this )
      {
        Buff = (LogicTutorialManager *)LogicAreaEffectObjectData::getBuff(this);
        BattleScreen::loadAssetsFromBuff(Buff, a2, v6);
        HitEffect = (LogicTutorialManager *)LogicAreaEffectObjectData::getHitEffect(v4);
        BattleScreen::loadAssetsFromEffect(HitEffect, a2, v8);
        LoopingEffect = (LogicTutorialManager *)LogicAreaEffectObjectData::getLoopingEffect(v4);
        BattleScreen::loadAssetsFromEffect(LoopingEffect, a2, v10);
        ScaledEffect = (LogicTutorialManager *)LogicAreaEffectObjectData::getScaledEffect(v4);
        BattleScreen::loadAssetsFromEffect(ScaledEffect, a2, v12);
        OneShotEffect = (LogicTutorialManager *)LogicAreaEffectObjectData::getOneShotEffect(v4);
        BattleScreen::loadAssetsFromEffect(OneShotEffect, a2, v14);
        Projectile = LogicAreaEffectObjectData::getProjectile(v4);
        return (#1108 *)BattleScreen::loadAssetsFromProjectile(Projectile, a2, v16);
      }
      return this;
    }

    __int64 __fastcall BattleScreen::loadAssetsFromDeco(__int64 this, const #902 *a2, #1178 *a3)
    {
      __int64 v4; // x20
      LogicTutorialManager *Effect; // x0
      #1178 *v6; // x2
      const String *FileName; // x1
    
      v4 = this;
      if ( this )
      {
        Effect = (LogicTutorialManager *)LogicDecoData::getEffect(this, a2, a3);
        BattleScreen::loadAssetsFromEffect(Effect, a2, v6);
        FileName = (const String *)LogicDecoData::getFileName(v4);
        return ResourceListener::addFile(a2, FileName, -1, -1, -1, -1);
      }
      return this;
    }

    LogicTutorialData *__fastcall BattleScreen::loadAssetsFromSpawnPoint(
            LogicTutorialData *this,
            const LogicTutorialData *a2,
            #1178 *a3)
    {
      LogicTutorialData *v4; // x20
      const String *FileName; // x1
    
      v4 = this;
      if ( this )
      {
        this = (LogicTutorialData *)LogicSpawnPointData::getFileName(this);
        if ( *(_DWORD *)this )
        {
          FileName = (const String *)LogicSpawnPointData::getFileName(v4);
          return (LogicTutorialData *)ResourceListener::addFile(a2, FileName, -1, -1, -1, -1);
        }
      }
      return this;
    }

    BattleResultMessage *__fastcall BattleScreen::loadAssetsFromBuff(
            BattleResultMessage *this,
            const BattleResultMessage *a2,
            #1178 *a3)
    {
      BattleResultMessage *v4; // x20
      const String *FilterFile; // x0
      const String *IconSWF; // x0
      LogicTutorialManager *Effect; // x0
      #1178 *v8; // x2
    
      v4 = this;
      if ( this )
      {
        if ( *(_DWORD *)LogicCharacterBuffData::getFilterFile(this) )
        {
          FilterFile = (const String *)LogicCharacterBuffData::getFilterFile(v4);
          ResourceListener::addFile(a2, FilterFile, -1, -1, -1, -1);
        }
        if ( *(_DWORD *)LogicData::getIconSWF(v4) )
        {
          IconSWF = (const String *)LogicData::getIconSWF(v4);
          ResourceListener::addFile(a2, IconSWF, -1, -1, -1, -1);
        }
        Effect = (LogicTutorialManager *)LogicCharacterBuffData::getEffect(v4);
        return (BattleResultMessage *)BattleScreen::loadAssetsFromEffect(Effect, a2, v8);
      }
      return this;
    }

    AskForTVContentMessage *__fastcall BattleScreen::loadAssetsFromEffect(
            AskForTVContentMessage *this,
            const AskForTVContentMessage *a2,
            #1178 *a3)
    {
      AskForTVContentMessage *v4; // x20
      int v5; // w21
      int v6; // w22
      LogicTutorialManager *ParticleEmitter; // x0
      #1178 *v8; // x2
    
      v4 = this;
      if ( this )
      {
        this = (AskForTVContentMessage *)LogicEffectData::getRenderableCount(this);
        v5 = (int)this;
        if ( (int)this >= 1 )
        {
          v6 = 0;
          do
          {
            this = (AskForTVContentMessage *)LogicEffectData::getRenderableType(v4, v6);
            if ( (_DWORD)this == 2 )
            {
              ParticleEmitter = (LogicTutorialManager *)LogicEffectData::getParticleEmitter(v4, v6);
              this = (AskForTVContentMessage *)BattleScreen::loadAssetsFromParticleEmitter(ParticleEmitter, a2, v8);
            }
            else if ( (unsigned int)this <= 1 )
            {
              this = (AskForTVContentMessage *)LogicEffectData::getFileName(v4, v6);
              if ( *(_DWORD *)this )
                this = (AskForTVContentMessage *)ResourceListener::addFile(a2, (const String *)this, -1, -1, -1, -1);
            }
            ++v6;
          }
          while ( v5 != v6 );
        }
      }
      return this;
    }

    __int64 __fastcall BattleScreen::loadAssetsFromHealthBar(__int64 this, const #1362 *a2, #1178 *a3)
    {
      const String *FileName; // x1
    
      if ( this )
      {
        FileName = (const String *)LogicHealthBarData::getFileName(this, a2, a3);
        return ResourceListener::addFile(a2, FileName, -1, -1, -1, -1);
      }
      return this;
    }

    #1011 *__fastcall BattleScreen::loadAssetsFromParticleEmitter(#1011 *this, const #1011 *a2, #1178 *a3)
    {
      #1011 *v4; // x20
      int v5; // w21
      __int64 v6; // x22
    
      v4 = this;
      if ( this )
      {
        this = (#1011 *)LogicParticleEmitterData::getParticleResourceCount(this);
        v5 = (int)this;
        if ( (int)this >= 1 )
        {
          v6 = 0;
          do
          {
            this = (#1011 *)LogicParticleEmitterData::getParticleResource(v4, v6);
            if ( *(_DWORD *)this )
              this = (#1011 *)ResourceListener::addFile(a2, (const String *)this, -1, -1, -1, -1);
            v6 = (unsigned int)(v6 + 1);
          }
          while ( v5 != (_DWORD)v6 );
        }
      }
      return this;
    }

    __int64 __fastcall BattleScreen::loadTilemap(LogicTutorialManager *this, const ChangeAllianceMemberRoleOkMessage *a2)
    {
      return RenderSystem::loadTilemap(a2, a2);
    }

    __int64 __fastcall BattleScreen::addResourcesToLoad(LogicTutorialManager *this, #1178 *a2)
    {
      return ResourceListener::addFile(a2, "sc/level.sc", -1, -1, -1, -1);
    }

    __darwin_pthread_mutex_t *__fastcall BattleScreen::allianceLeft(__darwin_pthread_mutex_t *this)
    {
      __darwin_pthread_mutex_t *result; // x0
      #1077 *Instance; // x0
    
      result = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(this);
      if ( result )
      {
        Instance = (#1077 *)AllianceStream::getInstance(result);
        return (__darwin_pthread_mutex_t *)AllianceStream::removeAllEntries(Instance);
      }
      return result;
    }

    __int64 __fastcall BattleScreen::onNotEnoughMana(LogicJSONObject **this, int a2, int a3)
    {
      __int64 (__fastcall *v6)(LogicJSONObject **, __int64); // x22
      __int64 SpellNotReadySound; // x0
      vm_address_t *v8; // x0
      __int64 Instance; // x0
      pthread_attr_t *TutorialManager; // x22
      int v11; // w24
      int isFirstSession; // w23
      __int64 result; // x0
      BadgePopup *v14; // x0
      __int64 v15; // x19
      const char *v16; // x1
      __int64 String; // x0
      _DWORD v18[2]; // [xsp+0h] [xbp-40h] BYREF
      float v19; // [xsp+8h] [xbp-38h] BYREF
      float v20; // [xsp+Ch] [xbp-34h] BYREF
    
      v6 = (__int64 (__fastcall *)(LogicJSONObject **, __int64))*((_QWORD *)*this + 7);
      SpellNotReadySound = LogicDataTables::getSpellNotReadySound((LogicDataTables *)this);
      v8 = (vm_address_t *)v6(this, SpellNotReadySound);
      ++*((_DWORD *)this + 99);
      Instance = GameMode::getInstance(v8);
      TutorialManager = (pthread_attr_t *)LogicGameMode::getTutorialManager(*(_QWORD *)(Instance + 112));
      v11 = *(_DWORD *)(LogicDataTables::getClientGlobals(TutorialManager) + 132LL);
      isFirstSession = MessageManager::isFirstSession(MessageManager::sm_pInstance);
      if ( *((_DWORD *)this + 99) >= v11
        || (result = LogicTutorialManager::isTutorialActive(TutorialManager), (isFirstSession | (unsigned int)result) == 1) )
      {
        *((_DWORD *)this + 99) = 0;
        CombatHUD::showManaHelpText(*(this + 32));
        v14 = (BadgePopup *)RenderSystem::logicToGlobal(*(this + 30), a2, a3, &v20, &v19);
        v15 = GUI::getInstance(v14);
        *(float *)v18 = v20;
        *(float *)&v18[1] = v19;
        String = StringTable::getString((#1308 *)"TID_NOT_ENOUGH_MANA", v16);
        return GUI::showFloaterTextAt(v15, v18, String, 4294914918LL, COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      return result;
    }

    __int64 __fastcall BattleScreen::getActiveSpellTargetIndicator(LogicTutorialManager *this)
    {
      if ( *((_DWORD *)this + 82) == -1 )
        return 0;
      else
        return *((_QWORD *)this + 31);
    }

    __int64 __fastcall BattleScreen::showAreaDamageEffect(LogicJSONObject **this, int a2, int a3, int a4)
    {
      long double v6; // q1
      long double v7; // q0
      float v8; // s8
      #1398 *v9; // x20
      #1398 *v11; // [xsp+8h] [xbp-48h] BYREF
      float v12; // [xsp+10h] [xbp-40h] BYREF
      float v13; // [xsp+14h] [xbp-3Ch] BYREF
      float v14; // [xsp+18h] [xbp-38h] BYREF
      float v15; // [xsp+1Ch] [xbp-34h] BYREF
    
      RenderSystem::logicToGlobal(*(this + 30), a2, a3, &v15, &v14);
      *(float *)&v6 = v14;
      *(__n128 *)&v7 = DisplayObject::globalToLocal(*(this + 32), &v13, &v12, v15, v6);
      v8 = COERCE_FLOAT(
             COERCE_UNSIGNED_INT128(
               ((long double (__fastcall *)(_QWORD, long double))*(_QWORD *)(*(_QWORD *)*(this + 30) + 64LL))(
                 *(this + 30),
                 v7)));
      v9 = (#1398 *)operator new(16);
      AreaDamageIndicator::AreaDamageIndicator(v9, (float)((float)((float)a4 * v8) * 15.0) / 500.0, *(this + 32), v13, v12);
      v11 = v9;
      return std::vector<AreaDamageIndicator *>::push_back(this + 26, &v11);
    }

    __int64 __fastcall BattleScreen::initializeMembers(__int64 this)
    {
      *(_QWORD *)(this + 232) = 0;
      *(_DWORD *)(this + 136) = 0;
      *(_DWORD *)(this + 168) = 0;
      *(_QWORD *)(this + 152) = 0;
      *(_QWORD *)(this + 160) = 0;
      *(_QWORD *)(this + 144) = 0;
      *(_DWORD *)(this + 172) = 1065353216;
      *(_DWORD *)(this + 176) = 1065353216;
      *(_DWORD *)(this + 184) = 1065353216;
      *(_DWORD *)(this + 188) = 1065353216;
      *(_DWORD *)(this + 392) = 0;
      *(_BYTE *)(this + 332) = 0;
      *(_QWORD *)(this + 288) = 0;
      *(_DWORD *)(this + 340) = -1082130432;
      *(_DWORD *)(this + 344) = -1082130432;
      *(_DWORD *)(this + 336) = -1;
      *(_QWORD *)(this + 320) = 0;
      *(_QWORD *)(this + 272) = 0;
      *(_QWORD *)(this + 280) = 0;
      *(_QWORD *)(this + 256) = 0;
      *(_QWORD *)(this + 264) = 0;
      *(_DWORD *)(this + 328) = -1;
      *(_DWORD *)(this + 204) = 0;
      *(_DWORD *)(this + 388) = 0;
      *(_DWORD *)(this + 396) = 0;
      *(_QWORD *)(this + 240) = 0;
      *(_QWORD *)(this + 248) = 0;
      *(_QWORD *)(this + 360) = 0;
      *(_QWORD *)(this + 368) = 0;
      *(_QWORD *)(this + 352) = 0;
      *(_DWORD *)(this + 400) = 1203982336;
      *(_QWORD *)(this + 404) = 0xBF800000C7C35000LL;
      return this;
    }

}; // end class BattleScreen
