class JoinAllianceMessage
{
public:

    __int64 __fastcall JoinAllianceMessage::JoinAllianceMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10046FE18;
      *(_QWORD *)(result + 72) = 0;
      *(_DWORD *)(result + 80) = 0;
      return result;
    }

    __int64 __fastcall JoinAllianceMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
      return ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 80));
    }

    __int64 __fastcall JoinAllianceMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStream::readLong((ByteStream *)(a1 + 16));
      result = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 80) = result;
      return result;
    }

    __int64 __fastcall JoinAllianceMessage::getMessageType(HelpshiftTitan *this)
    {
      return 14305;
    }

    __int64 __fastcall JoinAllianceMessage::getServiceNodeType(HelpshiftTitan *this)
    {
      return 9;
    }

    __int64 __fastcall JoinAllianceMessage::setAllianceId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall JoinAllianceMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 80) = 0;
    }

    void __fastcall JoinAllianceMessage::~JoinAllianceMessage(HelpshiftTitan *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall JoinAllianceMessage::~JoinAllianceMessage(HelpshiftTitan *this)
    {
      operator delete(this);
    }

}; // end class JoinAllianceMessage
