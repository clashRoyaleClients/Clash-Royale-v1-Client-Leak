class GameCenter
{
public:

    _QWORD *__fastcall GameCenter::GameCenter(_QWORD *result)
    {
      *result = 0;
      return result;
    }

    void GameCenter::~GameCenter()
    {
      ;
    }

    id GameCenter::appBackgrounded()
    {
      id result; // x0
    
      result = (id)s_authViewController;
      if ( s_authViewController )
      {
        result = objc_msgSend((id)s_authViewController, "dismissViewControllerAnimated:completion:", 0, 0);
        s_authViewController = 0;
      }
      return result;
    }

    id __fastcall GameCenter::authenticate(_QWORD *a1)
    {
      GKLocalPlayer *v2; // x20
      _QWORD v4[5]; // [xsp+0h] [xbp-70h] BYREF
      _QWORD v5[5]; // [xsp+28h] [xbp-48h] BYREF
    
      if ( !*a1 )
        __assert_rtn(
          "authenticate",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/GameCenter.mm",
          119,
          "m_pListener");
      v2 = +[GKLocalPlayer localPlayer](&OBJC_CLASS___GKLocalPlayer, "localPlayer");
      if ( (unsigned int)-[GKLocalPlayer respondsToSelector:](v2, "respondsToSelector:", "setAuthenticateHandler:") )
        return -[GKLocalPlayer setAuthenticateHandler:](
                 v2,
                 "setAuthenticateHandler:",
                 v5,
                 v4[0],
                 v4[1],
                 v4[2],
                 v4[3],
                 v4[4],
                 _NSConcreteStackBlock,
                 3221225472LL,
                 ___ZN10GameCenter12authenticateEv_block_invoke,
                 &__block_descriptor_tmp46,
                 a1);
      else
        return -[GKLocalPlayer authenticateWithCompletionHandler:](
                 v2,
                 "authenticateWithCompletionHandler:",
                 v4,
                 _NSConcreteStackBlock,
                 3221225472LL,
                 ___ZN10GameCenter12authenticateEv_block_invoke_2,
                 &__block_descriptor_tmp48,
                 a1,
                 v5[0],
                 v5[1],
                 v5[2],
                 v5[3],
                 v5[4]);
    }

    id __fastcall GameCenter::requestFriends(TitanLoginMessage *this)
    {
      GKLocalPlayer *v2; // x20
      id result; // x0
      void **v4; // [xsp+8h] [xbp-38h] BYREF
      int v5; // [xsp+10h] [xbp-30h]
      int v6; // [xsp+14h] [xbp-2Ch]
      __int64 (__fastcall *v7)(int, id); // [xsp+18h] [xbp-28h]
      void *v8; // [xsp+20h] [xbp-20h]
      TitanLoginMessage *v9; // [xsp+28h] [xbp-18h]
    
      if ( !*(_QWORD *)this )
        __assert_rtn(
          "requestFriends",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/GameCenter.mm",
          140,
          "m_pListener");
      v2 = +[GKLocalPlayer localPlayer](&OBJC_CLASS___GKLocalPlayer, "localPlayer");
      result = (id)-[GKLocalPlayer isAuthenticated](v2, "isAuthenticated");
      if ( (_DWORD)result )
      {
        v4 = _NSConcreteStackBlock;
        v5 = -1073741824;
        v6 = 0;
        v7 = ___ZN10GameCenter14requestFriendsEv_block_invoke;
        v8 = &__block_descriptor_tmp57;
        v9 = this;
        return -[GKLocalPlayer loadFriendsWithCompletionHandler:](v2, "loadFriendsWithCompletionHandler:", &v4);
      }
      return result;
    }

    void __fastcall GameCenter::requestDetails(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
    {
      NSMutableArray *v10; // x21
      __int64 v11; // x26
      _QWORD *v12; // x24
      _QWORD *v13; // x2
      void **v14; // [xsp+0h] [xbp-B0h] BYREF
      int v15; // [xsp+8h] [xbp-A8h]
      int v16; // [xsp+Ch] [xbp-A4h]
      __int64 (__fastcall *v17)(int, id); // [xsp+10h] [xbp-A0h]
      void *v18; // [xsp+18h] [xbp-98h]
      __int64 v19; // [xsp+20h] [xbp-90h]
      _DWORD v20[8]; // [xsp+28h] [xbp-88h] BYREF
      String v21; // [xsp+48h] [xbp-68h] BYREF
    
      if ( -[GKLocalPlayer isAuthenticated](
             +[GKLocalPlayer localPlayer](&OBJC_CLASS___GKLocalPlayer, "localPlayer"),
             "isAuthenticated") )
      {
        String::String((__int64)&v21, a5);
        v10 = +[NSMutableArray arrayWithCapacity:](&OBJC_CLASS___NSMutableArray, "arrayWithCapacity:", a2);
        if ( a2 >= 1 )
        {
          v11 = 0;
          v12 = (_QWORD *)(a3 + 8);
          do
          {
            v13 = v12;
            if ( *((_DWORD *)v12 - 1) + 1 >= 9 )
              v13 = (_QWORD *)*v12;
            -[NSMutableArray addObject:](
              v10,
              "addObject:",
              +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v13));
            ++v11;
            v12 += 3;
          }
          while ( v11 < a2 );
        }
        v14 = _NSConcreteStackBlock;
        v15 = -973078528;
        v16 = 0;
        v17 = ___ZN10GameCenter14requestDetailsEiP6String19GameCenterImageTypeRKS0__block_invoke;
        v18 = &__block_descriptor_tmp82;
        v19 = a1;
        v20[6] = a4;
        String::String((__int64)v20, &v21);
        +[GKPlayer loadPlayersForIdentifiers:withCompletionHandler:](
          &OBJC_CLASS___GKPlayer,
          "loadPlayersForIdentifiers:withCompletionHandler:",
          v10,
          &v14);
        String::~String((__int64)v20);
        String::~String((__int64)&v21);
      }
    }

    void __fastcall GameCenter::openGameCenterApplication(__int64 a1, String *a2)
    {
      unsigned __int8 v3; // w8
      _QWORD *v4; // x2
      __int64 v5; // [xsp+0h] [xbp-40h] BYREF
      _QWORD *v6; // [xsp+8h] [xbp-38h] BYREF
      String v7; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = atomic_load((unsigned __int8 *)&`guard variable for'GameCenter::openGameCenterApplication(String const&)::protocol);
      if ( (v3 & 1) == 0
        && __cxa_guard_acquire((__guard *)&`guard variable for'GameCenter::openGameCenterApplication(String const&)::protocol) )
      {
        String::String(&GameCenter::openGameCenterApplication(String const&)::protocol, "gamecenter:");
        __cxa_atexit(
          (void (__fastcall *)(void *))String::~String,
          &GameCenter::openGameCenterApplication(String const&)::protocol,
          (void *)&_mh_execute_header);
        __cxa_guard_release((__guard *)&`guard variable for'GameCenter::openGameCenterApplication(String const&)::protocol);
      }
      if ( String::endsWith(&GameCenter::openGameCenterApplication(String const&)::protocol, "/")
        || String::startsWith(a2, "/") )
      {
        operator+(&v5, &GameCenter::openGameCenterApplication(String const&)::protocol, a2);
      }
      else if ( GameCenter::openGameCenterApplication(String const&)::protocol.m_length )
      {
        operator+((__int64)&GameCenter::openGameCenterApplication(String const&)::protocol, "/", (__int64)&v7);
        operator+(&v5, &v7, a2);
        String::~String((__int64)&v7);
      }
      else
      {
        String::String((__int64)&v5, a2);
      }
      if ( HIDWORD(v5) + 1 > 8 )
        v4 = v6;
      else
        v4 = &v6;
      -[UIApplication openURL:](
        +[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"),
        "openURL:",
        +[NSURL URLWithString:](
          &OBJC_CLASS___NSURL,
          "URLWithString:",
          +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v4)));
      String::~String((__int64)&v5);
    }

    GKAchievement *__fastcall GameCenter::reportAchievementProgress(double a1, __int64 a2, __int64 a3)
    {
      GKAchievement *v5; // x19
      _QWORD *v6; // x2
      GKAchievement *result; // x0
      GKAchievement *v8; // x19
    
      v5 = +[GKAchievement alloc](&OBJC_CLASS___GKAchievement, "alloc");
      v6 = (_QWORD *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v6 = (_QWORD *)*v6;
      result = -[GKAchievement autorelease](
                 -[GKAchievement initWithIdentifier:](
                   v5,
                   "initWithIdentifier:",
                   +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v6)),
                 "autorelease");
      v8 = result;
      if ( result )
      {
        -[GKAchievement setPercentComplete:](result, "setPercentComplete:", a1);
        return (GKAchievement *)-[GKAchievement reportAchievementWithCompletionHandler:](
                                  v8,
                                  "reportAchievementWithCompletionHandler:",
                                  &__block_literal_global_7);
      }
      return result;
    }

    __int64 __fastcall GameCenter::reportAchievementsProgress(__int64 a1, int a2, __int64 a3, double *a4)
    {
      __int64 result; // x0
      _QWORD *v8; // x22
      GKAchievement *v9; // x21
      _QWORD *v10; // x2
      GKAchievement *v11; // x0
      GKAchievement *v12; // x21
      double v13; // t1
      NSMutableArray *v14; // [xsp+18h] [xbp-58h]
    
      result = (__int64)+[GKAchievement respondsToSelector:](
                          &OBJC_CLASS___GKAchievement,
                          "respondsToSelector:",
                          "reportAchievements:withCompletionHandler:");
      if ( (result & 1) != 0 )
      {
        v14 = +[NSMutableArray arrayWithCapacity:](&OBJC_CLASS___NSMutableArray, "arrayWithCapacity:", a2);
        if ( a2 >= 1 )
        {
          v8 = (_QWORD *)(a3 + 8);
          do
          {
            v9 = +[GKAchievement alloc](&OBJC_CLASS___GKAchievement, "alloc");
            v10 = v8;
            if ( *((_DWORD *)v8 - 1) + 1 >= 9 )
              v10 = (_QWORD *)*v8;
            v11 = -[GKAchievement autorelease](
                    -[GKAchievement initWithIdentifier:](
                      v9,
                      "initWithIdentifier:",
                      +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v10)),
                    "autorelease");
            v12 = v11;
            if ( v11 )
            {
              -[GKAchievement setPercentComplete:](v11, "setPercentComplete:", *a4);
              -[NSMutableArray addObject:](v14, "addObject:", v12);
            }
            --a2;
            ++a4;
            v8 += 3;
          }
          while ( a2 );
        }
        return (__int64)+[GKAchievement reportAchievements:withCompletionHandler:](
                          &OBJC_CLASS___GKAchievement,
                          "reportAchievements:withCompletionHandler:",
                          v14,
                          &__block_literal_global165);
      }
      else if ( a2 > 0 )
      {
        do
        {
          v13 = *a4++;
          result = (__int64)GameCenter::reportAchievementProgress(v13, result, a3);
          --a2;
          a3 += 24;
        }
        while ( a2 );
      }
      return result;
    }

}; // end class GameCenter
