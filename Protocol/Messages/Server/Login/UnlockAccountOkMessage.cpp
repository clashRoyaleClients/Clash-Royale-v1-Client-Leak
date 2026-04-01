class UnlockAccountOkMessage
{
public:

    _QWORD *__fastcall UnlockAccountOkMessage::UnlockAccountOkMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100471A08;
      result[9] = 0;
      result[10] = 0;
      return result;
    }

    __int64 __fastcall UnlockAccountOkMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
      return ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 80));
    }

    __int64 __fastcall UnlockAccountOkMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStream::readLong((ByteStream *)(a1 + 16));
      result = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      *(_QWORD *)(a1 + 80) = result;
      return result;
    }

    __int64 __fastcall UnlockAccountOkMessage::getMessageType(ChallengeStreamItem *this)
    {
      return 20132;
    }

    __int64 __fastcall UnlockAccountOkMessage::removeAccountId(ChallengeStreamItem *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall UnlockAccountOkMessage::removePassToken(ChallengeStreamItem *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = 0;
      return v1;
    }

    __int64 __fastcall UnlockAccountOkMessage::getServiceNodeType(ChallengeStreamItem *this)
    {
      return 1;
    }

    void __fastcall UnlockAccountOkMessage::destruct(__int64 a1)
    {
      void *v2; // x20
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 80);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }

    void __fastcall UnlockAccountOkMessage::~UnlockAccountOkMessage(ChallengeStreamItem *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall UnlockAccountOkMessage::~UnlockAccountOkMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class UnlockAccountOkMessage
