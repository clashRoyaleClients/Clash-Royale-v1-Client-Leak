class BadgePopup
{
public:

    void __fastcall BadgePopup::BadgePopup(BadgePopup *this)
    {
      const char *v2; // x1
      const String *String; // x0
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x20
      __int64 v6; // x21
      long double Width; // q0
      float v8; // s8
      long double Height; // q0
      float v10; // s8
      float v11; // s9
      long double v12; // q0
      const char *v13; // x2
      __int64 v14; // x0
      String v15; // [xsp+0h] [xbp-80h] BYREF
      String v16; // [xsp+18h] [xbp-68h] BYREF
      Rect v17[2]; // [xsp+30h] [xbp-50h] BYREF
    
      String::String(&v16, "sc/ui.sc");
      String::String(&v15, "popup_generic_list");
      PopupBase::PopupBase(this, &v16, &v15);
      String::~String(&v15);
      String::~String(&v16);
      *(_QWORD *)this = off_10045EC98;
      *((_QWORD *)this + 12) = &off_10045EE70;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 24) = DropGUIContainer::addGameButton(this, "close", 1);
      String = (const String *)StringTable::getString((#1308 *)"TID_SELECT_BADGE", v2);
      GUIContainer::setText(this, "title", String, 1);
      MovieClip = GUIContainer::getMovieClip(this);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "scroll_area");
      Rect::Rect(v17);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v17);
      v6 = operator new(504);
      Width = Rect::getWidth(v17);
      v8 = *(float *)&Width;
      Height = Rect::getHeight(v17);
      ScrollArea::ScrollArea((#1253 *)v6, v8, *(float *)&Height, 275);
      ScrollArea::enablePinching((#1253 *)v6, 0);
      ScrollArea::enableHorizontalDrag((#1253 *)v6, 0);
      ScrollArea::enableVerticalDrag((#1253 *)v6, 1);
      *(_BYTE *)(v6 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v6, 5);
      v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName)));
      v11 = *(float *)&v17[0].top;
      v12 = DisplayObject::getY(TextFieldByName);
      DisplayObject::setPixelSnappedXY((DisplayObject *)v6, v10 + v11, *(float *)&v12 + *(float *)&v17[0].bottom);
      *(_BYTE *)(v6 + 64) = 1;
      Rect::~Rect(v17);
      *((_QWORD *)this + 29) = v6;
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v13);
      v14 = GUIContainer::getMovieClip(this);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 160LL))(v14, *((_QWORD *)this + 29));
      *((_BYTE *)this + 64) = 1;
      BadgePopup::refreshItems(this);
    }

    __int64 __fastcall BadgePopup::refreshItems(RequestSectorStateMessage *this)
    {
      __int64 v2; // x8
      __int64 *v3; // x20
      __int64 v4; // x21
      __int64 v5; // x0
      int v6; // w1
      __int64 Table; // x21
      __int64 v8; // x22
      const #1018 *v9; // x25
      BadgeItem *v10; // x24
      __int64 *v11; // x20
      __int64 *v12; // x21
      float v13; // s9
      __int64 v14; // x2
      __int64 i; // x8
      __int64 *v16; // x8
      __int64 MovieClip; // x0
      __int64 TextFieldByName; // x0
      float v19; // s9
      float v20; // s8
      int v21; // w22
      unsigned __int64 v22; // x23
      __int64 v23; // x21
      DisplayObject *v24; // x20
      float v25; // s8
      float v26; // s14
      float v27; // s8
      float v28; // s8
      float v29; // s0
      __int64 v30; // x8
      __int64 result; // x0
      float v32; // s8
      __int64 v33; // x20
      __int64 v34; // x21
      __int64 v35; // x0
      BadgeItem *v36; // [xsp+88h] [xbp-88h] BYREF
    
      v3 = (__int64 *)((char *)this + 240);
      v2 = *((_QWORD *)this + 30);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 31) - v2) >> 3) >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *(_QWORD *)(v2 + 8 * v4);
          do
          {
            if ( v5 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
              v2 = *v3;
            }
            *(_QWORD *)(v2 + 8 * v4) = 0;
            v2 = *v3;
            v5 = *(_QWORD *)(*v3 + 8 * v4);
          }
          while ( v5 );
          ++v4;
        }
        while ( v4 < (int)((unsigned __int64)(*((_QWORD *)this + 31) - v2) >> 3) );
      }
      *((_QWORD *)this + 31) = v2;
      ScrollArea::removeAllContent(*((#1253 **)this + 29));
      ScrollArea::setForcedContentBounds(*((ScrollArea **)this + 29), 0);
      ScrollArea::enableHorizontalDrag(*((#1253 **)this + 29), 0);
      ScrollArea::enableVerticalDrag(*((#1253 **)this + 29), 1);
      *(_BYTE *)(*((_QWORD *)this + 29) + 496LL) = 1;
      Table = LogicDataTables::getTable((LogicDataTables *)0x10, v6);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) >= 1 )
      {
        v8 = 0;
        do
        {
          v9 = (const #1018 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v8);
          v10 = (BadgeItem *)operator new(272);
          BadgeItem::BadgeItem(v10, v9);
          v36 = v10;
          CustomButton::setButtonListener(v10, (char *)this + 96);
          std::vector<BadgeItem *>::push_back(v3, &v36);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (int)v8 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      }
      v11 = (__int64 *)*((_QWORD *)this + 30);
      v12 = (__int64 *)*((_QWORD *)this + 31);
      v13 = -10.0;
      if ( v11 == v12 )
      {
        v21 = 4;
        v16 = (__int64 *)*((_QWORD *)this + 30);
      }
      else
      {
        v14 = 0;
        for ( i = v12 - v11; i != 1; i >>= 1 )
          v14 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,long,bool (*)(BadgeItem const*,BadgeItem const*)>(
          *((_QWORD *)this + 30),
          *((_QWORD *)this + 31),
          v14,
          sortBadges);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>(
          v11,
          v12,
          sortBadges);
        v11 = (__int64 *)*((_QWORD *)this + 30);
        v16 = (__int64 *)*((_QWORD *)this + 31);
        if ( v16 == v11 )
        {
          v21 = 4;
        }
        else
        {
          MovieClip = GUIContainer::getMovieClip(this);
          TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "scroll_area");
          v19 = *(float *)(*((_QWORD *)this + 29) + 92LL);
          v20 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)TextFieldByName
                                                                                                    + 88LL))(TextFieldByName)));
          v21 = (int)(float)(v20
                           / (float)((*(float (__fastcall **)(_QWORD))(***((_QWORD ***)this + 30) + 88LL))(**((_QWORD **)this + 30))
                                   + 10.0));
          v13 = v19 + -10.0;
          v11 = (__int64 *)*((_QWORD *)this + 30);
          v16 = (__int64 *)*((_QWORD *)this + 31);
        }
      }
      v22 = v16 - v11;
      if ( (int)v22 >= 1 )
      {
        v23 = 0;
        do
        {
          v24 = (DisplayObject *)v11[v23];
          v25 = (float)((int)v23 % v21)
              * (float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v24 + 88LL))(v24) + 10.0);
          v26 = (float)((int)v23 / v21)
              * (float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v24 + 96LL))(v24) + 10.0);
          v27 = v25
              + (float)((float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v24 + 88LL))(v24) + -10.0) * 0.5);
          v28 = v27
              + (float)(v13
                      - (float)((float)v21
                              * (float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v24 + 88LL))(v24) + 10.0)));
          v29 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v24 + 96LL))(v24);
          DisplayObject::setPixelSnappedXY(v24, v28, v26 + (float)((float)(v29 * 0.5) + 10.0));
          ScrollArea::addContentDontUpdateBounds(*((#1253 **)this + 29), v24);
          ++v23;
          v11 = (__int64 *)*((_QWORD *)this + 30);
          v30 = *((_QWORD *)this + 31) - (_QWORD)v11;
        }
        while ( v23 < (int)((unsigned __int64)v30 >> 3) );
        v22 = v30 >> 3;
      }
      result = *v11;
      if ( *v11 )
      {
        LODWORD(v32) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)result + 96LL))(result));
        ScrollArea::updateBounds(*((ScrollArea **)this + 29));
        v33 = operator new(16);
        Rect::Rect((Rect *)v33);
        v34 = *((_QWORD *)this + 29);
        v35 = GUIContainer::getMovieClip(this);
        DisplayObject::getBounds(v34, v35, v33);
        if ( **((_QWORD **)this + 30) )
          *(float *)(v33 + 12) = (float)((float)((float)(v22 / v21) + 2.5) * v32) + *(float *)(v33 + 12);
        return ScrollArea::setForcedContentBounds(*((ScrollArea **)this + 29), (Rect *)v33);
      }
      return result;
    }

    // attributes: thunk
    void __fastcall BadgePopup::BadgePopup(BadgePopup *this)
    {
      __ZN10BadgePopupC2Ev(this);
    }

    void __fastcall BadgePopup::~BadgePopup(RequestSectorStateMessage *this)
    {
      __int64 v2; // x8
      unsigned __int64 v3; // x9
      __int64 i; // x20
      __int64 v5; // x0
      __int64 v6; // x0
      void *v7; // x0
    
      *(_QWORD *)this = off_10045EC98;
      *((_QWORD *)this + 12) = &off_10045EE70;
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
    void __fastcall BadgePopup::~BadgePopup(RequestSectorStateMessage *this)
    {
      __ZN10BadgePopupD2Ev(this);
    }

    void __fastcall BadgePopup::~BadgePopup(RequestSectorStateMessage *this)
    {
      BadgePopup::~BadgePopup(this);
      operator delete(this);
    }

    __int64 __fastcall BadgePopup::buttonClicked(__int64 a1, __int64 a2)
    {
      if ( *(_QWORD *)(a1 + 192) != a2 )
        (***(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 264))(*(_QWORD *)(a1 + 264), *(_QWORD *)(a2 + 264));
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
    }

    __int64 __fastcall BadgePopup::update(RequestSectorStateMessage *this, long double a2)
    {
      PopupBase::update(this, *(float *)&a2);
      return (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 29) + 272LL))(*((_QWORD *)this + 29), a2);
    }

    __int64 __fastcall BadgePopup::getPopupType(RequestSectorStateMessage *this)
    {
      return 40;
    }

}; // end class BadgePopup
