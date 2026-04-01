class EventScreen
{
public:

    __int64 __fastcall EventScreen::EventScreen(__int64 a1)
    {
      __int64 v2; // x0
      __int64 TextFieldByName; // x22
      #1253 *v4; // x23
      long double Width; // q0
      float v6; // s8
      long double Height; // q0
      long double v8; // q0
      float v9; // s8
      float v10; // s9
      long double v11; // q0
      __int64 v12; // x8
      #1253 *v13; // x23
      long double v14; // q0
      float v15; // s8
      long double v16; // q0
      float v17; // s8
      float v18; // s9
      long double v19; // q0
      __int64 v20; // x8
      OutOfSyncMessage *v21; // x23
      void (__fastcall *v22)(OutOfSyncMessage *, __int64, _QWORD); // x25
      __int64 v23; // x24
      int ChildIndex; // w0
      OutOfSyncMessage *v25; // x23
      void (__fastcall *v26)(OutOfSyncMessage *, __int64, _QWORD); // x25
      __int64 v27; // x24
      int v28; // w0
      #1255 *v29; // x23
      __int64 MovieClipByName; // x23
      PlayerInfo *v31; // x24
      #1271 *v32; // x23
      const char *v33; // x1
      const String *String; // x0
      __int64 v35; // x23
      OutOfSyncMessage *v36; // x24
      void (__fastcall *v37)(OutOfSyncMessage *, __int64, _QWORD); // x26
      int v38; // w0
      __int64 v39; // x23
      PlayerInfo *v40; // x24
      #1271 *v41; // x23
      const char *v42; // x1
      const String *v43; // x0
      __int64 v44; // x21
      OutOfSyncMessage *v45; // x23
      __int64 (__fastcall *v46)(OutOfSyncMessage *, __int64, _QWORD); // x24
      int v47; // w0
      #1311 *v48; // x0
      Rect v50[2]; // [xsp+0h] [xbp-90h] BYREF
      String v51; // [xsp+10h] [xbp-80h] BYREF
      String v52; // [xsp+28h] [xbp-68h] BYREF
    
      String::String(&v52, "sc/ui.sc");
      String::String(&v51, "popup_activity_log");
      PopupBase::PopupBase(a1, &v52, &v51);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046D9D0;
      *(_QWORD *)(a1 + 96) = &off_10046DBA8;
      *(_QWORD *)(a1 + 336) = 0;
      memset((void *)(a1 + 232), 0, 0x48u);
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_DWORD *)(a1 + 344) = -1;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_DWORD *)(a1 + 228) = -1;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 328) = 0;
      *(_BYTE *)(a1 + 64) = 1;
      *(_QWORD *)(a1 + 192) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_cancel", 1);
      v2 = *(_QWORD *)(a1 + 112);
      *(_BYTE *)(v2 + 64) = 1;
      TextFieldByName = MovieClip::getTextFieldByName(v2, "ScrollArea");
      *(_BYTE *)(TextFieldByName + 8) = 0;
      Rect::Rect(v50);
      TextField::getTextFieldBounds((#1271 *)TextFieldByName, (#1261 *)v50);
      v4 = (#1253 *)operator new(504);
      Width = Rect::getWidth(v50);
      v6 = *(float *)&Width;
      Height = Rect::getHeight(v50);
      ScrollArea::ScrollArea(v4, v6, *(float *)&Height, 1);
      *(_QWORD *)(a1 + 304) = v4;
      v8 = DisplayObject::getX(TextFieldByName);
      v9 = *(float *)&v8;
      v10 = *(float *)&v50[0].top;
      v11 = DisplayObject::getY(TextFieldByName);
      DisplayObject::setPixelSnappedXY(v4, v9 + v10, *(float *)&v11 + *(float *)&v50[0].bottom);
      ScrollArea::enablePinching(*(#1253 **)(a1 + 304), 0);
      ScrollArea::enableHorizontalDrag(*(#1253 **)(a1 + 304), 0);
      ScrollArea::enableVerticalDrag(*(#1253 **)(a1 + 304), 1);
      ScrollArea::setAlignment(*(#1253 **)(a1 + 304), 12);
      v12 = *(_QWORD *)(a1 + 304);
      *(_BYTE *)(v12 + 496) = 1;
      *(_BYTE *)(v12 + 64) = 1;
      v13 = (#1253 *)operator new(504);
      v14 = Rect::getWidth(v50);
      v15 = *(float *)&v14;
      v16 = Rect::getHeight(v50);
      ScrollArea::ScrollArea(v13, v15, *(float *)&v16, 1);
      *(_QWORD *)(a1 + 312) = v13;
      v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName)));
      v18 = *(float *)&v50[0].top;
      v19 = DisplayObject::getY(TextFieldByName);
      DisplayObject::setPixelSnappedXY(v13, v17 + v18, *(float *)&v19 + *(float *)&v50[0].bottom);
      ScrollArea::enablePinching(*(#1253 **)(a1 + 312), 0);
      ScrollArea::enableHorizontalDrag(*(#1253 **)(a1 + 312), 0);
      ScrollArea::enableVerticalDrag(*(#1253 **)(a1 + 312), 1);
      ScrollArea::setAlignment(*(#1253 **)(a1 + 312), 12);
      v20 = *(_QWORD *)(a1 + 312);
      *(_BYTE *)(v20 + 496) = 1;
      *(_BYTE *)(v20 + 64) = 1;
      v21 = *(OutOfSyncMessage **)(a1 + 112);
      v22 = *(void (__fastcall **)(OutOfSyncMessage *, __int64, _QWORD))(*(_QWORD *)v21 + 168LL);
      v23 = *(_QWORD *)(a1 + 304);
      ChildIndex = Sprite::getChildIndex(v21, (const #1249 *)TextFieldByName);
      v22(v21, v23, (unsigned int)(ChildIndex + 1));
      v25 = *(OutOfSyncMessage **)(a1 + 112);
      v26 = *(void (__fastcall **)(OutOfSyncMessage *, __int64, _QWORD))(*(_QWORD *)v25 + 168LL);
      v27 = *(_QWORD *)(a1 + 312);
      v28 = Sprite::getChildIndex(v25, (const #1249 *)TextFieldByName);
      v26(v25, v27, (unsigned int)(v28 + 1));
      v29 = (#1255 *)operator new(40);
      SelectableButtonList::SelectableButtonList(v29);
      *(_QWORD *)(a1 + 352) = v29;
      *(_BYTE *)(MovieClip::getMovieClipByName(*(#1257 **)(a1 + 112), "tab3") + 8) = 0;
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 112), "tab1");
      v31 = (PlayerInfo *)operator new(248);
      SelectableButton::SelectableButton(v31, *(#1255 **)(a1 + 352));
      *(_QWORD *)(a1 + 360) = v31;
      (*(void (__fastcall **)(PlayerInfo *, __int64, _QWORD))(*(_QWORD *)v31 + 280LL))(v31, MovieClipByName, 0);
      v32 = (#1271 *)MovieClip::getTextFieldByName(*(_QWORD *)(*(_QWORD *)(a1 + 360) + 96LL), "tab_txt");
      String = (const String *)StringTable::getString((#1308 *)"TID_EVENTS_TAB1", v33);
      TextField::setText(v32, String);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 360), a1 + 96);
      v35 = *(_QWORD *)(a1 + 360);
      *(_BYTE *)(v35 + 64) = 1;
      v36 = *(OutOfSyncMessage **)(a1 + 112);
      v37 = *(void (__fastcall **)(OutOfSyncMessage *, __int64, _QWORD))(*(_QWORD *)v36 + 168LL);
      v38 = Sprite::getChildIndex(v36, (const #1249 *)TextFieldByName);
      v37(v36, v35, (unsigned int)(v38 - 1));
      v39 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 112), "tab2");
      v40 = (PlayerInfo *)operator new(248);
      SelectableButton::SelectableButton(v40, *(#1255 **)(a1 + 352));
      *(_QWORD *)(a1 + 368) = v40;
      (*(void (__fastcall **)(PlayerInfo *, __int64, _QWORD))(*(_QWORD *)v40 + 280LL))(v40, v39, 0);
      v41 = (#1271 *)MovieClip::getTextFieldByName(*(_QWORD *)(*(_QWORD *)(a1 + 368) + 96LL), "tab_txt");
      v43 = (const String *)StringTable::getString((#1308 *)"TID_EVENTS_TAB2", v42);
      TextField::setText(v41, v43);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 360), a1 + 96);
      v44 = *(_QWORD *)(a1 + 368);
      *(_BYTE *)(v44 + 64) = 1;
      v45 = *(OutOfSyncMessage **)(a1 + 112);
      v46 = *(__int64 (__fastcall **)(OutOfSyncMessage *, __int64, _QWORD))(*(_QWORD *)v45 + 168LL);
      v47 = Sprite::getChildIndex(v45, (const #1249 *)TextFieldByName);
      v48 = (#1311 *)v46(v45, v44, (unsigned int)(v47 - 1));
      if ( (int)NewItemIndicators::getNewMessageCount(v48) <= 0
        && (int)NewsManager::getUnseenNewsCount((#1306 *)NewsManager::sm_pInstance) < 1 )
      {
        SelectableButtonList::buttonSelected(*(#1255 **)(a1 + 352), *(PlayerInfo **)(a1 + 360));
      }
      else
      {
        SelectableButtonList::buttonSelected(*(#1255 **)(a1 + 352), *(PlayerInfo **)(a1 + 368));
      }
      EventScreen::refreshBattleLogItems((EventScreen *)a1);
      EventScreen::refreshInboxItems((EventScreen *)a1);
      Rect::~Rect(v50);
      return a1;
    }

    __int64 __fastcall EventScreen::refreshBattleLogItems(__int64 a1)
    {
      LogicClientGlobals *v2; // x20
      __int64 v3; // x8
      __int64 *v4; // x21
      __int64 v5; // x22
      __int64 v6; // x0
      int v7; // w22
      LogicStartMatchmakeCommand *EntryByIdx; // x24
      BattleLogItem *v9; // x25
      long double v10; // q0
      __int64 v11; // x20
      __int64 v12; // x21
      __int64 v13; // x8
      __int64 v14; // x2
      __int64 i; // x8
      __int64 v16; // x8
      __int64 v17; // x21
      __int128 v18; // q1
      DisplayObject *v19; // x20
      float v20; // s0
      __int64 v21; // x8
      __int64 v22; // x0
      const String *v23; // x2
      MovieClip *v24; // x20
      const char *v25; // x1
      const String *String; // x0
      MovieClip *v27; // x20
      const char *v28; // x1
      const String *v29; // x0
      float *ContentBounds; // x22
      ScrollArea *v31; // x20
      Rect *v32; // x21
      __int128 v34; // [xsp+0h] [xbp-A0h]
      float v35; // [xsp+0h] [xbp-A0h]
      String v36; // [xsp+18h] [xbp-88h] BYREF
      String v37; // [xsp+30h] [xbp-70h] BYREF
      BattleLogItem *v38; // [xsp+48h] [xbp-58h] BYREF
    
      v2 = (LogicClientGlobals *)AvatarStreamManager::sm_pInstance;
      ScrollArea::removeAllContent(*(#1253 **)(a1 + 304));
      v4 = (__int64 *)(a1 + 232);
      v3 = *(_QWORD *)(a1 + 232);
      if ( (int)((unsigned __int64)(*(_QWORD *)(a1 + 240) - v3) >> 3) >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(v3 + 8 * v5);
          do
          {
            if ( v6 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
              v3 = *v4;
            }
            *(_QWORD *)(v3 + 8 * v5) = 0;
            v3 = *v4;
            v6 = *(_QWORD *)(*v4 + 8 * v5);
          }
          while ( v6 );
          ++v5;
        }
        while ( v5 < (int)((unsigned __int64)(*(_QWORD *)(a1 + 240) - v3) >> 3) );
      }
      *(_QWORD *)(a1 + 240) = v3;
      if ( (int)AvatarStreamManager::getEntryCnt(v2) >= 1 )
      {
        v7 = 0;
        do
        {
          v38 = 0;
          EntryByIdx = (LogicStartMatchmakeCommand *)AvatarStreamManager::getEntryByIdx(v2, v7);
          if ( (*(unsigned int (__fastcall **)(LogicStartMatchmakeCommand *))(*(_QWORD *)EntryByIdx + 32LL))(EntryByIdx) == 2 )
          {
            v9 = (BattleLogItem *)operator new(528);
            BattleLogItem::BattleLogItem(v9, EntryByIdx, (LogicSellChestCommand *)a1);
            v38 = v9;
            *(__n128 *)&v10 = CustomButton::setButtonListener(v9, a1 + 96);
            std::vector<EventScreenItem *>::push_back(a1 + 232, &v38, v10);
          }
          ++v7;
        }
        while ( v7 < (int)AvatarStreamManager::getEntryCnt(v2) );
      }
      v11 = *(_QWORD *)(a1 + 232);
      v12 = *(_QWORD *)(a1 + 240);
      v13 = v11;
      if ( v11 != v12 )
      {
        v14 = 0;
        for ( i = (v12 - v11) >> 3; i != 1; i >>= 1 )
          v14 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
          *(_QWORD *)(a1 + 232),
          *(_QWORD *)(a1 + 240),
          v14,
          EventScreen::battleLogItemSort);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
          v11,
          v12,
          EventScreen::battleLogItemSort);
        v11 = *(_QWORD *)(a1 + 232);
        v13 = *(_QWORD *)(a1 + 240);
      }
      v16 = (v13 - v11) >> 3;
      if ( (int)v16 < 1 )
      {
        LODWORD(v18) = 0;
      }
      else
      {
        v17 = 0;
        v18 = 0u;
        do
        {
          v34 = v18;
          v19 = *(DisplayObject **)(v11 + 8 * v17);
          DisplayObject::setPixelSnappedXY(v19, *(float *)(*(_QWORD *)(a1 + 312) + 92LL) * 0.5, *(float *)&v18);
          ScrollArea::addContent(*(#1253 **)(a1 + 304), v19);
          v20 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v19 + 96LL))(v19);
          v18 = v34;
          *(float *)&v18 = *(float *)&v34 + (float)(v20 + 4.0);
          ++v17;
          v11 = *(_QWORD *)(a1 + 232);
          v21 = *(_QWORD *)(a1 + 240) - v11;
        }
        while ( v17 < (int)((unsigned __int64)v21 >> 3) );
        v16 = v21 >> 3;
      }
      v35 = *(float *)&v18;
      if ( !v16 )
      {
        v22 = *(_QWORD *)(a1 + 328);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        *(_QWORD *)(a1 + 328) = 0;
        String::String(&v37, "sc/ui.sc");
        String::String(&v36, "no_messages");
        *(_QWORD *)(a1 + 328) = StringTable::getMovieClip((#1308 *)&v37, &v36, v23);
        String::~String();
        String::~String();
        DisplayObject::setX(*(#1249 **)(a1 + 328), *(float *)(*(_QWORD *)(a1 + 312) + 92LL) * 0.5);
        DisplayObject::setY(*(DisplayObject **)(a1 + 328), v35);
        v24 = *(MovieClip **)(a1 + 328);
        String = (const String *)StringTable::getString((#1308 *)"TID_BATTLE_LOG_EMPTY_TITLE", v25);
        MovieClip::setText(v24, "title", String);
        v27 = *(MovieClip **)(a1 + 328);
        v29 = (const String *)StringTable::getString((#1308 *)"TID_BATTLE_LOG_EMPTY_MESSAGE", v28);
        MovieClip::setText(v27, "message", v29);
        ScrollArea::addContent(*(#1253 **)(a1 + 304), *(#1249 **)(a1 + 328));
        v35 = v35 + (float)((*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 96LL))(*(_QWORD *)(a1 + 328)) + 4.0);
      }
      ContentBounds = (float *)ScrollArea::getContentBounds(*(#1253 **)(a1 + 304));
      v31 = *(ScrollArea **)(a1 + 304);
      v32 = (Rect *)operator new(16);
      Rect::Rect(v32, *ContentBounds, 0.0, ContentBounds[2], v35);
      ScrollArea::setForcedContentBounds(v31, v32);
      return ScrollArea::scrollTo(*(#1253 **)(a1 + 304), 0.0, 0.0, 1.0, 0.0);
    }

    void __fastcall EventScreen::refreshInboxItems(__int64 a1)
    {
      __int64 *v2; // x21
      __int64 v3; // x8
      __int64 v4; // x20
      __int64 v5; // x0
      __int64 *v6; // x22
      __int64 v7; // x8
      __int64 v8; // x20
      __int64 v9; // x0
      __int64 v10; // x23
      const void *v11; // x1
      __int64 v12; // x8
      _BYTE *v13; // x23
      unsigned __int64 v14; // x20
      __int64 *v15; // x0
      _QWORD *v16; // x8
      __int64 v17; // x20
      UpgradeSpellPopup *v18; // x24
      FacebookManager *v19; // x23
      long double v20; // q0
      __int64 v21; // x22
      __int64 v22; // x23
      __int64 v23; // x8
      __int64 v24; // x2
      __int64 i; // x8
      long double v26; // q0
      __int64 v27; // x20
      DisplayObject *v28; // x22
      float v29; // s0
      long double v30; // q1
      const char *v31; // x1
      long double v32; // q0
      __int64 v33; // x8
      __int64 v34; // x26
      __int64 v35; // x27
      LogicStartMatchmakeCommand *v36; // x24
      unsigned int v37; // w0
      const char *v38; // x2
      AvatarMessageItem *v39; // x25
      __n128 v40; // q0
      ChestInfoPopup *v41; // x25
      __int64 v42; // x21
      __int64 v43; // x22
      __int64 v44; // x8
      __int64 v45; // x2
      __int64 j; // x8
      __int64 v47; // x8
      __int64 v48; // x20
      DisplayObject *v49; // x21
      float v50; // s0
      long double v51; // q1
      __int64 v52; // x8
      __int64 v53; // x0
      const String *v54; // x2
      MovieClip *v55; // x21
      const char *v56; // x1
      const String *String; // x0
      MovieClip *v58; // x21
      const char *v59; // x1
      const String *v60; // x0
      const String *v61; // x0
      ScrollArea *v62; // x21
      Rect *v63; // x22
      void *v64; // x0
      _BYTE *v65; // x8
      __int64 v66; // x9
      float *ContentBounds; // [xsp+8h] [xbp-108h]
      long double v68; // [xsp+10h] [xbp-100h]
      long double v69; // [xsp+10h] [xbp-100h]
      long double v70; // [xsp+10h] [xbp-100h]
      String v71; // [xsp+28h] [xbp-E8h] BYREF
      String v72; // [xsp+40h] [xbp-D0h] BYREF
      String v73; // [xsp+58h] [xbp-B8h] BYREF
      AvatarMessageItem *v74; // [xsp+70h] [xbp-A0h] BYREF
      _BYTE *v75; // [xsp+78h] [xbp-98h] BYREF
      _BYTE *v76; // [xsp+80h] [xbp-90h]
      FacebookManager *v77; // [xsp+90h] [xbp-80h] BYREF
      _BYTE *v78; // [xsp+98h] [xbp-78h] BYREF
      char *v79; // [xsp+A0h] [xbp-70h]
    
      ContentBounds = (float *)ScrollArea::getContentBounds(*(#1253 **)(a1 + 312));
      ScrollArea::removeAllContent(*(#1253 **)(a1 + 312));
      v2 = (__int64 *)(a1 + 256);
      v3 = *(_QWORD *)(a1 + 256);
      if ( (int)((unsigned __int64)(*(_QWORD *)(a1 + 264) - v3) >> 3) >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *(_QWORD *)(v3 + 8 * v4);
          do
          {
            if ( v5 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
              v3 = *v2;
            }
            *(_QWORD *)(v3 + 8 * v4) = 0;
            v3 = *v2;
            v5 = *(_QWORD *)(*v2 + 8 * v4);
          }
          while ( v5 );
          ++v4;
        }
        while ( v4 < (int)((unsigned __int64)(*(_QWORD *)(a1 + 264) - v3) >> 3) );
      }
      *(_QWORD *)(a1 + 264) = v3;
      v6 = (__int64 *)(a1 + 280);
      v7 = *(_QWORD *)(a1 + 280);
      if ( (int)((unsigned __int64)(*(_QWORD *)(a1 + 288) - v7) >> 3) >= 1 )
      {
        v8 = 0;
        do
        {
          v9 = *(_QWORD *)(v7 + 8 * v8);
          do
          {
            if ( v9 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
              v7 = *v6;
            }
            *(_QWORD *)(v7 + 8 * v8) = 0;
            v7 = *v6;
            v9 = *(_QWORD *)(*v6 + 8 * v8);
          }
          while ( v9 );
          ++v8;
        }
        while ( v8 < (int)((unsigned __int64)(*(_QWORD *)(a1 + 288) - v7) >> 3) );
      }
      *(_QWORD *)(a1 + 288) = v7;
      v10 = NewsManager::sm_pInstance;
      std::_Vector_base<NewsEntry *>::_Vector_base(
        &v78,
        (__int64)(*(_QWORD *)(NewsManager::sm_pInstance + 8) - *(_QWORD *)NewsManager::sm_pInstance) >> 3,
        NewsManager::sm_pInstance);
      v11 = *(const void **)v10;
      v12 = *(_QWORD *)(v10 + 8);
      v13 = v78;
      v14 = (v12 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = (__int64 *)memmove(v78, v11, v12 - (_QWORD)v11);
      v79 = &v13[v14];
      v16 = v78;
      if ( (int)((unsigned __int64)(&v13[v14] - v78) >> 3) >= 1 )
      {
        v17 = 0;
        do
        {
          v18 = (UpgradeSpellPopup *)v16[v17];
          v19 = (FacebookManager *)operator new(408);
          NewsItem::NewsItem(v19, v18, (LogicSellChestCommand *)a1);
          v77 = v19;
          v15 = (__int64 *)std::vector<EventScreenItem *>::push_back(a1 + 280, &v77, v20);
          ++v17;
          v16 = v78;
        }
        while ( v17 < (int)((unsigned __int64)(v79 - v78) >> 3) );
      }
      v21 = *(_QWORD *)(a1 + 280);
      v22 = *(_QWORD *)(a1 + 288);
      v23 = v21;
      if ( v21 != v22 )
      {
        v24 = 0;
        for ( i = (v22 - v21) >> 3; i != 1; i >>= 1 )
          v24 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
          *(_QWORD *)(a1 + 280),
          *(_QWORD *)(a1 + 288),
          v24,
          EventScreen::inboxNewsSort);
        v15 = (__int64 *)std::__final_insertion_sort<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
                           v21,
                           v22,
                           EventScreen::inboxNewsSort);
        v21 = *(_QWORD *)(a1 + 280);
        v23 = *(_QWORD *)(a1 + 288);
      }
      *(_OWORD *)&v26 = 0u;
      if ( (int)((unsigned __int64)(v23 - v21) >> 3) >= 1 )
      {
        v27 = 0;
        do
        {
          v68 = v26;
          v28 = *(DisplayObject **)(v21 + 8 * v27);
          DisplayObject::setY(v28, *(float *)&v26);
          ScrollArea::addContent(*(#1253 **)(a1 + 312), v28);
          v29 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v28 + 96LL))(v28);
          v30 = v68;
          *(float *)&v30 = *(float *)&v68 + (float)(v29 + 4.0);
          v26 = v30;
          ++v27;
          v21 = *(_QWORD *)(a1 + 280);
        }
        while ( v27 < (int)((unsigned __int64)(*(_QWORD *)(a1 + 288) - v21) >> 3) );
      }
      v69 = v26;
      NewItemIndicators::getInboxItems((__int64 *)&v75, v15);
      v33 = (__int64)v75;
      if ( (int)((unsigned __int64)(v76 - v75) >> 4) >= 1 )
      {
        v34 = 0;
        v35 = 8;
        while ( 1 )
        {
          v74 = 0;
          v36 = *(LogicStartMatchmakeCommand **)(v33 + v35);
          v37 = (*(__int64 (__fastcall **)(LogicStartMatchmakeCommand *))(*(_QWORD *)v36 + 32LL))(v36);
          if ( v37 > 9 )
            break;
          if ( ((1 << v37) & 0x268) != 0 )
          {
            v39 = (AvatarMessageItem *)operator new(384);
            AvatarMessageItem::AvatarMessageItem(v39, v36, (LogicSellChestCommand *)a1);
            v74 = v39;
            v40 = CustomButton::setButtonListener(v39, a1 + 96);
          }
          else
          {
            if ( v37 != 4 )
              break;
            v41 = (ChestInfoPopup *)operator new(408);
            InviteItem::InviteItem(v41, v36, (LogicSellChestCommand *)a1);
            v74 = v41;
            v40 = CustomButton::setButtonListener(v41, a1 + 96);
          }
          std::vector<EventScreenItem *>::push_back(a1 + 256, &v74, *(long double *)&v40);
    LABEL_35:
          ++v34;
          v33 = (__int64)v75;
          v35 += 16;
          if ( v34 >= (int)((unsigned __int64)(v76 - v75) >> 4) )
            goto LABEL_36;
        }
        *(__n128 *)&v32 = Debugger::doAssert(0, (bool)"", v38);
        goto LABEL_35;
      }
    LABEL_36:
      v42 = *(_QWORD *)(a1 + 256);
      v43 = *(_QWORD *)(a1 + 264);
      v44 = v42;
      if ( v42 != v43 )
      {
        v45 = 0;
        for ( j = (v43 - v42) >> 3; j != 1; j >>= 1 )
          v45 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
          *(_QWORD *)(a1 + 256),
          *(_QWORD *)(a1 + 264),
          v45,
          EventScreen::inboxItemSort);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
          v42,
          v43,
          EventScreen::inboxItemSort);
        v42 = *(_QWORD *)(a1 + 256);
        v44 = *(_QWORD *)(a1 + 264);
      }
      v47 = (v44 - v42) >> 3;
      if ( (int)v47 >= 1 )
      {
        v48 = 0;
        v32 = v69;
        do
        {
          v70 = v32;
          v49 = *(DisplayObject **)(v42 + 8 * v48);
          DisplayObject::setY(v49, *(float *)&v32);
          ScrollArea::addContent(*(#1253 **)(a1 + 312), v49);
          v50 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v49 + 376LL))(v49);
          v51 = v70;
          *(float *)&v51 = *(float *)&v70 + (float)(v50 + 4.0);
          v32 = v51;
          ++v48;
          v42 = *(_QWORD *)(a1 + 256);
          v52 = *(_QWORD *)(a1 + 264) - v42;
        }
        while ( v48 < (int)((unsigned __int64)v52 >> 3) );
        LODWORD(v69) = LODWORD(v51);
        v47 = v52 >> 3;
      }
      if ( !v47 && *(_QWORD *)(a1 + 288) == *(_QWORD *)(a1 + 280) )
      {
        v53 = *(_QWORD *)(a1 + 320);
        if ( v53 )
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v53 + 8LL))(v53, v32);
        *(_QWORD *)(a1 + 320) = 0;
        String::String(&v73, "sc/ui.sc");
        String::String(&v72, "message_item_empty");
        *(_QWORD *)(a1 + 320) = StringTable::getMovieClip((#1308 *)&v73, &v72, v54);
        String::~String();
        String::~String();
        DisplayObject::setX(*(#1249 **)(a1 + 320), *(float *)(*(_QWORD *)(a1 + 312) + 92LL) * 0.5);
        DisplayObject::setY(*(DisplayObject **)(a1 + 320), *(float *)&v69);
        v55 = *(MovieClip **)(a1 + 320);
        String = (const String *)StringTable::getString((#1308 *)"TID_INBOX_EMPTY_TITLE", v56);
        MovieClip::setText(v55, "title", String);
        v58 = *(MovieClip **)(a1 + 320);
        v60 = (const String *)StringTable::getString((#1308 *)"TID_INBOX_EMPTY_MESSAGE", v59);
        MovieClip::setText(v58, "message", v60);
        ScrollArea::addContent(*(#1253 **)(a1 + 312), *(#1249 **)(a1 + 320));
        *(float *)&v69 = *(float *)&v69
                       + (float)((*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 96LL))(*(_QWORD *)(a1 + 320))
                               + 4.0);
      }
      v61 = (const String *)StringTable::getString((#1308 *)"TID_EVENTS_TAB2", v31);
      String::String(&v71, v61);
      (*(void (__fastcall **)(_QWORD, String *))(**(_QWORD **)(a1 + 368) + 296LL))(*(_QWORD *)(a1 + 368), &v71);
      v62 = *(ScrollArea **)(a1 + 312);
      v63 = (Rect *)operator new(16);
      Rect::Rect(v63, *ContentBounds, 0.0, ContentBounds[2], *(float *)&v69);
      ScrollArea::setForcedContentBounds(v62, v63);
      ScrollArea::scrollTo(*(#1253 **)(a1 + 312), 0.0, 0.0, 1.0, 0.0);
      String::~String();
      v64 = v75;
      v65 = v76;
      if ( v75 != v76 )
      {
        v66 = (__int64)v75;
        do
        {
          *(_BYTE *)v66 = 0;
          *(_QWORD *)(v66 + 8) = 0;
          v66 += 16;
        }
        while ( (_BYTE *)v66 != v65 );
      }
      if ( v64 )
        operator delete(v64);
      if ( v78 )
        operator delete(v78);
    }

    // attributes: thunk
    void __fastcall EventScreen::EventScreen(EventScreen *this)
    {
      __ZN11EventScreenC2Ev((__int64)this);
    }

    #1251 **__fastcall EventScreen::buttonClicked(#1251 **this, #1251 *a2)
    {
      #1251 **v3; // x20
      #1251 *v4; // x8
      #1251 *v5; // x9
      __int64 v6; // x21
      LogicSpellDeck *v7; // x1
      #1251 *v8; // x8
      #1251 *v9; // x9
      __int64 v10; // x21
      LogicSpellDeck *v11; // x1
    
      v3 = this;
      if ( *(this + 24) == a2 )
        this = (#1251 **)(*((__int64 (__fastcall **)(#1251 **))*this + 44))(this);
      v4 = v3[29];
      v5 = v3[30];
      if ( (int)((unsigned __int64)(v5 - v4) >> 3) > 0 )
      {
        v6 = 0;
        do
        {
          v7 = (LogicSpellDeck *)*((_QWORD *)v4 + v6);
          if ( v7 == a2 )
          {
            this = (#1251 **)EventScreen::openContextMenu((LogicSellChestCommand *)v3, v7, v6);
            v4 = v3[29];
            v5 = v3[30];
          }
          ++v6;
        }
        while ( v6 < (int)((unsigned __int64)(v5 - v4) >> 3) );
      }
      v8 = v3[32];
      v9 = v3[33];
      if ( (int)((unsigned __int64)(v9 - v8) >> 3) > 0 )
      {
        v10 = 0;
        do
        {
          v11 = (LogicSpellDeck *)*((_QWORD *)v8 + v10);
          if ( v11 == a2 )
          {
            this = (#1251 **)EventScreen::openContextMenu((LogicSellChestCommand *)v3, v11, v10);
            v8 = v3[32];
            v9 = v3[33];
          }
          ++v10;
        }
        while ( v10 < (int)((unsigned __int64)(v9 - v8) >> 3) );
      }
      return this;
    }

    void __fastcall EventScreen::openContextMenu(LogicSellChestCommand *this, LogicSpellDeck *a2, int a3)
    {
      __int64 v6; // x0
      __int64 v7; // x0
      int v8; // w22
      __int64 v9; // x23
      LogicLong *v10; // x22
      int HigherInt; // w23
      int LowerInt; // w0
      __int64 v13; // x24
      LogicLong *v14; // x23
      int v15; // w24
      int v16; // w0
      __int64 v17; // x25
      LogicLong *v18; // x24
      int v19; // w25
      int v20; // w0
      __int64 v21; // x0
      PlayerActionMenu *v22; // x25
      BadgePopup *GlobalBounds; // x0
      BadgePopup *Instance; // x0
      __int64 v25; // x0
      __int64 Layer; // x0
      const char *v27; // x2
      DisplayObject *v28; // x21
      float v29; // s9
      float v30; // s8
      float v31; // s10
      long double Height; // q0
      DisplayObject *v33; // x21
      float v34; // s9
      float v35; // s8
      float v36; // s10
      long double v37; // q0
      Rect v38[2]; // [xsp+0h] [xbp-70h] BYREF
    
      v6 = *((_QWORD *)a2 + 34);
      if ( !v6 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6) != 6 )
      {
        v7 = *((_QWORD *)this + 42);
        if ( v7 && (v8 = *((_DWORD *)this + 86), (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 456LL))(v7), v8 == a3) )
        {
          *((_DWORD *)this + 86) = -1;
        }
        else
        {
          v9 = *((_QWORD *)a2 + 37);
          if ( v9 )
          {
            v10 = (LogicLong *)operator new(8);
            HigherInt = LogicLong::getHigherInt(v9);
            LowerInt = LogicLong::getLowerInt(*((_QWORD *)a2 + 37));
            LogicLong::LogicLong(v10, HigherInt, LowerInt);
            v13 = *((_QWORD *)a2 + 38);
            if ( v13 )
            {
              v14 = (LogicLong *)operator new(8);
              v15 = LogicLong::getHigherInt(v13);
              v16 = LogicLong::getLowerInt(*((_QWORD *)a2 + 38));
              LogicLong::LogicLong(v14, v15, v16);
            }
            else
            {
              v14 = 0;
            }
            v17 = *((_QWORD *)a2 + 39);
            if ( v17 )
            {
              v18 = (LogicLong *)operator new(8);
              v19 = LogicLong::getHigherInt(v17);
              v20 = LogicLong::getLowerInt(*((_QWORD *)a2 + 39));
              LogicLong::LogicLong(v18, v19, v20);
            }
            else
            {
              v18 = 0;
            }
            v21 = *((_QWORD *)this + 42);
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
            *((_QWORD *)this + 42) = 0;
            if ( v14 )
            {
              v22 = (PlayerActionMenu *)operator new(352);
              PlayerActionMenu::PlayerActionMenu(v22, v10, v14, v18, 0, 0, 0);
              *((_QWORD *)this + 42) = v22;
              PlayerActionMenu::setName(v22, (const String *)((char *)a2 + 320));
              Rect::Rect(v38);
              GlobalBounds = (BadgePopup *)DisplayObject::getGlobalBounds(a2, v38);
              Instance = (BadgePopup *)GUI::getInstance(GlobalBounds);
              if ( Instance )
              {
                v25 = GUI::getInstance(Instance);
                Layer = GUI::getLayer(v25, 2u);
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Layer + 160LL))(Layer, *((_QWORD *)this + 42));
              }
              if ( (unsigned int)SelectableButtonList::getSelectedIndex(*((#1255 **)this + 44)) )
              {
                if ( (unsigned int)SelectableButtonList::getSelectedIndex(*((#1255 **)this + 44)) == 1 )
                {
                  v28 = (DisplayObject *)*((_QWORD *)this + 42);
                  v29 = *(float *)&v38[0].top;
                  v30 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v38)));
                  v31 = *(float *)&v38[0].bottom;
                  Height = Rect::getHeight(v38);
                  DisplayObject::setXY(
                    v28,
                    v29 + (float)((float)(v30 * 3.0) * 0.25),
                    v31 + (float)(*(float *)&Height * 0.5));
                }
                else
                {
                  Debugger::doAssert(0, (bool)"Not yet implemented", v27);
                }
              }
              else
              {
                v33 = (DisplayObject *)*((_QWORD *)this + 42);
                v34 = *(float *)&v38[0].top;
                v35 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v38)));
                v36 = *(float *)&v38[0].bottom;
                v37 = Rect::getHeight(v38);
                DisplayObject::setXY(v33, v34 + (float)((float)(v35 + v35) / 3.0), v36 + (float)(*(float *)&v37 * 0.25));
              }
              *((_DWORD *)this + 86) = a3;
              Rect::~Rect(v38);
            }
          }
        }
      }
    }

    void __fastcall EventScreen::~EventScreen(LogicSellChestCommand *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x8
      __int64 v5; // x20
      __int64 v6; // x0
      __int64 v7; // x8
      __int64 v8; // x20
      __int64 v9; // x0
      __int64 v10; // x8
      __int64 v11; // x20
      __int64 v12; // x0
      __int64 v13; // x0
      __int64 v14; // x0
      __int64 v15; // x0
      __int64 v16; // x0
      __int64 v17; // x0
      __int64 v18; // x0
      __int64 v19; // x0
      __int64 v20; // x0
      void *v21; // x0
      void *v22; // x8
      void *v23; // x0
    
      *(_QWORD *)this = off_10046D9D0;
      *((_QWORD *)this + 12) = &off_10046DBA8;
      v4 = *((_QWORD *)this + 29);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 30) - v4) >> 3) >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(v4 + 8 * v5);
          do
          {
            if ( v6 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
              v4 = *((_QWORD *)this + 29);
            }
            *(_QWORD *)(v4 + 8 * v5) = 0;
            v4 = *((_QWORD *)this + 29);
            v6 = *(_QWORD *)(v4 + 8 * v5);
          }
          while ( v6 );
          ++v5;
        }
        while ( v5 < (int)((unsigned __int64)(*((_QWORD *)this + 30) - v4) >> 3) );
      }
      v7 = *((_QWORD *)this + 32);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 33) - v7) >> 3) > 0 )
      {
        v8 = 0;
        do
        {
          v9 = *(_QWORD *)(v7 + 8 * v8);
          do
          {
            if ( v9 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
              v7 = *((_QWORD *)this + 32);
            }
            *(_QWORD *)(v7 + 8 * v8) = 0;
            v7 = *((_QWORD *)this + 32);
            v9 = *(_QWORD *)(v7 + 8 * v8);
          }
          while ( v9 );
          ++v8;
        }
        while ( v8 < (int)((unsigned __int64)(*((_QWORD *)this + 33) - v7) >> 3) );
      }
      v10 = *((_QWORD *)this + 35);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 36) - v10) >> 3) > 0 )
      {
        v11 = 0;
        do
        {
          v12 = *(_QWORD *)(v10 + 8 * v11);
          do
          {
            if ( v12 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
              v10 = *((_QWORD *)this + 35);
            }
            *(_QWORD *)(v10 + 8 * v11) = 0;
            v10 = *((_QWORD *)this + 35);
            v12 = *(_QWORD *)(v10 + 8 * v11);
          }
          while ( v12 );
          ++v11;
        }
        while ( v11 < (int)((unsigned __int64)(*((_QWORD *)this + 36) - v10) >> 3) );
      }
      v13 = *((_QWORD *)this + 41);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *((_QWORD *)this + 41) = 0;
      v14 = *((_QWORD *)this + 40);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *((_QWORD *)this + 40) = 0;
      v15 = *((_QWORD *)this + 45);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      *((_QWORD *)this + 45) = 0;
      v16 = *((_QWORD *)this + 46);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      *((_QWORD *)this + 46) = 0;
      v17 = *((_QWORD *)this + 44);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      *((_QWORD *)this + 44) = 0;
      v18 = *((_QWORD *)this + 42);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      *((_QWORD *)this + 42) = 0;
      v19 = *((_QWORD *)this + 38);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      *((_QWORD *)this + 38) = 0;
      v20 = *((_QWORD *)this + 39);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      *((_QWORD *)this + 42) = 0;
      *((_DWORD *)this + 86) = -1;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      v21 = (void *)*((_QWORD *)this + 32);
      *((_QWORD *)this + 30) = *((_QWORD *)this + 29);
      v22 = (void *)*((_QWORD *)this + 35);
      *((_QWORD *)this + 33) = v21;
      *((_QWORD *)this + 36) = v22;
      *((_QWORD *)this + 45) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_QWORD *)this + 44) = 0;
      *((_DWORD *)this + 57) = -1;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 41) = 0;
      if ( v22 )
      {
        operator delete(v22);
        v21 = (void *)*((_QWORD *)this + 32);
      }
      if ( v21 )
        operator delete(v21);
      v23 = (void *)*((_QWORD *)this + 29);
      if ( v23 )
        operator delete(v23);
      PopupBase::~PopupBase(this, a2, a3);
    }

    // attributes: thunk
    void __fastcall EventScreen::~EventScreen(LogicSellChestCommand *this, __int64 a2, const char *a3)
    {
      __ZN11EventScreenD2Ev(this, a2, a3);
    }

    void __fastcall EventScreen::~EventScreen(LogicSellChestCommand *this, __int64 a2, const char *a3)
    {
      EventScreen::~EventScreen(this, a2, a3);
      operator delete(this);
    }

    LogicSellChestCommand *__fastcall EventScreen::update(#1255 **this, long double a2)
    {
      __int64 v4; // x0
      __int64 v5; // x0
      #1255 *v6; // x20
      int v7; // w21
      __int64 v8; // t1
      BadgePopup *SelectedIndex; // x0
      __int64 v10; // x8
      __int64 v11; // x20
      __int64 v12; // x8
      __int64 v13; // x20
      __int64 v14; // x8
      __int64 v15; // x20
      BadgePopup *Instance; // x0
      LogicSellChestCommand *result; // x0
    
      PopupBase::update((MiniTimer *)this, a2);
      v4 = (__int64)*(this + 42);
      if ( v4 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 472LL))(v4) )
        {
          v5 = (__int64)*(this + 42);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 456LL))(v5);
        }
      }
      EventScreen::updateTabList((LogicSellChestCommand *)this, 0);
      v6 = *(this + 32);
      if ( v6 != *(this + 33) )
      {
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)v6;
          v6 = (#1255 *)((char *)v6 + 8);
          v7 |= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 384LL))(v8);
        }
        while ( v6 != *(this + 33) );
        if ( (v7 & 1) != 0 )
          EventScreen::refreshInboxItems((__int64)this);
      }
      if ( (unsigned int)SelectableButtonList::getSelectedIndex(*(this + 44)) )
      {
        SelectedIndex = (BadgePopup *)SelectableButtonList::getSelectedIndex(*(this + 44));
        if ( (_DWORD)SelectedIndex == 1 )
        {
          SelectedIndex = (BadgePopup *)(*(__int64 (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 39) + 272LL))(
                                          *(this + 39),
                                          a2);
          v10 = (__int64)*(this + 32);
          if ( (int)(((unsigned __int64)*(this + 33) - v10) >> 3) > 0 )
          {
            v11 = 0;
            do
            {
              SelectedIndex = (BadgePopup *)(*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)(v10 + 8 * v11)
                                                                                           + 368LL))(
                                              *(_QWORD *)(v10 + 8 * v11),
                                              a2);
              ++v11;
              v10 = (__int64)*(this + 32);
            }
            while ( v11 < (int)(((unsigned __int64)*(this + 33) - v10) >> 3) );
          }
          v12 = (__int64)*(this + 35);
          if ( (int)(((unsigned __int64)*(this + 36) - v12) >> 3) > 0 )
          {
            v13 = 0;
            do
            {
              SelectedIndex = (BadgePopup *)(*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)(v12 + 8 * v13)
                                                                                           + 368LL))(
                                              *(_QWORD *)(v12 + 8 * v13),
                                              a2);
              ++v13;
              v12 = (__int64)*(this + 35);
            }
            while ( v13 < (int)(((unsigned __int64)*(this + 36) - v12) >> 3) );
          }
        }
      }
      else
      {
        SelectedIndex = (BadgePopup *)(*(__int64 (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 38) + 272LL))(
                                        *(this + 38),
                                        a2);
        v14 = (__int64)*(this + 29);
        if ( (int)(((unsigned __int64)*(this + 30) - v14) >> 3) >= 1 )
        {
          v15 = 0;
          do
          {
            SelectedIndex = (BadgePopup *)(*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)(v14 + 8 * v15)
                                                                                         + 368LL))(
                                            *(_QWORD *)(v14 + 8 * v15),
                                            a2);
            ++v15;
            v14 = (__int64)*(this + 29);
          }
          while ( v15 < (int)(((unsigned __int64)*(this + 30) - v14) >> 3) );
        }
      }
      *((_BYTE *)this + 64) = 1;
      Instance = (BadgePopup *)GUI::getInstance(SelectedIndex);
      result = (LogicSellChestCommand *)GUI::getTopPopup(Instance);
      if ( result != (LogicSellChestCommand *)this )
        *((_BYTE *)this + 64) = 0;
      return result;
    }

    void __fastcall EventScreen::updateTabList(LogicSellChestCommand *this, int a2)
    {
      int v4; // w21
      const char *v6; // x1
      int SelectedIndex; // w20
      __int64 v8; // x0
      const String *String; // x0
      LogicLong *v10; // x21
      CharacterAnimator *Id; // x0
      const #1236 *v12; // x2
      __int64 v13; // x0
      __int64 v14; // x0
      __int64 LowerInt; // x0
      int v16; // w1
      MovieClip *v17; // x21
      const String *v18; // x0
      String v19; // [xsp+8h] [xbp-48h] BYREF
    
      v4 = *((_DWORD *)this + 57);
      if ( v4 != (unsigned int)SelectableButtonList::getSelectedIndex(*((#1255 **)this + 44)) || a2 != 0 )
      {
        SelectedIndex = SelectableButtonList::getSelectedIndex(*((#1255 **)this + 44));
        v8 = *((_QWORD *)this + 42);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 456LL))(v8);
        *((_DWORD *)this + 86) = -1;
        if ( SelectedIndex == 1 )
        {
          *(_BYTE *)(*((_QWORD *)this + 38) + 8LL) = 0;
          *(_BYTE *)(*((_QWORD *)this + 39) + 8LL) = 1;
          String = (const String *)StringTable::getString((#1308 *)"TID_EVENTS_TAB2", v6);
          String::String(&v19, String);
          MovieClip::setText(*((MovieClip **)this + 14), "TID_EVENT_LOG", &v19);
          if ( NewsManager::sm_pInstance )
            NewsManager::setNewsSeen((__int64 *)NewsManager::sm_pInstance);
          if ( *((_QWORD *)this + 33) != *((_QWORD *)this + 32) )
          {
            v10 = (LogicLong *)operator new(8);
            LogicLong::LogicLong(v10, NewItemIndicators::sm_lastReadInboxIdHigh, NewItemIndicators::sm_lastReadInboxIdLow);
            Id = (CharacterAnimator *)AvatarStreamEntry::getId(*(LogicStartMatchmakeCommand **)(**((_QWORD **)this + 32)
                                                                                              + 272LL));
            if ( (int)AllianceStream::compareLongs(Id, v10, v12) >= 1 )
            {
              v13 = AvatarStreamEntry::getId(*(LogicStartMatchmakeCommand **)(**((_QWORD **)this + 32) + 272LL));
              NewItemIndicators::sm_lastReadInboxIdHigh = LogicLong::getHigherInt(v13);
              v14 = AvatarStreamEntry::getId(*(LogicStartMatchmakeCommand **)(**((_QWORD **)this + 32) + 272LL));
              LowerInt = LogicLong::getLowerInt(v14);
              NewItemIndicators::sm_lastReadInboxIdLow = LowerInt;
              NewItemIndicators::saveLastSeenInboxIds(LowerInt, v16);
            }
            operator delete(v10);
          }
          String::~String();
        }
        else if ( !SelectedIndex )
        {
          *(_BYTE *)(*((_QWORD *)this + 38) + 8LL) = 1;
          *(_BYTE *)(*((_QWORD *)this + 39) + 8LL) = 0;
          v17 = (MovieClip *)*((_QWORD *)this + 14);
          v18 = (const String *)StringTable::getString((#1308 *)"TID_EVENTS_TAB1", v6);
          MovieClip::setText(v17, "TID_EVENT_LOG", v18);
        }
        *((_DWORD *)this + 57) = SelectedIndex;
      }
    }

    bool __fastcall EventScreen::battleLogItemSort(
            LogicStartMatchmakeCommand **this,
            const LogicSpellDeck *a2,
            const LogicSpellDeck *a3)
    {
      int AgeSeconds; // w21
      __int64 v6; // x0
      int HigherInt; // w21
      __int64 v8; // x0
      __int64 ReplayID; // x0
      int LowerInt; // w20
      __int64 v11; // x0
      int v13; // w20
    
      AgeSeconds = AvatarStreamEntry::getAgeSeconds(*(this + 34));
      if ( AgeSeconds == (unsigned int)AvatarStreamEntry::getAgeSeconds(*((LogicStartMatchmakeCommand **)a2 + 34))
        && BattleLogItem::getReplayID((#1309 *)this)
        && BattleLogItem::getReplayID(a2)
        && (v6 = BattleLogItem::getReplayID((#1309 *)this),
            HigherInt = LogicLong::getHigherInt(v6),
            v8 = BattleLogItem::getReplayID(a2),
            HigherInt == (unsigned int)LogicLong::getHigherInt(v8)) )
      {
        ReplayID = BattleLogItem::getReplayID((#1309 *)this);
        LowerInt = LogicLong::getLowerInt(ReplayID);
        v11 = BattleLogItem::getReplayID(a2);
        return LowerInt > (int)LogicLong::getLowerInt(v11);
      }
      else
      {
        v13 = AvatarStreamEntry::getAgeSeconds(*(this + 34));
        return v13 < (int)AvatarStreamEntry::getAgeSeconds(*((LogicStartMatchmakeCommand **)a2 + 34));
      }
    }

    bool __fastcall EventScreen::inboxItemSort(
            LogicStartMatchmakeCommand **this,
            LogicStartMatchmakeCommand **a2,
            const LogicSpellDeck *a3)
    {
      __int64 Id; // x19
      __int64 v6; // x0
      __int64 v7; // x20
      bool v8; // zf
      int HigherInt; // w21
      int AgeSeconds; // w19
      int v12; // w21
      int LowerInt; // w19
    
      Id = AvatarStreamEntry::getId(*(this + 34));
      v6 = AvatarStreamEntry::getId(a2[34]);
      v7 = v6;
      if ( Id )
        v8 = v6 == 0;
      else
        v8 = 1;
      if ( v8 )
      {
        AgeSeconds = AvatarStreamEntry::getAgeSeconds(*(this + 34));
        return AgeSeconds < (int)AvatarStreamEntry::getAgeSeconds(a2[34]);
      }
      else
      {
        HigherInt = LogicLong::getHigherInt(Id);
        if ( HigherInt <= (int)LogicLong::getHigherInt(v7) )
        {
          v12 = LogicLong::getHigherInt(Id);
          if ( v12 == (unsigned int)LogicLong::getHigherInt(v7) )
          {
            LowerInt = LogicLong::getLowerInt(Id);
            return LowerInt > (int)LogicLong::getLowerInt(v7);
          }
          else
          {
            return 0;
          }
        }
        else
        {
          return 1;
        }
      }
    }

    bool __fastcall EventScreen::inboxNewsSort(
            LogicSellChestCommand *this,
            const LogicSpellDeck *a2,
            const LogicSpellDeck *a3)
    {
      __int64 v3; // x19
      __int64 v4; // x20
    
      v3 = **((_QWORD **)this + 35);
      v4 = **((_QWORD **)a2 + 35);
      return (unsigned int)LogicData::getDataType((ResetAccountMessage **)v3) == 58
          && *(_DWORD *)(v3 + 100) > *(_DWORD *)(v4 + 100);
    }

    __int64 __fastcall EventScreen::touchReleased(__int64 a1, __int64 a2)
    {
      __int64 v3; // x19
      __int64 v4; // x0
    
      v3 = PopupBase::touchReleased(a1, a2);
      v4 = *(_QWORD *)(a1 + 336);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 456LL))(v4);
      return v3;
    }

    // attributes: thunk
    __int64 __fastcall EventScreen::touchPressed(__int64 a1, __int64 a2)
    {
      return PopupBase::touchPressed(a1, a2);
    }

    __int64 __fastcall EventScreen::refreshLastSeenInboxItems(LogicSellChestCommand *this)
    {
      LogicClientGlobals *v1; // x19
      __int64 result; // x0
      int v3; // w20
      LogicStartMatchmakeCommand *EntryByIdx; // x21
      tween::Bounce *PlayerAvatar; // x0
      LogicStartMatchmakeCommand *AllianceId; // x0
      LogicLong *v7; // x22
      CharacterAnimator *Id; // x0
      const #1236 *v9; // x2
      __int64 v10; // x0
      __int64 v11; // x0
      __int64 LowerInt; // x0
      int v13; // w1
    
      v1 = (LogicClientGlobals *)AvatarStreamManager::sm_pInstance;
      result = GameMode::getInstance();
      if ( result )
      {
        GameMode::getInstance();
        result = GameMode::getPlayerAvatar();
        if ( result )
        {
          result = AvatarStreamManager::getEntryCnt(v1);
          if ( (int)result >= 1 )
          {
            v3 = 0;
            do
            {
              EntryByIdx = (LogicStartMatchmakeCommand *)AvatarStreamManager::getEntryByIdx(v1, v3);
              if ( (AvatarStreamEntry::isRemoved(EntryByIdx) & 1) == 0 )
              {
                GameMode::getInstance();
                PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
                AllianceId = (LogicStartMatchmakeCommand *)LogicClientAvatar::getAllianceId(PlayerAvatar);
                if ( (unsigned int)NewItemIndicators::isInboxEntry(EntryByIdx, AllianceId, (const #1236 *)1) )
                {
                  v7 = (LogicLong *)operator new(8);
                  LogicLong::LogicLong(
                    v7,
                    NewItemIndicators::sm_lastReadInboxIdHigh,
                    NewItemIndicators::sm_lastReadInboxIdLow);
                  Id = (CharacterAnimator *)AvatarStreamEntry::getId(EntryByIdx);
                  if ( (int)AllianceStream::compareLongs(Id, v7, v9) >= 1 )
                  {
                    v10 = AvatarStreamEntry::getId(EntryByIdx);
                    NewItemIndicators::sm_lastReadInboxIdHigh = LogicLong::getHigherInt(v10);
                    v11 = AvatarStreamEntry::getId(EntryByIdx);
                    LowerInt = LogicLong::getLowerInt(v11);
                    NewItemIndicators::sm_lastReadInboxIdLow = LowerInt;
                    NewItemIndicators::saveLastSeenInboxIds(LowerInt, v13);
                  }
                  operator delete(v7);
                }
              }
              ++v3;
              result = AvatarStreamManager::getEntryCnt(v1);
            }
            while ( v3 < (int)result );
          }
        }
      }
      return result;
    }

    bool __fastcall EventScreen::isReplayCompatibleWithCurrentVersion(LogicSellChestCommand *this, int a2, int a3)
    {
      bool v3; // zf
    
      v3 = (_DWORD)this == 2 && a2 == 1306;
      return v3 && *(_DWORD *)(GameMain::getInstance(this) + 152) == a3;
    }

    __int64 EventScreen::getPopupType()
    {
      return 34;
    }

}; // end class EventScreen
