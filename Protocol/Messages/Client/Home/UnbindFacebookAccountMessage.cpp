class UnbindFacebookAccountMessage
{
public:

    _QWORD *__fastcall UnbindFacebookAccountMessage::UnbindFacebookAccountMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046EE78;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall UnbindFacebookAccountMessage::encode(#1242 *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall UnbindFacebookAccountMessage::decode(#1242 *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall UnbindFacebookAccountMessage::getMessageType(Utility *this)
    {
      return 14211;
    }

    __int64 __fastcall UnbindFacebookAccountMessage::getServiceNodeType(Utility *this)
    {
      return 1;
    }

    // attributes: thunk
    __int64 __fastcall UnbindFacebookAccountMessage::destruct(#1242 *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall UnbindFacebookAccountMessage::~UnbindFacebookAccountMessage(Utility *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall UnbindFacebookAccountMessage::~UnbindFacebookAccountMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class UnbindFacebookAccountMessage
