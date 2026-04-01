class LogicClearChestSourceCommand
{
public:

    void __fastcall LogicClearChestSourceCommand::LogicClearChestSourceCommand(LogicClearChestSourceCommand *this)
    {
      __int64 v1; // x0
    
      v1 = LogicCommand::LogicCommand((__int64)this);
      *(_QWORD *)v1 = &off_1004669C0;
      *(_DWORD *)(v1 + 28) = -1;
    }

    void __fastcall LogicClearChestSourceCommand::LogicClearChestSourceCommand(LogicClearChestSourceCommand *this, int a2)
    {
      __int64 v3; // x0
    
      v3 = LogicCommand::LogicCommand((__int64)this);
      *(_QWORD *)v3 = &off_1004669C0;
      *(_DWORD *)(v3 + 28) = a2;
    }

    __int64 __fastcall LogicClearChestSourceCommand::destruct(LogicCombatComponent *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_DWORD *)this + 7) = -1;
      return result;
    }

    __int64 __fastcall LogicClearChestSourceCommand::getCommandType(LogicCombatComponent *this)
    {
      return 522;
    }

    __int64 __fastcall LogicClearChestSourceCommand::encode(LogicCombatComponent *this, #1226 *a2)
    {
      LogicCommand::encode((__int64)this, a2);
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
    }

    __int64 __fastcall LogicClearChestSourceCommand::decode(LogicCombatComponent *this, #1225 *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 7) = result;
      return result;
    }

    __int64 __fastcall LogicClearChestSourceCommand::execute(LogicCombatComponent *this, UnlockAccountPopup *a2, char a3)
    {
      #1146 *Home; // x21
      __int64 ChestWithID; // x0
      LogicChest *v8; // x20
      int v9; // w19
      int isNew; // w8
      __int64 result; // x0
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 1;
      if ( !LogicGameMode::getPlayerAvatar(a2) )
        return 5;
      ChestWithID = LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 7));
      v8 = (LogicChest *)ChestWithID;
      if ( !ChestWithID )
        return 6;
      v9 = a3 & 2;
      isNew = LogicChest::isNew(ChestWithID);
      if ( isNew )
        result = 0;
      else
        result = 7;
      if ( v9 )
      {
        if ( ((isNew ^ 1) & 1) == 0 )
        {
          LogicChest::setNew(v8, 0);
          return 0;
        }
      }
      return result;
    }

    void __fastcall LogicClearChestSourceCommand::~LogicClearChestSourceCommand(LogicCombatComponent *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicClearChestSourceCommand::~LogicClearChestSourceCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicClearChestSourceCommand
