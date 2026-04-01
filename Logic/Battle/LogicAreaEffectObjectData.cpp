class LogicAreaEffectObjectData
{
public:

    __int64 __fastcall LogicAreaEffectObjectData::LogicAreaEffectObjectData(
            __int64 a1,
            __int64 a2,
            ResetAccountMessage *a3)
    {
      __int64 result; // x0
    
      result = LogicData::LogicData(a1, a2, a3);
      *(_DWORD *)(result + 208) = 0;
      *(_QWORD *)(result + 157) = 0;
      *(_QWORD *)(result + 144) = 0;
      *(_QWORD *)(result + 152) = 0;
      *(_QWORD *)(result + 128) = 0;
      *(_QWORD *)(result + 136) = 0;
      *(_QWORD *)(result + 120) = 0;
      *(_QWORD *)result = off_100470918;
      *(_QWORD *)(result + 104) = 0;
      *(_QWORD *)(result + 112) = 0;
      *(_QWORD *)(result + 198) = 0;
      *(_QWORD *)(result + 184) = 0;
      *(_QWORD *)(result + 192) = 0;
      *(_QWORD *)(result + 168) = 0;
      *(_QWORD *)(result + 176) = 0;
      return result;
    }

    __int64 __fastcall LogicAreaEffectObjectData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(a1);
      *(_DWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 157) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 198) = 0;
      *(_QWORD *)(a1 + 184) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 176) = 0;
      return result;
    }

    void __fastcall LogicAreaEffectObjectData::createReferences(__int64 a1)
    {
      const char *v2; // x2
      LogicAreaEffectObjectData *Table; // x0
      const CSVTable *v4; // x1
      const char *v5; // x2
      LogicKickAllianceMemberCommand *ValueAt; // x0
      const AreaEffectObject *v7; // x2
      __int64 DamageTypeByName; // x0
      LogicKickAllianceMemberCommand *v9; // x0
      const AreaEffectObject *v10; // x2
      LogicKickAllianceMemberCommand *v11; // x0
      const AreaEffectObject *v12; // x2
      LogicKickAllianceMemberCommand *v13; // x0
      const AreaEffectObject *v14; // x2
      __int64 v15; // x0
      __int64 ProjectileByName; // x0
      __int64 Name; // x0
      const char *v19; // x1
      _QWORD *v20; // x8
      const String *v21; // x1
      LogicKickAllianceMemberCommand *v22; // x0
      const AreaEffectObject *v23; // x2
      __int64 v24; // x0
      const char *v25; // x2
      const char *v26; // x2
      const char *v27; // x2
      const char *v28; // x2
      const char *v29; // x2
      const String *v30; // x1
      _BYTE v31[24]; // [xsp+8h] [xbp-118h] BYREF
      _QWORD v32[3]; // [xsp+20h] [xbp-100h] BYREF
      String v33; // [xsp+38h] [xbp-E8h] BYREF
      String v34; // [xsp+50h] [xbp-D0h] BYREF
      String v35; // [xsp+68h] [xbp-B8h] BYREF
      String v36; // [xsp+80h] [xbp-A0h] BYREF
      String v37; // [xsp+98h] [xbp-88h] BYREF
      String v38; // [xsp+B0h] [xbp-70h] BYREF
      String v39; // [xsp+C8h] [xbp-58h] BYREF
      String v40; // [xsp+E0h] [xbp-40h] BYREF
      char v41; // [xsp+F8h] [xbp-28h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (LogicAreaEffectObjectData *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicAreaEffectObjectData::resetStatics(Table, v4);
      }
      *(_DWORD *)(a1 + 200) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexProjectileStartHeight,
                                v2);
      *(_BYTE *)(a1 + 204) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicAreaEffectObjectData::sm_columnIndexOnlyEnemies,
                               v5);
      ValueAt = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                    *(_QWORD *)(a1 + 8),
                                                    (unsigned int)LogicAreaEffectObjectData::sm_columnIndexDamageType);
      DamageTypeByName = LogicDataTables::getDamageTypeByName(ValueAt, (const String *)a1, v7);
      *(_QWORD *)(a1 + 104) = DamageTypeByName;
      if ( !DamageTypeByName )
        *(_QWORD *)(a1 + 104) = LogicDataTables::getPhysicalDamageType();
      v9 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                               *(_QWORD *)(a1 + 8),
                                               (unsigned int)LogicAreaEffectObjectData::sm_columnIndexLoopingEffect);
      *(_QWORD *)(a1 + 112) = LogicDataTables::getEffectByName(v9, (const String *)a1, v10);
      v11 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(_QWORD *)(a1 + 8),
                                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexScaledEffect);
      *(_QWORD *)(a1 + 120) = LogicDataTables::getEffectByName(v11, (const String *)a1, v12);
      v13 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(_QWORD *)(a1 + 8),
                                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexOneShotEffect);
      *(_QWORD *)(a1 + 128) = LogicDataTables::getEffectByName(v13, (const String *)a1, v14);
      v15 = CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicAreaEffectObjectData::sm_columnIndexProjectile);
      ProjectileByName = LogicDataTables::getProjectileByName(v15, a1);
      *(_QWORD *)(a1 + 152) = ProjectileByName;
      if ( !*(_QWORD *)(a1 + 112) && !*(_QWORD *)(a1 + 120) && !ProjectileByName && *(_QWORD *)(a1 + 128) == 0 )
      {
        Name = LogicData::getName((AreaEffectObject *)a1);
        v20 = (_QWORD *)(Name + 8);
        if ( *(_DWORD *)(Name + 4) + 1 > 8 )
          v20 = (_QWORD *)*v20;
        String::format((String *)"%s has no effect", v19, v20);
        Debugger::warning((__siginfo *)&v41, v21);
        String::~String();
      }
      v22 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(_QWORD *)(a1 + 8),
                                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexHitEffect);
      *(_QWORD *)(a1 + 136) = LogicDataTables::getEffectByName(v22, (const String *)a1, v23);
      v24 = CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicAreaEffectObjectData::sm_columnIndexBuff);
      *(_QWORD *)(a1 + 144) = LogicDataTables::getCharacterBuffByName(v24, a1);
      String::String(&v40, "OnlyOwnTroops");
      *(_BYTE *)(a1 + 205) = LogicData::getBooleanValue(a1, (__int64)&v40);
      String::~String();
      *(_DWORD *)(a1 + 168) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexLifeDuration,
                                v25);
      String::String(&v39, "LifeDurationIncreasePerLevel");
      *(_DWORD *)(a1 + 172) = LogicData::getIntegerValue(a1, (__int64)&v39);
      String::~String();
      *(_DWORD *)(a1 + 176) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexRadius,
                                v26);
      String::String(&v38, "ProjectilesToCenter");
      *(_BYTE *)(a1 + 164) = LogicData::getBooleanValue(a1, (__int64)&v38);
      String::~String();
      *(_DWORD *)(a1 + 180) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexPushback,
                                v27);
      *(_DWORD *)(a1 + 184) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexMaximumTargets,
                                v28);
      *(_DWORD *)(a1 + 188) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicAreaEffectObjectData::sm_columnIndexHitSpeed,
                                v29);
      String::String(&v37, "HitsAir");
      *(_BYTE *)(a1 + 162) = LogicData::getBooleanValue(a1, (__int64)&v37);
      String::~String();
      String::String(&v36, "HitsGround");
      *(_BYTE *)(a1 + 163) = LogicData::getBooleanValue(a1, (__int64)&v36);
      String::~String();
      String::String(&v35, "HitBiggestTargets");
      *(_BYTE *)(a1 + 161) = LogicData::getBooleanValue(a1, (__int64)&v35);
      String::~String();
      String::String(&v34, "ReducedTowerDamage");
      *(_BYTE *)(a1 + 160) = LogicData::getBooleanValue(a1, (__int64)&v34);
      String::~String();
      if ( !*(_BYTE *)(a1 + 162) && !*(_BYTE *)(a1 + 163) )
        *(_BYTE *)(a1 + 163) = 1;
      String::String(&v33, "BuffTimeIncreasePerLevel");
      *(_DWORD *)(a1 + 208) = LogicData::getIntegerValue(a1, (__int64)&v33);
      String::~String();
      if ( *(int *)(a1 + 168) <= 0 )
      {
        LogicData::getDebuggerName((AreaEffectObject *)a1);
        operator+(v32, "Life duration needs to be > 0, ", v31);
        Debugger::warning((__siginfo *)v32, v30);
        String::~String();
        String::~String();
      }
    }

    __n128 __fastcall LogicAreaEffectObjectData::resetStatics(#1224 *a1)
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
      _BOOL8 v12; // x0
      const char *v13; // x2
      _BOOL8 v14; // x0
      const char *v15; // x2
      _BOOL8 v16; // x0
      const char *v17; // x2
      _BOOL8 v18; // x0
      const char *v19; // x2
      _BOOL8 v20; // x0
      const char *v21; // x2
      _BOOL8 v22; // x0
      const char *v23; // x2
      _BOOL8 v24; // x0
      const char *v25; // x2
      _BOOL8 v26; // x0
      const char *v27; // x2
      _BOOL8 v28; // x0
      const char *v29; // x2
      _BOOL8 v30; // x0
      const char *v31; // x2
      _BOOL8 v32; // x0
      const char *v33; // x2
      _BOOL8 v34; // x0
      const char *v35; // x2
      String v37; // [xsp+8h] [xbp-1B8h] BYREF
      String v38; // [xsp+20h] [xbp-1A0h] BYREF
      String v39; // [xsp+38h] [xbp-188h] BYREF
      String v40; // [xsp+50h] [xbp-170h] BYREF
      String v41; // [xsp+68h] [xbp-158h] BYREF
      String v42; // [xsp+80h] [xbp-140h] BYREF
      String v43; // [xsp+98h] [xbp-128h] BYREF
      String v44; // [xsp+B0h] [xbp-110h] BYREF
      String v45; // [xsp+C8h] [xbp-F8h] BYREF
      String v46; // [xsp+E0h] [xbp-E0h] BYREF
      String v47; // [xsp+F8h] [xbp-C8h] BYREF
      String v48; // [xsp+110h] [xbp-B0h] BYREF
      String v49; // [xsp+128h] [xbp-98h] BYREF
      String v50; // [xsp+140h] [xbp-80h] BYREF
      String v51; // [xsp+158h] [xbp-68h] BYREF
      String v52; // [xsp+170h] [xbp-50h] BYREF
      String v53; // [xsp+188h] [xbp-38h] BYREF
    
      String::String(&v53, "LifeDuration");
      LogicAreaEffectObjectData::sm_columnIndexLifeDuration = CSVTable::getColumnIndexByName(a1, &v53);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexLifeDuration) == 1;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v52, "Radius");
      LogicAreaEffectObjectData::sm_columnIndexRadius = CSVTable::getColumnIndexByName(a1, &v52);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexRadius) == 1;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v51, "LoopingEffect");
      LogicAreaEffectObjectData::sm_columnIndexLoopingEffect = CSVTable::getColumnIndexByName(a1, &v51);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexLoopingEffect) == 0;
      Debugger::doAssert((Debugger *)v6, (bool)"", v7);
      String::String(&v50, "OneShotEffect");
      LogicAreaEffectObjectData::sm_columnIndexOneShotEffect = CSVTable::getColumnIndexByName(a1, &v50);
      String::~String();
      v8 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexOneShotEffect) == 0;
      Debugger::doAssert((Debugger *)v8, (bool)"", v9);
      String::String(&v49, "ScaledEffect");
      LogicAreaEffectObjectData::sm_columnIndexScaledEffect = CSVTable::getColumnIndexByName(a1, &v49);
      String::~String();
      v10 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexScaledEffect) == 0;
      Debugger::doAssert((Debugger *)v10, (bool)"", v11);
      String::String(&v48, "HitEffect");
      LogicAreaEffectObjectData::sm_columnIndexHitEffect = CSVTable::getColumnIndexByName(a1, &v48);
      String::~String();
      v12 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexHitEffect) == 0;
      Debugger::doAssert((Debugger *)v12, (bool)"", v13);
      String::String(&v47, "Pushback");
      LogicAreaEffectObjectData::sm_columnIndexPushback = CSVTable::getColumnIndexByName(a1, &v47);
      String::~String();
      v14 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexPushback) == 1;
      Debugger::doAssert((Debugger *)v14, (bool)"", v15);
      String::String(&v46, "OnlyEnemies");
      LogicAreaEffectObjectData::sm_columnIndexOnlyEnemies = CSVTable::getColumnIndexByName(a1, &v46);
      String::~String();
      v16 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexOnlyEnemies) == 2;
      Debugger::doAssert((Debugger *)v16, (bool)"", v17);
      String::String(&v45, "MaximumTargets");
      LogicAreaEffectObjectData::sm_columnIndexMaximumTargets = CSVTable::getColumnIndexByName(a1, &v45);
      String::~String();
      v18 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexMaximumTargets) == 1;
      Debugger::doAssert((Debugger *)v18, (bool)"", v19);
      String::String(&v44, "HitSpeed");
      LogicAreaEffectObjectData::sm_columnIndexHitSpeed = CSVTable::getColumnIndexByName(a1, &v44);
      String::~String();
      v20 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexHitSpeed) == 1;
      Debugger::doAssert((Debugger *)v20, (bool)"", v21);
      String::String(&v43, "Damage");
      LogicAreaEffectObjectData::sm_columnIndexDamage = CSVTable::getColumnIndexByName(a1, &v43);
      String::~String();
      v22 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexDamage) == 1;
      Debugger::doAssert((Debugger *)v22, (bool)"", v23);
      String::String(&v42, "DamageType");
      LogicAreaEffectObjectData::sm_columnIndexDamageType = CSVTable::getColumnIndexByName(a1, &v42);
      String::~String();
      v24 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexDamageType) == 0;
      Debugger::doAssert((Debugger *)v24, (bool)"", v25);
      String::String(&v41, "Healing");
      LogicAreaEffectObjectData::sm_columnIndexHealing = CSVTable::getColumnIndexByName(a1, &v41);
      String::~String();
      v26 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexHealing) == 1;
      Debugger::doAssert((Debugger *)v26, (bool)"", v27);
      String::String(&v40, "Buff");
      LogicAreaEffectObjectData::sm_columnIndexBuff = CSVTable::getColumnIndexByName(a1, &v40);
      String::~String();
      v28 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexBuff) == 0;
      Debugger::doAssert((Debugger *)v28, (bool)"", v29);
      String::String(&v39, "BuffTime");
      LogicAreaEffectObjectData::sm_columnIndexBuffTime = CSVTable::getColumnIndexByName(a1, &v39);
      String::~String();
      v30 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexBuffTime) == 1;
      Debugger::doAssert((Debugger *)v30, (bool)"", v31);
      String::String(&v38, "Projectile");
      LogicAreaEffectObjectData::sm_columnIndexProjectile = CSVTable::getColumnIndexByName(a1, &v38);
      String::~String();
      v32 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexProjectile) == 0;
      Debugger::doAssert((Debugger *)v32, (bool)"", v33);
      String::String(&v37, "ProjectileStartHeight");
      LogicAreaEffectObjectData::sm_columnIndexProjectileStartHeight = CSVTable::getColumnIndexByName(a1, &v37);
      String::~String();
      v34 = (unsigned int)CSVTable::getColumnType(a1, LogicAreaEffectObjectData::sm_columnIndexProjectileStartHeight) == 1;
      return Debugger::doAssert((Debugger *)v34, (bool)"", v35);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getLifeDuration(LogicHomeChangeListener *this, int a2)
    {
      return (unsigned int)(*((_DWORD *)this + 42) + *((_DWORD *)this + 43) * a2);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getRadius(__int64 a1)
    {
      return *(unsigned int *)(a1 + 176);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getLoopingEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 112);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getScaledEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 120);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getOneShotEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 128);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getHitEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 136);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getPushback(__int64 a1)
    {
      return *(unsigned int *)(a1 + 180);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getOnlyEnemies(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 204);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getMaximumTargets(__int64 a1)
    {
      return *(unsigned int *)(a1 + 184);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getProjectilesToCenter(LogicHomeChangeListener *this)
    {
      return *((unsigned __int8 *)this + 164);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getHitSpeed(LogicHomeChangeListener *this)
    {
      return *((unsigned int *)this + 47);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getDamage(__int64 a1, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(InitState **)(a1 + 8),
               (const #1223 *)(unsigned int)LogicAreaEffectObjectData::sm_columnIndexDamage,
               a2,
               1);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getHealing(__int64 a1, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(InitState **)(a1 + 8),
               (const #1223 *)(unsigned int)LogicAreaEffectObjectData::sm_columnIndexHealing,
               a2,
               1);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getDamageType(LogicHomeChangeListener *this)
    {
      return *((_QWORD *)this + 13);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getBuff(LogicHomeChangeListener *this)
    {
      return *((_QWORD *)this + 18);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getOnlyOwnTroops(LogicHomeChangeListener *this)
    {
      return *((unsigned __int8 *)this + 205);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getProjectile(LogicHomeChangeListener *this)
    {
      return *((_QWORD *)this + 19);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getProjectileStartHeight(LogicHomeChangeListener *this)
    {
      return *((unsigned int *)this + 50);
    }

    __int64 __fastcall LogicAreaEffectObjectData::calculateChecksumForLevel(__int64 a1, LogicMath *a2)
    {
      int IntegerValueAt; // w0
      int ScaledValue; // w0
      int v6; // w0
      __int64 v7; // x0
      int v8; // w0
      _BYTE v10[24]; // [xsp+8h] [xbp-28h] BYREF
    
      ChecksumEncoder::ChecksumEncoder((#1226 *)v10);
      IntegerValueAt = CSVRow::getIntegerValueAt(
                         *(_QWORD *)(a1 + 8),
                         (unsigned int)LogicAreaEffectObjectData::sm_columnIndexBuffTime);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, IntegerValueAt + *(_DWORD *)(a1 + 208) * (_DWORD)a2);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, *(_DWORD *)(a1 + 188));
      ScaledValue = LogicSpellData::getScaledValue(
                      *(InitState **)(a1 + 8),
                      (const #1223 *)(unsigned int)LogicAreaEffectObjectData::sm_columnIndexDamage,
                      a2,
                      1);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, ScaledValue);
      v6 = LogicSpellData::getScaledValue(
             *(InitState **)(a1 + 8),
             (const #1223 *)(unsigned int)LogicAreaEffectObjectData::sm_columnIndexHealing,
             a2,
             1);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, v6);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, *(_DWORD *)(a1 + 184));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, *(_DWORD *)(a1 + 180));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, *(_DWORD *)(a1 + 176));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, *(_DWORD *)(a1 + 168) + *(_DWORD *)(a1 + 172) * (_DWORD)a2);
      v7 = *(_QWORD *)(a1 + 152);
      if ( v7 )
      {
        v8 = LogicProjectileData::calculateChecksumForLevel(v7, a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v10, v8);
      }
      return ChecksumEncoder::getCheckSum(v10);
    }

    __int64 __fastcall LogicAreaEffectObjectData::getTotalHitCount(LogicHomeChangeListener *this, int a2)
    {
      int v2; // w8
    
      v2 = *((_DWORD *)this + 47);
      if ( v2 )
        return (unsigned int)((*((_DWORD *)this + 42) + *((_DWORD *)this + 43) * a2) / v2);
      else
        return 1;
    }

    __int64 __fastcall LogicAreaEffectObjectData::hitsGround(LogicHomeChangeListener *this)
    {
      return *((unsigned __int8 *)this + 163);
    }

    __int64 __fastcall LogicAreaEffectObjectData::hitsAir(LogicHomeChangeListener *this)
    {
      return *((unsigned __int8 *)this + 162);
    }

    __int64 __fastcall LogicAreaEffectObjectData::hitBiggestTargets(LogicHomeChangeListener *this)
    {
      return *((unsigned __int8 *)this + 161);
    }

    __int64 __fastcall LogicAreaEffectObjectData::hasReducedCrownTowerDamage(LogicHomeChangeListener *this)
    {
      return *((unsigned __int8 *)this + 160);
    }

    // attributes: thunk
    void __fastcall LogicAreaEffectObjectData::~LogicAreaEffectObjectData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicAreaEffectObjectData::~LogicAreaEffectObjectData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicAreaEffectObjectData
