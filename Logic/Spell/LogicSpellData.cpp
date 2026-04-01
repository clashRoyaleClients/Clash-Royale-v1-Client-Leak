class LogicSpellData
{
public:

    void __fastcall LogicSpellData::LogicSpellData(LogicSpellData *this, const #1223 *a2, const ResetAccountMessage *a3)
    {
      LogicData::LogicData(this, a2, a3);
      *(_QWORD *)this = off_100465970;
      memset((char *)this + 104, 0, 0x7Cu);
    }

    void *__fastcall LogicSpellData::destruct(InitState *this)
    {
      LogicData::destruct(this);
      return memset((char *)this + 104, 0, 0x7Cu);
    }

    void __fastcall LogicSpellData::createReferences(InitState **this)
    {
      InitState *Table; // x0
      const #1224 *v3; // x1
      int IntegerValueAt; // w0
      int v5; // w2
      LogicDataTables *Value; // x0
      const LogicData *v7; // x2
      __int64 Name; // x0
      const char *v9; // x1
      _QWORD *v10; // x8
      const String *v11; // x1
      LogicDataTables *ValueAt; // x0
      const LogicData *v13; // x2
      InitState *RarityByName; // x0
      __int64 v15; // x0
      const char *v16; // x1
      _QWORD *v17; // x8
      const String *v18; // x1
      LogicKickAllianceMemberCommand *v19; // x0
      const AreaEffectObject *v20; // x2
      __int64 DamageTypeByName; // x0
      LogicKickAllianceMemberCommand *v22; // x0
      const AreaEffectObject *v23; // x2
      LogicDataTables *v24; // x0
      const LogicData *v25; // x2
      BattleResultMessage *CharacterBuffByName; // x0
      const String *v27; // x1
      int v28; // w20
      const String *v29; // x1
      String *v30; // x0
      int v31; // w20
      const String *v32; // x1
      LogicDataTables *v33; // x0
      const LogicData *v34; // x2
      LogicDataTables *v35; // x0
      const LogicData *v36; // x2
      __int64 v37; // x20
      LogicDataTables *v38; // x0
      const LogicData *v39; // x2
      LogicKickAllianceMemberCommand *v40; // x0
      const AreaEffectObject *v41; // x2
      LogicKickAllianceMemberCommand *v42; // x0
      const AreaEffectObject *v43; // x2
      LogicDataTables *v44; // x0
      const LogicData *v45; // x2
      bool v46; // w4
      bool v47; // w4
      bool v48; // w4
      bool v49; // w4
      bool v50; // w4
      bool v51; // w4
      bool v52; // w4
      bool v53; // w4
      LogicDataTables *v54; // x0
      int v55; // w20
      const String *v56; // x1
      String v57; // [xsp+8h] [xbp-1D8h] BYREF
      String v58; // [xsp+20h] [xbp-1C0h] BYREF
      String v59; // [xsp+38h] [xbp-1A8h] BYREF
      String v60; // [xsp+50h] [xbp-190h] BYREF
      String v61; // [xsp+68h] [xbp-178h] BYREF
      String v62; // [xsp+80h] [xbp-160h] BYREF
      String v63; // [xsp+98h] [xbp-148h] BYREF
      String v64; // [xsp+B0h] [xbp-130h] BYREF
      String v65; // [xsp+C8h] [xbp-118h] BYREF
      String v66; // [xsp+E0h] [xbp-100h] BYREF
      String v67; // [xsp+F8h] [xbp-E8h] BYREF
      String v68; // [xsp+110h] [xbp-D0h] BYREF
      String v69; // [xsp+128h] [xbp-B8h] BYREF
      __siginfo v70; // [xsp+140h] [xbp-A0h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)this);
      if ( !(unsigned int)CSVRow::getRowOffset(*(this + 1)) )
      {
        Table = (InitState *)CSVRow::getTable(*(this + 1));
        LogicSpellData::resetStatics(Table, v3);
      }
      *((_DWORD *)this + 49) = LogicData::getIntegerValueAt(
                                 (AreaEffectObject *)this,
                                 LogicSpellData::sm_columnIndexBuffNumber);
      IntegerValueAt = LogicData::getIntegerValueAt((AreaEffectObject *)this, LogicSpellData::sm_columnIndexSummonNumber);
      *((_DWORD *)this + 50) = LogicMath::max((LogicMath *)1, IntegerValueAt, v5);
      *((_DWORD *)this + 51) = LogicData::getIntegerValueAt(
                                 (AreaEffectObject *)this,
                                 LogicSpellData::sm_columnIndexPushback);
      *((_DWORD *)this + 52) = LogicData::getIntegerValueAt((AreaEffectObject *)this, LogicSpellData::sm_columnIndexRadius);
      *((_DWORD *)this + 53) = LogicData::getIntegerValueAt(
                                 (AreaEffectObject *)this,
                                 LogicSpellData::sm_columnIndexMultipleProjectiles);
      *((_BYTE *)this + 216) = LogicData::getBooleanValueAt(
                                 (AreaEffectObject *)this,
                                 LogicSpellData::sm_columnIndexOnlyOwnTroops);
      *((_BYTE *)this + 217) = LogicData::getBooleanValueAt(
                                 (AreaEffectObject *)this,
                                 LogicSpellData::sm_columnIndexOnlyEnemies);
      *((_BYTE *)this + 218) = LogicData::getBooleanValueAt(
                                 (AreaEffectObject *)this,
                                 LogicSpellData::sm_columnIndexNotInUse);
      *((_DWORD *)this + 48) = LogicData::getIntegerValueAt(
                                 (AreaEffectObject *)this,
                                 LogicSpellData::sm_columnIndexManaCost);
      *((_BYTE *)this + 219) = LogicData::getBooleanValueAt((AreaEffectObject *)this, LogicSpellData::sm_columnIndexMirror);
      String::String((String *)&v70.__pad[3], "UnlockArena");
      Value = (LogicDataTables *)LogicData::getValue(this, &v70.__pad[3]);
      *(this + 23) = (InitState *)LogicDataTables::getArenaByName(Value, (const String *)this, v7);
      String::~String((String *)&v70.__pad[3]);
      if ( !*(this + 23) )
      {
        Name = LogicData::getName((AreaEffectObject *)this);
        v10 = (_QWORD *)(Name + 8);
        if ( *(_DWORD *)(Name + 4) + 1 > 8 )
          v10 = (_QWORD *)*v10;
        String::format((String *)"UnlockArena not defined for spell %s", v9, v10);
        Debugger::error((Debugger *)v70.__pad, v11);
      }
      ValueAt = (LogicDataTables *)CSVRow::getValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexRarity);
      RarityByName = (InitState *)LogicDataTables::getRarityByName(ValueAt, (const String *)this, v13);
      *(this + 13) = RarityByName;
      if ( !RarityByName )
      {
        v15 = LogicData::getName((AreaEffectObject *)this);
        v17 = (_QWORD *)(v15 + 8);
        if ( *(_DWORD *)(v15 + 4) + 1 > 8 )
          v17 = (_QWORD *)*v17;
        String::format((String *)"Spell %s rarity is NULL", v16, v17);
        Debugger::warning((__siginfo *)&v70.si_addr, v18);
        String::~String((String *)&v70.si_addr);
      }
      v19 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(this + 1),
                                                (unsigned int)LogicSpellData::sm_columnIndexDamageType);
      DamageTypeByName = LogicDataTables::getDamageTypeByName(v19, (const String *)this, v20);
      *(this + 14) = (InitState *)DamageTypeByName;
      if ( !DamageTypeByName )
        *(this + 14) = (InitState *)LogicDataTables::getPhysicalDamageType(0);
      v22 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(this + 1),
                                                (unsigned int)LogicSpellData::sm_columnIndexSummonCharacter);
      *(this + 15) = (InitState *)LogicDataTables::getCharacterByName(v22, (const String *)this, v23);
      v24 = (LogicDataTables *)CSVRow::getValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexBuffType);
      CharacterBuffByName = (BattleResultMessage *)LogicDataTables::getCharacterBuffByName(v24, (const String *)this, v25);
      *(this + 16) = CharacterBuffByName;
      if ( CharacterBuffByName )
      {
        if ( !LogicCharacterBuffData::getMarkEffect(CharacterBuffByName) )
        {
          LogicData::getDebuggerName((__int64 *)&v67.m_length, *(this + 16));
          operator+(&v68, "No MarkEffect in buff ", &v67);
          operator+(&v68, ", used by spell ");
          LogicData::getDebuggerName((__int64 *)&v66.m_length, (AreaEffectObject *)this);
          operator+((__int64 *)&v70.si_signo, &v69, &v66);
          Debugger::warning(&v70, v27);
          String::~String((String *)&v70);
          String::~String(&v66);
          String::~String(&v69);
          String::~String(&v68);
          String::~String(&v67);
        }
        v28 = CSVRow::getIntegerValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexBuffTime);
        CSVRow::getIntegerValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexBuffTimeIncreasePerLevel);
        if ( !v28 )
        {
          LogicData::getDebuggerName((__int64 *)&v63.m_length, (AreaEffectObject *)this);
          operator+(&v64, "There is buff in spell ", &v63);
          operator+(&v64, ", but no buff time");
          Debugger::warning((__siginfo *)&v65, v29);
          String::~String(&v65);
          String::~String(&v64);
          v30 = &v63;
    LABEL_20:
          String::~String(v30);
        }
      }
      else
      {
        v31 = CSVRow::getIntegerValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexBuffTime);
        CSVRow::getIntegerValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexBuffTimeIncreasePerLevel);
        if ( v31 )
        {
          LogicData::getDebuggerName((__int64 *)&v60.m_length, (AreaEffectObject *)this);
          operator+(&v61, "No buff in spell ", &v60);
          operator+(&v61, ", but there is buff time");
          Debugger::warning((__siginfo *)&v62, v32);
          String::~String(&v62);
          String::~String(&v61);
          v30 = &v60;
          goto LABEL_20;
        }
      }
      v33 = (LogicDataTables *)CSVRow::getValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexBuffOnDamage);
      *(this + 17) = (InitState *)LogicDataTables::getCharacterBuffByName(v33, (const String *)this, v34);
      v35 = (LogicDataTables *)CSVRow::getValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexProjectile);
      *(this + 18) = (InitState *)LogicDataTables::getProjectileByName(v35, (const String *)this, v36);
      v37 = (__int64)*(this + 1);
      String::String(&v59, "CustomFirstProjectile");
      v38 = (LogicDataTables *)CSVRow::getValue(v37, &v59, 0);
      *(this + 19) = (InitState *)LogicDataTables::getProjectileByName(v38, (const String *)this, v39);
      String::~String(&v59);
      v40 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(this + 1),
                                                (unsigned int)LogicSpellData::sm_columnIndexCastSound);
      *(this + 20) = (InitState *)LogicDataTables::getSoundByName(v40, (const String *)this, v41);
      v42 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(this + 1),
                                                (unsigned int)LogicSpellData::sm_columnIndexEffect);
      *(this + 21) = (InitState *)LogicDataTables::getEffectByName(v42, (const String *)this, v43);
      v44 = (LogicDataTables *)CSVRow::getValueAt(*(this + 1), (unsigned int)LogicSpellData::sm_columnIndexAreaEffectObject);
      *(this + 22) = (InitState *)LogicDataTables::getAreaEffectObjectByName(v44, (const String *)this, v45);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexSummonNumber,
        1,
        1,
        v46);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexRadius,
        1,
        1,
        v47);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexInstantDamage,
        1,
        1,
        v48);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexDurationSeconds,
        1,
        1,
        v49);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexPushback,
        1,
        1,
        v50);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexMultipleProjectiles,
        1,
        1,
        v51);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexBuffTime,
        1,
        1,
        v52);
      v54 = (LogicDataTables *)LogicSpellData::validateScaledValue(
                                 *(this + 1),
                                 (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexBuffNumber,
                                 1,
                                 1,
                                 v53);
      v55 = *((_DWORD *)this + 48);
      if ( v55 < 1 || v55 > *(_DWORD *)(LogicDataTables::getGlobals(v54) + 148LL) )
      {
        LogicData::getDebuggerName((__int64 *)&v57.m_length, (AreaEffectObject *)this);
        operator+(&v58, "Invalid mana cost in ", &v57);
        Debugger::warning((__siginfo *)&v58, v56);
        String::~String(&v58);
        String::~String(&v57);
      }
    }

    __n128 __fastcall LogicSpellData::resetStatics(InitState *this, const #1224 *a2)
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
      _BOOL8 v55; // x0
      const char *v56; // x2
      String v58; // [xsp+8h] [xbp-2A8h] BYREF
      String v59; // [xsp+20h] [xbp-290h] BYREF
      String v60; // [xsp+38h] [xbp-278h] BYREF
      String v61; // [xsp+50h] [xbp-260h] BYREF
      String v62; // [xsp+68h] [xbp-248h] BYREF
      String v63; // [xsp+80h] [xbp-230h] BYREF
      String v64; // [xsp+98h] [xbp-218h] BYREF
      String v65; // [xsp+B0h] [xbp-200h] BYREF
      String v66; // [xsp+C8h] [xbp-1E8h] BYREF
      String v67; // [xsp+E0h] [xbp-1D0h] BYREF
      String v68; // [xsp+F8h] [xbp-1B8h] BYREF
      String v69; // [xsp+110h] [xbp-1A0h] BYREF
      String v70; // [xsp+128h] [xbp-188h] BYREF
      String v71; // [xsp+140h] [xbp-170h] BYREF
      String v72; // [xsp+158h] [xbp-158h] BYREF
      String v73; // [xsp+170h] [xbp-140h] BYREF
      String v74; // [xsp+188h] [xbp-128h] BYREF
      String v75; // [xsp+1A0h] [xbp-110h] BYREF
      String v76; // [xsp+1B8h] [xbp-F8h] BYREF
      String v77; // [xsp+1D0h] [xbp-E0h] BYREF
      String v78; // [xsp+1E8h] [xbp-C8h] BYREF
      String v79; // [xsp+200h] [xbp-B0h] BYREF
      String v80; // [xsp+218h] [xbp-98h] BYREF
      String v81; // [xsp+230h] [xbp-80h] BYREF
      String v82; // [xsp+248h] [xbp-68h] BYREF
      String v83; // [xsp+260h] [xbp-50h] BYREF
      String v84; // [xsp+278h] [xbp-38h] BYREF
    
      String::String(&v84, "NotInUse");
      LogicSpellData::sm_columnIndexNotInUse = CSVTable::getColumnIndexByName(this, &v84);
      String::~String(&v84);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexNotInUse) == 2;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v83, "Rarity");
      LogicSpellData::sm_columnIndexRarity = CSVTable::getColumnIndexByName(this, &v83);
      String::~String(&v83);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexRarity) == 0;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v82, "ManaCost");
      LogicSpellData::sm_columnIndexManaCost = CSVTable::getColumnIndexByName(this, &v82);
      String::~String(&v82);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexManaCost) == 1;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v81, "SummonCharacter");
      LogicSpellData::sm_columnIndexSummonCharacter = CSVTable::getColumnIndexByName(this, &v81);
      String::~String(&v81);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexSummonCharacter) == 0;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v80, "SummonNumber");
      LogicSpellData::sm_columnIndexSummonNumber = CSVTable::getColumnIndexByName(this, &v80);
      String::~String(&v80);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexSummonNumber) == 1;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v79, "Radius");
      LogicSpellData::sm_columnIndexRadius = CSVTable::getColumnIndexByName(this, &v79);
      String::~String(&v79);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexRadius) == 1;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v78, "InstantDamage");
      LogicSpellData::sm_columnIndexInstantDamage = CSVTable::getColumnIndexByName(this, &v78);
      String::~String(&v78);
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexInstantDamage) == 1;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v77, "DurationSeconds");
      LogicSpellData::sm_columnIndexDurationSeconds = CSVTable::getColumnIndexByName(this, &v77);
      String::~String(&v77);
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexDurationSeconds) == 1;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v76, "InstantHeal");
      LogicSpellData::sm_columnIndexInstantHeal = CSVTable::getColumnIndexByName(this, &v76);
      String::~String(&v76);
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexInstantHeal) == 1;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v75, "Effect");
      LogicSpellData::sm_columnIndexEffect = CSVTable::getColumnIndexByName(this, &v75);
      String::~String(&v75);
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexEffect) == 0;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v74, "DamageType");
      LogicSpellData::sm_columnIndexDamageType = CSVTable::getColumnIndexByName(this, &v74);
      String::~String(&v74);
      v23 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexDamageType) == 0;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v73, "Pushback");
      LogicSpellData::sm_columnIndexPushback = CSVTable::getColumnIndexByName(this, &v73);
      String::~String(&v73);
      v25 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexPushback) == 1;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v72, "MultipleProjectiles");
      LogicSpellData::sm_columnIndexMultipleProjectiles = CSVTable::getColumnIndexByName(this, &v72);
      String::~String(&v72);
      v27 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexMultipleProjectiles) == 1;
      Debugger::doAssert((Debugger *)v27, (bool)"", v28);
      String::String(&v71, "BuffTime");
      LogicSpellData::sm_columnIndexBuffTime = CSVTable::getColumnIndexByName(this, &v71);
      String::~String(&v71);
      v29 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexBuffTime) == 1;
      Debugger::doAssert((Debugger *)v29, (bool)"", v30);
      String::String(&v70, "BuffTimeIncreasePerLevel");
      LogicSpellData::sm_columnIndexBuffTimeIncreasePerLevel = CSVTable::getColumnIndexByName(this, &v70);
      String::~String(&v70);
      v31 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexBuffTimeIncreasePerLevel) == 1;
      Debugger::doAssert((Debugger *)v31, (bool)"", v32);
      String::String(&v69, "BuffNumber");
      LogicSpellData::sm_columnIndexBuffNumber = CSVTable::getColumnIndexByName(this, &v69);
      String::~String(&v69);
      v33 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexBuffNumber) == 1;
      Debugger::doAssert((Debugger *)v33, (bool)"", v34);
      String::String(&v68, "OnlyOwnTroops");
      LogicSpellData::sm_columnIndexOnlyOwnTroops = CSVTable::getColumnIndexByName(this, &v68);
      String::~String(&v68);
      v35 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexOnlyOwnTroops) == 2;
      Debugger::doAssert((Debugger *)v35, (bool)"", v36);
      String::String(&v67, "OnlyEnemies");
      LogicSpellData::sm_columnIndexOnlyEnemies = CSVTable::getColumnIndexByName(this, &v67);
      String::~String(&v67);
      v37 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexOnlyEnemies) == 2;
      Debugger::doAssert((Debugger *)v37, (bool)"", v38);
      String::String(&v66, "BuffType");
      LogicSpellData::sm_columnIndexBuffType = CSVTable::getColumnIndexByName(this, &v66);
      String::~String(&v66);
      v39 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexBuffType) == 0;
      Debugger::doAssert((Debugger *)v39, (bool)"", v40);
      String::String(&v65, "BuffOnDamage");
      LogicSpellData::sm_columnIndexBuffOnDamage = CSVTable::getColumnIndexByName(this, &v65);
      String::~String(&v65);
      v41 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexBuffOnDamage) == 0;
      Debugger::doAssert((Debugger *)v41, (bool)"", v42);
      String::String(&v64, "Projectile");
      LogicSpellData::sm_columnIndexProjectile = CSVTable::getColumnIndexByName(this, &v64);
      String::~String(&v64);
      v43 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexProjectile) == 0;
      Debugger::doAssert((Debugger *)v43, (bool)"", v44);
      String::String(&v63, "IconFile");
      LogicSpellData::sm_columnIndexIconFile = CSVTable::getColumnIndexByName(this, &v63);
      String::~String(&v63);
      v45 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexIconFile) == 0;
      Debugger::doAssert((Debugger *)v45, (bool)"", v46);
      String::String(&v62, "CastSound");
      LogicSpellData::sm_columnIndexCastSound = CSVTable::getColumnIndexByName(this, &v62);
      String::~String(&v62);
      v47 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexCastSound) == 0;
      Debugger::doAssert((Debugger *)v47, (bool)"", v48);
      String::String(&v61, "AreaEffectObject");
      LogicSpellData::sm_columnIndexAreaEffectObject = CSVTable::getColumnIndexByName(this, &v61);
      String::~String(&v61);
      v49 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexAreaEffectObject) == 0;
      Debugger::doAssert((Debugger *)v49, (bool)"", v50);
      String::String(&v60, "TID_INFO");
      LogicSpellData::sm_columnIndexInfoTID = CSVTable::getColumnIndexByName(this, &v60);
      String::~String(&v60);
      v51 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexInfoTID) == 0;
      Debugger::doAssert((Debugger *)v51, (bool)"", v52);
      String::String(&v59, "TID_FLAVOR");
      LogicSpellData::sm_columnIndexFlavorTID = CSVTable::getColumnIndexByName(this, &v59);
      String::~String(&v59);
      v53 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexFlavorTID) == 0;
      Debugger::doAssert((Debugger *)v53, (bool)"", v54);
      String::String(&v58, "Mirror");
      LogicSpellData::sm_columnIndexMirror = CSVTable::getColumnIndexByName(this, &v58);
      String::~String(&v58);
      v55 = (unsigned int)CSVTable::getColumnType(this, LogicSpellData::sm_columnIndexMirror) == 2;
      return Debugger::doAssert((Debugger *)v55, (bool)"", v56);
    }

    __int64 __fastcall LogicSpellData::getBuffTime(InitState *this, int a2)
    {
      int IntegerValueAt; // w21
    
      IntegerValueAt = CSVRow::getIntegerValueAt(
                         *((_QWORD *)this + 1),
                         (unsigned int)LogicSpellData::sm_columnIndexBuffTime);
      return IntegerValueAt
           + (unsigned int)CSVRow::getIntegerValueAt(
                             *((_QWORD *)this + 1),
                             (unsigned int)LogicSpellData::sm_columnIndexBuffTimeIncreasePerLevel)
           * a2;
    }

    void __fastcall LogicSpellData::validateScaledValue(InitState *this, const #1223 *a2, char a3, int a4)
    {
      __int64 ArraySizeAt; // x0
      __int64 v9; // x21
      #1224 *Table; // x0
      __int64 FileName; // x0
      _QWORD *v13; // x22
      __int64 Name; // x0
      _QWORD *v15; // x23
      #1224 *v16; // x0
      __int64 ColumnName; // x0
      const char *v18; // x1
      _QWORD *v19; // x8
      const String *v20; // x1
      String *pad; // x0
      int IntegerValueAt; // w22
      __int64 v23; // x23
      int v24; // w0
      __int64 v25; // x23
      int v26; // w0
      #1224 *v27; // x0
      __int64 v28; // x0
      _QWORD *v29; // x21
      __int64 v30; // x0
      _QWORD *v31; // x22
      #1224 *v32; // x0
      __int64 v33; // x0
      const char *v34; // x1
      _QWORD *v35; // x8
      const String *v36; // x1
      #1224 *v37; // x0
      __int64 v38; // x0
      _QWORD *v39; // x21
      __int64 v40; // x0
      _QWORD *v41; // x22
      #1224 *v42; // x0
      __int64 v43; // x0
      const char *v44; // x1
      _QWORD *v45; // x8
      const String *v46; // x1
      __siginfo v47; // [xsp+28h] [xbp-78h] BYREF
    
      ArraySizeAt = CSVRow::getArraySizeAt(this, a2);
      v9 = ArraySizeAt;
      if ( (int)ArraySizeAt >= 3 && (_DWORD)ArraySizeAt != 10 )
      {
        Table = (#1224 *)CSVRow::getTable(this);
        FileName = CSVTable::getFileName(Table);
        v13 = (_QWORD *)(FileName + 8);
        if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
          v13 = (_QWORD *)*v13;
        Name = CSVRow::getName(this);
        v15 = (_QWORD *)(Name + 8);
        if ( *(_DWORD *)(Name + 4) + 1 > 8 )
          v15 = (_QWORD *)*v15;
        v16 = (#1224 *)CSVRow::getTable(this);
        ColumnName = CSVTable::getColumnName(v16, (int)a2);
        v19 = (_QWORD *)(ColumnName + 8);
        if ( *(_DWORD *)(ColumnName + 4) + 1 > 8 )
          v19 = (_QWORD *)*v19;
        String::format((String *)"Illegal array size %d in table %s, row %s, column %s", v18, v9, v13, v15, v19);
        Debugger::warning(&v47, v20);
        pad = (String *)&v47;
    LABEL_12:
        String::~String(pad);
        return;
      }
      if ( a4 )
      {
        IntegerValueAt = CSVRow::getIntegerValueAt(this, a2);
        if ( (a3 & 1) != 0 )
        {
          if ( (int)v9 > 1 )
          {
            v23 = 1;
            while ( 1 )
            {
              v24 = CSVRow::getIntegerValueAt(this, a2, v23);
              if ( v24 < IntegerValueAt )
                break;
              v23 = (unsigned int)(v23 + 1);
              IntegerValueAt = v24;
              if ( (int)v23 >= (int)v9 )
                return;
            }
            v27 = (#1224 *)CSVRow::getTable(this);
            v28 = CSVTable::getFileName(v27);
            v29 = (_QWORD *)(v28 + 8);
            if ( *(_DWORD *)(v28 + 4) + 1 > 8 )
              v29 = (_QWORD *)*v29;
            v30 = CSVRow::getName(this);
            v31 = (_QWORD *)(v30 + 8);
            if ( *(_DWORD *)(v30 + 4) + 1 > 8 )
              v31 = (_QWORD *)*v31;
            v32 = (#1224 *)CSVRow::getTable(this);
            v33 = CSVTable::getColumnName(v32, (int)a2);
            v35 = (_QWORD *)(v33 + 8);
            if ( *(_DWORD *)(v33 + 4) + 1 > 8 )
              v35 = (_QWORD *)*v35;
            String::format((String *)"Values not in ascending order in table %s, row %s, column %s", v34, v29, v31, v35);
            Debugger::warning((__siginfo *)v47.__pad, v36);
            pad = (String *)v47.__pad;
            goto LABEL_12;
          }
        }
        else if ( (int)v9 > 1 )
        {
          v25 = 1;
          while ( 1 )
          {
            v26 = CSVRow::getIntegerValueAt(this, a2, v25);
            if ( v26 > IntegerValueAt )
              break;
            v25 = (unsigned int)(v25 + 1);
            IntegerValueAt = v26;
            if ( (int)v25 >= (int)v9 )
              return;
          }
          v37 = (#1224 *)CSVRow::getTable(this);
          v38 = CSVTable::getFileName(v37);
          v39 = (_QWORD *)(v38 + 8);
          if ( *(_DWORD *)(v38 + 4) + 1 > 8 )
            v39 = (_QWORD *)*v39;
          v40 = CSVRow::getName(this);
          v41 = (_QWORD *)(v40 + 8);
          if ( *(_DWORD *)(v40 + 4) + 1 > 8 )
            v41 = (_QWORD *)*v41;
          v42 = (#1224 *)CSVRow::getTable(this);
          v43 = CSVTable::getColumnName(v42, (int)a2);
          v45 = (_QWORD *)(v43 + 8);
          if ( *(_DWORD *)(v43 + 4) + 1 > 8 )
            v45 = (_QWORD *)*v45;
          String::format((String *)"Values not in descending order in table %s, row %s, column %s", v44, v39, v41, v45);
          Debugger::warning((__siginfo *)&v47.si_addr, v46);
          pad = (String *)&v47.si_addr;
          goto LABEL_12;
        }
      }
    }

    __int64 __fastcall LogicSpellData::getManaCost(InitState *this)
    {
      return *((unsigned int *)this + 48);
    }

    __int64 __fastcall LogicSpellData::getScaledValue(InitState *this, const #1223 *a2, LogicMath *a3, int a4)
    {
      LogicDataTables *ArraySizeAt; // x0
      String *v9; // x23
      int v11; // w8
      int v12; // w8
      int v13; // w22
      #1224 *Table; // x24
      __int64 FileName; // x0
      String *Name; // x0
      String *ColumnName; // x0
      int v18; // w1
      const String *v19; // x1
      int v20; // w2
      __int64 v21; // x0
      String v22; // [xsp+0h] [xbp-100h] BYREF
      String v23; // [xsp+18h] [xbp-E8h] BYREF
      String v24; // [xsp+30h] [xbp-D0h] BYREF
      String v25; // [xsp+48h] [xbp-B8h] BYREF
      String v26; // [xsp+60h] [xbp-A0h] BYREF
      String v27; // [xsp+78h] [xbp-88h] BYREF
      String v28; // [xsp+90h] [xbp-70h] BYREF
      __siginfo var58; // [xsp+A8h] [xbp-58h] BYREF
    
      ArraySizeAt = (LogicDataTables *)CSVRow::getArraySizeAt(this, a2);
      v9 = (String *)ArraySizeAt;
      if ( !(_DWORD)ArraySizeAt )
        return 0;
      if ( (_DWORD)ArraySizeAt == 1 )
      {
        switch ( a4 )
        {
          case 1:
            v11 = *(_DWORD *)(LogicDataTables::getGlobals(ArraySizeAt) + 204LL);
            break;
          case 2:
            v11 = *(_DWORD *)(LogicDataTables::getGlobals(ArraySizeAt) + 208LL);
            break;
          case 3:
            v11 = *(_DWORD *)(LogicDataTables::getGlobals(ArraySizeAt) + 212LL);
            break;
          case 4:
            v11 = *(_DWORD *)(LogicDataTables::getGlobals(ArraySizeAt) + 216LL);
            break;
          case 5:
            v11 = *(_DWORD *)(LogicDataTables::getGlobals(ArraySizeAt) + 220LL);
            break;
          case 6:
            v11 = *(_DWORD *)(LogicDataTables::getGlobals(ArraySizeAt) + 224LL);
            break;
          default:
            v11 = 0;
            break;
        }
        if ( (int)a3 < 1 )
        {
          v13 = 100;
        }
        else
        {
          v12 = v11 + 100;
          v13 = 100;
          do
          {
            if ( v13 >= 100000 )
              v13 = v13 / 100 * v12;
            else
              v13 = v13 * v12 / 100;
            LODWORD(a3) = (_DWORD)a3 - 1;
          }
          while ( (_DWORD)a3 );
        }
        return (unsigned int)((int)(CSVRow::getIntegerValueAt(this, a2) * v13) / 100);
      }
      else if ( (int)ArraySizeAt < 8 )
      {
        Table = (#1224 *)CSVRow::getTable(this);
        FileName = CSVTable::getFileName(Table);
        operator+(&v23, "Invalid array size in ", FileName);
        operator+(&v23, ", ");
        Name = (String *)CSVRow::getName(this);
        operator+((__int64 *)&v25.m_length, &v24, Name);
        operator+(&v25, ", column ");
        ColumnName = (String *)CSVTable::getColumnName(Table, (int)a2);
        operator+((__int64 *)&v27.m_length, &v26, ColumnName);
        operator+(&v27, ": ");
        String::valueOf(&v22, v9, v18);
        operator+((__int64 *)&var58.si_signo, &v28, &v22);
        Debugger::warning(&var58, v19);
        String::~String((String *)&var58);
        String::~String(&v22);
        String::~String(&v28);
        String::~String(&v27);
        String::~String(&v26);
        String::~String(&v25);
        String::~String(&v24);
        String::~String(&v23);
        v21 = LogicMath::min(a3, (int)v9 - 1, v20);
        return CSVRow::getIntegerValueAt(this, a2, v21);
      }
      else
      {
        return CSVRow::getIntegerValueAt(this, a2, a3);
      }
    }

    __int64 __fastcall LogicSpellData::calculateChecksumForLevel(InitState *this, LogicMath *a2)
    {
      int ScaledValue; // w0
      int IntegerValueAt; // w0
      int v6; // w0
      int v7; // w21
      int v8; // w0
      Font *v9; // x0
      int v10; // w0
      __int64 v11; // x0
      int v12; // w0
      __int64 v13; // x0
      int v14; // w0
      __int64 v15; // x0
      int v16; // w0
      BattleResultMessage *v17; // x0
      int v18; // w0
      __int64 v19; // x19
      _BYTE v21[24]; // [xsp+8h] [xbp-38h] BYREF
    
      ChecksumEncoder::ChecksumEncoder((#1226 *)v21);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, *((_DWORD *)this + 50));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, *((_DWORD *)this + 52));
      ScaledValue = LogicSpellData::getScaledValue(
                      *((InitState **)this + 1),
                      (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexInstantDamage,
                      a2,
                      1);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, ScaledValue);
      IntegerValueAt = CSVRow::getIntegerValueAt(
                         *((_QWORD *)this + 1),
                         (unsigned int)LogicSpellData::sm_columnIndexDurationSeconds);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, IntegerValueAt);
      v6 = LogicSpellData::getScaledValue(
             *((InitState **)this + 1),
             (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexInstantHeal,
             a2,
             1);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, v6);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, *((_DWORD *)this + 51));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, *((_DWORD *)this + 53));
      v7 = CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicSpellData::sm_columnIndexBuffTime);
      v8 = CSVRow::getIntegerValueAt(
             *((_QWORD *)this + 1),
             (unsigned int)LogicSpellData::sm_columnIndexBuffTimeIncreasePerLevel);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, v7 + v8 * (_DWORD)a2);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, *((_DWORD *)this + 49));
      if ( *((_BYTE *)this + 219) )
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, (int)a2);
      v9 = (Font *)*((_QWORD *)this + 15);
      if ( v9 )
      {
        v10 = LogicCharacterData::calculateChecksumForLevel(v9, (int)a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, v10);
      }
      v11 = *((_QWORD *)this + 18);
      if ( v11 )
      {
        v12 = LogicProjectileData::calculateChecksumForLevel(v11, a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, v12);
      }
      v13 = *((_QWORD *)this + 19);
      if ( v13 )
      {
        v14 = LogicProjectileData::calculateChecksumForLevel(v13, a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, v14);
      }
      v15 = *((_QWORD *)this + 22);
      if ( v15 )
      {
        v16 = LogicAreaEffectObjectData::calculateChecksumForLevel(v15, a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, v16);
      }
      v17 = (BattleResultMessage *)*((_QWORD *)this + 16);
      if ( v17 )
      {
        v18 = LogicCharacterBuffData::calculateChecksumForLevel(v17, (int)a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v21, v18);
      }
      v19 = ChecksumEncoder::getCheckSum(v21);
      ChecksumEncoder::destruct((ChecksumEncoder *)v21);
      return v19;
    }

    __int64 __fastcall LogicSpellData::getSummonNumber(InitState *this)
    {
      return *((unsigned int *)this + 50);
    }

    __int64 __fastcall LogicSpellData::getRadius(InitState *this)
    {
      return *((unsigned int *)this + 52);
    }

    __int64 __fastcall LogicSpellData::getInstantDamage(InitState **this, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(this + 1),
               (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexInstantDamage,
               a2,
               1);
    }

    __int64 __fastcall LogicSpellData::getInstantHeal(InitState **this, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(this + 1),
               (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexInstantHeal,
               a2,
               1);
    }

    __int64 __fastcall LogicSpellData::getPushback(InitState *this)
    {
      return *((unsigned int *)this + 51);
    }

    __int64 __fastcall LogicSpellData::getMultipleProjectiles(InitState *this)
    {
      return *((unsigned int *)this + 53);
    }

    __int64 __fastcall LogicSpellData::getBuffNumber(InitState *this)
    {
      return *((unsigned int *)this + 49);
    }

    __int64 __fastcall LogicSpellData::isMirror(InitState *this)
    {
      return *((unsigned __int8 *)this + 219);
    }

    __int64 __fastcall LogicSpellData::getSummonCharacter(InitState *this)
    {
      return *((_QWORD *)this + 15);
    }

    __int64 __fastcall LogicSpellData::getProjectile(InitState *this)
    {
      return *((_QWORD *)this + 18);
    }

    __int64 __fastcall LogicSpellData::getCustomFirstProjectile(InitState *this)
    {
      return *((_QWORD *)this + 19);
    }

    __int64 __fastcall LogicSpellData::getAreaEffectObject(InitState *this)
    {
      return *((_QWORD *)this + 22);
    }

    __int64 __fastcall LogicSpellData::getBuffType(InitState *this)
    {
      return *((_QWORD *)this + 16);
    }

    __int64 __fastcall LogicSpellData::isNotInUse(InitState *this)
    {
      return *((unsigned __int8 *)this + 218);
    }

    __int64 __fastcall LogicSpellData::getRarity(InitState *this)
    {
      return *((_QWORD *)this + 13);
    }

    __int64 __fastcall LogicSpellData::getDamageType(InitState *this)
    {
      return *((_QWORD *)this + 14);
    }

    __int64 __fastcall LogicSpellData::getOnlyOwnTroops(InitState *this)
    {
      return *((unsigned __int8 *)this + 216);
    }

    __int64 __fastcall LogicSpellData::getOnlyEnemies(InitState *this)
    {
      return *((unsigned __int8 *)this + 217);
    }

    __int64 __fastcall LogicSpellData::getBuffOnDamage(InitState *this)
    {
      return *((_QWORD *)this + 17);
    }

    __int64 __fastcall LogicSpellData::getIconFileName(InitState *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicSpellData::sm_columnIndexIconFile);
    }

    __int64 __fastcall LogicSpellData::getCastSound(InitState *this)
    {
      return *((_QWORD *)this + 20);
    }

    __int64 __fastcall LogicSpellData::getEffect(InitState *this)
    {
      return *((_QWORD *)this + 21);
    }

    __int64 __fastcall LogicSpellData::isSpellData(InitState *this)
    {
      return 1;
    }

    __int64 __fastcall LogicSpellData::getInfoTID(InitState *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicSpellData::sm_columnIndexInfoTID);
    }

    void *__fastcall LogicSpellData::getTypeTID(InitState *this)
    {
      Font *v2; // x0
    
      if ( (unsigned int)LogicData::getDataType(this) == 27 )
      {
        v2 = (Font *)*((_QWORD *)this + 15);
        if ( v2 && !(unsigned int)LogicCharacterData::getHitpoints(v2, 0) )
          return &CARD_TYPE_TRAP;
        else
          return &CARD_TYPE_BUILDING;
      }
      else if ( (unsigned int)LogicData::getDataType(this) == 26 )
      {
        return &CARD_TYPE_CHARACTER;
      }
      else
      {
        return &CARD_TYPE_SPELL;
      }
    }

    bool __fastcall LogicSpellData::isHealSpell(InitState *this)
    {
      __int64 v2; // x20
      __int64 v3; // x0
    
      v2 = 1;
      if ( (int)LogicSpellData::getScaledValue(
                  *((InitState **)this + 1),
                  (const #1223 *)(unsigned int)LogicSpellData::sm_columnIndexInstantHeal,
                  0,
                  1) <= 0 )
      {
        v3 = *((_QWORD *)this + 22);
        return v3 && (int)LogicAreaEffectObjectData::getHealing(v3, 0) > 0;
      }
      return v2;
    }

    __int64 __fastcall LogicSpellData::getCostInShop(InitState *this, int a2)
    {
      LogicDataTables *v3; // x20
      LogicDataTables *Globals; // x0
      LogicDataTables *RarityEpic; // x0
      LogicDataTables *RarityRare; // x0
      LogicDataTables *RarityCommon; // x0
      const char *v8; // x1
      unsigned int *v9; // x0
      __int64 v10; // x20
      int v11; // w21
      unsigned int *v12; // x0
      unsigned int *v13; // x0
      int v14; // w8
    
      v3 = (LogicDataTables *)*((_QWORD *)this + 13);
      Globals = (LogicDataTables *)LogicDataTables::getGlobals(this);
      RarityEpic = (LogicDataTables *)LogicDataTables::getRarityEpic(Globals);
      if ( v3 == RarityEpic )
      {
        v9 = (unsigned int *)LogicDataTables::getGlobals(RarityEpic);
        v10 = v9[106];
        v11 = *(_DWORD *)(LogicDataTables::getGlobals((LogicDataTables *)v9) + 436LL);
      }
      else
      {
        RarityRare = (LogicDataTables *)LogicDataTables::getRarityRare(RarityEpic);
        if ( v3 == RarityRare )
        {
          v12 = (unsigned int *)LogicDataTables::getGlobals(RarityRare);
          v10 = v12[107];
          v11 = *(_DWORD *)(LogicDataTables::getGlobals((LogicDataTables *)v12) + 440LL);
        }
        else
        {
          RarityCommon = (LogicDataTables *)LogicDataTables::getRarityCommon(RarityRare);
          if ( v3 != RarityCommon )
            Debugger::error((__siginfo *)"unknown rarity", v8);
          v13 = (unsigned int *)LogicDataTables::getGlobals(RarityCommon);
          v10 = v13[108];
          v11 = *(_DWORD *)(LogicDataTables::getGlobals((LogicDataTables *)v13) + 444LL);
        }
      }
      if ( a2 >= 1 )
      {
        v14 = 0;
        while ( (int)v10 <= 500000000 )
        {
          v10 = (unsigned int)(v11 > 100 && ((int)v10 * v11 + 50) / 100 == (_DWORD)v10) + ((int)v10 * v11 + 50) / 100;
          if ( ++v14 >= a2 )
            return v10;
        }
        return 500000000;
      }
      return v10;
    }

    __int64 __fastcall LogicSpellData::calculateEffectRadius(__int64 this)
    {
      __int64 v1; // x19
      int Range; // w20
      __int64 v3; // x21
      __int64 SpawnAreaEffectObject; // x0
      int v5; // w21
      Font *MorphCharacter; // x21
    
      v1 = this;
      Range = *(_DWORD *)(this + 208);
      if ( Range
        || (v3 = *(_QWORD *)(this + 144)) != 0
        && ((this = LogicProjectileData::getRadius(*(_QWORD *)(this + 144)), (Range = this) != 0)
         || (SpawnAreaEffectObject = LogicProjectileData::getSpawnAreaEffectObject(v3)) != 0
         && (this = LogicAreaEffectObjectData::getRadius(SpawnAreaEffectObject), (Range = this) != 0)) )
      {
        v5 = 0;
      }
      else
      {
        MorphCharacter = *(Font **)(v1 + 120);
        if ( !MorphCharacter )
          goto LABEL_12;
        if ( LogicCharacterData::getMorphCharacter(*(Font **)(v1 + 120)) )
          MorphCharacter = (Font *)LogicCharacterData::getMorphCharacter(MorphCharacter);
        if ( !(unsigned int)LogicCharacterData::getSpeed(MorphCharacter) )
        {
          Range = LogicCharacterData::getRange(MorphCharacter);
          this = LogicCharacterData::getMinimumRange(MorphCharacter);
          v5 = this;
          if ( Range )
            goto LABEL_7;
        }
        else
        {
    LABEL_12:
          v5 = 0;
        }
        this = *(_QWORD *)(v1 + 176);
        if ( this )
        {
          this = LogicAreaEffectObjectData::getRadius(this);
          Range = this;
        }
        else
        {
          Range = 0;
        }
      }
    LABEL_7:
      *(_DWORD *)(v1 + 220) = Range;
      *(_DWORD *)(v1 + 224) = v5;
      return this;
    }

    // attributes: thunk
    __int64 __fastcall LogicSpellData::createReferences2(__int64 this)
    {
      return LogicSpellData::calculateEffectRadius(this);
    }

    __int64 __fastcall LogicSpellData::getMaxLevelIndex(LogicGameObjectManagerListener **this)
    {
      return LogicRarityData::getMaxLevelIndex(*(this + 13));
    }

    __int64 __fastcall LogicSpellData::getDonateCapacity(InitState *this)
    {
      return LogicRarityData::getDonateCapacity(*((_QWORD *)this + 13));
    }

    __int64 __fastcall LogicSpellData::getUnlockArena(InitState *this)
    {
      return *((_QWORD *)this + 23);
    }

    bool __fastcall LogicSpellData::isUnlockedInArena(InitState *this, const #1143 *a2)
    {
      int TrophyLimit; // w20
    
      if ( a2 )
      {
        if ( !(unsigned int)LogicArenaData::isTrainingCamp(a2)
          || (unsigned int)LogicArenaData::isTrainingCamp(*((_QWORD *)this + 23)) )
        {
          TrophyLimit = LogicArenaData::getTrophyLimit(a2);
          return TrophyLimit >= (int)LogicArenaData::getTrophyLimit(*((_QWORD *)this + 23));
        }
      }
      else
      {
        Debugger::warning((__siginfo *)"LogicSpellData::isUnlockedInArena called with NULL parameter", 0);
      }
      return 0;
    }

    __int64 __fastcall LogicSpellData::getDonateReward(LogicGameObjectManagerListener **this)
    {
      return LogicRarityData::getDonateReward(*(this + 13));
    }

    __int64 __fastcall LogicSpellData::getDonateXP(LogicGameObjectManagerListener **this)
    {
      return LogicRarityData::getDonateXP(*(this + 13));
    }

    // attributes: thunk
    void __fastcall LogicSpellData::~LogicSpellData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicSpellData::~LogicSpellData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicSpellData
