class AskForAllianceDataMessage
{
public:

    void __fastcall AskForAllianceDataMessage::AskForAllianceDataMessage(AskForAllianceDataMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_1004627E0;
      v1[9] = 0;
    }

    __int64 __fastcall AskForAllianceDataMessage::encode(LogicTreasureChestData *this)
    {
      PiranhaMessage::encode(this);
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall AskForAllianceDataMessage::decode(LogicTreasureChestData *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readLong((LogicTreasureChestData *)((char *)this + 16));
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall AskForAllianceDataMessage::getMessageType(LogicTreasureChestData *this)
    {
      return 14302;
    }

    __int64 __fastcall AskForAllianceDataMessage::setAllianceId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall AskForAllianceDataMessage::getServiceNodeType(LogicTreasureChestData *this)
    {
      return 11;
    }

    void __fastcall AskForAllianceDataMessage::destruct(LogicTreasureChestData *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AskForAllianceDataMessage::~AskForAllianceDataMessage(LogicTreasureChestData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForAllianceDataMessage::~AskForAllianceDataMessage(LogicTreasureChestData *this)
    {
      operator delete(this);
    }

}; // end class AskForAllianceDataMessage
