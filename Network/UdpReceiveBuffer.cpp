class UdpReceiveBuffer
{
public:

    void __fastcall UdpReceiveBuffer::UdpReceiveBuffer(UdpReceiveBuffer *this)
    {
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      *((_BYTE *)this + 32) = 1;
    }

    void __fastcall UdpReceiveBuffer::~UdpReceiveBuffer(ShapeOriginal *this)
    {
      _QWORD *v2; // x22
      __int64 v3; // x8
      __int64 v4; // x23
      __int64 v5; // x24
      void *v6; // x21
      __int64 v7; // x0
      String v8; // [xsp+18h] [xbp-48h] BYREF
    
      v2 = (_QWORD *)((char *)this + 16);
      v3 = *((unsigned int *)this + 7);
      if ( (int)v3 > 0 )
      {
        v4 = 0;
        v5 = (int)v3;
        while ( 1 )
        {
          if ( (int)v3 <= v4 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v8, v4, v3);
            Debugger::error(&v8);
          }
          v6 = *(void **)(*v2 + 8 * v4);
          if ( v6 )
          {
            UdpMessage::destruct(*(AskForPlayingFacebookFriendsMessage **)(*v2 + 8 * v4));
            operator delete(v6);
          }
          if ( ++v4 >= v5 )
            break;
          v3 = *((unsigned int *)this + 7);
        }
      }
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 7) = 0;
      *((_BYTE *)this + 32) = 1;
      v7 = *((_QWORD *)this + 2);
      if ( v7 )
        operator delete[](v7);
      *v2 = 0;
      v2[1] = 0;
      if ( *(_QWORD *)this )
        operator delete[](*(_QWORD *)this);
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    void __fastcall UdpReceiveBuffer::~UdpReceiveBuffer(ShapeOriginal *this)
    {
      UdpReceiveBuffer::~UdpReceiveBuffer(this);
    }

    void __fastcall UdpReceiveBuffer::processMessage(__int64 a1, AskForPlayingFacebookFriendsMessage *this, __int64 a3)
    {
      unsigned __int8 MessageId; // w0
      int v7; // w8
      __int64 v8; // x9
      __int64 v9; // x10
      int v11; // w11
      unsigned __int8 v12; // [xsp+Fh] [xbp-31h] BYREF
      AskForPlayingFacebookFriendsMessage *v13; // [xsp+10h] [xbp-30h] BYREF
      AskForPlayingFacebookFriendsMessage *v14; // [xsp+18h] [xbp-28h] BYREF
    
      v13 = this;
      MessageId = UdpMessage::getMessageId(this);
      v12 = MessageId;
      v7 = *(unsigned __int8 *)(a1 + 32);
      if ( MessageId == v7 )
      {
        *(_BYTE *)(a1 + 32) = MessageId + 1;
        v14 = this;
        LogicArrayList<UdpMessage *>::add(a3, (__int64 *)&v14);
      }
      else
      {
        v8 = *(int *)(a1 + 12);
        v9 = (int)v8 - 1;
        while ( v8-- >= 1 )
        {
          v11 = *(unsigned __int8 *)(*(_QWORD *)a1 + v9--);
          if ( v11 == MessageId )
          {
            Debugger::warning("UdpReceiveBuffer::processMessage already containing message");
            if ( !this )
              goto LABEL_12;
    LABEL_11:
            UdpMessage::destruct(this);
            operator delete(this);
            v13 = 0;
            goto LABEL_12;
          }
        }
        if ( UdpMessage::isMoreRecent((char *)this, (char)v7) )
        {
          LogicArrayList<char>::add(a1, (char *)&v12);
          LogicArrayList<UdpMessage *>::add(a1 + 16, (__int64 *)&v13);
          goto LABEL_12;
        }
        Debugger::hudPrint(
          (__siginfo *)"UdpReceiveBuffer::processMessage ignoring packet from the past",
          (const char *)0xFFFFFFFFLL);
        if ( this )
          goto LABEL_11;
      }
    LABEL_12:
      UdpReceiveBuffer::checkBuffer(a1, a3);
      if ( *(int *)(a1 + 28) >= 256 )
        Debugger::warning("UdpReceiveBuffer::processMessage buffer is full");
    }

    void __fastcall UdpReceiveBuffer::checkBuffer(__int64 a1, __int64 a2)
    {
      int v4; // w23
      __int64 v5; // x21
      __int64 v6; // x8
      __int64 v7; // x22
      int v8; // w9
      __int64 v9; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = 0;
      v5 = a1 + 16;
      do
      {
        v6 = *(int *)(a1 + 12);
        if ( (int)v6 < 1 )
          break;
        v7 = 0;
        v8 = *(unsigned __int8 *)(a1 + 32);
        while ( *(unsigned __int8 *)(*(_QWORD *)a1 + v7) != v8 )
        {
          if ( ++v7 >= v6 )
            return;
        }
        if ( (_DWORD)v7 == -1 )
          break;
        *(_BYTE *)(a1 + 32) = v8 + 1;
        LogicArrayList<char>::remove(a1, v7);
        v9 = LogicArrayList<UdpMessage *>::remove(v5, v7);
        LogicArrayList<UdpMessage *>::add(a2, &v9);
        ++v4;
      }
      while ( v4 < 256 );
    }

}; // end class UdpReceiveBuffer
