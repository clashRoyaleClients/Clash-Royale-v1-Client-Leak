class ShopPage
{
public:

    __int64 __fastcall ShopPage::ShopPage(__int64 a1)
    {
      __int64 v2; // x9
      _QWORD *v3; // x8
      __int64 v4; // x10
      String v6; // [xsp+0h] [xbp-40h] BYREF
      String v7; // [xsp+18h] [xbp-28h] BYREF
    
      String::String(&v7, "sc/ui.sc");
      String::String(&v6, "screen_shop");
      PageItem::PageItem((PageItem *)a1, &v7, &v6);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_100466FC0;
      *(_QWORD *)(a1 + 96) = &off_100467178;
      memset((void *)(a1 + 240), 0, 0x60u);
      v2 = 0;
      v3 = (_QWORD *)(a1 + 320);
      do
      {
        *(_QWORD *)(a1 + 8 * v2 + 232) = 0;
        *v3 = *(v3 - 1);
        v3 -= 3;
        v4 = v2 + 3;
        --v2;
      }
      while ( v4 > 0 );
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      *(_DWORD *)(a1 + 360) = -1;
      *(_QWORD *)(a1 + 368) = 0;
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall ShopPage::ShopPage(__int64 a1)
    {
      return __ZN8ShopPageC2Ev(a1);
    }

    void __fastcall ShopPage::~ShopPage(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x9
      _QWORD *v6; // x8
      __int64 v7; // x10
      __int64 v8; // x20
      void *v9; // x0
    
      *(_QWORD *)a1 = off_100466FC0;
      *(_QWORD *)(a1 + 96) = &off_100467178;
      v2 = *(_QWORD *)(a1 + 368);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 368) = 0;
      v3 = *(_QWORD *)(a1 + 344);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_QWORD *)(a1 + 344) = 0;
      ShopPage::destructItems((ShopPage *)a1);
      v4 = *(_QWORD *)(a1 + 200);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = 0;
      *(_QWORD *)(a1 + 200) = 0;
      v6 = (_QWORD *)(a1 + 320);
      do
      {
        *(_QWORD *)(a1 + 8 * v5 + 232) = 0;
        *v6 = *(v6 - 1);
        v6 -= 3;
        v7 = v5 + 3;
        --v5;
      }
      while ( v7 > 0 );
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      *(_DWORD *)(a1 + 360) = -1;
      v8 = 312;
      *(_QWORD *)(a1 + 368) = 0;
      do
      {
        v9 = *(void **)(a1 + v8);
        if ( v9 )
          operator delete(v9);
        v8 -= 24;
      }
      while ( v8 != 216 );
      PageItem::~PageItem((LogicProjectileData *)a1);
    }

    #1253 *__fastcall ShopPage::destructItems(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x20
      __int64 v4; // x23
      __int64 v5; // x8
      __int64 *v6; // x23
      __int64 v7; // t1
      unsigned __int64 v8; // x9
      __int64 i; // x24
      __int64 v10; // x0
      __int64 v11; // x22
      __int64 v12; // x0
      _QWORD *v13; // x22
      __int64 v14; // t1
      #1253 *result; // x0
    
      v2 = *(_QWORD *)(a1 + 368);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v3 = 0;
      *(_QWORD *)(a1 + 368) = 0;
      do
      {
        v4 = a1 + 24 * v3;
        v7 = *(_QWORD *)(v4 + 240);
        v6 = (__int64 *)(v4 + 240);
        v5 = v7;
        v8 = (unsigned __int64)(v6[1] - v7) >> 3;
        if ( (int)v8 >= 1 )
        {
          for ( i = (int)v8 - 1LL; ; --i )
          {
            v10 = *(_QWORD *)(v5 + 8 * i);
            if ( v10 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
            if ( i + 1 < 2 )
              break;
            v5 = *v6;
          }
          v5 = *v6;
        }
        v6[1] = v5;
        v11 = a1 + 8 * v3;
        v14 = *(_QWORD *)(v11 + 208);
        v13 = (_QWORD *)(v11 + 208);
        v12 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        *v13 = 0;
        ++v3;
      }
      while ( v3 != 4 );
      result = *(#1253 **)(a1 + 200);
      if ( result )
        return (#1253 *)ScrollArea::removeAllContent(result);
      return result;
    }

    // attributes: thunk
    void __fastcall ShopPage::~ShopPage(__int64 a1)
    {
      __ZN8ShopPageD2Ev(a1);
    }

    void __fastcall ShopPage::~ShopPage(void *a1)
    {
      ShopPage::~ShopPage((__int64)a1);
      operator delete(a1);
    }

    void __fastcall ShopPage::buttonClicked(#1314 *this, #1251 *a2)
    {
      LogicPageOpenedCommand *Instance; // x0
      LogicClientAvatar *MainHUD; // x20
      const char *v5; // x1
      const String *String; // x1
    
      if ( *((#1251 **)this + 46) == a2 )
      {
        Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(this);
        MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(Instance);
        String = (const String *)StringTable::getString((#1308 *)"TID_SHOP_CARDS_TOOL_TIP", v5);
        MainHUD::showTextPopover(MainHUD, String, a2, 33, 0);
      }
    }

    _BYTE *__fastcall ShopPage::update(__int64 a1, long double a2)
    {
      LogicPageOpenedCommand *Instance; // x0
      MessageManager *PageGUI; // x0
      _BYTE *result; // x0
      int v7; // w8
      __int64 v8; // x8
      __int64 v9; // x9
      float v10; // s11
      __int64 v11; // x0
      long double v12; // q0
      float v13; // s9
      long double v14; // q0
      __int64 v15; // x0
      float v16; // s0
      #1253 *v17; // x20
      float v18; // s0
      float v19; // s9
      float v20; // s0
      #1257 *v21; // x0
      vm_address_t *MovieClipByName; // x20
      __int64 v23; // x0
      __int64 Home; // x0
      TimeUtil *ShopTimerSecondsLeft; // x0
      bool v26; // w2
      __int64 i; // x20
      __int64 v28; // x21
      __int64 v29; // x8
      __int64 *v30; // x21
      __int64 v31; // t1
      unsigned __int64 v32; // x9
      unsigned int v33; // w23
      float v34; // [xsp+0h] [xbp-80h]
      String v35; // [xsp+18h] [xbp-68h] BYREF
    
      Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance((LogicPageOpenedCommand *)a1);
      PageGUI = (MessageManager *)HomeScreen::getPageGUI(Instance);
      result = (_BYTE *)PageGUI::getCurrentPageIndex(PageGUI);
      if ( (int)result >= 0 )
        v7 = (int)result;
      else
        v7 = -(int)result;
      *(_BYTE *)(a1 + 8) = v7 < 2;
      *(float *)(a1 + 336) = *(float *)(a1 + 336) + *(float *)&a2;
      if ( *(_DWORD *)(a1 + 188) != 2 )
        return result;
      v8 = *(int *)(a1 + 360);
      if ( (_DWORD)v8 != -1 )
      {
        v9 = *(_QWORD *)(a1 + 200);
        if ( v9 )
        {
          v10 = *(float *)(v9 + 96);
          if ( (_DWORD)v8 == 3 )
          {
            v11 = *(_QWORD *)(a1 + 224);
            if ( v11 )
            {
              v12 = DisplayObject::getY(v11);
              v13 = *(float *)&v12;
              *(float *)&v14 = (*(float (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 312) + 96LL))(**(_QWORD **)(a1 + 312));
              *(float *)&v14 = v13 + (float)(*(float *)&v14 + *(float *)&v14);
    LABEL_12:
              v16 = *(float *)&v14 + 0.0;
    LABEL_14:
              v34 = v16;
              v17 = *(#1253 **)(a1 + 200);
              ScrollArea::getXOffset(v17);
              v19 = v18;
              ScrollArea::getScale(*(#1253 **)(a1 + 200));
              ScrollArea::scrollTo(v17, v19, (float)(v10 * 0.5) + v34, v20, 0.5);
              *(_DWORD *)(a1 + 360) = -1;
              goto LABEL_15;
            }
          }
          else
          {
            v15 = *(_QWORD *)(a1 + 8 * v8 + 208);
            if ( v15 )
            {
              v14 = DisplayObject::getY(v15);
              goto LABEL_12;
            }
          }
          v16 = 0.0;
          goto LABEL_14;
        }
      }
    LABEL_15:
      v21 = *(#1257 **)(a1 + 208);
      if ( v21 )
      {
        MovieClipByName = (vm_address_t *)MovieClip::getMovieClipByName(v21, "card_cycle_time");
        v23 = GameMode::getInstance(MovieClipByName);
        Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(v23 + 112));
        ShopTimerSecondsLeft = (TimeUtil *)LogicClientHome::getShopTimerSecondsLeft(Home);
        TimeUtil::getTimeString(ShopTimerSecondsLeft, 1, v26);
        MovieClip::setText((MovieClip *)MovieClipByName, "time", &v35);
        String::~String();
      }
      result = *(_BYTE **)(a1 + 200);
      if ( result )
      {
        result[8] = 1;
        result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, long double))(*(_QWORD *)result + 272LL))(result, a2);
      }
      for ( i = 0; i != 4; ++i )
      {
        v28 = a1 + 24 * i;
        v31 = *(_QWORD *)(v28 + 240);
        v30 = (__int64 *)(v28 + 240);
        v29 = v31;
        if ( v30[1] != v31 )
        {
          v32 = 0;
          v33 = 1;
          do
          {
            result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)(v29 + 8 * v32) + 360LL))(
                                *(_QWORD *)(v29 + 8 * v32),
                                a2);
            v32 = v33;
            v29 = *v30;
            ++v33;
          }
          while ( v32 < (v30[1] - *v30) >> 3 );
        }
      }
      return result;
    }

    void __fastcall ShopPage::stateChanged(__int64 a1, __int64 a2, int a3)
    {
      const char *v5; // x1
      LogicCommand *v6; // x20
      vm_address_t *v7; // x0
      GameMode *Instance; // x0
      #1253 *v9; // x0
      const String *v10; // x4
      pthread_attr_t *v11; // x0
      const String *v12; // x4
      int v13; // w20
      const String *v14; // x4
      int v15; // w20
      const String *v16; // x4
      String v17; // [xsp+8h] [xbp-F8h] BYREF
      String v18; // [xsp+20h] [xbp-E0h] BYREF
      String v19; // [xsp+38h] [xbp-C8h] BYREF
      String v20; // [xsp+50h] [xbp-B0h] BYREF
      String v21; // [xsp+68h] [xbp-98h] BYREF
      String v22; // [xsp+80h] [xbp-80h] BYREF
      String v23; // [xsp+98h] [xbp-68h] BYREF
      String v24; // [xsp+B0h] [xbp-50h] BYREF
      String v25; // [xsp+C8h] [xbp-38h] BYREF
    
      PageItem::stateChanged((BadgePopup *)a1);
      if ( a3 != 2 )
        goto LABEL_20;
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1) >= 1 )
      {
        v6 = (LogicCommand *)operator new(32);
        v7 = (vm_address_t *)LogicCommand::LogicCommand((__int64)v6);
        *(_QWORD *)v6 = &off_100465B58;
        Instance = (GameMode *)GameMode::getInstance(v7);
        GameMode::addCommand(Instance, v6, 1);
      }
      if ( !*(_QWORD *)(a1 + 208) )
        ShopPage::createItems((#1314 *)a1);
      v9 = *(#1253 **)(a1 + 200);
      if ( v9 )
        ScrollArea::scrollTo(v9, 0.0, 0.0, 1.0, 0.0);
      String::getFormatted(
        (__int64 *)&v25.m_length,
        (String *)"%i",
        v5,
        0xCF3CF3CF3CF3CF3DLL
      * ((__int64)(*(_QWORD *)(BillingManager::sm_pInstance + 40) - *(_QWORD *)(BillingManager::sm_pInstance + 32)) >> 3));
      if ( (BillingManager::arePaymentsAvailable(BillingManager::sm_pInstance) & 1) == 0 )
      {
        String::String(&v24, "openShop");
        String::String(&v23, "paymentsUnavailable");
        EventTracker::sendEvent((MovieClip *)&EventTracker::EVENT_TYPE_ECONOMY, &v24, &v23, &v25, v12);
        String::~String();
        String::~String();
        v13 = 0;
        goto LABEL_16;
      }
      if ( (unsigned int)BillingManager::isWaitingForProductDetails(BillingManager::sm_pInstance) )
      {
        String::String(&v22, "openShop");
        String::String(&v21, "waitingForProducts");
        EventTracker::sendEvent((MovieClip *)&EventTracker::EVENT_TYPE_ECONOMY, &v22, &v21, &v25, v10);
        String::~String();
        String::~String();
    LABEL_14:
        v13 = 1;
        goto LABEL_16;
      }
      if ( (unsigned int)BillingManager::isWaitingForTransaction(BillingManager::sm_pInstance) )
      {
        String::String(&v20, "openShop");
        String::String(&v19, "waitingForTransaction");
        EventTracker::sendEvent((MovieClip *)&EventTracker::EVENT_TYPE_ECONOMY, &v20, &v19, &v25, v14);
        String::~String();
        String::~String();
        goto LABEL_14;
      }
      v15 = BillingManager::lookupProductsIfNeeded((#1155 *)BillingManager::sm_pInstance);
      String::String(&v18, "openShop");
      String::String(&v17, "billingOk");
      EventTracker::sendEvent((MovieClip *)&EventTracker::EVENT_TYPE_ECONOMY, &v18, &v17, &v25, v16);
      String::~String();
      String::~String();
      v13 = v15 ^ 1;
    LABEL_16:
      if ( *(_BYTE *)(LogicDataTables::getClientGlobals(v11) + 197LL) && ((v13 ^ 1) & 1) == 0 )
        BillingManager::retryPendingPurchase((#1155 *)BillingManager::sm_pInstance);
      String::~String();
    LABEL_20:
      *(_DWORD *)(a1 + 336) = 0;
    }

    void __fastcall ShopPage::createItems(#1314 *this)
    {
      Stage *isEnabled; // x0
      __int64 v3; // x8
      __int64 v4; // x0
      long double v5; // q0
      long double v6; // q0
      long double v7; // q0
      __int64 v8; // x0
      vm_address_t *v9; // x0
      long double v10; // q0
      int v11; // s8
      const String *v12; // x2
      DisplayObject *v13; // x20
      long double v14; // q0
      __int64 MovieClip; // x0
      Stage *TextFieldByName; // x0
      const char *v17; // x1
      #1271 *v18; // x20
      Stage *Instance; // x0
      int v20; // s8
      int v21; // s10
      long double Width; // q0
      float v23; // s9
      #1253 *v24; // x21
      float v25; // s8
      long double Height; // q0
      __int64 v27; // x0
      #1257 *v28; // x0
      DisplayObject *v29; // x21
      long double v30; // q0
      long double v31; // q0
      float v32; // s8
      __int64 v33; // x0
      vm_address_t *Home; // x0
      const char *v35; // x1
      const char *v36; // x2
      __int64 v37; // x0
      const String *v38; // x2
      long double v39; // q0
      __int128 v40; // q0
      __int64 i; // x20
      __int64 v42; // x0
      char *v43; // x21
      #1257 **v44; // x21
      DeviceLinkCodeReceivedScreen *v45; // x23
      void (__fastcall *v46)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x22
      __int64 MovieClipByName; // x0
      vm_address_t *v48; // x23
      __int64 v49; // x0
      __int64 v50; // x0
      TimeUtil *ShopTimerSecondsLeft; // x0
      bool v52; // w2
      vm_address_t *v53; // x0
      __int64 v54; // x0
      __int64 v55; // x25
      __int64 j; // x24
      const LogicData *v57; // x27
      ShopItem *v58; // x23
      __int64 v59; // x0
      tween::Bounce *PlayerAvatar; // x23
      const char *v61; // x2
      char *v62; // x21
      __int64 Arena; // x25
      int v64; // w1
      __int64 Table; // x26
      __int64 k; // x27
      const LogicData *v67; // x24
      ShopItem *v68; // x23
      LogicKickAllianceMemberCommand *ShopPrice; // x24
      const LogicResourceData *DiamondData; // x0
      char *v71; // x21
      AreaEffectObject *v72; // x2
      __int64 v73; // x26
      __int64 v74; // x8
      unsigned __int64 v75; // x9
      _QWORD *v76; // x25
      __int64 v77; // x27
      __int64 v78; // x28
      __int64 v79; // x22
      DeviceLinkedStreamEntry *BillingPackageByName; // x23
      CancelChallengeMessage *v81; // x24
      __int64 Diamonds; // x0
      __int64 v83; // x23
      __int64 v84; // x24
      __int64 v85; // x2
      __int64 m; // x8
      char *v87; // x21
      int v88; // w1
      __int64 v89; // x25
      __int64 n; // x26
      const LogicData *v91; // x28
      int v92; // w23
      ShopItem *v93; // x24
      LogicDataTables *v94; // x0
      HomeScreen *Globals; // x0
      LogicKickAllianceMemberCommand *ResourceDiamondCost; // x23
      const LogicResourceData *v97; // x0
      #1257 *v98; // x1
      float v99; // s9
      __int128 v100; // q0
      float v101; // s8
      long double v102; // q0
      char *v103; // x23
      __int64 v104; // x8
      __int64 *v105; // x23
      __int64 v106; // t1
      unsigned __int64 v107; // x21
      __int64 v108; // x24
      float v109; // s14
      int v110; // w26
      DisplayObject *v111; // x25
      float v112; // s9
      float v113; // s10
      int v114; // w8
      __int128 v115; // q1
      __int64 v116; // x20
      __int64 v117; // x21
      __int64 v118; // x0
      float *v119; // x0
      float v120; // [xsp+1Ch] [xbp-174h]
      __int128 v121; // [xsp+20h] [xbp-170h]
      float v122; // [xsp+30h] [xbp-160h]
      __int128 v123; // [xsp+48h] [xbp-148h] BYREF
      ShopItem *v124; // [xsp+58h] [xbp-138h] BYREF
      CancelChallengeMessage *v125; // [xsp+60h] [xbp-130h] BYREF
      ShopItem *v126; // [xsp+68h] [xbp-128h] BYREF
      ShopItem *v127; // [xsp+70h] [xbp-120h] BYREF
      String v128; // [xsp+78h] [xbp-118h] BYREF
      String v129; // [xsp+90h] [xbp-100h] BYREF
      String v130; // [xsp+A8h] [xbp-E8h] BYREF
      Rect v131; // [xsp+C0h] [xbp-D0h] BYREF
      float v132; // [xsp+C8h] [xbp-C8h]
      float v133; // [xsp+CCh] [xbp-C4h]
      String v134; // [xsp+D0h] [xbp-C0h] BYREF
      String v135; // [xsp+E8h] [xbp-A8h] BYREF
    
      isEnabled = (Stage *)ShopPage::isEnabled(this);
      v3 = *((_QWORD *)this + 44);
      if ( ((unsigned __int8)isEnabled & 1) != 0 )
      {
        if ( v3 )
          *(_BYTE *)(v3 + 8) = 0;
        if ( *((_QWORD *)this + 26) )
          ShopPage::destructItems((__int64)this);
        Rect::Rect(&v131);
        v4 = *((_QWORD *)this + 25);
        if ( v4 )
        {
          v5 = DisplayObject::getX(v4);
          *(_DWORD *)&v131.top = LODWORD(v5);
          v6 = DisplayObject::getY(*((_QWORD *)this + 25));
          *(_DWORD *)&v131.bottom = LODWORD(v6);
          v7 = DisplayObject::getX(*((_QWORD *)this + 25));
          v8 = *((_QWORD *)this + 25);
          v132 = *(float *)&v7 + *(float *)(v8 + 92);
          v10 = DisplayObject::getY(v8);
          v133 = *(float *)&v10 + *(float *)(*((_QWORD *)this + 25) + 96LL);
        }
        else
        {
          MovieClip = GUIContainer::getMovieClip(this);
          TextFieldByName = (Stage *)MovieClip::getTextFieldByName(MovieClip, "scroll_area");
          v18 = TextFieldByName;
          if ( !TextFieldByName )
            Debugger::error((__siginfo *)"cannot find scroll area from shop", v17);
          Instance = (Stage *)Stage::getInstance(TextFieldByName);
          v20 = *((_DWORD *)Instance + 107);
          v21 = *(_DWORD *)(Stage::getInstance(Instance) + 432LL);
          TextField::getTextFieldBounds(v18, (#1261 *)&v131);
          Width = Rect::getWidth(&v131);
          v23 = (float)v20;
          *((_DWORD *)this + 85) = LODWORD(Width);
          *(_DWORD *)&v131.top = 0;
          v132 = (float)v20;
          v133 = (float)v21;
          v24 = (#1253 *)operator new(504);
          LODWORD(v25) = COERCE_UNSIGNED_INT128(Rect::getWidth(&v131));
          Height = Rect::getHeight(&v131);
          ScrollArea::ScrollArea(v24, v25, *(float *)&Height, 1);
          *((_QWORD *)this + 25) = v24;
          ScrollArea::enablePinching(v24, 0);
          ScrollArea::enableHorizontalDrag(*((#1253 **)this + 25), 0);
          ScrollArea::enableVerticalDrag(*((#1253 **)this + 25), 1);
          v27 = *((_QWORD *)this + 25);
          *(_BYTE *)(v27 + 496) = 0;
          ScrollArea::setAlignment((#1253 *)v27, 12);
          v28 = (#1257 *)GUIContainer::getMovieClip(this);
          MovieClip::changeTimelineChild(v28, v18, *((#1249 **)this + 25));
          v29 = (DisplayObject *)*((_QWORD *)this + 25);
          v30 = DisplayObject::getY(v18);
          *(__n128 *)&v31 = DisplayObject::setPixelSnappedXY(v29, v23 * -0.5, *(float *)&v30 + *(float *)&v131.bottom);
          v9 = (vm_address_t *)(*(__int64 (__fastcall **)(#1271 *, long double))(*(_QWORD *)v18 + 8LL))(v18, v31);
        }
        v32 = *(float *)(*((_QWORD *)this + 25) + 92LL);
        v33 = GameMode::getInstance(v9);
        Home = (vm_address_t *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v33 + 112));
        v120 = v32 * 0.5;
        if ( Home && (Home = (vm_address_t *)LogicClientHome::getShopWeekdayIndex(Home), (_DWORD)Home == 1) )
        {
          v37 = *((_QWORD *)this + 43);
          if ( v37 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
          *((_QWORD *)this + 43) = 0;
          String::String(&v130, "sc/ui.sc");
          String::String(&v129, "shop_epic_sunday_divider");
          *((_QWORD *)this + 43) = StringTable::getMovieClip((#1308 *)&v130, &v129, v38);
          String::~String();
          String::~String();
          ScrollArea::addContentDontUpdateBounds(*((#1253 **)this + 25), *((#1249 **)this + 43));
          *(__n128 *)&v39 = DisplayObject::setPixelSnappedXY((DisplayObject *)*((_QWORD *)this + 43), v120, 0.0);
          *(float *)&v40 = (*(float (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 43) + 96LL))(
                             *((_QWORD *)this + 43),
                             v39)
                         + 0.0;
        }
        else
        {
          v40 = 0u;
        }
        v121 = v40;
        for ( i = 0; i < 4; ++i )
        {
          switch ( (int)i )
          {
            case 0:
              v42 = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "shop_card_divider", v36);
              v43 = (char *)this + 8 * i;
              *((_QWORD *)v43 + 26) = v42;
              v44 = (#1257 **)(v43 + 208);
              *(_BYTE *)(v42 + 64) = 1;
              v45 = (DeviceLinkCodeReceivedScreen *)operator new(264);
              GameButton::GameButton(v45);
              *((_QWORD *)this + 46) = v45;
              v46 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v45 + 280LL);
              MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 26), "info_btn");
              v46(v45, MovieClipByName, 1);
              CustomButton::setButtonListener(*((_QWORD *)this + 46), (char *)this + 96);
              (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 26) + 160LL))(
                *((_QWORD *)this + 26),
                *((_QWORD *)this + 46));
              v48 = (vm_address_t *)MovieClip::getMovieClipByName(*v44, "card_cycle_time");
              v49 = GameMode::getInstance(v48);
              v50 = LogicGameMode::getHome(*(UnlockAccountPopup **)(v49 + 112));
              ShopTimerSecondsLeft = (TimeUtil *)LogicClientHome::getShopTimerSecondsLeft(v50);
              TimeUtil::getTimeString(ShopTimerSecondsLeft, 1, v52);
              MovieClip::setText((MovieClip *)v48, "time", &v128);
              String::~String();
              v54 = GameMode::getInstance(v53);
              v55 = LogicGameMode::getHome(*(UnlockAccountPopup **)(v54 + 112));
              for ( j = 0; (int)j < (int)LogicClientHome::getShopAvailableSpellCount(v55); j = (unsigned int)(j + 1) )
              {
                v57 = *(const LogicData **)LogicClientHome::getShopSpellSlot(v55, j);
                v58 = (ShopItem *)operator new(360);
                ShopItem::ShopItem(v58, v57, 1, 0);
                v127 = v58;
                std::vector<ShopItem *>::push_back((char *)this + 24 * i + 240, &v127);
              }
              break;
            case 1:
              v59 = GameMode::getInstance(Home);
              PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(v59);
              v62 = (char *)this + 8 * i;
              *((_QWORD *)v62 + 26) = ResourceManager::getMovieClip(
                                        (ResourceManager *)"sc/ui.sc",
                                        "shop_chest_divider",
                                        v61);
              v44 = (#1257 **)(v62 + 208);
              Arena = LogicClientAvatar::getArena(PlayerAvatar);
              Table = LogicDataTables::getTable((LogicDataTables *)0x13, v64);
              for ( k = 0; (int)k < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table); k = (unsigned int)(k + 1) )
              {
                v67 = (const LogicData *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, k);
                if ( (int)LogicTreasureChestData::getShopPrice(v67) >= 1 && LogicTreasureChestData::getArena(v67) == Arena )
                {
                  v68 = (ShopItem *)operator new(360);
                  ShopItem::ShopItem(v68, v67, 1, 0);
                  v126 = v68;
                  std::vector<ShopItem *>::push_back((char *)this + 24 * i + 240, &v126);
                  ShopPrice = (LogicKickAllianceMemberCommand *)LogicTreasureChestData::getShopPrice(v67);
                  DiamondData = (const LogicResourceData *)LogicDataTables::getDiamondData(ShopPrice);
                  ShopItem::setPrice(v68, (int)ShopPrice, DiamondData);
                }
              }
              break;
            case 2:
              v71 = (char *)this + 8 * i;
              *((_QWORD *)v71 + 26) = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "shop_gem_divider", v36);
              v44 = (#1257 **)(v71 + 208);
              v73 = BillingManager::sm_pInstance;
              v74 = *(_QWORD *)(BillingManager::sm_pInstance + 32);
              v75 = 0xCF3CF3CF3CF3CF3DLL * ((*(_QWORD *)(BillingManager::sm_pInstance + 40) - v74) >> 3);
              v76 = (_QWORD *)((char *)this + 24 * i + 240);
              if ( (int)v75 >= 1 )
              {
                v77 = 0;
                v78 = 0;
                v79 = (int)v75;
                while ( 1 )
                {
                  BillingPackageByName = (DeviceLinkedStreamEntry *)LogicDataTables::getBillingPackageByName(
                                                                      (LogicKickAllianceMemberCommand *)(v74 + v77),
                                                                      0,
                                                                      v72);
                  if ( LogicBillingPackagesData::isEnabled(BillingPackageByName) )
                  {
                    v81 = (CancelChallengeMessage *)operator new(360);
                    Diamonds = LogicBillingPackagesData::getDiamonds(BillingPackageByName);
                    ShopItem::ShopItem(v81, BillingPackageByName, Diamonds, *(_QWORD *)(v73 + 32) + v77);
                    v125 = v81;
                    ShopItem::setPriceLocalCurrency(v81);
                    std::vector<ShopItem *>::push_back((char *)this + 24 * i + 240, &v125);
                  }
                  if ( ++v78 >= v79 )
                    break;
                  v77 += 168;
                  v74 = *(_QWORD *)(v73 + 32);
                }
              }
              v83 = *v76;
              v84 = *((_QWORD *)this + 3 * i + 31);
              if ( *v76 != v84 )
              {
                v85 = 0;
                for ( m = (v84 - v83) >> 3; m != 1; m >>= 1 )
                  v85 += 2;
                std::__introsort_loop<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,long,bool (*)(ShopItem const*,ShopItem const*)>(
                  *v76,
                  *((_QWORD *)this + 3 * i + 31),
                  v85,
                  itemSort);
                std::__final_insertion_sort<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>(
                  v83,
                  v84,
                  itemSort);
              }
              break;
            case 3:
              v87 = (char *)this + 8 * i;
              *((_QWORD *)v87 + 26) = ResourceManager::getMovieClip(
                                        (ResourceManager *)"sc/ui.sc",
                                        "shop_resource_divider",
                                        v36);
              v44 = (#1257 **)(v87 + 208);
              v89 = LogicDataTables::getTable((LogicDataTables *)0x37, v88);
              for ( n = 0; (int)n < (*(int (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89); n = (unsigned int)(n + 1) )
              {
                v91 = (const LogicData *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 40LL))(v89, n);
                v92 = *((_DWORD *)v91 + 28);
                v93 = (ShopItem *)operator new(360);
                v94 = ShopItem::ShopItem(v93, v91, v92, 0);
                v124 = v93;
                Globals = (HomeScreen *)LogicDataTables::getGlobals(v94);
                ResourceDiamondCost = (LogicKickAllianceMemberCommand *)LogicGlobals::getResourceDiamondCost(Globals, v92);
                v97 = (const LogicResourceData *)LogicDataTables::getDiamondData(ResourceDiamondCost);
                ShopItem::setPrice(v93, (int)ResourceDiamondCost, v97);
                std::vector<ShopItem *>::push_back((char *)this + 24 * i + 240, &v124);
              }
              break;
            default:
              Debugger::error((__siginfo *)"Need to add export name for shop category divider", v35);
              return;
          }
          if ( *v44 )
          {
            Rect::Rect((Rect *)&v123);
            DisplayObject::getBounds(*v44, 0, &v123);
            DisplayObject::setPixelSnappedXY(*v44, v120, *(float *)&v121 - *((float *)&v123 + 1));
            DropGUIContainer::putLocalizedTIDsToTextFields(*v44, v98);
            ScrollArea::addContentDontUpdateBounds(*((#1253 **)this + 25), *v44);
            v99 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getHeight(&v123)));
            Rect::~Rect((Rect *)&v123);
            v100 = v121;
            *(float *)&v100 = *(float *)&v121 + v99;
            v121 = v100;
          }
          v101 = *((float *)this + 85);
          v102 = Rect::getWidth(&v131);
          v103 = (char *)this + 24 * i;
          v106 = *((_QWORD *)v103 + 30);
          v105 = (__int64 *)(v103 + 240);
          v104 = v106;
          v107 = (unsigned __int64)(v105[1] - v106) >> 3;
          if ( (int)v107 < 1 )
          {
            v122 = 0.0;
          }
          else
          {
            v108 = 0;
            v109 = (float)(*(float *)&v102 - *((float *)this + 85)) * 0.5;
            v110 = (int)v107 % 3;
            v122 = 0.0;
            while ( 1 )
            {
              v111 = *(DisplayObject **)(v104 + 8 * v108);
              if ( !(_DWORD)v108 )
                LODWORD(v122) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v111 + 96LL))(v111));
              v112 = (float)((float)(v101 / 3.0) * 0.5)
                   + (float)(v109 + (float)((float)(v101 / 3.0) * (float)((int)v108 % 3)));
              if ( v110 && v108 >= 3 * ((int)v107 / 3) )
              {
                v113 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v111 + 88LL))(v111)));
                v112 = v112
                     + (float)((float)((float)(v113 * 3.0)
                                     - (float)((float)v110
                                             * (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v111 + 88LL))(v111)))
                             * 0.5);
              }
              DisplayObject::setPixelSnappedXY(
                v111,
                v112,
                (float)(v122 * 0.5) + (float)(*(float *)&v121 + (float)(v122 * (float)((int)v108 / 3))));
              Home = (vm_address_t *)ScrollArea::addContentDontUpdateBounds(*((#1253 **)this + 25), v111);
              if ( ++v108 >= (int)v107 )
                break;
              v104 = *v105;
            }
          }
          if ( (int)v107 + 2 < 6 )
            v114 = 1;
          else
            v114 = ((int)v107 + 2) / 3;
          v115 = v121;
          *(float *)&v115 = *(float *)&v121 + (float)(v122 * (float)v114);
          v121 = v115;
        }
        ScrollArea::updateBounds(*((ScrollArea **)this + 25));
        v116 = operator new(16);
        Rect::Rect((Rect *)v116);
        v117 = *((_QWORD *)this + 25);
        v118 = GUIContainer::getMovieClip(this);
        DisplayObject::getBounds(v117, v118, v116);
        v119 = (float *)*((_QWORD *)this + 25);
        *(float *)(v116 + 12) = *(float *)(v116 + 12) + (float)(v119[24] * 0.25);
        ScrollArea::setForcedContentBounds((ScrollArea *)v119, (Rect *)v116);
        Rect::~Rect(&v131);
      }
      else if ( !v3 )
      {
        v11 = *(_DWORD *)(Stage::getInstance(isEnabled) + 432LL);
        String::String(&v135, "sc/ui.sc");
        String::String(&v134, "shop_intro_page");
        v13 = StringTable::getMovieClip((#1308 *)&v135, &v134, v12);
        String::~String();
        String::~String();
        *(__n128 *)&v14 = DisplayObject::setPixelSnappedXY(v13, 0.0, (float)v11 * 0.5);
        (*(void (__fastcall **)(#1314 *, DisplayObject *, long double))(*(_QWORD *)this + 160LL))(this, v13, v14);
        *((_QWORD *)this + 44) = v13;
      }
    }

    __int64 __fastcall ShopPage::isBlockingPageScroll(#1314 *this)
    {
      #1253 *v1; // x0
    
      v1 = (#1253 *)*((_QWORD *)this + 25);
      if ( v1 )
        return ScrollArea::isPanning(v1);
      else
        return 0;
    }

    bool __fastcall ShopPage::getNotificationCount(vm_address_t *a1)
    {
      __int64 Instance; // x0
      __int64 Home; // x0
      __int64 v3; // x20
      int ShopWeekdayIndex; // w19
      vm_address_t *ShopWeekdayIndexSeen; // x0
      int v6; // w20
      __int64 v7; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 Arena; // x0
      int isTrainingCamp; // w0
      LogicCommand *v11; // x19
      vm_address_t *v12; // x0
      GameMode *v13; // x0
    
      Instance = GameMode::getInstance(a1);
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      v3 = Home;
      if ( !Home )
        return 0;
      ShopWeekdayIndex = LogicClientHome::getShopWeekdayIndex(Home);
      ShopWeekdayIndexSeen = (vm_address_t *)LogicClientHome::getShopWeekdayIndexSeen(v3);
      v6 = (int)ShopWeekdayIndexSeen;
      v7 = GameMode::getInstance(ShopWeekdayIndexSeen);
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(v7 + 112));
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      isTrainingCamp = LogicArenaData::isTrainingCamp(Arena);
      if ( ShopWeekdayIndex != v6 && isTrainingCamp )
      {
        v11 = (LogicCommand *)operator new(32);
        v12 = (vm_address_t *)LogicCommand::LogicCommand((__int64)v11);
        *(_QWORD *)v11 = &off_100465B58;
        v13 = (GameMode *)GameMode::getInstance(v12);
        GameMode::addCommand(v13, v11, 1);
        return 0;
      }
      return ShopWeekdayIndex != v6;
    }

    __int64 __fastcall ShopPage::createIcon(__int64 a1, __int64 a2, const char *a3)
    {
      return ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_menu_shop", a3);
    }

    void *__fastcall ShopPage::getLocalizedName(__int64 a1, const char *a2)
    {
      return StringTable::getString((#1308 *)"TID_TAB_SHOP", a2);
    }

    void __fastcall ShopPage::onPeek(#1314 *this, float a2)
    {
      if ( a2 > 0.1 && !*((_QWORD *)this + 26) )
        ShopPage::createItems(this);
    }

    __int64 __fastcall ShopPage::isEnabled(vm_address_t *this)
    {
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 Arena; // x0
    
      Instance = GameMode::getInstance(this);
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(Instance);
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      return (unsigned int)LogicArenaData::isTrainingCamp(Arena) ^ 1;
    }

    __int64 __fastcall ShopPage::cardBought(__int64 result, __int64 a2)
    {
      __int64 v3; // x20
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      unsigned int v6; // w22
      CancelChallengeMessage *v7; // x21
    
      v3 = result;
      v4 = *(_QWORD *)(result + 240);
      if ( *(_QWORD *)(result + 248) != v4 )
      {
        v5 = 0;
        v6 = 1;
        do
        {
          v7 = *(CancelChallengeMessage **)(v4 + 8 * v5);
          result = ShopItem::getSpellData(v7);
          if ( result == a2 )
            result = ShopItem::cardBoughtAnimation(v7);
          v5 = v6;
          v4 = *(_QWORD *)(v3 + 240);
          ++v6;
        }
        while ( v5 < (*(_QWORD *)(v3 + 248) - v4) >> 3 );
      }
      return result;
    }

    // attributes: thunk
    void __fastcall ShopPage::refreshSpells(#1314 *this)
    {
      ShopPage::createItems(this);
    }

    __int64 __fastcall ShopPage::resourcesBought(__int64 result, int a2, LogicPageOpenedCommand *a3)
    {
      _QWORD *v5; // x23
      __int64 v6; // x8
      unsigned __int64 v7; // x9
      __int64 v8; // x24
      #1249 *v9; // x20
      LogicPageOpenedCommand *DiamondData; // x19
      unsigned int v11; // w26
      CancelChallengeMessage *v12; // x25
      ResetAccountMessage **Data; // x0
      DeviceLinkedStreamEntry *v14; // x0
      LogicPageOpenedCommand *Instance; // x0
      LogicClientAvatar *MainHUD; // x0
      __int64 v17; // x8
      unsigned __int64 v18; // x9
      unsigned int v19; // w26
      CancelChallengeMessage *v20; // x25
      ResetAccountMessage **v21; // x0
      LogicPageOpenedCommand *v22; // x0
      LogicClientAvatar *v23; // x0
      int v24; // w8
      int v25; // w11
      int v26; // w22
      int v27; // w23
      int v28; // w11
      int v29; // w10
      int v30; // w24
      int v31; // w8
      int v32; // w25
      int v33; // w8
      int v34; // w21
      float v35; // s8
      BadgePopup *v36; // x0
      float v37; // s9
      BadgePopup *v38; // x0
      __int64 v39; // x0
    
      v5 = (_QWORD *)result;
      v6 = *(_QWORD *)(result + 288);
      if ( *(_QWORD *)(result + 296) == v6 )
      {
        v8 = 0;
        v9 = 0;
        DiamondData = 0;
      }
      else
      {
        v7 = 0;
        v8 = 0;
        v9 = 0;
        DiamondData = 0;
        v11 = 1;
        do
        {
          v12 = *(CancelChallengeMessage **)(v6 + 8 * v7);
          Data = (ResetAccountMessage **)ShopItem::getData(v12);
          result = LogicData::getDataType(Data);
          if ( (_DWORD)result == 2 )
          {
            v14 = (DeviceLinkedStreamEntry *)ShopItem::getData(v12);
            result = LogicBillingPackagesData::getDiamonds(v14);
            if ( (_DWORD)result == a2 )
            {
              result = LogicDataTables::getDiamondData((LogicKickAllianceMemberCommand *)result);
              if ( (LogicPageOpenedCommand *)result == a3 )
              {
                DiamondData = (LogicPageOpenedCommand *)LogicDataTables::getDiamondData((LogicKickAllianceMemberCommand *)result);
                Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(DiamondData);
                MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(Instance);
                result = MainHUD::getDiamondsIconDisplayObject(MainHUD);
                v8 = result;
                v9 = v12;
              }
            }
          }
          v7 = v11;
          v6 = v5[36];
          ++v11;
        }
        while ( v7 < (v5[37] - v6) >> 3 );
      }
      v17 = v5[39];
      if ( v5[40] != v17 )
      {
        v18 = 0;
        v19 = 1;
        do
        {
          v20 = *(CancelChallengeMessage **)(v17 + 8 * v18);
          v21 = (ResetAccountMessage **)ShopItem::getData(v20);
          result = LogicData::getDataType(v21);
          if ( (_DWORD)result == 55 )
          {
            result = ShopItem::getData(v20);
            if ( *(_DWORD *)(result + 112) == a2 && *(LogicPageOpenedCommand **)(result + 104) == a3 )
            {
              v22 = (LogicPageOpenedCommand *)HomeScreen::getInstance((LogicPageOpenedCommand *)result);
              v23 = (LogicClientAvatar *)HomeScreen::getMainHUD(v22);
              result = MainHUD::getGoldIconDisplayObject(v23);
              v8 = result;
              DiamondData = a3;
              v9 = v20;
            }
          }
          v18 = v19;
          v17 = v5[39];
          ++v19;
        }
        while ( v18 < (v5[40] - v17) >> 3 );
      }
      if ( DiamondData && v9 && v8 )
      {
        v24 = a2 / 50;
        if ( a2 / 50 >= 20 )
          v25 = a2 / 50;
        else
          v25 = 20;
        if ( v25 > 500 )
          v25 = 500;
        if ( v25 >= 1 )
        {
          v26 = a2 / v25;
          v27 = a2 % v25;
          if ( a2 > 1049 )
            v28 = ~v24;
          else
            v28 = -21;
          if ( ~v28 > 500 )
            v29 = ~v28;
          else
            v29 = 500;
          v30 = 499 - v28 - v29;
          if ( v24 <= 20 )
            v24 = 20;
          if ( ~v24 < -501 || v24 == 500 )
            v31 = -501;
          else
            v31 = ~v24;
          v32 = -2 - v31;
          do
          {
            if ( v32 )
              v33 = v26;
            else
              v33 = v27;
            if ( v27 )
              v34 = v33;
            else
              v34 = v26;
            v35 = (float)((float)((float)(rand() % 100) * 0.01) * 0.8) + 0.25;
            v36 = (BadgePopup *)rand();
            v37 = (float)((float)((int)v36 % 100) * 0.01) * 0.0;
            v38 = (BadgePopup *)GUI::getInstance(v36);
            v39 = GUI::addDataGained(v38, v9, DiamondData, v34, 0, 0.0, 0.0, v37, v35);
            result = DataGained::setValueVisible(v39, 0);
            --v30;
            --v32;
          }
          while ( v30 );
        }
      }
      return result;
    }

}; // end class ShopPage
