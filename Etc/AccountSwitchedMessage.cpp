class AccountSwitchedMessage
{
public:

    __int64 __fastcall AccountSwitchedMessage::AccountSwitchedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_1004659C8;
      *(_QWORD *)(result + 72) = 0;
      *(_BYTE *)(result + 80) = 0;
      return result;
    }

    __int64 __fastcall AccountSwitchedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
      return ByteStream::writeBoolean((ByteStream *)(a1 + 16), *(_BYTE *)(a1 + 80));
    }

    __int64 __fastcall AccountSwitchedMessage::decode(__int64 a1)
    {
      LogicLong *v2; // x20
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      v2 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v2);
      *(_QWORD *)(a1 + 72) = v2;
      LogicLong::decode(v2, (ByteStream *)(a1 + 16));
      result = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      *(_BYTE *)(a1 + 80) = result;
      return result;
    }

    __int64 AccountSwitchedMessage::getMessageType()
    {
      return 10118;
    }

    __int64 AccountSwitchedMessage::getServiceNodeType()
    {
      return 1;
    }

    __int64 __fastcall AccountSwitchedMessage::setSwitchedToAccountId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall AccountSwitchedMessage::destruct(__int64 a1)
    {
      void *v2; // x0
      __int64 result; // x0
    
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 80) = 0;
      return result;
    }

    __int64 __fastcall AccountSwitchedMessage::setDeleteOldAccount(__int64 this, char a2)
    {
      *(_BYTE *)(this + 80) = a2;
      return this;
    }

    void __fastcall AccountSwitchedMessage::~AccountSwitchedMessage(AllianceStream *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AccountSwitchedMessage::~AccountSwitchedMessage(AllianceStream *this)
    {
      operator delete(this);
    }

}; // end class AccountSwitchedMessage
