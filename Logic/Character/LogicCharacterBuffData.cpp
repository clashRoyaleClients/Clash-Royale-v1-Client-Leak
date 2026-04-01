class LogicCharacterBuffData
{
public:

    _QWORD *__fastcall LogicCharacterBuffData::LogicCharacterBuffData(_QWORD *a1)
    {
      LogicData::LogicData();
      *a1 = off_10045E108;
      memset(a1 + 13, 0, 0x68u);
      return a1;
    }

    void *__fastcall LogicCharacterBuffData::destruct(__int64 a1)
    {
      LogicData::destruct((LogicData *)a1);
      *(_DWORD *)(a1 + 124) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      return memset((void *)(a1 + 140), 0, 0x44u);
    }

    __int64 __fastcall LogicCharacterBuffData::createReferences(__int64 a1)
    {
      BattleResultMessage *Table; // x0
      const #1224 *v3; // x1
      #1004 *ValueAt; // x0
      const #916 *v5; // x2
      __int64 DamageTypeByName; // x0
      int IntegerValueAt; // w0
      __int64 ArraySizeAt; // x21
      __int64 v9; // x22
      LogicDataTables *v10; // x0
      const LogicData *v11; // x2
      const char *v12; // x2
      __int64 v13; // x21
      __int64 v14; // x22
      LogicDataTables *v15; // x0
      const LogicData *v16; // x2
      const char *v17; // x2
      #1004 *v18; // x0
      const #916 *v19; // x2
      bool v20; // w4
      bool v21; // w4
      bool v22; // w4
      bool v23; // w4
      bool v24; // w4
      bool v25; // w4
      bool v26; // w4
      bool v27; // w4
      #1004 *v28; // x0
      const #916 *v29; // x2
      __int64 result; // x0
      String v31; // [xsp+8h] [xbp-78h] BYREF
      __int64 v32; // [xsp+20h] [xbp-60h] BYREF
      __int64 CharacterBuffByName; // [xsp+28h] [xbp-58h] BYREF
    
      LogicData::createReferences((#916 *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (BattleResultMessage *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicCharacterBuffData::resetStatics(Table, v3);
      }
      ValueAt = (#1004 *)CSVRow::getValueAt(
                           *(_QWORD *)(a1 + 8),
                           (unsigned int)LogicCharacterBuffData::sm_columnIndexDamageType);
      DamageTypeByName = LogicDataTables::getDamageTypeByName(ValueAt, (const String *)a1, v5);
      *(_QWORD *)(a1 + 104) = DamageTypeByName;
      if ( !DamageTypeByName )
        *(_QWORD *)(a1 + 104) = LogicDataTables::getPhysicalDamageType(0);
      *(_BYTE *)(a1 + 200) = LogicData::getBooleanValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexInvisible);
      *(_BYTE *)(a1 + 201) = LogicData::getBooleanValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexRemoveOnAttack);
      *(_BYTE *)(a1 + 202) = LogicData::getBooleanValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexRemoveOnHeal);
      *(_DWORD *)(a1 + 168) = LogicData::getIntegerValueAt(
                                (#916 *)a1,
                                LogicCharacterBuffData::sm_columnIndexTimeToEmptyBankedDamage);
      *(_DWORD *)(a1 + 172) = LogicData::getIntegerValueAt(
                                (#916 *)a1,
                                LogicCharacterBuffData::sm_columnIndexDamageReduction);
      *(_DWORD *)(a1 + 176) = LogicData::getIntegerValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexHealReduction);
      *(_DWORD *)(a1 + 180) = LogicData::getIntegerValueAt(
                                (#916 *)a1,
                                LogicCharacterBuffData::sm_columnIndexHitSpeedMultiplier);
      *(_DWORD *)(a1 + 184) = LogicData::getIntegerValueAt(
                                (#916 *)a1,
                                LogicCharacterBuffData::sm_columnIndexSpeedMultiplier);
      *(_DWORD *)(a1 + 196) = LogicData::getIntegerValueAt(
                                (#916 *)a1,
                                LogicCharacterBuffData::sm_columnIndexSpawnSpeedMultiplier);
      if ( (unsigned int)CSVRow::getArraySizeAt(
                           *(_QWORD *)(a1 + 8),
                           (unsigned int)LogicCharacterBuffData::sm_columnIndexSizeMultiplier) )
        IntegerValueAt = LogicData::getIntegerValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexSizeMultiplier);
      else
        IntegerValueAt = 100;
      *(_DWORD *)(a1 + 188) = IntegerValueAt;
      *(_DWORD *)(a1 + 192) = LogicData::getIntegerValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexHitsToDestroy);
      *(_DWORD *)(a1 + 124) = 0;
      ArraySizeAt = CSVRow::getArraySizeAt(
                      *(_QWORD *)(a1 + 8),
                      (unsigned int)LogicCharacterBuffData::sm_columnIndexNegatesBuffs);
      LogicArrayList<LogicCharacterBuffData const*>::ensureCapacity(a1 + 112, ArraySizeAt);
      if ( (int)ArraySizeAt >= 1 )
      {
        v9 = 0;
        do
        {
          v10 = (LogicDataTables *)LogicData::getValueAt(
                                     a1,
                                     (unsigned int)LogicCharacterBuffData::sm_columnIndexNegatesBuffs,
                                     v9);
          CharacterBuffByName = LogicDataTables::getCharacterBuffByName(v10, (const String *)a1, v11);
          Debugger::doAssert((Debugger *)(CharacterBuffByName != 0), (bool)"", v12);
          LogicArrayList<LogicCharacterBuffData const*>::add(a1 + 112, &CharacterBuffByName);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (_DWORD)ArraySizeAt != (_DWORD)v9 );
      }
      *(_DWORD *)(a1 + 140) = 0;
      v13 = CSVRow::getArraySizeAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicCharacterBuffData::sm_columnIndexImmunityToBuffs);
      LogicArrayList<LogicCharacterBuffData const*>::ensureCapacity(a1 + 128, v13);
      if ( (int)v13 >= 1 )
      {
        v14 = 0;
        do
        {
          v15 = (LogicDataTables *)LogicData::getValueAt(
                                     a1,
                                     (unsigned int)LogicCharacterBuffData::sm_columnIndexImmunityToBuffs,
                                     v14);
          v32 = LogicDataTables::getCharacterBuffByName(v15, (const String *)a1, v16);
          Debugger::doAssert((Debugger *)(v32 != 0), (bool)"", v17);
          LogicArrayList<LogicCharacterBuffData const*>::add(a1 + 128, &v32);
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (_DWORD)v13 != (_DWORD)v14 );
      }
      v18 = (#1004 *)CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicCharacterBuffData::sm_columnIndexEffect);
      *(_QWORD *)(a1 + 144) = LogicDataTables::getEffectByName(v18, (const String *)a1, v19);
      LogicSpellData::validateScaledValue(
        *(#895 **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexDamagePerSecond,
        1,
        1,
        v20);
      LogicSpellData::validateScaledValue(
        *(#895 **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexDamageReduction,
        1,
        1,
        v21);
      LogicSpellData::validateScaledValue(
        *(#895 **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexHealReduction,
        1,
        1,
        v22);
      LogicSpellData::validateScaledValue(
        *(#895 **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexHitsToDestroy,
        1,
        1,
        v23);
      LogicSpellData::validateScaledValue(
        *(#895 **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexHitSpeedMultiplier,
        1,
        0,
        v24);
      LogicSpellData::validateScaledValue(
        *(#895 **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexSpeedMultiplier,
        1,
        0,
        v25);
      LogicSpellData::validateScaledValue(
        *(#895 **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexDamageMultiplier,
        1,
        0,
        v26);
      LogicSpellData::validateScaledValue(
        *(#895 **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexSizeMultiplier,
        1,
        0,
        v27);
      String::String(&v31, "StaticTarget");
      *(_BYTE *)(a1 + 204) = LogicData::getBooleanValue(a1, &v31);
      String::~String(&v31);
      v28 = (#1004 *)CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicCharacterBuffData::sm_columnIndexMarkEffect);
      *(_QWORD *)(a1 + 152) = LogicDataTables::getEffectByName(v28, (const String *)a1, v29);
      *(_BYTE *)(a1 + 205) = LogicData::getBooleanValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexPanic);
      *(_BYTE *)(a1 + 206) = LogicData::getBooleanValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexChangeControl);
      *(_BYTE *)(a1 + 207) = LogicData::getBooleanValueAt(
                               (#916 *)a1,
                               LogicCharacterBuffData::sm_columnIndexImmuneToAntiMagic);
      *(_DWORD *)(a1 + 160) = LogicData::getIntegerValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexDisableRadius);
      *(_DWORD *)(a1 + 164) = LogicData::getIntegerValueAt(
                                (#916 *)a1,
                                LogicCharacterBuffData::sm_columnIndexDisabledCooldown);
      result = LogicData::getBooleanValueAt((#916 *)a1, LogicCharacterBuffData::sm_columnIndexIgnorePushBack);
      *(_BYTE *)(a1 + 203) = result;
      return result;
    }

    __int64 __fastcall LogicCharacterBuffData::resetStatics(BattleResultMessage *this, const #1224 *a2)
    {
      _BOOL8 v3; // x0
      const char *v4; // x2
      _BOOL8 v5; // x0
      const char *v6; // x2
      _BOOL8 v7; // x0
      const char *v8; // x2
      _BOOL8 v9; // x0
      const char *v10; // x2
      _BOOL8 v11; // x0
      const char *v12; // x2
      _BOOL8 v13; // x0
      const char *v14; // x2
      _BOOL8 v15; // x0
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
      _BOOL8 v29; // x0
      const char *v30; // x2
      _BOOL8 v31; // x0
      const char *v32; // x2
      _BOOL8 v33; // x0
      const char *v34; // x2
      _BOOL8 v35; // x0
      const char *v36; // x2
      _BOOL8 v37; // x0
      const char *v38; // x2
      _BOOL8 v39; // x0
      const char *v40; // x2
      _BOOL8 v41; // x0
      const char *v42; // x2
      _BOOL8 v43; // x0
      const char *v44; // x2
      _BOOL8 v45; // x0
      const char *v46; // x2
      _BOOL8 v47; // x0
      const char *v48; // x2
      _BOOL8 v49; // x0
      const char *v50; // x2
      _BOOL8 v51; // x0
      const char *v52; // x2
      _BOOL8 v53; // x0
      const char *v54; // x2
      String v56; // [xsp+0h] [xbp-290h] BYREF
      String v57; // [xsp+18h] [xbp-278h] BYREF
      String v58; // [xsp+30h] [xbp-260h] BYREF
      String v59; // [xsp+48h] [xbp-248h] BYREF
      String v60; // [xsp+60h] [xbp-230h] BYREF
      String v61; // [xsp+78h] [xbp-218h] BYREF
      String v62; // [xsp+90h] [xbp-200h] BYREF
      String v63; // [xsp+A8h] [xbp-1E8h] BYREF
      String v64; // [xsp+C0h] [xbp-1D0h] BYREF
      String v65; // [xsp+D8h] [xbp-1B8h] BYREF
      String v66; // [xsp+F0h] [xbp-1A0h] BYREF
      String v67; // [xsp+108h] [xbp-188h] BYREF
      String v68; // [xsp+120h] [xbp-170h] BYREF
      String v69; // [xsp+138h] [xbp-158h] BYREF
      String v70; // [xsp+150h] [xbp-140h] BYREF
      String v71; // [xsp+168h] [xbp-128h] BYREF
      String v72; // [xsp+180h] [xbp-110h] BYREF
      String v73; // [xsp+198h] [xbp-F8h] BYREF
      String v74; // [xsp+1B0h] [xbp-E0h] BYREF
      String v75; // [xsp+1C8h] [xbp-C8h] BYREF
      String v76; // [xsp+1E0h] [xbp-B0h] BYREF
      String v77; // [xsp+1F8h] [xbp-98h] BYREF
      String v78; // [xsp+210h] [xbp-80h] BYREF
      String v79; // [xsp+228h] [xbp-68h] BYREF
      String v80; // [xsp+240h] [xbp-50h] BYREF
      String v81; // [xsp+258h] [xbp-38h] BYREF
    
      String::String(&v81, "ChangeControl");
      LogicCharacterBuffData::sm_columnIndexChangeControl = CSVTable::getColumnIndexByName(this, &v81);
      String::~String(&v81);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexChangeControl) == 2;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v80, "DamagePerSecond");
      LogicCharacterBuffData::sm_columnIndexDamagePerSecond = CSVTable::getColumnIndexByName(this, &v80);
      String::~String(&v80);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexDamagePerSecond) == 1;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v79, "DamageType");
      LogicCharacterBuffData::sm_columnIndexDamageType = CSVTable::getColumnIndexByName(this, &v79);
      String::~String(&v79);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexDamageType) == 0;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v78, "DamageReduction");
      LogicCharacterBuffData::sm_columnIndexDamageReduction = CSVTable::getColumnIndexByName(this, &v78);
      String::~String(&v78);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexDamageReduction) == 1;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v77, "HealReduction");
      LogicCharacterBuffData::sm_columnIndexHealReduction = CSVTable::getColumnIndexByName(this, &v77);
      String::~String(&v77);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexHealReduction) == 1;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v76, "ImmuneToAntiMagic");
      LogicCharacterBuffData::sm_columnIndexImmuneToAntiMagic = CSVTable::getColumnIndexByName(this, &v76);
      String::~String(&v76);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexImmuneToAntiMagic) == 2;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v75, "HitSpeedMultiplier");
      LogicCharacterBuffData::sm_columnIndexHitSpeedMultiplier = CSVTable::getColumnIndexByName(this, &v75);
      String::~String(&v75);
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexHitSpeedMultiplier) == 1;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v74, "SpeedMultiplier");
      LogicCharacterBuffData::sm_columnIndexSpeedMultiplier = CSVTable::getColumnIndexByName(this, &v74);
      String::~String(&v74);
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexSpeedMultiplier) == 1;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v73, "SpawnSpeedMultiplier");
      LogicCharacterBuffData::sm_columnIndexSpawnSpeedMultiplier = CSVTable::getColumnIndexByName(this, &v73);
      String::~String(&v73);
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexSpawnSpeedMultiplier) == 1;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v72, "NegatesBuffs");
      LogicCharacterBuffData::sm_columnIndexNegatesBuffs = CSVTable::getColumnIndexByName(this, &v72);
      String::~String(&v72);
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexNegatesBuffs) == 0;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v71, "ImmunityToBuffs");
      LogicCharacterBuffData::sm_columnIndexImmunityToBuffs = CSVTable::getColumnIndexByName(this, &v71);
      String::~String(&v71);
      v23 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexImmunityToBuffs) == 0;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v70, "Invisible");
      LogicCharacterBuffData::sm_columnIndexInvisible = CSVTable::getColumnIndexByName(this, &v70);
      String::~String(&v70);
      v25 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexInvisible) == 2;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v69, "RemoveOnAttack");
      LogicCharacterBuffData::sm_columnIndexRemoveOnAttack = CSVTable::getColumnIndexByName(this, &v69);
      String::~String(&v69);
      v27 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexRemoveOnAttack) == 2;
      Debugger::doAssert((Debugger *)v27, (bool)"", v28);
      String::String(&v68, "TimeToEmptyBankedDamage");
      LogicCharacterBuffData::sm_columnIndexTimeToEmptyBankedDamage = CSVTable::getColumnIndexByName(this, &v68);
      String::~String(&v68);
      v29 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexTimeToEmptyBankedDamage) == 1;
      Debugger::doAssert((Debugger *)v29, (bool)"", v30);
      String::String(&v67, "RemoveOnHeal");
      LogicCharacterBuffData::sm_columnIndexRemoveOnHeal = CSVTable::getColumnIndexByName(this, &v67);
      String::~String(&v67);
      v31 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexRemoveOnHeal) == 2;
      Debugger::doAssert((Debugger *)v31, (bool)"", v32);
      String::String(&v66, "DamageMultiplier");
      LogicCharacterBuffData::sm_columnIndexDamageMultiplier = CSVTable::getColumnIndexByName(this, &v66);
      String::~String(&v66);
      v33 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexDamageMultiplier) == 1;
      Debugger::doAssert((Debugger *)v33, (bool)"", v34);
      String::String(&v65, "Panic");
      LogicCharacterBuffData::sm_columnIndexPanic = CSVTable::getColumnIndexByName(this, &v65);
      String::~String(&v65);
      v35 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexPanic) == 2;
      Debugger::doAssert((Debugger *)v35, (bool)"", v36);
      String::String(&v64, "Effect");
      LogicCharacterBuffData::sm_columnIndexEffect = CSVTable::getColumnIndexByName(this, &v64);
      String::~String(&v64);
      v37 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexEffect) == 0;
      Debugger::doAssert((Debugger *)v37, (bool)"", v38);
      String::String(&v63, "FilterFile");
      LogicCharacterBuffData::sm_columnIndexFilterFile = CSVTable::getColumnIndexByName(this, &v63);
      String::~String(&v63);
      v39 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexFilterFile) == 0;
      Debugger::doAssert((Debugger *)v39, (bool)"", v40);
      String::String(&v62, "FilterExportName");
      LogicCharacterBuffData::sm_columnIndexFilterExportName = CSVTable::getColumnIndexByName(this, &v62);
      String::~String(&v62);
      v41 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexFilterExportName) == 0;
      Debugger::doAssert((Debugger *)v41, (bool)"", v42);
      String::String(&v61, "SizeMultiplier");
      LogicCharacterBuffData::sm_columnIndexSizeMultiplier = CSVTable::getColumnIndexByName(this, &v61);
      String::~String(&v61);
      v43 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexSizeMultiplier) == 1;
      Debugger::doAssert((Debugger *)v43, (bool)"", v44);
      String::String(&v60, "HitsToDestroy");
      LogicCharacterBuffData::sm_columnIndexHitsToDestroy = CSVTable::getColumnIndexByName(this, &v60);
      String::~String(&v60);
      v45 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexHitsToDestroy) == 1;
      Debugger::doAssert((Debugger *)v45, (bool)"", v46);
      String::String(&v59, "DisableRadius");
      LogicCharacterBuffData::sm_columnIndexDisableRadius = CSVTable::getColumnIndexByName(this, &v59);
      String::~String(&v59);
      v47 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexDisableRadius) == 1;
      Debugger::doAssert((Debugger *)v47, (bool)"", v48);
      String::String(&v58, "DisabledCooldown");
      LogicCharacterBuffData::sm_columnIndexDisabledCooldown = CSVTable::getColumnIndexByName(this, &v58);
      String::~String(&v58);
      v49 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexDisabledCooldown) == 1;
      Debugger::doAssert((Debugger *)v49, (bool)"", v50);
      String::String(&v57, "IgnorePushBack");
      LogicCharacterBuffData::sm_columnIndexIgnorePushBack = CSVTable::getColumnIndexByName(this, &v57);
      String::~String(&v57);
      v51 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexIgnorePushBack) == 2;
      Debugger::doAssert((Debugger *)v51, (bool)"", v52);
      String::String(&v56, "MarkEffect");
      LogicCharacterBuffData::sm_columnIndexMarkEffect = CSVTable::getColumnIndexByName(this, &v56);
      String::~String(&v56);
      v53 = (unsigned int)CSVTable::getColumnType(this, LogicCharacterBuffData::sm_columnIndexMarkEffect) == 0;
      return Debugger::doAssert((Debugger *)v53, (bool)"", v54);
    }

    __int64 __fastcall LogicCharacterBuffData::calculateChecksumForLevel(BattleResultMessage *this, int a2)
    {
      int v4; // w4
      int ScaledValue; // w0
      int v6; // w4
      int v7; // w0
      _BYTE v9[24]; // [xsp+8h] [xbp-28h] BYREF
    
      ChecksumEncoder::ChecksumEncoder((#1226 *)v9);
      ScaledValue = LogicSpellData::getScaledValue(
                      *((#895 **)this + 1),
                      (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexDamagePerSecond,
                      a2,
                      1,
                      v4);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, ScaledValue);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, *((_DWORD *)this + 43));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, *((_DWORD *)this + 44));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, *((_DWORD *)this + 45));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, *((_DWORD *)this + 46));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, *((_DWORD *)this + 47));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, *((_DWORD *)this + 48));
      v7 = LogicSpellData::getScaledValue(
             *((#895 **)this + 1),
             (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexDamageMultiplier,
             a2,
             1,
             v6);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, v7);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v9, *((_DWORD *)this + 49));
      return ChecksumEncoder::getCheckSum(v9);
    }

    __int64 __fastcall LogicCharacterBuffData::getDamagePerSecond(#895 **this, int a2, __int64 a3, __int64 a4, int a5)
    {
      return LogicSpellData::getScaledValue(
               *(this + 1),
               (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexDamagePerSecond,
               a2,
               1,
               a5);
    }

    __int64 __fastcall LogicCharacterBuffData::getDamageReduction(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 43);
    }

    __int64 __fastcall LogicCharacterBuffData::getHealReduction(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 44);
    }

    __int64 __fastcall LogicCharacterBuffData::getHitSpeedMultiplier(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 45);
    }

    __int64 __fastcall LogicCharacterBuffData::getSpeedMultiplier(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 46);
    }

    __int64 __fastcall LogicCharacterBuffData::getSizeMultiplier(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 47);
    }

    __int64 __fastcall LogicCharacterBuffData::getHitsToDestroy(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 48);
    }

    __int64 __fastcall LogicCharacterBuffData::getDamageMultiplier(#895 **this, int a2, __int64 a3, __int64 a4, int a5)
    {
      return LogicSpellData::getScaledValue(
               *(this + 1),
               (const #1223 *)(unsigned int)LogicCharacterBuffData::sm_columnIndexDamageMultiplier,
               a2,
               1,
               a5);
    }

    __int64 __fastcall LogicCharacterBuffData::getSpawnSpeedMultiplier(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 49);
    }

    __int64 __fastcall LogicCharacterBuffData::getChangeControl(BattleResultMessage *this)
    {
      return *((unsigned __int8 *)this + 206);
    }

    __int64 __fastcall LogicCharacterBuffData::getDamageType(BattleResultMessage *this)
    {
      return *((_QWORD *)this + 13);
    }

    bool __fastcall LogicCharacterBuffData::isDamageTypeSpecified(BattleResultMessage *this)
    {
      return *(_DWORD *)CSVRow::getValueAt(
                          *((_QWORD *)this + 1),
                          (unsigned int)LogicCharacterBuffData::sm_columnIndexDamageType) != 0;
    }

    __int64 __fastcall LogicCharacterBuffData::getInvisible(BattleResultMessage *this)
    {
      return *((unsigned __int8 *)this + 200);
    }

    __int64 __fastcall LogicCharacterBuffData::getTimeToEmptyBankedDamage(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 42);
    }

    __int64 __fastcall LogicCharacterBuffData::negatesBuff(BattleResultMessage *this, const BattleResultMessage *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      int v7; // w0
    
      v4 = *((int *)this + 31);
      v5 = 8LL * ((int)v4 - 1);
      while ( v4-- >= 1 )
      {
        v7 = LogicData::equals(*(_QWORD *)(*((_QWORD *)this + 14) + v5), a2);
        v5 -= 8;
        if ( v7 )
          return 1;
      }
      return 0;
    }

    __int64 __fastcall LogicCharacterBuffData::immuneToBuff(BattleResultMessage *this, const BattleResultMessage *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      int v7; // w0
    
      v4 = *((int *)this + 35);
      v5 = 8LL * ((int)v4 - 1);
      while ( v4-- >= 1 )
      {
        v7 = LogicData::equals(*(_QWORD *)(*((_QWORD *)this + 16) + v5), a2);
        v5 -= 8;
        if ( v7 )
          return 1;
      }
      return 0;
    }

    __int64 __fastcall LogicCharacterBuffData::getPanic(BattleResultMessage *this)
    {
      return *((unsigned __int8 *)this + 205);
    }

    __int64 __fastcall LogicCharacterBuffData::getEffect(BattleResultMessage *this)
    {
      return *((_QWORD *)this + 18);
    }

    __int64 __fastcall LogicCharacterBuffData::getFilterFile(BattleResultMessage *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicCharacterBuffData::sm_columnIndexFilterFile);
    }

    __int64 __fastcall LogicCharacterBuffData::getFilterExportName(BattleResultMessage *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicCharacterBuffData::sm_columnIndexFilterExportName);
    }

    __int64 __fastcall LogicCharacterBuffData::getDisableRadius(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 40);
    }

    __int64 __fastcall LogicCharacterBuffData::getDisabledCooldown(BattleResultMessage *this)
    {
      return *((unsigned int *)this + 41);
    }

    __int64 __fastcall LogicCharacterBuffData::ignorePushBack(BattleResultMessage *this)
    {
      return *((unsigned __int8 *)this + 203);
    }

    __int64 __fastcall LogicCharacterBuffData::getMarkEffect(BattleResultMessage *this)
    {
      return *((_QWORD *)this + 19);
    }

    // attributes: thunk
    void __fastcall LogicCharacterBuffData::~LogicCharacterBuffData(BattleResultMessage *this)
    {
      __ZN22LogicCharacterBuffDataD2Ev(this);
    }

    void __fastcall LogicCharacterBuffData::~LogicCharacterBuffData(BattleResultMessage *this)
    {
      LogicCharacterBuffData::~LogicCharacterBuffData(this);
      operator delete(this);
    }

    void __fastcall LogicCharacterBuffData::~LogicCharacterBuffData(BattleResultMessage *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)this = off_10045E108;
      v3 = (_QWORD *)((char *)this + 128);
      v2 = *((_QWORD *)this + 16);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = *((_QWORD *)this + 14);
      if ( v4 )
        operator delete[](v4);
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      LogicData::~LogicData((String *)this);
    }

}; // end class LogicCharacterBuffData
