class Application
{
public:

    bool __fastcall Application::openURL(UdpPacket *this, const String *a2)
    {
      _QWORD *v2; // x2
    
      v2 = (_QWORD *)((char *)this + 8);
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v2 = (_QWORD *)*v2;
      return -[UIApplication openURL:](
               +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"),
               "openURL:",
               +[NSURL URLWithString:](
                 &OBJC_CLASS___NSURL,
                 "URLWithString:",
                 +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v2)));
    }

    void __usercall Application::getPreferredLanguage(String *__return_ptr a1@<X8>)
    {
      id v3; // x0
    
      v3 = -[NSArray objectAtIndex:](
             +[NSLocale preferredLanguages](&OBJC_CLASS___NSLocale, "preferredLanguages"),
             "objectAtIndex:",
             0);
      if ( v3 )
        String::String(a1, (const char *)objc_msgSend(v3, "UTF8String"));
      else
        String::String((__int64)a1);
    }

    void __usercall Application::getDeviceType(String *a1@<X8>)
    {
      size_t v2; // [xsp+0h] [xbp-130h] BYREF
      char v3[255]; // [xsp+9h] [xbp-127h] BYREF
    
      v2 = 255;
      sysctlbyname("hw.machine", v3, &v2, 0, 0);
      String::String(a1, v3);
    }

    id __usercall Application::getSystemVersion@<X0>(String *a1@<X8>)
    {
      NSAutoreleasePool *v2; // x20
    
      v2 = +[NSAutoreleasePool new](&OBJC_CLASS___NSAutoreleasePool, "new");
      String::String(
        a1,
        -[NSString UTF8String](
          -[UIDevice systemVersion](+[UIDevice currentDevice](&OBJC_CLASS___UIDevice, "currentDevice"), "systemVersion"),
          "UTF8String"));
      return -[NSAutoreleasePool drain](v2, "drain");
    }

    void __usercall Application::getHostname(String *a1@<X8>)
    {
      char v2[263]; // [xsp+9h] [xbp-127h] BYREF
    
      gethostname(v2, 0xFFu);
      String::String(a1, v2);
    }

    void __usercall Application::getKeyValue(__int64 a1@<X0>, String *a2@<X8>)
    {
      const char **v4; // x25
      const char *v5; // x1
      CFStringRef v6; // x22
      const __CFDictionary *v7; // x23
      __int64 v8; // x21
      const char *BytePtr; // x20
      int Length; // w0
      String v11; // [xsp+10h] [xbp-C0h] BYREF
      String v12; // [xsp+28h] [xbp-A8h] BYREF
      __darwin_off_t result; // [xsp+40h] [xbp-90h] BYREF
      void *values[4]; // [xsp+48h] [xbp-88h] BYREF
      void *keys[4]; // [xsp+68h] [xbp-68h] BYREF
    
      v4 = (const char **)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v5 = *v4;
      else
        v5 = (const char *)(a1 + 8);
      v6 = CFStringCreateWithCString(0, v5, 0x8000100u);
      keys[0] = (void *)kSecClass;
      keys[1] = (void *)kSecAttrAccount;
      keys[2] = (void *)kSecAttrService;
      keys[3] = (void *)kSecReturnData;
      values[0] = (void *)kSecClassGenericPassword;
      values[1] = (void *)v6;
      values[2] = CFSTR("com.supercell");
      values[3] = kCFBooleanTrue;
      v7 = CFDictionaryCreate(
             0,
             (const void **)keys,
             (const void **)values,
             4,
             &kCFTypeDictionaryKeyCallBacks,
             &kCFTypeDictionaryValueCallBacks);
      v8 = SecItemCopyMatching(v7, (CFTypeRef *)&result);
      CFRelease(v6);
      CFRelease(v7);
      if ( !(_DWORD)v8 && result && CFDataGetBytePtr((CFDataRef)result) )
      {
        BytePtr = (const char *)CFDataGetBytePtr((CFDataRef)result);
        Length = CFDataGetLength((CFDataRef)result);
        String::String(&v11, BytePtr, Length);
        CFRelease((CFTypeRef)result);
        String::String((__int64)a2, &v11);
        String::~String((__int64)&v11);
      }
      else
      {
        if ( (_DWORD)v8 != -25300 )
        {
          if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
            v4 = (const char **)*v4;
          String::format((String *)"Application::getKeyValue SecItemCopyMatching: %d, Key: %s", (__int64)&v12, v8, v4);
          Debugger::warning(&v12);
          String::~String((__int64)&v12);
        }
        String::String(a2, "");
      }
    }

    __int64 __fastcall Application::existsKeyValue(__int64 a1)
    {
      const char *v1; // x1
      CFStringRef v2; // x19
      const __CFDictionary *v3; // x20
      OSStatus v4; // w21
      __int64 result; // x0
      CFTypeRef theData; // [xsp+0h] [xbp-70h] BYREF
      void *values[4]; // [xsp+8h] [xbp-68h] BYREF
      void *keys[4]; // [xsp+28h] [xbp-48h] BYREF
    
      v1 = (const char *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v1 = *(const char **)v1;
      v2 = CFStringCreateWithCString(0, v1, 0x8000100u);
      keys[0] = (void *)kSecClass;
      keys[1] = (void *)kSecAttrAccount;
      keys[2] = (void *)kSecAttrService;
      keys[3] = (void *)kSecReturnData;
      values[0] = (void *)kSecClassGenericPassword;
      values[1] = (void *)v2;
      values[2] = CFSTR("com.supercell");
      values[3] = kCFBooleanTrue;
      v3 = CFDictionaryCreate(
             0,
             (const void **)keys,
             (const void **)values,
             4,
             &kCFTypeDictionaryKeyCallBacks,
             &kCFTypeDictionaryValueCallBacks);
      v4 = SecItemCopyMatching(v3, &theData);
      CFRelease(v2);
      CFRelease(v3);
      result = 0;
      if ( !v4 && theData )
      {
        if ( CFDataGetBytePtr((CFDataRef)theData) )
        {
          CFRelease(theData);
          return 1;
        }
        else
        {
          return 0;
        }
      }
      return result;
    }

    void __fastcall Application::removeKeyValue(__int64 a1)
    {
      const char **v2; // x24
      const char *v3; // x1
      CFStringRef v4; // x21
      const __CFDictionary *v5; // x22
      __int64 v6; // x20
      String v8; // [xsp+10h] [xbp-90h] BYREF
      void *values[4]; // [xsp+28h] [xbp-78h] BYREF
      void *keys[4]; // [xsp+48h] [xbp-58h] BYREF
    
      v2 = (const char **)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v3 = *v2;
      else
        v3 = (const char *)(a1 + 8);
      v4 = CFStringCreateWithCString(0, v3, 0x8000100u);
      keys[0] = (void *)kSecClass;
      keys[1] = (void *)kSecAttrAccount;
      keys[2] = (void *)kSecAttrService;
      keys[3] = (void *)kSecReturnData;
      values[0] = (void *)kSecClassGenericPassword;
      values[1] = (void *)v4;
      values[2] = CFSTR("com.supercell");
      values[3] = kCFBooleanTrue;
      v5 = CFDictionaryCreate(
             0,
             (const void **)keys,
             (const void **)values,
             4,
             &kCFTypeDictionaryKeyCallBacks,
             &kCFTypeDictionaryValueCallBacks);
      v6 = SecItemDelete(v5);
      CFRelease(v4);
      CFRelease(v5);
      if ( (_DWORD)v6 != -25300 && (_DWORD)v6 != 0 )
      {
        if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
          v2 = (const char **)*v2;
        String::format((String *)"Application::removeKeyValue SecItemDelete: %d, Key: %s", (__int64)&v8, v6, v2);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
      }
    }

    void __fastcall Application::storeKeyValue(__int64 a1, __int64 a2)
    {
      const char **v4; // x24
      const char *v5; // x1
      CFStringRef v6; // x20
      int v7; // w8
      const char *v8; // x21
      int v9; // w0
      CFDataRef v10; // x21
      const __CFDictionary *v11; // x22
      __int64 v12; // x20
      String *v13; // x0
      String v14; // [xsp+18h] [xbp-D8h] BYREF
      String v15; // [xsp+30h] [xbp-C0h] BYREF
      void *values[7]; // [xsp+48h] [xbp-A8h] BYREF
      void *keys[7]; // [xsp+80h] [xbp-70h] BYREF
    
      v4 = (const char **)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v5 = *v4;
      else
        v5 = (const char *)(a1 + 8);
      v6 = CFStringCreateWithCString(0, v5, 0x8000100u);
      v7 = *(_DWORD *)(a2 + 4) + 1;
      v8 = (const char *)(a2 + 8);
      if ( v7 > 8 )
        v8 = *(const char **)v8;
      v9 = strlen(v8);
      v10 = CFDataCreate(0, (const UInt8 *)v8, v9);
      Application::removeKeyValue(a1);
      keys[0] = (void *)kSecClass;
      keys[1] = (void *)kSecAttrIsInvisible;
      keys[2] = (void *)kSecAttrService;
      keys[3] = (void *)kSecAttrLabel;
      keys[4] = (void *)kSecAttrAccessible;
      keys[5] = (void *)kSecAttrAccount;
      keys[6] = (void *)kSecValueData;
      values[0] = (void *)kSecClassGenericPassword;
      values[1] = kCFBooleanTrue;
      values[2] = CFSTR("com.supercell");
      values[3] = CFSTR("Supercell");
      values[4] = (void *)kSecAttrAccessibleWhenUnlocked;
      values[5] = (void *)v6;
      values[6] = v10;
      v11 = CFDictionaryCreate(
              0,
              (const void **)keys,
              (const void **)values,
              7,
              &kCFTypeDictionaryKeyCallBacks,
              &kCFTypeDictionaryValueCallBacks);
      CFRelease(v6);
      CFRelease(v10);
      v12 = SecItemAdd(v11, 0);
      CFRelease(v11);
      if ( (_DWORD)v12 )
      {
        if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
          v4 = (const char **)*v4;
        String::format((String *)"Application::storeKeyValue SecItemAdd: %d, Key: %s", (__int64)&v15, v12, v4);
        Debugger::warning(&v15);
        v13 = &v15;
      }
      else
      {
        operator+("Saved ", a1, (__int64)&v14);
        Debugger::print(&v14);
        v13 = &v14;
      }
      String::~String((__int64)v13);
    }

    void __usercall Application::getOpenUDID(String *a1@<X8>)
    {
      String::String(
        a1,
        (const char *)objc_msgSend(+[Supercell_OpenUDID value](&OBJC_CLASS___Supercell_OpenUDID, "value"), "UTF8String"));
    }

    __int64 __usercall Application::getUDID@<X0>(__int64 a1@<X8>)
    {
      return String::String(a1);
    }

    void __usercall Application::getAdvertiserID(String *a1@<X8>)
    {
      Class v2; // x0
    
      v2 = NSClassFromString(&cfstr_Asidentifierma.isa);
      if ( v2 )
        String::String(
          a1,
          (const char *)objc_msgSend(
                          objc_msgSend(
                            objc_msgSend(
                              -[objc_class performSelector:](v2, "performSelector:", "sharedManager"),
                              "performSelector:",
                              "advertisingIdentifier"),
                            "performSelector:",
                            "UUIDString"),
                          "UTF8String"));
      else
        String::String((__int64)a1);
    }

    bool Application::getAdvertiserTrackingEnabled()
    {
      Class v0; // x0
    
      v0 = NSClassFromString(&cfstr_Asidentifierma.isa);
      return !v0
          || objc_msgSend(
               -[objc_class performSelector:](v0, "performSelector:", "sharedManager"),
               "performSelector:",
               "isAdvertisingTrackingEnabled") != 0;
    }

    void __usercall Application::getPrimaryMAC(__int64 a1@<X8>)
    {
      String v2; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v2, "en0");
      getMACAddress(&v2, a1);
      String::~String((__int64)&v2);
    }

    void __usercall Application::getIMEI(String *a1@<X8>)
    {
      String::String(a1, "");
    }

    void __usercall Application::getAndroidID(String *a1@<X8>)
    {
      String::String(a1, "");
    }

    // attributes: thunk
    bool __fastcall Application::isSystemVersionGreaterOrEqualTo(__int64 this, const char *a2)
    {
      return isIosVersionGreaterOrEqualTo(this);
    }

    id __fastcall Application::setKeepScreenOn(__int64 a1)
    {
      return -[UIApplication setIdleTimerDisabled:](
               +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"),
               "setIdleTimerDisabled:",
               a1);
    }

    void __usercall Application::getAppVersion(String *a1@<X8>)
    {
      String::String(
        a1,
        (const char *)objc_msgSend(
                        -[NSBundle objectForInfoDictionaryKey:](
                          +[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"),
                          "objectForInfoDictionaryKey:",
                          CFSTR("CFBundleShortVersionString")),
                        "UTF8String"));
    }

    void __usercall Application::getIdentifierForVendor(String *a1@<X8>)
    {
      id v2; // x0
    
      if ( (unsigned int)-[UIDevice respondsToSelector:](
                           +[UIDevice currentDevice](&OBJC_CLASS___UIDevice, "currentDevice"),
                           "respondsToSelector:",
                           "identifierForVendor")
        && (v2 = objc_msgSend(
                   -[UIDevice performSelector:](
                     +[UIDevice currentDevice](&OBJC_CLASS___UIDevice, "currentDevice"),
                     "performSelector:",
                     "identifierForVendor"),
                   "performSelector:",
                   "UUIDString")) != 0 )
      {
        String::String(a1, (const char *)objc_msgSend(v2, "UTF8String"));
      }
      else
      {
        String::String((__int64)a1);
      }
    }

    void __usercall Application::getBundleID(String *a1@<X8>)
    {
      NSString *v2; // x0
      const char *v3; // x1
    
      v2 = -[NSBundle bundleIdentifier](+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"), "bundleIdentifier");
      if ( v2 )
        v3 = -[NSString UTF8String](v2, "UTF8String");
      else
        v3 = "";
      String::String(a1, v3);
    }

}; // end class Application
