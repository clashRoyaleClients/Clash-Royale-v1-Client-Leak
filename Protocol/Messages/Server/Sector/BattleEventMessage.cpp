class BattleEventMessage
{
public:

    void __fastcall BattleEventMessage::BattleEventMessage(BattleEventMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100468358;
      v1[9] = 0;
    }

    __int64 __fastcall BattleEventMessage::destruct(AvatarMessageItem *this)
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

    __int64 __fastcall BattleEventMessage::encode(AvatarMessageItem *this)
    {
      PiranhaMessage::encode(this);
      return (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 24LL))(
               *((_QWORD *)this + 9),
               (char *)this + 16);
    }

    __int64 __fastcall BattleEventMessage::decode(AvatarMessageItem *this)
    {
      LogicBattleEvent *v2; // x20
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      v2 = (LogicBattleEvent *)operator new(48);
      LogicBattleEvent::LogicBattleEvent(v2);
      (*(void (__fastcall **)(LogicBattleEvent *, char *))(*(_QWORD *)v2 + 32LL))(v2, (char *)this + 16);
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

    __int64 __fastcall BattleEventMessage::getMessageType(AvatarMessageItem *this)
    {
      return 22952;
    }

    __int64 __fastcall BattleEventMessage::getServiceNodeType(AvatarMessageItem *this)
    {
      return 16;
    }

    __int64 __fastcall BattleEventMessage::removeBattleEvent(AvatarMessageItem *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    void __fastcall BattleEventMessage::~BattleEventMessage(AvatarMessageItem *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall BattleEventMessage::~BattleEventMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class BattleEventMessage
