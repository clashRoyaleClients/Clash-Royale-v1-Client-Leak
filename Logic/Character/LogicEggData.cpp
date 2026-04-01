class LogicEggData
{
public:

    __int64 __fastcall LogicEggData::LogicEggData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      __int64 result; // x0
    
      result = LogicData::LogicData(a1, a2, a3);
      *(_QWORD *)(result + 124) = 0;
      *(_QWORD *)(result + 116) = 0;
      *(_QWORD *)(result + 108) = 0;
      *(_QWORD *)result = off_10046F480;
      *(_QWORD *)(result + 100) = 0;
      *(_WORD *)(result + 160) = 0;
      *(_QWORD *)(result + 144) = 0;
      *(_QWORD *)(result + 152) = 0;
      *(_QWORD *)(result + 136) = 0;
      return result;
    }

    __int64 __fastcall LogicEggData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(a1);
      *(_QWORD *)(a1 + 124) = 0;
      *(_QWORD *)(a1 + 116) = 0;
      *(_QWORD *)(a1 + 108) = 0;
      *(_QWORD *)(a1 + 100) = 0;
      *(_WORD *)(a1 + 160) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      return result;
    }

    __int64 __fastcall LogicEggData::createReferences(__int64 a1)
    {
      LogicEggData *Table; // x0
      const CSVTable *v3; // x1
      __int64 ValueAt; // x0
      LogicKickAllianceMemberCommand *v5; // x0
      const AreaEffectObject *v6; // x2
      LogicKickAllianceMemberCommand *v7; // x0
      const AreaEffectObject *v8; // x2
      const char *v9; // x2
      const char *v10; // x2
      const char *v11; // x2
      const char *v12; // x2
      const char *v13; // x2
      const char *v14; // x2
      const char *v15; // x2
      __int64 result; // x0
      String v17; // [xsp+8h] [xbp-58h] BYREF
      String v18; // [xsp+20h] [xbp-40h] BYREF
      String v19; // [xsp+38h] [xbp-28h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (LogicEggData *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicEggData::resetStatics(Table, v3);
      }
      ValueAt = CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicEggData::sm_columnIndexCharacterStartingBuff);
      *(_QWORD *)(a1 + 136) = LogicDataTables::getCharacterBuffByName(ValueAt, a1);
      String::String(&v19, "Homespawn");
      *(_BYTE *)(a1 + 160) = LogicData::getBooleanValue(a1, (__int64)&v19);
      String::~String();
      String::String(&v18, "IgnoreAggro");
      *(_BYTE *)(a1 + 161) = LogicData::getBooleanValue(a1, (__int64)&v18);
      String::~String();
      String::String(&v17, "CollisionRadius");
      *(_DWORD *)(a1 + 100) = LogicData::getIntegerValue(a1, (__int64)&v17);
      String::~String();
      v5 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                               *(_QWORD *)(a1 + 8),
                                               (unsigned int)LogicEggData::sm_columnIndexEffect);
      *(_QWORD *)(a1 + 144) = LogicDataTables::getEffectByName(v5, (const String *)a1, v6);
      v7 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                               *(_QWORD *)(a1 + 8),
                                               (unsigned int)LogicEggData::sm_columnIndexDeathEffect);
      *(_QWORD *)(a1 + 152) = LogicDataTables::getEffectByName(v7, (const String *)a1, v8);
      *(_DWORD *)(a1 + 104) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicEggData::sm_columnIndexHatchDuration,
                                v9);
      *(_DWORD *)(a1 + 108) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicEggData::sm_columnIndexHitpoints,
                                v10);
      *(_DWORD *)(a1 + 112) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicEggData::sm_columnIndexCharacterStartingBuffTime,
                                v11);
      *(_DWORD *)(a1 + 116) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicEggData::sm_columnIndexShadowScale,
                                v12);
      *(_DWORD *)(a1 + 120) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicEggData::sm_columnIndexShadowX,
                                v13);
      *(_DWORD *)(a1 + 124) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicEggData::sm_columnIndexShadowY,
                                v14);
      result = LogicData::getIntegerValueAt(
                 (AreaEffectObject *)a1,
                 (unsigned int)LogicEggData::sm_columnIndexShadowSkew,
                 v15);
      *(_DWORD *)(a1 + 128) = result;
      return result;
    }

    __n128 __fastcall LogicEggData::resetStatics(#1224 *a1)
    {
      _BOOL8 v2; // x0
      const char *v3; // x2
      _BOOL8 v4; // x0
      const char *v5; // x2
      _BOOL8 v6; // x0
      const char *v7; // x2
      _BOOL8 v8; // x0
      const char *v9; // x2
      _BOOL8 v10; // x0
      const char *v11; // x2
      const char *v12; // x2
      _BOOL8 v13; // x0
      const char *v14; // x2
      const char *v15; // x2
      const char *v16; // x2
      _BOOL8 v17; // x0
      const char *v18; // x2
      _BOOL8 v19; // x0
      const char *v20; // x2
      _BOOL8 v21; // x0
      const char *v22; // x2
      _BOOL8 v23; // x0
      const char *v24; // x2
      _BOOL8 v25; // x0
      const char *v26; // x2
      _BOOL8 v27; // x0
      const char *v28; // x2
      String v30; // [xsp+8h] [xbp-188h] BYREF
      String v31; // [xsp+20h] [xbp-170h] BYREF
      String v32; // [xsp+38h] [xbp-158h] BYREF
      String v33; // [xsp+50h] [xbp-140h] BYREF
      String v34; // [xsp+68h] [xbp-128h] BYREF
      String v35; // [xsp+80h] [xbp-110h] BYREF
      String v36; // [xsp+98h] [xbp-F8h] BYREF
      String v37; // [xsp+B0h] [xbp-E0h] BYREF
      String v38; // [xsp+C8h] [xbp-C8h] BYREF
      String v39; // [xsp+E0h] [xbp-B0h] BYREF
      String v40; // [xsp+F8h] [xbp-98h] BYREF
      String v41; // [xsp+110h] [xbp-80h] BYREF
      String v42; // [xsp+128h] [xbp-68h] BYREF
      String v43; // [xsp+140h] [xbp-50h] BYREF
      String v44; // [xsp+158h] [xbp-38h] BYREF
    
      String::String(&v44, "FileName");
      LogicEggData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(a1, &v44);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v43, "BlueExportName");
      LogicEggData::sm_columnIndexBlueExportName = CSVTable::getColumnIndexByName(a1, &v43);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexBlueExportName) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v42, "RedExportName");
      LogicEggData::sm_columnIndexRedExportName = CSVTable::getColumnIndexByName(a1, &v42);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexRedExportName) == 0;
      Debugger::doAssert((Debugger *)v6, (bool)"", v7);
      String::String(&v41, "HatchDuration");
      LogicEggData::sm_columnIndexHatchDuration = CSVTable::getColumnIndexByName(a1, &v41);
      String::~String();
      v8 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexHatchDuration) == 1;
      Debugger::doAssert((Debugger *)v8, (bool)"", v9);
      String::String(&v40, "Hitpoints");
      LogicEggData::sm_columnIndexHitpoints = CSVTable::getColumnIndexByName(a1, &v40);
      String::~String();
      v10 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexHitpoints) == 1;
      Debugger::doAssert((Debugger *)v10, (bool)"", v11);
      String::String(&v39, "CharacterStartingBuff");
      LogicEggData::sm_columnIndexCharacterStartingBuff = CSVTable::getColumnIndexByName(a1, &v39);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicEggData::sm_columnIndexCharacterStartingBuff != -1), (bool)"", v12);
      String::String(&v38, "CharacterStartingBuffTime");
      LogicEggData::sm_columnIndexCharacterStartingBuffTime = CSVTable::getColumnIndexByName(a1, &v38);
      String::~String();
      v13 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexCharacterStartingBuffTime) == 1;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v37, "RedTopExportName");
      LogicEggData::sm_columnIndexRedTopExportName = CSVTable::getColumnIndexByName(a1, &v37);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicEggData::sm_columnIndexRedTopExportName != -1), (bool)"", v15);
      String::String(&v36, "BlueTopExportName");
      LogicEggData::sm_columnIndexBlueTopExportName = CSVTable::getColumnIndexByName(a1, &v36);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicEggData::sm_columnIndexBlueTopExportName != -1), (bool)"", v16);
      String::String(&v35, "Effect");
      LogicEggData::sm_columnIndexEffect = CSVTable::getColumnIndexByName(a1, &v35);
      String::~String();
      v17 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexEffect) == 0;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v34, "DeathEffect");
      LogicEggData::sm_columnIndexDeathEffect = CSVTable::getColumnIndexByName(a1, &v34);
      String::~String();
      v19 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexDeathEffect) == 0;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v33, "ShadowScale");
      LogicEggData::sm_columnIndexShadowScale = CSVTable::getColumnIndexByName(a1, &v33);
      String::~String();
      v21 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexShadowScale) == 1;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v32, "ShadowX");
      LogicEggData::sm_columnIndexShadowX = CSVTable::getColumnIndexByName(a1, &v32);
      String::~String();
      v23 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexShadowX) == 1;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v31, "ShadowY");
      LogicEggData::sm_columnIndexShadowY = CSVTable::getColumnIndexByName(a1, &v31);
      String::~String();
      v25 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexShadowY) == 1;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v30, "ShadowSkew");
      LogicEggData::sm_columnIndexShadowSkew = CSVTable::getColumnIndexByName(a1, &v30);
      String::~String();
      v27 = (unsigned int)CSVTable::getColumnType(a1, LogicEggData::sm_columnIndexShadowSkew) == 1;
      return Debugger::doAssert((Debugger *)v27, (bool)"", v28);
    }

    __int64 __fastcall LogicEggData::getFileName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicEggData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicEggData::getBlueExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicEggData::sm_columnIndexBlueExportName);
    }

    __int64 __fastcall LogicEggData::getRedExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicEggData::sm_columnIndexRedExportName);
    }

    __int64 __fastcall LogicEggData::getHatchDuration(Character *this)
    {
      return *((unsigned int *)this + 26);
    }

    __int64 __fastcall LogicEggData::getCharacterStartingBuff(Character *this)
    {
      return *((_QWORD *)this + 17);
    }

    __int64 __fastcall LogicEggData::getCharacterStartingBuffTime(Character *this)
    {
      return *((unsigned int *)this + 28);
    }

    __int64 __fastcall LogicEggData::getCollisionRadius(Character *this)
    {
      return *((unsigned int *)this + 25);
    }

    __int64 __fastcall LogicEggData::getBlueTopExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicEggData::sm_columnIndexBlueTopExportName);
    }

    __int64 __fastcall LogicEggData::getRedTopExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicEggData::sm_columnIndexRedTopExportName);
    }

    __int64 __fastcall LogicEggData::getEffect(Character *this)
    {
      return *((_QWORD *)this + 18);
    }

    __int64 __fastcall LogicEggData::getDeathEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 152);
    }

    __int64 __fastcall LogicEggData::getShadowScale(__int64 a1)
    {
      return *(unsigned int *)(a1 + 116);
    }

    __int64 __fastcall LogicEggData::getShadowX(__int64 a1)
    {
      return *(unsigned int *)(a1 + 120);
    }

    __int64 __fastcall LogicEggData::getShadowY(__int64 a1)
    {
      return *(unsigned int *)(a1 + 124);
    }

    __int64 __fastcall LogicEggData::getShadowSkew(__int64 a1)
    {
      return *(unsigned int *)(a1 + 128);
    }

    // attributes: thunk
    void __fastcall LogicEggData::~LogicEggData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicEggData::~LogicEggData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicEggData
