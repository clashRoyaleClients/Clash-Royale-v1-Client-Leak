class Messaging
{
public:

    __int64 __fastcall Messaging::setEncrypters(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
    {
      __int64 v8; // x0
      __int64 result; // x0
    
      v8 = a1[47];
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      a1[47] = 0;
      result = a1[48];
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      a1[47] = a2;
      a1[48] = a3;
      a1[49] = a4;
      return result;
    }

    __int64 __fastcall Messaging::writeHeader(mach_port_name_t *a1, _BYTE *a2, int a3)
    {
      __int64 v6; // x21
      __int64 result; // x0
      const char *v8; // x1
      const String *v9; // x1
      _BYTE v10[24]; // [xsp+8h] [xbp-38h] BYREF
    
      v6 = (*(__int64 (__fastcall **)(mach_port_name_t *))(*(_QWORD *)a1 + 40LL))(a1);
      result = PiranhaMessage::getMessageVersion(a1);
      a2[1] = v6;
      *a2 = BYTE1(v6);
      a2[2] = BYTE2(a3);
      a2[3] = BYTE1(a3);
      a2[4] = a3;
      if ( a3 >= 0x1000000 )
      {
        String::format((String *)"Trying to send too big message, type %p", v8, v6);
        Debugger::error((Debugger *)v10, v9);
      }
      a2[5] = BYTE1(result);
      a2[6] = result;
      return result;
    }

    __int64 __fastcall Messaging::Messaging(__int64 a1)
    {
      *(_QWORD *)a1 = off_100475890;
      Queue<PiranhaMessage *>::Queue(a1 + 16);
      Queue<PiranhaMessage *>::Queue(a1 + 104);
      pthread_mutex_init((pthread_mutex_t *)(a1 + 192), 0);
      pthread_mutex_init((pthread_mutex_t *)(a1 + 256), 0);
      Connection::Connection((Connection *)(a1 + 320));
      String::String((String *)(a1 + 344));
      *(_QWORD *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 416) = 0;
      Messaging::initializeMembers((Messaging *)a1);
      *(_QWORD *)(a1 + 408) = 1024;
      *(_QWORD *)(a1 + 400) = operator new[](1024);
      return a1;
    }

    __int64 __fastcall Messaging::Messaging(__int64 a1)
    {
      Messaging::Messaging(a1);
      return a1;
    }

    __int64 __fastcall Messaging::~Messaging(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      *(_QWORD *)a1 = off_100475890;
      Messaging::disconnect((Messaging *)a1);
      Mutex::lock((pthread_mutex_t *)(a1 + 192));
      Mutex::unlock((pthread_mutex_t *)(a1 + 192));
      Connection::setListener(a1 + 320, 0);
      v2 = *(_QWORD *)(a1 + 8);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        v3 = *(_QWORD *)(a1 + 8);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *(_QWORD *)(a1 + 8) = 0;
      }
      v4 = *(_QWORD *)(a1 + 376);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = *(_QWORD *)(a1 + 384);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = *(_QWORD *)(a1 + 400);
      if ( v6 )
        operator delete[](v6);
      Messaging::initializeMembers((Messaging *)a1);
      memset((void *)(a1 + 464), 0, 0x90u);
      std::vector<String>::~vector((String **)(a1 + 416));
      String::~String();
      Connection::~Connection((Connection *)(a1 + 320));
      pthread_mutex_destroy((pthread_mutex_t *)(a1 + 256));
      pthread_mutex_destroy((pthread_mutex_t *)(a1 + 192));
      Queue<PiranhaMessage *>::~Queue(a1 + 104);
      Queue<PiranhaMessage *>::~Queue(a1 + 16);
      return a1;
    }

    __int64 __fastcall Messaging::disconnect(__int64 a1)
    {
      pthread_mutex_t *v2; // x20
    
      v2 = (pthread_mutex_t *)(a1 + 256);
      Mutex::lock((pthread_mutex_t *)(a1 + 256));
      *(_BYTE *)(a1 + 444) = 1;
      *(_WORD *)(a1 + 369) = 0;
      Mutex::unlock(v2);
      Connection::wakeup((Connection *)(a1 + 320));
      Mutex::lock((pthread_mutex_t *)(a1 + 192));
      Mutex::unlock((pthread_mutex_t *)(a1 + 192));
      Messaging::drainQueues((Messaging *)a1);
      Mutex::lock(v2);
      *(_WORD *)(a1 + 444) = 0;
      return Mutex::unlock(v2);
    }

    __int64 __fastcall Messaging::~Messaging(__int64 a1)
    {
      Messaging::~Messaging(a1);
      return a1;
    }

    void __fastcall Messaging::~Messaging(void *a1)
    {
      Messaging::~Messaging((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall Messaging::drainQueues(__int64 a1)
    {
      __int64 v2; // x20
      __int64 v3; // x21
      __int64 v4; // x19
      __int64 result; // x0
      __int64 v6; // x20
      __int64 v7; // [xsp+8h] [xbp-28h] BYREF
    
      v7 = 0;
      v2 = a1 + 104;
      while ( (Queue<PiranhaMessage *>::dequeue(v2, &v7) & 1) != 0 )
      {
        v3 = v7;
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
          v7 = 0;
        }
      }
      v4 = a1 + 16;
      while ( 1 )
      {
        result = Queue<PiranhaMessage *>::dequeue(v4, &v7);
        if ( (result & 1) == 0 )
          break;
        v6 = v7;
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          v7 = 0;
        }
      }
      return result;
    }

    __int64 __fastcall Messaging::isConnected(__int64 a1)
    {
      return Connection::isConnected((Connection *)(a1 + 320));
    }

    __int64 __fastcall Messaging::send(__int64 a1, mach_port_name_t *a2)
    {
      __int64 v4; // x22
      Connection *v5; // x20
      const char *v6; // x1
      const String *v7; // x1
      const char *v8; // x1
      const String *v9; // x1
      __int64 v10; // x21
      __siginfo var58; // [xsp+8h] [xbp-58h] BYREF
    
      var58.__pad[0] = (unsigned __int64)a2;
      v4 = (*(__int64 (__fastcall **)(mach_port_name_t *))(*(_QWORD *)a2 + 40LL))(a2);
      v5 = (Connection *)(a1 + 320);
      if ( (Connection::isConnected((Connection *)(a1 + 320)) & 1) == 0 )
      {
        String::format((String *)"Messaging::send message type %d when not connected", v6, v4);
        Debugger::warning((__siginfo *)&var58.si_addr, v7);
        String::~String();
      }
      if ( (unsigned int)PiranhaMessage::isServerToClientMessage(a2) )
      {
        String::format((String *)"Messaging::send server to client message type %d", v8, v4);
        Debugger::warning(&var58, v9);
        String::~String();
      }
      v10 = Queue<PiranhaMessage *>::enqueue(a1 + 16, var58.__pad);
      if ( (v10 & 1) != 0 )
      {
        Connection::wakeup(v5);
      }
      else
      {
        (*(void (__fastcall **)(mach_port_name_t *))(*(_QWORD *)a2 + 48LL))(a2);
        (*(void (__fastcall **)(mach_port_name_t *))(*(_QWORD *)a2 + 8LL))(a2);
        var58.__pad[0] = 0;
      }
      return v10;
    }

    __int64 __fastcall Messaging::nextMessage(__int64 a1)
    {
      __int64 v2; // [xsp+8h] [xbp-8h] BYREF
    
      v2 = 0;
      Queue<PiranhaMessage *>::dequeue(a1 + 104, &v2);
      return v2;
    }

    __int64 __fastcall Messaging::hasConnectFailed(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 368);
    }

    __int64 __fastcall Messaging::connect(__int64 a1, __int64 a2, const String *a3)
    {
      const char *v5; // x1
      char *v6; // x0
    
      if ( !*(_QWORD *)(a1 + 8) )
        __assert_rtn(
          "connect",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Messaging.cpp",
          167,
          "m_pFactory && \"Set message factory first\"");
      Messaging::disconnect(a1);
      if ( (unsigned int)Connection::isConnected((Connection *)(a1 + 320)) )
      {
        v6 = "Messaging::connect while connected";
        return Debugger::warning((__siginfo *)v6, v5);
      }
      if ( *(_BYTE *)(a1 + 445) )
      {
        v6 = "Messaging::connect while connecting";
        return Debugger::warning((__siginfo *)v6, v5);
      }
      if ( *(_BYTE *)(a1 + 444) )
      {
        v6 = "Messaging::connect while disconnecting";
        return Debugger::warning((__siginfo *)v6, v5);
      }
      String::operator=((String *)(a1 + 344));
      Messaging::addPort((Messaging *)a1, a3);
      Mutex::lock((pthread_mutex_t *)(a1 + 256));
      *(_BYTE *)(a1 + 445) = 1;
      Mutex::unlock((pthread_mutex_t *)(a1 + 256));
      Mutex::lock((pthread_mutex_t *)(a1 + 192));
      Connection::setListener(a1 + 320, a1);
      Connection::start((Connection *)(a1 + 320));
      *(_WORD *)(a1 + 368) = 256;
      return Mutex::unlock((pthread_mutex_t *)(a1 + 192));
    }

    String *__fastcall Messaging::addPort(__int64 a1, String *a2)
    {
      _QWORD *v3; // x20
      int v4; // w8
      __int64 v5; // x21
      __int64 v6; // x8
      __int64 v7; // x22
      String *result; // x0
    
      v3 = (_QWORD *)(a1 + 416);
      v4 = -1431655765 * ((__int64)(*(_QWORD *)(a1 + 424) - *(_QWORD *)(a1 + 416)) >> 3);
      v5 = v4 + 1LL;
      v6 = 24LL * (v4 - 1);
      while ( --v5 >= 1 )
      {
        v7 = v6 - 24;
        result = (String *)String::equals(*v3 + v6, a2);
        v6 = v7;
        if ( ((unsigned __int8)result & 1) != 0 )
          return result;
      }
      return std::vector<String>::push_back((__int64)v3, a2);
    }

    __int64 __fastcall Messaging::onConnectionFailed(__int64 result)
    {
      signed int v1; // w8
      int v2; // w9
    
      v1 = *(_DWORD *)(result + 440);
      v2 = *(unsigned __int8 *)(result + 371);
      if ( v1 >= (int)(-1431655765 * ((*(_QWORD *)(result + 424) - *(_QWORD *)(result + 416)) >> 3) - 1) )
      {
        *(_BYTE *)(result + 368) = 1;
        if ( !v2 )
          *(_DWORD *)(result + 440) = 0;
      }
      else if ( *(_BYTE *)(result + 371) )
      {
        *(_BYTE *)(result + 368) = 1;
      }
      else
      {
        *(_DWORD *)(result + 440) = v1 + 1;
        return Messaging::connectToNextPort((Messaging *)result);
      }
      return result;
    }

    __int64 __fastcall Messaging::connectToNextPort(__int64 a1)
    {
      __int64 v2; // x8
      __int64 v3; // x20
      int v4; // w2
      const char *v5; // x1
      __int64 v6; // x8
      const char *v7; // x2
      _QWORD v9[3]; // [xsp+8h] [xbp-28h] BYREF
    
      v2 = *(_QWORD *)(a1 + 416);
      v3 = *(_DWORD *)(a1 + 440) % (int)(-1431655765 * ((unsigned __int64)(*(_QWORD *)(a1 + 424) - v2) >> 3));
      operator+(v9, "Connecting to port ", v2 + 24 * v3);
      Debugger::hudPrint((__siginfo *)v9, (const String *)0xFFFFFFFFLL, v4);
      String::~String();
      v5 = (const char *)(a1 + 352);
      if ( *(_DWORD *)(a1 + 348) + 1 > 8 )
        v5 = *(const char **)v5;
      v6 = *(_QWORD *)(a1 + 416) + 24 * v3;
      v7 = (const char *)(v6 + 8);
      if ( *(_DWORD *)(v6 + 4) + 1 > 8 )
        v7 = *(const char **)v7;
      return Connection::connect(a1 + 320, v5, v7);
    }

    __int64 __fastcall Messaging::onStart(pthread_mutex_t *a1)
    {
      pthread_mutex_t *v2; // x19
      const char *v3; // x1
      int isConnected; // w23
      int v5; // w23
    
      v2 = a1 + 3;
      Mutex::lock(a1 + 3);
      if ( a1[6].__opaque[52] )
      {
        Debugger::warning((__siginfo *)"Messaging::onStart while disconnecting", v3);
      }
      else
      {
        a1[5].__opaque[42] = 1;
        while ( 1 )
        {
          Mutex::lock(a1 + 4);
          if ( !a1[5].__opaque[42] )
            break;
          isConnected = Connection::isConnected((Connection *)&a1[5]);
          Mutex::unlock(a1 + 4);
          if ( isConnected )
          {
            Connection::wait((Connection *)&a1[5], -1);
            Mutex::lock(a1 + 4);
            if ( (Connection::isConnected((Connection *)&a1[5]) & 1) == 0 )
              a1[5].__opaque[42] = 0;
            Mutex::unlock(a1 + 4);
          }
          else if ( a1[5].__opaque[41] )
          {
            Messaging::connectToNextPort((__int64)a1);
            if ( (Connection::isConnected((Connection *)&a1[5]) & 1) == 0 )
            {
              Mutex::lock(a1 + 4);
              v5 = (unsigned __int8)a1[6].__opaque[52];
              Mutex::unlock(a1 + 4);
              if ( !v5 )
                usleep(0x7A120u);
            }
          }
        }
        Mutex::unlock(a1 + 4);
        Connection::close((__int64)&a1[5]);
      }
      return Mutex::unlock(v2);
    }

    __int64 __fastcall Messaging::onConnect(pthread_mutex_t *a1)
    {
      pthread_mutex_t *v2; // x20
    
      v2 = a1 + 4;
      Mutex::lock(a1 + 4);
      a1[5].__opaque[41] = 0;
      a1[5].__opaque[43] = 1;
      a1[6].__opaque[53] = 0;
      return Mutex::unlock(v2);
    }

    __int64 __fastcall Messaging::onDisconnect(pthread_mutex_t *a1)
    {
      pthread_mutex_t *v2; // x20
    
      v2 = a1 + 4;
      Mutex::lock(a1 + 4);
      a1[6].__opaque[53] = 0;
      return Mutex::unlock(v2);
    }

    __int64 __fastcall Messaging::onWakeup(__int64 a1, Connection *a2)
    {
      __int64 v4; // x21
      __int64 result; // x0
      mach_port_name_t *v6; // x22
      int v7; // w23
      __int64 v8; // x0
      int v9; // w0
      unsigned __int64 v10; // x23
      __int64 v11; // x0
      ChallengePopup *ByteStream; // x0
      const void *ByteArray; // x24
      int EncodingLength; // w23
      __int64 v15; // x25
      unsigned int (__fastcall *v16)(__int64, const void *, __int64, __int64); // x27
      __int64 v17; // x26
      __int64 v18; // x0
      void *v19; // x25
      int v20; // w0
      char v21; // w23
      mach_port_name_t *v22; // [xsp+8h] [xbp-58h] BYREF
    
      v22 = 0;
      v4 = a1 + 16;
      do
      {
        result = Queue<PiranhaMessage *>::dequeue(v4, &v22);
        if ( !(_DWORD)result )
          break;
        v6 = v22;
        (*(void (__fastcall **)(mach_port_name_t *))(*(_QWORD *)v22 + 16LL))(v22);
        v7 = PiranhaMessage::getEncodingLength(v6) + 7;
        v8 = *(_QWORD *)(a1 + 384);
        if ( v8 )
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
        else
          v9 = 0;
        v10 = v7 + v9;
        if ( v10 > *(_QWORD *)(a1 + 408) )
        {
          v11 = *(_QWORD *)(a1 + 400);
          if ( v11 )
            operator delete[](v11);
          *(_QWORD *)(a1 + 400) = operator new[](v10);
          *(_QWORD *)(a1 + 408) = v10;
        }
        ByteStream = (ChallengePopup *)PiranhaMessage::getByteStream(v6);
        ByteArray = (const void *)ByteStream::getByteArray(ByteStream);
        EncodingLength = PiranhaMessage::getEncodingLength(v6);
        v15 = *(_QWORD *)(a1 + 384);
        if ( v15 )
        {
          v16 = *(unsigned int (__fastcall **)(__int64, const void *, __int64, __int64))(*(_QWORD *)v15 + 24LL);
          v17 = *(_QWORD *)(a1 + 400) + 7LL;
          v18 = PiranhaMessage::getEncodingLength(v6);
          if ( v16(v15, ByteArray, v17, v18) )
            __assert_rtn(
              "onWakeup",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Messaging.cpp",
              392,
              "ret == false");
          EncodingLength += (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 32LL))(*(_QWORD *)(a1 + 384));
        }
        else
        {
          v19 = (void *)(*(_QWORD *)(a1 + 400) + 7LL);
          v20 = PiranhaMessage::getEncodingLength(v6);
          memcpy(v19, ByteArray, v20);
        }
        Messaging::writeHeader(v6, *(_BYTE **)(a1 + 400), EncodingLength);
        result = Connection::writeBlocking(a2, *(char **)(a1 + 400), EncodingLength + 7);
        v21 = result;
        if ( v6 )
        {
          (*(void (__fastcall **)(mach_port_name_t *))(*(_QWORD *)v6 + 48LL))(v6);
          result = (*(__int64 (__fastcall **)(mach_port_name_t *))(*(_QWORD *)v6 + 8LL))(v6);
          v22 = 0;
        }
      }
      while ( (v21 & 1) != 0 );
      return result;
    }

    void __fastcall Messaging::onReceive(__int64 a1, Connection *a2)
    {
      __int64 v4; // x20
      int v5; // w27
      unsigned __int8 v6; // w24
      unsigned int v7; // w26
      unsigned __int8 v8; // w25
      int v9; // w21
      __int64 v10; // x0
      ServerHelloMessage *v11; // x23
      __int64 v12; // x24
      void *v13; // x23
      __int64 v14; // x0
      ByteStream *ByteStream; // x0
      long double v16; // q0
      const char *v17; // x1
      __int64 i; // x20
      const String *v19; // x1
      const char *v20; // x1
      const String *v21; // x1
      double v22; // d0
      const char *v23; // x1
      const String *v24; // x1
      __int64 v25; // x0
      const char *v26; // x1
      const String *v27; // x1
      __siginfo v28; // [xsp+10h] [xbp-F0h] BYREF
      _BYTE v29[24]; // [xsp+78h] [xbp-88h] BYREF
      String v30; // [xsp+90h] [xbp-70h] BYREF
      int v31; // [xsp+A8h] [xbp-58h] BYREF
      __int16 v32; // [xsp+ACh] [xbp-54h]
      unsigned __int8 v33; // [xsp+AEh] [xbp-52h]
    
      if ( !*(_QWORD *)(a1 + 8) )
        __assert_rtn(
          "onReceive",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Messaging.cpp",
          412,
          "m_pFactory");
      v33 = 0;
      v32 = 0;
      v31 = 0;
      if ( !Connection::readBlocking(a2, &v31, 7) )
      {
        if ( !(unsigned int)Connection::isConnected(a2) )
          return;
        String::String(&v30, "");
        for ( i = 0; i < 7; ++i )
        {
          String::format((String *)"%p,", v17, *((char *)&v31 + i));
          String::operator+=(&v30, v29);
          String::~String();
        }
        operator+(&v28.__pad[4], "Messaging::onReceive Read failed. Header ", &v30);
        Debugger::warning((__siginfo *)&v28.__pad[4], v19);
        String::~String();
        goto LABEL_31;
      }
      v4 = BYTE1(v31) | ((unsigned __int8)v31 << 8);
      v5 = BYTE2(v31);
      v6 = HIBYTE(v31);
      v7 = (unsigned __int8)v32;
      v8 = HIBYTE(v32);
      v9 = v33;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), v4);
      v28.__pad[3] = v10;
      if ( (_DWORD)v4 == 20100 && *(_DWORD *)(a1 + 448) == 1 )
      {
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
          if ( v28.__pad[3] )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v28.__pad[3] + 8LL))(v28.__pad[3]);
          v28.__pad[3] = 0;
        }
        v11 = (ServerHelloMessage *)operator new(88);
        ServerHelloMessage::ServerHelloMessage(v11);
        v28.__pad[3] = (unsigned __int64)v11;
      }
      v12 = (v5 << 16) | (v6 << 8) | v7;
      v13 = (void *)operator new[](v12);
      if ( !Connection::readBlocking(a2, v13, v12) )
      {
        if ( (unsigned int)Connection::isConnected(a2) )
        {
          String::format((String *)"Messaging::onReceive\tfailed to read message %d", v20, v4);
          Debugger::warning((__siginfo *)v28.__pad, v21);
          String::~String();
        }
        *(__n128 *)&v16 = operator delete[](v13);
        goto LABEL_26;
      }
      v14 = *(_QWORD *)(a1 + 376);
      if ( v14 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, void *, void *, __int64))(*(_QWORD *)v14 + 16LL))(v14, v13, v13, v12) )
          __assert_rtn(
            "onReceive",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Messaging.cpp",
            486,
            "ret == false");
        LODWORD(v12) = v12 - (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 32LL))(*(_QWORD *)(a1 + 376));
      }
      if ( !v28.__pad[3] )
      {
        *(_QWORD *)&v22 = operator delete[](v13).n128_u64[0];
        String::format((String *)"Ignoring message of unknown type %p", v23, v22, v4);
        Debugger::warning((__siginfo *)&v28.si_addr, v24);
    LABEL_31:
        String::~String();
        return;
      }
      PiranhaMessage::setMessageVersion((mach_port_name_t *)v28.__pad[3], v9 & 0xFFFF00FF | (v8 << 8));
      ByteStream = (ByteStream *)PiranhaMessage::getByteStream((mach_port_name_t *)v28.__pad[3]);
      ByteStream::setByteArray(ByteStream, (char *)v13, v12);
      if ( *(_DWORD *)(a1 + 448) == 2 )
        Messaging::handlePepperLoginResponse((Messaging *)a1, (PiranhaMessage *)v28.__pad[3]);
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v28.__pad[3] + 24LL))(v28.__pad[3]);
      if ( (_DWORD)v4 == 20100 )
      {
        Messaging::sendPepperLogin((Messaging *)a1, (ServerHelloMessage *)v28.__pad[3]);
      }
      else if ( (_DWORD)v4 == 20000 )
      {
        v25 = *(_QWORD *)(a1 + 392);
        if ( v25 )
          (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v25 + 16LL))(v25, a1, v28.__pad[3]);
      }
      else
      {
        if ( (Queue<PiranhaMessage *>::enqueue(a1 + 104, &v28.__pad[3]) & 1) != 0 )
          return;
        String::format((String *)"Incoming message queue full. Message of type %i discarded.", v26, v4);
        Debugger::warning(&v28, v27);
        String::~String();
      }
    LABEL_26:
      if ( v28.__pad[3] )
      {
        (*(void (__fastcall **)(unsigned __int64, long double))(*(_QWORD *)v28.__pad[3] + 48LL))(v28.__pad[3], v16);
        if ( v28.__pad[3] )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v28.__pad[3] + 8LL))(v28.__pad[3]);
        v28.__pad[3] = 0;
      }
    }

    __int64 __fastcall Messaging::handlePepperLoginResponse(__int64 a1, mach_port_name_t *a2)
    {
      int *ByteStream; // x23
      size_t v4; // x26
      _OWORD *v5; // x24
      const void *ByteArray; // x0
      __int64 v7; // x25
      __int64 v8; // x0
      void *v9; // x26
      __int64 v10; // x23
      __int64 v11; // x24
      __int64 v12; // x0
      __int64 result; // x0
      __int64 v14; // [xsp+0h] [xbp-2C0h] BYREF
      __int128 v15; // [xsp+10h] [xbp-2B0h] BYREF
      __int64 v16; // [xsp+20h] [xbp-2A0h]
      __int128 v17; // [xsp+30h] [xbp-290h] BYREF
      __int128 v18; // [xsp+40h] [xbp-280h]
      __int128 v19; // [xsp+50h] [xbp-270h] BYREF
      __int64 v20; // [xsp+60h] [xbp-260h]
      __int128 v21; // [xsp+70h] [xbp-250h] BYREF
      __int128 v22; // [xsp+80h] [xbp-240h]
      __int128 v23; // [xsp+90h] [xbp-230h]
      __int128 v24; // [xsp+A0h] [xbp-220h]
      int v25[92]; // [xsp+B8h] [xbp-208h] BYREF
      _BYTE v26[24]; // [xsp+228h] [xbp-98h] BYREF
      _OWORD v27[2]; // [xsp+240h] [xbp-80h] BYREF
    
      ByteStream = (int *)PiranhaMessage::getByteStream(a2);
      v27[1] = *(_OWORD *)(a1 + 480);
      v27[0] = *(_OWORD *)(a1 + 464);
      PepperCrypto::Blake2b::Blake2b(v25, 24);
      PepperCrypto::Blake2b::update((__int64)v25, a1 + 560, 24);
      PepperCrypto::Blake2b::update((__int64)v25, a1 + 496, 32);
      PepperCrypto::Blake2b::update((__int64)v25, (__int64)v27, 32);
      PepperCrypto::Blake2b::final((unsigned __int8 *)v25, (__int64)v26);
      v4 = ByteStream[10];
      v5 = (_OWORD *)((char *)&v14 - ((v4 - 1) & 0xFFFFFFFFFFFFFFF0LL));
      ByteArray = (const void *)ByteStream::getByteArray((ChallengePopup *)ByteStream);
      if ( PepperCrypto::box_open(ByteArray, v4, v5, v4 - 16, (__int64)v26, a1 + 464, a1 + 528) )
        __assert_rtn(
          "handlePepperLoginResponse",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Messaging.cpp",
          675,
          "ret == false");
      *(_QWORD *)(a1 + 600) = *((_QWORD *)v5 + 2);
      *(_OWORD *)(a1 + 584) = *v5;
      v24 = *(_OWORD *)((char *)v5 + 40);
      v23 = *(_OWORD *)((char *)v5 + 24);
      v7 = (int)v4 - 72;
      if ( v7 < 0 )
        v8 = -1;
      else
        v8 = (int)v4 - 72;
      v9 = (void *)operator new[](v8);
      memcpy(v9, (char *)v5 + 56, v7);
      ByteStream::setByteArray((ByteStream *)ByteStream, (char *)v9, v7);
      v10 = operator new(64);
      v22 = v24;
      v21 = v23;
      v20 = *(_QWORD *)(a1 + 600);
      v19 = *(_OWORD *)(a1 + 584);
      PepperEncrypter::PepperEncrypter(v10, &v21, &v19);
      v20 = 0;
      v19 = 0u;
      v22 = 0u;
      v21 = 0u;
      v11 = operator new(64);
      v18 = v24;
      v17 = v23;
      v16 = *(_QWORD *)(a1 + 576);
      v15 = *(_OWORD *)(a1 + 560);
      PepperEncrypter::PepperEncrypter(v11, &v17, &v15);
      v16 = 0;
      v15 = 0u;
      v18 = 0u;
      v17 = 0u;
      memset((void *)(a1 + 464), 0, 0x90u);
      v12 = *(_QWORD *)(a1 + 376);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *(_QWORD *)(a1 + 376) = 0;
      result = *(_QWORD *)(a1 + 384);
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      *(_QWORD *)(a1 + 376) = v10;
      *(_QWORD *)(a1 + 384) = v11;
      *(_QWORD *)(a1 + 392) = 0;
      *(_DWORD *)(a1 + 448) = 3;
      return result;
    }

    __int64 __fastcall Messaging::sendPepperLogin(__int64 a1, __int64 a2)
    {
      const void *v4; // x26
      size_t v5; // x25
      ChallengePopup *ByteStream; // x27
      size_t v7; // x23
      char *v8; // x24
      char *v9; // x8
      char *v10; // x28
      __int64 ByteArray; // x26
      __int64 v12; // x27
      __int64 v13; // x8
      __int64 v14; // x10
      char *v15; // x11
      char v16; // t1
      __int64 v17; // x9
      __int64 v18; // x25
      __int64 v19; // x0
      __int64 v20; // x26
      mach_port_name_t *v21; // x21
      mach_port_name_t v22; // w22
      ByteStream *v23; // x0
      int MessageVersion; // w0
      __int64 result; // x0
      int v27[92]; // [xsp+10h] [xbp-1E0h] BYREF
      _BYTE v28[24]; // [xsp+180h] [xbp-70h] BYREF
    
      *(_DWORD *)(a1 + 448) = 2;
      PepperCrypto::generateRandom((void *)(a1 + 560), 24);
      *(_BYTE *)(a1 + 560) &= ~1u;
      PepperCrypto::generateKeyPair();
      v4 = *(const void **)(a2 + 72);
      v5 = *(int *)(a2 + 80);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 16LL))(*(_QWORD *)(a1 + 456));
      ByteStream = (ChallengePopup *)PiranhaMessage::getByteStream(*(mach_port_name_t **)(a1 + 456));
      v7 = (int)(v5 + PiranhaMessage::getEncodingLength(*(mach_port_name_t **)(a1 + 456)) + 24);
      v8 = (char *)v27 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      memmove(v8, v4, v5);
      v9 = &v8[v5];
      *((_QWORD *)v9 + 2) = *(_QWORD *)(a1 + 576);
      *(_OWORD *)v9 = *(_OWORD *)(a1 + 560);
      v10 = &v8[v5 + 24];
      ByteArray = ByteStream::getByteArray(ByteStream);
      v12 = ByteStream::getByteArray(ByteStream);
      v13 = v12 + (int)PiranhaMessage::getEncodingLength(*(mach_port_name_t **)(a1 + 456));
      if ( v13 - ByteArray >= 1 )
      {
        v14 = v13 + 1 - ByteArray;
        v15 = (char *)ByteArray;
        do
        {
          v16 = *v15++;
          *v10++ = v16;
          --v14;
        }
        while ( v14 > 1 );
        v17 = ByteArray - 1 - v13;
        if ( v17 <= -2 )
          v17 = -2;
        v10 = &v8[v5 + 26 - ByteArray + v13 + v17];
      }
      if ( v10 - v8 != v7 )
        __assert_rtn(
          "sendPepperLogin",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Messaging.cpp",
          623,
          "std::distance(cleartext, d) == messagelen");
      PepperCrypto::Blake2b::Blake2b(v27, 24);
      PepperCrypto::Blake2b::update((__int64)v27, a1 + 496, 32);
      PepperCrypto::Blake2b::update((__int64)v27, a1 + 464, 32);
      PepperCrypto::Blake2b::final((unsigned __int8 *)v27, (__int64)v28);
      v18 = (int)v7 + 48;
      if ( v18 < 0 )
        v19 = -1;
      else
        v19 = (int)v7 + 48;
      v20 = operator new[](v19);
      if ( PepperCrypto::box(v8, v7, (void *)(v20 + 32), v18 - 32, (__int64)v28, a1 + 464, a1 + 528) )
        __assert_rtn(
          "sendPepperLogin",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Messaging.cpp",
          639,
          "ret == false");
      *(_OWORD *)(v20 + 16) = *(_OWORD *)(a1 + 512);
      *(_OWORD *)v20 = *(_OWORD *)(a1 + 496);
      v21 = (mach_port_name_t *)operator new(72);
      v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 40LL))(*(_QWORD *)(a1 + 456));
      PiranhaMessage::PiranhaMessage((__int64)v21, 0);
      *(_QWORD *)v21 = off_1004F24C8;
      v21[17] = v22;
      v23 = (ByteStream *)PiranhaMessage::getByteStream(v21);
      ByteStream::setByteArray(v23, (char *)v20, v7 + 48);
      MessageVersion = PiranhaMessage::getMessageVersion(*(mach_port_name_t **)(a1 + 456));
      PiranhaMessage::setMessageVersion(v21, MessageVersion);
      Messaging::send(a1, v21);
      result = *(_QWORD *)(a1 + 456);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
        result = *(_QWORD *)(a1 + 456);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 456) = 0;
      }
      return result;
    }

    __int64 __fastcall Messaging::initializeMembers(__int64 a1)
    {
      __int64 v2; // x21
      __int64 v3; // x22
      __int64 v4; // x20
      __int64 result; // x0
    
      v2 = *(_QWORD *)(a1 + 416);
      v3 = *(_QWORD *)(a1 + 424);
      if ( v3 != v2 )
      {
        v4 = *(_QWORD *)(a1 + 416);
        do
        {
          String::~String();
          v4 += 24;
        }
        while ( v3 != v4 );
      }
      *(_QWORD *)(a1 + 424) = v2;
      *(_DWORD *)(a1 + 440) = 0;
      *(_BYTE *)(a1 + 445) = 0;
      *(_BYTE *)(a1 + 444) = 0;
      *(_DWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)(a1 + 408) = 0;
      result = String::operator=(a1 + 344, "");
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 456) = 0;
      *(_QWORD *)(a1 + 384) = 0;
      *(_QWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      return result;
    }

}; // end class Messaging
