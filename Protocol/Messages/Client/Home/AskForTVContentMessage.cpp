class AskForTVContentMessage
{
public:

    void __fastcall AskForTVContentMessage::AskForTVContentMessage(AskForTVContentMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_10045EA90;
    }

    // attributes: thunk
    __int64 __fastcall AskForTVContentMessage::encode(GoHomeMessage *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall AskForTVContentMessage::decode(GoHomeMessage *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall AskForTVContentMessage::getMessageType(GoHomeMessage *this)
    {
      return 14402;
    }

    __int64 __fastcall AskForTVContentMessage::getServiceNodeType(GoHomeMessage *this)
    {
      return 33;
    }

    // attributes: thunk
    __int64 __fastcall AskForTVContentMessage::destruct(GoHomeMessage *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall AskForTVContentMessage::~AskForTVContentMessage(GoHomeMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForTVContentMessage::~AskForTVContentMessage(GoHomeMessage *this)
    {
      operator delete(this);
    }

}; // end class AskForTVContentMessage
