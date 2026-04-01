class AskForAllianceStreamMessage
{
public:

    void __fastcall AskForAllianceStreamMessage::AskForAllianceStreamMessage(AskForAllianceStreamMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100468C40;
    }

    // attributes: thunk
    __int64 __fastcall AskForAllianceStreamMessage::encode(#961 *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall AskForAllianceStreamMessage::decode(tween::Circ *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall AskForAllianceStreamMessage::getMessageType(tween::Circ *this)
    {
      return 14304;
    }

    __int64 __fastcall AskForAllianceStreamMessage::getServiceNodeType(tween::Circ *this)
    {
      return 11;
    }

    // attributes: thunk
    __int64 __fastcall AskForAllianceStreamMessage::destruct(tween::Circ *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall AskForAllianceStreamMessage::~AskForAllianceStreamMessage(tween::Circ *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForAllianceStreamMessage::~AskForAllianceStreamMessage(tween::Circ *this)
    {
      operator delete(this);
    }

}; // end class AskForAllianceStreamMessage
