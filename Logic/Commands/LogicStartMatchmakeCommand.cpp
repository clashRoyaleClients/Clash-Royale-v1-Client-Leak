class LogicStartMatchmakeCommand
{
public:

    __int64 __fastcall LogicStartMatchmakeCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(a1);
      *(_DWORD *)(a1 + 32) = -1;
      *(_BYTE *)(a1 + 28) = 0;
      return result;
    }

    __int64 __fastcall LogicStartMatchmakeCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      tween::Bounce *PlayerAvatar; // x0
      __int64 Arena; // x0
      __int64 result; // x0
      int v9; // w21
      CoOpenStreamEntry *Home; // x0
      int isClaimingReward; // w0
      char v12; // w8
      __int64 GameListener; // x0
      tween::Bounce *v14; // x0
      __int64 v15; // x0
    
      if ( !LogicGameMode::getHome(a2) )
        return 1;
      if ( !LogicGameMode::getPlayerAvatar(a2) )
        return 2;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      if ( (LogicArenaData::isTrainingCamp(Arena) & 1) != 0 )
        return 3;
      v9 = a3 & 2;
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
      isClaimingReward = LogicClientHome::isClaimingReward(Home);
      v12 = isClaimingReward;
      if ( isClaimingReward )
        result = 4;
      else
        result = 0;
      if ( v9 && (v12 & 1) == 0 )
      {
        if ( LogicGameMode::getGameListener(a2) )
        {
          GameListener = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 264LL))(GameListener);
        }
        v14 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
        v15 = LogicClientAvatar::getChangeListener(v14);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 264LL))(v15, *(unsigned __int8 *)(a1 + 28));
        return 0;
      }
      return result;
    }

    __int64 LogicStartMatchmakeCommand::getCommandType()
    {
      return 537;
    }

    __int64 __fastcall LogicStartMatchmakeCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 32));
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 28));
    }

    __int64 __fastcall LogicStartMatchmakeCommand::decode(__int64 a1, ByteStreamHelper *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode((_DWORD *)a1, a2);
      *(_DWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 28) = result;
      return result;
    }

    void __fastcall LogicStartMatchmakeCommand::~LogicStartMatchmakeCommand(HashTagCodeGenerator *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicStartMatchmakeCommand::~LogicStartMatchmakeCommand(HashTagCodeGenerator *this)
    {
      operator delete(this);
    }

}; // end class LogicStartMatchmakeCommand
