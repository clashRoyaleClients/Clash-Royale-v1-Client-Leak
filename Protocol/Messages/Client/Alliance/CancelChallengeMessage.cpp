class CancelChallengeMessage
{
public:

    void __fastcall CancelChallengeMessage::CancelChallengeMessage(CancelChallengeMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100464028;
    }

    // attributes: thunk
    __int64 __fastcall CancelChallengeMessage::encode(BackgroundDeco *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall CancelChallengeMessage::decode(BackgroundDeco *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall CancelChallengeMessage::getMessageType(BackgroundDeco *this)
    {
      return 14123;
    }

    __int64 __fastcall CancelChallengeMessage::getServiceNodeType(BackgroundDeco *this)
    {
      return 11;
    }

    // attributes: thunk
    __int64 __fastcall CancelChallengeMessage::destruct(BackgroundDeco *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall CancelChallengeMessage::~CancelChallengeMessage(BackgroundDeco *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall CancelChallengeMessage::~CancelChallengeMessage(BackgroundDeco *this)
    {
      operator delete(this);
    }

}; // end class CancelChallengeMessage
