class BattlePage
{
public:

    __int64 __fastcall BattlePage::BattlePage(__int64 a1)
    {
      Stage *v2; // x0
      Stage *Instance; // x0
      int v4; // s8
      int v5; // s9
      __int64 MovieClip; // x20
      MovieClip *MovieClipByName; // x0
      __int64 v8; // x0
      MovieClip *v9; // x22
      GameButton *v10; // x23
      long double v11; // q0
      __int64 v12; // x23
      __int64 v13; // x22
      GameButton *v14; // x24
      void (__fastcall *v15)(GameButton *, __int64, __int64); // x26
      __int64 v16; // x0
      long double v17; // q0
      GameButton *v18; // x24
      void (__fastcall *v19)(GameButton *, __int64, __int64); // x25
      __int64 v20; // x0
      long double v21; // q0
      GameButton *v22; // x23
      void (__fastcall *v23)(GameButton *, __int64, __int64); // x24
      __int64 v24; // x0
      long double v25; // q0
      GameButton *v26; // x23
      void (__fastcall *v27)(GameButton *, __int64, __int64); // x24
      __int64 v28; // x0
      long double v29; // q0
      const Rect *v30; // x2
      OutlineRenderer *refreshed; // x0
      OutlineRenderer *isDev; // x0
      __int64 v33; // x0
      AllianceStreamMessage *Home; // x20
      unsigned int *v35; // x0
      __int64 v36; // x21
      __int64 v37; // x0
      int v38; // w2
      Rect v40; // [xsp+0h] [xbp-B0h] BYREF
      float v41; // [xsp+Ch] [xbp-A4h]
      _BYTE v42[12]; // [xsp+10h] [xbp-A0h] BYREF
      float v43; // [xsp+1Ch] [xbp-94h]
      Rect v44; // [xsp+20h] [xbp-90h] BYREF
      float v45; // [xsp+28h] [xbp-88h]
      float v46; // [xsp+2Ch] [xbp-84h]
      String v47; // [xsp+30h] [xbp-80h] BYREF
      String v48; // [xsp+48h] [xbp-68h] BYREF
    
      String::String(&v48, "sc/ui.sc");
      String::String(&v47, "UI_menu_arena");
      PageItem::PageItem((PageItem *)a1, &v48, &v47);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046E448;
      *(_QWORD *)(a1 + 96) = &off_10046E600;
      *(_DWORD *)(a1 + 560) = 0;
      *(_DWORD *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 588) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 480) = 0;
      *(_DWORD *)(a1 + 488) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_BYTE *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 412) = 0;
      *(_QWORD *)(a1 + 404) = 0;
      *(_DWORD *)(a1 + 472) = 0;
      *(_QWORD *)(a1 + 456) = 0;
      *(_QWORD *)(a1 + 464) = 0;
      *(_QWORD *)(a1 + 440) = 0;
      *(_QWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 549) = 0;
      *(_QWORD *)(a1 + 536) = 0;
      *(_QWORD *)(a1 + 544) = 0;
      *(_QWORD *)(a1 + 520) = 0;
      *(_QWORD *)(a1 + 528) = 0;
      *(_QWORD *)(a1 + 504) = 0;
      *(_QWORD *)(a1 + 512) = 0;
      *(_QWORD *)(a1 + 496) = 0;
      *(_BYTE *)(a1 + 584) = 0;
      *(_QWORD *)(a1 + 568) = 0;
      *(_QWORD *)(a1 + 576) = 0;
      *(_DWORD *)(a1 + 296) = -1;
      *(_DWORD *)(a1 + 400) = -1;
      *(_QWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      *(_BYTE *)(a1 + 384) = 0;
      *(_BYTE *)(a1 + 564) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      Instance = (Stage *)Stage::getInstance(v2);
      v4 = *((_DWORD *)Instance + 107);
      v5 = *(_DWORD *)(Stage::getInstance(Instance) + 432LL);
      MovieClip = GUIContainer::getMovieClip((#1254 *)a1);
      *(_BYTE *)(MovieClip + 64) = 1;
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName((#1257 *)MovieClip, "match_making");
      *(_QWORD *)(a1 + 496) = MovieClipByName;
      MovieClip::gotoAndStopFrameIndex(MovieClipByName, 0);
      v8 = *(_QWORD *)(a1 + 496);
      *(_BYTE *)(v8 + 8) = 0;
      *(_QWORD *)(a1 + 504) = MovieClip::getTextFieldByName(v8, "TID_MATCHMAKING");
      v9 = (MovieClip *)MovieClip::getMovieClipByName((#1257 *)MovieClip, "tips");
      MovieClip::gotoAndStopFrameIndex(v9, 0);
      v10 = (GameButton *)operator new(264);
      GameButton::GameButton(v10);
      *(_QWORD *)(a1 + 536) = v10;
      (*(void (__fastcall **)(GameButton *, MovieClip *, __int64))(*(_QWORD *)v10 + 280LL))(v10, v9, 1);
      *(__n128 *)&v11 = CustomButton::setButtonListener(*(_QWORD *)(a1 + 536), a1 + 96);
      *(_BYTE *)(*(_QWORD *)(a1 + 536) + 8LL) = 0;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)MovieClip + 160LL))(MovieClip, v11);
      *(_QWORD *)(a1 + 544) = MovieClip::getTextFieldByName(v9, "txt");
      v12 = MovieClip::getMovieClipByName((#1257 *)MovieClip, "left");
      *(_BYTE *)(v12 + 64) = 1;
      v13 = MovieClip::getMovieClipByName((#1257 *)MovieClip, "right");
      *(_BYTE *)(v13 + 64) = 1;
      *(_QWORD *)(a1 + 232) = v12;
      *(_QWORD *)(a1 + 240) = v13;
      v14 = (GameButton *)operator new(264);
      GameButton::GameButton(v14);
      *(_QWORD *)(a1 + 312) = v14;
      v15 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v14 + 280LL);
      v16 = MovieClip::getMovieClipByName((#1257 *)v12, "btn_1");
      v15(v14, v16, 1);
      *(__n128 *)&v17 = CustomButton::setButtonListener(*(_QWORD *)(a1 + 312), a1 + 96);
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v12 + 160LL))(v12, *(_QWORD *)(a1 + 312), v17);
      v18 = (GameButton *)operator new(264);
      GameButton::GameButton(v18);
      *(_QWORD *)(a1 + 320) = v18;
      v19 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v18 + 280LL);
      v20 = MovieClip::getMovieClipByName((#1257 *)v12, "btn_2");
      v19(v18, v20, 1);
      *(__n128 *)&v21 = CustomButton::setButtonListener(*(_QWORD *)(a1 + 320), a1 + 96);
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v12 + 160LL))(v12, *(_QWORD *)(a1 + 320), v21);
      v22 = (GameButton *)operator new(264);
      GameButton::GameButton(v22);
      *(_QWORD *)(a1 + 304) = v22;
      v23 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v22 + 280LL);
      v24 = MovieClip::getMovieClipByName((#1257 *)v13, "btn_achievement");
      v23(v22, v24, 1);
      *(__n128 *)&v25 = CustomButton::setButtonListener(*(_QWORD *)(a1 + 304), a1 + 96);
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v13 + 160LL))(v13, *(_QWORD *)(a1 + 304), v25);
      v26 = (GameButton *)operator new(264);
      GameButton::GameButton(v26);
      *(_QWORD *)(a1 + 328) = v26;
      v27 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v26 + 280LL);
      v28 = MovieClip::getMovieClipByName((#1257 *)v13, "training_button");
      v27(v26, v28, 1);
      *(__n128 *)&v29 = CustomButton::setButtonListener(*(_QWORD *)(a1 + 328), a1 + 96);
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v13 + 160LL))(v13, *(_QWORD *)(a1 + 328), v29);
      Rect::Rect(&v44);
      *(float *)&v44.top = (float)v4 * -0.5;
      v45 = (float)v4 * 0.5;
      *(_DWORD *)&v44.bottom = 0;
      v46 = (float)v5;
      MovieClipHelper::alignChildrenToBounds((MovieClipHelper *)MovieClip, (MovieClip *)&v44, v30);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, MovieClip);
      *(_DWORD *)(a1 + 464) = 1176256512;
      refreshed = (OutlineRenderer *)BattlePage::refreshArena((LogicAreaEffectObject *)a1);
      isDev = (OutlineRenderer *)LogicVersion::isDev(refreshed);
      if ( ((unsigned __int8)isDev & 1) != 0 || (unsigned int)LogicVersion::isIntegration(isDev) )
        BattlePage::addNPCLevelButtons((LogicAreaEffectObject *)a1);
      BattlePage::initChests((BattlePage *)a1);
      if ( *(_QWORD *)(a1 + 224) && *(_QWORD *)(a1 + 200) )
      {
        Rect::Rect((Rect *)v42);
        DisplayObject::getBounds(*(_QWORD *)(a1 + 200), MovieClip, v42);
        Rect::Rect(&v40);
        DisplayObject::getBounds(*(_QWORD *)(a1 + 224), MovieClip, &v40);
        *(float *)(a1 + 588) = v41 - v43;
        Rect::~Rect(&v40);
        Rect::~Rect((Rect *)v42);
      }
      NewItemIndicators::loadLastSeenInboxIds();
      NewItemIndicators::loadLastSeenRoyalTvIds();
      if ( RoyalTvManager::sm_pInstance )
      {
        v33 = GameMode::getInstance();
        Home = (AllianceStreamMessage *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v33 + 112));
        v35 = (unsigned int *)GameMain::getInstance(Home);
        v36 = v35[37];
        v37 = GameMain::getInstance((AllianceStreamMessage *)v35);
        if ( (LogicClientHome::getRoyalTVReplayVersionMatches(Home, 2, v36, *(unsigned int *)(v37 + 152)) & 1) == 0 )
        {
          Debugger::hudPrint((__siginfo *)"Removed all TV Seen Flags", (const char *)0xFFFFFFFFLL, v38);
          RoyalTvManager::removeAllSeenFlags();
        }
      }
      Rect::~Rect(&v44);
      return a1;
    }

    __int64 __fastcall BattlePage::refreshArena(LogicAreaEffectObject *this)
    {
      tween::Bounce *PlayerAvatar; // x0
      __int64 result; // x0
      __int64 v4; // x20
      #1257 *MovieClip; // x0
      MovieClip *MovieClipByName; // x21
      HomeScreen *Globals; // x0
      __int64 StartingArena; // x0
      __int64 v9; // x23
      __int64 v10; // x22
      LogicMath *NpcWinCount; // x0
      int v12; // w2
      __int64 v13; // x0
      int v14; // w23
      const char *v15; // x1
      #1237 *v16; // x24
      __int64 TextFieldByName; // x0
      int TotalFrames; // w0
      int v19; // w3
      int v20; // w0
      MovieClip *v21; // x21
      GameButton *v22; // x22
      long double v23; // q0
      long double v24; // q0
      __int64 v25; // x0
      #1257 *v26; // x21
      __int64 v27; // x0
      #1257 *v28; // x0
      #1257 *v29; // x0
      AllianceStreamMessage *v30; // x0
      long double v31; // q0
      tween::Bounce *v32; // x0
      __int64 Arena; // x21
      long double v34; // q0
      #1249 *ChildByName; // x22
      ResourceManager *IconSWF; // x23
      const String *IconExportName; // x0
      const String *v38; // x2
      __int64 v39; // x23
      GameButton *v40; // x24
      __int64 v41; // x0
      #1271 *v42; // x22
      #1308 *TID; // x0
      const String *v44; // x1
      #1308 *String; // x0
      long double v46; // q0
      HomeScreen *v47; // x0
      String v48; // [xsp+18h] [xbp-48h] BYREF
    
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      result = LogicClientAvatar::getArena(PlayerAvatar);
      v4 = result;
      if ( result != *((_QWORD *)this + 54) )
      {
        MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "training_progress");
        if ( MovieClipByName )
        {
          Globals = (HomeScreen *)LogicDataTables::getGlobals();
          StartingArena = LogicGlobals::getStartingArena(Globals);
          *((_BYTE *)MovieClipByName + 8) = v4 == StartingArena;
          if ( v4 == StartingArena )
          {
            GameMode::getInstance();
            v9 = GameMode::getPlayerAvatar();
            v10 = *(unsigned int *)(LogicDataTables::getGlobals() + 404);
            NpcWinCount = (LogicMath *)LogicClientAvatar::getNpcWinCount(v9);
            v13 = LogicMath::min(NpcWinCount, v10, v12);
            v14 = v13;
            String::format((String *)"%d/%d", v15, v13, v10);
            MovieClip::setText(MovieClipByName, "training_wins", &v48);
            String::~String();
            v16 = (#1237 *)(unsigned int)((int)(MovieClip::getTotalFrames(MovieClipByName) * v14) / (int)v10);
            TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "TID_FINAL_TEST");
            if ( TextFieldByName )
              *(_BYTE *)(TextFieldByName + 8) = v14 == (_DWORD)v10 - 1;
            TotalFrames = MovieClip::getTotalFrames(MovieClipByName);
            v20 = LogicMath::clamp(v16, 0, TotalFrames - 1, v19);
            MovieClip::gotoAndStopFrameIndex(MovieClipByName, v20);
          }
        }
        if ( !*((_QWORD *)this + 25) )
        {
          v21 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 14), "play_arena");
          MovieClip::gotoAndStopFrameIndex(v21, 0);
          v22 = (GameButton *)operator new(264);
          GameButton::GameButton(v22);
          *((_QWORD *)this + 25) = v22;
          (*(void (__fastcall **)(GameButton *, MovieClip *, __int64))(*(_QWORD *)v22 + 280LL))(v22, v21, 1);
          *(__n128 *)&v23 = CustomButton::setButtonListener(*((_QWORD *)this + 25), (char *)this + 96);
          (*(void (__fastcall **)(LogicAreaEffectObject *, _QWORD, long double))(*(_QWORD *)this + 160LL))(
            this,
            *((_QWORD *)this + 25),
            v23);
          v24 = DisplayObject::getY(*((_QWORD *)this + 25));
          *((_DWORD *)this + 52) = LODWORD(v24);
        }
        *((_QWORD *)this + 64) = MovieClip::getTextFieldByName(*((_QWORD *)this + 62), "time");
        v25 = MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 25) + 96LL), "cost");
        v26 = (#1257 *)v25;
        if ( v25 )
        {
          *((_QWORD *)this + 65) = MovieClip::getTextFieldByName(v25, "cost");
          v27 = MovieClip::getMovieClipByName(v26, "coin_icon");
        }
        else
        {
          v27 = 0;
          *((_QWORD *)this + 65) = 0;
        }
        *((_QWORD *)this + 66) = v27;
        *((_DWORD *)this + 138) = -1;
        v28 = (#1257 *)GUIContainer::getMovieClip(this);
        v29 = (#1257 *)MovieClip::getMovieClipByName(v28, "arena");
        *((_QWORD *)this + 55) = v29;
        if ( v29 )
        {
          v30 = (AllianceStreamMessage *)MovieClip::getMovieClipByName(v29, "shadow");
          if ( v30 )
          {
            *((_BYTE *)v30 + 64) = 0;
            *((_BYTE *)v30 + 8) = *(_DWORD *)(GameMain::getInstance(v30) + 120) != 0;
          }
          v31 = DisplayObject::getY(*((_QWORD *)this + 55));
          *((_DWORD *)this + 117) = LODWORD(v31);
          MovieClip::gotoAndStop(*((MovieClip **)this + 55), "active");
          GameMode::getInstance();
          v32 = (tween::Bounce *)GameMode::getPlayerAvatar();
          Arena = LogicClientAvatar::getArena(v32);
          ChildByName = (#1249 *)MovieClip::getChildByName(*((_QWORD *)this + 55), "arena_graphic", v34);
          if ( ChildByName )
          {
            IconSWF = (ResourceManager *)LogicData::getIconSWF(Arena);
            IconExportName = (const String *)LogicData::getIconExportName(Arena);
            v39 = ResourceManager::getMovieClip(IconSWF, IconExportName, v38);
            v40 = (GameButton *)operator new(264);
            GameButton::GameButton(v40);
            *((_QWORD *)this + 56) = v40;
            (*(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v40 + 280LL))(v40, v39, 1);
            CustomButton::setButtonListener(*((_QWORD *)this + 56), (char *)this + 96);
            MovieClip::changeTimelineChild(*((#1257 **)this + 55), ChildByName, *((#1249 **)this + 56));
            (*(void (__fastcall **)(#1249 *))(*(_QWORD *)ChildByName + 8LL))(ChildByName);
            if ( *((_QWORD *)this + 54) )
              *((_DWORD *)this + 116) = 0;
          }
          v41 = GUIContainer::getMovieClip(this);
          v42 = (#1271 *)MovieClip::getTextFieldByName(v41, "arena_count");
          *((_QWORD *)this + 57) = v42;
          if ( v42 )
          {
            TID = (#1308 *)LogicData::getTID(Arena);
            String = StringTable::getString(TID, v44);
            TextField::setText(v42, (const String *)String);
            v46 = DisplayObject::getY(*((_QWORD *)this + 57));
            *((_DWORD *)this + 118) = LODWORD(v46);
          }
        }
        else
        {
          *((_QWORD *)this + 57) = 0;
        }
        *((_QWORD *)this + 54) = v4;
        v47 = (HomeScreen *)LogicDataTables::getGlobals();
        result = LogicGlobals::getStartingArena(v47);
        *(_BYTE *)(*((_QWORD *)this + 41) + 8LL) = v4 != result;
      }
      return result;
    }

    #1271 *__fastcall BattlePage::addNPCLevelButtons(LogicAreaEffectObject *this)
    {
      long double v1; // q9
      long double v2; // q10
      __int64 *v3; // x19
      _DWORD *v4; // x20
      __int64 v5; // x8
      __int64 v6; // x21
      __int64 v7; // x8
      _DWORD *v8; // x8
      Stage *Instance; // x0
      int v10; // s8
      int v11; // s9
      __int64 Table; // x20
      _QWORD *v13; // x21
      int v14; // w0
      __int64 v15; // x0
      #1271 *result; // x0
      int v17; // w21
      __int64 v18; // x22
      float v19; // s8
      float v20; // s11
      AreaEffectObject *v21; // x0
      GameUtils *Name; // x0
      const String *v23; // x1
      __int64 DebugButton; // x24
      long double v25; // q0
      #1271 *v26; // x24
      __int64 v27; // [xsp+8h] [xbp-78h] BYREF
    
      v3 = (__int64 *)this;
      v4 = (_DWORD *)*((_QWORD *)this + 47);
      if ( !v4 )
        goto LABEL_13;
      v5 = (int)v4[3];
      if ( (int)v5 <= 0 )
      {
        v4[3] = 0;
    LABEL_10:
        if ( *(_QWORD *)v4 )
          operator delete[](*(_QWORD *)v4);
        operator delete(v4);
        goto LABEL_13;
      }
      v6 = v5 - 1;
      do
      {
        this = *(LogicAreaEffectObject **)(*(_QWORD *)v4 + 8 * v6);
        if ( this )
          this = (LogicAreaEffectObject *)(*(__int64 (__fastcall **)(LogicAreaEffectObject *))(*(_QWORD *)this + 8LL))(this);
        v7 = v6-- + 1;
      }
      while ( v7 > 1 );
      v8 = (_DWORD *)v3[47];
      v4[3] = 0;
      v4 = v8;
      if ( v8 )
        goto LABEL_10;
    LABEL_13:
      v3[47] = 0;
      Instance = (Stage *)Stage::getInstance(this);
      v10 = *((_DWORD *)Instance + 107);
      v11 = *(_DWORD *)(Stage::getInstance(Instance) + 432LL);
      Table = LogicDataTables::getTable(18);
      v13 = (_QWORD *)operator new(16);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      *v13 = 0;
      v13[1] = 0;
      *((_DWORD *)v13 + 2) = v14;
      if ( is_mul_ok(v14, 8u) )
        v15 = 8LL * v14;
      else
        v15 = -1;
      *v13 = operator new[](v15);
      v3[47] = (__int64)v13;
      result = (#1271 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      v17 = (int)result;
      if ( (int)result >= 1 )
      {
        v18 = 0;
        v19 = (float)v10 * 0.4;
        v20 = (float)v11 * 0.6;
        LODWORD(v1) = 1061997773;
        LODWORD(v2) = 1.25;
        do
        {
          v21 = (AreaEffectObject *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v18);
          Name = (GameUtils *)LogicData::getName(v21);
          DebugButton = GameUtils::createDebugButton(Name, v23);
          v27 = DebugButton;
          DisplayObject::setPixelSnappedXY((DisplayObject *)DebugButton, v19, v20 + (float)((float)(int)v18 * 56.0));
          *(__n128 *)&v25 = CustomButton::setButtonListener(DebugButton, v3 + 12);
          *(_BYTE *)(DebugButton + 8) = 0;
          (*(void (__fastcall **)(__int64 *, __int64, long double))(*v3 + 160))(v3, DebugButton, v25);
          LogicArrayList<GameButton *>::add(v3[47], &v27);
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)DebugButton + 48LL))(DebugButton, v1);
          result = (#1271 *)MovieClip::getTextFieldByName(
                              *(_QWORD *)(DebugButton + 96),
                              CustomButton::DEFAULT_TEXT_INSTANCE_NAME);
          v26 = result;
          if ( result )
          {
            (*(void (__fastcall **)(#1271 *, long double))(*(_QWORD *)result + 48LL))(result, v2);
            result = (#1271 *)TextField::setAlign(v26, 0);
          }
          v18 = (unsigned int)(v18 + 1);
        }
        while ( v17 != (_DWORD)v18 );
      }
      return result;
    }

    __int64 __fastcall BattlePage::initChests(__int64 a1)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x20
      int MaxChestCount; // w21
      __int64 v5; // x23
      __int64 v6; // x8
      _QWORD *v7; // x22
      __int64 v8; // x22
      __int64 v9; // x0
      __int64 v10; // x8
      __int64 v11; // x0
      #1257 *MovieClip; // x23
      #1257 *MovieClipByName; // x22
      __int64 v14; // x23
      void *v15; // x24
      #1319 *v16; // x24
      #1257 *v17; // x0
      __int64 v18; // x0
      #1257 *v19; // x24
      GameButton *v20; // x25
      #1257 *v21; // x1
      __int64 v22; // x0
      __int64 v23; // x0
      __int64 v24; // x0
      const char *v25; // x1
      int v26; // w26
      int v27; // w28
      #1257 *v28; // x27
      ChestItem *v29; // x25
      const LogicSpawnPointData *Chest; // x0
      const String *v31; // x1
      String v33; // [xsp+8h] [xbp-88h] BYREF
      ChestItem *v34; // [xsp+20h] [xbp-70h] BYREF
      String v35; // [xsp+28h] [xbp-68h] BYREF
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      MaxChestCount = LogicClientHome::getMaxChestCount(Home);
      v5 = *(_QWORD *)(a1 + 336);
      if ( v5 )
      {
        v6 = *(int *)(v5 + 12);
        v7 = *(_QWORD **)(a1 + 336);
        if ( (int)v6 >= 1 )
        {
          v8 = v6 - 1;
          do
          {
            v9 = *(_QWORD *)(*(_QWORD *)v5 + 8 * v8);
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            v10 = v8-- + 1;
          }
          while ( v10 > 1 );
          v7 = *(_QWORD **)(a1 + 336);
        }
        *(_DWORD *)(v5 + 12) = 0;
      }
      else
      {
        v7 = (_QWORD *)operator new(16);
        *v7 = 0;
        v7[1] = 0;
        *((_DWORD *)v7 + 2) = MaxChestCount;
        if ( is_mul_ok(MaxChestCount, 8u) )
          v11 = 8LL * MaxChestCount;
        else
          v11 = -1;
        *v7 = operator new[](v11);
        *(_QWORD *)(a1 + 336) = v7;
      }
      LogicArrayList<ChestItem *>::ensureCapacity((__int64)v7, MaxChestCount);
      MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "bottom_center");
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "right") + 64) = 1;
      v14 = MovieClip::getMovieClipByName(MovieClip, "top_center");
      *(_BYTE *)(v14 + 64) = 1;
      *(_QWORD *)(a1 + 216) = v14;
      *(_QWORD *)(a1 + 224) = MovieClipByName;
      v15 = *(void **)(a1 + 368);
      if ( v15 )
      {
        MultiWinGUI::~MultiWinGUI(*(#1319 **)(a1 + 368));
        operator delete(v15);
      }
      *(_QWORD *)(a1 + 368) = 0;
      v16 = (#1319 *)operator new(144);
      v17 = (#1257 *)MovieClip::getMovieClipByName((#1257 *)v14, "win_reward");
      MultiWinGUI::MultiWinGUI(v16, v17);
      *(_QWORD *)(a1 + 368) = v16;
      v18 = *(_QWORD *)(a1 + 248);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      *(_QWORD *)(a1 + 248) = 0;
      v19 = (#1257 *)MovieClip::getMovieClipByName((#1257 *)v14, "daily_chest");
      v20 = (GameButton *)operator new(264);
      GameButton::GameButton(v20);
      *(_QWORD *)(a1 + 248) = v20;
      (*(void (__fastcall **)(GameButton *, #1257 *, __int64))(*(_QWORD *)v20 + 280LL))(v20, v19, 1);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 248), a1 + 96);
      MovieClipHelper::setHitAreaIfFound(*(#1395 **)(*(_QWORD *)(a1 + 248) + 96LL), v21);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 160LL))(v14, *(_QWORD *)(a1 + 248));
      *(_QWORD *)(a1 + 256) = MovieClip::getMovieClipByName(v19, "chest1");
      *(_QWORD *)(a1 + 264) = MovieClip::getMovieClipByName(v19, "chest2");
      v22 = MovieClip::getMovieClipByName(v19, "chest_open");
      *(_QWORD *)(a1 + 272) = v22;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v22 + 80LL))(v22, COERCE_LONG_DOUBLE((unsigned __int128)0));
      v23 = MovieClip::getMovieClipByName(v19, "chest_cooldown");
      *(_QWORD *)(a1 + 280) = v23;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v23 + 80LL))(v23, COERCE_LONG_DOUBLE((unsigned __int128)0));
      v24 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 280), "txt_cooldown");
      *(_QWORD *)(a1 + 288) = MovieClip::getTextFieldByName(v24, "text_cooldown");
      if ( MaxChestCount >= 1 )
      {
        v26 = 0;
        do
        {
          v27 = v26 + 1;
          String::format((String *)"chest_0%d", v25, (unsigned int)(v26 + 1));
          v28 = (#1257 *)MovieClip::getMovieClipByName(MovieClipByName, &v35);
          if ( !v28 )
          {
            operator+(&v33, "main ui: no chest clip with instance name: ", &v35);
            Debugger::error((Debugger *)&v33, v31);
          }
          v29 = (ChestItem *)operator new(328);
          ChestItem::ChestItem(v29, v28);
          v34 = v29;
          Chest = (const LogicSpawnPointData *)LogicClientHome::getChest(Home, v26);
          ChestItem::setLogicChest(v29, Chest);
          LogicArrayList<ChestItem *>::add(*(_QWORD *)(a1 + 336), &v34);
          (*(void (__fastcall **)(#1257 *, ChestItem *))(*(_QWORD *)MovieClipByName + 160LL))(MovieClipByName, v29);
          String::~String();
          ++v26;
        }
        while ( v27 < MaxChestCount );
      }
      return BattlePage::chestsChanged((LogicAreaEffectObject *)a1);
    }

    // attributes: thunk
    void __fastcall BattlePage::BattlePage(BattlePage *this)
    {
      __ZN10BattlePageC2Ev((__int64)this);
    }

    void __fastcall BattlePage::~BattlePage(LogicAreaEffectObject *this)
    {
      _DWORD *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x8
      _DWORD *v7; // x8
      _DWORD *v8; // x20
      __int64 v9; // x8
      __int64 v10; // x21
      __int64 v11; // x0
      __int64 v12; // x8
      _DWORD *v13; // x8
      __int64 v14; // x0
      void *v15; // x20
      __int64 v16; // x0
      __int64 v17; // x0
      __int64 v18; // x0
      __int64 v19; // x0
      __int64 v20; // x0
      __int64 v21; // x0
      __int64 v22; // x0
      __int64 v23; // x0
      __int64 v24; // x0
    
      *(_QWORD *)this = off_10046E448;
      *((_QWORD *)this + 12) = &off_10046E600;
      v2 = (_DWORD *)*((_QWORD *)this + 47);
      if ( !v2 )
        goto LABEL_13;
      v3 = (int)v2[3];
      if ( (int)v3 <= 0 )
      {
        v2[3] = 0;
    LABEL_10:
        if ( *(_QWORD *)v2 )
          operator delete[](*(_QWORD *)v2);
        operator delete(v2);
        goto LABEL_13;
      }
      v4 = v3 - 1;
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v4);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        v6 = v4-- + 1;
      }
      while ( v6 > 1 );
      v7 = (_DWORD *)*((_QWORD *)this + 47);
      v2[3] = 0;
      v2 = v7;
      if ( v7 )
        goto LABEL_10;
    LABEL_13:
      *((_QWORD *)this + 47) = 0;
      v8 = (_DWORD *)*((_QWORD *)this + 42);
      if ( !v8 )
        goto LABEL_25;
      v9 = (int)v8[3];
      if ( (int)v9 <= 0 )
      {
        v8[3] = 0;
    LABEL_22:
        if ( *(_QWORD *)v8 )
          operator delete[](*(_QWORD *)v8);
        operator delete(v8);
        goto LABEL_25;
      }
      v10 = v9 - 1;
      do
      {
        v11 = *(_QWORD *)(*(_QWORD *)v8 + 8 * v10);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v12 = v10-- + 1;
      }
      while ( v12 > 1 );
      v13 = (_DWORD *)*((_QWORD *)this + 42);
      v8[3] = 0;
      v8 = v13;
      if ( v13 )
        goto LABEL_22;
    LABEL_25:
      *((_QWORD *)this + 42) = 0;
      v14 = *((_QWORD *)this + 67);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *((_QWORD *)this + 67) = 0;
      v15 = (void *)*((_QWORD *)this + 46);
      if ( v15 )
      {
        MultiWinGUI::~MultiWinGUI(*((#1319 **)this + 46));
        operator delete(v15);
      }
      *((_QWORD *)this + 46) = 0;
      v16 = *((_QWORD *)this + 49);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      *((_QWORD *)this + 49) = 0;
      v17 = *((_QWORD *)this + 39);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      *((_QWORD *)this + 39) = 0;
      v18 = *((_QWORD *)this + 40);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      *((_QWORD *)this + 40) = 0;
      v19 = *((_QWORD *)this + 41);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      *((_QWORD *)this + 41) = 0;
      v20 = *((_QWORD *)this + 38);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      *((_QWORD *)this + 38) = 0;
      v21 = *((_QWORD *)this + 31);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      *((_QWORD *)this + 31) = 0;
      v22 = *((_QWORD *)this + 25);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      *((_QWORD *)this + 25) = 0;
      v23 = *((_QWORD *)this + 43);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      *((_QWORD *)this + 43) = 0;
      v24 = *((_QWORD *)this + 56);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      *((_DWORD *)this + 140) = 0;
      *((_DWORD *)this + 52) = 0;
      *((_DWORD *)this + 147) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 60) = 0;
      *((_DWORD *)this + 122) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_BYTE *)this + 424) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *(_QWORD *)((char *)this + 412) = 0;
      *(_QWORD *)((char *)this + 404) = 0;
      *(_QWORD *)((char *)this + 549) = 0;
      *((_QWORD *)this + 68) = 0;
      *((_QWORD *)this + 67) = 0;
      *((_QWORD *)this + 66) = 0;
      *((_QWORD *)this + 65) = 0;
      *((_QWORD *)this + 64) = 0;
      *((_QWORD *)this + 62) = 0;
      *((_QWORD *)this + 63) = 0;
      *((_BYTE *)this + 584) = 0;
      *((_QWORD *)this + 72) = 0;
      *((_QWORD *)this + 71) = 0;
      *((_DWORD *)this + 118) = 0;
      *((_QWORD *)this + 57) = 0;
      *((_QWORD *)this + 58) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 56) = 0;
      *((_QWORD *)this + 54) = 0;
      *((_DWORD *)this + 74) = -1;
      *((_DWORD *)this + 100) = -1;
      *((_QWORD *)this + 49) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 47) = 0;
      *((_BYTE *)this + 384) = 0;
      *((_BYTE *)this + 564) = 0;
      *((_QWORD *)this + 44) = 0;
      *((_QWORD *)this + 45) = 0;
      *((_QWORD *)this + 42) = 0;
      *((_QWORD *)this + 43) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 39) = 0;
      PageItem::~PageItem(this);
    }

    // attributes: thunk
    void __fastcall BattlePage::~BattlePage(LogicAreaEffectObject *this)
    {
      __ZN10BattlePageD2Ev(this);
    }

    void __fastcall BattlePage::~BattlePage(LogicAreaEffectObject *this)
    {
      BattlePage::~BattlePage(this);
      operator delete(this);
    }

    __int64 __fastcall BattlePage::chestsChanged(LogicAreaEffectObject *this)
    {
      const char *v2; // x2
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x20
      int MaxChestCount; // w0
      const char *v6; // x1
      __int64 v7; // x21
      #1316 *v8; // x22
      __int64 Chest; // x0
      const LogicSpawnPointData *v10; // x1
      __int64 v11; // x8
    
      BattlePage::animateNewChestIfNeeded(this);
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 42) != 0), (bool)"main hud::chestsChanged: chests not inited", v2);
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      MaxChestCount = LogicClientHome::getMaxChestCount(Home);
      if ( MaxChestCount != *(_DWORD *)(*((_QWORD *)this + 42) + 12LL) )
        Debugger::error((__siginfo *)"chest slot count changed?", v6);
      if ( MaxChestCount >= 1 )
      {
        v7 = MaxChestCount - 1LL;
        do
        {
          v8 = *(#1316 **)(**((_QWORD **)this + 42) + 8 * v7);
          Chest = LogicClientHome::getChest(Home, v7);
          if ( (_DWORD)v7 == *((_DWORD *)this + 100) )
            v10 = 0;
          else
            v10 = (const LogicSpawnPointData *)Chest;
          ChestItem::setLogicChest(v8, v10);
          v11 = v7-- + 1;
        }
        while ( v11 > 1 );
      }
      return BattlePage::updateTapToOpenAnimation(this);
    }

    void __fastcall BattlePage::startPvP(LogicAreaEffectObject *this, char a2)
    {
      LogicProgressSimulator *Instance; // x0
      BadgePopup *isServerShuttingDown; // x0
      BadgePopup *v6; // x0
      Stage *v7; // x19
      float v8; // s1
      const char *v9; // x1
      const String *String; // x0
      __int64 v11; // x0
      __int64 v12; // x21
      __int64 HomeScreen; // x0
      const String *v14; // x3
      MovieClip *v15; // x0
      __int64 v16; // x22
      String v17; // [xsp+0h] [xbp-40h] BYREF
      float v18[2]; // [xsp+18h] [xbp-28h] BYREF
    
      Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
      isServerShuttingDown = (BadgePopup *)GameStateManager::isServerShuttingDown(Instance);
      if ( (_DWORD)isServerShuttingDown )
      {
        v6 = (BadgePopup *)GUI::getInstance(isServerShuttingDown);
        if ( v6 )
        {
          v7 = (Stage *)GUI::getInstance(v6);
          v18[0] = GUI::getDefaultFloaterPos(v7);
          v18[1] = v8;
          String = (const String *)StringTable::getString((#1308 *)"TID_SHUTDOWN_BATTLE_DISABLED", v9);
          GUI::showFloaterTextAt((__int64)v7, v18, String, -1, 0.0);
        }
      }
      else
      {
        MessageManager::clearPendingBattleResultMessage((MessageManager *)MessageManager::sm_pInstance);
        v11 = GameStateManager::getInstance();
        GameStateManager::setNextBattleTypePvp(v11);
        v12 = GameMode::getInstance();
        HomeScreen = GameMode::getHomeScreen(v12);
        HomeScreen::setWaitingForResponse(HomeScreen, 1);
        MessageManager::getConnectionInterface((MessageManager *)MessageManager::sm_pInstance);
        EventTracker::sendEvent(
          (MovieClip *)&EventTracker::EVENT_LABEL_GAME,
          &EventTracker::EVENT_TYPE_CONNECTION_INTERFACE,
          &v17,
          v14);
        String::~String();
        EventTracker::flush(v15);
        v16 = operator new(40);
        LogicCommand::LogicCommand(v16);
        *(_QWORD *)v16 = &off_10046B560;
        *(_BYTE *)(v16 + 28) = a2;
        *(_DWORD *)(v16 + 32) = 0;
        if ( (unsigned int)GameMode::addCommand(v12, (PvpMatchmakeNotificationMessage *)v16, 1) )
          GameMode::sendEndTurn(v12);
        else
          BattlePage::setMatchmaking(this, 0);
      }
    }

    void __fastcall BattlePage::setMatchmaking(MovieClip **this, int a2)
    {
      __int64 Instance; // x0
      BadgePopup *v5; // x0
      __int64 v6; // x0
      BadgePopup *v7; // x0
      BadgePopup *v8; // x0
      NoAlliance *v9; // x20
      const AreaEffectObject *v10; // x2
      AreaEffectObject *SoundByName; // x0
      MovieClip *v12; // x0
      __int64 MovieClipByName; // x0
      #1271 *TextFieldByName; // x21
      const char *v15; // x1
      const String *String; // x0
      LogicPageOpenedCommand *v17; // x0
      __int64 v18; // x0
      LogicPageOpenedCommand *v19; // x0
      LogicPageOpenedCommand *v20; // x0
      __int64 MainHUD; // x0
      LogicPageOpenedCommand *v22; // x0
      LogicPageOpenedCommand *v23; // x0
      __int64 v24; // x0
      LogicPageOpenedCommand *v25; // x0
      LogicPageOpenedCommand *v26; // x0
      __int64 PageGUI; // x0
      bool v28; // w1
      bool v29; // w1
      LogicPageOpenedCommand *v30; // x0
      LogicPageOpenedCommand *v31; // x0
      __int64 v32; // x0
      LogicPageOpenedCommand *v33; // x0
      LogicPageOpenedCommand *v34; // x0
      __int64 v35; // x0
      LogicPageOpenedCommand *v36; // x0
      LogicPageOpenedCommand *v37; // x0
      __int64 v38; // x0
      #1271 *v39; // x20
      unsigned __int8 *v40; // x0
      __int64 v41; // x0
      __int64 HomeScreen; // x0
      String v43; // [xsp+0h] [xbp-60h] BYREF
      String v44; // [xsp+18h] [xbp-48h] BYREF
    
      if ( a2 != *((unsigned __int8 *)this + 564) )
      {
        Instance = GUI::getInstance((BadgePopup *)this);
        if ( a2 )
        {
          v5 = (BadgePopup *)GUI::closeAllPopups(Instance);
          v6 = GUI::getInstance(v5);
          v7 = (BadgePopup *)GUI::setPopupsBlocked(v6, 1);
          v8 = (BadgePopup *)GUI::getInstance(v7);
          GUI::removePopover(v8);
          v9 = (NoAlliance *)SoundManager::sm_pInstance;
          String::String(&v44, "sound_press_battle_button");
          SoundByName = (AreaEffectObject *)LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v44, 0, v10);
          SoundManager::playSound(v9, SoundByName, 0xFFFFFFFFLL, 1.0, 0.0);
          String::~String();
          v12 = *(this + 62);
          *((_BYTE *)v12 + 64) = 0;
          *((_BYTE *)v12 + 8) = 1;
          MovieClip::gotoAndPlay(v12, "appear_start", "idle");
          MovieClip::gotoAndPlay(*(this + 55), "matchmake_start", "matchmake_end");
          *((_BYTE *)*(this + 56) + 64) = 0;
          MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)*(this + 25) + 12), "cancel_txt");
          TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "TID_CANCEL");
          String = (const String *)StringTable::getString((#1308 *)"TID_CANCEL", v15);
          TextField::setText(TextFieldByName, String);
          MovieClip::gotoAndStopFrameIndex(*((MovieClip **)*(this + 25) + 12), 1);
          *((_BYTE *)*(this + 27) + 64) = 0;
          *((_BYTE *)*(this + 29) + 64) = 0;
          *((_BYTE *)*(this + 30) + 64) = 0;
          *((_BYTE *)*(this + 28) + 64) = 0;
          v18 = HomeScreen::getInstance(v17);
          v19 = (LogicPageOpenedCommand *)HomeScreen::gotoPage(v18, 2, 1);
          v20 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v19);
          MainHUD = HomeScreen::getMainHUD(v20);
          v22 = (LogicPageOpenedCommand *)MainHUD::setTopHUDVisible(MainHUD, 0);
          v23 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v22);
          v24 = HomeScreen::getMainHUD(v23);
          v25 = (LogicPageOpenedCommand *)MainHUD::setBottomHUDVisible(v24, 0);
          v26 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v25);
          PageGUI = HomeScreen::getPageGUI(v26);
          PageGUI::setDragEnabled(PageGUI, 0);
          *((_DWORD *)this + 145) = -1;
          *(this + 71) = 0;
          *((_BYTE *)*(this + 64) + 8) = 1;
          *((_BYTE *)*(this + 67) + 8) = 1;
          BattlePage::refreshMatchmakingTip((LogicAreaEffectObject *)this);
          Application::setKeepScreenOn((Application *)1, v28);
          *((_BYTE *)this + 564) = 1;
          *((_DWORD *)this + 144) = 0;
        }
        else
        {
          GUI::setPopupsBlocked(Instance, 0);
          Application::setKeepScreenOn(0, v29);
          *((_BYTE *)*(this + 62) + 8) = 0;
          *((_BYTE *)*(this + 67) + 8) = 0;
          MovieClip::gotoAndStop(*(this + 55), "active");
          *((_BYTE *)*(this + 56) + 64) = 1;
          MovieClip::gotoAndStopFrameIndex(*((MovieClip **)*(this + 25) + 12), 0);
          *((_BYTE *)*(this + 28) + 64) = 1;
          *((_BYTE *)*(this + 27) + 64) = 1;
          *((_BYTE *)*(this + 29) + 64) = 1;
          *((_BYTE *)*(this + 30) + 64) = 1;
          v31 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v30);
          v32 = HomeScreen::getMainHUD(v31);
          v33 = (LogicPageOpenedCommand *)MainHUD::setTopHUDVisible(v32, 1);
          v34 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v33);
          v35 = HomeScreen::getMainHUD(v34);
          v36 = (LogicPageOpenedCommand *)MainHUD::setBottomHUDVisible(v35, 1);
          v37 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v36);
          v38 = HomeScreen::getPageGUI(v37);
          PageGUI::setDragEnabled(v38, 1);
          v39 = *(this + 64);
          String::String(&v43, "");
          TextField::setText(v39, &v43);
          String::~String();
          *((_BYTE *)*(this + 64) + 8) = 0;
          if ( !*((_BYTE *)this + 584) )
          {
            v40 = (unsigned __int8 *)GameMode::getInstance();
            GameMode::setPaused(v40, 0);
            v41 = GameMode::getInstance();
            HomeScreen = GameMode::getHomeScreen(v41);
            HomeScreen::setWaitingForResponse(HomeScreen, 0);
          }
          *((_BYTE *)this + 564) = 0;
        }
      }
    }

    void __fastcall BattlePage::buttonClicked(LogicAreaEffectObject *this, #1251 *a2)
    {
      BadgePopup *Instance; // x0
      __int64 TopPopup; // x0
      __int64 v6; // x21
      __int64 v7; // x8
      __int64 v8; // x21
      __int64 i; // x9
      #1251 *v11; // x10
      __int64 Table; // x0
      const Character::AnimFrameIndices *v13; // x0
      __int64 MovieClipByName; // x0
      #1271 *TextFieldByName; // x20
      const char *v16; // x1
      const String *String; // x0
      CancelMatchmakeMessage *v18; // x20
      __int64 v19; // x0
      CoOpenStreamEntry *Home; // x0
      LogicAreaEffectObject *isFreeChestAvailable; // x0
      LogicCollectFreeChestCommand *v22; // x20
      __int64 v23; // x0
      LeaderboardPopup *v24; // x20
      AlliancePopup *v25; // x21
      const char *v26; // x2
      BadgePopup *v27; // x0
      __int64 v28; // x0
      DisplayObject *v29; // x1
      unsigned int *Globals; // x0
      String *v31; // x21
      Stage *v32; // x19
      float v33; // s1
      const char *v34; // x1
      void *v35; // x20
      int v36; // w1
      EventScreen *v37; // x20
      BadgePopup *v38; // x0
      const char *v39; // x1
      const String *v40; // x19
      const char *v41; // x1
      const String *v42; // x0
      tween::Bounce *PlayerAvatar; // x0
      LogicPageOpenedCommand *Arena; // x19
      __int64 v45; // x0
      _QWORD v46[3]; // [xsp+0h] [xbp-70h] BYREF
      String v47; // [xsp+18h] [xbp-58h] BYREF
      String v48; // [xsp+30h] [xbp-40h] BYREF
      float v49[2]; // [xsp+48h] [xbp-28h] BYREF
    
      Instance = (BadgePopup *)GUI::getInstance(this);
      TopPopup = GUI::getTopPopup(Instance);
      v6 = TopPopup;
      if ( *((#1251 **)this + 25) == a2 )
      {
        if ( !TopPopup )
        {
          if ( *((_BYTE *)this + 564) )
          {
            MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)a2 + 12), "cancel_txt");
            TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "TID_CANCEL");
            String = (const String *)StringTable::getString((#1308 *)"TID_CANCELLING", v16);
            TextField::setText(TextFieldByName, String);
            *(_BYTE *)(*((_QWORD *)this + 64) + 8LL) = 0;
            v18 = (CancelMatchmakeMessage *)operator new(72);
            CancelMatchmakeMessage::CancelMatchmakeMessage(v18);
            MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v18);
          }
          else
          {
            BattlePage::startBattle(this, 1);
          }
        }
        return;
      }
      if ( *((#1251 **)this + 31) == a2 )
      {
        v19 = GameMode::getInstance();
        Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v19 + 112));
        isFreeChestAvailable = (LogicAreaEffectObject *)LogicClientHome::isFreeChestAvailable(Home);
        if ( (_DWORD)isFreeChestAvailable )
        {
          if ( !v6 && (BattlePage::isMatchmaking(isFreeChestAvailable) & 1) == 0 )
          {
            v22 = (LogicCollectFreeChestCommand *)operator new(32);
            LogicCollectFreeChestCommand::LogicCollectFreeChestCommand(v22);
            v23 = GameMode::getInstance();
            GameMode::addCommand(v23, v22, 1);
          }
        }
        else if ( GUI::getInstance(isFreeChestAvailable) )
        {
          Globals = (unsigned int *)LogicDataTables::getGlobals();
          v31 = (String *)Globals[94];
          v32 = (Stage *)GUI::getInstance((BadgePopup *)Globals);
          v49[0] = GUI::getDefaultFloaterPos(v32);
          v49[1] = v33;
          v35 = StringTable::getString((#1308 *)"TID_FREE_CHEST_TIP", v34);
          String::String(&v47, "<NUMBER>");
          String::valueOf(v46, v31, v36);
          String::replace(&v48, v35, &v47, v46);
          GUI::showFloaterTextAt((__int64)v32, v49, &v48, -1, 0.0);
          String::~String();
          String::~String();
          String::~String();
        }
        return;
      }
      if ( *((#1251 **)this + 39) == a2 )
      {
        v24 = (LeaderboardPopup *)operator new(368);
        LeaderboardPopup::LeaderboardPopup(v24);
        v25 = (AlliancePopup *)operator new(280);
        AlliancePopup::AlliancePopup(v25);
        v27 = (BadgePopup *)AlliancePopup::pushScreen(v25, v24, v26);
        v28 = GUI::getInstance(v27);
        v29 = v25;
    LABEL_30:
        GUI::showPopup(v28, v29, 1, 0, 0);
        return;
      }
      if ( *((#1251 **)this + 40) == a2 )
      {
        v37 = (EventScreen *)operator new(376);
        EventScreen::EventScreen(v37);
    LABEL_29:
        v28 = GUI::getInstance(v38);
        v29 = v37;
        goto LABEL_30;
      }
      if ( *((#1251 **)this + 38) == a2 )
      {
        v37 = (EventScreen *)operator new(264);
        AchievementsPopup::AchievementsPopup(v37);
        goto LABEL_29;
      }
      if ( *((#1251 **)this + 41) == a2 )
      {
        v37 = (EventScreen *)operator new(384);
        v40 = (const String *)StringTable::getString((#1308 *)"TID_START_TRAINING_CONFIRMATION_TITLE", v39);
        v42 = (const String *)StringTable::getString((#1308 *)"TID_START_TRAINING_CONFIRMATION_TEXT", v41);
        ConfirmPopup::ConfirmPopup(v37, 13, v40, v42);
        goto LABEL_29;
      }
      if ( *((#1251 **)this + 56) == a2 )
      {
        GameMode::getInstance();
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
        Arena = (LogicPageOpenedCommand *)LogicClientAvatar::getArena(PlayerAvatar);
        v45 = HomeScreen::getInstance(Arena);
        (*(void (__fastcall **)(__int64, LogicPageOpenedCommand *, LogicPageOpenedCommand *))(*(_QWORD *)v45 + 296LL))(
          v45,
          Arena,
          Arena);
      }
      else if ( *((#1251 **)this + 67) == a2 )
      {
        BattlePage::refreshMatchmakingTip(this);
      }
      else
      {
        v7 = *((_QWORD *)this + 47);
        if ( v7 )
        {
          v8 = *(int *)(v7 + 12);
          for ( i = 8LL * ((int)v8 - 1); v8-- >= 1; i -= 8 )
          {
            v11 = *(#1251 **)(*(_QWORD *)v7 + i);
            if ( v11 == a2 )
            {
              Table = LogicDataTables::getTable(18);
              v13 = (const Character::AnimFrameIndices *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table
                                                                                                     + 40LL))(
                                                           Table,
                                                           v8);
              BattlePage::startNPCLevel(this, v13);
              return;
            }
          }
        }
      }
    }

    void __fastcall BattlePage::startBattle(LogicAreaEffectObject *a1, int a2)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x22
      int ChestCnt; // w24
      int MaxChestCount; // w25
      tween::Bounce *PlayerAvatar; // x20
      __int64 Arena; // x23
      HomeScreen *Globals; // x0
      BadgePopup *StartingArena; // x0
      ConfirmPopup *v12; // x20
      const char *v13; // x1
      const String *String; // x19
      const char *v15; // x1
      const String *v16; // x0
      BadgePopup *v17; // x0
      __int64 v18; // x0
      __int64 SelectedDeck; // x0
      BadgePopup *SpellCnt; // x0
      Stage *v21; // x19
      int v22; // s1
      const char *v23; // x1
      const String *v24; // x2
      float *v25; // x1
      int v26; // s1
      const char *v27; // x1
      __int64 v28; // x0
      int MatchCost; // w21
      int v30; // w19
      HomeScreen *v31; // x0
      const char *ResourceDiamondCost; // x19
      HomeScreen *v33; // x0
      String *MaxResourceCountForDiamondCost; // x20
      const char *v35; // x1
      void *v36; // x19
      int v37; // w1
      const char *v38; // x1
      const String *v39; // x19
      ConfirmPopup *v40; // x20
      BadgePopup *v41; // x0
      __int64 v42; // x0
      _QWORD v43[3]; // [xsp+8h] [xbp-98h] BYREF
      String v44; // [xsp+20h] [xbp-80h] BYREF
      String v45; // [xsp+38h] [xbp-68h] BYREF
      _DWORD v46[2]; // [xsp+50h] [xbp-50h] BYREF
      _DWORD v47[2]; // [xsp+58h] [xbp-48h] BYREF
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      ChestCnt = LogicClientHome::getChestCnt(Home);
      MaxChestCount = LogicClientHome::getMaxChestCount(Home);
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      StartingArena = (BadgePopup *)LogicGlobals::getStartingArena(Globals);
      if ( ChestCnt >= MaxChestCount && ((a2 ^ 1) & 1) == 0 )
      {
        if ( (BadgePopup *)Arena != StartingArena )
        {
          v12 = (ConfirmPopup *)operator new(384);
          String = (const String *)StringTable::getString((#1308 *)"TID_CHESTS_FULL_TITLE", v13);
          v16 = (const String *)StringTable::getString((#1308 *)"TID_CHESTS_FULL_TEXT", v15);
          ConfirmPopup::ConfirmPopup(v12, 12, String, v16);
          v18 = GUI::getInstance(v17);
          GUI::showPopup(v18, v12, 1, 0, 0);
          return;
        }
        v21 = (Stage *)GUI::getInstance(StartingArena);
        v47[0] = GUI::getDefaultFloaterPos(v21);
        v47[1] = v26;
        v24 = (const String *)StringTable::getString((#1308 *)"TID_TRAINING_CAMP_CHESTS_FULL", v27);
        v25 = (float *)v47;
        goto LABEL_9;
      }
      if ( (BadgePopup *)Arena == StartingArena )
      {
        BattlePage::startTrainingCampMatch(a1);
      }
      else
      {
        SelectedDeck = LogicClientHome::getSelectedDeck(Home);
        SpellCnt = (BadgePopup *)LogicSpellDeck::getSpellCnt(SelectedDeck);
        if ( (int)SpellCnt <= 7 )
        {
          v21 = (Stage *)GUI::getInstance(SpellCnt);
          v46[0] = GUI::getDefaultFloaterPos(v21);
          v46[1] = v22;
          v24 = (const String *)StringTable::getString((#1308 *)"TID_FULL_DECK_NEEDED", v23);
          v25 = (float *)v46;
    LABEL_9:
          GUI::showFloaterTextAt((__int64)v21, v25, v24, -1, 0.0);
          return;
        }
        v28 = LogicClientAvatar::getArena(PlayerAvatar);
        MatchCost = LogicArenaData::getMatchCost(v28);
        if ( (int)LogicClientAvatar::getGold(PlayerAvatar) >= MatchCost )
        {
          BattlePage::startPvP(a1, 0);
        }
        else
        {
          v30 = MatchCost - LogicClientAvatar::getGold(PlayerAvatar);
          v31 = (HomeScreen *)LogicDataTables::getGlobals();
          ResourceDiamondCost = (const char *)LogicGlobals::getResourceDiamondCost(v31, v30);
          v33 = (HomeScreen *)LogicDataTables::getGlobals();
          MaxResourceCountForDiamondCost = (String *)LogicGlobals::getMaxResourceCountForDiamondCost(
                                                       v33,
                                                       ResourceDiamondCost);
          v36 = StringTable::getString((#1308 *)"TID_NOT_ENOUGH_RESOURCES_TEXT_MATCHMAKING", v35);
          String::String(&v44, "<GOLD>");
          String::valueOf(v43, MaxResourceCountForDiamondCost, v37);
          String::replace(&v45, v36, &v44, v43);
          String::~String();
          String::~String();
          v39 = (const String *)StringTable::getString((#1308 *)"TID_NOT_ENOUGH_RESOURCES_TITLE", v38);
          v40 = (ConfirmPopup *)operator new(384);
          ConfirmPopup::ConfirmPopup(v40, 22, v39, &v45);
          v42 = GUI::getInstance(v41);
          GUI::showPopup(v42, v40, 1, 0, 0);
          String::~String();
        }
      }
    }

    __int64 __fastcall BattlePage::isMatchmaking(LogicAreaEffectObject *this)
    {
      int v1; // w19
      __int64 Instance; // x0
      LogicPageOpenedCommand *HomeScreen; // x0
    
      v1 = *(_DWORD *)(GameStateManager::getInstance() + 16);
      Instance = GameMode::getInstance();
      HomeScreen = (LogicPageOpenedCommand *)GameMode::getHomeScreen(Instance);
      return (v1 == 0) & (unsigned int)HomeScreen::isWaitingForResponse(HomeScreen);
    }

    __int64 __fastcall BattlePage::refreshMatchmakingTip(__int64 this)
    {
      __int64 v1; // x19
      const String *SuitableHint; // x0
    
      v1 = this;
      if ( *(_QWORD *)(this + 544) )
      {
        SuitableHint = (const String *)LoadingScreen::getSuitableHint((CustomButton *)this);
        TextField::setText(*(#1271 **)(v1 + 544), SuitableHint);
        MovieClip::playOnce(*(MovieClip **)(*(_QWORD *)(v1 + 536) + 96LL));
        this = LogicDataTables::getClientGlobals();
        *(_DWORD *)(v1 + 560) = *(_DWORD *)(this + 396);
      }
      return this;
    }

    void __fastcall BattlePage::startNPCLevel(LogicAreaEffectObject *this, const Character::AnimFrameIndices *a2)
    {
      LogicProgressSimulator *Instance; // x0
      BadgePopup *isServerShuttingDown; // x0
      BadgePopup *v6; // x0
      Stage *v7; // x19
      float v8; // s1
      const char *v9; // x1
      const String *String; // x0
      __int64 v11; // x0
      __int64 v12; // x0
      __int64 HomeScreen; // x0
      unsigned __int8 *v14; // x0
      VisitHomeMessage *v15; // x0
      float v16[2]; // [xsp+8h] [xbp-18h] BYREF
    
      if ( a2 )
      {
        if ( !*((_BYTE *)this + 384) )
        {
          Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
          isServerShuttingDown = (BadgePopup *)GameStateManager::isServerShuttingDown(Instance);
          if ( (_DWORD)isServerShuttingDown )
          {
            v6 = (BadgePopup *)GUI::getInstance(isServerShuttingDown);
            if ( v6 )
            {
              v7 = (Stage *)GUI::getInstance(v6);
              v16[0] = GUI::getDefaultFloaterPos(v7);
              v16[1] = v8;
              String = (const String *)StringTable::getString((#1308 *)"TID_SHUTDOWN_BATTLE_DISABLED", v9);
              GUI::showFloaterTextAt((__int64)v7, v16, String, -1, 0.0);
            }
          }
          else
          {
            v11 = GameStateManager::getInstance();
            GameStateManager::setNextBattleTypeNpc(v11);
            v12 = GameMode::getInstance();
            HomeScreen = GameMode::getHomeScreen(v12);
            HomeScreen::setWaitingForResponse(HomeScreen, 1);
            v14 = (unsigned __int8 *)GameMode::getInstance();
            GameMode::setPaused(v14, 1);
            v15 = (VisitHomeMessage *)GameMode::getInstance();
            *((_BYTE *)this + 384) = GameMode::sendStartMissionMessage(v15, a2);
          }
        }
      }
      else
      {
        Debugger::warning((__siginfo *)"BattlePage::startNpcLevel - npc data is NULL", 0);
      }
    }

    // attributes: thunk
    __int64 __fastcall BattlePage::stateChanged(BadgePopup *a1)
    {
      return PageItem::stateChanged(a1);
    }

    __int64 __fastcall BattlePage::createIcon(LogicAreaEffectObject *this, __int64 a2, const char *a3)
    {
      return ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_menu_battle", a3);
    }

    void *__fastcall BattlePage::getLocalizedName(LogicAreaEffectObject *this, const char *a2)
    {
      return StringTable::getString((#1308 *)"TID_TAB_BATTLE", a2);
    }

    void __fastcall BattlePage::update(LogicAreaEffectObject *this, float a2)
    {
      tween::Bounce *PlayerAvatar; // x20
      __int64 Instance; // x0
      DonatorEntry *TutorialManager; // x0
      AllianceStreamMessage *CurrentTutorial; // x0
      #1271 *TextFieldByName; // x0
      __int64 MovieClip; // x0
      #1271 *v10; // x21
      LogicPageOpenedCommand *v11; // x0
      MessageManager *PageGUI; // x0
      LogicPageOpenedCommand *CurrentPageIndex; // x0
      int v14; // w8
      __int64 v15; // x0
      DisplayObject *v16; // x21
      long double v17; // q0
      float v18; // s1
      float v19; // s2
      float v20; // s2
      DisplayObject *v21; // x21
      long double v22; // q0
      float v23; // s1
      float v24; // s2
      float v25; // s2
      DisplayObject *v26; // x21
      long double v27; // q0
      float v28; // s1
      float v29; // s2
      float v30; // s2
      DisplayObject *v31; // x21
      long double v32; // q0
      float v33; // s1
      float v34; // s2
      float v35; // s2
      __int64 v36; // x21
      void (__fastcall *v37)(__int64, float); // x22
      float Alpha; // s0
      __int64 v39; // x21
      void (__fastcall *v40)(__int64, float); // x22
      float v41; // s0
      __int64 v42; // x21
      __int64 (__fastcall *v43)(__int64, float); // x22
      float v44; // s0
      AllianceStreamMessage *v45; // x0
      __int64 v46; // x0
      float v47; // s0
      int v48; // w8
      int v49; // w9
      unsigned int v50; // w8
      const char *v51; // x1
      DisplayObject *v52; // x21
      long double v53; // q0
      float v54; // s1
      float v55; // s2
      float v56; // s2
      DisplayObject *v57; // x21
      long double v58; // q0
      float v59; // s1
      float v60; // s2
      float v61; // s2
      __int64 v62; // x21
      void (__fastcall *v63)(__int64, float); // x22
      float v64; // s0
      __int64 v65; // x21
      void (__fastcall *v66)(__int64, float); // x22
      float v67; // s0
      __int64 v68; // x21
      void (__fastcall *v69)(__int64, float); // x22
      float v70; // s0
      const char *v71; // x1
      String *String; // x0
      float v73; // s0
      float v74; // s0
      __int64 Arena; // x0
      LogicKickAllianceMemberCommand *MatchCost; // x21
      const #1355 *GoldData; // x0
      _BOOL4 hasEnoughResources; // w0
      const char *v79; // x4
      bool v80; // w22
      __int64 v81; // x0
      bool v82; // w3
      MovieClipHelper *v83; // x0
      TextField *v84; // x1
      __int64 v85; // x8
      #1319 *v86; // x0
      __int64 v87; // x0
      tween::Bounce *v88; // x0
      __int64 v89; // x21
      HomeScreen *Globals; // x0
      const tween::Bounce *v91; // x1
      bool v92; // w8
      __int64 v93; // x9
      String *isAchievementAvailableForClaim; // x20
      #1257 *MovieClipByName; // x0
      MovieClip *v96; // x21
      int v97; // w1
      #1311 *updated; // x0
      float v99; // s0
      float v100; // s0
      float v101; // s8
      LogicPageOpenedCommand *v102; // x0
      float v103; // s9
      __int64 v104; // x20
      float v105; // s0
      float v106; // s0
      float v107; // s0
      __int64 NewMessageCount; // x20
      LogicDataTables *v109; // x0
      __int64 *v111; // x0
      #1257 *v112; // x0
      MovieClip *v113; // x19
      int v114; // w1
      String v115; // [xsp+0h] [xbp-E0h] BYREF
      String v116; // [xsp+18h] [xbp-C8h] BYREF
      String v117; // [xsp+30h] [xbp-B0h] BYREF
      String v118; // [xsp+48h] [xbp-98h] BYREF
      String v119; // [xsp+60h] [xbp-80h] BYREF
      String v120; // [xsp+78h] [xbp-68h] BYREF
    
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      if ( PlayerAvatar )
      {
        Instance = GameMode::getInstance();
        TutorialManager = (DonatorEntry *)LogicGameMode::getTutorialManager(*(_QWORD *)(Instance + 112));
        CurrentTutorial = (AllianceStreamMessage *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
        *((_BYTE *)this + 64) = 1;
        if ( CurrentTutorial )
        {
          CurrentTutorial = (AllianceStreamMessage *)LogicTutorialData::disableBattleMenu((__int64)CurrentTutorial);
          if ( (_DWORD)CurrentTutorial )
            *((_BYTE *)this + 64) = 0;
        }
        TextFieldByName = (#1271 *)GameMain::getInstance(CurrentTutorial);
        if ( *((_BYTE *)TextFieldByName + 357) )
        {
          MovieClip = GUIContainer::getMovieClip(this);
          TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "arena_count");
          v10 = TextFieldByName;
          *((_QWORD *)this + 57) = TextFieldByName;
          if ( TextFieldByName )
          {
            String::String(&v120, "<REC> mode");
            TextField::setText(v10, &v120);
            String::~String();
          }
        }
        v11 = (LogicPageOpenedCommand *)HomeScreen::getInstance(TextFieldByName);
        PageGUI = (MessageManager *)HomeScreen::getPageGUI(v11);
        CurrentPageIndex = (LogicPageOpenedCommand *)PageGUI::getCurrentPageIndex(PageGUI);
        v14 = 2 - (_DWORD)CurrentPageIndex;
        if ( (int)CurrentPageIndex >= 2 )
          v14 = (_DWORD)CurrentPageIndex - 2;
        *((_BYTE *)this + 8) = v14 < 2;
        if ( *((_BYTE *)this + 564) )
        {
          v15 = HomeScreen::getInstance(CurrentPageIndex);
          HomeScreen::gotoPage(v15, 2, 1);
          v16 = (DisplayObject *)*((_QWORD *)this + 25);
          v17 = DisplayObject::getY(v16);
          v18 = *((float *)this + 52) + (float)(*((float *)this + 147) * 0.5);
          v19 = *(float *)&v17 - v18;
          if ( (float)(*(float *)&v17 - v18) < 0.0 )
            v19 = -(float)(*(float *)&v17 - v18);
          if ( v19 <= 0.1 )
          {
            *(float *)&v17 = *((float *)this + 52) + (float)(*((float *)this + 147) * 0.5);
          }
          else
          {
            v20 = (float)(a2 * 8.0) / 0.016667;
            if ( v20 >= 1.0 )
              *(float *)&v17 = (float)(v18 + (float)(*(float *)&v17 * (float)(v20 + -1.0))) / v20;
          }
          DisplayObject::setY(v16, *(float *)&v17);
          v26 = (DisplayObject *)*((_QWORD *)this + 55);
          v27 = DisplayObject::getY(v26);
          v28 = *((float *)this + 117) + (float)(*((float *)this + 147) * 0.25);
          v29 = *(float *)&v27 - v28;
          if ( (float)(*(float *)&v27 - v28) < 0.0 )
            v29 = -(float)(*(float *)&v27 - v28);
          if ( v29 <= 0.1 )
          {
            *(float *)&v27 = *((float *)this + 117) + (float)(*((float *)this + 147) * 0.25);
          }
          else
          {
            v30 = (float)(a2 * 8.0) / 0.016667;
            if ( v30 >= 1.0 )
              *(float *)&v27 = (float)(v28 + (float)(*(float *)&v27 * (float)(v30 + -1.0))) / v30;
          }
          DisplayObject::setY(v26, *(float *)&v27);
          v31 = (DisplayObject *)*((_QWORD *)this + 57);
          v32 = DisplayObject::getY(v31);
          v33 = *((float *)this + 118) + (float)(*((float *)this + 147) * 0.25);
          v34 = *(float *)&v32 - v33;
          if ( (float)(*(float *)&v32 - v33) < 0.0 )
            v34 = -(float)(*(float *)&v32 - v33);
          if ( v34 <= 0.1 )
          {
            *(float *)&v32 = *((float *)this + 118) + (float)(*((float *)this + 147) * 0.25);
          }
          else
          {
            v35 = (float)(a2 * 8.0) / 0.016667;
            if ( v35 >= 1.0 )
              *(float *)&v32 = (float)(v33 + (float)(*(float *)&v32 * (float)(v35 + -1.0))) / v35;
          }
          DisplayObject::setY(v31, *(float *)&v32);
          v36 = *((_QWORD *)this + 27);
          v37 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v36 + 80LL);
          Alpha = DisplayObject::getAlpha(v36);
          v37(v36, Alpha - (float)(a2 * 4.0));
          v39 = *((_QWORD *)this + 29);
          v40 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v39 + 80LL);
          v41 = DisplayObject::getAlpha(v39);
          v40(v39, v41 - (float)(a2 * 4.0));
          v42 = *((_QWORD *)this + 30);
          v43 = *(__int64 (__fastcall **)(__int64, float))(*(_QWORD *)v42 + 80LL);
          v44 = DisplayObject::getAlpha(v42);
          v45 = (AllianceStreamMessage *)v43(v42, v44 - (float)(a2 * 4.0));
          v46 = GameMain::getInstance(v45);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 184LL))(v46);
          if ( Assert::g_false )
          {
            while ( 1 )
              ;
          }
          v48 = (int)(float)(v47 * 1000.0) / 650;
          v49 = v48 + 3;
          if ( v48 >= 0 )
            v49 = (int)(float)(v47 * 1000.0) / 650;
          v50 = v48 - (v49 & 0xFFFFFFFC);
          switch ( v50 )
          {
            case 3u:
              v51 = "...";
              break;
            case 2u:
              v51 = "..";
              break;
            case 1u:
              v51 = ".";
              break;
            default:
              v51 = "";
              break;
          }
          String::String(&v119, v51);
          String = (String *)StringTable::getString((#1308 *)"TID_MATCHMAKING", v71);
          operator+((__int64 *)&v118.m_length, String, &v119);
          TextField::setText(*((#1271 **)this + 63), &v118);
          v73 = *((float *)this + 140) - a2;
          *((float *)this + 140) = v73;
          *((float *)this + 144) = *((float *)this + 144) + a2;
          if ( v73 <= 0.0 )
            BattlePage::refreshMatchmakingTip((__int64)this);
          v74 = *((float *)this + 143) - a2;
          if ( v74 < 0.0 )
            v74 = 0.0;
          *((float *)this + 143) = v74;
          BattlePage::updateMatchmakingText(this);
          String::~String();
          String::~String();
        }
        else
        {
          v21 = (DisplayObject *)*((_QWORD *)this + 25);
          v22 = DisplayObject::getY(v21);
          v23 = *((float *)this + 52);
          v24 = *(float *)&v22 - v23;
          if ( (float)(*(float *)&v22 - v23) < 0.0 )
            v24 = -(float)(*(float *)&v22 - v23);
          if ( v24 <= 0.1 )
          {
            LODWORD(v22) = *((_DWORD *)this + 52);
          }
          else
          {
            v25 = (float)(a2 * 8.0) / 0.016667;
            if ( v25 >= 1.0 )
              *(float *)&v22 = (float)(v23 + (float)(*(float *)&v22 * (float)(v25 + -1.0))) / v25;
          }
          DisplayObject::setY(v21, *(float *)&v22);
          v52 = (DisplayObject *)*((_QWORD *)this + 55);
          v53 = DisplayObject::getY(v52);
          v54 = *((float *)this + 117);
          v55 = *(float *)&v53 - v54;
          if ( (float)(*(float *)&v53 - v54) < 0.0 )
            v55 = -(float)(*(float *)&v53 - v54);
          if ( v55 <= 0.1 )
          {
            LODWORD(v53) = *((_DWORD *)this + 117);
          }
          else
          {
            v56 = (float)(a2 * 8.0) / 0.016667;
            if ( v56 >= 1.0 )
              *(float *)&v53 = (float)(v54 + (float)(*(float *)&v53 * (float)(v56 + -1.0))) / v56;
          }
          DisplayObject::setY(v52, *(float *)&v53);
          v57 = (DisplayObject *)*((_QWORD *)this + 57);
          v58 = DisplayObject::getY(v57);
          v59 = *((float *)this + 118);
          v60 = *(float *)&v58 - v59;
          if ( (float)(*(float *)&v58 - v59) < 0.0 )
            v60 = -(float)(*(float *)&v58 - v59);
          if ( v60 <= 0.1 )
          {
            LODWORD(v58) = *((_DWORD *)this + 118);
          }
          else
          {
            v61 = (float)(a2 * 8.0) / 0.016667;
            if ( v61 >= 1.0 )
              *(float *)&v58 = (float)(v59 + (float)(*(float *)&v58 * (float)(v61 + -1.0))) / v61;
          }
          DisplayObject::setY(v57, *(float *)&v58);
          v62 = *((_QWORD *)this + 27);
          v63 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v62 + 80LL);
          v64 = DisplayObject::getAlpha(v62);
          v63(v62, (float)(a2 * 4.0) + v64);
          v65 = *((_QWORD *)this + 29);
          v66 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v65 + 80LL);
          v67 = DisplayObject::getAlpha(v65);
          v66(v65, (float)(a2 * 4.0) + v67);
          v68 = *((_QWORD *)this + 30);
          v69 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v68 + 80LL);
          v70 = DisplayObject::getAlpha(v68);
          v69(v68, (float)(a2 * 4.0) + v70);
        }
        if ( *((_QWORD *)this + 65) )
        {
          Arena = LogicClientAvatar::getArena(PlayerAvatar);
          MatchCost = (LogicKickAllianceMemberCommand *)LogicArenaData::getMatchCost(Arena);
          GoldData = (const #1355 *)LogicDataTables::getGoldData(MatchCost);
          hasEnoughResources = LogicClientAvatar::hasEnoughResources(PlayerAvatar, GoldData, (__int64)MatchCost, 0, 0, 0);
          v80 = hasEnoughResources;
          if ( __PAIR64__(hasEnoughResources, (unsigned int)MatchCost) != __PAIR64__(
                                                                            *((unsigned __int8 *)this + 556),
                                                                            *((_DWORD *)this + 138)) )
          {
            v81 = *((_QWORD *)this + 65);
            if ( (int)MatchCost < 1 )
            {
              *(_BYTE *)(v81 + 8) = 0;
              v85 = *((_QWORD *)this + 66);
              if ( v85 )
                *(_BYTE *)(v85 + 8) = 0;
            }
            else
            {
              MovieClipHelper::setGoldPriceText((#1395 *)v81, MatchCost, -1, 0, v79);
              v83 = (MovieClipHelper *)*((_QWORD *)this + 65);
              *((_BYTE *)v83 + 8) = 1;
              v84 = (TextField *)*((_QWORD *)this + 66);
              if ( v84 )
              {
                MovieClipHelper::moveIconNextToText(v83, v84, 0, 6.0, v82);
                *(_BYTE *)(*((_QWORD *)this + 66) + 8LL) = 1;
              }
            }
            *((_DWORD *)this + 138) = (_DWORD)MatchCost;
            *((_BYTE *)this + 556) = v80;
          }
        }
        BattlePage::refreshArena(this);
        v86 = (#1319 *)*((_QWORD *)this + 46);
        if ( v86 )
          MultiWinGUI::update(v86, a2);
        v87 = GameMode::getInstance();
        v88 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(v87 + 112));
        v89 = LogicClientAvatar::getArena(v88);
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        v92 = v89 != LogicGlobals::getStartingArena(Globals);
        *(_BYTE *)(*((_QWORD *)this + 38) + 8LL) = v92;
        *(_BYTE *)(*((_QWORD *)this + 39) + 8LL) = v92;
        v93 = *((_QWORD *)this + 40);
        if ( v93 )
          *(_BYTE *)(v93 + 8) = v92;
        isAchievementAvailableForClaim = (String *)AchievementsPopup::isAchievementAvailableForClaim(PlayerAvatar, v91);
        *(_BYTE *)(MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 38) + 96LL), "notification") + 8) = (int)isAchievementAvailableForClaim > 0;
        MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 38) + 96LL), "notification");
        v96 = (MovieClip *)MovieClip::getMovieClipByName(MovieClipByName, "num");
        String::valueOf(&v117, isAchievementAvailableForClaim, v97);
        MovieClip::setText(v96, "txt", &v117);
        String::~String();
        BattlePage::updateDailyChest(this, a2);
        updated = (#1311 *)BattlePage::updateChests(this, a2);
        v99 = *((float *)this + 116);
        if ( v99 < 1.5 )
        {
          v100 = v99 + a2;
          *((float *)this + 116) = v100;
          if ( v100 < 0.08 )
          {
            v101 = (float)((float)((float)(rand() % 1000) * 200.0) / 1000.0) + -100.0;
            v102 = (LogicPageOpenedCommand *)rand();
            v103 = (float)((float)((float)((int)v102 % 1000) * 50.0) / 1000.0) + -25.0;
            v104 = HomeScreen::getInstance(v102);
            String::String(&v116, "openChest_get_common");
            HomeScreen::addEffectAt(v104, (LogicKickAllianceMemberCommand *)&v116, v101, v103);
            String::~String();
            v100 = *((float *)this + 116);
          }
          v105 = (float)(v100 + v100) / 1.5;
          if ( v105 >= 0.0 )
          {
            if ( v105 <= 1.0 )
              v106 = v105 * 3.1416;
            else
              v106 = 3.1416;
          }
          else
          {
            v106 = 0.0;
          }
          v107 = sinf(v106);
          updated = (#1311 *)ColorTransform::setAddColor(
                               (ColorTransform *)(*((_QWORD *)this + 56) + 9LL),
                               v107 * 0.5,
                               v107 * 0.5,
                               v107 * 0.5);
        }
        if ( *((_QWORD *)this + 40) )
        {
          NewMessageCount = NewItemIndicators::getNewMessageCount(updated);
          if ( NewsManager::sm_pInstance )
            NewMessageCount = (unsigned int)NewsManager::getUnseenNewsCount((#1306 *)NewsManager::sm_pInstance)
                            + (unsigned int)NewMessageCount;
          GameMode::getInstance();
          v109 = (LogicDataTables *)GameMode::getPlayerAvatar();
          if ( !LogicClientAvatar::isTrainingCompleted(v109) && (int)NewMessageCount >= 1 && NewsManager::sm_pInstance != 0 )
          {
            v111 = NewsManager::setNewsSeen((__int64 *)NewsManager::sm_pInstance);
            EventScreen::refreshLastSeenInboxItems((LogicSellChestCommand *)v111);
          }
          *(_BYTE *)(MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 40) + 96LL), "notification") + 8) = (int)NewMessageCount > 0;
          v112 = (#1257 *)MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 40) + 96LL), "notification");
          v113 = (MovieClip *)MovieClip::getMovieClipByName(v112, "num");
          String::valueOf(&v115, (String *)NewMessageCount, v114);
          MovieClip::setText(v113, "txt", &v115);
          String::~String();
        }
      }
    }

    void __fastcall BattlePage::updateMatchmakingText(LogicAreaEffectObject *this)
    {
      int v2; // w20
      float v3; // s8
      const char *v4; // x1
      float v5; // s0
      void *String; // x21
      String v8; // [xsp+0h] [xbp-90h] BYREF
      String v9; // [xsp+18h] [xbp-78h] BYREF
      String v10; // [xsp+30h] [xbp-60h] BYREF
      String v11; // [xsp+48h] [xbp-48h] BYREF
    
      v2 = (int)*((float *)this + 143);
      if ( v2 != *((_DWORD *)this + 145) )
      {
        *((_DWORD *)this + 145) = v2;
        if ( !*((_BYTE *)this + 584) )
        {
          String::String(&v11, "");
          v3 = *((float *)this + 142);
          v5 = (float)*(int *)(LogicDataTables::getClientGlobals() + 112);
          if ( v2 >= 1 && v3 >= v5 )
          {
            String = StringTable::getString((#1308 *)"TID_MATCHMAKING_TIME", v4);
            String::String(&v9, "<TIME>");
            TimeUtil::getTimeString(v2, 1, &v8);
            String::replace(&v10, String, &v9, &v8);
            String::operator+=(&v11, &v10);
            String::~String();
            String::~String();
            String::~String();
          }
          TextField::setText(*((#1271 **)this + 64), &v11);
          String::~String();
        }
      }
    }

    void __fastcall BattlePage::updateDailyChest(#1257 **this, float a2)
    {
      UnlockAccountPopup *v4; // x20
      CoOpenStreamEntry *Home; // x0
      int AvailableFreeChectCount; // w21
      tween::Bounce *PlayerAvatar; // x0
      __int64 Arena; // x21
      HomeScreen *Globals; // x0
      CoOpenStreamEntry *v10; // x0
      int isFreeChestAvailable; // w0
      __int64 v12; // x20
      void (__fastcall *v13)(__int64, float); // x21
      float Alpha; // s0
      __int64 v15; // x21
      void (__fastcall *v16)(__int64, float); // x23
      float v17; // s0
      __int64 v18; // x0
      int SecondsToNextFreeChest; // w0
      int v20; // w20
      #1271 *v21; // x21
      String v22; // [xsp+8h] [xbp-58h] BYREF
    
      if ( *(this + 31) )
      {
        v4 = *(UnlockAccountPopup **)(GameMode::getInstance() + 112);
        Home = (CoOpenStreamEntry *)LogicGameMode::getHome(v4);
        AvailableFreeChectCount = LogicClientHome::getAvailableFreeChectCount(Home);
        updateFreeChestIcon(*(this + 32), AvailableFreeChectCount > 0);
        updateFreeChestIcon(*(this + 33), AvailableFreeChectCount > 1);
        PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar((__int64)v4);
        Arena = LogicClientAvatar::getArena(PlayerAvatar);
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        if ( Arena == LogicGlobals::getStartingArena(Globals) )
        {
          *((_BYTE *)*(this + 31) + 8) = 0;
        }
        else
        {
          v10 = (CoOpenStreamEntry *)LogicGameMode::getHome(v4);
          isFreeChestAvailable = LogicClientHome::isFreeChestAvailable(v10);
          *((_BYTE *)*(this + 31) + 8) = 1;
          if ( isFreeChestAvailable )
          {
            (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 35) + 80LL))(
              *(this + 35),
              COERCE_LONG_DOUBLE((unsigned __int128)0));
            *((_BYTE *)*(this + 35) + 8) = 0;
            v12 = (__int64)*(this + 34);
            v13 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v12 + 80LL);
            Alpha = DisplayObject::getAlpha(v12);
            v13(v12, Alpha + a2);
            *((_BYTE *)*(this + 34) + 8) = 1;
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 34) + 80LL))(
              *(this + 34),
              COERCE_LONG_DOUBLE((unsigned __int128)0));
            *((_BYTE *)*(this + 34) + 8) = 0;
            v15 = (__int64)*(this + 35);
            v16 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v15 + 80LL);
            v17 = DisplayObject::getAlpha(v15);
            v16(v15, v17 + a2);
            *((_BYTE *)*(this + 35) + 8) = 1;
            v18 = LogicGameMode::getHome(v4);
            SecondsToNextFreeChest = LogicClientHome::getSecondsToNextFreeChest(v18);
            v20 = SecondsToNextFreeChest;
            if ( SecondsToNextFreeChest != *((_DWORD *)this + 74) )
            {
              v21 = *(this + 36);
              TimeUtil::getTimeString(SecondsToNextFreeChest, 1, &v22);
              TextField::setText(v21, &v22);
              String::~String();
              *((_DWORD *)this + 74) = v20;
            }
          }
        }
      }
    }

    void __fastcall BattlePage::updateChests(LogicAreaEffectObject *this, float a2)
    {
      int v4; // w22
      __int64 v5; // x20
      void (__fastcall *v6)(__int64, long double); // x21
      long double v7; // q0
      float v8; // s1
      __int64 v9; // x0
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x20
      __int64 v12; // x0
      float v13; // s0
      int FrameIndex; // w20
      int v15; // w20
      float v16; // s1
      float v17; // s0
      float v18; // s1
      const char *v19; // x1
      const char *v20; // x2
      const LogicSpawnPointData *Chest; // x20
      const String *v22; // x1
      __int64 v23; // x8
      int v24; // w9
      _BOOL8 v25; // x0
      float v26; // s0
      __int64 v27; // x9
      __int64 v28; // x8
      __int64 v29; // x21
      float v30; // s9
      __int64 v31; // x8
      __int64 v32; // x8
      __int64 v33; // x20
      __int64 v34; // x8
      String v35; // [xsp+8h] [xbp-48h] BYREF
    
      v4 = *((unsigned __int8 *)this + 564);
      v5 = *((_QWORD *)this + 28);
      v6 = *(void (__fastcall **)(__int64, long double))(*(_QWORD *)v5 + 80LL);
      *(float *)&v7 = DisplayObject::getAlpha(v5);
      v8 = a2 * 4.0;
      if ( v4 )
        *(float *)&v7 = *(float *)&v7 - v8;
      else
        *(float *)&v7 = v8 + *(float *)&v7;
      v6(v5, v7);
      v9 = *((_QWORD *)this + 28);
      if ( *(_BYTE *)(v9 + 8) && DisplayObject::getAlpha(v9) > 0.0 )
      {
        Instance = GameMode::getInstance();
        Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
        v12 = *((_QWORD *)this + 49);
        if ( v12 && *((_DWORD *)this + 100) != -1 )
        {
          if ( (unsigned int)MovieClip::isPlaying(v12) )
          {
            v13 = *((float *)this + 105) + a2;
            *((float *)this + 105) = v13;
            if ( v13 > 0.0 )
            {
              FrameIndex = MovieClip::getFrameIndex(*((_QWORD *)this + 49), "startMove");
              v15 = MovieClip::getTotalFrames(*((#1257 **)this + 49)) - FrameIndex;
              v16 = *((float *)this + 105) / (float)((float)v15 * MovieClip::getMSPerFrame(*((_QWORD *)this + 49)));
              if ( v16 >= 0.0 )
              {
                v26 = 1.0;
                if ( v16 <= 1.0 )
                  v26 = v16;
                v17 = v26 * v26;
                if ( v16 <= 1.0 )
                  v18 = v16 + v16;
                else
                  v18 = 2.0;
              }
              else
              {
                v17 = 0.0;
                v18 = 0.0;
              }
              v30 = v17 * (float)(3.0 - v18);
              DisplayObject::setX(
                *((#1249 **)this + 49),
                *((float *)this + 101) + (float)(v30 * (float)(*((float *)this + 103) - *((float *)this + 101))));
              DisplayObject::setY(
                *((DisplayObject **)this + 49),
                *((float *)this + 102) + (float)(v30 * (float)(*((float *)this + 104) - *((float *)this + 102))));
            }
          }
          else
          {
            Chest = (const LogicSpawnPointData *)LogicClientHome::getChest(Home, *((_DWORD *)this + 100));
            if ( !Chest )
            {
              String::format(
                (String *)"logic chest is null after receive chest animation, index:%d",
                v19,
                *((unsigned int *)this + 100));
              Debugger::warning((__siginfo *)&v35, v22);
              String::~String();
            }
            v23 = *((_QWORD *)this + 42);
            if ( v23 )
            {
              v24 = *((_DWORD *)this + 100);
              v25 = (v24 & 0x80000000) == 0 && (unsigned __int64)(v24 < *(_DWORD *)(v23 + 12));
              Debugger::doAssert((Debugger *)v25, (bool)"", v20);
              v27 = *((int *)this + 100);
              v28 = **((_QWORD **)this + 42);
              v29 = *(_QWORD *)(v28 + 8 * v27);
              if ( v29 )
              {
                ChestItem::setLogicChest(*(#1316 **)(v28 + 8 * v27), Chest);
                ChestItem::showLandEffect(v29);
              }
            }
            *((_DWORD *)this + 100) = -1;
            *(_BYTE *)(*((_QWORD *)this + 49) + 8LL) = 0;
            BattlePage::animateNewChestIfNeeded(this);
            BattlePage::updateTapToOpenAnimation(this);
          }
        }
        v31 = *((_QWORD *)this + 42);
        if ( v31 )
        {
          v32 = *(int *)(v31 + 12);
          if ( (int)v32 >= 1 )
          {
            v33 = v32 - 1;
            do
            {
              if ( (_DWORD)v33 != *((_DWORD *)this + 100) )
                ChestItem::update(*(#1316 **)(**((_QWORD **)this + 42) + 8 * v33), a2);
              v34 = v33-- + 1;
            }
            while ( v34 > 1 );
          }
        }
      }
    }

    bool __fastcall BattlePage::isAnimatingArenaChange(LogicAreaEffectObject *this)
    {
      return *((float *)this + 116) < 1.5;
    }

    void __fastcall BattlePage::updateTapToOpenAnimation(LogicAreaEffectObject *this)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      int FreeWorkers; // w0
      int v5; // w20
      __int64 v6; // x8
      __int64 v7; // x21
      __int64 v8; // x21
      __int64 v9; // x8
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      FreeWorkers = LogicClientHome::getFreeWorkers(Home);
      v5 = FreeWorkers;
      v6 = *((_QWORD *)this + 42);
      v7 = *(int *)(v6 + 12);
      if ( (int)v7 >= 1 )
      {
        ChestItem::showTapNotification(*(_QWORD *)(*(_QWORD *)v6 + 8 * v7 - 8), FreeWorkers > 0);
        if ( (int)v7 >= 2 )
        {
          v8 = v7 - 2;
          do
          {
            ChestItem::showTapNotification(*(_QWORD *)(**((_QWORD **)this + 42) + 8 * v8), v5 > 0);
            v9 = v8-- + 1;
          }
          while ( v9 > 1 );
        }
      }
    }

    float __fastcall BattlePage::setMatchmakingEstimatedDuration(LogicAreaEffectObject *this, int a2)
    {
      *((_DWORD *)this + 145) = -1;
      *((float *)this + 143) = (float)a2;
      *((float *)this + 142) = (float)a2;
      return (float)a2;
    }

    int *__fastcall BattlePage::animateNewChestIfNeeded(LogicAreaEffectObject *this)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x22
      int *result; // x0
      int v5; // w23
      __int64 v6; // x21
      int *v7; // x19
      Stage *Source; // x0
      long double MidY; // q0
      String *v10; // x0
      int v11; // w1
      const String *v12; // x1
      DisplayObject *v13; // x0
      __int64 TreasureChestData; // x0
      const char *GainedExportName; // x0
      const String *v16; // x2
      __int64 MovieClip; // x0
      int FrameIndex; // w22
      float v19; // s8
      float v20; // s9
      #1257 *v21; // x0
      GameUtils *MovieClipByName; // x0
      DisplayObject *v23; // x2
      int v24; // s0
      int v25; // s1
      const AreaEffectObject *v26; // x2
      AreaEffectObject *SoundByName; // x20
      LogicClearChestSourceCommand *v28; // x20
      __int64 v29; // x0
      long double v30; // q0
      String v31; // [xsp+8h] [xbp-A8h] BYREF
      String v32; // [xsp+20h] [xbp-90h] BYREF
      __siginfo v33; // [xsp+38h] [xbp-78h] BYREF
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      result = (int *)LogicClientHome::getMaxChestCount(Home);
      v5 = (int)result;
      if ( (int)result >= 1 )
      {
        v6 = 0;
        while ( 1 )
        {
          result = (int *)LogicClientHome::getChest(Home, v6);
          v7 = result;
          if ( result )
          {
            result = (int *)LogicChest::isNew(result);
            if ( (_DWORD)result )
              break;
          }
          v6 = (unsigned int)(v6 + 1);
          if ( (int)v6 >= v5 )
            return result;
        }
        Source = (Stage *)LogicChest::getSource(v7);
        switch ( (int)Source )
        {
          case 1:
          case 4:
          case 6:
            if ( *((_QWORD *)this + 25) )
            {
              Rect::Rect((Rect *)&v33.si_band);
              DisplayObject::getBounds(*((_QWORD *)this + 25), this, &v33.si_band);
              *((float *)this + 101) = Rect::getMidX(&v33.si_band);
              MidY = Rect::getMidY(&v33.si_band);
              *((_DWORD *)this + 102) = LODWORD(MidY);
              Rect::~Rect((Rect *)&v33.si_band);
            }
            break;
          case 2:
            if ( *((_QWORD *)this + 31) )
            {
              Rect::Rect((Rect *)&v33.si_addr);
              DisplayObject::getBounds(*((_QWORD *)this + 31), this, &v33.si_addr);
              *((float *)this + 101) = Rect::getMidX(&v33.si_addr);
              v30 = Rect::getMidY(&v33.si_addr);
              *((_DWORD *)this + 102) = LODWORD(v30);
              Rect::~Rect((Rect *)&v33.si_addr);
            }
            break;
          case 3:
            *((_DWORD *)this + 101) = 0;
            *((float *)this + 102) = (float)*(int *)(Stage::getInstance(Source) + 432LL) * 0.25;
            break;
          default:
            v10 = (String *)LogicChest::getSource(v7);
            String::valueOf(&v32, v10, v11);
            operator+(&v33, "new chest with unkown source:", &v32);
            Debugger::warning(&v33, v12);
            String::~String();
            String::~String();
            break;
        }
        v13 = (DisplayObject *)*((_QWORD *)this + 49);
        if ( !v13 )
        {
          TreasureChestData = LogicChest::getTreasureChestData((LogicSpawnPointData *)v7);
          GainedExportName = (const char *)LogicTreasureChestData::getGainedExportName(TreasureChestData);
          MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", GainedExportName, v16);
          *((_QWORD *)this + 49) = MovieClip;
          (*(void (__fastcall **)(LogicAreaEffectObject *, __int64))(*(_QWORD *)this + 160LL))(this, MovieClip);
          v13 = (DisplayObject *)*((_QWORD *)this + 49);
        }
        *((_BYTE *)v13 + 8) = 1;
        DisplayObject::setXY(v13, *((float *)this + 101), *((float *)this + 102));
        MovieClip::playOnce(*((MovieClip **)this + 49));
        *((_DWORD *)this + 100) = v6;
        FrameIndex = MovieClip::getFrameIndex(*((_QWORD *)this + 49), "startMove");
        *((float *)this + 105) = (float)~FrameIndex * MovieClip::getMSPerFrame(*((_QWORD *)this + 49));
        LODWORD(v19) = COERCE_UNSIGNED_INT128(BattlePage::getChestX(this, v6));
        LODWORD(v20) = COERCE_UNSIGNED_INT128(BattlePage::getChestY(this, v6));
        v21 = (#1257 *)GUIContainer::getMovieClip(this);
        MovieClipByName = (GameUtils *)MovieClip::getMovieClipByName(v21, "bottom_center");
        GameUtils::localToLocal(MovieClipByName, this, v23, v19, v20);
        *((_DWORD *)this + 103) = v24;
        *((_DWORD *)this + 104) = v25;
        String::String(&v31, "sound_chest_fly");
        SoundByName = (AreaEffectObject *)LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v31, 0, v26);
        String::~String();
        SoundManager::playSound((NoAlliance *)SoundManager::sm_pInstance, SoundByName, 0xFFFFFFFFLL, 1.0, 0.0);
        v28 = (LogicClearChestSourceCommand *)operator new(32);
        LogicClearChestSourceCommand::LogicClearChestSourceCommand(v28, v7[4]);
        v29 = GameMode::getInstance();
        return (int *)GameMode::addCommand(v29, v28, 1);
      }
      return result;
    }

    long double __fastcall BattlePage::getChestX(__int64 a1, int a2, const char *a3)
    {
      Debugger *v5; // x0
    
      if ( a2 < 0 )
        v5 = 0;
      else
        v5 = (Debugger *)(*(_DWORD *)(*(_QWORD *)(a1 + 336) + 12LL) > a2);
      Debugger::doAssert(v5, (bool)"", a3);
      return DisplayObject::getX(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 336) + 8LL * a2) + 104LL));
    }

    long double __fastcall BattlePage::getChestY(__int64 a1, int a2, const char *a3)
    {
      Debugger *v5; // x0
    
      if ( a2 < 0 )
        v5 = 0;
      else
        v5 = (Debugger *)(*(_DWORD *)(*(_QWORD *)(a1 + 336) + 12LL) > a2);
      Debugger::doAssert(v5, (bool)"", a3);
      return DisplayObject::getY(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 336) + 8LL * a2) + 104LL));
    }

    __int64 __fastcall BattlePage::chestClaimed(__int64 result, LogicSpawnPointData *a2)
    {
      __int64 v3; // x20
      __int64 v4; // x8
      __int64 v5; // x21
    
      v3 = result;
      v4 = *(_QWORD *)(result + 336);
      if ( *(int *)(v4 + 12) > 0 )
      {
        v5 = 0;
        while ( 1 )
        {
          result = ChestItem::getLogicChest(*(#1316 **)(*(_QWORD *)v4 + 8 * v5));
          if ( (LogicSpawnPointData *)result == a2 )
            break;
          ++v5;
          v4 = *(_QWORD *)(v3 + 336);
          if ( v5 >= *(int *)(v4 + 12) )
            return result;
        }
        return ChestItem::chestClaimed(a2);
      }
      return result;
    }

    __int64 __fastcall BattlePage::getStarsDisplayObject(LogicAreaEffectObject *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 46);
      if ( v1 )
        return *(_QWORD *)(v1 + 24);
      else
        return 0;
    }

    __int64 __fastcall BattlePage::getPlayButton(LogicAreaEffectObject *this)
    {
      return *((_QWORD *)this + 25);
    }

    void __fastcall BattlePage::startTrainingCampMatch(LogicAreaEffectObject *this)
    {
      tween::Bounce *PlayerAvatar; // x21
      __int64 Table; // x20
      __int64 Arena; // x22
      HomeScreen *Globals; // x0
      __int64 v6; // x22
      const char *v7; // x1
      const Character::AnimFrameIndices *v8; // x23
      int v9; // w25
      Character::AnimFrameIndices *v10; // x24
      int Trophies; // w0
      int v12; // w1
      int v13; // w0
      LogicMath *NpcWinCount; // x21
      int v15; // w0
      int v16; // w2
      __int64 v17; // x0
    
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      Table = LogicDataTables::getTable(18);
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      if ( Arena == LogicGlobals::getStartingArena(Globals) )
      {
        NpcWinCount = (LogicMath *)LogicClientAvatar::getNpcWinCount((__int64)PlayerAvatar);
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
        v17 = LogicMath::min(NpcWinCount, v15 - 1, v16);
        v8 = (const Character::AnimFrameIndices *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(
                                                    Table,
                                                    v17);
      }
      else
      {
        v6 = *(unsigned int *)(LogicDataTables::getGlobals() + 404);
        if ( (int)v6 >= (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) )
          goto LABEL_11;
        v8 = 0;
        v9 = 0;
        do
        {
          v10 = (Character::AnimFrameIndices *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(
                                                 Table,
                                                 v6);
          Trophies = LogicNpcData::getTrophies(v10);
          v13 = LogicMath::abs((#1237 *)(unsigned int)(Trophies - *((_DWORD *)PlayerAvatar + 16)), v12);
          if ( v8 == 0 || v13 < v9 )
          {
            v9 = v13;
            v8 = v10;
          }
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (int)v6 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      }
      if ( v8 )
      {
        BattlePage::startNPCLevel(this, v8);
        return;
      }
    LABEL_11:
      Debugger::warning((__siginfo *)"startTrainingCampMatch failed - No Npc found!", v7);
    }

    bool __fastcall BattlePage::isAnimatingNewChest(LogicAreaEffectObject *this)
    {
      return *((_DWORD *)this + 100) != -1;
    }

}; // end class BattlePage
