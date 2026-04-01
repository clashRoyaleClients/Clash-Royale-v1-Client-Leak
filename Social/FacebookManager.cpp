class FacebookManager
{
public:

    __int64 __fastcall FacebookManager::FacebookManager(__int64 a1)
    {
      __int64 v2; // x20
      HTTPQueue *v3; // x20
    
      *(_QWORD *)a1 = off_10046BBD8;
      String::String((String *)(a1 + 48));
      String::String((String *)(a1 + 72));
      String::String((String *)(a1 + 96));
      String::String((String *)(a1 + 120));
      String::String((String *)(a1 + 144));
      String::String((String *)(a1 + 168));
      String::String((String *)(a1 + 192));
      *(_QWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      FacebookManager::initializeMembers((FacebookManager *)a1);
      v2 = operator new(56);
      ImageSet::ImageSet((#1277 *)v2);
      *(_QWORD *)(a1 + 8) = v2;
      *(_BYTE *)(v2 + 2) = 1;
      *(_WORD *)v2 = 257;
      v3 = (HTTPQueue *)operator new(56);
      HTTPQueue::HTTPQueue(v3, 2);
      *(_QWORD *)(a1 + 16) = v3;
      return a1;
    }

    #1277 **__fastcall FacebookManager::~FacebookManager(#1277 **a1)
    {
      #1277 *v2; // x20
      #1277 *v3; // x20
      #1277 *v4; // x20
    
      *a1 = (#1277 *)off_10046BBD8;
      ImageSet::unloadUnused(a1[1]);
      v2 = a1[1];
      if ( v2 )
      {
        ImageSet::~ImageSet(a1[1]);
        operator delete(v2);
      }
      v3 = a1[3];
      if ( v3 )
      {
        FacebookConnection::~FacebookConnection(a1[3]);
        operator delete(v3);
      }
      v4 = a1[2];
      if ( v4 )
      {
        HTTPQueue::~HTTPQueue(a1[2]);
        operator delete(v4);
      }
      FacebookManager::initializeMembers((FacebookManager *)a1);
      std::vector<FacebookManager::Request>::~vector(a1 + 31);
      std::vector<FacebookManager::Request>::~vector(a1 + 28);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      return a1;
    }

    // attributes: thunk
    #1277 **__fastcall FacebookManager::~FacebookManager(#1277 **a1)
    {
      return __ZN15FacebookManagerD2Ev(a1);
    }

    void __fastcall FacebookManager::~FacebookManager(#1277 **a1)
    {
      FacebookManager::~FacebookManager(a1);
      operator delete(a1);
    }

    uint64_t __fastcall FacebookManager::init(__int64 a1, __int64 a2, _DWORD *a3)
    {
      uint64_t result; // x0
      const char *v6; // x1
      FacebookConnection *v7; // x0
      FacebookConnection *v8; // x21
      const char *v9; // x1
    
      String::operator=(a1 + 168, "");
      String::operator=(a1 + 96, "");
      String::operator=(a1 + 120, "");
      String::operator=(a1 + 192, "");
      String::operator=(a1 + 48, "");
      String::operator=((String *)(a1 + 72));
      *(_BYTE *)(a1 + 216) = 0;
      std::vector<FacebookManager::Request>::_M_erase_at_end(a1 + 224, *(_QWORD *)(a1 + 224));
      *(_DWORD *)(a1 + 32) = 0;
      result = xTimer::getNativeTime();
      *(_QWORD *)(a1 + 40) = result;
      if ( !*a3 )
        result = Debugger::warning((__siginfo *)"FacebookAppId is not set!", v6);
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v7 = (FacebookConnection *)operator new(8);
        v8 = v7;
        v9 = (const char *)(a3 + 2);
        if ( a3[1] + 1 > 8 )
          v9 = *(const char **)v9;
        FacebookConnection::FacebookConnection(v7, v9);
        *(_QWORD *)(a1 + 24) = v8;
        return FacebookConnection::setListener(v8, (IFacebookListener *)a1);
      }
      return result;
    }

    __int64 __fastcall FacebookManager::enterGame(LogicBuyChestCommand *this)
    {
      int v2; // w20
      int v3; // w21
      __int64 result; // x0
      bool v5; // zf
    
      v2 = *((_DWORD *)this + 8);
      v3 = *((_DWORD *)this + 18);
      result = FacebookConnection::isLogged(*((_QWORD *)this + 3));
      if ( v2 )
        v5 = 1;
      else
        v5 = v3 == 0;
      if ( !v5 && (((unsigned int)result ^ 1) & 1) == 0 )
        return FacebookManager::login(this);
      return result;
    }

    __int64 __fastcall FacebookManager::login(__int64 this)
    {
      __int64 v1; // x19
    
      v1 = this;
      if ( !*(_DWORD *)(this + 32) )
      {
        std::vector<FacebookManager::Request>::_M_erase_at_end(this + 224, *(_QWORD *)(this + 224));
        if ( *(_DWORD *)(v1 + 32) != 1 )
        {
          *(_DWORD *)(v1 + 32) = 1;
          *(_QWORD *)(v1 + 40) = xTimer::getNativeTime();
        }
        return FacebookConnection::authorizeWithReadPermissions(*(FacebookConnection **)(v1 + 24));
      }
      return this;
    }

    uint64_t __fastcall FacebookManager::unbindFacebookID(LogicBuyChestCommand *this)
    {
      uint64_t result; // x0
    
      result = String::operator=((char *)this + 72, "");
      if ( *((_DWORD *)this + 8) )
      {
        *((_DWORD *)this + 8) = 0;
        result = xTimer::getNativeTime();
        *((_QWORD *)this + 5) = result;
      }
      return result;
    }

    __int64 __fastcall FacebookManager::bindFacebookID(String *this)
    {
      return String::operator=(this + 3);
    }

    __int64 __fastcall FacebookManager::constructInstance(LogicBuyChestCommand *this)
    {
      __int64 v1; // x19
      __int64 result; // x0
    
      v1 = operator new(272);
      result = FacebookManager::FacebookManager(v1);
      FacebookManager::sm_pInstance = v1;
      return result;
    }

    __int64 __fastcall FacebookManager::destructInstance(LogicBuyChestCommand *this)
    {
      __int64 result; // x0
    
      result = FacebookManager::sm_pInstance;
      if ( FacebookManager::sm_pInstance )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)FacebookManager::sm_pInstance + 8LL))(FacebookManager::sm_pInstance);
      FacebookManager::sm_pInstance = 0;
      return result;
    }

    bool __fastcall FacebookManager::isLoggedIn(LogicBuyChestCommand *this)
    {
      return *((_DWORD *)this + 8) == 3;
    }

    void __fastcall FacebookManager::sendBindMessage(LogicBuyChestCommand *this, bool a2)
    {
      Summoner *v4; // x19
      String *v5; // x0
      String *v6; // x21
      const char *v7; // x1
      String *v8; // x0
      String *v9; // x21
      const char *v10; // x1
      int v11; // w2
      String v12; // [xsp+8h] [xbp-38h] BYREF
    
      if ( (unsigned int)FacebookManager::isFacebookEnabled(this) )
      {
        v4 = (Summoner *)operator new(96);
        BindFacebookAccountMessage::BindFacebookAccountMessage(v4);
        BindFacebookAccountMessage::setForce(v4, a2);
        v5 = (String *)operator new(24);
        v6 = v5;
        v7 = (char *)this + 152;
        if ( *((_DWORD *)this + 37) + 1 > 8 )
          v7 = *(const char **)v7;
        String::String(v5, v7);
        BindFacebookAccountMessage::setAuthenticationToken(v4, v6);
        v8 = (String *)operator new(24);
        v9 = v8;
        v10 = (char *)this + 56;
        if ( *((_DWORD *)this + 13) + 1 > 8 )
          v10 = *(const char **)v10;
        String::String(v8, v10);
        BindFacebookAccountMessage::setFacebookId(v4, v9);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v4);
        operator+(&v12, "Sending bind msg with id ", (char *)this + 48);
        Debugger::hudPrint((__siginfo *)&v12, (const String *)0xFFFFFFFFLL, v11);
        String::~String();
      }
    }

    bool __fastcall FacebookManager::isFacebookEnabled(LogicBuyChestCommand *this)
    {
      return !LogicDataTables::getClientGlobals() || *(_BYTE *)(LogicDataTables::getClientGlobals() + 379);
    }

    __int64 __fastcall FacebookManager::facebookLogged(__int64 a1, __int64 a2, int a3)
    {
      __int64 result; // x0
    
      Debugger::hudPrint((__siginfo *)"Logged in to Facebook", (const char *)0xFFFFFFFFLL, a3);
      String::operator=((String *)(a1 + 96));
      String::operator=((String *)(a1 + 120));
      String::operator=((String *)(a1 + 192));
      String::operator=((String *)(a1 + 144));
      result = String::operator=((String *)(a1 + 48));
      *(_BYTE *)(a1 + 216) = 0;
      if ( *(_DWORD *)(a1 + 72) )
      {
        result = String::equals(a1 + 72, a1 + 48);
        if ( (result & 1) == 0 )
        {
          *(_BYTE *)(a1 + 216) = 1;
          result = String::operator=(a1 + 72, "");
        }
      }
      else
      {
        *(_BYTE *)(a1 + 216) = 1;
      }
      if ( *(_DWORD *)(a1 + 32) == 1 )
      {
        *(_DWORD *)(a1 + 32) = 2;
        *(_QWORD *)(a1 + 40) = xTimer::getNativeTime();
        return FacebookConnection::requestFriends(*(FacebookConnection **)(a1 + 24));
      }
      return result;
    }

    __int64 __fastcall FacebookManager::facebookFriends(__int64 a1, const char *a2, String *a3)
    {
      const char *v4; // x20
      int v5; // w2
      ReportUserStatusMessage *v6; // x0
      String v8; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = a2;
      if ( *(_DWORD *)(a1 + 32) != 3 )
      {
        *(_DWORD *)(a1 + 32) = 3;
        *(_QWORD *)(a1 + 40) = xTimer::getNativeTime();
      }
      String::format((String *)"Received friends %d from Facebook", a2, v4);
      Debugger::hudPrint((__siginfo *)&v8, (const String *)0xFFFFFFFFLL, v5);
      String::~String();
      v6 = (ReportUserStatusMessage *)FriendManager::sm_pInstance;
      if ( (int)v4 >= 1 )
      {
        do
        {
          FriendManager::addFriend(v6, a3);
          v6 = (ReportUserStatusMessage *)FriendManager::sm_pInstance;
          LODWORD(v4) = (_DWORD)v4 - 1;
          a3 = (String *)((char *)a3 + 104);
        }
        while ( (_DWORD)v4 );
      }
      FriendManager::receiveOwnProfile(v6);
      return FriendManager::allFacebookFriendsReceived(FriendManager::sm_pInstance);
    }

    __int64 __fastcall FacebookManager::update(__int64 this, float a2)
    {
      unsigned int *v2; // x19
      unsigned int v3; // w8
      xTimer *v5; // x20
      uint64_t NativeTime; // x0
      unsigned __int64 v7; // x2
      int v8; // w1
      long double PassedTimeMs; // q0
      const String *v10; // x1
      _QWORD v11[3]; // [xsp+0h] [xbp-40h] BYREF
      String v12; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = (unsigned int *)this;
      if ( *(_QWORD *)(this + 24) )
      {
        v3 = *(_DWORD *)(this + 32);
        if ( v3 <= 4 && ((1 << v3) & 0x16) != 0 )
        {
          v5 = *(xTimer **)(this + 40);
          NativeTime = xTimer::getNativeTime();
          PassedTimeMs = xTimer::getPassedTimeMs(v5, NativeTime, v7);
          if ( (int)(float)(*(float *)&PassedTimeMs * 0.001) >= 21 )
          {
            String::valueOf(v11, (String *)v2[8], v8);
            operator+(&v12, "FacebookManager::timeout in state:", v11);
            Debugger::warning((__siginfo *)&v12, v10);
            String::~String();
            String::~String();
            if ( v2[8] == 4 )
              (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 72LL))(v2);
            else
              FacebookManager::logout((LogicBuyChestCommand *)v2);
          }
        }
        if ( *((_BYTE *)v2 + 216) )
        {
          *((_BYTE *)v2 + 216) = 0;
          FacebookManager::sendBindMessage((LogicBuyChestCommand *)v2, 0);
        }
        return HTTPQueue::update(*((HTTPQueue **)v2 + 2));
      }
      return this;
    }

    __int64 __fastcall FacebookManager::logout(LogicBuyChestCommand *this)
    {
      LogicBuyChestCommand *v1; // x19
      __int64 result; // x0
    
      v1 = this;
      if ( *((_DWORD *)this + 8) != 4 )
      {
        *((_DWORD *)this + 8) = 4;
        this = (LogicBuyChestCommand *)xTimer::getNativeTime();
        *((_QWORD *)v1 + 5) = this;
      }
      result = FacebookManager::isFacebookEnabled(this);
      if ( (_DWORD)result )
        return FacebookConnection::logout(*((FacebookConnection **)v1 + 3));
      return result;
    }

    __int64 __fastcall FacebookManager::facebookLogout(LogicBuyChestCommand *this, __int64 a2, int a3)
    {
      Debugger::hudPrint((__siginfo *)"Logged out from Facebook", (const char *)0xFFFFFFFFLL, a3);
      String::operator=((char *)this + 144, "");
      String::operator=((char *)this + 48, "");
      String::operator=((char *)this + 96, "");
      String::operator=((char *)this + 120, "");
      String::operator=((char *)this + 168, "");
      String::operator=((char *)this + 192, "");
      *((_BYTE *)this + 216) = 0;
      if ( *((_DWORD *)this + 8) )
      {
        *((_DWORD *)this + 8) = 0;
        *((_QWORD *)this + 5) = xTimer::getNativeTime();
      }
      FriendManager::clearFacebookFriends((ReportUserStatusMessage *)FriendManager::sm_pInstance);
      return std::vector<FacebookManager::Request>::_M_erase_at_end((char *)this + 224, *((_QWORD *)this + 28));
    }

    void __usercall FacebookManager::startProfilePicLoading(
            String *__return_ptr a1@<X8>,
            HTTPQueue **this@<X0>,
            const String *a3@<X1>,
            const String *a4@<X2>)
    {
      Path *v8; // x0
      const char *v9; // x1
      internal_t *p_internal; // x8
      const String *v11; // x1
      String v12; // [xsp+8h] [xbp-98h] BYREF
      String v13; // [xsp+20h] [xbp-80h] BYREF
      String v14; // [xsp+38h] [xbp-68h] BYREF
      String v15; // [xsp+50h] [xbp-50h] BYREF
      String v16; // [xsp+68h] [xbp-38h] BYREF
    
      v8 = (Path *)String::String(a1, "");
      if ( a3->m_length && a4->m_length )
      {
        Path::tempPath(v8);
        p_internal = &a3->internal;
        if ( a3->m_bytes + 1 > 8 )
          p_internal = (internal_t *)p_internal->pHeap;
        String::format((String *)"sp_pic_%s", v9, p_internal);
        if ( (String::endsWith(&v14, "/") & 1) != 0 || (unsigned int)String::startsWith(&v13, "/") )
        {
          operator+((__int64 *)&v15.m_length, &v14, &v13);
        }
        else if ( v14.m_length )
        {
          operator+(&v14, "/");
          operator+((__int64 *)&v15.m_length, &v16, &v13);
          String::~String();
        }
        else
        {
          String::String(&v15, &v13);
        }
        String::operator=(a1);
        String::~String();
        String::~String();
        String::~String();
        HTTPQueue::downloadFile(*(this + 2), a4, a1);
      }
      else
      {
        operator+(&v12, "Profile pic loading fail: ", a4);
        Debugger::print((Debugger *)&v12, v11);
        String::~String();
      }
    }

    String *__usercall FacebookManager::getFacebookErrorTID@<X0>(int a1@<W1>, String *a2@<X8>)
    {
      String *result; // x0
    
      if ( a1 > 199 )
      {
        switch ( a1 )
        {
          case 200:
            return String::String(a2, "TID_FACEBOOK_ERROR_SETTINGS");
          case 204:
    LABEL_6:
            result = String::String(a2, "TID_FACEBOOK_ERROR_CANCELED");
            break;
          case 205:
    LABEL_10:
            result = String::String(a2, "TID_FACEBOOK_ERROR_RETRY");
            break;
          default:
            return String::String(a2, "TID_FACEBOOK_ERROR_UNKNOWN");
        }
      }
      else if ( a1 > 99 )
      {
        if ( a1 == 100 )
          return String::String(a2, "TID_FACEBOOK_ERROR_SETTINGS");
        else
          return String::String(a2, "TID_FACEBOOK_ERROR_UNKNOWN");
      }
      else
      {
        switch ( a1 )
        {
          case 1:
          case 2:
          case 3:
            goto LABEL_10;
          case 4:
          case 5:
            result = String::String(a2, "TID_FACEBOOK_ERROR_RETRY_LATER");
            break;
          case 6:
            goto LABEL_6;
          default:
            return String::String(a2, "TID_FACEBOOK_ERROR_UNKNOWN");
        }
      }
      return result;
    }

    String *__usercall FacebookManager::getFacebookErrorTitleTID@<X0>(int a1@<W1>, String *a2@<X8>)
    {
      if ( a1 == 200 || a1 == 100 )
        return String::String(a2, "TID_FACEBOOK_ERROR_SETTINGS_TITLE");
      else
        return String::String(a2, "TID_FACEBOOK_ERROR_TITLE");
    }

    void __fastcall FacebookManager::facebookReceivedAppRequest(
            LogicBuyChestCommand *a1,
            __int64 a2,
            __int64 a3,
            __int64 a4)
    {
      _QWORD *v6; // x8
      _QWORD *v7; // x9
      _QWORD *v8; // x10
      const String *v9; // x1
      int v10; // w8
      String v11; // [xsp+20h] [xbp-C0h] BYREF
      String v12; // [xsp+38h] [xbp-A8h] BYREF
      String v13; // [xsp+50h] [xbp-90h] BYREF
      String v14; // [xsp+68h] [xbp-78h] BYREF
      int v15; // [xsp+80h] [xbp-60h]
      String v16; // [xsp+88h] [xbp-58h] BYREF
    
      v6 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v6 = (_QWORD *)*v6;
      v7 = (_QWORD *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v7 = (_QWORD *)*v7;
      v8 = (_QWORD *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
        v8 = (_QWORD *)*v8;
      String::format((String *)"facebookReceivedAppRequest, reqid:%s from:%s data:%s", (const char *)a2, v6, v7, v8);
      Debugger::print((Debugger *)&v16, v9);
      String::~String();
      if ( !FacebookManager::findRequestWithId(a1, (const String *)a2) )
      {
        String::String(&v11);
        String::String(&v12);
        String::String(&v13);
        String::String(&v14);
        String::operator=(&v11);
        String::operator=(&v12);
        String::operator=(&v14);
        v15 = 0;
        if ( (unsigned int)String::equals(&v14, "askfor") )
        {
          v10 = 1;
        }
        else
        {
          if ( !(unsigned int)String::equals(&v14, "send") )
          {
    LABEL_13:
            std::vector<FacebookManager::Request>::push_back((char *)a1 + 224, &v11);
            String::~String();
            String::~String();
            String::~String();
            String::~String();
            return;
          }
          v10 = 2;
        }
        v15 = v10;
        goto LABEL_13;
      }
    }

    __int64 __fastcall FacebookManager::findRequestWithId(LogicBuyChestCommand *this, const String *a2)
    {
      int v4; // w8
      __int64 v5; // x21
      __int64 v6; // x8
      __int64 v7; // x22
      int v8; // w0
    
      v4 = -991146299 * ((__int64)(*((_QWORD *)this + 29) - *((_QWORD *)this + 28)) >> 3);
      v5 = v4 + 1LL;
      v6 = 104LL * (v4 - 1);
      while ( --v5 >= 1 )
      {
        v7 = v6 - 104;
        v8 = String::equals(*((_QWORD *)this + 28) + v6, a2);
        v6 = v7;
        if ( v8 )
          return *((_QWORD *)this + 28) + v7 + 104;
      }
      return 0;
    }

    __int64 __fastcall FacebookManager::facebookDeletedAppRequest(LogicBuyChestCommand *this, const String *a2)
    {
      internal_t *p_internal; // x8
      const String *v5; // x1
      String v7; // [xsp+8h] [xbp-28h] BYREF
    
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      String::format((String *)"facebookDeletedAppRequest reqid:%s", (const char *)a2, p_internal);
      Debugger::print((Debugger *)&v7, v5);
      String::~String();
      return FacebookManager::deleteRequestLocally(this, a2);
    }

    __int64 __fastcall FacebookManager::deleteRequestLocally(__int64 this, const String *a2)
    {
      __int64 v3; // x8
      __int64 *v4; // x20
      __int64 v5; // x9
      __int64 v6; // x21
      __int64 i; // x22
    
      v4 = (__int64 *)(this + 224);
      v3 = *(_QWORD *)(this + 224);
      v5 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD *)(this + 232) - v3) >> 3);
      if ( (int)v5 >= 1 )
      {
        v6 = (int)v5 + 1LL;
        for ( i = 104LL * (int)v5 - 104; ; i -= 104 )
        {
          this = String::equals(v3 + i, a2);
          if ( (_DWORD)this )
            this = std::vector<FacebookManager::Request>::erase(v4, *v4 + i);
          if ( --v6 < 2 )
            break;
          v3 = *v4;
        }
      }
      return this;
    }

    void __fastcall FacebookManager::facebookSentAppRequest(LogicBuyChestCommand *this, const String *a2, const String *a3)
    {
      ;
    }

    void __fastcall FacebookManager::facebookLoginFailedWithError(__int64 a1, __int64 a2)
    {
      _QWORD *v4; // x9
      int v5; // w2
      BadgePopup *v6; // x0
      const String *v7; // x1
      #1308 *String; // x21
      const String *v9; // x1
      #1308 *v10; // x22
      PopupBase *v11; // x20
      BadgePopup *v12; // x0
      __int64 Instance; // x0
      String v14; // [xsp+18h] [xbp-C8h] BYREF
      String v15; // [xsp+30h] [xbp-B0h] BYREF
      String v16; // [xsp+48h] [xbp-98h] BYREF
      String v17; // [xsp+60h] [xbp-80h] BYREF
      String v18; // [xsp+78h] [xbp-68h] BYREF
      String v19; // [xsp+90h] [xbp-50h] BYREF
      String v20; // [xsp+A8h] [xbp-38h] BYREF
    
      v4 = (_QWORD *)(a2 + 16);
      if ( *(_DWORD *)(a2 + 12) + 1 > 8 )
        v4 = (_QWORD *)*v4;
      String::format((String *)"fb login fail(%d):%s", (const char *)a2, *(unsigned int *)(a2 + 4), v4);
      Debugger::hudPrint((__siginfo *)&v20, (const String *)0xFFFFFFFFLL, v5);
      String::~String();
      if ( GUI::getInstance(v6) )
      {
        FacebookManager::getFacebookErrorTitleTID(*(_DWORD *)(a2 + 4), &v19);
        String = StringTable::getString((#1308 *)&v19, v7);
        String::~String();
        FacebookManager::getFacebookErrorTID(*(_DWORD *)(a2 + 4), &v18);
        v10 = StringTable::getString((#1308 *)&v18, v9);
        String::~String();
        operator+(v10, "\n\n");
        operator+((__int64 *)&v17.m_length, &v16, (String *)(a2 + 8));
        String::~String();
        v11 = (PopupBase *)operator new(240);
        String::String(&v15, (const String *)String);
        String::String(&v14, (const String *)v10);
        InfoPopup::InfoPopup(v11, &v15, &v14);
        String::~String();
        String::~String();
        Instance = GUI::getInstance(v12);
        GUI::showPopup(Instance, v11, 1, 0, 0);
        String::~String();
      }
      if ( *(_DWORD *)(a1 + 32) )
      {
        *(_DWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 40) = xTimer::getNativeTime();
      }
    }

    __int64 __fastcall FacebookManager::facebookFriendsFailed(LogicBuyChestCommand *a1)
    {
      __int64 result; // x0
      int v3; // w2
    
      result = FacebookConnection::isLogged(*((_QWORD *)a1 + 3));
      if ( (_DWORD)result )
      {
        Debugger::hudPrint((__siginfo *)"Facebook friend request failed: logging out", (const char *)0xFFFFFFFFLL, v3);
        return FacebookManager::logout(a1);
      }
      return result;
    }

    __int64 __fastcall FacebookManager::getState(LogicBuyChestCommand *this)
    {
      return *((unsigned int *)this + 8);
    }

    __int64 __fastcall FacebookManager::getFacebookId(LogicBuyChestCommand *this)
    {
      return (__int64)this + 48;
    }

    __int64 __fastcall FacebookManager::getPictureUrl(LogicBuyChestCommand *this)
    {
      return (__int64)this + 192;
    }

    __int64 __fastcall FacebookManager::initializeMembers(__int64 a1)
    {
      *(_BYTE *)(a1 + 216) = 0;
      String::operator=(a1 + 96, "");
      String::operator=(a1 + 120, "");
      String::operator=(a1 + 144, "");
      *(_QWORD *)(a1 + 24) = 0;
      std::vector<FacebookManager::Request>::_M_erase_at_end(a1 + 224, *(_QWORD *)(a1 + 224));
      return std::vector<FacebookManager::Request>::_M_erase_at_end(a1 + 248, *(_QWORD *)(a1 + 248));
    }

}; // end class FacebookManager
