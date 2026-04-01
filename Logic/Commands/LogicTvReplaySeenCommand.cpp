class LogicTvReplaySeenCommand
{
public:

    _QWORD *__fastcall LogicTvReplaySeenCommand::LogicTvReplaySeenCommand(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      *result = &off_100464978;
      *(_QWORD *)((char *)result + 28) = -1;
      return result;
    }

    __int64 __fastcall LogicTvReplaySeenCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(a1);
      *(_QWORD *)(a1 + 28) = -1;
      return result;
    }

    __int64 LogicTvReplaySeenCommand::getCommandType()
    {
      return 536;
    }

    __int64 __fastcall LogicTvReplaySeenCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 28));
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 32));
    }

    __int64 __fastcall LogicTvReplaySeenCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(a1, a2);
      a1[7] = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      a1[8] = result;
      return result;
    }

    __int64 __fastcall LogicTvReplaySeenCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      __int64 Home; // x0
      LogicClientHome *v6; // x20
      const char *v7; // x1
      __int64 result; // x0
      int v9; // w9
      const char *v10; // x1
    
      Home = LogicGameMode::getHome(a2);
      v6 = (LogicClientHome *)Home;
      if ( !Home )
        return 1;
      if ( *(_DWORD *)(a1 + 28) == -1 )
      {
        v9 = *(_DWORD *)(a1 + 32);
        result = 2 * (unsigned int)(v9 == -1);
        if ( (a3 & 2) == 0 || v9 == -1 )
          return result;
      }
      else
      {
        if ( (a3 & 2) == 0 )
          return 0;
        if ( (LogicClientHome::getReplaySeen(Home) & 1) != 0 )
        {
          Debugger::warning((__siginfo *)"setting SEEN, but already seen", v7);
          return 3;
        }
        LogicClientHome::setReplaySeen(v6, *(_DWORD *)(a1 + 28));
      }
      if ( *(_DWORD *)(a1 + 32) == -1 )
        return 0;
      if ( (unsigned int)LogicClientHome::getReplaySeen(v6) )
      {
        LogicClientHome::setReplayUnseen(v6, *(_DWORD *)(a1 + 32));
        return 0;
      }
      Debugger::warning((__siginfo *)"setting UNSEEN, but not seen", v10);
      return 4;
    }

    __int64 __fastcall LogicTvReplaySeenCommand::setReplayUnseenId(__int64 result, int a2)
    {
      *(_DWORD *)(result + 32) = a2;
      return result;
    }

    _QWORD *__fastcall LogicTvReplaySeenCommand::~LogicTvReplaySeenCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicTvReplaySeenCommand::~LogicTvReplaySeenCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicTvReplaySeenCommand
