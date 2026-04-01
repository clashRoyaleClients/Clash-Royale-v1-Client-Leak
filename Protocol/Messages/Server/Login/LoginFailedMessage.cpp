class LoginFailedMessage
{
public:

    void __fastcall LoginFailedMessage::LoginFailedMessage(LoginFailedMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 2);
      *(_QWORD *)((char *)v1 + 108) = 0;
      *v1 = off_1004619D8;
      *(_QWORD *)((char *)v1 + 100) = 0;
      *(_QWORD *)((char *)v1 + 92) = 0;
      *(_QWORD *)((char *)v1 + 84) = 0;
      *(_QWORD *)((char *)v1 + 76) = 0;
      *(_QWORD *)((char *)v1 + 68) = 0;
    }

    __int64 __fastcall LoginFailedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 80));
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 88));
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 96));
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 104));
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 112));
    }

    __int64 __fastcall LoginFailedMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_QWORD *)(a1 + 72) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      *(_QWORD *)(a1 + 80) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      *(_QWORD *)(a1 + 88) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      if ( *(int *)(a1 + 8) >= 1 )
      {
        *(_QWORD *)(a1 + 96) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
        if ( *(int *)(a1 + 8) >= 2 )
          *(_QWORD *)(a1 + 104) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      }
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 112) = result;
      return result;
    }

    __int64 __fastcall LoginFailedMessage::getErrorCode(LogicAddChestCommand *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall LoginFailedMessage::getMessageType(LogicAddChestCommand *this)
    {
      return 20103;
    }

    __int64 __fastcall LoginFailedMessage::getServiceNodeType(LogicAddChestCommand *this)
    {
      return 1;
    }

    __int64 __fastcall LoginFailedMessage::removeResourceFingerprintData(LogicAddChestCommand *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall LoginFailedMessage::removeRedirectDomain(LogicAddChestCommand *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = 0;
      return v1;
    }

    __int64 __fastcall LoginFailedMessage::removeContentURL(LogicAddChestCommand *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = 0;
      return v1;
    }

    __int64 __fastcall LoginFailedMessage::removeUpdateURL(LogicAddChestCommand *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = 0;
      return v1;
    }

    __int64 __fastcall LoginFailedMessage::removeReason(LogicAddChestCommand *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = 0;
      return v1;
    }

    void __fastcall LoginFailedMessage::destruct(LogicAddChestCommand *this)
    {
      void *v2; // x20
      void *v3; // x20
      void *v4; // x20
      void *v5; // x20
      void *v6; // x20
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        String::~String(*((String **)this + 9));
        operator delete(v2);
      }
      v3 = (void *)*((_QWORD *)this + 10);
      if ( v3 )
      {
        String::~String(*((String **)this + 10));
        operator delete(v3);
      }
      v4 = (void *)*((_QWORD *)this + 11);
      if ( v4 )
      {
        String::~String(*((String **)this + 11));
        operator delete(v4);
      }
      v5 = (void *)*((_QWORD *)this + 12);
      if ( v5 )
      {
        String::~String(*((String **)this + 12));
        operator delete(v5);
      }
      v6 = (void *)*((_QWORD *)this + 13);
      if ( v6 )
      {
        String::~String(*((String **)this + 13));
        operator delete(v6);
      }
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      *(_QWORD *)((char *)this + 84) = 0;
      *(_QWORD *)((char *)this + 76) = 0;
      *(_QWORD *)((char *)this + 68) = 0;
    }

    void __fastcall LoginFailedMessage::~LoginFailedMessage(LogicAddChestCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LoginFailedMessage::~LoginFailedMessage(LogicAddChestCommand *this)
    {
      operator delete(this);
    }

}; // end class LoginFailedMessage
