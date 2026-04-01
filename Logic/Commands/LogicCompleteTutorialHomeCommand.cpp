class LogicCompleteTutorialHomeCommand
{
public:

    void __fastcall LogicCompleteTutorialHomeCommand::LogicCompleteTutorialHomeCommand(
            LogicCompleteTutorialHomeCommand *this)
    {
      __int64 v1; // x0
    
      v1 = LogicCommand::LogicCommand((__int64)this);
      *(_QWORD *)v1 = &off_100472678;
      *(_DWORD *)(v1 + 28) = 0;
    }

    __int64 __fastcall LogicCompleteTutorialHomeCommand::destruct(LogicNewsData *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_DWORD *)this + 7) = 0;
      return result;
    }

    __int64 __fastcall LogicCompleteTutorialHomeCommand::getCommandType(LogicNewsData *this)
    {
      return 509;
    }

    __int64 __fastcall LogicCompleteTutorialHomeCommand::encode(LogicNewsData *this, ExpBar *a2)
    {
      ByteStreamHelper::writeGlobalID((__int64)a2, (SectorCommandMessage *)*((unsigned int *)this + 7));
      return LogicCommand::encode((__int64)this, a2);
    }

    void __fastcall LogicCompleteTutorialHomeCommand::decode(LogicNewsData *this, ChallengePopup *a2)
    {
      *((_DWORD *)this + 7) = ByteStreamHelper::readGlobalID((__int64)a2);
      LogicCommand::decode(this, a2);
    }

    __int64 __fastcall LogicCompleteTutorialHomeCommand::execute(
            LogicNewsData *this,
            UnlockAccountPopup *a2,
            UnlockAccountPopup *a3)
    {
      int v6; // w4
    
      if ( LogicGameMode::getHome(a2) )
        return LogicCompleteTutorialHomeCommand::executeCommand(a2, a3, 0, *((_DWORD *)this + 7), v6);
      else
        return 10;
    }

    __int64 __fastcall LogicCompleteTutorialHomeCommand::executeCommand(
            LogicNewsData *this,
            UnlockAccountPopup *a2,
            int a3,
            SectorCommandMessage *a4)
    {
      char v5; // w20
      __int64 *TutorialManager; // x19
      int v8; // w1
      __int64 v9; // x1
      const char *v10; // x2
      ResetAccountMessage **DataById; // x21
      __int64 v12; // x23
      bool isHomeMode; // w0
      __int64 result; // x0
      __int64 CurrentTutorial; // x22
      __int64 v16; // x1
      const char *v17; // x2
      _BOOL4 v18; // w8
    
      v5 = (char)a2;
      TutorialManager = (__int64 *)LogicGameMode::getTutorialManager((__int64)this);
      if ( *((_QWORD *)this + 21) )
        v8 = 48;
      else
        v8 = 45;
      DataById = (ResetAccountMessage **)LogicDataTables::getDataById(a4, v8);
      if ( !DataById )
        return 2;
      if ( !LogicTutorialManager::getPlayerAvatar(TutorialManager, v9, v10) )
        return 4;
      v12 = *((_QWORD *)this + 21);
      isHomeMode = LogicTutorialData::isHomeMode(DataById);
      if ( v12 )
      {
        if ( isHomeMode )
          return 6;
        if ( !LogicBattle::isNPCBattle(*((UnbindFacebookAccountMessage **)this + 21)) )
          return 7;
      }
      else if ( !isHomeMode )
      {
        return 5;
      }
      if ( (unsigned int)LogicTutorialData::getFinishRequirement((LogicMusicData *)DataById) == 6 )
        return 8;
      CurrentTutorial = LogicTutorialManager::getCurrentTutorial((DonatorEntry *)TutorialManager);
      if ( !CurrentTutorial || !LogicTutorialManager::requiresInputFromPlayer((DonatorEntry *)TutorialManager) )
        return 0;
      v18 = LogicData::equals(CurrentTutorial, (__int64)DataById);
      result = 0;
      if ( (v5 & 2) != 0 && v18 )
      {
        LogicTutorialManager::setCurrentTutorialCompleted((__int64)TutorialManager, v16, v17);
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicCompleteTutorialHomeCommand::setTutorialData(LogicNewsData *this, const LogicMusicData *a2)
    {
      __int64 result; // x0
    
      result = LogicData::getGlobalID(a2);
      *((_DWORD *)this + 7) = result;
      return result;
    }

    void __fastcall LogicCompleteTutorialHomeCommand::~LogicCompleteTutorialHomeCommand(LogicNewsData *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicCompleteTutorialHomeCommand::~LogicCompleteTutorialHomeCommand(LogicNewsData *this)
    {
      operator delete(this);
    }

}; // end class LogicCompleteTutorialHomeCommand
