class AskForAvatarStreamMessage
{
public:

    void __fastcall AskForAvatarStreamMessage::AskForAvatarStreamMessage(AskForAvatarStreamMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100465668;
    }

    // attributes: thunk
    __int64 __fastcall AskForAvatarStreamMessage::encode(LogicDecoData *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall AskForAvatarStreamMessage::decode(LogicDecoData *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall AskForAvatarStreamMessage::getMessageType(LogicDecoData *this)
    {
      return 14405;
    }

    __int64 __fastcall AskForAvatarStreamMessage::getServiceNodeType(LogicDecoData *this)
    {
      return 9;
    }

    // attributes: thunk
    __int64 __fastcall AskForAvatarStreamMessage::destruct(LogicDecoData *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall AskForAvatarStreamMessage::~AskForAvatarStreamMessage(LogicDecoData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForAvatarStreamMessage::~AskForAvatarStreamMessage(LogicDecoData *this)
    {
      operator delete(this);
    }

}; // end class AskForAvatarStreamMessage
