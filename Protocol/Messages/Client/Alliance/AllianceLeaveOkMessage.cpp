class AllianceLeaveOkMessage
{
public:

    void __fastcall AllianceLeaveOkMessage::AllianceLeaveOkMessage(AllianceLeaveOkMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_1004624E8;
      v1[9] = 0;
    }

    __int64 __fastcall AllianceLeaveOkMessage::encode(UdpCheckConnectionMessage *this)
    {
      PiranhaMessage::encode(this);
      return (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 40LL))(
               *((_QWORD *)this + 9),
               (char *)this + 16);
    }

    __int64 __fastcall AllianceLeaveOkMessage::decode(UdpCheckConnectionMessage *this)
    {
      void (__fastcall ***v2)(_QWORD); // x0
      __int64 v3; // x0
      LogicLeaveAllianceCommand *v4; // x20
    
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
      v4 = (LogicLeaveAllianceCommand *)operator new(48);
      LogicLeaveAllianceCommand::LogicLeaveAllianceCommand(v4);
      *((_QWORD *)this + 9) = v4;
      return (*(__int64 (__fastcall **)(LogicLeaveAllianceCommand *, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 16);
    }

    __int64 __fastcall AllianceLeaveOkMessage::getMessageType(UdpCheckConnectionMessage *this)
    {
      return 24305;
    }

    __int64 __fastcall AllianceLeaveOkMessage::getServiceNodeType(UdpCheckConnectionMessage *this)
    {
      return 9;
    }

    __int64 __fastcall AllianceLeaveOkMessage::destruct(UdpCheckConnectionMessage *this)
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

    void __fastcall AllianceLeaveOkMessage::~AllianceLeaveOkMessage(UdpCheckConnectionMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceLeaveOkMessage::~AllianceLeaveOkMessage(UdpCheckConnectionMessage *this)
    {
      operator delete(this);
    }

}; // end class AllianceLeaveOkMessage
