class OpponentRejoinsMatchNotificationMessage
{
public:

    _QWORD *__fastcall OpponentRejoinsMatchNotificationMessage::OpponentRejoinsMatchNotificationMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046C1C0;
      return result;
    }

    __int64 OpponentRejoinsMatchNotificationMessage::getMessageType()
    {
      return 20802;
    }

    // attributes: thunk
    __int64 __fastcall OpponentRejoinsMatchNotificationMessage::encode(#1242 *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall OpponentRejoinsMatchNotificationMessage::decode(#1242 *this)
    {
      return PiranhaMessage::decode(this);
    }

    // attributes: thunk
    __int64 __fastcall OpponentRejoinsMatchNotificationMessage::destruct(#1242 *this)
    {
      return PiranhaMessage::destruct(this);
    }

    __int64 OpponentRejoinsMatchNotificationMessage::getServiceNodeType()
    {
      return 27;
    }

    void OpponentRejoinsMatchNotificationMessage::~OpponentRejoinsMatchNotificationMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall OpponentRejoinsMatchNotificationMessage::~OpponentRejoinsMatchNotificationMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class OpponentRejoinsMatchNotificationMessage
