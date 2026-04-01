class DropGUIContainer
{
public:

    void DropGUIContainer::inputFieldOkPressed()
    {
      ;
    }

    void DropGUIContainer::inputEnded()
    {
      ;
    }

    void __fastcall DropGUIContainer::DropGUIContainer(DropGUIContainer *this)
    {
      #1254 *v1; // x0
    
      v1 = GUIContainer::GUIContainer(this);
      *(_QWORD *)v1 = off_1004710F0;
      *((_QWORD *)v1 + 12) = &off_100471248;
      *((_BYTE *)v1 + 184) = 0;
      *((_BYTE *)v1 + 185) = 0;
      *((_QWORD *)v1 + 22) = 0;
      *((_DWORD *)v1 + 42) = 1065353216;
    }

    void __fastcall DropGUIContainer::DropGUIContainer(DropGUIContainer *this, const String *a2, const String *a3)
    {
      #1375 *MovieClip; // x0
      #1257 *v5; // x1
    
      GUIContainer::GUIContainer(this, a2, a3);
      *(_QWORD *)this = off_1004710F0;
      *((_QWORD *)this + 12) = &off_100471248;
      *((_BYTE *)this + 184) = 0;
      *((_BYTE *)this + 185) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_DWORD *)this + 42) = 1065353216;
      MovieClip = (#1375 *)GUIContainer::getMovieClip(this);
      DropGUIContainer::putLocalizedTIDsToTextFields(MovieClip, v5);
    }

    void __fastcall DropGUIContainer::putLocalizedTIDsToTextFields(#1375 *this, #1257 *a2)
    {
      int TimelineChildCount; // w20
      __int64 v4; // x21
      __int64 TimelineChild; // x0
      __int64 v6; // x23
      #1257 *v7; // x1
      const char *TimelineChildInstanceName; // x8
      const String *v9; // x1
      #1308 *String; // x0
      String v11; // [xsp+8h] [xbp-48h] BYREF
    
      TimelineChildCount = MovieClip::getTimelineChildCount(this, a2);
      if ( TimelineChildCount >= 1 )
      {
        v4 = 0;
        do
        {
          TimelineChild = MovieClip::getTimelineChild(this, v4);
          v6 = TimelineChild;
          if ( TimelineChild )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)TimelineChild + 120LL))(TimelineChild) )
            {
              DropGUIContainer::putLocalizedTIDsToTextFields((#1375 *)v6, v7);
            }
            else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 128LL))(v6) )
            {
              *(_BYTE *)(v6 + 78) = 1;
              TimelineChildInstanceName = (const char *)MovieClip::getTimelineChildInstanceName(this, v4);
              if ( TimelineChildInstanceName )
              {
                String::String(&v11, TimelineChildInstanceName);
                if ( (unsigned int)String::startsWith(&v11, &TID_PREFIX) )
                {
                  String = StringTable::getString((#1308 *)&v11, v9);
                  TextField::setText((#1271 *)v6, (const String *)String);
                }
                String::~String();
              }
            }
          }
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (int)v4 < TimelineChildCount );
      }
    }

    // attributes: thunk
    void __fastcall DropGUIContainer::DropGUIContainer(DropGUIContainer *this, const String *a2, const String *a3)
    {
      __ZN16DropGUIContainerC2ERK6StringS2_(this, a2, a3);
    }

    void __fastcall DropGUIContainer::~DropGUIContainer(#1375 *this)
    {
      __int64 v1; // x9
    
      *(_QWORD *)this = off_1004710F0;
      v1 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 12) = &off_100471248;
      *((_QWORD *)this + 16) = v1;
      *((_BYTE *)this + 184) = 0;
      *((_BYTE *)this + 185) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_DWORD *)this + 42) = 1065353216;
      GUIContainer::~GUIContainer(this);
    }

    void __fastcall DropGUIContainer::~DropGUIContainer(#1375 *this)
    {
      __int64 v1; // x9
    
      *(_QWORD *)this = off_1004710F0;
      v1 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 12) = &off_100471248;
      *((_QWORD *)this + 16) = v1;
      *((_BYTE *)this + 184) = 0;
      *((_BYTE *)this + 185) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_DWORD *)this + 42) = 1065353216;
      GUIContainer::~GUIContainer(this);
    }

    void __fastcall DropGUIContainer::~DropGUIContainer(#1375 *this)
    {
      *(_QWORD *)this = off_1004710F0;
      *((_QWORD *)this + 12) = &off_100471248;
      *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
      *((_BYTE *)this + 184) = 0;
      *((_BYTE *)this + 185) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_DWORD *)this + 42) = 1065353216;
      GUIContainer::~GUIContainer(this);
      operator delete(this);
    }

    GameButton *__fastcall DropGUIContainer::createButton(#1375 *this, const char *a2)
    {
      GameButton *v3; // x19
    
      if ( *((_BYTE *)this + 184) )
      {
        v3 = (GameButton *)operator new(264);
        GameButton::GameButton(v3);
      }
      else
      {
        if ( !*((_BYTE *)this + 185) )
          Debugger::error((__siginfo *)"DropGUIContainer: creating GameButton the wrong way", a2);
        v3 = (GameButton *)operator new(272);
        GameSelectableButton::GameSelectableButton(v3, *((#1255 **)this + 22));
      }
      return v3;
    }

    __int64 __fastcall DropGUIContainer::addGameButton(__int64 a1, const char *a2, char a3, long double a4)
    {
      __int64 v6; // x0
      const char *v7; // x1
      __int64 v8; // x20
      const String *v9; // x1
      char v11[24]; // [xsp+8h] [xbp-38h] BYREF
    
      if ( (a3 & 1) == 0 && !MovieClip::getChildByName(*(_QWORD *)(a1 + 112), a2, a4) )
        return 0;
      *(_BYTE *)(a1 + 184) = 1;
      v6 = GUIContainer::addButton((#1254 *)a1, a2);
      v8 = v6;
      if ( !v6 )
      {
        String::format((String *)"Unable to create GameButton '%s'", v7, a2);
        Debugger::error((Debugger *)v11, v9);
      }
      GameButton::resetScaleValues(v6);
      *(_BYTE *)(a1 + 184) = 0;
      return v8;
    }

    __int64 __fastcall DropGUIContainer::addGameSelectableButton(
            __int64 a1,
            const char *a2,
            char a3,
            __int64 a4,
            long double a5)
    {
      __int64 v8; // x0
      const char *v9; // x1
      __int64 v10; // x20
      const String *v11; // x1
      char v13[24]; // [xsp+8h] [xbp-38h] BYREF
    
      if ( (a3 & 1) == 0 && !MovieClip::getChildByName(*(_QWORD *)(a1 + 112), a2, a5) )
        return 0;
      *(_BYTE *)(a1 + 185) = 1;
      *(_QWORD *)(a1 + 176) = a4;
      v8 = GUIContainer::addButton((#1254 *)a1, a2);
      v10 = v8;
      if ( !v8 )
      {
        String::format((String *)"Unable to create GameSelectableButton '%s'", v9, a2);
        Debugger::error((Debugger *)v13, v11);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 368LL))(v8);
      *(_QWORD *)(a1 + 176) = 0;
      *(_BYTE *)(a1 + 185) = 0;
      return v10;
    }

    void __fastcall DropGUIContainer::hideAllTextFields(__int64 a1, __int64 a2)
    {
      int TimelineChildCount; // w20
      __int64 v4; // x21
      __int64 TimelineChild; // x0
      DropGUIContainer *v6; // x23
      MovieClip *v7; // x1
      String v8; // [xsp+8h] [xbp-48h] BYREF
    
      TimelineChildCount = MovieClip::getTimelineChildCount(a1, a2);
      if ( TimelineChildCount >= 1 )
      {
        v4 = 0;
        do
        {
          TimelineChild = MovieClip::getTimelineChild(a1, v4);
          v6 = (DropGUIContainer *)TimelineChild;
          if ( TimelineChild )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)TimelineChild + 120LL))(TimelineChild) )
            {
              DropGUIContainer::hideAllTextFields(v6, v7);
            }
            else if ( (*(unsigned int (__fastcall **)(DropGUIContainer *))(*(_QWORD *)v6 + 128LL))(v6) )
            {
              String::String(&v8, "");
              TextField::setText(v6, &v8);
              String::~String();
            }
          }
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (int)v4 < TimelineChildCount );
      }
    }

    void __fastcall DropGUIContainer::setMovieClip(GUIContainer *a1, MovieClip *a2)
    {
      #1257 *v3; // x1
    
      GUIContainer::setMovieClip(a1, a2);
      DropGUIContainer::putLocalizedTIDsToTextFields(a2, v3);
    }

    void __fastcall DropGUIContainer::doFontScaling(#1356 *a1, float a2)
    {
      long double v2; // q9
      int NumChildren; // w22
      int v6; // w25
      __int64 v7; // x1
      int TimelineChildCount; // w20
      #1356 *v9; // x21
      int v10; // w26
      int v11; // w8
      __int64 v12; // x23
      __int64 v13; // x28
      __int64 TimelineChild; // x24
      int FontSize; // w0
      int v16; // w1
      Sprite *v17; // x1
      __int64 v18; // x19
      __int64 v19; // x0
      Rect v20; // [xsp+0h] [xbp-80h] BYREF
      float v21; // [xsp+8h] [xbp-78h]
      float v22; // [xsp+Ch] [xbp-74h]
    
      if ( a2 == 1.0 )
        return;
      NumChildren = Sprite::getNumChildren(a1);
      v6 = *((_DWORD *)a1 + 15);
      if ( (*(unsigned int (__fastcall **)(#1356 *))(*(_QWORD *)a1 + 120LL))(a1) )
      {
        TimelineChildCount = MovieClip::getTimelineChildCount(a1, v7);
        v9 = a1;
      }
      else
      {
        TimelineChildCount = 0;
        v9 = 0;
      }
      v10 = 0;
      while ( 1 )
      {
        if ( v10 == 1 )
          v11 = TimelineChildCount;
        else
          v11 = NumChildren;
        if ( v11 >= 1 )
        {
          v12 = 0;
          v13 = v11;
          while ( !v10 )
          {
            TimelineChild = *(_QWORD *)(*((_QWORD *)a1 + 9) + 8 * v12);
            if ( v9 )
              goto LABEL_15;
    LABEL_16:
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)TimelineChild + 128LL))(TimelineChild) )
            {
              if ( (*(float (__fastcall **)(__int64))(*(_QWORD *)TimelineChild + 64LL))(TimelineChild) != 1.0
                || (*(float (__fastcall **)(__int64))(*(_QWORD *)TimelineChild + 72LL))(TimelineChild) != 1.0 )
              {
                goto LABEL_24;
              }
              FontSize = TextField::getFontSize((#1271 *)TimelineChild);
              v16 = (int)(float)((float)FontSize * a2);
              if ( v16 > FontSize )
              {
                TextField::setFontSize((#1271 *)TimelineChild, v16);
                *(float *)&v2 = 1.0 / a2;
                (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)TimelineChild + 40LL))(TimelineChild, v2);
                Rect::Rect(&v20);
                TextField::getTextFieldBounds((#1271 *)TimelineChild, (#1261 *)&v20);
                TextField::setBounds(
                  (TextField *)TimelineChild,
                  *(float *)&v20.top * a2,
                  *(float *)&v20.bottom * a2,
                  v21 * a2,
                  v22 * a2);
                Rect::~Rect(&v20);
              }
            }
            else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)TimelineChild + 136LL))(TimelineChild) )
            {
              DropGUIContainer::doFontScaling((DropGUIContainer *)TimelineChild, v17, a2);
            }
            *(_DWORD *)(TimelineChild + 60) = -9999;
    LABEL_24:
            if ( ++v12 >= v13 )
              goto LABEL_25;
          }
          TimelineChild = MovieClip::getTimelineChild(v9, v12);
          if ( !TimelineChild )
            goto LABEL_24;
    LABEL_15:
          if ( *(_DWORD *)(TimelineChild + 60) == -9999 )
            goto LABEL_24;
          goto LABEL_16;
        }
    LABEL_25:
        if ( !v9 )
          break;
        if ( ++v10 > 1 )
        {
          if ( TimelineChildCount >= 1 )
          {
            v18 = 0;
            do
            {
              v19 = MovieClip::getTimelineChild(v9, v18);
              if ( v19 )
              {
                if ( *(_DWORD *)(v19 + 60) == -9999 )
                  *(_DWORD *)(v19 + 60) = 0;
              }
              v18 = (unsigned int)(v18 + 1);
            }
            while ( TimelineChildCount != (_DWORD)v18 );
          }
          return;
        }
      }
      if ( v6 == -2 )
      {
        GameButton::resetScaleValues((__int64)a1);
      }
      else if ( v6 == -3 )
      {
        GameSelectableButton::resetScaleValues(a1);
      }
    }

    void __fastcall DropGUIContainer::setGUIScale(#1375 *this, long double a2)
    {
      float v2; // s8
    
      v2 = *(float *)&a2;
      if ( *((float *)this + 42) != *(float *)&a2 )
      {
        *((_DWORD *)this + 42) = LODWORD(a2);
        (*(void (__fastcall **)(#1375 *, long double))(*(_QWORD *)this + 40LL))(this, a2);
        DropGUIContainer::doFontScaling(this, v2);
      }
    }

    GameButton *__fastcall DropGUIContainer::addGameButton(#1375 *this, #1257 *a2, const String *a3)
    {
      GameButton *v6; // x20
      __int64 MovieClipByName; // x22
      const char *v8; // x2
    
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", (const char *)a3);
      v6 = (GameButton *)operator new(264);
      GameButton::GameButton(v6);
      MovieClipByName = MovieClip::getMovieClipByName(a2, a3);
      Debugger::doAssert((Debugger *)(MovieClipByName != 0), (bool)"", v8);
      MovieClip::changeTimelineChild(a2, (#1249 *)MovieClipByName, v6);
      *(_DWORD *)(MovieClipByName + 16) = 1065353216;
      *(_DWORD *)(MovieClipByName + 28) = 1065353216;
      *(_DWORD *)(MovieClipByName + 20) = 0;
      *(_DWORD *)(MovieClipByName + 24) = 0;
      *(_DWORD *)(MovieClipByName + 32) = 0;
      *(_DWORD *)(MovieClipByName + 36) = 0;
      (*(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v6 + 288LL))(v6, MovieClipByName, 1);
      GUIContainer::addButtonManually(this, v6);
      return v6;
    }

}; // end class DropGUIContainer
