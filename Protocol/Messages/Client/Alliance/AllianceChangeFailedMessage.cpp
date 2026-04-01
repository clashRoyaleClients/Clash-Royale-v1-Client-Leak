class AllianceChangeFailedMessage
{
public:

    __int64 __fastcall AllianceChangeFailedMessage::AllianceChangeFailedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10046D3C0;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall AllianceChangeFailedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall AllianceChangeFailedMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 __fastcall AllianceChangeFailedMessage::getMessageType(LogicGlobals *this)
    {
      return 24333;
    }

    __int64 __fastcall AllianceChangeFailedMessage::getServiceNodeType(LogicGlobals *this)
    {
      return 11;
    }

    __int64 __fastcall AllianceChangeFailedMessage::getReason(LogicGlobals *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall AllianceChangeFailedMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    void __fastcall AllianceChangeFailedMessage::~AllianceChangeFailedMessage(LogicGlobals *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceChangeFailedMessage::~AllianceChangeFailedMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AllianceChangeFailedMessage
