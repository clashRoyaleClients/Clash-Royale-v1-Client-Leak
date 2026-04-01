class RequestSectorStateMessage
{
public:

    __int64 __fastcall RequestSectorStateMessage::RequestSectorStateMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10046F128;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall RequestSectorStateMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall RequestSectorStateMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 __fastcall RequestSectorStateMessage::getMessageType(LogicSpellSetData *this)
    {
      return 12903;
    }

    __int64 __fastcall RequestSectorStateMessage::getServiceNodeType(LogicSpellSetData *this)
    {
      return 27;
    }

    __int64 __fastcall RequestSectorStateMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    __int64 __fastcall RequestSectorStateMessage::setClientTick(__int64 this, int a2)
    {
      *(_DWORD *)(this + 68) = a2;
      return this;
    }

    void __fastcall RequestSectorStateMessage::~RequestSectorStateMessage(LogicSpellSetData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall RequestSectorStateMessage::~RequestSectorStateMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class RequestSectorStateMessage
