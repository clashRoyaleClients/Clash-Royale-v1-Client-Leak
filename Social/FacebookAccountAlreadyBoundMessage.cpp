class FacebookAccountAlreadyBoundMessage
{
public:

    _QWORD *__fastcall FacebookAccountAlreadyBoundMessage::FacebookAccountAlreadyBoundMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100471900;
      result[11] = 0;
      result[12] = 0;
      result[9] = 0;
      result[10] = 0;
      return result;
    }

    __int64 __fastcall FacebookAccountAlreadyBoundMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
      if ( *(_QWORD *)(a1 + 88) )
      {
        ByteStream::writeBoolean((ByteStream *)(a1 + 16), 1);
        ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 88));
      }
      else
      {
        ByteStream::writeBoolean((ByteStream *)(a1 + 16), 0);
      }
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 80));
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 24LL))(*(_QWORD *)(a1 + 96), a1 + 16);
    }

    __int64 __fastcall FacebookAccountAlreadyBoundMessage::decode(__int64 a1)
    {
      __int64 Long; // x0
      LogicClientAvatar *v3; // x21
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      if ( (unsigned int)ByteStream::readBoolean((ByteStream *)(a1 + 16)) )
        Long = ByteStream::readLong((ByteStream *)(a1 + 16));
      else
        Long = 0;
      *(_QWORD *)(a1 + 88) = Long;
      *(_QWORD *)(a1 + 80) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      v3 = (LogicClientAvatar *)operator new(248);
      LogicClientAvatar::LogicClientAvatar(v3);
      *(_QWORD *)(a1 + 96) = v3;
      return (*(__int64 (__fastcall **)(LogicClientAvatar *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a1 + 16);
    }

    __int64 __fastcall FacebookAccountAlreadyBoundMessage::setAccountId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 88) = a2;
      return result;
    }

    __int64 __fastcall FacebookAccountAlreadyBoundMessage::getMessageType(UnlockAccountMessage *this)
    {
      return 24202;
    }

    __int64 __fastcall FacebookAccountAlreadyBoundMessage::getServiceNodeType(UnlockAccountMessage *this)
    {
      return 1;
    }

    __int64 __fastcall FacebookAccountAlreadyBoundMessage::removeAccountId(UnlockAccountMessage *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = 0;
      return v1;
    }

    __int64 __fastcall FacebookAccountAlreadyBoundMessage::destruct(__int64 a1)
    {
      void *v2; // x20
      void *v3; // x0
      void *v4; // x20
      __int64 result; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      v3 = *(void **)(a1 + 88);
      if ( v3 )
        operator delete(v3);
      v4 = *(void **)(a1 + 80);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      result = *(_QWORD *)(a1 + 96);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *(_QWORD *)(a1 + 96);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 96) = 0;
      }
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      return result;
    }

    void __fastcall FacebookAccountAlreadyBoundMessage::~FacebookAccountAlreadyBoundMessage(UnlockAccountMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall FacebookAccountAlreadyBoundMessage::~FacebookAccountAlreadyBoundMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class FacebookAccountAlreadyBoundMessage
