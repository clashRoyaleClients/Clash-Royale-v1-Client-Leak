class LogicRewardRandomizer
{
public:

    __int64 __fastcall LogicRewardRandomizer::LogicRewardRandomizer(__int64 a1)
    {
      __int64 Table; // x20
      int v3; // w0
      int v4; // w21
      __int64 v5; // x22
      __int64 v6; // x0
      __int64 v7; // x21
      __int64 v8; // x21
      __int64 v9; // x25
      __int64 v10; // x27
      int ChanceWeight; // w20
      __int64 v12; // x8
      __int64 v13; // x9
    
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = -1;
      Table = LogicDataTables::getTable(14);
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      v4 = v3;
      *(_DWORD *)a1 = v3;
      v5 = v3;
      if ( is_mul_ok(v3, 8u) )
        v6 = 8LL * v3;
      else
        v6 = -1;
      *(_QWORD *)(a1 + 8) = operator new[](v6);
      if ( v4 >= 1 )
      {
        v7 = 0;
        do
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(
                                                        Table,
                                                        v7);
          ++v7;
        }
        while ( (_DWORD)v5 != (_DWORD)v7 );
        if ( (int)v5 >= 1 )
        {
          v8 = 0;
          v9 = 1;
          do
          {
            v10 = v9;
            if ( v8 + 1 < v5 )
            {
              do
              {
                ChanceWeight = LogicRarityData::getChanceWeight(*(LogicGameObjectManagerListener **)(*(_QWORD *)(a1 + 8)
                                                                                                   + 8 * v8));
                if ( ChanceWeight > (int)LogicRarityData::getChanceWeight(*(LogicGameObjectManagerListener **)(*(_QWORD *)(a1 + 8) + 8 * v10)) )
                {
                  v12 = *(_QWORD *)(a1 + 8);
                  v13 = *(_QWORD *)(v12 + 8 * v10);
                  *(_QWORD *)(v12 + 8 * v10) = *(_QWORD *)(v12 + 8 * v8);
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8) = v13;
                }
                ++v10;
              }
              while ( (_DWORD)v5 != (_DWORD)v10 );
            }
            ++v9;
          }
          while ( (_DWORD)v8++ != (_DWORD)v5 - 1 );
        }
      }
      return a1;
    }

    // attributes: thunk
    void __fastcall LogicRewardRandomizer::LogicRewardRandomizer(LogicRewardRandomizer *this)
    {
      __ZN21LogicRewardRandomizerC2Ev((__int64)this);
    }

    void __fastcall LogicRewardRandomizer::destruct(__int64 a1)
    {
      __int64 v2; // x0
    
      v2 = *(_QWORD *)(a1 + 8);
      if ( v2 )
      {
        operator delete[](v2);
        *(_QWORD *)(a1 + 8) = 0;
      }
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = -1;
    }

    __int64 __fastcall LogicRewardRandomizer::randomizeReward(__int64 a1, LogicSpawnPointData *a2, int a3, __int64 a4)
    {
      __int64 v8; // x19
      LogicRefreshAchievementsCommand *TreasureChestData; // x21
      __int64 v10; // x8
      int MinGold; // w22
      int MaxGold; // w0
      HomeScreen *Globals; // x21
      const char *FreeChestDiamondIndex; // x0
      int FreeChestDiamonds; // w21
      HomeScreen *v16; // x21
      const char *CrownChestDiamondIndex; // x0
      _BYTE v19[2504]; // [xsp+8h] [xbp-9F8h] BYREF
    
      LogicMersenneTwisterRandom::LogicMersenneTwisterRandom((LogicDeviceLinkEnterCodeMessage *)v19);
      LogicMersenneTwisterRandom::initialize((LogicDeviceLinkEnterCodeMessage *)v19, a3);
      v8 = operator new(16);
      LogicReward::LogicReward((LogicReward *)v8);
      TreasureChestData = (LogicRefreshAchievementsCommand *)LogicChest::getTreasureChestData(a2);
      v10 = LogicRewardRandomizer::randomizeSpells(a1, TreasureChestData, v19, a4);
      if ( *(int *)(v10 + 12) >= 1 )
        LogicReward::setSpells((void **)v8, v10, (TextField *)1);
      MinGold = LogicTreasureChestData::getMinGold((__int64)TreasureChestData);
      MaxGold = LogicTreasureChestData::getMaxGold((__int64)TreasureChestData);
      if ( MaxGold >= 1 )
      {
        if ( MaxGold == MinGold )
          *(_DWORD *)(v8 + 8) = MinGold;
        else
          *(_DWORD *)(v8 + 8) = LogicMersenneTwisterRandom::rand((LogicDeviceLinkEnterCodeMessage *)v19, MaxGold - MinGold)
                              + MinGold;
      }
      if ( LogicTreasureChestData::isFreeChest(TreasureChestData) )
      {
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        FreeChestDiamondIndex = (const char *)LogicClientHome::getFreeChestDiamondIndex(a4);
        FreeChestDiamonds = LogicGlobals::getFreeChestDiamonds(Globals, FreeChestDiamondIndex);
        LogicClientHome::updateFreeChestDiamondIndex(a4);
      }
      else
      {
        if ( !LogicTreasureChestData::isCrownChest(TreasureChestData) )
          goto LABEL_13;
        v16 = (HomeScreen *)LogicDataTables::getGlobals();
        CrownChestDiamondIndex = (const char *)LogicClientHome::getCrownChestDiamondIndex(a4);
        FreeChestDiamonds = LogicGlobals::getCrownChestDiamonds(v16, CrownChestDiamondIndex);
        LogicClientHome::updateCrownChestDiamondIndex(a4);
      }
      if ( FreeChestDiamonds >= 1 )
        *(_DWORD *)(v8 + 12) = FreeChestDiamonds;
    LABEL_13:
      LogicMersenneTwisterRandom::destruct((LogicDeviceLinkEnterCodeMessage *)v19);
      return v8;
    }

    __int64 __fastcall LogicRewardRandomizer::randomizeSpells(
            int *a1,
            __int64 a2,
            LogicDeviceLinkEnterCodeMessage *a3,
            __int64 a4)
    {
      int *v6; // x28
      int isVideoHackChestEnabled; // w21
      __int64 v8; // x19
      __int64 SpellByName; // x24
      __int64 v10; // x26
      __int64 v11; // x27
      __int64 v12; // x0
      const char *v13; // x2
      const char *v14; // x2
      const char *v15; // x2
      int GuaranteedSpellArraySize; // w24
      int i; // w26
      __int64 GuaranteedSpell; // x0
      TextField *v19; // x0
      const char *v20; // x2
      int RandomSpellCount; // w0
      int v22; // w8
      __int64 *v23; // x24
      LogicSpellSet *v24; // x26
      const DonateItem *Arena; // x0
      __int64 v26; // x23
      int v27; // w22
      __int64 v28; // x28
      int ChanceForRarity; // w27
      __int64 v30; // x8
      __int64 v31; // x21
      __int64 v32; // x23
      __int64 v33; // x8
      __int64 v34; // x22
      int v35; // w23
      int v36; // w21
      const LogicGameObjectManagerListener *v37; // x25
      int v38; // w28
      __int64 v39; // x27
      __int64 RandomSpell; // x0
      TextField *v42; // x0
      TextField *v43; // x27
      const InitState *SpellData; // x0
      int SpellCount; // w0
      __int64 v46; // x23
      __int64 v47; // x28
      __int64 DifferentSpellCount; // x0
      int v49; // w21
      int v50; // w22
      int j; // w1
      int v52; // w0
      LogicRefreshAchievementsCommand *v54; // [xsp+10h] [xbp-110h]
      __int64 v55; // [xsp+18h] [xbp-108h]
      _BOOL4 v56; // [xsp+24h] [xbp-FCh]
      int v59; // [xsp+3Ch] [xbp-E4h]
      int v60; // [xsp+3Ch] [xbp-E4h]
      __int64 v61; // [xsp+40h] [xbp-E0h] BYREF
      void *v62; // [xsp+48h] [xbp-D8h] BYREF
      __int64 v63; // [xsp+50h] [xbp-D0h]
      TextField *v64; // [xsp+58h] [xbp-C8h] BYREF
      int v65; // [xsp+64h] [xbp-BCh] BYREF
      TextField *v66; // [xsp+68h] [xbp-B8h] BYREF
      TextField *v67; // [xsp+70h] [xbp-B0h] BYREF
      TextField *v68; // [xsp+78h] [xbp-A8h] BYREF
      TextField *Spell; // [xsp+80h] [xbp-A0h] BYREF
      String v70; // [xsp+88h] [xbp-98h] BYREF
      String v71; // [xsp+A0h] [xbp-80h] BYREF
      String v72; // [xsp+B8h] [xbp-68h] BYREF
    
      v6 = a1;
      isVideoHackChestEnabled = LogicClientHome::isVideoHackChestEnabled(a4);
      v8 = operator new(16);
      v55 = v8;
      *(_QWORD *)v8 = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_DWORD *)(v8 + 8) = 10;
      *(_QWORD *)v8 = operator new[](80);
      if ( isVideoHackChestEnabled )
      {
        String::String(&v72, "Pekka");
        SpellByName = LogicDataTables::getSpellByName((__int64)&v72, 0);
        String::~String();
        String::String(&v71, "Prince");
        v10 = LogicDataTables::getSpellByName((__int64)&v71, 0);
        String::~String();
        String::String(&v70, "Archer");
        v11 = LogicDataTables::getSpellByName((__int64)&v70, 0);
        String::~String();
        Spell = (TextField *)LogicRewardRandomizer::createSpell(v12, SpellByName);
        v68 = (TextField *)LogicRewardRandomizer::createSpell(Spell, v10);
        v67 = (TextField *)LogicRewardRandomizer::createSpell(v68, v11);
        LogicSpell::setMaterialCount(Spell, 1, v13);
        LogicSpell::setMaterialCount(v68, 1, v14);
        LogicSpell::setMaterialCount(v67, 3, v15);
        LogicArrayList<LogicSpell *>::add(v8, (__int64 *)&Spell);
        LogicArrayList<LogicSpell *>::add(v8, (__int64 *)&v68);
        LogicArrayList<LogicSpell *>::add(v8, (__int64 *)&v67);
      }
      else
      {
        GuaranteedSpellArraySize = LogicTreasureChestData::getGuaranteedSpellArraySize(a2);
        if ( GuaranteedSpellArraySize >= 1 )
        {
          for ( i = 0; i != GuaranteedSpellArraySize; ++i )
          {
            GuaranteedSpell = LogicTreasureChestData::getGuaranteedSpell(a2, i);
            v19 = (TextField *)LogicRewardRandomizer::createSpell(GuaranteedSpell, GuaranteedSpell);
            v66 = v19;
            if ( v19 )
            {
              LogicSpell::setMaterialCount(v19, 1, v20);
              LogicArrayList<LogicSpell *>::add(v8, (__int64 *)&v66);
            }
          }
        }
      }
      RandomSpellCount = LogicTreasureChestData::getRandomSpellCount(a2);
      if ( isVideoHackChestEnabled )
        v22 = 0;
      else
        v22 = RandomSpellCount;
      v59 = v22;
      v23 = (__int64 *)operator new(16);
      *v23 = 0;
      v23[1] = 0;
      v24 = (LogicSpellSet *)operator new(8);
      Arena = (const DonateItem *)LogicTreasureChestData::getArena(a2);
      LogicSpellSet::LogicSpellSet(v24, Arena, 0);
      if ( *v6 < 1 )
        goto LABEL_45;
      v26 = 0;
      v27 = v59;
      do
      {
        v28 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 8 * v26);
        ChanceForRarity = LogicTreasureChestData::getChanceForRarity(a2, v28);
        v65 = 0;
        if ( !(isVideoHackChestEnabled & 1 | (ChanceForRarity < 1) | (v27 < 1) | (v28 == LogicDataTables::getRarityCommon())) )
        {
          v65 = v59 / ChanceForRarity;
          v27 -= v59 / ChanceForRarity;
          v8 = v55;
          if ( (int)LogicMersenneTwisterRandom::rand(a3, ChanceForRarity) < v59 % ChanceForRarity )
          {
            v65 = v59 / ChanceForRarity + 1;
            --v27;
          }
        }
        LogicArrayList<int>::add((__int64)v23, &v65);
        ++v26;
        v6 = a1;
        v30 = *a1;
      }
      while ( v26 < v30 );
      if ( (int)v30 < 1 )
        goto LABEL_45;
      v31 = 0;
      while ( 1 )
      {
        v32 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v31);
        if ( v32 == LogicDataTables::getRarityCommon() )
          break;
        ++v31;
        v33 = *a1;
        if ( v31 >= v33 )
          goto LABEL_23;
      }
      *(_DWORD *)(*v23 + 4 * v31) = v27;
      LODWORD(v33) = *a1;
    LABEL_23:
      if ( (int)v33 <= 0 )
      {
    LABEL_45:
        v54 = (LogicRefreshAchievementsCommand *)a2;
        v39 = *v23;
      }
      else
      {
        v54 = (LogicRefreshAchievementsCommand *)a2;
        v34 = 0;
        do
        {
          v35 = 0;
          v36 = 0;
          v37 = *(const LogicGameObjectManagerListener **)(*((_QWORD *)v6 + 1) + 8 * v34);
    LABEL_27:
          v38 = v35 - 1;
          while ( 1 )
          {
            v39 = *v23;
            if ( ++v38 > 999 || v36 >= *(_DWORD *)(*v23 + 4 * v34) )
              break;
            RandomSpell = LogicSpellSet::getRandomSpell(v24, a3, v37);
            v42 = (TextField *)LogicRewardRandomizer::createSpell(RandomSpell, RandomSpell);
            v43 = v42;
            v64 = v42;
            if ( v42 )
            {
              SpellData = (const InitState *)LogicSpell::getSpellData(v42);
              SpellCount = LogicClientHome::getSpellCount(a4, SpellData);
              v60 = v38 + 1;
              if ( *(int *)(v8 + 12) < 1 )
              {
    LABEL_26:
                LogicSpell::addMaterial(v43, 1);
                LogicArrayList<LogicSpell *>::add(v8, (__int64 *)&v64);
                ++v36;
                v35 = v60;
              }
              else
              {
                v46 = 0;
                v56 = v38 > 499 || SpellCount != 0;
                while ( 1 )
                {
                  v47 = LogicSpell::getSpellData(*(TextField **)(*(_QWORD *)v8 + 8 * v46));
                  if ( v47 == LogicSpell::getSpellData(v43) )
                    break;
                  if ( ++v46 >= *(int *)(v8 + 12) )
                    goto LABEL_26;
                }
                if ( v56 )
                {
                  LogicSpell::addMaterial(*(TextField **)(*(_QWORD *)v8 + 8 * v46), 1);
                  ++v36;
                }
                v35 = v60;
                if ( v43 )
                {
                  LogicSpell::destruct(v43);
                  operator delete(v43);
                  v64 = 0;
                }
              }
              goto LABEL_27;
            }
          }
          ++v34;
          v6 = a1;
        }
        while ( v34 < *a1 );
      }
      LogicSpellSet::destruct((__int64 **)v24);
      operator delete(v24);
      if ( v39 )
        operator delete[](v39);
      operator delete(v23);
      DifferentSpellCount = LogicTreasureChestData::getDifferentSpellCount((__int64)v54);
      LogicRewardRandomizer::combineSpells(DifferentSpellCount, v8, DifferentSpellCount, a3, a4);
      if ( *(_DWORD *)(v8 + 12) && (LogicTreasureChestData::isTutorialChest((__int64)v54) & 1) == 0 )
      {
        LogicArrayList<LogicSpell *>::LogicArrayList(&v62, v8);
        *(_DWORD *)(v8 + 12) = 0;
        v49 = HIDWORD(v63);
        if ( SHIDWORD(v63) >= 1 )
        {
          v50 = 0;
          for ( j = HIDWORD(v63); ; j = HIDWORD(v63) )
          {
            v52 = LogicMersenneTwisterRandom::rand(a3, j);
            v61 = LogicArrayList<LogicSpell *>::remove((__int64 *)&v62, v52);
            LogicArrayList<LogicSpell *>::add(v8, &v61);
            if ( ++v50 >= v49 )
              break;
          }
        }
        if ( v62 )
          operator delete[](v62);
        v62 = 0;
        v63 = 0;
      }
      return v8;
    }

    LogicSpell *__fastcall LogicRewardRandomizer::createSpell(__int64 a1, __int64 a2)
    {
      LogicSpell *v3; // x19
      LogicTimeUtil *v4; // x0
    
      v3 = (LogicSpell *)operator new(48);
      LogicSpell::LogicSpell(v3);
      v4 = (LogicTimeUtil *)LogicSpell::setSpellData(v3, a2);
      *((_DWORD *)v3 + 2) = 0;
      *((_DWORD *)v3 + 3) = LogicTimeUtil::getMinutesSince1970(v4);
      return v3;
    }

    void __fastcall LogicRewardRandomizer::combineSpells(
            __int64 a1,
            __int64 a2,
            int a3,
            LogicDeviceLinkEnterCodeMessage *a4,
            __int64 a5)
    {
      int v6; // w1
      int v10; // w10
      int v11; // w24
      TextField *v12; // x23
      const InitState *SpellData; // x0
      int v14; // w8
      int v15; // w25
      int v16; // w27
      int *v17; // x26
      const InitState *v18; // x0
      InitState **v19; // x28
      int v20; // w19
      int LevelIndexIfAllMaterialUsed; // w20
      InitState *v22; // x0
      __int64 Rarity; // x20
      InitState *v24; // x0
      int v25; // [xsp+Ch] [xbp-84h]
      int v26; // [xsp+10h] [xbp-80h]
      int v29; // [xsp+20h] [xbp-70h]
      int v30; // [xsp+24h] [xbp-6Ch]
      TextField *SpellByData; // [xsp+28h] [xbp-68h]
      int v32; // [xsp+34h] [xbp-5Ch]
    
      v6 = *(_DWORD *)(a2 + 12);
      if ( v6 >= 2 && v6 > a3 && v6 >= 1 && v6 >= a3 )
      {
        v10 = 0;
        v26 = 400 * v6;
        v30 = 200 * v6;
        v25 = 800 * v6 / 3;
        do
        {
          v32 = v10;
          v29 = v10 + 1;
          v11 = LogicMersenneTwisterRandom::rand(a4, v6);
          v12 = *(TextField **)(*(_QWORD *)a2 + 8LL * v11);
          SpellData = (const InitState *)LogicSpell::getSpellData(v12);
          SpellByData = LogicClientHome::getSpellByData(a5, SpellData);
          if ( SpellByData )
          {
            v14 = *(_DWORD *)(a2 + 12);
            if ( v14 >= 2 )
            {
              v15 = 1;
              while ( 1 )
              {
                v16 = (v11 + v15) % v14;
                v17 = *(int **)(*(_QWORD *)a2 + 8LL * v16);
                v18 = (const InitState *)LogicSpell::getSpellData((TextField *)v17);
                v19 = (InitState **)LogicClientHome::getSpellByData(a5, v18);
                v20 = v32 >= v25;
                if ( v19 )
                {
                  LevelIndexIfAllMaterialUsed = LogicSpell::getLevelIndexIfAllMaterialUsed((InitState **)SpellByData);
                  v20 = (v32 >= v30) | (LevelIndexIfAllMaterialUsed <= (int)LogicSpell::getLevelIndexIfAllMaterialUsed(v19));
                }
                v22 = (InitState *)LogicSpell::getSpellData(v12);
                Rarity = LogicSpellData::getRarity(v22);
                v24 = (InitState *)LogicSpell::getSpellData((TextField *)v17);
                if ( Rarity == LogicSpellData::getRarity(v24) && ((v20 ^ 1) & 1) == 0 )
                  break;
                ++v15;
                v14 = *(_DWORD *)(a2 + 12);
                if ( v15 >= v14 )
                  goto LABEL_23;
              }
              LogicSpell::addMaterial(v12, v17[4]);
              LogicArrayList<LogicSpell *>::remove((__int64 *)a2, v16);
              if ( v17 )
              {
                LogicSpell::destruct((TextField *)v17);
                operator delete(v17);
              }
            }
          }
    LABEL_23:
          if ( v29 >= v26 )
            break;
          v6 = *(_DWORD *)(a2 + 12);
          v10 = v29;
        }
        while ( v6 >= a3 );
      }
    }

}; // end class LogicRewardRandomizer
