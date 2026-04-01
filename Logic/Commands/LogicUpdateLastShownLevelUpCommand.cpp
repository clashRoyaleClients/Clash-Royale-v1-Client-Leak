class LogicUpdateLastShownLevelUpCommand
{
public:

    void __fastcall LogicUpdateLastShownLevelUpCommand::LogicUpdateLastShownLevelUpCommand(
            LogicUpdateLastShownLevelUpCommand *this)
    {
      *(_QWORD *)LogicCommand::LogicCommand((__int64)this) = &off_1004705F0;
    }

    // attributes: thunk
    __int64 __fastcall LogicUpdateLastShownLevelUpCommand::destruct(__int64 this)
    {
      return LogicCommand::destruct(this);
    }

    __int64 __fastcall LogicUpdateLastShownLevelUpCommand::getCommandType(LogicRewardRandomizer *this)
    {
      return 516;
    }

    // attributes: thunk
    __int64 __fastcall LogicUpdateLastShownLevelUpCommand::encode(__int64 this, #1317 *a2)
    {
      return LogicCommand::encode(this, a2);
    }

    // attributes: thunk
    void __fastcall LogicUpdateLastShownLevelUpCommand::decode(_DWORD *this, ByteStreamHelper *a2)
    {
      LogicCommand::decode(this, a2);
    }

    __int64 __fastcall LogicUpdateLastShownLevelUpCommand::execute(
            LogicRewardRandomizer *this,
            UnlockAccountPopup *a2,
            char a3)
    {
      CoOpenStreamEntry *Home; // x19
      tween::Bounce *PlayerAvatar; // x0
      int v7; // w21
      int ExpLevel; // w20
      int LastShownLevelUp; // w8
      __int64 result; // x0
      int v11; // w1
    
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 1;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar((__int64)a2);
      if ( !PlayerAvatar )
        return 3;
      v7 = a3 & 2;
      ExpLevel = LogicClientAvatar::getExpLevel(PlayerAvatar);
      LastShownLevelUp = LogicClientHome::getLastShownLevelUp(Home);
      result = 2 * (unsigned int)(ExpLevel <= LastShownLevelUp);
      if ( v7 && ExpLevel > LastShownLevelUp )
      {
        if ( LastShownLevelUp > 1 )
          v11 = LastShownLevelUp + 1;
        else
          v11 = 2;
        LogicClientHome::setLastShownLevelUp(Home, v11);
        return 0;
      }
      return result;
    }

    void __fastcall LogicUpdateLastShownLevelUpCommand::~LogicUpdateLastShownLevelUpCommand(LogicRewardRandomizer *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicUpdateLastShownLevelUpCommand::~LogicUpdateLastShownLevelUpCommand(LogicRewardRandomizer *this)
    {
      operator delete(this);
    }

}; // end class LogicUpdateLastShownLevelUpCommand
