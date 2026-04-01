class CancelMatchmakeMessage
{
public:

    _QWORD *__fastcall CancelMatchmakeMessage::CancelMatchmakeMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046E9C0;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall CancelMatchmakeMessage::encode(AskForAvatarStreamMessage *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall CancelMatchmakeMessage::decode(AskForAvatarStreamMessage *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall CancelMatchmakeMessage::getMessageType(AskForAvatarStreamMessage *this)
    {
      return 14107;
    }

    __int64 __fastcall CancelMatchmakeMessage::getServiceNodeType(AskForAvatarStreamMessage *this)
    {
      return 7;
    }

    // attributes: thunk
    __int64 __fastcall CancelMatchmakeMessage::destruct(#1242 *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall CancelMatchmakeMessage::~CancelMatchmakeMessage(AskForAvatarStreamMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall CancelMatchmakeMessage::~CancelMatchmakeMessage(AskForAvatarStreamMessage *this)
    {
      operator delete(this);
    }

}; // end class CancelMatchmakeMessage
