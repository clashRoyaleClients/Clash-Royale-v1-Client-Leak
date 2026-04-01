class LogicClientHome
{
public:

    void __fastcall LogicClientHome::LogicClientHome(LogicClientHome *this)
    {
      LogicHomeChangeListener *v2; // x23
      __int64 Globals; // x0
      int v4; // w23
      _QWORD *v5; // x0
      __int64 v6; // [xsp+8h] [xbp-48h] BYREF
    
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      LogicSpellCollection::LogicSpellCollection((LogicClientHome *)((char *)this + 40));
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 14) = 0;
      LogicTimer::LogicTimer((LogicClientHome *)((char *)this + 128));
      LogicTimer::LogicTimer((LogicClientHome *)((char *)this + 140));
      LogicTimer::LogicTimer((LogicClientHome *)((char *)this + 168));
      LogicTimer::LogicTimer((LogicClientHome *)((char *)this + 196));
      LogicTimer::LogicTimer((LogicClientHome *)((char *)this + 208));
      LogicTimer::LogicTimer((LogicClientHome *)((char *)this + 248));
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      LogicTimer::LogicTimer((LogicClientHome *)((char *)this + 280));
      LogicTimer::LogicTimer((LogicClientHome *)((char *)this + 292));
      String::String((String *)((char *)this + 352));
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 48) = 0;
      LogicClientHome::initializeMembers(this);
      v2 = (LogicHomeChangeListener *)operator new(8);
      LogicHomeChangeListener::LogicHomeChangeListener(v2);
      *(_QWORD *)this = v2;
      Globals = LogicDataTables::getGlobals();
      LogicArrayList<LogicChest *>::ensureCapacity((char *)this + 104, *(unsigned int *)(Globals + 392));
      v4 = -1;
      while ( ++v4 < *(_DWORD *)(LogicDataTables::getGlobals() + 392) )
      {
        v6 = 0;
        LogicArrayList<LogicChest *>::add((char *)this + 104, &v6);
      }
      v5 = (_QWORD *)operator new(16);
      *v5 = 0;
      v5[1] = 0;
      *((_QWORD *)this + 41) = v5;
    }

    __int64 __fastcall LogicClientHome::getMaxChestCount(CoOpenStreamEntry *this)
    {
      return *(unsigned int *)(LogicDataTables::getGlobals() + 392);
    }

    // attributes: thunk
    void __fastcall LogicClientHome::LogicClientHome(LogicClientHome *this)
    {
      __ZN15LogicClientHomeC2Ev(this);
    }

    __int64 __fastcall LogicClientHome::getChangeListener(CoOpenStreamEntry *this)
    {
      return *(_QWORD *)this;
    }

    __int64 __fastcall LogicClientHome::destruct(CoOpenStreamEntry *this)
    {
      _QWORD *v2; // x20
      void *v3; // x0
      LogicSpawnPointData *v4; // x0
      void *v5; // x0
      LogicSpawnPointData *v6; // x0
      void *v7; // x0
      LogicSpawnPointData *v8; // x0
      void *v9; // x0
      LogicSpawnPointData *v10; // x0
      void *v11; // x0
      int v12; // w8
      __int64 i; // x21
      __int64 v14; // x9
      __int64 v15; // x20
      int v16; // w8
      __int64 j; // x21
      __int64 v18; // x9
      void *v19; // x20
    
      LogicClientHome::clearShopSpells(this);
      v2 = (_QWORD *)*((_QWORD *)this + 41);
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)this + 41) = 0;
      if ( *(_QWORD *)this )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
        if ( *(_QWORD *)this )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this);
        *(_QWORD *)this = 0;
      }
      v3 = (void *)*((_QWORD *)this + 2);
      if ( v3 )
        operator delete(v3);
      *((_QWORD *)this + 2) = 0;
      v4 = (LogicSpawnPointData *)*((_QWORD *)this + 19);
      if ( v4 )
      {
        LogicChest::destruct(v4);
        v5 = (void *)*((_QWORD *)this + 19);
        if ( v5 )
          operator delete(v5);
        *((_QWORD *)this + 19) = 0;
      }
      v6 = (LogicSpawnPointData *)*((_QWORD *)this + 20);
      if ( v6 )
      {
        LogicChest::destruct(v6);
        v7 = (void *)*((_QWORD *)this + 20);
        if ( v7 )
          operator delete(v7);
        *((_QWORD *)this + 20) = 0;
      }
      v8 = (LogicSpawnPointData *)*((_QWORD *)this + 23);
      if ( v8 )
      {
        LogicChest::destruct(v8);
        v9 = (void *)*((_QWORD *)this + 23);
        if ( v9 )
          operator delete(v9);
        *((_QWORD *)this + 23) = 0;
      }
      v10 = (LogicSpawnPointData *)*((_QWORD *)this + 15);
      if ( v10 )
      {
        LogicChest::destruct(v10);
        v11 = (void *)*((_QWORD *)this + 15);
        if ( v11 )
          operator delete(v11);
        *((_QWORD *)this + 15) = 0;
      }
      v12 = *((_DWORD *)this + 9);
      if ( v12 >= 1 )
      {
        for ( i = 0; i < v12; ++i )
        {
          v14 = *((_QWORD *)this + 3);
          v15 = *(_QWORD *)(v14 + 8 * i);
          if ( v15 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(*(_QWORD *)(v14 + 8 * i));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
            v12 = *((_DWORD *)this + 9);
          }
        }
      }
      *((_DWORD *)this + 9) = 0;
      v16 = *((_DWORD *)this + 29);
      if ( v16 >= 1 )
      {
        for ( j = 0; j < v16; ++j )
        {
          v18 = *((_QWORD *)this + 13);
          v19 = *(void **)(v18 + 8 * j);
          if ( v19 )
          {
            LogicChest::destruct(*(LogicSpawnPointData **)(v18 + 8 * j));
            operator delete(v19);
            v16 = *((_DWORD *)this + 29);
          }
        }
      }
      *((_DWORD *)this + 29) = 0;
      LogicSpellCollection::destruct((CoOpenStreamEntry *)((char *)this + 40));
      LogicTimer::destruct((__int64)this + 128);
      LogicTimer::destruct((__int64)this + 196);
      LogicTimer::destruct((__int64)this + 168);
      LogicTimer::destruct((__int64)this + 140);
      LogicTimer::destruct((__int64)this + 292);
      LogicTimer::destruct((__int64)this + 280);
      LogicTimer::destruct((__int64)this + 248);
      return LogicClientHome::initializeMembers(this);
    }

    void __fastcall LogicClientHome::clearShopSpells(CoOpenStreamEntry *this)
    {
      int v2; // w8
      __int64 i; // x21
      __int64 v4; // x9
      void *v5; // x20
    
      v2 = *((_DWORD *)this + 69);
      if ( v2 >= 1 )
      {
        for ( i = 0; i < v2; ++i )
        {
          v4 = *((_QWORD *)this + 33);
          v5 = *(void **)(v4 + 8 * i);
          if ( v5 )
          {
            LogicDataSlot::destruct(*(_QWORD *)(v4 + 8 * i));
            operator delete(v5);
            v2 = *((_DWORD *)this + 69);
          }
        }
      }
      *((_DWORD *)this + 69) = 0;
    }

    __int64 __fastcall LogicClientHome::loadingFinished(CoOpenStreamEntry *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x20
      __int64 PlayerAvatar; // x20
      const char *v6; // x2
      int BattleCount; // w20
      __int64 Globals; // x0
      int v9; // w2
      int v10; // w0
    
      v4 = *((_QWORD *)this + 1);
      Debugger::doAssert((Debugger *)(v4 != 0), (bool)"", a3);
      PlayerAvatar = LogicGameMode::getPlayerAvatar(v4);
      Debugger::doAssert((Debugger *)(PlayerAvatar != 0), (bool)"", v6);
      BattleCount = LogicClientAvatar::getBattleCount(PlayerAvatar);
      if ( BattleCount > *((_DWORD *)this + 76) )
      {
        Globals = LogicDataTables::getGlobals();
        v10 = LogicMath::max((LogicMath *)*(unsigned int *)(Globals + 96), 1, v9);
        if ( BattleCount / v10 > *((_DWORD *)this + 76) / v10 )
          LogicClientHome::clearCardUsageStats(this);
        LogicClientHome::updateCardUsageStatsFromAvatar(this);
        *((_DWORD *)this + 76) = BattleCount;
      }
      LogicClientHome::updateChestCountToAvatar(this);
      return LogicClientHome::updateCardCountToAvatar(this);
    }

    __int64 __fastcall LogicClientHome::getGameMode(CoOpenStreamEntry *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall LogicClientHome::clearCardUsageStats(CoOpenStreamEntry *this)
    {
      __int64 result; // x0
      int v3; // w20
      __int64 v4; // x21
      __int64 SpellAt; // x0
    
      result = LogicClientHome::getTotalSpellCount(this);
      v3 = result;
      if ( (int)result >= 1 )
      {
        v4 = 0;
        do
        {
          SpellAt = LogicClientHome::getSpellAt(this, v4);
          result = LogicSpell::setRecentUseCount(SpellAt, 0);
          v4 = (unsigned int)(v4 + 1);
        }
        while ( v3 != (_DWORD)v4 );
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::updateCardUsageStatsFromAvatar(CoOpenStreamEntry *this)
    {
      tween::Bounce *PlayerAvatar; // x20
      __int64 result; // x0
      int v4; // w21
      AreaEffectObject *v5; // x22
      int v6; // w27
      __int64 v7; // x23
      TextField *SpellAt; // x24
      const InitState *SpellData; // x25
      int SpellUsageStat; // w26
      int RecentUseCount; // w0
      int v12; // w24
    
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 1));
      result = LogicClientHome::getTotalSpellCount(this);
      v4 = result;
      if ( (int)result >= 1 )
      {
        v5 = 0;
        v6 = 0;
        v7 = 0;
        do
        {
          SpellAt = (TextField *)LogicClientHome::getSpellAt(this, v7);
          SpellData = (const InitState *)LogicSpell::getSpellData(SpellAt);
          SpellUsageStat = LogicClientAvatar::getSpellUsageStat(PlayerAvatar, SpellData);
          RecentUseCount = LogicSpell::getRecentUseCount(SpellAt);
          LogicSpell::setRecentUseCount((__int64)SpellAt, RecentUseCount + SpellUsageStat);
          LogicClientAvatar::setSpellUsageStat(PlayerAvatar, SpellData, 0);
          v12 = LogicSpell::getRecentUseCount(SpellAt);
          result = LogicSpellData::getManaCost(SpellData);
          if ( (int)result * v12 > v6 )
          {
            v6 = result * v12;
            v5 = SpellData;
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( v4 != (_DWORD)v7 );
        if ( v5 )
          return LogicClientAvatar::setFavouriteSpell(PlayerAvatar, v5);
      }
      return result;
    }

    LogicDataTables *__fastcall LogicClientHome::updateChestCountToAvatar(__int64 a1)
    {
      LogicDataTables *result; // x0
      __int64 v3; // x8
      unsigned int v4; // w9
      _QWORD *v5; // x10
      unsigned __int64 v7; // x1
    
      result = *(LogicDataTables **)(a1 + 8);
      if ( result )
      {
        result = (LogicDataTables *)LogicGameMode::getPlayerAvatar((__int64)result);
        if ( result )
        {
          v3 = *(int *)(a1 + 116);
          if ( (int)v3 < 1 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 0;
            v5 = *(_QWORD **)(a1 + 104);
            do
            {
              if ( *v5++ )
                ++v4;
              --v3;
            }
            while ( v3 );
          }
          if ( *(_QWORD *)(a1 + 120) )
            v7 = v4 + 1;
          else
            v7 = v4;
          return (LogicDataTables *)LogicClientAvatar::setChestCount(result, (String *)v7);
        }
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::updateCardCountToAvatar(__int64 a1)
    {
      __int64 result; // x0
      LogicDataTables *v3; // x19
      int TotalSpellCount; // w20
    
      result = *(_QWORD *)(a1 + 8);
      if ( result )
      {
        result = LogicGameMode::getPlayerAvatar(result);
        v3 = (LogicDataTables *)result;
        if ( result )
        {
          TotalSpellCount = LogicClientHome::getTotalSpellCount(a1);
          result = LogicClientAvatar::getCardsFound(v3);
          if ( TotalSpellCount > (int)result )
            return LogicClientAvatar::setCardsFound(v3, TotalSpellCount);
        }
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::getId(__int64 a1)
    {
      return *(_QWORD *)(a1 + 16);
    }

    LogicDataTables *__fastcall LogicClientHome::addChest(__int64 a1, __int64 a2, int a3)
    {
      __int64 v3; // x21
      int v6; // w1
      const char *v7; // x1
      __int64 v8; // x8
      int v9; // w9
      _QWORD *v10; // x10
      int v12; // w22
      const char *v13; // x2
      __int64 v14; // x8
      const char *v15; // x2
      __int64 v16; // x0
      int v17; // w1
      LogicSpawnPointData *v18; // x0
      void *v19; // x0
    
      LODWORD(v3) = a3;
      v6 = *(_DWORD *)(a1 + 232) + 1;
      *(_DWORD *)(a1 + 232) = v6;
      *(_DWORD *)(a2 + 16) = v6;
      if ( LogicClientHome::getChestWithID((CoOpenStreamEntry *)a1, v6) )
        Debugger::error((__siginfo *)"duplicate chest id!", v7);
      v8 = *(int *)(a1 + 116);
      if ( (int)v8 < 1 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 0;
        v10 = *(_QWORD **)(a1 + 104);
        do
        {
          if ( *v10++ )
            ++v9;
          --v8;
        }
        while ( v8 );
      }
      if ( *(_QWORD *)(a1 + 120) )
        v12 = v9 + 1;
      else
        v12 = v9;
      if ( v12 >= *(_DWORD *)(LogicDataTables::getGlobals() + 392) )
      {
        v18 = *(LogicSpawnPointData **)(a1 + 120);
        if ( v18 )
        {
          LogicChest::destruct(v18);
          v19 = *(void **)(a1 + 120);
          if ( v19 )
            operator delete(v19);
          *(_QWORD *)(a1 + 120) = 0;
        }
        *(_QWORD *)(a1 + 120) = a2;
        v17 = -1;
        v16 = a2;
      }
      else
      {
        if ( (_DWORD)v3 == -1 )
        {
          v14 = *(int *)(a1 + 116);
          if ( (int)v14 < 1 )
          {
    LABEL_19:
            LODWORD(v3) = -1;
          }
          else
          {
            v3 = 0;
            while ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v3) )
            {
              if ( ++v3 >= v14 )
                goto LABEL_19;
            }
          }
        }
        Debugger::doAssert((Debugger *)((_DWORD)v3 != -1), (bool)"cannot find free slot for chest", v13);
        Debugger::doAssert(
          (Debugger *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * (int)v3) == 0),
          (bool)"chest already in slot?",
          v15);
        *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * (int)v3) = a2;
        v16 = a2;
        v17 = v3;
      }
      LogicChest::setSlotIndex(v16, v17);
      return LogicClientHome::updateChestCountToAvatar(a1);
    }

    __int64 __fastcall LogicClientHome::encode(__int64 a1, ExpBar *a2)
    {
      int v4; // w21
      __int64 v5; // x22
      int v6; // w21
      __int64 v7; // x23
      __int64 v8; // x22
      void (__fastcall *v9)(ExpBar *, __int64); // x8
      void (__fastcall *v10)(ExpBar *, __int64); // x8
      void (__fastcall *v11)(ExpBar *, __int64); // x8
      void (__fastcall *v12)(ExpBar *, __int64); // x8
      __int64 v13; // x21
      void (__fastcall *v14)(ExpBar *, _QWORD); // x8
      __int64 v15; // x21
      int v16; // w21
      __int64 v17; // x22
      const char *v18; // x2
    
      ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 16));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 232));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 392));
      LogicTimer::encode((unsigned int *)(a1 + 208), (__int64)a2);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 220));
      v4 = *(_DWORD *)(a1 + 36);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, (unsigned int)v4);
      if ( v4 >= 1 )
      {
        v5 = 0;
        do
          LogicSpellDeck::encode(*(AcceptChallengeMessage **)(*(_QWORD *)(a1 + 24) + 8 * v5++), a2);
        while ( v4 != (_DWORD)v5 );
      }
      LogicSpellCollection::encode((GameInputField *)(a1 + 40), a2);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 64));
      v6 = *(_DWORD *)(a1 + 116);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, (unsigned int)v6);
      if ( v6 > 0 )
      {
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v7);
          v9 = *(void (__fastcall **)(ExpBar *, __int64))(*(_QWORD *)a2 + 48LL);
          if ( v8 )
          {
            v9(a2, 1);
            LogicChest::encode(v8, (__int64)a2);
          }
          else
          {
            v9(a2, 0);
          }
          ++v7;
        }
        while ( v6 != (_DWORD)v7 );
      }
      LogicTimer::encode((unsigned int *)(a1 + 128), (__int64)a2);
      LogicTimer::encode((unsigned int *)(a1 + 196), (__int64)a2);
      v10 = *(void (__fastcall **)(ExpBar *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)(a1 + 152) )
      {
        v10(a2, 1);
        LogicChest::encode(*(_QWORD *)(a1 + 152), (__int64)a2);
      }
      else
      {
        v10(a2, 0);
      }
      v11 = *(void (__fastcall **)(ExpBar *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)(a1 + 160) )
      {
        v11(a2, 1);
        LogicChest::encode(*(_QWORD *)(a1 + 160), (__int64)a2);
      }
      else
      {
        v11(a2, 0);
      }
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 180));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 192));
      LogicTimer::encode((unsigned int *)(a1 + 168), (__int64)a2);
      v12 = *(void (__fastcall **)(ExpBar *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)(a1 + 184) )
      {
        v12(a2, 1);
        LogicChest::encode(*(_QWORD *)(a1 + 184), (__int64)a2);
      }
      else
      {
        v12(a2, 0);
      }
      LogicTimer::encode((unsigned int *)(a1 + 140), (__int64)a2);
      v13 = 0;
      v14 = *(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL);
      do
      {
        v14(a2, *(unsigned int *)(a1 + 68 + v13));
        v14 = *(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL);
        v13 += 4;
      }
      while ( v13 != 32 );
      v14(a2, *(unsigned int *)(a1 + 100));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 228));
      ByteStreamHelper::writeDataReference((__int64)a2, *(AreaEffectObject **)(a1 + 312));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 236));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 240));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 244));
      LogicTimer::encode((unsigned int *)(a1 + 248), (__int64)a2);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 276));
      if ( *(int *)(a1 + 276) >= 1 )
      {
        v15 = 0;
        do
          LogicDataSlot::encode(*(AreaEffectObject ***)(*(_QWORD *)(a1 + 264) + 8 * v15++), a2);
        while ( v15 < *(int *)(a1 + 276) );
      }
      LogicTimer::encode((unsigned int *)(a1 + 292), (__int64)a2);
      LogicTimer::encode((unsigned int *)(a1 + 280), (__int64)a2);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 396));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 400));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 304));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 336));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 340));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 344));
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 328) + 12LL);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, (unsigned int)v16);
      if ( v16 >= 1 )
      {
        v17 = 0;
        do
          (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(
            a2,
            *(unsigned int *)(**(_QWORD **)(a1 + 328) + 4 * v17++));
        while ( v16 != (_DWORD)v17 );
      }
      (*(void (__fastcall **)(ExpBar *, __int64))(*(_QWORD *)a2 + 40LL))(a2, a1 + 352);
      return ByteStreamHelper::encodeSpellList((__int64)a2, a1 + 376, v18);
    }

    __int64 __fastcall LogicClientHome::decode(__int64 a1, char *a2)
    {
      const String *v4; // x1
      __int64 v5; // x21
      int v6; // w24
      LogicSpellDeck *v7; // x23
      __int64 v8; // x0
      int v9; // w21
      int i; // w24
      LogicChest *v11; // x23
      LogicChest **v12; // x1
      int v13; // w0
      LogicChest *v14; // x21
      void *v15; // x0
      int v16; // w0
      LogicChest *v17; // x21
      void *v18; // x0
      int v19; // w0
      LogicChest *v20; // x21
      void *v21; // x0
      int v22; // w0
      __int64 j; // x21
      ChallengePopup *v24; // x1
      int v25; // w21
      int k; // w24
      LogicDataSlot *v27; // x23
      int v28; // w21
      __int64 v29; // x22
      const char *v30; // x2
      __int64 v32[3]; // [xsp+8h] [xbp-88h] BYREF
      int v33; // [xsp+24h] [xbp-6Ch] BYREF
      LogicDataSlot *v34; // [xsp+28h] [xbp-68h] BYREF
      __int64 v35; // [xsp+30h] [xbp-60h] BYREF
      LogicChest *v36; // [xsp+38h] [xbp-58h] BYREF
      LogicSpellDeck *v37; // [xsp+40h] [xbp-50h] BYREF
      char v38[24]; // [xsp+48h] [xbp-48h] BYREF
    
      if ( *(_QWORD *)(a1 + 16) )
      {
        String::format((String *)"LogicClientHome.decode trying to decode to an object that already has data", a2);
        Debugger::error((Debugger *)v38, v4);
      }
      *(_QWORD *)(a1 + 16) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 168LL))(a2);
      *(_DWORD *)(a1 + 232) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 392) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      LogicTimer::decode((LogicChestOrderData *)(a1 + 208), (ChallengePopup *)a2);
      *(_DWORD *)(a1 + 220) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 36) = 0;
      LogicArrayList<LogicSpellDeck *>::ensureCapacity(a1 + 24, v5);
      if ( (int)v5 >= 1 )
      {
        v6 = 0;
        do
        {
          v7 = (LogicSpellDeck *)operator new(72);
          LogicSpellDeck::LogicSpellDeck(v7);
          v37 = v7;
          LogicSpellDeck::decode(v7, (ChallengePopup *)a2);
          LogicArrayList<LogicSpellDeck *>::add(a1 + 24, &v37);
          ++v6;
        }
        while ( v6 < (int)v5 );
      }
      LogicSpellCollection::decode(a1 + 40, a2);
      *(_DWORD *)(a1 + 64) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      v9 = v8;
      *(_DWORD *)(a1 + 116) = 0;
      LogicArrayList<LogicChest *>::ensureCapacity(a1 + 104, v8);
      if ( v9 >= 1 )
      {
        for ( i = 0; i < v9; ++i )
        {
          if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a2 + 136LL))(a2) )
          {
            v11 = (LogicChest *)operator new(48);
            LogicChest::LogicChest(v11);
            v36 = v11;
            LogicChest::decode(v11, (ChallengePopup *)a2);
            v12 = &v36;
          }
          else
          {
            v35 = 0;
            v12 = (LogicChest **)&v35;
          }
          LogicArrayList<LogicChest *>::add(a1 + 104, v12);
        }
      }
      LogicTimer::decode((LogicChestOrderData *)(a1 + 128), (ChallengePopup *)a2);
      LogicTimer::decode((LogicChestOrderData *)(a1 + 196), (ChallengePopup *)a2);
      v13 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 136LL))(a2);
      v14 = *(LogicChest **)(a1 + 152);
      if ( v13 )
      {
        if ( !v14 )
        {
          v14 = (LogicChest *)operator new(48);
          LogicChest::LogicChest(v14);
          *(_QWORD *)(a1 + 152) = v14;
        }
        LogicChest::decode(v14, (ChallengePopup *)a2);
      }
      else if ( v14 )
      {
        LogicChest::destruct(*(LogicSpawnPointData **)(a1 + 152));
        v15 = *(void **)(a1 + 152);
        if ( v15 )
          operator delete(v15);
        *(_QWORD *)(a1 + 152) = 0;
      }
      v16 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 136LL))(a2);
      v17 = *(LogicChest **)(a1 + 160);
      if ( v16 )
      {
        if ( !v17 )
        {
          v17 = (LogicChest *)operator new(48);
          LogicChest::LogicChest(v17);
          *(_QWORD *)(a1 + 160) = v17;
        }
        LogicChest::decode(v17, (ChallengePopup *)a2);
      }
      else if ( v17 )
      {
        LogicChest::destruct(*(LogicSpawnPointData **)(a1 + 160));
        v18 = *(void **)(a1 + 160);
        if ( v18 )
          operator delete(v18);
        *(_QWORD *)(a1 + 160) = 0;
      }
      *(_DWORD *)(a1 + 180) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_BYTE *)(a1 + 192) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 136LL))(a2);
      LogicTimer::decode((LogicChestOrderData *)(a1 + 168), (ChallengePopup *)a2);
      v19 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 136LL))(a2);
      v20 = *(LogicChest **)(a1 + 184);
      if ( v19 )
      {
        if ( !v20 )
        {
          v20 = (LogicChest *)operator new(48);
          LogicChest::LogicChest(v20);
          *(_QWORD *)(a1 + 184) = v20;
        }
        LogicChest::decode(v20, (ChallengePopup *)a2);
      }
      else if ( v20 )
      {
        LogicChest::destruct(*(LogicSpawnPointData **)(a1 + 184));
        v21 = *(void **)(a1 + 184);
        if ( v21 )
          operator delete(v21);
        *(_QWORD *)(a1 + 184) = 0;
      }
      LogicTimer::decode((LogicChestOrderData *)(a1 + 140), (ChallengePopup *)a2);
      v22 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      for ( j = 68; j != 100; j += 4 )
      {
        *(_DWORD *)(a1 + j) = v22;
        v22 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      }
      *(_DWORD *)(a1 + 100) = v22;
      *(_DWORD *)(a1 + 228) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_QWORD *)(a1 + 312) = ByteStreamHelper::readDataReference((#1317 *)a2, v24);
      *(_DWORD *)(a1 + 236) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 240) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 244) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      LogicTimer::decode((LogicChestOrderData *)(a1 + 248), (ChallengePopup *)a2);
      LogicClientHome::clearShopSpells((CoOpenStreamEntry *)a1);
      v25 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( v25 >= 1 )
      {
        for ( k = 0; k < v25; ++k )
        {
          v27 = (LogicDataSlot *)operator new(16);
          LogicDataSlot::LogicDataSlot(v27);
          v34 = v27;
          LogicDataSlot::decode(v27, (ChallengePopup *)a2);
          LogicArrayList<LogicDataSlot *>::add(a1 + 264, (__int64 *)&v34);
        }
      }
      LogicTimer::decode((LogicChestOrderData *)(a1 + 292), (ChallengePopup *)a2);
      LogicTimer::decode((LogicChestOrderData *)(a1 + 280), (ChallengePopup *)a2);
      *(_DWORD *)(a1 + 396) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 400) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 304) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 336) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 340) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 344) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(*(_QWORD *)(a1 + 328) + 12LL) = 0;
      v28 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( v28 >= 1 )
      {
        do
        {
          v29 = *(_QWORD *)(a1 + 328);
          v33 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
          LogicArrayList<int>::add(v29, &v33);
          --v28;
        }
        while ( v28 );
      }
      (*(void (__fastcall **)(__int64 *__return_ptr, char *, __int64))(*(_QWORD *)a2 + 112LL))(v32, a2, 80);
      String::operator=((String *)(a1 + 352));
      String::~String();
      return ByteStreamHelper::decodeSpellList((__int64)a2, a1 + 376, v30);
    }

    __int64 __fastcall LogicClientHome::getSelectedDeck(CoOpenStreamEntry *this)
    {
      return *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((int *)this + 16));
    }

    __int64 __fastcall LogicClientHome::getSpellCollection(CoOpenStreamEntry *this)
    {
      return (__int64)this + 40;
    }

    __int64 __fastcall LogicClientHome::getLogicDeck(CoOpenStreamEntry *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * a2);
    }

    __int64 __fastcall LogicClientHome::getAvailableFreeChectCount(CoOpenStreamEntry *this)
    {
      if ( !*((_QWORD *)this + 19) )
        return 0;
      if ( LogicTimer::isFinished((CoOpenStreamEntry *)((char *)this + 128)) )
        return 2;
      return 1;
    }

    bool __fastcall LogicClientHome::isFreeChestAvailable(CoOpenStreamEntry *this)
    {
      return *((_QWORD *)this + 19) != 0;
    }

    __int64 __fastcall LogicClientHome::getSelectedDeckIdx(CoOpenStreamEntry *this)
    {
      return *((unsigned int *)this + 16);
    }

    __int64 __fastcall LogicClientHome::getChestWithID(CoOpenStreamEntry *this, int a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x10
      __int64 v5; // x11
    
      v2 = *((int *)this + 29);
      if ( (int)v2 < 1 )
        return 0;
      v3 = 0;
      v4 = *((_QWORD *)this + 13);
      while ( 1 )
      {
        v5 = *(_QWORD *)(v4 + 8 * v3);
        if ( v5 )
        {
          if ( *(_DWORD *)(v5 + 16) == a2 )
            break;
        }
        if ( ++v3 >= v2 )
          return 0;
      }
      if ( (_DWORD)v3 == -1 )
        return 0;
      else
        return *(_QWORD *)(v4 + 8 * v3);
    }

    __int64 __fastcall LogicClientHome::getChestCnt(CoOpenStreamEntry *this)
    {
      __int64 v1; // x8
      __int64 v2; // x10
      unsigned int v3; // w9
    
      v1 = *((int *)this + 29);
      if ( (int)v1 < 1 )
      {
        v3 = 0;
      }
      else
      {
        v2 = 0;
        v3 = 0;
        do
        {
          if ( *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v2) )
            ++v3;
          ++v2;
        }
        while ( v2 < v1 );
      }
      if ( *((_QWORD *)this + 15) )
        return v3 + 1;
      else
        return v3;
    }

    __int64 __fastcall LogicClientHome::addChestToCoOpen(CoOpenStreamEntry *this, #1236 *a2, int a3)
    {
      __int64 ChestWithID; // x0
      LogicSpawnPointData *v7; // x22
      __int64 v9; // x23
      void (__fastcall *v10)(__int64, #1236 *, __int64); // x24
      __int64 TreasureChestData; // x0
    
      ChestWithID = LogicClientHome::getChestWithID(this, a3);
      v7 = (LogicSpawnPointData *)ChestWithID;
      if ( !ChestWithID || !(unsigned int)LogicChest::isUnlocked(ChestWithID) || *((_BYTE *)v7 + 40) )
        return (*(__int64 (__fastcall **)(_QWORD, #1236 *))(**(_QWORD **)this + 64LL))(*(_QWORD *)this, a2);
      v9 = *(_QWORD *)this;
      v10 = *(void (__fastcall **)(__int64, #1236 *, __int64))(**(_QWORD **)this + 56LL);
      TreasureChestData = LogicChest::getTreasureChestData(v7);
      v10(v9, a2, TreasureChestData);
      return LogicClientHome::destroyChestWithId(this, a3);
    }

    LogicDataTables *__fastcall LogicClientHome::destroyChestWithId(CoOpenStreamEntry *this, const char *a2)
    {
      __int64 v3; // x10
      __int64 v4; // x9
      __int64 v5; // x8
      __int64 v6; // x11
      __int64 v7; // x21
      void *v8; // x20
    
      v3 = *((int *)this + 29);
      if ( (int)v3 < 1 )
        goto LABEL_8;
      v4 = 0;
      v5 = *((_QWORD *)this + 13);
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 8 * v4);
        if ( v6 )
        {
          if ( *(_DWORD *)(v6 + 16) == (_DWORD)a2 )
            break;
        }
        if ( ++v4 >= v3 )
          goto LABEL_8;
      }
      if ( (_DWORD)v4 == -1 )
    LABEL_8:
        Debugger::error((__siginfo *)"LogicClientHome::destroyChestWithId: can't find chest", a2);
      v7 = (int)v4;
      v8 = *(void **)(v5 + 8LL * (int)v4);
      if ( v8 )
      {
        LogicChest::destruct(*(LogicSpawnPointData **)(v5 + 8LL * (int)v4));
        operator delete(v8);
      }
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v7) = 0;
      return LogicClientHome::updateChestCountToAvatar((__int64)this);
    }

    __int64 __fastcall LogicClientHome::autoOpenChestsIfNeeded(CoOpenStreamEntry *this, __int64 a2, const char *a3)
    {
      __int64 result; // x0
      __int64 v5; // x21
      __int64 v6; // x8
      __int64 v7; // x20
      const char *CurrentTimestamp; // x0
    
      Debugger::doAssert(
        (Debugger *)(*((_QWORD *)this + 1) != 0),
        (bool)"LogicClientHome, autoOpenChestsIfNeeded: game mode not set!",
        a3);
      result = LogicDataTables::getGlobals();
      if ( *(_BYTE *)(result + 396) && *((int *)this + 29) >= 1 )
      {
        v5 = 0;
        do
        {
          result = LogicClientHome::getFreeWorkers(this);
          if ( (int)result < 1 )
            break;
          v6 = *((_QWORD *)this + 13);
          v7 = *(_QWORD *)(v6 + 8 * v5);
          if ( v7 )
          {
            result = LogicChest::canStartUnlocking(*(LogicSpawnPointData **)(v6 + 8 * v5));
            if ( (_DWORD)result )
            {
              CurrentTimestamp = (const char *)LogicGameMode::getCurrentTimestamp(*((_QWORD *)this + 1));
              result = (__int64)LogicChest::startUnlocking(v7, CurrentTimestamp);
            }
          }
          ++v5;
        }
        while ( v5 < *((int *)this + 29) );
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::getFreeWorkers(CoOpenStreamEntry *this)
    {
      int v2; // w20
      int AssignedWorkers; // w0
      const char *v4; // x1
    
      v2 = *(_DWORD *)(LogicDataTables::getGlobals() + 388);
      AssignedWorkers = LogicClientHome::getAssignedWorkers(this);
      if ( v2 - AssignedWorkers < 0 )
        Debugger::error((__siginfo *)"free workers negative?", v4);
      return (unsigned int)(v2 - AssignedWorkers);
    }

    __int64 __fastcall LogicClientHome::setClaimingReward(__int64 this, char a2)
    {
      *(_BYTE *)(this + 224) = a2;
      return this;
    }

    __int64 __fastcall LogicClientHome::isClaimingReward(CoOpenStreamEntry *this)
    {
      return *((unsigned __int8 *)this + 224);
    }

    __int64 __fastcall LogicClientHome::tick(CoOpenStreamEntry *this, __int64 a2, const char *a3)
    {
      int v4; // w8
      __int64 i; // x20
      LogicChestOrderData **v6; // x0
      _BOOL8 v7; // x0
      const char *v8; // x2
      tween::Bounce *PlayerAvatar; // x20
      __int64 v10; // x0
      int v11; // w21
      __int64 Arena; // x0
      const LogicRefreshAchievementsCommand *CrownChest; // x21
      LogicSpawnPointData *v14; // x0
      void *v15; // x0
      LogicChest *v16; // x22
      __int64 v17; // x0
      __int64 v18; // x9
      unsigned int v19; // w10
      _QWORD *v20; // x11
      __int64 v22; // x2
    
      v4 = *((_DWORD *)this + 29);
      if ( v4 >= 1 )
      {
        for ( i = 0; i < v4; ++i )
        {
          v6 = *(LogicChestOrderData ***)(*((_QWORD *)this + 13) + 8 * i);
          if ( v6 )
          {
            LogicChest::tick(v6);
            v4 = *((_DWORD *)this + 29);
          }
        }
      }
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 1) != 0), (bool)"", a3);
      v7 = LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 1)) != 0;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*((_QWORD *)this + 1));
      if ( !*((_DWORD *)this + 98) )
      {
        if ( *((_QWORD *)this + 19) )
        {
    LABEL_12:
          LogicClientHome::startFreeChestTimer(this, 0);
          goto LABEL_13;
        }
    LABEL_11:
        LogicClientHome::createFreeChest(this);
        goto LABEL_12;
      }
      LogicTimer::tick((CoOpenStreamEntry *)((char *)this + 128));
      if ( LogicTimer::isFinished((CoOpenStreamEntry *)((char *)this + 128)) && !*((_QWORD *)this + 19) )
        goto LABEL_11;
    LABEL_13:
      if ( LogicTimer::isFinished((CoOpenStreamEntry *)((char *)this + 168)) )
      {
        if ( *((_BYTE *)this + 192) )
          LogicClientHome::startStarChestTimer(this, 0);
        *((_BYTE *)this + 192) = 0;
      }
      else
      {
        LogicTimer::tick((CoOpenStreamEntry *)((char *)this + 168));
      }
      v10 = *((_QWORD *)this + 20);
      if ( v10 && !*(_BYTE *)(v10 + 40) )
        LogicChest::setClaimed(v10, *((UnlockAccountPopup **)this + 1), 4);
      LogicTimer::tick((CoOpenStreamEntry *)((char *)this + 248));
      LogicTimer::tick((CoOpenStreamEntry *)((char *)this + 280));
      LogicTimer::tick((CoOpenStreamEntry *)((char *)this + 292));
      LogicTimer::tick((CoOpenStreamEntry *)((char *)this + 140));
      LogicTimer::tick((CoOpenStreamEntry *)((char *)this + 196));
      LogicTimer::tick((CoOpenStreamEntry *)((char *)this + 208));
      if ( LogicTimer::isFinished((CoOpenStreamEntry *)((char *)this + 208)) )
        LogicClientHome::startDonationCapacityLimitTimer(this, 0);
      v11 = *((_DWORD *)this + 45);
      if ( v11 >= *(_DWORD *)(LogicDataTables::getGlobals() + 132) )
      {
        Arena = LogicClientAvatar::getArena(PlayerAvatar);
        CrownChest = (const LogicRefreshAchievementsCommand *)LogicArenaData::getCrownChest(Arena);
        v14 = (LogicSpawnPointData *)*((_QWORD *)this + 23);
        if ( v14 )
        {
          LogicChest::destruct(v14);
          v15 = (void *)*((_QWORD *)this + 23);
          if ( v15 )
            operator delete(v15);
          *((_QWORD *)this + 23) = 0;
        }
        v16 = (LogicChest *)operator new(48);
        LogicChest::LogicChest(v16, CrownChest);
        *((_QWORD *)this + 23) = v16;
        *((_DWORD *)this + 45) = 0;
        if ( LogicClientAvatar::getChangeListener(PlayerAvatar) )
        {
          v17 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          v18 = *((int *)this + 29);
          if ( (int)v18 < 1 )
          {
            v19 = 0;
          }
          else
          {
            v19 = 0;
            v20 = (_QWORD *)*((_QWORD *)this + 13);
            do
            {
              if ( *v20++ )
                ++v19;
              --v18;
            }
            while ( v18 );
          }
          if ( *((_QWORD *)this + 15) )
            v22 = v19 + 1;
          else
            v22 = v19;
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 200LL))(v17, *((_QWORD *)this + 23), v22);
        }
      }
      LogicClientHome::updateStarsFromAvatar(this);
      return LogicClientHome::updateArenaFromAvatar(this);
    }

    __int64 __fastcall LogicClientHome::createFreeChest(__int64 a1, const char *a2)
    {
      tween::Bounce *PlayerAvatar; // x20
      __int64 Arena; // x0
      const LogicRefreshAchievementsCommand *FreeChest; // x22
      LogicChest *v6; // x21
      __int64 result; // x0
      __int64 v8; // x0
      __int64 v9; // x8
      unsigned int v10; // w9
      _QWORD *v11; // x10
      __int64 v13; // x2
    
      if ( *(_QWORD *)(a1 + 152) )
        Debugger::warning((__siginfo *)"m_pFreeChest should be null", a2);
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(a1 + 8));
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      FreeChest = (const LogicRefreshAchievementsCommand *)LogicArenaData::getFreeChest(Arena);
      v6 = (LogicChest *)operator new(48);
      LogicChest::LogicChest(v6, FreeChest);
      *(_QWORD *)(a1 + 152) = v6;
      result = LogicClientAvatar::getChangeListener(PlayerAvatar);
      if ( result )
      {
        v8 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        v9 = *(int *)(a1 + 116);
        if ( (int)v9 < 1 )
        {
          v10 = 0;
        }
        else
        {
          v10 = 0;
          v11 = *(_QWORD **)(a1 + 104);
          do
          {
            if ( *v11++ )
              ++v10;
            --v9;
          }
          while ( v9 );
        }
        if ( *(_QWORD *)(a1 + 120) )
          v13 = v10 + 1;
        else
          v13 = v10;
        return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 192LL))(v8, *(_QWORD *)(a1 + 152), v13);
      }
      return result;
    }

    _DWORD *__fastcall LogicClientHome::startFreeChestTimer(CoOpenStreamEntry *this, int a2)
    {
      int v3; // w20
      _DWORD *result; // x0
      int CurrentTimestamp; // w2
    
      v3 = 3600 * *(_DWORD *)(LogicDataTables::getGlobals() + 376) - a2;
      result = (_DWORD *)LogicTimer::destruct((__int64)this + 128);
      if ( v3 >= 1 )
      {
        CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*((_QWORD *)this + 1));
        return LogicTimer::startTimer((_DWORD *)this + 32, v3, CurrentTimestamp);
      }
      return result;
    }

    _DWORD *__fastcall LogicClientHome::startStarChestTimer(__int64 a1, int a2)
    {
      _DWORD *v4; // x19
      const char *v5; // x1
      _DWORD *result; // x0
      int v7; // w21
      int CurrentTimestamp; // w2
    
      v4 = (_DWORD *)(a1 + 168);
      if ( !LogicTimer::isFinished((LogicChestOrderData *)(a1 + 168)) )
        Debugger::warning((__siginfo *)"LogicClientHome::starMultiWinChestTimer(): Timer still running", v5);
      LogicTimer::destruct((__int64)v4);
      result = (_DWORD *)LogicDataTables::getGlobals();
      v7 = 3600 * result[34] - a2;
      if ( v7 >= 1 )
      {
        CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*(_QWORD *)(a1 + 8));
        return LogicTimer::startTimer(v4, v7, CurrentTimestamp);
      }
      return result;
    }

    _DWORD *__fastcall LogicClientHome::startDonationCapacityLimitTimer(CoOpenStreamEntry *this, int a2)
    {
      int v3; // w19
      int CurrentTimestamp; // w0
      _DWORD *result; // x0
    
      v3 = 3600 * *(_DWORD *)(LogicDataTables::getGlobals() + 100) - a2;
      LogicTimer::destruct((__int64)this + 208);
      CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*((_QWORD *)this + 1));
      result = LogicTimer::startTimer((_DWORD *)this + 52, v3, CurrentTimestamp);
      *((_DWORD *)this + 55) = 0;
      return result;
    }

    __int64 __fastcall LogicClientHome::getCrownChestMaxCrownCount(CoOpenStreamEntry *this)
    {
      return *(unsigned int *)(LogicDataTables::getGlobals() + 132);
    }

    LogicDataTables *__fastcall LogicClientHome::updateStarsFromAvatar(LogicClientHome *a1)
    {
      LogicDataTables *result; // x0
      tween::Bounce *v3; // x20
      int v4; // w21
    
      result = (LogicDataTables *)*((_QWORD *)a1 + 1);
      if ( result )
      {
        result = (LogicDataTables *)LogicGameMode::getPlayerAvatar((__int64)result);
        v3 = result;
        if ( result )
        {
          result = (LogicDataTables *)LogicClientAvatar::getStarCount(result);
          v4 = (int)result;
          if ( (int)result >= 1 )
          {
            LogicClientAvatar::setStarCount(v3, 0);
            return (LogicDataTables *)LogicClientHome::increaseStarsToStarChest(a1, v4);
          }
        }
      }
      return result;
    }

    tween::Bounce *__fastcall LogicClientHome::updateArenaFromAvatar(CoOpenStreamEntry *this)
    {
      tween::Bounce *result; // x0
      tween::Bounce *v3; // x20
      __int64 GameListener; // x0
    
      result = (tween::Bounce *)*((_QWORD *)this + 1);
      if ( result )
      {
        result = (tween::Bounce *)LogicGameMode::getPlayerAvatar((__int64)result);
        if ( result )
        {
          result = (tween::Bounce *)LogicClientAvatar::getArena(result);
          v3 = result;
          if ( result != *((tween::Bounce **)this + 39) )
          {
            GameListener = LogicGameMode::getGameListener(*((UnlockAccountPopup **)this + 1));
            result = (tween::Bounce *)(*(__int64 (__fastcall **)(__int64, _QWORD, tween::Bounce *))(*(_QWORD *)GameListener
                                                                                                  + 296LL))(
                                        GameListener,
                                        *((_QWORD *)this + 39),
                                        v3);
            *((_QWORD *)this + 39) = v3;
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::fastForward(__int64 a1, NotificationBadge *a2, int a3)
    {
      int v6; // w22
      __int64 v7; // x23
      __int64 v8; // x0
      __int64 v9; // x1
      int v10; // w2
      const char *v11; // x1
      int v12; // w2
      int v13; // w1
      CoOpenStreamEntry *v14; // x0
      int RemainingSeconds; // w23
      __int64 v16; // x1
      int v17; // w2
      int v18; // w0
      __int64 v19; // x1
      int v20; // w2
      __int64 v21; // x1
      int v22; // w2
      __int64 v23; // x1
      const char *v24; // x2
      int v25; // w21
    
      v6 = *(_DWORD *)(a1 + 116);
      if ( v6 >= 1 )
      {
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v7);
          if ( v8 )
            LogicChest::fastForward(v8, a2, a3);
          ++v7;
        }
        while ( v6 != (_DWORD)v7 );
      }
      if ( !*(_DWORD *)(a1 + 392) )
      {
        if ( !*(_QWORD *)(a1 + 152) )
          LogicClientHome::createFreeChest(a1, (const char *)a2);
        v13 = 0;
        v14 = (CoOpenStreamEntry *)a1;
        goto LABEL_14;
      }
      if ( (int)LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 128), (__int64)a2, a3) > (int)a2 )
      {
        LogicTimer::fastForward((LogicChestOrderData *)(a1 + 128), a2, a3);
        goto LABEL_15;
      }
      RemainingSeconds = LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 128), v9, v10);
      LogicTimer::destruct(a1 + 128);
      if ( !*(_QWORD *)(a1 + 152) )
      {
        LogicClientHome::createFreeChest(a1, v11);
        v14 = (CoOpenStreamEntry *)a1;
        v13 = (_DWORD)a2 - RemainingSeconds;
    LABEL_14:
        LogicClientHome::startFreeChestTimer(v14, v13);
      }
    LABEL_15:
      if ( (int)LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 208), (__int64)v11, v12) <= (int)a2 )
      {
        v18 = LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 208), v16, v17);
        LogicClientHome::startDonationCapacityLimitTimer((CoOpenStreamEntry *)a1, (_DWORD)a2 - v18);
      }
      else
      {
        LogicTimer::fastForward((LogicChestOrderData *)(a1 + 208), a2, a3);
      }
      LogicTimer::fastForward((LogicChestOrderData *)(a1 + 196), a2, a3);
      LogicTimer::fastForward((LogicChestOrderData *)(a1 + 140), a2, a3);
      LogicTimer::fastForward((LogicChestOrderData *)(a1 + 248), a2, a3);
      LogicTimer::fastForward((LogicChestOrderData *)(a1 + 280), a2, a3);
      LogicTimer::fastForward((LogicChestOrderData *)(a1 + 292), a2, a3);
      if ( (int)LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 168), v19, v20) <= (int)a2 )
      {
        v25 = LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 168), v21, v22);
        LogicTimer::destruct(a1 + 168);
        if ( *(_BYTE *)(a1 + 192) )
        {
          LogicClientHome::startStarChestTimer(a1, (_DWORD)a2 - v25);
          *(_BYTE *)(a1 + 192) = 0;
        }
      }
      else
      {
        LogicTimer::fastForward((LogicChestOrderData *)(a1 + 168), a2, a3);
      }
      return LogicClientHome::autoOpenChestsIfNeeded((CoOpenStreamEntry *)a1, v23, v24);
    }

    __int64 __fastcall LogicClientHome::getChestIndex(CoOpenStreamEntry *this, int a2)
    {
      __int64 v3; // x9
      __int64 result; // x0
      __int64 v5; // x8
      __int64 v6; // x10
    
      v3 = *((int *)this + 29);
      if ( (int)v3 < 1 )
        return 0xFFFFFFFFLL;
      result = 0;
      v5 = *((_QWORD *)this + 13);
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 8 * result);
        if ( v6 )
        {
          if ( *(_DWORD *)(v6 + 16) == a2 )
            break;
        }
        if ( ++result >= v3 )
          return 0xFFFFFFFFLL;
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::getChest(CoOpenStreamEntry *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * a2);
    }

    LogicDataTables *__fastcall LogicClientHome::destroyChests(__int64 a1)
    {
      int v2; // w8
      __int64 i; // x21
      __int64 v4; // x9
      void *v5; // x20
    
      v2 = *(_DWORD *)(a1 + 116);
      if ( v2 >= 1 )
      {
        for ( i = 0; i < v2; ++i )
        {
          v4 = *(_QWORD *)(a1 + 104);
          v5 = *(void **)(v4 + 8 * i);
          if ( v5 )
          {
            LogicChest::destruct(*(LogicSpawnPointData **)(v4 + 8 * i));
            operator delete(v5);
            *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * i) = 0;
            v2 = *(_DWORD *)(a1 + 116);
          }
        }
      }
      return LogicClientHome::updateChestCountToAvatar(a1);
    }

    __int64 __fastcall LogicClientHome::getChecksum(__int64 a1)
    {
      return (unsigned int)(*(_DWORD *)(a1 + 232) + (*(_DWORD *)(a1 + 52) << 16));
    }

    __int64 __fastcall LogicClientHome::getAssignedWorkers(__int64 a1)
    {
      int v2; // w21
      __int64 v3; // x22
      __int64 v4; // x20
      LogicSpawnPointData *v5; // x0
    
      v2 = *(_DWORD *)(a1 + 116);
      if ( v2 < 1 )
        return 0;
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = *(LogicSpawnPointData **)(*(_QWORD *)(a1 + 104) + 8 * v3);
        if ( v5 )
          v4 = (unsigned int)(LogicChest::isUnlocking(v5) + (_DWORD)v4);
        ++v3;
      }
      while ( v2 != (_DWORD)v3 );
      return v4;
    }

    __int64 __fastcall LogicClientHome::getDeckCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 36);
    }

    __int64 __fastcall LogicClientHome::getTotalSpellCount(__int64 a1)
    {
      __int64 v2; // x19
      __int64 v3; // x21
    
      v2 = *(unsigned int *)(a1 + 52);
      if ( *(int *)(a1 + 36) >= 1 )
      {
        v3 = 0;
        do
          v2 = (unsigned int)LogicSpellDeck::getSpellCnt(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v3++)) + (unsigned int)v2;
        while ( v3 < *(int *)(a1 + 36) );
      }
      return v2;
    }

    __int64 __fastcall LogicClientHome::getSpellAt(__int64 a1, const char *a2)
    {
      const char *v2; // x20
      __int64 v4; // x21
      int v5; // w0
    
      v2 = a2;
      if ( *(int *)(a1 + 36) < 1 )
      {
    LABEL_5:
        if ( (int)a2 >= *(_DWORD *)(a1 + 52) )
          Debugger::error((__siginfo *)"LogicClientHome::getSpellAt index out of bounds", a2);
        return LogicSpellCollection::getSpell((GameInputField *)(a1 + 40), (int)a2);
      }
      else
      {
        v4 = 0;
        while ( 1 )
        {
          v5 = LogicSpellDeck::size(*(AcceptChallengeMessage **)(*(_QWORD *)(a1 + 24) + 8 * v4));
          a2 = (const char *)(unsigned int)((_DWORD)v2 - v5);
          if ( (int)v2 < v5 )
            return LogicSpellDeck::getSpell(*(AcceptChallengeMessage **)(*(_QWORD *)(a1 + 24) + 8 * v4), v2);
          ++v4;
          v2 = (const char *)(unsigned int)((_DWORD)v2 - v5);
          if ( v4 >= *(int *)(a1 + 36) )
            goto LABEL_5;
        }
      }
    }

    __int64 __fastcall LogicClientHome::setLogicGameMode(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 8) = a2;
      return result;
    }

    LogicSpeedUpExploringCommand *__fastcall LogicClientHome::createFreeWorkerTaskCommand(__int64 a1)
    {
      int ShortestWorkerTimeRemaining; // w0
      int v2; // w20
      LogicSpeedUpExploringCommand *v4; // x19
      _BYTE v6[4]; // [xsp+8h] [xbp-18h] BYREF
      int v7; // [xsp+Ch] [xbp-14h] BYREF
    
      ShortestWorkerTimeRemaining = LogicClientHome::getShortestWorkerTimeRemaining(a1, &v7, v6);
      v2 = v7;
      if ( ShortestWorkerTimeRemaining == 0x7FFFFFFF || v7 == -1 )
        return 0;
      v4 = (LogicSpeedUpExploringCommand *)operator new(40);
      LogicSpeedUpExploringCommand::LogicSpeedUpExploringCommand(v4);
      LogicSpeedUpExploringCommand::setChestId((__int64)v4, v2);
      return v4;
    }

    __int64 __fastcall LogicClientHome::getShortestWorkerTimeRemaining(__int64 a1, _DWORD *a2, _DWORD *a3)
    {
      int v6; // w25
      __int64 v7; // x26
      __int64 v8; // x22
      __int64 v9; // x8
      __int64 v10; // x23
      __int64 v11; // x1
      int v12; // w2
      __int64 UnlockingSecondsLeft; // x0
    
      *a2 = -1;
      *a3 = -1;
      v6 = *(_DWORD *)(a1 + 116);
      if ( v6 < 1 )
        return 0x7FFFFFFF;
      v7 = 0;
      v8 = 0x7FFFFFFF;
      do
      {
        v9 = *(_QWORD *)(a1 + 104);
        v10 = *(_QWORD *)(v9 + 8 * v7);
        if ( v10 )
        {
          if ( LogicChest::isUnlocking(*(LogicSpawnPointData **)(v9 + 8 * v7)) && !*(_BYTE *)(v10 + 40) )
          {
            UnlockingSecondsLeft = LogicChest::getUnlockingSecondsLeft(v10, v11, v12);
            if ( (int)UnlockingSecondsLeft < (int)v8 )
            {
              *a2 = *(_DWORD *)(v10 + 16);
              *a3 = -1;
              v8 = UnlockingSecondsLeft;
            }
          }
        }
        ++v7;
      }
      while ( v6 != (_DWORD)v7 );
      return v8;
    }

    __int64 __fastcall LogicClientHome::addEmptyDeck(__int64 a1)
    {
      LogicSpellDeck *v2; // x20
      LogicSpellDeck *v4; // [xsp+8h] [xbp-18h] BYREF
    
      v2 = (LogicSpellDeck *)operator new(72);
      LogicSpellDeck::LogicSpellDeck(v2);
      v4 = v2;
      return LogicArrayList<LogicSpellDeck *>::add(a1 + 24, &v4);
    }

    bool __fastcall LogicClientHome::hasFinishedTutorial(__int64 a1, AreaEffectObject *a2)
    {
      int InstanceID; // w0
    
      InstanceID = LogicData::getInstanceID(a2, (int)a2);
      return ((1 << (InstanceID & 0x1F)) & *(_DWORD *)(a1 + 4LL * (InstanceID >> 5) + 68)) != 0;
    }

    __int64 __fastcall LogicClientHome::setTutorialFinished(__int64 a1, AreaEffectObject *a2)
    {
      __int64 result; // x0
    
      result = LogicData::getInstanceID(a2, (int)a2);
      *(_DWORD *)(a1 + 4LL * ((int)result >> 5) + 68) |= 1 << (result & 0x1F);
      return result;
    }

    __int64 __fastcall LogicClientHome::debugFinishTutorial(__int64 *a1)
    {
      tween::Bounce *PlayerAvatar; // x19
      int v2; // w20
      __int64 result; // x0
      __int64 v4; // x20
      int NpcWinCount; // w0
      __int64 v6; // x0
    
      *(__int64 *)((char *)a1 + 92) = -1;
      *(__int64 *)((char *)a1 + 84) = -1;
      *(__int64 *)((char *)a1 + 76) = -1;
      *(__int64 *)((char *)a1 + 68) = -1;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a1[1]);
      v2 = *(_DWORD *)(LogicDataTables::getGlobals() + 404);
      result = LogicClientAvatar::getNpcWinCount((__int64)PlayerAvatar);
      v4 = (unsigned int)(v2 - result);
      if ( (int)v4 >= 1 )
      {
        NpcWinCount = LogicClientAvatar::getNpcWinCount((__int64)PlayerAvatar);
        LogicClientAvatar::setNpcWinCount((__int64)PlayerAvatar, NpcWinCount + v4);
        LogicClientAvatar::refreshArena((__int64)PlayerAvatar);
        v6 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 104LL))(
                 v6,
                 0,
                 v4,
                 0,
                 0);
      }
      return result;
    }

    bool __fastcall LogicClientHome::hasSpell(__int64 a1, __int64 a2)
    {
      return LogicClientHome::getSpellByData(a1, a2) != 0;
    }

    TextField *__fastcall LogicClientHome::getSpellByData(__int64 a1, const InitState *a2)
    {
      TextField *result; // x0
    
      result = LogicSpellCollection::getSpellByData((GameInputField *)(a1 + 40), a2);
      if ( !result )
        return (TextField *)LogicSpellDeck::getSpellByData(
                              *(AcceptChallengeMessage **)(*(_QWORD *)(a1 + 24) + 8LL * *(int *)(a1 + 64)),
                              a2);
      return result;
    }

    __int64 __fastcall LogicClientHome::getSpellCount(__int64 a1, const InitState *a2)
    {
      __int64 SpellCount; // x21
      int v5; // w22
      __int64 v6; // x23
    
      SpellCount = LogicSpellCollection::getSpellCount((GameInputField *)(a1 + 40), a2);
      v5 = *(_DWORD *)(a1 + 36);
      if ( v5 >= 1 )
      {
        v6 = 0;
        do
          SpellCount = (unsigned int)LogicSpellDeck::getSpellCount(
                                       *(AcceptChallengeMessage **)(*(_QWORD *)(a1 + 24) + 8 * v6++),
                                       a2)
                     + (unsigned int)SpellCount;
        while ( v5 != (_DWORD)v6 );
      }
      return SpellCount;
    }

    void __fastcall LogicClientHome::purchasedChestCollected(__int64 a1)
    {
      LogicSpawnPointData *v2; // x0
      void *v3; // x0
    
      v2 = *(LogicSpawnPointData **)(a1 + 160);
      if ( v2 )
      {
        LogicChest::destruct(v2);
        v3 = *(void **)(a1 + 160);
        if ( v3 )
          operator delete(v3);
        *(_QWORD *)(a1 + 160) = 0;
      }
    }

    void __fastcall LogicClientHome::freeChestCollected(__int64 a1)
    {
      LogicSpawnPointData *v2; // x0
      void *v3; // x0
    
      v2 = *(LogicSpawnPointData **)(a1 + 152);
      if ( v2 )
      {
        LogicChest::destruct(v2);
        v3 = *(void **)(a1 + 152);
        if ( v3 )
          operator delete(v3);
        *(_QWORD *)(a1 + 152) = 0;
      }
      ++*(_DWORD *)(a1 + 392);
    }

    __int64 __fastcall LogicClientHome::increaseStarsToStarChest(__int64 result, int a2)
    {
      __int64 v2; // x19
      int v3; // w21
      LogicMath *v4; // x20
      __int64 Globals; // x0
      int v6; // w2
      __int64 GameListener; // x0
    
      v2 = result;
      if ( !*(_QWORD *)(result + 184) && !*(_BYTE *)(result + 192) )
      {
        v3 = *(_DWORD *)(result + 180);
        v4 = (LogicMath *)(unsigned int)(v3 + a2);
        Globals = LogicDataTables::getGlobals();
        result = LogicMath::min(v4, *(_DWORD *)(Globals + 132), v6);
        *(_DWORD *)(v2 + 180) = result;
        if ( v3 != (_DWORD)result )
        {
          GameListener = LogicGameMode::getGameListener(*(UnlockAccountPopup **)(v2 + 8));
          return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 288LL))(
                   GameListener,
                   (unsigned int)(*(_DWORD *)(v2 + 180) - v3));
        }
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::getShopTimerSecondsLeft(__int64 a1, __int64 a2, int a3)
    {
      return LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 248), a2, a3);
    }

    __int64 __fastcall LogicClientHome::getShopAvailableSpellCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 276);
    }

    __int64 __fastcall LogicClientHome::getShopSpellSlot(__int64 a1, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * a2);
    }

    __int64 __fastcall LogicClientHome::getShopSpellBuyTimes(__int64 a1, __int64 a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x11
    
      v2 = *(int *)(a1 + 276);
      if ( (int)v2 < 1 )
        return 0xFFFFFFFFLL;
      v3 = 0;
      while ( 1 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v3);
        if ( *(_QWORD *)v4 == a2 )
          break;
        if ( ++v3 >= v2 )
          return 0xFFFFFFFFLL;
      }
      return *(unsigned int *)(v4 + 8);
    }

    __int64 __fastcall LogicClientHome::increaseSoldSpells(__int64 this, const InitState *a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x10
      __int64 v5; // x11
    
      v2 = *(int *)(this + 276);
      if ( (int)v2 >= 1 )
      {
        v3 = 0;
        v4 = *(_QWORD *)(this + 264);
        do
        {
          v5 = *(_QWORD *)(v4 + 8 * v3);
          if ( *(const InitState **)v5 == a2 )
            ++*(_DWORD *)(v5 + 8);
          ++v3;
        }
        while ( v3 < v2 );
      }
      return this;
    }

    __int64 __fastcall LogicClientHome::getFreeChest(CoOpenStreamEntry *this)
    {
      return *((_QWORD *)this + 19);
    }

    __int64 __fastcall LogicClientHome::getPurchasedChest(CoOpenStreamEntry *this)
    {
      return *((_QWORD *)this + 20);
    }

    __int64 __fastcall LogicClientHome::getLastShownLevelUp(CoOpenStreamEntry *this)
    {
      return *((unsigned int *)this + 57);
    }

    __int64 __fastcall LogicClientHome::setLastShownLevelUp(__int64 this, int a2)
    {
      *(_DWORD *)(this + 228) = a2;
      return this;
    }

    bool __fastcall LogicClientHome::isCrownChestAvailable(CoOpenStreamEntry *this)
    {
      return *((_QWORD *)this + 23) != 0;
    }

    _DWORD *__fastcall LogicClientHome::crownChestCollected(__int64 a1)
    {
      LogicSpawnPointData *v2; // x0
      void *v3; // x0
      _DWORD *result; // x0
    
      v2 = *(LogicSpawnPointData **)(a1 + 184);
      if ( v2 )
      {
        LogicChest::destruct(v2);
        v3 = *(void **)(a1 + 184);
        if ( v3 )
          operator delete(v3);
        *(_QWORD *)(a1 + 184) = 0;
      }
      result = (_DWORD *)LogicTimer::isFinished((LogicChestOrderData *)(a1 + 168));
      if ( (_DWORD)result )
        return LogicClientHome::startStarChestTimer(a1, 0);
      *(_BYTE *)(a1 + 192) = 1;
      return result;
    }

    __int64 __fastcall LogicClientHome::getCrownChestCooldownSeconds(__int64 a1, __int64 a2, int a3)
    {
      return LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 168), a2, a3);
    }

    bool __fastcall LogicClientHome::isSpellOkForShop(__int64 a1, InitState *a2, __int64 a3)
    {
      int v6; // w22
      tween::Bounce *PlayerAvatar; // x0
      const DonateItem *Arena; // x0
      int v9; // w8
      __int64 v10; // x9
      __int64 i; // x10
    
      v6 = LogicSpellData::isNotInUse(a2) ^ 1;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(a1 + 8));
      Arena = (const DonateItem *)LogicClientAvatar::getArena(PlayerAvatar);
      v9 = LogicSpellData::isUnlockedInArena(a2, Arena) & v6;
      v10 = *(int *)(a1 + 276);
      if ( (int)v10 >= 1 )
      {
        for ( i = 0; i < v10; ++i )
          v9 = (unsigned __int8)v9 & (**(_QWORD **)(*(_QWORD *)(a1 + 264) + 8 * i) != (_QWORD)a2);
      }
      return v9 && LogicSpellData::getRarity(a2) == a3;
    }

    InitState *__fastcall LogicClientHome::getRandomSpell(__int64 a1, LogicRandom *a2, __int64 a3)
    {
      __int64 Table; // x21
      int v7; // w23
      __int64 v8; // x24
      InitState *v9; // x0
      int v10; // w22
      __int64 v11; // x24
      int v12; // w26
      InitState *v13; // x23
      InitState *v14; // x25
      _BOOL4 isSpellOkForShop; // w0
      InitState *v16; // x8
    
      Table = LogicDataTables::getTable(7);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) < 1 )
      {
        v7 = 0;
      }
      else
      {
        v7 = 0;
        v8 = 0;
        do
        {
          v9 = (InitState *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v8);
          v7 += LogicClientHome::isSpellOkForShop(a1, v9, a3);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (int)v8 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      }
      v10 = LogicRandom::rand(a2, v7);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) < 1 )
        return 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = (InitState *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v11);
        isSpellOkForShop = LogicClientHome::isSpellOkForShop(a1, v14, a3);
        if ( v10 == v12 )
          v16 = v14;
        else
          v16 = v13;
        if ( isSpellOkForShop )
        {
          v13 = v16;
          ++v12;
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (int)v11 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      return v13;
    }

    void __fastcall LogicClientHome::randomizeShopItems(__int64 *a1, int a2, int a3)
    {
      LogicRandom *v6; // x19
      int v7; // w26
      __int64 v8; // x0
      tween::Bounce *PlayerAvatar; // x0
      tween::Bounce *v10; // x0
      __int64 Arena; // x0
      tween::Bounce *v12; // x0
      __int64 v13; // x0
      __int64 i; // x27
      int v15; // w28
      __int64 v16; // x22
      InitState *RandomSpell; // x23
      __int64 v18; // x24
      __int64 v19; // x0
      tween::Bounce *v20; // x0
      __int64 v21; // x0
      __int64 GameListener; // x0
      tween::Bounce *v23; // x0
      tween::Bounce *v24; // x0
      __int64 v25; // x0
      __int64 v26; // [xsp+8h] [xbp-88h] BYREF
      __int64 v27; // [xsp+10h] [xbp-80h]
      int v28; // [xsp+18h] [xbp-78h]
      _QWORD v29[3]; // [xsp+20h] [xbp-70h]
    
      v6 = (LogicRandom *)operator new(4);
      LogicRandom::LogicRandom(v6, a2);
      v29[0] = LogicDataTables::getRarityCommon();
      v29[1] = LogicDataTables::getRarityRare();
      v29[2] = LogicDataTables::getRarityEpic();
      v28 = 1;
      v27 = 0x100000001LL;
      if ( a3 == 1 )
      {
        v7 = 2;
        v27 = 0x200000002LL;
        v28 = 2;
      }
      else
      {
        v7 = 1;
      }
      v8 = a1[1];
      if ( v8 )
      {
        if ( LogicGameMode::getPlayerAvatar(v8) )
        {
          PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a1[1]);
          if ( LogicClientAvatar::getChangeListener(PlayerAvatar) )
          {
            v10 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a1[1]);
            Arena = LogicClientAvatar::getArena(v10);
            if ( (LogicArenaData::isTrainingCamp(Arena) & 1) == 0 )
            {
              v12 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a1[1]);
              v13 = LogicClientAvatar::getChangeListener(v12);
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 272LL))(v13, a1 + 33);
            }
          }
        }
      }
      LogicClientHome::clearShopSpells((CoOpenStreamEntry *)a1);
      for ( i = 0; ; v7 = *((_DWORD *)&v27 + i) )
      {
        if ( v7 >= 1 )
        {
          v15 = 0;
          v16 = v29[i];
          do
          {
            RandomSpell = LogicClientHome::getRandomSpell((__int64)a1, v6, v16);
            if ( RandomSpell )
            {
              v18 = operator new(16);
              LogicDataSlot::LogicDataSlot((LogicDataSlot *)v18);
              v26 = v18;
              *(_QWORD *)v18 = RandomSpell;
              *(_DWORD *)(v18 + 8) = 0;
              LogicArrayList<LogicDataSlot *>::add((__int64)(a1 + 33), &v26);
            }
            ++v15;
          }
          while ( v15 < v7 );
        }
        if ( ++i > 2 )
          break;
      }
      v19 = a1[1];
      if ( v19 && LogicGameMode::getPlayerAvatar(v19) )
      {
        v20 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a1[1]);
        v21 = LogicClientAvatar::getArena(v20);
        if ( (LogicArenaData::isTrainingCamp(v21) & 1) == 0 )
        {
          GameListener = LogicGameMode::getGameListener((UnlockAccountPopup *)a1[1]);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 392LL))(GameListener);
        }
        v23 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a1[1]);
        if ( LogicClientAvatar::getChangeListener(v23) )
        {
          v24 = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a1[1]);
          v25 = LogicClientAvatar::getChangeListener(v24);
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 280LL))(v25, a1 + 33);
        }
      }
      LogicRandom::destruct(v6);
      operator delete(v6);
    }

    __int64 __fastcall LogicClientHome::getTotalUpgradeCount(__int64 a1)
    {
      int v2; // w8
      __int64 v3; // x19
      int v4; // w21
      int v5; // w8
      AcceptChallengeMessage *v6; // x20
      int SpellCnt; // w0
      unsigned __int64 v8; // x21
      int v9; // w8
    
      v2 = *(_DWORD *)(a1 + 52);
      v3 = 0;
      v4 = v2 - 1;
      if ( v2 >= 1 )
      {
        do
        {
          v3 = (unsigned int)(*(_DWORD *)(LogicSpellCollection::getSpell((GameInputField *)(a1 + 40), v4) + 8) + v3);
          v5 = v4-- + 1;
        }
        while ( v5 > 1 );
      }
      v6 = **(AcceptChallengeMessage ***)(a1 + 24);
      SpellCnt = LogicSpellDeck::getSpellCnt((__int64)v6);
      v8 = (unsigned int)(SpellCnt - 1);
      if ( SpellCnt >= 1 )
      {
        do
        {
          v3 = (unsigned int)(*(_DWORD *)(LogicSpellDeck::getSpell(v6, (const char *)v8) + 8) + v3);
          v9 = v8 + 1;
          v8 = (unsigned int)(v8 - 1);
        }
        while ( v9 > 1 );
      }
      return v3;
    }

    __int64 __fastcall LogicClientHome::getAvailableUpgradeCount(__int64 a1)
    {
      int v2; // w8
      __int64 v3; // x19
      int v4; // w21
      TextField *Spell; // x0
      int v6; // w8
      AcceptChallengeMessage *v7; // x20
      int SpellCnt; // w0
      unsigned __int64 v9; // x21
      TextField *v10; // x0
      int v11; // w8
    
      v2 = *(_DWORD *)(a1 + 52);
      v3 = 0;
      v4 = v2 - 1;
      if ( v2 >= 1 )
      {
        do
        {
          Spell = (TextField *)LogicSpellCollection::getSpell((GameInputField *)(a1 + 40), v4);
          v3 = (unsigned int)LogicSpell::canUpgrade(Spell) + (unsigned int)v3;
          v6 = v4-- + 1;
        }
        while ( v6 > 1 );
      }
      v7 = **(AcceptChallengeMessage ***)(a1 + 24);
      SpellCnt = LogicSpellDeck::getSpellCnt((__int64)v7);
      v9 = (unsigned int)(SpellCnt - 1);
      if ( SpellCnt >= 1 )
      {
        do
        {
          v10 = (TextField *)LogicSpellDeck::getSpell(v7, (const char *)v9);
          v3 = (unsigned int)LogicSpell::canUpgrade(v10) + (unsigned int)v3;
          v11 = v9 + 1;
          v9 = (unsigned int)(v9 - 1);
        }
        while ( v11 > 1 );
      }
      return v3;
    }

    _DWORD *__fastcall LogicClientHome::startRequestSpellsCooldown(__int64 a1)
    {
      _DWORD *v2; // x19
      const char *v3; // x1
      int v4; // w21
      int CurrentTimestamp; // w2
    
      v2 = (_DWORD *)(a1 + 140);
      if ( !LogicTimer::isFinished((LogicChestOrderData *)(a1 + 140)) )
        Debugger::warning((__siginfo *)"LogicClientHome::startRequestSpellsCooldown(): Timer still running", v3);
      LogicTimer::destruct((__int64)v2);
      v4 = *(_DWORD *)(LogicDataTables::getGlobals() + 140);
      CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*(_QWORD *)(a1 + 8));
      return LogicTimer::startTimer(v2, v4, CurrentTimestamp);
    }

    __int64 __fastcall LogicClientHome::getRequestSpellsCooldownSeconds(__int64 a1, __int64 a2, int a3)
    {
      return LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 140), a2, a3);
    }

    __int64 __fastcall LogicClientHome::getSecondsToNextFreeChest(__int64 a1, __int64 a2, int a3)
    {
      if ( *(_QWORD *)(a1 + 152) )
        return 0;
      else
        return LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 128), a2, a3);
    }

    __int64 __fastcall LogicClientHome::setShopWeekdayIndexSeen(__int64 result, int a2)
    {
      *(_DWORD *)(result + 244) = a2;
      return result;
    }

    __int64 __fastcall LogicClientHome::getShopWeekdayIndexSeen(__int64 a1)
    {
      return *(unsigned int *)(a1 + 244);
    }

    __int64 __fastcall LogicClientHome::getShopWeekdayIndex(__int64 a1)
    {
      return *(unsigned int *)(a1 + 240);
    }

    __int64 __fastcall LogicClientHome::getShopSecondsToCycle(__int64 a1, __int64 a2, int a3)
    {
      return LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 248), a2, a3);
    }

    _DWORD *__fastcall LogicClientHome::setShopValues(__int64 a1, int a2, int a3, int a4)
    {
      int CurrentTimestamp; // w2
    
      if ( !*(_DWORD *)(a1 + 276) || *(_DWORD *)(a1 + 236) != a2 || *(_DWORD *)(a1 + 240) != a4 )
        LogicClientHome::randomizeShopItems((__int64 *)a1, a2, a4);
      *(_DWORD *)(a1 + 236) = a2;
      *(_DWORD *)(a1 + 240) = a4;
      CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*(_QWORD *)(a1 + 8));
      return LogicTimer::startTimer((_DWORD *)(a1 + 248), a3, CurrentTimestamp);
    }

    _DWORD *__fastcall LogicClientHome::startDonationCooldown(__int64 a1, __int64 a2, int a3)
    {
      int v3; // w19
      _DWORD *v5; // x20
      _DWORD *result; // x0
      int CurrentTimestamp; // w2
    
      v3 = a2;
      v5 = (_DWORD *)(a1 + 196);
      result = (_DWORD *)LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 196), a2, a3);
      if ( (int)result <= v3 )
      {
        LogicTimer::destruct((__int64)v5);
        CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*(_QWORD *)(a1 + 8));
        return LogicTimer::startTimer(v5, v3, CurrentTimestamp);
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::getDonationCapacityTimerSeconds(__int64 a1, __int64 a2, int a3)
    {
      return LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 208), a2, a3);
    }

    bool __fastcall LogicClientHome::isDonationCapacityReached(__int64 a1)
    {
      tween::Bounce *PlayerAvatar; // x0
      DonateItem *Arena; // x0
    
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(a1 + 8));
      Arena = (DonateItem *)LogicClientAvatar::getArena(PlayerAvatar);
      return *(_DWORD *)(a1 + 220) >= (int)LogicArenaData::getDailyDonationCapacityLimit(Arena);
    }

    __int64 __fastcall LogicClientHome::getDonationCooldownSeconds(__int64 a1, __int64 a2, int a3)
    {
      LogicMath *RemainingSeconds; // x20
      __int64 v5; // x1
      int v6; // w2
      int v7; // w21
      int v8; // w2
      int v9; // w1
    
      RemainingSeconds = (LogicMath *)LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 196), a2, a3);
      v7 = LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 208), v5, v6);
      if ( LogicClientHome::isDonationCapacityReached(a1) )
        v9 = v7;
      else
        v9 = 0;
      return LogicMath::max(RemainingSeconds, v9, v8);
    }

    __int64 __fastcall LogicClientHome::getShareReplayCooldownTime(__int64 a1, __int64 a2, int a3)
    {
      return LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 292), a2, a3);
    }

    _DWORD *__fastcall LogicClientHome::setShareReplayCooldownTime(__int64 a1, int a2)
    {
      _DWORD *v4; // x21
      int CurrentTimestamp; // w2
    
      v4 = (_DWORD *)(a1 + 292);
      LogicTimer::destruct(a1 + 292);
      CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*(_QWORD *)(a1 + 8));
      return LogicTimer::startTimer(v4, a2, CurrentTimestamp);
    }

    __int64 __fastcall LogicClientHome::getSendTeamMailCooldownTime(__int64 a1, __int64 a2, int a3)
    {
      return LogicTimer::getRemainingSeconds((LogicChestOrderData *)(a1 + 280), a2, a3);
    }

    _DWORD *__fastcall LogicClientHome::setSendTeamMailCooldownTime(__int64 a1, int a2)
    {
      _DWORD *v4; // x21
      int CurrentTimestamp; // w2
    
      v4 = (_DWORD *)(a1 + 280);
      LogicTimer::destruct(a1 + 280);
      CurrentTimestamp = LogicGameMode::getCurrentTimestamp(*(_QWORD *)(a1 + 8));
      return LogicTimer::startTimer(v4, a2, CurrentTimestamp);
    }

    __int64 __fastcall LogicClientHome::setProgressSimulationActive(__int64 result, char a2)
    {
      *(_BYTE *)(result + 320) = a2;
      return result;
    }

    __int64 __fastcall LogicClientHome::getReplaySeen(__int64 a1, int a2)
    {
      __int64 *v2; // x10
      __int64 v3; // x8
      __int64 v4; // x9
      __int64 v5; // x10
    
      v2 = *(__int64 **)(a1 + 328);
      v3 = *((int *)v2 + 3);
      if ( (int)v3 < 1 )
        return 0;
      v4 = 0;
      v5 = *v2;
      while ( *(_DWORD *)(v5 + 4 * v4) != a2 )
      {
        if ( ++v4 >= v3 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall LogicClientHome::setReplaySeen(__int64 a1, int a2)
    {
      __int64 result; // x0
      const char *v4; // x1
      int v5; // [xsp+Ch] [xbp-14h] BYREF
    
      v5 = a2;
      result = LogicArrayList<int>::add(*(_QWORD *)(a1 + 328), &v5);
      if ( *(int *)(*(_QWORD *)(a1 + 328) + 12LL) >= 31 )
        return Debugger::warning((__siginfo *)"setReplaySeen grows seen list above 30", v4);
      return result;
    }

    __int64 __fastcall LogicClientHome::setReplayUnseen(__int64 a1, int a2)
    {
      __int64 result; // x0
      __int64 v5; // x21
    
      result = *(_QWORD *)(a1 + 328);
      if ( *(int *)(result + 12) >= 1 )
      {
        v5 = 0;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)result + 4 * v5) == a2 )
          {
            LogicArrayList<int>::remove((__int64 *)result, v5);
            result = *(_QWORD *)(a1 + 328);
          }
          ++v5;
        }
        while ( v5 < *(int *)(result + 12) );
      }
      return result;
    }

    __int64 __fastcall LogicClientHome::getReplaySeenCount(__int64 a1)
    {
      return *(unsigned int *)(*(_QWORD *)(a1 + 328) + 12LL);
    }

    __int64 __fastcall LogicClientHome::getReplaySeenIdAt(__int64 a1, int a2)
    {
      return *(unsigned int *)(**(_QWORD **)(a1 + 328) + 4LL * a2);
    }

    __int64 __fastcall LogicClientHome::saveRequest(__int64 a1, __int64 a2, __int64 a3)
    {
      String::operator=((String *)(a1 + 352));
      *(_DWORD *)(a1 + 388) = 0;
      return LogicArrayList<LogicSpellData const*>::addAll(a1 + 376, a3);
    }

    __int64 __fastcall LogicClientHome::increaseDonatedCapacity(__int64 a1, InitState *a2)
    {
      __int64 result; // x0
    
      result = LogicSpellData::getDonateCapacity(a2);
      *(_DWORD *)(a1 + 220) += result;
      return result;
    }

    bool __fastcall LogicClientHome::canDonate(__int64 a1, InitState *a2)
    {
      __int64 v3; // x20
      tween::Bounce *PlayerAvatar; // x0
      DonateItem *Arena; // x0
      int DailyDonationCapacityLimit; // w21
    
      v3 = a1;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(a1 + 8));
      Arena = (DonateItem *)LogicClientAvatar::getArena(PlayerAvatar);
      DailyDonationCapacityLimit = LogicArenaData::getDailyDonationCapacityLimit(Arena);
      LODWORD(v3) = *(_DWORD *)(v3 + 220);
      return (int)(LogicSpellData::getDonateCapacity(a2) + v3) <= DailyDonationCapacityLimit;
    }

    __int64 __fastcall LogicClientHome::chestPurchased(__int64 a1, const char *a2)
    {
      char *v4; // x0
      LogicChest *v6; // x21
      tween::Bounce *PlayerAvatar; // x21
      __int64 v8; // x0
      __int64 v9; // x9
      unsigned int v10; // w10
      _QWORD *v11; // x11
      __int64 v13; // x2
      __int64 GameListener; // x0
    
      if ( !a2 )
      {
        v4 = "LogicClientHome::chestPurchased - chest data is NULL";
        return Debugger::warning((__siginfo *)v4, a2);
      }
      if ( *(_QWORD *)(a1 + 160) )
      {
        v4 = "LogicClientHome::chestPurchased previous purchased chest not collected";
        return Debugger::warning((__siginfo *)v4, a2);
      }
      v6 = (LogicChest *)operator new(48);
      LogicChest::LogicChest(v6, (const LogicRefreshAchievementsCommand *)a2);
      *(_QWORD *)(a1 + 160) = v6;
      LogicChest::setSource((__int64)v6, 3);
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(a1 + 8));
      if ( LogicClientAvatar::getChangeListener(PlayerAvatar) )
      {
        v8 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        v9 = *(int *)(a1 + 116);
        if ( (int)v9 < 1 )
        {
          v10 = 0;
        }
        else
        {
          v10 = 0;
          v11 = *(_QWORD **)(a1 + 104);
          do
          {
            if ( *v11++ )
              ++v10;
            --v9;
          }
          while ( v9 );
        }
        if ( *(_QWORD *)(a1 + 120) )
          v13 = v10 + 1;
        else
          v13 = v10;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 208LL))(v8, *(_QWORD *)(a1 + 160), v13);
      }
      GameListener = LogicGameMode::getGameListener(*(UnlockAccountPopup **)(a1 + 8));
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)GameListener + 344LL))(GameListener, a2);
      return LogicChest::setClaimed(*(_QWORD *)(a1 + 160), *(UnlockAccountPopup **)(a1 + 8), 4);
    }

    __int64 __fastcall LogicClientHome::enableVideoHackChest(__int64 result)
    {
      *(_BYTE *)(result + 348) = 1;
      return result;
    }

    __int64 __fastcall LogicClientHome::isVideoHackChestEnabled(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 348);
    }

    __int64 __fastcall LogicClientHome::getCrownChestDiamondIndex(__int64 a1)
    {
      return *(unsigned int *)(a1 + 400);
    }

    __int64 __fastcall LogicClientHome::updateCrownChestDiamondIndex(__int64 a1)
    {
      int v2; // w20
      HomeScreen *Globals; // x0
      __int64 result; // x0
    
      v2 = *(_DWORD *)(a1 + 400) + 1;
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      result = LogicGlobals::getCrownChestDiamondLoopLength(Globals);
      *(_DWORD *)(a1 + 400) = v2 % (int)result;
      return result;
    }

    __int64 __fastcall LogicClientHome::getFreeChestDiamondIndex(__int64 a1)
    {
      return *(unsigned int *)(a1 + 396);
    }

    __int64 __fastcall LogicClientHome::updateFreeChestDiamondIndex(__int64 a1)
    {
      int v2; // w20
      HomeScreen *Globals; // x0
      __int64 result; // x0
    
      v2 = *(_DWORD *)(a1 + 396) + 1;
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      result = LogicGlobals::getFreeChestDiamondLoopLength(Globals);
      *(_DWORD *)(a1 + 396) = v2 % (int)result;
      return result;
    }

    bool __fastcall LogicClientHome::getRoyalTVReplayVersionMatches(
            unsigned int *a1,
            const char *a2,
            __int64 a3,
            __int64 a4)
    {
      int v4; // w19
      int v5; // w21
      int v6; // w22
      int v8; // w2
      char v10; // [xsp+38h] [xbp-38h] BYREF
    
      v4 = a4;
      v5 = a3;
      v6 = (int)a2;
      String::format(
        (String *)"Royal TV Check Flags Stored (%d,%d,%d) Server (%d,%d,%d)",
        a2,
        a1[84],
        a1[85],
        a1[86],
        a2,
        a3,
        a4);
      Debugger::hudPrint((__siginfo *)&v10, (const String *)0xFFFFFFFFLL, v8);
      String::~String();
      return a1[84] == v6 && a1[85] == v5 && a1[86] == v4;
    }

    bool __fastcall LogicClientHome::isPageOpened(__int64 a1, char a2)
    {
      return (*(_DWORD *)(a1 + 100) & (1 << a2)) != 0;
    }

    __int64 __fastcall LogicClientHome::setPageOpened(__int64 result, char a2)
    {
      *(_DWORD *)(result + 100) |= 1 << a2;
      return result;
    }

    __int64 __fastcall LogicClientHome::initializeMembers(__int64 result)
    {
      *(_DWORD *)(result + 396) = 0;
      *(_DWORD *)(result + 400) = 0;
      *(_DWORD *)(result + 220) = 0;
      *(_DWORD *)(result + 116) = 0;
      *(_DWORD *)(result + 36) = 0;
      *(_DWORD *)(result + 276) = 0;
      *(_BYTE *)(result + 320) = 0;
      *(_DWORD *)(result + 304) = 0;
      *(_DWORD *)(result + 100) = 0;
      *(_QWORD *)(result + 92) = 0;
      *(_QWORD *)(result + 84) = 0;
      *(_QWORD *)(result + 76) = 0;
      *(_QWORD *)(result + 68) = 0;
      *(_DWORD *)(result + 236) = -1;
      *(_DWORD *)(result + 240) = -1;
      *(_DWORD *)(result + 244) = -1;
      *(_BYTE *)(result + 348) = 0;
      *(_BYTE *)(result + 224) = 0;
      *(_DWORD *)(result + 228) = 0;
      *(_DWORD *)(result + 232) = 0;
      *(_DWORD *)(result + 64) = 0;
      *(_QWORD *)result = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_DWORD *)(result + 180) = 0;
      *(_QWORD *)(result + 184) = 0;
      *(_QWORD *)(result + 152) = 0;
      *(_QWORD *)(result + 160) = 0;
      *(_BYTE *)(result + 192) = 1;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 120) = 0;
      *(_QWORD *)(result + 312) = 0;
      *(_DWORD *)(result + 392) = 0;
      *(_DWORD *)(result + 344) = 0;
      *(_QWORD *)(result + 328) = 0;
      *(_QWORD *)(result + 336) = 0;
      return result;
    }

}; // end class LogicClientHome
