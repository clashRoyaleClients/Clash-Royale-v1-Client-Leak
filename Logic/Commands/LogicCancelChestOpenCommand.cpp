class LogicCancelChestOpenCommand
{
public:

    void __fastcall LogicCancelChestOpenCommand::LogicCancelChestOpenCommand(LogicCancelChestOpenCommand *this)
    {
      __int64 v1; // x0
    
      v1 = LogicCommand::LogicCommand((__int64)this);
      *(_QWORD *)v1 = &off_100472730;
      *(_DWORD *)(v1 + 28) = -1;
    }

    __int64 __fastcall LogicCancelChestOpenCommand::destruct(LogicAllianceBadgeData *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_DWORD *)this + 7) = -1;
      return result;
    }

    __int64 __fastcall LogicCancelChestOpenCommand::getCommandType(LogicAllianceBadgeData *this)
    {
      return 517;
    }

    __int64 __fastcall LogicCancelChestOpenCommand::encode(LogicAllianceBadgeData *this, ExpBar *a2)
    {
      LogicCommand::encode((__int64)this, a2);
      return (*(__int64 (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
    }

    __int64 __fastcall LogicCancelChestOpenCommand::decode(LogicAllianceBadgeData *this, ChallengePopup *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      result = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 7) = result;
      return result;
    }

    __int64 __fastcall LogicCancelChestOpenCommand::execute(LogicAllianceBadgeData *this, UnlockAccountPopup *a2)
    {
      return 1;
    }

    void __fastcall LogicCancelChestOpenCommand::~LogicCancelChestOpenCommand(LogicAllianceBadgeData *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicCancelChestOpenCommand::~LogicCancelChestOpenCommand(LogicAllianceBadgeData *this)
    {
      operator delete(this);
    }

}; // end class LogicCancelChestOpenCommand
