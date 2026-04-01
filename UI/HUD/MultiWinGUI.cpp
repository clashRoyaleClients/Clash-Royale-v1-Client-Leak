class MultiWinGUI
{
public:

    void __fastcall MultiWinGUI::update(#1319 *this, float a2)
    {
      tween::Bounce *PlayerAvatar; // x23
      __int64 Instance; // x0
      __int64 Home; // x22
      __int64 CrownChestMaxCrownCount; // x20
      int v8; // w24
      __int64 VisualMultiWinCount; // x0
      __int64 v10; // x21
      int v11; // w8
      const char *v12; // x1
      __int64 Arena; // x23
      HomeScreen *Globals; // x0
      const char *v15; // x1
      double v16; // d0
      MovieClip *v17; // x0
      int v18; // w8
      #1271 *v19; // x19
      int CrownChestCooldownSeconds; // w0
      #1257 *v21; // x0
      int v22; // w8
      int v23; // w9
      int v24; // w1
      #1271 *v25; // x19
      String v26; // [xsp+18h] [xbp-88h] BYREF
      String v27; // [xsp+30h] [xbp-70h] BYREF
      String v28; // [xsp+48h] [xbp-58h] BYREF
    
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      CrownChestMaxCrownCount = LogicClientHome::getCrownChestMaxCrownCount((CoOpenStreamEntry *)Home);
      v8 = CrownChestMaxCrownCount;
      if ( (LogicClientHome::isCrownChestAvailable((CoOpenStreamEntry *)Home) & 1) == 0 )
        v8 = *(_DWORD *)(Home + 180);
      VisualMultiWinCount = MultiWinGUI::getVisualMultiWinCount(this);
      v10 = VisualMultiWinCount;
      v11 = *((_DWORD *)this + 26);
      if ( (_DWORD)VisualMultiWinCount != v11 )
      {
        if ( (int)VisualMultiWinCount > v11 )
          Highlighter::start((#1319 *)((char *)this + 112), 0.2, 0.3);
        *((_DWORD *)this + 26) = v10;
      }
      Highlighter::update((#1319 *)((char *)this + 112), a2);
      *(_BYTE *)(*((_QWORD *)this + 2) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 3) + 8LL) = 0;
      if ( *((_QWORD *)this + 12) )
      {
        String::format((String *)"%d/%d", v12, *(unsigned int *)(Home + 180), CrownChestMaxCrownCount);
        MovieClip::setText(*((MovieClip **)this + 12), "message", &v28);
        String::~String();
      }
      *(_BYTE *)(*((_QWORD *)this + 1) + 8LL) = 1;
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      if ( Arena == LogicGlobals::getStartingArena(Globals) )
      {
        *(_BYTE *)(*((_QWORD *)this + 1) + 8LL) = 0;
        return;
      }
      if ( (_DWORD)v10 == v8 && (unsigned int)LogicClientHome::isCrownChestAvailable((CoOpenStreamEntry *)Home) )
      {
        v17 = (MovieClip *)*((_QWORD *)this + 4);
        if ( !*((_BYTE *)v17 + 8) )
        {
          MovieClip::gotoAndPlay(v17, "chest_start", "chest_end");
          v17 = (MovieClip *)*((_QWORD *)this + 4);
        }
        *((_BYTE *)v17 + 8) = 1;
        return;
      }
      v18 = *(unsigned __int8 *)(Home + 192);
      *(_BYTE *)(*((_QWORD *)this + 4) + 8LL) = 0;
      if ( v18 )
      {
        *(_BYTE *)(*((_QWORD *)this + 2) + 8LL) = 1;
        v19 = (#1271 *)*((_QWORD *)this + 8);
        CrownChestCooldownSeconds = LogicClientHome::getCrownChestCooldownSeconds(Home);
        TimeUtil::getTimeString(CrownChestCooldownSeconds, 1, &v27);
        TextField::setText(v19, &v27);
    LABEL_27:
        String::~String();
        return;
      }
      *(_BYTE *)(*((_QWORD *)this + 3) + 8LL) = 1;
      v21 = (#1257 *)*((_QWORD *)this + 6);
      if ( v21 )
      {
        v22 = MovieClip::getTotalFrames(v21) - 1;
        v23 = (int)(float)((float)((float)((float)(int)v10 * (float)v22) / (float)(int)CrownChestMaxCrownCount) + 0.5);
        if ( v23 < 0 )
          v23 = 0;
        if ( v23 <= v22 )
          v24 = v23;
        else
          v24 = v22;
        *(_QWORD *)&v16 = MovieClip::gotoAndStopFrameIndex((MovieClip *)*((_QWORD *)this + 6), v24).n128_u64[0];
      }
      v25 = (#1271 *)*((_QWORD *)this + 7);
      if ( v25 )
      {
        String::format((String *)"%d/%d", v15, v16, v10, CrownChestMaxCrownCount);
        TextField::setText(v25, &v26);
        goto LABEL_27;
      }
    }

    void __fastcall MultiWinGUI::~MultiWinGUI(#1319 *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
    
      *(_QWORD *)this = &off_1004F1998;
      v2 = *((_QWORD *)this + 12);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 12) = 0;
      v3 = *((_QWORD *)this + 9);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 9) = 0;
      v4 = *((_QWORD *)this + 11);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 11) = 0;
      v5 = *((_QWORD *)this + 10);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      memset((char *)this + 8, 0, 0x64u);
      Highlighter::~Highlighter((#1319 *)((char *)this + 112));
    }

    String *__fastcall MultiWinGUI::getAnalyticsName(#1319 *this)
    {
      unsigned __int8 v1; // w8
    
      v1 = atomic_load((unsigned __int8 *)&`guard variable for'MultiWinGUI::getAnalyticsName(void)::s_name);
      if ( (v1 & 1) == 0 && __cxa_guard_acquire((__guard *)&`guard variable for'MultiWinGUI::getAnalyticsName(void)::s_name) )
      {
        String::String(&MultiWinGUI::getAnalyticsName(void)const::s_name, "MultiWinGUI");
        __cxa_atexit(
          (void (__fastcall *)(void *))String::~String,
          &MultiWinGUI::getAnalyticsName(void)const::s_name,
          (void *)&_mh_execute_header);
        __cxa_guard_release((__guard *)&`guard variable for'MultiWinGUI::getAnalyticsName(void)::s_name);
      }
      return &MultiWinGUI::getAnalyticsName(void)const::s_name;
    }

    void __fastcall MultiWinGUI::buttonClicked(#1319 *this, #1251 *a2)
    {
      unsigned int *v2; // x0
      String *v3; // x21
      Stage *v4; // x19
      float v5; // s1
      const char *v6; // x1
      void *v7; // x20
      int v8; // w1
      MessageManager **Instance; // x0
      LogicAreaEffectObject *BattlePage; // x0
      PvpMatchmakeNotificationMessage *v11; // x20
      __int64 v12; // x0
      unsigned int *Globals; // x0
      String *v14; // x21
      Stage *v15; // x19
      float v16; // s1
      const char *v17; // x1
      void *String; // x20
      int v19; // w1
      _QWORD v20[3]; // [xsp+0h] [xbp-C0h] BYREF
      String v21; // [xsp+18h] [xbp-A8h] BYREF
      String v22; // [xsp+30h] [xbp-90h] BYREF
      float v23[2]; // [xsp+48h] [xbp-78h] BYREF
      String v24; // [xsp+50h] [xbp-70h] BYREF
      String v25; // [xsp+68h] [xbp-58h] BYREF
      String v26; // [xsp+80h] [xbp-40h] BYREF
      float v27[2]; // [xsp+98h] [xbp-28h] BYREF
    
      if ( *((#1251 **)this + 9) == a2 )
      {
        Instance = (MessageManager **)HomeScreen::getInstance(this);
        BattlePage = (LogicAreaEffectObject *)HomeScreen::getBattlePage(Instance);
        if ( (BattlePage::isMatchmaking(BattlePage) & 1) == 0 )
        {
          v11 = (PvpMatchmakeNotificationMessage *)operator new(32);
          LogicCollectMultiWinChestCommand::LogicCollectMultiWinChestCommand((__int64)v11);
          v12 = GameMode::getInstance();
          GameMode::addCommand(v12, v11, 1);
        }
      }
      else
      {
        if ( *((#1251 **)this + 11) == a2 )
        {
          if ( !GUI::getInstance(this) )
            return;
          Globals = (unsigned int *)LogicDataTables::getGlobals();
          v14 = (String *)Globals[33];
          v15 = (Stage *)GUI::getInstance((BadgePopup *)Globals);
          v27[0] = GUI::getDefaultFloaterPos(v15);
          v27[1] = v16;
          String = StringTable::getString((#1308 *)"TID_STAR_CHEST_TIP", v17);
          String::String(&v25, "<NUMBER>");
          String::valueOf(&v24, v14, v19);
          String::replace(&v26, String, &v25, &v24);
          GUI::showFloaterTextAt((__int64)v15, v27, &v26, -1, 0.0);
          String::~String();
          String::~String();
          goto LABEL_10;
        }
        if ( *((#1251 **)this + 10) == a2 && GUI::getInstance(this) )
        {
          v2 = (unsigned int *)LogicDataTables::getGlobals();
          v3 = (String *)v2[34];
          v4 = (Stage *)GUI::getInstance((BadgePopup *)v2);
          v23[0] = GUI::getDefaultFloaterPos(v4);
          v23[1] = v5;
          v7 = StringTable::getString((#1308 *)"TID_STAR_CHEST_COOLDOWN", v6);
          String::String(&v21, "<NUMBER>");
          String::valueOf(v20, v3, v8);
          String::replace(&v22, v7, &v21, v20);
          GUI::showFloaterTextAt((__int64)v4, v23, &v22, -1, 0.0);
          String::~String();
          String::~String();
    LABEL_10:
          String::~String();
        }
      }
    }

    void __fastcall MultiWinGUI::MultiWinGUI(MultiWinGUI *this, #1257 *a2)
    {
      _QWORD *v4; // x22
      Highlighter *v5; // x19
      const char *v6; // x2
      __int64 MovieClipByName; // x0
      const char *v8; // x2
      const char *v9; // x2
      const char *v10; // x2
      __int64 v11; // x0
      __int64 v12; // x0
      GameButton *v13; // x22
      void (__fastcall *v14)(#1257 *, __int64, _QWORD); // x23
      __int64 v15; // x22
      int NumChildren; // w0
      GameButton *v17; // x22
      void (__fastcall *v18)(#1257 *, __int64, _QWORD); // x23
      __int64 v19; // x22
      int v20; // w0
      GameButton *v21; // x22
      void (__fastcall *v22)(#1257 *, __int64, _QWORD); // x23
      __int64 v23; // x22
      int v24; // w0
      const char *v25; // x1
      MovieClip *v26; // x21
      const String *String; // x0
    
      *(_QWORD *)this = &off_1004F1998;
      v4 = (_QWORD *)((char *)this + 8);
      v5 = (MultiWinGUI *)((char *)this + 112);
      Highlighter::Highlighter((MultiWinGUI *)((char *)this + 112));
      memset(v4, 0, 0x64u);
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", v6);
      *v4 = a2;
      *((_QWORD *)this + 2) = MovieClip::getMovieClipByName(a2, "chest_cooldown");
      *((_QWORD *)this + 3) = MovieClip::getMovieClipByName(a2, "chest_win");
      MovieClipByName = MovieClip::getMovieClipByName(a2, "chest_open");
      *((_QWORD *)this + 4) = MovieClipByName;
      Debugger::doAssert((Debugger *)(MovieClipByName != 0), (bool)"", v8);
      MovieClip::gotoAndStop(*((MovieClip **)this + 4), "chest_start");
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 2) != 0), (bool)"", v9);
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 3) != 0), (bool)"", v10);
      *((_QWORD *)this + 5) = MovieClip::getMovieClipByName(*((#1257 **)this + 3), "star_target");
      v11 = MovieClip::getMovieClipByName(*((#1257 **)this + 3), "progress_bar");
      *((_QWORD *)this + 6) = v11;
      *((_QWORD *)this + 7) = MovieClip::getTextFieldByName(v11, "text_wins");
      v12 = MovieClip::getMovieClipByName(*((#1257 **)this + 2), "txt_cooldown");
      *((_QWORD *)this + 8) = MovieClip::getTextFieldByName(v12, "text_cooldown");
      *(_BYTE *)(*((_QWORD *)this + 2) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 3) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 4) + 8LL) = 0;
      v13 = (GameButton *)operator new(264);
      GameButton::GameButton(v13);
      *((_QWORD *)this + 9) = v13;
      (*(void (__fastcall **)(GameButton *, _QWORD, __int64))(*(_QWORD *)v13 + 280LL))(v13, *((_QWORD *)this + 4), 1);
      CustomButton::setButtonListener(*((_QWORD *)this + 9), this);
      v14 = *(void (__fastcall **)(#1257 *, __int64, _QWORD))(*(_QWORD *)a2 + 168LL);
      v15 = *((_QWORD *)this + 9);
      NumChildren = Sprite::getNumChildren(a2);
      v14(a2, v15, (unsigned int)(NumChildren - 1));
      v17 = (GameButton *)operator new(264);
      GameButton::GameButton(v17);
      *((_QWORD *)this + 11) = v17;
      (*(void (__fastcall **)(GameButton *, _QWORD, __int64))(*(_QWORD *)v17 + 280LL))(v17, *((_QWORD *)this + 3), 1);
      CustomButton::setButtonListener(*((_QWORD *)this + 11), this);
      v18 = *(void (__fastcall **)(#1257 *, __int64, _QWORD))(*(_QWORD *)a2 + 168LL);
      v19 = *((_QWORD *)this + 11);
      v20 = Sprite::getNumChildren(a2);
      v18(a2, v19, (unsigned int)(v20 - 1));
      v21 = (GameButton *)operator new(264);
      GameButton::GameButton(v21);
      *((_QWORD *)this + 10) = v21;
      (*(void (__fastcall **)(GameButton *, _QWORD, __int64))(*(_QWORD *)v21 + 280LL))(v21, *((_QWORD *)this + 2), 1);
      CustomButton::setButtonListener(*((_QWORD *)this + 10), this);
      v22 = *(void (__fastcall **)(#1257 *, __int64, _QWORD))(*(_QWORD *)a2 + 168LL);
      v23 = *((_QWORD *)this + 10);
      v24 = Sprite::getNumChildren(a2);
      v22(a2, v23, (unsigned int)(v24 - 1));
      v26 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 4), "txt_open");
      if ( v26 )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_OPEN_NOW", v25);
        MovieClip::setText(v26, "text_open", String);
      }
      Highlighter::addTarget(v5, *((DisplayObject **)this + 6));
      Highlighter::addTarget(v5, *((DisplayObject **)this + 7));
    }

    __int64 __fastcall MultiWinGUI::getVisualMultiWinCount(#1319 *this)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x19
      BadgePopup *isCrownChestAvailable; // x0
      int v4; // w19
      __int64 v5; // x0
      int v6; // w8
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      isCrownChestAvailable = (BadgePopup *)LogicClientHome::isCrownChestAvailable(Home);
      if ( (_DWORD)isCrownChestAvailable )
      {
        isCrownChestAvailable = (BadgePopup *)LogicClientHome::getCrownChestMaxCrownCount(Home);
        v4 = (int)isCrownChestAvailable;
      }
      else
      {
        v4 = *((_DWORD *)Home + 45);
      }
      v5 = GUI::getInstance(isCrownChestAvailable);
      v6 = v4 - GUI::getTotalValueOfPendingDataGained(v5, 3);
      if ( v6 <= 0 )
        return 0;
      else
        return (unsigned int)v6;
    }

}; // end class MultiWinGUI
