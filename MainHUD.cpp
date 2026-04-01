class MainHUD
{
public:

    void __fastcall MainHUD::MainHUD(MainHUD *this)
    {
      vm_address_t *v2; // x0
      __int64 Instance; // x0
      #1047 *HomeScreen; // x0
      MovieClipHelper *MovieClip; // x20
      Stage *v6; // x0
      int *v7; // x0
      const Rect *v8; // x2
      vm_address_t *inited; // x0
      __int64 v10; // x0
      #962 *PlayerAvatar; // x20
      Rect v12; // [xsp+0h] [xbp-60h] BYREF
      float v13; // [xsp+8h] [xbp-58h]
      float v14; // [xsp+Ch] [xbp-54h]
      String v15; // [xsp+10h] [xbp-50h] BYREF
      String v16; // [xsp+28h] [xbp-38h] BYREF
    
      String::String(&v16, "sc/ui.sc");
      String::String(&v15, "Menu_topLayer");
      DropGUIContainer::DropGUIContainer(this, &v16, &v15);
      String::~String(&v15);
      String::~String(&v16);
      *((_DWORD *)this + 120) = 0;
      *(_QWORD *)this = off_100460030;
      *((_QWORD *)this + 12) = &off_100460188;
      *((_DWORD *)this + 121) = 0;
      *((_DWORD *)this + 118) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 45) = 0;
      *((_BYTE *)this + 272) = 0;
      *((_BYTE *)this + 273) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 56) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_DWORD *)this + 64) = -1;
      *((_DWORD *)this + 119) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 43) = 0;
      *((_QWORD *)this + 44) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 42) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 38) = 0;
      v2 = (vm_address_t *)memset((char *)this + 368, 0, 0x48u);
      *((_QWORD *)this + 57) = 0;
      *((_QWORD *)this + 58) = 0;
      Instance = GameMode::getInstance(v2);
      HomeScreen = (#1047 *)GameMode::getHomeScreen(Instance);
      *((_QWORD *)this + 24) = HomeScreen::getPageGUI(HomeScreen);
      MovieClip = (MovieClipHelper *)GUIContainer::getMovieClip(this);
      v6 = (Stage *)Rect::Rect(&v12);
      *(_DWORD *)&v12.top = 0;
      *(_DWORD *)&v12.bottom = 0;
      v7 = (int *)Stage::getInstance(v6);
      v13 = (float)v7[107];
      v14 = (float)*(int *)(Stage::getInstance((Stage *)v7) + 432LL);
      MovieClipHelper::alignChildrenToBounds(MovieClip, (MovieClip *)&v12, v8);
      MainHUD::initBottomHUD(this);
      inited = (vm_address_t *)MainHUD::initTopHUD(this);
      *((_DWORD *)this + 119) = 1065353216;
      v10 = GameMode::getInstance(inited);
      PlayerAvatar = (#962 *)GameMode::getPlayerAvatar(v10);
      *((_DWORD *)this + 120) = LogicClientAvatar::getGold(PlayerAvatar);
      *((_DWORD *)this + 121) = LogicClientAvatar::getDiamonds(PlayerAvatar);
      Rect::~Rect(&v12);
    }

    __int64 __fastcall MainHUD::initBottomHUD(LogicClientAvatar *this)
    {
      Stage *Instance; // x0
      int v3; // s8
      int v4; // s9
      Sprite *v5; // x20
      float v6; // s12
      float v7; // s8
      __int64 MovieClip; // x0
      const char *v9; // x2
      #1249 *v10; // x0
      float v11; // s9
      int PageCount; // w20
      #1271 *TextFieldByName; // x0
      #1080 *TextFieldHeight; // x0
      float v15; // s0
      int v16; // w21
      float v17; // s0
      float v18; // s13
      #1080 *v19; // x0
      Screen *TargetResolution; // x0
      Screen *Width; // x0
      const char *v22; // x2
      _BOOL4 v23; // w8
      float v25; // s2
      DisplayObject *v26; // x0
      __int64 result; // x0
      const char *v28; // x2
      float v29; // s14
      int v30; // w26
      DisplayObject *v31; // x25
      const char *v32; // x2
      int v33; // w22
      float v34; // s9
      LogicProjectileData *PageItemAt; // x26
      __int64 v36; // x25
      #1249 *v37; // x27
      const String *v38; // x0
      __int64 v39; // x26
      __int64 v40; // [xsp+8h] [xbp-B8h] BYREF
      DisplayObject *v41; // [xsp+10h] [xbp-B0h] BYREF
      DisplayObject *v42; // [xsp+18h] [xbp-A8h] BYREF
      DisplayObject *v43; // [xsp+20h] [xbp-A0h] BYREF
      int v44; // [xsp+28h] [xbp-98h] BYREF
      int v45; // [xsp+2Ch] [xbp-94h] BYREF
    
      Instance = (Stage *)Stage::getInstance(this);
      v3 = *((_DWORD *)Instance + 107);
      v4 = *(_DWORD *)(Stage::getInstance(Instance) + 432LL);
      *((_BYTE *)this + 272) = 1;
      v5 = (Sprite *)operator new(96);
      Sprite::Sprite(v5, 16);
      v6 = (float)v3;
      v7 = (float)v4;
      *((_QWORD *)this + 33) = v5;
      *((_BYTE *)v5 + 64) = 1;
      MovieClip = GUIContainer::getMovieClip(this);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)MovieClip + 160LL))(MovieClip, *((_QWORD *)this + 33));
      v10 = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "menu_bottom_tab_bg", v9);
      *((_QWORD *)this + 31) = v10;
      DisplayObject::setWidth(v10, v6 + 2.0);
      v11 = v6 * 0.5;
      DisplayObject::setPixelSnappedXY(*((DisplayObject **)this + 31), v6 * 0.5, v7);
      *(_BYTE *)(MovieClip::getMovieClipByName(*((#1257 **)this + 31), "tutorial_grad") + 8) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 33) + 160LL))(
        *((_QWORD *)this + 33),
        *((_QWORD *)this + 31));
      PageCount = PageGUI::getPageCount(*((MessageManager **)this + 24));
      LogicArrayList<MainHUD::PageButton *>::ensureCapacity();
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 31), "bg_height");
      TextFieldHeight = (#1080 *)TextField::getTextFieldHeight(TextFieldByName);
      *((float *)this + 50) = v15;
      v16 = PageCount - 1;
      v17 = (float)(PageCount - 1) * v15;
      *((float *)this + 51) = 576.92 - v17;
      v18 = (float)(576.92 - v17) + v17;
      v44 = 0;
      v45 = 0;
      v19 = (#1080 *)GameMain::getInstance(TextFieldHeight);
      TargetResolution = (Screen *)GameMain::getTargetResolution(v19, &v45, &v44);
      Width = (Screen *)Screen::getWidth(TargetResolution);
      v23 = 0;
      if ( (int)Width < v45 )
        v23 = (int)Screen::getHeight(Width) < 1024;
      if ( v18 > v6 || v23 )
      {
        v25 = *((float *)this + 51);
        *((float *)this + 50) = (float)(v6 / v18) * *((float *)this + 50);
        *((float *)this + 51) = (float)(v6 / v18) * v25;
        v18 = v18 * (float)(v6 / v18);
      }
      v26 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "menu_bottom_tab_selected", v22);
      *((_QWORD *)this + 30) = v26;
      DisplayObject::setXY(v26, 0.0, v7);
      DisplayObject::setWidth(*((#1249 **)this + 30), *((float *)this + 51));
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 33) + 160LL))(
                 *((_QWORD *)this + 33),
                 *((_QWORD *)this + 30));
      v29 = v6 / (float)PageCount;
      if ( PageCount >= 2 )
      {
        v30 = 0;
        do
        {
          ++v30;
          v31 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "menu_bottom_divider", v28);
          v43 = v31;
          DisplayObject::setXY(v31, v29 * (float)v30, v7);
          (*(void (__fastcall **)(_QWORD, DisplayObject *))(**((_QWORD **)this + 33) + 160LL))(*((_QWORD *)this + 33), v31);
          result = LogicArrayList<MovieClip *>::add((char *)this + 224, &v43);
        }
        while ( v30 < v16 );
      }
      if ( v18 < v6 )
      {
        v42 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "menu_bottom_divider", v28);
        DisplayObject::setXY(v42, v11 - (float)(v18 * 0.5), v7);
        (*(void (__fastcall **)(_QWORD, DisplayObject *))(**((_QWORD **)this + 33) + 160LL))(*((_QWORD *)this + 33), v42);
        LogicArrayList<MovieClip *>::add((char *)this + 224, &v42);
        v41 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "menu_bottom_divider", v32);
        DisplayObject::setXY(v41, v11 + (float)(v18 * 0.5), v7);
        (*(void (__fastcall **)(_QWORD, DisplayObject *))(**((_QWORD **)this + 33) + 160LL))(*((_QWORD *)this + 33), v41);
        result = LogicArrayList<MovieClip *>::add((char *)this + 224, &v41);
      }
      if ( PageCount >= 1 )
      {
        v33 = 0;
        v34 = -(float)(*((float *)this + 50) + 10.0);
        do
        {
          PageItemAt = (LogicProjectileData *)PageGUI::getPageItemAt(*((MessageManager **)this + 24), v33);
          v36 = operator new(336);
          MainHUD::PageButton::PageButton((#1380 *)v36, PageItemAt, v33 > 0, v33 < v16, *((float *)this + 51));
          v40 = v36;
          v37 = (#1249 *)(*(__int64 (__fastcall **)(LogicProjectileData *))(*(_QWORD *)PageItemAt + 392LL))(PageItemAt);
          MovieClip::changeTimelineChild(*(#1257 **)(v36 + 96), "icon", v37);
          *(_QWORD *)(v36 + 288) = v37;
          v38 = (const String *)(*(__int64 (__fastcall **)(LogicProjectileData *))(*(_QWORD *)PageItemAt + 400LL))(PageItemAt);
          MainHUD::PageButton::setLabel((#1380 *)v36, v38);
          CustomButton::setButtonListener(v36, (char *)this + 96);
          DisplayObject::setPixelSnappedXY((DisplayObject *)v36, 0.0, v7);
          v39 = operator new(16);
          Rect::Rect((Rect *)v39);
          *(float *)(v39 + 4) = v34;
          *(_DWORD *)(v39 + 12) = 0;
          *(float *)v39 = v29 * -0.5;
          *(float *)(v39 + 8) = v29 * 0.5;
          Sprite::setHitArea((OutOfSyncMessage *)v36, (#1261 *)v39);
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 33) + 160LL))(*((_QWORD *)this + 33), v36);
          result = LogicArrayList<MainHUD::PageButton *>::add((char *)this + 208, &v40);
          ++v33;
        }
        while ( v33 < PageCount );
      }
      return result;
    }

    __int64 __fastcall MainHUD::initTopHUD(LogicClientAvatar *this)
    {
      #1257 *MovieClip; // x0
      #1257 *MovieClipByName; // x25
      const char *v4; // x2
      #1257 *v5; // x21
      #1014 *v6; // x20
      __int64 v7; // x0
      #1257 *v8; // x23
      __int64 v9; // x0
      #1271 *TextFieldByName; // x24
      #1257 *v11; // x25
      vm_address_t *v12; // x26
      __int64 Instance; // x0
      #962 *PlayerAvatar; // x20
      #1364 *ExpLevelData; // x27
      int ExpLevel; // w28
      int ExpPoints; // w22
      LogicDataTables *v18; // x27
      int MaxExpLevel; // w0
      #1257 *v20; // x0
      #1257 *v21; // x0
      const char *v22; // x1
      #1257 *v23; // x21
      __int64 v24; // x20
      #1014 *v25; // x22
      MovieClip *v26; // x20
      int v27; // w1
      Stage *v28; // x0
      Stage *v29; // x20
      #1014 *v30; // x22
      float v31; // s8
      long double v32; // q0
      __int64 v33; // x0
      const char *v34; // x1
      char *v35; // x0
      __int64 v36; // x0
      const char *v37; // x1
      __int64 v38; // x0
      __int64 v39; // x20
      #1014 *v40; // x22
      __int64 v41; // x0
      __int64 v42; // x0
      const char *v43; // x2
      #1257 *v44; // x0
      #1257 *v45; // x21
      const char *v46; // x2
      __int64 v47; // x0
      #1257 *v48; // x22
      #1014 *v49; // x20
      __int64 v50; // x0
      __int64 v51; // x0
      const char *v52; // x2
      __int64 v53; // x20
      #1014 *v54; // x24
      #1257 *v55; // x22
      #1014 *v56; // x20
      __int64 v57; // x0
      __int64 v58; // x0
      const char *v59; // x2
      __int64 v60; // x20
      #1014 *v61; // x24
      unsigned int v63; // [xsp+Ch] [xbp-84h]
      #1257 *v64; // [xsp+10h] [xbp-80h]
      String v65; // [xsp+18h] [xbp-78h] BYREF
    
      *((_BYTE *)this + 273) = 1;
      MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "left_top");
      Debugger::doAssert((Debugger *)(MovieClipByName != 0), (bool)"no left top clip in main hud", v4);
      v5 = (#1257 *)MovieClip::getMovieClipByName(MovieClipByName, "xp");
      if ( v5 )
      {
        v6 = (#1014 *)operator new(264);
        GameButton::GameButton(v6);
        *((_QWORD *)this + 45) = v6;
        (*(void (__fastcall **)(#1014 *, #1257 *, __int64))(*(_QWORD *)v6 + 280LL))(v6, v5, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 45), (char *)this + 96);
        (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)MovieClipByName + 160LL))(
          MovieClipByName,
          *((_QWORD *)this + 45));
        v7 = MovieClip::getMovieClipByName(v5, "xp_icon");
        v8 = (#1257 *)v7;
        if ( v7 )
        {
          v64 = MovieClipByName;
          v63 = *(_DWORD *)(v7 + 56);
          v9 = MovieClip::getMovieClipByName((#1257 *)v7, "xp_level");
          TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v9, "txt");
          v11 = (#1257 *)MovieClip::getMovieClipByName(v5, "xp_bar");
          v12 = (vm_address_t *)MovieClip::getTextFieldByName(v11, "xp_count");
          Instance = GameMode::getInstance(v12);
          PlayerAvatar = (#962 *)GameMode::getPlayerAvatar(Instance);
          ExpLevelData = (#1364 *)LogicClientAvatar::getExpLevelData(PlayerAvatar);
          ExpLevel = LogicClientAvatar::getExpLevel(PlayerAvatar);
          ExpPoints = LogicClientAvatar::getExpPoints(PlayerAvatar);
          LODWORD(PlayerAvatar) = LogicExpLevelData::getExpToNextLevel(ExpLevelData);
          v18 = (LogicDataTables *)operator new(176);
          MaxExpLevel = LogicDataTables::getMaxExpLevel(v18);
          ExpBar::ExpBar(v18, v8, v11, TextFieldByName, (#1271 *)v12, ExpPoints, (int)PlayerAvatar, ExpLevel, MaxExpLevel);
          *((_QWORD *)this + 46) = v18;
          (*(void (__fastcall **)(#1257 *, LogicDataTables *, _QWORD))(*(_QWORD *)v5 + 168LL))(v5, v18, v63);
          MovieClipByName = v64;
        }
      }
      v20 = (#1257 *)GUIContainer::getMovieClip(this);
      v21 = (#1257 *)MovieClip::getMovieClipByName(v20, "profile_strip");
      v23 = v21;
      if ( !v21 )
      {
        v35 = "cannot find player profile_strip for main hud";
        goto LABEL_19;
      }
      v24 = MovieClip::getMovieClipByName(v21, "settings_button");
      if ( v24 )
      {
        v25 = (#1014 *)operator new(264);
        GameButton::GameButton(v25);
        *((_QWORD *)this + 52) = v25;
        (*(void (__fastcall **)(#1014 *, __int64, __int64))(*(_QWORD *)v25 + 280LL))(v25, v24, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 52), (char *)this + 96);
        (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)v23 + 160LL))(v23, *((_QWORD *)this + 52));
        *(_BYTE *)(MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 52) + 96LL), "notification") + 8) = 0;
        v26 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 52) + 96LL), "notification");
        String::valueOf(&v65, (String *)1, v27);
        MovieClip::setText(v26, "num", &v65);
        String::~String(&v65);
      }
      v28 = (Stage *)MovieClip::getMovieClipByName(v23, "profile_button");
      v29 = v28;
      if ( v28 )
      {
        v30 = (#1014 *)operator new(264);
        GameButton::GameButton(v30);
        *((_QWORD *)this + 47) = v30;
        (*(void (__fastcall **)(#1014 *, Stage *, __int64))(*(_QWORD *)v30 + 280LL))(v30, v29, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 47), (char *)this + 96);
        v28 = (Stage *)(*(__int64 (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)v23 + 160LL))(v23, *((_QWORD *)this + 47));
      }
      *((_QWORD *)this + 37) = v23;
      v31 = (float)*(int *)(Stage::getInstance(v28) + 428LL) * 0.5;
      v32 = DisplayObject::getY(v23);
      DisplayObject::setPixelSnappedXY(v23, v31, *(float *)&v32);
      v33 = MovieClip::getMovieClipByName(v23, "player_name");
      if ( !v33 )
        Debugger::error((__siginfo *)"failed to find player_name from main hud", v34);
      *((_QWORD *)this + 38) = v33;
      *((_QWORD *)this + 39) = MovieClip::getTextFieldByName(v33, "txt");
      v36 = MovieClip::getMovieClipByName(v23, "clan_name");
      if ( !v36 )
        Debugger::error((__siginfo *)"failed to find clan_name from main hud", v37);
      *((_QWORD *)this + 40) = v36;
      *((_QWORD *)this + 41) = MovieClip::getTextFieldByName(v36, "txt");
      v38 = MovieClip::getMovieClipByName(v23, "trophy_element");
      v39 = v38;
      if ( !v38 )
      {
        v35 = "failed to find trophies from top hud";
    LABEL_19:
        Debugger::error((__siginfo *)v35, v22);
      }
      v40 = (#1014 *)operator new(264);
      GameButton::GameButton(v40);
      *((_QWORD *)this + 43) = v40;
      (*(void (__fastcall **)(#1014 *, __int64, __int64))(*(_QWORD *)v40 + 280LL))(v40, v39, 1);
      CustomButton::setButtonListener(*((_QWORD *)this + 43), (char *)this + 96);
      *(_BYTE *)(*((_QWORD *)this + 43) + 8LL) = 0;
      (*(void (__fastcall **)(#1257 *))(*(_QWORD *)v23 + 160LL))(v23);
      v41 = MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 43) + 96LL), "trophies");
      v42 = MovieClip::getTextFieldByName(v41, "txt");
      *((_QWORD *)this + 44) = v42;
      Debugger::doAssert((Debugger *)(v42 != 0), (bool)"main hud: no trophies inside trophy_element clip", v43);
      v44 = (#1257 *)GUIContainer::getMovieClip(this);
      v45 = (#1257 *)MovieClip::getMovieClipByName(v44, "right_top");
      Debugger::doAssert((Debugger *)(v45 != 0), (bool)"no right top clip in main hud", v46);
      v47 = MovieClip::getMovieClipByName(v45, "coins");
      v48 = (#1257 *)v47;
      if ( v47 )
      {
        v49 = (#1014 *)operator new(264);
        GameButton::GameButton(v49);
        *((_QWORD *)this + 50) = v49;
        (*(void (__fastcall **)(#1014 *, #1257 *, __int64))(*(_QWORD *)v49 + 280LL))(v49, v48, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 50), (char *)this + 96);
        (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)v45 + 160LL))(v45, *((_QWORD *)this + 50));
        *((_DWORD *)this + 114) = 0;
        v50 = MovieClip::getMovieClipByName(v48, "gold");
        v51 = MovieClip::getTextFieldByName(v50, "txt");
        *((_QWORD *)this + 54) = v51;
        Debugger::doAssert((Debugger *)(v51 != 0), (bool)"main hud: no txt inside gold clip", v52);
        *((_QWORD *)this + 55) = MovieClip::getMovieClipByName(v48, "gold_icon");
        v53 = MovieClip::getMovieClipByName(v48, "buy_gold");
        if ( v53 )
        {
          v54 = (#1014 *)operator new(264);
          GameButton::GameButton(v54);
          *((_QWORD *)this + 49) = v54;
          (*(void (__fastcall **)(#1014 *, __int64, __int64))(*(_QWORD *)v54 + 280LL))(v54, v53, 1);
          CustomButton::setButtonListener(*((_QWORD *)this + 49), (char *)this + 96);
          (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)v48 + 160LL))(v48, *((_QWORD *)this + 49));
        }
      }
      v55 = (#1257 *)MovieClip::getMovieClipByName(v45, "gems");
      if ( v55 )
      {
        v56 = (#1014 *)operator new(264);
        GameButton::GameButton(v56);
        *((_QWORD *)this + 51) = v56;
        (*(void (__fastcall **)(#1014 *, #1257 *, __int64))(*(_QWORD *)v56 + 280LL))(v56, v55, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 51), (char *)this + 96);
        (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)v45 + 160LL))(v45, *((_QWORD *)this + 51));
        *((_DWORD *)this + 115) = 0;
        v57 = MovieClip::getMovieClipByName(v55, "gems");
        v58 = MovieClip::getTextFieldByName(v57, "txt");
        *((_QWORD *)this + 53) = v58;
        Debugger::doAssert((Debugger *)(v58 != 0), (bool)"main hud: no txt inside gems clip", v59);
        *((_QWORD *)this + 56) = MovieClip::getMovieClipByName(v55, "gem_icon");
        v60 = MovieClip::getMovieClipByName(v55, "buy_gems");
        if ( v60 )
        {
          v61 = (#1014 *)operator new(264);
          GameButton::GameButton(v61);
          *((_QWORD *)this + 48) = v61;
          (*(void (__fastcall **)(#1014 *, __int64, __int64))(*(_QWORD *)v61 + 280LL))(v61, v60, 1);
          CustomButton::setButtonListener(*((_QWORD *)this + 48), (char *)this + 96);
          (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)v55 + 160LL))(v55, *((_QWORD *)this + 48));
        }
      }
      *((_QWORD *)this + 35) = MovieClipByName;
      *((_QWORD *)this + 36) = v45;
      return MainHUD::refreshAllianceStatus(this);
    }

    // attributes: thunk
    void __fastcall MainHUD::MainHUD(MainHUD *this)
    {
      __ZN7MainHUDC2Ev(this);
    }

    void __fastcall MainHUD::~MainHUD(LogicClientAvatar *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x8
      _QWORD *v7; // x21
      __int64 v8; // x8
      __int64 v9; // x22
      __int64 v10; // x0
      __int64 v11; // x8
      __int64 v12; // x0
      __int64 v13; // x0
      __int64 v14; // x0
      __int64 v15; // x0
      __int64 v16; // x0
      __int64 v17; // x0
      __int64 v18; // x0
      __int64 v19; // x0
      __int64 v20; // x0
      __int64 v21; // x0
      __int64 v22; // x0
      __int64 v23; // x0
      __int64 v24; // x0
      __int64 v25; // x0
    
      *(_QWORD *)this = off_100460030;
      *((_QWORD *)this + 12) = &off_100460188;
      v2 = (_QWORD *)((char *)this + 224);
      v3 = *((int *)this + 59);
      if ( (int)v3 >= 1 )
      {
        v4 = v3 - 1;
        do
        {
          v5 = *(_QWORD *)(*v2 + 8 * v4);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          v6 = v4-- + 1;
        }
        while ( v6 > 1 );
      }
      *((_DWORD *)this + 59) = 0;
      v7 = (_QWORD *)((char *)this + 208);
      v8 = *((int *)this + 55);
      if ( (int)v8 >= 1 )
      {
        v9 = v8 - 1;
        do
        {
          v10 = *(_QWORD *)(*v7 + 8 * v9);
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          v11 = v9-- + 1;
        }
        while ( v11 > 1 );
      }
      *((_DWORD *)this + 55) = 0;
      v12 = *((_QWORD *)this + 42);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *((_QWORD *)this + 42) = 0;
      v13 = *((_QWORD *)this + 30);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *((_QWORD *)this + 30) = 0;
      v14 = *((_QWORD *)this + 31);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *((_QWORD *)this + 31) = 0;
      v15 = *((_QWORD *)this + 46);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      *((_QWORD *)this + 46) = 0;
      v16 = *((_QWORD *)this + 45);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      *((_QWORD *)this + 45) = 0;
      v17 = *((_QWORD *)this + 48);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      *((_QWORD *)this + 48) = 0;
      v18 = *((_QWORD *)this + 49);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      *((_QWORD *)this + 49) = 0;
      v19 = *((_QWORD *)this + 50);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      *((_QWORD *)this + 50) = 0;
      v20 = *((_QWORD *)this + 51);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      *((_QWORD *)this + 51) = 0;
      v21 = *((_QWORD *)this + 43);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      *((_QWORD *)this + 43) = 0;
      v22 = *((_QWORD *)this + 47);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      *((_QWORD *)this + 47) = 0;
      v23 = *((_QWORD *)this + 52);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      *((_QWORD *)this + 52) = 0;
      v24 = *((_QWORD *)this + 33);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      *((_DWORD *)this + 120) = 0;
      *((_DWORD *)this + 121) = 0;
      *((_DWORD *)this + 118) = 0;
      *((_QWORD *)this + 45) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 56) = 0;
      *((_WORD *)this + 136) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_DWORD *)this + 64) = -1;
      *((_DWORD *)this + 119) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 43) = 0;
      *((_QWORD *)this + 44) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 42) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 38) = 0;
      memset((char *)this + 368, 0, 0x48u);
      *((_QWORD *)this + 57) = 0;
      *((_QWORD *)this + 58) = 0;
      v25 = *((_QWORD *)this + 28);
      if ( v25 )
        operator delete[](v25);
      *v2 = 0;
      v2[1] = 0;
      if ( *v7 )
        operator delete[](*v7);
      *v7 = 0;
      *((_QWORD *)this + 27) = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    // attributes: thunk
    void __fastcall MainHUD::~MainHUD(LogicClientAvatar *this)
    {
      __ZN7MainHUDD2Ev(this);
    }

    void __fastcall MainHUD::~MainHUD(LogicClientAvatar *this)
    {
      MainHUD::~MainHUD(this);
      operator delete(this);
    }

    void __fastcall MainHUD::buttonClicked(#1251 **this, #1251 *a2)
    {
      __int64 v4; // x8
      __int64 v5; // x21
      LogicClientAvatar *String; // x0
      int v7; // w4
      #946 *v8; // x20
      BadgePopup *v9; // x0
      vm_address_t *v10; // x19
      __int64 v11; // x0
      #962 *PlayerAvatar; // x0
      __int64 Id; // x0
      #1236 *v14; // x0
      __int64 Instance; // x0
      BadgePopup *v16; // x0
      #1047 *v17; // x0
      #1047 *v18; // x0
      #1314 *ShopPage; // x0
      #1314 *v20; // x21
      #1047 *isEnabled; // x0
      int v22; // w8
      #1047 *v23; // x0
      __int64 v24; // x0
      __int64 v25; // x0
      #962 *v26; // x0
      #962 *v27; // x20
      int ExpLevel; // w21
      const char *v29; // x1
      char *v30; // x0
      const String *v31; // x0
      String *ExpPoints; // x0
      int v33; // w1
      String *MaxExpPoints; // x0
      int v35; // w1
      LogicClientAvatar *v36; // x0
      __int64 v37; // x0
      #1047 *HomeScreen; // x0
      __int64 PageGUI; // x0
      String v40; // [xsp+8h] [xbp-C8h] BYREF
      String v41; // [xsp+20h] [xbp-B0h] BYREF
      String v42; // [xsp+38h] [xbp-98h] BYREF
      String v43; // [xsp+50h] [xbp-80h] BYREF
      String v44; // [xsp+68h] [xbp-68h] BYREF
      String v45; // [xsp+80h] [xbp-50h] BYREF
      String v46; // [xsp+98h] [xbp-38h] BYREF
    
      if ( *(this + 50) == a2 )
      {
        String = (LogicClientAvatar *)StringTable::getString((#1308 *)"TID_GOLD_TOOL_TIP", (const char *)a2);
        v7 = 1;
    LABEL_17:
        MainHUD::showTextPopover(String, (const String *)String, a2, 33, v7);
        return;
      }
      if ( *(this + 51) == a2 )
      {
        String = (LogicClientAvatar *)StringTable::getString((#1308 *)"TID_DIAMOND_TOOL_TIP", (const char *)a2);
        v7 = 2;
        goto LABEL_17;
      }
      if ( *(this + 43) == a2 )
      {
        String = (LogicClientAvatar *)StringTable::getString((#1308 *)"TID_TROPHIES_TOOL_TIP", (const char *)a2);
        v7 = 3;
        goto LABEL_17;
      }
      if ( *(this + 52) == a2 )
      {
        v8 = (#946 *)operator new(328);
        v9 = SettingsPopup::SettingsPopup(v8);
    LABEL_20:
        Instance = GUI::getInstance(v9);
        GUI::showPopup(Instance, v8, 1, 0, 0);
        return;
      }
      if ( *(this + 47) == a2 )
      {
        v8 = (#946 *)operator new(280);
        AlliancePopup::AlliancePopup(v8);
        v10 = (vm_address_t *)operator new(336);
        v11 = GameMode::getInstance(v10);
        PlayerAvatar = (#962 *)GameMode::getPlayerAvatar(v11);
        Id = LogicClientAvatar::getId(PlayerAvatar);
        v14 = (#1236 *)LogicLong::clone(Id);
        PlayerInfo::PlayerInfo((LogicDeviceLinkMenuClosedMessage *)v10, v14);
        v9 = (BadgePopup *)AlliancePopup::pushScreen(v8, (AskForAvatarLocalRankingListMessage *)v10);
        goto LABEL_20;
      }
      if ( *(this + 45) == a2 )
      {
        v25 = GameMode::getInstance((vm_address_t *)this);
        v26 = (#962 *)GameMode::getPlayerAvatar(v25);
        v27 = v26;
        if ( v26 )
        {
          ExpLevel = LogicClientAvatar::getExpLevel(v26);
          if ( ExpLevel >= (int)LogicClientAvatar::getMaxExpLevel(v27) )
            v30 = "TID_XP_TOOL_TIP_MAX";
          else
            v30 = "TID_XP_TOOL_TIP";
          v31 = (const String *)StringTable::getString((#1308 *)v30, v29);
          String::String(&v46, v31);
          String::String(&v43, "<num1>");
          ExpPoints = (String *)LogicClientAvatar::getExpPoints(v27);
          String::valueOf(&v42, ExpPoints, v33);
          String::replace(&v44, &v46, &v43, &v42);
          String::String(&v41, "<num2>");
          MaxExpPoints = (String *)LogicClientAvatar::getMaxExpPoints(v27);
          String::valueOf(&v40, MaxExpPoints, v35);
          String::replace(&v45, &v44, &v41, &v40);
          String::operator=(&v46);
          String::~String(&v45);
          String::~String(&v40);
          String::~String(&v41);
          String::~String(&v44);
          String::~String(&v42);
          String::~String(&v43);
          MainHUD::showTextPopover(v36, &v46, a2, 33, 4);
          String::~String(&v46);
        }
      }
      else if ( *(this + 48) == a2 || *(this + 49) == a2 )
      {
        v16 = (BadgePopup *)GUI::getInstance((BadgePopup *)this);
        v17 = (#1047 *)GUI::removePopover(v16);
        v18 = (#1047 *)HomeScreen::getInstance(v17);
        ShopPage = (#1314 *)HomeScreen::getShopPage(v18);
        v20 = ShopPage;
        if ( ShopPage )
        {
          isEnabled = (#1047 *)ShopPage::isEnabled(ShopPage);
          if ( (_DWORD)isEnabled )
          {
            if ( *(this + 49) == a2 )
              v22 = 3;
            else
              v22 = 2;
            *((_DWORD *)v20 + 90) = v22;
            v23 = (#1047 *)HomeScreen::getInstance(isEnabled);
            if ( v23 )
            {
              v24 = HomeScreen::getInstance(v23);
              HomeScreen::gotoPage(v24, 0, 1);
            }
          }
        }
      }
      else
      {
        v4 = *((int *)this + 55);
        if ( (int)v4 >= 1 )
        {
          v5 = 0;
          while ( *((#1251 **)*(this + 26) + v5) != a2 )
          {
            if ( ++v5 >= v4 )
              return;
          }
          v37 = GameMode::getInstance((vm_address_t *)this);
          HomeScreen = (#1047 *)GameMode::getHomeScreen(v37);
          PageGUI = HomeScreen::getPageGUI(HomeScreen);
          PageGUI::scrollToPage(PageGUI, v5);
        }
      }
    }

    void __fastcall MainHUD::showTextPopover(LogicClientAvatar *this, const String *a2, #1249 *a3, char a4, int a5)
    {
      BadgePopup *Instance; // x0
      BadgePopup *Popover; // x0
      int v11; // w8
      BadgePopup *v13; // x0
      #986 *v14; // x19
      const String *v15; // x2
      MovieClip *MovieClip; // x23
      #1271 *TextFieldByName; // x0
      float v18; // w21
      float v19; // w22
      float v20; // s8
      BadgePopup *v21; // x0
      long double Height; // q0
      float v23; // w10
      float v24; // w22
      BadgePopup *v25; // x0
      Rect v26; // [xsp+40h] [xbp-80h] BYREF
      String v27; // [xsp+50h] [xbp-70h] BYREF
      String v28; // [xsp+68h] [xbp-58h] BYREF
    
      Instance = (BadgePopup *)GUI::getInstance(this);
      Popover = (BadgePopup *)GUI::getPopover(Instance);
      if ( Popover )
      {
        v11 = *((_DWORD *)Popover + 69);
        if ( v11 != -1 && v11 == a5 )
        {
          v13 = (BadgePopup *)GUI::getInstance(Popover);
          GUI::removePopover(v13);
          return;
        }
      }
      v14 = (#986 *)operator new(280);
      Popover::Popover(v14, 1, a5);
      String::String(&v28, "sc/ui.sc");
      String::String(&v27, "popover_text_left");
      MovieClip = (MovieClip *)HomeScreen::getMovieClip((HomeScreen *)&v28, &v27, v15);
      String::~String(&v27);
      String::~String(&v28);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "text");
      TextField::setMultiLine(TextFieldByName, 1);
      MovieClip::setText(MovieClip, "text", a2);
      Popover::addContent(v14, MovieClip);
      Rect::Rect(&v26);
      DisplayObject::getGlobalBounds(a3, &v26);
      v19 = *(float *)&v26.top;
      v18 = *(float *)&v26.bottom;
      v20 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(&v26)));
      Height = Rect::getHeight(&v26);
      v23 = v19 + v20;
      if ( (a4 & 0xD) != 8 )
        v23 = v19;
      if ( (a4 & 0xD) == 1 )
        v24 = v19 + (float)(v20 * 0.5);
      else
        v24 = v23;
      if ( (a4 & 0x32) == 2 )
      {
        *(float *)&Height = *(float *)&Height * 0.5;
    LABEL_16:
        v18 = v18 + *(float *)&Height;
        goto LABEL_17;
      }
      if ( (a4 & 0x32) == 0x20 )
        goto LABEL_16;
    LABEL_17:
      v25 = (BadgePopup *)GUI::getInstance(v21);
      GUI::showPopover(v25, v14, v24, v18, 2);
      Rect::~Rect(&v26);
    }

    __int64 __fastcall MainHUD::update(LogicClientAvatar *this, float a2)
    {
      MainHUD::updateTopHUD(this, a2);
      return MainHUD::updateBottomHUD(this, a2);
    }

    void __fastcall MainHUD::updateTopHUD(LogicClientAvatar *this, float a2)
    {
      __int64 Instance; // x0
      #962 *PlayerAvatar; // x0
      #962 *v6; // x20
      __int64 Arena; // x0
      BadgePopup *isTrainingCamp; // x0
      __int64 v9; // x0
      int TotalValueOfPendingDataGained; // w0
      _BOOL4 v11; // w21
      __int64 CurrentPage; // x0
      int v13; // w21
      float v14; // s0
      #1257 *v15; // x0
      float ScrollAtPage; // s9
      float v17; // s10
      __int64 PageItemAt; // x0
      DisplayObject *v19; // x21
      long double v20; // q0
      float v21; // s9
      long double v22; // q0
      __int64 v23; // x21
      __int64 AvatarNameForUI; // x0
      __int64 v25; // x0
      TextField *v26; // x0
      __int64 v27; // x0
      int v28; // w21
      int v29; // w21
      LogicDataTables *v30; // x0
      float v31; // s0
      __int64 v32; // x22
      __int64 SellChestSound; // x0
      float v34; // s0
      float v35; // s9
      DisplayObject *v36; // x22
      float v37; // s0
      __int64 v38; // x0
      int v39; // w22
      int v40; // w22
      LogicDataTables *v41; // x0
      float v42; // s0
      __int64 v43; // x23
      __int64 DiamondsSound; // x0
      float v45; // s0
      float v46; // s9
      DisplayObject *v47; // x23
      float v48; // s0
      DisplayObject *v49; // x0
      __int64 v50; // x0
      int v51; // w21
      __int64 ExpLevelData; // x24
      int ExpLevel; // w22
      LogicDataTables *ExpPoints; // x0
      int v55; // w23
      #1364 *v56; // x0
      int v57; // w0
      int ExpToNextLevel; // w0
      vm_address_t *v59; // x0
      __int64 v60; // x0
      #1146 *Home; // x0
      int LastShownLevelUp; // w21
      #1130 *v63; // x0
      BadgePopup *v64; // x0
      __int64 v65; // x0
      BadgePopup *hasPendingDataGained; // x0
      char v67; // w20
      BadgePopup *v68; // x0
      #1102 *v69; // x20
      vm_address_t *updated; // x0
      GameMode *v71; // x0
      #1083 *v72; // x20
      Stage *v73; // x0
      __int64 v74; // x0
      BadgePopup *v75; // x0
      __int64 v76; // x0
      vm_address_t *v77; // x0
      __int64 v78; // x0
      #1047 *HomeScreen; // x0
      ClanPage *ClanPage; // x0
      String *NotificationCount; // x20
      __int64 MovieClipByName; // x0
      #1257 *v83; // x19
      MovieClip *v84; // x19
      int v85; // w1
      String v86; // [xsp+8h] [xbp-68h] BYREF
    
      Instance = GameMode::getInstance((vm_address_t *)this);
      PlayerAvatar = (#962 *)GameMode::getPlayerAvatar(Instance);
      v6 = PlayerAvatar;
      if ( !PlayerAvatar )
        return;
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      isTrainingCamp = (BadgePopup *)LogicArenaData::isTrainingCamp(Arena);
      *(_BYTE *)(*((_QWORD *)this + 48) + 8LL) = (unsigned __int8)isTrainingCamp ^ 1;
      *(_BYTE *)(*((_QWORD *)this + 49) + 8LL) = (unsigned __int8)isTrainingCamp ^ 1;
      v9 = GUI::getInstance(isTrainingCamp);
      TotalValueOfPendingDataGained = GUI::getTotalValueOfPendingDataGained(v9, 1);
      if ( TotalValueOfPendingDataGained >= 1 )
        *((_DWORD *)this + 119) = 1074580685;
      if ( *((_BYTE *)this + 273) )
      {
        v11 = TotalValueOfPendingDataGained > 0;
        CurrentPage = PageGUI::getCurrentPage(*((MessageManager **)this + 24));
        v13 = v11 | (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)CurrentPage + 384LL))(CurrentPage);
      }
      else
      {
        v13 = 0;
      }
      v14 = *((float *)this + 119) - a2;
      *((float *)this + 119) = v14;
      if ( v14 <= 0.0 || ((v13 ^ 1) & 1) == 0 )
      {
        updateAlpha(*((#1257 **)this + 35), v13, a2);
        updateAlpha(*((#1257 **)this + 36), v13, a2);
      }
      v15 = (#1257 *)*((_QWORD *)this + 37);
      if ( v15 )
      {
        updateAlpha(v15, *((_BYTE *)this + 273), a2);
        ScrollAtPage = PageGUI::getScrollAtPage(*((MessageManager **)this + 24), 1);
        v17 = ScrollAtPage - PageGUI::getScroll(*((MessageManager **)this + 24));
        PageItemAt = PageGUI::getPageItemAt(*((MessageManager **)this + 24), 2);
        v19 = (DisplayObject *)*((_QWORD *)this + 37);
        v20 = DisplayObject::getX(PageItemAt);
        v21 = (float)(v17 + *(float *)&v20) - ScrollAtPage;
        v22 = DisplayObject::getY(this);
        v15 = (#1257 *)DisplayObject::setPixelSnappedXY(v19, v21, *(float *)&v22);
      }
      v23 = *((_QWORD *)this + 39);
      if ( v23 )
      {
        AvatarNameForUI = MainHUD::getAvatarNameForUI(v15);
        MovieClipHelper::setTextAndScaleIfNecessary(v23, AvatarNameForUI, 0);
      }
      if ( *((_QWORD *)this + 43) )
      {
        v25 = LogicClientAvatar::getArena(v6);
        *(_BYTE *)(*((_QWORD *)this + 43) + 8LL) = LogicArenaData::isTrainingCamp(v25) ^ 1;
      }
      v26 = (TextField *)*((_QWORD *)this + 44);
      if ( v26 )
        v26 = (TextField *)TextField::setNumberText(v26, *((_DWORD *)v6 + 16), 0);
      v27 = GUI::getInstance(v26);
      v28 = GUI::getTotalValueOfPendingDataGained(v27, 1);
      if ( (int)LogicClientAvatar::getGold(v6) <= v28 )
        v29 = 0;
      else
        v29 = LogicClientAvatar::getGold(v6) - v28;
      v30 = (LogicDataTables *)TextField::setNumberText(*((TextField **)this + 54), v29, 1);
      v31 = *((float *)this + 116);
      if ( v29 != *((_DWORD *)this + 120) && v31 == 0.0 )
      {
        v32 = SoundManager::sm_pInstance;
        SellChestSound = LogicDataTables::getSellChestSound(v30);
        SoundManager::playSound(v32, SellChestSound, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
        *((_DWORD *)this + 116) = 1039516303;
        v31 = 0.12;
        goto LABEL_25;
      }
      if ( v31 > 0.0 )
      {
    LABEL_25:
        v34 = v31 - a2;
        *((float *)this + 116) = v34;
        if ( v34 <= 0.0 )
        {
          *((_DWORD *)this + 116) = 0;
          v30 = (LogicDataTables *)ColorTransform::setAddColor(
                                     (ColorTransform *)(*((_QWORD *)this + 50) + 9LL),
                                     0.0,
                                     0.0,
                                     0.0);
        }
        else
        {
          v35 = v34 / 0.12;
          ColorTransform::setAddColor(
            (ColorTransform *)(*((_QWORD *)this + 50) + 9LL),
            (float)(v34 / 0.12) * 0.4,
            (float)(v34 / 0.12) * 0.4,
            (float)(v34 / 0.12) * 0.4);
          v36 = (DisplayObject *)*((_QWORD *)this + 50);
          v37 = sinf(v35 * 3.1416);
          v30 = (LogicDataTables *)DisplayObject::setY(v36, fabsf(v37) * -5.0);
        }
      }
      v38 = GUI::getInstance(v30);
      v39 = GUI::getTotalValueOfPendingDataGained(v38, 2);
      if ( (int)LogicClientAvatar::getDiamonds(v6) <= v39 )
        v40 = 0;
      else
        v40 = LogicClientAvatar::getDiamonds(v6) - v39;
      v41 = (LogicDataTables *)TextField::setNumberText(*((TextField **)this + 53), v40, 1);
      v42 = *((float *)this + 117);
      if ( v40 != *((_DWORD *)this + 121) && v42 == 0.0 )
      {
        v43 = SoundManager::sm_pInstance;
        DiamondsSound = LogicDataTables::getGetDiamondsSound(v41);
        SoundManager::playSound(v43, DiamondsSound, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
        *((_DWORD *)this + 117) = 1039516303;
        v42 = 0.12;
    LABEL_35:
        v45 = v42 - a2;
        *((float *)this + 117) = v45;
        if ( v45 <= 0.0 )
        {
          *((_DWORD *)this + 117) = 0;
          ColorTransform::setAddColor((ColorTransform *)(*((_QWORD *)this + 51) + 9LL), 0.0, 0.0, 0.0);
          v49 = (DisplayObject *)*((_QWORD *)this + 51);
          v48 = 0.0;
        }
        else
        {
          v46 = v45 / 0.12;
          ColorTransform::setAddColor(
            (ColorTransform *)(*((_QWORD *)this + 51) + 9LL),
            (float)(v45 / 0.12) * 0.4,
            (float)(v45 / 0.12) * 0.4,
            (float)(v45 / 0.12) * 0.4);
          v47 = (DisplayObject *)*((_QWORD *)this + 51);
          v48 = fabsf(sinf(v46 * 3.1416)) * -5.0;
          v49 = v47;
        }
        v41 = (LogicDataTables *)DisplayObject::setY(v49, v48);
        goto LABEL_39;
      }
      if ( v42 > 0.0 )
        goto LABEL_35;
    LABEL_39:
      *((_DWORD *)this + 120) = v29;
      *((_DWORD *)this + 121) = v40;
      v50 = GUI::getInstance(v41);
      v51 = GUI::getTotalValueOfPendingDataGained(v50, 0);
      if ( *((_QWORD *)this + 46) )
      {
        ExpLevelData = LogicClientAvatar::getExpLevelData(v6);
        ExpLevel = LogicClientAvatar::getExpLevel(v6);
        ExpPoints = (LogicDataTables *)LogicClientAvatar::getExpPoints(v6);
        if ( (int)ExpPoints <= v51 )
        {
          v55 = 0;
        }
        else
        {
          ExpPoints = (LogicDataTables *)LogicClientAvatar::getExpPoints(v6);
          v55 = (_DWORD)ExpPoints - v51;
        }
        if ( ExpLevel >= (int)LogicDataTables::getMaxExpLevel(ExpPoints) )
        {
          v57 = LogicClientAvatar::getExpLevel(v6);
          v56 = (#1364 *)LogicDataTables::getExpLevel((unsigned int)(v57 - 1), 0);
        }
        else
        {
          v56 = (#1364 *)ExpLevelData;
        }
        ExpToNextLevel = LogicExpLevelData::getExpToNextLevel(v56);
        v59 = (vm_address_t *)ExpBar::update(*((#1130 **)this + 46), a2, v55, ExpLevel, ExpToNextLevel, v51);
        v60 = GameMode::getInstance(v59);
        Home = (#1146 *)LogicGameMode::getHome(*(#1028 **)(v60 + 112));
        LastShownLevelUp = LogicClientHome::getLastShownLevelUp(Home);
        v63 = (#1130 *)*((_QWORD *)this + 46);
        if ( v63 && (unsigned int)ExpBar::isAnimating(v63) )
        {
          *((_DWORD *)this + 119) = 1068708659;
        }
        else
        {
          v64 = (BadgePopup *)LogicClientAvatar::getExpLevel(v6);
          if ( (int)v64 > LastShownLevelUp )
          {
            *((float *)this + 119) = *((float *)this + 119) - a2;
            v65 = GUI::getInstance(v64);
            hasPendingDataGained = (BadgePopup *)GUI::hasPendingDataGained(v65);
            v67 = (char)hasPendingDataGained;
            v68 = (BadgePopup *)GUI::getInstance(hasPendingDataGained);
            if ( !GUI::getTopPopup(v68) && (v67 & 1) == 0 && *((float *)this + 119) <= 0.0 )
            {
              v69 = (#1102 *)operator new(32);
              updated = (vm_address_t *)LogicUpdateLastShownLevelUpCommand::LogicUpdateLastShownLevelUpCommand(v69);
              v71 = (GameMode *)GameMode::getInstance(updated);
              if ( (unsigned int)GameMode::addCommand(v71, v69, 1) )
              {
                v72 = (#1083 *)operator new(456);
                v73 = LevelUpPopup::LevelUpPopup(v72, LastShownLevelUp + 1);
                v74 = Stage::getInstance(v73);
                v75 = (BadgePopup *)DisplayObject::setPixelSnappedXY(v72, (float)*(int *)(v74 + 428) * 0.5, 0.0);
                v76 = GUI::getInstance(v75);
                v77 = (vm_address_t *)GUI::showPopup(v76, v72, 0, 0, 0);
                v78 = GameMode::getInstance(v77);
                HomeScreen = (#1047 *)GameMode::getHomeScreen(v78);
                ClanPage = (ClanPage *)HomeScreen::getClanPage(HomeScreen);
                ClanPage::checkIfClansAreUnlocked(ClanPage);
              }
            }
          }
        }
      }
      NotificationCount = (String *)HelpshiftManager::getNotificationCount((HelpshiftManager *)HelpshiftManager::sm_pInstance);
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 52) + 96LL), "notification");
      v83 = (#1257 *)MovieClipByName;
      if ( (int)NotificationCount < 1 )
      {
        *(_BYTE *)(MovieClipByName + 8) = 0;
      }
      else
      {
        *(_BYTE *)(MovieClipByName + 8) = 1;
        if ( MovieClip::getMovieClipByName((#1257 *)MovieClipByName, "num") )
        {
          v84 = (MovieClip *)MovieClip::getMovieClipByName(v83, "num");
          String::valueOf(&v86, NotificationCount, v85);
          MovieClip::setText(v84, "txt", &v86);
          String::~String(&v86);
        }
      }
    }

    __int64 __fastcall MainHUD::updateBottomHUD(LogicClientAvatar *this, float a2)
    {
      int v3; // w21
      DisplayObject *v4; // x20
      long double v5; // q0
      float v6; // s2
      float v7; // s3
      float v8; // s0
      float v9; // s1
      float v10; // s1
      float v11; // s2
      DisplayObject *v12; // x0
      int CurrentPageIndex; // w26
      Stage *PageCount; // x0
      int v15; // w21
      float v16; // s9
      float v17; // s10
      float v18; // s11
      float ScrollProg; // s0
      float v20; // s2
      float v21; // s11
      float v22; // s1
      float v23; // s2
      __int64 v24; // x20
      float v25; // s12
      float v26; // s13
      __int64 v27; // x28
      float *v28; // x8
      float v29; // s10
      float v30; // s9
      char isEnabled; // w21
      float v32; // s9
      char v33; // w22
      #1249 *v34; // x23
      long double v35; // q0
      float v36; // s1
      bool v37; // cc
      float v38; // s1
      #1249 *v40; // x21
      long double v41; // q0
      float v42; // s1
      bool v43; // cc
      float v44; // s1
      float v47; // [xsp+94h] [xbp-CCh]
      int v48; // [xsp+98h] [xbp-C8h]
      int v49; // [xsp+A4h] [xbp-BCh]
      float v50; // [xsp+B0h] [xbp-B0h]
    
      v3 = *((unsigned __int8 *)this + 272);
      v4 = (DisplayObject *)*((_QWORD *)this + 33);
      v5 = DisplayObject::getY(v4);
      if ( v3 )
      {
        if ( *(float *)&v5 < 0.0 )
          v6 = -*(float *)&v5;
        else
          v6 = *(float *)&v5;
        if ( v6 <= 0.1 )
        {
          LODWORD(v5) = 0;
        }
        else
        {
          v7 = (float)(a2 * 8.0) / 0.016667;
          if ( v7 >= 1.0 )
            *(float *)&v5 = (float)((float)(*(float *)&v5 * (float)(v7 + -1.0)) + 0.0) / v7;
        }
        v12 = v4;
      }
      else
      {
        v50 = *(float *)&v5;
        v8 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 96LL))(*((_QWORD *)this + 31));
        v9 = v50 - v8;
        if ( (float)(v50 - v8) < 0.0 )
          v9 = -(float)(v50 - v8);
        v37 = v9 > 0.1;
        v10 = v8;
        if ( v37 )
        {
          v11 = (float)(a2 * 8.0) / 0.016667;
          v10 = v50;
          if ( v11 >= 1.0 )
            v10 = (float)(v8 + (float)(v50 * (float)(v11 + -1.0))) / v11;
        }
        v12 = v4;
        *(float *)&v5 = v10;
      }
      DisplayObject::setY(v12, *(float *)&v5);
      CurrentPageIndex = PageGUI::getCurrentPageIndex(*((MessageManager **)this + 24));
      PageCount = (Stage *)PageGUI::getPageCount(*((MessageManager **)this + 24));
      v15 = (int)PageCount;
      v16 = (float)*(int *)(Stage::getInstance(PageCount) + 428LL);
      v17 = *((float *)this + 51);
      v18 = *((float *)this + 50);
      ScrollProg = PageGUI::getScrollProg(*((MessageManager **)this + 24));
      v20 = v17 + (float)((float)(v15 - 1) * v18);
      v21 = (float)(v16 * 0.5) - (float)(v20 * 0.5);
      v22 = *((float *)this + 51);
      v23 = v22 + (float)(v21 + (float)(ScrollProg * (float)(v20 - v22)));
      v49 = *((_DWORD *)this + 64);
      *((_DWORD *)this + 64) = CurrentPageIndex;
      if ( v15 >= 1 )
      {
        v47 = v23;
        v24 = 0;
        v25 = (float)(a2 * 4.0) / 0.016667;
        v26 = v25 + -1.0;
        v27 = v15 - 1;
        v48 = v15;
        do
        {
          v28 = (float *)((char *)this + 204);
          if ( CurrentPageIndex != (_DWORD)v24 )
            v28 = (float *)((char *)this + 200);
          v29 = *v28;
          v30 = *v28 * 0.5;
          if ( v24 < 1 )
            isEnabled = 0;
          else
            isEnabled = CustomButton::isEnabled(*(#1251 **)(*((_QWORD *)this + 26) + 8 * v24 - 8));
          v32 = v21 + v30;
          if ( v24 >= v27 )
            v33 = 0;
          else
            v33 = CustomButton::isEnabled(*(#1251 **)(*((_QWORD *)this + 26) + 8 * v24 + 8));
          v34 = *(#1249 **)(*((_QWORD *)this + 26) + 8 * v24);
          v35 = DisplayObject::getX(v34);
          v36 = *(float *)&v35 - v32;
          if ( (float)(*(float *)&v35 - v32) < 0.0 )
            v36 = -v36;
          v37 = v36 > 0.1;
          if ( v36 > 0.1 )
            v38 = *(float *)&v35;
          else
            v38 = v32;
          if ( v37 && v25 >= 1.0 )
            v38 = (float)(v32 + (float)(*(float *)&v35 * v26)) / v25;
          DisplayObject::setX(v34, v38);
          MainHUD::PageButton::update(v34, a2, CurrentPageIndex == (_DWORD)v24, CurrentPageIndex != v49, isEnabled, v33);
          v21 = v21 + v29;
          if ( v24 < v27 )
          {
            v40 = *(#1249 **)(*((_QWORD *)this + 28) + 8 * v24);
            v41 = DisplayObject::getX(v40);
            v42 = *(float *)&v41 - v21;
            if ( (float)(*(float *)&v41 - v21) < 0.0 )
              v42 = -v42;
            v43 = v42 > 0.1;
            if ( v42 > 0.1 )
              v44 = *(float *)&v41;
            else
              v44 = v21;
            if ( v43 && v25 >= 1.0 )
              v44 = (float)(v21 + (float)(*(float *)&v41 * v26)) / v25;
            DisplayObject::setX(v40, v44);
          }
          ++v24;
        }
        while ( v48 != (_DWORD)v24 );
        v22 = *((float *)this + 51);
        v23 = v47;
      }
      DisplayObject::setX(*((#1249 **)this + 30), v23 + (float)(v22 * -0.5));
      return DisplayObject::setWidth(*((#1249 **)this + 30), *((float *)this + 51));
    }

    __int64 __fastcall MainHUD::getBottomHUDHeight(LogicClientAvatar *this)
    {
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 96LL))(*((_QWORD *)this + 31));
    }

    __int64 __fastcall MainHUD::setTopHUDVisible(__int64 this, char a2)
    {
      *(_BYTE *)(this + 273) = a2;
      *(_BYTE *)(*(_QWORD *)(this + 296) + 64LL) = a2;
      *(_BYTE *)(*(_QWORD *)(this + 288) + 64LL) = a2;
      *(_BYTE *)(*(_QWORD *)(this + 280) + 64LL) = a2;
      return this;
    }

    __int64 __fastcall MainHUD::setBottomHUDVisible(__int64 this, char a2)
    {
      *(_BYTE *)(this + 272) = a2;
      *(_BYTE *)(*(_QWORD *)(this + 264) + 64LL) = a2;
      return this;
    }

    __int64 __fastcall MainHUD::getGoldIconDisplayObject(LogicClientAvatar *this)
    {
      return *((_QWORD *)this + 55);
    }

    __int64 __fastcall MainHUD::getDiamondsIconDisplayObject(LogicClientAvatar *this)
    {
      return *((_QWORD *)this + 56);
    }

    __int64 __fastcall MainHUD::getExpIconDisplayObject(LogicClientAvatar *this)
    {
      return *((_QWORD *)this + 46);
    }

    __int64 __fastcall MainHUD::setBottomGradientVisible(#1257 **this, char a2)
    {
      __int64 result; // x0
    
      result = MovieClip::getMovieClipByName(*(this + 31), "tutorial_grad");
      *(_BYTE *)(result + 8) = a2;
      return result;
    }

    __int64 __fastcall MainHUD::getPageButton(LogicClientAvatar *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 26) + 8LL * a2);
    }

    __int64 __fastcall MainHUD::setPageButtonEnabled(LogicClientAvatar *this, int a2, _BOOL4 a3)
    {
      __int64 result; // x0
    
      result = CustomButton::isEnabled(*(#1251 **)(*((_QWORD *)this + 26) + 8LL * a2));
      if ( ((unsigned int)result ^ a3) == 1 )
        return CustomButton::setEnabled(*(CustomButton **)(*((_QWORD *)this + 26) + 8LL * a2), a3);
      return result;
    }

    __int64 __fastcall MainHUD::refreshAllianceStatus(LogicClientAvatar *this)
    {
      __int64 Instance; // x0
      __int64 result; // x0
      #962 *v4; // x20
      const char *v5; // x1
      _DWORD *AllianceName; // x8
      __int64 v7; // x8
      const #916 *v8; // x21
      DataIcon *v9; // x20
      #1257 *v10; // x21
      String v11; // [xsp+8h] [xbp-38h] BYREF
    
      Instance = GameMode::getInstance((vm_address_t *)this);
      result = GameMode::getPlayerAvatar(Instance);
      v4 = (#962 *)result;
      if ( result )
      {
        if ( *((_QWORD *)this + 41) )
        {
          AllianceName = (_DWORD *)LogicClientAvatar::getAllianceName((#962 *)result);
          if ( !*AllianceName )
            AllianceName = (_DWORD *)StringTable::getString((#1308 *)"TID_NO_CLAN", v5);
          MovieClipHelper::setTextAndScaleIfNecessary(*((_QWORD *)this + 41), AllianceName, 0);
        }
        result = *((_QWORD *)this + 37);
        if ( result )
        {
          v7 = *((_QWORD *)this + 42);
          if ( v7 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 42));
            result = *((_QWORD *)this + 37);
          }
          *((_QWORD *)this + 42) = 0;
          *(_BYTE *)(MovieClip::getMovieClipByName((#1257 *)result, "clan_badge") + 8) = 1;
          result = LogicClientAvatar::getAllianceBadge(v4);
          v8 = (const #916 *)result;
          if ( result )
          {
            v9 = (DataIcon *)operator new(112);
            DataIcon::DataIcon(v9, v8);
            *((_QWORD *)this + 42) = v9;
            v10 = (#1257 *)*((_QWORD *)this + 37);
            String::String(&v11, "clan_badge");
            DataIcon::replaceInstanceWithIcon(
              (DisplayObject **)v9,
              v10,
              &v11,
              1,
              COERCE_LONG_DOUBLE((unsigned __int128)0),
              0,
              1,
              1,
              0);
            String::~String(&v11);
            result = MovieClip::getMovieClipByName(*((#1257 **)this + 37), "clan_badge");
            *(_BYTE *)(result + 8) = 0;
          }
        }
      }
      return result;
    }

    String *__fastcall MainHUD::getAvatarNameForUI(vm_address_t *this)
    {
      vm_address_t *Instance; // x0
      __int64 v2; // x0
      #962 *PlayerAvatar; // x0
      #962 *v4; // x19
      const char *v5; // x1
      unsigned __int8 v7; // w8
    
      Instance = (vm_address_t *)GameMode::getInstance(this);
      if ( Instance
        && (v2 = GameMode::getInstance(Instance),
            PlayerAvatar = (#962 *)GameMode::getPlayerAvatar(v2),
            (v4 = PlayerAvatar) != 0) )
      {
        if ( (unsigned int)LogicClientAvatar::getNameSetByUser(PlayerAvatar) )
          return (String *)LogicClientAvatar::getName(v4);
        else
          return (String *)StringTable::getString((#1308 *)"TID_YOU", v5);
      }
      else
      {
        v7 = atomic_load((unsigned __int8 *)&`guard variable for'MainHUD::getAvatarNameForUI(void)::s_emptyString);
        if ( (v7 & 1) == 0
          && __cxa_guard_acquire((__guard *)&`guard variable for'MainHUD::getAvatarNameForUI(void)::s_emptyString) )
        {
          String::String(&MainHUD::getAvatarNameForUI(void)::s_emptyString, "");
          __cxa_atexit(
            (void (__fastcall *)(void *))String::~String,
            &MainHUD::getAvatarNameForUI(void)::s_emptyString,
            (void *)&_mh_execute_header);
          __cxa_guard_release((__guard *)&`guard variable for'MainHUD::getAvatarNameForUI(void)::s_emptyString);
        }
        return &MainHUD::getAvatarNameForUI(void)::s_emptyString;
      }
    }

}; // end class MainHUD
