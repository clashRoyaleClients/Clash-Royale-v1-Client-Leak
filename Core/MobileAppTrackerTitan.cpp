class MobileAppTrackerTitan
{
public:

    id __fastcall MobileAppTrackerTitan::start(__int64 a1, __int64 a2, int a3, int *a4)
    {
      id result; // x0
      _QWORD *v9; // x2
      NSString *v10; // x24
      _QWORD *v11; // x2
      _QWORD *v12; // x2
    
      result = -[NSString compare:options:](
                 -[UIDevice systemVersion](
                   +[UIDevice currentDevice](&OBJC_CLASS___UIDevice, "currentDevice"),
                   "systemVersion"),
                 "compare:options:",
                 CFSTR("6.0"),
                 64);
      if ( result != (id)-1LL )
      {
        v9 = (_QWORD *)(a1 + 8);
        if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
          v9 = (_QWORD *)*v9;
        v10 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v9);
        v11 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v11 = (_QWORD *)*v11;
        +[Tune initializeWithTuneAdvertiserId:tuneConversionKey:](
          &OBJC_CLASS___Tune,
          "initializeWithTuneAdvertiserId:tuneConversionKey:",
          v10,
          +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v11));
        if ( *a4 >= 1 )
        {
          v12 = a4 + 2;
          if ( a4[1] + 1 > 8 )
            v12 = (_QWORD *)*v12;
          +[Tune setUserId:](
            &OBJC_CLASS___Tune,
            "setUserId:",
            +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v12));
        }
        +[Tune setAppleAdvertisingIdentifier:advertisingTrackingEnabled:](
          &OBJC_CLASS___Tune,
          "setAppleAdvertisingIdentifier:advertisingTrackingEnabled:",
          -[ASIdentifierManager advertisingIdentifier](
            +[ASIdentifierManager sharedManager](&OBJC_CLASS___ASIdentifierManager, "sharedManager"),
            "advertisingIdentifier"),
          -[ASIdentifierManager isAdvertisingTrackingEnabled](
            +[ASIdentifierManager sharedManager](&OBJC_CLASS___ASIdentifierManager, "sharedManager"),
            "isAdvertisingTrackingEnabled"));
        if ( a3 )
          +[Tune setExistingUser:](&OBJC_CLASS___Tune, "setExistingUser:", 1);
        return +[Tune measureSession](&OBJC_CLASS___Tune, "measureSession");
      }
      return result;
    }

}; // end class MobileAppTrackerTitan
