class LogicCommandManagerListener
{
public:

    void __fastcall LogicCommandManagerListener::LogicCommandManagerListener(LogicCommandManagerListener *this)
    {
      *(_QWORD *)this = off_1004723F8;
    }

    void __fastcall LogicCommandManagerListener::LogicCommandManagerListener(LogicCommandManagerListener *this)
    {
      *(_QWORD *)this = off_1004723F8;
    }

    void __fastcall LogicCommandManagerListener::destruct(PlayerRankItem *this)
    {
      ;
    }

    __int64 __fastcall LogicCommandManagerListener::commandExecuted(
            PlayerRankItem *this,
            PvpMatchmakeNotificationMessage *a2)
    {
      __int64 result; // x0
    
      if ( a2 )
      {
        (**(void (__fastcall ***)(PvpMatchmakeNotificationMessage *))a2)(a2);
        return (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 16LL))(a2);
      }
      return result;
    }

    void __fastcall LogicCommandManagerListener::~LogicCommandManagerListener(PlayerRankItem *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicCommandManagerListener::~LogicCommandManagerListener(PlayerRankItem *this)
    {
      operator delete(this);
    }

}; // end class LogicCommandManagerListener
