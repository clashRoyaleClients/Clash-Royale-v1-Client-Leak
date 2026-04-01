class CancelMatchmakeDoneMessage
{
public:

    void __fastcall CancelMatchmakeDoneMessage::CancelMatchmakeDoneMessage(CancelMatchmakeDoneMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100463680;
    }

    // attributes: thunk
    __int64 __fastcall CancelMatchmakeDoneMessage::encode(LogicServerEventCollector *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall CancelMatchmakeDoneMessage::decode(LogicServerEventCollector *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall CancelMatchmakeDoneMessage::getMessageType(LogicServerEventCollector *this)
    {
      return 24125;
    }

    __int64 __fastcall CancelMatchmakeDoneMessage::getServiceNodeType(LogicServerEventCollector *this)
    {
      return 7;
    }

    // attributes: thunk
    __int64 __fastcall CancelMatchmakeDoneMessage::destruct(#1242 *a1)
    {
      return PiranhaMessage::destruct(a1);
    }

    void __fastcall CancelMatchmakeDoneMessage::~CancelMatchmakeDoneMessage(LogicServerEventCollector *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall CancelMatchmakeDoneMessage::~CancelMatchmakeDoneMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class CancelMatchmakeDoneMessage
