class NoAlliance
{
public:

    __int64 __fastcall NoAlliance::NoAlliance(__int64 a1)
    {
      DisplayObject *MovieClip; // x0
      __int64 v3; // x0
      #1271 *TextFieldByName; // x20
      const char *v5; // x2
      #1253 *v6; // x21
      long double Width; // q0
      float v8; // s8
      long double Height; // q0
      __int64 v10; // x0
      #1257 *v11; // x0
      DisplayObject *v12; // x21
      float v13; // s8
      float v14; // s9
      long double v15; // q0
      long double v16; // q0
      Rect v18[2]; // [xsp+0h] [xbp-70h] BYREF
      String v19; // [xsp+10h] [xbp-60h] BYREF
      String v20; // [xsp+28h] [xbp-48h] BYREF
    
      String::String(&v20, "sc/ui.sc");
      String::String(&v19, "no_alliance");
      DropGUIContainer::DropGUIContainer((#1375 *)a1, &v20, &v19);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_1004689F8;
      *(_QWORD *)(a1 + 96) = &off_100468B70;
      *(_QWORD *)(a1 + 192) = off_100468B90;
      *(_QWORD *)(a1 + 200) = 0;
      *(_BYTE *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      MovieClip = (DisplayObject *)GUIContainer::getMovieClip((#1254 *)a1);
      DisplayObject::setY(MovieClip, 100.0);
      v3 = GUIContainer::getMovieClip((#1254 *)a1);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v3, "area");
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v5);
      Rect::Rect(v18);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v18);
      v6 = (#1253 *)operator new(504);
      Width = Rect::getWidth(v18);
      v8 = *(float *)&Width;
      Height = Rect::getHeight(v18);
      ScrollArea::ScrollArea(v6, v8, *(float *)&Height, 100);
      *(_QWORD *)(a1 + 216) = v6;
      ScrollArea::enablePinching(v6, 0);
      ScrollArea::enableHorizontalDrag(*(#1253 **)(a1 + 216), 0);
      ScrollArea::enableVerticalDrag(*(#1253 **)(a1 + 216), 1);
      v10 = *(_QWORD *)(a1 + 216);
      *(_BYTE *)(v10 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v10, 5);
      v11 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClip::changeTimelineChild(v11, TextFieldByName, *(#1249 **)(a1 + 216));
      v12 = *(DisplayObject **)(a1 + 216);
      v13 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v12)));
      v14 = *(float *)&v18[0].top;
      v15 = DisplayObject::getY(*(_QWORD *)(a1 + 216));
      *(__n128 *)&v16 = DisplayObject::setPixelSnappedXY(v12, v13 + v14, *(float *)&v15 + *(float *)&v18[0].bottom);
      if ( TextFieldByName )
        (*(void (__fastcall **)(#1271 *, long double))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName, v16);
      Rect::~Rect(v18);
      return a1;
    }

    // attributes: thunk
    void __fastcall NoAlliance::NoAlliance(NoAlliance *this)
    {
      __ZN10NoAllianceC2Ev((__int64)this);
    }

    void __fastcall NoAlliance::~NoAlliance(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      void *v4; // x0
    
      *(_QWORD *)a1 = off_1004689F8;
      *(_QWORD *)(a1 + 96) = &off_100468B70;
      *(_QWORD *)(a1 + 192) = off_100468B90;
      v2 = *(_QWORD *)(a1 + 248);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 248) = 0;
      NoAlliance::destroyItems((NoAlliance *)a1);
      v3 = *(_QWORD *)(a1 + 216);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_BYTE *)(a1 + 208) = 0;
      v4 = *(void **)(a1 + 224);
      if ( v4 )
        operator delete(v4);
      DropGUIContainer::~DropGUIContainer((#1375 *)a1);
    }

    __int64 __fastcall NoAlliance::destroyItems(__int64 a1)
    {
      __int64 v2; // x8
      __int64 v3; // x20
      __int64 v4; // x9
      unsigned __int64 v5; // x10
      unsigned int v6; // w21
      __int64 v7; // x0
    
      v3 = a1 + 224;
      v2 = *(_QWORD *)(a1 + 224);
      v4 = *(_QWORD *)(a1 + 232);
      if ( v4 != v2 )
      {
        v5 = 0;
        v6 = 1;
        do
        {
          v7 = *(_QWORD *)(v2 + 8 * v5);
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            v2 = *(_QWORD *)(a1 + 224);
            v4 = *(_QWORD *)(a1 + 232);
          }
          v5 = v6++;
        }
        while ( v5 < (v4 - v2) >> 3 );
      }
      std::vector<AllianceItem *>::resize(v3, 0);
      return ScrollArea::removeAllContent(*(#1253 **)(a1 + 216));
    }

    // attributes: thunk
    void __fastcall NoAlliance::~NoAlliance(__int64 a1)
    {
      __ZN10NoAllianceD2Ev(a1);
    }

    void __fastcall NoAlliance::~NoAlliance(void *a1)
    {
      NoAlliance::~NoAlliance((__int64)a1);
      operator delete(a1);
    }

    void NoAlliance::buttonClicked()
    {
      ;
    }

    __int64 __fastcall NoAlliance::update(tween::Elastic *this, float a2)
    {
      return (*(__int64 (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 27) + 272LL))(*((_QWORD *)this + 27), a2);
    }

    void __fastcall NoAlliance::setContent(__int64 a1, int *a2)
    {
      __int64 v4; // x0
      const String *v5; // x2
      DisplayObject *MovieClip; // x21
      float v7; // s8
      float v8; // s0
      int v9; // w23
      __int64 v10; // x24
      DeviceLinkCodeReceivedScreen *v11; // x22
      int v12; // w23
      float v13; // s8
      float v14; // s0
      long double v15; // q0
      __int64 v16; // x21
      __int64 v17; // x22
      __int64 v18; // x0
      long double v19; // q0
      _QWORD *v20; // x8
      DeviceLinkCodeReceivedScreen *v21; // [xsp+8h] [xbp-78h] BYREF
      String v22; // [xsp+10h] [xbp-70h] BYREF
      String v23; // [xsp+28h] [xbp-58h] BYREF
    
      NoAlliance::destroyItems(a1);
      *(_BYTE *)(a1 + 208) = 1;
      v4 = *(_QWORD *)(a1 + 248);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_QWORD *)(a1 + 248) = 0;
      String::String(&v23, "sc/ui.sc");
      String::String(&v22, "guild_suggestion_header");
      MovieClip = StringTable::getMovieClip((#1308 *)&v23, &v22, v5);
      String::~String();
      String::~String();
      v7 = *(float *)(*(_QWORD *)(a1 + 216) + 92LL) * 0.5;
      v8 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)MovieClip + 96LL))(MovieClip);
      DisplayObject::setPixelSnappedXY(MovieClip, v7, v8 * 0.5);
      ScrollArea::addContent(*(#1253 **)(a1 + 216), MovieClip);
      v9 = (int)(*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)MovieClip + 96LL))(MovieClip);
      *(_QWORD *)(a1 + 248) = MovieClip;
      if ( a2[3] >= 1 )
      {
        v10 = 0;
        do
        {
          v11 = (DeviceLinkCodeReceivedScreen *)operator new(280);
          AllianceItem::AllianceItem(v11, *(_QWORD *)(*(_QWORD *)a2 + 8 * v10));
          v21 = v11;
          v12 = v9
              + (int)(float)((*(float (__fastcall **)(DeviceLinkCodeReceivedScreen *))(*(_QWORD *)v11 + 96LL))(v11) * 0.5)
              + 1;
          v13 = *(float *)(*(_QWORD *)(a1 + 216) + 92LL);
          v14 = (*(float (__fastcall **)(DeviceLinkCodeReceivedScreen *))(*(_QWORD *)v11 + 88LL))(v11);
          *(__n128 *)&v15 = DisplayObject::setPixelSnappedXY(v11, (float)(v13 - v14) * 0.5, (float)v12);
          v9 = v12
             + (int)(float)((*(float (__fastcall **)(DeviceLinkCodeReceivedScreen *, long double))(*(_QWORD *)v11 + 96LL))(
                              v11,
                              v15)
                          * 0.5)
             + 1;
          std::vector<AllianceItem *>::push_back(a1 + 224, &v21);
          ScrollArea::addContent(*(#1253 **)(a1 + 216), v11);
          ++v10;
        }
        while ( v10 < a2[3] );
      }
      ScrollArea::updateBounds(*(ScrollArea **)(a1 + 216));
      v16 = operator new(16);
      Rect::Rect((Rect *)v16);
      v17 = *(_QWORD *)(a1 + 216);
      v18 = GUIContainer::getMovieClip((#1254 *)a1);
      *(__n128 *)&v19 = DisplayObject::getBounds(v17, v18, v16);
      if ( a2[3] >= 1 )
      {
        v20 = *(_QWORD **)(a1 + 224);
        if ( *(_QWORD **)(a1 + 232) != v20 )
        {
          if ( *v20 )
            *(float *)(v16 + 12) = *(float *)(v16 + 12)
                                 + (float)((float)v9
                                         + (float)((*(float (__fastcall **)(_QWORD, long double))(*(_QWORD *)*v20 + 96LL))(
                                                     *v20,
                                                     v19)
                                                 * 4.0));
        }
      }
      ScrollArea::setForcedContentBounds(*(ScrollArea **)(a1 + 216), (Rect *)v16);
      if ( *(_QWORD *)a2 )
        operator delete[](*(_QWORD *)a2);
      operator delete(a2);
    }

    __int64 __fastcall NoAlliance::isPanning(#1253 **this)
    {
      return ScrollArea::isPanning(*(this + 27));
    }

    void __fastcall NoAlliance::closeInput(tween::Elastic *this)
    {
      ;
    }

    void __fastcall NoAlliance::getRootNode(tween::Elastic *this)
    {
      ;
    }

}; // end class NoAlliance
