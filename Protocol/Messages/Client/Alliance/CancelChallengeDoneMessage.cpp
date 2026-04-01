class CancelChallengeDoneMessage
{
public:

    _QWORD *__fastcall CancelChallengeDoneMessage::CancelChallengeDoneMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100467908;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall CancelChallengeDoneMessage::encode(#1242 *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall CancelChallengeDoneMessage::decode(#1242 *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall CancelChallengeDoneMessage::getMessageType(LoginFailedMessage *this)
    {
      return 24124;
    }

    __int64 __fastcall CancelChallengeDoneMessage::getServiceNodeType(LoginFailedMessage *this)
    {
      return 9;
    }

    // attributes: thunk
    __int64 __fastcall CancelChallengeDoneMessage::destruct(#1242 *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall CancelChallengeDoneMessage::~CancelChallengeDoneMessage(LoginFailedMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall CancelChallengeDoneMessage::~CancelChallengeDoneMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class CancelChallengeDoneMessage
