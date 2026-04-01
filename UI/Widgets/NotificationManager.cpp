class NotificationManager
{
public:

    __int64 NotificationManager::constructInstance()
    {
      __int64 v0; // x19
      PushNotificationService *Instance; // x0
      __int64 result; // x0
    
      v0 = operator new(12);
      *(_WORD *)(v0 + 8) = 0;
      *(_QWORD *)v0 = 0;
      Instance = (PushNotificationService *)PushNotificationService::getInstance((#1220 *)v0);
      result = PushNotificationService::doRegistration(Instance, 3);
      NotificationManager::sm_pInstance = v0;
      return result;
    }

    void __fastcall NotificationManager::destructInstance(PushNotificationService *a1)
    {
      void *v1; // x19
    
      v1 = (void *)NotificationManager::sm_pInstance;
      if ( NotificationManager::sm_pInstance )
      {
        PushNotificationService::deinit(a1);
        operator delete(v1);
      }
      NotificationManager::sm_pInstance = 0;
    }

    __int64 __fastcall NotificationManager::setDeviceTokenSent(__int64 this, char a2)
    {
      *(_BYTE *)(this + 8) = a2;
      return this;
    }

    HelpshiftTitan *__fastcall NotificationManager::update(__int64 RegistrationErrorCode)
    {
      __int64 v1; // x19
      #1220 *Instance; // x0
      int v3; // w2
      #1220 *v4; // x21
      const char *v5; // x1
      __int64 v6; // x22
      const char *v7; // x1
      __int64 v8; // x20
      const String *v9; // x1
      char *DeviceToken; // x21
      const String *v11; // x1
      size_t v12; // x22
      __int64 v13; // x0
      void *v14; // x23
      SetDeviceTokenMessage *v15; // x22
      int v16; // w2
      pthread_attr_t *v17; // x0
      PushNotificationService *v18; // x0
      HelpshiftTitan *result; // x0
      HelpshiftTitan **v20; // x19
      pthread_attr_t *v21; // x0
      __siginfo v22; // [xsp+8h] [xbp-68h] BYREF
    
      v1 = RegistrationErrorCode;
      if ( !*(_BYTE *)(RegistrationErrorCode + 8)
        && ServerConnection::sm_pInstance
        && *(_DWORD *)ServerConnection::sm_pInstance == 6 )
      {
        Instance = (#1220 *)PushNotificationService::getInstance((#1220 *)RegistrationErrorCode);
        v4 = Instance;
        if ( Instance && (unsigned int)PushNotificationService::isRegistered(Instance) )
        {
          RegistrationErrorCode = PushNotificationService::getRegistrationErrorCode(v4);
          v6 = RegistrationErrorCode;
          if ( (_DWORD)RegistrationErrorCode == -1 )
          {
            if ( !*(_BYTE *)(v1 + 9) )
            {
              String::format((String *)"push notification registration failed with error code: %d", v5, 0xFFFFFFFFLL);
              Debugger::warning(&v22, v11);
              String::~String();
              *(_BYTE *)(v1 + 9) = 1;
            }
          }
          else
          {
            RegistrationErrorCode = ServerConnection::getAccount(
                                      ServerConnection::sm_pInstance,
                                      *(_DWORD *)(ServerConnection::sm_pInstance + 20));
            v8 = RegistrationErrorCode;
            if ( *(_DWORD *)(RegistrationErrorCode + 4) != *(_DWORD *)v1
              || *(_DWORD *)(RegistrationErrorCode + 8) != *(_DWORD *)(v1 + 4) )
            {
              HIDWORD(v22.__pad[0]) = 0;
              if ( (_DWORD)v6 )
              {
                if ( (int)v6 >= 1 )
                {
                  String::getFormatted(
                    (__int64 *)&v22.si_addr,
                    (String *)"PushNotificationService: registration failed (error code = %i)",
                    v7,
                    v6);
                  Debugger::warning((__siginfo *)&v22.si_addr, v9);
                  String::~String();
                }
                DeviceToken = "";
              }
              else
              {
                DeviceToken = (char *)PushNotificationService::getDeviceToken(v4, (int *)v22.__pad + 1);
              }
              v12 = SHIDWORD(v22.__pad[0]);
              if ( (v22.__pad[0] & 0x8000000000000000LL) != 0LL )
                v13 = -1;
              else
                v13 = SHIDWORD(v22.__pad[0]);
              v14 = (void *)operator new[](v13);
              memcpy(v14, DeviceToken, v12);
              v15 = (SetDeviceTokenMessage *)operator new(88);
              SetDeviceTokenMessage::SetDeviceTokenMessage(v15);
              SetDeviceTokenMessage::setDeviceToken(v15, (char *)v14, SHIDWORD(v22.__pad[0]));
              MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v15);
              *(_DWORD *)(v1 + 4) = *(_DWORD *)(v8 + 8);
              *(_DWORD *)v1 = *(_DWORD *)(v8 + 4);
              Debugger::hudPrint(
                (__siginfo *)"PushNotificationService: Device Token sent successfully",
                (const char *)0xFFFFFFFFLL,
                v16);
              v17 = (pthread_attr_t *)GameMode::getInstance();
              RegistrationErrorCode = GameMode::isHelpshiftEnabled(v17);
              if ( (_DWORD)RegistrationErrorCode )
                RegistrationErrorCode = HelpshiftManager::setPushNotificationToken(
                                          HelpshiftManager::sm_pInstance,
                                          (HelpshiftTitan *)DeviceToken,
                                          (const void *)HIDWORD(v22.__pad[0]));
            }
            *(_BYTE *)(v1 + 8) = 1;
          }
        }
        else
        {
          RegistrationErrorCode = Debugger::hudPrint(
                                    (__siginfo *)"PushNotificationService: not registered",
                                    (const char *)0xFFFFFFFFLL,
                                    v3);
        }
      }
      v18 = (PushNotificationService *)PushNotificationService::getInstance((#1220 *)RegistrationErrorCode);
      result = (HelpshiftTitan *)PushNotificationService::getNotification(v18);
      v20 = (HelpshiftTitan **)result;
      if ( result )
      {
        v21 = (pthread_attr_t *)GameMode::getInstance();
        result = (HelpshiftTitan *)GameMode::isHelpshiftEnabled(v21);
        if ( (_DWORD)result )
          return HelpshiftManager::handlePushNotification((HelpshiftTitan *)HelpshiftManager::sm_pInstance, *v20);
      }
      return result;
    }

}; // end class NotificationManager
