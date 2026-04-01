class HomeBattleReplayFailedMessage
{
public:

    void __fastcall HomeBattleReplayFailedMessage::HomeBattleReplayFailedMessage(HomeBattleReplayFailedMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_10046AF08;
      *(_DWORD *)(v1 + 68) = 0;
    }

    __int64 __fastcall HomeBattleReplayFailedMessage::encode(NameChangeConfirmationScreen *this)
    {
      PiranhaMessage::encode(this);
      return ByteStream::writeInt((NameChangeConfirmationScreen *)((char *)this + 16), *((_DWORD *)this + 17));
    }

    __int64 __fastcall HomeBattleReplayFailedMessage::decode(NameChangeConfirmationScreen *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readInt((NameChangeConfirmationScreen *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall HomeBattleReplayFailedMessage::getMessageType(NameChangeConfirmationScreen *this)
    {
      return 24116;
    }

    __int64 __fastcall HomeBattleReplayFailedMessage::getServiceNodeType(NameChangeConfirmationScreen *this)
    {
      return 9;
    }

    __int64 __fastcall HomeBattleReplayFailedMessage::destruct(NameChangeConfirmationScreen *this)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct(this);
      *((_DWORD *)this + 17) = 0;
      return result;
    }

    void __fastcall HomeBattleReplayFailedMessage::~HomeBattleReplayFailedMessage(NameChangeConfirmationScreen *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall HomeBattleReplayFailedMessage::~HomeBattleReplayFailedMessage(NameChangeConfirmationScreen *this)
    {
      operator delete(this);
    }

}; // end class HomeBattleReplayFailedMessage
