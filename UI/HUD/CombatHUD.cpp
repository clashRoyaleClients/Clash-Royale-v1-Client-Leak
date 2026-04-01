class CombatHUD
{
public:

    __int64 __fastcall CombatHUD::CombatHUD(__int64 a1, Sprite *a2)
    {
      __int64 Instance; // x0
      _BOOL8 isNPCBattle; // x0
      _BOOL4 v6; // w24
      LogicTutorialManager *v7; // x0
      _BOOL8 isReplay; // x0
      _BOOL4 v9; // w21
      LogicTutorialManager *v10; // x0
      const char *v11; // x2
      int isLandscape; // w22
      DisplayObject *MovieClip; // x0
      AllianceStreamMessage *v14; // x0
      __int64 v15; // x0
      const char *v16; // x1
      __int64 MovieClipByName; // x24
      GameButton *v18; // x25
      const char *v19; // x1
      DisplayObject *v20; // x0
      MovieClip *v21; // x0
      MovieClip *v22; // x0
      #1257 *v23; // x1
      __int64 v24; // x0
      __int64 TextFieldByName; // x0
      const char *v26; // x2
      __int64 v27; // x0
      __int64 v28; // x0
      const char *v29; // x2
      AllianceStreamMessage *v30; // x0
      __int64 v31; // x0
      __int64 v32; // x0
      __int64 v33; // x0
      StarHud *v34; // x23
      const char *v35; // x1
      const String *String; // x0
      long double v37; // q0
      StarHud *v38; // x23
      const char *v39; // x1
      const String *v40; // x0
      long double v41; // q0
      AllianceStreamMessage *inited; // x0
    
      Sprite::Sprite((Sprite *)a1, 10);
      *(_QWORD *)a1 = off_10046C5F0;
      *(_QWORD *)(a1 + 96) = &off_10046C720;
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 440) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      CombatHUD::initializeMembers((CombatHUD *)a1);
      Instance = GameMode::getInstance();
      isNPCBattle = LogicBattle::isNPCBattle(*(UnbindFacebookAccountMessage **)(*(_QWORD *)(Instance + 112) + 168LL));
      v6 = isNPCBattle;
      v7 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isNPCBattle);
      isReplay = BattleScreen::isReplay(v7);
      v9 = isReplay;
      v10 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isReplay);
      isLandscape = BattleScreen::isLandscape(v10);
      if ( !v6 && !v9 )
      {
        MovieClip = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui_stickers.sc", "HUD_taunt", v11);
        *(_QWORD *)(a1 + 360) = MovieClip;
        DisplayObject::setPixelSnappedXY(
          MovieClip,
          *(float *)&BattleScreen::STAGE_WIDTH * 0.5,
          *(float *)&BattleScreen::STAGE_HEIGHT);
        *(_BYTE *)(*(_QWORD *)(a1 + 360) + 64LL) = 1;
        v15 = GameMain::getInstance(v14);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 96) + 160LL))(
          *(_QWORD *)(v15 + 96),
          *(_QWORD *)(a1 + 360));
        MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "taunt_button");
        if ( MovieClipByName )
        {
          v18 = (GameButton *)operator new(264);
          GameButton::GameButton(v18);
          *(_QWORD *)(a1 + 368) = v18;
          (*(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v18 + 280LL))(v18, MovieClipByName, 1);
          CustomButton::setButtonListener(*(_QWORD *)(a1 + 368), a1 + 96);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 360) + 160LL))(
            *(_QWORD *)(a1 + 360),
            *(_QWORD *)(a1 + 368));
        }
        else
        {
          Debugger::warning((__siginfo *)"combat hud: failed to create taunt button, no taunt_button clip", v16);
        }
      }
      if ( isLandscape )
        v19 = "HUD_rightMiddle_landscape";
      else
        v19 = "HUD_rightMiddle";
      v20 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", v19, v11);
      *(_QWORD *)(a1 + 192) = v20;
      DisplayObject::setPixelSnappedXY(
        v20,
        *(float *)&BattleScreen::STAGE_WIDTH,
        *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
      v21 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 192), "starPlayer");
      MovieClip::stop(v21);
      v22 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 192), "starEnemy");
      MovieClip::stop(v22);
      (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 192) + 80LL))(
        *(_QWORD *)(a1 + 192),
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      DropGUIContainer::putLocalizedTIDsToTextFields(*(#1375 **)(a1 + 192), v23);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 192));
      v24 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 192), "scoreEnemy");
      TextFieldByName = MovieClip::getTextFieldByName(v24, "txt");
      *(_QWORD *)(a1 + 232) = TextFieldByName;
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"cannot find scoreEnemy from HUDRightMiddle", v26);
      v27 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 192), "scorePlayer");
      v28 = MovieClip::getTextFieldByName(v27, "txt");
      *(_QWORD *)(a1 + 240) = v28;
      Debugger::doAssert((Debugger *)(v28 != 0), (bool)"cannot find scorePlayer from HUDRightMiddle", v29);
      if ( *(_BYTE *)(GameMain::getInstance(v30) + 356) )
      {
        v31 = *(_QWORD *)(a1 + 192);
        *(_BYTE *)(v31 + 8) = 0;
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 192);
      }
      v32 = MovieClip::getMovieClipByName((#1257 *)v31, "enemy_signal");
      *(_QWORD *)(a1 + 152) = v32;
      *(_BYTE *)(v32 + 8) = 0;
      v33 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 192), "player_signal");
      *(_QWORD *)(a1 + 144) = v33;
      *(_BYTE *)(v33 + 8) = 0;
      v34 = (StarHud *)operator new(144);
      StarHud::StarHud(v34, 0);
      *(_QWORD *)(a1 + 136) = v34;
      String = (const String *)StringTable::getString((#1308 *)"TID_ENEMY", v35);
      StarHud::setName((#1257 **)v34, String);
      *(__n128 *)&v37 = DisplayObject::setPixelSnappedXY(
                          (DisplayObject *)*(_QWORD *)(a1 + 136),
                          *(float *)&BattleScreen::STAGE_WIDTH * 0.5,
                          *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 136), v37);
      v38 = (StarHud *)operator new(144);
      StarHud::StarHud(v38, 1);
      *(_QWORD *)(a1 + 128) = v38;
      v40 = (const String *)StringTable::getString((#1308 *)"TID_YOU", v39);
      StarHud::setName((#1257 **)v38, v40);
      *(__n128 *)&v41 = DisplayObject::setPixelSnappedXY(
                          (DisplayObject *)*(_QWORD *)(a1 + 128),
                          *(float *)&BattleScreen::STAGE_WIDTH * 0.5,
                          *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 128), v41);
      if ( (v9 & isLandscape) == 1 )
      {
        inited = (AllianceStreamMessage *)CombatHUD::initLandscapeReplayHUD((CombatHUD *)a1, a2);
      }
      else if ( v9 )
      {
        inited = (AllianceStreamMessage *)CombatHUD::initReplayHUD((GameState *)a1, a2);
      }
      else
      {
        inited = (AllianceStreamMessage *)CombatHUD::initBattleHUD((GameState *)a1, a2);
      }
      *(_BYTE *)(a1 + 64) = 1;
      if ( *(_BYTE *)(GameMain::getInstance(inited) + 356) )
        *(_BYTE *)(a1 + 528) = 1;
      return a1;
    }

    bool __fastcall CombatHUD::isReplay(LogicTutorialManager *a1)
    {
      LogicTutorialManager *Instance; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      return BattleScreen::isReplay(Instance);
    }

    __int64 __fastcall CombatHUD::initLandscapeReplayHUD(CombatHUD *a1, OutOfSyncMessage *a2, const char *a3)
    {
      DisplayObject *MovieClip; // x0
      #1257 *v6; // x1
      const char *v7; // x2
      DisplayObject *v8; // x0
      #1257 *v9; // x1
      __int64 MovieClipByName; // x0
      __int64 TextFieldByName; // x0
      const char *v12; // x2
      const char *v13; // x2
      DisplayObject *v14; // x0
      long double v15; // q0
      const char *v16; // x1
      MovieClip *v17; // x21
      GameButton *v18; // x22
      const char *v19; // x1
      MovieClip *v20; // x21
      GameButton *v21; // x22
      const char *v22; // x1
      const char *v23; // x1
      __int64 v24; // x21
      GameButton *v25; // x22
      VisitHomeMessage *Instance; // x0
      const tween::Bounce *BattleTopAvatar; // x23
      VisitHomeMessage *v28; // x0
      tween::Bounce *BattleBottomAvatar; // x21
      NativeFont *v30; // x22
      NativeFont *v31; // x22
    
      MovieClip = (DisplayObject *)ResourceManager::getMovieClip(
                                     (ResourceManager *)"sc/ui.sc",
                                     "HUD_topRight_replay_landscape",
                                     a3);
      *((_QWORD *)a1 + 22) = MovieClip;
      DisplayObject::setPixelSnappedXY(MovieClip, *(float *)&BattleScreen::STAGE_WIDTH, 0.0);
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)a1 + 22) + 80LL))(
        *((_QWORD *)a1 + 22),
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      MovieClip::gotoAndStopFrameIndex(*((MovieClip **)a1 + 22), 0);
      DropGUIContainer::putLocalizedTIDsToTextFields(*((#1375 **)a1 + 22), v6);
      (*(void (__fastcall **)(CombatHUD *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *((_QWORD *)a1 + 22));
      v8 = (DisplayObject *)ResourceManager::getMovieClip(
                              (ResourceManager *)"sc/ui.sc",
                              "HUD_topRight_replay_landscape_overtime",
                              v7);
      *((_QWORD *)a1 + 23) = v8;
      DisplayObject::setPixelSnappedXY(v8, *(float *)&BattleScreen::STAGE_WIDTH, 0.0);
      DropGUIContainer::putLocalizedTIDsToTextFields(*((#1375 **)a1 + 23), v9);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)a1 + 22), "timeLeft");
      TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "txt");
      *((_QWORD *)a1 + 27) = TextFieldByName;
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"cannot find timeLeft from HUD_topRight", v12);
      v14 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "replay_HUD_left_landscape", v13);
      *((_QWORD *)a1 + 56) = v14;
      *(__n128 *)&v15 = DisplayObject::setPixelSnappedXY(v14, 0.0, *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
      *(_BYTE *)(*((_QWORD *)a1 + 56) + 64LL) = 1;
      (*(void (__fastcall **)(CombatHUD *, long double))(*(_QWORD *)a1 + 160LL))(a1, v15);
      v17 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)a1 + 56), "play_pause_button");
      if ( v17 )
      {
        v18 = (GameButton *)operator new(264);
        GameButton::GameButton(v18);
        *((_QWORD *)a1 + 57) = v18;
        (*(void (__fastcall **)(GameButton *, MovieClip *, __int64))(*(_QWORD *)v18 + 280LL))(v18, v17, 1);
        CustomButton::setButtonListener(*((_QWORD *)a1 + 57), (char *)a1 + 96);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 56) + 160LL))(
          *((_QWORD *)a1 + 56),
          *((_QWORD *)a1 + 57));
        MovieClip::gotoAndStopFrameIndex(v17, 0);
      }
      else
      {
        Debugger::warning((__siginfo *)"combat hud (replay): no play/pause button!", v16);
      }
      v20 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)a1 + 56), "speed_button");
      if ( v20 )
      {
        v21 = (GameButton *)operator new(264);
        GameButton::GameButton(v21);
        *((_QWORD *)a1 + 58) = v21;
        (*(void (__fastcall **)(GameButton *, MovieClip *, __int64))(*(_QWORD *)v21 + 280LL))(v21, v20, 1);
        CustomButton::setButtonListener(*((_QWORD *)a1 + 58), (char *)a1 + 96);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 56) + 160LL))(
          *((_QWORD *)a1 + 56),
          *((_QWORD *)a1 + 58));
        MovieClip::gotoAndStopFrameIndex(v20, 0);
        if ( (unsigned int)MovieClip::getTotalFrames(v20) != 4 )
          Debugger::error(
            (__siginfo *)"combat hud (replay): add or remove elements from REPLAY_TIME_MODIFIERS list or update movieclip from flash!",
            v22);
      }
      else
      {
        Debugger::warning((__siginfo *)"combat hud (replay): no speed button!", v19);
      }
      v24 = MovieClip::getMovieClipByName(*((#1257 **)a1 + 56), "quit_button");
      if ( v24 )
      {
        v25 = (GameButton *)operator new(264);
        GameButton::GameButton(v25);
        *((_QWORD *)a1 + 63) = v25;
        (*(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v25 + 280LL))(v25, v24, 1);
        CustomButton::setButtonListener(*((_QWORD *)a1 + 63), (char *)a1 + 96);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 56) + 160LL))(
          *((_QWORD *)a1 + 56),
          *((_QWORD *)a1 + 63));
      }
      else
      {
        Debugger::warning((__siginfo *)"combat hud (replay): no quit button!", v23);
      }
      CombatHUD::setReplayTimeModifier(a1, 1);
      CombatHUD::setReplayPaused(a1, 0);
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      BattleTopAvatar = (const tween::Bounce *)GameMode::getBattleTopAvatar(Instance);
      v28 = (VisitHomeMessage *)GameMode::getInstance();
      BattleBottomAvatar = GameMode::getBattleBottomAvatar(v28);
      v30 = (NativeFont *)operator new(464);
      CombatHUD::PlayerHUD::PlayerHUD(v30, a1, BattleTopAvatar, a2, 1);
      *((_QWORD *)a1 + 15) = v30;
      (*(void (__fastcall **)(CombatHUD *, NativeFont *))(*(_QWORD *)a1 + 160LL))(a1, v30);
      v31 = (NativeFont *)operator new(464);
      CombatHUD::PlayerHUD::PlayerHUD(v31, a1, BattleBottomAvatar, a2, 0);
      *((_QWORD *)a1 + 14) = v31;
      return (*(__int64 (__fastcall **)(CombatHUD *, NativeFont *))(*(_QWORD *)a1 + 160LL))(a1, v31);
    }

    __int64 __fastcall CombatHUD::initReplayHUD(GameState *this, OutOfSyncMessage *a2, const char *a3)
    {
      DisplayObject *MovieClip; // x0
      #1257 *v6; // x1
      const char *v7; // x2
      DisplayObject *v8; // x0
      #1257 *v9; // x1
      __int64 MovieClipByName; // x0
      __int64 TextFieldByName; // x0
      const char *v12; // x2
      const char *v13; // x2
      DisplayObject *v14; // x0
      long double v15; // q0
      const char *v16; // x1
      MovieClip *v17; // x21
      GameButton *v18; // x22
      const char *v19; // x1
      MovieClip *v20; // x21
      GameButton *v21; // x22
      const char *v22; // x1
      const char *v23; // x1
      __int64 v24; // x21
      GameButton *v25; // x22
      VisitHomeMessage *Instance; // x0
      const tween::Bounce *BattleTopAvatar; // x23
      VisitHomeMessage *v28; // x0
      tween::Bounce *BattleBottomAvatar; // x21
      NativeFont *v30; // x22
      NativeFont *v31; // x22
    
      MovieClip = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "HUD_topRight_replay", a3);
      *((_QWORD *)this + 22) = MovieClip;
      DisplayObject::setPixelSnappedXY(MovieClip, *(float *)&BattleScreen::STAGE_WIDTH * 0.5, 0.0);
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 22) + 80LL))(
        *((_QWORD *)this + 22),
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 22), 0);
      DropGUIContainer::putLocalizedTIDsToTextFields(*((#1375 **)this + 22), v6);
      (*(void (__fastcall **)(GameState *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 22));
      v8 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "HUD_topRight_replay_overtime", v7);
      *((_QWORD *)this + 23) = v8;
      DisplayObject::setPixelSnappedXY(v8, *(float *)&BattleScreen::STAGE_WIDTH * 0.5, 0.0);
      DropGUIContainer::putLocalizedTIDsToTextFields(*((#1375 **)this + 23), v9);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 22), "timeLeft");
      TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "txt");
      *((_QWORD *)this + 27) = TextFieldByName;
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"cannot find timeLeft from HUD_topRight", v12);
      v14 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "replay_HUD_left", v13);
      *((_QWORD *)this + 56) = v14;
      *(__n128 *)&v15 = DisplayObject::setPixelSnappedXY(v14, 0.0, *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
      *(_BYTE *)(*((_QWORD *)this + 56) + 64LL) = 1;
      (*(void (__fastcall **)(GameState *, long double))(*(_QWORD *)this + 160LL))(this, v15);
      v17 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 56), "play_pause_button");
      if ( v17 )
      {
        v18 = (GameButton *)operator new(264);
        GameButton::GameButton(v18);
        *((_QWORD *)this + 57) = v18;
        (*(void (__fastcall **)(GameButton *, MovieClip *, __int64))(*(_QWORD *)v18 + 280LL))(v18, v17, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 57), (char *)this + 96);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 56) + 160LL))(
          *((_QWORD *)this + 56),
          *((_QWORD *)this + 57));
        MovieClip::gotoAndStopFrameIndex(v17, 0);
      }
      else
      {
        Debugger::warning((__siginfo *)"combat hud (replay): no play/pause button!", v16);
      }
      v20 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 56), "speed_button");
      if ( v20 )
      {
        v21 = (GameButton *)operator new(264);
        GameButton::GameButton(v21);
        *((_QWORD *)this + 58) = v21;
        (*(void (__fastcall **)(GameButton *, MovieClip *, __int64))(*(_QWORD *)v21 + 280LL))(v21, v20, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 58), (char *)this + 96);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 56) + 160LL))(
          *((_QWORD *)this + 56),
          *((_QWORD *)this + 58));
        MovieClip::gotoAndStopFrameIndex(v20, 0);
        if ( (unsigned int)MovieClip::getTotalFrames(v20) != 4 )
          Debugger::error(
            (__siginfo *)"combat hud (replay): add or remove elements from REPLAY_TIME_MODIFIERS list or update movieclip from flash!",
            v22);
      }
      else
      {
        Debugger::warning((__siginfo *)"combat hud (replay): no speed button!", v19);
      }
      v24 = MovieClip::getMovieClipByName(*((#1257 **)this + 56), "quit_button");
      if ( v24 )
      {
        v25 = (GameButton *)operator new(264);
        GameButton::GameButton(v25);
        *((_QWORD *)this + 63) = v25;
        (*(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v25 + 280LL))(v25, v24, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 63), (char *)this + 96);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 56) + 160LL))(
          *((_QWORD *)this + 56),
          *((_QWORD *)this + 63));
      }
      else
      {
        Debugger::warning((__siginfo *)"combat hud (replay): no quit button!", v23);
      }
      CombatHUD::setReplayTimeModifier(this, 1);
      CombatHUD::setReplayPaused(this, 0);
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      BattleTopAvatar = (const tween::Bounce *)GameMode::getBattleTopAvatar(Instance);
      v28 = (VisitHomeMessage *)GameMode::getInstance();
      BattleBottomAvatar = GameMode::getBattleBottomAvatar(v28);
      v30 = (NativeFont *)operator new(464);
      CombatHUD::PlayerHUD::PlayerHUD(v30, this, BattleTopAvatar, a2, 1);
      *((_QWORD *)this + 15) = v30;
      (*(void (__fastcall **)(GameState *, NativeFont *))(*(_QWORD *)this + 160LL))(this, v30);
      v31 = (NativeFont *)operator new(464);
      CombatHUD::PlayerHUD::PlayerHUD(v31, this, BattleBottomAvatar, a2, 0);
      *((_QWORD *)this + 14) = v31;
      return (*(__int64 (__fastcall **)(GameState *, NativeFont *))(*(_QWORD *)this + 160LL))(this, v31);
    }

    void __fastcall CombatHUD::initBattleHUD(GameState *this, OutOfSyncMessage *a2)
    {
      UnbindFacebookAccountMessage *v4; // x20
      ChangeAllianceMemberRoleOkMessage *LocationData; // x0
      const char *v6; // x2
      DisplayObject *MovieClip; // x0
      #1257 *v8; // x1
      __int64 MovieClipByName; // x0
      __int64 TextFieldByName; // x0
      const char *v11; // x2
      __int64 v12; // x0
      const char *v13; // x2
      MovieClip *v14; // x0
      const char *v15; // x2
      DisplayObject *v16; // x0
      #1257 *v17; // x1
      #1375 *v18; // x0
      #1257 *v19; // x1
      AllianceStreamMessage *v20; // x0
      VisitHomeMessage *Instance; // x0
      unsigned int *BattleTopAvatar; // x22
      #1308 *NpcData; // x0
      const AreaEffectObject *v24; // x1
      #1308 *LocalizedName; // x0
      __int64 v26; // x0
      __int64 v27; // x0
      #1257 *v28; // x23
      const char *v29; // x2
      DisplayObject *v30; // x24
      const char *v31; // x1
      double v32; // d0
      float v33; // s8
      float v34; // s0
      const AreaEffectObject *AllianceBadge; // x25
      __int64 v36; // x0
      DataIcon *v37; // x24
      const String *AllianceName; // x0
      __int64 v39; // x0
      NativeFont *v40; // x22
      VisitHomeMessage *v41; // x0
      tween::Bounce *BattleBottomAvatar; // x0
      VisitHomeMessage *v43; // x0
      LogicDataTables *v44; // x0
      GameButton *v45; // x20
      void (__fastcall *v46)(GameButton *, __int64, __int64); // x21
      const char *v47; // x2
      __int64 v48; // x0
      String v49; // [xsp+10h] [xbp-B0h] BYREF
      String v50; // [xsp+28h] [xbp-98h] BYREF
      String v51; // [xsp+40h] [xbp-80h] BYREF
      String v52; // [xsp+58h] [xbp-68h] BYREF
    
      v4 = *(UnbindFacebookAccountMessage **)(*(_QWORD *)(GameMode::getInstance() + 112) + 168LL);
      LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(v4);
      if ( (int)LogicLocationData::getMatchLengthSeconds(LocationData) > 0 )
      {
        MovieClip = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "HUD_topRight", v6);
        *((_QWORD *)this + 22) = MovieClip;
        DisplayObject::setPixelSnappedXY(MovieClip, *(float *)&BattleScreen::STAGE_WIDTH, 0.0);
        (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 22) + 80LL))(
          *((_QWORD *)this + 22),
          COERCE_LONG_DOUBLE((unsigned __int128)0));
        MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 22), 0);
        DropGUIContainer::putLocalizedTIDsToTextFields(*((#1375 **)this + 22), v8);
        MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 22), "timeLeft");
        TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "txt");
        *((_QWORD *)this + 27) = TextFieldByName;
        Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"cannot find timeLeft from HUD_topRight", v11);
        v12 = MovieClip::getMovieClipByName(*((#1257 **)this + 22), "elixirRegen");
        *((_QWORD *)this + 28) = v12;
        Debugger::doAssert((Debugger *)(v12 != 0), (bool)"cannot find elixirRegen from HUD_topRight", v13);
        v14 = (MovieClip *)*((_QWORD *)this + 28);
        *((_BYTE *)v14 + 8) = 0;
        MovieClip::stop(v14);
        v16 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "HUD_topRight_overtime", v15);
        *((_QWORD *)this + 23) = v16;
        DisplayObject::setPixelSnappedXY(v16, *(float *)&BattleScreen::STAGE_WIDTH, 0.0);
        DropGUIContainer::putLocalizedTIDsToTextFields(*((#1375 **)this + 23), v17);
        (*(void (__fastcall **)(GameState *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 22));
      }
      v18 = (#1375 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "HUD_topLeft", v6);
      *((_QWORD *)this + 21) = v18;
      DropGUIContainer::putLocalizedTIDsToTextFields(v18, v19);
      (*(void (__fastcall **)(GameState *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 21));
      v20 = (AllianceStreamMessage *)MovieClip::getMovieClipByName(*((#1257 **)this + 21), "darken");
      if ( v20 )
        *((_BYTE *)v20 + 8) = *(_DWORD *)(GameMain::getInstance(v20) + 120) == 2;
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      BattleTopAvatar = (unsigned int *)GameMode::getBattleTopAvatar(Instance);
      if ( LogicBattle::isNPCBattle(v4) )
      {
        NpcData = (#1308 *)LogicBattle::getNpcData(v4);
        LocalizedName = StringTable::getLocalizedName(NpcData, v24);
      }
      else
      {
        LocalizedName = (#1308 *)LogicClientAvatar::getName((tween::Bounce *)BattleTopAvatar);
      }
      String::String(&v52, (const String *)LocalizedName);
      v26 = MovieClip::getMovieClipByName(*((#1257 **)this + 21), "enemyName");
      v27 = MovieClip::getTextFieldByName(v26, "txt");
      MovieClipHelper::setTextAndScaleIfNecessary(v27, &v52, 0);
      v28 = (#1257 *)MovieClip::getMovieClipByName(*((#1257 **)this + 21), "enemyClan");
      Debugger::doAssert((Debugger *)(v28 != 0), (bool)"Cannot find enemyClan clip from top left hud!", v29);
      v30 = (DisplayObject *)MovieClip::getMovieClipByName(*((#1257 **)this + 21), "enemyTrophies");
      if ( v30 )
      {
        if ( LogicBattle::isNPCBattle(v4) )
        {
          *((_BYTE *)v30 + 8) = 0;
        }
        else
        {
          if ( !LogicClientAvatar::isInAlliance((tween::Bounce *)BattleTopAvatar) )
          {
            v33 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(v30)));
            v34 = (*(float (__fastcall **)(#1257 *))(*(_QWORD *)v28 + 96LL))(v28);
            *(_QWORD *)&v32 = DisplayObject::setY(v30, v33 - v34).n128_u64[0];
          }
          String::format((String *)"%d", v31, v32, BattleTopAvatar[16]);
          MovieClip::setText(v30, "txt", &v51);
          String::~String();
        }
        AllianceBadge = (const AreaEffectObject *)LogicClientAvatar::getAllianceBadge((tween::Bounce *)BattleTopAvatar);
        if ( AllianceBadge )
        {
          v36 = *((_QWORD *)this + 65);
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
          *((_QWORD *)this + 65) = 0;
          v37 = (DataIcon *)operator new(112);
          DataIcon::DataIcon(v37, AllianceBadge);
          *((_QWORD *)this + 65) = v37;
          String::String(&v50, "clan_icon");
          DataIcon::replaceInstanceWithIcon(
            (DisplayObject **)v37,
            v28,
            &v50,
            1,
            COERCE_LONG_DOUBLE((unsigned __int128)0),
            0,
            1,
            1,
            0);
          String::~String();
          *(_BYTE *)(MovieClip::getMovieClipByName(v28, "clan_icon") + 8) = 0;
        }
      }
      if ( LogicClientAvatar::isInAlliance((tween::Bounce *)BattleTopAvatar) )
      {
        AllianceName = (const String *)LogicClientAvatar::getAllianceName((tween::Bounce *)BattleTopAvatar);
        String::String(&v49, AllianceName);
        v39 = MovieClip::getTextFieldByName(v28, "txt");
        MovieClipHelper::setTextAndScaleIfNecessary(v39, &v49, 0);
        String::~String();
      }
      else if ( v28 )
      {
        (*(void (__fastcall **)(#1257 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
      v40 = (NativeFont *)operator new(464);
      v41 = (VisitHomeMessage *)GameMode::getInstance();
      BattleBottomAvatar = GameMode::getBattleBottomAvatar(v41);
      CombatHUD::PlayerHUD::PlayerHUD(v40, this, BattleBottomAvatar, a2, 0);
      *((_QWORD *)this + 14) = v40;
      (*(void (__fastcall **)(GameState *, NativeFont *))(*(_QWORD *)this + 160LL))(this, v40);
      if ( LogicBattle::isNPCBattle(v4) )
      {
        v43 = (VisitHomeMessage *)GameMode::getInstance();
        v44 = GameMode::getBattleBottomAvatar(v43);
        if ( LogicClientAvatar::isTrainingCompleted(v44) )
        {
          v45 = (GameButton *)operator new(264);
          GameButton::GameButton(v45);
          *((_QWORD *)this + 63) = v45;
          v46 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v45 + 280LL);
          v48 = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "npc_quit_button", v47);
          v46(v45, v48, 1);
          CustomButton::setButtonListener(*((_QWORD *)this + 63), (char *)this + 96);
          DisplayObject::setPixelSnappedXY(
            *((DisplayObject **)this + 63),
            *(float *)&BattleScreen::STAGE_WIDTH * 0.5,
            *(float *)&BattleScreen::STAGE_HEIGHT);
          (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 63) + 80LL))(
            *((_QWORD *)this + 63),
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          (*(void (__fastcall **)(GameState *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 63));
        }
      }
      String::~String();
    }

    // attributes: thunk
    void __fastcall CombatHUD::CombatHUD(CombatHUD *this, Sprite *a2)
    {
      __ZN9CombatHUDC2EP6Sprite((__int64)this, a2);
    }

    void __fastcall CombatHUD::~CombatHUD(__int64 a1)
    {
      __int64 v2; // x20
      __int64 v3; // x21
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x8
      unsigned __int64 v7; // x9
      __int64 i; // x20
      __int64 v9; // x0
      _QWORD *v10; // x20
      __int64 v11; // x8
      __int64 v12; // x21
      __int64 v13; // x0
      __int64 v14; // x8
      _QWORD *v15; // x21
      __int64 v16; // x8
      __int64 v17; // x22
      __int64 v18; // x0
      __int64 v19; // x8
      __int64 v20; // x0
      __int64 v21; // x0
      __int64 v22; // x0
      __int64 v23; // x0
      __int64 v24; // x0
      __int64 v25; // x0
      __int64 v26; // x0
      __int64 v27; // x0
      __int64 v28; // x0
      __int64 v29; // x0
      __int64 v30; // x0
      __int64 v31; // x0
      __int64 v32; // x0
      __int64 v33; // x0
      __int64 v34; // x0
      void *v35; // x0
    
      v2 = 0;
      *(_QWORD *)a1 = off_10046C5F0;
      *(_QWORD *)(a1 + 96) = &off_10046C720;
      do
      {
        v3 = a1 + 8 * v2;
        v4 = *(_QWORD *)(v3 + 112);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *(_QWORD *)(v3 + 112) = 0;
        v5 = *(_QWORD *)(v3 + 128);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        *(_QWORD *)(v3 + 128) = 0;
        ++v2;
      }
      while ( v2 < 2 );
      v6 = *(_QWORD *)(a1 + 280);
      v7 = (unsigned __int64)(*(_QWORD *)(a1 + 288) - v6) >> 3;
      if ( (int)v7 >= 1 )
      {
        for ( i = (int)v7 - 1LL; ; --i )
        {
          v9 = *(_QWORD *)(v6 + 8 * i);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          if ( i + 1 < 2 )
            break;
          v6 = *(_QWORD *)(a1 + 280);
        }
        v6 = *(_QWORD *)(a1 + 280);
      }
      *(_QWORD *)(a1 + 288) = v6;
      v10 = (_QWORD *)(a1 + 248);
      v11 = *(int *)(a1 + 260);
      if ( (int)v11 >= 1 )
      {
        v12 = v11 - 1;
        do
        {
          v13 = *(_QWORD *)(*v10 + 8 * v12);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v14 = v12-- + 1;
        }
        while ( v14 > 1 );
      }
      *(_DWORD *)(a1 + 260) = 0;
      v15 = (_QWORD *)(a1 + 264);
      v16 = *(int *)(a1 + 276);
      if ( (int)v16 >= 1 )
      {
        v17 = v16 - 1;
        do
        {
          v18 = *(_QWORD *)(*v15 + 8 * v17);
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
          v19 = v17-- + 1;
        }
        while ( v19 > 1 );
      }
      *(_DWORD *)(a1 + 276) = 0;
      v20 = *(_QWORD *)(a1 + 520);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      *(_QWORD *)(a1 + 520) = 0;
      v21 = *(_QWORD *)(a1 + 368);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      *(_QWORD *)(a1 + 368) = 0;
      v22 = *(_QWORD *)(a1 + 376);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      *(_QWORD *)(a1 + 376) = 0;
      v23 = *(_QWORD *)(a1 + 360);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      *(_QWORD *)(a1 + 360) = 0;
      v24 = *(_QWORD *)(a1 + 504);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      *(_QWORD *)(a1 + 504) = 0;
      v25 = *(_QWORD *)(a1 + 456);
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      *(_QWORD *)(a1 + 456) = 0;
      v26 = *(_QWORD *)(a1 + 464);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      *(_QWORD *)(a1 + 464) = 0;
      v27 = *(_QWORD *)(a1 + 392);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      *(_QWORD *)(a1 + 392) = 0;
      v28 = *(_QWORD *)(a1 + 400);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      *(_QWORD *)(a1 + 400) = 0;
      v29 = *(_QWORD *)(a1 + 352);
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      *(_QWORD *)(a1 + 352) = 0;
      v30 = *(_QWORD *)(a1 + 384);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      *(_QWORD *)(a1 + 384) = 0;
      v31 = *(_QWORD *)(a1 + 192);
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
      *(_QWORD *)(a1 + 192) = 0;
      v32 = *(_QWORD *)(a1 + 168);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
      *(_QWORD *)(a1 + 168) = 0;
      v33 = *(_QWORD *)(a1 + 176);
      if ( v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
      *(_QWORD *)(a1 + 176) = 0;
      CombatHUD::initializeMembers((CombatHUD *)a1);
      v34 = *(_QWORD *)(a1 + 432);
      if ( v34 )
        operator delete[](v34);
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 440) = 0;
      v35 = *(void **)(a1 + 280);
      if ( v35 )
        operator delete(v35);
      if ( *v15 )
        operator delete[](*v15);
      *v15 = 0;
      *(_QWORD *)(a1 + 272) = 0;
      if ( *v10 )
        operator delete[](*v10);
      *v10 = 0;
      *(_QWORD *)(a1 + 256) = 0;
      Sprite::~Sprite((Sprite *)a1);
    }

    // attributes: thunk
    void __fastcall CombatHUD::~CombatHUD(__int64 a1)
    {
      __ZN9CombatHUDD2Ev(a1);
    }

    void __fastcall CombatHUD::~CombatHUD(void *a1)
    {
      CombatHUD::~CombatHUD((__int64)a1);
      operator delete(a1);
    }

    __n128 __fastcall CombatHUD::start(CombatHUD *a1)
    {
      LogicTutorialManager *v2; // x0
      LogicTutorialManager *Instance; // x0
      int isLandscape; // w21
      DisplayObject *v5; // x20
      long double v6; // q0
      __n128 result; // q0
      DisplayObject *v8; // x0
    
      v2 = (LogicTutorialManager *)CombatHUD::addStars(a1);
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(v2);
      isLandscape = BattleScreen::isLandscape(Instance);
      v5 = (DisplayObject *)*((_QWORD *)a1 + 24);
      v6 = DisplayObject::getX(v5);
      if ( isLandscape )
        return DisplayObject::setPixelSnappedXY(v5, *(float *)&v6, *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
      result = DisplayObject::setPixelSnappedXY(v5, *(float *)&v6, *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
      v8 = (DisplayObject *)*((_QWORD *)a1 + 56);
      if ( v8 )
        return DisplayObject::setY(v8, *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
      return result;
    }

    void __fastcall CombatHUD::addStars(CombatHUD *a1)
    {
      signed int v2; // w20
      const char *v3; // x2
      UnbindFacebookAccountMessage *v4; // x21
      const LogicCharacter *LeaderByIndex; // x0
      const char *v6; // x2
      __int64 LeaderTowers; // x0
      const char *v8; // x2
      __int64 v9; // x23
      __int64 v10; // [xsp+0h] [xbp-40h] BYREF
      __int64 v11; // [xsp+8h] [xbp-38h]
    
      v2 = 0;
      v4 = *(UnbindFacebookAccountMessage **)(*(_QWORD *)(GameMode::getInstance() + 112) + 168LL);
      do
      {
        LeaderByIndex = (const LogicCharacter *)LogicBattle::getLeaderByIndex(v4, v2, v3);
        CombatHUD::createStar(a1, LeaderByIndex);
        LeaderTowers = LogicBattle::getLeaderTowers(v4, v2, v6);
        LogicArrayList<LogicCharacter const*>::LogicArrayList(&v10, LeaderTowers);
        Debugger::doAssert((Debugger *)(SHIDWORD(v11) < 3), (bool)"", v8);
        if ( SHIDWORD(v11) >= 1 )
        {
          v9 = 0;
          do
            CombatHUD::createStar(a1, *(const LogicCharacter **)(v10 + 8 * v9++));
          while ( v9 < SHIDWORD(v11) );
        }
        if ( v10 )
          operator delete[](v10);
        v10 = 0;
        v11 = 0;
        ++v2;
      }
      while ( v2 < 2 );
    }

    __int64 __fastcall CombatHUD::setReplayTimeModifier(__int64 a1, int a2)
    {
      int v3; // w9
      int v4; // w19
      __int64 v5; // x8
      __int64 result; // x0
      float v7; // s8
      __int64 Instance; // x0
    
      if ( a2 <= 3 )
        v3 = a2;
      else
        v3 = 3;
      if ( a2 >= 0 )
        v4 = v3;
      else
        v4 = 0;
      *(_DWORD *)(a1 + 472) = v4;
      v5 = *(_QWORD *)(a1 + 464);
      if ( v5 )
        MovieClip::gotoAndStopFrameIndex(*(MovieClip **)(v5 + 96), v4);
      result = MovieClip::getCurrentFrame(*(#1257 **)(*(_QWORD *)(a1 + 456) + 96LL));
      if ( (_DWORD)result )
      {
        v7 = CombatHUD::REPLAY_TIME_MODIFIERS[v4];
        Instance = GameMode::getInstance();
        return GameMode::setTimeModifier(Instance, v7);
      }
      return result;
    }

    __n128 __fastcall CombatHUD::setReplayPaused(__int64 a1, int a2, const char *a3)
    {
      float v5; // s0
      __int64 Instance; // x0
      float v8; // [xsp+10h] [xbp-20h]
    
      Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 472) < 4u), (bool)"m_replayTimeModifierIndex out of bounds", a3);
      if ( (a2 & 1) != 0 )
        v5 = 0.0;
      else
        v5 = CombatHUD::REPLAY_TIME_MODIFIERS[*(int *)(a1 + 472)];
      v8 = v5;
      Instance = GameMode::getInstance();
      GameMode::setTimeModifier(Instance, v8);
      return MovieClip::gotoAndStopFrameIndex((MovieClip *)*(_QWORD *)(*(_QWORD *)(a1 + 456) + 96LL), a2 ^ 1u);
    }

    float *__fastcall CombatHUD::cancelAllDelayedSpellButtonReleases(float *result)
    {
      float *v1; // x19
      __int64 i; // x21
      __int64 v3; // x8
      float *v4; // x20
    
      v1 = result;
      for ( i = 216; i != 248; i += 8 )
      {
        v3 = *((_QWORD *)v1 + 14);
        v4 = *(float **)(v3 + i);
        if ( v4 )
        {
          result = (float *)SpellButton::isDelayedReleaseActive(*(_QWORD *)(v3 + i));
          if ( (_DWORD)result )
            result = SpellButton::endDelayedRelease(v4);
        }
      }
      return result;
    }

    __int64 __fastcall CombatHUD::handleTouchReleased(CombatHUD *a1)
    {
      CombatHUD::showTauntSelector(a1, 0);
      return 0;
    }

    __int64 __fastcall CombatHUD::showTauntSelector(__int64 a1, int a2)
    {
      LogicTutorialManager *Instance; // x0
      __int64 result; // x0
      int v6; // w20
      TauntSelector *v7; // x20
      int v8; // w20
      Stage *v9; // x20
      const char *v10; // x1
      void *String; // x0
      __int64 v12; // x8
      LogicTutorialManager *v13; // x0
      BattleStartHUD *v14; // x0
      bool v15; // w1
      __int64 v16; // x0
      #1257 *MovieClip; // x0
      MovieClip *MovieClipByName; // x0
      #1257 *v19; // x0
      __int64 v20; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)a1);
      result = BattleScreen::isReplay(Instance);
      if ( (result & 1) != 0 )
        return result;
      if ( a2 )
      {
        v6 = *(_DWORD *)(a1 + 488);
        result = LogicDataTables::getClientGlobals();
        if ( v6 < *(_DWORD *)(result + 324) )
        {
          if ( !*(_QWORD *)(a1 + 376) )
          {
            v7 = (TauntSelector *)operator new(224);
            TauntSelector::TauntSelector(v7);
            *(_QWORD *)(a1 + 376) = v7;
            result = (*(__int64 (__fastcall **)(_QWORD, TauntSelector *))(**(_QWORD **)(a1 + 360) + 160LL))(
                       *(_QWORD *)(a1 + 360),
                       v7);
          }
          v8 = 1;
          goto LABEL_9;
        }
        v9 = (Stage *)GUI::getInstance((BadgePopup *)result);
        String = StringTable::getString((#1308 *)"TID_TAUNT_LIMIT_FULL", v10);
        result = GUI::showCenteredFloaterText(v9, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      v8 = 0;
    LABEL_9:
      v12 = *(_QWORD *)(a1 + 376);
      if ( v12 )
      {
        *(_BYTE *)(v12 + 8) = v8;
        v13 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)result);
        if ( BattleScreen::isBattleEndHUDVisible(v13) )
        {
          v14 = *(BattleStartHUD **)(a1 + 376);
          v15 = 1;
        }
        else
        {
          v16 = *(_QWORD *)(a1 + 112);
          *(_BYTE *)(v16 + 186) = v8 ^ 1;
          MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)v16);
          MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "panel");
          if ( MovieClipByName )
            MovieClip::gotoAndStopFrameIndex(MovieClipByName, v8);
          v19 = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 112));
          v20 = MovieClip::getMovieClipByName(v19, "slots");
          if ( v20 )
            *(_BYTE *)(v20 + 8) = v8 ^ 1;
          v15 = 0;
          v14 = *(BattleStartHUD **)(a1 + 376);
        }
        return TauntSelector::setPanelVisible(v14, v15);
      }
      return result;
    }

    __int64 __fastcall CombatHUD::onSimulatedSpellUsed(LogicTutorialManager *a1, __int64 a2, __int64 a3, InitState *a4)
    {
      LogicTutorialManager *Instance; // x0
      __int64 result; // x0
      CombatHUD::PlayerHUD *PlayerHUD; // x20
      int ManaCost; // w1
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      result = BattleScreen::isReplay(Instance);
      if ( (result & 1) == 0 )
      {
        PlayerHUD = (CombatHUD::PlayerHUD *)CombatHUD::getPlayerHUD(a1, 0);
        ManaCost = LogicSpellData::getManaCost(a4);
        return CombatHUD::PlayerHUD::onSimulatedSpellUsed(PlayerHUD, ManaCost);
      }
      return result;
    }

    __int64 __fastcall CombatHUD::getPlayerHUD(__int64 a1, String *a2, const char *a3)
    {
      __int64 v5; // x20
      __int64 v6; // t1
      int v7; // w1
      const String *v8; // x2
      _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
      _QWORD v11[3]; // [xsp+18h] [xbp-38h] BYREF
    
      Debugger::doAssert((Debugger *)((unsigned int)a2 < 2), (bool)"combat hud: hud index out of bounds", a3);
      v5 = a1 + 8LL * (int)a2;
      v6 = *(_QWORD *)(v5 + 112);
      String::valueOf(v10, a2, v7);
      operator+(v11, "combat hud: player hud not initialized: ", v10);
      Debugger::doAssert((Debugger *)(v6 != 0), (bool)v11, v8);
      String::~String();
      String::~String();
      return *(_QWORD *)(v5 + 112);
    }

    __int64 __fastcall CombatHUD::showNoDeployZone(__int64 result, int a2, float a3)
    {
      *(_BYTE *)(result + 420) = a2;
      if ( !a2 )
        a3 = 0.0;
      *(float *)(result + 424) = a3;
      return result;
    }

    __n128 __fastcall CombatHUD::buttonClicked(__int64 a1, __int64 a2)
    {
      __int64 v3; // x8
      _BOOL4 v4; // w1
      const String *String; // x20
      const char *v6; // x1
      const String *v7; // x21
      ConfirmPopup *v8; // x19
      BadgePopup *v9; // x0
      __int64 Instance; // x0
      __n128 result; // q0
      int v12; // w8
      int v13; // w9
      int v14; // w8
      _BOOL4 v15; // w1
      const char *v16; // x2
    
      if ( *(_QWORD *)(a1 + 368) == a2 )
      {
        v3 = *(_QWORD *)(a1 + 376);
        if ( v3 )
          v4 = *(unsigned __int8 *)(v3 + 8) == 0;
        else
          v4 = 1;
        CombatHUD::showTauntSelector(a1, v4);
      }
      else if ( *(_QWORD *)(a1 + 504) == a2 )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_END_BATTLE_TITLE", (const char *)a2);
        v7 = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_END_BATTLE_TEXT", v6);
        v8 = (ConfirmPopup *)operator new(384);
        ConfirmPopup::ConfirmPopup(v8, 24, String, v7);
        Instance = GUI::getInstance(v9);
        GUI::showPopup(Instance, v8, 1, 0, 0);
      }
      else if ( *(_QWORD *)(a1 + 464) == a2 )
      {
        v12 = *(_DWORD *)(a1 + 472);
        v13 = v12 + 1;
        if ( v12 + 1 >= 0 )
          v14 = v12 + 1;
        else
          v14 = v12 + 4;
        CombatHUD::setReplayTimeModifier(a1, v13 - (v14 & 0xFFFFFFFC));
      }
      else if ( *(_QWORD *)(a1 + 456) == a2 )
      {
        v15 = MovieClip::getCurrentFrame(*(#1257 **)(a2 + 96)) != 0;
        return CombatHUD::setReplayPaused(a1, v15, v16);
      }
      return result;
    }

    bool __fastcall CombatHUD::isTauntSelectorVisible(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 376);
      return v1 && *(_BYTE *)(v1 + 8) != 0;
    }

    __int64 __fastcall CombatHUD::update(__int64 a1, float a2, float a3, float a4)
    {
      float *v8; // x8
      float *v9; // x8
      float *v10; // x8
      float *v11; // x8
      __int64 v12; // x20
      void (__fastcall *v13)(__int64, _BOOL8); // x21
      int v14; // w22
      _BOOL8 v15; // x1
      __int64 Instance; // x25
      UnlockAccountPopup *v17; // x24
      UnbindFacebookAccountMessage *v18; // x20
      LogicTutorialManager *isBattleEndedCalled; // x0
      int v20; // w23
      LogicTutorialManager *v21; // x0
      _BOOL8 isReplay; // x0
      _BOOL4 v23; // w21
      LogicTutorialManager *v24; // x0
      _BOOL8 isBattleEndHUDVisible; // x0
      _BOOL4 v26; // w26
      LogicTutorialManager *v27; // x0
      __int64 isSlowZoom; // x0
      char v29; // w22
      __int64 v30; // x8
      __int64 v31; // x8
      __int64 v32; // x8
      _BYTE *v33; // x27
      __int64 (__fastcall *v34)(_BYTE *, long double); // x28
      long double v35; // q0
      LogicTutorialManager *v36; // x0
      DisplayObject *v37; // x27
      long double v38; // q0
      _BYTE *v39; // x27
      __int64 v40; // x27
      __int64 v41; // x28
      __int64 (__fastcall *v43)(_BYTE *, long double); // x28
      long double v44; // q0
      __int64 v45; // x27
      __int64 (__fastcall *v46)(__int64, long double); // x28
      long double v47; // q0
      __int64 v48; // x8
      __int64 v49; // x8
      __int64 v50; // x8
      __int64 v51; // x8
      __int64 v52; // x8
      __int64 v53; // x8
      __int64 v54; // x8
      LogicTutorialManager *v55; // x0
      LogicJSONObject *RenderSystem; // x0
      __int64 IllegalPlaceRenderer; // x0
      __int64 v58; // x26
      float v59; // s1
      __int64 i; // x25
      NativeFont *v61; // x0
      int Tick; // w24
      float v63; // s0
      __int64 v64; // x8
      __int64 v65; // x26
      __int64 v66; // x0
      __int64 v67; // x8
      __int64 v68; // x8
      __int64 v69; // x25
      __int64 v70; // x0
      __int64 v71; // x8
      __int64 v72; // x8
      __int64 v73; // x24
      __int64 v74; // x0
      __int64 v75; // x8
      thread_state_t *isNPCBattle; // x0
      __int64 v77; // x20
      __int64 (__fastcall *v78)(__int64, float); // x21
      float Alpha; // s0
      LogicTutorialManager *v80; // x0
      __int64 result; // x0
      __int64 v82; // x8
      LogicTutorialManager *BattleScreen; // x0
      LogicJSONObject *v84; // x0
      float v85; // s0
      float v86; // s0
      int v87; // [xsp+0h] [xbp-90h] BYREF
      float v88; // [xsp+4h] [xbp-8Ch] BYREF
      int v89; // [xsp+8h] [xbp-88h] BYREF
      float v90; // [xsp+Ch] [xbp-84h] BYREF
      int v91; // [xsp+10h] [xbp-80h] BYREF
      float v92; // [xsp+14h] [xbp-7Ch] BYREF
      int v93; // [xsp+18h] [xbp-78h] BYREF
      float v94; // [xsp+1Ch] [xbp-74h] BYREF
    
      *(float *)(a1 + 416) = *(float *)(a1 + 416) + a2;
      v94 = *(float *)(a1 + 480) - a2;
      v93 = 0;
      v8 = &v94;
      if ( v94 < 0.0 )
        v8 = (float *)&v93;
      *(float *)(a1 + 480) = *v8;
      v92 = *(float *)(a1 + 492) - a2;
      v91 = 0;
      v9 = &v92;
      if ( v92 < 0.0 )
        v9 = (float *)&v91;
      *(float *)(a1 + 492) = *v9;
      v90 = *(float *)(a1 + 484) - a2;
      v89 = 0;
      v10 = &v90;
      if ( v90 < 0.0 )
        v10 = (float *)&v89;
      *(float *)(a1 + 484) = *v10;
      v88 = *(float *)(a1 + 496) - a2;
      v87 = 0;
      v11 = &v88;
      if ( v88 < 0.0 )
        v11 = (float *)&v87;
      *(float *)(a1 + 496) = *v11;
      v12 = *(_QWORD *)(a1 + 368);
      if ( v12 )
      {
        v13 = *(void (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)v12 + 152LL);
        v14 = *(_DWORD *)(a1 + 488);
        v15 = v14 >= *(_DWORD *)(LogicDataTables::getClientGlobals() + 324);
        v13(v12, v15);
      }
      Instance = GameMode::getInstance();
      v17 = *(UnlockAccountPopup **)(Instance + 112);
      v18 = (UnbindFacebookAccountMessage *)*((_QWORD *)v17 + 21);
      isBattleEndedCalled = (LogicTutorialManager *)LogicBattle::isBattleEndedCalled(v18);
      v20 = (int)isBattleEndedCalled;
      v21 = (LogicTutorialManager *)BattleScreen::getInstance(isBattleEndedCalled);
      isReplay = BattleScreen::isReplay(v21);
      v23 = isReplay;
      v24 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isReplay);
      isBattleEndHUDVisible = BattleScreen::isBattleEndHUDVisible(v24);
      v26 = isBattleEndHUDVisible;
      v27 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isBattleEndHUDVisible);
      isSlowZoom = BattleScreen::isSlowZoom(v27);
      v29 = isSlowZoom;
      v30 = *(_QWORD *)(a1 + 400);
      if ( v30 )
        *(_BYTE *)(v30 + 8) = *(_BYTE *)(a1 + 528) ^ 1;
      v31 = *(_QWORD *)(a1 + 384);
      if ( v31 )
        *(_BYTE *)(v31 + 8) = *(_BYTE *)(a1 + 528) ^ 1;
      v32 = *(_QWORD *)(a1 + 168);
      if ( v32 )
        *(_BYTE *)(v32 + 8) = *(_BYTE *)(a1 + 528) ^ 1;
      v33 = *(_BYTE **)(a1 + 176);
      if ( v33 )
      {
        v33[8] = *(_BYTE *)(a1 + 528) ^ 1;
        v34 = *(__int64 (__fastcall **)(_BYTE *, long double))(*(_QWORD *)v33 + 80LL);
        *(float *)&v35 = DisplayObject::getAlpha(v33);
        if ( (v29 & 1) != 0 )
          *(float *)&v35 = *(float *)&v35 + (float)(a2 * -2.0);
        else
          *(float *)&v35 = (float)(a2 * 4.0) + *(float *)&v35;
        isSlowZoom = v34(v33, v35);
      }
      if ( *(_QWORD *)(a1 + 192) )
      {
        v36 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isSlowZoom);
        if ( (BattleScreen::isLandscape(v36) & 1) == 0 )
        {
          v37 = *(DisplayObject **)(a1 + 192);
          v38 = DisplayObject::getX(v37);
          DisplayObject::setPixelSnappedXY(v37, *(float *)&v38, *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
        }
        v39 = *(_BYTE **)(a1 + 192);
        v39[8] = *(_BYTE *)(a1 + 528) ^ 1;
        if ( (v29 & 1) != 0 )
        {
          v40 = (int)((*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 280)) >> 3);
          v41 = 8LL * ((int)v40 - 1);
          while ( v40-- >= 1 )
          {
            isSlowZoom = GainedStar::isAnimating(*(DropGUIContainer **)(*(_QWORD *)(a1 + 280) + v41));
            v41 -= 8;
            if ( (isSlowZoom & 1) != 0 )
              goto LABEL_32;
          }
          v45 = *(_QWORD *)(a1 + 192);
          v46 = *(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v45 + 80LL);
          *(float *)&v47 = DisplayObject::getAlpha(v45) + (float)(a2 * -2.0);
          isSlowZoom = v46(v45, v47);
        }
        else
        {
          v43 = *(__int64 (__fastcall **)(_BYTE *, long double))(*(_QWORD *)v39 + 80LL);
          *(float *)&v44 = (float)(a2 * 4.0) + DisplayObject::getAlpha(v39);
          isSlowZoom = v43(v39, v44);
        }
      }
    LABEL_32:
      if ( v26 )
      {
        v48 = *(_QWORD *)(a1 + 192);
        if ( v48 )
          *(_BYTE *)(v48 + 8) = 0;
        v49 = *(_QWORD *)(a1 + 400);
        if ( v49 )
          *(_BYTE *)(v49 + 8) = 0;
        v50 = *(_QWORD *)(a1 + 384);
        if ( v50 )
          *(_BYTE *)(v50 + 8) = 0;
        v51 = *(_QWORD *)(a1 + 168);
        if ( v51 )
          *(_BYTE *)(v51 + 8) = 0;
        v52 = *(_QWORD *)(a1 + 120);
        if ( v52 )
          *(_BYTE *)(v52 + 8) = 0;
        v53 = *(_QWORD *)(a1 + 112);
        if ( v53 )
          *(_BYTE *)(v53 + 8) = 0;
        v54 = *(_QWORD *)(a1 + 448);
        if ( v54 )
          *(_BYTE *)(v54 + 8) = 0;
      }
      v55 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isSlowZoom);
      RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(v55);
      IllegalPlaceRenderer = RenderSystem::getIllegalPlaceRenderer(RenderSystem);
      v58 = IllegalPlaceRenderer;
      if ( IllegalPlaceRenderer )
      {
        if ( v23 || v20 & 1 | (*(_BYTE *)(a1 + 420) == 0) )
        {
          *(_BYTE *)(IllegalPlaceRenderer + 8) = 0;
        }
        else
        {
          BattleScreen = (LogicTutorialManager *)GameMode::getBattleScreen(Instance);
          v84 = (LogicJSONObject *)BattleScreen::getRenderSystem(BattleScreen);
          *(_BYTE *)(v58 + 8) = RenderSystem::getShowHUD(v84);
          v85 = *(float *)(a1 + 424);
          if ( v85 > 0.0 )
          {
            v86 = v85 - a2;
            *(float *)(a1 + 424) = v86;
            if ( v86 <= 0.0 )
              *(_BYTE *)(a1 + 420) = 0;
          }
        }
      }
      CombatHUD::updateGaindedStars((CombatHUD *)a1, a3);
      CombatHUD::updateTimer((CombatHUD *)a1, v18);
      for ( i = 0; i != 16; i += 8 )
      {
        v61 = *(NativeFont **)(a1 + 112 + i);
        if ( v61 )
          CombatHUD::PlayerHUD::update(v61, a2, v59);
      }
      if ( v23 )
      {
        Tick = LogicGameMode::getTick(v17);
        v64 = *(int *)(a1 + 444);
        if ( (int)v64 >= 1 )
        {
          v65 = v64 - 1;
          do
          {
            if ( (CombatHUD::ReplayDrag::update(*(#1391 **)(*(_QWORD *)(a1 + 432) + 8 * v65), v63, Tick, a4) & 1) == 0 )
            {
              v66 = LogicArrayList<CombatHUD::ReplayDrag *>::remove(a1 + 432, v65);
              if ( v66 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
            }
            v67 = v65-- + 1;
          }
          while ( v67 > 1 );
        }
      }
      v68 = *(int *)(a1 + 276);
      if ( (int)v68 >= 1 )
      {
        v69 = v68 - 1;
        do
        {
          if ( ((v20 | !MiniTimer::update(*(#1348 **)(*(_QWORD *)(a1 + 264) + 8 * v69), a2)) & 1) != 0 )
          {
            v70 = LogicArrayList<MiniTimer *>::remove(a1 + 264, v69);
            if ( v70 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
          }
          v71 = v69-- + 1;
        }
        while ( v71 > 1 );
      }
      v72 = *(int *)(a1 + 260);
      if ( (int)v72 >= 1 )
      {
        v73 = v72 - 1;
        do
        {
          if ( !(unsigned int)CombatHUD::Taunt::update(*(#1359 **)(*(_QWORD *)(a1 + 248) + 8 * v73), a2) )
          {
            v74 = LogicArrayList<CombatHUD::Taunt *>::remove(a1 + 248, v73);
            if ( v74 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 8LL))(v74);
          }
          v75 = v73-- + 1;
        }
        while ( v75 > 1 );
      }
      isNPCBattle = *(thread_state_t **)(a1 + 376);
      if ( isNPCBattle )
        isNPCBattle = (thread_state_t *)TauntSelector::update((BattleStartHUD *)isNPCBattle, a2);
      if ( v23 || (isNPCBattle = (thread_state_t *)LogicBattle::isNPCBattle(v18), (_DWORD)isNPCBattle) )
      {
        v77 = *(_QWORD *)(a1 + 504);
        if ( !(v29 & 1 | (v77 == 0)) )
        {
          v78 = *(__int64 (__fastcall **)(__int64, float))(*(_QWORD *)v77 + 80LL);
          Alpha = DisplayObject::getAlpha(*(_QWORD *)(a1 + 504));
          isNPCBattle = (thread_state_t *)v78(v77, Alpha + a2);
        }
        if ( *(_BYTE *)(a1 + 512) )
        {
          v80 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isNPCBattle);
          isNPCBattle = BattleScreen::sendGoHomeMessage(v80);
          *(_BYTE *)(a1 + 512) = 0;
        }
      }
      result = GameMain::getInstance((AllianceStreamMessage *)isNPCBattle);
      if ( *(_BYTE *)(result + 356) )
      {
        v82 = *(_QWORD *)(a1 + 504);
        if ( v82 )
          *(_BYTE *)(v82 + 8) = 0;
      }
      return result;
    }

    __int64 __fastcall CombatHUD::updateGaindedStars(__int64 a1, double a2)
    {
      MovieClip ***v4; // x25
      VisitHomeMessage *Instance; // x20
      UnbindFacebookAccountMessage *v6; // x21
      tween::Bounce *BattleTopAvatar; // x22
      tween::Bounce *BattleBottomAvatar; // x20
      unsigned int *AccountId; // x22
      unsigned int *v10; // x23
      __int64 LeaderCharacter; // x20
      __int64 v12; // x22
      __int64 result; // x0
      const char *Stars; // x21
      MovieClip *ScoreBlink; // x0
      const char *v16; // x20
      int v17; // w27
      int v18; // w26
      MovieClip **v19; // x24
      const char *v20; // x1
      LogicTutorialManager *v21; // x0
      int v22; // w2
      int v23; // w2
    
      v4 = *(MovieClip ****)(a1 + 280);
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      v6 = *(UnbindFacebookAccountMessage **)(*((_QWORD *)Instance + 14) + 168LL);
      BattleTopAvatar = (tween::Bounce *)GameMode::getBattleTopAvatar(Instance);
      BattleBottomAvatar = GameMode::getBattleBottomAvatar(Instance);
      AccountId = (unsigned int *)LogicClientAvatar::getAccountId(BattleTopAvatar);
      v10 = (unsigned int *)LogicClientAvatar::getAccountId(BattleBottomAvatar);
      LeaderCharacter = LogicBattle::getLeaderCharacter(v6, *AccountId, (const char *)AccountId[1]);
      v12 = LogicBattle::getLeaderCharacter(v6, *v10, (const char *)v10[1]);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)LeaderCharacter + 200LL))(LeaderCharacter);
      if ( (_DWORD)result )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 200LL))(v12);
        if ( (_DWORD)result )
        {
          Stars = (const char *)LogicSummoner::getStars(LeaderCharacter, v12);
          ScoreBlink = (MovieClip *)LogicSummoner::getStars(v12, LeaderCharacter);
          v16 = (const char *)ScoreBlink;
          if ( v4 == *(MovieClip ****)(a1 + 288) )
          {
            v17 = 0;
            v18 = 0;
          }
          else
          {
            v17 = 0;
            v18 = 0;
            do
            {
              v19 = *v4;
              GainedStar::update(*v4, *(float *)&a2);
              if ( *((_BYTE *)v19 + 8) )
              {
                if ( *((_BYTE *)v19 + 144) )
                  ++v18;
                else
                  ++v17;
              }
              ScoreBlink = (MovieClip *)GainedStar::getScoreBlink((DropGUIContainer *)v19);
              if ( (_DWORD)ScoreBlink )
              {
                v20 = *((_BYTE *)v19 + 144) ? "starPlayer" : "starEnemy";
                ScoreBlink = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 192), v20);
                if ( ScoreBlink )
                  ScoreBlink = (MovieClip *)MovieClip::playOnce(ScoreBlink);
              }
              ++v4;
            }
            while ( v4 != *(MovieClip ****)(a1 + 288) );
          }
          v21 = (LogicTutorialManager *)BattleScreen::getInstance(ScoreBlink);
          if ( !(unsigned int)BattleScreen::isLandscape(v21) )
          {
            DisplayObject::setPixelSnappedXY(
              *(DisplayObject **)(a1 + 136),
              *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_X,
              *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
            DisplayObject::setPixelSnappedXY(
              *(DisplayObject **)(a1 + 128),
              *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_X,
              *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
          }
          StarHud::update(*(#1349 **)(a1 + 136), a2, Stars, v22);
          StarHud::update(*(#1349 **)(a1 + 128), a2, v16, v23);
          TextField::setNumberText(*(TextField **)(a1 + 232), (_DWORD)Stars - v17, 0);
          return TextField::setNumberText(*(TextField **)(a1 + 240), (int)v16 - v18, 0);
        }
      }
      return result;
    }

    void __fastcall CombatHUD::updateTimer(__int64 a1, UnbindFacebookAccountMessage *a2)
    {
      HomeScreen *Globals; // x23
      ChangeAllianceMemberRoleOkMessage *LocationData; // x25
      int MatchLengthSeconds; // w20
      int SecondsGone; // w0
      int v8; // w2
      int v9; // w20
      int v10; // w21
      int MillisecondsGone; // w0
      int v12; // w2
      int v13; // w27
      int v14; // w21
      int isBattleEndedWithTimeOut; // w22
      int isBattleEndedCalled; // w24
      int v17; // w20
      int v18; // w27
      int v19; // w0
      int v20; // w2
      int v21; // w0
      int v22; // w2
      const char *v23; // x1
      const char *v24; // x2
      DisplayObject *MovieClip; // x0
      #1257 *v26; // x1
      MovieClip *MovieClipByName; // x28
      #1257 *v28; // x0
      int TotalFrames; // w28
      float MSPerFrame; // s8
      const char *v31; // x2
      _BYTE *v32; // x26
      DisplayObject *v33; // x0
      #1257 *v34; // x1
      const AreaEffectObject *v35; // x2
      __int64 SoundByName; // x26
      int EndTimerAnimMS; // w0
      int v38; // w3
      int v39; // w0
      const AreaEffectObject *v40; // x2
      __int64 v41; // x26
      __int64 v42; // x26
      __int64 ExtraTimeMusic; // x0
      long double v44; // q0
      __int64 v45; // x0
      MovieClip *v46; // x0
      VisitHomeMessage *Instance; // x0
      LogicDataTables *BattleBottomAvatar; // x23
      VisitHomeMessage *v49; // x0
      LogicDataTables *BattleTopAvatar; // x24
      const char *v51; // x2
      MovieClip *v52; // x25
      int StarCount; // w0
      MovieClip *v54; // x23
      int v55; // w0
      #1257 *v56; // x1
      int v57; // w8
      __int64 v58; // x8
      int v59; // w9
      __int64 v60; // x8
      __int64 v61; // x9
      MovieClip *v62; // x0
      MovieClip *v63; // x0
      __int64 v64; // x9
      String *v65; // x0
      int v66; // w1
      const char *v67; // x1
      void *String; // x20
      String v69; // [xsp+20h] [xbp-180h] BYREF
      String v70; // [xsp+38h] [xbp-168h] BYREF
      _QWORD v71[3]; // [xsp+50h] [xbp-150h] BYREF
      String v72; // [xsp+68h] [xbp-138h] BYREF
      _QWORD v73[3]; // [xsp+80h] [xbp-120h] BYREF
      _QWORD v74[3]; // [xsp+98h] [xbp-108h] BYREF
      String v75; // [xsp+B0h] [xbp-F0h] BYREF
      String v76; // [xsp+C8h] [xbp-D8h] BYREF
      String v77; // [xsp+E0h] [xbp-C0h] BYREF
      String v78; // [xsp+F8h] [xbp-A8h] BYREF
      String v79; // [xsp+110h] [xbp-90h] BYREF
      String v80; // [xsp+128h] [xbp-78h] BYREF
    
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(a2);
      if ( (int)LogicLocationData::getMatchLengthSeconds(LocationData) < 1 )
        return;
      MatchLengthSeconds = LogicLocationData::getMatchLengthSeconds(LocationData);
      SecondsGone = LogicBattle::getSecondsGone((UnlockAccountPopup **)a2);
      v9 = LogicMath::max(0, MatchLengthSeconds - SecondsGone, v8);
      v10 = 1000 * LogicLocationData::getMatchLengthSeconds(LocationData);
      MillisecondsGone = LogicBattle::getMillisecondsGone((UnlockAccountPopup **)a2);
      v13 = LogicMath::max(0, v10 - MillisecondsGone, v12);
      v14 = LogicBattle::isOnOvertime(a2);
      isBattleEndedWithTimeOut = LogicBattle::isBattleEndedWithTimeOut(a2);
      isBattleEndedCalled = LogicBattle::isBattleEndedCalled(a2);
      if ( v14 )
      {
        v17 = LogicLocationData::getMatchLengthSeconds(LocationData);
        v18 = LogicLocationData::getOvertimeLengthSeconds(LocationData) + v17;
        v19 = LogicBattle::getSecondsGone((UnlockAccountPopup **)a2);
        v9 = LogicMath::max(0, v18 - v19, v20);
        v21 = LogicBattle::getMillisecondsGone((UnlockAccountPopup **)a2);
        v13 = LogicMath::max(0, 1000 * v18 - v21, v22);
      }
      if ( v13 <= (int)LogicGlobals::getEndTimerAnimMS(Globals) && !*(_QWORD *)(a1 + 384) )
      {
        MovieClip = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "print_endTimer", v24);
        *(_QWORD *)(a1 + 384) = MovieClip;
        DisplayObject::setPixelSnappedXY(
          MovieClip,
          *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_X,
          *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
        DropGUIContainer::putLocalizedTIDsToTextFields(*(#1375 **)(a1 + 384), v26);
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 384), "timeRunOut");
        if ( MovieClipByName )
        {
          String::String(&v80, "");
          MovieClip::setText(MovieClipByName, "TID_TIME_RUN_OUT", &v80);
          String::~String();
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 384));
      }
      v28 = *(#1257 **)(a1 + 384);
      if ( !v28 )
      {
    LABEL_18:
        if ( !isBattleEndedWithTimeOut )
          goto LABEL_22;
        goto LABEL_19;
      }
      TotalFrames = MovieClip::getTotalFrames(v28);
      MSPerFrame = MovieClip::getMSPerFrame(*(_QWORD *)(a1 + 384));
      if ( ((isBattleEndedWithTimeOut | (unsigned int)LogicBattle::isBattleEndedCalled(a2) ^ 1) & 1) == 0 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 384) + 8LL) = 0;
        goto LABEL_18;
      }
      if ( (isBattleEndedWithTimeOut & 1) != 0 )
      {
    LABEL_19:
        if ( !*(_BYTE *)(a1 + 414) )
        {
          String::String(&v79, "Gameend Horn");
          SoundByName = LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v79, 0, v35);
          String::~String();
          SoundManager::playSound(
            SoundManager::sm_pInstance,
            SoundByName,
            0xFFFFFFFFLL,
            1.0,
            COERCE_LONG_DOUBLE((unsigned __int128)0));
        }
        goto LABEL_22;
      }
      if ( v13 > (int)LogicGlobals::getEndTimerAnimMS(Globals) )
      {
        if ( v14 )
        {
          v32 = (_BYTE *)(a1 + 413);
          if ( !*(_BYTE *)(a1 + 413) && !*(_QWORD *)(a1 + 392) )
          {
            v33 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "print_extra_time", v31);
            *(_QWORD *)(a1 + 392) = v33;
            DisplayObject::setPixelSnappedXY(
              v33,
              *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_X,
              *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
            MovieClip::playOnce(*(MovieClip **)(a1 + 392));
            DropGUIContainer::putLocalizedTIDsToTextFields(*(#1375 **)(a1 + 392), v34);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 392));
          }
          goto LABEL_24;
        }
        goto LABEL_28;
      }
      EndTimerAnimMS = LogicGlobals::getEndTimerAnimMS(Globals);
      v39 = LogicMath::clamp(
              (#1237 *)(unsigned int)((EndTimerAnimMS - v13)
                                    * TotalFrames
                                    / (int)(float)((float)(1000 * TotalFrames) * MSPerFrame)),
              0,
              TotalFrames - 1,
              v38);
      MovieClip::gotoAndStopFrameIndex(*(MovieClip **)(a1 + 384), v39);
    LABEL_22:
      if ( v14 )
      {
        v32 = (_BYTE *)(a1 + 413);
    LABEL_24:
        if ( !*v32 )
        {
          String::String(&v78, "sound_extra_time_jingle");
          v41 = LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v78, 0, v40);
          String::~String();
          SoundManager::playSound(
            SoundManager::sm_pInstance,
            v41,
            0xFFFFFFFFLL,
            1.0,
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          v42 = SoundManager::sm_pInstance;
          ExtraTimeMusic = LogicLocationData::getExtraTimeMusic(LocationData);
          SoundManager::playMusic(v42, ExtraTimeMusic);
          if ( *(_QWORD *)(a1 + 184) )
          {
            MovieClip::gotoAndPlay(*(MovieClip **)(a1 + 176), "out_start", "out_end");
            *(__n128 *)&v44 = MovieClip::gotoAndPlay((MovieClip *)*(_QWORD *)(a1 + 184), "in_start", "in_end");
            (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 184), v44);
            v45 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 184), "timeLeft");
            *(_QWORD *)(a1 + 216) = MovieClip::getTextFieldByName(v45, "txt");
            v46 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 184), "elixirRegen");
            *(_QWORD *)(a1 + 224) = v46;
            if ( v46 )
            {
              *((_BYTE *)v46 + 8) = 0;
              MovieClip::stop(v46);
            }
          }
        }
      }
    LABEL_28:
      if ( isBattleEndedCalled )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 136) + 8LL) && !*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) && !*(_QWORD *)(a1 + 400) )
        {
          Instance = (VisitHomeMessage *)GameMode::getInstance();
          BattleBottomAvatar = GameMode::getBattleBottomAvatar(Instance);
          v49 = (VisitHomeMessage *)GameMode::getInstance();
          BattleTopAvatar = (LogicDataTables *)GameMode::getBattleTopAvatar(v49);
          v52 = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "finalScore", v51);
          *(_QWORD *)(a1 + 400) = v52;
          StarCount = LogicClientAvatar::getStarCount(BattleBottomAvatar);
          MovieClip::setNumberText(v52, "playerScore", StarCount, 0);
          v54 = *(MovieClip **)(a1 + 400);
          v55 = LogicClientAvatar::getStarCount(BattleTopAvatar);
          MovieClip::setNumberText(v54, "enemyScore", v55, 0);
          DisplayObject::setPixelSnappedXY(
            *(DisplayObject **)(a1 + 400),
            *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_X,
            *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
          MovieClip::playOnce(*(MovieClip **)(a1 + 400));
          DropGUIContainer::putLocalizedTIDsToTextFields(*(#1375 **)(a1 + 400), v56);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 400));
        }
        *(_DWORD *)(a1 + 408) = v9;
        *(_BYTE *)(a1 + 413) = v14;
        *(_BYTE *)(a1 + 414) = isBattleEndedWithTimeOut;
      }
      else
      {
        v57 = *(_DWORD *)(a1 + 408);
        if ( (v57 & 0x80000000) == 0 )
        {
          if ( v9 <= 60 && v57 >= 61 )
          {
            String::String(&v77, "print_60secondsLeft");
            CombatHUD::startTimedClip((GameState *)a1, &v77);
            String::~String();
          }
          if ( v9 <= 30 && *(int *)(a1 + 408) >= 31 )
          {
            String::String(&v76, "print_30secondsLeft");
            CombatHUD::startTimedClip((GameState *)a1, &v76);
            String::~String();
          }
          v58 = *(_QWORD *)(a1 + 224);
          if ( v58 )
          {
            if ( v9 <= *((_DWORD *)Globals + 42) )
            {
              if ( !*(_BYTE *)(v58 + 8) )
              {
                v59 = 10 * *((_DWORD *)Globals + 39) / *((_DWORD *)Globals + 40);
                v60 = (unsigned int)(v59 / 10);
                v61 = (unsigned int)(v59 % 10);
                if ( (_DWORD)v61 )
                  String::format((String *)"x%d.%d", v23, v60, v61);
                else
                  String::format((String *)"x%d", v23, v60);
                v62 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 224), "elixir");
                MovieClip::setText(v62, "txt", &v75);
                v63 = *(MovieClip **)(a1 + 224);
                *((_BYTE *)v63 + 8) = 1;
                MovieClip::playOnce(v63);
                String::~String();
              }
            }
            else
            {
              *(_BYTE *)(v58 + 8) = 0;
            }
          }
        }
        *(_DWORD *)(a1 + 408) = v9;
        *(_BYTE *)(a1 + 413) = v14;
        *(_BYTE *)(a1 + 414) = isBattleEndedWithTimeOut;
        if ( v9 <= 30 )
        {
          v64 = *(_QWORD *)(a1 + 216);
          *(_BYTE *)(v64 + 11) = -(v9 & 1);
          *(_BYTE *)(v64 + 10) = -(v9 & 1);
        }
        v65 = (String *)(unsigned int)(v9 % 60);
        if ( (int)v65 > 9 )
          String::valueOf(v74, v65, (int)v23);
        else
          String::format((String *)"0%d", v23, (unsigned int)(v9 % 60));
        String::valueOf(v73, (String *)(unsigned int)(v9 / 60), v66);
        String = StringTable::getString((#1308 *)"TID_TIME_M_S", v67);
        String::String(&v70, "<M>");
        String::replace(v71, String, &v70, v73);
        String::String(&v69, "<S>");
        String::replace(&v72, v71, &v69, v74);
        String::~String();
        String::~String();
        String::~String();
        TextField::setText(*(#1271 **)(a1 + 216), &v72);
        String::~String();
        String::~String();
        String::~String();
      }
    }

    __int64 __fastcall CombatHUD::startTimedClip(GameState *this, const String *a2, const String *a3)
    {
      __int64 v5; // x0
      DisplayObject *MovieClip; // x0
      #1257 *v7; // x1
    
      v5 = *((_QWORD *)this + 44);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 44) = 0;
      MovieClip = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)a2, a3);
      *((_QWORD *)this + 44) = MovieClip;
      DisplayObject::setPixelSnappedXY(
        MovieClip,
        *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_X,
        *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_Y);
      MovieClip::playOnceRecursive(*((MovieClip **)this + 44));
      DropGUIContainer::putLocalizedTIDsToTextFields(*((#1375 **)this + 44), v7);
      return (*(__int64 (__fastcall **)(GameState *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 44));
    }

    void *__fastcall CombatHUD::getAnalyticsName(GameState *this)
    {
      return &HUD_ANALYTICS_NAME;
    }

    __int64 __fastcall CombatHUD::getDraggedSpellButton(GameState *this)
    {
      __int64 v2; // x21
      __int64 v3; // x20
    
      v2 = 0;
      while ( 1 )
      {
        v3 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v2 + 216);
        if ( (unsigned int)SpellButton::isDragged(v3) )
          break;
        if ( ++v2 > 3 )
          return 0;
      }
      return v3;
    }

    __int64 __fastcall CombatHUD::getSelectedSpellButtonIndex(GameState *this, String *a2, const char *a3)
    {
      __int64 v3; // x19
      __int64 v4; // x21
      AllianceLeaveOkMessage *v5; // x20
    
      v3 = 0;
      v4 = CombatHUD::getPlayerHUD((__int64)this, a2, a3) + 216;
      while ( 1 )
      {
        v5 = *(AllianceLeaveOkMessage **)(v4 + 8 * v3);
        if ( v5 )
        {
          if ( SpellButton::getSpellData(*(AllianceLeaveOkMessage **)(v4 + 8 * v3))
            && (unsigned int)SpellButton::isSelected(v5)
            && !(unsigned int)SpellButton::isDragged((__int64)v5) )
          {
            break;
          }
        }
        if ( ++v3 >= 4 )
          return 0xFFFFFFFFLL;
      }
      return v3;
    }

    __int64 __fastcall CombatHUD::selectSpellButton(GameState *this, String *a2, const char *a3)
    {
      NativeFont *PlayerHUD; // x0
    
      PlayerHUD = (NativeFont *)CombatHUD::getPlayerHUD((__int64)this, a2, a3);
      return CombatHUD::PlayerHUD::selectSpellButton(PlayerHUD, -1);
    }

    String *__fastcall CombatHUD::fakeSpellUsed(GameState *this, LogicSpellListener **a2, int a3)
    {
      __int64 OwnerAccountId; // x0
      String *result; // x0
      const char *v7; // x2
      __int64 v8; // x0
    
      OwnerAccountId = LogicGameObject::getOwnerAccountId(a2);
      result = (String *)CombatHUD::getHUDIndex(this, OwnerAccountId);
      if ( (_DWORD)result != -1 )
      {
        v8 = *(_QWORD *)(CombatHUD::getPlayerHUD((__int64)this, result, v7) + 8LL * a3 + 216);
        return (String *)SpellButton::setFakeUsed(v8);
      }
      return result;
    }

    __int64 __fastcall CombatHUD::getHUDIndex(__int64 a1, const char *a2)
    {
      __int64 v3; // x19
      __int64 v4; // x21
      __int64 v5; // x8
    
      v3 = 0;
      v4 = a1 + 112;
      while ( 1 )
      {
        v5 = *(_QWORD *)(v4 + 8 * v3);
        if ( v5 )
        {
          if ( (LogicLong::equals(a2, v5 + 188) & 1) != 0 )
            break;
        }
        if ( ++v3 >= 2 )
          Debugger::error((__siginfo *)"cannot get replay hud index: not in replay mode!", a2);
      }
      return v3;
    }

    __int64 __fastcall CombatHUD::getSpellButton(__int64 a1, String *a2, const char *a3)
    {
      return *(_QWORD *)(CombatHUD::getPlayerHUD(a1, a2, a3) + 8LL * (int)a3 + 216);
    }

    __int64 __fastcall CombatHUD::getSpellButtonBySpellData(__int64 a1, unsigned int a2, const char *a3)
    {
      __int64 v6; // x20
      const char *v7; // x2
      __int64 v8; // x21
      __int64 v9; // x22
      __int64 v10; // x20
      TextField *v11; // x0
      __int64 SpellData; // x0
    
      Debugger::doAssert((Debugger *)(a2 < 2), (bool)"", a3);
      v6 = a1 + 8LL * (int)a2;
      Debugger::doAssert((Debugger *)(*(_QWORD *)(v6 + 112) != 0), (bool)"", v7);
      v8 = 0;
      v9 = *(_QWORD *)(v6 + 112) + 216LL;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 8 * v8);
        v11 = *(TextField **)(v10 + 304);
        if ( v11 )
        {
          SpellData = LogicSpell::getSpellData(v11);
          if ( LogicData::equals(SpellData, (__int64)a3) )
            break;
        }
        if ( ++v8 >= 4 )
          return 0;
      }
      return v10;
    }

    __int64 __fastcall CombatHUD::updateTargetHelpers(LogicTutorialManager *Egg, unsigned int *a2, _BYTE *a3)
    {
      LogicTutorialManager *v5; // x25
      __int64 v6; // x28
      const BattleResultMessage *BuffType; // x22
      __int64 Projectile; // x0
      int CollisionRadius; // w27
      int v10; // w24
      Font *SummonCharacter; // x23
      Character *v12; // x0
      LogicTutorialManager *Instance; // x0
      __int64 result; // x0
      __int64 v15; // x19
      __int64 v16; // x0
      __int64 v17; // x25
      DonatorEntry *TutorialManager; // x0
      LogicMusicData *v19; // x19
      int v20; // w26
      __int64 v21; // x20
      char v22; // w21
      __int64 v23; // x23
      int isLeader; // w0
      bool v25; // w1
      int FinishRequirement; // w0
      __int64 SpellToCast; // x0
      Font *v28; // x23
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x19
      int v31; // w19
      _BOOL4 v32; // w19
      int v33; // w28
      int HealingPower; // w0
      __int64 v35; // x0
      GameMode *v36; // x28
      const #1240 *Range; // x19
      int MinimumRange; // w0
      GameMode *v39; // x0
      __int64 Position; // x0
      int DistanceSquaredHelper; // w19
      int SightRange; // w0
      ShutdownStartedMessage *v43; // x27
      int isOwnedByCurrentPlayer; // w0
      GameMode *v45; // x0
      GameMode *Logic; // x0
      FriendListMessage *CharacterBuffComponent; // x0
      int v48; // w8
      GameMode *v49; // x0
      GameMode *v50; // x0
      FriendListMessage *v51; // x0
      __int64 v52; // x26
      const BattleResultMessage *v53; // x25
      __int64 v54; // x22
      LogicMusicData *v55; // x28
      AllianceJoinFailedMessage *v56; // x19
      GameMode *v57; // x0
      GameMode *v58; // x0
      GameMode *v59; // x0
      Sprite *CombatComponent; // x28
      char v61; // w8
      int v62; // [xsp+0h] [xbp-A0h]
      int v63; // [xsp+4h] [xbp-9Ch]
      InitState *v64; // [xsp+8h] [xbp-98h]
      _BYTE *v65; // [xsp+10h] [xbp-90h]
      AllianceListMessage *v66; // [xsp+18h] [xbp-88h]
      LogicMusicData *v67; // [xsp+20h] [xbp-80h]
      unsigned int v68; // [xsp+2Ch] [xbp-74h]
      int v69; // [xsp+30h] [xbp-70h]
      _BOOL4 v70; // [xsp+38h] [xbp-68h]
      bool v71; // [xsp+3Ch] [xbp-64h]
      _BYTE v72[8]; // [xsp+40h] [xbp-60h] BYREF
      __int64 v73; // [xsp+48h] [xbp-58h] BYREF
    
      v5 = Egg;
      v73 = -1;
      if ( a2 )
      {
        v6 = a2[55];
        BuffType = (const BattleResultMessage *)LogicSpellData::getBuffType((InitState *)a2);
        if ( !BuffType )
        {
          if ( LogicSpellData::getProjectile((InitState *)a2) )
          {
            Projectile = LogicSpellData::getProjectile((InitState *)a2);
            BuffType = (const BattleResultMessage *)LogicProjectileData::getTargetBuff(Projectile);
          }
          else
          {
            BuffType = 0;
          }
        }
        SummonCharacter = (Font *)LogicSpellData::getSummonCharacter((InitState *)a2);
        SpellTargetIndicator::getCurrentSpellPosition((__int64)a3, (int *)&v73 + 1, (int *)&v73);
        v70 = v73 != 0;
        if ( SummonCharacter )
        {
          CollisionRadius = LogicCharacterData::getCollisionRadius(SummonCharacter);
          Egg = (LogicTutorialManager *)LogicCharacterData::getEgg(SummonCharacter);
          if ( Egg )
          {
            v12 = (Character *)LogicCharacterData::getEgg(SummonCharacter);
            Egg = (LogicTutorialManager *)LogicEggData::getCollisionRadius(v12);
            CollisionRadius = (int)Egg;
          }
          v10 = 2;
        }
        else
        {
          Egg = (LogicTutorialManager *)LogicSpellData::getOnlyOwnTroops((InitState *)a2);
          v10 = (int)Egg;
          CollisionRadius = 0;
        }
      }
      else
      {
        v6 = 0;
        BuffType = 0;
        CollisionRadius = 0;
        v70 = 0;
        v10 = 3;
      }
      if ( *((float *)v5 + 106) <= 0.0 )
      {
        *((_BYTE *)v5 + 420) = v10 == 2;
        *((_DWORD *)v5 + 106) = 0;
      }
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(Egg);
      result = BattleScreen::isReplay(Instance);
      if ( (result & 1) != 0 )
        return result;
      v15 = *(_QWORD *)(GameMode::getInstance() + 112);
      LogicGameObjectManager::getGameObjects(*(LogicSpellListener **)(v15 + 64));
      v17 = v16;
      TutorialManager = (DonatorEntry *)LogicGameMode::getTutorialManager(v15);
      result = LogicTutorialManager::getCurrentTutorial(TutorialManager);
      v19 = (LogicMusicData *)result;
      v67 = (LogicMusicData *)result;
      v20 = *(_DWORD *)(v17 + 12);
      v69 = v20;
      if ( v20 < 1 )
      {
        v61 = 0;
        goto LABEL_68;
      }
      v63 = CollisionRadius;
      v64 = (InitState *)a2;
      v65 = a3;
      v21 = 0;
      v22 = 0;
      v71 = !v70;
      do
      {
        v43 = *(ShutdownStartedMessage **)(*(_QWORD *)(*(_QWORD *)v17 + 8 * v21) + 40LL);
        isOwnedByCurrentPlayer = GameObject::isOwnedByCurrentPlayer(v43);
        if ( v10 == 1 && isOwnedByCurrentPlayer )
        {
          if ( BuffType && (v45 = (GameMode *)GameObject::getLogic(v43), LogicGameObject::getCharacterBuffComponent(v45)) )
          {
            Logic = (GameMode *)GameObject::getLogic(v43);
            CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(Logic);
            LogicCharacterBuffComponent::isImmuneToBuff(CharacterBuffComponent, BuffType);
          }
          else if ( (*(unsigned int (__fastcall **)(ShutdownStartedMessage *))(*(_QWORD *)v43 + 200LL))(v43) == 5 && !v71 )
          {
            v58 = (GameMode *)GameObject::getLogic(v43);
            v23 = LogicGameObject::intersects(v58, (#1237 *)HIDWORD(v73), (#1237 *)(unsigned int)v73, v6);
            v25 = 0;
            goto LABEL_65;
          }
    LABEL_64:
          v23 = 0;
          v25 = 0;
          goto LABEL_65;
        }
        v48 = isOwnedByCurrentPlayer ^ 1;
        if ( v10 || !v48 )
        {
          if ( ((v10 == 2) & (unsigned __int8)v48) != 1
            || (*(unsigned int (__fastcall **)(ShutdownStartedMessage *))(*(_QWORD *)v43 + 200LL))(v43) != 5 )
          {
            goto LABEL_64;
          }
          v68 = v6;
          v59 = (GameMode *)GameObject::getLogic(v43);
          CombatComponent = (Sprite *)LogicGameObject::getCombatComponent(v59);
          if ( CombatComponent == 0 || v71 )
          {
            v23 = 0;
            v25 = 0;
            v6 = v68;
          }
          else
          {
            v28 = (Font *)LogicSpellData::getSummonCharacter(v64);
            if ( v28 )
            {
              ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(CombatComponent);
              CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
              if ( (!(unsigned int)LogicCharacterData::isFlying(v28) || *((_BYTE *)CharacterData + 440))
                && ((LogicCharacterData::isFlying(v28) & 1) != 0 || *((_BYTE *)CharacterData + 441)) )
              {
                if ( (LogicCharacterData::isBuilding(v28) & 1) != 0 )
                  v31 = 1;
                else
                  v31 = LogicCharacterData::getTargetOnlyBuildings(CharacterData) ^ 1;
              }
              else
              {
                v31 = 0;
              }
              if ( (unsigned int)LogicCharacterData::isBuilding(v28) )
              {
                v66 = CombatComponent;
                v62 = v31;
                v35 = GameObject::getLogic(v43);
                if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v35 + 216LL))(v35) )
                {
                  LogicVector2::LogicVector2((LogicVector2 *)v72, SHIDWORD(v73), v73);
                  v36 = (GameMode *)GameObject::getLogic(v43);
                  Range = (const #1240 *)LogicCharacterData::getRange(v28);
                  MinimumRange = LogicCharacterData::getMinimumRange(v28);
                  v32 = LogicGameObject::isInRangeAccurate(v36, (const GameMode *)v72, Range, MinimumRange);
                }
                else
                {
                  v32 = 0;
                }
                v33 = v62;
                HealingPower = LogicCombatComponent::getHealingPower(v66);
              }
              else
              {
                v66 = CombatComponent;
                v33 = v31;
                v32 = 0;
                HealingPower = LogicCombatComponent::getHealingPower(v66);
              }
            }
            else
            {
              v66 = CombatComponent;
              v32 = 0;
              v33 = 1;
              HealingPower = LogicCombatComponent::getHealingPower(v66);
            }
            v25 = 0;
            v23 = v32;
            if ( v33 && HealingPower <= 0 )
            {
              v39 = (GameMode *)GameObject::getLogic(v43);
              Position = LogicGameObject::getPosition(v39);
              DistanceSquaredHelper = LogicVector2::getDistanceSquaredHelper(Position, HIDWORD(v73), (unsigned int)v73);
              SightRange = LogicCombatComponent::getSightRange(v66);
              v25 = DistanceSquaredHelper < (SightRange + v63) * (SightRange + v63);
            }
            v6 = v68;
            v19 = v67;
          }
        }
        else
        {
          if ( BuffType )
          {
            v49 = (GameMode *)GameObject::getLogic(v43);
            if ( LogicGameObject::getCharacterBuffComponent(v49) )
            {
              v50 = (GameMode *)GameObject::getLogic(v43);
              v51 = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v50);
              if ( (LogicCharacterBuffComponent::isImmuneToBuff(v51, BuffType) & 1) != 0 )
                goto LABEL_64;
            }
          }
          if ( (*(unsigned int (__fastcall **)(ShutdownStartedMessage *))(*(_QWORD *)v43 + 200LL))(v43) != 5 )
            goto LABEL_64;
          v52 = v17;
          v53 = BuffType;
          v54 = v6;
          v55 = v19;
          v56 = (AllianceJoinFailedMessage *)GameObject::getLogic(v43);
          if ( v70 )
          {
            v57 = (GameMode *)GameObject::getLogic(v43);
            v23 = LogicGameObject::intersects(v57, (#1237 *)HIDWORD(v73), (#1237 *)(unsigned int)v73, v54);
          }
          else
          {
            v23 = 0;
          }
          isLeader = LogicCharacter::isLeader(v56);
          v25 = 0;
          v19 = v55;
          if ( v55 && isLeader )
          {
            FinishRequirement = LogicTutorialData::getFinishRequirement(v55);
            v6 = v54;
            if ( FinishRequirement == 2 )
            {
              SpellToCast = LogicTutorialData::getSpellToCast(v19);
              v25 = 0;
              v23 = (unsigned __int8)v23 & (SpellToCast == 0);
            }
            else
            {
              v25 = 0;
            }
          }
          else
          {
            v6 = v54;
          }
          BuffType = v53;
          v17 = v52;
          v20 = v69;
        }
    LABEL_65:
        v22 |= v25;
        (*(void (__fastcall **)(ShutdownStartedMessage *))(*(_QWORD *)v43 + 240LL))(v43);
        result = (*(__int64 (__fastcall **)(ShutdownStartedMessage *, __int64))(*(_QWORD *)v43 + 232LL))(v43, v23);
        ++v21;
      }
      while ( v20 != (_DWORD)v21 );
      v61 = v22 & 1;
      a3 = v65;
    LABEL_68:
      if ( a3 )
        *a3 = v61;
      return result;
    }

    void __fastcall CombatHUD::showManaHelpText(GameState *this)
    {
      ;
    }

    void __fastcall CombatHUD::playerGotDamage(GameState *this)
    {
      ;
    }

    void __fastcall CombatHUD::enemyGotDamage(GameState *this)
    {
      ;
    }

    __int64 __fastcall CombatHUD::dragStarted(__int64 a1, __int64 a2)
    {
      __int64 v3; // x20
      __int64 NumChildren; // x2
      __int64 (__fastcall *v6)(__int64, __int64, __int64); // [xsp+8h] [xbp-18h]
    
      v3 = *(_QWORD *)(a2 + 48);
      v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 168LL);
      NumChildren = Sprite::getNumChildren(v3);
      return v6(v3, a2, NumChildren);
    }

    __int64 __fastcall CombatHUD::createStar(_QWORD *a1, const AllianceJoinFailedMessage *a2)
    {
      GainedStar *v4; // x20
      long double v5; // q0
      const char *v6; // x1
      LogicTutorialManager *ChildByName; // x0
      LogicTutorialManager *v8; // x23
      float *v9; // x24
      long double v10; // q0
      float v11; // s8
      long double v12; // q0
      float *v13; // x24
      float v14; // s8
      long double v15; // q0
      LogicTutorialManager *Instance; // x0
      LogicJSONObject *RenderSystem; // x23
      float v18; // s8
      int v19; // w0
      Stage *v20; // x0
      Stage *v21; // x0
      float v23; // [xsp+0h] [xbp-60h] BYREF
      float v24; // [xsp+4h] [xbp-5Ch] BYREF
      __int64 v25; // [xsp+8h] [xbp-58h] BYREF
      __int64 v26; // [xsp+10h] [xbp-50h] BYREF
      GainedStar *v27; // [xsp+18h] [xbp-48h] BYREF
    
      v4 = (GainedStar *)operator new(152);
      GainedStar::GainedStar(v4, a2);
      v27 = v4;
      (*(void (__fastcall **)(_QWORD *, GainedStar *))(*a1 + 160LL))(a1, v4);
      v26 = 0;
      v25 = 0;
      if ( *((_BYTE *)v4 + 144) )
        v6 = "starPlayer";
      else
        v6 = "starEnemy";
      ChildByName = (LogicTutorialManager *)MovieClip::getChildByName(a1[24], v6, v5);
      v8 = ChildByName;
      if ( ChildByName )
      {
        v9 = (float *)a1[24];
        v10 = DisplayObject::getX(ChildByName);
        v11 = *(float *)&v10;
        v12 = DisplayObject::getY(v8);
        *(float *)&v25 = v9[8] + (float)((float)(v11 * v9[4]) + (float)(*(float *)&v12 * v9[6]));
        v13 = (float *)a1[24];
        v14 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v8)));
        v15 = DisplayObject::getY(v8);
        *((float *)&v25 + 1) = v13[9] + (float)((float)(v14 * v13[5]) + (float)(*(float *)&v15 * v13[7]));
      }
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(ChildByName);
      RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(Instance);
      v18 = (float)(int)LogicGameObject::getX(a2) / 500.0;
      v19 = LogicGameObject::getY(a2);
      RenderSystem::getRenderCoordinate(RenderSystem, v18, (float)v19 / 500.0, 0.0, &v24, &v23, 1);
      v21 = (Stage *)Stage::getInstance(v20);
      Stage::localToGlobal(v21, RenderSystem, v24, v23, (float *)&v26, (float *)&v26 + 1);
      GainedStar::setPath((__int64)v4, &v26, &v25);
      return std::vector<GainedStar *>::push_back(a1 + 35, &v27);
    }

    __int64 __fastcall CombatHUD::showMiniTimer(LogicTutorialManager *a1, int a2, int a3, int a4, float a5)
    {
      LogicTutorialManager *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      long double v12; // q1
      MiniTimer *v13; // x20
      long double v14; // q0
      MiniTimer *v16; // [xsp+8h] [xbp-48h] BYREF
      float v17; // [xsp+10h] [xbp-40h] BYREF
      float v18; // [xsp+14h] [xbp-3Ch] BYREF
      float v19; // [xsp+18h] [xbp-38h] BYREF
      float v20; // [xsp+1Ch] [xbp-34h] BYREF
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(Instance);
      RenderSystem::logicToGlobal(RenderSystem, a2, a3, &v20, &v19);
      *(float *)&v12 = v19;
      DisplayObject::globalToLocal(a1, &v18, &v17, v20, v12);
      v13 = (MiniTimer *)operator new(144);
      MiniTimer::MiniTimer(v13, a4, a5);
      v16 = v13;
      *(__n128 *)&v14 = DisplayObject::setPixelSnappedXY(v13, v18, v17);
      (*(void (__fastcall **)(LogicTutorialManager *, MiniTimer *, long double))(*(_QWORD *)a1 + 160LL))(a1, v13, v14);
      return LogicArrayList<MiniTimer *>::add((char *)a1 + 264, &v16);
    }

    __int64 __fastcall CombatHUD::replaySelectSpell(LogicTutorialManager *a1, unsigned int a2, int a3)
    {
      LogicTutorialManager *Instance; // x0
      const char *v7; // x2
      char *v8; // x20
      _QWORD *v9; // x20
      __int64 v10; // t1
      const char *v11; // x2
      __int64 i; // x21
      __int64 result; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      BattleScreen::disableSpellTargeting(Instance);
      Debugger::doAssert((Debugger *)(a2 < 2), (bool)"", v7);
      v8 = (char *)a1 + 8 * (int)a2;
      v10 = *((_QWORD *)v8 + 14);
      v9 = v8 + 112;
      Debugger::doAssert((Debugger *)(v10 != 0), (bool)"", v11);
      for ( i = 0; i != 4; ++i )
        result = SpellButton::setSelected(*(_QWORD *)(*v9 + 8 * i + 216), a3 == i, 1);
      return result;
    }

    __int64 __fastcall CombatHUD::setHUDVisible(__int64 this, int a2, int a3)
    {
      __int64 v3; // x8
      char v4; // w9
    
      v3 = *(_QWORD *)(this + 8LL * a2 + 112);
      if ( v3 )
      {
        if ( a3 )
          v4 = *(_BYTE *)(this + 528) ^ 1;
        else
          v4 = 0;
        *(_BYTE *)(v3 + 8) = v4;
      }
      return this;
    }

    __int64 __fastcall CombatHUD::setPaused(__int64 this, int a2)
    {
      if ( a2 != *(unsigned __int8 *)(this + 104) )
        *(_BYTE *)(this + 104) = a2;
      return this;
    }

    void __fastcall CombatHUD::onBattleEvent(CombatHUD *a1, Projectile *a2)
    {
      const LogicLong *AccountId; // x21
      LogicTutorialManager *Type; // x0
      char v6; // w22
      LogicTutorialManager *Instance; // x0
      const char *v8; // x1
      int v9; // w24
      signed int HUDIndex; // w23
      SpellButton *v11; // x22
      CombatHUD::ReplayDrag *v12; // x21
      __int64 Param; // x20
      const LogicTauntData *TauntData; // x2
      char *v15; // x0
      const String *v16; // x1
      String v17; // [xsp+8h] [xbp-68h] BYREF
      String v18; // [xsp+20h] [xbp-50h] BYREF
      CombatHUD::ReplayDrag *v19; // [xsp+38h] [xbp-38h] BYREF
    
      AccountId = (const LogicLong *)LogicBattleEvent::getAccountId(a2);
      Type = (LogicTutorialManager *)LogicBattleEvent::getType(a2);
      v6 = (char)Type;
      if ( (_DWORD)Type == 3 )
      {
        if ( (int)LogicBattleEvent::getParamCount(a2) < 1 )
        {
          v15 = "battle event: no taunt index param!";
        }
        else
        {
          Param = LogicBattleEvent::getParam(a2, 0);
          if ( (Param & 0x80000000) == 0 && (int)Param < (int)LogicDataTables::getTauntCount() )
          {
            TauntData = (const LogicTauntData *)LogicDataTables::getTauntData(Param);
            if ( !*((_BYTE *)a1 + 528) )
              CombatHUD::showTaunt(a1, AccountId, TauntData);
            return;
          }
          v15 = "taunt received: taunt data index out of bounds!";
        }
    LABEL_17:
        Debugger::warning((__siginfo *)v15, v8);
        return;
      }
      if ( (unsigned int)((_DWORD)Type - 1) > 1 )
        return;
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(Type);
      if ( !BattleScreen::isReplay(Instance) )
        return;
      if ( (int)LogicBattleEvent::getParamCount(a2) < 1 )
      {
        v15 = "replay battle event: no spell index param!";
        goto LABEL_17;
      }
      v9 = LogicBattleEvent::getParam(a2, 0);
      HUDIndex = CombatHUD::getHUDIndex((__int64)a1, (const char *)AccountId);
      if ( HUDIndex == -1 )
      {
        LogicLong::toString(&v17, AccountId);
        operator+(&v18, "replay battle event: no hud index for id:", &v17);
        Debugger::warning((__siginfo *)&v18, v16);
        String::~String();
        String::~String();
        return;
      }
      if ( v6 == 2 )
      {
        if ( *(_BYTE *)(LogicDataTables::getClientGlobals() + 378) )
        {
          v11 = *(SpellButton **)(*((_QWORD *)a1 + HUDIndex + 14) + 8LL * v9 + 216);
          v12 = (CombatHUD::ReplayDrag *)operator new(160);
          CombatHUD::ReplayDrag::ReplayDrag(v12, a2, v11, HUDIndex);
          v19 = v12;
          LogicArrayList<CombatHUD::ReplayDrag *>::add((char *)a1 + 432, &v19);
          (*(void (__fastcall **)(CombatHUD *, CombatHUD::ReplayDrag *))(*(_QWORD *)a1 + 160LL))(a1, v12);
          return;
        }
      }
      else if ( v6 != 1 )
      {
        return;
      }
      CombatHUD::replaySelectSpell(a1, HUDIndex, v9);
    }

    __int64 __fastcall CombatHUD::showTaunt(__int64 a1, __int64 a2, const LogicTauntData *a3)
    {
      VisitHomeMessage *Instance; // x0
      tween::Bounce *BattleTopAvatar; // x0
      __int64 AccountId; // x0
      __int64 result; // x0
      _BOOL4 v10; // w21
      int v11; // w22
      int v12; // w22
      LogicTutorialManager *v13; // x0
      LogicTutorialManager *ClientGlobals; // x0
      __int64 v15; // x8
      __int64 v16; // x9
      __int64 v17; // x10
      __int64 v18; // x11
      LogicTutorialManager *v19; // x22
      LogicTutorialManager *v20; // x0
      bool isReplay; // w0
      AllianceStreamMessage *Sound; // x0
      __int64 v23; // x21
      __int64 v24; // x0
      LogicTutorialManager *v25; // x0
      __int64 v26; // x21
      __int64 v27; // x0
      __int64 v28; // x0
      Stage *v29; // x19
      const char *v30; // x1
      void *String; // x0
      LogicTutorialManager *v32; // [xsp+8h] [xbp-38h] BYREF
    
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      BattleTopAvatar = (tween::Bounce *)GameMode::getBattleTopAvatar(Instance);
      AccountId = LogicClientAvatar::getAccountId(BattleTopAvatar);
      result = LogicLong::equals(a2, AccountId);
      v10 = result;
      if ( (_DWORD)result )
      {
        v11 = *(_DWORD *)(a1 + 476) + 1;
        *(_DWORD *)(a1 + 476) = v11;
        if ( *(float *)(a1 + 480) > 0.0 )
          return result;
        result = LogicDataTables::getClientGlobals();
        if ( v11 >= *(_DWORD *)(result + 324) )
          return result;
        *(_DWORD *)(a1 + 480) = 1065353216;
        goto LABEL_10;
      }
      v12 = *(_DWORD *)(a1 + 488) + 1;
      *(_DWORD *)(a1 + 488) = v12;
      if ( *(float *)(a1 + 492) > 0.0 )
      {
        v13 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)result);
        result = BattleScreen::isReplay(v13);
        if ( (result & 1) != 0 )
          return result;
        v12 = *(_DWORD *)(a1 + 488);
      }
      ClientGlobals = (LogicTutorialManager *)LogicDataTables::getClientGlobals();
      if ( v12 < *((_DWORD *)ClientGlobals + 81) )
      {
        *(_DWORD *)(a1 + 492) = 1065353216;
    LABEL_10:
        v15 = *(int *)(a1 + 260);
        if ( (int)v15 >= 1 )
        {
          v16 = 0;
          v17 = *(_QWORD *)(a1 + 248);
          do
          {
            v18 = *(_QWORD *)(v17 + 8 * v16);
            if ( v18 && ((v10 ^ (*(_BYTE *)(v18 + 120) != 0)) & 1) == 0 )
              *(_DWORD *)(v18 + 104) = 0;
            ++v16;
          }
          while ( v16 < v15 );
        }
        v19 = (LogicTutorialManager *)operator new(128);
        v20 = (LogicTutorialManager *)BattleScreen::getInstance(v19);
        isReplay = BattleScreen::isReplay(v20);
        CombatHUD::Taunt::Taunt(v19, a3, v10, isReplay);
        v32 = v19;
        LogicArrayList<CombatHUD::Taunt *>::add(a1 + 248, &v32);
        Sound = (AllianceStreamMessage *)LogicTauntData::getSound(a3);
        if ( Sound )
        {
          if ( v10 )
          {
            if ( *(float *)(a1 + 484) == 0.0 )
            {
              v23 = SoundManager::sm_pInstance;
              v24 = LogicTauntData::getSound(a3);
              SoundManager::playSound(v23, v24, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
              Sound = (AllianceStreamMessage *)LogicDataTables::getClientGlobals();
              *(_DWORD *)(a1 + 484) = *((_DWORD *)Sound + 120);
            }
          }
          else if ( *(float *)(a1 + 496) == 0.0 )
          {
            v26 = SoundManager::sm_pInstance;
            v27 = LogicTauntData::getSound(a3);
            SoundManager::playSound(v26, v27, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
            Sound = (AllianceStreamMessage *)LogicDataTables::getClientGlobals();
            *(_DWORD *)(a1 + 496) = *((_DWORD *)Sound + 120);
          }
        }
        v28 = GameMain::getInstance(Sound);
        return (*(__int64 (__fastcall **)(_QWORD, LogicTutorialManager *))(**(_QWORD **)(v28 + 96) + 160LL))(
                 *(_QWORD *)(v28 + 96),
                 v19);
      }
      v25 = (LogicTutorialManager *)BattleScreen::getInstance(ClientGlobals);
      result = BattleScreen::isReplay(v25);
      if ( (result & 1) == 0 )
      {
        v29 = (Stage *)GUI::getInstance((BadgePopup *)result);
        String = StringTable::getString((#1308 *)"TID_TAUNT_LIMIT_FULL", v30);
        return GUI::showCenteredFloaterText(v29, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      return result;
    }

    __int64 __fastcall CombatHUD::battleEnded(GameState *this)
    {
      __int64 ClientGlobals; // x0
      int v3; // w2
      __int64 v4; // x0
      int v5; // w2
      __int64 result; // x0
    
      ClientGlobals = LogicDataTables::getClientGlobals();
      *((_DWORD *)this + 119) = LogicMath::min(
                                  (LogicMath *)(unsigned int)(*(_DWORD *)(ClientGlobals + 324) - 1),
                                  *((_DWORD *)this + 119),
                                  v3);
      v4 = LogicDataTables::getClientGlobals();
      result = LogicMath::min((LogicMath *)(unsigned int)(*(_DWORD *)(v4 + 324) - 1), *((_DWORD *)this + 122), v5);
      *((_DWORD *)this + 122) = result;
      return result;
    }

    __int64 __fastcall CombatHUD::cancelAllSpellDrags(LogicTutorialManager *a1)
    {
      LogicTutorialManager *Instance; // x0
      __int64 result; // x0
      __int64 i; // x20
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      result = BattleScreen::isReplay(Instance);
      if ( (result & 1) == 0 )
      {
        for ( i = 216; i != 248; i += 8 )
          result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 14) + i) + 248LL))(*(_QWORD *)(*((_QWORD *)a1 + 14) + i));
      }
      return result;
    }

    __int64 __fastcall CombatHUD::isSpellDragActive(__int64 a1)
    {
      __int64 v2; // x20
    
      v2 = 0;
      while ( !(unsigned int)SpellButton::isDragged(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v2 + 216)) )
      {
        if ( ++v2 > 3 )
          return 0;
      }
      return 1;
    }

    long double __fastcall CombatHUD::initializeMembers(__int64 a1)
    {
      __int64 v1; // x8
      _QWORD *v2; // x9
      __int64 v3; // x9
      long double result; // q0
    
      v1 = 0;
      do
      {
        v2 = (_QWORD *)(a1 + 8 * v1);
        v2[19] = 0;
        v2[15] = 0;
        v2[17] = 0;
        v3 = v1-- + 1;
      }
      while ( v3 > 0 );
      *(_QWORD *)(a1 + 184) = 0;
      *(_BYTE *)(a1 + 528) = 0;
      *(_BYTE *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 416) = 0;
      *(_DWORD *)(a1 + 424) = 0;
      *(_BYTE *)(a1 + 420) = 0;
      *(_BYTE *)(a1 + 512) = 0;
      *(_QWORD *)(a1 + 520) = 0;
      *(_QWORD *)(a1 + 504) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 456) = 0;
      *(_QWORD *)(a1 + 464) = 0;
      *(_QWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 492) = 0;
      *(_QWORD *)(a1 + 484) = 0;
      *(_QWORD *)(a1 + 476) = 0;
      *(_DWORD *)(a1 + 472) = 1;
      *(_QWORD *)(a1 + 224) = 0;
      *(_DWORD *)(a1 + 408) = -1;
      *(_BYTE *)(a1 + 413) = 0;
      *(_BYTE *)(a1 + 414) = 0;
      *(_OWORD *)(a1 + 384) = 0u;
      *(_BYTE *)(a1 + 412) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 288) = *(_QWORD *)(a1 + 280);
      *(_DWORD *)(a1 + 444) = 0;
      *(_OWORD *)&result = 0u;
      return result;
    }

}; // end class CombatHUD
