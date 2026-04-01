class UnlockAccountMessage
{
public:

    void __fastcall UnlockAccountMessage::UnlockAccountMessage(UnlockAccountMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100469C88;
      v1[10] = 0;
      v1[11] = 0;
      v1[9] = 0;
    }

    __int64 __fastcall UnlockAccountMessage::encode(LogicLocalization *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
      ByteStream::writeString((LogicLocalization *)((char *)this + 16), *((String **)this + 10));
      return ByteStream::writeString((LogicLocalization *)((char *)this + 16), *((String **)this + 11));
    }

    __int64 __fastcall UnlockAccountMessage::decode(LogicLocalization *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readLong((LogicLocalization *)((char *)this + 16));
      *((_QWORD *)this + 10) = ByteStream::readString((LogicLocalization *)((char *)this + 16), 900000);
      result = ByteStream::readString((LogicLocalization *)((char *)this + 16), 900000);
      *((_QWORD *)this + 11) = result;
      return result;
    }

    __int64 __fastcall UnlockAccountMessage::getMessageType(LogicLocalization *this)
    {
      return 10121;
    }

    __int64 __fastcall UnlockAccountMessage::setAccountId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall UnlockAccountMessage::setPassToken(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall UnlockAccountMessage::setUnlockCode(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 88) = a2;
      return this;
    }

    __int64 __fastcall UnlockAccountMessage::getServiceNodeType(LogicLocalization *this)
    {
      return 1;
    }

    void __fastcall UnlockAccountMessage::destruct(LogicLocalization *this)
    {
      void *v2; // x0
      _QWORD *v3; // x21
      void *v4; // x20
      void *v5; // x19
    
      PiranhaMessage::destruct(this);
      v3 = (_QWORD *)((char *)this + 72);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      v4 = (void *)*((_QWORD *)this + 10);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      v5 = (void *)*((_QWORD *)this + 11);
      if ( v5 )
      {
        String::~String();
        operator delete(v5);
      }
      v3[1] = 0;
      v3[2] = 0;
      *v3 = 0;
    }

    void __fastcall UnlockAccountMessage::~UnlockAccountMessage(LogicLocalization *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall UnlockAccountMessage::~UnlockAccountMessage(LogicLocalization *this)
    {
      operator delete(this);
    }

}; // end class UnlockAccountMessage
