class BattleEndHUD
{
public:

    void __fastcall BattleEndHUD::BattleEndHUD(BattleEndHUD *this, #1106 *a2)
    {
      LogicTutorialManager *v4; // x0
      LogicChest *Instance; // x22
      __int64 LogicGame; // x21
      UnbindFacebookAccountMessage *v7; // x0
      int v8; // w23
      __int64 Arena; // x0
      const char *v10; // x2
      void (__fastcall *v11)(BattleEndHUD *, __int64); // x19
      __int64 MovieClip; // x0
      int isLandscape; // w0
      const char *v14; // x2
      void (__fastcall *v15)(BattleEndHUD *, __int64); // x19
      __int64 v16; // x0
      __int64 v17; // x0
      __int64 v18; // x0
      __int64 v19; // x28
      MovieClip **v20; // x27
      const char *v21; // x1
      #1257 *v22; // x0
      const char *v23; // x1
      #1257 *MovieClipByName; // x25
      __int64 v25; // x19
      MovieClip **v26; // x21
      __int64 v27; // x26
      const String *v28; // x2
      __int64 i; // x20
      const char *v30; // x1
      const AreaEffectObject *v31; // x2
      #1106 *v32; // x19
      __int64 v33; // x20
      #1257 *v34; // x0
      __int64 v35; // x0
      int v36; // w21
      int v37; // w22
      const LogicRefreshAchievementsCommand *TreasureChest; // x23
      int OwnStars; // w24
      int OpponentStars; // w0
      int v41; // w6
      int v42; // w7
      vm_address_t *BattleLog; // x0
      LogicJSONParser *v44; // x21
      VisitHomeMessage *v45; // x0
      tween::Bounce *BattleBottomAvatar; // x22
      LogicHealthBarData *Player; // x20
      LogicHealthBarData *v48; // x21
      __int64 AccountId; // x22
      __int64 v50; // x0
      int v51; // w0
      LogicHealthBarData *v52; // x22
      int Score; // w20
      int PrevScore; // w24
      int Stars; // w23
      int v56; // w22
      const LogicRefreshAchievementsCommand *ChestData; // x0
      int v58; // w3
      int v59; // w6
      int v60; // w7
      int v61; // w9
      int v62; // w1
      __int64 v63; // x0
      __int64 v64; // x0
      LogicTutorialManager *FrameIndex; // x0
      LogicTutorialManager *v66; // x0
      __int64 v67; // x0
      __int64 TextFieldByName; // x0
      float v69; // s8
      __int64 v70; // x0
      MovieClip *v71; // x0
      __int64 v72; // x20
      const LogicData *v73; // x2
      __int64 MusicByName; // x0
      __int64 v75; // [xsp+18h] [xbp-F8h]
      #1106 *v76; // [xsp+20h] [xbp-F0h]
      BattleEndHUD *v77; // [xsp+30h] [xbp-E0h]
      String v78; // [xsp+38h] [xbp-D8h] BYREF
      String v79; // [xsp+50h] [xbp-C0h] BYREF
      String v80; // [xsp+68h] [xbp-A8h] BYREF
      String v81; // [xsp+80h] [xbp-90h] BYREF
      String v82; // [xsp+98h] [xbp-78h] BYREF
    
      DropGUIContainer::DropGUIContainer(this);
      *(_QWORD *)this = off_100462370;
      *((_QWORD *)this + 12) = &off_1004624C8;
      v4 = (LogicTutorialManager *)BattleEndHUD::initializeMembers(this);
      Instance = (LogicChest *)BattleScreen::getInstance(v4);
      LogicGame = GameScreen::getLogicGame(Instance);
      v7 = *(UnbindFacebookAccountMessage **)(LogicGame + 168);
      v8 = *((_DWORD *)v7 + 4);
      Arena = LogicBattle::getArena(v7);
      if ( (unsigned int)LogicArenaData::isTrainingCamp(Arena) )
      {
        v11 = *(void (__fastcall **)(BattleEndHUD *, __int64))(*(_QWORD *)this + 272LL);
        MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "npc_battle_end_new", v10);
        v11(this, MovieClip);
      }
      else
      {
        isLandscape = BattleScreen::isLandscape(Instance);
        v15 = *(void (__fastcall **)(BattleEndHUD *, __int64))(*(_QWORD *)this + 272LL);
        if ( isLandscape )
        {
          v16 = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "replay_battle_end_landscape", v14);
          v15(this, v16);
        }
        else
        {
          if ( v8 == 3 )
            v17 = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "replay_battle_end", v14);
          else
            v17 = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "pvp_battle_end_new", v14);
          v15(this, v17);
        }
      }
      v18 = DropGUIContainer::addGameButton(this, "ok_btn", 1);
      v75 = LogicGame;
      v76 = a2;
      v19 = 0;
      v77 = this;
      v20 = (MovieClip **)((char *)this + 224);
      *((_QWORD *)v77 + 24) = v18;
      do
      {
        if ( (_DWORD)v19 )
          v21 = "player_01";
        else
          v21 = "player_02";
        String::String(&v82, v21);
        v22 = (#1257 *)GUIContainer::getMovieClip(v77);
        MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(v22, &v82);
        v25 = 0;
        v26 = v20;
        while ( v25 <= 2 )
        {
          String::format((String *)"crown_0%d", v23, ++v25);
          v27 = MovieClip::getMovieClipByName(MovieClipByName, &v81);
          *v26 = (MovieClip *)v27;
          operator+(&v80, "battle end hud: cannot find star clip:", &v81);
          Debugger::doAssert((Debugger *)(v27 != 0), (bool)&v80, v28);
          String::~String(&v80);
          MovieClip::gotoAndStop(*v26++, "off");
          String::~String(&v81);
        }
        String::~String(&v82);
        ++v19;
        v20 += 3;
      }
      while ( v19 < 2 );
      for ( i = 0; i < 3; ++i )
      {
        String::String(&v79, "");
        if ( (_DWORD)i == 2 )
        {
          String::operator=(&v79, "Third_Crown");
        }
        else if ( (_DWORD)i == 1 )
        {
          String::operator=(&v79, "Second_Crown");
        }
        else
        {
          if ( (_DWORD)i )
            Debugger::error((__siginfo *)"Missing sound from end screen point!", v30);
          String::operator=(&v79, "First_Crown");
        }
        *((_QWORD *)v77 + i + 34) = LogicDataTables::getSoundByName((#1004 *)&v79, 0, v31);
        String::~String(&v79);
      }
      if ( v8 == 3 )
      {
        v33 = v75;
        v32 = v76;
        *((_QWORD *)v77 + 25) = DropGUIContainer::addGameButton(v77, "replay_btn", 0);
      }
      else
      {
        v34 = (#1257 *)GUIContainer::getMovieClip(v77);
        v33 = v75;
        v32 = v76;
        v35 = MovieClip::getMovieClipByName(v34, "replay_btn");
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
      }
      if ( v32 )
      {
        v36 = *((_DWORD *)v32 + 17);
        v37 = *((_DWORD *)v32 + 18);
        BattleResultMessage::getGoldReward(v32);
        BattleResultMessage::getExpReward(v32);
        TreasureChest = (const LogicRefreshAchievementsCommand *)BattleResultMessage::getTreasureChest(v32);
        OwnStars = BattleResultMessage::getOwnStars(v32);
        OpponentStars = BattleResultMessage::getOpponentStars(v32);
        BattleEndHUD::setResult(v77, v36, v37, OpponentStars, OwnStars, OpponentStars, v41, v42, TreasureChest);
      }
      else if ( v8 == 3 )
      {
        BattleLog = (vm_address_t *)LogicBattle::getBattleLog(*(UnbindFacebookAccountMessage **)(v33 + 168));
        v44 = (LogicJSONParser *)BattleLog;
        if ( BattleLog )
        {
          v45 = (VisitHomeMessage *)GameMode::getInstance(BattleLog);
          BattleBottomAvatar = (tween::Bounce *)GameMode::getBattleBottomAvatar(v45);
          Player = (LogicHealthBarData *)LogicBattleLog::getPlayer(v44, 0);
          v48 = (LogicHealthBarData *)LogicBattleLog::getPlayer(v44, (const char *)1);
          AccountId = LogicClientAvatar::getAccountId(BattleBottomAvatar);
          v50 = LogicBattleLogPlayer::getAccountId(Player);
          v51 = LogicLong::equals(AccountId, v50);
          if ( v51 )
            v52 = v48;
          else
            v52 = Player;
          if ( v51 )
            v48 = Player;
          Score = LogicBattleLogPlayer::getScore(v48);
          PrevScore = LogicBattleLogPlayer::getPrevScore(v48);
          LogicBattleLogPlayer::getScore(v48);
          Stars = LogicBattleLogPlayer::getStars(v48);
          v56 = LogicBattleLogPlayer::getStars(v52);
          ChestData = (const LogicRefreshAchievementsCommand *)LogicBattleLogPlayer::getChestData(v48);
          if ( v56 >= Stars )
            v61 = 3;
          else
            v61 = 1;
          if ( v56 <= Stars )
            v62 = v61;
          else
            v62 = 2;
          BattleEndHUD::setResult(v77, v62, Score - PrevScore, v58, Stars, v56, v59, v60, ChestData);
        }
      }
      v63 = GUIContainer::getMovieClip(v77);
      *((_DWORD *)v77 + 80) = MovieClip::getFrameIndex(v63, "score_start");
      v64 = GUIContainer::getMovieClip(v77);
      FrameIndex = (LogicTutorialManager *)MovieClip::getFrameIndex(v64, "score_end");
      *((_DWORD *)v77 + 81) = (_DWORD)FrameIndex;
      *((_DWORD *)v77 + 53) = 1065353216;
      v66 = (LogicTutorialManager *)BattleScreen::getInstance(FrameIndex);
      if ( (unsigned int)BattleScreen::isLandscape(v66) )
      {
        v67 = GUIContainer::getMovieClip(v77);
        TextFieldByName = MovieClip::getTextFieldByName(v67, "screen_area");
        if ( TextFieldByName )
        {
          v69 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)TextFieldByName
                                                                                                    + 96LL))(TextFieldByName)));
          v70 = GUIContainer::getMovieClip(v77);
          (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v70 + 40LL))(v70, *(float *)&BattleScreen::STAGE_HEIGHT / v69);
        }
      }
      v71 = (MovieClip *)GUIContainer::getMovieClip(v77);
      MovieClip::gotoAndPlay(v71, "0", "score_end");
      v72 = SoundManager::sm_pInstance;
      String::String(&v78, "Pre_result");
      MusicByName = LogicDataTables::getMusicByName((LogicDataTables *)&v78, 0, v73);
      SoundManager::playMusic(v72, MusicByName);
      String::~String(&v78);
    }

    void __fastcall BattleEndHUD::setResult(
            LogicJSONString *this,
            int a2,
            __int64 a3,
            int a4,
            int a5,
            int a6,
            int a7,
            int a8,
            const LogicRefreshAchievementsCommand *a9)
    {
      #1257 *MovieClip; // x0
      #1257 *MovieClipByName; // x22
      #1257 *v16; // x0
      const char *v17; // x1
      #1257 *v18; // x23
      #1257 *v19; // x0
      __int64 v20; // x0
      #1257 *v21; // x0
      LogicTutorialManager *v22; // x0
      const char *v23; // x2
      #1249 *v24; // x21
      #1249 *v25; // x24
      #1257 *v26; // x0
      #1257 *v27; // x0
      #1257 *v28; // x0
      MovieClip *v29; // x0
      #1257 *v30; // x0
      LogicChest *Instance; // x0
      vm_address_t *LogicGame; // x0
      UnbindFacebookAccountMessage *v33; // x24
      VisitHomeMessage *v34; // x0
      vm_address_t *BattleTopAvatar; // x25
      VisitHomeMessage *v36; // x0
      const tween::Bounce *BattleBottomAvatar; // x21
      __int64 NpcData; // x0
      #1308 *TID; // x0
      const String *v40; // x1
      const String *String; // x0
      #1257 *v42; // x0
      MovieClip *v43; // x22
      #1308 *v44; // x0
      const String *v45; // x1
      const String *v46; // x0
      ResourceManager *FileName; // x25
      const String *ExportName; // x0
      const String *v49; // x2
      #1249 *v50; // x0
      #1271 *TextFieldByName; // x22
      String *TotalSpellCount; // x25
      const char *v53; // x1
      __int64 v54; // x23
      int v55; // w1
      #1257 *v56; // x0
      __int64 v57; // x20
      const char *v58; // x1
      #1271 *v59; // x22
      MovieClip *v60; // x19
      __int64 v61; // x0
      __int64 StarCount; // x0
      __int64 v63; // x20
      int v64; // w1
      LogicDataTables *v65; // x0
      #1271 *v66; // x19
      __int64 Globals; // x0
      const char *v68; // x1
      String v69; // [xsp+18h] [xbp-B8h] BYREF
      String v70; // [xsp+30h] [xbp-A0h] BYREF
      String v71; // [xsp+48h] [xbp-88h] BYREF
      String v72; // [xsp+60h] [xbp-70h] BYREF
      String v73; // [xsp+78h] [xbp-58h] BYREF
    
      MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "player_02");
      v16 = (#1257 *)GUIContainer::getMovieClip(this);
      v18 = (#1257 *)MovieClip::getMovieClipByName(v16, "player_01");
      *((_DWORD *)this + 82) = a6;
      *((_DWORD *)this + 83) = a5;
      *((_DWORD *)this + 86) = 0;
      *((_DWORD *)this + 84) = 0;
      *((_DWORD *)this + 85) = a2;
      switch ( a2 )
      {
        case 1:
          v27 = (#1257 *)GUIContainer::getMovieClip(this);
          *(_BYTE *)(MovieClip::getMovieClipByName(v27, "draw") + 8) = 0;
          *(_BYTE *)(MovieClip::getMovieClipByName(MovieClipByName, "winner_txt") + 8) = 0;
          v22 = (LogicTutorialManager *)MovieClip::getMovieClipByName(v18, "winner_txt");
          *((_QWORD *)this + 39) = v22;
          *((_BYTE *)v22 + 8) = 0;
          break;
        case 2:
          v19 = (#1257 *)GUIContainer::getMovieClip(this);
          *(_BYTE *)(MovieClip::getMovieClipByName(v19, "draw") + 8) = 0;
          *(_BYTE *)(MovieClip::getMovieClipByName(v18, "winner_txt") + 8) = 0;
          v20 = MovieClip::getMovieClipByName(MovieClipByName, "winner_txt");
          *((_QWORD *)this + 39) = v20;
          *(_BYTE *)(v20 + 8) = 0;
          v21 = (#1257 *)GUIContainer::getMovieClip(this);
          v22 = (LogicTutorialManager *)MovieClip::getMovieClipByName(v21, "gradient");
          v24 = v22;
          if ( v22 )
          {
            v25 = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "darken_gradient_red", v23);
            v26 = (#1257 *)GUIContainer::getMovieClip(this);
            MovieClip::changeTimelineChild(v26, v24, v25);
            v22 = (LogicTutorialManager *)(*(__int64 (__fastcall **)(#1249 *))(*(_QWORD *)v24 + 8LL))(v24);
          }
          break;
        case 3:
          v28 = (#1257 *)GUIContainer::getMovieClip(this);
          v29 = (MovieClip *)MovieClip::getMovieClipByName(v28, "draw");
          MovieClip::playOnce(v29);
          *(_BYTE *)(MovieClip::getMovieClipByName(MovieClipByName, "winner_txt") + 8) = 0;
          *(_BYTE *)(MovieClip::getMovieClipByName(v18, "winner_txt") + 8) = 0;
          v30 = (#1257 *)GUIContainer::getMovieClip(this);
          v22 = (LogicTutorialManager *)MovieClip::getMovieClipByName(v30, "gradient");
          if ( v22 )
            v22 = (LogicTutorialManager *)(*(__int64 (__fastcall **)(LogicTutorialManager *))(*(_QWORD *)v22 + 8LL))(v22);
          break;
        default:
          v22 = (LogicTutorialManager *)Debugger::warning((__siginfo *)"Invalid battle result", v17);
          break;
      }
      Instance = (LogicChest *)BattleScreen::getInstance(v22);
      LogicGame = (vm_address_t *)GameScreen::getLogicGame(Instance);
      v33 = (UnbindFacebookAccountMessage *)LogicGame[21];
      v34 = (VisitHomeMessage *)GameMode::getInstance(LogicGame);
      BattleTopAvatar = (vm_address_t *)GameMode::getBattleTopAvatar(v34);
      v36 = (VisitHomeMessage *)GameMode::getInstance(BattleTopAvatar);
      BattleBottomAvatar = (const tween::Bounce *)GameMode::getBattleBottomAvatar(v36);
      if ( LogicBattle::isNPCBattle(v33) )
      {
        NpcData = LogicBattle::getNpcData(v33);
        TID = (#1308 *)LogicData::getTID(NpcData);
        String = (const String *)StringTable::getString(TID, v40);
        LogicClientAvatar::setName((tween::Bounce *)BattleTopAvatar, String);
      }
      BattleEndHUD::setPlayerInfo(this, MovieClipByName, (const tween::Bounce *)BattleTopAvatar, 0, 0);
      BattleEndHUD::setPlayerInfo(this, v18, BattleBottomAvatar, 1, 0);
      v42 = (#1257 *)GUIContainer::getMovieClip(this);
      v43 = (MovieClip *)MovieClip::getMovieClipByName(v42, "loot");
      if ( v43 )
      {
        if ( a9 && !LogicBattle::isReplay(v33) )
        {
          v44 = (#1308 *)LogicData::getTID(a9);
          v46 = (const String *)StringTable::getString(v44, v45);
          MovieClip::setText(v43, "info_reward_type", v46);
          FileName = (ResourceManager *)LogicTreasureChestData::getFileName(a9);
          ExportName = (const String *)LogicTreasureChestData::getExportName(a9);
          v50 = (#1249 *)ResourceManager::getMovieClip(FileName, ExportName, v49);
          MovieClip::changeTimelineChild(v43, "reward", v50);
          TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v43, "card_chance_txt");
          if ( TextFieldByName )
          {
            TotalSpellCount = (String *)LogicTreasureChestData::getTotalSpellCount(a9);
            v54 = StringTable::getString((#1308 *)"TID_BATTLE_END_SCREEN_CARDS", v53);
            String::String(&v72, "<CARD_COUNT>");
            String::valueOf(&v71, TotalSpellCount, v55);
            String::replace(&v73, v54, &v72, &v71);
            String::~String(&v71);
            String::~String(&v72);
            TextField::setText(TextFieldByName, &v73);
            String::~String(&v73);
          }
        }
        else
        {
          *((_BYTE *)v43 + 8) = 0;
        }
      }
      v56 = (#1257 *)GUIContainer::getMovieClip(this);
      v57 = MovieClip::getMovieClipByName(v56, "trophie_and_crown");
      if ( v57 )
      {
        if ( LogicBattle::isNPCBattle(v33) || LogicBattle::isReplay(v33) )
        {
          *(_BYTE *)(v57 + 8) = 0;
        }
        else
        {
          v59 = (#1271 *)MovieClip::getTextFieldByName(v57, "trophies");
          if ( v59 )
          {
            if ( (int)a3 < 1 )
              String::format((String *)"%d", v58, a3);
            else
              String::format((String *)"+%d", v58, a3);
            TextField::setText(v59, &v70);
            String::~String(&v70);
          }
          v60 = (MovieClip *)MovieClip::getMovieClipByName((#1257 *)v57, "crown_chest");
          if ( v60 )
          {
            v61 = MovieClip::getTextFieldByName(v57, "TID_STAR_CHEST");
            if ( v61 )
              *(_BYTE *)(v61 + 8) = 0;
            *((_BYTE *)v60 + 8) = 0;
            StarCount = LogicClientAvatar::getStarCount(BattleBottomAvatar);
            v63 = StarCount;
            if ( (int)StarCount >= 10 )
              v64 = 10;
            else
              v64 = StarCount;
            MovieClip::gotoAndStopFrameIndex(v60, v64);
            v65 = (LogicDataTables *)MovieClip::getTextFieldByName(v60, "text_wins");
            v66 = v65;
            if ( v65 )
            {
              Globals = LogicDataTables::getGlobals(v65);
              String::format((String *)"%d/%d", v68, v63, *(unsigned int *)(Globals + 132));
              TextField::setText(v66, &v69);
              String::~String(&v69);
            }
          }
        }
      }
    }

    // attributes: thunk
    void __fastcall BattleEndHUD::BattleEndHUD(BattleEndHUD *this, #1106 *a2)
    {
      __ZN12BattleEndHUDC2EP19BattleResultMessage(this, a2);
    }

    void __fastcall BattleEndHUD::~BattleEndHUD(LogicJSONString *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100462370;
      *((_QWORD *)this + 12) = &off_1004624C8;
      SoundManager::stopMusic((#1040 *)SoundManager::sm_pInstance);
      if ( *((_BYTE *)this + 218) )
      {
        v2 = *((_QWORD *)this + 25);
        if ( v2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
        *((_QWORD *)this + 25) = 0;
      }
      BattleEndHUD::initializeMembers(this);
      DropGUIContainer::~DropGUIContainer(this);
    }

    // attributes: thunk
    void __fastcall BattleEndHUD::~BattleEndHUD(LogicJSONString *this)
    {
      __ZN12BattleEndHUDD2Ev(this);
    }

    void __fastcall BattleEndHUD::~BattleEndHUD(LogicJSONString *this)
    {
      BattleEndHUD::~BattleEndHUD(this);
      operator delete(this);
    }

    void __fastcall BattleEndHUD::setNPCResult(
            LogicJSONString *this,
            int a2,
            int a3,
            int a4,
            __int64 a5,
            int a6,
            int a7,
            int a8,
            LogicRefreshAchievementsCommand *a9,
            const LogicRefreshAchievementsCommand *a10)
    {
      BattleEndHUD::setResult(this, a2, a5, a4, a6, a7, a7, a8, a10);
    }

    thread_state_t *__fastcall BattleEndHUD::buttonClicked(thread_state_t *this, #1251 *a2)
    {
      #1251 *v2; // x8
      bool v3; // zf
      __int64 Instance; // x0
      vm_address_t *PlayerAvatar; // x0
      VisitHomeMessage *v6; // x0
      LogicTutorialManager *v7; // x0
    
      if ( a2 )
      {
        if ( *(this + 24) == (thread_state_t)a2 )
        {
          Instance = GameMode::getInstance((vm_address_t *)this);
          PlayerAvatar = (vm_address_t *)GameMode::getPlayerAvatar(Instance);
          if ( PlayerAvatar )
          {
            PlayerAvatar = (vm_address_t *)LogicClientAvatar::getWinCount();
            if ( (int)PlayerAvatar >= 3 )
            {
              v6 = (VisitHomeMessage *)GameMode::getInstance(PlayerAvatar);
              PlayerAvatar = (vm_address_t *)GameMode::showAppRatingDialog(v6);
            }
          }
          v7 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)PlayerAvatar);
          return BattleScreen::sendGoHomeMessage(v7);
        }
        else
        {
          v2 = (#1251 *)*(this + 25);
          if ( v2 )
            v3 = v2 == a2;
          else
            v3 = 0;
          if ( v3 )
            return (thread_state_t *)BattleEndHUD::requestReplay((LogicJSONString *)this);
        }
      }
      return this;
    }

    __int64 __fastcall BattleEndHUD::requestReplay(LogicJSONString *this)
    {
      LogicChest *Instance; // x0
      __int64 LogicGame; // x19
      LogicProgressSimulator *v3; // x0
      __int64 result; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      Instance = (LogicChest *)BattleScreen::getInstance(this);
      LogicGame = GameScreen::getLogicGame(Instance);
      v3 = (LogicProgressSimulator *)GameStateManager::getInstance();
      result = GameStateManager::hasReplayData(v3);
      if ( *(_DWORD *)(*(_QWORD *)(LogicGame + 168) + 16LL) == 3 && (((unsigned int)result ^ 1) & 1) == 0 )
      {
        v5 = GameStateManager::getInstance();
        GameStateManager::changeState(v5, 5);
        v6 = GameStateManager::getInstance();
        return GameStateManager::changeToState(v6);
      }
      return result;
    }

    TextField *__fastcall BattleEndHUD::setPlayerInfo(
            LogicJSONString *this,
            #1257 *a2,
            const tween::Bounce *a3,
            int a4,
            char a5)
    {
      vm_address_t *TextFieldByName; // x0
      const char *v11; // x1
      vm_address_t *v12; // x24
      VisitHomeMessage *Instance; // x0
      __int64 AccountId; // x25
      __int64 v15; // x0
      const char *v16; // x1
      __int64 Name; // x0
      __int64 v18; // x0
      const char *v19; // x1
      MovieClipHelper *v20; // x24
      const char *v21; // x1
      __int64 AllianceName; // x0
      __int64 MovieClipByName; // x0
      TextField *result; // x0
      TextField *v25; // x23
      bool v26; // w3
      const AreaEffectObject *AllianceBadge; // x25
      DataIcon *v28; // x22
      char *v29; // x20
      bool v30; // w3
      String v31; // [xsp+48h] [xbp-58h] BYREF
    
      TextFieldByName = (vm_address_t *)MovieClip::getTextFieldByName(a2, "name");
      v12 = TextFieldByName;
      if ( !TextFieldByName )
        Debugger::error((__siginfo *)"no name field", v11);
      Instance = (VisitHomeMessage *)GameMode::getInstance(TextFieldByName);
      AccountId = GameMode::getAccountId(Instance);
      if ( *(_DWORD *)LogicClientAvatar::getName(a3) && (LogicClientAvatar::isTrainingCompleted(a3) & 1) != 0
        || (v15 = LogicClientAvatar::getAccountId(a3), !(unsigned int)LogicLong::equals(v15, AccountId)) )
      {
        Name = LogicClientAvatar::getName(a3);
      }
      else
      {
        Name = StringTable::getString((#1308 *)"TID_YOU", v16);
      }
      MovieClipHelper::setTextAndScaleIfNecessary(v12, Name, 0);
      v18 = MovieClip::getTextFieldByName(a2, "clan");
      v20 = (MovieClipHelper *)v18;
      if ( !v18 )
        Debugger::error((__siginfo *)"no clan field", v19);
      if ( *(_DWORD *)LogicClientAvatar::getAllianceName(a3) )
        AllianceName = LogicClientAvatar::getAllianceName(a3);
      else
        AllianceName = StringTable::getString((#1308 *)"TID_NO_CLAN", v21);
      MovieClipHelper::setTextAndScaleIfNecessary(v20, AllianceName, 0);
      MovieClipByName = MovieClip::getMovieClipByName(a2, "txt_visitor");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = a5;
      result = (TextField *)MovieClip::getMovieClipByName(a2, "clan_icon");
      v25 = result;
      if ( result )
      {
        AllianceBadge = (const AreaEffectObject *)LogicClientAvatar::getAllianceBadge(a3);
        if ( AllianceBadge )
        {
          v28 = (DataIcon *)operator new(112);
          DataIcon::DataIcon(v28, AllianceBadge);
          v29 = (char *)this + 8 * a4;
          *((_QWORD *)v29 + 37) = v28;
          String::String(&v31, "clan_icon");
          DataIcon::replaceInstanceWithIcon(
            (DisplayObject **)v28,
            a2,
            &v31,
            1,
            COERCE_LONG_DOUBLE((unsigned __int128)0),
            0,
            1,
            1,
            1);
          String::~String(&v31);
          return (TextField *)MovieClipHelper::moveIconNextToText(
                                v20,
                                *((TextField **)v29 + 37),
                                (DisplayObject *)1,
                                5.0,
                                v30);
        }
        else
        {
          return (TextField *)MovieClipHelper::moveIconNextToText(v20, v25, (DisplayObject *)1, 5.0, v26);
        }
      }
      return result;
    }

    void __fastcall BattleEndHUD::update(LogicJSONString *this, float a2)
    {
      int v4; // w20
      int v5; // w21
      #1257 *MovieClip; // x0
      int v7; // w8
      float v8; // s0
      int v9; // w9
      _BOOL8 v10; // x10
      int v11; // w20
      #1257 *v12; // x0
      #1257 *v13; // x0
      float v14; // s0
      MovieClip *v15; // x0
      vm_address_t *v16; // x0
      VisitHomeMessage *Instance; // x0
      const char *v18; // x1
      int v19; // w8
      __int64 v20; // x20
      const LogicData *v21; // x2
      __int64 v22; // x0
      #1257 *v23; // x0
      MovieClip *v24; // x0
      __int64 v25; // x20
      const LogicData *v26; // x2
      __int64 v27; // x0
      __int64 v28; // x20
      const LogicData *v29; // x2
      __int64 MusicByName; // x0
      __int64 v31; // x20
      const LogicData *v32; // x2
      __int64 v33; // x0
      __int64 v34; // x19
      const LogicData *v35; // x2
      __int64 v36; // x0
      String v37; // [xsp+8h] [xbp-A8h] BYREF
      String v38; // [xsp+20h] [xbp-90h] BYREF
      String v39; // [xsp+38h] [xbp-78h] BYREF
      String v40; // [xsp+50h] [xbp-60h] BYREF
      String v41; // [xsp+68h] [xbp-48h] BYREF
    
      *((float *)this + 52) = *((float *)this + 52) + a2;
      v4 = *((_DWORD *)this + 82);
      v5 = *((_DWORD *)this + 83);
      MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
      if ( (int)MovieClip::getCurrentFrame(MovieClip) < *((_DWORD *)this + 80)
        || (v7 = *((_DWORD *)this + 84), v7 >= v5 + v4) )
      {
        v12 = (#1257 *)GUIContainer::getMovieClip(this);
        if ( (unsigned int)MovieClip::isStopped(v12)
          && (v13 = (#1257 *)GUIContainer::getMovieClip(this),
              (unsigned int)MovieClip::getCurrentFrame(v13) == *((_DWORD *)this + 81)) )
        {
          v14 = *((float *)this + 53) - a2;
          *((float *)this + 53) = v14;
          if ( v14 <= 0.0 )
          {
            v15 = (MovieClip *)GUIContainer::getMovieClip(this);
            MovieClip::gotoAndPlay(v15, "score_end", "result_end");
            Instance = (VisitHomeMessage *)GameMode::getInstance(v16);
            if ( (unsigned int)GameMode::isPlayerAvatarInBattle(Instance) )
            {
              v19 = *((_DWORD *)this + 85);
              switch ( v19 )
              {
                case 3:
                  v28 = SoundManager::sm_pInstance;
                  String::String(&v39, "Draw");
                  MusicByName = LogicDataTables::getMusicByName((LogicDataTables *)&v39, 0, v29);
                  SoundManager::playMusic(v28, MusicByName);
                  String::~String(&v39);
                  break;
                case 2:
                  v20 = SoundManager::sm_pInstance;
                  String::String(&v40, "Lose");
                  v22 = LogicDataTables::getMusicByName((LogicDataTables *)&v40, 0, v21);
                  SoundManager::playMusic(v20, v22);
                  String::~String(&v40);
                  break;
                case 1:
                  v31 = SoundManager::sm_pInstance;
                  String::String(&v41, "Win");
                  v33 = LogicDataTables::getMusicByName((LogicDataTables *)&v41, 0, v32);
                  SoundManager::playMusic(v31, v33);
                  String::~String(&v41);
                  break;
                default:
                  Debugger::warning((__siginfo *)"battle end hud: m_result not set!", v18);
                  break;
              }
            }
            else
            {
              v25 = SoundManager::sm_pInstance;
              String::String(&v38, "Draw");
              v27 = LogicDataTables::getMusicByName((LogicDataTables *)&v38, 0, v26);
              SoundManager::playMusic(v25, v27);
              String::~String(&v38);
            }
            *((_BYTE *)this + 216) = 1;
          }
        }
        else
        {
          v23 = (#1257 *)GUIContainer::getMovieClip(this);
          if ( (unsigned int)MovieClip::isStopped(v23) )
          {
            v24 = (MovieClip *)*((_QWORD *)this + 39);
            if ( v24 )
            {
              MovieClip::playOnce(v24);
              *(_BYTE *)(*((_QWORD *)this + 39) + 8LL) = 1;
              *((_QWORD *)this + 39) = 0;
            }
          }
        }
      }
      else
      {
        v8 = *((float *)this + 86) - a2;
        *((float *)this + 86) = v8;
        if ( v8 <= 0.0 )
        {
          v9 = *((_DWORD *)this + 82);
          v10 = v7 >= v9;
          if ( v7 < v9 )
            v9 = 0;
          v11 = v7 - v9;
          MovieClip::gotoAndPlay(*((MovieClip **)this + 3 * v10 + v7 - v9 + 28), "anim", "on");
          SoundManager::playSound(
            SoundManager::sm_pInstance,
            *((_QWORD *)this + v11 + 34),
            0xFFFFFFFFLL,
            1.0,
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          ++*((_DWORD *)this + 84);
          *((_DWORD *)this + 86) = 1056964608;
        }
      }
      if ( *((_BYTE *)this + 216) )
      {
        if ( (SoundManager::isPlayingMusic((#1040 *)SoundManager::sm_pInstance) & 1) == 0 )
        {
          v34 = SoundManager::sm_pInstance;
          String::String(&v37, "Post_result_loop");
          v36 = LogicDataTables::getMusicByName((LogicDataTables *)&v37, 0, v35);
          SoundManager::playMusic(v34, v36);
          String::~String(&v37);
        }
      }
    }

    __int64 __fastcall BattleEndHUD::touchReleased(LogicTutorialManager *a1, __int64 a2)
    {
      LogicTutorialManager *Instance; // x0
      CombatHUD *CombatHUD; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      CombatHUD = (CombatHUD *)BattleScreen::getCombatHUD(Instance);
      CombatHUD::showTauntSelector(CombatHUD, 0);
      return Sprite::touchReleased(a1, a2);
    }

    long double __fastcall BattleEndHUD::getTauntGlobalPosition(LogicJSONString *this, int a2)
    {
      const char *v3; // x1
      #1257 *MovieClip; // x0
      const char *v5; // x2
      __int64 MovieClipByName; // x19
      __int64 v7; // x0
      long double v8; // q0
      long double v9; // q8
      __int128 v11; // [xsp+8h] [xbp-48h] BYREF
      String v12; // [xsp+18h] [xbp-38h] BYREF
    
      if ( a2 )
        v3 = "taunt_enemy";
      else
        v3 = "taunt_player";
      String::String(&v12, v3);
      MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, &v12);
      if ( !MovieClipByName )
      {
        v7 = GUIContainer::getMovieClip(this);
        MovieClipByName = MovieClip::getTextFieldByName(v7, &v12);
      }
      Debugger::doAssert((Debugger *)(MovieClipByName != 0), (bool)"battle end hud: cannot find taunt area!", v5);
      Rect::Rect((Rect *)&v11);
      DisplayObject::getGlobalBounds(MovieClipByName, &v11);
      *(float *)&v8 = Rect::getMidX(&v11);
      v9 = v8;
      Rect::getMidY(&v11);
      Rect::~Rect((Rect *)&v11);
      String::~String(&v12);
      return v9;
    }

    __int64 __fastcall BattleEndHUD::initializeMembers(__int64 this)
    {
      _QWORD *v1; // x8
      __int64 v2; // x9
      _QWORD *v3; // x10
      __int64 i; // x11
    
      *(_BYTE *)(this + 216) = 0;
      *(_BYTE *)(this + 218) = 0;
      *(_DWORD *)(this + 340) = -1;
      *(_DWORD *)(this + 344) = 0;
      *(_QWORD *)(this + 312) = 0;
      *(_BYTE *)(this + 217) = 0;
      *(_DWORD *)(this + 320) = 0;
      *(_DWORD *)(this + 336) = 0;
      *(_BYTE *)(this + 348) = 0;
      *(_QWORD *)(this + 200) = 0;
      *(_QWORD *)(this + 208) = 0;
      v1 = (_QWORD *)(this + 264);
      v2 = 1;
      *(_QWORD *)(this + 192) = 0;
      do
      {
        *(_DWORD *)(this + 4 * v2 + 328) = 0;
        *(_QWORD *)(this + 8 * v2 + 296) = 0;
        v3 = v1;
        for ( i = 3; i > 0; --i )
          *v3-- = 0;
        v1 -= 3;
      }
      while ( v2-- >= 1 );
      return this;
    }

}; // end class BattleEndHUD
