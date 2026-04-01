class UdpCheckConnectionMessage
{
public:

    void __fastcall UdpCheckConnectionMessage::UdpCheckConnectionMessage(UdpCheckConnectionMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_10045E958;
    }

    // attributes: thunk
    __int64 __fastcall UdpCheckConnectionMessage::encode(HomeBattleReplayMessage *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall UdpCheckConnectionMessage::decode(HomeBattleReplayMessage *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall UdpCheckConnectionMessage::getMessageType(HomeBattleReplayMessage *this)
    {
      return 10108;
    }

    // attributes: thunk
    __int64 __fastcall UdpCheckConnectionMessage::destruct(HomeBattleReplayMessage *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall UdpCheckConnectionMessage::~UdpCheckConnectionMessage(HomeBattleReplayMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall UdpCheckConnectionMessage::~UdpCheckConnectionMessage(HomeBattleReplayMessage *this)
    {
      operator delete(this);
    }

    __int64 __fastcall UdpCheckConnectionMessage::getServiceNodeType(HomeBattleReplayMessage *this)
    {
      return 1;
    }

}; // end class UdpCheckConnectionMessage
