class UdpPacket
{
public:

    void __fastcall UdpPacket::UdpPacket(UdpPacket *this)
    {
      *(_QWORD *)this = 0;
      *((_DWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    void __fastcall UdpPacket::destruct(__int64 a1)
    {
      __int64 v2; // x8
      __int64 v3; // x22
      __int64 v4; // x23
      __int64 v5; // x8
      void *v6; // x21
      String v7; // [xsp+18h] [xbp-48h] BYREF
    
      v2 = *(unsigned int *)(a1 + 28);
      if ( (int)v2 >= 1 )
      {
        v3 = 0;
        v4 = (int)v2;
        while ( 1 )
        {
          if ( (int)v2 <= v3 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v7, v3, v2);
            Debugger::error(&v7);
          }
          v5 = *(_QWORD *)(a1 + 16);
          v6 = *(void **)(v5 + 8 * v3);
          if ( v6 )
          {
            UdpMessage::destruct(*(AskForPlayingFacebookFriendsMessage **)(v5 + 8 * v3));
            operator delete(v6);
          }
          if ( ++v3 >= v4 )
            break;
          v2 = *(unsigned int *)(a1 + 28);
        }
      }
      if ( *(_QWORD *)a1 )
        operator delete[](*(_QWORD *)a1);
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 32) = 0;
    }

    __int64 __fastcall UdpPacket::decode(__int64 a1, __int64 a2, int a3, int a4, LogicCancelChestOpenCommand *a5)
    {
      const char *VInt; // x8
      __int64 v8; // x20
      __int64 v9; // x21
      int v10; // w23
      UdpMessage *v11; // x22
      UdpMessage *v13; // [xsp+8h] [xbp-68h] BYREF
      _BYTE v14[48]; // [xsp+10h] [xbp-60h] BYREF
    
      *(_QWORD *)(a1 + 32) = a2;
      if ( a4 <= 1390 )
      {
        ByteStream::ByteStream((__int64)v14, a3, a4);
        if ( ByteStream::isAtEnd((ChallengePopup *)v14) )
        {
          *(_DWORD *)(a1 + 8) = 0;
          ByteStream::destruct((ChallengePopup *)v14);
          return 1;
        }
        VInt = (const char *)ByteStream::readVInt((ChallengePopup *)v14);
        *(_DWORD *)(a1 + 8) = (_DWORD)VInt;
        if ( (unsigned int)((_DWORD)VInt + 1) >= 0x579 )
          goto LABEL_5;
        *(_QWORD *)a1 = ByteStream::readBytes((__int64)v14, VInt, 1400);
        if ( ByteStream::isAtEnd((ChallengePopup *)v14) )
        {
          ByteStream::destruct((ChallengePopup *)v14);
          return 1;
        }
        v8 = ByteStream::readVInt((ChallengePopup *)v14);
        if ( (unsigned int)v8 >= 0x579 )
        {
    LABEL_5:
          ByteStream::destruct((ChallengePopup *)v14);
        }
        else
        {
          v9 = a1 + 16;
          LogicArrayList<UdpMessage *>::ensureCapacity(v9, v8);
          if ( (int)v8 < 1 )
          {
    LABEL_13:
            ByteStream::destruct((ChallengePopup *)v14);
            return 1;
          }
          v10 = 0;
          while ( 1 )
          {
            v11 = (UdpMessage *)operator new(16);
            UdpMessage::UdpMessage(v11);
            v13 = v11;
            UdpMessage::decode(v11, (ChallengePopup *)v14, a5);
            if ( !UdpMessage::getPiranhaMessage(v11) )
              break;
            LogicArrayList<UdpMessage *>::add(v9, &v13);
            if ( ++v10 >= (int)v8 )
              goto LABEL_13;
          }
          UdpMessage::destruct(v11);
          operator delete(v11);
          v13 = 0;
          ByteStream::destruct((ChallengePopup *)v14);
        }
      }
      return 0;
    }

    void __fastcall UdpPacket::encode(__int64 a1, __int64 a2)
    {
      int Offset; // w0
      __int64 v5; // x25
      __int64 v6; // x24
      __int64 v7; // x8
      char *v8; // x23
      __int64 Length; // x22
      __int64 v10; // x1
      void (__fastcall *v11)(__int64, __int64, __int64); // x20
      __int64 ByteArray; // x0
      _BYTE v13[48]; // [xsp+18h] [xbp-98h] BYREF
      String v14; // [xsp+48h] [xbp-68h] BYREF
    
      if ( *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 28) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 184LL))(
          a2,
          *(_QWORD *)a1,
          *(unsigned int *)(a1 + 8));
        Offset = ByteStream::getOffset(a2);
        ByteStream::ByteStream((__int64)v13, 1400 - Offset);
        v5 = *(unsigned int *)(a1 + 28);
        if ( (int)v5 >= 1 )
        {
          v6 = 0;
          v7 = *(unsigned int *)(a1 + 28);
          while ( 1 )
          {
            if ( (int)v5 + (int)v6 < 1 || (int)v7 <= (int)v5 - 1LL + v6 )
            {
              String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v14, v5 - 1 + v6, v7);
              Debugger::error(&v14);
            }
            v8 = *(char **)(*(_QWORD *)(a1 + 16) + 8LL * (int)v5 - 8 + 8 * v6);
            Length = ByteStream::getLength((__int64)v13);
            UdpMessage::encode(v8, (__int64)v13);
            LODWORD(v8) = ByteStream::getLength(a2);
            if ( (int)(ByteStream::getLength((__int64)v13) + (_DWORD)v8) >= 1411 )
              break;
            Length = ByteStream::getLength((__int64)v13);
            if ( (int)v5 + v6 < 2 )
            {
              LODWORD(v10) = 1 - v6;
              goto LABEL_13;
            }
            v7 = *(unsigned int *)(a1 + 28);
            --v6;
          }
          Debugger::warning("UdpPacket::encode over max size");
          v10 = -v6;
    LABEL_13:
          if ( (int)v10 >= 1 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
            v11 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 184LL);
            ByteArray = ByteStream::getByteArray((ChallengePopup *)v13);
            v11(a2, ByteArray, Length);
          }
        }
        ByteStream::destruct((ChallengePopup *)v13);
        if ( (int)ByteStream::getLength(a2) >= 1401 )
          Debugger::warning("UdpPacket::encode too big");
      }
    }

    __int64 __fastcall UdpPacket::getAckMessageIds(MovieClipOriginal *this)
    {
      return *(_QWORD *)this;
    }

    __int64 __fastcall UdpPacket::setAckMessageIds(__int64 this, char *a2, int a3)
    {
      *(_QWORD *)this = a2;
      *(_DWORD *)(this + 8) = a3;
      return this;
    }

    __int64 __fastcall UdpPacket::getMessages(__int64 a1)
    {
      return a1 + 16;
    }

    __int64 __fastcall UdpPacket::getAckMessageIdCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 8);
    }

    __int64 __fastcall UdpPacket::addMessage(__int64 a1, __int64 a2)
    {
      __int64 v3; // [xsp+8h] [xbp-8h] BYREF
    
      v3 = a2;
      return LogicArrayList<UdpMessage *>::add(a1 + 16, &v3);
    }

    __int64 __fastcall UdpPacket::clearMessagesDontDestruct(__int64 result)
    {
      *(_DWORD *)(result + 28) = 0;
      return result;
    }

}; // end class UdpPacket
