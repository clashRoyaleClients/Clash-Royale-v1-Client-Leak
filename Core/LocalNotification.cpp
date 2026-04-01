class LocalNotification
{
public:

    __int64 __fastcall LocalNotification::addNotification(const String *a1, const String *a2, int a3)
    {
      const String *v6; // x4
      __int64 v7; // x19
      String v9; // [xsp+8h] [xbp-38h] BYREF
    
      String::String(&v9, "");
      v7 = LocalNotification::addNotification((LocalNotification *)&v9, a1, a2, a3, v6);
      String::~String((__int64)&v9);
      return v7;
    }

    UILocalNotification **__fastcall LocalNotification::addNotification(int *a1, __int64 a2, int a3, int *a4)
    {
      UILocalNotification *v8; // x19
      _QWORD *v9; // x2
      _QWORD *v10; // x2
      NSString *v11; // x2
      _QWORD *v12; // x2
      NSString *v13; // x20
      UILocalNotification **result; // x0
    
      v8 = -[UILocalNotification init](+[UILocalNotification alloc](&OBJC_CLASS___UILocalNotification, "alloc"), "init");
      -[UILocalNotification setFireDate:](
        v8,
        "setFireDate:",
        -[NSDate dateByAddingTimeInterval:](
          +[NSDate date](&OBJC_CLASS___NSDate, "date"),
          "dateByAddingTimeInterval:",
          (double)a3));
      -[UILocalNotification setTimeZone:](
        v8,
        "setTimeZone:",
        +[NSTimeZone defaultTimeZone](&OBJC_CLASS___NSTimeZone, "defaultTimeZone"));
      v9 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v9 = (_QWORD *)*v9;
      -[UILocalNotification setAlertBody:](
        v8,
        "setAlertBody:",
        +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v9));
      -[UILocalNotification setAlertAction:](
        v8,
        "setAlertAction:",
        -[NSBundle localizedStringForKey:value:table:](
          +[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"),
          "localizedStringForKey:value:table:",
          CFSTR("View Details"),
          &stru_10047EE80,
          0));
      if ( *a4 < 1 )
      {
        v11 = UILocalNotificationDefaultSoundName;
      }
      else
      {
        v10 = a4 + 2;
        if ( a4[1] + 1 > 8 )
          v10 = (_QWORD *)*v10;
        v11 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v10);
      }
      -[UILocalNotification setSoundName:](v8, "setSoundName:", v11);
      -[UILocalNotification setApplicationIconBadgeNumber:](v8, "setApplicationIconBadgeNumber:", 1);
      if ( *a1 >= 1 )
      {
        v12 = a1 + 2;
        if ( a1[1] + 1 > 8 )
          v12 = (_QWORD *)*v12;
        v13 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v12);
        -[UILocalNotification setUserInfo:](
          v8,
          "setUserInfo:",
          +[NSDictionary dictionaryWithObject:forKey:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObject:forKey:",
            v13,
            +[NSString stringWithCString:encoding:](
              &OBJC_CLASS___NSString,
              "stringWithCString:encoding:",
              LocalNotification::KEY_ID,
              +[NSString defaultCStringEncoding](&OBJC_CLASS___NSString, "defaultCStringEncoding"))));
      }
      -[UIApplication scheduleLocalNotification:](
        +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"),
        "scheduleLocalNotification:",
        v8);
      result = (UILocalNotification **)operator new(8);
      *result = v8;
      return result;
    }

    id LocalNotification::cancelAllNotifications()
    {
      return -[UIApplication cancelAllLocalNotifications](
               +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"),
               "cancelAllLocalNotifications");
    }

    id *__fastcall LocalNotification::~LocalNotification(id *a1)
    {
      objc_msgSend(*a1, "release");
      *a1 = 0;
      return a1;
    }

    id __fastcall LocalNotification::setBadgeNumber(int a1)
    {
      return -[UIApplication setApplicationIconBadgeNumber:](
               +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"),
               "setApplicationIconBadgeNumber:",
               a1);
    }

}; // end class LocalNotification
