class LogicSpeedUpExploringCommand
{
public:

    void __fastcall LogicSpeedUpExploringCommand::LogicSpeedUpExploringCommand(LogicSpeedUpExploringCommand *this)
    {
      LogicCommand *v1; // x0
    
      v1 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v1 = &off_10045EA20;
      *((_BYTE *)v1 + 28) = 0;
      *((_DWORD *)v1 + 8) = -1;
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::destruct(EndClientTurnMessage *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(this);
      *((_BYTE *)this + 28) = 0;
      *((_DWORD *)this + 8) = -1;
      return result;
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::getCommandType(EndClientTurnMessage *this)
    {
      return 506;
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::encode(EndClientTurnMessage *this, #1226 *a2)
    {
      LogicCommand::encode();
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 8));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 28));
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::decode(EndClientTurnMessage *this, #1225 *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      *((_DWORD *)this + 8) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 28) = result;
      return result;
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::execute(EndClientTurnMessage *this, #1028 *a2, char a3, bool a4)
    {
      #1146 *Home; // x0
      #1146 *v9; // x23
      __int64 ChestWithID; // x0
      #1057 *v11; // x21
      __int64 result; // x0
      int v13; // w26
      __int64 v14; // x22
      #962 *PlayerAvatar; // x25
      int hasEnoughDiamonds; // w8
      #916 *TreasureChestData; // x23
      __int64 v18; // x24
      __int64 v19; // x25
      void (__fastcall *v20)(__int64, _QWORD, __int64, __int64, __int64); // x26
      __int64 GlobalID; // x0
      LogicDataTables *GameListener; // x19
      void (__fastcall *v23)(LogicDataTables *, __int64); // x20
      __int64 UnlockWithDiamondsSound; // x0
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      v9 = Home;
      if ( !Home )
        return 1;
      ChestWithID = LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 8));
      v11 = (#1057 *)ChestWithID;
      if ( !ChestWithID )
        return 2;
      if ( *(_BYTE *)(ChestWithID + 40) )
        return 4;
      v13 = a3 & 2;
      v14 = (*(__int64 (__fastcall **)(EndClientTurnMessage *, #1028 *))(*(_QWORD *)this + 64LL))(this, a2);
      PlayerAvatar = (#962 *)LogicGameMode::getPlayerAvatar(a2);
      hasEnoughDiamonds = LogicClientAvatar::hasEnoughDiamonds(PlayerAvatar, v14, a4);
      if ( hasEnoughDiamonds )
        result = 0;
      else
        result = 5;
      if ( v13 && ((hasEnoughDiamonds ^ 1) & 1) == 0 )
      {
        LogicClientAvatar::useDiamonds(PlayerAvatar, v14, v9);
        TreasureChestData = (#916 *)LogicChest::getTreasureChestData(v11);
        if ( (unsigned int)LogicChest::getSource(v11) == 1 )
          v18 = 3;
        else
          v18 = 2;
        v19 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        v20 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v19 + 24LL);
        GlobalID = LogicData::getGlobalID(TreasureChestData);
        v20(v19, 0, GlobalID, v18, v14);
        LogicChest::speedUpUnlocking(v11);
        if ( *((_BYTE *)this + 28) )
          LogicChest::setClaimed(v11, a2, 1);
        GameListener = (LogicDataTables *)LogicGameMode::getGameListener(a2);
        v23 = *(void (__fastcall **)(LogicDataTables *, __int64))(*(_QWORD *)GameListener + 56LL);
        UnlockWithDiamondsSound = LogicDataTables::getUnlockWithDiamondsSound(GameListener);
        v23(GameListener, UnlockWithDiamondsSound);
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::setChestId(__int64 this, int a2)
    {
      *(_DWORD *)(this + 32) = a2;
      return this;
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::getSpeedUpCost(EndClientTurnMessage *this, const #1057 *a2)
    {
      __int64 TreasureChestData; // x19
      __int64 UnlockingSecondsLeft; // x0
    
      TreasureChestData = LogicChest::getTreasureChestData(this);
      if ( (LogicChest::isUnlocking(this) & 1) != 0 || (LogicChest::isUnlocked(this) & 1) != 0 || *((_BYTE *)this + 40) )
        UnlockingSecondsLeft = LogicChest::getUnlockingSecondsLeft(this);
      else
        UnlockingSecondsLeft = LogicTreasureChestData::getTotalTimeTakenSeconds(TreasureChestData);
      return LogicTreasureChestData::getSpeedUpCost(TreasureChestData, UnlockingSecondsLeft);
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::getCommandDiamondCost(EndClientTurnMessage *this, const #1028 *a2)
    {
      #1146 *Home; // x0
      EndClientTurnMessage *ChestWithID; // x0
      const #1057 *v5; // x1
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 1;
      ChestWithID = (EndClientTurnMessage *)LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 8));
      if ( ChestWithID && !*((_BYTE *)ChestWithID + 40) )
        return LogicSpeedUpExploringCommand::getSpeedUpCost(ChestWithID, v5);
      else
        return 0;
    }

    __int64 __fastcall LogicSpeedUpExploringCommand::setClaimImmediately(__int64 this, char a2)
    {
      *(_BYTE *)(this + 28) = a2;
      return this;
    }

    void __fastcall LogicSpeedUpExploringCommand::~LogicSpeedUpExploringCommand(EndClientTurnMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicSpeedUpExploringCommand::~LogicSpeedUpExploringCommand(EndClientTurnMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicSpeedUpExploringCommand
