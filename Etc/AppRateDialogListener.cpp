class AppRateDialogListener
{
public:

    _QWORD *__fastcall AppRateDialogListener::~AppRateDialogListener(_QWORD *a1)
    {
      *a1 = &off_1004F2C88;
      String::~String((__int64)(a1 + 2));
      return a1;
    }

    void __fastcall AppRateDialogListener::dialogDidCancel(__int64 a1, int a2)
    {
      CPVRTMemoryFileSystem::CAtExit *v3; // x0
      const String *v4; // x1
      String *v5; // x1
      float v6; // s0
      const String *v7; // x1
      String *v8; // x0
      CPVRTMemoryFileSystem::CAtExit *v9; // x0
      const String *v10; // x1
      CPVRTMemoryFileSystem::CAtExit *v11; // x0
      CPVRTMemoryFileSystem::CAtExit *v12; // x0
      const String *v13; // x1
      __int64 v14[3]; // [xsp+0h] [xbp-40h] BYREF
      String v15; // [xsp+18h] [xbp-28h] BYREF
    
      switch ( a2 )
      {
        case 2:
          v9 = *(CPVRTMemoryFileSystem::CAtExit **)(a1 + 8);
          if ( v9 )
            v9 = (CPVRTMemoryFileSystem::CAtExit *)(*(__int64 (__fastcall **)(CPVRTMemoryFileSystem::CAtExit *))(*(_QWORD *)v9 + 8LL))(v9);
          if ( Track::isInitialized(v9) )
          {
            v11 = (CPVRTMemoryFileSystem::CAtExit *)&EVENT_APPRATE_LATER;
    LABEL_18:
            Track::event(v11, v10);
          }
          break;
        case 1:
          v3 = *(CPVRTMemoryFileSystem::CAtExit **)(a1 + 8);
          if ( v3 )
            v3 = (CPVRTMemoryFileSystem::CAtExit *)(*(__int64 (__fastcall **)(CPVRTMemoryFileSystem::CAtExit *))(*(_QWORD *)v3 + 16LL))(v3);
          if ( Track::isInitialized(v3) )
            Track::event((CPVRTMemoryFileSystem::CAtExit *)&EVENT_APPRATE_REVIEW, v4);
          -[NSString floatValue](
            -[UIDevice systemVersion](+[UIDevice currentDevice](&OBJC_CLASS___UIDevice, "currentDevice"), "systemVersion"),
            "floatValue");
          v5 = (String *)(a1 + 16);
          if ( v6 >= 7.0 )
          {
            operator+((__int64 *)&v15.m_length, &APPSTORE_REVIEW_URL_IOS7, v5);
            Application::openURL((UdpPacket *)&v15, v13);
            v8 = &v15;
          }
          else
          {
            operator+(v14, &APPSTORE_REVIEW_URL, v5);
            Application::openURL((UdpPacket *)v14, v7);
            v8 = (String *)v14;
          }
          String::~String((__int64)v8);
          return;
        case 0:
          v12 = *(CPVRTMemoryFileSystem::CAtExit **)(a1 + 8);
          if ( v12 )
            v12 = (CPVRTMemoryFileSystem::CAtExit *)(**(__int64 (__fastcall ***)(CPVRTMemoryFileSystem::CAtExit *))v12)(v12);
          if ( Track::isInitialized(v12) )
          {
            v11 = (CPVRTMemoryFileSystem::CAtExit *)&EVENT_APPRATE_NEVER;
            goto LABEL_18;
          }
          break;
      }
    }

}; // end class AppRateDialogListener
