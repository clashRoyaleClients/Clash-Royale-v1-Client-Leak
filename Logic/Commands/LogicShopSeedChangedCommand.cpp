class LogicShopSeedChangedCommand
{
public:

    void __fastcall LogicShopSeedChangedCommand::LogicShopSeedChangedCommand(LogicShopSeedChangedCommand *this)
    {
      LogicServerCommand *v1; // x0
    
      v1 = LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)v1 = &off_100461328;
      *((_QWORD *)v1 + 4) = 0;
      *((_DWORD *)v1 + 10) = 0;
    }

    __int64 __fastcall LogicShopSeedChangedCommand::destruct(LogicServerCommand *this)
    {
      __int64 result; // x0
    
      result = LogicServerCommand::destruct(this);
      *((_QWORD *)this + 4) = 0;
      *((_DWORD *)this + 10) = 0;
      return result;
    }

    __int64 __fastcall LogicShopSeedChangedCommand::getCommandType(LogicServerCommand *this)
    {
      return 217;
    }

    __int64 __fastcall LogicShopSeedChangedCommand::encode(LogicServerCommand *this, #1226 *a2)
    {
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 8));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 9));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 10));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicShopSeedChangedCommand::decode(LogicServerCommand *this, #1225 *a2)
    {
      *((_DWORD *)this + 8) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 9) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 10) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      return LogicServerCommand::decode(this, a2);
    }

    __int64 __fastcall LogicShopSeedChangedCommand::execute(LogicServerCommand *this, #1028 *a2)
    {
      LogicClientHome *Home; // x0
    
      if ( (unsigned int)(*((_DWORD *)this + 10) - 1) > 6 )
        return 1;
      Home = (LogicClientHome *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 2;
      LogicClientHome::setShopValues(Home, *((_DWORD *)this + 8), *((_DWORD *)this + 9), *((_DWORD *)this + 10));
      return 0;
    }

    __int64 __fastcall LogicShopSeedChangedCommand::serverCanRunIfNotConnected(LogicServerCommand *this)
    {
      return 0;
    }

    void __fastcall LogicShopSeedChangedCommand::~LogicShopSeedChangedCommand(LogicServerCommand *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicShopSeedChangedCommand::~LogicShopSeedChangedCommand(LogicServerCommand *this)
    {
      operator delete(this);
    }

}; // end class LogicShopSeedChangedCommand
