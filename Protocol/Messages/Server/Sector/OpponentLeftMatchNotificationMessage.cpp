class OpponentLeftMatchNotificationMessage
{
public:

    _QWORD *__fastcall OpponentLeftMatchNotificationMessage::OpponentLeftMatchNotificationMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100469D18;
      return result;
    }

    __int64 OpponentLeftMatchNotificationMessage::getMessageType()
    {
      return 20801;
    }

    // attributes: thunk
    __int64 __fastcall OpponentLeftMatchNotificationMessage::encode(#1242 *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall OpponentLeftMatchNotificationMessage::decode(#1242 *this)
    {
      return PiranhaMessage::decode(this);
    }

    // attributes: thunk
    __int64 __fastcall OpponentLeftMatchNotificationMessage::destruct(#1242 *this)
    {
      return PiranhaMessage::destruct(this);
    }

    __int64 OpponentLeftMatchNotificationMessage::getServiceNodeType()
    {
      return 27;
    }

    void OpponentLeftMatchNotificationMessage::~OpponentLeftMatchNotificationMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall OpponentLeftMatchNotificationMessage::~OpponentLeftMatchNotificationMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class OpponentLeftMatchNotificationMessage
