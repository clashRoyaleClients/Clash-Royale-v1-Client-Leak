class HelpshiftTitan
{
public:

    signed __int64 HelpshiftTitan::requestNotificationCount()
    {
      return +[HelpshiftSupport getNotificationCountFromRemote:](
               &OBJC_CLASS___HelpshiftSupport,
               "getNotificationCountFromRemote:",
               1);
    }

    signed __int64 __fastcall HelpshiftTitan::start(__int64 a1, __int64 a2, __int64 a3)
    {
      _QWORD *v6; // x2
      NSString *v7; // x22
      _QWORD *v8; // x2
      NSString *v9; // x21
      _QWORD *v10; // x2
      HelpshiftTitanDelegate *v11; // x20
    
      +[HelpshiftCore initializeWithProvider:](
        &OBJC_CLASS___HelpshiftCore,
        "initializeWithProvider:",
        +[HelpshiftSupport sharedInstance](&OBJC_CLASS___HelpshiftSupport, "sharedInstance"));
      +[HelpshiftSupport setMetadataBlock:](&OBJC_CLASS___HelpshiftSupport, "setMetadataBlock:", &__block_literal_global_5);
      v6 = (_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v6 = (_QWORD *)*v6;
      v7 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v6);
      v8 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v8 = (_QWORD *)*v8;
      v9 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v8);
      v10 = (_QWORD *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v10 = (_QWORD *)*v10;
      +[HelpshiftCore installForApiKey:domainName:appID:](
        &OBJC_CLASS___HelpshiftCore,
        "installForApiKey:domainName:appID:",
        v7,
        v9,
        +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v10));
      v11 = -[HelpshiftTitanDelegate init](
              +[HelpshiftTitanDelegate alloc](&OBJC_CLASS___HelpshiftTitanDelegate, "alloc"),
              "init");
      -[HelpshiftSupport setDelegate:](
        +[HelpshiftSupport sharedInstance](&OBJC_CLASS___HelpshiftSupport, "sharedInstance"),
        "setDelegate:",
        v11);
      -[HelpshiftTitanDelegate release](v11, "release");
      return +[HelpshiftSupport getNotificationCountFromRemote:](
               &OBJC_CLASS___HelpshiftSupport,
               "getNotificationCountFromRemote:",
               1);
    }

    id __fastcall HelpshiftTitan::setUserIdentifier(__int64 a1)
    {
      _QWORD *v1; // x2
    
      v1 = (_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v1 = (_QWORD *)*v1;
      return +[HelpshiftSupport setUserIdentifier:](
               &OBJC_CLASS___HelpshiftSupport,
               "setUserIdentifier:",
               +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v1));
    }

    id __fastcall HelpshiftTitan::setNameAndEmail(__int64 a1, __int64 a2)
    {
      _QWORD *v3; // x2
      NSString *v4; // x21
      _QWORD *v5; // x2
    
      v3 = (_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v3 = (_QWORD *)*v3;
      v4 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v3);
      v5 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v5 = (_QWORD *)*v5;
      return +[HelpshiftCore setName:andEmail:](
               &OBJC_CLASS___HelpshiftCore,
               "setName:andEmail:",
               v4,
               +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v5));
    }

    id __fastcall HelpshiftTitan::setPushNotificationToken(__int64 a1, int a2)
    {
      return +[HelpshiftCore registerDeviceToken:](
               &OBJC_CLASS___HelpshiftCore,
               "registerDeviceToken:",
               +[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", a1, a2));
    }

    id HelpshiftTitan::showConversation()
    {
      id v0; // x20
      _QWORD v2[3]; // [xsp+8h] [xbp-58h] BYREF
      __CFString *v3; // [xsp+20h] [xbp-40h] BYREF
      int64x2_t v4; // [xsp+28h] [xbp-38h]
    
      v0 = objc_msgSend((id)appController, "rootViewController");
      v2[0] = CFSTR("enableContactUs");
      v3 = gEnableContactUs;
      v2[1] = CFSTR("showSearchOnNewConversation");
      v2[2] = CFSTR("showConversationResolutionQuestion");
      v4 = vdupq_n_s64((unsigned __int64)CFSTR("YES"));
      return +[HelpshiftSupport showConversation:withOptions:](
               &OBJC_CLASS___HelpshiftSupport,
               "showConversation:withOptions:",
               v0,
               +[NSDictionary dictionaryWithObjects:forKeys:count:](
                 &OBJC_CLASS___NSDictionary,
                 "dictionaryWithObjects:forKeys:count:",
                 &v3,
                 v2,
                 3));
    }

    id HelpshiftTitan::showFAQ()
    {
      id v0; // x20
      _QWORD v2[3]; // [xsp+8h] [xbp-58h] BYREF
      __CFString *v3; // [xsp+20h] [xbp-40h] BYREF
      int64x2_t v4; // [xsp+28h] [xbp-38h]
    
      v0 = objc_msgSend((id)appController, "rootViewController");
      v2[0] = CFSTR("enableContactUs");
      v3 = gEnableContactUs;
      v2[1] = CFSTR("showSearchOnNewConversation");
      v2[2] = CFSTR("showConversationResolutionQuestion");
      v4 = vdupq_n_s64((unsigned __int64)CFSTR("YES"));
      return +[HelpshiftSupport showFAQs:withOptions:](
               &OBJC_CLASS___HelpshiftSupport,
               "showFAQs:withOptions:",
               v0,
               +[NSDictionary dictionaryWithObjects:forKeys:count:](
                 &OBJC_CLASS___NSDictionary,
                 "dictionaryWithObjects:forKeys:count:",
                 &v3,
                 v2,
                 3));
    }

    id __fastcall HelpshiftTitan::setMetadata(__int64 a1, __int64 a2)
    {
      NSMutableDictionary *v4; // x19
      _QWORD *v5; // x2
      NSString *v6; // x21
      _QWORD *v7; // x2
    
      v4 = (NSMutableDictionary *)gHelpshiftMetadata;
      if ( !gHelpshiftMetadata )
      {
        v4 = -[NSMutableDictionary init](+[NSMutableDictionary alloc](&OBJC_CLASS___NSMutableDictionary, "alloc"), "init");
        gHelpshiftMetadata = (__int64)v4;
      }
      v5 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v5 = (_QWORD *)*v5;
      v6 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v5);
      v7 = (_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v7 = (_QWORD *)*v7;
      return -[NSMutableDictionary setObject:forKey:](
               v4,
               "setObject:forKey:",
               v6,
               +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v7));
    }

    id __fastcall HelpshiftTitan::setMetadataTags(__int64 a1, int a2)
    {
      id v4; // x20
      _QWORD *v5; // x23
      _QWORD *v6; // x2
    
      v4 = +[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array");
      if ( a2 >= 1 )
      {
        v5 = (_QWORD *)(a1 + 8);
        do
        {
          v6 = v5;
          if ( *((_DWORD *)v5 - 1) + 1 >= 9 )
            v6 = (_QWORD *)*v5;
          objc_msgSend(
            v4,
            "addObject:",
            +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v6));
          --a2;
          v5 += 3;
        }
        while ( a2 );
      }
      gHelpshiftTags = (__int64)v4;
      return objc_msgSend(v4, "retain");
    }

    id HelpshiftTitan::clearMetadata()
    {
      id result; // x0
    
      objc_msgSend((id)gHelpshiftMetadata, "release");
      gHelpshiftMetadata = 0;
      result = (id)gHelpshiftTags;
      if ( gHelpshiftTags )
      {
        result = objc_msgSend((id)gHelpshiftTags, "release");
        gHelpshiftTags = 0;
      }
      return result;
    }

    __int64 HelpshiftTitan::getNotificationCount()
    {
      return (unsigned int)gNotificationCount;
    }

    id __fastcall HelpshiftTitan::handlePushNotification(void *a1)
    {
      id result; // x0
    
      result = objc_msgSend(a1, "objectForKey:", CFSTR("origin"));
      if ( result )
      {
        result = objc_msgSend(result, "isEqualToString:", CFSTR("helpshift"));
        if ( (_DWORD)result )
          return (id)+[HelpshiftCore handleRemoteNotification:withController:](
                       &OBJC_CLASS___HelpshiftCore,
                       "handleRemoteNotification:withController:",
                       a1,
                       objc_msgSend((id)appController, "rootViewController"));
      }
      return result;
    }

    __int64 __fastcall HelpshiftTitan::setEnableContactUs(__int64 result)
    {
      __CFString *v1; // x8
    
      v1 = CFSTR("AFTER_VIEWING_FAQS");
      if ( (_DWORD)result )
        v1 = CFSTR("ALWAYS");
      gEnableContactUs = v1;
      return result;
    }

    void HelpshiftTitan::setMetadataCallback()
    {
      ;
    }

}; // end class HelpshiftTitan
