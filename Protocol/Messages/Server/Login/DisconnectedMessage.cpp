class DisconnectedMessage
{
public:

    __int64 __fastcall DisconnectedMessage::DisconnectedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_1004649E8;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall DisconnectedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall DisconnectedMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 DisconnectedMessage::getMessageType()
    {
      return 25892;
    }

    __int64 DisconnectedMessage::getServiceNodeType()
    {
      return 1;
    }

    __int64 __fastcall DisconnectedMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    __int64 __fastcall DisconnectedMessage::getReason(__int64 a1)
    {
      return *(unsigned int *)(a1 + 68);
    }

    void DisconnectedMessage::~DisconnectedMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall DisconnectedMessage::~DisconnectedMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class DisconnectedMessage
