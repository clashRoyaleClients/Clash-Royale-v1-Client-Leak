class HockeyApp
{
public:

    void __fastcall HockeyApp::start(DeviceLinkConfirmationScreen *this, const String *a2)
    {
      Class v3; // x20
      UIDevice *v4; // x22
      NSString *v5; // x23
      NSArray *v6; // x19
      id v7; // x22
      int v8; // w23
      id v9; // x23
      _QWORD *v10; // x2
      NSString *v11; // x21
      id v12; // x21
    
      v3 = NSClassFromString(&cfstr_Bithockeymanag.isa);
      v4 = objc_retainAutoreleasedReturnValue(+[UIDevice currentDevice](&OBJC_CLASS___UIDevice, "currentDevice"));
      v5 = objc_retainAutoreleasedReturnValue(-[UIDevice systemVersion](v4, "systemVersion"));
      v6 = objc_retainAutoreleasedReturnValue(-[NSString componentsSeparatedByString:](v5, "componentsSeparatedByString:", CFSTR(".")));
      objc_release(v5);
      objc_release(v4);
      v7 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndex:](v6, "objectAtIndex:", 0));
      v8 = (unsigned int)objc_msgSend(v7, "intValue");
      objc_release(v7);
      if ( v3 && v8 >= 6 )
      {
        v9 = objc_retainAutoreleasedReturnValue(-[objc_class sharedHockeyManager](v3, "sharedHockeyManager"));
        v10 = (_QWORD *)((char *)this + 8);
        if ( *((_DWORD *)this + 1) + 1 > 8 )
          v10 = (_QWORD *)*v10;
        v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v10));
        objc_msgSend(v9, "configureWithIdentifier:", v11);
        objc_release(v11);
        objc_release(v9);
        v12 = objc_retainAutoreleasedReturnValue(-[objc_class sharedHockeyManager](v3, "sharedHockeyManager"));
        objc_msgSend(v12, "startManager");
        objc_release(v12);
        NSLog(&cfstr_HockeyEnabled.isa);
      }
      objc_release(v6);
    }

}; // end class HockeyApp
