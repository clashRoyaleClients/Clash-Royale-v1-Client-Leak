class Connection
{
public:

    __int64 __fastcall Connection::setListener(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 8) = a2;
      return result;
    }

    void __fastcall Connection::Connection(Connection *this)
    {
      int *v2; // x20
    
      *(_DWORD *)this = -1;
      *((_BYTE *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      v2 = (int *)((char *)this + 16);
      socketpair(1, 1, 0, (int *)this + 4);
      fcntl(*v2, 4, 4);
      fcntl(*((_DWORD *)this + 5), 4, 4);
    }

    void __fastcall Connection::Connection(Connection *this)
    {
      Connection::Connection(this);
    }

    void __fastcall Connection::~Connection(Connection *this)
    {
      int v2; // w0
    
      Connection::close(this);
      v2 = *((_DWORD *)this + 4);
      if ( v2 )
      {
        close(v2);
        close(*((_DWORD *)this + 5));
      }
      *(_DWORD *)this = -1;
      *((_BYTE *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    __int64 __fastcall Connection::close(__int64 this)
    {
      __int64 v1; // x19
    
      v1 = this;
      if ( *(_BYTE *)(this + 4) )
      {
        this = close(*(_DWORD *)this);
        if ( *(_BYTE *)(v1 + 4) )
        {
          this = *(_QWORD *)(v1 + 8);
          if ( this )
            this = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 32LL))(this, v1);
        }
      }
      *(_DWORD *)v1 = -1;
      *(_BYTE *)(v1 + 4) = 0;
      return this;
    }

    void __fastcall Connection::~Connection(Connection *this)
    {
      Connection::~Connection(this);
    }

    __int64 __fastcall Connection::threadFunc(Connection *this, void *a2)
    {
      __int64 v3; // x0
    
      v3 = *((_QWORD *)this + 1);
      if ( v3 )
        (*(void (__fastcall **)(__int64, Connection *))(*(_QWORD *)v3 + 16LL))(v3, this);
      return 0;
    }

    __int64 __fastcall Connection::start(Connection *this)
    {
      pthread_t v3; // [xsp+8h] [xbp-18h] BYREF
    
      signal(13, (void (__cdecl *)(int))1);
      return pthread_create(&v3, 0, (void *(__cdecl *)(void *))Connection::threadFunc, this);
    }

    __int64 __fastcall Connection::isConnected(Connection *this)
    {
      return *((unsigned __int8 *)this + 4);
    }

    __int64 __fastcall Connection::connect(__int64 a1, const char *a2, const char *a3)
    {
      int v6; // w23
      String *v7; // x0
      String *v8; // x22
      unsigned int v9; // w28
      bool v10; // zf
      int v11; // w1
      const char *v12; // x0
      addrinfo *v13; // x24
      int v14; // w22
      int *v15; // x0
      String *v16; // x23
      int v17; // w1
      char *v18; // x0
      int *v19; // x0
      String *v20; // x23
      int v21; // w1
      char *v22; // x0
      int v23; // w20
      __int64 v24; // x0
      __int64 result; // x0
      const String *v26; // [xsp+8h] [xbp-1B8h]
      String v27; // [xsp+18h] [xbp-1A8h] BYREF
      String v28; // [xsp+30h] [xbp-190h] BYREF
      String v29; // [xsp+48h] [xbp-178h] BYREF
      String v30; // [xsp+60h] [xbp-160h] BYREF
      String v31; // [xsp+78h] [xbp-148h] BYREF
      String v32; // [xsp+90h] [xbp-130h] BYREF
      String v33; // [xsp+A8h] [xbp-118h] BYREF
      String v34; // [xsp+C0h] [xbp-100h] BYREF
      String v35; // [xsp+D8h] [xbp-E8h] BYREF
      String v36; // [xsp+F0h] [xbp-D0h] BYREF
      String v37; // [xsp+108h] [xbp-B8h] BYREF
      String v38; // [xsp+120h] [xbp-A0h] BYREF
      addrinfo *v39; // [xsp+138h] [xbp-88h] BYREF
      addrinfo v40; // [xsp+140h] [xbp-80h] BYREF
    
      Connection::close(a1);
      memset(&v40.ai_addrlen, 0, 32);
      v6 = Connection::connect(char const*,char const*)::attempts++;
      *(_QWORD *)&v40.ai_flags = 0;
      *(_QWORD *)&v40.ai_socktype = 0x600000001LL;
      v7 = (String *)getaddrinfo(a2, a3, &v40, &v39);
      v8 = v7;
      v9 = v6 - 5;
      v10 = (unsigned int)(v6 - 5) > 0xE || (_DWORD)v7 == 0;
      if ( !v10 && (unsigned int)Track::isInitialized((CPVRTMemoryFileSystem::CAtExit *)v7) )
      {
        String::valueOf(&v38, v8, v11);
        v12 = gai_strerror((int)v8);
        String::String(&v37, v12);
        String::String(&v36, a2);
        String::String(&v35, a3);
        ((void (__fastcall *)(Track *__hidden, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *))Track::event)(
          (Track *)&TRACK_CONNECTION_ADDRFAIL,
          &PARAM_ERRNO,
          &v38,
          &PARAM_ERRSTR,
          &v37,
          &PARAM_HOST,
          &v36,
          &PARAM_SERV,
          &v35);
        String::~String();
        String::~String();
        String::~String();
        String::~String();
      }
      v13 = v39;
      if ( !v39 )
        goto LABEL_26;
      while ( 1 )
      {
        v14 = socket(v13->ai_family, v13->ai_socktype, v13->ai_protocol);
        if ( v14 == -1 )
        {
          v15 = __error();
          if ( v9 <= 0xE )
          {
            v16 = (String *)(unsigned int)*v15;
            if ( (unsigned int)Track::isInitialized((CPVRTMemoryFileSystem::CAtExit *)v15) )
            {
              String::valueOf(&v34, v16, v17);
              v18 = strerror((int)v16);
              String::String(&v33, v18);
              String::String(&v32, a2);
              String::String(&v31, a3);
              Track::event(
                (Track *)&TRACK_CONNECTION_SOCKFAIL,
                &PARAM_ERRNO,
                &v34,
                &PARAM_ERRSTR,
                &v33,
                &PARAM_HOST,
                &v32,
                &PARAM_SERV,
                &v31,
                v26);
              String::~String();
              String::~String();
              String::~String();
              String::~String();
            }
          }
        }
        if ( connect(v14, v13->ai_addr, v13->ai_addrlen) != -1 )
          break;
        v19 = __error();
        if ( v9 <= 0xE )
        {
          v20 = (String *)(unsigned int)*v19;
          if ( (unsigned int)Track::isInitialized((CPVRTMemoryFileSystem::CAtExit *)v19) )
          {
            String::valueOf(&v30, v20, v21);
            v22 = strerror((int)v20);
            String::String(&v29, v22);
            String::String(&v28, a2);
            String::String(&v27, a3);
            Track::event(
              (Track *)&TRACK_CONNECTION_CONNFAIL,
              &PARAM_ERRNO,
              &v30,
              &PARAM_ERRSTR,
              &v29,
              &PARAM_HOST,
              &v28,
              &PARAM_SERV,
              &v27,
              v26);
            String::~String();
            String::~String();
            String::~String();
            String::~String();
          }
        }
        close(v14);
        v13 = v13->ai_next;
        if ( !v13 )
        {
          v23 = 0;
          goto LABEL_19;
        }
      }
      v23 = 1;
    LABEL_19:
      if ( v39 )
        freeaddrinfo(v39);
      if ( v23 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)a1 = v14;
        v24 = *(_QWORD *)(a1 + 8);
        if ( v24 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, a1);
        setsockopt(v14, 0xFFFF, 4130, &Connection::connect(char const*,char const*)::kOne, 4u);
        result = setsockopt(v14, 6, 1, &Connection::connect(char const*,char const*)::kOne, 4u);
        if ( (result & 0x80000000) != 0 )
          return Connection::handleErrno((Connection *)a1);
      }
      else
      {
    LABEL_26:
        result = *(_QWORD *)(a1 + 8);
        if ( result )
          return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 56LL))(result, a1);
      }
      return result;
    }

    __int64 __fastcall Connection::handleErrno(Connection *this)
    {
      int *v2; // x8
      __int64 result; // x0
      __int64 v4; // x8
      __int64 v5; // x0
    
      v2 = __error();
      result = 0;
      v4 = (unsigned int)*v2;
      if ( (unsigned int)v4 <= 0x3C )
      {
        if ( ((1LL << v4) & 0x1240004100000000LL) != 0 )
        {
          Connection::close((__int64)this);
          return 1;
        }
        if ( v4 == 9 )
        {
          if ( *((_BYTE *)this + 4) )
          {
            v5 = *((_QWORD *)this + 1);
            if ( v5 )
              (*(void (__fastcall **)(__int64, Connection *))(*(_QWORD *)v5 + 32LL))(v5, this);
          }
          *(_DWORD *)this = -1;
          *((_BYTE *)this + 4) = 0;
          return 1;
        }
      }
      return result;
    }

    __int64 __fastcall Connection::writeBlocking(Connection *this, char *a2, int a3)
    {
      bool v6; // w24
      int v7; // w25
      int v8; // w8
      char *v9; // x22
      size_t v10; // x23
      int v11; // w0
      int v12; // w0
    
      v6 = a3 > 0;
      if ( a3 >= 1 )
      {
        v7 = 0;
        v8 = a3;
        v9 = a2;
        while ( 2 )
        {
          v10 = v8;
          while ( 1 )
          {
            v11 = send(*(_DWORD *)this, v9, v10, 0);
            if ( (v11 & 0x80000000) == 0 )
              break;
            v12 = Connection::handleErrno(this);
            if ( (v12 & 1) != 0 || !v6 )
              return v12 ^ 1u;
          }
          v7 += v11;
          v8 = a3 - v7;
          v6 = v7 < a3;
          v9 = &a2[v7];
          if ( v7 < a3 )
            continue;
          break;
        }
      }
      return 1;
    }

    bool __fastcall Connection::readBlocking(Connection *this, void *a2, int a3)
    {
      int v5; // w0
      int v6; // w21
    
      if ( !a3 )
        return 1;
      v5 = recv(*(_DWORD *)this, a2, a3, 64);
      v6 = v5;
      if ( v5 )
      {
        if ( v5 < 0 )
        {
          Connection::handleErrno(this);
          return 0;
        }
      }
      else
      {
        Connection::close((__int64)this);
      }
      return v6 == a3;
    }

    bool __fastcall Connection::wait(Connection *this, int a2)
    {
      unsigned __int64 v4; // x21
      int v5; // w23
      int v6; // w8
      _QWORD *v7; // x4
      int v8; // w0
      int v9; // w20
      __int64 v10; // x0
      int v11; // w0
      __int64 v12; // x0
      char v14; // [xsp+Fh] [xbp-1C1h] BYREF
      _QWORD v15[2]; // [xsp+10h] [xbp-1C0h] BYREF
      _BYTE v16[128]; // [xsp+20h] [xbp-1B0h] BYREF
      _BYTE __dst[128]; // [xsp+A0h] [xbp-130h] BYREF
      _BYTE __b[128]; // [xsp+120h] [xbp-B0h] BYREF
    
      memset(__b, 0, sizeof(__b));
      v4 = *(int *)this;
      if ( (_DWORD)v4 != -1 )
        *(_DWORD *)&__b[(v4 >> 3) & 0x1FFFFFFFFFFFFFFCLL] |= 1 << (v4 & 0x1F);
      v5 = *((_DWORD *)this + 5);
      *(_DWORD *)&__b[((unsigned __int64)v5 >> 3) & 0x1FFFFFFFFFFFFFFCLL] |= 1 << (v5 & 0x1F);
      memcpy(__dst, __b, sizeof(__dst));
      memcpy(v16, __b, sizeof(v16));
      v15[1] = 0;
      v15[0] = a2;
      if ( v5 <= (int)v4 )
        v6 = v4;
      else
        v6 = v5;
      if ( a2 >= 0 )
        v7 = v15;
      else
        v7 = 0;
      v8 = select_DARWIN_EXTSN((unsigned int)(v6 + 1), __dst, 0, v16, v7);
      v9 = v8;
      if ( v8 < 0 )
      {
        Connection::handleErrno(this);
        return 0;
      }
      else
      {
        if ( v8 >= 1 )
        {
          if ( ((1 << (*(_DWORD *)this & 0x1F))
              & *(_DWORD *)&__dst[((unsigned __int64)*(int *)this >> 3) & 0x1FFFFFFFFFFFFFFCLL]) != 0 )
          {
            v10 = *((_QWORD *)this + 1);
            if ( v10 )
              (*(void (__fastcall **)(__int64, Connection *))(*(_QWORD *)v10 + 48LL))(v10, this);
          }
          v11 = *((_DWORD *)this + 5);
          if ( ((1 << (v11 & 0x1F)) & *(_DWORD *)&__dst[((unsigned __int64)v11 >> 3) & 0x1FFFFFFFFFFFFFFCLL]) != 0 )
          {
            while ( recv(v11, &v14, 1u, 0) == 1 )
              v11 = *((_DWORD *)this + 5);
            v12 = *((_QWORD *)this + 1);
            if ( v12 )
              (*(void (__fastcall **)(__int64, Connection *))(*(_QWORD *)v12 + 40LL))(v12, this);
          }
        }
        return v9 != 0;
      }
    }

    ssize_t __fastcall Connection::wakeup(Connection *this)
    {
      char v2; // [xsp+Fh] [xbp-1h] BYREF
    
      v2 = 1;
      return send(*((_DWORD *)this + 4), &v2, 1u, 0);
    }

    void __usercall Connection::getInterfaceName(Connection *this@<X0>, String *a2@<X8>)
    {
      ifaddrs *v4; // x22
      int sa_family; // w23
      sockaddr *ifa_addr; // x8
      int v7; // w9
      ifaddrs *v8; // [xsp+8h] [xbp-C8h] BYREF
      __darwin_blksize_t v9; // [xsp+14h] [xbp-BCh] BYREF
      sockaddr v10[8]; // [xsp+18h] [xbp-B8h] BYREF
    
      String::String(a2, "");
      v9 = 128;
      getsockname(*(_DWORD *)this, v10, (socklen_t *)&v9);
      getifaddrs(&v8);
      v4 = v8;
      if ( v8 )
      {
        sa_family = v10[0].sa_family;
        while ( 1 )
        {
          ifa_addr = v4->ifa_addr;
          v7 = ifa_addr->sa_family;
          if ( sa_family == 2 && v7 == 2 && *(_DWORD *)&v10[0].sa_data[2] == *(_DWORD *)&ifa_addr->sa_data[2] )
            break;
          if ( sa_family == 30 && v7 == 30 && !memcmp(&v10[0].sa_data[6], &ifa_addr->sa_data[6], 0x10u) )
            break;
          v4 = v4->ifa_next;
          if ( !v4 )
            goto LABEL_12;
        }
        String::operator=(a2, v4->ifa_name);
      }
    LABEL_12:
      freeifaddrs(v8);
    }

}; // end class Connection
