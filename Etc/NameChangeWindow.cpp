class NameChangeWindow
{
public:

    void __fastcall NameChangeWindow::NameChangeWindow(NameChangeWindow *this)
    {
      long double v2; // q0
      __int64 TextFieldByName; // x0
      long double v4; // q0
      #1271 *v5; // x20
      const char *v6; // x1
      const String *String; // x0
      long double v8; // q0
      MovieClip *v9; // x0
      String v10; // [xsp+0h] [xbp-40h] BYREF
      String v11; // [xsp+18h] [xbp-28h] BYREF
    
      String::String(&v11, "sc/ui.sc");
      String::String(&v10, "change_name_window");
      PopupBase::PopupBase((__int64)this, &v11, &v10);
      String::~String();
      String::~String();
      *((_QWORD *)this + 29) = 0;
      *((_DWORD *)this + 60) = 0;
      *(_QWORD *)this = off_1004727A0;
      *((_QWORD *)this + 12) = &off_100472980;
      *((_BYTE *)this + 288) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 31) = DropGUIContainer::addGameButton((__int64)this, "close_button", 1, v2);
      TextFieldByName = MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "Title");
      *((_QWORD *)this + 29) = TextFieldByName;
      v4 = DisplayObject::getY(TextFieldByName);
      *((_DWORD *)this + 60) = LODWORD(v4);
      v5 = (#1271 *)*((_QWORD *)this + 29);
      String = (const String *)StringTable::getString((#1308 *)"TID_CHANGE_NAME_TITLE", v6);
      TextField::setText(v5, String);
      *((_QWORD *)this + 24) = DropGUIContainer::addGameButton((__int64)this, "close_button", 1, v8);
      v9 = (MovieClip *)*((_QWORD *)this + 14);
      *((_QWORD *)this + 35) = v9;
      *((_BYTE *)v9 + 8) = 1;
      MovieClip::setChildVisible(v9, "settings_screen", 0);
      MovieClip::setChildVisible(*((MovieClip **)this + 14), "language", 0);
    }

    // attributes: thunk
    void __fastcall NameChangeWindow::NameChangeWindow(NameChangeWindow *this)
    {
      __ZN16NameChangeWindowC2Ev(this);
    }

    void __fastcall NameChangeWindow::~NameChangeWindow(TauntSelector *this, __int64 a2, const char *a3)
    {
      _QWORD *v4; // x9
      _BYTE *v5; // x10
      unsigned __int64 v6; // x11
      unsigned int v7; // w20
      _QWORD *v8; // x8
      __int64 v9; // x0
    
      *(_QWORD *)this = off_1004727A0;
      *((_QWORD *)this + 12) = &off_100472980;
      v4 = (_QWORD *)*((_QWORD *)this + 32);
      v5 = (_BYTE *)*((_QWORD *)this + 33);
      if ( v5 == (_BYTE *)v4 )
      {
        v8 = (_QWORD *)*((_QWORD *)this + 33);
      }
      else
      {
        v6 = 0;
        v7 = 1;
        v8 = (_QWORD *)*((_QWORD *)this + 32);
        do
        {
          v9 = v8[v6];
          if ( v9 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            v4 = (_QWORD *)*((_QWORD *)this + 32);
            v5 = (_BYTE *)*((_QWORD *)this + 33);
            v8 = v4;
          }
          v6 = v7++;
        }
        while ( v6 < (v5 - (_BYTE *)v8) >> 3 );
      }
      *((_QWORD *)this + 33) = v4;
      *((_QWORD *)this + 29) = 0;
      *((_DWORD *)this + 60) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_BYTE *)this + 288) = 0;
      *((_QWORD *)this + 35) = 0;
      if ( v8 )
        operator delete(v8);
      PopupBase::~PopupBase(this, a2, a3);
    }

    // attributes: thunk
    void __fastcall NameChangeWindow::~NameChangeWindow(TauntSelector *this, __int64 a2, const char *a3)
    {
      __ZN16NameChangeWindowD2Ev(this, a2, a3);
    }

    void __fastcall NameChangeWindow::~NameChangeWindow(TauntSelector *this, __int64 a2, const char *a3)
    {
      NameChangeWindow::~NameChangeWindow(this, a2, a3);
      operator delete(this);
    }

    MiniTimer *__fastcall NameChangeWindow::update(TauntSelector *this, long double a2)
    {
      MiniTimer *result; // x0
      __int64 v5; // x8
      __int64 v6; // x9
    
      result = PopupBase::update(this, a2);
      v5 = *((_QWORD *)this + 32);
      v6 = *((_QWORD *)this + 33);
      if ( v5 != v6 )
      {
        result = *(MiniTimer **)(((v6 - v5) & 0xFFFFFFFFFFFFFFF8LL) + v5 - 8);
        if ( result )
          return (MiniTimer *)(*(__int64 (__fastcall **)(MiniTimer *, long double))(*(_QWORD *)result + 368LL))(result, a2);
      }
      return result;
    }

    __int64 __fastcall NameChangeWindow::buttonClicked(_QWORD *a1)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x0
    
      v2 = a1[32];
      v3 = a1[33];
      if ( v2 != v3 )
      {
        v4 = *(_QWORD *)(((v3 - v2) & 0xFFFFFFFFFFFFFFF8LL) + v2 - 8);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 352LL))(v4);
      }
      return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 352LL))(a1);
    }

    __int64 __fastcall NameChangeWindow::isBackButtonVisible(TauntSelector *this)
    {
      return 0;
    }

    void __fastcall NameChangeWindow::backButtonPressed(TauntSelector *this)
    {
      ;
    }

    TauntSelector *__fastcall NameChangeWindow::pushScreen(TauntSelector *this, LogicExpLevelData *a2)
    {
      TauntSelector *v2; // x19
      _BYTE *v3; // x0
      __int64 v4; // x8
      __int64 v5; // x9
      LogicExpLevelData *v6; // [xsp+8h] [xbp-18h] BYREF
    
      v2 = this;
      v6 = a2;
      if ( a2 )
      {
        v3 = (_BYTE *)*((_QWORD *)this + 35);
        v3[8] = 1;
        v4 = *((_QWORD *)v2 + 32);
        v5 = *((_QWORD *)v2 + 33);
        if ( v4 != v5 )
          (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v3 + 176LL))(
            v3,
            *(_QWORD *)(((v5 - v4) & 0xFFFFFFFFFFFFFFF8LL) + v4 - 8));
        std::vector<NameChangeSubScreen *>::push_back((char *)v2 + 256, &v6);
        return (TauntSelector *)NameChangeWindow::setCurrentScreen(v2);
      }
      return this;
    }

    void __fastcall NameChangeWindow::setCurrentScreen(TauntSelector *this)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      DisplayObject *v4; // x20
      __int64 TextFieldByName; // x21
      long double v6; // q0
      DisplayObject *v7; // x0
      #1271 *v8; // x21
      #1308 *TitleTID; // x0
      const String *v10; // x1
      #1308 *String; // x0
      Rect v12; // [xsp+0h] [xbp-30h] BYREF
    
      v2 = *((_QWORD *)this + 32);
      v3 = *((_QWORD *)this + 33);
      if ( v2 != v3 )
      {
        v4 = *(DisplayObject **)(((v3 - v2) & 0xFFFFFFFFFFFFFFF8LL) + v2 - 8);
        TextFieldByName = MovieClip::getTextFieldByName(*((_QWORD *)this + 35), "item_area");
        Rect::Rect(&v12);
        DisplayObject::getBounds(TextFieldByName, *((_QWORD *)this + 35), &v12);
        *(__n128 *)&v6 = DisplayObject::setPixelSnappedXY(v4, *(float *)&v12.top, *(float *)&v12.bottom);
        (*(void (__fastcall **)(_QWORD, DisplayObject *, long double))(**((_QWORD **)this + 35) + 160LL))(
          *((_QWORD *)this + 35),
          v4,
          v6);
        v7 = (DisplayObject *)*((_QWORD *)this + 29);
        if ( v7 )
        {
          DisplayObject::setY(v7, *((float *)this + 60));
          v8 = (#1271 *)*((_QWORD *)this + 29);
          TitleTID = (#1308 *)NameChangeSubScreen::getTitleTID(v4);
          String = StringTable::getString(TitleTID, v10);
          TextField::setText(v8, (const String *)String);
        }
        *((_BYTE *)this + 288) = (*(__int64 (__fastcall **)(DisplayObject *))(*(_QWORD *)v4 + 344LL))(v4);
        Rect::~Rect(&v12);
      }
    }

    __int64 __fastcall NameChangeWindow::isModal(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 288);
    }

    __int64 NameChangeWindow::keyDown()
    {
      return 0;
    }

    __int64 __fastcall NameChangeWindow::getNameChangeHandlerScreen(__int64 a1)
    {
      __int64 v1; // x8
      __int64 v2; // x9
      __int64 v3; // x19
    
      v1 = *(_QWORD *)(a1 + 256);
      v2 = *(_QWORD *)(a1 + 264);
      if ( v1 == v2 )
        return 0;
      v3 = *(_QWORD *)(((v2 - v1) & 0xFFFFFFFFFFFFFFF8LL) + v1 - 8);
      if ( !v3
        || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 328LL))(v3)
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 328LL))(v3) != 1 )
      {
        return 0;
      }
      else
      {
        return v3 + 248;
      }
    }

    __int64 NameChangeWindow::getPopupType()
    {
      return 51;
    }

}; // end class NameChangeWindow
