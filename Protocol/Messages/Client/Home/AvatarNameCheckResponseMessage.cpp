class AvatarNameCheckResponseMessage
{
public:

    void __fastcall AvatarNameCheckResponseMessage::AvatarNameCheckResponseMessage(AvatarNameCheckResponseMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100469288;
      *(_BYTE *)(v1 + 68) = 0;
      *(_DWORD *)(v1 + 72) = 0;
      *(_QWORD *)(v1 + 80) = 0;
    }

    void __fastcall AvatarNameCheckResponseMessage::destruct(AskForAllianceDataMessage *this)
    {
      void *v2; // x20
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 10);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *((_BYTE *)this + 68) = 0;
      *((_DWORD *)this + 18) = 0;
      *((_QWORD *)this + 10) = 0;
    }

    __int64 __fastcall AvatarNameCheckResponseMessage::isInvalid(AskForAllianceDataMessage *this)
    {
      return *((unsigned __int8 *)this + 68);
    }

    __int64 __fastcall AvatarNameCheckResponseMessage::getErrorCode(AskForAllianceDataMessage *this)
    {
      return *((unsigned int *)this + 18);
    }

    __int64 __fastcall AvatarNameCheckResponseMessage::encode(AskForAllianceDataMessage *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeBoolean((AskForAllianceDataMessage *)((char *)this + 16), *((_BYTE *)this + 68));
      ByteStream::writeInt((AskForAllianceDataMessage *)((char *)this + 16), *((_DWORD *)this + 18));
      return ByteStream::writeString((AskForAllianceDataMessage *)((char *)this + 16), *((String **)this + 10));
    }

    __int64 __fastcall AvatarNameCheckResponseMessage::decode(AskForAllianceDataMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_BYTE *)this + 68) = ByteStream::readBoolean((AskForAllianceDataMessage *)((char *)this + 16));
      *((_DWORD *)this + 18) = ByteStream::readInt((AskForAllianceDataMessage *)((char *)this + 16));
      result = ByteStream::readString((AskForAllianceDataMessage *)((char *)this + 16), 900000);
      *((_QWORD *)this + 10) = result;
      return result;
    }

    __int64 __fastcall AvatarNameCheckResponseMessage::getMessageType(AskForAllianceDataMessage *this)
    {
      return 20300;
    }

    __int64 __fastcall AvatarNameCheckResponseMessage::getServiceNodeType(AskForAllianceDataMessage *this)
    {
      return 9;
    }

    void __fastcall AvatarNameCheckResponseMessage::~AvatarNameCheckResponseMessage(AskForAllianceDataMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarNameCheckResponseMessage::~AvatarNameCheckResponseMessage(AskForAllianceDataMessage *this)
    {
      operator delete(this);
    }

}; // end class AvatarNameCheckResponseMessage
