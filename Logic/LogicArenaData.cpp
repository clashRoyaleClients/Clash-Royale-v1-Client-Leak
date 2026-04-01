class LogicArenaData
{
public:

    void __fastcall LogicArenaData::LogicArenaData(
            LogicArenaData *this,
            const EditClanPopup *a2,
            const ResetAccountMessage *a3)
    {
      _QWORD *v4; // x0
      _QWORD *v5; // x0
    
      LogicData::LogicData((__int64)this, (__int64)a2, a3);
      *(_QWORD *)this = off_100471E30;
      String::String((String *)((char *)this + 200));
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_BYTE *)this + 148) = 0;
      *(_QWORD *)((char *)this + 140) = 0;
      *(_QWORD *)((char *)this + 132) = 0;
      *(_QWORD *)((char *)this + 124) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      String::operator=((char *)this + 200, "");
      *((_QWORD *)this + 29) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 19) = 0;
      v4 = (_QWORD *)operator new(16);
      *v4 = 0;
      v4[1] = 0;
      *((_QWORD *)this + 29) = v4;
      v5 = (_QWORD *)operator new(16);
      *v5 = 0;
      v5[1] = 0;
      *((_QWORD *)this + 28) = v5;
    }

    // attributes: thunk
    void __fastcall LogicArenaData::LogicArenaData(
            LogicArenaData *this,
            const EditClanPopup *a2,
            const ResetAccountMessage *a3)
    {
      __ZN14LogicArenaDataC2EPK6CSVRowPK14LogicDataTable(this, a2, a3);
    }

    __int64 __fastcall LogicArenaData::destruct(DonateItem *this)
    {
      _QWORD *v2; // x20
      _QWORD *v3; // x20
      __int64 result; // x0
    
      v2 = (_QWORD *)*((_QWORD *)this + 29);
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)this + 29) = 0;
      v3 = (_QWORD *)*((_QWORD *)this + 28);
      if ( v3 )
      {
        if ( *v3 )
          operator delete[](*v3);
        operator delete(v3);
      }
      *((_QWORD *)this + 28) = 0;
      LogicData::destruct((__int64)this);
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_BYTE *)this + 148) = 0;
      *(_QWORD *)((char *)this + 140) = 0;
      *(_QWORD *)((char *)this + 132) = 0;
      *(_QWORD *)((char *)this + 124) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      result = String::operator=((char *)this + 200, "");
      *((_QWORD *)this + 29) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 19) = 0;
      return result;
    }

    __n128 __fastcall LogicArenaData::createReferences(DonateItem *this)
    {
      __int64 v2; // x20
      __int64 v3; // x20
      __int64 v4; // x20
      __int64 v5; // x20
      __int64 v6; // x20
      __int64 v7; // x20
      __int64 v8; // x20
      __int64 v9; // x20
      __int64 v10; // x20
      __int64 v11; // x20
      __int64 v12; // x20
      __int64 v13; // x20
      __int64 Value; // x0
      __int64 v15; // x20
      const char *v16; // x2
      const String *v17; // x1
      __int64 v18; // x20
      __int64 Name; // x0
      __int64 v20; // x0
      __int64 v21; // x0
      __int64 v22; // x0
      __int64 v23; // x0
      __int64 v24; // x20
      const char *v25; // x2
      const char *v26; // x2
      String v28; // [xsp+8h] [xbp-2A8h] BYREF
      String v29; // [xsp+20h] [xbp-290h] BYREF
      String v30; // [xsp+38h] [xbp-278h] BYREF
      String v31; // [xsp+50h] [xbp-260h] BYREF
      String v32; // [xsp+68h] [xbp-248h] BYREF
      String v33; // [xsp+80h] [xbp-230h] BYREF
      String v34; // [xsp+98h] [xbp-218h] BYREF
      String v35; // [xsp+B0h] [xbp-200h] BYREF
      String v36; // [xsp+C8h] [xbp-1E8h] BYREF
      String v37; // [xsp+E0h] [xbp-1D0h] BYREF
      String v38; // [xsp+F8h] [xbp-1B8h] BYREF
      String v39; // [xsp+110h] [xbp-1A0h] BYREF
      String v40; // [xsp+128h] [xbp-188h] BYREF
      String v41; // [xsp+140h] [xbp-170h] BYREF
      String v42; // [xsp+158h] [xbp-158h] BYREF
      String v43; // [xsp+170h] [xbp-140h] BYREF
      String v44; // [xsp+188h] [xbp-128h] BYREF
      String v45; // [xsp+1A0h] [xbp-110h] BYREF
      String v46; // [xsp+1B8h] [xbp-F8h] BYREF
      String v47; // [xsp+1D0h] [xbp-E0h] BYREF
      String v48; // [xsp+1E8h] [xbp-C8h] BYREF
      String v49; // [xsp+200h] [xbp-B0h] BYREF
      String v50; // [xsp+218h] [xbp-98h] BYREF
      String v51; // [xsp+230h] [xbp-80h] BYREF
      String v52; // [xsp+248h] [xbp-68h] BYREF
      String v53; // [xsp+260h] [xbp-50h] BYREF
      String v54; // [xsp+278h] [xbp-38h] BYREF
    
      LogicData::createReferences(this);
      v2 = *((_QWORD *)this + 1);
      String::String(&v54, "TrophyLimit");
      *((_DWORD *)this + 25) = CSVRow::getIntegerValue(v2, &v54, 0);
      String::~String();
      v3 = *((_QWORD *)this + 1);
      String::String(&v53, "DemoteTrophyLimit");
      *((_DWORD *)this + 26) = CSVRow::getIntegerValue(v3, &v53, 0);
      String::~String();
      v4 = *((_QWORD *)this + 1);
      String::String(&v52, "ChestRewardMultiplier");
      *((_DWORD *)this + 27) = CSVRow::getIntegerValue(v4, &v52, 0);
      String::~String();
      v5 = *((_QWORD *)this + 1);
      String::String(&v51, "ChestShopPriceMultiplier");
      *((_DWORD *)this + 28) = CSVRow::getIntegerValue(v5, &v51, 0);
      String::~String();
      v6 = *((_QWORD *)this + 1);
      String::String(&v50, "MatchCost");
      *((_DWORD *)this + 29) = CSVRow::getIntegerValue(v6, &v50, 0);
      String::~String();
      v7 = *((_QWORD *)this + 1);
      String::String(&v49, "RequestSize");
      *((_DWORD *)this + 30) = CSVRow::getIntegerValue(v7, &v49, 0);
      String::~String();
      v8 = *((_QWORD *)this + 1);
      String::String(&v48, "MaxDonationCount");
      *((_DWORD *)this + 33) = CSVRow::getIntegerValue(v8, &v48, 0);
      String::~String();
      v9 = *((_QWORD *)this + 1);
      String::String(&v47, "MatchmakingMinTrophyDelta");
      *((_DWORD *)this + 31) = CSVRow::getIntegerValue(v9, &v47, 0);
      String::~String();
      v10 = *((_QWORD *)this + 1);
      String::String(&v46, "MatchmakingMaxTrophyDelta");
      *((_DWORD *)this + 32) = CSVRow::getIntegerValue(v10, &v46, 0);
      String::~String();
      v11 = *((_QWORD *)this + 1);
      String::String(&v45, "MatchmakingMaxSeconds");
      *((_DWORD *)this + 35) = CSVRow::getIntegerValue(v11, &v45, 0);
      String::~String();
      v12 = *((_QWORD *)this + 1);
      String::String(&v44, "Arena");
      *((_DWORD *)this + 36) = CSVRow::getIntegerValue(v12, &v44, 0);
      String::~String();
      v13 = *((_QWORD *)this + 1);
      String::String(&v43, "PvpLocation");
      Value = CSVRow::getValue(v13, &v43, 0);
      *((_QWORD *)this + 24) = LogicDataTables::getLocationByName(Value, (__int64)this);
      String::~String();
      v15 = *((_QWORD *)this + 1);
      String::String(&v42, "DailyDonationCapacityLimit");
      *((_DWORD *)this + 34) = CSVRow::getIntegerValue(v15, &v42, 0);
      String::~String();
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 24) != 0), (bool)"", v16);
      if ( (unsigned int)LogicLocationData::npcOnly(*((ChangeAllianceMemberRoleOkMessage **)this + 24)) )
      {
        LogicData::getDebuggerName(this);
        operator+(&v41, "npc location is not allowed in Arena Data: ", &v40);
        Debugger::warning((__siginfo *)&v41, v17);
        String::~String();
        String::~String();
      }
      v18 = *((_QWORD *)this + 1);
      String::String(&v39, "TrainingCamp");
      *((_BYTE *)this + 148) = CSVRow::getBooleanValue(v18, &v39, 0);
      String::~String();
      if ( *((_BYTE *)this + 148) )
      {
        String::String(&v38, "Free");
        *((_QWORD *)this + 19) = LogicDataTables::getTreasureChestByName((__int64)&v38, (__int64)this);
        String::~String();
        String::String(&v37, "Star");
        *((_QWORD *)this + 20) = LogicDataTables::getTreasureChestByName((__int64)&v37, (__int64)this);
        String::~String();
        String::String(&v36, "Magic");
        *((_QWORD *)this + 21) = LogicDataTables::getTreasureChestByName((__int64)&v36, (__int64)this);
        String::~String();
        String::String(&v35, "Gold");
        *((_QWORD *)this + 22) = LogicDataTables::getTreasureChestByName((__int64)&v35, (__int64)this);
        String::~String();
        String::String(&v34, "Silver");
        *((_QWORD *)this + 23) = LogicDataTables::getTreasureChestByName((__int64)&v34, (__int64)this);
      }
      else
      {
        Name = LogicData::getName(this);
        operator+(&v33, "Free_", Name);
        *((_QWORD *)this + 19) = LogicDataTables::getTreasureChestByName((__int64)&v33, (__int64)this);
        String::~String();
        v20 = LogicData::getName(this);
        operator+(&v32, "Star_", v20);
        *((_QWORD *)this + 20) = LogicDataTables::getTreasureChestByName((__int64)&v32, (__int64)this);
        String::~String();
        v21 = LogicData::getName(this);
        operator+(&v31, "Magic_", v21);
        *((_QWORD *)this + 21) = LogicDataTables::getTreasureChestByName((__int64)&v31, (__int64)this);
        String::~String();
        v22 = LogicData::getName(this);
        operator+(&v30, "Gold_", v22);
        *((_QWORD *)this + 22) = LogicDataTables::getTreasureChestByName((__int64)&v30, (__int64)this);
        String::~String();
        v23 = LogicData::getName(this);
        operator+(&v29, "Silver_", v23);
        *((_QWORD *)this + 23) = LogicDataTables::getTreasureChestByName((__int64)&v29, (__int64)this);
      }
      String::~String();
      v24 = *((_QWORD *)this + 1);
      String::String(&v28, "SubtitleTID");
      CSVRow::getValue(v24, &v28, 0);
      String::operator=((String *)((char *)this + 200));
      String::~String();
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 19) != 0), (bool)"", v25);
      return Debugger::doAssert((Debugger *)(*((_QWORD *)this + 20) != 0), (bool)"", v26);
    }

    __int64 __fastcall LogicArenaData::createReferences2(__int64 a1)
    {
      LogicSpeedUpExploringCommand *ChestOrderByName; // x20
      const char *v3; // x21
      __int64 BaseChest; // x8
      __int64 v5; // x0
      __int64 v6; // x9
      __int64 v7; // x10
      __int64 v9; // x11
      __int64 v10; // x8
      __int64 v11; // x26
      AreaEffectObject *v12; // x23
      __int64 Name; // x0
      String *v14; // x0
      __int64 TreasureChestByName; // x24
      __int64 v16; // x0
      String *v17; // x0
      const String *v18; // x2
      __int64 v19; // x25
      __int64 v20; // x0
      String *v21; // x0
      const String *v22; // x2
      __int64 Table; // x20
      __int64 v24; // x21
      __int64 v25; // x22
      AreaEffectObject *v26; // x23
      __int64 v27; // x0
      __int64 v28; // x24
      InitState *v29; // x25
      int v30; // w1
      int InstanceID; // w0
      _QWORD *v32; // x20
      AreaEffectObject *RarityCommon; // x0
      int v34; // w1
      __int64 result; // x0
      __int64 v36; // x0
      const char *v37; // x1
      _QWORD *v38; // x8
      const String *v39; // x1
      String v40; // [xsp+10h] [xbp-150h] BYREF
      int v41; // [xsp+2Ch] [xbp-134h] BYREF
      String v42; // [xsp+30h] [xbp-130h] BYREF
      String v43; // [xsp+48h] [xbp-118h] BYREF
      String v44; // [xsp+60h] [xbp-100h] BYREF
      String v45; // [xsp+78h] [xbp-E8h] BYREF
      String v46; // [xsp+90h] [xbp-D0h] BYREF
      String v47; // [xsp+A8h] [xbp-B8h] BYREF
      String v48; // [xsp+C0h] [xbp-A0h] BYREF
      String v49; // [xsp+D8h] [xbp-88h] BYREF
      __int64 v50; // [xsp+F0h] [xbp-70h] BYREF
      String v51; // [xsp+F8h] [xbp-68h] BYREF
    
      LogicData::createReferences2();
      *(_DWORD *)(*(_QWORD *)(a1 + 232) + 12LL) = 0;
      String::String(&v51, "MainCycle");
      ChestOrderByName = (LogicSpeedUpExploringCommand *)LogicDataTables::getChestOrderByName((__int64)&v51, a1);
      String::~String();
      if ( (int)LogicChestOrderData::getChestCount(ChestOrderByName) >= 1 )
      {
        v3 = 0;
        do
        {
          BaseChest = LogicChestOrderData::getBaseChest(ChestOrderByName, v3);
          v50 = BaseChest;
          v5 = *(_QWORD *)(a1 + 232);
          v6 = *(int *)(v5 + 12);
          v7 = 8LL * ((int)v6 - 1);
          while ( v6-- >= 1 )
          {
            v9 = *(_QWORD *)(*(_QWORD *)v5 + v7);
            v7 -= 8;
            if ( v9 == BaseChest )
              goto LABEL_8;
          }
          LogicArrayList<LogicTreasureChestData const*>::add(v5, &v50);
    LABEL_8:
          v3 = (const char *)(unsigned int)((_DWORD)v3 + 1);
        }
        while ( (int)v3 < (int)LogicChestOrderData::getChestCount(ChestOrderByName) );
      }
      if ( !*(_BYTE *)(a1 + 148) )
      {
        v10 = *(_QWORD *)(a1 + 232);
        if ( *(int *)(v10 + 12) >= 1 )
        {
          v11 = 0;
          do
          {
            v12 = *(AreaEffectObject **)(*(_QWORD *)v10 + 8 * v11);
            Name = LogicData::getName(v12);
            operator+(Name, "_");
            v14 = (String *)LogicData::getName((AreaEffectObject *)a1);
            operator+((__int64 *)&v49.m_length, &v48, v14);
            TreasureChestByName = LogicDataTables::getTreasureChestByName((__int64)&v49, a1);
            String::~String();
            String::~String();
            v16 = LogicData::getName(v12);
            operator+(&v45, "Unable to find chest for arena: ", v16);
            operator+(&v45, "_");
            v17 = (String *)LogicData::getName((AreaEffectObject *)a1);
            operator+((__int64 *)&v47.m_length, &v46, v17);
            Debugger::doAssert((Debugger *)(TreasureChestByName != 0), (bool)&v47, v18);
            String::~String();
            String::~String();
            String::~String();
            v19 = LogicTreasureChestData::getBaseChest(TreasureChestByName);
            v20 = LogicData::getName(v12);
            operator+(&v42, "Chests has an invalid base chest: ", v20);
            operator+(&v42, "_");
            v21 = (String *)LogicData::getName((AreaEffectObject *)a1);
            operator+((__int64 *)&v44.m_length, &v43, v21);
            Debugger::doAssert((Debugger *)(v19 == (_QWORD)v12), (bool)&v44, v22);
            String::~String();
            String::~String();
            String::~String();
            *(_QWORD *)(**(_QWORD **)(a1 + 232) + 8 * v11++) = TreasureChestByName;
            v10 = *(_QWORD *)(a1 + 232);
          }
          while ( v11 < *(int *)(v10 + 12) );
        }
      }
      Table = LogicDataTables::getTable(14);
      v24 = LogicDataTables::getTable(7);
      *(_DWORD *)(*(_QWORD *)(a1 + 224) + 12LL) = 0;
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) >= 1 )
      {
        v25 = 0;
        do
        {
          v26 = (AreaEffectObject *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v25);
          v27 = *(_QWORD *)(a1 + 224);
          v41 = 0;
          LogicArrayList<int>::add(v27, &v41);
          if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24) >= 1 )
          {
            v28 = 0;
            do
            {
              v29 = (InitState *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 40LL))(v24, v28);
              if ( (AreaEffectObject *)LogicSpellData::getRarity(v29) == v26
                && (LogicSpellData::isNotInUse(v29) & 1) == 0
                && LogicSpellData::isUnlockedInArena(v29, (const DonateItem *)a1) )
              {
                InstanceID = LogicData::getInstanceID(v26, v30);
                ++*(_DWORD *)(**(_QWORD **)(a1 + 224) + 4LL * InstanceID);
              }
              v28 = (unsigned int)(v28 + 1);
            }
            while ( (int)v28 < (*(int (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24) );
          }
          v25 = (unsigned int)(v25 + 1);
        }
        while ( (int)v25 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      }
      v32 = *(_QWORD **)(a1 + 224);
      RarityCommon = (AreaEffectObject *)LogicDataTables::getRarityCommon();
      result = LogicData::getInstanceID(RarityCommon, v34);
      if ( !*(_DWORD *)(*v32 + 4LL * (int)result) )
      {
        v36 = LogicData::getName((AreaEffectObject *)a1);
        v38 = (_QWORD *)(v36 + 8);
        if ( *(_DWORD *)(v36 + 4) + 1 > 8 )
          v38 = (_QWORD *)*v38;
        String::format((String *)"No common cards found for arena %s", v37, v38);
        Debugger::error((Debugger *)&v40, v39);
      }
      return result;
    }

    __int64 __fastcall LogicArenaData::getUnlockedCardCountForRarity(__int64 a1, AreaEffectObject *a2)
    {
      _QWORD *v2; // x19
    
      if ( a2 )
      {
        v2 = *(_QWORD **)(a1 + 224);
        return *(unsigned int *)(*v2 + 4LL * (int)LogicData::getInstanceID(a2, (int)a2));
      }
      else
      {
        Debugger::warning((__siginfo *)"LogicArenaData::getUnlockedCardCountForRarity called with NULL parameter", 0);
        return 0;
      }
    }

    __int64 __fastcall LogicArenaData::isTrainingCamp(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 148);
    }

    __int64 __fastcall LogicArenaData::getScaledChestReward(__int64 a1, __int64 a2)
    {
      __int64 PreviousArena; // x0
      int v5; // w8
      int v6; // w20
      int ScaledChestReward; // w0
      int v8; // w2
    
      PreviousArena = LogicArenaData::getPreviousArena();
      v5 = *(_DWORD *)(a1 + 108);
      v6 = (v5 * (int)a2 + 50) / 100;
      if ( !PreviousArena || *(_DWORD *)(PreviousArena + 108) >= v5 )
        return (unsigned int)((v5 * (int)a2 + 50) / 100);
      ScaledChestReward = LogicArenaData::getScaledChestReward(PreviousArena, a2);
      return LogicMath::max((LogicMath *)(unsigned int)(ScaledChestReward + 1), v6, v8);
    }

    __int64 __fastcall LogicArenaData::getPreviousArena(__int64 a1)
    {
      __int64 Table; // x20
      __int64 v3; // x21
      __int64 v4; // x22
      __int64 v5; // x0
    
      Table = LogicDataTables::getTable(54);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) < 1 )
        return 0;
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v4);
        if ( (*(_BYTE *)(v5 + 148) && !*(_BYTE *)(a1 + 148) || *(_DWORD *)(v5 + 100) < *(_DWORD *)(a1 + 100))
          && (!v3 || *(_DWORD *)(v5 + 100) > *(_DWORD *)(v3 + 100)) )
        {
          v3 = v5;
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (int)v4 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      return v3;
    }

    __int64 __fastcall LogicArenaData::getScaledChestPrice(__int64 a1, int a2)
    {
      return (unsigned int)(*(_DWORD *)(a1 + 112) * a2 / 100);
    }

    __int64 __fastcall LogicArenaData::getTrophyLimit(__int64 a1)
    {
      return *(unsigned int *)(a1 + 100);
    }

    __int64 __fastcall LogicArenaData::getSubtitleTID(__int64 a1)
    {
      return a1 + 200;
    }

    __int64 __fastcall LogicArenaData::getDemoteTrophyLimit(__int64 a1)
    {
      return *(unsigned int *)(a1 + 104);
    }

    __int64 __fastcall LogicArenaData::getFreeChest(__int64 a1)
    {
      return *(_QWORD *)(a1 + 152);
    }

    __int64 __fastcall LogicArenaData::getMatchCost(__int64 a1)
    {
      return *(unsigned int *)(a1 + 116);
    }

    __int64 __fastcall LogicArenaData::getCrownChest(__int64 a1)
    {
      return *(_QWORD *)(a1 + 160);
    }

    __int64 __fastcall LogicArenaData::getMagicChest(__int64 a1)
    {
      return *(_QWORD *)(a1 + 168);
    }

    __int64 __fastcall LogicArenaData::getChestLoopChest(__int64 a1, __int64 a2)
    {
      __int64 v4; // x8
      __int64 v5; // x21
      __int64 BaseChest; // x0
    
      v4 = *(_QWORD *)(a1 + 232);
      if ( *(int *)(v4 + 12) > 0 )
      {
        v5 = 0;
        while ( 1 )
        {
          BaseChest = LogicTreasureChestData::getBaseChest(*(_QWORD *)(*(_QWORD *)v4 + 8 * v5));
          v4 = *(_QWORD *)(a1 + 232);
          if ( BaseChest == a2 )
            break;
          if ( ++v5 >= *(int *)(v4 + 12) )
            return a2;
        }
        return *(_QWORD *)(*(_QWORD *)v4 + 8 * v5);
      }
      return a2;
    }

    __int64 __fastcall LogicArenaData::getSpellRequestSize(DonateItem *this)
    {
      return *((unsigned int *)this + 30);
    }

    __int64 __fastcall LogicArenaData::getSpellDonateLimit(DonateItem *this)
    {
      return *((unsigned int *)this + 33);
    }

    __int64 __fastcall LogicArenaData::getDailyDonationCapacityLimit(DonateItem *this)
    {
      return *((unsigned int *)this + 34);
    }

    // attributes: thunk
    void __fastcall LogicArenaData::~LogicArenaData(DonateItem *this)
    {
      __ZN14LogicArenaDataD2Ev(this);
    }

    void __fastcall LogicArenaData::~LogicArenaData(DonateItem *a1)
    {
      LogicArenaData::~LogicArenaData(a1);
      operator delete(a1);
    }

    void __fastcall LogicArenaData::~LogicArenaData(String *this)
    {
      *(_QWORD *)&this->m_length = off_100471E30;
      String::~String();
      LogicData::~LogicData(this);
    }

}; // end class LogicArenaData
