class DeviceLinkWindow
{
public:

    void __fastcall DeviceLinkWindow::DeviceLinkWindow(DeviceLinkWindow *this, char a2)
    {
      __int64 TextFieldByName; // x0
      long double v5; // q0
      #1271 *v6; // x21
      const char *v7; // x1
      const String *String; // x0
      __int64 MovieClipByName; // x0
      String v10; // [xsp+0h] [xbp-50h] BYREF
      String v11; // [xsp+18h] [xbp-38h] BYREF
    
      String::String(&v11, "sc/ui.sc");
      String::String(&v10, "link_window");
      PopupBase::PopupBase(this, &v11, &v10);
      String::~String();
      String::~String();
      *((_QWORD *)this + 29) = 0;
      *((_DWORD *)this + 60) = 0;
      *((_WORD *)this + 144) = 0;
      *(_QWORD *)this = off_10046B7C8;
      *((_QWORD *)this + 12) = &off_10046B9A8;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 31) = 0;
      TextFieldByName = MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "title");
      *((_QWORD *)this + 29) = TextFieldByName;
      v5 = DisplayObject::getY(TextFieldByName);
      *((_DWORD *)this + 60) = LODWORD(v5);
      v6 = (#1271 *)*((_QWORD *)this + 29);
      String = (const String *)StringTable::getString((#1308 *)"TID_SETTINGS_SCREEN_TITLE", v7);
      TextField::setText(v6, String);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 14), "screens");
      *((_QWORD *)this + 35) = MovieClipByName;
      *(_BYTE *)(MovieClipByName + 8) = 1;
      *((_QWORD *)this + 31) = DropGUIContainer::addGameButton(this, "back_button", 1);
      *((_QWORD *)this + 24) = DropGUIContainer::addGameButton(this, "close_button", 1);
      *((_BYTE *)this + 289) = a2;
    }

    // attributes: thunk
    void __fastcall DeviceLinkWindow::DeviceLinkWindow(DeviceLinkWindow *this, char a2)
    {
      __ZN16DeviceLinkWindowC2Eb(this, a2);
    }

    void __fastcall DeviceLinkWindow::~DeviceLinkWindow(SectorManager *this)
    {
      _QWORD *v2; // x9
      _BYTE *v3; // x10
      unsigned __int64 v4; // x11
      unsigned int v5; // w20
      _QWORD *v6; // x8
      __int64 v7; // x0
    
      *(_QWORD *)this = off_10046B7C8;
      *((_QWORD *)this + 12) = &off_10046B9A8;
      v2 = (_QWORD *)*((_QWORD *)this + 32);
      v3 = (_BYTE *)*((_QWORD *)this + 33);
      if ( v3 == (_BYTE *)v2 )
      {
        v6 = (_QWORD *)*((_QWORD *)this + 33);
      }
      else
      {
        v4 = 0;
        v5 = 1;
        v6 = (_QWORD *)*((_QWORD *)this + 32);
        do
        {
          v7 = v6[v4];
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            v2 = (_QWORD *)*((_QWORD *)this + 32);
            v3 = (_BYTE *)*((_QWORD *)this + 33);
            v6 = v2;
          }
          v4 = v5++;
        }
        while ( v4 < (v3 - (_BYTE *)v6) >> 3 );
      }
      *((_QWORD *)this + 33) = v2;
      *((_QWORD *)this + 29) = 0;
      *((_DWORD *)this + 60) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_BYTE *)this + 288) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_BYTE *)this + 289) = 0;
      if ( v6 )
        operator delete(v6);
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall DeviceLinkWindow::~DeviceLinkWindow(SectorManager *this)
    {
      __ZN16DeviceLinkWindowD2Ev(this);
    }

    void __fastcall DeviceLinkWindow::~DeviceLinkWindow(SectorManager *this)
    {
      DeviceLinkWindow::~DeviceLinkWindow(this);
      operator delete(this);
    }

    __int64 __fastcall DeviceLinkWindow::update(SectorManager *this, long double a2)
    {
      __int64 result; // x0
      __int64 v5; // x8
      __int64 v6; // x9
    
      result = PopupBase::update(this, *(float *)&a2);
      v5 = *((_QWORD *)this + 32);
      v6 = *((_QWORD *)this + 33);
      if ( v5 != v6 )
      {
        result = *(_QWORD *)(((v6 - v5) & 0xFFFFFFFFFFFFFFF8LL) + v5 - 8);
        if ( result )
          return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 368LL))(result, a2);
      }
      return result;
    }

    __int64 __fastcall DeviceLinkWindow::getCurrentSubScreen(SectorManager *this)
    {
      __int64 v1; // x8
      __int64 v2; // x9
    
      v1 = *((_QWORD *)this + 32);
      v2 = *((_QWORD *)this + 33);
      if ( v1 == v2 )
        return 0;
      else
        return *(_QWORD *)(((v2 - v1) & 0xFFFFFFFFFFFFFFF8LL) + v1 - 8);
    }

    _QWORD *__fastcall DeviceLinkWindow::buttonClicked(_QWORD *result, __int64 a2)
    {
      _QWORD *v2; // x19
      __int64 v3; // x8
      __int64 v4; // x9
      __int64 v5; // x0
      __int64 (__fastcall *v6)(_QWORD *); // x1
    
      v2 = result;
      if ( result[24] == a2 )
      {
        v3 = result[32];
        v4 = result[33];
        if ( v3 != v4 )
        {
          v5 = *(_QWORD *)(((v4 - v3) & 0xFFFFFFFFFFFFFFF8LL) + v3 - 8);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 352LL))(v5);
        }
        v6 = *(__int64 (__fastcall **)(_QWORD *))(*v2 + 352LL);
        return (_QWORD *)v6(v2);
      }
      if ( result[31] == a2 )
      {
        v6 = *(__int64 (__fastcall **)(_QWORD *))(*result + 408LL);
        return (_QWORD *)v6(v2);
      }
      return result;
    }

    __int64 __fastcall DeviceLinkWindow::isBackButtonVisible(SectorManager *this)
    {
      return *(unsigned __int8 *)(*((_QWORD *)this + 31) + 8LL);
    }

    SectorManager *__fastcall DeviceLinkWindow::backButtonPressed(SectorManager *this)
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 35) + 8LL) )
        return (SectorManager *)DeviceLinkWindow::popScreen(this);
      return this;
    }

    __int64 __fastcall DeviceLinkWindow::popScreen(SectorManager *this)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      unsigned __int64 v4; // x10
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 Instance; // x19
      SettingsPopup *v9; // x20
    
      v3 = *((_QWORD *)this + 32);
      v2 = *((_QWORD *)this + 33);
      v4 = (v2 - v3) >> 3;
      if ( v4 < 2 )
      {
        Instance = GUI::getInstance(this);
        v9 = (SettingsPopup *)operator new(328);
        SettingsPopup::SettingsPopup(v9);
        return GUI::showPopup(Instance, v9, 1, 0, 0);
      }
      else
      {
        v5 = *(_QWORD *)(v3 + 8 * v4 - 8);
        *((_QWORD *)this + 33) = v2 - 8;
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        DeviceLinkWindow::setCurrentScreen(this);
        v6 = *(_QWORD *)(((*((_QWORD *)this + 33) - *((_QWORD *)this + 32)) & 0xFFFFFFFFFFFFFFF8LL)
                       + *((_QWORD *)this + 32)
                       - 8);
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 336LL))(v6);
      }
    }

    SectorManager *__fastcall DeviceLinkWindow::pushScreen(SectorManager *this, UnlockAccountOkMessage *a2)
    {
      SectorManager *v2; // x19
      _BYTE *v3; // x0
      __int64 v4; // x8
      __int64 v5; // x9
      UnlockAccountOkMessage *v6; // [xsp+8h] [xbp-18h] BYREF
    
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
        std::vector<DeviceLinkSubScreen *>::push_back((char *)v2 + 256, &v6);
        return (SectorManager *)DeviceLinkWindow::setCurrentScreen(v2);
      }
      return this;
    }

    _QWORD *__fastcall DeviceLinkWindow::setCurrentScreen(_QWORD *this)
    {
      __int64 v1; // x19
      __int64 v2; // x8
      __int64 v3; // x9
      DisplayObject *v4; // x20
      __int64 TextFieldByName; // x21
      float v6; // s8
      long double v7; // q0
      long double v8; // q0
      DisplayObject *v9; // x0
      #1271 *v10; // x21
      #1308 *TitleTID; // x0
      const String *v12; // x1
      #1308 *String; // x0
    
      v1 = (__int64)this;
      v2 = *(this + 32);
      v3 = *(this + 33);
      if ( v2 != v3 )
      {
        v4 = *(DisplayObject **)(((v3 - v2) & 0xFFFFFFFFFFFFFFF8LL) + v2 - 8);
        TextFieldByName = MovieClip::getTextFieldByName(*(this + 35), "item_area");
        LODWORD(v6) = COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName));
        v7 = DisplayObject::getY(TextFieldByName);
        *(__n128 *)&v8 = DisplayObject::setPixelSnappedXY(v4, v6, *(float *)&v7);
        (*(void (__fastcall **)(_QWORD, DisplayObject *, long double))(**(_QWORD **)(v1 + 280) + 160LL))(
          *(_QWORD *)(v1 + 280),
          v4,
          v8);
        if ( (unsigned __int64)((__int64)(*(_QWORD *)(v1 + 264) - *(_QWORD *)(v1 + 256)) >> 3) < 2 )
          *(_BYTE *)(*(_QWORD *)(v1 + 248) + 8LL) = 0;
        else
          *(_BYTE *)(*(_QWORD *)(v1 + 248) + 8LL) = DeviceLinkSubScreen::useBack(v4);
        v9 = *(DisplayObject **)(v1 + 232);
        if ( v9 )
        {
          DisplayObject::setY(v9, *(float *)(v1 + 240));
          v10 = *(#1271 **)(v1 + 232);
          TitleTID = (#1308 *)DeviceLinkSubScreen::getTitleTID(v4);
          String = StringTable::getString(TitleTID, v12);
          TextField::setText(v10, (const String *)String);
        }
        this = (_QWORD *)(*(__int64 (__fastcall **)(DisplayObject *))(*(_QWORD *)v4 + 344LL))(v4);
        *(_BYTE *)(v1 + 288) = (_BYTE)this;
      }
      return this;
    }

    __int64 __fastcall DeviceLinkWindow::isModal(SectorManager *this)
    {
      return *((unsigned __int8 *)this + 288);
    }

    __int64 __fastcall DeviceLinkWindow::keyDown(SectorManager *this)
    {
      return 0;
    }

    __int64 __fastcall DeviceLinkWindow::getPopupType(SectorManager *this)
    {
      return 50;
    }

}; // end class DeviceLinkWindow
