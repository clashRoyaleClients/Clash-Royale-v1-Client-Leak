class LogicCollectFreeChestCommand
{
public:

    void __fastcall LogicCollectFreeChestCommand::LogicCollectFreeChestCommand(LogicCollectFreeChestCommand *this)
    {
      *(_QWORD *)LogicCommand::LogicCommand((__int64)this) = &off_100468BD0;
    }

    // attributes: thunk
    __int64 __fastcall LogicCollectFreeChestCommand::destruct(__int64 this)
    {
      return LogicCommand::destruct(this);
    }

    __int64 __fastcall LogicCollectFreeChestCommand::getCommandType(tween::Cubic *this)
    {
      return 518;
    }

    // attributes: thunk
    __int64 __fastcall LogicCollectFreeChestCommand::encode(__int64 this, #1317 *a2)
    {
      return LogicCommand::encode(this, a2);
    }

    // attributes: thunk
    void __fastcall LogicCollectFreeChestCommand::decode(_DWORD *this, ByteStreamHelper *a2)
    {
      LogicCommand::decode(this, a2);
    }

    __int64 __fastcall LogicCollectFreeChestCommand::execute(tween::Cubic *this, UnlockAccountPopup *a2, char a3)
    {
      #1146 *Home; // x0
      #1146 *v6; // x22
      __int64 FreeChest; // x0
      LogicChest *v8; // x20
      __int64 result; // x0
      tween::Bounce *PlayerAvatar; // x0
      LogicDataTables *Arena; // x23
      HomeScreen *Globals; // x0
      int v13; // w21
      int isClaimingReward; // w0
      char v15; // w8
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      v6 = Home;
      if ( !Home )
        return 1;
      if ( !(unsigned int)LogicClientHome::isFreeChestAvailable(Home) )
        return 3;
      FreeChest = LogicClientHome::getFreeChest(v6);
      v8 = (LogicChest *)FreeChest;
      if ( !FreeChest )
        return 4;
      if ( *(_BYTE *)(FreeChest + 40) )
        return 5;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      Arena = (LogicDataTables *)LogicClientAvatar::getArena(PlayerAvatar);
      Globals = (HomeScreen *)LogicDataTables::getGlobals(Arena);
      if ( Arena == (LogicDataTables *)LogicGlobals::getStartingArena(Globals) )
        return 6;
      v13 = a3 & 2;
      isClaimingReward = LogicClientHome::isClaimingReward(v6);
      v15 = isClaimingReward;
      if ( isClaimingReward )
        result = 7;
      else
        result = 0;
      if ( v13 )
      {
        if ( (v15 & 1) == 0 )
        {
          LogicChest::setClaimed(v8, a2, 2);
          return 0;
        }
      }
      return result;
    }

    void __fastcall LogicCollectFreeChestCommand::~LogicCollectFreeChestCommand(tween::Cubic *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicCollectFreeChestCommand::~LogicCollectFreeChestCommand(tween::Cubic *this)
    {
      operator delete(this);
    }

}; // end class LogicCollectFreeChestCommand
