class LeaveAllianceMessage
{
public:

    void __fastcall LeaveAllianceMessage::LeaveAllianceMessage(LeaveAllianceMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_10045F0F8;
    }

    // attributes: thunk
    __int64 __fastcall LeaveAllianceMessage::encode(LogicGameMode *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall LeaveAllianceMessage::decode(LogicGameMode *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall LeaveAllianceMessage::getMessageType(LogicGameMode *this)
    {
      return 14308;
    }

    __int64 __fastcall LeaveAllianceMessage::getServiceNodeType(LogicGameMode *this)
    {
      return 11;
    }

    // attributes: thunk
    __int64 __fastcall LeaveAllianceMessage::destruct(LogicGameMode *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall LeaveAllianceMessage::~LeaveAllianceMessage(LogicGameMode *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LeaveAllianceMessage::~LeaveAllianceMessage(LogicGameMode *this)
    {
      operator delete(this);
    }

}; // end class LeaveAllianceMessage
