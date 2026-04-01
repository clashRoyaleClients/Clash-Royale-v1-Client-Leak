class LogicFreeWorkerCommand
{
public:

    void __fastcall LogicFreeWorkerCommand::LogicFreeWorkerCommand(LogicFreeWorkerCommand *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)LogicCommand::LogicCommand((__int64)this);
      *v1 = &off_10046D2B8;
      v1[4] = 0;
    }

    __int64 __fastcall LogicFreeWorkerCommand::destruct(LogicTvReplaySeenCommand *this)
    {
      __int64 result; // x0
    
      LogicCommand::destruct((__int64)this);
      result = *((_QWORD *)this + 4);
      if ( result )
      {
        (**(void (__fastcall ***)(__int64))result)(result);
        result = *((_QWORD *)this + 4);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        *((_QWORD *)this + 4) = 0;
      }
      *((_QWORD *)this + 4) = 0;
      return result;
    }

    __int64 __fastcall LogicFreeWorkerCommand::getCommandType(LogicTvReplaySeenCommand *this)
    {
      return 513;
    }

    __int64 __fastcall LogicFreeWorkerCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      return LogicCommandManager::encodeCommand((__int64)a2, *(_QWORD *)(a1 + 32));
    }

    _BYTE *__fastcall LogicFreeWorkerCommand::decode(__int64 a1, ByteStreamHelper *a2)
    {
      _BYTE *result; // x0
    
      LogicCommand::decode((_DWORD *)a1, a2);
      result = LogicCommandManager::decodeCommand(a2, 0, 0);
      *(_QWORD *)(a1 + 32) = result;
      if ( result )
      {
        result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)result + 32LL))(result);
        if ( (_DWORD)result != 502 && (_DWORD)result != 511 )
        {
          result = *(_BYTE **)(a1 + 32);
          if ( result )
          {
            (**(void (__fastcall ***)(_BYTE *))result)(result);
            result = *(_BYTE **)(a1 + 32);
            if ( result )
              result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)result + 16LL))(result);
            *(_QWORD *)(a1 + 32) = 0;
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicFreeWorkerCommand::execute(LogicTvReplaySeenCommand *this, UnlockAccountPopup *a2)
    {
      return 1;
    }

    __int64 __fastcall LogicFreeWorkerCommand::getCommandDiamondCost(__int64 a1, UnlockAccountPopup *a2)
    {
      __int64 Home; // x0
      __int64 FreeWorkerTaskCommand; // x0
      __int64 v5; // x19
      __int64 v6; // x20
    
      Home = LogicGameMode::getHome(a2);
      FreeWorkerTaskCommand = LogicClientHome::createFreeWorkerTaskCommand(Home);
      v5 = FreeWorkerTaskCommand;
      if ( !FreeWorkerTaskCommand )
        return 0;
      v6 = (*(__int64 (__fastcall **)(__int64, UnlockAccountPopup *))(*(_QWORD *)FreeWorkerTaskCommand + 64LL))(
             FreeWorkerTaskCommand,
             a2);
      (**(void (__fastcall ***)(__int64))v5)(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      return v6;
    }

    void __fastcall LogicFreeWorkerCommand::~LogicFreeWorkerCommand(LogicTvReplaySeenCommand *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicFreeWorkerCommand::~LogicFreeWorkerCommand(LogicTvReplaySeenCommand *this)
    {
      operator delete(this);
    }

}; // end class LogicFreeWorkerCommand
