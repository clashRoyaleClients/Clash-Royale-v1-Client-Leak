class AuthenticationCheckMessage
{
public:

    void __fastcall AuthenticationCheckMessage::AuthenticationCheckMessage(AuthenticationCheckMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100471E88;
    }

    // attributes: thunk
    __int64 __fastcall AuthenticationCheckMessage::encode(HomeBattleReplayFailedMessage *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall AuthenticationCheckMessage::decode(HomeBattleReplayFailedMessage *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall AuthenticationCheckMessage::getMessageType(HomeBattleReplayFailedMessage *this)
    {
      return 10112;
    }

    __int64 __fastcall AuthenticationCheckMessage::getServiceNodeType(HomeBattleReplayFailedMessage *this)
    {
      return 1;
    }

    // attributes: thunk
    __int64 __fastcall AuthenticationCheckMessage::destruct(HomeBattleReplayFailedMessage *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall AuthenticationCheckMessage::~AuthenticationCheckMessage(HomeBattleReplayFailedMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AuthenticationCheckMessage::~AuthenticationCheckMessage(HomeBattleReplayFailedMessage *this)
    {
      operator delete(this);
    }

}; // end class AuthenticationCheckMessage
