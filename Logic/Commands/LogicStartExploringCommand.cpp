class LogicStartExploringCommand
{
public:

    __int64 __fastcall LogicStartExploringCommand::LogicStartExploringCommand(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::LogicCommand(a1);
      *(_QWORD *)result = &off_1004702E0;
      *(_DWORD *)(result + 28) = -1;
      return result;
    }

    __int64 __fastcall LogicStartExploringCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(a1);
      *(_DWORD *)(a1 + 28) = -1;
      return result;
    }

    __int64 LogicStartExploringCommand::getCommandType()
    {
      return 502;
    }

    __int64 __fastcall LogicStartExploringCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 28));
    }

    __int64 __fastcall LogicStartExploringCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(a1, a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      a1[7] = result;
      return result;
    }

    __int64 __fastcall LogicStartExploringCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3, int a4)
    {
      CoOpenStreamEntry *Home; // x0
      CoOpenStreamEntry *v9; // x20
      int ChestIndex; // w21
      LogicSpawnPointData *Chest; // x0
      __int64 v12; // x21
      const char *CurrentTimestamp; // x0
      __int64 v14; // x22
      void (__fastcall *v15)(__int64, __int64); // x23
      __int64 ChestUnlockStartSound; // x0
      __int64 v17; // x0
      tween::Bounce *PlayerAvatar; // x19
      __int64 v19; // x19
      void (__fastcall *v20)(__int64, __int64, __int64); // x22
      __int64 ChestCnt; // x0
      __int64 GameListener; // x20
      void (__fastcall *v24)(__int64, __int64); // x21
      __int64 NoWorkersSound; // x0
      __int64 v26; // x0
    
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
      v9 = Home;
      if ( !Home )
        return 1;
      ChestIndex = LogicClientHome::getChestIndex(Home, *(_DWORD *)(a1 + 28));
      if ( ChestIndex == -1 )
        return 2;
      if ( ChestIndex >= (int)LogicClientHome::getMaxChestCount(v9) )
        return 3;
      Chest = (LogicSpawnPointData *)LogicClientHome::getChest(v9, ChestIndex);
      v12 = (__int64)Chest;
      if ( !Chest )
        return 4;
      if ( !LogicChest::canStartUnlocking(Chest) )
        return 5;
      if ( (int)LogicClientHome::getFreeWorkers(v9) <= 0 )
      {
        if ( a4 )
        {
          GameListener = LogicGameMode::getGameListener(a2);
          v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)GameListener + 56LL);
          NoWorkersSound = LogicDataTables::getNoWorkersSound();
          v24(GameListener, NoWorkersSound);
          v26 = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 224LL))(v26, a1);
        }
        return 4;
      }
      if ( (a3 & 2) != 0 )
      {
        CurrentTimestamp = (const char *)LogicGameMode::getCurrentTimestamp((__int64)a2);
        LogicChest::startUnlocking(v12, CurrentTimestamp);
        v14 = LogicGameMode::getGameListener(a2);
        v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 56LL);
        ChestUnlockStartSound = LogicDataTables::getChestUnlockStartSound();
        v15(v14, ChestUnlockStartSound);
        v17 = LogicGameMode::getGameListener(a2);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
        PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar((__int64)a2);
        if ( LogicClientAvatar::getChangeListener(PlayerAvatar) )
        {
          v19 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          v20 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 224LL);
          ChestCnt = LogicClientHome::getChestCnt(v9);
          v20(v19, v12, ChestCnt);
        }
      }
      return 0;
    }

    __int64 __fastcall LogicStartExploringCommand::setChestId(__int64 this, int a2)
    {
      *(_DWORD *)(this + 28) = a2;
      return this;
    }

    void __fastcall LogicStartExploringCommand::~LogicStartExploringCommand(GameCenter *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicStartExploringCommand::~LogicStartExploringCommand(GameCenter *this)
    {
      operator delete(this);
    }

}; // end class LogicStartExploringCommand
