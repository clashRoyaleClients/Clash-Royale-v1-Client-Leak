class GameMain
{
public:

    AllianceStreamMessage *__fastcall GameMain::getInstance(AllianceStreamMessage *this)
    {
      AllianceStreamMessage *v1; // x19
    
      v1 = (AllianceStreamMessage *)GameMain::sm_pInstance;
      if ( !GameMain::sm_pInstance )
      {
        v1 = (AllianceStreamMessage *)operator new(368);
        GameMain::GameMain(v1);
        GameMain::sm_pInstance = (__int64)v1;
      }
      return v1;
    }

    __int64 __fastcall GameMain::containsDeviceType(__int64 a1, const String *a2)
    {
      __int64 v4; // x8
      __int64 v5; // x21
      __int64 v6; // x8
      __int64 v7; // x22
      int v8; // w0
    
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v4 = *(int *)(a1 + 12);
      v5 = v4 + 1;
      v6 = 24LL * ((int)v4 - 1);
      while ( --v5 >= 1 )
      {
        v7 = v6 - 24;
        v8 = String::contains((String *)(*(_QWORD *)a1 + v6), a2);
        v6 = v7;
        if ( v8 )
          return 1;
      }
      return 0;
    }

    String *__usercall GameMain::capabilityToString@<X0>(int a1@<W0>, String *a2@<X8>)
    {
      String *result; // x0
    
      switch ( a1 )
      {
        case 0:
          result = String::String(a2, "low");
          break;
        case 1:
          result = String::String(a2, "med");
          break;
        case 2:
          result = String::String(a2, "high");
          break;
        case 3:
          result = String::String(a2, "not_set");
          break;
        default:
          result = String::String(a2, "err");
          break;
      }
      return result;
    }

    void __fastcall GameMain::updateDeviceProfile(AllianceStreamMessage *this)
    {
      __int64 v2; // x22
      __int64 v3; // x21
      __int64 v4; // x20
      int v5; // w8
      int v6; // w8
      _QWORD *v7; // x0
      int v8; // w2
      Screen *v9; // x0
      Screen *DpiClass; // x0
      int v11; // w20
      int Height; // w0
      const char *v13; // x8
      const char *v14; // x10
      const char *v15; // x1
      int v16; // w2
      Screen *v17; // x0
      Screen *Width; // x20
      __int64 v19; // x0
      const char *v20; // x1
      int v21; // w2
      int v22; // w2
      int v23; // w2
      String v24; // [xsp+18h] [xbp-128h] BYREF
      String v25; // [xsp+30h] [xbp-110h] BYREF
      String v26; // [xsp+48h] [xbp-F8h] BYREF
      String v27; // [xsp+60h] [xbp-E0h] BYREF
      __siginfo v28; // [xsp+78h] [xbp-C8h] BYREF
      String v29; // [xsp+E0h] [xbp-60h] BYREF
      String v30; // [xsp+F8h] [xbp-48h] BYREF
    
      Application::getDeviceType((__uint64_t *)this);
      String::toLowerCase(&v30, &v29);
      String::~String();
      v2 = *(_QWORD *)(LogicDataTables::getClientGlobals() + 64);
      v3 = *(_QWORD *)(LogicDataTables::getClientGlobals() + 72);
      v4 = *(_QWORD *)(LogicDataTables::getClientGlobals() + 80);
      *((_DWORD *)this + 30) = 3;
      *((_DWORD *)this + 31) = 3;
      if ( (unsigned int)GameMain::containsDeviceType(v2, &v30) )
      {
        *((_DWORD *)this + 30) = 0;
      }
      else
      {
        if ( (unsigned int)GameMain::containsDeviceType(v3, &v30) )
          v5 = 1;
        else
          v5 = 2;
        *((_DWORD *)this + 30) = v5;
      }
      if ( (unsigned int)GameMain::containsDeviceType(v4, &v30) )
        v6 = 0;
      else
        v6 = 2;
      *((_DWORD *)this + 31) = v6;
      if ( (unsigned int)(*((_DWORD *)this + 30) - 1) <= 1 )
      {
        HIDWORD(v28.__pad[6]) = 0;
        glGetIntegerv(0xD33u, (GLint *)&v28.__pad[6] + 1);
        if ( SHIDWORD(v28.__pad[6]) <= 4095 )
          *((_DWORD *)this + 30) = 0;
      }
      if ( !s_resolutionOptions )
      {
        v7 = (_QWORD *)operator new(8);
        *v7 = &off_10046F788;
        s_resolutionOptions = (__int64)v7;
        DataLoaderFlash::sm_pResolutionProvider = (__int64)v7;
      }
      operator+(&v28.__pad[3], "DEVICE PROFILE: ", &v30);
      Debugger::hudPrint((__siginfo *)&v28.__pad[3], (const String *)0xFFFFFFFFLL, v8);
      String::~String();
      DpiClass = (Screen *)Screen::getDpiClass(v9);
      v11 = (int)DpiClass;
      Height = Screen::getHeight(DpiClass);
      v13 = "FALSE";
      if ( Height <= 1023 )
        v14 = "FALSE";
      else
        v14 = "TRUE";
      if ( v11 < 320 )
        v13 = v14;
      if ( Height <= 2047 )
        v15 = v13;
      else
        v15 = "TRUE";
      String::String((String *)&v28.si_addr, v15);
      operator+(v28.__pad, "  tablet: ", &v28.si_addr);
      Debugger::hudPrint((__siginfo *)v28.__pad, (const String *)0xFFFFFFFFLL, v16);
      String::~String();
      String::~String();
      Width = (Screen *)Screen::getWidth(v17);
      v19 = Screen::getHeight(Width);
      String::format((String *)"  screen: %dx%d", v20, Width, v19);
      Debugger::hudPrint(&v28, (const String *)0xFFFFFFFFLL, v21);
      String::~String();
      GameMain::capabilityToString(*((_DWORD *)this + 30), &v26);
      operator+(&v27, "  gfx capability:", &v26);
      Debugger::hudPrint((__siginfo *)&v27, (const String *)0xFFFFFFFFLL, v22);
      String::~String();
      String::~String();
      GameMain::capabilityToString(*((_DWORD *)this + 31), &v24);
      operator+(&v25, "  mem capability:", &v24);
      Debugger::hudPrint((__siginfo *)&v25, (const String *)0xFFFFFFFFLL, v23);
      String::~String();
      String::~String();
      String::~String();
    }

    __int64 __fastcall GameMain::isTabletVersion(AllianceStreamMessage *this)
    {
      Screen *DpiClass; // x0
      int v2; // w19
      int Height; // w0
    
      DpiClass = (Screen *)Screen::getDpiClass(this);
      v2 = (int)DpiClass;
      Height = Screen::getHeight(DpiClass);
      return (Height > 2047) | (unsigned int)(v2 < 320 && Height > 1023);
    }

    void __fastcall GameMain::GameMain(GameMain *this)
    {
      Path *v2; // x0
      const String *v3; // x1
      String v4; // [xsp+8h] [xbp-48h] BYREF
    
      Game::Game(this);
      *(_QWORD *)this = off_10046F608;
      *((_QWORD *)this + 3) = off_10046F718;
      *((_QWORD *)this + 4) = &off_10046F748;
      *((_QWORD *)this + 5) = off_10046F760;
      *((_QWORD *)this + 15) = 0x300000003LL;
      String::String((String *)((char *)this + 176));
      String::String((String *)((char *)this + 200));
      String::String((String *)((char *)this + 224));
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      String::String((String *)((char *)this + 272));
      v2 = (Path *)GameMain::initializeMembers(this);
      TextField::sm_renderOutlinesFirst = 1;
      SupercellSWF::sm_cacheLocally = 1;
      Path::cachePath(v2);
      Path::excludeBackup((Path *)&v4, v3);
      String::~String();
    }

    void __fastcall GameMain::~GameMain(AllianceStreamMessage *this)
    {
      Stage *Instance; // x0
      __int64 v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      AllianceStreamMessage *v6; // x0
      FontManager *v7; // x0
      NativeFont *v8; // x0
      DeviceLinkWindow *v9; // x0
      ReportUserStatusMessage *v10; // x0
      #1306 *v11; // x0
      LogicDiamondsAddedCommand *v12; // x0
      LogicBuyChestCommand *v13; // x0
      Shader *v14; // x0
      Renderer *v15; // x0
      PushNotificationService *v16; // x0
      NativeFont *v17; // x0
      OutOfSyncMessage *v18; // x0
      __int64 v19; // x0
      __int64 v20; // x20
      char *v21; // x21
      Stage *v22; // x0
      __int64 v23; // x8
      ResourceManager *v24; // x0
      NoAlliance *v25; // x0
      SoundSystem *v26; // x0
      SoundSystem *v27; // x0
      ClanPage *v28; // x0
      Debug *v29; // x0
      Track *v30; // x0
      BadgeItem *v31; // x0
      void *v32; // x20
      IllegalPlaceRenderer *v33; // x0
      __int64 v34; // x0
    
      *(_QWORD *)this = off_10046F608;
      *((_QWORD *)this + 3) = off_10046F718;
      *((_QWORD *)this + 4) = &off_10046F748;
      *((_QWORD *)this + 5) = off_10046F760;
      if ( *((_QWORD *)this + 8) )
      {
        Instance = (Stage *)Stage::getInstance(this);
        if ( Instance )
        {
          v3 = *((_QWORD *)this + 8);
          v4 = Stage::getInstance(Instance);
          InputSystem::removeListener(v3, v4);
        }
      }
      v5 = *((_QWORD *)this + 43);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 43) = 0;
      v6 = (AllianceStreamMessage *)HomeScreen::destructStatics();
      v7 = GameStateManager::destructInstance(v6);
      v8 = (NativeFont *)FontManager::destructInstance(v7);
      v9 = (DeviceLinkWindow *)NativeFont::deconstructCache(v8);
      v10 = (ReportUserStatusMessage *)BillingManager::destructInstance(v9);
      FriendManager::destructInstance(v10);
      NewsManager::destructInstance(v11);
      v13 = (LogicBuyChestCommand *)GameCenterManager::destructInstance(v12);
      FacebookManager::destructInstance(v13);
      LogicDataTables::destructInstance();
      LogicLocalization::destructInstance(v14);
      LocalNotificationManager::destructInstance(v15);
      NotificationManager::destructInstance(v16);
      NativeFont::freeFallbackFonts(v17);
      GameMain::releaseSpellIconShapes(this);
      v18 = (OutOfSyncMessage *)*((_QWORD *)this + 37);
      if ( v18 )
      {
        Sprite::removeAllChildren(v18);
        v19 = *((_QWORD *)this + 37);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        v20 = 0;
        *((_QWORD *)this + 37) = 0;
      }
      else
      {
        v20 = 0;
      }
      do
      {
        v21 = (char *)this + 8 * v20;
        v22 = (Stage *)*((_QWORD *)v21 + 13);
        if ( v22 )
          v22 = (Stage *)(*(__int64 (__fastcall **)(Stage *))(*(_QWORD *)v22 + 8LL))(v22);
        *((_QWORD *)v21 + 13) = 0;
        v23 = v20 + 4;
        --v20;
      }
      while ( v23 > 0 );
      v24 = (ResourceManager *)Stage::destructInstance(v22);
      ResourceManager::destroy(v24);
      HelpshiftManager::destructInstance();
      SoundManager::destructInstance(v25);
      v27 = (SoundSystem *)SoundSystem::getInstance(v26);
      if ( v27 )
        SoundSystem::destructInstance(v27);
      ServerConnection::destructInstance();
      GameSettings::destructInstance(v28);
      v30 = (Track *)Debug::deinit(v29);
      v31 = (BadgeItem *)Track::deinit(v30);
      v32 = (void *)*((_QWORD *)this + 8);
      if ( v32 )
      {
        InputSystem::~InputSystem(*((LogicFreeWorkerCommand **)this + 8));
        operator delete(v32);
      }
      *((_QWORD *)this + 8) = 0;
      BlurRenderer::destructStatics(v31);
      OutlineRenderer::destructStatics();
      ShadowRenderer::destructStatics();
      IllegalPlaceRenderer::destructStatics(v33);
      GameMain::sm_pInstance = 0;
      DataLoaderFlash::sm_pResolutionProvider = 0;
      if ( s_resolutionOptions )
        operator delete((void *)s_resolutionOptions);
      s_resolutionOptions = 0;
      GameMain::initializeMembers(this);
      String::~String();
      v34 = *((_QWORD *)this + 32);
      if ( v34 )
        operator delete[](v34);
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      String::~String();
      String::~String();
      String::~String();
      *((_QWORD *)this + 15) = 0x300000003LL;
      Game::~Game(this);
    }

    __int64 __fastcall GameMain::releaseSpellIconShapes(__int64 this)
    {
      int v1; // w8
      __int64 v2; // x19
      __int64 v3; // x20
      #1262 *v4; // x21
      int v5; // w8
    
      v1 = *(_DWORD *)(this + 268);
      v2 = (unsigned int)(v1 - 1);
      if ( v1 >= 1 )
      {
        v3 = this + 256;
        do
        {
          v4 = (#1262 *)LogicArrayList<Shape *>::remove(v3, v2);
          this = Shape::destructOriginal(v4);
          if ( v4 )
            this = (*(__int64 (__fastcall **)(#1262 *))(*(_QWORD *)v4 + 8LL))(v4);
          v5 = v2 + 1;
          v2 = (unsigned int)(v2 - 1);
        }
        while ( v5 > 1 );
      }
      return this;
    }

    // attributes: thunk
    void __fastcall GameMain::~GameMain(AllianceStreamMessage *this)
    {
      __ZN8GameMainD2Ev(this);
    }

    void __fastcall GameMain::~GameMain(AllianceStreamMessage *a1)
    {
      GameMain::~GameMain(a1);
      operator delete(a1);
    }

    __int64 __fastcall GameMain::init(__int64 a1, __int64 a2)
    {
      const String *v4; // x1
      const char *v5; // x1
      Path *v6; // x0
      const String *v7; // x4
      Path *v8; // x0
      ClanPage *v9; // x0
      DataLoaderFactory *v10; // x20
      Path *v11; // x0
      const char *v12; // x2
      DataLoaderFactory *v13; // x1
      FontManager *v14; // x0
      BillingManager *v15; // x0
      int v16; // w1
      NoAlliance *v17; // x0
      LogicBuyChestCommand *v18; // x0
      LogicDiamondsAddedCommand *v19; // x0
      ReportUserStatusMessage *v20; // x0
      #1306 *v21; // x0
      #1265 *v22; // x0
      Stage *v23; // x0
      Stage *Instance; // x20
      Screen *v25; // x0
      Screen *Width; // x0
      int v27; // w21
      int Height; // w0
      float v29; // s0
      __int64 i; // x22
      Sprite *v31; // x21
      LogicFreeWorkerCommand *v32; // x21
      LogicProgressSimulator *v33; // x0
      __int64 v34; // x0
      const String *v35; // x2
      BlurRenderer *v36; // x20
      SimpleBackgroundRenderer *v37; // x20
      String v39; // [xsp+18h] [xbp-108h] BYREF
      String v40; // [xsp+30h] [xbp-F0h] BYREF
      int v41; // [xsp+4Ch] [xbp-D4h]
      DataLoaderFactory *v42; // [xsp+50h] [xbp-D0h] BYREF
      String v43; // [xsp+60h] [xbp-C0h] BYREF
      String v44; // [xsp+78h] [xbp-A8h] BYREF
      String v45; // [xsp+90h] [xbp-90h] BYREF
      String v46; // [xsp+A8h] [xbp-78h] BYREF
      String v47; // [xsp+C0h] [xbp-60h] BYREF
      String v48; // [xsp+D8h] [xbp-48h] BYREF
    
      String::String(&v48, "506e8e7156764cdfb854e92d65b4029b");
      HockeyApp::start((DeviceLinkConfirmationScreen *)&v48, v4);
      String::~String();
      *(_QWORD *)(a1 + 8) = a2;
      *(_QWORD *)(a1 + 128) = 0;
      String::operator=(&ResourceManager::sm_debugInvalidSCResourceFile, "sc/debug.sc");
      String::operator=(&ResourceManager::sm_debugInvalidSCResourceExportName, "invalid_export_name");
      String::String(&v47, "https://service.labycore.net/t?app=scroll");
      String::String(&v46, "Drop");
      v6 = (Path *)String::format((String *)"%d.%d", v5, 2, 1306);
      Path::savePath(v6);
      Track::init((Track *)&v47, &v46, &v45, &v44, v7);
      String::~String();
      String::~String();
      String::~String();
      Path::savePath(v8);
      ServerConnection::constructInstance(&v43);
      String::~String();
      GameSettings::constructInstance(v9);
      v10 = (DataLoaderFactory *)operator new(8);
      v11 = DataLoaderFactory::DataLoaderFactory(v10);
      Path::dataPath(v11);
      if ( v41 + 1 > 8 )
        v13 = v42;
      else
        v13 = (DataLoaderFactory *)&v42;
      ResourceManager::init(v10, v13, v12);
      String::~String();
      v15 = (BillingManager *)FontManager::constructInstance(v14);
      BillingManager::constructInstance(v15);
      v17 = (NoAlliance *)SoundSystem::constructInstance((SoundSystem *)0x100, v16);
      SoundManager::constructInstance(v17);
      v18 = (LogicBuyChestCommand *)HelpshiftManager::constructInstance();
      v19 = (LogicDiamondsAddedCommand *)FacebookManager::constructInstance(v18);
      v20 = (ReportUserStatusMessage *)GameCenterManager::constructInstance(v19);
      FriendManager::constructInstance(v20);
      v22 = (#1265 *)NewsManager::constructInstance(v21);
      v23 = (Stage *)Stage::constructInstance(v22);
      Instance = (Stage *)Stage::getInstance(v23);
      v25 = (Screen *)Stage::setBackgroundColor(Instance, 0);
      Width = (Screen *)Screen::getWidth(v25);
      v27 = (int)Width;
      Height = Screen::getHeight(Width);
      Stage::init(Instance, 0, 0, v27, Height);
      GameMain::getPointSize(a1);
      Stage::setPointSize(Instance, v29);
      for ( i = 0; i < 5; ++i )
      {
        v31 = (Sprite *)operator new(96);
        Sprite::Sprite(v31, 1);
        *(_QWORD *)(a1 + 8 * i + 72) = v31;
        *((_BYTE *)v31 + 64) = 1;
        Stage::addChild(Instance, v31);
      }
      v32 = (LogicFreeWorkerCommand *)operator new(776);
      InputSystem::InputSystem(v32);
      *(_QWORD *)(a1 + 64) = v32;
      v33 = LocalNotificationManager::createInstance();
      GameStateManager::constructInstance(v33);
      v34 = GameStateManager::getInstance();
      GameStateManager::changeState(v34, 2);
      glGetIntegerv(0x8CA6u, (GLint *)(a1 + 140));
      TextInput::setDefaultKeyboardType(1);
      InputSystem::addListener(*(_QWORD *)(a1 + 64), Instance);
      String::String(&v40, "sc/ui.sc");
      String::String(&v39, "button_timeline");
      CustomButton::setDefaultTimelineResource((#1251 *)&v40, &v39, v35);
      String::~String();
      String::~String();
      v36 = (BlurRenderer *)operator new(112);
      BlurRenderer::BlurRenderer(v36);
      *(_QWORD *)(a1 + 296) = v36;
      v37 = (SimpleBackgroundRenderer *)operator new(16);
      SimpleBackgroundRenderer::SimpleBackgroundRenderer(v37);
      *(_QWORD *)(a1 + 344) = v37;
      GameMain::installEvent((GameMain *)a1);
      String::~String();
      return 1;
    }

    float __fastcall GameMain::getPointSize(Screen *a1)
    {
      Screen *Width; // x0
      int v2; // w20
      int Height; // w0
      int v4; // w2
      int v5; // w19
      float v6; // s0
      float v7; // s1
      float v8; // s0
      float v9; // s1
    
      Width = (Screen *)Screen::getWidth(a1);
      v2 = (int)Width;
      Height = Screen::getHeight(Width);
      v5 = Height;
      if ( v2 > 749 || Height > 1023 )
      {
        if ( v2 > 749 )
        {
          Debugger::hudPrint((__siginfo *)"###### SCALE C\n", (const char *)0xFFFFFFFFLL, v4);
          v8 = (float)v5;
          v9 = 1334.0;
        }
        else
        {
          Debugger::hudPrint((__siginfo *)"###### SCALE B\n", (const char *)0xFFFFFFFFLL, v4);
          v8 = (float)v2;
          v9 = 750.0;
        }
        v6 = v8 / v9;
        v7 = 1.3027;
      }
      else
      {
        Debugger::hudPrint((__siginfo *)"###### SCALE A\n", (const char *)0xFFFFFFFFLL, v4);
        v6 = (float)v5;
        v7 = 0.00097656;
      }
      return v6 * v7;
    }

    void __fastcall GameMain::installEvent(__int64 a1)
    {
      const String *v2; // x1
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v3, "scroll");
      *(_BYTE *)(a1 + 328) = Titan::installEvent((Titan *)&v3, v2);
      String::~String();
    }

    void __fastcall GameMain::getTargetResolution(AllianceStreamMessage *this, int *a2, int *a3)
    {
      *a2 = 750;
      *a3 = 1334;
    }

    void __fastcall GameMain::configureSurface(AllianceStreamMessage *this, SurfaceConfig *a2)
    {
      *(_QWORD *)&a2->depth = 0;
      *(_QWORD *)&a2->color = 0x3000022B8LL;
    }

    __int64 GameMain::touchPressed()
    {
      return 0;
    }

    __int64 GameMain::touchMoved()
    {
      return 0;
    }

    __int64 GameMain::touchReleased()
    {
      return 0;
    }

    void __fastcall GameMain::touchCancelled(AllianceStreamMessage *this)
    {
      ;
    }

    __int64 __fastcall GameMain::update(__int64 result, float a2, float a3)
    {
      long double v3; // q8
      __int64 v4; // x19
      xTimer *NativeTime; // x20
      uint64_t v6; // x0
      unsigned __int64 v7; // x2
      const char *v8; // x1
      long double PassedTimeMs; // q0
      int v10; // w2
      MovieClip *v11; // x0
      __int64 Instance; // x0
      __int64 v13; // x20
      __int64 v14; // x21
      __int64 v15; // x8
      OutOfSyncMessage *v16; // x1
      int v17; // w2
      float v18; // s0
      __int64 v19; // x8
      LogicProgressSimulator *v20; // x0
      BadgePopup *isLoading; // x0
      int TimeSinceLastServerKeepAliveInMs; // w19
      LogicTutorialManager *Ping; // x0
      float v24; // s0
      float v25; // s8
      LogicTutorialManager *isReplay; // x0
      LogicTutorialManager *v27; // x0
      int v28; // w20
      LogicTutorialManager *v29; // x0
      LogicTutorialManager *v30; // x0
      _BOOL4 isBattleEndHUDVisible; // w21
      int v32; // w23
      int v33; // w8
      bool v34; // cc
      __int64 v35; // x0
      String v36; // [xsp+10h] [xbp-70h] BYREF
      __siginfo var58; // [xsp+28h] [xbp-58h] BYREF
    
      v4 = result;
      if ( *(_BYTE *)(result + 321) )
        return result;
      if ( a3 >= 0.0 )
        *(float *)&v3 = a3;
      else
        *(float *)&v3 = 0.0;
      *(float *)(result + 128) = a2;
      *(_DWORD *)(result + 132) = LODWORD(v3);
      if ( *(_BYTE *)(result + 320) )
        GameMain::reloadGameInternal((GameMain *)result);
      ServerConnection::update((Messaging **)ServerConnection::sm_pInstance, *(float *)&v3);
      NativeTime = (xTimer *)xTimer::getNativeTime();
      v6 = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(NativeTime, v6, v7);
      if ( (int)*(float *)&PassedTimeMs >= 501 )
      {
        String::format((String *)"ServerConnection update time %d ms", v8, (unsigned int)(int)*(float *)&PassedTimeMs);
        Debugger::hudPrint(&var58, (const String *)0xFFFFFFFFLL, v10);
        String::~String();
      }
      v11 = (MovieClip *)InputSystem::update(*(LogicFreeWorkerCommand **)(v4 + 64));
      if ( *(_BYTE *)(v4 + 326) && !*(_BYTE *)(v4 + 324) )
        *(float *)&v3 = *(float *)&v3 * 0.125;
      EventTracker::updateTime(v11, *(float *)&v3);
      if ( FacebookManager::sm_pInstance )
        FacebookManager::update(FacebookManager::sm_pInstance, *(float *)&v3);
      if ( GameCenterManager::sm_pInstance )
        GameCenterManager::update(GameCenterManager::sm_pInstance, *(float *)&v3);
      SoundManager::update((NoAlliance *)SoundManager::sm_pInstance, *(float *)&v3);
      LocalNotificationManager::update(LocalNotificationManager::sm_pInstance, *(float *)&v3);
      Instance = GameStateManager::getInstance();
      GameStateManager::update(Instance, v3);
      if ( *(_BYTE *)(v4 + 322) )
      {
        v13 = *(unsigned int *)(v4 + 168);
        if ( (_DWORD)v13 )
        {
          v14 = *(unsigned int *)(v4 + 172);
          String::String(&v36);
          GameMain::showNativeDialog(v4, v13, v14, &v36);
          String::~String();
        }
      }
      v15 = *(_QWORD *)(v4 + 296);
      if ( !v15 || (v16 = *(OutOfSyncMessage **)(v4 + 304)) == 0 || (v17 = *(_DWORD *)(v4 + 316), v17 <= 0) )
      {
        v19 = *(_QWORD *)(v15 + 48);
    LABEL_26:
        if ( v19 )
          GameMain::disableBlurInternal((GameMain *)v4);
        goto LABEL_28;
      }
      v18 = *(float *)(v4 + 312);
      v19 = *(_QWORD *)(v15 + 48);
      if ( v18 <= 0.0 )
        goto LABEL_26;
      if ( !v19 )
        GameMain::enableBlurInternal((AllianceStreamMessage *)v4, v16, v18, v17);
    LABEL_28:
      if ( !LogicDataTables::getClientGlobals()
        || !GameStateManager::getInstance()
        || (v20 = (LogicProgressSimulator *)GameStateManager::getInstance(),
            isLoading = (BadgePopup *)GameStateManager::isLoading(v20),
            ((unsigned __int8)isLoading & 1) != 0)
        || !GUI::getInstance(isLoading) )
      {
        result = MessageManager::sm_pInstance;
        if ( !MessageManager::sm_pInstance )
          return result;
        return MessageManager::resetKeepAliveServerMessageReceivedTimer((MessageManager *)result);
      }
      TimeSinceLastServerKeepAliveInMs = MessageManager::getTimeSinceLastServerKeepAliveInMs(MessageManager::sm_pInstance);
      Ping = (LogicTutorialManager *)MessageManager::getPing((RectangleTimer *)MessageManager::sm_pInstance);
      v25 = v24;
      isReplay = (LogicTutorialManager *)BattleScreen::getInstance(Ping);
      if ( isReplay )
      {
        v27 = (LogicTutorialManager *)BattleScreen::getInstance(isReplay);
        isReplay = (LogicTutorialManager *)BattleScreen::isReplay(v27);
        v28 = (int)isReplay;
      }
      else
      {
        v28 = 0;
      }
      v29 = (LogicTutorialManager *)BattleScreen::getInstance(isReplay);
      if ( v29 )
      {
        v30 = (LogicTutorialManager *)BattleScreen::getInstance(v29);
        isBattleEndHUDVisible = BattleScreen::isBattleEndHUDVisible(v30);
      }
      else
      {
        isBattleEndHUDVisible = 0;
      }
      v32 = *(_DWORD *)(LogicDataTables::getClientGlobals() + 484);
      result = LogicDataTables::getClientGlobals();
      if ( ((v28 | isBattleEndHUDVisible) & 1) != 0 )
      {
        result = MessageManager::sm_pInstance;
        if ( !MessageManager::sm_pInstance )
          return result;
        return MessageManager::resetKeepAliveServerMessageReceivedTimer((MessageManager *)result);
      }
      v33 = *(_DWORD *)(result + 488);
      if ( v32 >= 1 && (float)TimeSinceLastServerKeepAliveInMs >= (float)v32
        || (v33 >= 1 ? (v34 = (int)(float)(v25 * 1000.0) < v33) : (v34 = 1), !v34) )
      {
        v35 = GUI::getInstance((BadgePopup *)result);
        return GUI::showBadConnection(v35);
      }
      return result;
    }

    __int64 __fastcall GameMain::reloadGameInternal(__int64 a1)
    {
      AllianceStreamMessage *v2; // x0
      LogicProgressSimulator *v3; // x0
      __int64 Instance; // x0
      NoAlliance *v5; // x0
      NoAlliance *v6; // x0
      __int64 result; // x0
    
      if ( *(_DWORD *)(a1 + 168) )
      {
        nativeDialogDismissAll();
        *(_DWORD *)(a1 + 172) = 0;
        *(_BYTE *)(a1 + 322) = 0;
        *(_DWORD *)(a1 + 168) = 0;
        *(_BYTE *)(a1 + 323) = 0;
      }
      *(_BYTE *)(a1 + 320) = 0;
      v2 = (AllianceStreamMessage *)MessageManager::sm_pInstance;
      if ( MessageManager::sm_pInstance )
        v2 = (AllianceStreamMessage *)MessageManager::clearBufferedServerCommands((MessageManager *)MessageManager::sm_pInstance);
      GameStateManager::destructInstance(v2);
      LogicDataTables::destructInstance();
      GameStateManager::constructInstance(v3);
      Instance = GameStateManager::getInstance();
      v5 = (NoAlliance *)GameStateManager::changeState(Instance, 2);
      SoundManager::destructInstance(v5);
      SoundManager::constructInstance(v6);
      ServerConnection::reconnect((_DWORD *)ServerConnection::sm_pInstance);
      if ( (unsigned int)BillingManager::isInitialized((DeviceLinkWindow *)BillingManager::sm_pInstance) )
        BillingManager::disableBilling((BillingManager *)BillingManager::sm_pInstance);
      result = NotificationManager::sm_pInstance;
      if ( NotificationManager::sm_pInstance )
        return NotificationManager::setDeviceTokenSent(NotificationManager::sm_pInstance, 0);
      return result;
    }

    void __fastcall GameMain::showNativeDialog(__int64 a1, int a2, int a3, _DWORD *a4)
    {
      int v7; // w8
      __int64 Instance; // x0
      const char *v9; // x1
      const char *v10; // x1
      const char *v11; // x1
      const char *v12; // x1
      const char *v13; // x1
      const char *v14; // x1
      const char *v15; // x1
      const char *v16; // x1
      const char *v17; // x1
      const char *v18; // x1
      const char *v19; // x1
      const char *v20; // x1
      const char *v21; // x1
      const char *v22; // x1
      String *String; // x22
      const char *v24; // x1
      const char *v25; // x1
      const char *v26; // x1
      const char *v27; // x1
      const char *v28; // x1
      const char *v29; // x1
      const char *v30; // x1
      const char *v31; // x1
      const char *v32; // x1
      const char *v33; // x1
      const char *v34; // x1
      const char *v35; // x1
      const char *v36; // x1
      const char *v37; // x1
      const char *v38; // x1
      const char *v39; // x1
      const char *v40; // x1
      const String *v41; // x2
      MovieClip *v42; // x0
      String v43; // [xsp+10h] [xbp-E0h] BYREF
      String v44; // [xsp+28h] [xbp-C8h] BYREF
      String v45; // [xsp+40h] [xbp-B0h] BYREF
      __int64 v46[3]; // [xsp+58h] [xbp-98h] BYREF
      String v47; // [xsp+70h] [xbp-80h] BYREF
      String v48; // [xsp+88h] [xbp-68h] BYREF
      String v49; // [xsp+A0h] [xbp-50h] BYREF
      String v50; // [xsp+B8h] [xbp-38h] BYREF
    
      v7 = *(_DWORD *)(a1 + 168);
      if ( (v7 != a2 || *(_DWORD *)(a1 + 172) != a3 || *(_BYTE *)(a1 + 322)) && (!v7 || *(_BYTE *)(a1 + 322)) )
      {
        if ( a2 != 10 )
          *(_BYTE *)(a1 + 323) = 1;
        *(_DWORD *)(a1 + 168) = a2;
        *(_DWORD *)(a1 + 172) = a3;
        Instance = GameStateManager::getInstance();
        if ( (GameStateManager::isInitialLoadingDone(Instance) & 1) != 0 )
        {
          *(_BYTE *)(a1 + 322) = 0;
          String::String(&v50, "");
          String::String(&v49, "");
          String::String(&v48, "");
          String::String(&v47, "");
          switch ( a2 )
          {
            case 1:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_OUT_OF_SYNC_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_OUT_OF_SYNC", v10);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_OUT_OF_SYNC_BUTTON", v11);
              String::operator=(&v48);
              break;
            case 2:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_AUTO_DISCONNECTED_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_AUTO_DISCONNECTED", v12);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_AUTO_DISCONNECTED_BUTTON", v13);
              String::operator=(&v48);
              break;
            case 3:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_CONNECTION_FAILED_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_CONNECTION_FAILED", v14);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_CONNECTION_FAILED_BUTTON", v15);
              String::operator=(&v48);
              break;
            case 4:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_CONNECTION_LOST_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_CONNECTION_LOST", v16);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_CONNECTION_LOST_BUTTON", v17);
              String::operator=(&v48);
              break;
            case 5:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_WRONG_CLIENT_VERSION_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_WRONG_CLIENT_VERSION", v18);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_WRONG_CLIENT_VERSION_BUTTON", v19);
              String::operator=(&v48);
              break;
            case 6:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_SERVER_MAINTENANCE_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_SERVER_MAINTENANCE", v20);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_SERVER_MAINTENANCE_BUTTON", v21);
              String::operator=(&v48);
              break;
            case 7:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGIN_FAILED_TITLE", v9);
              String::operator=(&v50);
              String = (String *)StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGIN_FAILED", v22);
              String::format((String *)" (%d)", v24, *(unsigned int *)(a1 + 172));
              operator+(v46, String, &v45);
              String::operator=(&v49);
              String::~String();
              String::~String();
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGIN_FAILED_BUTTON", v25);
              String::operator=(&v48);
              break;
            case 8:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGIN_FAILED_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGIN_FAILED", v26);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGIN_FAILED_BUTTON", v27);
              String::operator=(&v48);
              break;
            case 9:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_BANNED_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_BANNED", v28);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_BANNED_BUTTON", v29);
              String::operator=(&v48);
              break;
            case 10:
              StringTable::getString((#1308 *)"TID_INFO_POP_UP_IAP_NOTE_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_INFO_POP_UP_IAP_NOTE", v30);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_INFO_POP_UP_IAP_NOTE_BUTTON", v31);
              String::operator=(&v48);
              StringTable::getString((#1308 *)"TID_TERMS_OF_SERVICE_BUTTON", v32);
              String::operator=(&v47);
              break;
            case 11:
              StringTable::getString((#1308 *)"TID_INFO_SERVER_ERROR_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_INFO_SERVER_ERROR", v33);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_INFO_SERVER_ERROR_BUTTON", v34);
              String::operator=(&v48);
              break;
            case 12:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_PURCHASE_FAILED_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_PURCHASE_FAILED", v35);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_PURCHASE_FAILED_BUTTON", v36);
              String::operator=(&v48);
              break;
            case 13:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_UNLOCK_UNAVAILABLE_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_UNLOCK_UNAVAILABLE", v37);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGGED_UNLOCK_UNAVAILABLE_BUTTON", v38);
              String::operator=(&v48);
              break;
            case 14:
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGGED_FROM_ANOTHER_DEVICE_TITLE", v9);
              String::operator=(&v50);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGGED_FROM_ANOTHER_DEVICE", v39);
              String::operator=(&v49);
              StringTable::getString((#1308 *)"TID_ERROR_POP_UP_LOGGED_FROM_ANOTHER_DEVICE_BUTTON", v40);
              String::operator=(&v48);
              break;
            default:
              break;
          }
          if ( *a4 )
            String::operator=(&v49);
          if ( a2 == 10 )
          {
            String::String(&v44, "IAPMessageShown");
            EventTracker::sendEvent((MovieClip *)&EventTracker::EVENT_LABEL_TUTORIAL, &v44, v41);
            String::~String();
            EventTracker::flush(v42);
          }
          String::String(&v43, "");
          nativeDialog((INativeDialogListener *)(a1 + 32), &v50, &v49, &v48, &v47, &v43);
          String::~String();
          String::~String();
          String::~String();
          String::~String();
          String::~String();
        }
        else
        {
          *(_BYTE *)(a1 + 322) = 1;
        }
      }
    }

    __int64 __fastcall GameMain::enableBlurInternal(DisplayObject **this, OutOfSyncMessage *a2, float a3, int a4)
    {
      __int64 v8; // x22
    
      v8 = *((_QWORD *)a2 + 6);
      DisplayObject::setXY(*(this + 37), 0.0, 0.0);
      BlurRenderer::setStrength((__int64)*(this + 37), a3);
      BlurRenderer::setIterations((__int64)*(this + 37), a4);
      BlurRenderer::refresh((__int64)*(this + 37));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 168LL))(
        v8,
        *(this + 37),
        *((unsigned int *)a2 + 14));
      return (*(__int64 (__fastcall **)(_QWORD, OutOfSyncMessage *))(*(_QWORD *)*(this + 37) + 160LL))(*(this + 37), a2);
    }

    __int64 __fastcall GameMain::disableBlurInternal(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 296);
      if ( result && *(_QWORD *)(result + 48) )
      {
        if ( (int)Sprite::getNumChildren(result) >= 1 )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 296) + 48LL) + 168LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 296) + 48LL),
            **(_QWORD **)(*(_QWORD *)(a1 + 296) + 72LL),
            *(unsigned int *)(*(_QWORD *)(a1 + 296) + 56LL));
        DisplayObject::removeFromParent(*(#1249 **)(a1 + 296));
        return Sprite::removeAllChildren(*(OutOfSyncMessage **)(a1 + 296));
      }
      return result;
    }

    void __fastcall GameMain::draw(__int64 a1)
    {
      LogicProgressSimulator *Instance; // x0
      Stage *v3; // x0
      LogicTutorialManager *v4; // x19
      Screen *SimpleBackgroundEnabled; // x0
      int v6; // w8
      Screen *Width; // x0
      int v8; // w21
      int Height; // w0
      AllianceStreamMessage *v10; // x0
      LogicTutorialManager *started; // x0
      LogicTutorialManager *v12; // x0
      __int64 RenderSystem; // x0
      LogicTutorialManager *updated; // x0
      LogicTutorialManager *v15; // x0
      LogicJSONObject *v16; // x0
      LogicTutorialManager *v17; // x0
      __int64 v18; // x0
      AllianceStreamMessage *v19; // x0
      LogicTutorialManager *v20; // x0
      LogicTutorialManager *v21; // x0
      __int64 v22; // x0
      LogicTutorialManager *v23; // x0
      LogicTutorialManager *v24; // x0
      LogicJSONObject *v25; // x0
      Screen *v26; // x0
      Screen *v27; // x0
      int v28; // w21
      int v29; // w0
      LogicTutorialManager *v30; // x0
      __int64 v31; // x0
      LogicTutorialManager *v32; // x0
      LogicTutorialManager *v33; // x0
      __int64 v34; // x0
      OutlineRenderer *v35; // x0
      Stage *v36; // x21
      Screen *isInitialized; // x0
      Screen *v38; // x0
      int v39; // w22
      int v40; // w0
    
      if ( !*(_BYTE *)(a1 + 321) )
      {
        Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
        GameStateManager::draw(Instance);
        v4 = (LogicTutorialManager *)Stage::getInstance(v3);
        SimpleBackgroundEnabled = (Screen *)BattleScreen::getInstance(v4);
        if ( !SimpleBackgroundEnabled )
          *(_DWORD *)(a1 + 352) = 0;
        if ( !*(_DWORD *)(a1 + 120)
          && (SimpleBackgroundEnabled = (Screen *)SimpleBackgroundRenderer::getSimpleBackgroundEnabled(*(xTimer **)(a1 + 344)),
              (_DWORD)SimpleBackgroundEnabled)
          && (SimpleBackgroundEnabled = (Screen *)BattleScreen::getInstance(SimpleBackgroundEnabled)) != 0 )
        {
          v6 = *(_DWORD *)(a1 + 352) + 1;
          *(_DWORD *)(a1 + 352) = v6;
          if ( v6 < 2 )
          {
            Width = (Screen *)Screen::getWidth(SimpleBackgroundEnabled);
            v8 = (int)Width;
            Height = Screen::getHeight(Width);
            v10 = (AllianceStreamMessage *)Stage::init(v4, 0, 0, v8, Height);
            *(_BYTE *)(*((_QWORD *)GameMain::getInstance(v10) + 13) + 8LL) = 0;
            started = (LogicTutorialManager *)SimpleBackgroundRenderer::startBackgroundToTextureRender(*(GLint **)(a1 + 344));
            v12 = (LogicTutorialManager *)BattleScreen::getInstance(started);
            RenderSystem = BattleScreen::getRenderSystem(v12);
            updated = (LogicTutorialManager *)RenderSystem::setUpdateLowendStaticBackground(RenderSystem, 1, 1);
            v15 = (LogicTutorialManager *)BattleScreen::getInstance(updated);
            v16 = (LogicJSONObject *)BattleScreen::getRenderSystem(v15);
            v17 = (LogicTutorialManager *)RenderSystem::setShowHud(v16, 0);
            v18 = BattleScreen::getInstance(v17);
            (*(void (__fastcall **)(__int64, long double, long double))(*(_QWORD *)v18 + 448LL))(
              v18,
              COERCE_LONG_DOUBLE((unsigned __int128)0),
              COERCE_LONG_DOUBLE((unsigned __int128)0));
            Stage::render(v4, *(float *)(a1 + 132), 1);
            Stage::unbindRender(v4);
            v19 = (AllianceStreamMessage *)SimpleBackgroundRenderer::stopBackgroundToTextureRender(*(xTimer **)(a1 + 344));
            *(_BYTE *)(*((_QWORD *)GameMain::getInstance(v19) + 13) + 8LL) = 1;
          }
          v20 = (LogicTutorialManager *)SimpleBackgroundRenderer::drawBackgroundToScreen(*(xTimer **)(a1 + 344));
          v21 = (LogicTutorialManager *)BattleScreen::getInstance(v20);
          v22 = BattleScreen::getRenderSystem(v21);
          v23 = (LogicTutorialManager *)RenderSystem::setUpdateLowendStaticBackground(v22, 1, 0);
          v24 = (LogicTutorialManager *)BattleScreen::getInstance(v23);
          v25 = (LogicJSONObject *)BattleScreen::getRenderSystem(v24);
          v26 = (Screen *)RenderSystem::setShowHud(v25, 1);
          v27 = (Screen *)Screen::getWidth(v26);
          v28 = (int)v27;
          v29 = Screen::getHeight(v27);
          v30 = (LogicTutorialManager *)Stage::init(v4, 0, 0, v28, v29);
          v31 = BattleScreen::getInstance(v30);
          (*(void (__fastcall **)(__int64, long double, long double))(*(_QWORD *)v31 + 448LL))(
            v31,
            COERCE_LONG_DOUBLE((unsigned __int128)0),
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          Stage::render(v4, *(float *)(a1 + 132), 0);
          v32 = (LogicTutorialManager *)Stage::unbindRender(v4);
          v33 = (LogicTutorialManager *)BattleScreen::getInstance(v32);
          v34 = BattleScreen::getRenderSystem(v33);
          v35 = (OutlineRenderer *)RenderSystem::setUpdateLowendStaticBackground(v34, 0, 1);
        }
        else
        {
          v36 = (Stage *)Stage::getInstance(SimpleBackgroundEnabled);
          isInitialized = (Screen *)Stage::isInitialized(v36);
          if ( ((unsigned __int8)isInitialized & 1) == 0 )
          {
            v38 = (Screen *)Screen::getWidth(isInitialized);
            v39 = (int)v38;
            v40 = Screen::getHeight(v38);
            Stage::init(v36, 0, 0, v39, v40);
          }
          v35 = (OutlineRenderer *)Stage::render(v36, *(float *)(a1 + 132), 1);
        }
        if ( (LogicVersion::isProd(v35) & 1) == 0 )
        {
          Stage::unbindRender(v4);
          glUseProgram(0);
        }
      }
    }

    __int64 __fastcall GameMain::reloadGame(__int64 result)
    {
      *(_BYTE *)(result + 320) = 1;
      return result;
    }

    float __fastcall GameMain::getDeltaTime(__int64 a1)
    {
      return 1.0 / (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8));
    }

    float __fastcall GameMain::getTime(__int64 a1)
    {
      return *(float *)(a1 + 128);
    }

    __int64 __fastcall GameMain::setSleep(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    }

    #1243 *__fastcall GameMain::setHibernate(#1243 *result, int a2)
    {
      char v2; // w20
      __int64 v3; // x19
      __int64 Messaging; // x0
      char isConnected; // w21
      BadgePopup *v6; // x0
      BadgePopup *Instance; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      VisitHomeMessage *v10; // x0
      xTimer *v11; // x20
      uint64_t NativeTime; // x0
      unsigned __int64 v13; // x2
      float v14; // s8
      __int64 v15; // x0
      __int64 v16; // x20
      char v17; // w0
    
      v2 = a2;
      v3 = (__int64)result;
      if ( *((unsigned __int8 *)result + 321) != a2 )
      {
        *((_BYTE *)result + 321) = a2;
        if ( ServerConnection::sm_pInstance && ServerConnection::getMessaging((LogicBattle *)ServerConnection::sm_pInstance) )
        {
          Messaging = ServerConnection::getMessaging((LogicBattle *)ServerConnection::sm_pInstance);
          isConnected = Messaging::isConnected(Messaging);
        }
        else
        {
          isConnected = 0;
        }
        if ( MessageManager::sm_pInstance )
        {
          v6 = (BadgePopup *)MessageManager::resetKeepAliveServerMessageReceivedTimer((MessageManager *)MessageManager::sm_pInstance);
          Instance = (BadgePopup *)GUI::getInstance(v6);
          if ( Instance )
          {
            v8 = GUI::getInstance(Instance);
            GUI::hideBadConnection(v8);
          }
        }
        if ( *(_BYTE *)(v3 + 321) )
        {
          if ( LocalNotificationManager::sm_pInstance )
            LocalNotificationManager::resetNotifications((__int64 *)LocalNotificationManager::sm_pInstance);
          if ( HelpshiftManager::sm_pInstance )
          {
            if ( GameMode::getInstance() )
            {
              v9 = GameMode::getInstance();
              if ( (unsigned int)LogicGameMode::getState(*(_QWORD *)(v9 + 112)) )
                HelpshiftManager::storeAvatarTier((vm_address_t *)HelpshiftManager::sm_pInstance);
            }
          }
        }
        if ( (v2 & 1) == 0 )
        {
          *(_DWORD *)(v3 + 136) = 0;
          result = (#1243 *)LocalNotification::setBadgeNumber(0, a2);
          if ( (isConnected & 1) != 0 )
          {
            v11 = *(xTimer **)(v3 + 160);
            NativeTime = xTimer::getNativeTime();
            LODWORD(v14) = COERCE_UNSIGNED_INT128(xTimer::getPassedTimeMs(v11, NativeTime, v13));
            v15 = GameMode::getInstance();
            v16 = v15;
            if ( v15 )
            {
              v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
              if ( v14 < 60000.0 && (v17 & 1) != 0 )
                return (#1243 *)(*(__int64 (__fastcall **)(__int64, float))(*(_QWORD *)v16 + 112LL))(v16, v14 * 0.001);
            }
          }
          else if ( !ServerConnection::sm_pInstance || !*(_DWORD *)ServerConnection::sm_pInstance )
          {
            return result;
          }
          return (#1243 *)GameMain::reloadGameInternal(v3);
        }
        *(_QWORD *)(v3 + 160) = xTimer::getNativeTime();
        if ( LocalNotificationManager::sm_pInstance )
          LocalNotificationManager::resetNotifications((__int64 *)LocalNotificationManager::sm_pInstance);
        v10 = (VisitHomeMessage *)GameMode::getInstance();
        if ( v10 )
          GameMode::hibernateStarted(v10);
        return EventTracker::loggedOut(v10);
      }
      return result;
    }

    void __fastcall GameMain::setLandscape(Stage *a1, int a2)
    {
      char v2; // w19
      float v4; // s1
      float v5; // s8
      __int64 v6; // x21
      _BYTE *v7; // x22
      float v8; // [xsp+0h] [xbp-40h]
    
      v2 = a2;
      if ( a2 != *((unsigned __int8 *)a1 + 144) )
      {
        v4 = 0.0;
        if ( a2 )
          v5 = -90.0;
        else
          v5 = 0.0;
        if ( a2 )
          v4 = (float)*(int *)(Stage::getInstance(a1) + 432LL);
        v8 = v4;
        v6 = 0;
        v7 = (char *)a1 + 72;
        do
        {
          DisplayObject::rotate(*(DisplayObject **)&v7[v6], v5);
          DisplayObject::setY(*(DisplayObject **)&v7[v6], v8);
          v6 += 8;
        }
        while ( v6 != 40 );
        *((_BYTE *)a1 + 144) = v2;
      }
    }

    __int64 __fastcall GameMain::getStageWidth(unsigned __int8 *a1)
    {
      int v1; // w19
      __int64 Instance; // x0
      unsigned int *v3; // x8
    
      v1 = a1[144];
      Instance = Stage::getInstance((Stage *)a1);
      v3 = (unsigned int *)(Instance + 432);
      if ( !v1 )
        v3 = (unsigned int *)(Instance + 428);
      return *v3;
    }

    __int64 __fastcall GameMain::getStageHeight(unsigned __int8 *a1)
    {
      int v1; // w19
      __int64 Instance; // x0
      unsigned int *v3; // x8
    
      v1 = a1[144];
      Instance = Stage::getInstance((Stage *)a1);
      v3 = (unsigned int *)(Instance + 428);
      if ( !v1 )
        v3 = (unsigned int *)(Instance + 432);
      return *v3;
    }

    bool __fastcall GameMain::isNativeDialogVisible(AllianceStreamMessage *this)
    {
      return *((_DWORD *)this + 42) != 0;
    }

    void __fastcall GameMain::dialogDidCancel(__int64 a1, const String *a2)
    {
      int v3; // w9
      int v4; // w8
      const String *v5; // x2
      MovieClip *v6; // x0
      __int64 ClientGlobals; // x0
      const String *v8; // x1
      #1285 *v9; // x0
      const String *v10; // x2
      MovieClip *v11; // x0
      String v12; // [xsp+0h] [xbp-40h] BYREF
      String v13; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = *(_DWORD *)(a1 + 168);
      if ( v3 )
      {
        v4 = *(unsigned __int8 *)(a1 + 323);
        *(_DWORD *)(a1 + 168) = 0;
        *(_BYTE *)(a1 + 322) = 0;
        *(_DWORD *)(a1 + 172) = 0;
        *(_BYTE *)(a1 + 323) = 0;
        if ( v3 != 10 )
        {
          if ( v3 == 5 )
          {
            v9 = (#1285 *)(a1 + 176);
            if ( *(_DWORD *)(a1 + 176) )
            {
              Application::openURL(v9, a2);
              return;
            }
            Debugger::warning((__siginfo *)"Application update URL is not defined!", (const char *)a2);
          }
          goto LABEL_13;
        }
        if ( (_DWORD)a2 == 1 )
        {
          String::String(&v12, "IAPTosShown");
          EventTracker::sendEvent((MovieClip *)&EventTracker::EVENT_LABEL_TUTORIAL, &v12, v5);
          String::~String();
          EventTracker::flush(v6);
          ClientGlobals = LogicDataTables::getClientGlobals();
          Application::openURL((#1285 *)(ClientGlobals + 424), v8);
    LABEL_13:
          *(_BYTE *)(a1 + 320) = 1;
          return;
        }
        if ( !(_DWORD)a2 )
        {
          String::String(&v13, "IAPMessageAccepted");
          EventTracker::sendEvent((MovieClip *)&EventTracker::EVENT_LABEL_TUTORIAL, &v13, v10);
          String::~String();
          EventTracker::flush(v11);
          GameSettings::setIAPInfoShown((ClanPage *)GameSettings::sm_pInstance);
          return;
        }
        if ( v4 )
          goto LABEL_13;
      }
    }

    __int64 __fastcall GameMain::loadAsset(ResourceManager *a1, const String *a2)
    {
      ResourceListener *v4; // x2
      LogicGlobalData *started; // x0
      String v6; // [xsp+8h] [xbp-38h] BYREF
    
      if ( !*(_DWORD *)a1 || (ResourceManager::isResourceLoaded(a1, a2) & 1) != 0 )
        return 0;
      ResourceListener::ResourceListener((ResourceListener *)&v6);
      GameMain::addResourceToLoad(a1, &v6, v4);
      started = (LogicGlobalData *)ResourceListener::startLoading((ResourceListener *)&v6);
      do
      {
        ResourceManager::loadNextResource(started);
        started = (LogicGlobalData *)ResourceListener::isLoaded(&v6);
      }
      while ( !(_DWORD)started );
      ResourceListener::~ResourceListener((ResourceListener *)&v6);
      return 1;
    }

    __int64 __fastcall GameMain::addResourceToLoad(String *a1, ResourceListener *a2)
    {
      if ( (String::endsWith(a1, ".ogg") & 1) != 0 || (unsigned int)String::endsWith(a1, ".m4a") )
        return ResourceListener::addMusicFile(a2, a1);
      else
        return ResourceListener::addFile(a2, a1, -1, -1, -1, -1);
    }

    void __fastcall GameMain::keyDown(AllianceStreamMessage *this)
    {
      ;
    }

    __int64 __fastcall GameMain::keyUp(AllianceStreamMessage *this)
    {
      __int64 result; // x0
      LogicProgressSimulator *Instance; // x0
    
      result = GameStateManager::getInstance();
      if ( result )
      {
        Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
        return GameStateManager::keyUp(Instance);
      }
      return result;
    }

    __int64 __fastcall GameMain::isEditorModeActive(AllianceStreamMessage *this)
    {
      return 0;
    }

    __int64 __fastcall GameMain::handleURL(__int64 a1, const char *a2, const char *a3)
    {
      FacebookConnection *v3; // x0
    
      if ( FacebookManager::sm_pInstance && (v3 = *(FacebookConnection **)(FacebookManager::sm_pInstance + 24)) != 0 )
        return FacebookConnection::handleURL(v3, a2, a3);
      else
        return 0;
    }

    __int64 __fastcall GameMain::onMemoryWarning(__int64 a1, __int64 a2, int a3)
    {
      return Debugger::hudPrint((__siginfo *)"Memory warning handler", (const char *)0xFFFFFFFFLL, a3);
    }

    Stage *__fastcall GameMain::onResize(Stage *result, int a2, int a3)
    {
      if ( a2 && a3 )
      {
        result = (Stage *)Stage::getInstance(result);
        if ( result )
          return (Stage *)Stage::init(result, 0, 0, a2, a3);
      }
      return result;
    }

    void __fastcall GameMain::mouseWheel(AllianceStreamMessage *this)
    {
      ;
    }

    void __fastcall GameMain::charPressed(AllianceStreamMessage *this)
    {
      ;
    }

    void __fastcall GameMain::startEditor(AllianceStreamMessage *this)
    {
      ;
    }

    __int64 __fastcall GameMain::enableBlur(__int64 this, OutOfSyncMessage *a2, float a3, int a4)
    {
      if ( !*(_QWORD *)(*(_QWORD *)(this + 296) + 48LL) )
      {
        *(_QWORD *)(this + 304) = a2;
        *(float *)(this + 312) = a3;
        *(_DWORD *)(this + 316) = a4;
      }
      return this;
    }

    __int64 __fastcall GameMain::disableBlur(__int64 a1, int a2)
    {
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      if ( a2 )
        return GameMain::disableBlurInternal(a1);
      return a1;
    }

    __int64 __fastcall GameMain::getStartEditorMode(AllianceStreamMessage *this)
    {
      return 0;
    }

    __int64 __fastcall GameMain::exitRequested(AllianceStreamMessage *this)
    {
      return 1;
    }

    __int64 __fastcall GameMain::backButtonPressed(AllianceStreamMessage *this)
    {
      BadgePopup *Instance; // x0
      BadgePopup *v2; // x0
      __int64 TopPopup; // x0
    
      Instance = (BadgePopup *)GUI::getInstance(this);
      if ( Instance )
      {
        v2 = (BadgePopup *)GUI::getInstance(Instance);
        TopPopup = GUI::getTopPopup(v2);
        if ( TopPopup )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)TopPopup + 352LL))(TopPopup);
      }
      return 1;
    }

    void GameMain::appRateNever()
    {
      const String *v0; // x2
      String v1; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v1, "TRUE");
      Application::storeKeyValue((Application *)&RATED_KEY, &v1, v0);
      String::~String();
    }

    void __fastcall GameMain::appRateLater(AllianceStreamMessage *this)
    {
      ;
    }

    void GameMain::appRateWillReview()
    {
      const String *v0; // x2
      String v1; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v1, "TRUE");
      Application::storeKeyValue((Application *)&RATED_KEY, &v1, v0);
      String::~String();
    }

    __int64 __fastcall GameMain::openAppRateDialog(__int64 a1, const String *a2)
    {
      __int64 result; // x0
      const char *v4; // x1
      void *String; // x20
      const char *v6; // x1
      void *v7; // x21
      const char *v8; // x1
      void *v9; // x22
      const char *v10; // x1
      void *v11; // x23
      const char *v12; // x1
      void *v13; // x5
    
      result = Application::existsKeyValue((Application *)&RATED_KEY, a2);
      if ( (result & 1) == 0 )
      {
        String = StringTable::getString((#1308 *)"TID_RATE_APP_TITLE", v4);
        v7 = StringTable::getString((#1308 *)"TID_RATE_APP_MESSAGE", v6);
        v9 = StringTable::getString((#1308 *)"TID_BUTTON_RATE_APP_LATER", v8);
        v11 = StringTable::getString((#1308 *)"TID_BUTTON_RATE_APP_REVIEW", v10);
        v13 = StringTable::getString((#1308 *)"TID_BUTTON_RATE_APP_NEVER", v12);
        return appRateDialog(a1 + 40, String, v7, v9, v11, v13, &APP_STORE_ID);
      }
      return result;
    }

    void __fastcall GameMain::callPartnerIntegrations(__int64 a1)
    {
      iAdTitan *ClientGlobals; // x0
      iAdTitan *v3; // x20
      _DWORD *AccountID; // x21
      const char *v5; // x1
      const String *v6; // x4
      String v7; // [xsp+10h] [xbp-80h] BYREF
      String v8; // [xsp+28h] [xbp-68h] BYREF
      String v9; // [xsp+58h] [xbp-38h] BYREF
    
      if ( !*(_BYTE *)(a1 + 329) )
      {
        ClientGlobals = (iAdTitan *)LogicDataTables::getClientGlobals();
        v3 = ClientGlobals;
        if ( *((_BYTE *)ClientGlobals + 495) )
        {
          AccountID = (_DWORD *)MessageManager::getAccountID(MessageManager::sm_pInstance);
          String::String(&v9, "user-na");
          if ( (LogicLong::isZero(AccountID) & 1) != 0 )
          {
            Debugger::warning((__siginfo *)"No account id for MAT", v5);
          }
          else
          {
            String::format((String *)"%08x%08x", v5, *AccountID ^ 0xA4821454, AccountID[1] ^ 0x524A5A80u);
            String::operator=(&v9);
            String::~String();
          }
          String::String(&v8, "1681");
          String::String(&v7, "5cdb28ccb9ad9a7f920ffc072977dc78");
          MobileAppTrackerTitan::start(
            (MobileAppTrackerTitan *)&v8,
            &v7,
            (const String *)(*(_BYTE *)(a1 + 328) == 0),
            (bool)&v9,
            v6);
          String::~String();
          String::~String();
          String::~String();
        }
        if ( *((_BYTE *)v3 + 496) && FacebookManager::sm_pInstance )
          ClientGlobals = (iAdTitan *)FacebookConnection::activateApp(*(FacebookConnection **)(FacebookManager::sm_pInstance
                                                                                             + 24));
        if ( *((_BYTE *)v3 + 497) )
          iAdTitan::checkAttribution(ClientGlobals);
        *(_BYTE *)(a1 + 329) = 1;
      }
    }

    __int64 __fastcall GameMain::IsIAPWarningNeeded(__int64 a1)
    {
      const String *v2; // x1
      int v3; // w8
      tween::Bounce *PlayerAvatar; // x0
      __int64 Arena; // x0
    
      if ( LogicDataTables::getClientGlobals() && !*(_BYTE *)(LogicDataTables::getClientGlobals() + 493)
        || (GameSettings::isIAPInfoShown((ClanPage *)GameSettings::sm_pInstance, v2) & 1) != 0 )
      {
        return 0;
      }
      v3 = *(_DWORD *)(a1 + 168);
      if ( !v3 )
      {
        GameMode::getInstance();
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
        if ( PlayerAvatar )
        {
          Arena = LogicClientAvatar::getArena(PlayerAvatar);
          return (unsigned int)LogicArenaData::isTrainingCamp(Arena) ^ 1;
        }
        return 0;
      }
      return v3 == 10;
    }

    void __fastcall GameMain::showIAPInfo(__int64 a1)
    {
      String v2; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v2);
      GameMain::showNativeDialog(a1, 10, 0, &v2);
      String::~String();
    }

    __int64 __fastcall GameMain::initializeMembers(__int64 a1)
    {
      __int64 v2; // x9
      __int64 v3; // x10
      __int64 result; // x0
    
      v2 = 0;
      do
      {
        *(_QWORD *)(a1 + 104 + 8 * v2) = 0;
        v3 = v2 + 4;
        --v2;
      }
      while ( v3 > 0 );
      *(_QWORD *)(a1 + 112) = 0;
      *(_BYTE *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 332) = 0;
      *(_DWORD *)(a1 + 336) = 0;
      *(_DWORD *)(a1 + 360) = 0;
      *(_BYTE *)(a1 + 324) = 0;
      *(_BYTE *)(a1 + 325) = 0;
      *(_BYTE *)(a1 + 326) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      *(_BYTE *)(a1 + 321) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 350) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      String::operator=(a1 + 200, "");
      String::operator=(a1 + 224, "");
      *(_DWORD *)(a1 + 148) = 0;
      *(_DWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      *(_DWORD *)(a1 + 132) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 136) = 0;
      *(_BYTE *)(a1 + 320) = 0;
      String::operator=(a1 + 176, "");
      *(_DWORD *)(a1 + 168) = 0;
      *(_BYTE *)(a1 + 322) = 0;
      *(_BYTE *)(a1 + 323) = 0;
      *(_DWORD *)(a1 + 172) = 0;
      *(_BYTE *)(a1 + 52) = 0;
      *(_BYTE *)(a1 + 53) = 0;
      *(_BYTE *)(a1 + 327) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 268) = 0;
      result = String::operator=(a1 + 272, "");
      *(_WORD *)(a1 + 328) = 0;
      return result;
    }

    __int64 __fastcall GameMain::keyboardSizeChanged(__int64 this, float a2, float a3)
    {
      *(float *)(this + 332) = a2;
      *(float *)(this + 336) = a3;
      return this;
    }

}; // end class GameMain
