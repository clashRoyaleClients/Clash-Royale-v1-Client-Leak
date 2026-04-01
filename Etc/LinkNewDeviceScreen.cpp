class LinkNewDeviceScreen
{
public:

    DeviceLinkSubScreen *__fastcall LinkNewDeviceScreen::LinkNewDeviceScreen(DeviceLinkSubScreen *a1)
    {
      String v3; // [xsp+0h] [xbp-70h] BYREF
      String v4; // [xsp+18h] [xbp-58h] BYREF
      String v5; // [xsp+30h] [xbp-40h] BYREF
      String v6; // [xsp+48h] [xbp-28h] BYREF
    
      String::String(&v6, "sc/ui.sc");
      String::String(&v5, "link_device_start");
      String::String(&v4, "TID_LINK_NEW_DEVICE_TITLE");
      String::String(&v3, &EventTracker::EVENT_PRODUCT_STARTED);
      DeviceLinkSubScreen::DeviceLinkSubScreen(a1, &v6, &v5, &v4, 1, &v3);
      String::~String(&v3);
      String::~String(&v4);
      String::~String(&v5);
      String::~String(&v6);
      *(_QWORD *)a1 = off_100466008;
      *((_QWORD *)a1 + 12) = &off_100466190;
      *((_QWORD *)a1 + 31) = 0;
      *((_QWORD *)a1 + 32) = 0;
      *((_QWORD *)a1 + 31) = DropGUIContainer::addGameButton(a1, "button_old_device", 1);
      *((_QWORD *)a1 + 32) = DropGUIContainer::addGameButton(a1, "button_new_device", 1);
      return a1;
    }

    // attributes: thunk
    DeviceLinkSubScreen *__fastcall LinkNewDeviceScreen::LinkNewDeviceScreen(DeviceLinkSubScreen *a1)
    {
      return __ZN19LinkNewDeviceScreenC2Ev(a1);
    }

    void __fastcall LinkNewDeviceScreen::~LinkNewDeviceScreen(UnlockAccountOkMessage *a1)
    {
      *(_QWORD *)a1 = off_100466008;
      *((_QWORD *)a1 + 12) = &off_100466190;
      *((_QWORD *)a1 + 31) = 0;
      *((_QWORD *)a1 + 32) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen(a1);
    }

    void __fastcall LinkNewDeviceScreen::~LinkNewDeviceScreen(UnlockAccountOkMessage *a1)
    {
      *(_QWORD *)a1 = off_100466008;
      *((_QWORD *)a1 + 12) = &off_100466190;
      *((_QWORD *)a1 + 31) = 0;
      *((_QWORD *)a1 + 32) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen(a1);
      operator delete(a1);
    }

    void __fastcall LinkNewDeviceScreen::update(AttackRadiusSprite *this, float a2)
    {
      ;
    }

    BadgePopup *__fastcall LinkNewDeviceScreen::buttonClicked(BadgePopup *result, __int64 a2)
    {
      __int64 v2; // x0
      SectorManager *v3; // x19
      DeviceLinkInfoScreen *v4; // x20
      __int64 Instance; // x0
    
      if ( *((_QWORD *)result + 31) == a2 )
      {
        Instance = GUI::getInstance(result);
        result = (BadgePopup *)GUI::getDeviceLinkWindow(Instance);
        v3 = result;
        if ( !result )
          return result;
        v4 = (DeviceLinkInfoScreen *)operator new(272);
        DeviceLinkInfoScreen::DeviceLinkInfoScreen(v4, 1);
        return (BadgePopup *)DeviceLinkWindow::pushScreen(v3, v4);
      }
      if ( *((_QWORD *)result + 32) == a2 )
      {
        v2 = GUI::getInstance(result);
        result = (BadgePopup *)GUI::getDeviceLinkWindow(v2);
        v3 = result;
        if ( result )
        {
          v4 = (DeviceLinkInfoScreen *)operator new(288);
          DeviceLinkEnterCodeScreen::DeviceLinkEnterCodeScreen(v4);
          return (BadgePopup *)DeviceLinkWindow::pushScreen(v3, v4);
        }
      }
      return result;
    }

    __int64 __fastcall LinkNewDeviceScreen::getSubScreenType(AttackRadiusSprite *this)
    {
      return 0;
    }

}; // end class LinkNewDeviceScreen
