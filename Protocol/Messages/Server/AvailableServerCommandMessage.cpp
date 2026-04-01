class AvailableServerCommandMessage
{
public:

    void __fastcall AvailableServerCommandMessage::AvailableServerCommandMessage(AvailableServerCommandMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100468790;
      v1[9] = 0;
    }

    __int64 __fastcall AvailableServerCommandMessage::removeServerCommand(tween::Quart *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall AvailableServerCommandMessage::encode(tween::Quart *this)
    {
      PiranhaMessage::encode(this);
      return LogicCommandManager::encodeCommand((__int64)this + 16, *((_QWORD *)this + 9));
    }

    _BYTE *__fastcall AvailableServerCommandMessage::decode(tween::Quart *this)
    {
      void (__fastcall ***v2)(_QWORD); // x0
      __int64 v3; // x0
      _BYTE *result; // x0
      __int64 v5; // x20
    
      PiranhaMessage::decode(this);
      v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 9);
      if ( v2 )
      {
        (**v2)(v2);
        v3 = *((_QWORD *)this + 9);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        *((_QWORD *)this + 9) = 0;
      }
      result = LogicCommandManager::decodeCommand((tween::Quart *)((char *)this + 16), 0, 1);
      v5 = (__int64)result;
      if ( result )
      {
        if ( (*(int (__fastcall **)(_BYTE *))(*(_QWORD *)result + 32LL))(result) < 200
          || (result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5), (int)result > 499) )
        {
          (**(void (__fastcall ***)(__int64))v5)(v5);
          return (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        else
        {
          *((_QWORD *)this + 9) = v5;
        }
      }
      return result;
    }

    __int64 __fastcall AvailableServerCommandMessage::getMessageType(tween::Quart *this)
    {
      return 24111;
    }

    __int64 __fastcall AvailableServerCommandMessage::getServiceNodeType(tween::Quart *this)
    {
      return 9;
    }

    __int64 __fastcall AvailableServerCommandMessage::destruct(tween::Quart *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::destruct(this);
      result = *((_QWORD *)this + 9);
      if ( result )
      {
        (**(void (__fastcall ***)(__int64))result)(result);
        result = *((_QWORD *)this + 9);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        *((_QWORD *)this + 9) = 0;
      }
      *((_QWORD *)this + 9) = 0;
      return result;
    }

    void __fastcall AvailableServerCommandMessage::~AvailableServerCommandMessage(tween::Quart *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvailableServerCommandMessage::~AvailableServerCommandMessage(tween::Quart *this)
    {
      operator delete(this);
    }

}; // end class AvailableServerCommandMessage
