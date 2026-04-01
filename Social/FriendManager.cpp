class FriendManager
{
public:

    void __fastcall FriendManager::FriendManager(FriendManager *this)
    {
      char *v2; // x21
    
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 16) = 0;
      v2 = (char *)this + 128;
      memset((char *)this + 24, 0, 0x60u);
      *((_QWORD *)this + 18) = v2;
      *((_QWORD *)this + 19) = v2;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 22) = 0;
      FriendManager::initializeMembers(this);
    }

    void __fastcall FriendManager::~FriendManager(ReportUserStatusMessage *this)
    {
      void *v2; // x20
      void *v3; // x20
      __int64 v4; // x20
      void *v5; // x0
      void *v6; // x0
      void *v7; // x0
      void *v8; // x0
    
      v2 = (void *)*((_QWORD *)this + 1);
      if ( v2 )
      {
        String::~String(*((String **)this + 1));
        operator delete(v2);
      }
      *((_QWORD *)this + 1) = 0;
      v3 = (void *)*((_QWORD *)this + 2);
      if ( v3 )
      {
        String::~String(*((String **)this + 2));
        operator delete(v3);
      }
      *((_QWORD *)this + 2) = 0;
      v4 = *(_QWORD *)this;
      if ( *(_QWORD *)this )
      {
        String::~String((String *)(v4 + 88));
        operator delete((void *)v4);
      }
      *(_QWORD *)this = 0;
      FriendManager::clearFriendList(this);
      FriendManager::initializeMembers(this);
      std::vector<String>::~vector((char *)this + 192);
      std::vector<String>::~vector((char *)this + 168);
      std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::_M_erase(
        (char *)this + 120,
        *((_QWORD *)this + 17));
      v5 = (void *)*((_QWORD *)this + 12);
      if ( v5 )
        operator delete(v5);
      v6 = (void *)*((_QWORD *)this + 9);
      if ( v6 )
        operator delete(v6);
      v7 = (void *)*((_QWORD *)this + 6);
      if ( v7 )
        operator delete(v7);
      v8 = (void *)*((_QWORD *)this + 3);
      if ( v8 )
        operator delete(v8);
    }

    void __fastcall FriendManager::clearFriendList(ReportUserStatusMessage *this)
    {
      __int64 v2; // x8
      unsigned __int64 v3; // x9
      __int64 i; // x21
      __int64 v5; // x20
    
      v2 = *((_QWORD *)this + 3);
      v3 = (unsigned __int64)(*((_QWORD *)this + 4) - v2) >> 3;
      if ( (int)v3 >= 1 )
      {
        for ( i = (int)v3 - 1LL; ; --i )
        {
          v5 = *(_QWORD *)(v2 + 8 * i);
          if ( v5 )
          {
            FriendEntry::destruct(*(#1144 **)(v2 + 8 * i));
            String::~String((String *)(v5 + 88));
            operator delete((void *)v5);
          }
          if ( i + 1 < 2 )
            break;
          v2 = *((_QWORD *)this + 3);
        }
        v2 = *((_QWORD *)this + 3);
      }
      *((_QWORD *)this + 4) = v2;
    }

    void __fastcall FriendManager::destructInstance(ReportUserStatusMessage *this)
    {
      void *v1; // x19
    
      v1 = (void *)FriendManager::sm_pInstance;
      if ( FriendManager::sm_pInstance )
      {
        FriendManager::~FriendManager((ReportUserStatusMessage *)FriendManager::sm_pInstance);
        operator delete(v1);
        FriendManager::sm_pInstance = 0;
      }
    }

    // attributes: thunk
    __int64 __fastcall FriendManager::enterGame(ReportUserStatusMessage *this)
    {
      return FriendManager::requestServerFriendList(this);
    }

    __int64 __fastcall FriendManager::requestServerFriendList(ReportUserStatusMessage *this)
    {
      _QWORD *v2; // x19
      __int64 v3; // x22
      unsigned __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x23
      __int64 v7; // x24
      String *v8; // x21
      #1160 *v9; // x20
      String *v11; // [xsp+48h] [xbp-48h] BYREF
    
      v2 = (_QWORD *)operator new(16);
      v3 = *((_QWORD *)this + 24);
      v4 = 0xAAAAAAAAAAAAAAABLL * ((*((_QWORD *)this + 25) - v3) >> 3);
      *v2 = 0;
      v2[1] = 0;
      *((_DWORD *)v2 + 2) = v4;
      if ( is_mul_ok((int)v4, 8u) )
        v5 = 8LL * (int)v4;
      else
        v5 = -1;
      *v2 = operator new[](v5);
      if ( (int)v4 >= 1 )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          v8 = (String *)operator new(24);
          String::String(v8, (const String *)(v3 + v6));
          v11 = v8;
          LogicArrayList<String *>::add(v2, &v11);
          ++v7;
          v3 = *((_QWORD *)this + 24);
          v6 += 24;
        }
        while ( v7 < (int)(-1431655765 * ((unsigned __int64)(*((_QWORD *)this + 25) - v3) >> 3)) );
      }
      v9 = (#1160 *)operator new(80);
      AskForPlayingFacebookFriendsMessage::AskForPlayingFacebookFriendsMessage(v9);
      AskForPlayingFacebookFriendsMessage::setFacebookIds(v9, v2);
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v9);
    }

    __int64 __fastcall FriendManager::receiveOwnProfile(ReportUserStatusMessage *this)
    {
      void *v2; // x20
      void *v3; // x20
      __int64 v4; // x20
      #1144 *v5; // x20
      String *v6; // x20
      const String *FacebookId; // x0
      String *v8; // x20
      const String *PictureUrl; // x0
    
      v2 = (void *)*((_QWORD *)this + 1);
      if ( v2 )
      {
        String::~String(*((String **)this + 1));
        operator delete(v2);
      }
      *((_QWORD *)this + 1) = 0;
      v3 = (void *)*((_QWORD *)this + 2);
      if ( v3 )
      {
        String::~String(*((String **)this + 2));
        operator delete(v3);
      }
      *((_QWORD *)this + 2) = 0;
      v4 = *(_QWORD *)this;
      if ( *(_QWORD *)this )
      {
        String::~String((String *)(v4 + 88));
        operator delete((void *)v4);
      }
      *(_QWORD *)this = 0;
      v5 = (#1144 *)operator new(112);
      FriendEntry::FriendEntry(v5);
      *(_QWORD *)this = v5;
      v6 = (String *)operator new(24);
      FacebookId = (const String *)FacebookManager::getFacebookId((#1010 *)FacebookManager::sm_pInstance);
      String::String(v6, FacebookId);
      *((_QWORD *)this + 1) = v6;
      v8 = (String *)operator new(24);
      PictureUrl = (const String *)FacebookManager::getPictureUrl((#1010 *)FacebookManager::sm_pInstance);
      String::String(v8, PictureUrl);
      *((_QWORD *)this + 2) = v8;
      FriendEntry::setFacebookId(*(#1144 **)this, *((String **)this + 1));
      return FriendEntry::setProfilePictureUrl(*(#1144 **)this, *((String **)this + 2));
    }

    __int64 __fastcall FriendManager::receiveFriendList(ReportUserStatusMessage *this, LogicAreaEffectObjectData *a2)
    {
      _QWORD *v3; // x20
      const char *v4; // x1
      int v5; // w1
      int v6; // w2
      BadgePopup *v7; // x0
      __int64 v8; // x8
      __int64 v9; // x28
      __int64 v10; // x24
      const String *FacebookId; // x0
      FriendEntry *FriendWithFacebookId; // x25
      __int64 AvatarId; // x0
      LogicLong *v14; // x0
      String *v15; // x26
      const String *Name; // x0
      int ExpLevel; // w0
      int Score; // w0
      String *v19; // x26
      const String *AllianceName; // x0
      __int64 v21; // x0
      int v22; // w2
      String *v23; // x0
      String *v24; // x27
      void *AllianceId; // x0
      __int64 v26; // x0
      LogicLong *v27; // x0
      __int64 v28; // x0
      String *v29; // x0
      int v30; // w2
      __int64 v31; // x8
      BadgePopup *Instance; // x0
      __int64 v33; // x0
      __int64 v34; // x0
      #1399 *PopupByType; // x0
      BadgePopup *v36; // x0
      __int64 v37; // x0
      BadgePopup *v38; // x0
      __int64 v39; // x0
      #1054 *v40; // x0
      #1009 *ScreenByType; // x0
      String v43; // [xsp+8h] [xbp-F8h] BYREF
      String v44; // [xsp+20h] [xbp-E0h] BYREF
      String v45; // [xsp+38h] [xbp-C8h] BYREF
      __siginfo v46; // [xsp+50h] [xbp-B0h] BYREF
    
      v3 = (_QWORD *)FriendListMessage::removeFriendEntries(a2);
      Debugger::print((Debugger *)"FriendListMessage received", v4);
      if ( v3 )
      {
        String::valueOf(&v46.si_addr, (String *)*((unsigned int *)v3 + 3), v5);
        operator+(v46.__pad, "FriendListMessage received, ", &v46.si_addr);
        operator+(v46.__pad, " entries");
        String::~String((String *)v46.__pad);
        String::~String((String *)&v46.si_addr);
        v7 = (BadgePopup *)Debugger::hudPrint((__siginfo *)&v46.__pad[3], (const String *)0xFFFFFFFFLL, v6);
        v8 = *((int *)v3 + 3);
        if ( (int)v8 >= 1 )
        {
          v9 = v8 - 1;
          do
          {
            v10 = *(_QWORD *)(*v3 + 8 * v9);
            FacebookId = (const String *)FriendEntry::getFacebookId((#1144 *)v10);
            FriendWithFacebookId = (FriendEntry *)FriendManager::findFriendWithFacebookId(this, FacebookId);
            if ( FriendWithFacebookId )
            {
              AvatarId = FriendEntry::getAvatarId((#1144 *)v10);
              v14 = (LogicLong *)LogicLong::clone(AvatarId);
              FriendEntry::setAvatarId(FriendWithFacebookId, v14);
              v15 = (String *)operator new(24);
              Name = (const String *)FriendEntry::getName((#1144 *)v10);
              String::String(v15, Name);
              FriendEntry::setName(FriendWithFacebookId, v15);
              ExpLevel = FriendEntry::getExpLevel((#1144 *)v10);
              FriendEntry::setExpLevel(FriendWithFacebookId, ExpLevel);
              Score = FriendEntry::getScore((#1144 *)v10);
              FriendEntry::setScore(FriendWithFacebookId, Score);
              if ( FriendEntry::getAllianceName((#1144 *)v10) )
              {
                v19 = (String *)operator new(24);
                AllianceName = (const String *)FriendEntry::getAllianceName((#1144 *)v10);
                String::String(v19, AllianceName);
              }
              else
              {
                v19 = 0;
              }
              if ( FriendEntry::getAllianceName(FriendWithFacebookId) )
              {
                v23 = (String *)FriendEntry::getAllianceName(FriendWithFacebookId);
                v24 = v23;
                if ( v23 )
                {
                  String::~String(v23);
                  operator delete(v24);
                }
              }
              FriendEntry::setAllianceName(FriendWithFacebookId, v19);
              AllianceId = (void *)FriendEntry::getAllianceId(FriendWithFacebookId);
              if ( AllianceId )
                operator delete(AllianceId);
              if ( FriendEntry::getAllianceId((#1144 *)v10) )
              {
                v26 = FriendEntry::getAllianceId((#1144 *)v10);
                v27 = (LogicLong *)LogicLong::clone(v26);
                FriendEntry::setAllianceId(FriendWithFacebookId, v27);
              }
              else
              {
                FriendEntry::setAllianceId(FriendWithFacebookId, 0);
              }
              v28 = FriendEntry::getName((#1144 *)v10);
              operator+(&v44, "From server friend: ", v28);
              operator+(&v44, ", fb ID: ");
              v29 = (String *)FriendEntry::getFacebookId((#1144 *)v10);
              operator+((__int64 *)&v46.si_signo, &v45, v29);
              String::~String(&v45);
              String::~String(&v44);
              Debugger::hudPrint(&v46, (const String *)0xFFFFFFFFLL, v30);
              String::~String((String *)&v46);
            }
            else
            {
              v21 = FriendEntry::getFacebookId((#1144 *)v10);
              operator+(&v43, "From server couldn't find: ", v21);
              Debugger::hudPrint((__siginfo *)&v43, (const String *)0xFFFFFFFFLL, v22);
              String::~String(&v43);
            }
            if ( v10 )
            {
              FriendEntry::destruct((#1144 *)v10);
              String::~String((String *)(v10 + 88));
              operator delete((void *)v10);
            }
            v31 = v9-- + 1;
          }
          while ( v31 > 1 );
        }
        Instance = (BadgePopup *)GUI::getInstance(v7);
        if ( Instance )
        {
          v33 = GUI::getInstance(Instance);
          Instance = (BadgePopup *)GUI::getPopupByType(v33, 23);
          if ( Instance )
          {
            v34 = GUI::getInstance(Instance);
            PopupByType = (#1399 *)GUI::getPopupByType(v34, 23);
            Instance = (BadgePopup *)FriendListPopup::refreshFriendData(PopupByType);
          }
        }
        v36 = (BadgePopup *)GUI::getInstance(Instance);
        if ( v36 )
        {
          v37 = GUI::getInstance(v36);
          v38 = (BadgePopup *)GUI::getPopupByType(v37, 22);
          if ( v38 )
          {
            v39 = GUI::getInstance(v38);
            v40 = (#1054 *)GUI::getPopupByType(v39, 22);
            ScreenByType = (#1009 *)AlliancePopup::getScreenByType(v40, 1);
            if ( ScreenByType )
              LeaderboardPopup::refreshFriendsList(ScreenByType);
          }
        }
        String::~String((String *)&v46.__pad[3]);
        if ( *v3 )
          operator delete[](*v3);
        operator delete(v3);
      }
      return FriendManager::requestScoreUpdate(this);
    }

    __int64 __fastcall FriendManager::findFriendWithFacebookId(ReportUserStatusMessage *this, const String *a2)
    {
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      __int64 i; // x21
      __int64 FacebookId; // x0
    
      if ( !a2 )
        return 0;
      v4 = *((_QWORD *)this + 3);
      v5 = (unsigned __int64)(*((_QWORD *)this + 4) - v4) >> 3;
      if ( (int)v5 < 1 )
        return 0;
      for ( i = (int)v5 - 1LL; ; --i )
      {
        FacebookId = FriendEntry::getFacebookId(*(#1144 **)(v4 + 8 * i));
        if ( FacebookId )
        {
          if ( (String::equals(FacebookId, a2) & 1) != 0 )
            break;
        }
        if ( i + 1 < 2 )
          return 0;
        v4 = *((_QWORD *)this + 3);
      }
      return *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
    }

    __int64 __fastcall FriendManager::requestScoreUpdate(__int64 this)
    {
      __int64 v1; // x19
      __int64 v2; // x8
      unsigned __int64 v3; // x21
      #1144 *v4; // [xsp+8h] [xbp-28h] BYREF
    
      v1 = this;
      v2 = *(_QWORD *)(this + 24);
      if ( *(_QWORD *)(this + 32) != v2 )
      {
        v3 = 0;
        do
        {
          v4 = *(#1144 **)(v2 + 8 * v3);
          this = FriendEntry::getAvatarId(v4);
          if ( this )
            this = std::vector<FriendEntry *>::push_back(v1 + 72, &v4);
          ++v3;
          v2 = *(_QWORD *)(v1 + 24);
        }
        while ( v3 < (*(_QWORD *)(v1 + 32) - v2) >> 3 );
      }
      return this;
    }

    __int64 __fastcall FriendManager::addFriend(ReportUserStatusMessage *a1, String *a2)
    {
      #1144 *FriendWithFacebookId; // x19
      const String *v5; // x21
      int v6; // w2
      String *v7; // x21
      String *v8; // x21
      String v10; // [xsp+0h] [xbp-70h] BYREF
      String v11; // [xsp+18h] [xbp-58h] BYREF
      String v12; // [xsp+30h] [xbp-40h] BYREF
      #1144 *v13; // [xsp+48h] [xbp-28h] BYREF
    
      FriendWithFacebookId = (#1144 *)FriendManager::findFriendWithFacebookId(a1, a2);
      v13 = FriendWithFacebookId;
      if ( FriendWithFacebookId )
      {
        v5 = a2 + 1;
        operator+(&v10, "Already having entry for ", &a2[1]);
        operator+(&v10, " fb id: ");
        operator+((__int64 *)&v12.m_length, &v11, a2);
        String::~String(&v11);
        String::~String(&v10);
        Debugger::hudPrint((__siginfo *)&v12, (const String *)0xFFFFFFFFLL, v6);
        String::~String(&v12);
      }
      else
      {
        FriendWithFacebookId = (#1144 *)operator new(112);
        FriendEntry::FriendEntry(FriendWithFacebookId);
        v13 = FriendWithFacebookId;
        if ( *((_QWORD *)a1 + 4) == *((_QWORD *)a1 + 3) )
          std::vector<FriendEntry *>::reserve((char *)a1 + 24, 128);
        std::vector<FriendEntry *>::push_back((char *)a1 + 24, &v13);
        std::vector<FriendEntry *>::push_back((char *)a1 + 48, &v13);
        v5 = a2 + 1;
      }
      FriendEntry::setFacebookName(FriendWithFacebookId, v5);
      v7 = (String *)operator new(24);
      String::String(v7, a2);
      FriendEntry::setFacebookId(FriendWithFacebookId, v7);
      v8 = (String *)operator new(24);
      String::String(v8, a2 + 3);
      return FriendEntry::setProfilePictureUrl(FriendWithFacebookId, v8);
    }

    __int64 __fastcall FriendManager::allFacebookFriendsReceived(__int64 this)
    {
      if ( *(_QWORD *)(this + 56) == *(_QWORD *)(this + 48) )
        return FriendManager::requestScoreUpdate(this);
      return this;
    }

    // attributes: thunk
    void __fastcall FriendManager::clearFacebookFriends(ReportUserStatusMessage *this)
    {
      FriendManager::clearFriendList(this);
    }

    void __fastcall FriendManager::constructInstance(ReportUserStatusMessage *this)
    {
      FriendManager *v1; // x19
    
      v1 = (FriendManager *)operator new(216);
      FriendManager::FriendManager(v1);
      FriendManager::sm_pInstance = (__int64)v1;
    }

    String **__fastcall FriendManager::update(String **this, float a2)
    {
      ReportUserStatusMessage *v2; // x19
      __int64 v3; // x8
      __int64 v4; // x9
      String *v5; // x21
      String *v6; // x22
      String *v7; // x0
      String *v8; // x0
      __int64 v9; // x24
      String *FacebookId; // x23
      __int64 FacebookName; // x0
      int v12; // w2
      String v13; // [xsp+8h] [xbp-78h] BYREF
      String v14; // [xsp+20h] [xbp-60h] BYREF
      String v15; // [xsp+38h] [xbp-48h] BYREF
    
      v2 = (ReportUserStatusMessage *)this;
      v3 = (__int64)*(this + 6);
      v4 = (__int64)*(this + 7);
      if ( v4 != v3 )
      {
        v5 = *(this + 24);
        v6 = *(this + 25);
        if ( v6 != v5 )
        {
          v7 = *(this + 24);
          do
          {
            String::~String(v7);
            v7 = v8 + 1;
          }
          while ( v6 != v7 );
          v3 = *((_QWORD *)v2 + 6);
          v4 = *((_QWORD *)v2 + 7);
        }
        *((_QWORD *)v2 + 25) = v5;
        if ( (int)((unsigned __int64)(v4 - v3) >> 3) >= 1 )
        {
          v9 = 0;
          do
          {
            FacebookId = (String *)FriendEntry::getFacebookId(*(#1144 **)(v3 + 8 * v9));
            if ( FacebookId )
            {
              FacebookName = FriendEntry::getFacebookName(*(#1144 **)(*((_QWORD *)v2 + 6) + 8 * v9));
              operator+(&v13, "Request friend ", FacebookName);
              operator+(&v13, ", id: ");
              operator+((__int64 *)&v15.m_length, &v14, FacebookId);
              String::~String(&v14);
              String::~String(&v13);
              Debugger::hudPrint((__siginfo *)&v15, (const String *)0xFFFFFFFFLL, v12);
              std::vector<String>::push_back((_DWORD)v2 + 192, FacebookId);
              String::~String(&v15);
            }
            ++v9;
            v3 = *((_QWORD *)v2 + 6);
          }
          while ( v9 < (int)((unsigned __int64)(*((_QWORD *)v2 + 7) - v3) >> 3) );
        }
        this = (String **)FriendManager::requestServerFriendList(v2);
        *((_QWORD *)v2 + 7) = *((_QWORD *)v2 + 6);
      }
      return this;
    }

    __int64 __fastcall FriendManager::getFriendList(ReportUserStatusMessage *this)
    {
      return (__int64)this + 24;
    }

    __int64 __fastcall FriendManager::isProfilePictureDownloaded(ReportUserStatusMessage *this, const String *a2)
    {
      char *v3; // x21
      __int64 i; // x20
    
      v3 = (char *)this + 128;
      for ( i = *((_QWORD *)this + 18); (char *)i != v3; i = std::_Rb_tree_increment(i) )
      {
        if ( (String::equals(i + 32, a2) & 1) != 0 )
          return 1;
      }
      return 0;
    }

    __int64 __fastcall FriendManager::setProfilePictureDownloaded(
            ReportUserStatusMessage *this,
            const String *a2,
            const String *a3)
    {
      String *v3; // x0
    
      v3 = (String *)std::map<String,String>::operator[]((char *)this + 120, a2);
      return String::operator=(v3);
    }

    __int64 __fastcall FriendManager::getSavePath(ReportUserStatusMessage *this, const String *a2)
    {
      return std::map<String,String>::operator[]((char *)this + 120, a2);
    }

    String *__fastcall FriendManager::initializeMembers(ReportUserStatusMessage *this)
    {
      String *v2; // x20
      String *v3; // x21
      String *v4; // x0
      String *v5; // x0
      __int64 v6; // x9
      __int64 v7; // x10
      __int64 v8; // x8
      String *result; // x0
      String *v10; // x20
      String *v11; // x21
      String *v12; // x0
    
      v2 = (String *)*((_QWORD *)this + 21);
      v3 = (String *)*((_QWORD *)this + 22);
      if ( v3 != v2 )
      {
        v4 = (String *)*((_QWORD *)this + 21);
        do
        {
          String::~String(v4);
          v4 = v5 + 1;
        }
        while ( v3 != v4 );
      }
      *((_QWORD *)this + 22) = v2;
      v6 = *((_QWORD *)this + 6);
      v7 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 10) = *((_QWORD *)this + 9);
      v8 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 7) = v6;
      *((_QWORD *)this + 4) = v7;
      *((_QWORD *)this + 13) = v8;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *(_QWORD *)this = 0;
      result = (String *)std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::_M_erase(
                           (char *)this + 120,
                           *((_QWORD *)this + 17));
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 18) = (char *)this + 128;
      *((_QWORD *)this + 19) = (char *)this + 128;
      *((_QWORD *)this + 20) = 0;
      v10 = (String *)*((_QWORD *)this + 24);
      v11 = (String *)*((_QWORD *)this + 25);
      if ( v11 != v10 )
      {
        result = (String *)*((_QWORD *)this + 24);
        do
        {
          String::~String(result);
          result = v12 + 1;
        }
        while ( v11 != result );
      }
      *((_QWORD *)this + 25) = v10;
      return result;
    }

}; // end class FriendManager
