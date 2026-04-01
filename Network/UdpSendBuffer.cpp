class UdpSendBuffer
{
public:

    __int64 __fastcall UdpSendBuffer::UdpSendBuffer(__int64 result)
    {
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)result = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_BYTE *)(result + 48) = 1;
      *(_DWORD *)(result + 52) = 1176256512;
      return result;
    }

    __int64 __fastcall UdpSendBuffer::~UdpSendBuffer(__int64 a1)
    {
      _QWORD *v2; // x22
      __int64 v3; // x8
      __int64 v4; // x23
      __int64 v5; // x24
      void *v6; // x21
      __int64 v7; // x0
      String v9; // [xsp+18h] [xbp-48h] BYREF
    
      v2 = (_QWORD *)(a1 + 16);
      v3 = *(unsigned int *)(a1 + 28);
      if ( (int)v3 >= 1 )
      {
        v4 = 0;
        v5 = (int)v3;
        while ( 1 )
        {
          if ( (int)v3 <= v4 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v9, v4, v3);
            Debugger::error(&v9);
          }
          v6 = *(void **)(*v2 + 8 * v4);
          if ( v6 )
          {
            UdpMessage::destruct(*(AskForPlayingFacebookFriendsMessage **)(*v2 + 8 * v4));
            operator delete(v6);
          }
          if ( ++v4 >= v5 )
            break;
          v3 = *(unsigned int *)(a1 + 28);
        }
      }
      *(_DWORD *)(a1 + 12) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      *(_BYTE *)(a1 + 48) = 1;
      *(_DWORD *)(a1 + 52) = 1176256512;
      v7 = *(_QWORD *)(a1 + 32);
      if ( v7 )
        operator delete[](v7);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      if ( *v2 )
        operator delete[](*v2);
      *v2 = 0;
      v2[1] = 0;
      if ( *(_QWORD *)a1 )
        operator delete[](*(_QWORD *)a1);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      return a1;
    }

    __int64 __fastcall UdpSendBuffer::~UdpSendBuffer(__int64 a1)
    {
      UdpSendBuffer::~UdpSendBuffer(a1);
      return a1;
    }

    __int64 __fastcall UdpSendBuffer::addMessage(__int64 a1, __int64 a2, float a3)
    {
      __int64 v5; // x21
      __int64 v6; // x0
      UdpMessage *v7; // x22
      __int64 v8; // x21
      UdpMessage *v10; // [xsp+18h] [xbp-58h] BYREF
      String v11; // [xsp+20h] [xbp-50h] BYREF
      char v12; // [xsp+3Bh] [xbp-35h] BYREF
      float v13; // [xsp+3Ch] [xbp-34h] BYREF
    
      v13 = a3;
      v5 = *(char *)(a1 + 48);
      v12 = v5;
      *(_BYTE *)(a1 + 48) = v5 + 1;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
      String::format(
        (String *)"UdpSendBuffer::addMessage type %d, udp id %d - not acked count %d",
        (__int64)&v11,
        v6,
        v5,
        *(unsigned int *)(a1 + 28));
      Debugger::hudPrint(&v11, (const char *)0xFFFFFFFFLL);
      String::~String((__int64)&v11);
      v7 = (UdpMessage *)operator new(16);
      v8 = (unsigned int)(char)v5;
      UdpMessage::UdpMessage(v7, v8);
      v10 = v7;
      UdpMessage::setPiranhaMessage((__int64)v7, a2);
      LogicArrayList<char>::add(a1, &v12);
      LogicArrayList<UdpMessage *>::add(a1 + 16, (__int64 *)&v10);
      LogicArrayList<float>::add(a1 + 32, &v13);
      if ( *(int *)(a1 + 12) >= 256 )
        Debugger::warning("UdpSendBuffer::addMessage buffer is full");
      return v8;
    }

    void __fastcall UdpSendBuffer::ackMessages(__int64 a1, __int64 a2, int a3, float a4)
    {
      __int64 v7; // x26
      __int64 v8; // x27
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x25
      AskForPlayingFacebookFriendsMessage *v12; // x0
      AskForPlayingFacebookFriendsMessage *v13; // x25
      String v14; // [xsp+18h] [xbp-78h] BYREF
    
      if ( a2 && a3 >= 1 )
      {
        v7 = 0;
        v8 = a3;
        do
        {
          v9 = *(int *)(a1 + 12);
          if ( (int)v9 >= 1 )
          {
            v10 = 0;
            v11 = (unsigned int)*(char *)(a2 + v7);
            while ( *(unsigned __int8 *)(*(_QWORD *)a1 + v10) != *(unsigned __int8 *)(a2 + v7) )
            {
              if ( ++v10 >= v9 )
                goto LABEL_13;
            }
            if ( (_DWORD)v10 != -1 )
            {
              LogicArrayList<char>::remove((__int64 *)a1, v10);
              String::format(
                (String *)"Acking message id: %d remaining count %d",
                (__int64)&v14,
                v11,
                *(unsigned int *)(a1 + 12));
              Debugger::hudPrint(&v14, (const char *)0xFFFFFFFFLL);
              String::~String((__int64)&v14);
              v12 = (AskForPlayingFacebookFriendsMessage *)LogicArrayList<UdpMessage *>::remove((__int64 *)(a1 + 16), v10);
              v13 = v12;
              if ( v12 )
              {
                UdpMessage::destruct(v12);
                operator delete(v13);
              }
              *(float *)(a1 + 52) = a4 - LogicArrayList<float>::remove(a1 + 32, v10);
            }
          }
    LABEL_13:
          ++v7;
        }
        while ( v7 < v8 );
      }
    }

    __int64 __fastcall UdpSendBuffer::getNotAckedMessages(StageDrawBucket *this)
    {
      return (__int64)this + 16;
    }

}; // end class UdpSendBuffer
