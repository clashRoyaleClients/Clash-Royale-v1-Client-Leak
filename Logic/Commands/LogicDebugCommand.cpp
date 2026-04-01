class LogicDebugCommand
{
public:

    void __fastcall LogicDebugCommand::LogicDebugCommand(LogicDebugCommand *this)
    {
      LogicCommand::LogicCommand(this);
      *(_QWORD *)this = &off_10045E008;
      String::String((String *)((char *)this + 40));
      String::operator=((char *)this + 40, "");
      *(_QWORD *)((char *)this + 28) = 0xFFFFFFFFLL;
    }

    // attributes: thunk
    void __fastcall LogicDebugCommand::LogicDebugCommand(LogicDebugCommand *this)
    {
      __ZN17LogicDebugCommandC2Ev(this);
    }

    __int64 __fastcall LogicDebugCommand::destruct(OwnHomeDataMessage *this)
    {
      __int64 result; // x0
    
      LogicCommand::destruct(this);
      result = String::operator=((char *)this + 40, "");
      *(_QWORD *)((char *)this + 28) = 0xFFFFFFFFLL;
      return result;
    }

    __int64 __fastcall LogicDebugCommand::getCommandType(OwnHomeDataMessage *this)
    {
      return 1000;
    }

    __int64 __fastcall LogicDebugCommand::encode(OwnHomeDataMessage *this, #1226 *a2)
    {
      LogicCommand::encode();
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 8));
      return (*(__int64 (__fastcall **)(#1226 *, char *))(*(_QWORD *)a2 + 32LL))(a2, (char *)this + 40);
    }

    void __fastcall LogicDebugCommand::decode(OwnHomeDataMessage *this, #1225 *a2)
    {
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      LogicCommand::decode(this, a2);
      *((_DWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 8) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      (*(void (__fastcall **)(String *__return_ptr, #1225 *, __int64))(*(_QWORD *)a2 + 112LL))(&v4, a2, 900000);
      String::operator=((String *)((char *)this + 40));
      String::~String(&v4);
    }

    __int64 __fastcall LogicDebugCommand::execute(OwnHomeDataMessage *this, #1028 *a2, char a3)
    {
      int isProd; // w0
      char v7; // w8
      __int64 result; // x0
      const char *v9; // x1
      LogicClientHome *Home; // x20
      UnbindFacebookAccountMessage *v11; // x22
      int v12; // w2
      bool v13; // w3
      int v14; // w28
      __int64 SpellCollection; // x21
      AcceptChallengeMessage *SelectedDeck; // x22
      int v17; // w1
      __int64 Table; // x23
      int Time; // w24
      __int64 v20; // x25
      #895 *v21; // x27
      __int64 SpellByData; // x0
      #795 *v23; // x26
      int v24; // w1
      __int64 v25; // x26
      int SpellIdx; // w27
      __int64 Listener; // x0
      __int64 GameListener; // x0
      void (*v29)(void); // x8
      #962 *PlayerAvatar; // x0
      #962 *v31; // x19
      #1004 *ExpLevel; // x0
      int v33; // w21
      int v34; // w20
      #962 *v35; // x21
      const #1143 *Arena; // x0
      const #941 *NextWinnerChest; // x22
      #1057 *v38; // x21
      __int64 ExecutorAccountId; // x19
      int HigherInt; // w20
      int LowerInt; // w0
      #1094 *LeaderCharacter; // x0
      LogicSummoner *v43; // x19
      __int64 v44; // x19
      int v45; // w20
      int v46; // w0
      GameMode *v47; // x0
      #1060 *v48; // x19
      __int64 OpponentOwnerCharacter; // x0
      LogicArenaData *v50; // x0
      __int64 v51; // x19
      int v52; // w20
      int v53; // w0
      GameMode *v54; // x0
      GameMode *v55; // x19
      #1060 *v56; // x20
      LogicArenaData *v57; // x19
      int Hitpoints; // w21
      #1025 *CharacterData; // x0
      const #775 *DamageType; // x2
      LogicArenaData *v61; // x0
      int v62; // w1
      GameMode *v63; // x3
      __int64 v64; // x19
      int v65; // w20
      int v66; // w0
      LogicSummoner *v67; // x0
      __int64 v68; // x19
      int v69; // w20
      int v70; // w0
      GameMode *v71; // x0
      #1060 *v72; // x20
      LogicArenaData *v73; // x21
      int v74; // w22
      #1025 *v75; // x0
      const #775 *v76; // x0
      LogicArenaData *v77; // x20
      int v78; // w21
      #1025 *v79; // x0
      AcceptChallengeMessage *v80; // x20
      int i; // w21
      __int64 Spell; // x0
      __int64 v83; // x22
      int v84; // w23
      #895 *SpellData; // x0
      int v86; // w8
      __int64 v87; // x0
      #962 *v88; // x19
      const char *v89; // x2
      int ExpPoints; // w21
      __int64 v91; // x0
      #1364 *v92; // x0
      int ExpToNextLevel; // w0
      __int64 TutorialManager; // x0
      LogicTutorialManager *v95; // x0
      #962 *v96; // x0
      __int64 v97; // x1
      __int64 v98; // x0
      __int64 v99; // x19
      int v100; // w24
      LogicDataTables *v101; // x20
      int v102; // w22
      __int64 v103; // x23
      void (__fastcall *v104)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // x25
      int NpcWinCount; // w0
      __int64 v106; // x21
      __int64 v107; // x0
      __int64 v108; // x20
      void (__fastcall *v109)(__int64, __int64); // x21
      __int64 v110; // x0
      #962 *v111; // x0
      #962 *v112; // x19
      __int64 Diamonds; // x21
      __int64 v114; // x0
      #1004 *v115; // x0
      #962 *v116; // x19
      #916 *v117; // x0
      #1004 *ResourceCount; // x0
      int v119; // w20
      const #916 *GoldData; // x2
      int v121; // w3
      #962 *v122; // x0
      #962 *v123; // x0
      __int64 v124; // x0
      const #941 *MagicChest; // x22
      char v126; // [xsp+10h] [xbp-70h]
      int v127; // [xsp+14h] [xbp-6Ch]
      __siginfo v128; // [xsp+18h] [xbp-68h] BYREF
    
      if ( *((_DWORD *)this + 7) > 0x28u )
        return 1;
      isProd = LogicVersion::isProd(this);
      v7 = isProd;
      if ( isProd )
        result = 2;
      else
        result = 0;
      if ( (a3 & 2) != 0 && (v7 & 1) == 0 )
      {
        Home = (LogicClientHome *)LogicGameMode::getHome(a2);
        v11 = (UnbindFacebookAccountMessage *)*((_QWORD *)a2 + 21);
        if ( v11 && (LogicBattle::isFinished(*((UnbindFacebookAccountMessage **)a2 + 21)) & 1) != 0 )
          return 1;
        String::format((String *)"Execute cheat %d", v9, *((unsigned int *)this + 7));
        Debugger::hudPrint(&v128, (const String *)0xFFFFFFFFLL, v12);
        String::~String((String *)&v128);
        result = 0;
        v14 = *((_DWORD *)this + 7);
        switch ( v14 )
        {
          case 0:
            if ( Home )
              LogicClientHome::fastForward(Home, *((_DWORD *)this + 8), -1);
            goto LABEL_111;
          case 1:
            PlayerAvatar = (#962 *)LogicGameMode::getPlayerAvatar(a2);
            v31 = PlayerAvatar;
            if ( !PlayerAvatar )
              goto LABEL_111;
            ExpLevel = (#1004 *)LogicClientAvatar::getExpLevel(PlayerAvatar);
            if ( (int)ExpLevel < 1 )
            {
              v34 = 1;
            }
            else
            {
              v33 = 0;
              v34 = 1;
              while ( 1 )
              {
                v34 *= 10;
                if ( v34 > 99999 )
                  break;
                ++v33;
                ExpLevel = (#1004 *)LogicClientAvatar::getExpLevel(v31);
                if ( v33 >= (int)ExpLevel )
                  goto LABEL_109;
              }
              v34 = 100000;
            }
    LABEL_109:
            GoldData = (const #916 *)LogicDataTables::getGoldData(ExpLevel);
            v122 = v31;
            v121 = v34;
    LABEL_110:
            LogicClientAvatar::commodityCountChangeHelper(v122, 0, GoldData, v121, 11);
    LABEL_111:
            result = 0;
            break;
          case 3:
            if ( !Home )
              goto LABEL_111;
            v35 = (#962 *)LogicGameMode::getPlayerAvatar(a2);
            Arena = (const #1143 *)LogicClientAvatar::getArena(v35);
            NextWinnerChest = (const #941 *)LogicClientAvatar::getNextWinnerChest(v35, Arena);
            if ( !NextWinnerChest )
              goto LABEL_111;
            LogicClientAvatar::updateWinnerChestIndex(v35);
            v38 = (#1057 *)operator new(48);
            LogicChest::LogicChest(v38, NextWinnerChest);
            goto LABEL_104;
          case 4:
          case 39:
            if ( !Home )
              goto LABEL_111;
            SpellCollection = LogicClientHome::getSpellCollection(Home);
            SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
            Table = LogicDataTables::getTable((LogicDataTables *)7, v17);
            Time = LogicSpellCollection::getLatestCreateTime((#927 *)SpellCollection);
            if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) < 1 )
              goto LABEL_111;
            v126 = 0;
            v127 = 0;
            v20 = 0;
            do
            {
              v21 = (#895 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v20);
              if ( (LogicSpellData::isNotInUse(v21) & 1) == 0 )
              {
                SpellByData = LogicClientHome::getSpellByData(Home, v21);
                v23 = (#795 *)SpellByData;
                if ( SpellByData )
                {
                  if ( v14 == 39 )
                    v24 = LogicSpell::getMaxMaterialCount((#795 *)SpellByData) - *(_DWORD *)(SpellByData + 16);
                  else
                    v24 = 1;
                  LogicSpell::addMaterial(v23, v24);
                  if ( LogicSpell::getListener(v23) )
                  {
                    Listener = LogicSpell::getListener(v23);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)Listener + 64LL))(Listener);
                  }
                }
                else
                {
                  v25 = operator new(48);
                  LogicSpell::LogicSpell((#795 *)v25);
                  LogicSpell::setSpellData(v25, v21);
                  *(_DWORD *)(v25 + 8) = 0;
                  *(_DWORD *)(v25 + 12) = Time;
                  LogicSpell::setShowNewIcon((#795 *)v25, 1);
                  ++Time;
                  LogicSpellCollection::addSpell((#927 *)SpellCollection, (#795 *)v25);
                  SpellIdx = LogicSpellDeck::getSpellIdx(SelectedDeck, 0);
                  if ( SpellIdx == -1
                    || !(unsigned int)LogicSpellDeck::canBeInserted(SelectedDeck, (const #795 *)v25, SpellIdx) )
                  {
                    ++v127;
                  }
                  else
                  {
                    LogicSpellDeck::moveSpellFromCollection(
                      SelectedDeck,
                      SpellIdx,
                      (#927 *)SpellCollection,
                      *(_DWORD *)(SpellCollection + 12) - 1);
                    v126 = 1;
                  }
                }
              }
              v20 = (unsigned int)(v20 + 1);
            }
            while ( (int)v20 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
            if ( (v126 & 1) != 0 )
            {
              GameListener = LogicGameMode::getGameListener(a2);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 88LL))(GameListener);
            }
            if ( v127 < 1 )
              goto LABEL_111;
            v29 = *(void (**)(void))(*(_QWORD *)LogicGameMode::getGameListener(a2) + 80LL);
            goto LABEL_105;
          case 5:
            if ( v11 )
            {
              ExecutorAccountId = LogicCommand::getExecutorAccountId(this);
              HigherInt = LogicLong::getHigherInt(ExecutorAccountId);
              LowerInt = LogicLong::getLowerInt(ExecutorAccountId);
              LeaderCharacter = (#1094 *)LogicBattle::getLeaderCharacter(v11, HigherInt, LowerInt);
              v43 = LeaderCharacter;
              if ( LeaderCharacter )
              {
                LogicSummoner::increaseMana(LeaderCharacter, 1000);
                LogicSummoner::clearSpellCooldowns(v43);
              }
            }
            goto LABEL_111;
          case 6:
            if ( !v11 )
              goto LABEL_111;
            v44 = LogicCommand::getExecutorAccountId(this);
            v45 = LogicLong::getHigherInt(v44);
            v46 = LogicLong::getLowerInt(v44);
            v47 = (GameMode *)LogicBattle::getLeaderCharacter(v11, v45, v46);
            v48 = v47;
            if ( !v47 )
              goto LABEL_111;
            OpponentOwnerCharacter = LogicGameObject::getOpponentOwnerCharacter(v47);
            v50 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)OpponentOwnerCharacter + 136LL))(OpponentOwnerCharacter);
            goto LABEL_56;
          case 7:
            if ( !v11 )
              goto LABEL_111;
            v51 = LogicCommand::getExecutorAccountId(this);
            v52 = LogicLong::getHigherInt(v51);
            v53 = LogicLong::getLowerInt(v51);
            v54 = (GameMode *)LogicBattle::getLeaderCharacter(v11, v52, v53);
            v55 = v54;
            if ( !v54 )
              goto LABEL_111;
            v56 = (#1060 *)LogicGameObject::getOpponentOwnerCharacter(v54);
            v57 = (LogicArenaData *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v55 + 136LL))(v55);
            Hitpoints = LogicHitpointComponent::getHitpoints(v57);
            CharacterData = (#1025 *)LogicCharacter::getCharacterData(v56);
            DamageType = (const #775 *)LogicCharacterData::getDamageType(CharacterData);
            v61 = v57;
            v62 = Hitpoints;
            v63 = v56;
            goto LABEL_57;
          case 10:
            if ( v11 )
            {
              v64 = LogicCommand::getExecutorAccountId(this);
              v65 = LogicLong::getHigherInt(v64);
              v66 = LogicLong::getLowerInt(v64);
              v67 = (LogicSummoner *)LogicBattle::getLeaderCharacter(v11, v65, v66);
              LogicSummoner::cheatShuffleSpells(v67);
            }
            goto LABEL_111;
          case 11:
            if ( !v11 )
              goto LABEL_111;
            v68 = LogicCommand::getExecutorAccountId(this);
            v69 = LogicLong::getHigherInt(v68);
            v70 = LogicLong::getLowerInt(v68);
            v71 = (GameMode *)LogicBattle::getLeaderCharacter(v11, v69, v70);
            v48 = v71;
            if ( !v71 )
              goto LABEL_111;
            v72 = (#1060 *)LogicGameObject::getOpponentOwnerCharacter(v71);
            v73 = (LogicArenaData *)(*(__int64 (__fastcall **)(#1060 *))(*(_QWORD *)v48 + 136LL))(v48);
            v74 = LogicHitpointComponent::getHitpoints(v73);
            v75 = (#1025 *)LogicCharacter::getCharacterData(v72);
            v76 = (const #775 *)LogicCharacterData::getDamageType(v75);
            LogicHitpointComponent::takeDamage(v73, v74, v76, v72, 0, 0);
            v50 = (LogicArenaData *)(*(__int64 (__fastcall **)(#1060 *))(*(_QWORD *)v72 + 136LL))(v72);
    LABEL_56:
            v77 = v50;
            v78 = LogicHitpointComponent::getHitpoints(v50);
            v79 = (#1025 *)LogicCharacter::getCharacterData(v48);
            DamageType = (const #775 *)LogicCharacterData::getDamageType(v79);
            v61 = v77;
            v62 = v78;
            v63 = v48;
    LABEL_57:
            LogicHitpointComponent::takeDamage(v61, v62, DamageType, v63, 0, 0);
            goto LABEL_111;
          case 12:
            if ( !Home )
              goto LABEL_111;
            v80 = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
            for ( i = 0; i != 8; ++i )
            {
              Spell = LogicSpellDeck::getSpell(v80, i);
              v83 = Spell;
              if ( Spell )
              {
                v84 = *(_DWORD *)(Spell + 8);
                SpellData = (#895 *)LogicSpell::getSpellData((#795 *)Spell);
                if ( v84 >= (int)LogicSpellData::getMaxLevelIndex(SpellData) )
                  v86 = v84;
                else
                  v86 = v84 + 1;
                *(_DWORD *)(v83 + 8) = v86;
                v87 = LogicGameMode::getGameListener(a2);
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v87 + 256LL))(v87, v83);
              }
              result = 0;
            }
            return result;
          case 14:
            if ( Home )
            {
              v88 = (#962 *)LogicGameMode::getPlayerAvatar(a2);
              Debugger::doAssert((Debugger *)(v88 != 0), (bool)"", v89);
              ExpPoints = LogicClientAvatar::getExpPoints(v88);
              v91 = LogicClientAvatar::getExpLevel(v88);
              v92 = (#1364 *)LogicDataTables::getExpLevel(v91, 0);
              ExpToNextLevel = LogicExpLevelData::getExpToNextLevel(v92);
              LogicClientAvatar::xpGainHelper(v88, ExpToNextLevel - ExpPoints, Home);
            }
            goto LABEL_111;
          case 15:
            if ( Home )
              LogicClientHome::debugFinishTutorial(Home);
            TutorialManager = LogicGameMode::getTutorialManager(a2);
            if ( (unsigned int)LogicTutorialManager::isTutorialActive(TutorialManager) )
            {
              v95 = (LogicTutorialManager *)LogicGameMode::getTutorialManager(a2);
              LogicTutorialManager::setCurrentTutorialCompleted(v95);
            }
            goto LABEL_111;
          case 25:
            v96 = (#962 *)LogicGameMode::getPlayerAvatar(a2);
            if ( v96 )
              LogicClientAvatar::addFreeDiamonds(v96, *((_DWORD *)this + 8), 11);
            goto LABEL_111;
          case 26:
            if ( !Home )
              goto LABEL_111;
            v97 = 2;
            goto LABEL_87;
          case 27:
            if ( !Home )
              goto LABEL_111;
            v97 = 7;
            goto LABEL_87;
          case 28:
            if ( !Home )
              goto LABEL_111;
            v97 = 30;
            goto LABEL_87;
          case 29:
            if ( !Home )
              goto LABEL_111;
            v97 = 90;
            goto LABEL_87;
          case 30:
            if ( !Home )
              goto LABEL_111;
            v97 = 360;
            goto LABEL_87;
          case 31:
            if ( !Home )
              goto LABEL_111;
            v97 = 1080;
    LABEL_87:
            LogicDebugCommand::simulateProgress(a2, (#1028 *)v97, 1, v13);
            LogicDebugCommand::sm_progExecuted = 1;
            return 0;
          case 33:
            v98 = LogicGameMode::getPlayerAvatar(a2);
            v99 = v98;
            if ( v98 )
            {
              v100 = *(_DWORD *)(v98 + 64);
              v101 = (LogicDataTables *)LogicClientAvatar::getArena((#962 *)v98);
              v102 = *(_DWORD *)(LogicDataTables::getGlobals(v101) + 404LL);
              if ( (int)LogicClientAvatar::getNpcWinCount(v99) < v102 )
              {
                v103 = LogicClientAvatar::getChangeListener((#962 *)v99);
                v104 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v103 + 104LL);
                NpcWinCount = LogicClientAvatar::getNpcWinCount(v99);
                v104(v103, 0, (unsigned int)(v102 - NpcWinCount), 0, 0);
                LogicClientAvatar::setNpcWinCount((LogicClientAvatar *)v99, v102);
                LogicClientAvatar::refreshArena((LogicClientAvatar *)v99);
              }
              LogicClientAvatar::scoreChanged((LogicClientAvatar *)v99, *((_DWORD *)this + 8));
              if ( *(_DWORD *)(v99 + 64) != v100 && LogicClientAvatar::getChangeListener((#962 *)v99) )
              {
                v106 = (unsigned int)(*(_DWORD *)(v99 + 64) - v100);
                v107 = LogicClientAvatar::getChangeListener((#962 *)v99);
                (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v107 + 104LL))(
                  v107,
                  v106,
                  0,
                  0,
                  0);
              }
              if ( (LogicDataTables *)LogicClientAvatar::getArena((#962 *)v99) != v101
                && LogicClientAvatar::getChangeListener((#962 *)v99) )
              {
                v108 = LogicClientAvatar::getChangeListener((#962 *)v99);
                v109 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v108 + 168LL);
                v110 = LogicClientAvatar::getArena((#962 *)v99);
                v109(v108, v110);
              }
            }
            goto LABEL_111;
          case 36:
            v111 = (#962 *)LogicGameMode::getPlayerAvatar(a2);
            v112 = v111;
            if ( v111 )
            {
              Diamonds = LogicClientAvatar::getDiamonds(v111);
              LogicClientAvatar::useDiamonds(v112, Diamonds, Home);
              v114 = LogicClientAvatar::getChangeListener(v112);
              (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v114 + 24LL))(
                v114,
                3,
                0,
                0,
                Diamonds);
            }
            goto LABEL_111;
          case 37:
            v115 = (#1004 *)LogicGameMode::getPlayerAvatar(a2);
            v116 = v115;
            if ( !v115 )
              goto LABEL_111;
            v117 = (#916 *)LogicDataTables::getGoldData(v115);
            ResourceCount = (#1004 *)LogicClientAvatar::getResourceCount((int)v116, v117);
            v119 = (int)ResourceCount;
            GoldData = (const #916 *)LogicDataTables::getGoldData(ResourceCount);
            v121 = -v119;
            v122 = v116;
            goto LABEL_110;
          case 38:
            if ( !Home )
              goto LABEL_111;
            v123 = (#962 *)LogicGameMode::getPlayerAvatar(a2);
            v124 = LogicClientAvatar::getArena(v123);
            MagicChest = (const #941 *)LogicArenaData::getMagicChest(v124);
            if ( !MagicChest )
              goto LABEL_111;
            v38 = (#1057 *)operator new(48);
            LogicChest::LogicChest(v38, MagicChest);
    LABEL_104:
            LogicChest::setSource(v38, 4);
            LogicChest::setNew(v38, 1);
            LogicClientHome::addChest(Home, v38, -1);
            LogicClientHome::autoOpenChestsIfNeeded(Home);
            v29 = *(void (**)(void))(*(_QWORD *)LogicGameMode::getGameListener(a2) + 96LL);
    LABEL_105:
            v29();
            goto LABEL_111;
          case 40:
            LogicClientHome::enableVideoHackChest(Home);
            goto LABEL_111;
          default:
            return result;
        }
      }
      return result;
    }

    __int64 __fastcall LogicDebugCommand::simulateProgress(OwnHomeDataMessage *this, #1028 *a2, int a3)
    {
      int v4; // w22
      LogicClientHome *Home; // x0
      #942 *v7; // x20
      int v8; // w22
      __int64 GameListener; // x0
      __int64 v10; // x0
      __int64 v11; // x0
      #1146 *v12; // x0
      AcceptChallengeMessage *SelectedDeck; // x21
      #1146 *v14; // x0
      __int64 SpellCollection; // x20
      int SpellCnt; // w0
      int v17; // w22
      #795 *Spell; // x0
      __int64 Listener; // x0
      int v20; // w8
      int v21; // w8
      int v22; // w21
      #795 *v23; // x0
      __int64 v24; // x0
      int v25; // w8
      LogicClientHome *v26; // x0
    
      v4 = (int)a2;
      Home = (LogicClientHome *)LogicGameMode::getHome(this);
      LogicClientHome::setProgressSimulationActive(Home, 1);
      LogicGameMode::setGameListenerEnabled(this, 0);
      v7 = (#942 *)operator new(144);
      LogicProgressSimulator::LogicProgressSimulator(v7, this);
      v8 = 86400 * v4;
      LogicProgressSimulator::setWinPercent(v7, 51);
      LogicProgressSimulator::setBattlesPerDay(v7, 12);
      LogicProgressSimulator::setDonationsPerDay(v7, 3);
      LogicProgressSimulator::setSleepHours(v7, 6);
      LogicProgressSimulator::setIsInTeam(v7, 1);
      if ( a3 )
        LogicProgressSimulator::resetProgress(v7);
      LogicProgressSimulator::update(v7, v8);
      (*(void (__fastcall **)(#942 *))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(#942 *))(*(_QWORD *)v7 + 8LL))(v7);
      LogicGameMode::setGameListenerEnabled(this, 1);
      GameListener = LogicGameMode::getGameListener(this);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 88LL))(GameListener);
      v10 = LogicGameMode::getGameListener(this);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
      v11 = LogicGameMode::getGameListener(this);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
      v12 = (#1146 *)LogicGameMode::getHome(this);
      SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(v12);
      v14 = (#1146 *)LogicGameMode::getHome(this);
      SpellCollection = LogicClientHome::getSpellCollection(v14);
      SpellCnt = LogicSpellDeck::getSpellCnt(SelectedDeck);
      v17 = SpellCnt - 1;
      if ( SpellCnt >= 1 )
      {
        do
        {
          Spell = (#795 *)LogicSpellDeck::getSpell(SelectedDeck, v17);
          Listener = LogicSpell::getListener(Spell);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)Listener + 64LL))(Listener);
          v20 = v17-- + 1;
        }
        while ( v20 > 1 );
      }
      v21 = *(_DWORD *)(SpellCollection + 12);
      v22 = v21 - 1;
      if ( v21 >= 1 )
      {
        do
        {
          v23 = (#795 *)LogicSpellCollection::getSpell((#927 *)SpellCollection, v22);
          v24 = LogicSpell::getListener(v23);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24);
          v25 = v22-- + 1;
        }
        while ( v25 > 1 );
      }
      v26 = (LogicClientHome *)LogicGameMode::getHome(this);
      return LogicClientHome::setProgressSimulationActive(v26, 0);
    }

    __int64 __fastcall LogicDebugCommand::getJSONForReplay(OwnHomeDataMessage *this)
    {
      __int64 JSONForReplay; // x19
      #1232 *v3; // x20
      String v5; // [xsp+8h] [xbp-38h] BYREF
    
      JSONForReplay = LogicCommand::getJSONForReplay(this);
      String::String(&v5, "actionIdx");
      v3 = (#1232 *)operator new(16);
      LogicJSONNumber::LogicJSONNumber(v3, *((_DWORD *)this + 7));
      LogicJSONObject::put(JSONForReplay, &v5, v3);
      String::~String(&v5);
      return JSONForReplay;
    }

    __int64 __fastcall LogicDebugCommand::loadFromJSON(OwnHomeDataMessage *this, #1234 *a2)
    {
      #1232 *JSONNumber; // x20
      const char *v5; // x1
      __int64 result; // x0
      String v7; // [xsp+8h] [xbp-28h] BYREF
    
      LogicCommand::loadFromJSON(this, a2);
      String::String(&v7, "actionIdx");
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v7);
      String::~String(&v7);
      if ( !JSONNumber )
        Debugger::error((__siginfo *)"LogicDoSpellCommand::loadFromJSON actionIdx not found!", v5);
      result = LogicJSONNumber::getIntValue(JSONNumber);
      *((_DWORD *)this + 7) = result;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicDebugCommand::~LogicDebugCommand(OwnHomeDataMessage *this)
    {
      __ZN17LogicDebugCommandD2Ev(this);
    }

    void __fastcall LogicDebugCommand::~LogicDebugCommand(OwnHomeDataMessage *this)
    {
      LogicDebugCommand::~LogicDebugCommand(this);
      operator delete(this);
    }

    void __fastcall LogicDebugCommand::~LogicDebugCommand(OwnHomeDataMessage *this)
    {
      *(_QWORD *)this = &off_10045E008;
      String::~String((String *)((char *)this + 40));
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

}; // end class LogicDebugCommand
