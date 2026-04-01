class DeviceLinkSuccesfullNewScreen
{
public:

    __int64 __fastcall DeviceLinkSuccesfullNewScreen::DeviceLinkSuccesfullNewScreen(__int64 a1)
    {
      __int64 v2; // x20
      long double (__fastcall *v3)(__int64, void *, _QWORD); // x21
      const char *v4; // x1
      void *String; // x0
      long double v6; // q0
      __int64 ChildByName; // x0
      const char *v8; // x1
      MovieClip *v9; // x20
      const String *v10; // x0
      MovieClip *v11; // x20
      const char *v12; // x1
      const String *v13; // x0
      String v15; // [xsp+0h] [xbp-80h] BYREF
      String v16; // [xsp+18h] [xbp-68h] BYREF
      String v17; // [xsp+30h] [xbp-50h] BYREF
      String v18; // [xsp+48h] [xbp-38h] BYREF
    
      String::String(&v18, "sc/ui.sc");
      String::String(&v17, "link_device_generic");
      String::String(&v16, "TID_LINK_NEW_DEVICE_TITLE");
      String::String(&v15, "successNew");
      DeviceLinkSubScreen::DeviceLinkSubScreen((DeviceLinkSubScreen *)a1, &v18, &v17, &v16, 0, &v15);
      String::~String(&v15);
      String::~String(&v16);
      String::~String(&v17);
      String::~String(&v18);
      *(_QWORD *)a1 = off_1004661B0;
      *(_QWORD *)(a1 + 96) = &off_100466338;
      *(_DWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      v2 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button", 1);
      *(_QWORD *)(a1 + 248) = v2;
      v3 = *(long double (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 352LL);
      String = StringTable::getString((#1308 *)"TID_BUTTON_OK", v4);
      v6 = v3(v2, String, 0);
      ChildByName = MovieClip::getChildByName(*(_QWORD *)(a1 + 112), "connect_button", v6);
      if ( ChildByName )
        *(_BYTE *)(ChildByName + 8) = 0;
      v9 = *(MovieClip **)(a1 + 112);
      v10 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_SUCCESFULL_TITLE", v8);
      MovieClip::setText(v9, "title", v10);
      v11 = *(MovieClip **)(a1 + 112);
      v13 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_SUCCESFULL_NEW", v12);
      MovieClip::setText(v11, "text", v13);
      return a1;
    }

    // attributes: thunk
    void __fastcall DeviceLinkSuccesfullNewScreen::DeviceLinkSuccesfullNewScreen(DeviceLinkSuccesfullNewScreen *this)
    {
      __ZN29DeviceLinkSuccesfullNewScreenC2Ev((__int64)this);
    }

    void __fastcall DeviceLinkSuccesfullNewScreen::~DeviceLinkSuccesfullNewScreen(__int64 a1)
    {
      *(_QWORD *)a1 = off_1004661B0;
      *(_QWORD *)(a1 + 96) = &off_100466338;
      *(_DWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen((UnlockAccountOkMessage *)a1);
    }

    void __fastcall DeviceLinkSuccesfullNewScreen::~DeviceLinkSuccesfullNewScreen(__int64 a1)
    {
      *(_QWORD *)a1 = off_1004661B0;
      *(_QWORD *)(a1 + 96) = &off_100466338;
      *(_DWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen((UnlockAccountOkMessage *)a1);
      operator delete((void *)a1);
    }

    void __fastcall DeviceLinkSuccesfullNewScreen::update(ShapeDrawBitmapCommand *this, float a2)
    {
      ;
    }

    __int64 __fastcall DeviceLinkSuccesfullNewScreen::buttonClicked(__int64 result, __int64 a2)
    {
      __uint16_t *Instance; // x0
    
      if ( *(_QWORD *)(result + 248) == a2 )
      {
        Instance = (__uint16_t *)GameMain::getInstance((#1080 *)result);
        return GameMain::reloadGame(Instance);
      }
      return result;
    }

    __int64 __fastcall DeviceLinkSuccesfullNewScreen::isModal(ShapeDrawBitmapCommand *this)
    {
      return 1;
    }

    __int64 __fastcall DeviceLinkSuccesfullNewScreen::close(#1080 *a1)
    {
      __uint16_t *Instance; // x0
    
      Instance = (__uint16_t *)GameMain::getInstance(a1);
      return GameMain::reloadGame(Instance);
    }

    __int64 __fastcall DeviceLinkSuccesfullNewScreen::getSubScreenType(ShapeDrawBitmapCommand *this)
    {
      return 4;
    }

}; // end class DeviceLinkSuccesfullNewScreen
