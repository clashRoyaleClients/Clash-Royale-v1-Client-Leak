class DonationBriefingPopup
{
public:

    __int64 __fastcall DonationBriefingPopup::DonationBriefingPopup(__int64 a1)
    {
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x21
      #1253 *v4; // x23
      long double Width; // q0
      float v6; // s8
      long double Height; // q0
      __int64 v8; // x0
      #1257 *v9; // x0
      DisplayObject *v10; // x22
      float v11; // s8
      float v12; // s9
      long double v13; // q0
      long double v14; // q0
      int EntryCnt; // w22
      int i; // w21
      LogicStartMatchmakeCommand *EntryByIdx; // x23
      _QWORD *v18; // x21
      _BYTE *v19; // x24
      _QWORD *v20; // x22
      _QWORD *v21; // x23
      __int64 v22; // x2
      __int64 j; // x8
      __int64 v24; // x9
      unsigned __int64 v25; // x8
      TextField **v26; // x24
      unsigned __int64 v27; // x26
      unsigned int v28; // w27
      const DonationReceivedStreamEntry *v29; // x25
      long double ItemHeight; // q0
      float v31; // s8
      const char *v32; // x2
      DisplayObject *v33; // x24
      float v34; // s9
      float v35; // s0
      float v36; // s11
      float v37; // s8
      float v38; // s0
      long double v39; // q0
      float v40; // s0
      Rect *v41; // x23
      float v42; // s2
      float v44; // [xsp+0h] [xbp-F0h]
      float v45; // [xsp+0h] [xbp-F0h]
      TextField **v46; // [xsp+10h] [xbp-E0h] BYREF
      DisplayObject *v47; // [xsp+18h] [xbp-D8h] BYREF
      LogicStartMatchmakeCommand *v48; // [xsp+20h] [xbp-D0h] BYREF
      _QWORD *v49; // [xsp+28h] [xbp-C8h] BYREF
      _BYTE *v50; // [xsp+30h] [xbp-C0h]
      __int64 v51; // [xsp+38h] [xbp-B8h]
      Rect v52[2]; // [xsp+40h] [xbp-B0h] BYREF
      String v53; // [xsp+50h] [xbp-A0h] BYREF
      String v54; // [xsp+68h] [xbp-88h] BYREF
    
      String::String(&v54, "sc/ui.sc");
      String::String(&v53, "popup_card_recieved_02");
      PopupBase::PopupBase((PopupBase *)a1, &v54, &v53);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046B368;
      *(_QWORD *)(a1 + 96) = &off_10046B540;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 256) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "close", 1);
      MovieClip = GUIContainer::getMovieClip((#1254 *)a1);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "scroll_area");
      Rect::Rect(v52);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v52);
      v4 = (#1253 *)operator new(504);
      Width = Rect::getWidth(v52);
      v6 = *(float *)&Width;
      Height = Rect::getHeight(v52);
      ScrollArea::ScrollArea(v4, v6, *(float *)&Height, 1);
      *(_QWORD *)(a1 + 264) = v4;
      ScrollArea::enablePinching(v4, 0);
      ScrollArea::enableHorizontalDrag(*(#1253 **)(a1 + 264), 0);
      ScrollArea::enableVerticalDrag(*(#1253 **)(a1 + 264), 1);
      v8 = *(_QWORD *)(a1 + 264);
      *(_BYTE *)(v8 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v8, 12);
      v9 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClip::changeTimelineChild(v9, TextFieldByName, *(#1249 **)(a1 + 264));
      v10 = *(DisplayObject **)(a1 + 264);
      v11 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v10)));
      v12 = *(float *)&v52[0].top;
      v13 = DisplayObject::getY(*(_QWORD *)(a1 + 264));
      *(__n128 *)&v14 = DisplayObject::setPixelSnappedXY(v10, v11 + v12, *(float *)&v13 + *(float *)&v52[0].bottom);
      if ( TextFieldByName )
        (*(void (__fastcall **)(#1271 *, long double))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName, v14);
      v50 = 0;
      v51 = 0;
      v49 = 0;
      EntryCnt = AvatarStreamManager::getEntryCnt((LogicClientGlobals *)AvatarStreamManager::sm_pInstance);
      if ( EntryCnt < 1 )
      {
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
      }
      else
      {
        for ( i = 0; i < EntryCnt; ++i )
        {
          EntryByIdx = (LogicStartMatchmakeCommand *)AvatarStreamManager::getEntryByIdx(
                                                       (LogicClientGlobals *)AvatarStreamManager::sm_pInstance,
                                                       i);
          if ( (unsigned int)AvatarStreamEntry::isNew(EntryByIdx)
            && (*(unsigned int (__fastcall **)(LogicStartMatchmakeCommand *))(*(_QWORD *)EntryByIdx + 32LL))(EntryByIdx) == 7 )
          {
            v48 = EntryByIdx;
            std::vector<DonationReceivedStreamEntry const*>::push_back(&v49, &v48);
          }
        }
        v18 = v49;
        v19 = v50;
        v20 = v50;
        v21 = v49;
      }
      if ( v21 != v20 )
      {
        v22 = 0;
        for ( j = v20 - v21; j != 1; j >>= 1 )
          v22 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,long,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
          v21,
          v20,
          v22,
          entrySort);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
          v21,
          v20,
          entrySort);
      }
      v24 = v19 - (_BYTE *)v18;
      if ( v19 != (_BYTE *)v18 )
      {
        v25 = 0;
        v26 = 0;
        v27 = v24 >> 3;
        v28 = 1;
        v44 = 0.0;
        while ( 1 )
        {
          v29 = (const DonationReceivedStreamEntry *)v18[v25];
          if ( v26 )
          {
            if ( LogicSpell::getSpellData(v26[24]) == *((_QWORD *)v29 + 6) )
            {
              RecievedItem::addEntry((RecievedItem *)v26, v29);
              goto LABEL_23;
            }
            RecievedItem::allAdded((RecievedItem *)v26);
            ItemHeight = RecievedItem::getItemHeight(v26);
            v31 = *(float *)&ItemHeight;
            v33 = (DisplayObject *)ResourceManager::getMovieClip(
                                     (ResourceManager *)"sc/ui.sc",
                                     "card_received_divider",
                                     v32);
            v34 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v33 + 88LL))(v33)));
            v35 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v33 + 96LL))(v33);
            v36 = v44 + v31;
            DisplayObject::setPixelSnappedXY(v33, v34 * 0.5, (float)(v44 + v31) + (float)(v35 * 0.5));
            ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 264), v33);
            v37 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v33 + 96LL))(v33)));
            v47 = v33;
            std::vector<DisplayObject *>::push_back(a1 + 232, &v47);
            v44 = v36 + v37;
          }
          v26 = (TextField **)operator new(264);
          RecievedItem::RecievedItem((RecievedItem *)v26, v29);
          RecievedItem::addEntry((RecievedItem *)v26, v29);
          v38 = (*((float (__fastcall **)(TextField **))*v26 + 11))(v26);
          DisplayObject::setPixelSnappedXY((DisplayObject *)v26, v38 * 0.5, v44);
          ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 264), (#1249 *)v26);
          v46 = v26;
          std::vector<DisplayObject *>::push_back(a1 + 232, &v46);
    LABEL_23:
          v25 = v28++;
          if ( v25 >= v27 )
          {
            RecievedItem::allAdded((RecievedItem *)v26);
            v39 = RecievedItem::getItemHeight(v26);
            v40 = v44 + *(float *)&v39;
            goto LABEL_26;
          }
        }
      }
      v40 = 0.0;
    LABEL_26:
      v45 = v40;
      v41 = (Rect *)operator new(16);
      v42 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 88LL))(*(_QWORD *)(a1 + 264));
      Rect::Rect(v41, 0.0, 0.0, v42, v45);
      ScrollArea::setForcedContentBounds(*(ScrollArea **)(a1 + 264), v41);
      if ( v18 )
        operator delete(v18);
      Rect::~Rect(v52);
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall DonationBriefingPopup::DonationBriefingPopup(__int64 a1)
    {
      return __ZN21DonationBriefingPopupC2Ev(a1);
    }

    void __fastcall DonationBriefingPopup::~DonationBriefingPopup(MatchmakeFailedMessage *a1)
    {
      _QWORD *v2; // x8
      __int64 v3; // x20
      unsigned int v4; // w21
      __int64 v5; // x0
    
      *(_QWORD *)a1 = off_10046B368;
      *((_QWORD *)a1 + 12) = &off_10046B540;
      v2 = (_QWORD *)*((_QWORD *)a1 + 30);
      if ( v2 != *((_QWORD **)a1 + 29) )
      {
        v3 = 0;
        v4 = 0;
        v2 = (_QWORD *)*((_QWORD *)a1 + 29);
        do
        {
          v5 = v2[v3];
          do
          {
            if ( v5 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
              v2 = (_QWORD *)*((_QWORD *)a1 + 29);
            }
            v2[v3] = 0;
            v2 = (_QWORD *)*((_QWORD *)a1 + 29);
            v5 = v2[v3];
          }
          while ( v5 );
          v3 = ++v4;
        }
        while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)a1 + 30) - (_QWORD)v2) >> 3) );
      }
      *((_QWORD *)a1 + 32) = 0;
      *((_QWORD *)a1 + 33) = 0;
      if ( v2 )
        operator delete(v2);
      PopupBase::~PopupBase(a1);
    }

    // attributes: thunk
    void __fastcall DonationBriefingPopup::~DonationBriefingPopup(MatchmakeFailedMessage *a1)
    {
      __ZN21DonationBriefingPopupD2Ev(a1);
    }

    void __fastcall DonationBriefingPopup::~DonationBriefingPopup(MatchmakeFailedMessage *a1)
    {
      DonationBriefingPopup::~DonationBriefingPopup(a1);
      operator delete(a1);
    }

    _QWORD *__fastcall DonationBriefingPopup::buttonClicked(_QWORD *result, __int64 a2)
    {
      if ( result[32] == a2 )
        return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 352LL))(result);
      return result;
    }

    __int64 __fastcall DonationBriefingPopup::update(MatchmakeFailedMessage *a1, long double a2)
    {
      PopupBase::update(a1, *(float *)&a2);
      return (*(__int64 (__fastcall **)(_QWORD *, long double))(**((_QWORD **)a1 + 33) + 272LL))(*((_QWORD **)a1 + 33), a2);
    }

    __int64 DonationBriefingPopup::getPopupType()
    {
      return 21;
    }

}; // end class DonationBriefingPopup
