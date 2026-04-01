class InitState
{
public:

    __int64 __fastcall InitState::InitState(__int64 a1)
    {
      *(_QWORD *)a1 = off_100464560;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      String::String((String *)(a1 + 88));
      InitState::initializeMembers((LoadingScreen *)a1);
      return a1;
    }

    // attributes: thunk
    void __fastcall InitState::InitState(InitState *this)
    {
      __ZN9InitStateC2Ev((__int64)this);
    }

    __int64 __fastcall InitState::~InitState(__int64 a1)
    {
      #1249 *v2; // x0
      __int64 v3; // x0
    
      *(_QWORD *)a1 = off_100464560;
      v2 = *(#1249 **)(a1 + 16);
      if ( v2 )
      {
        DisplayObject::removeFromParent(v2);
        v3 = *(_QWORD *)(a1 + 16);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      }
      InitState::initializeMembers((LoadingScreen *)a1);
      String::~String((String *)(a1 + 88));
      std::vector<String>::~vector((String **)(a1 + 32));
      return a1;
    }

    // attributes: thunk
    void __fastcall InitState::~InitState(__int64 this)
    {
      __ZN9InitStateD2Ev(this);
    }

    void __fastcall InitState::~InitState(LoadingScreen *this)
    {
      InitState::~InitState((__int64)this);
      operator delete(this);
    }

    void __fastcall InitState::enter(LoadingScreen *this, bool a2)
    {
      const String *v3; // x1
      #1122 *v4; // x0
      #1122 *isIntegration; // x0
      char *v6; // x0
      const char *v7; // x1
      NativeFont *isLoadtest; // x0
      Stage *v9; // x0
      int *Instance; // x0
      int v11; // w2
      __int64 v12; // x20
      const String *v13; // x1
      const String *v14; // x1
      NativeFont *v15; // x0
      bool v16; // w1
      FontManager *v17; // x20
      int FontCount; // w21
      __int64 v19; // x22
      NativeFont *FontAt; // x23
      const char *v21; // x0
      unsigned __int8 v22; // w4
      ResourceListener *v23; // x20
      LogicResources *v24; // x0
      __int64 DataTableResourcesArray; // x0
      __int64 v26; // x21
      ResourceListener *v27; // x20
      const String *FileName; // x0
      #1179 *started; // x0
      String v30; // [xsp+0h] [xbp-90h] BYREF
      String v31; // [xsp+18h] [xbp-78h] BYREF
      String v32; // [xsp+30h] [xbp-60h] BYREF
      String v33; // [xsp+48h] [xbp-48h] BYREF
    
      ResourceManager::enableUpdatedResources((#1179 *)1, a2);
      GameMain::loadAsset((GameMain *)&ResourceManager::FINGERPRINT, v3);
      isIntegration = (#1122 *)LogicVersion::isIntegration(v4);
      if ( (_DWORD)isIntegration )
      {
        v6 = (char *)this + 88;
        v7 = "https://99faf1e355c749a9a049-2a63f4436c967aa7d355061bd0d924a1.ssl.cf1.rackcdn.com/";
      }
      else
      {
        isLoadtest = (NativeFont *)LogicVersion::isLoadtest(isIntegration);
        if ( !(_DWORD)isLoadtest )
          goto LABEL_6;
        v6 = (char *)this + 88;
        v7 = "http://soil.ignorelist.com/assets/";
      }
      isLoadtest = (NativeFont *)String::operator=(v6, v7);
    LABEL_6:
      v9 = (Stage *)NativeFont::deconstructCache(isLoadtest);
      Instance = (int *)Stage::getInstance(v9);
      v12 = 512;
      if ( Instance[107] >= 641 )
      {
        if ( *(int *)(Stage::getInstance((Stage *)Instance) + 432LL) <= 640 )
          v12 = 512;
        else
          v12 = 1024;
      }
      Font::sm_convertTo16Bit = 0;
      NativeFont::constructCache((#1290 *)v12, 2048, v11);
      NativeFont::filterCallBack = glyphFilterCallback;
      String::String(&v33, "font/sc_ccbackbeatregular.ttf");
      GameMain::loadAsset((GameMain *)&v33, v13);
      String::~String(&v33);
      String::String(&v32, "font/supercell-magic_0.ttf");
      GameMain::loadAsset((GameMain *)&v32, v14);
      String::~String(&v32);
      if ( !(unsigned int)NativeFont::getFallbackFontCount(v15) )
        NativeFont::loadDefaultFallbackFonts((NativeFont *)1, v16);
      v17 = (FontManager *)FontManager::sm_pInstance;
      FontCount = FontManager::getFontCount((#1219 *)FontManager::sm_pInstance);
      String::String(&v31, "");
      if ( FontCount >= 1 )
      {
        v19 = 0;
        do
        {
          FontAt = (NativeFont *)FontManager::getFontAt(v17, v19);
          if ( (*(unsigned int (__fastcall **)(NativeFont *))(*(_QWORD *)FontAt + 32LL))(FontAt) == 1 )
          {
            v21 = (const char *)(*(__int64 (__fastcall **)(NativeFont *))(*(_QWORD *)FontAt + 80LL))(FontAt);
            String::String(&v30, v21);
            NativeFont::setGlyphMargin(FontAt, 1u, 1u, 4u, 1u, 0x1Eu);
            FontManager::setSystemFont(v17, &v31, &v30, 1u, 1u, 4u, 1u, 0x1Eu);
            Font::setColorModifier((Font *)9, 191, 0x12u, 0x38u, v22);
            String::~String(&v30);
          }
          v19 = (unsigned int)(v19 + 1);
        }
        while ( (int)v19 < FontCount );
      }
      v23 = (ResourceListener *)operator new(40);
      v24 = ResourceListener::ResourceListener(v23);
      *((_QWORD *)this + 14) = v23;
      DataTableResourcesArray = LogicResources::createDataTableResourcesArray(v24);
      *((_QWORD *)this + 9) = DataTableResourcesArray;
      if ( *(int *)(DataTableResourcesArray + 12) >= 1 )
      {
        v26 = 0;
        do
        {
          v27 = (ResourceListener *)*((_QWORD *)this + 14);
          FileName = (const String *)LogicDataTableResource::getFileName(*(#1087 **)(*(_QWORD *)DataTableResourcesArray
                                                                                   + 8 * v26));
          ResourceListener::addFile(v27, FileName, -1, -1, -1, -1);
          ++v26;
          DataTableResourcesArray = *((_QWORD *)this + 9);
        }
        while ( v26 < *(int *)(DataTableResourcesArray + 12) );
      }
      started = (#1179 *)ResourceListener::startLoading(*((ResourceListener **)this + 14));
      *((_DWORD *)this + 30) = ResourceManager::resourceToLoad(started);
      *((_DWORD *)this + 2) = 1;
      *((_DWORD *)this + 6) = 1;
      String::~String(&v31);
    }

    void __fastcall InitState::exit(LoadingScreen *this)
    {
      __int64 v2; // x0
      int *v3; // x20
      __int64 v4; // x22
      __int64 v5; // x21
    
      v2 = *((_QWORD *)this + 14);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 14) = 0;
      v3 = (int *)*((_QWORD *)this + 9);
      if ( v3[3] >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v4);
          if ( v5 )
          {
            LogicDataTableResource::destruct(*(LogicDataTableResource **)(*(_QWORD *)v3 + 8 * v4));
            String::~String((String *)(v5 + 8));
            operator delete((void *)v5);
            v3 = (int *)*((_QWORD *)this + 9);
          }
          ++v4;
        }
        while ( v4 < v3[3] );
      }
      if ( v3 )
      {
        if ( *(_QWORD *)v3 )
          operator delete[](*(_QWORD *)v3);
        operator delete(v3);
      }
      *((_QWORD *)this + 9) = 0;
    }

    bool __fastcall InitState::isLoaded(LoadingScreen *this)
    {
      return *((_DWORD *)this + 2) == 2 && *(_DWORD *)ServerConnection::sm_pInstance == 6;
    }

    void __fastcall InitState::updateLoading(LoadingScreen *this, float a2, const char *a3)
    {
      LoadingScreen *v4; // x0
      #1080 *inited; // x0
      #1080 *Instance; // x0
      const String *v7; // x1
      #1122 *v8; // x0
      Path *isProd; // x0
      HTTPQueue *v10; // x0
      __int64 v11; // x0
      const char *v12; // x1
      const String *v13; // x1
      const int *v14; // x2
      UnlockAccountPopup *v15; // x20
      Stage *v16; // x0
      int *v17; // x0
      float v18; // s8
      int *v19; // x0
      float v20; // s9
      float v21; // s10
      float v22; // s0
      #1080 *v23; // x0
      __int64 v24; // x0
      internal_t *pHeap; // x1
      #1080 *v26; // x0
      #1080 *v27; // x0
      #1080 *StartEditorMode; // x0
      #1080 *v29; // x0
      String v30; // [xsp+10h] [xbp-C0h] BYREF
      String v31; // [xsp+28h] [xbp-A8h] BYREF
      String v32; // [xsp+40h] [xbp-90h] BYREF
      String v33; // [xsp+58h] [xbp-78h] BYREF
      __siginfo var60; // [xsp+70h] [xbp-60h] BYREF
    
      *((float *)this + 20) = *((float *)this + 20) + a2;
      v4 = (LoadingScreen *)*((_QWORD *)this + 2);
      if ( v4 )
      {
        v4 = (LoadingScreen *)(*(__int64 (__fastcall **)(LoadingScreen *))(*(_QWORD *)v4 + 336LL))(v4);
    LABEL_3:
        if ( *((_DWORD *)this + 2) == 1 && (unsigned int)InitState::updateResourceLoading(v4) )
        {
          inited = (#1080 *)InitState::initDataTables(this);
          Instance = (#1080 *)GameMain::getInstance(inited);
          GameMain::updateDeviceProfile(Instance);
          GameMain::loadAsset((GameMain *)&Resources::SC_UI, v7);
          isProd = (Path *)LogicVersion::isProd(v8);
          if ( ((unsigned __int8)isProd & 1) == 0 )
          {
            Path::dataPath(isProd);
            String::String(&v30, "font/debug.fnt");
            if ( (String::endsWith(&v31, "/") & 1) != 0 || (unsigned int)String::startsWith(&v30, "/") )
            {
              operator+((__int64 *)&v32.m_length, &v31, &v30);
            }
            else if ( v31.m_length )
            {
              operator+(&v31, "/");
              operator+((__int64 *)&v32.m_length, (String *)&var60.si_addr, &v30);
              String::~String((String *)&var60.si_addr);
            }
            else
            {
              String::String(&v32, &v30);
            }
            if ( v32.m_bytes + 1 > 8 )
              pHeap = (internal_t *)v32.internal.pHeap;
            else
              pHeap = &v32.internal;
            String::String(&v33, (const char *)pHeap);
            String::~String(&v33);
            String::~String(&v32);
            String::~String(&v30);
            String::~String(&v31);
          }
          StringTable::setInitialLanguage(isProd);
          *((_DWORD *)this + 2) = 2;
          v27 = (#1080 *)GameMain::getInstance(v26);
          StartEditorMode = (#1080 *)GameMain::getStartEditorMode(v27);
          if ( (_DWORD)StartEditorMode )
          {
            v29 = (#1080 *)GameMain::getInstance(StartEditorMode);
            GameMain::startEditor(v29);
          }
        }
        return;
      }
      if ( *((_DWORD *)this + 6) != 2 )
      {
        if ( *((_BYTE *)this + 12) )
        {
          if ( (ResourceManager::isResourceLoaded((ResourceManager *)"sc/ui.sc", a3) & 1) == 0 )
            ResourceManager::loadResource((ResourceManager *)"sc/ui.sc", 0, v14);
          *((_BYTE *)this + 12) = 0;
          v15 = (UnlockAccountPopup *)operator new(280);
          v16 = UnlockAccountPopup::UnlockAccountPopup(v15);
          *((_QWORD *)this + 2) = v15;
          v17 = (int *)Stage::getInstance(v16);
          v18 = (float)v17[107] * 0.5;
          v19 = (int *)Stage::getInstance((Stage *)v17);
          v20 = (float)v19[108] * 0.5;
          v21 = (float)*(int *)(Stage::getInstance((Stage *)v19) + 432LL);
          v22 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 96LL))(*((_QWORD *)this + 2));
          v23 = (#1080 *)DisplayObject::setPixelSnappedXY(v15, v18, v20 + (float)((float)(v21 - v22) * -0.2));
          v24 = GameMain::getInstance(v23);
          v4 = (LoadingScreen *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v24 + 104) + 160LL))(
                                  *(_QWORD *)(v24 + 104),
                                  *((_QWORD *)this + 2));
        }
        goto LABEL_3;
      }
      v10 = (HTTPQueue *)*((_QWORD *)this + 8);
      if ( v10 )
      {
        HTTPQueue::update(v10);
        v11 = HTTPQueue::failedCount(*((_QWORD *)this + 8));
        if ( (int)v11 < 1 )
        {
          if ( !(unsigned int)HTTPQueue::itemsLeft(*((_QWORD *)this + 8)) )
            InitState::contentUpdateDone(this);
        }
        else
        {
          String::format((String *)"Resource update failed. Count: %d. Set to reconnect.", v12, v11);
          Debugger::warning(&var60, v13);
          String::~String((String *)&var60);
        }
      }
    }

    __int64 __fastcall InitState::contentUpdateDone(__int64 a1)
    {
      __int64 v2; // x0
      const String *v3; // x1
      internal_t *pHeap; // x1
      int *v5; // x8
      const char *v6; // x1
      const String *v7; // x1
      Shader *v8; // x0
      #1080 *v9; // x0
      #1080 *Instance; // x0
      const String *v11; // x1
      __int64 v12; // x8
      unsigned __int64 v13; // x9
      signed __int64 v14; // x22
      __int64 v15; // x21
      __int64 v16; // x22
      int v17; // w2
      #1080 *v18; // x0
      __uint16_t *v19; // x0
      String v21; // [xsp+8h] [xbp-418h] BYREF
      String v22; // [xsp+20h] [xbp-400h] BYREF
      String v23; // [xsp+38h] [xbp-3E8h] BYREF
      String v24; // [xsp+50h] [xbp-3D0h] BYREF
      _BYTE v25[896]; // [xsp+68h] [xbp-3B8h] BYREF
    
      if ( *(_QWORD *)(a1 + 56) )
      {
        Path::updatePath((Path *)a1);
        operator+(&v24, "/");
        operator+((__int64 *)&v23.m_length, &v22, (String *)&ResourceManager::FINGERPRINT);
        String::~String(&v22);
        v2 = String::lastIndexOf(&v23, 47);
        String::substring(&v21, &v23, 0, v2);
        Path::mkdir((#1218 *)&v21, v3);
        if ( v23.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v23.internal.pHeap;
        else
          pHeap = &v23.internal;
        std::ofstream::basic_ofstream(v25, pHeap, 36);
        v5 = *(int **)(a1 + 56);
        v6 = (const char *)(v5 + 2);
        if ( v5[1] + 1 > 8 )
          v6 = *(const char **)v6;
        std::ostream::write((std::ostream *)v25, v6, *v5);
        std::ofstream::close(v25);
        Path::excludeBackup((Path *)&v23, v7);
        std::ofstream::~ofstream(v25);
        String::~String(&v21);
        String::~String(&v23);
        String::~String(&v24);
      }
      v8 = (Shader *)LogicDataTables::destructInstance((LogicDataTables *)a1);
      v9 = (#1080 *)LogicLocalization::destructInstance(v8);
      Instance = (#1080 *)GameMain::getInstance(v9);
      GameMain::releaseSpellIconShapes(Instance);
      v12 = *(_QWORD *)(a1 + 32);
      v13 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 40) - v12) >> 3);
      if ( (int)v13 >= 1 )
      {
        v14 = 0xAAAAAAAB00000000LL * ((*(_QWORD *)(a1 + 40) - v12) >> 3);
        v15 = (int)v13;
        ResourceManager::freeResource((#1179 *)(v12 + 24LL * (int)v13 - 24), v11);
        if ( v14 >= 0x100000001LL )
        {
          v16 = 24 * v15 - 48;
          do
          {
            ResourceManager::freeResource((#1179 *)(*(_QWORD *)(a1 + 32) + v16), v11);
            v16 -= 24;
            --v15;
          }
          while ( v15 > 1 );
        }
      }
      ResourceManager::freeResource((#1179 *)&ResourceManager::FINGERPRINT, v11);
      v18 = (#1080 *)Debugger::hudPrint((__siginfo *)"Content update done successfully!", (const char *)0xFFFFFFFFLL, v17);
      *(_DWORD *)(a1 + 24) = 3;
      v19 = (__uint16_t *)GameMain::getInstance(v18);
      return GameMain::reloadGame(v19);
    }

    __int64 __fastcall InitState::updateResourceLoading(LoadingScreen *this)
    {
      #1179 *NativeTime; // x0
      xTimer *v2; // x19
      #1179 *v3; // x0
      uint64_t v4; // x0
      unsigned __int64 v5; // x2
      float v6; // s0
    
      NativeTime = (#1179 *)xTimer::getNativeTime();
      v2 = NativeTime;
      while ( 1 )
      {
        v3 = (#1179 *)ResourceManager::resourceToLoad(NativeTime);
        if ( !(_DWORD)v3 )
          break;
        ResourceManager::loadNextResource(v3);
        v4 = xTimer::getNativeTime();
        NativeTime = (#1179 *)xTimer::getPassedTimeMs(v2, v4, v5);
        if ( v6 >= 0.1 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall InitState::initDataTables(LoadingScreen *this)
    {
      __int64 result; // x0
      __int64 v3; // x8
      __int64 v4; // x20
      ResourceManager *FileName; // x0
      const String *v6; // x1
      __int64 CSV; // x0
    
      result = LogicDataTables::isLoaded(this);
      if ( (result & 1) == 0 )
      {
        v3 = *((_QWORD *)this + 9);
        if ( *(int *)(v3 + 12) >= 1 )
        {
          v4 = 0;
          do
          {
            FileName = (ResourceManager *)LogicDataTableResource::getFileName(*(#1087 **)(*(_QWORD *)v3 + 8 * v4));
            CSV = ResourceManager::getCSV(FileName, v6);
            result = LogicResources::load(*((_QWORD *)this + 9), v4++, CSV, 0, 0);
            v3 = *((_QWORD *)this + 9);
          }
          while ( v4 < *(int *)(v3 + 12) );
        }
      }
      return result;
    }

    float __fastcall InitState::getLoadingProgress(LoadingScreen *this)
    {
      if ( !*((_QWORD *)this + 14) )
        return 0.0;
      if ( *((_DWORD *)this + 30) )
        return (float)(1.0 - (float)((float)(unsigned int)ResourceManager::resourceToLoad(this) / (float)*((int *)this + 30)))
             * 0.5;
      return 0.5;
    }

    String *__usercall InitState::getLoadingTitle@<X0>(LoadingScreen *this@<X0>, String *a2@<X8>)
    {
      if ( *((_DWORD *)this + 6) == 2 )
        return String::String(a2, "Content Update..");
      else
        return String::String(a2, "Loading..");
    }

    __int64 __fastcall InitState::update(LoadingScreen *this, float a2)
    {
      __int64 result; // x0
      LogicProgressSimulator *Instance; // x20
      int v4; // w2
      #1079 *DataFromTable; // x19
      #1122 *shouldGoToFirstTutorialBattle; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      LogicJSONObject *Location; // x0
      const ChangeAllianceMemberRoleOkMessage *v10; // x1
      MessageManager *v11; // x20
      #1123 *v12; // x21
    
      result = (*(__int64 (__fastcall **)(LoadingScreen *, float))(*(_QWORD *)this + 64LL))(this, a2);
      if ( (_DWORD)result )
      {
        Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
        DataFromTable = (#1079 *)LogicDataTables::getDataFromTable((LogicDataTables *)0x12, 0, v4);
        result = GameStateManager::getPlayerAvatar(Instance);
        if ( result )
        {
          shouldGoToFirstTutorialBattle = (#1122 *)LogicClientAvatar::shouldGoToFirstTutorialBattle();
          if ( (_DWORD)shouldGoToFirstTutorialBattle && (LogicVersion::isLoadtest(shouldGoToFirstTutorialBattle) & 1) == 0 )
          {
            GameStateManager::changeState((__int64)Instance, 5);
            v7 = GameStateManager::getInstance();
            GameStateManager::setNextBattleTypeNpc(v7);
            v8 = GameStateManager::getInstance();
            GameStateManager::setWaitingForNPCSectorState(v8, 1);
            Location = (LogicJSONObject *)LogicNpcData::getLocation(DataFromTable);
            RenderSystem::loadTilemap(Location, v10);
            v11 = (MessageManager *)MessageManager::sm_pInstance;
            v12 = (#1123 *)operator new(80);
            StartMissionMessage::StartMissionMessage(v12, DataFromTable);
            return MessageManager::sendMessage(v11, v12);
          }
          else
          {
            return GameStateManager::changeState((__int64)Instance, 4);
          }
        }
      }
      return result;
    }

    bool __fastcall InitState::resourcesLoaded(LoadingScreen *this)
    {
      return *((_DWORD *)this + 2) == 2;
    }

    void __fastcall InitState::startContentUpdate(LoadingScreen *this, String *a2, String *a3)
    {
      String *v6; // x22
      #1179 *v7; // x0
      #1179 *v8; // x21
      unsigned __int64 v9; // x24
      const char *v10; // x1
      int v11; // w2
      char *v12; // x0
      char *v13; // x0
      HTTPQueue *v14; // x22
      __int64 v15; // x2
      __int64 v16; // x3
      __int64 JSONString; // x22
      const char *v18; // x1
      internal_t *p_internal; // x25
      const char *v20; // x23
      __int64 StringValue; // x0
      const char *v22; // x1
      _QWORD *v23; // x8
      Path *v24; // x0
      __int64 v25; // x25
      __int64 v26; // x26
      __int64 v27; // x28
      __int64 v28; // x0
      const String *v29; // x1
      const char *v30; // x1
      __int64 v31; // x8
      __int64 v32; // x8
      internal_t *pHeap; // x9
      int v34; // w2
      String v35; // [xsp+20h] [xbp-140h] BYREF
      String v36; // [xsp+38h] [xbp-128h] BYREF
      String v37; // [xsp+50h] [xbp-110h] BYREF
      String v38; // [xsp+68h] [xbp-F8h] BYREF
      String v39; // [xsp+80h] [xbp-E0h] BYREF
      String v40; // [xsp+98h] [xbp-C8h] BYREF
      String v41; // [xsp+B0h] [xbp-B0h] BYREF
      String v42; // [xsp+C8h] [xbp-98h] BYREF
      __siginfo v43; // [xsp+E0h] [xbp-80h] BYREF
    
      v6 = (String *)*((_QWORD *)this + 7);
      if ( v6 != a2 )
      {
        if ( v6 )
        {
          String::~String(*((String **)this + 7));
          operator delete(v6);
        }
        *((_QWORD *)this + 7) = 0;
      }
      *((_QWORD *)this + 7) = a2;
      if ( !a2 )
      {
        v12 = "Content update failed: pRemoteResourceDescriptor = 0";
    LABEL_12:
        Debugger::warning((__siginfo *)v12, (const char *)a2);
        return;
      }
      v7 = (#1179 *)LogicJSONParser::parseJSONObject((LogicJSONParser *)a2, a2);
      v8 = v7;
      if ( !v7 )
      {
        v12 = "Content update failed: pResourceDescriptorJSON = 0";
        goto LABEL_12;
      }
      if ( a3 )
      {
        if ( a3->m_length )
        {
          ResourceManager::checkForUpdates((__int64 *)&v43.si_addr, v7, (const #1234 *)a2);
          std::vector<String>::operator=((char *)this + 32, &v43.si_addr);
          std::vector<String>::~vector((String **)&v43.si_addr);
          v9 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3);
          String::format((String *)"%d files out of date. Content update required.", v10, v9);
          Debugger::hudPrint(&v43, (const String *)0xFFFFFFFFLL, v11);
          String::~String((String *)&v43);
          goto LABEL_16;
        }
        v13 = "Content update content URL is empty!";
      }
      else
      {
        v13 = "Content update content URL is NULL!";
      }
      Debugger::warning((__siginfo *)v13, (const char *)a2);
      LODWORD(v9) = 0;
    LABEL_16:
      v14 = (HTTPQueue *)operator new(56);
      HTTPQueue::HTTPQueue(v14, 2);
      *((_QWORD *)this + 8) = v14;
      if ( (int)v9 >= 1 )
      {
        String::String(&v42, "sha");
        JSONString = LogicJSONObject::getJSONString(v8, &v42, v15, v16);
        String::~String(&v42);
        if ( !JSONString )
        {
          Debugger::warning((__siginfo *)"masterHash missing", v18);
          (*(void (__fastcall **)(#1179 *))(*(_QWORD *)v8 + 16LL))(v8);
          (*(void (__fastcall **)(#1179 *))(*(_QWORD *)v8 + 8LL))(v8);
          return;
        }
        p_internal = &a3->internal;
        if ( a3->m_bytes + 1 > 8 )
          p_internal = (internal_t *)p_internal->pHeap;
        v20 = "/";
        if ( (unsigned int)String::endsWith(a3, "/") )
          v20 = "";
        StringValue = LogicJSONString::getStringValue(JSONString);
        v23 = (_QWORD *)(StringValue + 8);
        if ( *(_DWORD *)(StringValue + 4) + 1 > 8 )
          v23 = (_QWORD *)*v23;
        v24 = (Path *)String::format((String *)"%s%s%s/", v22, p_internal, v20, v23);
        Path::updatePath(v24);
        operator+(&v39, "/");
        String::~String(&v39);
        v25 = 0;
        v26 = 0;
        do
        {
          v27 = *((_QWORD *)this + 4);
          operator+((__int64 *)&v38.m_length, &v40, (String *)(v27 + v25));
          v28 = String::lastIndexOf(&v38, 47);
          String::substring(&v37, &v38, 0, v28);
          Path::mkdir((#1218 *)&v37, v29);
          operator+((__int64 *)&v36.m_length, &v41, (String *)(v27 + v25));
          v31 = v27 + v25;
          if ( *(_DWORD *)(v27 + v25 + 4) + 1 > 8 )
            v32 = *(_QWORD *)(v31 + 8);
          else
            v32 = v31 + 8;
          if ( v36.m_bytes + 1 >= 9 )
            pHeap = (internal_t *)v36.internal.pHeap;
          else
            pHeap = &v36.internal;
          String::format((String *)"Updating %s <- %s", v30, v32, pHeap);
          Debugger::hudPrint((__siginfo *)&v35, (const String *)0xFFFFFFFFLL, v34);
          String::~String(&v35);
          HTTPQueue::downloadFile(*((HTTPQueue **)this + 8), &v36, &v38);
          String::~String(&v36);
          String::~String(&v37);
          String::~String(&v38);
          ++v26;
          v25 += 24;
        }
        while ( v26 < (int)v9 );
        *((_DWORD *)this + 7) = HTTPQueue::itemsLeft(*((_QWORD *)this + 8));
        String::~String(&v40);
        String::~String(&v41);
      }
      (*(void (__fastcall **)(#1179 *))(*(_QWORD *)v8 + 16LL))(v8);
      (*(void (__fastcall **)(#1179 *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( a3 )
      {
        String::~String(a3);
        operator delete(a3);
      }
      *((_DWORD *)this + 6) = 2;
    }

    __int64 __fastcall InitState::setAccountLocked(__int64 this)
    {
      *(_BYTE *)(this + 12) = 1;
      return this;
    }

    UnlockAccountPopup *__fastcall InitState::setAccountUnlockFailed(LoadingScreen *this)
    {
      UnlockAccountPopup *result; // x0
    
      result = (UnlockAccountPopup *)*((_QWORD *)this + 2);
      if ( result )
        return (UnlockAccountPopup *)UnlockAccountPopup::setInvalidUnlockCode(result);
      return result;
    }

    __int64 __fastcall InitState::initializeMembers(LoadingScreen *this)
    {
      String *v2; // x20
      String *v3; // x21
      String *v4; // x0
      String *v5; // x0
      __int64 result; // x0
    
      v2 = (String *)*((_QWORD *)this + 4);
      v3 = (String *)*((_QWORD *)this + 5);
      if ( v3 != v2 )
      {
        v4 = (String *)*((_QWORD *)this + 4);
        do
        {
          String::~String(v4);
          v4 = v5 + 1;
        }
        while ( v3 != v4 );
      }
      *((_QWORD *)this + 5) = v2;
      *((_DWORD *)this + 6) = 0;
      *((_DWORD *)this + 2) = 0;
      *((_DWORD *)this + 20) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 9) = 0;
      result = String::operator=((char *)this + 88, "");
      *((_QWORD *)this + 14) = 0;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 7) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_BYTE *)this + 12) = 0;
      *((_QWORD *)this + 2) = 0;
      return result;
    }

}; // end class InitState
