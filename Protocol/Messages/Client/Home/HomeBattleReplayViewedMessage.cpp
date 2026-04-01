class HomeBattleReplayViewedMessage
{
public:

    void __fastcall HomeBattleReplayViewedMessage::HomeBattleReplayViewedMessage(HomeBattleReplayViewedMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_10046BCC0;
      *(_QWORD *)(v1 + 72) = 0;
      *(_DWORD *)(v1 + 80) = 0;
    }

    __int64 __fastcall HomeBattleReplayViewedMessage::encode(LogicLocationData *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeVInt((LogicLocationData *)((char *)this + 16), *((_DWORD *)this + 20));
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall HomeBattleReplayViewedMessage::decode(LogicLocationData *this)
    {
      void *v2; // x0
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_DWORD *)this + 20) = ByteStream::readVInt((LogicLocationData *)((char *)this + 16));
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
      result = ByteStream::readLong((LogicLocationData *)((char *)this + 16));
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall HomeBattleReplayViewedMessage::getMessageType(LogicLocationData *this)
    {
      return 14117;
    }

    __int64 __fastcall HomeBattleReplayViewedMessage::getServiceNodeType(LogicLocationData *this)
    {
      return 9;
    }

    void __fastcall HomeBattleReplayViewedMessage::destruct(LogicLocationData *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
      *((_DWORD *)this + 20) = 0;
    }

    void __fastcall HomeBattleReplayViewedMessage::~HomeBattleReplayViewedMessage(LogicLocationData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall HomeBattleReplayViewedMessage::~HomeBattleReplayViewedMessage(LogicLocationData *this)
    {
      operator delete(this);
    }

}; // end class HomeBattleReplayViewedMessage
