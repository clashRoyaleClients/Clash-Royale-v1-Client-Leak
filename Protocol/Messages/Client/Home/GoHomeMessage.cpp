class GoHomeMessage
{
public:

    __int64 __fastcall GoHomeMessage::GoHomeMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10046DC60;
      *(_BYTE *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall GoHomeMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeBoolean((ByteStream *)(a1 + 16), *(_BYTE *)(a1 + 68));
    }

    __int64 __fastcall GoHomeMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      *(_BYTE *)(a1 + 68) = result;
      return result;
    }

    __int64 GoHomeMessage::getMessageType()
    {
      return 14101;
    }

    __int64 GoHomeMessage::getServiceNodeType()
    {
      return 9;
    }

    __int64 __fastcall GoHomeMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_BYTE *)(a1 + 68) = 0;
      return result;
    }

    void GoHomeMessage::~GoHomeMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall GoHomeMessage::~GoHomeMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class GoHomeMessage
