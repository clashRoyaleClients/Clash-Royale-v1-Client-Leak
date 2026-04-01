class DeviceLinkSuccesfullOldScreen
{
public:

    void __fastcall DeviceLinkSuccesfullOldScreen::DeviceLinkSuccesfullOldScreen(
            DeviceLinkSuccesfullOldScreen *this,
            const String *a2)
    {
      __int64 v4; // x21
      void (__fastcall *v5)(__int64, __int64, _QWORD); // x22
      const char *v6; // x1
      __int64 String; // x0
      MovieClip *v8; // x21
      const char *v9; // x1
      const String *v10; // x0
      MovieClip *MovieClipByName; // x0
      const char *v12; // x1
      MovieClip *v13; // x21
      MovieClip *v14; // x20
      const char *v15; // x1
      const String *v16; // x0
      MovieClip *v17; // x20
      const String *v18; // x0
      String v19; // [xsp+0h] [xbp-80h] BYREF
      String v20; // [xsp+18h] [xbp-68h] BYREF
      String v21; // [xsp+30h] [xbp-50h] BYREF
      String v22; // [xsp+48h] [xbp-38h] BYREF
    
      String::String(&v22, "sc/ui.sc");
      String::String(&v21, "link_device_new_device_linked");
      String::String(&v20, "TID_LINK_NEW_DEVICE_TITLE");
      String::String(&v19, "successOld");
      DeviceLinkSubScreen::DeviceLinkSubScreen(this, &v22, &v21, &v20, 0, &v19);
      String::~String(&v19);
      String::~String(&v20);
      String::~String(&v21);
      String::~String(&v22);
      *(_QWORD *)this = off_1004630A0;
      *((_QWORD *)this + 12) = &off_100463228;
      *((_QWORD *)this + 31) = 0;
      v4 = DropGUIContainer::addGameButton(this, "button", 1);
      *((_QWORD *)this + 31) = v4;
      v5 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 352LL);
      String = StringTable::getString((#1308 *)"TID_BUTTON_OK", v6);
      v5(v4, String, 0);
      v8 = (MovieClip *)*((_QWORD *)this + 14);
      v10 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_SUCCESFULL_TITLE", v9);
      MovieClip::setText(v8, "title", v10);
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 14), "new_device");
      v13 = MovieClipByName;
      if ( MovieClipByName )
      {
        if ( a2->m_length )
        {
          MovieClip::setText(MovieClipByName, "device_name", a2);
          v14 = (MovieClip *)*((_QWORD *)this + 14);
          v16 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_SUCCESFULL_OLD", v15);
          MovieClip::setText(v14, "text", v16);
        }
        else
        {
          v17 = (MovieClip *)*((_QWORD *)this + 14);
          v18 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_SUCCESFULL_OLD_NO_DEVICE", v12);
          MovieClip::setText(v17, "text", v18);
          *((_BYTE *)v13 + 8) = 0;
        }
      }
    }

    // attributes: thunk
    void __fastcall DeviceLinkSuccesfullOldScreen::DeviceLinkSuccesfullOldScreen(
            DeviceLinkSuccesfullOldScreen *this,
            const String *a2)
    {
      __ZN29DeviceLinkSuccesfullOldScreenC2ERK6String(this, a2);
    }

    void __fastcall DeviceLinkSuccesfullOldScreen::~DeviceLinkSuccesfullOldScreen(LogicRarityData *this)
    {
      *(_QWORD *)this = off_1004630A0;
      *((_QWORD *)this + 12) = &off_100463228;
      *((_QWORD *)this + 31) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen(this);
    }

    void __fastcall DeviceLinkSuccesfullOldScreen::~DeviceLinkSuccesfullOldScreen(LogicRarityData *this)
    {
      *(_QWORD *)this = off_1004630A0;
      *((_QWORD *)this + 12) = &off_100463228;
      *((_QWORD *)this + 31) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen(this);
      operator delete(this);
    }

    void __fastcall DeviceLinkSuccesfullOldScreen::update(LogicRarityData *this, float a2)
    {
      ;
    }

    BadgePopup *__fastcall DeviceLinkSuccesfullOldScreen::buttonClicked(BadgePopup *result, __int64 a2)
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

    __int64 __fastcall DeviceLinkSuccesfullOldScreen::getSubScreenType(LogicRarityData *this)
    {
      return 8;
    }

}; // end class DeviceLinkSuccesfullOldScreen
