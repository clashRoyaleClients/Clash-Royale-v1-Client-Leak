class LoginOkMessage
{
public:

    void __fastcall LoginOkMessage::LoginOkMessage(LoginOkMessage *this)
    {
      PiranhaMessage::PiranhaMessage((__int64)this, 1);
      *(_QWORD *)this = off_1004652C0;
      memset((char *)this + 72, 0, 0x54u);
      *((_DWORD *)this + 44) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
    }

    __int64 __fastcall LoginOkMessage::encode(GameStateManager *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 10));
      ByteStream::writeString((GameStateManager *)((char *)this + 16), *((String **)this + 11));
      ByteStream::writeString((GameStateManager *)((char *)this + 16), *((String **)this + 12));
      ByteStream::writeString((GameStateManager *)((char *)this + 16), *((String **)this + 13));
      ByteStream::writeVInt((GameStateManager *)((char *)this + 16), *((_DWORD *)this + 30));
      ByteStream::writeVInt((GameStateManager *)((char *)this + 16), *((_DWORD *)this + 31));
      ByteStream::writeVInt((GameStateManager *)((char *)this + 16), *((_DWORD *)this + 32));
      ByteStream::writeVInt((GameStateManager *)((char *)this + 16), *((_DWORD *)this + 33));
      ByteStream::writeString((GameStateManager *)((char *)this + 16), *((String **)this + 17));
      ByteStream::writeVInt((GameStateManager *)((char *)this + 16), *((_DWORD *)this + 36));
      ByteStream::writeVInt((GameStateManager *)((char *)this + 16), *((_DWORD *)this + 37));
      ByteStream::writeVInt((GameStateManager *)((char *)this + 16), *((_DWORD *)this + 38));
      ByteStream::writeString((GameStateManager *)((char *)this + 16), *((String **)this + 14));
      ByteStream::writeString((GameStateManager *)((char *)this + 16), *((String **)this + 20));
      ByteStream::writeString((GameStateManager *)((char *)this + 16), *((String **)this + 21));
      return ByteStream::writeVInt((GameStateManager *)((char *)this + 16), *((_DWORD *)this + 44));
    }

    __int64 __fastcall LoginOkMessage::decode(GameStateManager *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readLong((GameStateManager *)((char *)this + 16));
      *((_QWORD *)this + 10) = ByteStream::readLong((GameStateManager *)((char *)this + 16));
      *((_QWORD *)this + 11) = ByteStream::readString((GameStateManager *)((char *)this + 16), 900000);
      *((_QWORD *)this + 12) = ByteStream::readString((GameStateManager *)((char *)this + 16), 900000);
      *((_QWORD *)this + 13) = ByteStream::readString((GameStateManager *)((char *)this + 16), 900000);
      *((_DWORD *)this + 30) = ByteStream::readVInt((GameStateManager *)((char *)this + 16));
      *((_DWORD *)this + 31) = ByteStream::readVInt((GameStateManager *)((char *)this + 16));
      *((_DWORD *)this + 32) = ByteStream::readVInt((GameStateManager *)((char *)this + 16));
      *((_DWORD *)this + 33) = ByteStream::readVInt((GameStateManager *)((char *)this + 16));
      *((_QWORD *)this + 17) = ByteStream::readString((GameStateManager *)((char *)this + 16), 900000);
      *((_DWORD *)this + 36) = ByteStream::readVInt((GameStateManager *)((char *)this + 16));
      *((_DWORD *)this + 37) = ByteStream::readVInt((GameStateManager *)((char *)this + 16));
      *((_DWORD *)this + 38) = ByteStream::readVInt((GameStateManager *)((char *)this + 16));
      *((_QWORD *)this + 14) = ByteStream::readString((GameStateManager *)((char *)this + 16), 900000);
      *((_QWORD *)this + 20) = ByteStream::readString((GameStateManager *)((char *)this + 16), 50);
      *((_QWORD *)this + 21) = ByteStream::readString((GameStateManager *)((char *)this + 16), 50);
      result = ByteStream::readVInt((GameStateManager *)((char *)this + 16));
      *((_DWORD *)this + 44) = result;
      return result;
    }

    __int64 __fastcall LoginOkMessage::removeAccountId(GameStateManager *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall LoginOkMessage::getMessageType(GameStateManager *this)
    {
      return 20104;
    }

    __int64 __fastcall LoginOkMessage::getServiceNodeType(GameStateManager *this)
    {
      return 1;
    }

    __int64 __fastcall LoginOkMessage::removePassToken(GameStateManager *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = 0;
      return v1;
    }

    __int64 __fastcall LoginOkMessage::removeFacebookId(GameStateManager *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = 0;
      return v1;
    }

    __int64 __fastcall LoginOkMessage::removeGamecenterId(GameStateManager *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = 0;
      return v1;
    }

    __int64 __fastcall LoginOkMessage::getServerMajorVersion(GameStateManager *this)
    {
      return *((unsigned int *)this + 30);
    }

    __int64 __fastcall LoginOkMessage::getServerBuild(GameStateManager *this)
    {
      return *((unsigned int *)this + 32);
    }

    __int64 __fastcall LoginOkMessage::getContentVersion(GameStateManager *this)
    {
      return *((unsigned int *)this + 33);
    }

    __int64 __fastcall LoginOkMessage::removeServerEnvironment(GameStateManager *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = 0;
      return v1;
    }

    __int64 __fastcall LoginOkMessage::getPlayTimeSeconds(GameStateManager *this)
    {
      return *((unsigned int *)this + 37);
    }

    __int64 __fastcall LoginOkMessage::removeFacebookAppId(GameStateManager *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = 0;
      return v1;
    }

    __int64 __fastcall LoginOkMessage::getSessionCount(GameStateManager *this)
    {
      return *((unsigned int *)this + 36);
    }

    __int64 __fastcall LoginOkMessage::getDaysSinceStartedPlaying(GameStateManager *this)
    {
      return *((unsigned int *)this + 38);
    }

    __int64 __fastcall LoginOkMessage::removeServerTime(GameStateManager *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = 0;
      return v1;
    }

    __int64 __fastcall LoginOkMessage::removeAccountCreatedDate(GameStateManager *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = 0;
      return v1;
    }

    void *__fastcall LoginOkMessage::destruct(GameStateManager *this)
    {
      void *v2; // x0
      char *v3; // x20
      void *v4; // x0
      void *v5; // x21
      void *v6; // x21
      void *v7; // x21
      void *v8; // x21
      void *v9; // x21
      void *v10; // x21
      char *v11; // x19
      String *v12; // x21
      String *v13; // t1
      void *result; // x0
    
      PiranhaMessage::destruct(this);
      v3 = (char *)this + 72;
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      v4 = (void *)*((_QWORD *)this + 10);
      if ( v4 )
        operator delete(v4);
      v5 = (void *)*((_QWORD *)this + 11);
      if ( v5 )
      {
        String::~String(*((String **)this + 11));
        operator delete(v5);
      }
      v6 = (void *)*((_QWORD *)this + 12);
      if ( v6 )
      {
        String::~String(*((String **)this + 12));
        operator delete(v6);
      }
      v7 = (void *)*((_QWORD *)this + 13);
      if ( v7 )
      {
        String::~String(*((String **)this + 13));
        operator delete(v7);
      }
      v8 = (void *)*((_QWORD *)this + 17);
      if ( v8 )
      {
        String::~String(*((String **)this + 17));
        operator delete(v8);
      }
      v9 = (void *)*((_QWORD *)this + 14);
      if ( v9 )
      {
        String::~String(*((String **)this + 14));
        operator delete(v9);
      }
      v10 = (void *)*((_QWORD *)this + 21);
      if ( v10 )
      {
        String::~String(*((String **)this + 21));
        operator delete(v10);
      }
      v13 = (String *)*((_QWORD *)this + 20);
      v11 = (char *)this + 160;
      v12 = v13;
      if ( v13 )
      {
        String::~String(v12);
        operator delete(v12);
      }
      result = memset(v3, 0, 0x54u);
      *((_DWORD *)v11 + 4) = 0;
      *(_QWORD *)v11 = 0;
      *((_QWORD *)v11 + 1) = 0;
      return result;
    }

    void __fastcall LoginOkMessage::~LoginOkMessage(GameStateManager *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LoginOkMessage::~LoginOkMessage(GameStateManager *this)
    {
      operator delete(this);
    }

}; // end class LoginOkMessage
