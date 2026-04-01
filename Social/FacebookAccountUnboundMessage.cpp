class FacebookAccountUnboundMessage
{
public:

    void __fastcall FacebookAccountUnboundMessage::FacebookAccountUnboundMessage(FacebookAccountUnboundMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100472630;
    }

    // attributes: thunk
    __int64 __fastcall FacebookAccountUnboundMessage::encode(LogicMoveSpellCommand *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall FacebookAccountUnboundMessage::decode(LogicMoveSpellCommand *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall FacebookAccountUnboundMessage::getMessageType(LogicMoveSpellCommand *this)
    {
      return 24214;
    }

    __int64 __fastcall FacebookAccountUnboundMessage::getServiceNodeType(LogicMoveSpellCommand *this)
    {
      return 10;
    }

    // attributes: thunk
    __int64 __fastcall FacebookAccountUnboundMessage::destruct(LogicMoveSpellCommand *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall FacebookAccountUnboundMessage::~FacebookAccountUnboundMessage(LogicMoveSpellCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall FacebookAccountUnboundMessage::~FacebookAccountUnboundMessage(LogicMoveSpellCommand *this)
    {
      operator delete(this);
    }

}; // end class FacebookAccountUnboundMessage
