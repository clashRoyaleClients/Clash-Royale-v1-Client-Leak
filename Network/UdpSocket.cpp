class UdpSocket
{
public:

    __int64 __fastcall UdpSocket::UdpSocket(__int64 a1)
    {
      *(_DWORD *)a1 = -1;
      *(_QWORD *)(a1 + 1424) = 0;
      *(_DWORD *)(a1 + 1432) = 0;
      bzero((void *)(a1 + 4), 0x588u);
      *(_QWORD *)(a1 + 1448) = 0;
      *(_QWORD *)(a1 + 1440) = 0;
      *(_DWORD *)(a1 + 1456) = 1092616192;
      return a1;
    }

    __int64 __fastcall UdpSocket::~UdpSocket(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      UdpSocket::close((UdpSocket *)a1);
      v2 = *(_QWORD *)(a1 + 1424);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        v3 = *(_QWORD *)(a1 + 1424);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *(_QWORD *)(a1 + 1424) = 0;
      }
      *(_DWORD *)a1 = -1;
      *(_QWORD *)(a1 + 1424) = 0;
      *(_DWORD *)(a1 + 1432) = 0;
      bzero((void *)(a1 + 4), 0x588u);
      *(_QWORD *)(a1 + 1448) = 0;
      *(_QWORD *)(a1 + 1440) = 0;
      *(_DWORD *)(a1 + 1456) = 1092616192;
      return a1;
    }

    void __fastcall UdpSocket::close(__int64 a1)
    {
      int v2; // w0
      void *v3; // x20
    
      v2 = *(_DWORD *)a1;
      if ( v2 != -1 )
        close(v2);
      *(_DWORD *)a1 = -1;
      *(_WORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 1432) = 0;
      *(_WORD *)(a1 + 1418) = 0;
      *(_QWORD *)(a1 + 1410) = 0;
      v3 = *(void **)(a1 + 1440);
      if ( v3 )
      {
        UdpPacketHandler::~UdpPacketHandler(*(_QWORD *)(a1 + 1440));
        operator delete(v3);
      }
      *(_QWORD *)(a1 + 1440) = 0;
    }

    __int64 __fastcall UdpSocket::~UdpSocket(__int64 a1)
    {
      UdpSocket::~UdpSocket(a1);
      return a1;
    }

    __int64 __fastcall UdpSocket::connect(
            __int64 a1,
            String *a2,
            __int64 a3,
            __int64 a4,
            const String *a5,
            const String *a6)
    {
      LogicTimeUtil *v12; // x0
      int CurrentTime; // w22
      internal_t *p_internal; // x8
      __int64 v15; // x8
      __int64 v16; // x23
      __int64 v17; // x1
      __int64 v18; // x2
      int v19; // w3
      __int64 v20; // x8
      __int64 v21; // x1
      __int64 v22; // x2
      int v23; // w3
      int v24; // w24
      __int64 v25; // x1
      __int64 v26; // x2
      int v27; // w3
      int v28; // w25
      __int64 v29; // x1
      __int64 v30; // x2
      int v31; // w3
      int v32; // w26
      int v33; // w0
      LogicTimeUtil *v34; // x0
      int v35; // w0
      __int64 v36; // x22
      String v38; // [xsp+10h] [xbp-110h] BYREF
      String v39; // [xsp+28h] [xbp-F8h] BYREF
      String v40; // [xsp+40h] [xbp-E0h] BYREF
      String v41; // [xsp+58h] [xbp-C8h] BYREF
      String v42; // [xsp+70h] [xbp-B0h] BYREF
      String v43; // [xsp+88h] [xbp-98h] BYREF
      String v44; // [xsp+A0h] [xbp-80h] BYREF
      sockaddr v45; // [xsp+B8h] [xbp-68h] BYREF
    
      Debugger::doAssert(a4 != 0, "");
      Debugger::doAssert(*(_QWORD *)(a1 + 1424) != 0, "");
      UdpSocket::close(a1);
      CurrentTime = LogicTimeUtil::getCurrentTime(v12);
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      String::format((String *)"UdpSocker::connect %s : %d", (__int64)&v40, p_internal, a3);
      Debugger::hudPrint(&v40, (const char *)0xFFFFFFFFLL);
      String::~String((__int64)&v40);
      v15 = 0;
      *(_WORD *)(a1 + 8) = BYTE1(a3) | (unsigned __int16)((_WORD)a3 << 8);
      do
      {
        *(_BYTE *)(a1 + v15 + 1410) = *(_BYTE *)(a4 + v15);
        ++v15;
      }
      while ( v15 != 10 );
      String::String(&v39, ".");
      v16 = LogicStringUtil::split(a2, &v39);
      String::~String((__int64)&v39);
      v20 = *(unsigned int *)(v16 + 12);
      if ( (int)v20 < 1 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v41, 0, v20);
        Debugger::error(&v41);
      }
      v24 = LogicStringUtil::convertToInt(*(LogicStringUtil **)v16, v17, v18, v19);
      if ( *(int *)(v16 + 12) < 2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v42, 1, *(unsigned int *)(v16 + 12));
        Debugger::error(&v42);
      }
      v28 = LogicStringUtil::convertToInt((LogicStringUtil *)(*(_QWORD *)v16 + 24LL), v21, v22, v23);
      if ( *(int *)(v16 + 12) < 3 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v43, 2, *(unsigned int *)(v16 + 12));
        Debugger::error(&v43);
      }
      v32 = LogicStringUtil::convertToInt((LogicStringUtil *)(*(_QWORD *)v16 + 48LL), v25, v26, v27);
      if ( *(int *)(v16 + 12) <= 3 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v44, 3, *(unsigned int *)(v16 + 12));
        Debugger::error(&v44);
      }
      *(_DWORD *)(a1 + 1432) = bswap32(
                                 (v28 << 16)
                               | (v24 << 24)
                               | (v32 << 8)
                               | LogicStringUtil::convertToInt((LogicStringUtil *)(*(_QWORD *)v16 + 72LL), v29, v30, v31));
      LogicArrayList<String>::~LogicArrayList((__int64 *)v16);
      operator delete((void *)v16);
      v33 = socket(2, 2, 17);
      *(_DWORD *)a1 = v33;
      if ( v33 == -1
        || (*(_QWORD *)&v45.sa_len = 512, *(_QWORD *)&v45.sa_data[6] = 0, bind(v33, &v45, 0x10u) < 0)
        || (v34 = (LogicTimeUtil *)fcntl(*(_DWORD *)a1, 4, 4, 1), (_DWORD)v34 == -1) )
      {
        UdpSocket::close(a1);
      }
      v35 = LogicTimeUtil::getCurrentTime(v34);
      String::format((String *)"Opening UDP connection took %d ms", (__int64)&v38, (unsigned int)(v35 - CurrentTime));
      Debugger::hudPrint(&v38, (const char *)0xFFFFFFFFLL);
      String::~String((__int64)&v38);
      if ( *(_DWORD *)a1 == -1 )
        return 0;
      v36 = operator new(168);
      UdpPacketHandler::UdpPacketHandler(v36, a1, a5, a6);
      *(_QWORD *)(a1 + 1440) = v36;
      return 1;
    }

    void __fastcall UdpSocket::update(__int64 a1, __int64 a2, float a3, float a4)
    {
      int v8; // w0
      int v9; // w25
      int v10; // w24
      __int64 i; // x8
      int v12; // w0
      _BYTE v13[16]; // [xsp+8h] [xbp-A8h] BYREF
      void *v14; // [xsp+18h] [xbp-98h]
      socklen_t v15; // [xsp+34h] [xbp-7Ch] BYREF
      sockaddr v16; // [xsp+38h] [xbp-78h] BYREF
    
      v8 = *(_DWORD *)a1;
      if ( v8 == -1 )
        return;
      *(float *)(a1 + 1448) = *(float *)(a1 + 1448) + a3;
      v15 = 16;
      *(_QWORD *)&v16.sa_len = 0;
      *(_QWORD *)&v16.sa_data[6] = 0;
      v9 = recvfrom(v8, (void *)(a1 + 10), 0x578u, 0, &v16, &v15);
      if ( v9 < 1 )
      {
    LABEL_17:
        UdpPacketHandler::update(*(_QWORD *)(a1 + 1440), a3);
        return;
      }
      v10 = 1;
      while ( 1 )
      {
        if ( v9 <= 9 )
        {
          Debugger::warning("Received too small udp packet");
          goto LABEL_15;
        }
        if ( v9 < 1401 )
          break;
        Debugger::warning("Received too big udp packet");
    LABEL_15:
        if ( v10 <= 9 )
        {
          v12 = *(_DWORD *)a1;
          v15 = 16;
          *(_QWORD *)&v16.sa_len = 0;
          *(_QWORD *)&v16.sa_data[6] = 0;
          v9 = recvfrom(v12, (void *)(a1 + 10), 0x578u, 0, &v16, &v15);
          ++v10;
          if ( v9 > 0 )
            continue;
        }
        goto LABEL_17;
      }
      if ( *(unsigned __int16 *)(a1 + 8) != *(unsigned __int16 *)v16.sa_data )
      {
    LABEL_19:
        UdpSocket::close(a1);
        return;
      }
      for ( i = 0; i <= 9; ++i )
      {
        if ( *(unsigned __int8 *)(a1 + i + 10) != *(unsigned __int8 *)(a1 + i + 1410) )
        {
          Debugger::warning("UdpPacket session id mismatch");
          goto LABEL_19;
        }
      }
      UdpPacket::UdpPacket((MovieClipOriginal *)v13);
      if ( (UdpPacket::decode((UdpPacket *)v13, 0, (const char *)(a1 + 20), v9 - 10, *(LogicMessageFactory **)(a1 + 1424))
          & 1) != 0 )
      {
        *(_DWORD *)(a1 + 1432) = *(_DWORD *)&v16.sa_data[2];
        *(_WORD *)(a1 + 8) = *(_WORD *)v16.sa_data;
        *(_DWORD *)(a1 + 1448) = 0;
        ++*(_DWORD *)(a1 + 1452);
        UdpPacketHandler::receive(*(_QWORD *)(a1 + 1440), (MovieClipOriginal *)v13, a2, a4);
        UdpPacket::destruct((UdpPacket *)v13);
        if ( v14 )
          operator delete[](v14);
        goto LABEL_15;
      }
      UdpPacket::destruct((UdpPacket *)v13);
      UdpSocket::close(a1);
      if ( v14 )
        operator delete[](v14);
    }

    bool __fastcall UdpSocket::sendMaxPacket(__int64 a1, UdpPacket *a2)
    {
      void *ByteArray; // x19
      _BOOL8 v5; // x19
      _BYTE v7[48]; // [xsp+8h] [xbp-68h] BYREF
      sockaddr v8; // [xsp+38h] [xbp-38h] BYREF
    
      ByteStream::ByteStream((__int64)v7, 1400);
      UdpPacket::encode(a2, (ByteStream *)v7);
      ByteArray = (void *)ByteStream::getByteArray((ChallengePopup *)v7);
      bzero(ByteArray, 0x56Eu);
      v8.sa_family = 2;
      *(_DWORD *)&v8.sa_data[2] = *(_DWORD *)(a1 + 1432);
      *(_WORD *)v8.sa_data = *(_WORD *)(a1 + 8);
      *(_WORD *)(a1 + 18) = *(_WORD *)(a1 + 1418);
      *(_QWORD *)(a1 + 10) = *(_QWORD *)(a1 + 1410);
      memcpy((void *)(a1 + 20), ByteArray, 0x56Eu);
      v5 = (unsigned int)sendto(*(_DWORD *)a1, (const void *)(a1 + 10), 0x578u, 0, &v8, 0x10u) == 1400;
      ByteStream::destruct((ChallengePopup *)v7);
      return v5;
    }

    bool __fastcall UdpSocket::send(__int64 a1, UdpPacket *a2)
    {
      const void *ByteArray; // x19
      int Offset; // w21
      _BOOL8 v6; // x19
      _BYTE v8[48]; // [xsp+8h] [xbp-78h] BYREF
      sockaddr v9; // [xsp+38h] [xbp-48h] BYREF
    
      ByteStream::ByteStream((__int64)v8, 128);
      UdpPacket::encode(a2, (ByteStream *)v8);
      ByteArray = (const void *)ByteStream::getByteArray((ChallengePopup *)v8);
      Offset = ByteStream::getOffset((__int64)v8);
      v9.sa_family = 2;
      *(_DWORD *)&v9.sa_data[2] = *(_DWORD *)(a1 + 1432);
      *(_WORD *)v9.sa_data = *(_WORD *)(a1 + 8);
      *(_WORD *)(a1 + 18) = *(_WORD *)(a1 + 1418);
      *(_QWORD *)(a1 + 10) = *(_QWORD *)(a1 + 1410);
      memcpy((void *)(a1 + 20), ByteArray, Offset);
      v6 = (unsigned int)sendto(*(_DWORD *)a1, (const void *)(a1 + 10), Offset + 10, 0, &v9, 0x10u) == Offset + 10;
      ByteStream::destruct((ChallengePopup *)v8);
      return v6;
    }

    __int64 __fastcall UdpSocket::setMessageFactory(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 1424) = a2;
      return result;
    }

    bool __fastcall UdpSocket::isValidConnection(__int64 a1)
    {
      return *(_DWORD *)a1 != -1 && *(float *)(a1 + 1448) < *(float *)(a1 + 1456);
    }

    __int64 __fastcall UdpSocket::sendMessage(__int64 a1, mach_port_name_t *a2, float a3)
    {
      return UdpPacketHandler::send(*(_QWORD *)(a1 + 1440), a2, a3);
    }

    __int64 __fastcall UdpSocket::setDisconnectedTimeSetting(__int64 result, float a2)
    {
      *(float *)(result + 1456) = a2;
      return result;
    }

    __int64 __fastcall UdpSocket::setHeartbeatTimeSetting(__int64 a1, float a2)
    {
      return UdpPacketHandler::setHeartbeatTimeSetting(*(_QWORD *)(a1 + 1440), a2);
    }

}; // end class UdpSocket
