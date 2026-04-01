class HelpshiftManager
{
public:

    __int64 HelpshiftManager::constructInstance()
    {
      __int64 result; // x0
    
      result = operator new(24);
      *(_BYTE *)result = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 16) = 0;
      HelpshiftManager::sm_pInstance = result;
      return result;
    }

    void HelpshiftManager::destructInstance()
    {
      if ( HelpshiftManager::sm_pInstance )
        operator delete((void *)HelpshiftManager::sm_pInstance);
      HelpshiftManager::sm_pInstance = 0;
    }

    HelpshiftTitan *__fastcall HelpshiftManager::start(HelpshiftTitan *result, __int64 a2, __int64 a3, const String *a4)
    {
      HelpshiftTitan *v4; // x19
      int v5; // w2
    
      v4 = result;
      if ( !*(_BYTE *)result )
      {
        HelpshiftTitan::start((HelpshiftTitan *)&HELPSHIFT_APIKEY, &HELPSHIFT_DOMAIN, &HELPSHIFT_APP, a4);
        *(_BYTE *)v4 = 1;
        result = (HelpshiftTitan *)*((_QWORD *)v4 + 1);
        if ( result )
          return (HelpshiftTitan *)HelpshiftTitan::setPushNotificationToken(
                                     result,
                                     (const void *)*((unsigned int *)v4 + 4),
                                     v5);
      }
      return result;
    }

    void __fastcall HelpshiftManager::updateMetadata(_BYTE *a1, const String *a2)
    {
      const String *v2; // x1
      vm_address_t *v3; // x0
      vm_address_t *Instance; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      unsigned int *PlayerAvatar; // x19
      __int64 v8; // x22
      __int64 AvatarUserLevelTier; // x0
      const char *v10; // x1
      HelpshiftTitan *Name; // x20
      const String *v12; // x2
      AllianceStreamMessage *v13; // x0
      __int64 v14; // x0
      const char *v15; // x1
      Application *v16; // x0
      bool v17; // w1
      const String *v18; // x2
      const String *v19; // x2
      const char *v20; // x1
      const String *v21; // x2
      const String *v22; // x0
      const String *v23; // x2
      __int64 ExpLevel; // x0
      const char *v25; // x1
      const String *v26; // x2
      int v27; // w2
      HelpshiftTitan *v28; // x0
      __int64 i; // x20
      String v30; // [xsp+20h] [xbp-1D0h] BYREF
      String v31; // [xsp+38h] [xbp-1B8h] BYREF
      String v32; // [xsp+50h] [xbp-1A0h] BYREF
      String v33; // [xsp+68h] [xbp-188h] BYREF
      String v34; // [xsp+80h] [xbp-170h] BYREF
      String v35; // [xsp+98h] [xbp-158h] BYREF
      String v36; // [xsp+B0h] [xbp-140h] BYREF
      String v37; // [xsp+C8h] [xbp-128h] BYREF
      String v38; // [xsp+F8h] [xbp-F8h] BYREF
      String v39; // [xsp+128h] [xbp-C8h] BYREF
      __int64 v40[3]; // [xsp+140h] [xbp-B0h] BYREF
      _QWORD v41[3]; // [xsp+158h] [xbp-98h] BYREF
      String v42; // [xsp+170h] [xbp-80h] BYREF
      String v43; // [xsp+188h] [xbp-68h] BYREF
      String v44; // [xsp+1A0h] [xbp-50h] BYREF
    
      if ( *a1 )
      {
        Application::getKeyValue((Application *)&AVATAR_TIER, a2);
        MessageManager::getAccountIdString(v41, MessageManager::sm_pInstance);
        v3 = (vm_address_t *)HelpshiftTitan::setUserIdentifier((HelpshiftTitan *)v41, v2);
        Instance = (vm_address_t *)GameMode::getInstance(v3);
        if ( Instance
          && (v5 = GameMode::getInstance(Instance), (Instance = (vm_address_t *)GameMode::getPlayerAvatar(v5)) != 0) )
        {
          v6 = GameMode::getInstance(Instance);
          PlayerAvatar = (unsigned int *)GameMode::getPlayerAvatar(v6);
          v8 = PlayerAvatar[34];
          AvatarUserLevelTier = LogicClientAvatar::getAvatarUserLevelTier(PlayerAvatar);
          String::getFormatted(v40, (String *)"tier%d", v10, AvatarUserLevelTier);
          String::operator=(&v42);
          String::~String();
          Name = (HelpshiftTitan *)LogicClientAvatar::getName((tween::Bounce *)PlayerAvatar);
          String::String(&v39, "");
          HelpshiftTitan::setNameAndEmail(Name, &v39, v12);
          String::~String();
        }
        else
        {
          v8 = 0;
          PlayerAvatar = 0;
        }
        v13 = (AllianceStreamMessage *)HelpshiftTitan::clearMetadata((HelpshiftTitan *)Instance);
        v14 = GameMain::getInstance(v13);
        String::format((String *)"%d.%d.%d", v15, 2, 1306, *(unsigned int *)(v14 + 152));
        v16 = (Application *)String::String(&v38);
        Application::getAppVersion(v16);
        String::operator=(&v38);
        String::~String();
        String::String(&v37, "EN");
        HelpshiftTitan::setEnableContactUs((HelpshiftTitan *)1, v17);
        String::String(&v36, "version");
        HelpshiftTitan::setMetadata((HelpshiftTitan *)&v36, &v38, v18);
        String::~String();
        String::String(&v35, "languageCode");
        HelpshiftTitan::setMetadata((HelpshiftTitan *)&v35, &v37, v19);
        String::~String();
        String::String(&v34, "cumulativePurchasedDiamonds");
        String::format((String *)"%d", v20, v8);
        HelpshiftTitan::setMetadata((HelpshiftTitan *)&v34, &v33, v21);
        String::~String();
        String::~String();
        if ( PlayerAvatar )
        {
          String::String(&v32, "username");
          v22 = (const String *)LogicClientAvatar::getName((tween::Bounce *)PlayerAvatar);
          HelpshiftTitan::setMetadata((HelpshiftTitan *)&v32, v22, v23);
          String::~String();
          String::String(&v31, "expLevel");
          ExpLevel = LogicClientAvatar::getExpLevel((tween::Bounce *)PlayerAvatar);
          String::format((String *)"%d", v25, ExpLevel);
          HelpshiftTitan::setMetadata((HelpshiftTitan *)&v31, &v30, v26);
          String::~String();
          String::~String();
        }
        String::String(&v43, &v42);
        String::String(&v44, &v37);
        v28 = (HelpshiftTitan *)HelpshiftTitan::setMetadataTags((HelpshiftTitan *)&v43, (const String *)2, v27);
        HelpshiftTitan::setMetadataCallback(v28);
        for ( i = 0; i != -48; i -= 24 )
          String::~String();
        String::~String();
        String::~String();
        String::~String();
        String::~String();
        String::~String();
      }
    }

    HelpshiftTitan *__fastcall HelpshiftManager::requestNotificationCount(HelpshiftTitan *result)
    {
      if ( *(_BYTE *)result )
        return (HelpshiftTitan *)HelpshiftTitan::requestNotificationCount(result);
      return result;
    }

    __int64 __fastcall HelpshiftManager::getNotificationCount(HelpshiftTitan *a1)
    {
      if ( *(_BYTE *)a1 )
        return HelpshiftTitan::getNotificationCount(a1);
      else
        return 0;
    }

    __int64 __fastcall HelpshiftManager::setPushNotificationToken(__int64 result, HelpshiftTitan *a2, const void *a3)
    {
      *(_QWORD *)(result + 8) = a2;
      *(_DWORD *)(result + 16) = (_DWORD)a3;
      if ( *(_BYTE *)result )
        return HelpshiftTitan::setPushNotificationToken(a2, a3, (int)a3);
      return result;
    }

    HelpshiftTitan *__fastcall HelpshiftManager::handlePushNotification(HelpshiftTitan *this, HelpshiftTitan *a2)
    {
      const void *v3; // x1
    
      if ( *(_BYTE *)this )
      {
        HelpshiftTitan::setMetadataCallback(this);
        return (HelpshiftTitan *)HelpshiftTitan::handlePushNotification(a2, v3);
      }
      return this;
    }

    HelpshiftTitan *__fastcall HelpshiftManager::showConversation(HelpshiftTitan *result)
    {
      if ( *(_BYTE *)result )
        return (HelpshiftTitan *)HelpshiftTitan::showConversation(result);
      return result;
    }

    HelpshiftTitan *__fastcall HelpshiftManager::showFAQ(HelpshiftTitan *result)
    {
      if ( *(_BYTE *)result )
        return (HelpshiftTitan *)HelpshiftTitan::showFAQ(result);
      return result;
    }

    void __fastcall HelpshiftManager::storeAvatarTier(vm_address_t *a1)
    {
      vm_address_t *Instance; // x0
      __int64 v2; // x0
      vm_address_t *PlayerAvatar; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 AvatarUserLevelTier; // x0
      const char *v7; // x1
      const String *v8; // x2
      String v9; // [xsp+8h] [xbp-28h] BYREF
    
      Instance = (vm_address_t *)GameMode::getInstance(a1);
      if ( Instance )
      {
        v2 = GameMode::getInstance(Instance);
        PlayerAvatar = (vm_address_t *)GameMode::getPlayerAvatar(v2);
        if ( PlayerAvatar )
        {
          v4 = GameMode::getInstance(PlayerAvatar);
          v5 = GameMode::getPlayerAvatar(v4);
          AvatarUserLevelTier = LogicClientAvatar::getAvatarUserLevelTier(v5);
          String::getFormatted((__int64 *)&v9.m_length, (String *)"tier%d", v7, AvatarUserLevelTier);
          Application::storeKeyValue((Application *)&AVATAR_TIER, &v9, v8);
          String::~String();
        }
      }
    }

}; // end class HelpshiftManager
