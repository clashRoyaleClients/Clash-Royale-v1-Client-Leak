class KeepAliveMessage
{
public:

    _QWORD *__fastcall KeepAliveMessage::KeepAliveMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_1004689B0;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall KeepAliveMessage::encode(#1242 *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall KeepAliveMessage::decode(#1242 *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall KeepAliveMessage::getMessageType(tween::Expo *this)
    {
      return 10108;
    }

    __int64 __fastcall KeepAliveMessage::getServiceNodeType(tween::Expo *this)
    {
      return 1;
    }

    void __fastcall KeepAliveMessage::~KeepAliveMessage(tween::Expo *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall KeepAliveMessage::~KeepAliveMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class KeepAliveMessage
