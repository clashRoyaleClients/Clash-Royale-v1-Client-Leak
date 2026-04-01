class DeviceLinkConfirmationScreen
{
public:

    void __fastcall DeviceLinkConfirmationScreen::DeviceLinkConfirmationScreen(
            DeviceLinkConfirmationScreen *this,
            const String *a2,
            int a3,
            int a4,
            const String *a5,
            const String *a6,
            int a7,
            int a8)
    {
      MovieClip *MovieClipByName; // x0
      String v15; // [xsp+10h] [xbp-B0h] BYREF
      String v16; // [xsp+28h] [xbp-98h] BYREF
      String v17; // [xsp+40h] [xbp-80h] BYREF
      String v18; // [xsp+58h] [xbp-68h] BYREF
    
      String::String(&v18, "sc/ui.sc");
      String::String(&v17, "link_device_confirmation");
      String::String(&v16, "TID_LINK_NEW_DEVICE_TITLE");
      String::String(&v15, "confirmationScreen");
      DeviceLinkSubScreen::DeviceLinkSubScreen(this, &v18, &v17, &v16, 0, &v15);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      *(_QWORD *)this = off_10046CBE0;
      *((_QWORD *)this + 12) = &off_10046CD68;
      String::String((String *)((char *)this + 248));
      String::String((String *)((char *)this + 280));
      String::String((String *)((char *)this + 304));
      DeviceLinkConfirmationScreen::initializeMembers(this);
      String::operator=((String *)((char *)this + 248));
      *((_DWORD *)this + 68) = a3;
      String::operator=((String *)((char *)this + 280));
      String::operator=((String *)((char *)this + 304));
      *((_DWORD *)this + 86) = a7;
      *((_DWORD *)this + 87) = a8;
      *((_QWORD *)this + 41) = DropGUIContainer::addGameButton(this, "button_cancel", 1);
      *((_QWORD *)this + 42) = DropGUIContainer::addGameButton(this, "button_confirm", 1);
      MovieClip::setText(*((MovieClip **)this + 14), "village_name", a5);
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 14), "xp");
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      MovieClip::setNumberText(MovieClipByName, "xp_level", a4, 0);
    }

    // attributes: thunk
    void __fastcall DeviceLinkConfirmationScreen::DeviceLinkConfirmationScreen(
            DeviceLinkConfirmationScreen *this,
            const String *a2,
            int a3,
            int a4,
            const String *a5,
            const String *a6,
            int a7,
            int a8)
    {
      __ZN28DeviceLinkConfirmationScreenC2ERK6StringiiS2_S2_ii(this, a2, a3, a4, a5, a6, a7, a8);
    }

    void __fastcall DeviceLinkConfirmationScreen::~DeviceLinkConfirmationScreen(LogicDataTableResource *this)
    {
      *(_QWORD *)this = off_10046CBE0;
      *((_QWORD *)this + 12) = &off_10046CD68;
      DeviceLinkConfirmationScreen::initializeMembers(this);
      String::~String();
      String::~String();
      String::~String();
      DeviceLinkSubScreen::~DeviceLinkSubScreen(this);
    }

    // attributes: thunk
    void __fastcall DeviceLinkConfirmationScreen::~DeviceLinkConfirmationScreen(LogicDataTableResource *this)
    {
      __ZN28DeviceLinkConfirmationScreenD2Ev(this);
    }

    void __fastcall DeviceLinkConfirmationScreen::~DeviceLinkConfirmationScreen(LogicDataTableResource *this)
    {
      DeviceLinkConfirmationScreen::~DeviceLinkConfirmationScreen(this);
      operator delete(this);
    }

    void __fastcall DeviceLinkConfirmationScreen::update(LogicDataTableResource *this, float a2)
    {
      ;
    }

    SectorManager *__fastcall DeviceLinkConfirmationScreen::buttonClicked(SectorManager *result, __int64 a2)
    {
      SectorManager *v2; // x20
      __int64 Instance; // x0
      SectorManager *DeviceLinkWindow; // x19
      DeviceLinkInfoScreen *v5; // x20
      LogicDeviceLinkConfirmYesMessage *v6; // x19
      Application *v7; // x0
    
      v2 = result;
      if ( *((_QWORD *)result + 42) == a2 )
      {
        v6 = (LogicDeviceLinkConfirmYesMessage *)operator new(152);
        LogicDeviceLinkConfirmYesMessage::LogicDeviceLinkConfirmYesMessage(v6);
        LogicDeviceLinkConfirmYesMessage::setAccountId((__int64)v6, *((_DWORD *)v2 + 86), *((_DWORD *)v2 + 87));
        LogicDeviceLinkConfirmYesMessage::setLinkCode((String *)v6);
        v7 = (Application *)LogicDeviceLinkConfirmYesMessage::setPassToken((__int64)v6);
        Application::getHostname(v7);
        LogicDeviceLinkConfirmYesMessage::setNewDeviceName((__int64)v6);
        String::~String();
        return (SectorManager *)MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v6);
      }
      else if ( *((_QWORD *)result + 41) == a2 )
      {
        Instance = GUI::getInstance(result);
        DeviceLinkWindow = (SectorManager *)GUI::getDeviceLinkWindow(Instance);
        v5 = (DeviceLinkInfoScreen *)operator new(272);
        DeviceLinkInfoScreen::DeviceLinkInfoScreen(v5, 2);
        return DeviceLinkWindow::pushScreen(DeviceLinkWindow, v5);
      }
      return result;
    }

    __int64 __fastcall DeviceLinkConfirmationScreen::getLinkCode(LogicDataTableResource *this)
    {
      return (__int64)this + 248;
    }

    __int64 __fastcall DeviceLinkConfirmationScreen::initializeMembers(__int64 a1)
    {
      __int64 result; // x0
    
      *(_QWORD *)(a1 + 344) = 0;
      String::operator=(a1 + 304, "");
      String::operator=(a1 + 248, "");
      *(_DWORD *)(a1 + 272) = 0;
      result = String::operator=(a1 + 280, "");
      *(_QWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      return result;
    }

    __int64 __fastcall DeviceLinkConfirmationScreen::getSubScreenType(LogicDataTableResource *this)
    {
      return 2;
    }

}; // end class DeviceLinkConfirmationScreen
