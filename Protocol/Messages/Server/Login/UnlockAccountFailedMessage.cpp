class UnlockAccountFailedMessage
{
public:

    __int64 __fastcall UnlockAccountFailedMessage::UnlockAccountFailedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100464930;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall UnlockAccountFailedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall UnlockAccountFailedMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 __fastcall UnlockAccountFailedMessage::getErrorCode(__int64 a1)
    {
      return *(unsigned int *)(a1 + 68);
    }

    __int64 UnlockAccountFailedMessage::getMessageType()
    {
      return 20133;
    }

    __int64 UnlockAccountFailedMessage::getServiceNodeType()
    {
      return 1;
    }

    __int64 __fastcall UnlockAccountFailedMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    void UnlockAccountFailedMessage::~UnlockAccountFailedMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall UnlockAccountFailedMessage::~UnlockAccountFailedMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class UnlockAccountFailedMessage
