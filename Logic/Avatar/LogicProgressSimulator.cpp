class LogicProgressSimulator
{
public:

    void __fastcall LogicProgressSimulator::LogicProgressSimulator(LogicProgressSimulator *this, UnlockAccountPopup *a2)
    {
      tween::Bounce *v4; // x0
    
      *(_QWORD *)this = off_100467CA8;
      *((_DWORD *)this + 34) = 0;
      *((_BYTE *)this + 24) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      v4 = (tween::Bounce *)memset((char *)this + 28, 0, 0x69u);
      *((_QWORD *)this + 11) = a2;
      *((_QWORD *)this + 12) = LogicClientAvatar::getDefaultAvatar(v4);
    }

    void *__fastcall LogicProgressSimulator::destruct(LogicResourceData *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x0
      __int64 v4; // x0
    
      v2 = (_QWORD *)*((_QWORD *)this + 15);
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)this + 15) = 0;
      v3 = *((_QWORD *)this + 12);
      if ( v3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        v4 = *((_QWORD *)this + 12);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *((_QWORD *)this + 12) = 0;
      }
      *((_DWORD *)this + 34) = 0;
      *((_BYTE *)this + 24) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      return memset((char *)this + 28, 0, 0x69u);
    }

    __int64 __fastcall LogicProgressSimulator::setWinPercent(__int64 a1, #1237 *a2, __int64 a3, int a4)
    {
      _QWORD *v5; // x20
      _QWORD *v6; // x20
      int v7; // w20
      __int64 v8; // x0
      int v9; // w21
      __int64 LogicRandom; // x0
      int IteratedRandomSeed; // w20
      LogicRandom *v12; // x0
      LogicGameMode *v13; // x0
      int RandomInt; // w0
      __int64 v15; // x8
      LogicRandom *v16; // x0
      char v18; // [xsp+Fh] [xbp-31h] BYREF
    
      *(_DWORD *)(a1 + 8) = LogicMath::clamp(a2, 0, 100, a4);
      v5 = *(_QWORD **)(a1 + 120);
      if ( v5 )
      {
        if ( *v5 )
          operator delete[](*v5);
        operator delete(v5);
      }
      *(_QWORD *)(a1 + 120) = 0;
      v6 = (_QWORD *)operator new(16);
      *v6 = 0;
      v6[1] = 0;
      *((_DWORD *)v6 + 2) = 100;
      *v6 = operator new[](100);
      *(_QWORD *)(a1 + 120) = v6;
      v18 = 0;
      LogicArrayList<bool>::add(v6, &v18);
      v7 = 99;
      do
      {
        v8 = *(_QWORD *)(a1 + 120);
        v18 = 0;
        LogicArrayList<bool>::add(v8, &v18);
        --v7;
      }
      while ( v7 );
      v9 = *(_DWORD *)(a1 + 8);
      LogicRandom = LogicGameMode::getLogicRandom(*(UnlockAccountPopup **)(a1 + 88));
      IteratedRandomSeed = LogicRandom::getIteratedRandomSeed(LogicRandom);
      v12 = (LogicRandom *)LogicGameMode::getLogicRandom(*(UnlockAccountPopup **)(a1 + 88));
      LogicRandom::setIteratedRandomSeed(v12, 5655153);
      while ( 1 )
      {
        v13 = *(LogicGameMode **)(a1 + 88);
        if ( v9 < 1 )
          break;
        RandomInt = LogicGameMode::getRandomInt(v13, 100);
        v15 = **(_QWORD **)(a1 + 120);
        if ( !*(_BYTE *)(v15 + RandomInt) )
        {
          *(_BYTE *)(v15 + RandomInt) = 1;
          --v9;
        }
      }
      v16 = (LogicRandom *)LogicGameMode::getLogicRandom(v13);
      return LogicRandom::setIteratedRandomSeed(v16, IteratedRandomSeed);
    }

    __int64 __fastcall LogicProgressSimulator::setBattlesPerDay(__int64 this, int a2)
    {
      *(_DWORD *)(this + 12) = a2;
      return this;
    }

    __int64 __fastcall LogicProgressSimulator::setDonationsPerDay(__int64 this, int a2)
    {
      *(_DWORD *)(this + 16) = a2;
      return this;
    }

    __int64 __fastcall LogicProgressSimulator::setSleepHours(__int64 this, int a2)
    {
      *(_DWORD *)(this + 20) = a2;
      return this;
    }

    __int64 __fastcall LogicProgressSimulator::setIsInTeam(__int64 this, char a2)
    {
      *(_BYTE *)(this + 24) = a2;
      return this;
    }

    __int64 __fastcall LogicProgressSimulator::resetProgress(LogicResourceData *this)
    {
      UnlockAccountPopup *v2; // x23
      #1146 *Home; // x20
      GameInputField *SpellCollection; // x22
      AcceptChallengeMessage *LogicDeck; // x21
      int CurrentTimestamp; // w0
      int v7; // w0
      int v8; // w0
      int v9; // w8
      TextField *v10; // x0
      TextField *v11; // x23
      const char *v12; // x22
      TextField *Spell; // x23
      tween::Bounce *PlayerAvatar; // x19
      __int64 Diamonds; // x21
      LogicKickAllianceMemberCommand *v16; // x0
      LogicKickAllianceMemberCommand *GoldData; // x20
      AreaEffectObject *v18; // x0
      int ResourceCount; // w0
      LogicDataTables *v20; // x0
      __int64 v21; // x20
      void (__fastcall *v22)(__int64, __int64, _QWORD, _QWORD); // x23
      __int64 v23; // x22
      int ExpLevel; // w0
      __int64 v25; // x0
      LogicDataTables *v26; // x20
      void (__fastcall *v27)(LogicDataTables *, __int64); // x21
      HomeScreen *Globals; // x0
      __int64 StartingArena; // x0
      __int64 v30; // x20
      void (__fastcall *v31)(__int64, __int64, __int64, _QWORD, __int64); // x23
      __int64 v32; // x21
      __int64 v33; // x22
      int LoseCount; // w0
      __int64 v35; // x20
      __int64 (__fastcall *v36)(__int64, _QWORD, __int64, _QWORD, _QWORD); // x22
      __int64 v37; // x21
      int NpcLoseCount; // w0
      HomeScreen *v39; // x0
      const LogicArenaData *v40; // x0
    
      v2 = (UnlockAccountPopup *)*((_QWORD *)this + 11);
      Home = (#1146 *)LogicGameMode::getHome(v2);
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
      LogicDeck = (AcceptChallengeMessage *)LogicClientHome::getLogicDeck(Home, 0);
      CurrentTimestamp = LogicGameMode::getCurrentTimestamp(v2);
      LogicClientHome::freeChestCollected(Home, CurrentTimestamp);
      LogicClientHome::tick(Home);
      v7 = LogicGameMode::getCurrentTimestamp(v2);
      LogicClientHome::freeChestCollected(Home, v7);
      v8 = LogicGameMode::getCurrentTimestamp(v2);
      LogicClientHome::crownChestCollected(Home, v8);
      LogicClientHome::destroyChests(Home);
      while ( 1 )
      {
        v9 = *((_DWORD *)SpellCollection + 3);
        if ( v9 <= 0 )
          break;
        v10 = (TextField *)LogicSpellCollection::removeSpell(SpellCollection, v9 - 1);
        v11 = v10;
        if ( v10 )
        {
          LogicSpell::destruct(v10);
          operator delete(v11);
        }
      }
      if ( (int)LogicSpellDeck::size(LogicDeck) > 0 )
      {
        v12 = 0;
        do
        {
          Spell = (TextField *)LogicSpellDeck::getSpell(LogicDeck, v12);
          LogicSpellDeck::setSpell((__int64)LogicDeck, (int)v12, 0);
          if ( Spell )
          {
            LogicSpell::destruct(Spell);
            operator delete(Spell);
          }
          v12 = (const char *)(unsigned int)((_DWORD)v12 + 1);
        }
        while ( (int)v12 < (int)LogicSpellDeck::size(LogicDeck) );
      }
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      Diamonds = LogicClientAvatar::getDiamonds(PlayerAvatar);
      v16 = (LogicKickAllianceMemberCommand *)LogicClientAvatar::useDiamonds(PlayerAvatar, Diamonds, Home);
      GoldData = (LogicKickAllianceMemberCommand *)LogicDataTables::getGoldData(v16);
      v18 = (AreaEffectObject *)LogicDataTables::getGoldData(GoldData);
      ResourceCount = LogicClientAvatar::getResourceCount((int)PlayerAvatar, v18);
      LogicClientAvatar::commodityCountChangeHelper(PlayerAvatar, 0, GoldData, -ResourceCount, 11);
      v20 = (LogicDataTables *)LogicClientAvatar::getChangeListener(PlayerAvatar);
      if ( v20 )
      {
        v21 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        v22 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 72LL);
        v23 = (unsigned int)-LogicClientAvatar::getExpPoints(PlayerAvatar);
        ExpLevel = LogicClientAvatar::getExpLevel(PlayerAvatar);
        v22(v21, v23, (unsigned int)(1 - ExpLevel), 0);
        v25 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v25 + 24LL))(v25, 3, 0, 0, Diamonds);
        v26 = (LogicDataTables *)LogicClientAvatar::getChangeListener(PlayerAvatar);
        v27 = *(void (__fastcall **)(LogicDataTables *, __int64))(*(_QWORD *)v26 + 168LL);
        Globals = (HomeScreen *)LogicDataTables::getGlobals(v26);
        StartingArena = LogicGlobals::getStartingArena(Globals);
        v27(v26, StartingArena);
        v30 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        v31 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v30 + 104LL);
        v32 = (unsigned int)-*((_DWORD *)PlayerAvatar + 16);
        v33 = (unsigned int)-LogicClientAvatar::getWinCount(PlayerAvatar);
        LoseCount = LogicClientAvatar::getLoseCount(PlayerAvatar);
        v31(v30, v32, v33, (unsigned int)-LoseCount, 1);
        v35 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        v36 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v35 + 104LL);
        v37 = (unsigned int)-LogicClientAvatar::getNpcWinCount(PlayerAvatar);
        NpcLoseCount = LogicClientAvatar::getNpcLoseCount(PlayerAvatar);
        v20 = (LogicDataTables *)v36(v35, 0, v37, (unsigned int)-NpcLoseCount, 0);
      }
      *((_DWORD *)PlayerAvatar + 16) = 0;
      v39 = (HomeScreen *)LogicDataTables::getGlobals(v20);
      v40 = (const LogicArenaData *)LogicGlobals::getStartingArena(v39);
      LogicClientAvatar::setArena(PlayerAvatar, v40);
      LogicClientAvatar::setExpPoints(PlayerAvatar, 0);
      LogicClientAvatar::setExpLevel(PlayerAvatar, 1);
      LogicClientAvatar::setChestCount(PlayerAvatar, 0);
      LogicClientAvatar::setStarCount(PlayerAvatar, 0);
      LogicClientAvatar::setWinCount(PlayerAvatar, 0);
      LogicClientAvatar::setLoseCount(PlayerAvatar, 0);
      LogicClientAvatar::setWinLooseStreak(PlayerAvatar, 0);
      LogicClientAvatar::setBattleCount(PlayerAvatar, 0);
      LogicClientAvatar::setNpcLoseCount(PlayerAvatar, 0);
      LogicClientAvatar::setNpcWinCount(PlayerAvatar, 0);
      return LogicClientAvatar::resetWinnerChestIndexDebug(PlayerAvatar);
    }

    void __fastcall LogicProgressSimulator::log(LogicResourceData *this, const String *a2)
    {
      internal_t *p_internal; // x12
      const String *v3; // x1
      String v4; // [xsp+28h] [xbp-28h] BYREF
    
      if ( *((_BYTE *)this + 132) )
      {
        p_internal = &a2->internal;
        if ( a2->m_bytes + 1 > 8 )
          p_internal = (internal_t *)p_internal->pHeap;
        String::format(
          (String *)"[%dd %dh %dm %ds] %s",
          (const char *)a2,
          *((unsigned int *)this + 18),
          *((unsigned int *)this + 19),
          *((unsigned int *)this + 20),
          *((unsigned int *)this + 21),
          p_internal);
        Debugger::print((Debugger *)&v4, v3);
        String::~String();
      }
    }

    __int64 __fastcall LogicProgressSimulator::executeCommand(LogicResourceData *this, PvpMatchmakeNotificationMessage *a2)
    {
      __int64 v4; // x0
      const char *v5; // x1
      String v7; // [xsp+8h] [xbp-28h] BYREF
    
      if ( (*(unsigned int (__fastcall **)(PvpMatchmakeNotificationMessage *, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(
             a2,
             *((_QWORD *)this + 11),
             2,
             0) )
      {
        v4 = (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2);
        String::format((String *)"LogicProgressSimulator: command %d failed!", v5, v4);
        LogicProgressSimulator::log(this, &v7);
        String::~String();
      }
      (**(void (__fastcall ***)(PvpMatchmakeNotificationMessage *))a2)(a2);
      return (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 16LL))(a2);
    }

    void __fastcall LogicProgressSimulator::init(LogicResourceData *this, const char *a2)
    {
      int v3; // w8
      unsigned __int64 v4; // x9
      __int64 v5; // x9
      __int64 v6; // x8
      String v7; // [xsp+18h] [xbp-28h] BYREF
    
      *((_DWORD *)this + 9) = 0;
      v3 = *((_DWORD *)this + 3) * (*((_DWORD *)this + 15) / 86400);
      v4 = 1374389535LL * *((_DWORD *)this + 2) * v3;
      v5 = (unsigned int)(v4 >> 63) + (SHIDWORD(v4) >> 5);
      *((_DWORD *)this + 7) = v5;
      v6 = (unsigned int)(v3 - v5);
      *((_DWORD *)this + 8) = v6;
      String::format((String *)"calculated wins:%d losses:%d", a2, v5, v6);
      LogicProgressSimulator::log(this, &v7);
      String::~String();
    }

    __int64 __fastcall LogicProgressSimulator::donateSpells(LogicResourceData *this)
    {
      tween::Bounce *PlayerAvatar; // x0
      #1143 *Arena; // x0
      int SpellDonateLimit; // w20
      int v5; // w9
      __int64 Home; // x0
      int TotalSpellCount; // w0
      int v8; // w21
      TextField *v9; // x22
      int v10; // w28
      TextField *v11; // x27
      __int64 v12; // x23
      __int64 v13; // x0
      TextField *SpellAt; // x24
      InitState *SpellData; // x0
      int DonateCapacity; // w25
      int v17; // w26
      int MaterialCountForNextLevel; // w0
      InitState *v19; // x0
      int v20; // w24
      LogicDonateAllianceUnitCommand *v21; // x23
      __int64 v22; // x0
      AreaEffectObject *v23; // x0
      __int64 Name; // x0
      const char *v25; // x1
      _QWORD *v26; // x8
      int v28; // [xsp+14h] [xbp-6Ch]
      String v29; // [xsp+18h] [xbp-68h] BYREF
    
      if ( *((_BYTE *)this + 24) )
      {
        PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        Arena = (#1143 *)LogicClientAvatar::getArena(PlayerAvatar);
        SpellDonateLimit = LogicArenaData::getSpellDonateLimit(Arena);
        if ( *((int *)this + 4) >= 1 )
        {
          v5 = 0;
          do
          {
            v28 = v5;
            Home = LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
            TotalSpellCount = LogicClientHome::getTotalSpellCount(Home);
            v8 = 0;
            v9 = 0;
            v10 = 0;
            v11 = 0;
    LABEL_10:
            v12 = (unsigned int)(TotalSpellCount - 1);
            while ( (int)v12 + 1 >= 1 )
            {
              v13 = LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
              SpellAt = (TextField *)LogicClientHome::getSpellAt(v13, v12);
              SpellData = (InitState *)LogicSpell::getSpellData(SpellAt);
              DonateCapacity = LogicSpellData::getDonateCapacity(SpellData);
              v17 = *((_DWORD *)SpellAt + 4);
              MaterialCountForNextLevel = LogicSpell::getMaterialCountForNextLevel(SpellAt);
              v12 = (unsigned int)(v12 - 1);
              if ( DonateCapacity <= SpellDonateLimit )
              {
                if ( v17 > v10 )
                {
                  v10 = v17;
                  v11 = SpellAt;
                }
                if ( v17 - MaterialCountForNextLevel > v8 )
                {
                  v8 = v17 - MaterialCountForNextLevel;
                  v9 = SpellAt;
                }
                TotalSpellCount = v12 + 1;
                goto LABEL_10;
              }
            }
            if ( v8 < 1 )
            {
              v20 = v10 > 1;
              if ( v10 <= 1 )
                v9 = 0;
              else
                v9 = v11;
            }
            else
            {
              v19 = (InitState *)LogicSpell::getSpellData(v9);
              v20 = SpellDonateLimit / (int)LogicSpellData::getDonateCapacity(v19);
            }
            if ( v9 && v20 >= 1 )
            {
              v21 = (LogicDonateAllianceUnitCommand *)operator new(48);
              LogicDonateAllianceUnitCommand::LogicDonateAllianceUnitCommand(v21);
              v22 = LogicSpell::getSpellData(v9);
              LogicDonateAllianceUnitCommand::setData((__int64)v21, 0, v22);
              LogicProgressSimulator::executeCommand(this, v21);
              v23 = (AreaEffectObject *)LogicSpell::getSpellData(v9);
              Name = LogicData::getName(v23);
              v26 = (_QWORD *)(Name + 8);
              if ( *(_DWORD *)(Name + 4) + 1 > 8 )
                v26 = (_QWORD *)*v26;
              String::format((String *)"donated spell %s", v25, v26);
              LogicProgressSimulator::log(this, &v29);
              String::~String();
            }
            *((_DWORD *)this + 12) += v20;
            v5 = v28 + 1;
          }
          while ( v28 + 1 < *((_DWORD *)this + 4) );
        }
      }
      return 0;
    }

    __int64 __fastcall LogicProgressSimulator::update(LogicResourceData *this, int a2)
    {
      #1233 *v4; // x21
      int Tick; // w0
      LogicRewardRandomizer *v6; // x21
      int v7; // w9
      const char *v8; // x1
      LogicMath *v9; // x0
      int v10; // w2
      int v11; // w0
      int v12; // w20
      int v13; // w8
      #1146 *Home; // x0
      int v15; // w9
      int v16; // w8
      int v17; // w20
      int v18; // w27
      int v19; // w28
      int v20; // w23
      __int64 PlayerAvatar; // x0
      __int64 WinCount; // x20
      __int64 v23; // x0
      __int64 LoseCount; // x21
      __int64 v25; // x24
      __int64 v26; // x25
      int v27; // w22
      int v28; // w23
      const char *v29; // x1
      const char *v30; // x1
      const char *v31; // x1
      LogicRewardRandomizer *v32; // x0
      void *v33; // x0
      #1233 *v34; // x0
      void *v35; // x0
      #1146 *v36; // x20
      tween::Bounce *v37; // x0
      int ExpLevel; // w0
      String v40; // [xsp+28h] [xbp-C8h] BYREF
      String v41; // [xsp+40h] [xbp-B0h] BYREF
      String v42; // [xsp+58h] [xbp-98h] BYREF
      String v43; // [xsp+70h] [xbp-80h] BYREF
      String v44; // [xsp+88h] [xbp-68h] BYREF
    
      v4 = (#1233 *)operator new(2500);
      Tick = LogicGameMode::getTick(*((UnlockAccountPopup **)this + 11));
      LogicMersenneTwisterRandom::LogicMersenneTwisterRandom(v4, Tick);
      *((_QWORD *)this + 13) = v4;
      v6 = (LogicRewardRandomizer *)operator new(16);
      LogicRewardRandomizer::LogicRewardRandomizer(v6);
      *((_QWORD *)this + 14) = v6;
      v7 = *((_DWORD *)this + 16);
      *((_DWORD *)this + 15) += a2;
      *((_DWORD *)this + 16) = v7 + a2;
      String::String(&v44, "SIMULATION START");
      LogicProgressSimulator::log(this, &v44);
      String::~String();
      LogicProgressSimulator::init(this, v8);
      if ( *((int *)this + 16) >= 1 )
      {
        do
        {
          v9 = (LogicMath *)LogicProgressSimulator::simulationTick(this);
          v11 = LogicMath::min(v9, *((_DWORD *)this + 16), v10);
          v12 = v11;
          if ( v11 >= 1 )
          {
            v13 = *((_DWORD *)this + 19);
            if ( v13 < 24 - *((_DWORD *)this + 5) || 86400 - 3600 * v13 - 60 * *((_DWORD *)this + 20) < 1 )
              *((_DWORD *)this + 13) += v11;
            else
              *((_DWORD *)this + 14) += v11;
            LogicGameMode::fastForwardTime(*((LogicGameMode **)this + 11), v11, -1);
            Home = (#1146 *)LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
            LogicClientHome::tick(Home);
            v15 = *((_DWORD *)this + 17);
            *((_DWORD *)this + 16) -= v12;
            v16 = v15 + v12;
            *((_DWORD *)this + 17) = v15 + v12;
            v17 = (v15 + v12) / 86400;
            v18 = v16 / 3600 % 24;
            v19 = v16 / 60 % 60;
            v20 = v16 % 60;
            if ( v17 != *((_DWORD *)this + 18) )
            {
              *((_DWORD *)this + 9) = 0;
              LogicProgressSimulator::donateSpells(this);
            }
            *((_DWORD *)this + 18) = v17;
            *((_DWORD *)this + 19) = v18;
            *((_DWORD *)this + 20) = v19;
            *((_DWORD *)this + 21) = v20;
          }
        }
        while ( *((int *)this + 16) > 0 );
      }
      String::String(&v43, "SIMULATION FINISHED");
      LogicProgressSimulator::log(this, &v43);
      String::~String();
      PlayerAvatar = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      WinCount = LogicClientAvatar::getWinCount(PlayerAvatar);
      v23 = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      LoseCount = LogicClientAvatar::getLoseCount(v23);
      v25 = *((unsigned int *)this + 11);
      v26 = *((unsigned int *)this + 12);
      v28 = *((_DWORD *)this + 13);
      v27 = *((_DWORD *)this + 14);
      String::format((String *)"winRate:%d", v29, *((unsigned int *)this + 2));
      LogicProgressSimulator::log(this, &v42);
      String::~String();
      String::format(
        (String *)"battles:%d (win:%d loss:%d) chests:%d donations:%d ",
        v30,
        (unsigned int)(LoseCount + WinCount),
        WinCount,
        LoseCount,
        v25,
        v26);
      LogicProgressSimulator::log(this, &v41);
      String::~String();
      String::format((String *)"active:%d h sleep:%d h", v31, (unsigned int)(v28 / 3600), (unsigned int)(v27 / 3600));
      LogicProgressSimulator::log(this, &v40);
      String::~String();
      v32 = (LogicRewardRandomizer *)*((_QWORD *)this + 14);
      if ( v32 )
      {
        LogicRewardRandomizer::destruct(v32);
        v33 = (void *)*((_QWORD *)this + 14);
        if ( v33 )
          operator delete(v33);
        *((_QWORD *)this + 14) = 0;
      }
      v34 = (#1233 *)*((_QWORD *)this + 13);
      if ( v34 )
      {
        LogicMersenneTwisterRandom::destruct(v34);
        v35 = (void *)*((_QWORD *)this + 13);
        if ( v35 )
          operator delete(v35);
        *((_QWORD *)this + 13) = 0;
      }
      v36 = (#1146 *)LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
      v37 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      ExpLevel = LogicClientAvatar::getExpLevel(v37);
      return LogicClientHome::setLastShownLevelUp(v36, ExpLevel);
    }

    __int64 __fastcall LogicProgressSimulator::simulationTick(__int64 a1, const char *a2)
    {
      int v3; // w9
      __int64 v4; // x20
      __int64 Home; // x0
      int SecondsToNextFreeChest; // w20
      #1146 *v7; // x0
      LogicChest *FreeChest; // x1
      int v9; // w2
      __int64 v11; // x0
      LogicMath *v12; // x0
      int v13; // w2
      int v14; // w20
      LogicMath *v15; // x0
      int v16; // w2
      int v17; // w20
      LogicMath *v18; // x0
      int v19; // w2
      String v20; // [xsp+28h] [xbp-28h] BYREF
    
      v3 = *(_DWORD *)(a1 + 76);
      if ( v3 >= 24 - *(_DWORD *)(a1 + 20) )
      {
        v4 = (unsigned int)(86400 - 3600 * v3 - 60 * *(_DWORD *)(a1 + 80));
        if ( (int)v4 >= 1 )
        {
          String::format(
            (String *)"SLEEP %d hours %d mins",
            a2,
            (unsigned int)((int)v4 / 3600 % 24),
            (unsigned int)((int)v4 / 60 % 60));
          LogicProgressSimulator::log((LogicResourceData *)a1, &v20);
          String::~String();
          return v4;
        }
      }
      if ( (LogicProgressSimulator::claimOpenChests((LogicProgressSimulator *)a1) & 1) != 0 )
        return 1;
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
      SecondsToNextFreeChest = LogicClientHome::getSecondsToNextFreeChest(Home);
      v7 = (#1146 *)LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
      if ( !SecondsToNextFreeChest )
      {
        FreeChest = (LogicChest *)LogicClientHome::getFreeChest(v7);
        v9 = 2;
        goto LABEL_9;
      }
      if ( (unsigned int)LogicClientHome::isCrownChestAvailable(v7) )
      {
        FreeChest = *(LogicChest **)(LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88)) + 184);
        v9 = 3;
    LABEL_9:
        LogicProgressSimulator::openChest((LogicProgressSimulator *)a1, FreeChest, v9);
        return 1;
      }
      if ( (LogicProgressSimulator::startUnlockingAvailableChest((LogicResourceData *)a1) & 1) != 0 )
        return 1;
      if ( !(unsigned int)LogicProgressSimulator::timeToRequestSpell((LogicResourceData *)a1) )
      {
        LogicProgressSimulator::requestSpells((LogicResourceData *)a1);
        return 1;
      }
      if ( (LogicProgressSimulator::upgradeSpells((LogicResourceData *)a1) & 1) != 0 )
        return 1;
      if ( (unsigned int)LogicProgressSimulator::canStartBattle((LogicResourceData *)a1) )
      {
        LogicProgressSimulator::battle((LogicResourceData *)a1);
        return 135;
      }
      v11 = LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
      v12 = (LogicMath *)LogicClientHome::getSecondsToNextFreeChest(v11);
      v14 = LogicMath::min(v12, 86400, v13);
      v15 = (LogicMath *)LogicProgressSimulator::timeToOpenChest((LogicProgressSimulator *)a1);
      v17 = LogicMath::min(v15, v14, v16);
      v18 = (LogicMath *)LogicProgressSimulator::timeToRequestSpell((LogicResourceData *)a1);
      return LogicMath::min(v18, v17, v19);
    }

    __int64 __fastcall LogicProgressSimulator::claimOpenChests(UnlockAccountPopup **a1)
    {
      #1146 *Home; // x0
      int MaxChestCount; // w20
      char v4; // w22
      #1146 *v5; // x0
      __int64 Chest; // x0
      LogicChest *v7; // x21
      int v8; // w8
    
      Home = (#1146 *)LogicGameMode::getHome(a1[11]);
      MaxChestCount = LogicClientHome::getMaxChestCount(Home);
      v4 = 0;
      if ( MaxChestCount >= 1 )
      {
        do
        {
          --MaxChestCount;
          while ( 1 )
          {
            v5 = (#1146 *)LogicGameMode::getHome(a1[11]);
            Chest = LogicClientHome::getChest(v5, MaxChestCount);
            v7 = (LogicChest *)Chest;
            if ( Chest )
            {
              if ( (LogicChest::isUnlocked(Chest) & 1) != 0 )
                break;
            }
            v8 = MaxChestCount-- + 1;
            if ( v8 <= 1 )
              return v4 & 1;
          }
          v4 = 1;
          LogicProgressSimulator::openChest((LogicProgressSimulator *)a1, v7, 1);
        }
        while ( MaxChestCount + 1 > 1 );
      }
      return v4 & 1;
    }

    __int64 __fastcall LogicProgressSimulator::openChest(__int64 a1, int *a2, const char *a3)
    {
      int v3; // w20
      #1146 *Home; // x0
      __int64 ChestIndex; // x22
      AreaEffectObject *TreasureChestData; // x0
      __int64 Name; // x0
      const char *v10; // x1
      _QWORD *v11; // x8
      #1233 *v12; // x22
      int Tick; // w0
      LogicRewardRandomizer *v14; // x23
      LogicClientHome *v15; // x0
      ChallengeFailedMessage *v16; // x23
      LogicServerCommand *v17; // x22
      AreaEffectObject *v18; // x0
      int GlobalID; // w0
      __int64 result; // x0
      LogicClientHome *v21; // x20
      int CurrentTimestamp; // w0
      LogicClientHome *v23; // x20
      int v24; // w0
      String v25; // [xsp+18h] [xbp-78h] BYREF
      String v26; // [xsp+30h] [xbp-60h] BYREF
      String v27; // [xsp+48h] [xbp-48h] BYREF
    
      v3 = (int)a3;
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"progree simulator: trying to open NULL chest", a3);
      if ( v3 == 2 )
      {
        String::String(&v27, "open free chest");
        LogicProgressSimulator::log((LogicResourceData *)a1, &v27);
      }
      else if ( v3 == 3 )
      {
        String::String(&v26, "open star chest");
        LogicProgressSimulator::log((LogicResourceData *)a1, &v26);
      }
      else
      {
        Home = (#1146 *)LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
        ChestIndex = LogicClientHome::getChestIndex(Home, a2[4]);
        TreasureChestData = (AreaEffectObject *)LogicChest::getTreasureChestData((LogicSpawnPointData *)a2);
        Name = LogicData::getName(TreasureChestData);
        v11 = (_QWORD *)(Name + 8);
        if ( *(_DWORD *)(Name + 4) + 1 > 8 )
          v11 = (_QWORD *)*v11;
        String::format((String *)"open chest, slot:%d name:%s", v10, ChestIndex, v11);
        LogicProgressSimulator::log((LogicResourceData *)a1, &v25);
      }
      String::~String();
      v12 = *(#1233 **)(a1 + 104);
      Tick = LogicGameMode::getTick(*(UnlockAccountPopup **)(a1 + 88));
      LogicMersenneTwisterRandom::initialize(v12, *(_DWORD *)(a1 + 136) + Tick);
      ++*(_DWORD *)(a1 + 136);
      LODWORD(v12) = LogicMersenneTwisterRandom::rand(*(#1233 **)(a1 + 104), 0x10000);
      v14 = *(LogicRewardRandomizer **)(a1 + 112);
      v15 = (LogicClientHome *)LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
      v16 = (ChallengeFailedMessage *)LogicRewardRandomizer::randomizeReward(v14, (const LogicChest *)a2, (int)v12, v15);
      v17 = (LogicServerCommand *)operator new(56);
      LogicClaimRewardCommand::LogicClaimRewardCommand(v17);
      v18 = (AreaEffectObject *)LogicChest::getTreasureChestData((LogicSpawnPointData *)a2);
      GlobalID = LogicData::getGlobalID(v18);
      LogicClaimRewardCommand::setChestGlobalID((__int64)v17, GlobalID);
      LogicClaimRewardCommand::setLocationId((__int64)v17, a2[4]);
      LogicClaimRewardCommand::setChestType((__int64)v17, v3);
      LogicClaimRewardCommand::setData(v17, v16);
      result = LogicProgressSimulator::executeCommand((LogicResourceData *)a1, v17);
      if ( v3 == 2 )
      {
        v21 = (LogicClientHome *)LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
        CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*(_QWORD *)(a1 + 88));
        result = LogicClientHome::freeChestCollected(v21, CurrentTimestamp);
      }
      else if ( v3 == 3 )
      {
        v23 = (LogicClientHome *)LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
        v24 = LogicGameMode::getCurrentTimestamp(*(_QWORD *)(a1 + 88));
        result = LogicClientHome::crownChestCollected(v23, v24);
      }
      ++*(_DWORD *)(a1 + 44);
      return result;
    }

    __int64 __fastcall LogicProgressSimulator::startUnlockingAvailableChest(UnlockAccountPopup **this)
    {
      #1146 *Home; // x0
      #1146 *v3; // x0
      int MaxChestCount; // w0
      int v5; // w21
      #1146 *v6; // x0
      LogicSpawnPointData *Chest; // x0
      LogicSpawnPointData *v8; // x20
      int v9; // w8
      AreaEffectObject *TreasureChestData; // x0
      __int64 Name; // x0
      const char *v13; // x1
      _QWORD *v14; // x8
      int CurrentTimestamp; // w0
      String v16; // [xsp+8h] [xbp-38h] BYREF
    
      Home = (#1146 *)LogicGameMode::getHome(*(this + 11));
      if ( (int)LogicClientHome::getFreeWorkers(Home) < 1 )
        return 0;
      v3 = (#1146 *)LogicGameMode::getHome(*(this + 11));
      MaxChestCount = LogicClientHome::getMaxChestCount(v3);
      v5 = MaxChestCount - 1;
      if ( MaxChestCount < 1 )
        return 0;
      while ( 1 )
      {
        v6 = (#1146 *)LogicGameMode::getHome(*(this + 11));
        Chest = (LogicSpawnPointData *)LogicClientHome::getChest(v6, v5);
        v8 = Chest;
        if ( Chest )
        {
          if ( (LogicChest::canStartUnlocking(Chest) & 1) != 0 )
            break;
        }
        v9 = v5-- + 1;
        if ( v9 <= 1 )
          return 0;
      }
      TreasureChestData = (AreaEffectObject *)LogicChest::getTreasureChestData(v8);
      Name = LogicData::getName(TreasureChestData);
      v14 = (_QWORD *)(Name + 8);
      if ( *(_DWORD *)(Name + 4) + 1 > 8 )
        v14 = (_QWORD *)*v14;
      String::format((String *)"start unlocking chest %s", v13, v14);
      LogicProgressSimulator::log((LogicResourceData *)this, &v16);
      String::~String();
      CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*(this + 11));
      LogicChest::startUnlocking(v8, CurrentTimestamp);
      return 1;
    }

    __int64 __fastcall LogicProgressSimulator::timeToRequestSpell(LogicResourceData *this)
    {
      __int64 Home; // x0
    
      if ( !*((_BYTE *)this + 24) )
        return 0x7FFFFFFF;
      Home = LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
      return LogicClientHome::getRequestSpellsCooldownSeconds(Home);
    }

    UnlockAccountPopup **__fastcall LogicProgressSimulator::requestSpells(UnlockAccountPopup **this)
    {
      UnlockAccountPopup **v1; // x19
      int v2; // w20
      tween::Bounce *PlayerAvatar; // x0
      #1143 *Arena; // x0
      int SpellRequestSize; // w0
      int v6; // w21
      __int64 v7; // x26
      __int64 Home; // x0
      int TotalSpellCount; // w22
      int v10; // w0
      TextField *v11; // x23
      int v12; // w27
      int v13; // w28
      int v14; // w24
      __int64 v15; // x0
      TextField *SpellAt; // x25
      int v17; // w20
      InitState *SpellData; // x0
      bool v19; // vf
      InitState *v20; // x0
      int DonateCapacity; // w24
      AreaEffectObject *v22; // x0
      __int64 Name; // x0
      const char *v24; // x1
      _QWORD *v25; // x8
      LogicClientHome *v26; // x0
      int v27; // [xsp+14h] [xbp-6Ch]
      String v28; // [xsp+18h] [xbp-68h] BYREF
    
      v1 = this;
      if ( *((_BYTE *)this + 24) )
      {
        this = (UnlockAccountPopup **)LogicProgressSimulator::timeToRequestSpell((LogicResourceData *)this);
        if ( !(_DWORD)this )
        {
          v2 = LogicMersenneTwisterRandom::rand(v1[13], 3);
          PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(v1[11]);
          Arena = (#1143 *)LogicClientAvatar::getArena(PlayerAvatar);
          SpellRequestSize = LogicArenaData::getSpellRequestSize(Arena);
          v6 = SpellRequestSize;
          v27 = v2;
          if ( (v2 & 0x80000000) == 0 && SpellRequestSize >= 1 )
          {
            v7 = 0;
            do
            {
              Home = LogicGameMode::getHome(v1[11]);
              TotalSpellCount = LogicClientHome::getTotalSpellCount(Home);
              v10 = LogicMersenneTwisterRandom::rand(v1[13], TotalSpellCount);
              if ( TotalSpellCount < 1 )
                break;
              v11 = 0;
              v12 = v10 - 1;
              v13 = 0x7FFFFFFF;
              v14 = TotalSpellCount;
              do
              {
                v15 = LogicGameMode::getHome(v1[11]);
                SpellAt = (TextField *)LogicClientHome::getSpellAt(v15, (unsigned int)((v12 + v14) % TotalSpellCount));
                v17 = LogicSpell::getMaterialCountForNextLevel(SpellAt) - *((_DWORD *)SpellAt + 4);
                SpellData = (InitState *)LogicSpell::getSpellData(SpellAt);
                if ( !((v17 >= v13 || v17 < 1) | ((int)LogicSpellData::getDonateCapacity(SpellData) > v6)) )
                {
                  v13 = v17;
                  v11 = SpellAt;
                }
                v19 = __OFSUB__(v14--, 1);
              }
              while ( !((v14 < 0) ^ v19 | (v14 == 0)) );
              if ( !v11 )
                break;
              v20 = (InitState *)LogicSpell::getSpellData(v11);
              DonateCapacity = LogicSpellData::getDonateCapacity(v20);
              LogicSpell::addMaterial(v11, 1);
              v22 = (AreaEffectObject *)LogicSpell::getSpellData(v11);
              Name = LogicData::getName(v22);
              v25 = (_QWORD *)(Name + 8);
              if ( *(_DWORD *)(Name + 4) + 1 > 8 )
                v25 = (_QWORD *)*v25;
              String::format((String *)"gained %s from request %d", v24, v25, v7);
              LogicProgressSimulator::log((LogicResourceData *)v1, &v28);
              String::~String();
              if ( (int)v7 >= v27 )
                break;
              v6 -= DonateCapacity;
              v7 = (unsigned int)(v7 + 1);
            }
            while ( v6 > 0 );
          }
          v26 = (LogicClientHome *)LogicGameMode::getHome(v1[11]);
          return (UnlockAccountPopup **)LogicClientHome::startRequestSpellsCooldown(v26);
        }
      }
      return this;
    }

    __int64 __fastcall LogicProgressSimulator::upgradeSpells(UnlockAccountPopup **this)
    {
      #1146 *Home; // x0
      GameInputField *SpellCollection; // x20
      #1146 *v4; // x0
      AcceptChallengeMessage *SelectedDeck; // x21
      int SpellCnt; // w0
      unsigned __int64 v7; // x22
      LogicSpell *v8; // x23
      int v9; // w8
      int v10; // w8
      int v11; // w21
      LogicSpell *Spell; // x22
      int v13; // w8
    
      Home = (#1146 *)LogicGameMode::getHome(*(this + 11));
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
      v4 = (#1146 *)LogicGameMode::getHome(*(this + 11));
      SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(v4);
      SpellCnt = LogicSpellDeck::getSpellCnt((__int64)SelectedDeck);
      v7 = (unsigned int)(SpellCnt - 1);
      if ( SpellCnt < 1 )
      {
    LABEL_5:
        v10 = *((_DWORD *)SpellCollection + 3);
        v11 = v10 - 1;
        if ( v10 < 1 )
          return 0;
        while ( 1 )
        {
          Spell = (LogicSpell *)LogicSpellCollection::getSpell(SpellCollection, v11);
          if ( (unsigned int)LogicSpell::canUpgrade(Spell) )
          {
            if ( (LogicProgressSimulator::tryUpgradeSpell((LogicProgressSimulator *)this, Spell) & 1) != 0 )
              break;
          }
          v13 = v11-- + 1;
          if ( v13 <= 1 )
            return 0;
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = (LogicSpell *)LogicSpellDeck::getSpell(SelectedDeck, (const char *)v7);
          if ( (unsigned int)LogicSpell::canUpgrade(v8) )
          {
            if ( (LogicProgressSimulator::tryUpgradeSpell((LogicProgressSimulator *)this, v8) & 1) != 0 )
              break;
          }
          v9 = v7 + 1;
          v7 = (unsigned int)(v7 - 1);
          if ( v9 <= 1 )
            goto LABEL_5;
        }
      }
      return 1;
    }

    bool __fastcall LogicProgressSimulator::canStartBattle(LogicResourceData *this)
    {
      #1146 *Home; // x0
      int ChestCnt; // w20
      #1146 *v4; // x0
      tween::Bounce *PlayerAvatar; // x0
      int Gold; // w20
      tween::Bounce *v7; // x0
      __int64 Arena; // x0
    
      if ( *((_DWORD *)this + 9) >= *((_DWORD *)this + 3) )
        return 0;
      Home = (#1146 *)LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
      ChestCnt = LogicClientHome::getChestCnt(Home);
      v4 = (#1146 *)LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
      if ( ChestCnt >= (int)LogicClientHome::getMaxChestCount(v4) )
        return 0;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      Gold = LogicClientAvatar::getGold(PlayerAvatar);
      v7 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      Arena = LogicClientAvatar::getArena(v7);
      return Gold >= (int)LogicArenaData::getMatchCost(Arena);
    }

    __int64 __fastcall LogicProgressSimulator::battle(LogicResourceData *this)
    {
      tween::Bounce *PlayerAvatar; // x0
      int Gold; // w21
      tween::Bounce *v4; // x0
      __int64 Arena; // x0
      int MatchCost; // w20
      const char *v7; // x2
      LogicKickAllianceMemberCommand *v8; // x21
      const AreaEffectObject *GoldData; // x0
      tween::Bounce *v10; // x0
      __int64 v11; // x0
      int isTrainingCamp; // w21
      __int64 NextBattleResult; // x20
      __int64 v14; // x23
      tween::Bounce *v15; // x0
      int v16; // w26
      tween::Bounce *v17; // x0
      __int64 v18; // x22
      __int64 v19; // x24
      LogicClientAvatar *v20; // x24
      tween::Bounce *v21; // x0
      const LogicArenaData *v22; // x0
      int v23; // w8
      int v24; // w9
      UnlockAccountPopup *v25; // x0
      #1146 *Home; // x0
      int ChestCnt; // w24
      #1146 *v28; // x0
      tween::Bounce *v29; // x24
      tween::Bounce *v30; // x0
      const #1143 *v31; // x0
      const LogicRefreshAchievementsCommand *NextWinnerChest; // x24
      LogicClientAvatar *v33; // x0
      LogicSpawnPointData *v34; // x25
      LogicClientHome *v35; // x0
      LogicClientAvatar *v36; // x24
      __int64 v37; // x0
      int LoseCount; // w0
      LogicGameMode *v39; // x24
      LogicClientAvatar *v40; // x25
      LogicClientAvatar *v41; // x0
      __int64 v42; // x0
      const char *v43; // x1
      LogicGameMode *v44; // x25
      LogicClientAvatar *v45; // x0
      tween::Bounce *v46; // x0
      __int64 v47; // x0
      int v48; // w8
      __int64 v49; // x0
      LogicClientAvatar *v50; // x25
      __int64 v51; // x0
      int NpcWinCount; // w0
      LogicClientAvatar *v53; // x25
      __int64 v54; // x0
      int WinCount; // w0
      LogicClientAvatar *v56; // x0
      const String *Name; // x0
      __int64 v58; // x0
      const char *v59; // x1
      internal_t *pHeap; // x9
      LogicClientAvatar *v61; // x23
      __int64 v62; // x0
      int BattleCount; // w0
      tween::Bounce *v64; // x0
      __int64 v65; // x0
      tween::Bounce *v66; // x0
      tween::Bounce *v67; // x0
      __int64 v68; // x20
      void (__fastcall *v69)(__int64, __int64); // x21
      tween::Bounce *v70; // x0
      __int64 v71; // x0
      tween::Bounce *v72; // x0
      AreaEffectObject *v73; // x0
      __int64 v74; // x0
      const char *v75; // x1
      _QWORD *v76; // x8
      LogicClientHome *v77; // x0
      #1146 *v78; // x0
      int v79; // w9
      String v81; // [xsp+18h] [xbp-A8h] BYREF
      String v82; // [xsp+30h] [xbp-90h] BYREF
      String v83; // [xsp+48h] [xbp-78h] BYREF
      String v84; // [xsp+60h] [xbp-60h] BYREF
      _DWORD v85[2]; // [xsp+78h] [xbp-48h] BYREF
    
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      Gold = LogicClientAvatar::getGold(PlayerAvatar);
      v4 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      Arena = LogicClientAvatar::getArena(v4);
      MatchCost = LogicArenaData::getMatchCost(Arena);
      Debugger::doAssert((Debugger *)(Gold >= MatchCost), (bool)"", v7);
      if ( MatchCost >= 1 )
      {
        v8 = (LogicKickAllianceMemberCommand *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        GoldData = (const AreaEffectObject *)LogicDataTables::getGoldData(v8);
        LogicClientAvatar::commodityCountChangeHelper(v8, 0, GoldData, -MatchCost, 13);
      }
      v10 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      v11 = LogicClientAvatar::getArena(v10);
      isTrainingCamp = LogicArenaData::isTrainingCamp(v11);
      NextBattleResult = LogicProgressSimulator::getNextBattleResult(this);
      v14 = (unsigned int)LogicMersenneTwisterRandom::rand(*((#1233 **)this + 13), 3) + (unsigned int)NextBattleResult;
      v15 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      LogicClientAvatar::setStarCount(v15, v14);
      v16 = *(_DWORD *)(LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11)) + 64);
      v17 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      v18 = LogicClientAvatar::getArena(v17);
      v19 = *((_QWORD *)this + 12);
      *(_DWORD *)(v19 + 64) = *(_DWORD *)(LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11)) + 64);
      v20 = (LogicClientAvatar *)*((_QWORD *)this + 12);
      v21 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      v22 = (const LogicArenaData *)LogicClientAvatar::getArena(v21);
      LogicClientAvatar::setArena(v20, v22);
      LogicLong::LogicLong((LogicLong *)v85);
      if ( isTrainingCamp )
        v23 = -1;
      else
        v23 = 12;
      if ( isTrainingCamp )
        v24 = -1;
      else
        v24 = 34;
      v85[0] = v23;
      v85[1] = v24;
      LogicClientAvatar::setAccountId(*((LogicClientAvatar **)this + 12), (const LogicLong *)v85);
      v25 = (UnlockAccountPopup *)*((_QWORD *)this + 11);
      if ( (_DWORD)NextBattleResult )
      {
        Home = (#1146 *)LogicGameMode::getHome(v25);
        ChestCnt = LogicClientHome::getChestCnt(Home);
        v28 = (#1146 *)LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
        if ( ChestCnt < (int)LogicClientHome::getMaxChestCount(v28)
          && (v29 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11)),
              v30 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11)),
              v31 = (const #1143 *)LogicClientAvatar::getArena(v30),
              (NextWinnerChest = (const LogicRefreshAchievementsCommand *)LogicClientAvatar::getNextWinnerChest(v29, v31)) != 0) )
        {
          v33 = (LogicClientAvatar *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
          LogicClientAvatar::updateWinnerChestIndex(v33);
          v34 = (LogicSpawnPointData *)operator new(48);
          LogicChest::LogicChest(v34, NextWinnerChest);
          LogicChest::setSource(v34, 1);
          v35 = (LogicClientHome *)LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
          LogicClientHome::addChest(v35, v34, -1);
        }
        else
        {
          NextWinnerChest = 0;
        }
        v44 = (LogicGameMode *)*((_QWORD *)this + 11);
        v45 = (LogicClientAvatar *)LogicGameMode::getPlayerAvatar(v44);
        LogicGameMode::updateScores(v44, v45, *((LogicClientAvatar **)this + 12));
        v46 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        v47 = LogicClientAvatar::getArena(v46);
        v48 = LogicArenaData::isTrainingCamp(v47);
        v49 = *((_QWORD *)this + 11);
        if ( v48 )
        {
          v50 = (LogicClientAvatar *)LogicGameMode::getPlayerAvatar(v49);
          v51 = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
          NpcWinCount = LogicClientAvatar::getNpcWinCount(v51);
          LogicClientAvatar::setNpcWinCount(v50, NpcWinCount + 1);
        }
        else
        {
          v53 = (LogicClientAvatar *)LogicGameMode::getPlayerAvatar(v49);
          v54 = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
          WinCount = LogicClientAvatar::getWinCount(v54);
          LogicClientAvatar::setWinCount(v53, WinCount + 1);
        }
        v56 = (LogicClientAvatar *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        LogicClientAvatar::refreshArena(v56);
        if ( NextWinnerChest )
        {
          Name = (const String *)LogicData::getName(NextWinnerChest);
          String::String(&v84, Name);
        }
        else
        {
          String::String(&v84, "-");
        }
        v58 = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        if ( v84.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v84.internal.pHeap;
        else
          pHeap = &v84.internal;
        String::format((String *)"battle won, stars:%d score:%d chest:%s", v59, v14, *(unsigned int *)(v58 + 64), pHeap);
        LogicProgressSimulator::log(this, &v83);
        String::~String();
        String::~String();
      }
      else
      {
        v36 = (LogicClientAvatar *)LogicGameMode::getPlayerAvatar(v25);
        v37 = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        LoseCount = LogicClientAvatar::getLoseCount(v37);
        LogicClientAvatar::setLoseCount(v36, LoseCount + 1);
        v39 = (LogicGameMode *)*((_QWORD *)this + 11);
        v40 = (LogicClientAvatar *)*((_QWORD *)this + 12);
        v41 = (LogicClientAvatar *)LogicGameMode::getPlayerAvatar(v39);
        LogicGameMode::updateScores(v39, v40, v41);
        v42 = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        String::format((String *)"battle lost, stars:%d score:%d", v43, v14, *(unsigned int *)(v42 + 64));
        LogicProgressSimulator::log(this, &v82);
        String::~String();
      }
      v61 = (LogicClientAvatar *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      v62 = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      BattleCount = LogicClientAvatar::getBattleCount(v62);
      LogicClientAvatar::setBattleCount(v61, BattleCount + 1);
      LODWORD(v61) = *(_DWORD *)(LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11)) + 64);
      v64 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      v65 = LogicClientAvatar::getChangeListener(v64);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v65 + 104LL))(
        v65,
        (unsigned int)((_DWORD)v61 - v16),
        NextBattleResult,
        (unsigned int)NextBattleResult ^ 1,
        isTrainingCamp ^ 1u);
      v66 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
      if ( LogicClientAvatar::getArena(v66) != v18 )
      {
        v67 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        v68 = LogicClientAvatar::getChangeListener(v67);
        v69 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 168LL);
        v70 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        v71 = LogicClientAvatar::getArena(v70);
        v69(v68, v71);
        v72 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 11));
        v73 = (AreaEffectObject *)LogicClientAvatar::getArena(v72);
        v74 = LogicData::getName(v73);
        v76 = (_QWORD *)(v74 + 8);
        if ( *(_DWORD *)(v74 + 4) + 1 > 8 )
          v76 = (_QWORD *)*v76;
        String::format((String *)"arena changed to %s", v75, v76);
        LogicProgressSimulator::log(this, &v81);
        String::~String();
      }
      v77 = (LogicClientHome *)LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
      LogicClientHome::updateStarsFromAvatar(v77);
      v78 = (#1146 *)LogicGameMode::getHome(*((UnlockAccountPopup **)this + 11));
      LogicClientHome::updateArenaFromAvatar(v78);
      v79 = *((_DWORD *)this + 10);
      ++*((_DWORD *)this + 9);
      *((_DWORD *)this + 10) = v79 + 1;
      return 135;
    }

    __int64 __fastcall LogicProgressSimulator::timeToOpenChest(__int64 a1)
    {
      __int64 v2; // x20
      #1146 *Home; // x0
      int MaxChestCount; // w21
      #1146 *v5; // x0
      LogicSpawnPointData *Chest; // x0
      LogicSpawnPointData *v7; // x22
      int v8; // w8
      int v9; // w2
      __int64 result; // x0
    
      v2 = 1000000;
      Home = (#1146 *)LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
      MaxChestCount = LogicClientHome::getMaxChestCount(Home);
      if ( MaxChestCount < 1 )
        return 1000000;
      do
      {
        --MaxChestCount;
        while ( 1 )
        {
          v5 = (#1146 *)LogicGameMode::getHome(*(UnlockAccountPopup **)(a1 + 88));
          Chest = (LogicSpawnPointData *)LogicClientHome::getChest(v5, MaxChestCount);
          v7 = Chest;
          if ( Chest )
          {
            if ( (LogicChest::isUnlocking(Chest) & 1) != 0 || (LogicChest::isUnlocked(v7) & 1) != 0 )
              break;
          }
          v8 = MaxChestCount-- + 1;
          if ( v8 <= 1 )
            return v2;
        }
        result = LogicChest::getUnlockingSecondsLeft(v7);
        if ( (v2 & 0x80000000) == 0 )
          result = LogicMath::min((LogicMath *)result, v2, v9);
        v2 = result;
      }
      while ( MaxChestCount + 1 > 1 );
      return result;
    }

    __int64 __fastcall LogicProgressSimulator::tryUpgradeSpell(LogicResourceData *a1, unsigned int *a2)
    {
      tween::Bounce *PlayerAvatar; // x0
      int Gold; // w21
      __int64 FuseCost; // x22
      bool v7; // vf
      int v8; // w21
      tween::Bounce *v9; // x0
      LogicDataTables *Diamonds; // x0
      int v11; // w22
      HomeScreen *Globals; // x0
      __int64 ResourceDiamondCost; // x21
      LogicFuseSpellsCommand *v15; // x21
      __int64 SpellData; // x0
      LogicFuseSpellsCommand *v17; // x22
      __int64 v18; // x0
      DeviceLinkEnterCodeScreen *v19; // x23
      AreaEffectObject *v20; // x0
      __int64 Name; // x0
      const char *v22; // x1
      _QWORD *v23; // x8
      String v24; // [xsp+28h] [xbp-48h] BYREF
    
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)a1 + 11));
      Gold = LogicClientAvatar::getGold(PlayerAvatar);
      FuseCost = LogicFuseSpellsCommand::getFuseCost(a2);
      v7 = __OFSUB__((_DWORD)FuseCost, Gold);
      v8 = FuseCost - Gold;
      if ( (v8 < 0) ^ v7 | (v8 == 0) )
      {
        v15 = (LogicFuseSpellsCommand *)operator new(40);
        LogicFuseSpellsCommand::LogicFuseSpellsCommand(v15);
        SpellData = LogicSpell::getSpellData((TextField *)a2);
        LogicFuseSpellsCommand::setSpell((__int64)v15, SpellData);
        LogicProgressSimulator::executeCommand(a1, v15);
        ResourceDiamondCost = 0;
      }
      else
      {
        v9 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)a1 + 11));
        Diamonds = (LogicDataTables *)LogicClientAvatar::getDiamonds(v9);
        v11 = (int)Diamonds;
        Globals = (HomeScreen *)LogicDataTables::getGlobals(Diamonds);
        ResourceDiamondCost = LogicGlobals::getResourceDiamondCost(Globals, v8);
        if ( v11 < (int)ResourceDiamondCost )
          return 0;
        v17 = (LogicFuseSpellsCommand *)operator new(40);
        LogicFuseSpellsCommand::LogicFuseSpellsCommand(v17);
        v18 = LogicSpell::getSpellData((TextField *)a2);
        LogicFuseSpellsCommand::setSpell((__int64)v17, v18);
        v19 = (DeviceLinkEnterCodeScreen *)operator new(40);
        LogicBuyResourcesCommand::LogicBuyResourcesCommand(v19);
        LogicBuyResourcesCommand::setCommand(v19, v17);
        LogicProgressSimulator::executeCommand(a1, v19);
        FuseCost = 0;
      }
      v20 = (AreaEffectObject *)LogicSpell::getSpellData((TextField *)a2);
      Name = LogicData::getName(v20);
      v23 = (_QWORD *)(Name + 8);
      if ( *(_DWORD *)(Name + 4) + 1 > 8 )
        v23 = (_QWORD *)*v23;
      String::format(
        (String *)"%s upgraded to level %d (with %d gold %d gems)",
        v22,
        v23,
        a2[2] + 1,
        FuseCost,
        ResourceDiamondCost);
      LogicProgressSimulator::log(a1, &v24);
      String::~String();
      return 1;
    }

    bool __fastcall LogicProgressSimulator::getNextBattleResult(__int64 a1)
    {
      const char *v2; // x1
      int v3; // w8
      int *v4; // x19
      int v5; // t1
      _BOOL8 result; // x0
      _QWORD *v7; // x9
      __int64 v8; // t1
      int v9; // t1
    
      if ( *(int *)(LogicGameMode::getPlayerAvatar(*(_QWORD *)(a1 + 88)) + 64) < 2001 )
      {
        v7 = *(_QWORD **)(a1 + 120);
        if ( v7 )
        {
          v8 = *(int *)(a1 + 128);
          v4 = (int *)(a1 + 128);
          v3 = v8;
          result = *(unsigned __int8 *)(*v7 + v8) != 0;
        }
        else
        {
          Debugger::warning((__siginfo *)"LogicProgressSimulator - Winning chance not defined!", v2);
          v9 = *(_DWORD *)(a1 + 128);
          v4 = (int *)(a1 + 128);
          v3 = v9;
          result = 1;
        }
      }
      else
      {
        v5 = *(_DWORD *)(a1 + 128);
        v4 = (int *)(a1 + 128);
        v3 = v5;
        result = (v5 & 1) == 0;
      }
      *v4 = (v3 + 1) % 100;
      return result;
    }

    void __fastcall LogicProgressSimulator::~LogicProgressSimulator(LogicResourceData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicProgressSimulator::~LogicProgressSimulator(LogicResourceData *this)
    {
      operator delete(this);
    }

}; // end class LogicProgressSimulator
