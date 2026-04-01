class UdpConnectionInfoMessage
{
public:

    void __fastcall UdpConnectionInfoMessage::UdpConnectionInfoMessage(UdpConnectionInfoMessage *this)
    {
      PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)this = off_100471460;
      String::String((String *)this + 4);
      *(_QWORD *)((char *)this + 84) = 0;
      *(_QWORD *)((char *)this + 76) = 0;
      *(_QWORD *)((char *)this + 68) = 0;
      String::operator=((char *)this + 96, "");
    }

    // attributes: thunk
    void __fastcall UdpConnectionInfoMessage::UdpConnectionInfoMessage(UdpConnectionInfoMessage *this)
    {
      __ZN24UdpConnectionInfoMessageC2Ev(this);
    }

    __int64 __fastcall UdpConnectionInfoMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
      ByteStream::writeBytes((ByteStream *)(a1 + 16), *(char **)(a1 + 80), *(_DWORD *)(a1 + 88));
      return ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 96));
    }

    void __fastcall UdpConnectionInfoMessage::decode(__int64 a1)
    {
      int BytesLength; // w0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_QWORD *)(a1 + 72) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      BytesLength = ByteStream::readBytesLength((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 88) = BytesLength;
      *(_QWORD *)(a1 + 80) = ByteStream::readBytes((ByteStream *)(a1 + 16), BytesLength, 900000);
      ByteStream::readStringReference((ByteStream *)(a1 + 16), 900000);
      String::operator=((String *)(a1 + 96));
      String::~String();
    }

    __int64 __fastcall UdpConnectionInfoMessage::getMessageType(LogicResourcePackData *this)
    {
      return 24112;
    }

    __int64 __fastcall UdpConnectionInfoMessage::getServiceNodeType(LogicResourcePackData *this)
    {
      return 27;
    }

    __int64 __fastcall UdpConnectionInfoMessage::destruct(LogicResourcePackData *this)
    {
      void *v2; // x20
      __int64 v3; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      v3 = *((_QWORD *)this + 10);
      if ( v3 )
        operator delete[](v3);
      *(_QWORD *)((char *)this + 84) = 0;
      *(_QWORD *)((char *)this + 76) = 0;
      *(_QWORD *)((char *)this + 68) = 0;
      return String::operator=((char *)this + 96, "");
    }

    __int64 __fastcall UdpConnectionInfoMessage::removeServerHost(LogicResourcePackData *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall UdpConnectionInfoMessage::getServerPort(LogicResourcePackData *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall UdpConnectionInfoMessage::removeSessionId(LogicResourcePackData *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = 0;
      *((_DWORD *)this + 22) = 0;
      return v1;
    }

    __int64 __fastcall UdpConnectionInfoMessage::getNonce(LogicResourcePackData *this)
    {
      return (__int64)this + 96;
    }

    void __fastcall UdpConnectionInfoMessage::~UdpConnectionInfoMessage(LogicResourcePackData *this)
    {
      *(_QWORD *)this = off_100471460;
      String::~String();
    }

    void __fastcall UdpConnectionInfoMessage::~UdpConnectionInfoMessage(LogicResourcePackData *this)
    {
      *(_QWORD *)this = off_100471460;
      String::~String();
      operator delete(this);
    }

}; // end class UdpConnectionInfoMessage
