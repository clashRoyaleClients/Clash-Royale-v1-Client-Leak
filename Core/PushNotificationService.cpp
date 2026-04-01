class PushNotificationService
{
public:

    __int64 __fastcall PushNotificationService::~PushNotificationService(__int64 a1, const char *a2)
    {
      _QWORD *v3; // x23
      __int64 v4; // x8
      __int64 i; // x24
      const String *v6; // x1
      id *v7; // x22
      __int64 v8; // x0
      __int64 v9; // x0
      _BYTE v11[24]; // [xsp+18h] [xbp-48h] BYREF
    
      v3 = (_QWORD *)(a1 + 24);
      v4 = *(unsigned int *)(a1 + 36);
      if ( (int)v4 >= 1 )
      {
        for ( i = 0; i < v4; ++i )
        {
          if ( (int)v4 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", a2, i, v4);
            Debugger::error((Debugger *)v11, v6);
          }
          v7 = *(id **)(*v3 + 8 * i);
          if ( v7 )
          {
            objc_msgSend(*v7, "release");
            operator delete(v7);
          }
          v4 = *(int *)(a1 + 36);
        }
      }
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 )
        operator delete[](v8);
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 40) = -1;
      *(_BYTE *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      v9 = *(_QWORD *)(a1 + 24);
      if ( v9 )
        operator delete[](v9);
      *v3 = 0;
      v3[1] = 0;
      return a1;
    }

    id __fastcall PushNotificationService::doRegistration(_BYTE *a1, unsigned int a2)
    {
      __int64 v3; // x21
      unsigned int v4; // w23
      UIApplication *v5; // x0
      id result; // x0
    
      v3 = a2 & 1 | (4 * ((a2 >> 1) & 1)) | (a2 >> 1) & 2;
      v4 = (unsigned int)-[UIApplication respondsToSelector:](
                           +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"),
                           "respondsToSelector:",
                           "isRegisteredForRemoteNotifications");
      v5 = +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication");
      if ( v4 )
      {
        -[UIApplication registerUserNotificationSettings:](
          v5,
          "registerUserNotificationSettings:",
          +[UIUserNotificationSettings settingsForTypes:categories:](
            &OBJC_CLASS___UIUserNotificationSettings,
            "settingsForTypes:categories:",
            v3,
            0));
        result = -[UIApplication registerForRemoteNotifications](
                   +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"),
                   "registerForRemoteNotifications");
      }
      else
      {
        result = -[UIApplication registerForRemoteNotificationTypes:](v5, "registerForRemoteNotificationTypes:", v3);
      }
      *a1 = 1;
      return result;
    }

    __int64 __fastcall PushNotificationService::getInstance(AllianceRankItem *this)
    {
      __int64 result; // x0
    
      result = PushNotificationService::m_pInstance;
      if ( !PushNotificationService::m_pInstance )
      {
        result = operator new(48);
        *(_QWORD *)(result + 24) = 0;
        *(_QWORD *)(result + 32) = 0;
        *(_DWORD *)(result + 40) = -1;
        *(_BYTE *)result = 0;
        *(_QWORD *)(result + 8) = 0;
        *(_DWORD *)(result + 16) = 0;
        PushNotificationService::m_pInstance = result;
      }
      return result;
    }

    void __fastcall PushNotificationService::deinit(__int64 a1, const char *a2)
    {
      void *v2; // x19
    
      v2 = (void *)PushNotificationService::m_pInstance;
      if ( PushNotificationService::m_pInstance )
      {
        PushNotificationService::~PushNotificationService(PushNotificationService::m_pInstance, a2);
        operator delete(v2);
        PushNotificationService::m_pInstance = 0;
      }
    }

    __int64 __fastcall PushNotificationService::isRegistered(AllianceRankItem *this)
    {
      return *(unsigned __int8 *)this;
    }

    __int64 __fastcall PushNotificationService::getDeviceToken(AllianceRankItem *this, int *a2)
    {
      *a2 = *((_DWORD *)this + 4);
      return *((_QWORD *)this + 1);
    }

    void __fastcall PushNotificationService::setDeviceToken(__int64 a1, const void *a2, __int64 a3)
    {
      __int64 v6; // x0
      __int64 v7; // x0
      void *v8; // x0
      const char *v9; // x1
      const String *v10; // x1
      String v11; // [xsp+8h] [xbp-38h] BYREF
    
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 )
        operator delete[](v6);
      *(_DWORD *)(a1 + 16) = a3;
      if ( (int)a3 < 0LL )
        v7 = -1;
      else
        v7 = (int)a3;
      v8 = (void *)operator new[](v7);
      *(_QWORD *)(a1 + 8) = v8;
      memcpy(v8, a2, (int)a3);
      String::format((String *)"Set PushNotificationService device token of length: %d", v9, a3);
      Debugger::print((Debugger *)&v11, v10);
      String::~String();
    }

    void __fastcall PushNotificationService::setRegistrationErrorCode(__int64 a1, LogicStringUtil *a2, const char *a3)
    {
      bool v5; // w2
      const char *v6; // x1
      const String *v7; // x1
      String v8; // [xsp+0h] [xbp-70h] BYREF
      String v9; // [xsp+18h] [xbp-58h] BYREF
      String v10; // [xsp+30h] [xbp-40h] BYREF
      String v11; // [xsp+48h] [xbp-28h] BYREF
    
      *(_DWORD *)(a1 + 40) = (_DWORD)a2;
      if ( (_DWORD)a2 )
      {
        String::String(&v11, "PushNotificationService registration failed. Error code: ");
        LogicStringUtil::intToString(a2, 0, v5);
        String::operator+=(&v11, &v10);
        String::~String();
        String::String(&v9, ", reason:");
        String::operator+=(&v11, &v9);
        String::~String();
        if ( a3 )
          v6 = a3;
        else
          v6 = "Unknown";
        String::String(&v8, v6);
        String::operator+=(&v11, &v8);
        String::~String();
        Debugger::warning((__siginfo *)&v11, v7);
        String::~String();
      }
      else
      {
        Debugger::print((Debugger *)"PushNotificationService registered succesfully", (const char *)a2);
      }
    }

    __int64 __fastcall PushNotificationService::getRegistrationErrorCode(AllianceRankItem *this)
    {
      return *((unsigned int *)this + 10);
    }

    __int64 __fastcall PushNotificationService::queueRemoteNotification(__int64 a1, void *a2, char a3)
    {
      id v5; // x21
      __int64 v6; // x0
      __int64 v8; // [xsp+8h] [xbp-28h] BYREF
    
      v5 = objc_msgSend(a2, "copy");
      v6 = operator new(16);
      v8 = v6;
      *(_QWORD *)v6 = v5;
      *(_BYTE *)(v6 + 8) = a3;
      return LogicArrayList<PushNotificationQueueElement *>::add(a1 + 24, &v8);
    }

    __int64 __fastcall PushNotificationService::getNotification(__int64 a1)
    {
      if ( *(_DWORD *)(a1 + 36) )
        return LogicArrayList<PushNotificationQueueElement *>::remove(a1 + 24, 0);
      else
        return 0;
    }

}; // end class PushNotificationService
