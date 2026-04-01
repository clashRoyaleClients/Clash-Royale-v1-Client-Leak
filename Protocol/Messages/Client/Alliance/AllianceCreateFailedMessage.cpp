class AllianceCreateFailedMessage
{
public:

    __int64 __fastcall AllianceCreateFailedMessage::AllianceCreateFailedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100461130;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall AllianceCreateFailedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall AllianceCreateFailedMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 AllianceCreateFailedMessage::getMessageType()
    {
      return 24332;
    }

    __int64 AllianceCreateFailedMessage::getServiceNodeType()
    {
      return 11;
    }

    __int64 __fastcall AllianceCreateFailedMessage::getReason(__int64 a1)
    {
      return *(unsigned int *)(a1 + 68);
    }

    __int64 __fastcall AllianceCreateFailedMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    void AllianceCreateFailedMessage::~AllianceCreateFailedMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceCreateFailedMessage::~AllianceCreateFailedMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AllianceCreateFailedMessage
