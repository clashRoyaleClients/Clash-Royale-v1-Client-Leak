class AvatarNameChangeFailedMessage
{
public:

    __int64 __fastcall AvatarNameChangeFailedMessage::AvatarNameChangeFailedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100465B10;
      *(_DWORD *)(result + 68) = 0;
      *(_QWORD *)(result + 72) = 0;
      return result;
    }

    __int64 __fastcall AvatarNameChangeFailedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
      return ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
    }

    __int64 __fastcall AvatarNameChangeFailedMessage::decode(__int64 a1)
    {
      void *v2; // x21
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = ByteStream::readVInt((#1225 *)(a1 + 16));
      v2 = *(void **)(a1 + 72);
      if ( v2 )
      {
        String::~String(*(String **)(a1 + 72));
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 72) = 0;
      result = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall AvatarNameChangeFailedMessage::getMessageType(ParticleEmitter *this)
    {
      return 20205;
    }

    __int64 __fastcall AvatarNameChangeFailedMessage::getServiceNodeType(ParticleEmitter *this)
    {
      return 9;
    }

    void __fastcall AvatarNameChangeFailedMessage::destruct(__int64 a1)
    {
      void *v2; // x20
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
      {
        String::~String(*(String **)(a1 + 72));
        operator delete(v2);
      }
      *(_DWORD *)(a1 + 68) = 0;
      *(_QWORD *)(a1 + 72) = 0;
    }

    void __fastcall AvatarNameChangeFailedMessage::~AvatarNameChangeFailedMessage(ParticleEmitter *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarNameChangeFailedMessage::~AvatarNameChangeFailedMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AvatarNameChangeFailedMessage
