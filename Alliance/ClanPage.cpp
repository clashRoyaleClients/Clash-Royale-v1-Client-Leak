class ClanPage
{
public:

    void __fastcall ClanPage::ClanPage(ClanPage *this)
    {
      #1255 *v2; // x21
      Stage *v3; // x0
      __int64 Instance; // x0
      int v5; // s8
      #1077 *v6; // x0
      float v7; // s8
      __darwin_pthread_mutex_t *v8; // x0
      __int64 v9; // x0
      __darwin_pthread_mutex_t *MovieClip; // x21
      void (__fastcall *v11)(__darwin_pthread_mutex_t *, __int64); // x22
      __int64 v12; // x0
      __int64 v13; // x0
      __darwin_pthread_mutex_t *v14; // x0
      __int64 v15; // x0
      __int64 v16; // x8
      String v17; // [xsp+0h] [xbp-60h] BYREF
      String v18; // [xsp+18h] [xbp-48h] BYREF
    
      String::String(&v18, "sc/ui.sc");
      String::String(&v17, "guild_page_iphone");
      PageItem::PageItem(this, &v18, &v17);
      String::~String(&v17);
      String::~String(&v18);
      *((_QWORD *)this + 36) = 0;
      *((_BYTE *)this + 261) = 1;
      *(_QWORD *)this = off_100464B68;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_DWORD *)this + 66) = 0;
      *((_BYTE *)this + 260) = 0;
      *((_QWORD *)this + 12) = &off_100464D30;
      *((_QWORD *)this + 31) = 0;
      *((_DWORD *)this + 64) = 0;
      *((_DWORD *)this + 60) = 2;
      *((_DWORD *)this + 67) = 0;
      *((_BYTE *)this + 244) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_QWORD *)this + 25) = 0;
      v2 = (#1255 *)operator new(40);
      SelectableButtonList::SelectableButtonList(v2);
      *((_QWORD *)this + 28) = v2;
      *((_QWORD *)this + 26) = DropGUIContainer::addGameSelectableButton(this, "guild_tab", 1, v2);
      *((_QWORD *)this + 25) = DropGUIContainer::addGameSelectableButton(this, "friends_tab", 1, *((_QWORD *)this + 28));
      *((_QWORD *)this + 27) = DropGUIContainer::addGameSelectableButton(this, "search", 1, *((_QWORD *)this + 28));
      v3 = (Stage *)SelectableButtonList::selectButtonIndex(*((#1255 **)this + 28), 0);
      Instance = Stage::getInstance(v3);
      v5 = *(_DWORD *)(Instance + 432);
      v6 = (#1077 *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)Instance);
      v7 = (float)v5;
      v8 = (__darwin_pthread_mutex_t *)AllianceStream::setAreaHeight(v6, v7);
      v9 = AllianceStream::getInstance(v8);
      DisplayObject::setPixelSnappedXY(*(DisplayObject **)(v9 + 24), 0.0, v7);
      MovieClip = (__darwin_pthread_mutex_t *)GUIContainer::getMovieClip(this);
      v11 = *(void (__fastcall **)(__darwin_pthread_mutex_t *, __int64))(MovieClip->__sig + 160);
      v12 = AllianceStream::getInstance(MovieClip);
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
      v11(MovieClip, v13);
      v14 = (__darwin_pthread_mutex_t *)std::vector<ClanPageScreen *>::resize((char *)this + 272, 5, 0);
      v15 = AllianceStream::getInstance(v14);
      v16 = v15 + 8;
      if ( !v15 )
        v16 = 0;
      **((_QWORD **)this + 34) = v16;
    }

    // attributes: thunk
    void __fastcall ClanPage::ClanPage(ClanPage *this)
    {
      __ZN8ClanPageC2Ev(this);
    }

    void __fastcall ClanPage::~ClanPage(__darwin_pthread_mutex_t *this)
    {
      __int64 Instance; // x0
      #1249 *v3; // x0
      __int64 v4; // x0
      Rect *v5; // x0
      void *v6; // x0
      __int64 v7; // x0
      void *v8; // x0
    
      this->__sig = (__int64)off_100464B68;
      *((_QWORD *)this + 12) = &off_100464D30;
      Instance = AllianceStream::getInstance(this);
      v3 = (#1249 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Instance + 56LL))(Instance);
      DisplayObject::removeFromParent(v3);
      v4 = *((_QWORD *)this + 28);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 28) = 0;
      ClanPage::destructScreens((ColorTransform *)this);
      v5 = (Rect *)*((_QWORD *)this + 31);
      if ( v5 )
      {
        AllianceFullEntry::destruct(v5);
        v6 = (void *)*((_QWORD *)this + 31);
        if ( v6 )
          operator delete(v6);
        *((_QWORD *)this + 31) = 0;
      }
      v7 = *((_QWORD *)this + 37);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_DWORD *)this + 66) = 0;
      *((_BYTE *)this + 261) = 1;
      *((_BYTE *)this + 260) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_DWORD *)this + 64) = 0;
      *((_DWORD *)this + 60) = 2;
      *((_DWORD *)this + 67) = 0;
      *((_BYTE *)this + 244) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_QWORD *)this + 25) = 0;
      v8 = (void *)*((_QWORD *)this + 34);
      if ( v8 )
        operator delete(v8);
      PageItem::~PageItem((LogicProjectileData *)this);
    }

    _QWORD *__fastcall ClanPage::destructScreens(_QWORD *this)
    {
      _QWORD *v1; // x19
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x21
      unsigned int v5; // w20
    
      v1 = this;
      v2 = *(this + 34);
      v3 = *(this + 35);
      if ( v3 != v2 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          if ( v5 )
          {
            this = *(_QWORD **)(v2 + 8 * v4);
            do
            {
              if ( this )
              {
                (*(void (__fastcall **)(_QWORD *))(*this + 8LL))(this);
                v2 = v1[34];
              }
              *(_QWORD *)(v2 + 8 * v4) = 0;
              v2 = v1[34];
              this = *(_QWORD **)(v2 + 8 * v4);
            }
            while ( this );
            v3 = v1[35];
          }
          v4 = ++v5;
        }
        while ( v5 < (unsigned __int64)((v3 - v2) >> 3) );
      }
      return this;
    }

    // attributes: thunk
    void __fastcall ClanPage::~ClanPage(__darwin_pthread_mutex_t *this)
    {
      __ZN8ClanPageD2Ev(this);
    }

    void __fastcall ClanPage::~ClanPage(__darwin_pthread_mutex_t *this)
    {
      ClanPage::~ClanPage(this);
      operator delete(this);
    }

    __int64 __fastcall ClanPage::update(ColorTransform *this, long double a2)
    {
      #1047 *Instance; // x0
      MessageManager *PageGUI; // x0
      int CurrentPageIndex; // w0
      int v7; // w8
      Stage *v8; // x0
      unsigned int v9; // w8
      __int64 v10; // x0
      Stage *PointSize; // x0
      float v12; // s0
      float v13; // s9
      __int64 v14; // x0
      float v15; // s11
      __int64 v16; // x0
      #1080 *v17; // x0
      float v18; // s0
      float v19; // s10
      __int64 v20; // x0
      float v21; // s2
      float v22; // s0
      float v23; // s1
      float v24; // s3
      float v25; // s4
      float v26; // s2
      DisplayObject *MovieClip; // x0
      __int64 result; // x0
    
      Instance = (#1047 *)HomeScreen::getInstance(this);
      PageGUI = (MessageManager *)HomeScreen::getPageGUI(Instance);
      CurrentPageIndex = PageGUI::getCurrentPageIndex(PageGUI);
      v7 = 3 - CurrentPageIndex;
      if ( CurrentPageIndex >= 3 )
        v7 = CurrentPageIndex - 3;
      *((_BYTE *)this + 8) = v7 < 2;
      v8 = (Stage *)*((_QWORD *)this + 37);
      if ( v8 )
      {
        v8 = (Stage *)(*(__int64 (__fastcall **)(Stage *))(*(_QWORD *)v8 + 472LL))(v8);
        if ( (_DWORD)v8 )
          v8 = (Stage *)ClanPage::closeContextMenu(this);
      }
      if ( *((_QWORD *)this + 31) )
        *((float *)this + 64) = *((float *)this + 64) + *(float *)&a2;
      v9 = *((_DWORD *)this + 60);
      if ( v9 )
        goto LABEL_21;
      v10 = Stage::getInstance(v8);
      PointSize = (Stage *)Stage::getPointSize(v10);
      v13 = v12;
      v14 = Stage::getInstance(PointSize);
      v15 = (float)*(int *)(v14 + 432);
      v16 = AllianceStream::getInstance((__darwin_pthread_mutex_t *)v14);
      v17 = (#1080 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 24) + 96LL))(*(_QWORD *)(v16 + 24));
      v19 = v18;
      v20 = GameMain::getInstance(v17);
      if ( (float)((float)(*(float *)(v20 + 332) / v13) - v19) <= 0.0 )
        v21 = 0.0;
      else
        v21 = (float)(*(float *)(v20 + 332) / v13) - v19;
      v22 = v15 * *(float *)&a2;
      v23 = *((float *)this + 67);
      v24 = v21 - v23;
      v25 = v21 - v23;
      if ( (float)(v21 - v23) < 0.0 )
        v25 = -v24;
      if ( v25 >= v22 )
      {
        v26 = -v22;
        if ( v24 >= (float)-v22 )
          v26 = v24;
        if ( v26 <= v22 )
          v22 = v26;
        v21 = v23 + v22;
      }
      *((float *)this + 67) = v21;
      MovieClip = (DisplayObject *)GUIContainer::getMovieClip(this);
      result = DisplayObject::setY(MovieClip, -*((float *)this + 67));
      v9 = *((_DWORD *)this + 60);
      if ( v9 )
      {
    LABEL_21:
        result = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * v9);
        if ( result )
          return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 16LL))(result, a2);
      }
      return result;
    }

    #1249 *__fastcall ClanPage::closeContextMenu(ColorTransform *this)
    {
      #1249 *result; // x0
    
      result = (#1249 *)*((_QWORD *)this + 37);
      if ( result )
      {
        DisplayObject::removeFromParent(result);
        result = (#1249 *)*((_QWORD *)this + 37);
        if ( result )
          result = (#1249 *)(*(__int64 (__fastcall **)(#1249 *))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 37) = 0;
      }
      return result;
    }

    #1249 *__fastcall ClanPage::stateChanged(BadgePopup *a1, __int64 a2, int a3)
    {
      #1249 *result; // x0
    
      PageItem::stateChanged(a1);
      result = ClanPage::closeContextMenu(a1);
      if ( a3 == 1 )
        return (#1249 *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)a1 + 432LL))(a1);
      if ( a3 == 2 )
        return (#1249 *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)a1 + 424LL))(a1);
      return result;
    }

    bool __fastcall ClanPage::getGreenNotificationCount(pthread_attr_t *this)
    {
      __darwin_pthread_mutex_t *ClientGlobals; // x0
      vm_address_t *Instance; // x0
      __int64 v3; // x0
      tween::Bounce *PlayerAvatar; // x0
      vm_address_t *v5; // x0
      __int64 v6; // x0
      __int64 Home; // x0
      _BOOL8 result; // x0
    
      ClientGlobals = (__darwin_pthread_mutex_t *)LogicDataTables::getClientGlobals(this);
      result = 0;
      if ( ClientGlobals[7].__opaque[20] )
      {
        Instance = (vm_address_t *)AllianceStream::getInstance(ClientGlobals);
        if ( Instance )
        {
          v3 = GameMode::getInstance(Instance);
          PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(v3 + 112));
          v5 = (vm_address_t *)LogicClientAvatar::isInAlliance(PlayerAvatar);
          if ( (_DWORD)v5 )
          {
            v6 = GameMode::getInstance(v5);
            Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(v6 + 112));
            if ( Home )
            {
              if ( (int)LogicClientHome::getRequestSpellsCooldownSeconds(Home) < 1 )
                return 1;
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall ClanPage::getNotificationCount(__darwin_pthread_mutex_t *this)
    {
      __darwin_pthread_mutex_t *Instance; // x0
    
      Instance = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(this);
      if ( Instance )
        return *(unsigned int *)(AllianceStream::getInstance(Instance) + 248LL);
      else
        return 0;
    }

    __int64 __fastcall ClanPage::buttonClicked(__int64 this, #1251 *a2)
    {
      __int64 v2; // x19
    
      v2 = this;
      if ( *(_QWORD *)(this + 232) )
      {
        this = SelectableButtonList::getSelectedIndex(*(#1255 **)(this + 224));
        if ( (unsigned int)this <= 2 && *(_DWORD *)(v2 + 240) != *(_DWORD *)(*(_QWORD *)(v2 + 232) + 4LL * (int)this) )
        {
          ClanPage::setScreen(v2);
          return ClanPage::closeInputForAllScreens((ColorTransform *)v2);
        }
      }
      return this;
    }

    __int64 __fastcall ClanPage::setScreen(ColorTransform *a1, const char *a2)
    {
      unsigned int v2; // w20
      ColorTransform *v3; // x19
      __int64 v4; // x8
      __int64 v5; // x9
      unsigned __int64 v6; // x10
      unsigned int v7; // w21
      __int64 result; // x0
      __darwin_pthread_mutex_t *refreshed; // x0
      __int64 Instance; // x0
      __int64 v11; // x0
    
      v2 = (unsigned int)a2;
      v3 = a1;
      v4 = *((_QWORD *)a1 + 34);
      v5 = *((_QWORD *)a1 + 35);
      if ( v5 != v4 )
      {
        v6 = 0;
        v7 = 1;
        do
        {
          a1 = *(ColorTransform **)(v4 + 8 * v6);
          if ( a1 )
          {
            a1 = (ColorTransform *)(*(__int64 (__fastcall **)(ColorTransform *))(*(_QWORD *)a1 + 40LL))(a1);
            *((_BYTE *)a1 + 8) = 0;
            v4 = *((_QWORD *)v3 + 34);
            v5 = *((_QWORD *)v3 + 35);
          }
          v6 = v7++;
        }
        while ( v6 < (v5 - v4) >> 3 );
      }
      switch ( v2 )
      {
        case 0u:
          refreshed = (__darwin_pthread_mutex_t *)ClanPage::refreshAllianceInfo(v3, 0);
          if ( !*((_BYTE *)v3 + 260) )
          {
            Instance = AllianceStream::getInstance(refreshed);
            AllianceStream::setAllianceInfo(Instance, *((_QWORD *)v3 + 31));
          }
          goto LABEL_12;
        case 1u:
        case 3u:
        case 4u:
          goto LABEL_12;
        case 2u:
          ClanPage::refreshJoinableAlliances(a1);
    LABEL_12:
          *((_DWORD *)v3 + 60) = v2;
          v11 = *(_QWORD *)(*((_QWORD *)v3 + 34) + 8LL * v2);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
          *(_BYTE *)(result + 8) = 1;
          if ( *((_DWORD *)v3 + 47) == 2 )
            result = ClanPage::checkStreamVisibility(v3);
          break;
        default:
          result = Debugger::warning((__siginfo *)"illegal alliance Screen type", a2);
          break;
      }
      return result;
    }

    _QWORD *__fastcall ClanPage::closeInputForAllScreens(_QWORD *this)
    {
      _QWORD *v1; // x19
      __int64 v2; // x8
      __int64 v3; // x9
      unsigned __int64 v4; // x10
      unsigned int v5; // w20
    
      v1 = this;
      v2 = *(this + 34);
      v3 = *(this + 35);
      if ( v3 != v2 )
      {
        v4 = 0;
        v5 = 1;
        do
        {
          this = *(_QWORD **)(v2 + 8 * v4);
          if ( this )
          {
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*this + 32LL))(this);
            v2 = v1[34];
            v3 = v1[35];
          }
          v4 = v5++;
        }
        while ( v4 < (v3 - v2) >> 3 );
      }
      return this;
    }

    __int64 __fastcall ClanPage::pageOpened(ColorTransform *this)
    {
      if ( *((_BYTE *)this + 261) )
      {
        ClanPage::refreshAllianceStatusImpl(this, 1);
        *((_BYTE *)this + 261) = 0;
      }
      return ClanPage::checkStreamVisibility(this);
    }

    LogicDataTables *__fastcall ClanPage::refreshAllianceStatusImpl(ColorTransform *this, int a2)
    {
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x21
      int v6; // w20
      LogicDataTables *result; // x0
      int *v9; // x8
      __int64 Globals; // x22
      LogicMath *ButtonCount; // x0
      int v12; // w2
      int v13; // w0
      __int64 v14; // x21
      int v15; // w25
      __int64 v16; // x26
      __int64 Button; // x0
      const String *v18; // x1
      __int64 v19; // x23
      __int64 v20; // x8
      __int64 v21; // x9
      MovieClip *v23; // x24
      #1308 *String; // x0
      char v25; // w8
    
      Instance = GameMode::getInstance((vm_address_t *)this);
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(Instance + 112));
      v6 = LogicClientAvatar::isInAlliance(PlayerAvatar);
      result = (LogicDataTables *)ClanPage::clearAllianceEntry(this);
      if ( *((unsigned __int8 *)this + 244) != v6 || a2 != 0 )
      {
        if ( v6 )
        {
          v9 = &s_stateInAlliance;
        }
        else
        {
          Globals = LogicDataTables::getGlobals(result);
          if ( (int)LogicClientAvatar::getExpLevel(PlayerAvatar) >= *(_DWORD *)(Globals + 72) )
            v9 = &s_stateNoAlliance;
          else
            v9 = &s_stateLocked;
        }
        *((_QWORD *)this + 29) = v9;
        ButtonCount = (LogicMath *)SelectableButtonList::getButtonCount(*((#1255 **)this + 28));
        v13 = LogicMath::min(ButtonCount, 3, v12);
        if ( v13 >= 1 )
        {
          v14 = 0;
          v15 = v13;
          v16 = 16;
          do
          {
            ClanPage::createScreen(this, *(unsigned int *)(*((_QWORD *)this + 29) + 4 * v14));
            Button = SelectableButtonList::getButton(*((#1255 **)this + 28), v14);
            v19 = Button;
            v20 = *((_QWORD *)this + 29);
            v21 = *(int *)(v20 + 88);
            if ( (int)v21 >= 2 && v14 < v21 )
            {
              v23 = *(MovieClip **)(Button + 96);
              String = StringTable::getString((#1308 *)(v20 + v16), v18);
              MovieClip::setText(v23, "tab_txt", (const String *)String);
              v25 = 1;
            }
            else
            {
              v25 = 0;
            }
            *(_BYTE *)(v19 + 8) = v25;
            ++v14;
            v16 += 24;
          }
          while ( v15 != (_DWORD)v14 );
        }
        ClanPage::setScreen(this, (const char *)**((unsigned int **)this + 29));
        result = (LogicDataTables *)SelectableButtonList::selectButtonIndex(*((#1255 **)this + 28), 0);
        *((_BYTE *)this + 244) = v6;
      }
      return result;
    }

    __int64 __fastcall ClanPage::checkStreamVisibility(__int64 this)
    {
      AllianceStream *Instance; // x0
    
      if ( !*(_DWORD *)(this + 240) )
      {
        Instance = (AllianceStream *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)this);
        return AllianceStream::opened(Instance);
      }
      return this;
    }

    vm_address_t *__fastcall ClanPage::refreshAllianceInfo(ColorTransform *this, int a2, int a3)
    {
      vm_address_t *result; // x0
      bool v6; // zf
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 AllianceId; // x20
      const char *v10; // x2
      AskForAllianceDataMessage *v11; // x19
      __int64 v12; // x0
    
      result = (vm_address_t *)Debugger::hudPrint(
                                 (__siginfo *)"ClanTab::refreshAllianceInfo()",
                                 (const char *)0xFFFFFFFFLL,
                                 a3);
      if ( !*((_BYTE *)this + 260) )
      {
        if ( !*((_QWORD *)this + 31) || (*((float *)this + 64) <= 10.0 ? (v6 = a2 == 0) : (v6 = 0), !v6) )
        {
          Instance = GameMode::getInstance(result);
          PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(Instance + 112));
          AllianceId = LogicClientAvatar::getAllianceId(PlayerAvatar);
          Debugger::doAssert(
            (Debugger *)(AllianceId != 0),
            (bool)"Trying to ask for my alliance info when alliance id is NULL",
            v10);
          *((_BYTE *)this + 260) = 1;
          v11 = (AskForAllianceDataMessage *)operator new(80);
          AskForAllianceDataMessage::AskForAllianceDataMessage(v11);
          v12 = LogicLong::clone(AllianceId);
          AskForAllianceDataMessage::setAllianceId((__int64)v11, v12);
          return (vm_address_t *)MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v11);
        }
      }
      return result;
    }

    __int64 __fastcall ClanPage::refreshJoinableAlliances(ColorTransform *this, __int64 a2, int a3)
    {
      AskForJoinableAlliancesListMessage *v3; // x19
    
      Debugger::hudPrint((__siginfo *)"ClanPage::refreshJoinableAlliances()", (const char *)0xFFFFFFFFLL, a3);
      v3 = (AskForJoinableAlliancesListMessage *)operator new(72);
      AskForJoinableAlliancesListMessage::AskForJoinableAlliancesListMessage(v3);
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v3);
    }

    // attributes: thunk
    _QWORD *__fastcall ClanPage::pageClosed(_QWORD *this)
    {
      return ClanPage::closeInputForAllScreens(this);
    }

    __int64 __fastcall ClanPage::showTopHUD(ColorTransform *this)
    {
      return 0;
    }

    __int64 __fastcall ClanPage::createIcon(__int64 a1, __int64 a2, const char *a3)
    {
      return ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_menu_team", a3);
    }

    void *__fastcall ClanPage::getLocalizedName(__int64 a1, const char *a2)
    {
      return StringTable::getString((#1308 *)"TID_TAB_CLAN", a2);
    }

    LogicDataTables *__fastcall ClanPage::refreshAllianceStatus(ColorTransform *a1)
    {
      return ClanPage::refreshAllianceStatusImpl(a1, 0);
    }

    void __fastcall ClanPage::clearAllianceEntry(__int64 a1)
    {
      Rect *v2; // x0
      void *v3; // x0
    
      v2 = *(Rect **)(a1 + 248);
      if ( v2 )
      {
        AllianceFullEntry::destruct(v2);
        v3 = *(void **)(a1 + 248);
        if ( v3 )
          operator delete(v3);
        *(_QWORD *)(a1 + 248) = 0;
      }
      *(_DWORD *)(a1 + 256) = 0;
      *(_BYTE *)(a1 + 260) = 0;
    }

    void __fastcall ClanPage::setAllianceFullEntry(BadgePopup *a1, Rect *a2)
    {
      __int64 Instance; // x0
      vm_address_t *PopupByType; // x0
      vm_address_t *v6; // x21
      __int64 v7; // x0
      tween::Bounce *PlayerAvatar; // x21
      Rect AllianceHeaderEntry; // x0
      __int64 AllianceId; // x22
      __int64 v11; // x0
      __darwin_pthread_mutex_t *v12; // x0
      __int64 v13; // x0
      _BYTE v14[80]; // [xsp+0h] [xbp-70h] BYREF
    
      Instance = GUI::getInstance(a1);
      PopupByType = (vm_address_t *)GUI::getPopupByType(Instance, 22);
      v6 = PopupByType;
      if ( PopupByType )
      {
        AllianceDataMessage::AllianceDataMessage((AllianceDataMessage *)v14);
        AllianceDataMessage::setAllianceFullEntry((NameChangeSubScreen *)v14, a2);
        AlliancePopup::setData(v6, v14);
        AllianceDataMessage::removeAllianceFullEntry((NameChangeSubScreen *)v14);
        PopupByType = (vm_address_t *)AllianceDataMessage::destruct((NameChangeSubScreen *)v14);
      }
      v7 = GameMode::getInstance(PopupByType);
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(v7 + 112));
      if ( (unsigned int)LogicClientAvatar::isInAlliance(PlayerAvatar)
        && (AllianceHeaderEntry = AllianceFullEntry::getAllianceHeaderEntry(a2),
            AllianceId = AllianceHeaderEntry::getAllianceId(*(_QWORD *)&AllianceHeaderEntry),
            v11 = LogicClientAvatar::getAllianceId(PlayerAvatar),
            (unsigned int)LogicLong::equals(AllianceId, v11)) )
      {
        ClanPage::clearAllianceEntry((__int64)a1);
        *((_QWORD *)a1 + 31) = a2;
        v13 = AllianceStream::getInstance(v12);
        AllianceStream::setAllianceInfo(v13, *((_QWORD *)a1 + 31));
      }
      else if ( a2 )
      {
        AllianceFullEntry::destruct(a2);
        operator delete(a2);
      }
    }

    __int64 __fastcall ClanPage::setJoinableAlliances(__int64 a1)
    {
      __int64 v1; // x8
      __int64 result; // x0
      bool v3; // zf
    
      v1 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 16LL);
      result = v1 - 192;
      if ( v1 )
        v3 = v1 == 192;
      else
        v3 = 1;
      if ( !v3 )
        return NoAlliance::setContent();
      return result;
    }

    void __fastcall ClanPage::setAllianceSearchList(__int64 a1, _DWORD *a2)
    {
      __int64 v2; // x8
      bool v3; // zf
    
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 32LL);
      if ( v2 )
        v3 = v2 == 192;
      else
        v3 = 1;
      if ( !v3 )
        AllianceSearch::setContent(v2 - 192, a2);
    }

    __int64 __fastcall ClanPage::createScreen(__int64 result, int a2)
    {
      __int64 v2; // x19
      __int64 v3; // x8
      __int64 v4; // x0
      AllianceSettings *v5; // x20
      __int64 MovieClip; // x20
      __int64 v7; // x0
      __int64 v8; // x8
      __int64 v9; // x0
      NoAlliance *v10; // x20
      __int64 v11; // x8
      __int64 v12; // x0
      tween::Quad *v13; // x20
      __int64 v14; // x8
      __int64 v15; // x0
      AllianceSearch *v16; // x20
      __int64 v17; // x1
      __int64 (__fastcall *v18)(__int64, __int64); // [xsp+8h] [xbp-18h]
    
      v2 = result;
      switch ( a2 )
      {
        case 1:
          v3 = *(_QWORD *)(result + 272);
          v4 = *(_QWORD *)(v3 + 8);
          do
          {
            if ( v4 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
              v3 = *(_QWORD *)(v2 + 272);
            }
            *(_QWORD *)(v3 + 8) = 0;
            v3 = *(_QWORD *)(v2 + 272);
            v4 = *(_QWORD *)(v3 + 8);
          }
          while ( v4 );
          v5 = (AllianceSettings *)operator new(368);
          AllianceSettings::AllianceSettings(v5, 1);
          *(_QWORD *)(*(_QWORD *)(v2 + 272) + 8LL) = (char *)v5 + 192;
          MovieClip = GUIContainer::getMovieClip((#1254 *)v2);
          v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)MovieClip + 160LL);
          v7 = *(_QWORD *)(*(_QWORD *)(v2 + 272) + 8LL);
          goto LABEL_22;
        case 2:
          v8 = *(_QWORD *)(result + 272);
          v9 = *(_QWORD *)(v8 + 16);
          do
          {
            if ( v9 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
              v8 = *(_QWORD *)(v2 + 272);
            }
            *(_QWORD *)(v8 + 16) = 0;
            v8 = *(_QWORD *)(v2 + 272);
            v9 = *(_QWORD *)(v8 + 16);
          }
          while ( v9 );
          v10 = (NoAlliance *)operator new(256);
          NoAlliance::NoAlliance(v10);
          *(_QWORD *)(*(_QWORD *)(v2 + 272) + 16LL) = (char *)v10 + 192;
          MovieClip = GUIContainer::getMovieClip((#1254 *)v2);
          v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)MovieClip + 160LL);
          v7 = *(_QWORD *)(*(_QWORD *)(v2 + 272) + 16LL);
          goto LABEL_22;
        case 3:
          v11 = *(_QWORD *)(result + 272);
          v12 = *(_QWORD *)(v11 + 24);
          do
          {
            if ( v12 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
              v11 = *(_QWORD *)(v2 + 272);
            }
            *(_QWORD *)(v11 + 24) = 0;
            v11 = *(_QWORD *)(v2 + 272);
            v12 = *(_QWORD *)(v11 + 24);
          }
          while ( v12 );
          v13 = (tween::Quad *)operator new(208);
          AllianceIntro::AllianceIntro(v13);
          *(_QWORD *)(*(_QWORD *)(v2 + 272) + 24LL) = (char *)v13 + 192;
          MovieClip = GUIContainer::getMovieClip((#1254 *)v2);
          v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)MovieClip + 160LL);
          v7 = *(_QWORD *)(*(_QWORD *)(v2 + 272) + 24LL);
          goto LABEL_22;
        case 4:
          v14 = *(_QWORD *)(result + 272);
          v15 = *(_QWORD *)(v14 + 32);
          do
          {
            if ( v15 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
              v14 = *(_QWORD *)(v2 + 272);
            }
            *(_QWORD *)(v14 + 32) = 0;
            v14 = *(_QWORD *)(v2 + 272);
            v15 = *(_QWORD *)(v14 + 32);
          }
          while ( v15 );
          v16 = (AllianceSearch *)operator new(472);
          AllianceSearch::AllianceSearch(v16);
          *(_QWORD *)(*(_QWORD *)(v2 + 272) + 32LL) = (char *)v16 + 192;
          MovieClip = GUIContainer::getMovieClip((#1254 *)v2);
          v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)MovieClip + 160LL);
          v7 = *(_QWORD *)(*(_QWORD *)(v2 + 272) + 32LL);
    LABEL_22:
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
          result = v18(MovieClip, v17);
          break;
        default:
          return result;
      }
      return result;
    }

    __int64 __fastcall ClanPage::isBlockingPageScroll(ColorTransform *this)
    {
      __int64 v1; // x0
    
      v1 = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * *((unsigned int *)this + 60));
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
    }

    __int64 __fastcall ClanPage::touchMoved(ColorTransform *a1)
    {
      ClanPage::closeContextMenu(a1);
      return 0;
    }

    __int64 __fastcall ClanPage::touchReleased(ColorTransform *a1, __int64 a2)
    {
      ClanPage::closeContextMenu(a1);
      ClanPage::closeInputForAllScreens(a1);
      Sprite::touchReleased(a1, a2);
      return 1;
    }

    __int64 __fastcall ClanPage::touchPressed(ColorTransform *a1, __int64 a2)
    {
      ClanPage::closeContextMenu(a1);
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    __int64 __fastcall ClanPage::isMyAllianceID(vm_address_t *a1, __int64 a2)
    {
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x0
      vm_address_t *v5; // x0
      __int64 v6; // x0
      tween::Bounce *v7; // x0
      __int64 AllianceId; // x0
    
      Instance = GameMode::getInstance(a1);
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(Instance + 112));
      v5 = (vm_address_t *)LogicClientAvatar::isInAlliance(PlayerAvatar);
      if ( !(_DWORD)v5 )
        return 0;
      v6 = GameMode::getInstance(v5);
      v7 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(v6 + 112));
      AllianceId = LogicClientAvatar::getAllianceId(v7);
      return LogicLong::equals(AllianceId, a2);
    }

    __int64 __fastcall ClanPage::openAllianceInfo(__int64 a1, #1236 *a2)
    {
      #1054 *v4; // x19
      LogicChallengeCommand *v5; // x22
      vm_address_t *v6; // x0
      int v7; // w2
      vm_address_t *refreshed; // x0
      AskForAllianceDataMessage *v9; // x21
      __int64 v10; // x0
      __int64 Instance; // x0
      _BYTE v13[80]; // [xsp+0h] [xbp-70h] BYREF
    
      v4 = (#1054 *)operator new(280);
      AlliancePopup::AlliancePopup(v4);
      v5 = (LogicChallengeCommand *)operator new(336);
      AllianceInfo::AllianceInfo(v5, a2);
      v6 = (vm_address_t *)AlliancePopup::pushScreen(v4, v5);
      if ( (unsigned int)ClanPage::isMyAllianceID(v6, (__int64)a2) )
      {
        refreshed = ClanPage::refreshAllianceInfo((ColorTransform *)a1, 0, v7);
        if ( !*(_BYTE *)(a1 + 260) )
        {
          AllianceDataMessage::AllianceDataMessage((AllianceDataMessage *)v13);
          AllianceDataMessage::setAllianceFullEntry((NameChangeSubScreen *)v13, *(Rect **)(a1 + 248));
          AlliancePopup::setData(v4, v13);
          AllianceDataMessage::removeAllianceFullEntry((NameChangeSubScreen *)v13);
          refreshed = (vm_address_t *)AllianceDataMessage::destruct((NameChangeSubScreen *)v13);
        }
      }
      else
      {
        v9 = (AskForAllianceDataMessage *)operator new(80);
        AskForAllianceDataMessage::AskForAllianceDataMessage(v9);
        v10 = LogicLong::clone(a2);
        AskForAllianceDataMessage::setAllianceId((__int64)v9, v10);
        refreshed = (vm_address_t *)MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v9);
      }
      Instance = GUI::getInstance((BadgePopup *)refreshed);
      return GUI::showPopup(Instance, v4, 1, 0, 0);
    }

    __int64 __fastcall ClanPage::getCurrentScreen(ColorTransform *this)
    {
      return *((unsigned int *)this + 60);
    }

    int **__fastcall ClanPage::checkIfClansAreUnlocked(int **result)
    {
      if ( result[29] == &s_stateLocked )
        return (int **)ClanPage::refreshAllianceStatusImpl((ColorTransform *)result, 1);
      return result;
    }

    __int64 __fastcall ClanPage::getAllianceSettings(ColorTransform *this)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL);
      if ( v1 )
        return v1 - 192;
      else
        return 0;
    }

    __int64 __fastcall ClanPage::setTabButtonsEnabled(CustomButton **a1, bool a2)
    {
      CustomButton::setEnabled(a1[26], a2);
      CustomButton::setEnabled(a1[25], a2);
      return CustomButton::setEnabled(a1[27], a2);
    }

    __int64 __fastcall ClanPage::getContextMenu(__int64 a1)
    {
      __int64 v2; // x0
    
      v2 = *(_QWORD *)(a1 + 296);
      if ( v2 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 360LL))(v2) & 1) == 0 )
        return *(_QWORD *)(a1 + 296);
      else
        return 0;
    }

    void __fastcall ClanPage::openContextMenu(DisplayObject **a1, __int64 a2)
    {
      DisplayObject *v4; // x8
      __int64 *v5; // x22
      __int64 v6; // x21
      __int64 v7; // x0
      vm_address_t *v8; // x0
      __int64 v9; // x21
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 Id; // x22
      __int64 SenderAvatarId; // x0
      LogicLong *v14; // x22
      __int64 v15; // x0
      int HigherInt; // w23
      __int64 v17; // x0
      int LowerInt; // w0
      LogicLong *v19; // x23
      __int64 HomeId; // x0
      int v21; // w24
      __int64 v22; // x0
      int v23; // w0
      DisplayObject **v24; // x24
      DisplayObject *v25; // x0
      PlayerActionMenu *v26; // x20
      const String *SenderName; // x0
      BadgePopup *GlobalBounds; // x0
      BadgePopup *v29; // x0
      __int64 v30; // x0
      __int64 Layer; // x0
      DisplayObject *v32; // x19
      float v33; // s9
      float v34; // s8
      float v35; // s10
      long double Height; // q0
      Rect v37[2]; // [xsp+0h] [xbp-60h] BYREF
    
      v4 = a1[37];
      if ( v4 )
      {
        v5 = (__int64 *)(a2 + 272);
        if ( *(_QWORD *)(a2 + 272) )
        {
          v6 = *((_QWORD *)v4 + 29);
          v7 = ((__int64 (*)(void))StreamEntry::getSenderAvatarId)();
          LOBYTE(v6) = LogicLong::equals(v6, v7);
          v8 = (vm_address_t *)ClanPage::closeContextMenu((ColorTransform *)a1);
          if ( (v6 & 1) != 0 )
            return;
        }
        else
        {
          v8 = (vm_address_t *)ClanPage::closeContextMenu((ColorTransform *)a1);
        }
      }
      else
      {
        v8 = (vm_address_t *)ClanPage::closeContextMenu((ColorTransform *)a1);
        v5 = (__int64 *)(a2 + 272);
      }
      v9 = *v5;
      Instance = GameMode::getInstance(v8);
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(Instance);
      Id = LogicClientAvatar::getId(PlayerAvatar);
      SenderAvatarId = StreamEntry::getSenderAvatarId(v9);
      if ( (LogicLong::equals(Id, SenderAvatarId) & 1) == 0 )
      {
        v14 = (LogicLong *)operator new(8);
        v15 = StreamEntry::getSenderAvatarId(v9);
        HigherInt = LogicLong::getHigherInt(v15);
        v17 = StreamEntry::getSenderAvatarId(v9);
        LowerInt = LogicLong::getLowerInt(v17);
        LogicLong::LogicLong(v14, HigherInt, LowerInt);
        if ( StreamEntry::getHomeId(v9) )
        {
          v19 = (LogicLong *)operator new(8);
          HomeId = StreamEntry::getHomeId(v9);
          v21 = LogicLong::getHigherInt(HomeId);
          v22 = StreamEntry::getHomeId(v9);
          v23 = LogicLong::getLowerInt(v22);
          LogicLong::LogicLong(v19, v21, v23);
        }
        else
        {
          v19 = 0;
        }
        v24 = a1 + 37;
        v25 = a1[37];
        if ( v25 )
          (*(void (__fastcall **)(DisplayObject *))(*(_QWORD *)v25 + 8LL))(v25);
        *v24 = 0;
        if ( v19 )
        {
          v26 = (PlayerActionMenu *)operator new(352);
          PlayerActionMenu::PlayerActionMenu(v26, v14, v19, 0, 0, 0, 0);
          *v24 = v26;
          SenderName = (const String *)StreamEntry::getSenderName(v9);
          PlayerActionMenu::setName(v26, SenderName);
          Rect::Rect(v37);
          GlobalBounds = (BadgePopup *)DisplayObject::getGlobalBounds(a2, v37);
          v29 = (BadgePopup *)GUI::getInstance(GlobalBounds);
          if ( v29 )
          {
            v30 = GUI::getInstance(v29);
            Layer = GUI::getLayer(v30, 2u);
            (*(void (__fastcall **)(__int64, DisplayObject *))(*(_QWORD *)Layer + 160LL))(Layer, *v24);
          }
          v32 = *v24;
          v33 = *(float *)&v37[0].top;
          v34 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v37)));
          v35 = *(float *)&v37[0].bottom;
          Height = Rect::getHeight(v37);
          DisplayObject::setXY(v32, v33 + (float)((float)(v34 + v34) / 3.0), v35 + (float)(*(float *)&Height * 0.25));
          Rect::~Rect(v37);
        }
      }
    }

    vm_address_t *__fastcall ClanPage::reloadAllianceInfo(ColorTransform *this, __int64 a2, int a3)
    {
      return ClanPage::refreshAllianceInfo(this, 1, a3);
    }

    __int64 __fastcall ClanPage::hasGreenNotifications(ColorTransform *this)
    {
      return 1;
    }

}; // end class ClanPage
