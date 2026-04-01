class SettingsPopup
{
public:

    void __fastcall SettingsPopup::SettingsPopup(SettingsPopup *this)
    {
      GameButton *v2; // x22
      const char *v3; // x1
      const String *String; // x0
      GameButton *v5; // x22
      const char *v6; // x1
      const String *v7; // x0
      GameButton *v8; // x22
      const char *v9; // x1
      const String *v10; // x0
      GameButton *v11; // x22
      const char *v12; // x1
      const String *v13; // x0
      GameButton *v14; // x22
      const char *v15; // x1
      const String *v16; // x0
      #1356 *v17; // x22
      void (__fastcall *v18)(#1356 *, __int64, __int64); // x23
      __int64 MovieClipByName; // x0
      __int64 v20; // x22
      void (__fastcall *v21)(__int64, _BOOL8); // x24
      _BOOL8 isMusicEnabled; // x0
      #1356 *v23; // x22
      void (__fastcall *v24)(#1356 *, __int64, __int64); // x24
      __int64 v25; // x0
      __int64 v26; // x21
      void (__fastcall *v27)(__int64, _BOOL8); // x22
      _BOOL8 isSfxEnabled; // x0
      #1356 *v29; // x21
      void (__fastcall *v30)(#1356 *, __int64, __int64); // x22
      __int64 v31; // x0
      __int64 v32; // x21
      void (__fastcall *v33)(__int64, __int64); // x22
      const String *v34; // x1
      __int64 isLandscapeReplay; // x0
      __int64 v36; // x0
      __int64 MovieClip; // x0
      #1257 *v38; // x0
      GameButton *v39; // x21
      const char *v40; // x1
      const String *v41; // x0
      pthread_attr_t *v42; // x0
      long double v43; // q0
      GameButton *v44; // x21
      const char *v45; // x1
      const String *v46; // x0
      tween::Bounce *PlayerAvatar; // x20
      long double v48; // q0
      __int64 ChildByName; // x0
      pthread_attr_t *ExpLevel; // x0
      MovieClip *v51; // x20
      pthread_attr_t *Instance; // x0
      String v53; // [xsp+8h] [xbp-78h] BYREF
      String v54; // [xsp+20h] [xbp-60h] BYREF
      String v55; // [xsp+38h] [xbp-48h] BYREF
    
      String::String(&v55, "sc/ui.sc");
      String::String(&v54, "popup_settings");
      PopupBase::PopupBase(this, &v55, &v54);
      String::~String();
      String::~String();
      *(_QWORD *)this = off_100467E48;
      *((_QWORD *)this + 12) = &off_100468020;
      memset((char *)this + 232, 0, 0x60u);
      *((_QWORD *)this + 24) = DropGUIContainer::addGameButton(this, "close", 1);
      v2 = (GameButton *)DropGUIContainer::addGameButton(this, "credits_button", 1);
      *((_QWORD *)this + 35) = v2;
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_CREDITS", v3);
      GameButton::setText(v2, "txt", String);
      v5 = (GameButton *)DropGUIContainer::addGameButton(this, "help_button", 1);
      *((_QWORD *)this + 34) = v5;
      v7 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_HELP", v6);
      GameButton::setText(v5, "txt", v7);
      v8 = (GameButton *)DropGUIContainer::addGameButton(this, "privacy_button", 1);
      *((_QWORD *)this + 39) = v8;
      v10 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_PRIVACY", v9);
      GameButton::setText(v8, "txt", v10);
      v11 = (GameButton *)DropGUIContainer::addGameButton(this, "terms_button", 1);
      *((_QWORD *)this + 38) = v11;
      v13 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_TOS", v12);
      GameButton::setText(v11, "txt", v13);
      v14 = (GameButton *)DropGUIContainer::addGameButton(this, "parents_button", 1);
      *((_QWORD *)this + 40) = v14;
      v16 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_PARENTS", v15);
      GameButton::setText(v14, "txt", v16);
      v17 = (#1356 *)operator new(272);
      GameSelectableButton::GameSelectableButton(v17, 0);
      *((_QWORD *)this + 30) = v17;
      v18 = *(void (__fastcall **)(#1356 *, __int64, __int64))(*(_QWORD *)v17 + 280LL);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 14), "music_button_on");
      v18(v17, MovieClipByName, 1);
      v20 = *((_QWORD *)this + 30);
      v21 = *(void (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)v20 + 352LL);
      isMusicEnabled = GameSettings::isMusicEnabled((ClanPage *)GameSettings::sm_pInstance);
      v21(v20, isMusicEnabled);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 160LL))(
        *((_QWORD *)this + 14),
        *((_QWORD *)this + 30));
      v23 = (#1356 *)operator new(272);
      GameSelectableButton::GameSelectableButton(v23, 0);
      *((_QWORD *)this + 29) = v23;
      v24 = *(void (__fastcall **)(#1356 *, __int64, __int64))(*(_QWORD *)v23 + 280LL);
      v25 = MovieClip::getMovieClipByName(*((#1257 **)this + 14), "sound_button_on");
      v24(v23, v25, 1);
      v26 = *((_QWORD *)this + 29);
      v27 = *(void (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)v26 + 352LL);
      isSfxEnabled = GameSettings::isSfxEnabled((ClanPage *)GameSettings::sm_pInstance);
      v27(v26, isSfxEnabled);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 160LL))(
        *((_QWORD *)this + 14),
        *((_QWORD *)this + 29));
      v29 = (#1356 *)operator new(272);
      GameSelectableButton::GameSelectableButton(v29, 0);
      *((_QWORD *)this + 31) = v29;
      v30 = *(void (__fastcall **)(#1356 *, __int64, __int64))(*(_QWORD *)v29 + 280LL);
      v31 = MovieClip::getMovieClipByName(*((#1257 **)this + 14), "landscape_button");
      v30(v29, v31, 1);
      v32 = *((_QWORD *)this + 31);
      v33 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 352LL);
      isLandscapeReplay = GameSettings::isLandscapeReplay((ClanPage *)GameSettings::sm_pInstance, v34);
      v33(v32, isLandscapeReplay);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 160LL))(
        *((_QWORD *)this + 14),
        *((_QWORD *)this + 31));
      if ( (unsigned int)FacebookManager::isFacebookEnabled((LogicBuyChestCommand *)FacebookManager::sm_pInstance) )
      {
        v36 = DropGUIContainer::addGameButton(this, "facebook_button", 1);
        *((_QWORD *)this + 33) = v36;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 160LL))(*((_QWORD *)this + 14), v36);
      }
      else
      {
        MovieClip = GUIContainer::getMovieClip(this);
        *(_BYTE *)(MovieClip::getTextFieldByName(MovieClip, "TID_FACEBOOK") + 8) = 0;
        v38 = (#1257 *)GUIContainer::getMovieClip(this);
        *(_BYTE *)(MovieClip::getMovieClipByName(v38, "facebook_button") + 8) = 0;
      }
      v39 = (GameButton *)DropGUIContainer::addGameButton(this, "link_device_button", 1);
      *((_QWORD *)this + 32) = v39;
      v41 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_LINK_DEVICE", v40);
      v42 = (pthread_attr_t *)GameButton::setText(v39, "txt", v41);
      if ( *(_BYTE *)(LogicDataTables::getClientGlobals(v42) + 128LL) )
      {
        v44 = (GameButton *)DropGUIContainer::addGameButton(this, "name_change_button", 1);
        *((_QWORD *)this + 37) = v44;
        v46 = (const String *)StringTable::getString((#1308 *)"TID_NAME_CHANGE", v45);
        GameButton::setText(v44, "txt", v46);
        CustomButton::setButtonListener(*((_QWORD *)this + 37), (char *)this + 96);
        GameMode::getInstance();
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
        if ( (unsigned int)LogicClientAvatar::getNameChangeState(PlayerAvatar) == 1
          || (ExpLevel = (pthread_attr_t *)LogicClientAvatar::getExpLevel(PlayerAvatar),
              (int)ExpLevel < *(_DWORD *)(LogicDataTables::getClientGlobals(ExpLevel) + 124LL))
          || GameStateManager::getInstance() && *(_BYTE *)(GameStateManager::getInstance() + 96) )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 37) + 152LL))(*((_QWORD *)this + 37), 1);
        }
      }
      else if ( MovieClip::getChildByName(*((_QWORD *)this + 14), "name_change_button", v43) )
      {
        ChildByName = MovieClip::getChildByName(*((_QWORD *)this + 14), "name_change_button", v48);
        if ( ChildByName )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)ChildByName + 8LL))(ChildByName);
      }
      v51 = (MovieClip *)GUIContainer::getMovieClip(this);
      String::String(&v53, "");
      MovieClip::setText(v51, "TID_PLAYER_ID", &v53);
      String::~String();
      Instance = (pthread_attr_t *)GameMode::getInstance();
      if ( (GameMode::isHelpshiftEnabled(Instance) & 1) == 0 )
        *(_BYTE *)(*((_QWORD *)this + 34) + 8LL) = 0;
    }

    // attributes: thunk
    void __fastcall SettingsPopup::SettingsPopup(SettingsPopup *this)
    {
      __ZN13SettingsPopupC2Ev(this);
    }

    void __fastcall SettingsPopup::~SettingsPopup(_QWORD *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
    
      *a1 = off_100467E48;
      a1[12] = &off_100468020;
      Sprite::removeAllChildren((OutOfSyncMessage *)a1);
      v2 = a1[34];
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v3 = a1[35];
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = a1[38];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = a1[32];
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = a1[37];
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = a1[30];
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = a1[29];
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = a1[31];
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      memset(a1 + 29, 0, 0x60u);
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1);
    }

    // attributes: thunk
    void __fastcall SettingsPopup::~SettingsPopup(_QWORD *a1)
    {
      __ZN13SettingsPopupD2Ev(a1);
    }

    void __fastcall SettingsPopup::~SettingsPopup(_QWORD *a1)
    {
      SettingsPopup::~SettingsPopup(a1);
      operator delete(a1);
    }

    __int64 __fastcall SettingsPopup::update(__int64 a1, float a2)
    {
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x20
      String *NotificationCount; // x21
      MovieClip *v6; // x20
      int v7; // w1
      __int64 v8; // x0
      int v9; // w20
      const String *v10; // x1
      ClanPage *v11; // x20
      const String *v12; // x0
      int v13; // w0
      const char *v14; // x1
      #1356 *v15; // x20
      char *v16; // x0
      const String *String; // x0
      int v18; // w20
      ClanPage *v19; // x20
      int v20; // w0
      int v21; // w20
      ClanPage *v22; // x20
      int v23; // w0
      int v24; // w0
      const char *v25; // x1
      #1356 *v26; // x20
      char *v27; // x0
      const String *v28; // x0
      int v29; // w0
      const char *v30; // x1
      #1356 *v31; // x20
      char *v32; // x0
      const String *v33; // x0
      __int64 isFacebookEnabled; // x0
      const char *v35; // x1
      GameButton *v36; // x20
      const String *v37; // x0
      MovieClip *v38; // x0
      const char *v39; // x1
      const String *v40; // x0
      BadgePopup *Instance; // x0
      __int64 result; // x0
      String v43; // [xsp+8h] [xbp-38h] BYREF
    
      PopupBase::update((MatchmakeFailedMessage *)a1, a2);
      MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "help_notification");
      if ( MovieClipByName )
      {
        NotificationCount = (String *)HelpshiftManager::getNotificationCount((HelpshiftTitan *)HelpshiftManager::sm_pInstance);
        if ( (int)NotificationCount < 1 )
        {
          *(_BYTE *)(MovieClipByName + 8) = 0;
        }
        else
        {
          *(_BYTE *)(MovieClipByName + 8) = 1;
          if ( MovieClip::getMovieClipByName((#1257 *)MovieClipByName, "num") )
          {
            v6 = (MovieClip *)MovieClip::getMovieClipByName((#1257 *)MovieClipByName, "num");
            String::valueOf(&v43, NotificationCount, v7);
            MovieClip::setText(v6, "txt", &v43);
            String::~String();
          }
        }
      }
      v8 = *(_QWORD *)(a1 + 248);
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 360LL))(v8);
        if ( v9 != (unsigned int)GameSettings::isLandscapeReplay((ClanPage *)GameSettings::sm_pInstance, v10) )
        {
          v11 = (ClanPage *)GameSettings::sm_pInstance;
          v12 = (const String *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 360LL))(*(_QWORD *)(a1 + 248));
          GameSettings::setLandscapeReplay(v11, v12);
        }
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 360LL))(*(_QWORD *)(a1 + 248));
        v15 = *(#1356 **)(a1 + 248);
        if ( v13 )
          v16 = "TID_LANDSCAPE_ON";
        else
          v16 = "TID_LANDSCAPE_OFF";
        String = (const String *)StringTable::getString((#1308 *)v16, v14);
        GameSelectableButton::setText(v15, "txt", String);
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 232) + 360LL))(*(_QWORD *)(a1 + 232));
      if ( (v18 ^ GameSettings::isSfxEnabled((ClanPage *)GameSettings::sm_pInstance)) == 1 )
      {
        v19 = (ClanPage *)GameSettings::sm_pInstance;
        v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 232) + 360LL))(*(_QWORD *)(a1 + 232));
        GameSettings::enableSfx(v19, v20);
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 360LL))(*(_QWORD *)(a1 + 240));
      if ( (v21 ^ GameSettings::isMusicEnabled((ClanPage *)GameSettings::sm_pInstance)) == 1 )
      {
        v22 = (ClanPage *)GameSettings::sm_pInstance;
        v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 360LL))(*(_QWORD *)(a1 + 240));
        GameSettings::enableMusic(v22, v23);
      }
      v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 232) + 360LL))(*(_QWORD *)(a1 + 232));
      v26 = *(#1356 **)(a1 + 232);
      if ( v24 )
        v27 = "TID_SETTINGS_ON";
      else
        v27 = "TID_SETTINGS_OFF";
      v28 = (const String *)StringTable::getString((#1308 *)v27, v25);
      GameSelectableButton::setText(v26, "txt", v28);
      v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 360LL))(*(_QWORD *)(a1 + 240));
      v31 = *(#1356 **)(a1 + 240);
      if ( v29 )
        v32 = "TID_SETTINGS_ON";
      else
        v32 = "TID_SETTINGS_OFF";
      v33 = (const String *)StringTable::getString((#1308 *)v32, v30);
      GameSelectableButton::setText(v31, "txt", v33);
      isFacebookEnabled = FacebookManager::sm_pInstance;
      if ( FacebookManager::sm_pInstance )
      {
        isFacebookEnabled = FacebookManager::isFacebookEnabled((LogicBuyChestCommand *)FacebookManager::sm_pInstance);
        if ( (_DWORD)isFacebookEnabled )
        {
          isFacebookEnabled = FacebookManager::isLoggedIn((LogicBuyChestCommand *)FacebookManager::sm_pInstance);
          v36 = *(GameButton **)(a1 + 264);
          if ( v36 )
          {
            if ( (isFacebookEnabled & 1) != 0 )
            {
              v37 = (const String *)StringTable::getString((#1308 *)"TID_FACEBOOK_CONNECTED", v35);
              GameButton::setText(v36, "txt", v37);
              v38 = *(MovieClip **)(*(_QWORD *)(a1 + 264) + 96LL);
              v39 = "connect";
            }
            else
            {
              v40 = (const String *)StringTable::getString((#1308 *)"TID_FACEBOOK_DISCONNECTED", v35);
              GameButton::setText(v36, "txt", v40);
              v38 = *(MovieClip **)(*(_QWORD *)(a1 + 264) + 96LL);
              v39 = "disconnect";
            }
            isFacebookEnabled = MovieClip::gotoAndStop(v38, v39);
          }
        }
      }
      Instance = (BadgePopup *)GUI::getInstance((BadgePopup *)isFacebookEnabled);
      result = GUI::getTopPopup(Instance);
      *(_BYTE *)(a1 + 64) = result == a1;
      return result;
    }

    void __fastcall SettingsPopup::buttonClicked(#1251 **this, #1251 *a2)
    {
      #1251 **v3; // x20
      #1285 *v4; // x0
      const String *v5; // x1
      tween::Bounce *PlayerAvatar; // x19
      BadgePopup *v7; // x0
      Stage *Instance; // x19
      const char *v9; // x1
      void *String; // x0
      pthread_attr_t *ExpLevel; // x0
      int v12; // w19
      __int64 ClientGlobals; // x0
      __int64 v14; // x0
      const char *v15; // x1
      const char *v16; // x1
      void *v17; // x19
      BadgePopup *v18; // x0
      Stage *v19; // x0
      __int64 v20; // x19
      CreditsPopup *v21; // x20
      BadgePopup *v22; // x0
      Stage *v23; // x19
      __int64 v24; // x19
      SectorManager *v25; // x20
      BadgePopup *v26; // x0
      __int64 v27; // x0
      SectorManager *DeviceLinkWindow; // x19
      DeviceLinkSubScreen *v29; // x20
      pthread_attr_t *v30; // x0
      __int64 v31; // x19
      PvpMatchmakeNotificationMessage *v32; // x20
      __int64 v33; // x1
      __int64 v34; // x2
      const String *v35; // x3
      const String *v36; // x1
      #1165 *v37; // x19
      Stage *v38; // x0
      Stage *v39; // x0
      int v40; // s9
      int v41; // s10
      float v42; // s8
      float v43; // s0
      BadgePopup *v44; // x0
      __int64 v45; // x0
      BadgePopup *v46; // x0
      __int64 v47; // x0
      #1165 *v48; // x19
      LogicExpLevelData *v49; // x20
      tween::Bounce *v50; // x0
      __int64 Name; // x0
      __int128 v52; // [xsp+10h] [xbp-A0h] BYREF
      String v53; // [xsp+20h] [xbp-90h] BYREF
      String v54; // [xsp+38h] [xbp-78h] BYREF
      String v55; // [xsp+50h] [xbp-60h] BYREF
      __int64 v56[3]; // [xsp+68h] [xbp-48h] BYREF
    
      v3 = this;
      if ( *(this + 24) == a2 )
        this = (#1251 **)(*((__int64 (__fastcall **)(#1251 **))*this + 44))(this);
      if ( v3[37] == a2 )
      {
        GameMode::getInstance();
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
        v7 = (BadgePopup *)LogicClientAvatar::getNameChangeState(PlayerAvatar);
        if ( (_DWORD)v7 == 1 )
        {
          Instance = (Stage *)GUI::getInstance(v7);
          String = StringTable::getString((#1308 *)"TID_NAME_CHANGE_ALREADY_USED", v9);
          GUI::showCenteredFloaterText(Instance, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          return;
        }
        ExpLevel = (pthread_attr_t *)LogicClientAvatar::getExpLevel(PlayerAvatar);
        v12 = (int)ExpLevel;
        ClientGlobals = LogicDataTables::getClientGlobals(ExpLevel);
        if ( v12 >= *(_DWORD *)(ClientGlobals + 124) )
        {
          if ( !GameStateManager::getInstance()
            || (v22 = (BadgePopup *)GameStateManager::getInstance(), !*((_BYTE *)v22 + 96)) )
          {
            v37 = (#1165 *)operator new(296);
            NameChangeWindow::NameChangeWindow(v37);
            Rect::Rect((Rect *)&v52);
            DisplayObject::getBounds(v37, 0, &v52);
            v39 = (Stage *)Stage::getInstance(v38);
            v40 = *((_DWORD *)v39 + 107);
            v41 = *(_DWORD *)(Stage::getInstance(v39) + 432LL);
            v42 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(#1165 *))*(_QWORD *)(*(_QWORD *)v37 + 96LL))(v37)));
            v43 = (*(float (__fastcall **)(#1165 *))(*(_QWORD *)v37 + 72LL))(v37);
            DisplayObject::setPixelSnappedXY(
              v37,
              (float)v40 * 0.5,
              (float)((float)((float)v41 - (float)(v42 * v43)) * 0.1) - *((float *)&v52 + 1));
            v45 = GUI::getInstance(v44);
            v46 = (BadgePopup *)GUI::showPopup(v45, v37, 0, 0, 0);
            v47 = GUI::getInstance(v46);
            v48 = (#1165 *)GUI::getNameChangeWindow(v47);
            v49 = (LogicExpLevelData *)operator new(336);
            GameMode::getInstance();
            v50 = (tween::Bounce *)GameMode::getPlayerAvatar();
            Name = LogicClientAvatar::getName(v50);
            NameChangeScreen::NameChangeScreen(v49, 0, Name);
            NameChangeWindow::pushScreen(v48, v49);
            Rect::~Rect((Rect *)&v52);
            return;
          }
          v23 = (Stage *)GUI::getInstance(v22);
          String::String(&v53, "TID_NAME_CHANGE_IN_PROGRESS");
          GUI::showCenteredFloaterText(v23, (__int64)&v53, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        }
        else
        {
          v14 = LogicDataTables::getClientGlobals((pthread_attr_t *)ClientGlobals);
          String::getFormatted(v56, (String *)"%i", v15, *(unsigned int *)(v14 + 124));
          v17 = StringTable::getString((#1308 *)"TID_NAME_CHANGE_TH_LEVEL_TOO_LOW", v16);
          String::String(&v54, "<level>");
          String::replace(&v55, v17, &v54, v56);
          String::~String();
          v19 = (Stage *)GUI::getInstance(v18);
          GUI::showCenteredFloaterText(v19, (__int64)&v55, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          String::~String();
        }
        String::~String();
        return;
      }
      if ( v3[33] == a2 )
      {
        if ( (FacebookManager::isLoggedIn((LogicBuyChestCommand *)FacebookManager::sm_pInstance) & 1) != 0 )
        {
          FacebookManager::logout((LogicBuyChestCommand *)FacebookManager::sm_pInstance);
        }
        else if ( !(unsigned int)FacebookManager::getState((LogicBuyChestCommand *)FacebookManager::sm_pInstance) )
        {
          FacebookManager::login((LogicBuyChestCommand *)FacebookManager::sm_pInstance);
        }
      }
      else
      {
        if ( v3[35] == a2 )
        {
          v20 = GUI::getInstance((BadgePopup *)this);
          v21 = (CreditsPopup *)operator new(256);
          CreditsPopup::CreditsPopup(v21);
          GUI::showPopup(v20, v21, 1, 0, 0);
          return;
        }
        if ( v3[32] == a2 )
        {
          v24 = GUI::getInstance((BadgePopup *)this);
          v25 = (SectorManager *)operator new(296);
          DeviceLinkWindow::DeviceLinkWindow(v25, 1);
          v26 = (BadgePopup *)GUI::showPopup(v24, v25, 1, 0, 0);
          v27 = GUI::getInstance(v26);
          DeviceLinkWindow = (SectorManager *)GUI::getDeviceLinkWindow(v27);
          v29 = (DeviceLinkSubScreen *)operator new(264);
          LinkNewDeviceScreen::LinkNewDeviceScreen(v29);
          DeviceLinkWindow::pushScreen(DeviceLinkWindow, v29);
          return;
        }
        if ( v3[34] == a2 )
        {
          v30 = (pthread_attr_t *)GameMode::getInstance();
          if ( (unsigned int)GameMode::isHelpshiftEnabled(v30) )
          {
            v31 = GameMode::getInstance();
            v32 = (PvpMatchmakeNotificationMessage *)operator new(32);
            LogicCommand::LogicCommand((__int64)v32);
            *(_QWORD *)v32 = &off_100461920;
            GameMode::addCommand(v31, v32, 1);
            HelpshiftManager::start((HelpshiftTitan *)HelpshiftManager::sm_pInstance, v33, v34, v35);
            HelpshiftManager::updateMetadata((_BYTE *)HelpshiftManager::sm_pInstance, v36);
            if ( (int)HelpshiftManager::getNotificationCount((HelpshiftTitan *)HelpshiftManager::sm_pInstance) < 1 )
              HelpshiftManager::showFAQ((HelpshiftTitan *)HelpshiftManager::sm_pInstance);
            else
              HelpshiftManager::showConversation((HelpshiftTitan *)HelpshiftManager::sm_pInstance);
          }
        }
        else
        {
          if ( v3[39] == a2 )
          {
            v4 = (#1285 *)(LogicDataTables::getClientGlobals((pthread_attr_t *)this) + 448LL);
            goto LABEL_33;
          }
          if ( v3[38] == a2 )
          {
            v4 = (#1285 *)(LogicDataTables::getClientGlobals((pthread_attr_t *)this) + 424LL);
            goto LABEL_33;
          }
          if ( v3[40] == a2 )
          {
            v4 = (#1285 *)(LogicDataTables::getClientGlobals((pthread_attr_t *)this) + 400LL);
    LABEL_33:
            Application::openURL(v4, v5);
          }
        }
      }
    }

    __int64 __fastcall SettingsPopup::getPopupType(Messaging *this)
    {
      return 29;
    }

}; // end class SettingsPopup
