class LogicServerCommand
{
public:

    __int64 __fastcall LogicServerCommand::LogicServerCommand(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::LogicCommand(a1);
      *(_QWORD *)result = &off_100472380;
      *(_DWORD *)(result + 28) = -1;
      return result;
    }

    __int64 __fastcall LogicServerCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(a1);
      *(_DWORD *)(a1 + 28) = -1;
      return result;
    }

    __int64 __fastcall LogicServerCommand::encode(__int64 a1, #1317 *a2)
    {
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 28));
      return LogicCommand::encode(a1, a2);
    }

    void __fastcall LogicServerCommand::decode(LogicAllianceRoleData *this, ChallengePopup *a2)
    {
      *((_DWORD *)this + 7) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      LogicCommand::decode(this, a2);
    }

    __int64 __fastcall LogicServerCommand::serverCanRunIfNotConnected(LogicAllianceRoleData *this)
    {
      return 0;
    }

    void __fastcall LogicServerCommand::~LogicServerCommand(LogicAllianceRoleData *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicServerCommand::~LogicServerCommand(LogicAllianceRoleData *this)
    {
      operator delete(this);
    }

}; // end class LogicServerCommand
