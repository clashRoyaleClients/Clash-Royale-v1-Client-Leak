class LogicBattle
{
public:

    void __fastcall LogicBattle::LogicBattle(LogicBattle *this, #1028 *a2)
    {
      __int64 v4; // x21
      AcceptChallengeMessage *v5; // x20
      char *v6; // x23
      _QWORD *v7; // x20
      __int64 i; // x21
      LogicLong *v9; // x20
    
      LogicBattle::initializeMembers(this);
      v4 = 0;
      *(_QWORD *)this = a2;
      do
      {
        v5 = (AcceptChallengeMessage *)operator new(72);
        LogicSpellDeck::LogicSpellDeck(v5);
        v6 = (char *)this + 8 * v4;
        *((_QWORD *)v6 + 6) = v5;
        v7 = (_QWORD *)operator new(16);
        *v7 = 0;
        v7[1] = 0;
        *((_DWORD *)v7 + 2) = 2;
        *v7 = operator new[](16);
        *((_QWORD *)v6 + 14) = v7;
        ++v4;
      }
      while ( v4 < 2 );
      for ( i = 0; i < 2; ++i )
      {
        v9 = (LogicLong *)operator new(8);
        LogicLong::LogicLong(v9, 0, 0);
        *((_QWORD *)this + i + 3) = v9;
      }
    }

    __int64 __fastcall LogicBattle::getPlayerCount(UnbindFacebookAccountMessage *this)
    {
      return 2;
    }

    // attributes: thunk
    void __fastcall LogicBattle::LogicBattle(LogicBattle *this, #1028 *a2)
    {
      __ZN11LogicBattleC2EP13LogicGameMode(this, a2);
    }

    __int64 __fastcall LogicBattle::destruct(UnbindFacebookAccountMessage *this)
    {
      #1127 *v2; // x0
      void *v3; // x0
      __int64 v4; // x0
      __int64 v5; // x20
      __int64 v6; // x0
      void *v7; // x0
      __int64 v8; // x21
      __int64 i; // x22
      char *v10; // x23
      __int64 v11; // x0
      __int64 v12; // x0
      _QWORD *v13; // x20
      TextField *v14; // x0
      void *v15; // x0
      char *v16; // x20
      TextField *v17; // x0
      void *v18; // x0
      char *v19; // x20
      TextField *v20; // x0
      void *v21; // x0
      TextField *v22; // x0
      void *v23; // x0
    
      v2 = (#1127 *)*((_QWORD *)this + 1);
      if ( v2 )
      {
        LogicTileMap::destruct(v2);
        v3 = (void *)*((_QWORD *)this + 1);
        if ( v3 )
          operator delete(v3);
        *((_QWORD *)this + 1) = 0;
      }
      v4 = *((_QWORD *)this + 34);
      v5 = 24;
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v6 = *((_QWORD *)this + 34);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        *((_QWORD *)this + 34) = 0;
        v5 = 24;
      }
      do
      {
        v7 = *(void **)((char *)this + v5);
        if ( v7 )
          operator delete(v7);
        *(_QWORD *)((char *)this + v5) = 0;
        v5 += 8;
        v8 = 184;
      }
      while ( v5 != 40 );
      for ( i = 0; i != 16; i += 8 )
      {
        v10 = (char *)this + i;
        v11 = *(_QWORD *)((char *)this + i + 48);
        if ( v11 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          v12 = *((_QWORD *)v10 + 6);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          *((_QWORD *)v10 + 6) = 0;
        }
        v13 = (_QWORD *)*((_QWORD *)v10 + 14);
        if ( v13 )
        {
          if ( *v13 )
            operator delete[](*v13);
          operator delete(v13);
        }
        *((_QWORD *)v10 + 14) = 0;
        v14 = *(TextField **)((char *)this + v8);
        if ( v14 )
        {
          LogicSpell::destruct(v14);
          v15 = *(void **)((char *)this + v8);
          if ( v15 )
            operator delete(v15);
          *(_QWORD *)((char *)this + v8) = 0;
        }
        v16 = (char *)this + v8;
        v17 = *(TextField **)((char *)this + v8 + 8);
        if ( v17 )
        {
          LogicSpell::destruct(v17);
          v18 = (void *)*((_QWORD *)v16 + 1);
          if ( v18 )
            operator delete(v18);
          *((_QWORD *)v16 + 1) = 0;
        }
        v19 = (char *)this + i;
        v20 = *(TextField **)((char *)this + i + 216);
        if ( v20 )
        {
          LogicSpell::destruct(v20);
          v21 = (void *)*((_QWORD *)v19 + 27);
          if ( v21 )
            operator delete(v21);
          *((_QWORD *)v19 + 27) = 0;
        }
        v22 = (TextField *)*((_QWORD *)v19 + 29);
        if ( v22 )
        {
          LogicSpell::destruct(v22);
          v23 = (void *)*((_QWORD *)v19 + 29);
          if ( v23 )
            operator delete(v23);
          *((_QWORD *)v19 + 29) = 0;
        }
        v8 += 16;
      }
      return LogicBattle::initializeMembers(this);
    }

    __int64 __fastcall LogicBattle::rand(LogicGameMode **this, int a2)
    {
      return LogicGameMode::getRandomInt(*this, a2);
    }

    __int64 __fastcall LogicBattle::tick(#849 **this)
    {
      int MatchLengthSeconds; // w20
      #1147 *TutorialManager; // x0
      __int64 result; // x0
      int v5; // w8
    
      if ( !*((_BYTE *)this + 172) && !*((_BYTE *)this + 280) )
      {
        MatchLengthSeconds = LogicLocationData::getMatchLengthSeconds(*(this + 8));
        if ( (MatchLengthSeconds || *((_DWORD *)this + 4) != 1 || !*(this + 10))
          && (int)LogicGameMode::getTick(*this) / 20 >= MatchLengthSeconds )
        {
          *((_BYTE *)this + 172) = 1;
        }
      }
      TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(*this);
      result = LogicTutorialManager::isCombatPaused(TutorialManager);
      if ( (result & 1) == 0 )
      {
        v5 = *((_DWORD *)this + 42);
        if ( v5 < 1 )
          return LogicGameObjectManager::tick(*((#837 **)*this + 8));
        *((_DWORD *)this + 42) = v5 + 50;
        result = LogicBattle::isFinished((UnbindFacebookAccountMessage *)this);
        if ( (result & 1) == 0 )
          return LogicGameObjectManager::tick(*((#837 **)*this + 8));
      }
      return result;
    }

    bool __fastcall LogicBattle::isNPCBattle(UnbindFacebookAccountMessage *this)
    {
      return *((_DWORD *)this + 4) == 1 && *((_QWORD *)this + 10) != 0;
    }

    __int64 __fastcall LogicBattle::getSecondsGone(#1028 **this)
    {
      return (unsigned int)((int)LogicGameMode::getTick(*this) / 20);
    }

    bool __fastcall LogicBattle::isFinished(#849 **this)
    {
      #1147 *TutorialManager; // x0
      #943 *CurrentTutorial; // x0
      int v5; // w20
    
      if ( !(unsigned int)LogicBattle::isEndConditionMatched((UnbindFacebookAccountMessage *)this) )
        return 0;
      TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(*this);
      CurrentTutorial = (#943 *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
      if ( CurrentTutorial )
      {
        if ( *(_DWORD *)LogicTutorialData::getPopupExportName(CurrentTutorial) )
          return 0;
      }
      v5 = *((_DWORD *)this + 42);
      return v5 >= (int)LogicLocationData::getEndScreenDelay(*(this + 8));
    }

    __int64 __fastcall LogicBattle::getLogicGameObjectManager(UnbindFacebookAccountMessage *this)
    {
      return *(_QWORD *)(*(_QWORD *)this + 64LL);
    }

    __int64 __fastcall LogicBattle::addPlayer(UnbindFacebookAccountMessage *this, #962 *a2, int a3, int a4)
    {
      const char *v8; // x2
      char *v9; // x20
      const char *v10; // x2
      const char *v11; // x2
      _BOOL8 v12; // x0
      const char *v13; // x2
      const char *v14; // x2
      const LogicLong *AccountId; // x27
      int HigherInt; // w23
      int LowerInt; // w24
      int *v18; // x8
      LogicJSONParser *v19; // x0
      LogicBattleLogPlayer *Player; // x26
      const LogicLong *AllianceId; // x0
      const LogicLong *HomeId; // x0
      const String *Name; // x0
      const String *AllianceName; // x0
      __int64 AllianceBadge; // x0
      TextField *v26; // x25
      __int64 i; // x20
      TextField *v28; // x0
      char *v29; // x20
      TextField *v30; // x25
      __int64 GameObjects; // x24
      UnbindFacebookAccountMessage *v32; // x20
      __int64 v33; // x23
      int v34; // w19
      int v35; // w25
      char *v36; // x8
      GameMode *v37; // x26
      int v38; // w21
      _BOOL4 v39; // w8
      #1025 *Data; // x27
      int SummonerLevel; // w0
      __int64 SummonerTowerLevelIndex; // x28
      const char *v43; // x2
      __int64 v44; // x0
      int v45; // w8
      LogicSummoner *v46; // x24
      __int64 result; // x0
      #962 *v48; // x21
      int v49; // w1
      UnbindFacebookAccountMessage *v50; // x19
      #1079 *v51; // x0
      int StartMana; // w0
      __int64 Table; // x22
      int v54; // w23
      __int64 v55; // x24
      char v56; // w20
      int v57; // w21
      #943 *v58; // x25
      __int64 v59; // x26
      __int64 LocationData; // x0
      const char *v61; // x1
      __int64 v62; // x26
      __int64 NpcData; // x0
      const #895 *SpellToCast; // x8
      char v65; // w8
      __int64 v66; // x24
      #943 *v67; // x25
      __int64 v68; // x26
      __int64 v69; // x0
      __int64 v70; // x26
      __int64 v71; // x0
      int InstanceID; // w0
      __int64 v73; // x2
      __int64 v74; // x3
      LogicSummoner *v75; // x0
      #1028 *v76; // x20
      int Seed; // w0
      _QWORD *v78; // [xsp+8h] [xbp-98h]
      #1364 *ExpLevelData; // [xsp+10h] [xbp-90h]
      __int64 *v80; // [xsp+18h] [xbp-88h]
      #962 *v81; // [xsp+20h] [xbp-80h]
      __int64 v82; // [xsp+28h] [xbp-78h]
      const TextField **v83; // [xsp+30h] [xbp-70h]
      LogicSummoner *v84; // [xsp+38h] [xbp-68h]
      int v85; // [xsp+40h] [xbp-60h]
      GameMode *v86; // [xsp+48h] [xbp-58h] BYREF
    
      (*(void (__fastcall **)(#962 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)this);
      Debugger::doAssert((Debugger *)((unsigned int)a3 < 2), (bool)"", v8);
      v9 = (char *)this + 8 * a3;
      v84 = (LogicSummoner *)*((_QWORD *)v9 + 12);
      Debugger::doAssert((Debugger *)(v84 != 0), (bool)"", v10);
      Debugger::doAssert((Debugger *)((unsigned int)a3 < 2), (bool)"", v11);
      v12 = LogicGameMode::getAvatarByAccountID(
              *(_QWORD *)this,
              **((unsigned int **)v9 + 3),
              *(unsigned int *)(*((_QWORD *)v9 + 3) + 4LL)) == 0;
      Debugger::doAssert((Debugger *)v12, (bool)"LogicBattle::addPlayer - Avatar with same index already set", v13);
      Debugger::doAssert((Debugger *)(*((_QWORD *)v9 + 3) != 0), (bool)"", v14);
      AccountId = (const LogicLong *)LogicClientAvatar::getAccountId(a2);
      HigherInt = LogicLong::getHigherInt(AccountId);
      LowerInt = LogicLong::getLowerInt(AccountId);
      v18 = (int *)*((_QWORD *)v9 + 3);
      *v18 = HigherInt;
      v18[1] = LowerInt;
      *((_DWORD *)this + a3 + 10) = a4;
      v19 = (LogicJSONParser *)*((_QWORD *)this + 34);
      if ( v19 )
      {
        Player = (LogicBattleLogPlayer *)LogicBattleLog::getPlayer(v19, a3);
        LogicBattleLogPlayer::setAccountId(Player, AccountId);
        if ( LogicClientAvatar::getAllianceId(a2) )
        {
          AllianceId = (const LogicLong *)LogicClientAvatar::getAllianceId(a2);
          LogicBattleLogPlayer::setAllianceId(Player, AllianceId);
        }
        HomeId = (const LogicLong *)LogicClientAvatar::getHomeId(a2);
        LogicBattleLogPlayer::setHomeId(Player, HomeId);
        Name = (const String *)LogicClientAvatar::getName(a2);
        LogicBattleLogPlayer::setName(Player, Name);
        LogicBattleLogPlayer::setStars(Player, 0);
        AllianceName = (const String *)LogicClientAvatar::getAllianceName(a2);
        LogicBattleLogPlayer::setAllianceName(Player, AllianceName);
        AllianceBadge = LogicClientAvatar::getAllianceBadge(a2);
        LogicBattleLogPlayer::setAllianceBadgeData(Player, AllianceBadge);
        LogicBattleLogPlayer::setHighscoreRank(Player, a4);
      }
      v81 = a2;
      v82 = a3;
      if ( LogicServerEventCollector::ENABLED )
      {
        v26 = (TextField *)operator new(48);
        for ( i = 0; i < 2; ++i )
        {
          LogicSpell::LogicSpell(v26);
          *((_QWORD *)this + 2 * a3 + i + 23) = v26;
          LogicSpell::initForServerEvents(v26, HigherInt, LowerInt);
          v28 = (TextField *)operator new(48);
          v26 = v28;
        }
        LogicSpell::LogicSpell(v28);
        v29 = (char *)this + 8 * a3;
        *((_QWORD *)v29 + 27) = v26;
        LogicSpell::initForServerEvents(v26, HigherInt, LowerInt);
        v30 = (TextField *)operator new(48);
        LogicSpell::LogicSpell(v30);
        *((_QWORD *)v29 + 29) = v30;
        LogicSpell::initForServerEvents(v30, HigherInt, LowerInt);
      }
      ExpLevelData = (#1364 *)LogicClientAvatar::getExpLevelData(a2);
      GameObjects = LogicGameObjectManager::getGameObjects(*(#837 **)(*(_QWORD *)this + 64LL));
      v85 = *(_DWORD *)(GameObjects + 12);
      v32 = this;
      if ( v85 > 0 )
      {
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = (char *)v32 + 8 * a3;
        v78 = v36 + 216;
        v80 = (__int64 *)(v36 + 112);
        v83 = (const TextField **)(v36 + 232);
        do
        {
          v37 = *(GameMode **)(*(_QWORD *)GameObjects + 8 * v33);
          v38 = 500 * *(_DWORD *)(*((_QWORD *)v32 + 1) + 4LL);
          if ( (int)LogicGameObject::getY(v37) >= v38 >> 1 )
            v39 = a3 == 1;
          else
            v39 = a3 == 0;
          if ( v39 )
          {
            LogicGameObject::setOwnerIndex(v37, a3);
            if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v37 + 88LL))(v37) == 5 )
            {
              Data = (#1025 *)LogicGameObject::getData(v37);
              if ( v37 == v84 && (*(unsigned int (__fastcall **)(LogicSummoner *))(*(_QWORD *)v84 + 200LL))(v84) )
              {
                SummonerLevel = LogicExpLevelData::getSummonerLevel(ExpLevelData);
                LogicCharacter::setLevelIndex(v84, (unsigned int)(SummonerLevel - 1), *v78);
              }
              else if ( (unsigned int)LogicCharacterData::isPrincessTower(Data) )
              {
                SummonerTowerLevelIndex = LogicClientAvatar::getSummonerTowerLevelIndex(v81);
                Debugger::doAssert((Debugger *)((unsigned int)a3 < 2), (bool)"", v43);
                v44 = *v80;
                v86 = v37;
                LogicArrayList<LogicCharacter const*>::add(v44, &v86);
                if ( a3 )
                  v45 = v35;
                else
                  v45 = v34;
                LogicCharacter::setLevelIndex(v37, SummonerTowerLevelIndex, *((_QWORD *)v32 + 2 * a3 + v45 + 23));
                if ( a3 )
                  ++v35;
                else
                  ++v34;
              }
              else
              {
                LogicCharacter::setLevelIndex(v37, 0, *v83);
              }
            }
            else if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v37 + 88LL))(v37) == 1 )
            {
              LogicSpawnPoint::initForServerEvents(v37, *v83);
            }
          }
          ++v33;
        }
        while ( v85 != (_DWORD)v33 );
      }
      v46 = v84;
      result = (*(__int64 (__fastcall **)(LogicSummoner *))(*(_QWORD *)v84 + 200LL))(v84);
      if ( (_DWORD)result )
      {
        v48 = v81;
        v50 = v32;
        if ( (*(unsigned int (__fastcall **)(#962 *))(*(_QWORD *)v81 + 48LL))(v81) )
        {
          v51 = (#1079 *)*((_QWORD *)v32 + 10);
          if ( v51 )
          {
            StartMana = LogicNpcData::getStartMana(v51);
            LogicSummoner::setStartingMana(v84, StartMana);
          }
        }
        if ( a3 != 1 || *((_DWORD *)v32 + 4) != 1 || !*((_QWORD *)v32 + 10) )
        {
          v73 = *((_QWORD *)v32 + a3 + 6);
          v74 = *((unsigned __int8 *)v32 + 282);
          v75 = v84;
          return LogicSummoner::setLogicClientAvatar(v75, v48, v73, v74);
        }
        Table = LogicDataTables::getTable((LogicDataTables *)0x30, v49);
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
        if ( v54 < 1 )
        {
          v56 = 0;
        }
        else
        {
          v55 = 0;
          v56 = 0;
          v57 = 1;
          do
          {
            v58 = (#943 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v55);
            v59 = *((_QWORD *)v50 + 8);
            LocationData = LogicTutorialData::getLocationData(v58);
            if ( (unsigned int)LogicData::equals(v59, LocationData) )
            {
              v62 = *((_QWORD *)v50 + 10);
              NpcData = LogicTutorialData::getNpcData(v58);
              if ( (unsigned int)LogicData::equals(v62, NpcData) )
              {
                SpellToCast = (const #895 *)LogicTutorialData::getSpellToCast(v58);
                v56 = 1;
                if ( SpellToCast )
                {
                  *((_BYTE *)v50 + 282) = 1;
                  v57 &= LogicSpellDeck::containsSpellData(*((AcceptChallengeMessage **)v50 + v82 + 6), SpellToCast);
                }
              }
            }
            v55 = (unsigned int)(v55 + 1);
          }
          while ( v54 != (_DWORD)v55 );
          v65 = v57 & 1;
          v48 = v81;
          v46 = v84;
          if ( (v65 & 1) == 0 )
          {
            Debugger::warning((__siginfo *)"Player doesn't have all required spells for tutorial", v61);
            v66 = 0;
            do
            {
              v67 = (#943 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v66);
              if ( (LogicTutorialData::isHomeMode(v67) & 1) == 0 )
              {
                v68 = *((_QWORD *)v50 + 8);
                v69 = LogicTutorialData::getLocationData(v67);
                if ( (unsigned int)LogicData::equals(v68, v69) )
                {
                  v70 = *((_QWORD *)v50 + 10);
                  v71 = LogicTutorialData::getNpcData(v67);
                  if ( (unsigned int)LogicData::equals(v70, v71) )
                  {
                    InstanceID = LogicData::getInstanceID(v67);
                    *((_DWORD *)v50 + (InstanceID >> 5) + 32) |= 1 << (InstanceID & 0x1F);
                  }
                }
              }
              v66 = (unsigned int)(v66 + 1);
            }
            while ( v54 != (_DWORD)v66 );
            v73 = *((_QWORD *)v50 + v82 + 6);
            v74 = *((unsigned __int8 *)v50 + 282);
            v75 = v84;
            return LogicSummoner::setLogicClientAvatar(v75, v48, v73, v74);
          }
        }
        result = LogicSummoner::setLogicClientAvatar(v46, v48, *((_QWORD *)v50 + v82 + 6), *((unsigned __int8 *)v50 + 282));
        if ( (v56 & 1) != 0 )
        {
          v76 = *(#1028 **)v50;
          Seed = LogicNpcData::getSeed(*((#1079 **)v50 + 10));
          return LogicGameMode::setRandomSeed(v76, Seed);
        }
      }
      return result;
    }

    __int64 __fastcall LogicBattle::getLeaderByIndex(UnbindFacebookAccountMessage *this, unsigned int a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)(a2 < 2), (bool)"", a3);
      return *((_QWORD *)this + (int)a2 + 12);
    }

    __int64 __fastcall LogicBattle::getAvatar(UnbindFacebookAccountMessage *this, unsigned int a2, const char *a3)
    {
      unsigned int *v5; // x8
    
      Debugger::doAssert((Debugger *)(a2 < 2), (bool)"", a3);
      v5 = (unsigned int *)*((_QWORD *)this + (int)a2 + 3);
      return LogicGameMode::getAvatarByAccountID(*(_QWORD *)this, *v5, v5[1]);
    }

    __int64 __fastcall LogicBattle::setTutorialCompleted(UnbindFacebookAccountMessage *this, const #943 *a2)
    {
      __int64 result; // x0
    
      result = LogicData::getInstanceID(a2);
      *((_DWORD *)this + ((int)result >> 5) + 32) |= 1 << (result & 0x1F);
      return result;
    }

    __int64 __fastcall LogicBattle::getGameListener(#1028 **this)
    {
      return LogicGameMode::getGameListener(*this);
    }

    __int64 __fastcall LogicBattle::initDefaultSector(#1028 **this, const #1091 *a2)
    {
      const char *v4; // x2
      const char *v5; // x2
      const char *v6; // x2
      const char *v7; // x2
      const char *v8; // x1
      int ObjectCount; // w21
      __int64 v10; // x22
      #1401 *ObjectData; // x25
      __int64 ObjectRow; // x27
      int v13; // w28
      int v14; // w23
      const #916 *v15; // x1
      GameMode *GameObjectByData; // x26
      int v17; // w23
      int v18; // w27
      __int64 Direction; // x0
      int v20; // w8
      __int64 CharacterData; // x0
      int v22; // w9
      int v23; // w23
      _BOOL8 v24; // x1
      #1028 **v25; // x8
      GameMode **v26; // x8
      #1028 *v27; // t1
      const String *v28; // x1
      LogicDataTables *v29; // x0
      __int64 SummonerData; // x0
      char v31; // w0
      const char *v32; // x1
      __int64 v33; // x9
      const String *v34; // x1
      __int64 v36; // [xsp+8h] [xbp-88h]
      __siginfo v37; // [xsp+10h] [xbp-80h] BYREF
    
      LogicGameMode::pushLogicChangesAllowed(*this);
      *((_BYTE *)*this + 424) = 1;
      Debugger::doAssert((Debugger *)1, (bool)"", v4);
      Debugger::doAssert((Debugger *)(*(this + 12) == 0), (bool)"", v5);
      Debugger::doAssert((Debugger *)1, (bool)"", v6);
      Debugger::doAssert((Debugger *)(*(this + 13) == 0), (bool)"", v7);
      ObjectCount = LogicTilemapData::getObjectCount(a2);
      if ( ObjectCount < 1 )
      {
        v33 = 0;
    LABEL_22:
        String::format((String *)"Invalid amount of leaders %d", v8, v33);
        Debugger::warning(&v37, v34);
        String::~String((String *)&v37);
        return LogicGameMode::popLogicChangesAllowed(*this);
      }
      v36 = 0;
      v10 = 0;
      do
      {
        ObjectData = (#1401 *)LogicTilemapData::getObjectData(a2, v10);
        if ( (unsigned int)LogicData::getDataType(ObjectData) != 42 )
        {
          ObjectRow = LogicTilemapData::getObjectRow(a2, v10);
          v13 = 500 * CSVRow::getIntegerValueAt(ObjectRow, 0);
          v14 = 500 * CSVRow::getIntegerValueAt(ObjectRow, 1);
          GameObjectByData = (GameMode *)LogicGameObjectFactory::createGameObjectByData(ObjectData, v15);
          *((_QWORD *)GameObjectByData + 1) = ObjectRow;
          LogicGameObject::setPosition(GameObjectByData, v13, v14, 0);
          if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)GameObjectByData + 88LL))(GameObjectByData) == 5 )
          {
            v17 = 500 * *((_DWORD *)*(this + 1) + 1);
            v18 = LogicGameObject::getY(GameObjectByData);
            Direction = LogicCharacter::getDirection(GameObjectByData);
            v20 = v18 < v17 >> 1 ? 256 : -256;
            *(_DWORD *)(Direction + 4) = v20;
            CharacterData = LogicCharacter::getCharacterData(GameObjectByData);
            if ( (unsigned int)LogicCharacterData::isLeaderCharacter(CharacterData) )
            {
              LogicCharacter::setAsLeader(GameObjectByData);
              v22 = v36;
              if ( (int)v36 <= 1 )
              {
                v23 = v17 >> 1;
                v24 = v18 >= v23;
                v25 = this + v24;
                v27 = v25[12];
                v26 = v25 + 12;
                if ( v27 )
                {
                  String::format((String *)"Has already set leader in index %d", (const char *)v24, v18 >= v23);
                  Debugger::warning((__siginfo *)&v37.si_addr, v28);
                  String::~String((String *)&v37.si_addr);
                }
                else
                {
                  *v26 = GameObjectByData;
                  v29 = (LogicDataTables *)LogicGameObject::setOwnerIndex(GameObjectByData, v24);
                }
                v22 = v36;
                if ( v18 >= v23 )
                {
                  SummonerData = LogicDataTables::getSummonerData(v29);
                  v31 = LogicData::equals(ObjectData, SummonerData);
                  v22 = v36;
                  if ( (v31 & 1) == 0 )
                  {
                    Debugger::warning((__siginfo *)"Bottom leader is not Summoner", v32);
                    v22 = v36;
                  }
                }
              }
              v36 = (unsigned int)(v22 + 1);
            }
          }
          LogicGameObjectManager::addLogicGameObject(*((#837 **)*this + 8), GameObjectByData, 1);
        }
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (int)v10 < ObjectCount );
      v33 = v36;
      if ( (_DWORD)v36 != 2 )
        goto LABEL_22;
      return LogicGameMode::popLogicChangesAllowed(*this);
    }

    __int64 __fastcall LogicBattle::getLaneID(UnbindFacebookAccountMessage *this, int a2, int a3)
    {
      #1091 *v6; // x0
      __int64 v7; // x20
      int v8; // w21
      int v9; // w23
      int v10; // w24
      int v11; // w25
      int v12; // w22
      int TileCost; // w0
      int v14; // w8
      unsigned int v15; // w9
    
      v6 = (#1091 *)*((_QWORD *)this + 9);
      if ( !v6 || (int)LogicTilemapData::getMapWidth(v6) < 1 )
        return 0;
      v7 = 0;
      v8 = 0;
      v9 = a2 / 500;
      v10 = a3 / -500;
      v11 = 0x7FFFFFFF;
      do
      {
        if ( (int)LogicTilemapData::getMapHeight(*((#1091 **)this + 9)) >= 1 )
        {
          v12 = 0;
          do
          {
            TileCost = LogicTilemapData::getTileCost(*((#1091 **)this + 9), v8, v12);
            v14 = (v8 - v9) * (v8 - v9) + (v10 + v12) * (v10 + v12);
            if ( v14 >= v11 )
              v15 = v7;
            else
              v15 = TileCost;
            if ( v14 >= v11 )
              v14 = v11;
            if ( TileCost >= 1 )
              v7 = v15;
            else
              v7 = (unsigned int)v7;
            if ( TileCost >= 1 )
              v11 = v14;
            ++v12;
          }
          while ( v12 < (int)LogicTilemapData::getMapHeight(*((#1091 **)this + 9)) );
        }
        ++v8;
      }
      while ( v8 < (int)LogicTilemapData::getMapWidth(*((#1091 **)this + 9)) );
      return v7;
    }

    GameMode *__fastcall LogicBattle::spawnObject(
            UnbindFacebookAccountMessage *this,
            const #916 *a2,
            LogicMath *a3,
            LogicMath *a4,
            const #1236 *a5,
            const #822 *SpawnEffect,
            char a7)
    {
      GameMode *GameObjectByData; // x20
      int HigherInt; // w28
      int LowerInt; // w0
      int v17; // w2
      __int64 v18; // x25
      _DWORD *v19; // x8
      LogicMath *v20; // x0
      int v21; // w2
      __int64 v22; // x26
      int v23; // w2
      LogicMath *v24; // x0
      int v25; // w2
      __int64 v26; // x27
      __int64 FlyingHeight; // x28
      int LaneID; // w0
      __int64 Direction; // x0
      int v30; // w8
      __int64 v31; // x0
    
      GameObjectByData = (GameMode *)LogicGameObjectFactory::createGameObjectByData(a2, a2);
      HigherInt = LogicLong::getHigherInt(a5);
      LowerInt = LogicLong::getLowerInt(a5);
      v18 = 0;
      while ( 1 )
      {
        v19 = (_DWORD *)*((_QWORD *)this + v18 + 3);
        if ( *v19 == HigherInt && v19[1] == LowerInt )
          break;
        if ( ++v18 >= 2 )
        {
          LODWORD(v18) = -1;
          break;
        }
      }
      v20 = (LogicMath *)LogicMath::max(a3, 250, v17);
      v22 = LogicMath::min(v20, 500 * *((_DWORD *)this + 40) - 250, v21);
      v24 = (LogicMath *)LogicMath::max(a4, 250, v23);
      v26 = LogicMath::min(v24, 500 * *((_DWORD *)this + 41) - 250, v25);
      if ( (*(unsigned int (__fastcall **)(const #916 *))(*(_QWORD *)a2 + 56LL))(a2) )
        FlyingHeight = LogicCharacterData::getFlyingHeight(a2);
      else
        FlyingHeight = 0;
      LogicGameObject::setOwnerIndex(GameObjectByData, v18);
      LogicGameObject::setPosition(GameObjectByData, v22, v26, FlyingHeight);
      if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)GameObjectByData + 88LL))(GameObjectByData) == 5 )
      {
        LaneID = LogicBattle::getLaneID(this, v22, v26);
        LogicCharacter::setLaneID(GameObjectByData, LaneID);
        Direction = LogicCharacter::getDirection(GameObjectByData);
        if ( (_DWORD)v18 )
          v30 = -256;
        else
          v30 = 256;
        *(_DWORD *)(Direction + 4) = v30;
      }
      if ( (a7 & 1) == 0
        && (SpawnEffect
         || (*(unsigned int (__fastcall **)(const #916 *))(*(_QWORD *)a2 + 56LL))(a2)
         && (SpawnEffect = (const #822 *)LogicCharacterData::getSpawnEffect(a2)) != 0) )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 40LL);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, const #822 *, _QWORD, const #1236 *, _QWORD))(*(_QWORD *)v31 + 72LL))(
          v31,
          v22,
          v26,
          FlyingHeight,
          SpawnEffect,
          0,
          a5,
          0);
      }
      return GameObjectByData;
    }

    __int64 __fastcall LogicBattle::getAccountIndex(UnbindFacebookAccountMessage *this, int a2, int a3)
    {
      __int64 result; // x0
      char *v5; // x8
      _DWORD *v6; // x9
    
      result = 0;
      v5 = (char *)this + 24;
      while ( 1 )
      {
        v6 = *(_DWORD **)&v5[8 * result];
        if ( *v6 == a2 && v6[1] == a3 )
          break;
        if ( ++result >= 2 )
          return 0xFFFFFFFFLL;
      }
      return result;
    }

    __int64 __fastcall LogicBattle::getTilemapWidth(UnbindFacebookAccountMessage *this)
    {
      return *((unsigned int *)this + 40);
    }

    __int64 __fastcall LogicBattle::getTilemapHeight(UnbindFacebookAccountMessage *this)
    {
      return *((unsigned int *)this + 41);
    }

    bool __fastcall LogicBattle::isReplay(UnbindFacebookAccountMessage *this)
    {
      return *((_DWORD *)this + 4) == 3;
    }

    __int64 __fastcall LogicBattle::getWinnerAvatar(UnbindFacebookAccountMessage *this, const char *a2)
    {
      if ( !*((_BYTE *)this + 280) )
        Debugger::error((__siginfo *)"getWinnerAvatar too soon", a2);
      if ( *((_DWORD *)this + 44) > 1u )
        return 0;
      else
        return LogicGameMode::getAvatar(*(_QWORD *)this);
    }

    __int64 __fastcall LogicBattle::getLoserAvatar(UnbindFacebookAccountMessage *this, const char *a2)
    {
      if ( !*((_BYTE *)this + 280) )
        Debugger::error((__siginfo *)"getLoserAvatar too soon", a2);
      if ( *((_DWORD *)this + 44) > 1u )
        return 0;
      else
        return LogicGameMode::getAvatar(*(_QWORD *)this);
    }

    __int64 __fastcall LogicBattle::isEndConditionMatched(UnbindFacebookAccountMessage *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x20
      const char *v5; // x2
      int MatchLengthSeconds; // w20
      int OvertimeLengthSeconds; // w21
      const char *v8; // x2
      int v9; // w8
      __int64 v10; // x20
      const char *v11; // x2
      __int64 v12; // x19
      int Stars; // w21
    
      if ( *((int *)this + 42) > 0 )
        return 1;
      v4 = 1;
      Debugger::doAssert((Debugger *)1, (bool)"", a3);
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 152LL))(*((_QWORD *)this + 12)) )
      {
        v4 = 1;
        Debugger::doAssert((Debugger *)1, (bool)"", v5);
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 152LL))(*((_QWORD *)this + 13)) )
        {
          MatchLengthSeconds = LogicLocationData::getMatchLengthSeconds(*((#849 **)this + 8));
          OvertimeLengthSeconds = LogicLocationData::getOvertimeLengthSeconds(*((#849 **)this + 8));
          if ( MatchLengthSeconds < 1 )
            return 0;
          v9 = (int)LogicGameMode::getTick(*(#1028 **)this) / 20;
          if ( v9 < OvertimeLengthSeconds + MatchLengthSeconds )
          {
            if ( v9 < MatchLengthSeconds )
              return 0;
            Debugger::doAssert((Debugger *)1, (bool)"", v8);
            v10 = *((_QWORD *)this + 12);
            Debugger::doAssert((Debugger *)1, (bool)"", v11);
            v12 = *((_QWORD *)this + 13);
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 200LL))(v12) )
            {
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 200LL))(v10) )
              {
                Stars = LogicSummoner::getStars(v10, v12);
                if ( Stars == (unsigned int)LogicSummoner::getStars(v12, v10) )
                  return 0;
              }
            }
          }
          return 1;
        }
      }
      return v4;
    }

    __int64 __fastcall LogicBattle::getLeaderCharacter(UnbindFacebookAccountMessage *this, unsigned int a2, const char *a3)
    {
      __int64 v4; // x20
    
      v4 = 0;
      while ( **((_QWORD **)this + v4 + 3) != __PAIR64__((unsigned int)a3, a2) )
      {
        if ( ++v4 >= 2 )
          return 0;
      }
      if ( (_DWORD)v4 != -1 )
      {
        Debugger::doAssert((Debugger *)((unsigned int)v4 < 2), (bool)"", a3);
        return *((_QWORD *)this + v4 + 12);
      }
      return 0;
    }

    __int64 __fastcall LogicBattle::getLeaderCharacter(UnbindFacebookAccountMessage *this, const #962 *a2)
    {
      unsigned int v4; // w21
      const char *v5; // x2
    
      v4 = *(_DWORD *)LogicClientAvatar::getAccountId(a2);
      v5 = (const char *)*(unsigned int *)(LogicClientAvatar::getAccountId(a2) + 4);
      return LogicBattle::getLeaderCharacter(this, v4, v5);
    }

    __int64 __fastcall LogicBattle::encode(#916 **this, #1226 *a2, const #962 *a3)
    {
      const #1236 *v6; // x2
      const #1236 *v7; // x2
      int v8; // w3
      bool v9; // w23
      LogicSummoner *LeaderCharacter; // x22
      unsigned int v11; // w24
      _DWORD *AccountId; // x0
      const char *v13; // x2
      __int64 v14; // x8
      _DWORD *v15; // x11
      unsigned int *v16; // x8
      const #962 *AvatarByAccountID; // x0
      #837 *v18; // x21
      __int64 v19; // x23
      char *v20; // x25
      __int64 v21; // x22
      __int64 i; // x22
      __int64 j; // x23
      __int64 v24; // x24
      int v25; // w22
      __int64 v26; // x25
      __int64 v27; // x21
      char *v28; // x20
      __int64 result; // x0
    
      ByteStreamHelper::writeDataReference((int)a2, *(this + 8));
      ByteStreamHelper::writeDataReference((int)a2, *(this + 10));
      ByteStreamHelper::writeDataReference((int)a2, *(this + 11));
      ByteStreamHelper::encodeLogicLong(a2, *(this + 3), v6);
      ByteStreamHelper::encodeLogicLong(a2, *(this + 4), v7);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 10));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 11));
      ByteStreamHelper::writeConstantSizeIntArray(a2, (ChecksumEncoder *)(this + 16), (const int *)8, v8);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 4));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 42));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 44));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 280));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 281));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 282));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 283));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 292));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 172));
      if ( a3 && !*((_DWORD *)this + 4) )
      {
        AccountId = (_DWORD *)LogicClientAvatar::getAccountId(a3);
        v14 = 0;
        while ( 1 )
        {
          v15 = *(this + v14 + 3);
          if ( *v15 == *AccountId && v15[1] == AccountId[1] )
            break;
          if ( ++v14 >= 2 )
          {
            v11 = 0;
            goto LABEL_10;
          }
        }
        v11 = v14 ^ 1;
    LABEL_10:
        Debugger::doAssert((Debugger *)(v11 < 2), (bool)"", v13);
        v16 = (unsigned int *)*(this + (int)v11 + 3);
        AvatarByAccountID = (const #962 *)LogicGameMode::getAvatarByAccountID(*this, *v16, v16[1]);
        LeaderCharacter = (LogicSummoner *)LogicBattle::getLeaderCharacter(
                                             (UnbindFacebookAccountMessage *)this,
                                             AvatarByAccountID);
        v9 = *((_BYTE *)LeaderCharacter + 210) != 0;
        LogicSummoner::setEncodeDeckDataEnabled(LeaderCharacter, 0);
      }
      else
      {
        v9 = 0;
        LeaderCharacter = 0;
        v11 = -1;
      }
      v18 = (#837 *)*((_QWORD *)*this + 8);
      LogicGameObjectManager::encode(v18, a2);
      if ( LeaderCharacter )
        LogicSummoner::setEncodeDeckDataEnabled(LeaderCharacter, v9);
      v19 = 0;
      v20 = (char *)(this + 6);
      do
      {
        v21 = (v11 != (_DWORD)v19) & ((unsigned int)LogicSpellDeck::isEmpty(*(AcceptChallengeMessage **)&v20[8 * v19]) ^ 1);
        (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL))(a2, v21);
        if ( (_DWORD)v21 )
          LogicSpellDeck::encode(*(AcceptChallengeMessage **)&v20[8 * v19], a2);
        ++v19;
      }
      while ( v19 != 2 );
      for ( i = 0; i != 16; i += 8 )
        LogicGameObjectManager::writeGameObjectReference(v18, a2, *(#916 **)((char *)this + i + 96));
      for ( j = 0; j != 2; ++j )
      {
        v24 = (__int64)*(this + j + 14);
        v25 = *(_DWORD *)(v24 + 12);
        (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, (unsigned int)v25);
        if ( v25 >= 1 )
        {
          v26 = 0;
          do
            LogicGameObjectManager::writeGameObjectReference(v18, a2, *(const GameMode **)(*(_QWORD *)v24 + 8 * v26++));
          while ( v25 != (_DWORD)v26 );
        }
      }
      if ( *((_BYTE *)this + 280) )
      {
        (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 71));
        (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 72));
      }
      v27 = 0;
      v28 = (char *)(this + 31);
      do
      {
        result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)&v28[v27]);
        v27 += 4;
      }
      while ( v27 != 24 );
      return result;
    }

    __int64 __fastcall LogicBattle::decode(UnbindFacebookAccountMessage *this, #1225 *a2, int a3, LogicSummoner *a4)
    {
      __int64 DataReference; // x0
      const char *v9; // x2
      int v10; // w2
      int v11; // w2
      LogicLong *v12; // x2
      LogicLong *v13; // x2
      int v14; // w3
      #837 *v15; // x22
      __int64 v16; // x24
      __int64 v17; // x23
      int v18; // w8
      AcceptChallengeMessage *v19; // x0
      __int64 i; // x25
      __int64 v21; // x23
      int v22; // w24
      int v23; // w0
      __int64 j; // x22
      __int64 result; // x0
      __int64 GameObjectReference; // [xsp+8h] [xbp-48h] BYREF
    
      DataReference = ByteStreamHelper::readDataReference(a2, (ByteStream *)0xF, a3);
      *((_QWORD *)this + 8) = DataReference;
      Debugger::doAssert((Debugger *)(DataReference != 0), (bool)"", v9);
      if ( !*((_QWORD *)this + 1) )
        LogicBattle::setLocation(this, *((const #849 **)this + 8), 1, a4);
      *((_QWORD *)this + 10) = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x12, v10);
      *((_QWORD *)this + 11) = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x36, v11);
      ByteStreamHelper::decodeLogicLong(a2, *((ByteStream **)this + 3), v12);
      ByteStreamHelper::decodeLogicLong(a2, *((ByteStream **)this + 4), v13);
      *((_DWORD *)this + 10) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 11) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      ByteStreamHelper::readConstantSizeIntArray(a2, (UnbindFacebookAccountMessage *)((char *)this + 128), (int *)8, v14);
      *((_DWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 42) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 44) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_BYTE *)this + 280) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 281) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 282) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 283) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 292) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 172) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      v15 = *(#837 **)(*(_QWORD *)this + 64LL);
      LogicGameObjectManager::decode(v15, a2, a3);
      v16 = 48;
      v17 = 96;
      do
      {
        v18 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
        v19 = *(AcceptChallengeMessage **)((char *)this + v16);
        if ( v18 )
          LogicSpellDeck::decode(v19, a2);
        else
          LogicSpellDeck::clear(v19);
        v16 += 8;
      }
      while ( v16 != 64 );
      do
      {
        *(_QWORD *)((char *)this + v17) = LogicGameObjectManager::readGameObjectReference(v15, a2, 5);
        v17 += 8;
      }
      while ( v17 != 112 );
      for ( i = 0; i != 2; ++i )
      {
        v21 = *((_QWORD *)this + i + 14);
        *(_DWORD *)(v21 + 12) = 0;
        v22 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
        if ( v22 >= 1 )
        {
          do
          {
            GameObjectReference = LogicGameObjectManager::readGameObjectReference(v15, a2, 5);
            LogicArrayList<LogicCharacter const*>::add(v21, &GameObjectReference);
            --v22;
          }
          while ( v22 );
        }
      }
      if ( *((_BYTE *)this + 280) )
      {
        *((_DWORD *)this + 71) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
        v23 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      }
      else
      {
        v23 = 0;
        *((_DWORD *)this + 71) = 0;
      }
      *((_DWORD *)this + 72) = v23;
      for ( j = 248; j != 272; j += 4 )
      {
        result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
        *(_DWORD *)((char *)this + j) = result;
      }
      if ( a3 )
      {
        result = LogicVersion::isDev((#1122 *)result);
        if ( (result & 1) == 0 )
          return LogicBattle::resetSimulatedManaTimers(this);
      }
      return result;
    }

    __int64 __fastcall LogicBattle::setLocation(
            UnbindFacebookAccountMessage *this,
            const #849 *a2,
            const char *a3,
            LogicSummoner *a4)
    {
      bool v5; // w19
      int v8; // w2
      const char *v9; // x2
      const #1091 *TilemapData; // x21
      const char *v11; // x2
      String v13; // [xsp+0h] [xbp-50h] BYREF
      String v14; // [xsp+18h] [xbp-38h] BYREF
    
      v5 = (char)a3;
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", a3);
      *((_QWORD *)this + 8) = a2;
      LogicData::getDebuggerName((__int64 *)&v13.m_length, a2);
      operator+(&v14, "Location: ", &v13);
      Debugger::hudPrint((__siginfo *)&v14, (const String *)0xFFFFFFFFLL, v8);
      String::~String(&v14);
      String::~String(&v13);
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 1) == 0), (bool)"", v9);
      if ( a4 )
        (*(void (__fastcall **)(LogicSummoner *, const #849 *))(*(_QWORD *)a4 + 200LL))(a4, a2);
      TilemapData = (const #1091 *)LogicLocationData::getTilemapData(a2);
      Debugger::doAssert((Debugger *)(TilemapData != 0), (bool)"", v11);
      return LogicBattle::setTilemap(this, TilemapData, v5);
    }

    __int64 __fastcall LogicBattle::resetSimulatedManaTimers(
            UnbindFacebookAccountMessage *this,
            __int64 a2,
            const char *a3)
    {
      __int64 v3; // x21
      char *v4; // x22
      LogicSummoner *v5; // x20
      __int64 result; // x0
    
      v3 = 0;
      v4 = (char *)this + 96;
      do
      {
        Debugger::doAssert((Debugger *)1, (bool)"", a3);
        v5 = *(LogicSummoner **)&v4[v3];
        result = (*(__int64 (__fastcall **)(LogicSummoner *))(*(_QWORD *)v5 + 200LL))(v5);
        if ( (_DWORD)result )
          result = LogicSummoner::resetSimulatedManaTimers(v5);
        v3 += 8;
      }
      while ( v3 != 16 );
      return result;
    }

    __int64 __fastcall LogicBattle::getSecondsLeft(#1028 **this)
    {
      int v2; // w20
      int v3; // w20
      int OvertimeLengthSeconds; // w0
    
      v2 = (int)LogicGameMode::getTick(*this) / 20;
      v3 = LogicLocationData::getMatchLengthSeconds(*(this + 8)) - v2;
      if ( *((_BYTE *)this + 172) )
        OvertimeLengthSeconds = LogicLocationData::getOvertimeLengthSeconds(*(this + 8));
      else
        OvertimeLengthSeconds = 0;
      if ( OvertimeLengthSeconds + v3 <= 0 )
        return 0;
      else
        return (unsigned int)(OvertimeLengthSeconds + v3);
    }

    __int64 __fastcall LogicBattle::getMillisecondsGone(#1028 **this)
    {
      return 50 * (unsigned int)LogicGameMode::getTick(*this);
    }

    __int64 __fastcall LogicBattle::setType(__int64 this, int a2)
    {
      *(_DWORD *)(this + 16) = a2;
      return this;
    }

    AcceptChallengeMessage *__fastcall LogicBattle::setSpellDecks(
            UnbindFacebookAccountMessage *this,
            AcceptChallengeMessage *a2,
            AcceptChallengeMessage *a3)
    {
      AcceptChallengeMessage *v6; // x0
      __int64 v7; // x0
      AcceptChallengeMessage *result; // x0
      #893 *Player; // x22
      AcceptChallengeMessage *v10; // x0
      #893 *v11; // x20
      AcceptChallengeMessage *v12; // x1
    
      v6 = (AcceptChallengeMessage *)*((_QWORD *)this + 6);
      if ( v6 != a2 )
      {
        if ( v6 )
        {
          (*(void (__fastcall **)(AcceptChallengeMessage *))(*(_QWORD *)v6 + 16LL))(v6);
          v7 = *((_QWORD *)this + 6);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          *((_QWORD *)this + 6) = 0;
        }
        *((_QWORD *)this + 6) = a2;
      }
      result = (AcceptChallengeMessage *)*((_QWORD *)this + 7);
      if ( result != a3 )
      {
        if ( result )
        {
          (*(void (__fastcall **)(AcceptChallengeMessage *))(*(_QWORD *)result + 16LL))(result);
          result = (AcceptChallengeMessage *)*((_QWORD *)this + 7);
          if ( result )
            result = (AcceptChallengeMessage *)(*(__int64 (__fastcall **)(AcceptChallengeMessage *))(*(_QWORD *)result + 8LL))(result);
          *((_QWORD *)this + 7) = 0;
        }
        *((_QWORD *)this + 7) = a3;
      }
      if ( *((_DWORD *)this + 4) != 3 )
      {
        result = (AcceptChallengeMessage *)*((_QWORD *)this + 34);
        if ( result )
        {
          Player = (#893 *)LogicBattleLog::getPlayer(result, 0);
          v10 = (AcceptChallengeMessage *)LogicSpellDeck::clone(a2);
          LogicBattleLogPlayer::setDeck(Player, v10);
          v11 = (#893 *)LogicBattleLog::getPlayer(*((LogicJSONParser **)this + 34), 1);
          v12 = (AcceptChallengeMessage *)LogicSpellDeck::clone(a3);
          return (AcceptChallengeMessage *)LogicBattleLogPlayer::setDeck(v11, v12);
        }
      }
      return result;
    }

    __int64 __fastcall LogicBattle::getDeck(UnbindFacebookAccountMessage *this, int a2)
    {
      return *((_QWORD *)this + a2 + 6);
    }

    __int64 __fastcall LogicBattle::getTotalTowerCount(UnbindFacebookAccountMessage *this)
    {
      if ( *((_QWORD *)this + 9) )
        return LogicTilemapData::getTowerCount();
      else
        return 4;
    }

    __int64 __fastcall LogicBattle::getLocationData(UnbindFacebookAccountMessage *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall LogicBattle::setTilemap(UnbindFacebookAccountMessage *this, const #1091 *a2, char a3)
    {
      int MapWidth; // w22
      int MapHeight; // w0
      __int64 result; // x0
    
      *((_QWORD *)this + 9) = a2;
      MapWidth = LogicTilemapData::getMapWidth(a2);
      MapHeight = LogicTilemapData::getMapHeight(a2);
      LogicBattle::setTilemapSize(this, MapWidth, MapHeight);
      LogicGameObjectManager::setLogicBattle(*(#837 **)(*(_QWORD *)this + 64LL), this);
      result = LogicBattle::addDecos(this);
      if ( (a3 & 1) == 0 )
        return LogicBattle::initDefaultSector((#1028 **)this, a2);
      return result;
    }

    __int64 __fastcall LogicBattle::isRunningLogic(UnbindFacebookAccountMessage *this)
    {
      return *(unsigned __int8 *)(*(_QWORD *)this + 424LL);
    }

    __int64 __fastcall LogicBattle::updatePrevCoordinates(UnbindFacebookAccountMessage *this)
    {
      return LogicGameObjectManager::updatePrevCoordinates(*(#837 **)(*(_QWORD *)this + 64LL));
    }

    __int64 __fastcall LogicBattle::battleEnded(__int64 this, #962 *a2)
    {
      _QWORD *v3; // x19
      int v4; // w22
      int MatchLengthSeconds; // w21
      const char *v6; // x2
      const char *v7; // x2
      int v8; // w28
      int Stars; // w21
      GameMode *v10; // x23
      GameMode *v11; // x22
      const char *v12; // x2
      #962 *AvatarByAccountID; // x24
      const char *v14; // x2
      #962 *v15; // x25
      __int64 v16; // x8
      _BOOL4 v17; // w8
      int v18; // w20
      int v19; // w0
      #1060 *v20; // x0
      TextField *ServerEventKillSpell; // x0
      _BOOL4 v22; // w9
      int v23; // w8
      __int64 v24; // x24
      const char *v25; // x1
      __int64 v26; // x25
      __int64 v27; // x26
      __int64 v28; // x27
      int v29; // w20
      int v30; // w21
      __int64 v31; // x28
      __int64 OwnerAccountId; // x0
      __int64 v33; // x4
      void (__fastcall *v34)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD); // x20
      __int64 v35; // x23
      __int64 v36; // x25
      __int64 v37; // x26
      __int64 v38; // x27
      __int64 v39; // x0
      __int64 WinnerAvatar; // x24
      const char *v41; // x1
      __int64 LoserAvatar; // x0
      __int64 v43; // x22
      int v45; // w20
      int v46; // w26
      __int64 Arena; // x25
      __int64 v48; // x23
      int NpcWinCount; // w0
      __int64 v50; // x0
      __int64 v51; // x25
      void (__fastcall *v52)(__int64, __int64); // x20
      __int64 v53; // x0
      __int64 v54; // x0
      int NpcLoseCount; // w0
      __int64 v56; // x23
      void (__fastcall *v57)(__int64, __int64); // x20
      __int64 v58; // x0
      LogicJSONParser *v59; // x0
      #893 *Player; // x23
      #893 *v61; // x22
      LogicBattleLog *v62; // x24
      const char *v63; // x2
      #962 *v64; // x0
      const LogicArenaData *v65; // x0
      const char *v66; // x2
      __int64 v67; // x0
      const char *v68; // x2
      __int64 v69; // x0
      const char *v70; // x2
      __int64 v71; // x0
      const char *v72; // x2
      __int64 v73; // x0
      int v74; // w1
      _BOOL4 v75; // w20
      __int64 v76; // x21
      unsigned __int64 v77; // x22
      const char *v78; // x2
      #962 *v79; // x0
      __int64 NextWinnerChest; // x0
      LogicJSONParser *v81; // x0
      int v82; // w1
      __int64 v83; // x0
      __int64 v84; // x0
      void (__fastcall *v85)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD); // [xsp+8h] [xbp-58h]
    
      v3 = (_QWORD *)this;
      if ( *(_BYTE *)(this + 280) )
        return this;
      *(_BYTE *)(this + 280) = 1;
      *(_DWORD *)(this + 168) = 1;
      v4 = *(unsigned __int8 *)(this + 172);
      MatchLengthSeconds = LogicLocationData::getMatchLengthSeconds(*(#849 **)(this + 64));
      if ( v4 )
        MatchLengthSeconds += LogicLocationData::getOvertimeLengthSeconds((#849 *)v3[8]);
      *((_BYTE *)v3 + 281) = (int)LogicGameMode::getTick((#1028 *)*v3) / 20 >= MatchLengthSeconds;
      Debugger::doAssert((Debugger *)1, (bool)"", v6);
      if ( !a2 )
      {
        v10 = (GameMode *)v3[12];
        Debugger::doAssert((Debugger *)1, (bool)"", v7);
        v11 = (GameMode *)v3[13];
        if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v11 + 200LL))(v11)
          && (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v10 + 200LL))(v10) )
        {
          Stars = LogicSummoner::getStars(v10, v11);
          v8 = LogicSummoner::getStars(v11, v10);
          Debugger::doAssert((Debugger *)1, (bool)"", v12);
          AvatarByAccountID = (#962 *)LogicGameMode::getAvatarByAccountID(
                                        *v3,
                                        *(unsigned int *)v3[3],
                                        *(unsigned int *)(v3[3] + 4LL));
          Debugger::doAssert((Debugger *)1, (bool)"", v14);
          v15 = (#962 *)LogicGameMode::getAvatarByAccountID(*v3, *(unsigned int *)v3[4], *(unsigned int *)(v3[4] + 4LL));
          v16 = v3[34];
          if ( v16 )
            v17 = *(unsigned __int8 *)(v16 + 32) != 0;
          else
            v17 = 0;
          v22 = *((_DWORD *)v3 + 4) == 1 && v3[10] != 0;
          if ( !v17 && !v22 )
          {
            LogicClientAvatar::setStarCount(AvatarByAccountID, Stars);
            LogicClientAvatar::setStarCount(v15, v8);
          }
          if ( Stars < v8 )
          {
            v23 = 1;
    LABEL_31:
            *((_DWORD *)v3 + 44) = v23;
    LABEL_32:
            v24 = *(_QWORD *)(*(_QWORD *)(*v3 + 64LL) + 40LL);
            if ( !*((_DWORD *)v3 + 44) )
              goto LABEL_36;
            if ( ((*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v10 + 152LL))(v10) & 1) == 0 )
            {
              v85 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v24 + 72LL);
              v26 = LogicGameObject::getX(v10);
              v27 = LogicGameObject::getY(v10);
              v28 = LogicGameObject::getZ(v10);
              v29 = Stars;
              v30 = v8;
              v31 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v10 + 176LL))(v10);
              OwnerAccountId = LogicGameObject::getOwnerAccountId(v10);
              v33 = v31;
              v8 = v30;
              Stars = v29;
              v85(v24, v26, v27, v28, v33, 0, OwnerAccountId, 0);
            }
            if ( *((_DWORD *)v3 + 44) != 1 )
            {
    LABEL_36:
              if ( ((*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v11 + 152LL))(v11) & 1) == 0 )
              {
                v34 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v24 + 72LL);
                v35 = LogicGameObject::getX(v11);
                v36 = LogicGameObject::getY(v11);
                v37 = LogicGameObject::getZ(v11);
                v38 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v11 + 176LL))(v11);
                v39 = LogicGameObject::getOwnerAccountId(v11);
                v34(v24, v35, v36, v37, v38, 0, v39, 0);
              }
            }
            if ( *((_DWORD *)v3 + 4) == 1 && v3[10] && *((_DWORD *)v3 + 44) != -1 )
            {
              WinnerAvatar = LogicBattle::getWinnerAvatar((UnbindFacebookAccountMessage *)v3, v25);
              LoserAvatar = LogicBattle::getLoserAvatar((UnbindFacebookAccountMessage *)v3, v41);
              v43 = LoserAvatar;
              if ( WinnerAvatar && LoserAvatar != 0 )
              {
                v45 = *(_DWORD *)(WinnerAvatar + 64);
                v46 = *(_DWORD *)(LoserAvatar + 64);
                Arena = LogicClientAvatar::getArena((#962 *)WinnerAvatar);
                v48 = LogicClientAvatar::getArena((#962 *)v43);
                LogicClientAvatar::setArenaBeforeLastNPCMatch((LogicClientAvatar *)WinnerAvatar);
                LogicClientAvatar::setArenaBeforeLastNPCMatch((LogicClientAvatar *)v43);
                LogicGameMode::updateScores(
                  (LogicGameMode *)*v3,
                  (LogicClientAvatar *)WinnerAvatar,
                  (LogicClientAvatar *)v43);
                *((_DWORD *)v3 + 71) = *(_DWORD *)(WinnerAvatar + 64) - v45;
                *((_DWORD *)v3 + 72) = *(_DWORD *)(v43 + 64) - v46;
                NpcWinCount = LogicClientAvatar::getNpcWinCount(WinnerAvatar);
                LogicClientAvatar::setNpcWinCount((LogicClientAvatar *)WinnerAvatar, NpcWinCount + 1);
                LogicClientAvatar::refreshArena((LogicClientAvatar *)WinnerAvatar);
                v50 = LogicClientAvatar::getChangeListener((#962 *)WinnerAvatar);
                (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v50 + 104LL))(
                  v50,
                  *((unsigned int *)v3 + 71),
                  1,
                  0,
                  0);
                if ( LogicClientAvatar::getArena((#962 *)WinnerAvatar) != Arena )
                {
                  v51 = LogicClientAvatar::getChangeListener((#962 *)WinnerAvatar);
                  v52 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 168LL);
                  v53 = LogicClientAvatar::getArena((#962 *)WinnerAvatar);
                  v52(v51, v53);
                }
                v54 = LogicClientAvatar::getChangeListener((#962 *)v43);
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v54 + 104LL))(
                  v54,
                  *((unsigned int *)v3 + 72),
                  0,
                  1,
                  0);
                NpcLoseCount = LogicClientAvatar::getNpcLoseCount(v43);
                LogicClientAvatar::setNpcLoseCount((LogicClientAvatar *)v43, NpcLoseCount + 1);
                if ( LogicClientAvatar::getArena((#962 *)v43) != v48 )
                {
                  v56 = LogicClientAvatar::getChangeListener((#962 *)v43);
                  v57 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 168LL);
                  v58 = LogicClientAvatar::getArena((#962 *)v43);
                  v57(v56, v58);
                }
              }
            }
            goto LABEL_49;
          }
          if ( Stars > v8 )
          {
            *((_DWORD *)v3 + 44) = 0;
            goto LABEL_32;
          }
    LABEL_30:
          v23 = -1;
          goto LABEL_31;
        }
        v18 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v10 + 240LL))(v10);
        v19 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v11 + 240LL))(v11);
        if ( v18 >= v19 )
        {
          if ( v18 <= v19 )
          {
            v8 = 0;
            Stars = 0;
            goto LABEL_30;
          }
          *((_DWORD *)v3 + 44) = 0;
          v20 = v11;
        }
        else
        {
          *((_DWORD *)v3 + 44) = 1;
          v20 = v10;
        }
        ServerEventKillSpell = (TextField *)LogicCharacter::getServerEventKillSpell(v20);
        if ( ServerEventKillSpell )
          LogicSpell::increaseServerEvent(ServerEventKillSpell, 2, 1);
        v8 = 0;
        Stars = 0;
        goto LABEL_32;
      }
      v8 = 0;
      Stars = 0;
      *((_DWORD *)v3 + 44) = (#962 *)LogicGameMode::getAvatarByAccountID(
                                       *v3,
                                       *(unsigned int *)v3[3],
                                       *(unsigned int *)(v3[3] + 4LL)) == a2;
    LABEL_49:
      if ( *((_DWORD *)v3 + 4) != 3 )
      {
        v59 = (LogicJSONParser *)v3[34];
        if ( v59 )
        {
          Player = (#893 *)LogicBattleLog::getPlayer(v59, 0);
          v61 = (#893 *)LogicBattleLog::getPlayer((LogicJSONParser *)v3[34], 1);
          v62 = (LogicBattleLog *)v3[34];
          Debugger::doAssert((Debugger *)1, (bool)"", v63);
          v64 = (#962 *)LogicGameMode::getAvatarByAccountID(*v3, *(unsigned int *)v3[3], *(unsigned int *)(v3[3] + 4LL));
          v65 = (const LogicArenaData *)LogicClientAvatar::getArena(v64);
          LogicBattleLog::setArenaData(v62, v65);
          LogicBattleLogPlayer::setStars(Player, Stars);
          LogicBattleLogPlayer::setStars(v61, v8);
          if ( !(unsigned int)LogicBattleLogPlayer::getScore(Player) && !(unsigned int)LogicBattleLogPlayer::getScore(v61) )
          {
            Debugger::doAssert((Debugger *)1, (bool)"", v66);
            v67 = LogicGameMode::getAvatarByAccountID(*v3, *(unsigned int *)v3[3], *(unsigned int *)(v3[3] + 4LL));
            LogicBattleLogPlayer::setScore(Player, *(_DWORD *)(v67 + 64));
            Debugger::doAssert((Debugger *)1, (bool)"", v68);
            v69 = LogicGameMode::getAvatarByAccountID(*v3, *(unsigned int *)v3[3], *(unsigned int *)(v3[3] + 4LL));
            LogicBattleLogPlayer::setPrevScore(Player, *(_DWORD *)(v69 + 64));
            Debugger::doAssert((Debugger *)1, (bool)"", v70);
            v71 = LogicGameMode::getAvatarByAccountID(*v3, *(unsigned int *)v3[4], *(unsigned int *)(v3[4] + 4LL));
            LogicBattleLogPlayer::setScore(v61, *(_DWORD *)(v71 + 64));
            Debugger::doAssert((Debugger *)1, (bool)"", v72);
            v73 = LogicGameMode::getAvatarByAccountID(*v3, *(unsigned int *)v3[4], *(unsigned int *)(v3[4] + 4LL));
            LogicBattleLogPlayer::setPrevScore(v61, *(_DWORD *)(v73 + 64));
          }
          v74 = *((_DWORD *)v3 + 44);
          if ( v74 == -1 )
          {
            v83 = LogicBattleLog::getPlayer((LogicJSONParser *)v3[34], 0);
            LogicBattleLogPlayer::setChestData(v83, 0);
            v81 = (LogicJSONParser *)v3[34];
            v82 = 1;
          }
          else
          {
            v75 = v74 == 0;
            v76 = LogicBattleLog::getPlayer((LogicJSONParser *)v3[34], v74);
            v77 = *((int *)v3 + 44);
            Debugger::doAssert((Debugger *)(v77 < 2), (bool)"", v78);
            v79 = (#962 *)LogicGameMode::getAvatarByAccountID(
                            *v3,
                            *(unsigned int *)v3[v77 + 3],
                            *(unsigned int *)(v3[v77 + 3] + 4LL));
            NextWinnerChest = LogicClientAvatar::getNextWinnerChest(v79, (const #1143 *)v3[11]);
            LogicBattleLogPlayer::setChestData(v76, NextWinnerChest);
            v81 = (LogicJSONParser *)v3[34];
            v82 = v75;
          }
          v84 = LogicBattleLog::getPlayer(v81, v82);
          LogicBattleLogPlayer::setChestData(v84, 0);
        }
        LogicBattle::calculateReplayValue((UnbindFacebookAccountMessage *)v3);
      }
      return LogicBattle::setSpawnPointsEnabled((UnbindFacebookAccountMessage *)v3, 0);
    }

    __int64 __fastcall LogicBattle::getArena(UnbindFacebookAccountMessage *this)
    {
      return *((_QWORD *)this + 11);
    }

    void __fastcall LogicBattle::calculateReplayValue(UnbindFacebookAccountMessage *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x25
      const char *v5; // x2
      LogicDataTables *v6; // x0
      __int64 v7; // x24
      #869 *Globals; // x0
      int Stars; // w23
      int v10; // w2
      int v11; // w26
      __int64 v12; // x19
      int v13; // w11
      int v14; // w20
      int v15; // w21
      char *v16; // x22
      int v17; // w8
      int v18; // w10
      unsigned __int64 v19; // x0
      __int64 v20; // x0
      __int64 v21; // x19
      LogicArenaData *v22; // x0
      int v23; // w19
      LogicArenaData *v24; // x0
      __int64 v25; // x0
      const char *v26; // x2
      LogicArenaData *v27; // x0
      int v28; // w19
      LogicArenaData *v29; // x0
      __int64 v30; // x20
      __int64 v31; // x26
      int v32; // w25
      __int64 v33; // x23
      __int64 v34; // x22
      __int64 v35; // x27
      LogicArenaData *v36; // x0
      int Hitpoints; // w28
      LogicArenaData *v38; // x0
      unsigned int v39; // w8
      int v40; // w9
      int v41; // w1
      int v42; // w2
      __int64 v43; // x24
      __int64 v44; // x0
      __int64 v45; // x25
      __int64 v46; // x20
      int v47; // w9
      unsigned int v48; // w8
      int v49; // w10
      int v50; // w11
      unsigned int v51; // w9
      #869 *v52; // x0
      int TvUnderdogWeight; // w0
      const char *v54; // x1
      int v55; // w8
      int v56; // w8
      __int64 v57; // x19
      __int64 v58; // x21
      const String *v59; // x1
      const char *v60; // x1
      const String *v61; // x1
      __int64 v62; // x8
      int v63; // [xsp+2Ch] [xbp-A4h]
      __int64 TvLeaderboardPositionWeight; // [xsp+30h] [xbp-A0h]
      __int64 v65; // [xsp+38h] [xbp-98h]
      int v66; // [xsp+40h] [xbp-90h]
      int v67; // [xsp+44h] [xbp-8Ch]
      String v69; // [xsp+50h] [xbp-80h] BYREF
      String v70; // [xsp+68h] [xbp-68h] BYREF
    
      Debugger::doAssert((Debugger *)1, (bool)"", a3);
      v4 = *((_QWORD *)this + 12);
      v6 = (LogicDataTables *)Debugger::doAssert((Debugger *)1, (bool)"", v5);
      v7 = *((_QWORD *)this + 13);
      Globals = (#869 *)LogicDataTables::getGlobals(v6);
      TvLeaderboardPositionWeight = LogicGlobals::getTvLeaderboardPositionWeight(
                                      Globals,
                                      (#1237 *)*((unsigned int *)this + 10),
                                      *((_DWORD *)this + 11));
      Stars = LogicSummoner::getStars(v4, v7);
      v11 = LogicSummoner::getStars(v7, v4);
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = (char *)this + 248;
      do
      {
        v17 = *(_DWORD *)&v16[v12];
        if ( v17 == 1 )
          v18 = v14 + 1;
        else
          v18 = v14;
        if ( v17 == 2 )
          ++v15;
        else
          v14 = v18;
        if ( Stars > v11 && v14 < v15 )
        {
          v19 = (unsigned int)(v15 - v14);
    LABEL_13:
          v13 = LogicMath::max((LogicMath *)v19, v13, v10);
          goto LABEL_14;
        }
        if ( Stars < v11 )
        {
          v19 = (unsigned int)(v14 - v15);
          if ( v14 > v15 )
            goto LABEL_13;
        }
    LABEL_14:
        v12 += 4;
      }
      while ( v12 != 24 );
      v63 = v13;
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 136LL))(v4);
      v21 = 0;
      if ( Stars > v11 && v20 )
      {
        v22 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 136LL))(v4);
        v23 = 100 * LogicHitpointComponent::getHitpoints(v22);
        v24 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 136LL))(v4);
        v21 = (unsigned int)(v23 / (int)LogicHitpointComponent::getMaxHitpoints(v24));
      }
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 136LL))(v7);
      if ( Stars >= v11 )
      {
        v66 = Stars;
        v67 = v11;
      }
      else
      {
        v66 = Stars;
        v67 = v11;
        if ( v25 )
        {
          v27 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 136LL))(v7);
          v28 = 100 * LogicHitpointComponent::getHitpoints(v27);
          v29 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 136LL))(v7);
          v21 = (unsigned int)(v28 / (int)LogicHitpointComponent::getMaxHitpoints(v29));
        }
      }
      v65 = v21;
      v30 = 0;
      v31 = 100;
      v32 = 100;
      do
      {
        Debugger::doAssert((Debugger *)1, (bool)"", v26);
        v33 = *((_QWORD *)this + v30 + 14);
        if ( *(int *)(v33 + 12) >= 1 )
        {
          v34 = 0;
          do
          {
            if ( v66 > v67 && (_DWORD)v30 == 0 || v66 < v67 && (_DWORD)v30 == 1 )
            {
              v35 = *(_QWORD *)(*(_QWORD *)v33 + 8 * v34);
              if ( v35 )
              {
                if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 136LL))(*(_QWORD *)(*(_QWORD *)v33 + 8 * v34)) )
                {
                  v36 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 136LL))(v35);
                  Hitpoints = LogicHitpointComponent::getHitpoints(v36);
                  v38 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 136LL))(v35);
                  v39 = 100 * Hitpoints / (int)LogicHitpointComponent::getMaxHitpoints(v38);
                  if ( v39 )
                    v40 = v39;
                  else
                    v40 = 1;
                  if ( Hitpoints > 0 )
                    v39 = v40;
                  if ( !Hitpoints )
                    v39 = 100;
                  if ( (_DWORD)v34 )
                  {
                    v32 = v39;
                    v31 = (unsigned int)v31;
                  }
                  else
                  {
                    v31 = v39;
                  }
                }
              }
            }
            ++v34;
          }
          while ( v34 < *(int *)(v33 + 12) );
        }
        ++v30;
      }
      while ( v30 != 2 );
      v43 = LogicMath::min((LogicMath *)v31, v32, (int)v26);
      v44 = (unsigned int)(v66 - v67);
      if ( v66 == v67 )
      {
        if ( v66 == 3 )
          v45 = 100;
        else
          v45 = (unsigned int)(10 * v66);
        v46 = TvLeaderboardPositionWeight;
      }
      else
      {
        v44 = LogicMath::abs((#1237 *)v44, v41);
        v46 = TvLeaderboardPositionWeight;
        if ( (int)v21 > 30 )
        {
          v47 = 92 - v32 - v31;
          if ( (int)v31 > 29 )
            v47 = 30;
          if ( v32 <= 29 )
            v48 = v47;
          else
            v48 = 30;
          if ( v67 + v66 > 2 )
            v48 += 10;
          if ( (int)v31 >= 30 )
            v49 = 0;
          else
            v49 = 10;
          if ( v32 >= 30 )
            v49 = 0;
          v50 = 91 - v43;
          if ( (int)v43 >= 30 )
            v50 = 60;
          if ( v67 + v66 <= 1 )
            v51 = v50;
          else
            v51 = v50 + 10;
          if ( (_DWORD)v44 != 1 )
            v51 = v49;
          if ( (_DWORD)v44 == 2 )
            v45 = v48;
          else
            v45 = v51;
        }
        else
        {
          v45 = (unsigned int)(40 * (31 - (int)v21) / 30 + 60);
        }
      }
      if ( v63 >= 1 )
      {
        v44 = LogicMath::max((LogicMath *)0x50, v45, v42);
        v45 = v44;
      }
      v52 = (#869 *)LogicDataTables::getGlobals((LogicDataTables *)v44);
      TvUnderdogWeight = LogicGlobals::getTvUnderdogWeight(v52, v63);
      if ( v66 == v67 )
        v55 = 100;
      else
        v55 = TvUnderdogWeight;
      v56 = v45 * v46 * v55;
      if ( v56 < 1010000 )
      {
        v58 = v21;
        if ( v56 > -10000 )
        {
          v57 = (unsigned int)(v56 / 10000);
        }
        else
        {
          Debugger::warning((__siginfo *)"Replay value is below 0", v54);
          v57 = 0;
        }
      }
      else
      {
        Debugger::warning((__siginfo *)"Replay value is higher than 100", v54);
        v57 = 100;
        v58 = v65;
      }
      String::format((String *)"TV ROYALE VALUE FOR REPLAY: %d", v54, v57);
      Debugger::print((Debugger *)&v70, v59);
      String::~String(&v70);
      String::format(
        (String *)"TV Royale value calculation: quality=%d, king hp=%d, tower hp=%d, leaderboard=%d",
        v60,
        v45,
        v58,
        v43,
        v46);
      Debugger::print((Debugger *)&v69, v61);
      String::~String(&v69);
      v62 = *((_QWORD *)this + 34);
      if ( v62 )
        *(_DWORD *)(v62 + 36) = v57;
    }

    __int64 __fastcall LogicBattle::setSpawnPointsEnabled(UnbindFacebookAccountMessage *this, bool a2)
    {
      __int64 result; // x0
      _QWORD *v4; // x20
      int v5; // w22
      __int64 v6; // x23
      Debugger *v7; // x21
    
      result = LogicGameObjectManager::getGameObjects(*(#837 **)(*(_QWORD *)this + 64LL));
      v4 = (_QWORD *)result;
      v5 = *(_DWORD *)(result + 12);
      if ( v5 >= 1 )
      {
        v6 = 0;
        do
        {
          v7 = *(Debugger **)(*v4 + 8 * v6);
          result = (*(__int64 (__fastcall **)(Debugger *))(*(_QWORD *)v7 + 88LL))(v7);
          if ( (_DWORD)result == 1 )
            result = LogicSpawnPoint::setEnabled(v7, a2);
          ++v6;
        }
        while ( v5 != (_DWORD)v6 );
      }
      return result;
    }

    bool __fastcall LogicBattle::isInsideBattleArea(UnbindFacebookAccountMessage *this, int a2, int a3)
    {
      return ((a3 | a2) & 0x80000000) == 0 && 500 * *((_DWORD *)this + 40) > a2 && 500 * *((_DWORD *)this + 41) > a3;
    }

    __int64 __fastcall LogicBattle::getNpcData(UnbindFacebookAccountMessage *this)
    {
      return *((_QWORD *)this + 10);
    }

    __int64 __fastcall LogicBattle::loadReplay(UnbindFacebookAccountMessage *this, #1234 *a2, #1234 *a3)
    {
      #1232 *JSONNumber; // x22
      const char *v7; // x1
      LogicDataTables *IntValue; // x0
      int v9; // w1
      const #849 *DataById; // x8
      #1232 *v11; // x22
      LogicDataTables *v12; // x0
      int v13; // w1
      __int64 v14; // x22
      #1229 *JSONBoolean; // x23
      char isTrue; // w0
      #1232 *v17; // x22
      LogicDataTables *v18; // x0
      int v19; // w1
      const #1228 *JSONArray; // x24
      const #1228 *v21; // x22
      const char *v22; // x1
      AcceptChallengeMessage *v23; // x23
      const char *v24; // x1
      AcceptChallengeMessage *v25; // x24
      const LogicJSONObject *JSONObject; // x23
      const LogicJSONObject *v27; // x21
      const char *v28; // x1
      #962 *v29; // x22
      const char *v30; // x1
      #962 *v31; // x23
      __int64 result; // x0
      LogicJSONParser *v33; // x21
      String v34; // [xsp+0h] [xbp-100h] BYREF
      String v35; // [xsp+18h] [xbp-E8h] BYREF
      String v36; // [xsp+30h] [xbp-D0h] BYREF
      String v37; // [xsp+48h] [xbp-B8h] BYREF
      String v38; // [xsp+60h] [xbp-A0h] BYREF
      String v39; // [xsp+78h] [xbp-88h] BYREF
      String v40; // [xsp+90h] [xbp-70h] BYREF
      String v41; // [xsp+A8h] [xbp-58h] BYREF
    
      *((_DWORD *)this + 4) = 3;
      String::String(&v41, "location");
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v41);
      String::~String(&v41);
      if ( !JSONNumber
        || (IntValue = (LogicDataTables *)LogicJSONNumber::getIntValue(JSONNumber),
            (DataById = (const #849 *)LogicDataTables::getDataById(IntValue, v9)) == 0) )
      {
        Debugger::error((__siginfo *)"LogicBattle::loadReplay can't find location", v7);
      }
      LogicBattle::setLocation(this, DataById, 0, 0);
      String::String(&v40, "NPC");
      v11 = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v40);
      String::~String(&v40);
      if ( v11 )
      {
        v12 = (LogicDataTables *)LogicJSONNumber::getIntValue(v11);
        v14 = LogicDataTables::getDataById(v12, v13);
        if ( v14 )
        {
          String::String(&v39, "NPC_f");
          JSONBoolean = (#1229 *)LogicJSONObject::getJSONBoolean(a2, &v39);
          String::~String(&v39);
          if ( JSONBoolean )
            isTrue = LogicJSONBoolean::isTrue(JSONBoolean);
          else
            isTrue = 0;
          *((_QWORD *)this + 10) = v14;
          *((_BYTE *)this + 283) = isTrue;
        }
      }
      String::String(&v38, "arena");
      v17 = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v38);
      String::~String(&v38);
      if ( v17 )
      {
        v18 = (LogicDataTables *)LogicJSONNumber::getIntValue(v17);
        *((_QWORD *)this + 11) = LogicDataTables::getDataById(v18, v19);
      }
      String::String(&v37, "deck0");
      JSONArray = (const #1228 *)LogicJSONObject::getJSONArray(a2, &v37);
      String::~String(&v37);
      String::String(&v36, "deck1");
      v21 = (const #1228 *)LogicJSONObject::getJSONArray(a2, &v36);
      String::~String(&v36);
      if ( !JSONArray )
        Debugger::error((__siginfo *)"LogicBattle::loadReplay deck0 missing", v22);
      v23 = (AcceptChallengeMessage *)operator new(72);
      LogicSpellDeck::LogicSpellDeck(v23);
      LogicSpellDeck::load(v23, JSONArray);
      if ( !v21 )
        Debugger::error((__siginfo *)"LogicBattle::loadReplay deck1 missing", v24);
      v25 = (AcceptChallengeMessage *)operator new(72);
      LogicSpellDeck::LogicSpellDeck(v25);
      LogicSpellDeck::load(v25, v21);
      LogicBattle::setSpellDecks(this, v23, v25);
      String::String(&v35, "avatar0");
      JSONObject = (const LogicJSONObject *)LogicJSONObject::getJSONObject(a2, &v35);
      String::~String(&v35);
      String::String(&v34, "avatar1");
      v27 = (const LogicJSONObject *)LogicJSONObject::getJSONObject(a2, &v34);
      String::~String(&v34);
      if ( !JSONObject )
        Debugger::error((__siginfo *)"LogicBattle::loadReplay avatar0 missing", v28);
      v29 = (#962 *)operator new(248);
      LogicClientAvatar::LogicClientAvatar(v29);
      LogicClientAvatar::loadForReplay(v29, JSONObject);
      if ( !v27 )
        Debugger::error((__siginfo *)"LogicBattle::loadReplay avatar1 missing", v30);
      v31 = (#962 *)operator new(248);
      LogicClientAvatar::LogicClientAvatar(v31);
      LogicClientAvatar::loadForReplay(v31, v27);
      LogicGameMode::addPlayer(*(LogicGameMode **)this, v29);
      LogicGameMode::addPlayer(*(LogicGameMode **)this, v31);
      result = *((_QWORD *)this + 34);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 34);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 34) = 0;
      }
      if ( a3 )
      {
        v33 = (LogicJSONParser *)operator new(40);
        LogicBattleLog::LogicBattleLog(v33);
        *((_QWORD *)this + 34) = v33;
        return LogicBattleLog::loadJSON(v33, a3);
      }
      return result;
    }

    __int64 __fastcall LogicBattle::setTilemapSize(UnbindFacebookAccountMessage *this, int a2, int a3)
    {
      #1127 *v6; // x22
    
      *((_DWORD *)this + 40) = a2;
      *((_DWORD *)this + 41) = a3;
      v6 = (#1127 *)operator new(32);
      LogicTileMap::LogicTileMap(v6);
      *((_QWORD *)this + 1) = v6;
      return LogicTileMap::init(v6, this, a2, a3, *((const #1091 **)this + 9));
    }

    __int64 __fastcall LogicBattle::addDecos(#1028 **this)
    {
      const char *v2; // x2
      __int64 v3; // x20
      int ObjectCount; // w21
      __int64 v5; // x22
      #1401 *ObjectData; // x23
      __int64 ObjectRow; // x24
      int IntegerValueAt; // w25
      int v9; // w26
      const #916 *v10; // x1
      GameMode *GameObjectByData; // x23
    
      LogicGameMode::pushLogicChangesAllowed(*this);
      *((_BYTE *)*this + 424) = 1;
      Debugger::doAssert((Debugger *)(*(this + 9) != 0), (bool)"", v2);
      v3 = (__int64)*(this + 9);
      ObjectCount = LogicTilemapData::getObjectCount(v3);
      if ( ObjectCount >= 1 )
      {
        v5 = 0;
        do
        {
          ObjectData = (#1401 *)LogicTilemapData::getObjectData(v3, v5);
          if ( (unsigned int)LogicData::getDataType(ObjectData) == 42 )
          {
            ObjectRow = LogicTilemapData::getObjectRow(v3, v5);
            IntegerValueAt = CSVRow::getIntegerValueAt(ObjectRow, 0);
            v9 = CSVRow::getIntegerValueAt(ObjectRow, 1);
            GameObjectByData = (GameMode *)LogicGameObjectFactory::createGameObjectByData(ObjectData, v10);
            *((_QWORD *)GameObjectByData + 1) = ObjectRow;
            LogicGameObject::setPosition(GameObjectByData, IntegerValueAt, v9, 0);
            LogicGameObjectManager::addLogicGameObject(*((#837 **)*this + 8), GameObjectByData, 1);
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( ObjectCount != (_DWORD)v5 );
      }
      return LogicGameMode::popLogicChangesAllowed(*this);
    }

    __int64 __fastcall LogicBattle::getTilemapData(UnbindFacebookAccountMessage *this)
    {
      return *((_QWORD *)this + 9);
    }

    bool __fastcall LogicBattle::isTutorialCompleted(UnbindFacebookAccountMessage *this, const #943 *a2)
    {
      int InstanceID; // w0
    
      InstanceID = LogicData::getInstanceID(a2);
      return ((1 << (InstanceID & 0x1F)) & *((_DWORD *)this + (InstanceID >> 5) + 32)) != 0;
    }

    __int64 __fastcall LogicBattle::isOnOvertime(UnbindFacebookAccountMessage *this)
    {
      return *((unsigned __int8 *)this + 172);
    }

    __int64 __fastcall LogicBattle::isBattleEndedCalled(UnbindFacebookAccountMessage *this)
    {
      return *((unsigned __int8 *)this + 280);
    }

    __int64 __fastcall LogicBattle::getExpReward(UnbindFacebookAccountMessage *this)
    {
      LogicDataTables *ExpReward; // x0
    
      ExpReward = (LogicDataTables *)*((_QWORD *)this + 10);
      if ( ExpReward && (ExpReward = (LogicDataTables *)LogicNpcData::getExpReward(ExpReward), (_DWORD)ExpReward) )
        return LogicNpcData::getExpReward(*((#1079 **)this + 10));
      else
        return *(unsigned int *)(LogicDataTables::getGlobals(ExpReward) + 360LL);
    }

    __int64 __fastcall LogicBattle::checkSpellPosition(#1028 **this, int a2, int a3, const #895 *a4, int a5)
    {
      LogicDataTables *GameListener; // x0
      LogicDataTables *v10; // x20
      __int64 result; // x0
      int v12; // w8
      int v13; // kr00_4
      int v14; // w23
      int v15; // w22
      #1091 *TilemapData; // x0
      int canPlaceEgg; // w0
      char v18; // w8
      void (__fastcall *v19)(LogicDataTables *, String *); // x19
      String v20; // [xsp+8h] [xbp-48h] BYREF
    
      if ( !LogicSpellData::getSummonCharacter(a4) )
        return 0;
      GameListener = (LogicDataTables *)LogicGameMode::getGameListener(*this);
      v10 = GameListener;
      if ( a2 < -499 )
        return 1;
      v12 = *(_DWORD *)(LogicDataTables::getGlobals(GameListener) + 196LL);
      v13 = a3;
      v14 = a3 / 500;
      if ( v13 / 500 < v12 )
        return 2;
      v15 = a2 / 500;
      if ( v15 >= *((_DWORD *)this + 40) )
        return 3;
      if ( v14 >= *((_DWORD *)this + 41) - v12 )
        return 4;
      TilemapData = (#1091 *)LogicLocationData::getTilemapData(*(this + 8));
      canPlaceEgg = LogicTilemapData::canPlaceEgg(TilemapData, v15, v14);
      v18 = canPlaceEgg;
      if ( canPlaceEgg )
        result = 0;
      else
        result = 5;
      if ( (v18 & 1) == 0 && ((a5 ^ 1) & 1) == 0 )
      {
        v19 = *(void (__fastcall **)(LogicDataTables *, String *))(*(_QWORD *)v10 + 176LL);
        String::String(&v20, "TID_INVALID_SPELL_POSITION");
        v19(v10, &v20);
        String::~String(&v20);
        return 5;
      }
      return result;
    }

    __int64 __fastcall LogicBattle::setNPCSpellsEnabled(__int64 this, _BOOL4 a2, int a3)
    {
      bool v3; // w19
      UnbindFacebookAccountMessage *v4; // x20
      char *v5; // x0
      const char *v6; // x2
      const #962 *AvatarByAccountID; // x0
      LogicSummoner *LeaderCharacter; // x0
    
      v3 = a2;
      v4 = (UnbindFacebookAccountMessage *)this;
      if ( *(_DWORD *)(this + 16) == 1 && *(_QWORD *)(this + 80) )
      {
        if ( a2 )
          v5 = "[AI]: ENABLED";
        else
          v5 = "[AI]: DISABLED";
        Debugger::hudPrint((__siginfo *)v5, (const char *)0xFFFFFFFFLL, a3);
        Debugger::doAssert((Debugger *)1, (bool)"", v6);
        AvatarByAccountID = (const #962 *)LogicGameMode::getAvatarByAccountID(
                                            *(_QWORD *)v4,
                                            **((unsigned int **)v4 + 3),
                                            *(unsigned int *)(*((_QWORD *)v4 + 3) + 4LL));
        LeaderCharacter = (LogicSummoner *)LogicBattle::getLeaderCharacter(v4, AvatarByAccountID);
        return LogicSummoner::setAIEnabled(LeaderCharacter, v3);
      }
      return this;
    }

    __int64 __fastcall LogicBattle::hasPlayerFinishedNpcLevel(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 283);
    }

    __int64 __fastcall LogicBattle::getMinionServerEventSpell(__int64 a1, int a2)
    {
      return *(_QWORD *)(a1 + 8LL * a2 + 232);
    }

    __int64 __fastcall LogicBattle::setSimulationMode(__int64 result)
    {
      *(_DWORD *)(result + 16) = 2;
      return result;
    }

    GameMode *__fastcall LogicBattle::spawnObjects(
            #849 **a1,
            __int64 a2,
            unsigned int a3,
            int a4,
            int a5,
            int a6,
            __int64 a7,
            const BattleResultMessage *a8,
            int a9,
            const TextField *a10,
            char a11)
    {
      __int64 v16; // x27
      #849 *v17; // x10
      GameMode *v18; // x23
      LogicBattle *v19; // x20
      int CollisionRadius; // w0
      LogicVector2 *v21; // x5
      GameMode *v22; // x19
      int LaneID; // w0
      FriendListMessage *CharacterBuffComponent; // x0
      __int64 v25; // x24
      void (__fastcall *v26)(__int64, _QWORD); // x22
      int v27; // w23
      int DeployTime; // w0
      __int64 v29; // x19
      void (__fastcall *v30)(__int64, __int64); // x24
      const #916 *v31; // x2
      __int64 EffectByName; // x0
      unsigned int v34; // [xsp+10h] [xbp-90h]
      GameMode *v38; // [xsp+28h] [xbp-78h]
      String v39; // [xsp+30h] [xbp-70h] BYREF
      _DWORD v40[2]; // [xsp+48h] [xbp-58h] BYREF
    
      v16 = 0;
      while ( 1 )
      {
        v17 = a1[v16 + 3];
        if ( *(_DWORD *)v17 == *(_DWORD *)a7 && *((_DWORD *)v17 + 1) == *(_DWORD *)(a7 + 4) )
          break;
        if ( ++v16 >= 2 )
        {
          LODWORD(v16) = -1;
          break;
        }
      }
      LogicVector2::LogicVector2((LogicVector2 *)v40);
      if ( a6 < 1 )
        return 0;
      v34 = a3;
      v18 = 0;
      v19 = 0;
      do
      {
        v38 = v18;
        CollisionRadius = LogicCharacterData::getCollisionRadius((#1025 *)a2);
        LogicBattle::getSpawnOffset(v19, a6, CollisionRadius, v16 == 0, (bool)v40, v21);
        v22 = LogicBattle::spawnObject(
                (UnbindFacebookAccountMessage *)a1,
                (const #916 *)a2,
                (LogicMath *)(unsigned int)(v40[0] + a4),
                (LogicMath *)(unsigned int)(v40[1] + a5),
                (const #1236 *)a7,
                0,
                1);
        LaneID = LogicBattle::getLaneID((UnbindFacebookAccountMessage *)a1, a4, a5);
        LogicCharacter::setLaneID(v22, LaneID);
        LogicCharacter::setLevelIndex(v22, v34, a10);
        if ( a8 )
        {
          CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v22);
          LogicCharacterBuffComponent::addCharacterBuff(CharacterBuffComponent, 0, a8, a9, v34, 0xFFFFFFFF, a10);
        }
        if ( a11 && (int)LogicCharacterData::getDeployTime(a2) >= 1 )
          LogicCharacter::setState(v22, 5);
        LogicGameObjectManager::addLogicGameObject(*((#837 **)*a1 + 8), v22, 1);
        v25 = *((_QWORD *)v22 + 5);
        v26 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 176LL);
        v27 = *(_DWORD *)(a2 + 800) * (int)v19 / a6;
        DeployTime = LogicCharacterData::getDeployTime(a2);
        v26(v25, (unsigned int)(v27 % DeployTime));
        v18 = v38;
        if ( !(_DWORD)v19 )
          v18 = v22;
        if ( (unsigned int)LogicLocationData::isCrowdEffectsEnabled(a1[8])
          && (unsigned int)LogicCharacterData::isCrowdEffectsEnabled(a2) )
        {
          v29 = *((_QWORD *)v22 + 5);
          v30 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 72LL);
          String::String(&v39, "CrowdSummonBigUnit");
          EffectByName = LogicDataTables::getEffectByName((#1004 *)&v39, 0, v31);
          v30(v29, EffectByName);
          String::~String(&v39);
        }
        v19 = (LogicBattle *)(unsigned int)((_DWORD)v19 + 1);
      }
      while ( (int)v19 < a6 );
      return v18;
    }

    __int64 __fastcall LogicBattle::getSpawnOffset(int a1, int a2, const char *a3, int a4, _DWORD *a5)
    {
      int v7; // w22
      int v8; // w23
      int v9; // w21
      __int64 result; // x0
      int v11; // w2
      int v12; // w24
      int v13; // w9
      int v14; // w8
      #1237 *v15; // x21
      int v16; // w2
    
      v7 = (int)a3;
      v8 = a2;
      v9 = a1;
      result = Debugger::doAssert((Debugger *)(a1 < a2), (bool)"", a3);
      v12 = 180;
      v13 = 90;
      v14 = 2;
      switch ( v8 )
      {
        case 1:
          goto LABEL_12;
        case 2:
          goto LABEL_10;
        case 3:
        case 5:
          goto LABEL_7;
        case 4:
          v8 = 4;
          v12 = 45;
          goto LABEL_7;
        case 7:
          if ( v9 )
          {
            v12 = 0;
            --v9;
            v8 = 6;
    LABEL_7:
            v7 = 1000 * v7 / (int)LogicMath::sin((#1237 *)(unsigned int)(180 / v8), 1000, v11);
            if ( v8 >= 7 )
              v7 = 3 * v9 % 7 * v7 / 6;
    LABEL_9:
            v14 = v8;
            v13 = v12;
    LABEL_10:
            v15 = (#1237 *)(unsigned int)(v13 + 360 * v9 / v14 + 90);
            *a5 = LogicMath::cos(v15, v7, v11);
            result = LogicMath::sin(v15, v7, v16);
            a5[1] = result;
            if ( a4 )
              a5[1] = -(int)result;
          }
          else
          {
    LABEL_12:
            *(_QWORD *)a5 = 0;
          }
          return result;
        default:
          v12 = 0;
          if ( v8 < 3 )
            goto LABEL_9;
          goto LABEL_7;
      }
    }

    __int64 __fastcall LogicBattle::getLeaderTowers(UnbindFacebookAccountMessage *this, unsigned int a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)(a2 < 2), (bool)"", a3);
      return *((_QWORD *)this + (int)a2 + 14);
    }

    __int64 __fastcall LogicBattle::removeGameObjectReferences(
            UnbindFacebookAccountMessage *this,
            const GameMode *a2,
            int a3,
            bool a4,
            GameMode *a5)
    {
      __int64 result; // x0
      #1025 *CharacterData; // x0
      __int64 v9; // x0
      const char *v10; // x1
      __int64 v11; // x8
    
      result = (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 88LL))(a2);
      if ( (_DWORD)result == 5 )
      {
        CharacterData = (#1025 *)LogicCharacter::getCharacterData(a2);
        result = LogicCharacterData::isPrincessTower(CharacterData);
        if ( (_DWORD)result )
        {
          v9 = *((_QWORD *)this + (int)LogicGameObject::getRealOwnerIndex(a2) + 14);
          v11 = *(int *)(v9 + 12);
          if ( (int)v11 < 1 )
            goto LABEL_11;
          v10 = 0;
          while ( *(const GameMode **)(*(_QWORD *)v9 + 8LL * (_QWORD)v10) != a2 )
          {
            if ( (__int64)++v10 >= v11 )
              goto LABEL_11;
          }
          if ( ((unsigned int)v10 & 0x80000000) != 0 )
    LABEL_11:
            Debugger::error((__siginfo *)"LogicBattle::removeGameObjectReferences: cant find summoner tower.", v10);
          return LogicArrayList<LogicCharacter const*>::remove();
        }
      }
      return result;
    }

    __int64 __fastcall LogicBattle::isBattleEndedWithTimeOut(UnbindFacebookAccountMessage *this)
    {
      return *((unsigned __int8 *)this + 281);
    }

    __int64 __fastcall LogicBattle::showStartHUD(UnbindFacebookAccountMessage *this)
    {
      return *((unsigned __int8 *)this + 292);
    }

    __int64 __fastcall LogicBattle::getBattleLog(UnbindFacebookAccountMessage *this)
    {
      return *((_QWORD *)this + 34);
    }

    __int64 __fastcall LogicBattle::getWinnerScoreChange(UnbindFacebookAccountMessage *this)
    {
      return *((unsigned int *)this + 71);
    }

    __int64 __fastcall LogicBattle::getLoserScoreChange(UnbindFacebookAccountMessage *this)
    {
      return *((unsigned int *)this + 72);
    }

    __int64 __fastcall LogicBattle::getAccountId(UnbindFacebookAccountMessage *this, unsigned int a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)(a2 < 2), (bool)"", a3);
      return *((_QWORD *)this + (int)a2 + 3);
    }

    bool __fastcall LogicBattle::getHomeTeamIndex(UnbindFacebookAccountMessage *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x20
      #962 *AvatarByAccountID; // x0
      __int64 Arena; // x22
      const char *v7; // x2
      #962 *v8; // x0
      const char *v9; // x2
      #962 *v10; // x0
    
      v4 = 1;
      Debugger::doAssert((Debugger *)1, (bool)"", a3);
      AvatarByAccountID = (#962 *)LogicGameMode::getAvatarByAccountID(
                                    *(_QWORD *)this,
                                    **((unsigned int **)this + 3),
                                    *(unsigned int *)(*((_QWORD *)this + 3) + 4LL));
      Arena = LogicClientAvatar::getArena(AvatarByAccountID);
      Debugger::doAssert((Debugger *)1, (bool)"", v7);
      v8 = (#962 *)LogicGameMode::getAvatarByAccountID(
                     *(_QWORD *)this,
                     **((unsigned int **)this + 4),
                     *(unsigned int *)(*((_QWORD *)this + 4) + 4LL));
      if ( Arena != LogicClientAvatar::getArena(v8) )
      {
        Debugger::doAssert((Debugger *)1, (bool)"", v9);
        v10 = (#962 *)LogicGameMode::getAvatarByAccountID(
                        *(_QWORD *)this,
                        **((unsigned int **)this + 3),
                        *(unsigned int *)(*((_QWORD *)this + 3) + 4LL));
        return LogicClientAvatar::getArena(v10) != *((_QWORD *)this + 11);
      }
      return v4;
    }

    __int64 __fastcall LogicBattle::initializeMembers(__int64 this)
    {
      __int64 v1; // x8
      __int64 v2; // x9
      _QWORD *v3; // x10
      _QWORD *v4; // x11
    
      v1 = 0;
      *(_QWORD *)(this + 256) = 0;
      *(_QWORD *)(this + 264) = 0;
      *(_QWORD *)(this + 248) = 0;
      *(_BYTE *)(this + 172) = 0;
      v2 = 184;
      do
      {
        v3 = (_QWORD *)(this + v1);
        v3[6] = 0;
        v4 = (_QWORD *)(this + v2);
        v3[12] = 0;
        *v4 = 0;
        v4[1] = 0;
        v3[27] = 0;
        v3[29] = 0;
        v1 += 8;
        v2 += 16;
        v3[14] = 0;
      }
      while ( v1 != 16 );
      *(_DWORD *)(this + 176) = 0;
      *(_DWORD *)(this + 16) = 0;
      *(_QWORD *)this = 0;
      *(_QWORD *)(this + 8) = 0;
      *(_QWORD *)(this + 32) = 0;
      *(_QWORD *)(this + 40) = 0;
      *(_QWORD *)(this + 24) = 0;
      *(_QWORD *)(this + 80) = 0;
      *(_QWORD *)(this + 88) = 0;
      *(_QWORD *)(this + 64) = 0;
      *(_QWORD *)(this + 72) = 0;
      *(_DWORD *)(this + 168) = 0;
      *(_QWORD *)(this + 152) = 0;
      *(_QWORD *)(this + 160) = 0;
      *(_QWORD *)(this + 136) = 0;
      *(_QWORD *)(this + 144) = 0;
      *(_QWORD *)(this + 128) = 0;
      *(_DWORD *)(this + 288) = 0;
      *(_QWORD *)(this + 272) = 0;
      *(_QWORD *)(this + 280) = 0;
      *(_BYTE *)(this + 292) = 1;
      return this;
    }

}; // end class LogicBattle
