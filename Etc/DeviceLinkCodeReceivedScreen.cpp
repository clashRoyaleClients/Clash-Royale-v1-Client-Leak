class DeviceLinkCodeReceivedScreen
{
public:

    void __fastcall DeviceLinkCodeReceivedScreen::DeviceLinkCodeReceivedScreen(
            DeviceLinkCodeReceivedScreen *this,
            const String *a2,
            int a3)
    {
      MovieClip *v6; // x22
      MovieClip *v7; // x21
      const char *v8; // x1
      const String *String; // x0
      __int64 v10; // x0
      String v11; // [xsp+8h] [xbp-138h] BYREF
      String v12; // [xsp+20h] [xbp-120h] BYREF
      String v13; // [xsp+38h] [xbp-108h] BYREF
      String v14; // [xsp+50h] [xbp-F0h] BYREF
      String v15; // [xsp+68h] [xbp-D8h] BYREF
      String v16; // [xsp+80h] [xbp-C0h] BYREF
      String v17; // [xsp+98h] [xbp-A8h] BYREF
      String v18; // [xsp+B0h] [xbp-90h] BYREF
      String v19; // [xsp+C8h] [xbp-78h] BYREF
      String v20; // [xsp+E0h] [xbp-60h] BYREF
      String v21; // [xsp+F8h] [xbp-48h] BYREF
    
      String::String(&v21, "sc/ui.sc");
      String::String(&v20, "link_device_code");
      String::String(&v19, "TID_LINK_NEW_DEVICE_TITLE");
      String::String(&v18, "codeReceived");
      DeviceLinkSubScreen::DeviceLinkSubScreen(this, &v21, &v20, &v19, 1, &v18);
      String::~String(&v18);
      String::~String(&v19);
      String::~String(&v20);
      String::~String(&v21);
      *(_QWORD *)this = off_100463E80;
      *((_QWORD *)this + 12) = &off_100464008;
      String::String((String *)((char *)this + 256));
      *((_QWORD *)this + 31) = 0;
      String::operator=((char *)this + 256, "");
      *((_DWORD *)this + 70) = 0;
      *((_QWORD *)this + 36) = 0;
      String::operator=((String *)((char *)this + 256));
      *((_DWORD *)this + 62) = a3;
      *((float *)this + 63) = (float)a3;
      v6 = (MovieClip *)*((_QWORD *)this + 14);
      String::substring(&v13, a2, 0, 4);
      operator+(&v13, " ");
      String::substring(&v12, a2, 4, 8);
      operator+((__int64 *)&v15.m_length, &v14, &v12);
      operator+(&v15, " ");
      String::substring(&v11, a2, 8);
      operator+((__int64 *)&v17.m_length, &v16, &v11);
      MovieClip::setText(v6, "link_code", &v17);
      String::~String(&v17);
      String::~String(&v11);
      String::~String(&v16);
      String::~String(&v15);
      String::~String(&v12);
      String::~String(&v14);
      String::~String(&v13);
      v7 = (MovieClip *)*((_QWORD *)this + 14);
      String = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_CODE_VALID_TIME", v8);
      MovieClip::setText(v7, "total_time_title", String);
      v10 = DropGUIContainer::addGameButton(this, "tutorial_button", 1);
      *((_QWORD *)this + 36) = v10;
      if ( v10 )
        *(_BYTE *)(v10 + 8) = 0;
      DeviceLinkCodeReceivedScreen::updateTimerText(this);
    }

    void __fastcall DeviceLinkCodeReceivedScreen::updateTimerText(GravityParticle *this, __int64 a2, bool a3)
    {
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      TimeUtil::getTimeStringWithSeconds((TimeUtil *)(unsigned int)(int)*((float *)this + 63), 1, a3);
      MovieClip::setText(*((MovieClip **)this + 14), "total_time", &v4);
      String::~String(&v4);
    }

    // attributes: thunk
    void __fastcall DeviceLinkCodeReceivedScreen::DeviceLinkCodeReceivedScreen(
            DeviceLinkCodeReceivedScreen *this,
            const String *a2,
            int a3)
    {
      __ZN28DeviceLinkCodeReceivedScreenC2ERK6Stringib(this, a2, a3);
    }

    void __fastcall DeviceLinkCodeReceivedScreen::~DeviceLinkCodeReceivedScreen(__int64 a1)
    {
      MessageManager *v2; // x20
      LogicDeviceLinkMenuClosedMessage *v3; // x21
    
      *(_QWORD *)a1 = off_100463E80;
      *(_QWORD *)(a1 + 96) = &off_100464008;
      v2 = (MessageManager *)MessageManager::sm_pInstance;
      if ( MessageManager::sm_pInstance )
      {
        v3 = (LogicDeviceLinkMenuClosedMessage *)operator new(72);
        LogicDeviceLinkMenuClosedMessage::LogicDeviceLinkMenuClosedMessage(v3);
        MessageManager::sendMessage(v2, v3);
      }
      *(_QWORD *)(a1 + 248) = 0;
      String::operator=(a1 + 256, "");
      *(_DWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      String::~String((String *)(a1 + 256));
      DeviceLinkSubScreen::~DeviceLinkSubScreen((UnlockAccountOkMessage *)a1);
    }

    // attributes: thunk
    void __fastcall DeviceLinkCodeReceivedScreen::~DeviceLinkCodeReceivedScreen(__int64 a1)
    {
      __ZN28DeviceLinkCodeReceivedScreenD2Ev(a1);
    }

    void __fastcall DeviceLinkCodeReceivedScreen::~DeviceLinkCodeReceivedScreen(void *a1)
    {
      DeviceLinkCodeReceivedScreen::~DeviceLinkCodeReceivedScreen((__int64)a1);
      operator delete(a1);
    }

    void __fastcall DeviceLinkCodeReceivedScreen::update(float *a1, __int64 a2, bool a3, float a4)
    {
      float v4; // s1
      float v5; // s0
      __int64 Instance; // x0
      SectorManager *DeviceLinkWindow; // x19
      __darwin_pid_t *v8; // x20
    
      v4 = a1[63];
      v5 = v4 - a4;
      a1[63] = v5;
      if ( v5 <= 0.0 )
      {
        Instance = GUI::getInstance((BadgePopup *)a1);
        DeviceLinkWindow = (SectorManager *)GUI::getDeviceLinkWindow(Instance);
        v8 = (__darwin_pid_t *)operator new(272);
        DeviceLinkErrorScreen::DeviceLinkErrorScreen(v8, 3, 0);
        DeviceLinkWindow::pushScreen(DeviceLinkWindow, (UnlockAccountOkMessage *)v8);
      }
      else if ( SLODWORD(v4) != SLODWORD(v5) )
      {
        DeviceLinkCodeReceivedScreen::updateTimerText((GravityParticle *)a1, a2, a3);
      }
    }

    void DeviceLinkCodeReceivedScreen::buttonClicked()
    {
      ;
    }

    __int64 __fastcall DeviceLinkCodeReceivedScreen::getSubScreenType(GravityParticle *this)
    {
      return 7;
    }

}; // end class DeviceLinkCodeReceivedScreen
