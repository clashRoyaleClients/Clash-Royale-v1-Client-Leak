class FeedPage
{
public:

    __int64 __fastcall FeedPage::FeedPage(__int64 a1)
    {
      Stage *v2; // x0
      String v4; // [xsp+10h] [xbp-40h] BYREF
      String v5; // [xsp+28h] [xbp-28h] BYREF
    
      String::String(&v5, "sc/ui.sc");
      String::String(&v4, "tvroyal_page_iphone");
      PageItem::PageItem((PageItem *)a1, &v5, &v4);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046DCA8;
      *(_QWORD *)(a1 + 96) = &off_10046DE60;
      v2 = (Stage *)memset((void *)(a1 + 200), 0, 0x50u);
      *(_DWORD *)(a1 + 280) = -1;
      Stage::getInstance(v2);
      return a1;
    }

    // attributes: thunk
    void __fastcall FeedPage::FeedPage(FeedPage *this)
    {
      __ZN8FeedPageC2Ev((__int64)this);
    }

    void __fastcall FeedPage::~FeedPage(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
    
      *(_QWORD *)a1 = off_10046DCA8;
      *(_QWORD *)(a1 + 96) = &off_10046DE60;
      v2 = *(_QWORD *)(a1 + 272);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 272) = 0;
      v3 = *(_QWORD *)(a1 + 248);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_QWORD *)(a1 + 248) = 0;
      FeedPage::destructItems((FeedPage *)a1);
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_DWORD *)(a1 + 280) = -1;
      v4 = *(_QWORD *)(a1 + 216);
      if ( v4 )
        operator delete[](v4);
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      PageItem::~PageItem((LogicProjectileData *)a1);
    }

    #1253 *__fastcall FeedPage::destructItems(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      int v5; // w8
      __int64 i; // x20
      __int64 v7; // x0
      __int64 v8; // x0
      #1253 *result; // x0
    
      v2 = *(_QWORD *)(a1 + 256);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 256) = 0;
      v3 = *(_QWORD *)(a1 + 264);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_QWORD *)(a1 + 264) = 0;
      v4 = *(_QWORD *)(a1 + 208);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_QWORD *)(a1 + 208) = 0;
      v5 = *(_DWORD *)(a1 + 228);
      if ( v5 >= 1 )
      {
        for ( i = 0; i < v5; ++i )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 8 * i);
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            v5 = *(_DWORD *)(a1 + 228);
          }
        }
      }
      *(_DWORD *)(a1 + 228) = 0;
      v8 = *(_QWORD *)(a1 + 232);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *(_QWORD *)(a1 + 232) = 0;
      result = *(#1253 **)(a1 + 200);
      if ( result )
        return (#1253 *)ScrollArea::removeAllContent(result);
      return result;
    }

    // attributes: thunk
    void __fastcall FeedPage::~FeedPage(__int64 a1)
    {
      __ZN8FeedPageD2Ev(a1);
    }

    void __fastcall FeedPage::~FeedPage(void *a1)
    {
      FeedPage::~FeedPage((__int64)a1);
      operator delete(a1);
    }

    void __fastcall FeedPage::buttonClicked(LogicPageOpenedCommand *a1, #1249 *a2)
    {
      LogicPageOpenedCommand *Instance; // x0
      LogicClientAvatar *MainHUD; // x20
      const char *v5; // x1
      const String *String; // x1
    
      if ( *((#1249 **)a1 + 26) == a2 )
      {
        Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(a1);
        MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(Instance);
        String = (const String *)StringTable::getString((#1308 *)"TID_ROYALTV_TOOL_TIP", v5);
        MainHUD::showTextPopover(MainHUD, String, a2, 33, 0);
      }
    }

    void __fastcall FeedPage::update(__int64 a1, long double a2)
    {
      LogicPageOpenedCommand *Instance; // x0
      MessageManager *PageGUI; // x0
      int CurrentPageIndex; // w0
      int v7; // w8
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 v11; // x20
    
      Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance((LogicPageOpenedCommand *)a1);
      PageGUI = (MessageManager *)HomeScreen::getPageGUI(Instance);
      CurrentPageIndex = PageGUI::getCurrentPageIndex(PageGUI);
      v7 = 4 - CurrentPageIndex;
      if ( CurrentPageIndex >= 4 )
        v7 = CurrentPageIndex - 4;
      *(_BYTE *)(a1 + 8) = v7 < 2;
      v8 = *(_QWORD *)(a1 + 272);
      if ( v8 && (((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 472LL))(v8) & 1) != 0 || *(_DWORD *)(a1 + 244) != 2) )
      {
        v9 = *(_QWORD *)(a1 + 272);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 456LL))(v9);
      }
      if ( *(_DWORD *)(a1 + 244) == 2 )
      {
        v10 = *(_QWORD *)(a1 + 200);
        if ( v10 )
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v10 + 272LL))(v10, a2);
        *(float *)(a1 + 240) = *(float *)(a1 + 240) + *(float *)&a2;
        if ( *(int *)(a1 + 228) >= 1 )
        {
          v11 = 0;
          do
            RoyalTvItem::update(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 8 * v11++), *(float *)&a2);
          while ( v11 < *(int *)(a1 + 228) );
        }
      }
    }

    void __fastcall FeedPage::stateChanged(__int64 a1, __int64 a2, int a3)
    {
      __int64 v5; // x8
      __int64 v6; // x21
      #1253 *v7; // x0
      __int64 v8; // x23
      long double v9; // q1
      __int64 v10; // x21
      int RunningId; // w0
      __int64 EntryWithHighestRunningId; // x0
      int v13; // w1
      long double v14; // [xsp+0h] [xbp-40h]
    
      PageItem::stateChanged((BadgePopup *)a1);
      if ( a3 == 2 )
      {
        if ( !*(_QWORD *)(a1 + 232) )
          FeedPage::createItems((FeedPage *)a1);
        LODWORD(v5) = *(_DWORD *)(a1 + 228);
        if ( (int)v5 >= 1 )
        {
          v6 = 0;
          do
          {
            RoyalTvItem::refreshNewIndicator(
              *(_QWORD *)(*(_QWORD *)(a1 + 216) + 8 * v6++),
              NewItemIndicators::sm_lastSeenTvId);
            v5 = *(int *)(a1 + 228);
          }
          while ( v6 < v5 );
        }
        v7 = *(#1253 **)(a1 + 200);
        if ( v7 )
        {
          if ( FeedPage::sm_pendingGoToFeedId < 0 )
          {
            ScrollArea::scrollTo(v7, 0.0, 0.0, 1.0, 0.0);
          }
          else
          {
            if ( (int)v5 < 1 )
            {
              LODWORD(v9) = 0;
            }
            else
            {
              v8 = 0;
              *(_OWORD *)&v9 = 0u;
              do
              {
                v14 = v9;
                v10 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 8 * v8);
                RunningId = RoyalTVEntry::getRunningId(*(_QWORD *)(v10 + 352));
                v9 = v14;
                if ( RunningId == FeedPage::sm_pendingGoToFeedId )
                  v9 = DisplayObject::getY(v10);
                ++v8;
              }
              while ( v8 < *(int *)(a1 + 228) );
              v7 = *(#1253 **)(a1 + 200);
            }
            ScrollArea::scrollTo(v7, 0.0, *(float *)&v9, 1.0, 0.0);
            FeedPage::sm_pendingGoToFeedId = -1;
          }
        }
        EntryWithHighestRunningId = RoyalTvManager::getEntryWithHighestRunningId(RoyalTvManager::sm_pInstance);
        NewItemIndicators::sm_lastSeenTvId = EntryWithHighestRunningId;
        NewItemIndicators::saveLastSeenRoyalTvIds(EntryWithHighestRunningId, v13);
      }
      *(_DWORD *)(a1 + 240) = 0;
      *(_DWORD *)(a1 + 244) = a3;
    }

    __int64 __fastcall FeedPage::createItems(#1253 *a1)
    {
      __int64 v1; // x19
      __int64 result; // x0
      __int64 v3; // x8
      __int64 v4; // x20
      int v5; // w21
      Stage *EntryCnt; // x0
      __int64 v7; // x8
      __int64 v8; // x0
      #1271 *TextFieldByName; // x0
      const char *v10; // x1
      #1249 *v11; // x22
      #1253 *v12; // x23
      long double Width; // q0
      float v14; // s8
      long double Height; // q0
      __int64 v16; // x0
      #1257 *v17; // x0
      DisplayObject *v18; // x23
      float v19; // s8
      float v20; // s9
      long double v21; // q0
      long double v22; // q0
      int v23; // s8
      const String *v24; // x2
      DisplayObject *v25; // x20
      long double v26; // q0
      int v27; // s8
      const String *v28; // x2
      DisplayObject *MovieClip; // x22
      long double v30; // q0
      float v31; // s8
      const String *v32; // x2
      __int64 v33; // x1
      float v34; // s9
      long double v35; // q0
      GameButton *v36; // x22
      void (__fastcall *v37)(GameButton *, __int64, __int64); // x23
      __int64 MovieClipByName; // x0
      long double v39; // q0
      int v40; // w24
      int v41; // w0
      int v42; // w23
      int v43; // w24
      __int64 EntryByIdx; // x26
      #1249 *v45; // x25
      int v46; // w8
      #1249 *v47; // [xsp+8h] [xbp-108h] BYREF
      String v48; // [xsp+10h] [xbp-100h] BYREF
      String v49; // [xsp+28h] [xbp-E8h] BYREF
      Rect v50[2]; // [xsp+40h] [xbp-D0h] BYREF
      String v51; // [xsp+50h] [xbp-C0h] BYREF
      String v52; // [xsp+68h] [xbp-A8h] BYREF
      String v53; // [xsp+80h] [xbp-90h] BYREF
      String v54; // [xsp+98h] [xbp-78h] BYREF
    
      v1 = (__int64)a1;
      if ( *((_QWORD *)a1 + 29) )
        a1 = FeedPage::destructItems((__int64)a1);
      result = FeedPage::isEnabled(a1);
      v3 = *(_QWORD *)(v1 + 256);
      if ( (result & 1) != 0 )
      {
        if ( v3 )
          *(_BYTE *)(v3 + 8) = 0;
        v4 = RoyalTvManager::sm_pInstance;
        v5 = NewItemIndicators::sm_lastSeenTvId;
        if ( *(_DWORD *)(v1 + 244) == 2 )
          NewItemIndicators::sm_lastSeenTvId = RoyalTvManager::getEntryWithHighestRunningId(RoyalTvManager::sm_pInstance);
        if ( !*(_QWORD *)(v1 + 264) )
        {
          EntryCnt = (Stage *)RoyalTvManager::getEntryCnt(v4);
          if ( !(_DWORD)EntryCnt )
          {
            v27 = *(_DWORD *)(Stage::getInstance(EntryCnt) + 432LL);
            String::String(&v52, "sc/ui.sc");
            String::String(&v51, "tv_royal_no_items");
            MovieClip = StringTable::getMovieClip((#1308 *)&v52, &v51, v28);
            String::~String();
            String::~String();
            *(__n128 *)&v30 = DisplayObject::setPixelSnappedXY(MovieClip, 0.0, (float)v27 * 0.5);
            (*(void (__fastcall **)(__int64, DisplayObject *, long double))(*(_QWORD *)v1 + 160LL))(v1, MovieClip, v30);
            *(_QWORD *)(v1 + 264) = MovieClip;
    LABEL_12:
            result = RoyalTvManager::getEntryCnt(v4);
            if ( (_DWORD)result )
            {
              v7 = *(_QWORD *)(v1 + 200);
              if ( !v7 )
              {
                Rect::Rect(v50);
                v8 = GUIContainer::getMovieClip((#1254 *)v1);
                TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v8, "scroll_area");
                v11 = TextFieldByName;
                if ( !TextFieldByName )
                  Debugger::error((__siginfo *)"cannot find scroll area from feed", v10);
                TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v50);
                v12 = (#1253 *)operator new(504);
                Width = Rect::getWidth(v50);
                v14 = *(float *)&Width;
                Height = Rect::getHeight(v50);
                ScrollArea::ScrollArea(v12, v14, *(float *)&Height, 1);
                *(_QWORD *)(v1 + 200) = v12;
                ScrollArea::enablePinching(v12, 0);
                ScrollArea::enableHorizontalDrag(*(#1253 **)(v1 + 200), 0);
                ScrollArea::enableVerticalDrag(*(#1253 **)(v1 + 200), 1);
                v16 = *(_QWORD *)(v1 + 200);
                *(_BYTE *)(v16 + 496) = 1;
                ScrollArea::setAlignment((#1253 *)v16, 12);
                v17 = (#1257 *)GUIContainer::getMovieClip((#1254 *)v1);
                MovieClip::changeTimelineChild(v17, v11, *(#1249 **)(v1 + 200));
                v18 = *(DisplayObject **)(v1 + 200);
                v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v11)));
                v20 = *(float *)&v50[0].top;
                v21 = DisplayObject::getY(v11);
                *(__n128 *)&v22 = DisplayObject::setPixelSnappedXY(
                                    v18,
                                    v19 + v20,
                                    *(float *)&v21 + *(float *)&v50[0].bottom);
                *(_BYTE *)(*(_QWORD *)(v1 + 200) + 64LL) = 1;
                (*(void (__fastcall **)(#1249 *, long double))(*(_QWORD *)v11 + 8LL))(v11, v22);
                Rect::~Rect(v50);
                v7 = *(_QWORD *)(v1 + 200);
              }
              v31 = *(float *)(v7 + 92);
              String::String(&v49, "sc/ui.sc");
              String::String(&v48, "tvroyal_title");
              *(_QWORD *)(v1 + 232) = StringTable::getMovieClip((#1308 *)&v49, &v48, v32);
              String::~String();
              String::~String();
              v33 = *(_QWORD *)(v1 + 232);
              *(_BYTE *)(v33 + 64) = 1;
              ScrollArea::addContentDontUpdateBounds(*(#1253 **)(v1 + 200), (#1249 *)v33);
              v34 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 232) + 96LL))(*(_QWORD *)(v1 + 232)) * 0.1;
              DisplayObject::setX(*(#1249 **)(v1 + 232), v31 * 0.5);
              *(__n128 *)&v35 = DisplayObject::setY((DisplayObject *)*(_QWORD *)(v1 + 232), v34);
              (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(v1 + 232) + 96LL))(*(_QWORD *)(v1 + 232), v35);
              v36 = (GameButton *)operator new(264);
              GameButton::GameButton(v36);
              *(_QWORD *)(v1 + 208) = v36;
              v37 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v36 + 280LL);
              MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(v1 + 232), "info_btn");
              v37(v36, MovieClipByName, 1);
              *(__n128 *)&v39 = CustomButton::setButtonListener(*(_QWORD *)(v1 + 208), v1 + 96);
              (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(v1 + 232) + 160LL))(
                *(_QWORD *)(v1 + 232),
                *(_QWORD *)(v1 + 208),
                v39);
              v40 = RoyalTvManager::getEntryCnt(v4);
              v41 = RoyalTvManager::getEntryCnt(v4);
              v42 = v41 - 1;
              if ( v41 >= 1 )
              {
                v43 = v40 + 1 - v41;
                do
                {
                  EntryByIdx = RoyalTvManager::getEntryByIdx(v4, v42);
                  v45 = (#1249 *)operator new(448);
                  RoyalTvItem::RoyalTvItem((__int64)v45, EntryByIdx, v1, v43);
                  v47 = v45;
                  ScrollArea::addContentDontUpdateBounds(*(#1253 **)(v1 + 200), v45);
                  RoyalTvItem::refreshNewIndicator((__int64)v45, v5);
                  LogicArrayList<RoyalTvItem *>::add(v1 + 216, &v47);
                  v46 = v42-- + 1;
                  ++v43;
                }
                while ( v46 > 1 );
              }
              return FeedPage::refreshFeedAlignment((FeedPage *)v1);
            }
            return result;
          }
          if ( !*(_QWORD *)(v1 + 264) )
            goto LABEL_12;
        }
        *(_BYTE *)(*(_QWORD *)(v1 + 264) + 8LL) = (unsigned int)RoyalTvManager::getEntryCnt(v4) == 0;
        goto LABEL_12;
      }
      if ( !v3 )
      {
        v23 = *(_DWORD *)(Stage::getInstance((Stage *)result) + 432LL);
        String::String(&v54, "sc/ui.sc");
        String::String(&v53, "tv_royal_intro_page");
        v25 = StringTable::getMovieClip((#1308 *)&v54, &v53, v24);
        String::~String();
        String::~String();
        *(__n128 *)&v26 = DisplayObject::setPixelSnappedXY(v25, 0.0, (float)v23 * 0.5);
        result = (*(__int64 (__fastcall **)(__int64, DisplayObject *, long double))(*(_QWORD *)v1 + 160LL))(v1, v25, v26);
        *(_QWORD *)(v1 + 256) = v25;
      }
      return result;
    }

    __int64 __fastcall FeedPage::isBlockingPageScroll(__int64 a1)
    {
      #1253 *v1; // x0
    
      v1 = *(#1253 **)(a1 + 200);
      if ( v1 )
        return ScrollArea::isPanning(v1);
      else
        return 0;
    }

    __int64 FeedPage::showTopHUD()
    {
      return 0;
    }

    __int64 __fastcall FeedPage::createIcon(__int64 a1, __int64 a2, const char *a3)
    {
      return ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_menu_royaltv", a3);
    }

    void *__fastcall FeedPage::getLocalizedName(__int64 a1, const char *a2)
    {
      return StringTable::getString((#1308 *)"TID_TAB_FEED", a2);
    }

    __int64 FeedPage::isEnabled()
    {
      tween::Bounce *PlayerAvatar; // x0
      __int64 Arena; // x0
    
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      return (unsigned int)LogicArenaData::isTrainingCamp(Arena) ^ 1;
    }

    __int64 __fastcall FeedPage::refreshFeedAlignment(__int64 result)
    {
      __int64 v1; // x19
      __int64 v2; // x8
      float v3; // s8
      __int64 v4; // x0
      float v5; // s0
      __int128 v6; // q1
      __int64 v7; // x21
      float v8; // s8
      DisplayObject *v9; // x20
      float v10; // s0
      __int64 v11; // x20
      __int64 v12; // x21
      __int64 MovieClip; // x0
      long double v14; // q0
      __int64 v15; // x0
      float v16; // s0
      __int128 v17; // [xsp+30h] [xbp-40h]
      float v18; // [xsp+30h] [xbp-40h]
    
      v1 = result;
      v2 = *(_QWORD *)(result + 200);
      if ( v2 )
      {
        v3 = *(float *)(v2 + 92);
        v4 = *(_QWORD *)(result + 232);
        if ( v4 )
        {
          v5 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
          DWORD1(v6) = 0;
          *((_QWORD *)&v6 + 1) = 0;
          *(float *)&v6 = v5 + 0.0;
        }
        else
        {
          v6 = 0u;
        }
        if ( *(int *)(v1 + 228) >= 1 )
        {
          v7 = 0;
          v8 = v3 * 0.5;
          do
          {
            v17 = v6;
            v9 = *(DisplayObject **)(*(_QWORD *)(v1 + 216) + 8 * v7);
            DisplayObject::setPixelSnappedXY(v9, v8, *(float *)&v6);
            RoyalTvItem::getItemHeight((__int64)v9);
            v6 = v17;
            *(float *)&v6 = *(float *)&v17 + v10;
            ++v7;
          }
          while ( v7 < *(int *)(v1 + 228) );
        }
        v18 = *(float *)&v6;
        ScrollArea::updateBounds(*(ScrollArea **)(v1 + 200));
        v11 = operator new(16);
        Rect::Rect((Rect *)v11);
        v12 = *(_QWORD *)(v1 + 200);
        MovieClip = GUIContainer::getMovieClip((#1254 *)v1);
        *(__n128 *)&v14 = DisplayObject::getBounds(v12, MovieClip, v11);
        v15 = *(_QWORD *)(v1 + 232);
        if ( v15 )
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v15 + 96LL))(v15, v14);
        else
          v16 = 0.0;
        *(float *)(v11 + 12) = *(float *)(v11 + 12) + (float)(v18 + v16);
        return ScrollArea::setForcedContentBounds(*(ScrollArea **)(v1 + 200), (Rect *)v11);
      }
      return result;
    }

    #1253 *__fastcall FeedPage::refreshFeed(#1253 *a1)
    {
      if ( *((_DWORD *)a1 + 61) == 2 )
        return (#1253 *)FeedPage::createItems(a1);
      return a1;
    }

    void __fastcall FeedPage::refreshFeedItemInfo(__int64 a1)
    {
      __int64 v2; // x20
      __int64 v3; // x0
    
      if ( *(int *)(a1 + 228) >= 1 )
      {
        v2 = 0;
        do
        {
          v3 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 8 * v2);
          RoyalTvItem::refreshEntry(v3, *(_QWORD *)(v3 + 352));
          ++v2;
        }
        while ( v2 < *(int *)(a1 + 228) );
      }
    }

    __int64 FeedPage::getNotificationCount()
    {
      __int64 EntriesWithHigher; // x19
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 Arena; // x0
    
      if ( RoyalTvManager::sm_pInstance )
        EntriesWithHigher = RoyalTvManager::getEntriesWithHigher(
                              RoyalTvManager::sm_pInstance,
                              NewItemIndicators::sm_lastSeenTvId);
      else
        EntriesWithHigher = 0;
      Instance = GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(Instance + 112));
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      if ( (unsigned int)LogicArenaData::isTrainingCamp(Arena) )
      {
        if ( (int)EntriesWithHigher >= 1 && RoyalTvManager::sm_pInstance )
        {
          EntriesWithHigher = 0;
          NewItemIndicators::sm_lastSeenTvId = RoyalTvManager::getEntryWithHighestRunningId(RoyalTvManager::sm_pInstance);
        }
        else
        {
          return 0;
        }
      }
      return EntriesWithHigher;
    }

    void __fastcall FeedPage::openContextMenu(__int64 a1, __int64 a2, int a3, int a4)
    {
      __int64 v8; // x0
      int v9; // w23
      VisitHomeMessage *Instance; // x0
      __int64 AccountId; // x23
      __int64 Player; // x24
      LogicHealthBarData *v13; // x25
      __int64 v14; // x0
      int v15; // w0
      LogicHealthBarData *v16; // x8
      LogicHealthBarData *v17; // x9
      LogicHealthBarData *v18; // x23
      LogicLong *v19; // x24
      __int64 v20; // x0
      int HigherInt; // w25
      __int64 v22; // x0
      int LowerInt; // w0
      __int64 HomeId; // x0
      LogicLong *v25; // x25
      __int64 v26; // x0
      int v27; // w26
      __int64 v28; // x0
      int v29; // w0
      __int64 AllianceId; // x0
      LogicLong *v31; // x26
      __int64 v32; // x0
      int v33; // w27
      __int64 v34; // x0
      int v35; // w0
      DisplayObject **v36; // x28
      __int64 v37; // x0
      PlayerActionMenu *v38; // x27
      const String *Name; // x0
      BadgePopup *GlobalBounds; // x0
      BadgePopup *v41; // x0
      __int64 v42; // x0
      __int64 Layer; // x0
      DisplayObject *v44; // x21
      float v45; // s9
      float v46; // s8
      float v47; // s10
      long double Height; // q0
      Rect v49[2]; // [xsp+0h] [xbp-80h] BYREF
    
      v8 = *(_QWORD *)(a1 + 272);
      if ( v8 && (v9 = *(_DWORD *)(a1 + 280), (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 456LL))(v8), v9 == a3) )
      {
        *(_DWORD *)(a1 + 280) = -1;
      }
      else
      {
        Instance = (VisitHomeMessage *)GameMode::getInstance();
        AccountId = GameMode::getAccountId(Instance);
        Player = LogicBattleLog::getPlayer(*(LogicJSONParser **)(a2 + 344), 0);
        v13 = (LogicHealthBarData *)LogicBattleLog::getPlayer(*(LogicJSONParser **)(a2 + 344), (const char *)1);
        v14 = LogicBattleLogPlayer::getAccountId(v13);
        v15 = LogicLong::equals(v14, AccountId);
        if ( v15 )
          v16 = v13;
        else
          v16 = (LogicHealthBarData *)Player;
        if ( v15 )
          v17 = (LogicHealthBarData *)Player;
        else
          v17 = v13;
        if ( a4 )
          v18 = v16;
        else
          v18 = v17;
        v19 = (LogicLong *)operator new(8);
        v20 = LogicBattleLogPlayer::getAccountId(v18);
        HigherInt = LogicLong::getHigherInt(v20);
        v22 = LogicBattleLogPlayer::getAccountId(v18);
        LowerInt = LogicLong::getLowerInt(v22);
        LogicLong::LogicLong(v19, HigherInt, LowerInt);
        HomeId = LogicBattleLogPlayer::getHomeId(v18);
        if ( (LogicLong::isZero(HomeId) & 1) != 0 )
        {
          v25 = 0;
        }
        else
        {
          v25 = (LogicLong *)operator new(8);
          v26 = LogicBattleLogPlayer::getHomeId(v18);
          v27 = LogicLong::getHigherInt(v26);
          v28 = LogicBattleLogPlayer::getHomeId(v18);
          v29 = LogicLong::getLowerInt(v28);
          LogicLong::LogicLong(v25, v27, v29);
        }
        AllianceId = LogicBattleLogPlayer::getAllianceId(v18);
        if ( (LogicLong::isZero(AllianceId) & 1) != 0 )
        {
          v31 = 0;
        }
        else
        {
          v31 = (LogicLong *)operator new(8);
          v32 = LogicBattleLogPlayer::getAllianceId(v18);
          v33 = LogicLong::getHigherInt(v32);
          v34 = LogicBattleLogPlayer::getAllianceId(v18);
          v35 = LogicLong::getLowerInt(v34);
          LogicLong::LogicLong(v31, v33, v35);
        }
        v36 = (DisplayObject **)(a1 + 272);
        v37 = *(_QWORD *)(a1 + 272);
        if ( v37 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
        *v36 = 0;
        if ( v25 )
        {
          v38 = (PlayerActionMenu *)operator new(352);
          PlayerActionMenu::PlayerActionMenu(v38, v19, v25, v31, 0, 0, a4 ^ 1);
          *v36 = v38;
          Name = (const String *)LogicBattleLogPlayer::getName(v18);
          PlayerActionMenu::setName(v38, Name);
          Rect::Rect(v49);
          GlobalBounds = (BadgePopup *)DisplayObject::getGlobalBounds(a2, v49);
          v41 = (BadgePopup *)GUI::getInstance(GlobalBounds);
          if ( v41 )
          {
            v42 = GUI::getInstance(v41);
            Layer = GUI::getLayer(v42, 2u);
            (*(void (__fastcall **)(__int64, DisplayObject *))(*(_QWORD *)Layer + 160LL))(Layer, *v36);
          }
          v44 = *v36;
          v45 = *(float *)&v49[0].top;
          v46 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v49)));
          v47 = *(float *)&v49[0].bottom;
          Height = Rect::getHeight(v49);
          DisplayObject::setXY(v44, v45 + (float)(v46 * 0.5), v47 + (float)(*(float *)&Height * 0.25));
          *(_DWORD *)(a1 + 280) = a3;
          Rect::~Rect(v49);
        }
      }
    }

    __int64 FeedPage::touchPressed()
    {
      return 1;
    }

    __int64 __fastcall FeedPage::touchReleased(__int64 a1)
    {
      __int64 v1; // x0
    
      v1 = *(_QWORD *)(a1 + 272);
      if ( v1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 456LL))(v1);
      return 1;
    }

    __int64 __fastcall FeedPage::touchMoved(__int64 a1)
    {
      __int64 v1; // x0
    
      v1 = *(_QWORD *)(a1 + 272);
      if ( v1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 456LL))(v1);
      return 0;
    }

}; // end class FeedPage
