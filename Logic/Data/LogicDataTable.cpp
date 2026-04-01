class LogicDataTable
{
public:

    void __fastcall LogicDataTable::~LogicDataTable(#1043 *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)this = off_10046D520;
      v3 = (_QWORD *)((char *)this + 24);
      v2 = *((_QWORD *)this + 3);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = *((_QWORD *)this + 1);
      if ( v4 )
        operator delete[](v4);
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    void __fastcall LogicDataTable::LogicDataTable(LogicDataTable *this, const #1224 *a2, int a3)
    {
      char *v5; // x19
      __int64 RowCount; // x0
    
      *(_QWORD *)this = off_10046D520;
      *((_QWORD *)this + 1) = 0;
      v5 = (char *)this + 8;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_DWORD *)this + 5) = 0;
      *((_DWORD *)this + 9) = 0;
      *((_BYTE *)this + 56) = 0;
      *((_QWORD *)this + 6) = a2;
      *((_DWORD *)this + 10) = a3;
      if ( a2 )
      {
        RowCount = CSVTable::getRowCount(a2);
        LogicArrayList<LogicData *>::ensureCapacity(v5, RowCount);
        LogicDataTable::loadTable(this, a2);
      }
    }

    __int64 __fastcall LogicDataTable::loadTable(ResetAccountMessage *this, const #1224 *a2)
    {
      __int64 result; // x0
      int v4; // w24
      __int64 v5; // x20
      const CSVRow *RowAt; // x21
      __int64 v7; // x0
      __int64 v8; // x22
      __int64 v9; // x0
      int RowOffset; // w23
      int v11; // w2
      #1221 *CSVColumn; // x0
      int Size; // w22
      bool v14; // zf
    
      *((_QWORD *)this + 6) = a2;
      result = CSVTable::getRowCount(a2);
      v4 = result - 1;
      if ( (int)result >= 1 )
      {
        v5 = 0;
        do
        {
          RowAt = (const CSVRow *)CSVTable::getRowAt(*((_QWORD *)this + 6), v5);
          v7 = *((_QWORD *)this + 6);
          if ( (int)v5 >= v4 )
          {
            CSVColumn = (#1221 *)CSVTable::getCSVColumn(v7, 0);
            Size = CSVColumn::getSize(CSVColumn);
            v11 = Size - CSVRow::getRowOffset(RowAt);
            v8 = (unsigned int)(v5 + 1);
          }
          else
          {
            v8 = (unsigned int)(v5 + 1);
            v9 = CSVTable::getRowAt(v7, v8);
            RowOffset = CSVRow::getRowOffset(v9);
            v11 = RowOffset - CSVRow::getRowOffset(RowAt);
          }
          result = LogicDataTable::addItem(this, RowAt, v11);
          v14 = (_DWORD)v5 == v4;
          v5 = v8;
        }
        while ( !v14 );
      }
      return result;
    }

    // attributes: thunk
    void __fastcall LogicDataTable::LogicDataTable(LogicDataTable *this, const #1224 *a2, int a3)
    {
      __ZN14LogicDataTableC2EPK8CSVTablei(this, a2, a3);
    }

    __int64 __fastcall LogicDataTable::destruct(__int64 this)
    {
      __int64 v1; // x19
      __int64 v2; // x8
      __int64 v3; // x21
      __int64 v4; // x20
      __int64 v5; // x8
    
      v1 = this;
      v2 = *(int *)(this + 20);
      if ( (int)v2 >= 1 )
      {
        v3 = v2 - 1;
        do
        {
          v4 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * v3);
          if ( v4 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
            this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          }
          v5 = v3-- + 1;
        }
        while ( v5 > 1 );
      }
      *(_QWORD *)(v1 + 48) = 0;
      *(_DWORD *)(v1 + 40) = -1;
      *(_DWORD *)(v1 + 20) = 0;
      *(_DWORD *)(v1 + 36) = 0;
      *(_BYTE *)(v1 + 56) = 0;
      return this;
    }

    __int64 __fastcall LogicDataTable::getTableName(#1224 **this)
    {
      #1222 *ParentNode; // x0
    
      ParentNode = (#1222 *)CSVTable::getParentNode(*(this + 6));
      return CSVNode::getFileName(ParentNode);
    }

    __int64 __fastcall LogicDataTable::getTableIndex(ResetAccountMessage *this)
    {
      return *((unsigned int *)this + 10);
    }

    LogicBillingPackagesData *__fastcall LogicDataTable::createItem(ResetAccountMessage *this, const #1223 *a2)
    {
      String *v4; // x0
      LogicBillingPackagesData *v5; // x19
      const String *v6; // x1
      LogicBillingPackagesData *result; // x0
      _QWORD v8[3]; // [xsp+0h] [xbp-50h] BYREF
      String v9; // [xsp+18h] [xbp-38h] BYREF
    
      v4 = (String *)*((unsigned int *)this + 10);
      switch ( (int)v4 )
      {
        case 1:
          v5 = (LogicBillingPackagesData *)operator new(160);
          LogicLocaleData::LogicLocaleData((__int64)v5, (__int64)a2, this);
          break;
        case 2:
          v5 = (LogicBillingPackagesData *)operator new(144);
          LogicBillingPackagesData::LogicBillingPackagesData(v5, a2, this);
          break;
        case 3:
        case 20:
          v5 = (LogicBillingPackagesData *)operator new(168);
          LogicGlobalData::LogicGlobalData(v5, a2, this);
          break;
        case 4:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicSoundData::LogicSoundData((__int64)v5, (__int64)a2, this);
          break;
        case 5:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicResourceData::LogicResourceData(v5, a2, this);
          break;
        case 8:
          v5 = (LogicBillingPackagesData *)operator new(144);
          LogicDamageTypeData::LogicDamageTypeData(v5, a2, this);
          break;
        case 9:
          v5 = (LogicBillingPackagesData *)operator new(208);
          LogicCharacterBuffData::LogicCharacterBuffData(v5);
          break;
        case 10:
          v5 = (LogicBillingPackagesData *)operator new(208);
          LogicProjectileData::LogicProjectileData(v5, a2, this);
          break;
        case 11:
          v5 = (LogicBillingPackagesData *)operator new(208);
          LogicEffectData::LogicEffectData(v5, a2, this);
          break;
        case 12:
          v5 = (LogicBillingPackagesData *)operator new(120);
          LogicPredefinedDeckData::LogicPredefinedDeckData(v5, a2, this);
          break;
        case 13:
          v5 = (LogicBillingPackagesData *)operator new(168);
          LogicEggData::LogicEggData(v5, a2, this);
          break;
        case 14:
          v5 = (LogicBillingPackagesData *)operator new(208);
          LogicRarityData::LogicRarityData(v5, a2, this);
          break;
        case 15:
          v5 = (LogicBillingPackagesData *)operator new(152);
          LogicLocationData::LogicLocationData(v5, a2, this);
          break;
        case 16:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicAllianceBadgeData::LogicAllianceBadgeData((__int64)v5, (__int64)a2, this);
          break;
        case 18:
          v5 = (LogicBillingPackagesData *)operator new(136);
          LogicNpcData::LogicNpcData(v5, a2, this);
          break;
        case 19:
          v5 = (LogicBillingPackagesData *)operator new(208);
          LogicTreasureChestData::LogicTreasureChestData(v5, a2, this);
          break;
        case 21:
          v5 = (LogicBillingPackagesData *)operator new(112);
          LogicParticleEmitterData::LogicParticleEmitterData((__int64)v5, (__int64)a2, this);
          break;
        case 22:
          v5 = (LogicBillingPackagesData *)operator new(216);
          LogicAreaEffectObjectData::LogicAreaEffectObjectData(v5, a2, this);
          break;
        case 26:
        case 27:
        case 28:
          v5 = (LogicBillingPackagesData *)operator new(232);
          LogicSpellData::LogicSpellData(v5, a2, this);
          break;
        case 34:
        case 35:
          v5 = (LogicBillingPackagesData *)operator new(832);
          LogicCharacterData::LogicCharacterData((__int64)v5, (__int64)a2, this);
          break;
        case 40:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicHealthBarData::LogicHealthBarData(v5, a2, this);
          break;
        case 41:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicMusicData::LogicMusicData(v5, a2, this);
          break;
        case 42:
          v5 = (LogicBillingPackagesData *)operator new(136);
          LogicDecoData::LogicDecoData(v5, a2, this);
          break;
        case 43:
          v5 = (LogicBillingPackagesData *)operator new(112);
          LogicGambleChestData::LogicGambleChestData(v5, a2, this);
          break;
        case 44:
          v5 = (LogicBillingPackagesData *)operator new(128);
          LogicSpawnPointData::LogicSpawnPointData(v5, a2, this);
          break;
        case 45:
        case 48:
          v5 = (LogicBillingPackagesData *)operator new(200);
          LogicTutorialData::LogicTutorialData(v5, (__int64)a2, this);
          break;
        case 46:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicExpLevelData::LogicExpLevelData(v5, a2, this);
          break;
        case 50:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicBackgroundDecoData::LogicBackgroundDecoData((__int64)v5, (__int64)a2, this);
          break;
        case 51:
          v5 = (LogicBillingPackagesData *)operator new(120);
          LogicSpellSetData::LogicSpellSetData((__int64)v5, (__int64)a2, (__int64)this);
          break;
        case 52:
          v5 = (LogicBillingPackagesData *)operator new(112);
          LogicChestOrderData::LogicChestOrderData(v5, a2, this);
          break;
        case 53:
          v5 = (LogicBillingPackagesData *)operator new(112);
          LogicTauntData::LogicTauntData(v5, a2, this);
          break;
        case 54:
          v5 = (LogicBillingPackagesData *)operator new(240);
          LogicArenaData::LogicArenaData(v5, a2, this);
          break;
        case 55:
          v5 = (LogicBillingPackagesData *)operator new(120);
          LogicResourcePackData::LogicResourcePackData(v5, a2, this);
          break;
        case 56:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicData::LogicData((__int64)v5, (__int64)a2, this);
          break;
        case 57:
          v5 = (LogicBillingPackagesData *)operator new(136);
          LogicRegionData::LogicRegionData(v5, a2, this);
          break;
        case 58:
          v5 = (LogicBillingPackagesData *)operator new(104);
          LogicNewsData::LogicNewsData(v5, a2, this);
          break;
        case 59:
          v5 = (LogicBillingPackagesData *)operator new(112);
          LogicAllianceRoleData::LogicAllianceRoleData(v5, a2, this);
          break;
        case 60:
          v5 = (LogicBillingPackagesData *)operator new(128);
          LogicAchievementData::LogicAchievementData((__int64)v5, (__int64)a2, (__int64)this);
          break;
        case 61:
          v5 = (LogicBillingPackagesData *)operator new(184);
          LogicHintData::LogicHintData(v5, a2, this);
          break;
        default:
          String::valueOf(v8, v4, (int)a2);
          operator+(&v9, "Invalid data table id: ", v8);
          Debugger::error((Debugger *)&v9, v6);
          return result;
      }
      return v5;
    }

    __int64 __fastcall LogicDataTable::getItemCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 20);
    }

    AreaEffectObject *__fastcall LogicDataTable::addItem(ResetAccountMessage *a1, const #1223 *a2, int a3)
    {
      AreaEffectObject *Item; // x19
      __int64 (__fastcall *v7)(ResetAccountMessage *, __int64); // x22
      __int64 Name; // x0
      __int64 v9; // x0
      #1224 *Table; // x0
      String *FileName; // x0
      const String *v12; // x1
      String v14; // [xsp+8h] [xbp-58h] BYREF
      __int64 v15[3]; // [xsp+20h] [xbp-40h] BYREF
      AreaEffectObject *v16; // [xsp+38h] [xbp-28h] BYREF
    
      Item = LogicDataTable::createItem(a1, a2);
      v16 = Item;
      LogicData::setCSVRow((__int64)Item, (__int64)a2, a3);
      v7 = *(__int64 (__fastcall **)(ResetAccountMessage *, __int64))(*(_QWORD *)a1 + 56LL);
      Name = LogicData::getName(Item);
      if ( v7(a1, Name) )
      {
        v9 = LogicData::getName(Item);
        operator+(v9, " more than once in ");
        Table = (#1224 *)CSVRow::getTable(a2);
        FileName = (String *)CSVTable::getFileName(Table);
        operator+(v15, &v14, FileName);
        Debugger::error((Debugger *)v15, v12);
      }
      LogicArrayList<LogicData *>::add((char *)a1 + 8, &v16);
      return Item;
    }

    void *__fastcall LogicDataTable::setTable(__int64 a1, #1224 *a2)
    {
      LogicMath *v4; // x21
      int v5; // w2
      void *result; // x0
      __int64 FileName; // x0
      const char *v8; // x1
      _QWORD *v9; // x8
      const String *v10; // x1
      int v11; // w28
      __int64 v12; // x23
      __int64 v13; // x24
      __int64 RowAt; // x25
      __int64 v15; // x0
      __int64 v16; // x26
      __int64 v17; // x0
      int RowOffset; // w27
      int v19; // w2
      #1221 *CSVColumn; // x0
      int Size; // w26
      bool v22; // zf
      int v23; // w25
      const #1223 *v24; // x22
      __int64 v25; // x0
      LogicMath *v26; // x23
      __int64 v27; // x0
      int v28; // w24
      int v29; // w2
      #1221 *v30; // x0
      int v31; // w23
      int RowCount; // [xsp+14h] [xbp-6Ch]
      _BYTE v33[24]; // [xsp+18h] [xbp-68h] BYREF
    
      *(_QWORD *)(a1 + 48) = a2;
      v4 = (LogicMath *)*(unsigned int *)(a1 + 20);
      RowCount = CSVTable::getRowCount(a2);
      result = (void *)LogicMath::min(v4, RowCount, v5);
      if ( (int)v4 > RowCount )
      {
        FileName = CSVTable::getFileName(a2);
        v9 = (_QWORD *)(FileName + 8);
        if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
          v9 = (_QWORD *)*v9;
        String::format((String *)"Row was removed from %s. Unable to continue", v8, v9);
        Debugger::error((Debugger *)v33, v10);
      }
      v11 = (_DWORD)result - 1;
      if ( (int)result >= 1 )
      {
        v12 = 0;
        do
        {
          v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12);
          RowAt = CSVTable::getRowAt(a2, v12);
          v15 = *(_QWORD *)(a1 + 48);
          if ( v12 >= RowCount - 1 )
          {
            CSVColumn = (#1221 *)CSVTable::getCSVColumn(v15, 0);
            Size = CSVColumn::getSize(CSVColumn);
            v19 = Size - CSVRow::getRowOffset(RowAt);
            v16 = v12 + 1;
          }
          else
          {
            v16 = v12 + 1;
            v17 = CSVTable::getRowAt(v15, v12 + 1);
            RowOffset = CSVRow::getRowOffset(v17);
            v19 = RowOffset - CSVRow::getRowOffset(RowAt);
          }
          result = LogicData::setCSVRow(v13, RowAt, v19);
          v22 = (_DWORD)v12 == v11;
          v12 = v16;
        }
        while ( !v22 );
      }
      if ( (int)v4 < RowCount )
      {
        v23 = RowCount - 1;
        do
        {
          v24 = (const #1223 *)CSVTable::getRowAt(a2, v4);
          v25 = *(_QWORD *)(a1 + 48);
          if ( (int)v4 >= v23 )
          {
            v30 = (#1221 *)CSVTable::getCSVColumn(v25, 0);
            v31 = CSVColumn::getSize(v30);
            v29 = v31 - CSVRow::getRowOffset(v24);
            v26 = (LogicMath *)(unsigned int)((_DWORD)v4 + 1);
          }
          else
          {
            v26 = (LogicMath *)(unsigned int)((_DWORD)v4 + 1);
            v27 = CSVTable::getRowAt(v25, v26);
            v28 = CSVRow::getRowOffset(v27);
            v29 = v28 - CSVRow::getRowOffset(v24);
          }
          result = LogicDataTable::addItem((ResetAccountMessage *)a1, v24, v29);
          v22 = (_DWORD)v4 == v23;
          v4 = v26;
        }
        while ( !v22 );
      }
      return result;
    }

    __int64 __fastcall LogicDataTable::getItemAt(__int64 a1, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * a2);
    }

    __int64 __fastcall LogicDataTable::preCreateReferences(__int64 result)
    {
      __int64 v1; // x19
      int v2; // w21
      __int64 v3; // x22
      __int64 v4; // x20
    
      v1 = result;
      v2 = *(_DWORD *)(result + 20);
      if ( v2 >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * v3);
          LogicData::clearReferencedBoolean(v4);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
          ++v3;
        }
        while ( v2 != (_DWORD)v3 );
      }
      return result;
    }

    __int64 __fastcall LogicDataTable::createReferences(__int64 result)
    {
      __int64 v1; // x19
      int v2; // w20
      __int64 v3; // x21
      __int64 v4; // x0
    
      v1 = result;
      v2 = *(_DWORD *)(result + 20);
      if ( v2 >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * v3);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
          ++v3;
        }
        while ( v2 != (_DWORD)v3 );
      }
      return result;
    }

    __int64 __fastcall LogicDataTable::createReferences2(__int64 result)
    {
      __int64 v1; // x19
      int v2; // w20
      __int64 v3; // x21
      __int64 v4; // x0
    
      v1 = result;
      v2 = *(_DWORD *)(result + 20);
      if ( v2 >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * v3);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
          ++v3;
        }
        while ( v2 != (_DWORD)v3 );
      }
      return result;
    }

    bool __fastcall LogicDataTable::contains(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) != 0;
    }

    AreaEffectObject *__fastcall LogicDataTable::getDataByNameDontCrashIfNotFound(__int64 a1, _DWORD *a2)
    {
      __int64 v4; // x22
      __int64 v5; // x23
      AreaEffectObject *v6; // x21
      __int64 Name; // x0
    
      if ( !*a2 )
        return 0;
      v4 = *(int *)(a1 + 20);
      if ( (int)v4 < 1 )
        return 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = *(AreaEffectObject **)(*(_QWORD *)(a1 + 8) + 8 * v5);
        Name = LogicData::getName(v6);
        if ( (unsigned int)String::equals(Name, a2) )
          break;
        if ( ++v5 >= v4 )
          return 0;
      }
      LogicData::markAsReferenced((__int64)v6);
      return v6;
    }

    __int64 __fastcall LogicDataTable::getDataByName(__int64 a1, _DWORD *a2, AreaEffectObject *a3)
    {
      __int64 v6; // x0
      __int64 v7; // x20
      __int64 v8; // x8
      AreaEffectObject **i; // x9
      AreaEffectObject *v11; // t1
      _QWORD *v12; // x20
      __int64 v13; // x0
      const char *v14; // x1
      _QWORD *v15; // x8
      const String *v16; // x1
      const char *v17; // x1
      _QWORD *v18; // x8
      int v20; // [xsp+14h] [xbp-6Ch]
      _QWORD *v21; // [xsp+18h] [xbp-68h] BYREF
      char v22[24]; // [xsp+28h] [xbp-58h] BYREF
      _BYTE v23[24]; // [xsp+40h] [xbp-40h] BYREF
      AreaEffectObject *v24; // [xsp+58h] [xbp-28h] BYREF
    
      v24 = a3;
      if ( !*a2 )
        return 0;
      v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 56LL))(a1, a2);
      v7 = v6;
      if ( !v6 )
      {
        v12 = a2 + 2;
        if ( a2[1] + 1 > 8 )
          v12 = (_QWORD *)*v12;
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
        v15 = (_QWORD *)(v13 + 8);
        if ( *(_DWORD *)(v13 + 4) + 1 > 8 )
          v15 = (_QWORD *)*v15;
        String::format((String *)"Can't find %s from %s", v14, v12, v15);
        if ( a3 )
        {
          LogicData::getDebuggerName(a3);
          if ( v20 + 1 > 8 )
            v18 = v21;
          else
            v18 = &v21;
          String::format((String *)", needed by %s", v17, v18);
          String::operator+=(v23, v22);
          String::~String();
          String::~String();
        }
        Debugger::error((Debugger *)v23, v16);
      }
      if ( v6 == LogicDataTables::sm_pEditorSearchReferencesData )
      {
        v8 = dword_1004F6E4C;
        for ( i = (AreaEffectObject **)(LogicDataTables::sm_editorSearchReferencesList + 8LL * (dword_1004F6E4C - 1));
              v8-- >= 1;
              --i )
        {
          v11 = *i;
          if ( v11 == a3 )
            return v7;
        }
        LogicArrayList<LogicData const*>::add((__int64)&LogicDataTables::sm_editorSearchReferencesList, (__int64 *)&v24);
      }
      return v7;
    }

    __int64 __fastcall LogicDataTable::getItemById(__int64 a1, SectorCommandMessage *a2)
    {
      __int64 InstanceID; // x19
      __int64 v4; // x0
      __int64 v5; // x20
      __int64 v7; // x0
      const char *v8; // x1
      _QWORD *v9; // x8
      const String *v10; // x1
      char v11; // [xsp+18h] [xbp-38h] BYREF
    
      if ( (_DWORD)a2 )
      {
        InstanceID = GlobalID::getInstanceID(a2);
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
        v5 = v4;
        if ( (InstanceID & 0x80000000) == 0 && (int)InstanceID < (int)v4 )
          return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, InstanceID);
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
        v9 = (_QWORD *)(v7 + 8);
        if ( *(_DWORD *)(v7 + 4) + 1 > 8 )
          v9 = (_QWORD *)*v9;
        String::format(
          (String *)"LogicDataTable::getItemById() - Instance id out of bounds! %d/%d %s",
          v8,
          InstanceID,
          v5,
          v9);
        Debugger::warning((__siginfo *)&v11, v10);
        String::~String();
      }
      return 0;
    }

    __int64 __fastcall LogicDataTable::getCSVTable(ResetAccountMessage *this)
    {
      return *((_QWORD *)this + 6);
    }

    __int64 __fastcall LogicDataTable::isCombinedDataTable(ResetAccountMessage *this)
    {
      return 0;
    }

    __int64 __fastcall LogicDataTable::setUsedInCombinedDataTable(__int64 this)
    {
      *(_BYTE *)(this + 56) = 1;
      return this;
    }

    __int64 __fastcall LogicDataTable::getIndexInTable(ResetAccountMessage *this, const AreaEffectObject *a2)
    {
      __int64 v4; // x21
    
      if ( (*(int (__fastcall **)(ResetAccountMessage *))(*(_QWORD *)this + 32LL))(this) < 1 )
        return 0xFFFFFFFFLL;
      v4 = 0;
      while ( (const AreaEffectObject *)(*(__int64 (__fastcall **)(ResetAccountMessage *, __int64))(*(_QWORD *)this + 40LL))(
                                          this,
                                          v4) != a2 )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (int)v4 >= (*(int (__fastcall **)(ResetAccountMessage *))(*(_QWORD *)this + 32LL))(this) )
          return 0xFFFFFFFFLL;
      }
      return v4;
    }

    // attributes: thunk
    void __fastcall LogicDataTable::~LogicDataTable(ResetAccountMessage *this)
    {
      __ZN14LogicDataTableD2Ev(this);
    }

    void __fastcall LogicDataTable::~LogicDataTable(ResetAccountMessage *a1)
    {
      LogicDataTable::~LogicDataTable(a1);
      operator delete(a1);
    }

}; // end class LogicDataTable
