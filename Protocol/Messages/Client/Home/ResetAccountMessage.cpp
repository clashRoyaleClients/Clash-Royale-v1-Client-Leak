class ResetAccountMessage
{
public:

    void __fastcall ResetAccountMessage::ResetAccountMessage(ResetAccountMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100464DC8;
      *(_DWORD *)(v1 + 68) = 0;
    }

    __int64 __fastcall ResetAccountMessage::encode(_guard_variable_for_MainHUD *this)
    {
      PiranhaMessage::encode(this);
      return ByteStream::writeVInt((_guard_variable_for_MainHUD *)((char *)this + 16), *((_DWORD *)this + 17));
    }

    __int64 __fastcall ResetAccountMessage::decode(_guard_variable_for_MainHUD *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readVInt((_guard_variable_for_MainHUD *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall ResetAccountMessage::getMessageType(_guard_variable_for_MainHUD *this)
    {
      return 10116;
    }

    __int64 __fastcall ResetAccountMessage::destruct(_guard_variable_for_MainHUD *this)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct(this);
      *((_DWORD *)this + 17) = 0;
      return result;
    }

    void __fastcall ResetAccountMessage::~ResetAccountMessage(_guard_variable_for_MainHUD *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ResetAccountMessage::~ResetAccountMessage(_guard_variable_for_MainHUD *this)
    {
      operator delete(this);
    }

    __int64 __fastcall ResetAccountMessage::getServiceNodeType(_guard_variable_for_MainHUD *this)
    {
      return 9;
    }

}; // end class ResetAccountMessage
