class FacebookAccountBoundMessage
{
public:

    __int64 __fastcall FacebookAccountBoundMessage::FacebookAccountBoundMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10045F938;
      *(_DWORD *)(result + 68) = -1;
      return result;
    }

    __int64 __fastcall FacebookAccountBoundMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall FacebookAccountBoundMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 __fastcall FacebookAccountBoundMessage::getResultCode(__int64 a1)
    {
      return *(unsigned int *)(a1 + 68);
    }

    __int64 FacebookAccountBoundMessage::getMessageType()
    {
      return 24201;
    }

    __int64 FacebookAccountBoundMessage::getServiceNodeType()
    {
      return 10;
    }

    __int64 __fastcall FacebookAccountBoundMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = -1;
      return result;
    }

    void FacebookAccountBoundMessage::~FacebookAccountBoundMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall FacebookAccountBoundMessage::~FacebookAccountBoundMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class FacebookAccountBoundMessage
