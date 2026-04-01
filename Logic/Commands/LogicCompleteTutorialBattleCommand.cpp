class LogicCompleteTutorialBattleCommand
{
public:

    void __fastcall LogicCompleteTutorialBattleCommand::LogicCompleteTutorialBattleCommand(
            LogicCompleteTutorialBattleCommand *this)
    {
      __int64 v1; // x0
    
      v1 = LogicCommand::LogicCommand((__int64)this);
      *(_QWORD *)v1 = &off_100471850;
      *(_DWORD *)(v1 + 28) = 0;
    }

    __int64 __fastcall LogicCompleteTutorialBattleCommand::destruct(NameHandler *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_DWORD *)this + 7) = 0;
      return result;
    }

    __int64 __fastcall LogicCompleteTutorialBattleCommand::getCommandType(NameHandler *this)
    {
      return 2;
    }

    __int64 __fastcall LogicCompleteTutorialBattleCommand::encode(__int64 a1, #1317 *a2)
    {
      ByteStreamHelper::writeGlobalID((__int64)a2, (SectorCommandMessage *)*(unsigned int *)(a1 + 28));
      return LogicCommand::encode(a1, a2);
    }

    void __fastcall LogicCompleteTutorialBattleCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      a1[7] = ByteStreamHelper::readGlobalID((__int64)a2);
      LogicCommand::decode(a1, a2);
    }

    __int64 __fastcall LogicCompleteTutorialBattleCommand::execute(
            __int64 a1,
            UnbindFacebookAccountMessage **a2,
            UnlockAccountPopup *a3,
            int a4)
    {
      UnbindFacebookAccountMessage *v8; // x23
      DonatorEntry *TutorialManager; // x0
      LogicMusicData *CurrentTutorial; // x24
      __int64 LocationData; // x25
      __int64 v12; // x0
      int v13; // w4
    
      v8 = a2[21];
      if ( !v8 )
        return 10;
      if ( !LogicBattle::isNPCBattle(a2[21]) )
        return 11;
      TutorialManager = (DonatorEntry *)LogicGameMode::getTutorialManager((__int64)a2);
      CurrentTutorial = (LogicMusicData *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
      if ( !CurrentTutorial )
        return 12;
      LocationData = LogicBattle::getLocationData(v8);
      v12 = LogicTutorialData::getLocationData(CurrentTutorial);
      if ( !LogicData::equals(LocationData, v12) )
        return 13;
      if ( LogicBattle::isTutorialCompleted(v8, CurrentTutorial) )
        return 14;
      return LogicCompleteTutorialHomeCommand::executeCommand((LogicNewsData *)a2, a3, a4, *(_DWORD *)(a1 + 28), v13);
    }

    __int64 __fastcall LogicCompleteTutorialBattleCommand::setTutorialData(NameHandler *this, const LogicMusicData *a2)
    {
      __int64 result; // x0
    
      result = LogicData::getGlobalID(a2);
      *((_DWORD *)this + 7) = result;
      return result;
    }

    void __fastcall LogicCompleteTutorialBattleCommand::~LogicCompleteTutorialBattleCommand(NameHandler *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicCompleteTutorialBattleCommand::~LogicCompleteTutorialBattleCommand(NameHandler *this)
    {
      operator delete(this);
    }

}; // end class LogicCompleteTutorialBattleCommand
