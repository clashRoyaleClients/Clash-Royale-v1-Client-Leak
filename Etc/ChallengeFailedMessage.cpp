class ChallengeFailedMessage
{
public:

    void __fastcall ChallengeFailedMessage::ChallengeFailedMessage(ChallengeFailedMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100463DE0;
    }

    // attributes: thunk
    __int64 __fastcall ChallengeFailedMessage::encode(GainedStar *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall ChallengeFailedMessage::decode(GainedStar *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall ChallengeFailedMessage::getMessageType(GainedStar *this)
    {
      return 24121;
    }

    __int64 __fastcall ChallengeFailedMessage::getServiceNodeType(GainedStar *this)
    {
      return 9;
    }

    // attributes: thunk
    __int64 __fastcall ChallengeFailedMessage::destruct(GainedStar *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall ChallengeFailedMessage::~ChallengeFailedMessage(GainedStar *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChallengeFailedMessage::~ChallengeFailedMessage(GainedStar *this)
    {
      operator delete(this);
    }

}; // end class ChallengeFailedMessage
