class SendBattleEventMessage
{
public:

    void __fastcall SendBattleEventMessage::SendBattleEventMessage(SendBattleEventMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_10045E8E8;
      v1[9] = 0;
    }

    __int64 __fastcall SendBattleEventMessage::destruct(BindGamecenterAccountMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::destruct(this);
      result = *((_QWORD *)this + 9);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 9);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 9) = 0;
      }
      *((_QWORD *)this + 9) = 0;
      return result;
    }

    __int64 __fastcall SendBattleEventMessage::encode(BindGamecenterAccountMessage *this)
    {
      PiranhaMessage::encode(this);
      return (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 24LL))(
               *((_QWORD *)this + 9),
               (char *)this + 16);
    }

    __int64 __fastcall SendBattleEventMessage::decode(BindGamecenterAccountMessage *this)
    {
      Projectile *v2; // x20
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      v2 = (Projectile *)operator new(48);
      LogicBattleEvent::LogicBattleEvent(v2);
      (*(void (__fastcall **)(Projectile *, char *))(*(_QWORD *)v2 + 32LL))(v2, (char *)this + 16);
      result = *((_QWORD *)this + 9);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 9);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 9) = 0;
      }
      *((_QWORD *)this + 9) = v2;
      return result;
    }

    __int64 __fastcall SendBattleEventMessage::setBattleEvent(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 72);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *(_QWORD *)(a1 + 72);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 72) = 0;
      }
      *(_QWORD *)(a1 + 72) = a2;
      return result;
    }

    __int64 __fastcall SendBattleEventMessage::getMessageType(BindGamecenterAccountMessage *this)
    {
      return 12951;
    }

    __int64 __fastcall SendBattleEventMessage::getServiceNodeType(BindGamecenterAccountMessage *this)
    {
      return 27;
    }

    void __fastcall SendBattleEventMessage::~SendBattleEventMessage(BindGamecenterAccountMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall SendBattleEventMessage::~SendBattleEventMessage(BindGamecenterAccountMessage *this)
    {
      operator delete(this);
    }

}; // end class SendBattleEventMessage
