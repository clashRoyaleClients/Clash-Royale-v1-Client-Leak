class ShutdownStartedMessage
{
public:

    __int64 __fastcall ShutdownStartedMessage::ShutdownStartedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100467680;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall ShutdownStartedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall ShutdownStartedMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 __fastcall ShutdownStartedMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    __int64 ShutdownStartedMessage::getMessageType()
    {
      return 20161;
    }

    __int64 ShutdownStartedMessage::getServiceNodeType()
    {
      return 1;
    }

    void ShutdownStartedMessage::~ShutdownStartedMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall ShutdownStartedMessage::~ShutdownStartedMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class ShutdownStartedMessage
