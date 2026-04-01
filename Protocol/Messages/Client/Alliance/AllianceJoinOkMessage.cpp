class AllianceJoinOkMessage
{
public:

    void __fastcall AllianceJoinOkMessage::AllianceJoinOkMessage(AllianceJoinOkMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100471B78;
      *(_QWORD *)(v1 + 72) = 0;
      *(_DWORD *)(v1 + 80) = 0;
    }

    __int64 __fastcall AllianceJoinOkMessage::encode(StreamItem *this)
    {
      PiranhaMessage::encode(this);
      return (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 40LL))(
               *((_QWORD *)this + 9),
               (char *)this + 16);
    }

    __int64 __fastcall AllianceJoinOkMessage::decode(StreamItem *this)
    {
      void (__fastcall ***v2)(_QWORD); // x0
      __int64 v3; // x0
      LogicJoinAllianceCommand *v4; // x20
    
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
      v4 = (LogicJoinAllianceCommand *)operator new(64);
      LogicJoinAllianceCommand::LogicJoinAllianceCommand(v4);
      *((_QWORD *)this + 9) = v4;
      return (*(__int64 (__fastcall **)(LogicJoinAllianceCommand *, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 16);
    }

    __int64 __fastcall AllianceJoinOkMessage::getMessageType(StreamItem *this)
    {
      return 24303;
    }

    __int64 __fastcall AllianceJoinOkMessage::getServiceNodeType(StreamItem *this)
    {
      return 9;
    }

    __int64 __fastcall AllianceJoinOkMessage::destruct(StreamItem *this)
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
      *((_DWORD *)this + 20) = 0;
      return result;
    }

    void __fastcall AllianceJoinOkMessage::~AllianceJoinOkMessage(StreamItem *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceJoinOkMessage::~AllianceJoinOkMessage(StreamItem *this)
    {
      operator delete(this);
    }

}; // end class AllianceJoinOkMessage
