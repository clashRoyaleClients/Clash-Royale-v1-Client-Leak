class DeviceLinkInfoScreen
{
public:

    void __fastcall DeviceLinkInfoScreen::DeviceLinkInfoScreen(DeviceLinkInfoScreen *this, __int64 a2)
    {
      const char *v4; // x1
      _BYTE **v5; // x21
      __int64 v6; // x0
      __int64 v7; // x0
      const char *v8; // x1
      MovieClip *v9; // x20
      const String *v10; // x0
      MovieClip *v11; // x20
      const char *v12; // x1
      const String *v13; // x0
      _BYTE *v14; // x20
      void (__fastcall *v15)(_BYTE *, void *, _QWORD); // x21
      const char *v16; // x1
      void *v17; // x0
      MovieClip *v18; // x20
      const String *String; // x0
      MovieClip *v20; // x20
      const char *v21; // x1
      const String *v22; // x0
      _BYTE *v23; // x20
      void (__fastcall *v24)(_BYTE *, void *, _QWORD); // x21
      const char *v25; // x1
      void *v26; // x0
      const String *v27; // x1
      String v28; // [xsp+8h] [xbp-98h] BYREF
      String v29; // [xsp+20h] [xbp-80h] BYREF
      String v30; // [xsp+38h] [xbp-68h] BYREF
      String v31; // [xsp+50h] [xbp-50h] BYREF
      String v32; // [xsp+68h] [xbp-38h] BYREF
    
      String::String(&v32, "sc/ui.sc");
      String::String(&v31, "link_device_generic");
      String::String(&v30, "TID_LINK_NEW_DEVICE_TITLE");
      String::getFormatted((__int64 *)&v29.m_length, (String *)"infoScreen_%i", v4, a2);
      DeviceLinkSubScreen::DeviceLinkSubScreen(this, &v32, &v31, &v30, 0, &v29);
      String::~String(&v29);
      String::~String(&v30);
      String::~String(&v31);
      String::~String(&v32);
      *(_QWORD *)this = off_100465350;
      *((_QWORD *)this + 12) = &off_1004654D8;
      *((_QWORD *)this + 31) = 0;
      v5 = (_BYTE **)((char *)this + 248);
      *((_DWORD *)this + 66) = 0;
      *((_QWORD *)this + 32) = 0;
      v6 = DropGUIContainer::addGameButton(this, "button", 1);
      *((_QWORD *)this + 31) = v6;
      *(_BYTE *)(v6 + 8) = 0;
      v7 = DropGUIContainer::addGameButton(this, "connect_button", 1);
      *((_QWORD *)this + 32) = v7;
      *(_BYTE *)(v7 + 8) = 0;
      *((_DWORD *)this + 66) = a2;
      if ( (_DWORD)a2 == 1 )
      {
        v18 = (MovieClip *)*((_QWORD *)this + 14);
        String = (const String *)StringTable::getString((#1308 *)"TID_LINK_SAME_PLATFORM_TITLE", v8);
        MovieClip::setText(v18, "title", String);
        v20 = (MovieClip *)*((_QWORD *)this + 14);
        v22 = (const String *)StringTable::getString((#1308 *)"TID_LINK_SAME_PLATFORM", v21);
        MovieClip::setText(v20, "text", v22);
        v23 = *v5;
        v23[8] = 1;
        v24 = *(void (__fastcall **)(_BYTE *, void *, _QWORD))(*(_QWORD *)v23 + 352LL);
        v26 = StringTable::getString((#1308 *)"TID_BUTTON_OK", v25);
        v24(v23, v26, 0);
        *((_BYTE *)this + 216) = 1;
      }
      else if ( (_DWORD)a2 == 2 )
      {
        v9 = (MovieClip *)*((_QWORD *)this + 14);
        v10 = (const String *)StringTable::getString((#1308 *)"TID_LINK_CANCELLED_TITLE", v8);
        MovieClip::setText(v9, "title", v10);
        v11 = (MovieClip *)*((_QWORD *)this + 14);
        v13 = (const String *)StringTable::getString((#1308 *)"TID_LINK_CANCELLED", v12);
        MovieClip::setText(v11, "text", v13);
        v14 = *v5;
        v14[8] = 1;
        v15 = *(void (__fastcall **)(_BYTE *, void *, _QWORD))(*(_QWORD *)v14 + 352LL);
        v17 = StringTable::getString((#1308 *)"TID_BUTTON_OK", v16);
        v15(v14, v17, 0);
      }
      else if ( (_DWORD)a2 != 3 )
      {
        String::format((String *)"DeviceLinkInfoScreen invalid info type %d", v8, a2);
        Debugger::warning((__siginfo *)&v28, v27);
        String::~String(&v28);
      }
    }

    // attributes: thunk
    void __fastcall DeviceLinkInfoScreen::DeviceLinkInfoScreen(DeviceLinkInfoScreen *this, __int64 a2)
    {
      __ZN20DeviceLinkInfoScreenC2Ei(this, a2);
    }

    void __fastcall DeviceLinkInfoScreen::~DeviceLinkInfoScreen(ResourceListener *this)
    {
      *(_QWORD *)this = off_100465350;
      *((_QWORD *)this + 12) = &off_1004654D8;
      *((_DWORD *)this + 66) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen(this);
    }

    void __fastcall DeviceLinkInfoScreen::~DeviceLinkInfoScreen(ResourceListener *this)
    {
      *(_QWORD *)this = off_100465350;
      *((_QWORD *)this + 12) = &off_1004654D8;
      *((_DWORD *)this + 66) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen(this);
      operator delete(this);
    }

    void __fastcall DeviceLinkInfoScreen::update(ResourceListener *this, float a2)
    {
      ;
    }

    BadgePopup *__fastcall DeviceLinkInfoScreen::buttonClicked(BadgePopup *result, __int64 a2)
    {
      __int64 Instance; // x0
      __int64 DeviceLinkWindow; // x0
    
      if ( *((_QWORD *)result + 31) == a2 )
      {
        Instance = GUI::getInstance(result);
        DeviceLinkWindow = GUI::getDeviceLinkWindow(Instance);
        return (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeviceLinkWindow + 352LL))(DeviceLinkWindow);
      }
      return result;
    }

    __int64 __fastcall DeviceLinkInfoScreen::getSubScreenType(ResourceListener *this)
    {
      return 10;
    }

}; // end class DeviceLinkInfoScreen
