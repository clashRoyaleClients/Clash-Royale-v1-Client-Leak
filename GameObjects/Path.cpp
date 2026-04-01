class Path
{
public:

    bool __fastcall Path::exists(LogicTileMap *this, const String *a2)
    {
      NSAutoreleasePool *v3; // x19
      NSFileManager *v4; // x20
      _QWORD *v5; // x2
      _BOOL8 v6; // x20
    
      v3 = -[NSAutoreleasePool init](+[NSAutoreleasePool alloc](&OBJC_CLASS___NSAutoreleasePool, "alloc"), "init");
      v4 = +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager");
      v5 = (_QWORD *)((char *)this + 8);
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v5 = (_QWORD *)*v5;
      v6 = -[NSFileManager fileExistsAtPath:](
             v4,
             "fileExistsAtPath:",
             +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v5));
      -[NSAutoreleasePool drain](v3, "drain");
      return v6;
    }

    id __fastcall Path::mkdir(LogicTileMap *this, const String *a2)
    {
      NSAutoreleasePool *v3; // x19
      NSFileManager *v4; // x20
      _QWORD *v5; // x2
    
      v3 = -[NSAutoreleasePool init](+[NSAutoreleasePool alloc](&OBJC_CLASS___NSAutoreleasePool, "alloc"), "init");
      v4 = +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager");
      v5 = (_QWORD *)((char *)this + 8);
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v5 = (_QWORD *)*v5;
      -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
        v4,
        "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
        +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v5),
        1,
        0,
        0);
      return -[NSAutoreleasePool drain](v3, "drain");
    }

    String *__usercall Path::getPath@<X0>(int a1@<W0>, String *a2@<X8>)
    {
      NSAutoreleasePool *v4; // x0
      NSAutoreleasePool *v5; // x20
      String *result; // x0
      unsigned __int8 v7; // w8
      NSString *v8; // x0
      const String *v9; // x1
      unsigned __int8 v10; // w8
      NSArray *v11; // x0
      NSArray *v12; // x21
      const String *v13; // x1
      unsigned __int8 v14; // w8
      NSArray *v15; // x0
      NSArray *v16; // x21
      const String *v17; // x1
      unsigned __int8 v18; // w8
      NSArray *v19; // x0
      NSArray *v20; // x21
      String v21; // [xsp+10h] [xbp-80h] BYREF
      String v22; // [xsp+28h] [xbp-68h] BYREF
      String v23; // [xsp+40h] [xbp-50h] BYREF
      String v24; // [xsp+58h] [xbp-38h] BYREF
    
      v4 = -[NSAutoreleasePool init](+[NSAutoreleasePool alloc](&OBJC_CLASS___NSAutoreleasePool, "alloc"), "init");
      v5 = v4;
      switch ( a1 )
      {
        case 0:
          v7 = atomic_load((unsigned __int8 *)&`guard variable for'Path::getPath(Path::Domain)::str);
          if ( (v7 & 1) == 0 && __cxa_guard_acquire((__guard *)&`guard variable for'Path::getPath(Path::Domain)::str) )
          {
            String::String(&Path::getPath(Path::Domain)::str);
            __cxa_atexit(
              (void (__fastcall *)(void *))String::~String,
              &Path::getPath(Path::Domain)::str,
              (void *)&_mh_execute_header);
            __cxa_guard_release((__guard *)&`guard variable for'Path::getPath(Path::Domain)::str);
          }
          if ( (Path::getPath(Path::Domain)::isSet & 1) == 0 )
          {
            Path::getPath(Path::Domain)::isSet = 1;
            v8 = -[NSBundle resourcePath](+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"), "resourcePath");
            String::String(
              &v24,
              -[NSString UTF8String](
                -[NSString stringByAppendingFormat:](v8, "stringByAppendingFormat:", CFSTR("/%s"), Path::DATA_DIRECTORY),
                "UTF8String"));
            String::operator=(&Path::getPath(Path::Domain)::str);
            String::~String();
          }
          -[NSAutoreleasePool drain](v5, "drain");
          v9 = &Path::getPath(Path::Domain)::str;
          goto LABEL_34;
        case 1:
          v10 = atomic_load((unsigned __int8 *)&`guard variable for'Path::getPath(Path::Domain)::str);
          if ( (v10 & 1) == 0 && __cxa_guard_acquire((__guard *)&`guard variable for'Path::getPath(Path::Domain)::str) )
          {
            String::String(&Path::getPath(Path::Domain)::str);
            __cxa_atexit(
              (void (__fastcall *)(void *))String::~String,
              &Path::getPath(Path::Domain)::str,
              (void *)&_mh_execute_header);
            __cxa_guard_release((__guard *)&`guard variable for'Path::getPath(Path::Domain)::str);
          }
          if ( (Path::getPath(Path::Domain)::isSet & 1) == 0 )
          {
            v11 = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, 0xFFFFu, 1);
            v12 = v11;
            if ( v11 )
            {
              if ( -[NSArray count](v11, "count") )
              {
                Path::getPath(Path::Domain)::isSet = 1;
                String::String(
                  &v23,
                  (const char *)objc_msgSend(
                                  objc_msgSend(
                                    -[NSArray objectAtIndex:](v12, "objectAtIndex:", 0),
                                    "stringByAppendingString:",
                                    CFSTR("/updated")),
                                  "UTF8String"));
                String::operator=(&Path::getPath(Path::Domain)::str);
                String::~String();
                Path::mkdir((LogicTileMap *)&Path::getPath(Path::Domain)::str, v13);
              }
            }
          }
          -[NSAutoreleasePool drain](v5, "drain");
          v9 = &Path::getPath(Path::Domain)::str;
          goto LABEL_34;
        case 2:
          v14 = atomic_load((unsigned __int8 *)&`guard variable for'Path::getPath(Path::Domain)::str);
          if ( (v14 & 1) == 0 && __cxa_guard_acquire((__guard *)&`guard variable for'Path::getPath(Path::Domain)::str) )
          {
            String::String(&Path::getPath(Path::Domain)::str);
            __cxa_atexit(
              (void (__fastcall *)(void *))String::~String,
              &Path::getPath(Path::Domain)::str,
              (void *)&_mh_execute_header);
            __cxa_guard_release((__guard *)&`guard variable for'Path::getPath(Path::Domain)::str);
          }
          if ( (Path::getPath(Path::Domain)::isSet & 1) == 0 )
          {
            v15 = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, 0xFFFFu, 1);
            v16 = v15;
            if ( v15 )
            {
              if ( -[NSArray count](v15, "count") )
              {
                Path::getPath(Path::Domain)::isSet = 1;
                String::String(
                  &v22,
                  (const char *)objc_msgSend(
                                  objc_msgSend(
                                    -[NSArray objectAtIndex:](v16, "objectAtIndex:", 0),
                                    "stringByAppendingString:",
                                    CFSTR("/saved")),
                                  "UTF8String"));
                String::operator=(&Path::getPath(Path::Domain)::str);
                String::~String();
                Path::mkdir((LogicTileMap *)&Path::getPath(Path::Domain)::str, v17);
              }
            }
          }
          -[NSAutoreleasePool drain](v5, "drain");
          v9 = &Path::getPath(Path::Domain)::str;
          goto LABEL_34;
        case 3:
          v18 = atomic_load((unsigned __int8 *)&`guard variable for'Path::getPath(Path::Domain)::str);
          if ( (v18 & 1) == 0 && __cxa_guard_acquire((__guard *)&`guard variable for'Path::getPath(Path::Domain)::str) )
          {
            String::String(&Path::getPath(Path::Domain)::str);
            __cxa_atexit(
              (void (__fastcall *)(void *))String::~String,
              &Path::getPath(Path::Domain)::str,
              (void *)&_mh_execute_header);
            __cxa_guard_release((__guard *)&`guard variable for'Path::getPath(Path::Domain)::str);
          }
          if ( (Path::getPath(Path::Domain)::isSet & 1) == 0 )
          {
            v19 = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, 0xFFFFu, 1);
            v20 = v19;
            if ( v19 )
            {
              if ( -[NSArray count](v19, "count") )
              {
                Path::getPath(Path::Domain)::isSet = 1;
                String::String(
                  &v21,
                  (const char *)objc_msgSend(-[NSArray objectAtIndex:](v20, "objectAtIndex:", 0), "UTF8String"));
                String::operator=(&Path::getPath(Path::Domain)::str);
                String::~String();
              }
            }
          }
          -[NSAutoreleasePool drain](v5, "drain");
          v9 = &Path::getPath(Path::Domain)::str;
    LABEL_34:
          result = String::String(a2, v9);
          break;
        default:
          -[NSAutoreleasePool drain](v4, "drain");
          result = String::String(a2, "");
          break;
      }
      return result;
    }

    String *__usercall Path::dataPath@<X0>(String *a1@<X8>)
    {
      return Path::getPath(0, a1);
    }

    String *__usercall Path::savePath@<X0>(String *a1@<X8>)
    {
      return Path::getPath(2, a1);
    }

    String *__usercall Path::updatePath@<X0>(String *a1@<X8>)
    {
      return Path::getPath(1, a1);
    }

    String *__usercall Path::cachePath@<X0>(String *a1@<X8>)
    {
      return Path::getPath(3, a1);
    }

    String *__usercall Path::tempPath@<X0>(String *a1@<X8>)
    {
      const char *v2; // x1
    
      v2 = -[NSString UTF8String](NSTemporaryDirectory(), "UTF8String");
      return String::String(a1, v2);
    }

    id __fastcall Path::excludeBackup(__int64 a1)
    {
      _QWORD *v1; // x2
      NSURL *v2; // x19
      id result; // x0
      __int64 v4; // [xsp+0h] [xbp-40h] BYREF
      char value; // [xsp+Fh] [xbp-31h] BYREF
    
      v1 = (_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v1 = (_QWORD *)*v1;
      v2 = +[NSURL fileURLWithPath:](
             &OBJC_CLASS___NSURL,
             "fileURLWithPath:",
             +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v1));
      if ( (id)-[NSString compare:options:](
                 -[UIDevice systemVersion](
                   +[UIDevice currentDevice](&OBJC_CLASS___UIDevice, "currentDevice"),
                   "systemVersion"),
                 "compare:options:",
                 CFSTR("5.0.1"),
                 64) != (id)1 )
      {
        value = 1;
        setxattr(
          -[NSString fileSystemRepresentation](-[NSURL path](v2, "path"), "fileSystemRepresentation"),
          "com.apple.MobileBackup",
          &value,
          1u,
          0,
          0);
      }
      result = -[NSString compare:options:](
                 -[UIDevice systemVersion](
                   +[UIDevice currentDevice](&OBJC_CLASS___UIDevice, "currentDevice"),
                   "systemVersion"),
                 "compare:options:",
                 CFSTR("5.1"),
                 64);
      if ( result != (id)-1LL )
        return (id)-[NSURL setResourceValue:forKey:error:](
                     v2,
                     "setResourceValue:forKey:error:",
                     +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 1, 0),
                     NSURLIsExcludedFromBackupKey,
                     &v4);
      return result;
    }

}; // end class Path
