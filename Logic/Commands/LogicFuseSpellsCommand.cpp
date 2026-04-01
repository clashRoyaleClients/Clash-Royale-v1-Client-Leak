class LogicFuseSpellsCommand
{
public:

    void __fastcall LogicFuseSpellsCommand::LogicFuseSpellsCommand(LogicFuseSpellsCommand *this)
    {
      LogicCommand *v1; // x0
    
      v1 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v1 = &off_10045EE90;
      *((_QWORD *)v1 + 4) = 0;
    }

    __int64 __fastcall LogicFuseSpellsCommand::destruct(ChangeAvatarNameMessage *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(this);
      *((_QWORD *)this + 4) = 0;
      return result;
    }

    __int64 __fastcall LogicFuseSpellsCommand::getCommandType(ChangeAvatarNameMessage *this)
    {
      return 504;
    }

    __int64 __fastcall LogicFuseSpellsCommand::encode(#916 **this, #1226 *a2)
    {
      int v2; // w19
    
      v2 = (int)a2;
      LogicCommand::encode();
      return ByteStreamHelper::writeDataReference(v2, *(this + 4));
    }

    __int64 __fastcall LogicFuseSpellsCommand::decode(ChangeAvatarNameMessage *this, #1225 *a2)
    {
      int v4; // w2
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      result = ByteStreamHelper::readDataReference(a2, (ByteStream *)7, v4);
      *((_QWORD *)this + 4) = result;
      return result;
    }

    __int64 __fastcall LogicFuseSpellsCommand::execute(ChangeAvatarNameMessage *this, #1028 *a2, char a3, bool a4)
    {
      __int64 Home; // x0
      #1146 *v9; // x22
      __int64 v10; // x1
      unsigned int *SpellByData; // x0
      unsigned int *v12; // x20
      int v13; // w21
      #895 *SpellData; // x0
      #962 *PlayerAvatar; // x21
      #1147 *TutorialManager; // x24
      #943 *CurrentTutorial; // x0
      #943 *v18; // x27
      int v19; // w28
      #1004 *v20; // x23
      const #1355 *GoldData; // x0
      int hasEnoughResources; // w8
      __int64 result; // x0
      int UpgradeExp; // w26
      int FreeGold; // w25
      #1004 *Level; // x0
      const #916 *v27; // x0
      __int64 v28; // x22
      __int64 v29; // x24
      void (__fastcall *v30)(__int64, __int64, __int64, _QWORD, #1004 *, __int64); // x25
      #916 *v31; // x0
      __int64 GlobalID; // x0
      __int64 v33; // x21
      void (__fastcall *v34)(__int64, __int64, _QWORD); // x22
      #916 *v35; // x0
      __int64 v36; // x0
      __int64 GameListener; // x0
    
      Home = LogicGameMode::getHome(a2);
      v9 = (#1146 *)Home;
      if ( !Home )
        return 1;
      v10 = *((_QWORD *)this + 4);
      if ( !v10 )
        return 2;
      SpellByData = (unsigned int *)LogicClientHome::getSpellByData(Home, v10);
      v12 = SpellByData;
      if ( !SpellByData )
        return 3;
      v13 = SpellByData[2];
      SpellData = (#895 *)LogicSpell::getSpellData((TextField *)SpellByData);
      if ( v13 >= (int)LogicSpellData::getMaxLevelIndex(SpellData) )
        return 4;
      if ( !(unsigned int)LogicSpell::canUpgrade((TextField *)v12) )
        return 5;
      PlayerAvatar = (#962 *)LogicGameMode::getPlayerAvatar(a2);
      TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(a2);
      CurrentTutorial = (#943 *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
      v18 = CurrentTutorial;
      if ( CurrentTutorial && (unsigned int)LogicTutorialData::getFinishRequirement(CurrentTutorial) != 106 )
        return 15;
      v19 = a3 & 2;
      v20 = (#1004 *)(*(__int64 (__fastcall **)(ChangeAvatarNameMessage *, #1028 *))(*(_QWORD *)this + 56LL))(this, a2);
      GoldData = (const #1355 *)LogicDataTables::getGoldData(v20);
      hasEnoughResources = LogicClientAvatar::hasEnoughResources(PlayerAvatar, GoldData, (int)v20, a4, this, 0);
      if ( hasEnoughResources )
        result = 0;
      else
        result = 16;
      if ( v19 && ((hasEnoughResources ^ 1) & 1) == 0 )
      {
        UpgradeExp = LogicSpell::getUpgradeExp((TextField *)v12);
        FreeGold = LogicClientAvatar::getFreeGold(PlayerAvatar);
        Level = (#1004 *)LogicSpell::upgradeToNextLevel((TextField *)v12);
        v27 = (const #916 *)LogicDataTables::getGoldData(Level);
        LogicClientAvatar::commodityCountChangeHelper(PlayerAvatar, 0, v27, -(int)v20, 3);
        if ( v18 && (unsigned int)LogicTutorialData::getFinishRequirement(v18) == 106 )
          LogicTutorialManager::setCurrentTutorialCompleted(TutorialManager);
        LogicClientAvatar::xpGainHelper(PlayerAvatar, UpgradeExp, v9);
        if ( LogicClientAvatar::getChangeListener(PlayerAvatar) )
        {
          v28 = FreeGold - (unsigned int)LogicClientAvatar::getFreeGold(PlayerAvatar);
          v29 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          v30 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, #1004 *, __int64))(*(_QWORD *)v29 + 32LL);
          v31 = (#916 *)LogicSpell::getSpellData((TextField *)v12);
          GlobalID = LogicData::getGlobalID(v31);
          v30(v29, 3, GlobalID, 0, v20, v28);
          v33 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          v34 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v33 + 56LL);
          v35 = (#916 *)LogicSpell::getSpellData((TextField *)v12);
          v36 = LogicData::getGlobalID(v35);
          v34(v33, v36, v12[2]);
        }
        GameListener = LogicGameMode::getGameListener(a2);
        (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)GameListener + 184LL))(GameListener, v12);
        return 0;
      }
      return result;
    }

    __int64 LogicFuseSpellsCommand::getCommandGoldCost()
    {
      __int64 RemainingSpell; // x0
    
      RemainingSpell = LogicFuseSpellsCommand::getRemainingSpell();
      return LogicFuseSpellsCommand::getFuseCost(RemainingSpell);
    }

    __int64 __fastcall LogicFuseSpellsCommand::getRemainingSpell(__int64 a1, #1028 *a2)
    {
      __int64 Home; // x0
    
      Home = LogicGameMode::getHome(a2);
      if ( Home )
        return LogicClientHome::getSpellByData(Home, *(_QWORD *)(a1 + 32));
      else
        return 0;
    }

    __int64 __fastcall LogicFuseSpellsCommand::getFuseCost(unsigned int *a1)
    {
      #895 *SpellData; // x0
      __int64 Rarity; // x0
    
      if ( !a1 )
        return 0;
      SpellData = (#895 *)LogicSpell::getSpellData((TextField *)a1);
      Rarity = LogicSpellData::getRarity(SpellData);
      return LogicRarityData::getUpgradeCost(Rarity, a1[2]);
    }

    __int64 __fastcall LogicFuseSpellsCommand::setSpell(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 32) = a2;
      return result;
    }

    void __fastcall LogicFuseSpellsCommand::~LogicFuseSpellsCommand(ChangeAvatarNameMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicFuseSpellsCommand::~LogicFuseSpellsCommand(ChangeAvatarNameMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicFuseSpellsCommand
