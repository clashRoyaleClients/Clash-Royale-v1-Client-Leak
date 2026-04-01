class FacebookConnection
{
public:

    _QWORD *__fastcall FacebookConnection::FacebookConnection(_QWORD *a1, __int64 a2)
    {
      NSAutoreleasePool *v4; // x22
    
      v4 = -[NSAutoreleasePool init](+[NSAutoreleasePool alloc](&OBJC_CLASS___NSAutoreleasePool, "alloc"), "init");
      *a1 = -[FacebookController initWithAppId:](
              +[FacebookController alloc](&OBJC_CLASS___FacebookController, "alloc"),
              "initWithAppId:",
              +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", a2));
      -[NSAutoreleasePool drain](v4, "drain");
      return a1;
    }

    _QWORD *__fastcall FacebookConnection::FacebookConnection(_QWORD *a1, __int64 a2)
    {
      FacebookConnection::FacebookConnection(a1, a2);
      return a1;
    }

    id *__fastcall FacebookConnection::~FacebookConnection(id *a1)
    {
      NSAutoreleasePool *v2; // x20
    
      objc_msgSend(*a1, "setM_pListener:", 0);
      v2 = -[NSAutoreleasePool init](+[NSAutoreleasePool alloc](&OBJC_CLASS___NSAutoreleasePool, "alloc"), "init");
      objc_msgSend(*a1, "release");
      -[NSAutoreleasePool drain](v2, "drain");
      return a1;
    }

    id __fastcall FacebookConnection::setListener(id *a1, __int64 a2)
    {
      return objc_msgSend(*a1, "setM_pListener:", a2);
    }

    id *__fastcall FacebookConnection::~FacebookConnection(id *a1)
    {
      FacebookConnection::~FacebookConnection(a1);
      return a1;
    }

    id FacebookConnection::isLogged()
    {
      return objc_msgSend(+[FBSession activeSession](&OBJC_CLASS___FBSession, "activeSession"), "isOpen");
    }

    id __fastcall FacebookConnection::authorizeWithReadPermissions(void **a1)
    {
      void *v1; // x19
      NSArray *v3; // x0
      FBSession *v4; // x21
      void **v5; // [xsp+8h] [xbp-48h] BYREF
      int v6; // [xsp+10h] [xbp-40h]
      int v7; // [xsp+14h] [xbp-3Ch]
      __int64 (__fastcall *v8)(int, id); // [xsp+18h] [xbp-38h]
      void *v9; // [xsp+20h] [xbp-30h]
      void *v10; // [xsp+28h] [xbp-28h]
    
      v1 = *a1;
      if ( (unsigned int)objc_msgSend(+[FBSession activeSession](&OBJC_CLASS___FBSession, "activeSession"), "isOpen") )
      {
        Debugger::print((__int64)"already logged in to facebook");
        return objc_msgSend(v1, "afterLogin");
      }
      else
      {
        Debugger::print((__int64)"logging in to facebook");
        if ( FacebookConnection::sm_requestUserFriends )
          v3 = +[NSArray arrayWithObjects:](&OBJC_CLASS___NSArray, "arrayWithObjects:", CFSTR("user_friends"), 0);
        else
          v3 = +[NSArray arrayWithObjects:](&OBJC_CLASS___NSArray, "arrayWithObjects:", CFSTR("email"), 0);
        v4 = -[FBSession initWithPermissions:](
               +[FBSession alloc](&OBJC_CLASS___FBSession, "alloc"),
               "initWithPermissions:",
               v3);
        +[FBSession setActiveSession:](&OBJC_CLASS___FBSession, "setActiveSession:", v4);
        v5 = _NSConcreteStackBlock;
        v6 = -1040187392;
        v7 = 0;
        v8 = ___ZN18FacebookConnection28authorizeWithReadPermissionsEv_block_invoke;
        v9 = &__block_descriptor_tmp244;
        v10 = v1;
        objc_msgSend(
          +[FBSession activeSession](&OBJC_CLASS___FBSession, "activeSession"),
          "openWithBehavior:completionHandler:",
          3,
          &v5);
        return -[FBSession release](v4, "release");
      }
    }

    bool __fastcall FacebookConnection::handleURL(__int64 a1, __int64 a2, __int64 a3)
    {
      NSURL *v4; // x20
      NSString *v5; // x3
    
      v4 = +[NSURL URLWithString:](
             &OBJC_CLASS___NSURL,
             "URLWithString:",
             +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", a2));
      if ( a3 )
        v5 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", a3);
      else
        v5 = 0;
      return +[FBAppCall handleOpenURL:sourceApplication:](
               &OBJC_CLASS___FBAppCall,
               "handleOpenURL:sourceApplication:",
               v4,
               v5);
    }

    id __fastcall FacebookConnection::logout(void **a1)
    {
      void *v2; // x19
      id result; // x0
      id v4; // x0
    
      objc_msgSend(+[FBSession activeSession](&OBJC_CLASS___FBSession, "activeSession"), "closeAndClearTokenInformation");
      v2 = *a1;
      result = objc_msgSend(v2, "m_pListener");
      if ( result )
      {
        v4 = objc_msgSend(v2, "m_pListener");
        return (id)(*(__int64 (__fastcall **)(id))(*(_QWORD *)v4 + 72LL))(v4);
      }
      return result;
    }

    id __fastcall FacebookConnection::requestFriends(id *a1)
    {
      id v1; // x19
    
      v1 = *a1;
      if ( !objc_msgSend(*a1, "m_pListener") )
        __assert_rtn(
          "requestFriends",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/FacebookConnection.mm",
          706,
          "fbc.m_pListener");
      return objc_msgSend(v1, "requestFriends");
    }

    void __usercall FacebookConnection::getAttributionID(String *a1@<X8>)
    {
      safeString(
        -[UIPasteboard string](
          +[UIPasteboard pasteboardWithName:create:](
            &OBJC_CLASS___UIPasteboard,
            "pasteboardWithName:create:",
            CFSTR("fb_app_attribution"),
            0),
          "string"),
        a1);
    }

    id FacebookConnection::activateApp()
    {
      return +[FBAppEvents activateApp](&OBJC_CLASS___FBAppEvents, "activateApp");
    }

}; // end class FacebookConnection
