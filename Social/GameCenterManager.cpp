class GameCenterManager
{
public:

    __int64 __fastcall GameCenterManager::GameCenterManager(__int64 a1)
    {
      GameCenter *v2; // x25
    
      *(_QWORD *)a1 = off_10046D408;
      String::String((String *)(a1 + 24));
      String::String((String *)(a1 + 48));
      String::String((String *)(a1 + 72));
      String::String((String *)(a1 + 96));
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      *(_QWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      GameCenterManager::initializeMembers((GameCenterManager *)a1);
      v2 = (GameCenter *)operator new(16);
      GameCenter::GameCenter(v2);
      *(_QWORD *)(a1 + 8) = v2;
      *(_QWORD *)v2 = a1;
      *(_BYTE *)(a1 + 17) = 0;
      return a1;
    }

    __int64 __fastcall GameCenterManager::init(__int64 a1, _DWORD *a2)
    {
      int v4; // w2
      int v5; // w2
      __int64 result; // x0
      _QWORD v7[3]; // [xsp+8h] [xbp-68h] BYREF
      String v8; // [xsp+20h] [xbp-50h] BYREF
      __int64 v9[3]; // [xsp+38h] [xbp-38h] BYREF
    
      operator+(v7, "Initializing GameCenterManager: existingId: ", a2);
      operator+(v7, ", GameCenter ID: ");
      operator+(v9, &v8, (String *)(a1 + 72));
      Debugger::hudPrint((__siginfo *)v9, (const String *)0xFFFFFFFFLL, v4);
      String::~String();
      String::~String();
      String::~String();
      if ( *a2 && (unsigned int)String::equals(a2, a1 + 72) )
      {
        Debugger::hudPrint(
          (__siginfo *)"GameCenterManager: Already logged in with the right account",
          (const char *)0xFFFFFFFFLL,
          v5);
        GameCenterManager::boundAccount((__darwin_pthread_attr_t *)a1);
        *(_BYTE *)(a1 + 133) = 0;
        return GameCenter::requestFriends(*(#1274 **)(a1 + 8));
      }
      else
      {
        Debugger::hudPrint((__siginfo *)"GameCenterManager setting loggedIn as false", (const char *)0xFFFFFFFFLL, v5);
        *(_QWORD *)(a1 + 120) = 0;
        String::operator=(a1 + 48, "");
        *(_DWORD *)(a1 + 128) = 0;
        String::operator=((String *)(a1 + 24));
        *(_BYTE *)(a1 + 16) = 0;
        result = LogicDataTables::getClientGlobals();
        if ( result )
        {
          if ( *(_BYTE *)(result + 322) )
            *(_BYTE *)(a1 + 17) = 0;
        }
      }
      return result;
    }

    __int64 __fastcall GameCenterManager::boundAccount(__int64 a1)
    {
      int v2; // w2
      __int64 result; // x0
      _QWORD v4[3]; // [xsp+8h] [xbp-38h] BYREF
    
      String::operator=((String *)(a1 + 24));
      String::operator=((String *)(a1 + 48));
      operator+(v4, "GameCenter account bound, ID:", a1 + 72);
      Debugger::hudPrint((__siginfo *)v4, (const String *)0xFFFFFFFFLL, v2);
      String::~String();
      String::operator=(a1 + 96, "");
      result = GameCenterManager::clearGameCenterSignature((GameCenterManager *)a1);
      *(_BYTE *)(a1 + 16) = 1;
      return result;
    }

    __int64 __fastcall GameCenterManager::requestFriendsFromGC(__int64 a1)
    {
      *(_BYTE *)(a1 + 133) = 0;
      return GameCenter::requestFriends(*(#1274 **)(a1 + 8));
    }

    __int64 __fastcall GameCenterManager::~GameCenterManager(__int64 a1)
    {
      void *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x20
      __int64 v5; // x0
      void *v6; // x0
      void *v7; // x0
    
      *(_QWORD *)a1 = off_10046D408;
      v2 = *(void **)(a1 + 8);
      if ( v2 )
      {
        GameCenter::~GameCenter(*(GameCenter **)(a1 + 8));
        operator delete(v2);
      }
      v3 = *(_QWORD *)(a1 + 136);
      if ( (int)((unsigned __int64)(*(_QWORD *)(a1 + 144) - v3) >> 3) >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *(_QWORD *)(v3 + 8 * v4);
          do
          {
            if ( v5 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
              v3 = *(_QWORD *)(a1 + 136);
            }
            *(_QWORD *)(v3 + 8 * v4) = 0;
            v3 = *(_QWORD *)(a1 + 136);
            v5 = *(_QWORD *)(v3 + 8 * v4);
          }
          while ( v5 );
          ++v4;
        }
        while ( v4 < (int)((unsigned __int64)(*(_QWORD *)(a1 + 144) - v3) >> 3) );
      }
      *(_QWORD *)(a1 + 144) = v3;
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(a1 + 200);
      GameCenterManager::clearGameCenterSignature((GameCenterManager *)a1);
      GameCenterManager::initializeMembers((GameCenterManager *)a1);
      v6 = *(void **)(a1 + 200);
      if ( v6 )
        operator delete(v6);
      std::vector<GameCenterPlayer>::~vector(a1 + 160);
      v7 = *(void **)(a1 + 136);
      if ( v7 )
        operator delete(v7);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      return a1;
    }

    void __fastcall GameCenterManager::clearGameCenterSignature(__int64 a1)
    {
      _QWORD *v2; // x0
    
      v2 = *(_QWORD **)(a1 + 192);
      if ( v2 )
      {
        if ( *v2 )
        {
          operator delete[](*v2);
          v2 = *(_QWORD **)(a1 + 192);
        }
        *v2 = 0;
        if ( v2[4] )
        {
          operator delete[](v2[4]);
          v2 = *(_QWORD **)(a1 + 192);
        }
        v2[4] = 0;
        if ( v2[2] )
        {
          operator delete[](v2[2]);
          v2 = *(_QWORD **)(a1 + 192);
        }
        v2[2] = 0;
        if ( v2 )
          operator delete(v2);
      }
      *(_QWORD *)(a1 + 192) = 0;
    }

    // attributes: thunk
    void __fastcall GameCenterManager::~GameCenterManager(__int64 this)
    {
      __ZN17GameCenterManagerD2Ev(this);
    }

    void __fastcall GameCenterManager::~GameCenterManager(LogicDiamondsAddedCommand *this)
    {
      GameCenterManager::~GameCenterManager((__int64)this);
      operator delete(this);
    }

    __int64 __fastcall GameCenterManager::constructInstance(LogicDiamondsAddedCommand *this)
    {
      __int64 v1; // x19
      __int64 result; // x0
    
      v1 = operator new(224);
      result = GameCenterManager::GameCenterManager(v1);
      GameCenterManager::sm_pInstance = v1;
      return result;
    }

    __int64 __fastcall GameCenterManager::destructInstance(LogicDiamondsAddedCommand *this)
    {
      __int64 result; // x0
    
      result = GameCenterManager::sm_pInstance;
      if ( GameCenterManager::sm_pInstance )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)GameCenterManager::sm_pInstance + 8LL))(GameCenterManager::sm_pInstance);
      GameCenterManager::sm_pInstance = 0;
      return result;
    }

    bool __fastcall GameCenterManager::isBoundWithGame(LogicDiamondsAddedCommand *this)
    {
      return *((_DWORD *)this + 6) > 0;
    }

    void __fastcall GameCenterManager::friendListReceived(__int64 a1, char *a2)
    {
      int v4; // w2
      __int64 v5; // x27
      ChallengeDoneStreamItem *v6; // x24
      const String *FacebookId; // x8
      FacebookFriend *v8; // x25
      const String *Name; // x8
      __int64 AvatarId; // x0
      #1236 *v11; // x0
      int ExpLevel; // w0
      int v13; // w2
      const String *GamecenterId; // x8
      int Score; // w0
      __int64 AllianceId; // x0
      #1236 *v17; // x0
      const String *AllianceName; // x8
      int AllianceRole; // w0
      __int64 v20; // x8
      unsigned __int64 v21; // x22
      unsigned int v22; // w21
      String v23; // [xsp+10h] [xbp-D0h] BYREF
      String v24; // [xsp+28h] [xbp-B8h] BYREF
      String v25; // [xsp+40h] [xbp-A0h] BYREF
      FacebookFriend *v26; // [xsp+58h] [xbp-88h] BYREF
      String v27; // [xsp+60h] [xbp-80h] BYREF
      __siginfo v28; // [xsp+78h] [xbp-68h] BYREF
    
      String::getFormatted(
        (__int64 *)&v28.si_signo,
        (String *)"Game Center Friends received from game server (count %i)",
        a2,
        *((unsigned int *)a2 + 3));
      Debugger::hudPrint(&v28, (const String *)0xFFFFFFFFLL, v4);
      String::~String();
      GameCenterManager::clearInGameFriends((LogicDiamondsAddedCommand *)a1);
      if ( *((int *)a2 + 3) >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(ChallengeDoneStreamItem **)(*(_QWORD *)a2 + 8 * v5);
          FacebookId = (const String *)FriendEntry::getFacebookId(v6);
          if ( FacebookId )
            String::String(&v27, FacebookId);
          else
            String::String(&v27, "");
          v8 = (FacebookFriend *)operator new(240);
          FacebookFriend::FacebookFriend(v8, &v27);
          v26 = v8;
          FacebookFriend::setLoadedFromGamecenter((__int64)v8, 1);
          Name = (const String *)FriendEntry::getName(v6);
          if ( Name )
            String::String(&v25, Name);
          else
            String::String(&v25, "");
          FacebookFriend::setAvatarName(v8, &v25);
          String::~String();
          AvatarId = FriendEntry::getAvatarId(v6);
          v11 = (#1236 *)LogicLong::clone(AvatarId);
          FacebookFriend::setAvatarId(v8, v11);
          ExpLevel = FriendEntry::getExpLevel(v6);
          FacebookFriend::setExpLevel((__int64)v8, ExpLevel);
          GamecenterId = (const String *)FriendEntry::getGamecenterId(v6);
          if ( GamecenterId )
          {
            String::String(&v24, GamecenterId);
          }
          else
          {
            Debugger::hudPrint((__siginfo *)"GameCenterManager, gamecenter id is null", (const char *)0xFFFFFFFFLL, v13);
            String::String(&v24, "");
          }
          FacebookFriend::setGameCenterId(v8, &v24);
          String::~String();
          Score = FriendEntry::getScore(v6);
          FacebookFriend::setScore((__int64)v8, Score);
          if ( FriendEntry::getAllianceId(v6) )
          {
            AllianceId = FriendEntry::getAllianceId(v6);
            v17 = (#1236 *)LogicLong::clone(AllianceId);
            FacebookFriend::setAllianceId(v8, v17);
            AllianceName = (const String *)FriendEntry::getAllianceName(v6);
            if ( AllianceName )
              FacebookFriend::setAllianceName(v8, AllianceName);
            AllianceRole = FriendEntry::getAllianceRole(v6);
            FacebookFriend::setAllianceRank((__int64)v8, AllianceRole);
          }
          else
          {
            FacebookFriend::setAllianceId(v8, 0);
            String::String(&v23, "");
            FacebookFriend::setAllianceName(v8, &v23);
            String::~String();
            FacebookFriend::setAllianceBadgeFromData(v8, 0);
          }
          v20 = *(_QWORD *)(a1 + 160);
          if ( *(_QWORD *)(a1 + 168) != v20 )
          {
            v21 = 0;
            v22 = 1;
            while ( !(unsigned int)String::equals(v20 + 48 * v21, (char *)v8 + 8) )
            {
              v21 = v22;
              v20 = *(_QWORD *)(a1 + 160);
              ++v22;
              if ( v21 >= 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 168) - v20) >> 4) )
                goto LABEL_23;
            }
            FacebookFriend::setFirstName(v8, (const String *)(*(_QWORD *)(a1 + 160) + 48 * v21 + 24));
            FacebookFriend::setFullName(v8, (const String *)(*(_QWORD *)(a1 + 160) + 48 * v21 + 24));
          }
    LABEL_23:
          std::vector<FacebookFriend *>::push_back(a1 + 136, &v26);
          if ( v6 )
          {
            FriendEntry::destruct(v6);
            String::~String();
            operator delete(v6);
          }
          String::~String();
          ++v5;
        }
        while ( v5 < *((int *)a2 + 3) );
      }
      *(_BYTE *)(a1 + 132) = 1;
      if ( *(_QWORD *)a2 )
        operator delete[](*(_QWORD *)a2);
      operator delete(a2);
    }

    _QWORD *__fastcall GameCenterManager::clearInGameFriends(_QWORD *this)
    {
      _QWORD *v1; // x19
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x20
    
      v1 = this;
      v2 = *(this + 17);
      v3 = *(this + 18);
      if ( (int)((unsigned __int64)(v3 - v2) >> 3) >= 1 )
      {
        v4 = 0;
        do
        {
          this = *(_QWORD **)(v2 + 8 * v4);
          if ( this )
          {
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*this + 8LL))(this);
            v2 = v1[17];
            v3 = v1[18];
          }
          ++v4;
        }
        while ( v4 < (int)((unsigned __int64)(v3 - v2) >> 3) );
      }
      v1[18] = v2;
      return this;
    }

    __int64 __fastcall GameCenterManager::update(__int64 this, float a2)
    {
      __int64 v2; // x19
    
      v2 = this;
      if ( !*(_BYTE *)(this + 134) && *(_QWORD *)(this + 168) != *(_QWORD *)(this + 160) )
        this = GameCenterManager::askPlayingFriends((LogicDiamondsAddedCommand *)this);
      if ( *(_BYTE *)(v2 + 185) )
      {
        this = GameMode::getInstance();
        if ( this )
        {
          this = GameCenterManager::sendBindAccountMessage((LogicDiamondsAddedCommand *)v2, (const String *)(v2 + 72), 0);
          *(_BYTE *)(v2 + 185) = 0;
        }
      }
      if ( *(_BYTE *)(v2 + 184) )
        return GameCenterManager::refreshGameCenterAchievementsInternal((LogicDiamondsAddedCommand *)v2);
      return this;
    }

    __int64 __fastcall GameCenterManager::askPlayingFriends(__int64 this, __int64 a2, int a3)
    {
      __int64 v3; // x19
      AskForPlayingGamecenterFriendsMessage *v4; // x20
      _QWORD *v5; // x21
      __int64 v6; // x25
      unsigned __int64 v7; // x27
      unsigned int v8; // w23
      String *v9; // x22
      String *v10; // [xsp+8h] [xbp-58h] BYREF
    
      v3 = this;
      if ( ServerConnection::sm_pInstance )
      {
        if ( *(_DWORD *)ServerConnection::sm_pInstance == 6 )
        {
          Debugger::hudPrint((__siginfo *)"Ask friends from game server", (const char *)0xFFFFFFFFLL, a3);
          this = LogicDataTables::getClientGlobals();
          if ( *(_BYTE *)(this + 380) )
          {
            v4 = (AskForPlayingGamecenterFriendsMessage *)operator new(80);
            AskForPlayingGamecenterFriendsMessage::AskForPlayingGamecenterFriendsMessage(v4);
            v5 = (_QWORD *)operator new(16);
            *v5 = 0;
            v5[1] = 0;
            v6 = *(_QWORD *)(v3 + 160);
            if ( *(_QWORD *)(v3 + 168) != v6 )
            {
              v7 = 0;
              v8 = 1;
              do
              {
                v9 = (String *)operator new(24);
                String::String(v9, (const String *)(v6 + 48 * v7));
                v10 = v9;
                LogicArrayList<String *>::add((__int64)v5, (__int64 *)&v10);
                v7 = v8;
                v6 = *(_QWORD *)(v3 + 160);
                ++v8;
              }
              while ( v7 < 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(v3 + 168) - v6) >> 4) );
            }
            AskForPlayingGamecenterFriendsMessage::setGamecenterIds((__int64)v4, (__int64)v5);
            this = MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v4);
            *(_BYTE *)(v3 + 134) = 1;
          }
        }
      }
      return this;
    }

    __int64 __fastcall GameCenterManager::sendBindAccountMessageToPendingAccount(String *this, bool a2)
    {
      return GameCenterManager::sendBindAccountMessage((LogicDiamondsAddedCommand *)this, this + 3, a2);
    }

    void __fastcall GameCenterManager::refreshGameCenterAchievementsInternal(LogicDiamondsAddedCommand *this)
    {
      __int64 PlayerAvatar; // x22
      __int64 Table; // x20
      int v4; // w23
      _QWORD *v5; // x1
      int v6; // w0
      int v7; // w23
      __int64 v8; // x25
      __int64 v9; // x9
      bool v10; // cf
      __int64 v11; // x9
      __int64 v12; // x0
      __int64 v13; // x21
      __int64 v14; // x25
      __int64 v15; // x23
      int v16; // w0
      __int64 v17; // x0
      __int64 v18; // x26
      int v19; // w25
      __int64 v20; // x28
      bool IsAchievementRewardClaimed; // w27
      int AchievementProgress; // w0
      __int64 v23; // x24
      int v24; // w8
      int v25; // w9
      __int64 ClientGlobals; // x0
      double v27; // d8
      __int64 Name; // x0
      const char *v29; // x1
      _QWORD *v30; // x8
      int v31; // w2
      __int64 v32; // x0
      const char *v33; // x1
      _QWORD *v34; // x8
      const String *v35; // x1
      __int64 v36; // x21
      const LogicAchievementData *v37; // x0
      __int64 v38; // x20
      __int64 v39; // x22
      double *v40; // [xsp+10h] [xbp-A0h]
      String v41; // [xsp+18h] [xbp-98h] BYREF
      __siginfo v42; // [xsp+30h] [xbp-80h] BYREF
    
      if ( LogicDataTables::getClientGlobals() )
      {
        if ( *(_BYTE *)(LogicDataTables::getClientGlobals() + 321) )
        {
          if ( *((_BYTE *)this + 16) )
          {
            if ( (unsigned int)String::equals((char *)this + 24, (char *)this + 72) )
            {
              if ( *((int *)this + 6) >= 1 )
              {
                if ( GameMode::getInstance() )
                {
                  GameMode::getInstance();
                  if ( GameMode::getPlayerAvatar() )
                  {
                    GameMode::getInstance();
                    PlayerAvatar = GameMode::getPlayerAvatar();
                    Table = LogicDataTables::getTable(60);
                    if ( *(_BYTE *)(LogicDataTables::getClientGlobals() + 475) )
                    {
                      if ( *(_BYTE *)(LogicDataTables::getClientGlobals() + 474)
                        && *((_QWORD *)this + 26) == *((_QWORD *)this + 25)
                        && (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) >= 1 )
                      {
                        v4 = 0;
                        do
                        {
                          v42.si_addr = (void *)0xBFF0000000000000LL;
                          v5 = (_QWORD *)*((_QWORD *)this + 26);
                          if ( v5 == *((_QWORD **)this + 27) )
                          {
                            std::vector<double>::_M_insert_aux((_DWORD)this + 200, v5);
                          }
                          else
                          {
                            *v5 = 0xBFF0000000000000LL;
                            *((_QWORD *)this + 26) = v5 + 1;
                          }
                          ++v4;
                        }
                        while ( v4 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
                      }
                      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
                      v7 = v6;
                      v8 = v6;
                      v9 = 24LL * v6;
                      v10 = __CFADD__(v9, 16);
                      v11 = v9 + 16;
                      if ( v10 )
                        v11 = -1;
                      if ( is_mul_ok(v6, 0x18u) )
                        v12 = v11;
                      else
                        v12 = -1;
                      v13 = operator new[](v12);
                      *(_QWORD *)v13 = 24;
                      *(_QWORD *)(v13 + 8) = v8;
                      if ( v7 )
                      {
                        v14 = 0;
                        v15 = 24LL * v7;
                        do
                        {
                          String::String((String *)(v13 + v14 + 16));
                          v14 += 24;
                        }
                        while ( v15 != v14 );
                      }
                      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
                      if ( is_mul_ok(v16, 8u) )
                        v17 = 8LL * v16;
                      else
                        v17 = -1;
                      v40 = (double *)operator new[](v17);
                      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) >= 1 )
                      {
                        v18 = 0;
                        v19 = 0;
                        while ( 1 )
                        {
                          v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v18);
                          if ( !*(_BYTE *)(v20 + 124) )
                          {
                            IsAchievementRewardClaimed = LogicClientAvatar::getIsAchievementRewardClaimed(
                                                           PlayerAvatar,
                                                           (AreaEffectObject *)v20);
                            AchievementProgress = LogicClientAvatar::getAchievementProgress(
                                                    PlayerAvatar,
                                                    (AreaEffectObject *)v20);
                            if ( IsAchievementRewardClaimed )
                            {
                              v23 = 100;
                            }
                            else
                            {
                              v24 = *(_DWORD *)(v20 + 104);
                              v25 = AchievementProgress >= v24 ? *(_DWORD *)(v20 + 104) : AchievementProgress;
                              v23 = (unsigned int)(100 * v25 / v24);
                            }
                            ClientGlobals = LogicDataTables::getClientGlobals();
                            if ( (int)v23 > 0 || *(_BYTE *)(ClientGlobals + 473) )
                            {
                              if ( !*(_BYTE *)(LogicDataTables::getClientGlobals() + 474) )
                              {
                                v27 = (double)(int)v23;
    LABEL_43:
                                LogicData::getName((AreaEffectObject *)v20);
                                String::operator=((String *)(v13 + 16 + 24LL * v19));
                                v40[v19] = v27;
                                Name = LogicData::getName((AreaEffectObject *)v20);
                                v30 = (_QWORD *)(Name + 8);
                                if ( *(_DWORD *)(Name + 4) + 1 > 8 )
                                  v30 = (_QWORD *)*v30;
                                String::getFormatted(
                                  (__int64 *)&v42.si_signo,
                                  (String *)"Achievement updated (new): %s progress: %i",
                                  v29,
                                  v30,
                                  v23);
                                Debugger::hudPrint(&v42, (const String *)0xFFFFFFFFLL, v31);
                                String::~String();
                                v32 = LogicData::getName((AreaEffectObject *)v20);
                                v34 = (_QWORD *)(v32 + 8);
                                if ( *(_DWORD *)(v32 + 4) + 1 > 8 )
                                  v34 = (_QWORD *)*v34;
                                String::getFormatted(
                                  (__int64 *)&v41.m_length,
                                  (String *)"Achievement updated (new): %s progress: %i",
                                  v33,
                                  v34,
                                  v23);
                                Debugger::print((Debugger *)&v41, v35);
                                String::~String();
                                ++v19;
                                if ( *(_BYTE *)(LogicDataTables::getClientGlobals() + 474) )
                                  *(double *)(*((_QWORD *)this + 25) + 8 * v18) = v27;
                                goto LABEL_49;
                              }
                              v27 = (double)(int)v23;
                              if ( *(double *)(*((_QWORD *)this + 25) + 8 * v18) < (double)(int)v23 )
                                goto LABEL_43;
                            }
                          }
    LABEL_49:
                          if ( ++v18 >= (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) )
                            goto LABEL_56;
                        }
                      }
                      v19 = 0;
    LABEL_56:
                      GameCenter::reportAchievementsProgress(*((GameCenter **)this + 1), v19, (String *)(v13 + 16), v40);
                      v38 = *(_QWORD *)(v13 + 8);
                      if ( 24 * v38 )
                      {
                        v39 = 0;
                        do
                        {
                          String::~String();
                          v39 -= 24;
                        }
                        while ( 24 * v38 + v39 );
                      }
                      operator delete[](v13);
                      operator delete[](v40);
                    }
                    else if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) >= 1 )
                    {
                      v36 = 0;
                      do
                      {
                        v37 = (const LogicAchievementData *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(
                                                              Table,
                                                              v36);
                        GameCenterManager::refreshAchievement(this, v37);
                        v36 = (unsigned int)(v36 + 1);
                      }
                      while ( (int)v36 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
                    }
                    *((_BYTE *)this + 184) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }

    __int64 __fastcall GameCenterManager::authorize(__int64 this)
    {
      if ( !*(_BYTE *)(this + 17) )
      {
        *(_BYTE *)(this + 17) = 1;
        return GameCenter::authenticate(*(GameCenter **)(this + 8));
      }
      return this;
    }

    __int64 __fastcall GameCenterManager::gameCenterAuthentication(__int64 a1, int a2, __int64 a3, __int64 a4)
    {
      String *v6; // x20
      __int64 v7; // x23
      signed __int64 v8; // x24
      __int64 v9; // x0
      void *v10; // x0
      signed __int64 v11; // x24
      __int64 v12; // x0
      void *v13; // x0
      signed __int64 v14; // x24
      __int64 v15; // x0
      void *v16; // x0
      int v17; // w2
      int v18; // w2
      const String *v19; // x1
      const String *v20; // x2
      __int64 result; // x0
      _QWORD v22[3]; // [xsp+0h] [xbp-A0h] BYREF
      String v23; // [xsp+18h] [xbp-88h] BYREF
      __siginfo v24; // [xsp+30h] [xbp-70h] BYREF
    
      *(_BYTE *)(a1 + 185) = 0;
      v6 = (String *)(a1 + 72);
      if ( a2 )
      {
        String::operator=((String *)(a1 + 72));
        String::operator=((String *)(a1 + 96));
        GameCenterManager::clearGameCenterSignature(a1);
        if ( a4 )
        {
          v7 = operator new(56);
          *(_QWORD *)(a1 + 192) = v7;
          v8 = *(int *)(a4 + 8);
          if ( v8 < 0 )
            v9 = -1;
          else
            v9 = *(int *)(a4 + 8);
          v10 = (void *)operator new[](v9);
          *(_QWORD *)v7 = v10;
          *(_DWORD *)(v7 + 8) = v8;
          memcpy(v10, *(const void **)a4, v8);
          v11 = *(int *)(a4 + 24);
          if ( v11 < 0 )
            v12 = -1;
          else
            v12 = *(int *)(a4 + 24);
          v13 = (void *)operator new[](v12);
          *(_QWORD *)(v7 + 16) = v13;
          *(_DWORD *)(v7 + 24) = v11;
          memcpy(v13, *(const void **)(a4 + 16), v11);
          v14 = *(int *)(a4 + 40);
          if ( v14 < 0 )
            v15 = -1;
          else
            v15 = *(int *)(a4 + 40);
          v16 = (void *)operator new[](v15);
          *(_QWORD *)(v7 + 32) = v16;
          *(_DWORD *)(v7 + 40) = v14;
          memcpy(v16, *(const void **)(a4 + 32), v14);
          *(_QWORD *)(v7 + 48) = *(_QWORD *)(a4 + 48);
        }
        operator+(&v24.si_addr, "Logged in to Gamecenter, alias ", a1 + 96);
        Debugger::hudPrint((__siginfo *)&v24.si_addr, (const String *)0xFFFFFFFFLL, v17);
        String::~String();
        operator+(v22, "Logged in GameCenterID:", v6);
        operator+(v22, ", game account gamecenterID: ");
        operator+((__int64 *)&v24.si_signo, &v23, (String *)(a1 + 24));
        Debugger::hudPrint(&v24, (const String *)0xFFFFFFFFLL, v18);
        String::~String();
        String::~String();
        String::~String();
        if ( *(int *)(a1 + 24) >= 1 && (unsigned int)String::equals(a1 + 24, v6) )
        {
          GameCenterManager::boundAccount(a1);
          *(_BYTE *)(a1 + 133) = 0;
          return GameCenter::requestFriends(*(#1274 **)(a1 + 8));
        }
        else
        {
          result = EventTracker::accountConnectedWithGameCenter(v6, v19, v20);
          *(_BYTE *)(a1 + 185) = 1;
        }
      }
      else
      {
        result = String::operator=(a1 + 72, "");
        *(_BYTE *)(a1 + 16) = 0;
      }
      return result;
    }

    __int64 __fastcall GameCenterManager::sendBindAccountMessage(
            LogicDiamondsAddedCommand *this,
            const String *a2,
            char a3)
    {
      SpellTargetIndicator *v6; // x19
      String *v7; // x22
      const char *v8; // x1
      _QWORD *v9; // x8
      const String *v10; // x1
      String *v11; // x21
      Application *v12; // x21
      __int64 v13; // x8
      char *v14; // x9
      __int64 i; // x10
      String v17; // [xsp+28h] [xbp-58h] BYREF
      char v18[8]; // [xsp+40h] [xbp-40h] BYREF
    
      v6 = (SpellTargetIndicator *)operator new(152);
      BindGamecenterAccountMessage::BindGamecenterAccountMessage((__int64)v6);
      BindGamecenterAccountMessage::setForce((__int64)v6, a3);
      v7 = (String *)operator new(24);
      String::String(v7, a2);
      BindGamecenterAccountMessage::setGamecenterId((__int64)v6, v7);
      v9 = (_QWORD *)*((_QWORD *)this + 24);
      if ( v9 )
      {
        String::format(
          (String *)"GamecenterManager::sendBindAccountMessage() signature:%s \nsalt:%s \nurl:%s \ntimestamp:%llu",
          v8,
          v9[2],
          v9[4],
          *v9,
          v9[6]);
        Debugger::print((Debugger *)&v17, v10);
        String::~String();
        BindGamecenterAccountMessage::setSignature(
          v6,
          *(const char **)(*((_QWORD *)this + 24) + 16LL),
          *(_DWORD *)(*((_QWORD *)this + 24) + 24LL));
        BindGamecenterAccountMessage::setSalt(
          v6,
          *(const char **)(*((_QWORD *)this + 24) + 32LL),
          *(_DWORD *)(*((_QWORD *)this + 24) + 40LL));
        v11 = (String *)operator new(24);
        String::String(v11, **((const char ***)this + 24), *(_DWORD *)(*((_QWORD *)this + 24) + 8LL));
        BindGamecenterAccountMessage::setUrl((__int64)v6, v11);
        v12 = (Application *)operator new(24);
        Application::getBundleID(v12);
        BindGamecenterAccountMessage::setBundleID((__int64)v6, (String *)v12);
        v13 = *((_QWORD *)this + 24);
        v14 = v18;
        for ( i = 56; i != -8; i -= 8 )
          *v14++ = *(_QWORD *)(v13 + 48) >> (i & 0xF8);
        BindGamecenterAccountMessage::setTimestamp(v6, v18, 8);
      }
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v6);
    }

    void __fastcall GameCenterManager::gameCenterFriends(LogicDiamondsAddedCommand *this, const char *a2, String *a3)
    {
      int v6; // w2
      __int64 v7; // x25
      String *v8; // x24
      __int64 v9; // x22
      String v10; // [xsp+10h] [xbp-D0h] BYREF
      String v11; // [xsp+28h] [xbp-B8h] BYREF
      String v12; // [xsp+40h] [xbp-A0h] BYREF
      String v13; // [xsp+58h] [xbp-88h] BYREF
      String v14; // [xsp+70h] [xbp-70h] BYREF
      __siginfo var58; // [xsp+88h] [xbp-58h] BYREF
    
      String::getFormatted((__int64 *)&var58.si_signo, (String *)"gameCenterFriends: count %i", a2, a2);
      Debugger::hudPrint(&var58, (const String *)0xFFFFFFFFLL, v6);
      String::~String();
      memset(&v14, 0, sizeof(v14));
      memset(&v13, 0, sizeof(v13));
      String::String(&v13);
      String::String(&v14);
      std::vector<GameCenterPlayer>::resize((char *)this + 160, 0, &v13);
      String::~String();
      String::~String();
      if ( (int)a2 >= 1 )
      {
        v7 = 0;
        v8 = a3;
        do
        {
          String::String(&v11);
          String::String(&v12);
          String::operator=(&v11);
          std::vector<GameCenterPlayer>::push_back((char *)this + 160, &v11);
          String::~String();
          String::~String();
          ++v7;
          ++v8;
        }
        while ( v7 < (int)a2 );
      }
      v9 = *((_QWORD *)this + 1);
      String::String(&v10);
      GameCenter::requestDetails(v9, a2, a3, 0, &v10);
      String::~String();
      *((_BYTE *)this + 134) = 0;
    }

    __int64 __fastcall GameCenterManager::gameCenterUserDetails(__int64 a1, int a2, __int64 a3)
    {
      __int64 result; // x0
      __int64 v7; // x26
      __int64 v8; // x8
      unsigned __int64 v9; // x28
      unsigned int v10; // w27
      __int64 v11; // x8
      unsigned __int64 v12; // x28
      const String *v13; // x22
      unsigned int v14; // w27
    
      result = Debugger::hudPrint((__siginfo *)"gameCenterUserDetails", (const char *)0xFFFFFFFFLL, a3);
      if ( a2 >= 1 )
      {
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)(a1 + 160);
          if ( *(_QWORD *)(a1 + 168) != v8 )
          {
            v9 = 0;
            v10 = 1;
            do
            {
              result = String::equals(a3 + 48 * v7, v8 + 48 * v9);
              if ( (_DWORD)result )
                result = String::operator=((String *)(*(_QWORD *)(a1 + 160) + 48 * v9 + 24));
              v9 = v10;
              v8 = *(_QWORD *)(a1 + 160);
              ++v10;
            }
            while ( v9 < 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 168) - v8) >> 4) );
          }
          v11 = *(_QWORD *)(a1 + 136);
          if ( *(_QWORD *)(a1 + 144) != v11 )
          {
            v12 = 0;
            v13 = (const String *)(a3 + 48 * v7 + 24);
            v14 = 1;
            do
            {
              result = String::equals(a3 + 48 * v7, *(_QWORD *)(v11 + 8 * v12) + 8LL);
              if ( (_DWORD)result )
              {
                FacebookFriend::setFirstName(*(LogicStringUtil **)(*(_QWORD *)(a1 + 136) + 8 * v12), v13);
                result = FacebookFriend::setFullName(*(LogicStringUtil **)(*(_QWORD *)(a1 + 136) + 8 * v12), v13);
              }
              v12 = v14;
              v11 = *(_QWORD *)(a1 + 136);
              ++v14;
            }
            while ( v12 < (*(_QWORD *)(a1 + 144) - v11) >> 3 );
          }
        }
        while ( (_DWORD)v7++ != a2 - 1 );
      }
      *(_BYTE *)(a1 + 133) = 1;
      return result;
    }

    void __fastcall GameCenterManager::refreshAchievement(__int64 a1, __int64 a2)
    {
      __int64 PlayerAvatar; // x21
      bool IsAchievementRewardClaimed; // w22
      int AchievementProgress; // w0
      __int64 v7; // x21
      int v8; // w8
      int v9; // w9
      __int64 ClientGlobals; // x0
      GameCenter *v11; // x20
      const String *Name; // x0
      __int64 v13; // x0
      const char *v14; // x1
      _QWORD *v15; // x8
      const String *v16; // x1
      __int64 v17[3]; // [xsp+18h] [xbp-38h] BYREF
    
      if ( *(_BYTE *)(LogicDataTables::getClientGlobals() + 321) )
      {
        if ( !*(_BYTE *)(a2 + 124) )
        {
          if ( *(_BYTE *)(a1 + 16) )
          {
            if ( (unsigned int)String::equals(a1 + 24, a1 + 72) )
            {
              if ( *(int *)(a1 + 24) >= 1 )
              {
                if ( GameMode::getInstance() )
                {
                  GameMode::getInstance();
                  if ( GameMode::getPlayerAvatar() )
                  {
                    GameMode::getInstance();
                    PlayerAvatar = GameMode::getPlayerAvatar();
                    IsAchievementRewardClaimed = LogicClientAvatar::getIsAchievementRewardClaimed(
                                                   PlayerAvatar,
                                                   (AreaEffectObject *)a2);
                    AchievementProgress = LogicClientAvatar::getAchievementProgress(PlayerAvatar, (AreaEffectObject *)a2);
                    v7 = 100;
                    if ( !IsAchievementRewardClaimed )
                    {
                      v8 = *(_DWORD *)(a2 + 104);
                      if ( AchievementProgress >= v8 )
                        v9 = *(_DWORD *)(a2 + 104);
                      else
                        v9 = AchievementProgress;
                      v7 = (unsigned int)(100 * v9 / v8);
                    }
                    ClientGlobals = LogicDataTables::getClientGlobals();
                    if ( (int)v7 > 0 || *(_BYTE *)(ClientGlobals + 473) )
                    {
                      v11 = *(GameCenter **)(a1 + 8);
                      Name = (const String *)LogicData::getName((AreaEffectObject *)a2);
                      GameCenter::reportAchievementProgress(v11, Name, (double)(int)v7);
                      v13 = LogicData::getName((AreaEffectObject *)a2);
                      v15 = (_QWORD *)(v13 + 8);
                      if ( *(_DWORD *)(v13 + 4) + 1 > 8 )
                        v15 = (_QWORD *)*v15;
                      String::getFormatted(v17, (String *)"Achievement updated (old): %s progress: %i", v14, v15, v7);
                      Debugger::print((Debugger *)v17, v16);
                      String::~String();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    void GameCenterManager::gameCenterProfilePictureError()
    {
      ;
    }

    __int64 __fastcall GameCenterManager::initializeMembers(_QWORD *a1)
    {
      _QWORD *v1; // x19
      __int64 result; // x0
    
      a1[18] = a1[17];
      v1 = a1 + 20;
      std::vector<GameCenterPlayer>::_M_erase_at_end(a1 + 20, a1[20]);
      *((_WORD *)v1 + 12) = 1;
      String::operator=(v1 - 17, "");
      String::operator=(v1 - 14, "");
      *((_BYTE *)v1 - 144) = 0;
      *((_BYTE *)v1 - 143) = 0;
      *(v1 - 19) = 0;
      *(_QWORD *)((char *)v1 - 33) = 0;
      *(v1 - 5) = 0;
      String::operator=(v1 - 11, "");
      result = String::operator=(v1 - 8, "");
      v1[4] = 0;
      return result;
    }

}; // end class GameCenterManager
