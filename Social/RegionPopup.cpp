class RegionPopup
{
public:

    void __fastcall RegionPopup::RegionPopup(RegionPopup *this, bool a2)
    {
      const char *v4; // x1
      const String *String; // x0
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x21
      __int64 v8; // x22
      long double Width; // q0
      float v10; // s8
      long double Height; // q0
      float v12; // s8
      float v13; // s9
      long double v14; // q0
      const char *v15; // x2
      __int64 v16; // x0
      String v17; // [xsp+0h] [xbp-80h] BYREF
      String v18; // [xsp+18h] [xbp-68h] BYREF
      Rect v19[2]; // [xsp+30h] [xbp-50h] BYREF
    
      String::String(&v18, "sc/ui.sc");
      String::String(&v17, "popup_generic_list");
      PopupBase::PopupBase(this, &v18, &v17);
      String::~String(&v17);
      String::~String(&v18);
      *(_QWORD *)this = off_10045FAF8;
      *((_QWORD *)this + 12) = &off_10045FCD0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 24) = DropGUIContainer::addGameButton(this, "close", 1);
      String = (const String *)StringTable::getString((#1308 *)"TID_SELECT_REGION", v4);
      GUIContainer::setText(this, "title", String, 1);
      MovieClip = GUIContainer::getMovieClip(this);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "scroll_area");
      Rect::Rect(v19);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v19);
      v8 = operator new(504);
      Width = Rect::getWidth(v19);
      v10 = *(float *)&Width;
      Height = Rect::getHeight(v19);
      ScrollArea::ScrollArea((#1253 *)v8, v10, *(float *)&Height, 275);
      ScrollArea::enablePinching((#1253 *)v8, 0);
      ScrollArea::enableHorizontalDrag((#1253 *)v8, 0);
      ScrollArea::enableVerticalDrag((#1253 *)v8, 1);
      *(_BYTE *)(v8 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v8, 5);
      v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName)));
      v13 = *(float *)&v19[0].top;
      v14 = DisplayObject::getY(TextFieldByName);
      DisplayObject::setPixelSnappedXY((DisplayObject *)v8, v12 + v13, *(float *)&v14 + *(float *)&v19[0].bottom);
      *(_BYTE *)(v8 + 64) = 1;
      Rect::~Rect(v19);
      *((_QWORD *)this + 29) = v8;
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v15);
      v16 = GUIContainer::getMovieClip(this);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 160LL))(v16, *((_QWORD *)this + 29));
      *((_BYTE *)this + 64) = 1;
      RegionPopup::refreshItems(this, a2);
    }

    __int64 __fastcall RegionPopup::refreshItems(ChallengeResultInfo *this, int a2)
    {
      __int64 v4; // x8
      __int64 *v5; // x20
      __int64 v6; // x22
      __int64 v7; // x0
      int v8; // w1
      __int64 v9; // x21
      __int64 Table; // x21
      __int64 v11; // x22
      RegionItem *v12; // x25
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x21
      DisplayObject *v16; // x20
      float v17; // s8
      float v18; // s9
      long double v19; // q0
      float v21; // [xsp+60h] [xbp-80h]
      __int64 v22; // [xsp+70h] [xbp-70h] BYREF
      __int64 v23; // [xsp+78h] [xbp-68h] BYREF
    
      v5 = (__int64 *)((char *)this + 240);
      v4 = *((_QWORD *)this + 30);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 31) - v4) >> 3) >= 1 )
      {
        v6 = 0;
        do
        {
          v7 = *(_QWORD *)(v4 + 8 * v6);
          do
          {
            if ( v7 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
              v4 = *v5;
            }
            *(_QWORD *)(v4 + 8 * v6) = 0;
            v4 = *v5;
            v7 = *(_QWORD *)(*v5 + 8 * v6);
          }
          while ( v7 );
          ++v6;
        }
        while ( v6 < (int)((unsigned __int64)(*((_QWORD *)this + 31) - v4) >> 3) );
      }
      *((_QWORD *)this + 31) = v4;
      ScrollArea::removeAllContent(*((#1253 **)this + 29));
      ScrollArea::setForcedContentBounds(*((ScrollArea **)this + 29), 0);
      ScrollArea::enableHorizontalDrag(*((#1253 **)this + 29), 0);
      ScrollArea::enableVerticalDrag(*((#1253 **)this + 29), 1);
      *(_BYTE *)(*((_QWORD *)this + 29) + 496LL) = 1;
      if ( a2 )
      {
        v9 = operator new(272);
        RegionItem::RegionItem(v9, 0);
        v23 = v9;
        CustomButton::setButtonListener(v9, (char *)this + 96);
        std::vector<RegionItem *>::push_back(v5, &v23);
      }
      Table = LogicDataTables::getTable((LogicDataTables *)0x39, v8);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) >= 1 )
      {
        v11 = 0;
        do
        {
          v12 = (RegionItem *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v11);
          v13 = operator new(272);
          RegionItem::RegionItem(v13, v12);
          v22 = v13;
          CustomButton::setButtonListener(v13, (char *)this + 96);
          std::vector<RegionItem *>::push_back(v5, &v22);
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (int)v11 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      }
      v14 = *((_QWORD *)this + 30);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 31) - v14) >> 3) > 0 )
      {
        v15 = 0;
        v21 = 0.0;
        do
        {
          v16 = *(DisplayObject **)(v14 + 8 * v15);
          v17 = *(float *)(*((_QWORD *)this + 29) + 92LL) * 0.5;
          v18 = v21 + (float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v16 + 96LL))(v16) * 0.5);
          DisplayObject::setPixelSnappedXY(v16, v17, v18);
          v19 = ((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v16 + 96LL))(v16);
          v21 = v18 + (float)(*(float *)&v19 * 0.5);
          ScrollArea::addContentDontUpdateBounds(*((#1253 **)this + 29), v16);
          ++v15;
          v14 = *((_QWORD *)this + 30);
        }
        while ( v15 < (int)((unsigned __int64)(*((_QWORD *)this + 31) - v14) >> 3) );
      }
      return ScrollArea::updateBounds(*((ScrollArea **)this + 29));
    }

    // attributes: thunk
    void __fastcall RegionPopup::RegionPopup(RegionPopup *this, bool a2)
    {
      __ZN11RegionPopupC2Eb(this, a2);
    }

    void __fastcall RegionPopup::~RegionPopup(ChallengeResultInfo *this)
    {
      __int64 v2; // x8
      unsigned __int64 v3; // x9
      __int64 i; // x20
      __int64 v5; // x0
      __int64 v6; // x0
      void *v7; // x0
    
      *(_QWORD *)this = off_10045FAF8;
      *((_QWORD *)this + 12) = &off_10045FCD0;
      ScrollArea::removeAllContent(*((#1253 **)this + 29));
      v2 = *((_QWORD *)this + 30);
      v3 = (unsigned __int64)(*((_QWORD *)this + 31) - v2) >> 3;
      if ( (int)v3 >= 1 )
      {
        for ( i = (int)v3 - 1LL; ; --i )
        {
          v5 = *(_QWORD *)(v2 + 8 * i);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          if ( i + 1 < 2 )
            break;
          v2 = *((_QWORD *)this + 30);
        }
      }
      v6 = *((_QWORD *)this + 29);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = (void *)*((_QWORD *)this + 30);
      *((_QWORD *)this + 31) = v7;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 33) = 0;
      if ( v7 )
        operator delete(v7);
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall RegionPopup::~RegionPopup(ChallengeResultInfo *this)
    {
      __ZN11RegionPopupD2Ev(this);
    }

    void __fastcall RegionPopup::~RegionPopup(ChallengeResultInfo *this)
    {
      RegionPopup::~RegionPopup(this);
      operator delete(this);
    }

    __int64 __fastcall RegionPopup::buttonClicked(__int64 a1, __int64 a2)
    {
      if ( *(_QWORD *)(a1 + 192) != a2 )
        (***(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 264))(*(_QWORD *)(a1 + 264), *(_QWORD *)(a2 + 264));
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
    }

    __int64 __fastcall RegionPopup::update(ChallengeResultInfo *this, long double a2)
    {
      PopupBase::update(this, *(float *)&a2);
      return (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 29) + 272LL))(*((_QWORD *)this + 29), a2);
    }

    __int64 __fastcall RegionPopup::getPopupType(ChallengeResultInfo *this)
    {
      return 31;
    }

}; // end class RegionPopup
