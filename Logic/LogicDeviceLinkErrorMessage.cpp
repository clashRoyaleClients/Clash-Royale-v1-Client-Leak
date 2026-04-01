class LogicDeviceLinkErrorMessage
{
public:

    __int64 __fastcall LogicDeviceLinkErrorMessage::LogicDeviceLinkErrorMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10046F7A0;
      *(_BYTE *)(result + 68) = 0;
      *(_DWORD *)(result + 72) = 0;
      return result;
    }

    __int64 __fastcall LogicDeviceLinkErrorMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeBoolean((ByteStream *)(a1 + 16), *(_BYTE *)(a1 + 68));
      return ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 72));
    }

    __int64 __fastcall LogicDeviceLinkErrorMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_BYTE *)(a1 + 68) = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      result = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall LogicDeviceLinkErrorMessage::getMessageType(LogicGambleChestData *this)
    {
      return 26008;
    }

    __int64 __fastcall LogicDeviceLinkErrorMessage::getServiceNodeType(LogicGambleChestData *this)
    {
      return 1;
    }

    __int64 __fastcall LogicDeviceLinkErrorMessage::allowBack(LogicGambleChestData *this)
    {
      return *((unsigned __int8 *)this + 68);
    }

    __int64 __fastcall LogicDeviceLinkErrorMessage::getErrorCode(LogicGambleChestData *this)
    {
      return *((unsigned int *)this + 18);
    }

    __int64 __fastcall LogicDeviceLinkErrorMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_BYTE *)(a1 + 68) = 0;
      *(_DWORD *)(a1 + 72) = 0;
      return result;
    }

    void __fastcall LogicDeviceLinkErrorMessage::~LogicDeviceLinkErrorMessage(LogicGambleChestData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicDeviceLinkErrorMessage::~LogicDeviceLinkErrorMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicDeviceLinkErrorMessage
