class LogicProjectileData
{
public:

    void __fastcall LogicProjectileData::LogicProjectileData(
            LogicProjectileData *this,
            const EditClanPopup *a2,
            const ResetAccountMessage *a3)
    {
      __int64 v3; // x0
    
      v3 = LogicData::LogicData((__int64)this, (__int64)a2, a3);
      *(_BYTE *)(v3 + 160) = 0;
      *(_QWORD *)(v3 + 144) = 0;
      *(_QWORD *)(v3 + 152) = 0;
      *(_QWORD *)(v3 + 128) = 0;
      *(_QWORD *)(v3 + 136) = 0;
      *(_QWORD *)(v3 + 112) = 0;
      *(_QWORD *)(v3 + 120) = 0;
      *(_QWORD *)v3 = off_100472138;
      *(_QWORD *)(v3 + 104) = 0;
      *(_WORD *)(v3 + 188) = 0;
      *(_QWORD *)(v3 + 180) = 0;
      *(_QWORD *)(v3 + 172) = 0;
      *(_QWORD *)(v3 + 164) = 0;
      *(_QWORD *)(v3 + 192) = 0;
      *(_QWORD *)(v3 + 200) = 0;
    }

    __int64 __fastcall LogicProjectileData::destruct(RecievedItem *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct((__int64)this);
      *((_BYTE *)this + 160) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_WORD *)this + 94) = 0;
      *(_QWORD *)((char *)this + 180) = 0;
      *(_QWORD *)((char *)this + 172) = 0;
      *(_QWORD *)((char *)this + 164) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 25) = 0;
      return result;
    }

    __int64 __fastcall LogicProjectileData::createReferences(InitState **this)
    {
      RecievedItem *Table; // x0
      const UdpConnectionInfoMessage *v3; // x1
      const char *v4; // x2
      const char *v5; // x2
      const char *v6; // x2
      LogicKickAllianceMemberCommand *ValueAt; // x0
      const AreaEffectObject *v8; // x2
      LogicKickAllianceMemberCommand *v9; // x0
      const AreaEffectObject *v10; // x2
      LogicKickAllianceMemberCommand *v11; // x0
      const AreaEffectObject *v12; // x2
      __int64 v13; // x20
      __int64 v14; // x20
      LogicKickAllianceMemberCommand *v15; // x0
      const AreaEffectObject *v16; // x2
      __int64 v17; // x20
      __int64 v18; // x20
      int v19; // w2
      int v20; // w0
      __int64 v21; // x0
      __int64 v22; // x0
      __int64 v23; // x20
      __int64 v24; // x20
      const char *v25; // x2
      int IntegerValueAt; // w0
      const char *v27; // x2
      const char *v28; // x2
      __int64 result; // x0
      const char *v30; // x1
      String v31; // [xsp+8h] [xbp-138h] BYREF
      String v32; // [xsp+20h] [xbp-120h] BYREF
      String v33; // [xsp+38h] [xbp-108h] BYREF
      String v34; // [xsp+50h] [xbp-F0h] BYREF
      String v35; // [xsp+68h] [xbp-D8h] BYREF
      String v36; // [xsp+80h] [xbp-C0h] BYREF
      String v37; // [xsp+98h] [xbp-A8h] BYREF
      String v38; // [xsp+B0h] [xbp-90h] BYREF
      String v39; // [xsp+C8h] [xbp-78h] BYREF
      String v40; // [xsp+E0h] [xbp-60h] BYREF
      String v41; // [xsp+F8h] [xbp-48h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)this);
      if ( !(unsigned int)CSVRow::getRowOffset(*(this + 1)) )
      {
        Table = (RecievedItem *)CSVRow::getTable(*(this + 1));
        LogicProjectileData::resetStatics(Table, v3);
      }
      String::String(&v41, "BuffTimeIncreasePerLevel");
      *((_DWORD *)this + 50) = LogicData::getIntegerValue((__int64)this, (__int64)&v41);
      String::~String();
      *((_DWORD *)this + 43) = LogicData::getIntegerValueAt(
                                 (AreaEffectObject *)this,
                                 (unsigned int)LogicProjectileData::sm_columnIndexSpeed,
                                 v4);
      *((_BYTE *)this + 204) = LogicData::getBooleanValueAt(
                                 (AreaEffectObject *)this,
                                 (unsigned int)LogicProjectileData::sm_columnIndexHoming,
                                 v5);
      *((_BYTE *)this + 205) = LogicData::getBooleanValueAt(
                                 (AreaEffectObject *)this,
                                 (unsigned int)LogicProjectileData::sm_columnIndexOnlyEnemies,
                                 v6);
      String::String(&v40, "use360Frames");
      *((_BYTE *)this + 160) = LogicData::getBooleanValue((__int64)this, (__int64)&v40);
      String::~String();
      ValueAt = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                    *(this + 1),
                                                    (unsigned int)LogicProjectileData::sm_columnIndexHitEffect);
      *(this + 13) = (InitState *)LogicDataTables::getEffectByName(ValueAt, (const String *)this, v8);
      v9 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                               *(this + 1),
                                               (unsigned int)LogicProjectileData::sm_columnIndexDamageType);
      *(this + 14) = (InitState *)LogicDataTables::getDamageTypeByName(v9, (const String *)this, v10);
      v11 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(this + 1),
                                                (unsigned int)LogicProjectileData::sm_columnIndexTrailEffect);
      *(this + 19) = (InitState *)LogicDataTables::getEffectByName(v11, (const String *)this, v12);
      v13 = (__int64)*(this + 1);
      String::String(&v39, "ReducedTowerDamage");
      *((_BYTE *)this + 207) = CSVRow::getBooleanValue(v13, &v39, 0);
      String::~String();
      v14 = (__int64)*(this + 1);
      String::String(&v38, "SpawnCharacterLevelIndex");
      *((_DWORD *)this + 48) = CSVRow::getIntegerValue(v14, &v38, 0);
      String::~String();
      if ( !*(this + 14) )
        *(this + 14) = (InitState *)LogicDataTables::getPhysicalDamageType();
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const EditClanPopup *)(unsigned int)LogicProjectileData::sm_columnIndexDamage,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const EditClanPopup *)(unsigned int)LogicProjectileData::sm_columnIndexPushback,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const EditClanPopup *)(unsigned int)LogicProjectileData::sm_columnIndexRadius,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(this + 1),
        (const EditClanPopup *)(unsigned int)LogicProjectileData::sm_columnIndexMaximumTargets,
        1,
        1);
      String::String(&v37, "Gravity");
      *((_DWORD *)this + 49) = LogicData::getIntegerValue((__int64)this, (__int64)&v37);
      String::~String();
      String::String(&v36, "ProjectileRadius");
      *((_DWORD *)this + 42) = LogicData::getIntegerValue((__int64)this, (__int64)&v36);
      String::~String();
      String::String(&v35, "VisualRandomRadius");
      *((_DWORD *)this + 41) = LogicData::getIntegerValue((__int64)this, (__int64)&v35);
      String::~String();
      v15 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(this + 1),
                                                (unsigned int)LogicProjectileData::sm_columnIndexSpawnCharacter);
      *(this + 15) = (InitState *)LogicDataTables::getCharacterByName(v15, (const String *)this, v16);
      v17 = (__int64)*(this + 1);
      String::String(&v34, "SpawnCharacterCount");
      *((_DWORD *)this + 33) = CSVRow::getIntegerValue(v17, &v34, 0);
      String::~String();
      v18 = (__int64)*(this + 1);
      String::String(&v33, "SpawnCharacterDeployTime");
      *((_DWORD *)this + 32) = CSVRow::getIntegerValue(v18, &v33, 0);
      String::~String();
      if ( *(this + 15) )
        v20 = LogicMath::max((LogicMath *)*((unsigned int *)this + 33), 1, v19);
      else
        v20 = 0;
      *((_DWORD *)this + 33) = v20;
      v21 = CSVRow::getValueAt(*(this + 1), (unsigned int)LogicProjectileData::sm_columnIndexSpawnAreaEffectObject);
      *(this + 17) = (InitState *)LogicDataTables::getAreaEffectObjectByName(v21, (__int64)this);
      v22 = CSVRow::getValueAt(*(this + 1), (unsigned int)LogicProjectileData::sm_columnIndexTargetBuff);
      *(this + 18) = (InitState *)LogicDataTables::getCharacterBuffByName(v22, (__int64)this);
      v23 = (__int64)*(this + 1);
      String::String(&v32, "AoeToAir");
      *((_BYTE *)this + 188) = CSVRow::getBooleanValue(v23, &v32, 0);
      String::~String();
      v24 = (__int64)*(this + 1);
      String::String(&v31, "AoeToGround");
      *((_BYTE *)this + 189) = CSVRow::getBooleanValue(v24, &v31, 0);
      String::~String();
      if ( (unsigned int)CSVRow::getArraySizeAt(
                           *(this + 1),
                           (unsigned int)LogicProjectileData::sm_columnIndexMaximumTargets) )
        IntegerValueAt = LogicData::getIntegerValueAt(
                           (AreaEffectObject *)this,
                           (unsigned int)LogicProjectileData::sm_columnIndexMaximumTargets,
                           v25);
      else
        IntegerValueAt = 1000;
      *((_DWORD *)this + 44) = IntegerValueAt;
      *((_DWORD *)this + 45) = LogicData::getIntegerValueAt(
                                 (AreaEffectObject *)this,
                                 (unsigned int)LogicProjectileData::sm_columnIndexPushback,
                                 v25);
      *((_DWORD *)this + 46) = LogicData::getIntegerValueAt(
                                 (AreaEffectObject *)this,
                                 (unsigned int)LogicProjectileData::sm_columnIndexRadius,
                                 v27);
      result = LogicData::getBooleanValueAt(
                 (AreaEffectObject *)this,
                 (unsigned int)LogicProjectileData::sm_columnIndexOnlyOwnTroops,
                 v28);
      *((_BYTE *)this + 206) = result;
      if ( *((int *)this + 46) >= 1 && !*((_BYTE *)this + 188) && !*((_BYTE *)this + 189) )
        return Debugger::warning(
                 (__siginfo *)"Projectile has area damage radius, but aoeToAir and aoeToGround are false!",
                 v30);
      return result;
    }

    __n128 __fastcall LogicProjectileData::resetStatics(RecievedItem *this, const UdpConnectionInfoMessage *a2)
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
      String v42; // [xsp+8h] [xbp-1E8h] BYREF
      String v43; // [xsp+20h] [xbp-1D0h] BYREF
      String v44; // [xsp+38h] [xbp-1B8h] BYREF
      String v45; // [xsp+50h] [xbp-1A0h] BYREF
      String v46; // [xsp+68h] [xbp-188h] BYREF
      String v47; // [xsp+80h] [xbp-170h] BYREF
      String v48; // [xsp+98h] [xbp-158h] BYREF
      String v49; // [xsp+B0h] [xbp-140h] BYREF
      String v50; // [xsp+C8h] [xbp-128h] BYREF
      String v51; // [xsp+E0h] [xbp-110h] BYREF
      String v52; // [xsp+F8h] [xbp-F8h] BYREF
      String v53; // [xsp+110h] [xbp-E0h] BYREF
      String v54; // [xsp+128h] [xbp-C8h] BYREF
      String v55; // [xsp+140h] [xbp-B0h] BYREF
      String v56; // [xsp+158h] [xbp-98h] BYREF
      String v57; // [xsp+170h] [xbp-80h] BYREF
      String v58; // [xsp+188h] [xbp-68h] BYREF
      String v59; // [xsp+1A0h] [xbp-50h] BYREF
      String v60; // [xsp+1B8h] [xbp-38h] BYREF
    
      String::String(&v60, "Speed");
      LogicProjectileData::sm_columnIndexSpeed = CSVTable::getColumnIndexByName(this, &v60);
      String::~String();
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexSpeed) == 1;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v59, "FileName");
      LogicProjectileData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(this, &v59);
      String::~String();
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v58, "ExportName");
      LogicProjectileData::sm_columnIndexExportName = CSVTable::getColumnIndexByName(this, &v58);
      String::~String();
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexExportName) == 0;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v57, "Homing");
      LogicProjectileData::sm_columnIndexHoming = CSVTable::getColumnIndexByName(this, &v57);
      String::~String();
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexHoming) == 2;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v56, "HitEffect");
      LogicProjectileData::sm_columnIndexHitEffect = CSVTable::getColumnIndexByName(this, &v56);
      String::~String();
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexHitEffect) == 0;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v55, "Damage");
      LogicProjectileData::sm_columnIndexDamage = CSVTable::getColumnIndexByName(this, &v55);
      String::~String();
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexDamage) == 1;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v54, "Pushback");
      LogicProjectileData::sm_columnIndexPushback = CSVTable::getColumnIndexByName(this, &v54);
      String::~String();
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexPushback) == 1;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v53, "Radius");
      LogicProjectileData::sm_columnIndexRadius = CSVTable::getColumnIndexByName(this, &v53);
      String::~String();
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexRadius) == 1;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v52, "DamageType");
      LogicProjectileData::sm_columnIndexDamageType = CSVTable::getColumnIndexByName(this, &v52);
      String::~String();
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexDamageType) == 0;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v51, "OnlyEnemies");
      LogicProjectileData::sm_columnIndexOnlyEnemies = CSVTable::getColumnIndexByName(this, &v51);
      String::~String();
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexOnlyEnemies) == 2;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v50, "MaximumTargets");
      LogicProjectileData::sm_columnIndexMaximumTargets = CSVTable::getColumnIndexByName(this, &v50);
      String::~String();
      v23 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexMaximumTargets) == 1;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v49, "ShadowExportName");
      LogicProjectileData::sm_columnIndexShadowExportName = CSVTable::getColumnIndexByName(this, &v49);
      String::~String();
      v25 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v48, "SpawnAreaEffectObject");
      LogicProjectileData::sm_columnIndexSpawnAreaEffectObject = CSVTable::getColumnIndexByName(this, &v48);
      String::~String();
      v27 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexSpawnAreaEffectObject) == 0;
      Debugger::doAssert((Debugger *)v27, (bool)"", v28);
      String::String(&v47, "SpawnCharacter");
      LogicProjectileData::sm_columnIndexSpawnCharacter = CSVTable::getColumnIndexByName(this, &v47);
      String::~String();
      v29 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexSpawnCharacter) == 0;
      Debugger::doAssert((Debugger *)v29, (bool)"", v30);
      String::String(&v46, "TargetBuff");
      LogicProjectileData::sm_columnIndexTargetBuff = CSVTable::getColumnIndexByName(this, &v46);
      String::~String();
      v31 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexTargetBuff) == 0;
      Debugger::doAssert((Debugger *)v31, (bool)"", v32);
      String::String(&v45, "BuffTime");
      LogicProjectileData::sm_columnIndexBuffTime = CSVTable::getColumnIndexByName(this, &v45);
      String::~String();
      v33 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexBuffTime) == 1;
      Debugger::doAssert((Debugger *)v33, (bool)"", v34);
      String::String(&v44, "OnlyOwnTroops");
      LogicProjectileData::sm_columnIndexOnlyOwnTroops = CSVTable::getColumnIndexByName(this, &v44);
      String::~String();
      v35 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexOnlyOwnTroops) == 2;
      Debugger::doAssert((Debugger *)v35, (bool)"", v36);
      String::String(&v43, "TrailEffect");
      LogicProjectileData::sm_columnIndexTrailEffect = CSVTable::getColumnIndexByName(this, &v43);
      String::~String();
      v37 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexTrailEffect) == 0;
      Debugger::doAssert((Debugger *)v37, (bool)"", v38);
      String::String(&v42, "ProjectileRange");
      LogicProjectileData::sm_columnIndexProjectileRange = CSVTable::getColumnIndexByName(this, &v42);
      String::~String();
      v39 = (unsigned int)CSVTable::getColumnType(this, LogicProjectileData::sm_columnIndexProjectileRange) == 1;
      return Debugger::doAssert((Debugger *)v39, (bool)"", v40);
    }

    __int64 __fastcall LogicProjectileData::calculateChecksumForLevel(__int64 a1, LogicMath *a2)
    {
      int Damage; // w0
      __int64 v5; // x0
      int v6; // w0
      Font *v7; // x0
      int v8; // w0
      BattleResultMessage *v9; // x0
      int v10; // w0
      __int64 v11; // x19
      _BYTE v13[24]; // [xsp+8h] [xbp-28h] BYREF
    
      ChecksumEncoder::ChecksumEncoder((ExpBar *)v13);
      Damage = LogicProjectileData::getDamage(a1, a2);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v13, Damage);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v13, *(_DWORD *)(a1 + 180));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v13, *(_DWORD *)(a1 + 184));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v13, *(_DWORD *)(a1 + 176));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v13, *(_DWORD *)(a1 + 164));
      v5 = *(_QWORD *)(a1 + 136);
      if ( v5 )
      {
        v6 = LogicAreaEffectObjectData::calculateChecksumForLevel(v5, a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v13, v6);
      }
      v7 = *(Font **)(a1 + 120);
      if ( v7 )
      {
        v8 = LogicCharacterData::calculateChecksumForLevel(v7, a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v13, v8);
        ChecksumEncoder::writeInt((ExpBar *)v13, *(_DWORD *)(a1 + 132));
        ChecksumEncoder::writeInt((ExpBar *)v13, *(_DWORD *)(a1 + 128));
      }
      v9 = *(BattleResultMessage **)(a1 + 144);
      if ( v9 )
      {
        v10 = LogicCharacterBuffData::calculateChecksumForLevel(v9, (int)a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v13, v10);
      }
      v11 = ChecksumEncoder::getCheckSum(v13);
      ChecksumEncoder::destruct((ChecksumEncoder *)v13);
      return v11;
    }

    __int64 __fastcall LogicProjectileData::getDamage(__int64 a1, LogicMath *a2)
    {
      InitState *v4; // x0
      const EditClanPopup *v5; // x1
      int v6; // w3
      int isPrincessProjectile; // w8
    
      if ( (unsigned int)LogicProjectileData::isKingProjectile() )
      {
        v4 = *(InitState **)(a1 + 8);
        v5 = (const EditClanPopup *)(unsigned int)LogicProjectileData::sm_columnIndexDamage;
        v6 = 3;
      }
      else
      {
        isPrincessProjectile = LogicProjectileData::isPrincessProjectile(a1);
        v4 = *(InitState **)(a1 + 8);
        v5 = (const EditClanPopup *)(unsigned int)LogicProjectileData::sm_columnIndexDamage;
        if ( isPrincessProjectile )
          v6 = 5;
        else
          v6 = 1;
      }
      return LogicSpellData::getScaledValue(v4, v5, a2, v6);
    }

    __int64 __fastcall LogicProjectileData::getPushback(__int64 a1)
    {
      return *(unsigned int *)(a1 + 180);
    }

    __int64 __fastcall LogicProjectileData::getRadius(__int64 a1)
    {
      return *(unsigned int *)(a1 + 184);
    }

    __int64 __fastcall LogicProjectileData::getMaximumTargets(__int64 a1)
    {
      return *(unsigned int *)(a1 + 176);
    }

    __int64 __fastcall LogicProjectileData::getVisualRandomRadius(__int64 a1)
    {
      return *(unsigned int *)(a1 + 164);
    }

    __int64 __fastcall LogicProjectileData::getSpeed(__int64 a1)
    {
      return *(unsigned int *)(a1 + 172);
    }

    __int64 __fastcall LogicProjectileData::getFileName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicProjectileData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicProjectileData::getExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicProjectileData::sm_columnIndexExportName);
    }

    __int64 __fastcall LogicProjectileData::getHoming(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 204);
    }

    __int64 __fastcall LogicProjectileData::getHitEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 104);
    }

    bool __fastcall LogicProjectileData::isKingProjectile(__int64 a1)
    {
      Font *KingTowerData; // x0
      Font *v3; // x0
    
      KingTowerData = (Font *)LogicDataTables::getKingTowerData();
      if ( LogicCharacterData::getProjectile(KingTowerData, 0) == a1 )
        return 1;
      v3 = (Font *)LogicDataTables::getKingTowerData();
      return LogicCharacterData::getProjectile(v3, 1) == a1;
    }

    bool __fastcall LogicProjectileData::isPrincessProjectile(__int64 a1)
    {
      Font *PrincessTowerData; // x0
      Font *v3; // x0
    
      PrincessTowerData = (Font *)LogicDataTables::getPrincessTowerData();
      if ( LogicCharacterData::getProjectile(PrincessTowerData, 0) == a1 )
        return 1;
      v3 = (Font *)LogicDataTables::getPrincessTowerData();
      return LogicCharacterData::getProjectile(v3, 1) == a1;
    }

    __int64 __fastcall LogicProjectileData::getDamageType(__int64 a1)
    {
      return *(_QWORD *)(a1 + 112);
    }

    __int64 __fastcall LogicProjectileData::getOnlyEnemies(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 205);
    }

    __int64 __fastcall LogicProjectileData::hasReducedCrownTowerDamage(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 207);
    }

    __int64 __fastcall LogicProjectileData::getShadowExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicProjectileData::sm_columnIndexShadowExportName);
    }

    __int64 __fastcall LogicProjectileData::getSpawnCharacter(__int64 a1)
    {
      return *(_QWORD *)(a1 + 120);
    }

    __int64 __fastcall LogicProjectileData::getSpawnCharacterLevelIndex(__int64 a1)
    {
      return *(unsigned int *)(a1 + 192);
    }

    __int64 __fastcall LogicProjectileData::getSpawnCharacterDeployTime(__int64 a1)
    {
      return *(unsigned int *)(a1 + 128);
    }

    __int64 __fastcall LogicProjectileData::getSpawnCharacterCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 132);
    }

    __int64 __fastcall LogicProjectileData::getSpawnAreaEffectObject(__int64 a1)
    {
      return *(_QWORD *)(a1 + 136);
    }

    __int64 __fastcall LogicProjectileData::getTargetBuff(__int64 a1)
    {
      return *(_QWORD *)(a1 + 144);
    }

    __int64 __fastcall LogicProjectileData::getBuffTime(__int64 a1, int a2)
    {
      return (unsigned int)CSVRow::getIntegerValueAt(
                             *(_QWORD *)(a1 + 8),
                             (unsigned int)LogicProjectileData::sm_columnIndexBuffTime)
           + *(_DWORD *)(a1 + 200) * a2;
    }

    __int64 __fastcall LogicProjectileData::getOnlyOwnTroops(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 206);
    }

    __int64 __fastcall LogicProjectileData::getTrailEffectData(__int64 a1)
    {
      return *(_QWORD *)(a1 + 152);
    }

    __int64 __fastcall LogicProjectileData::getProjectileRange(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicProjectileData::sm_columnIndexProjectileRange,
               a2);
    }

    bool __fastcall LogicProjectileData::isJuggernaut(__int64 a1)
    {
      int IntegerValueAt; // w8
      _BOOL8 result; // x0
    
      if ( *(int *)(a1 + 168) < 1 )
        return 0;
      IntegerValueAt = CSVRow::getIntegerValueAt(
                         *(_QWORD *)(a1 + 8),
                         (unsigned int)LogicProjectileData::sm_columnIndexProjectileRange,
                         0);
      result = 0;
      if ( IntegerValueAt >= 1 )
        return *(_BYTE *)(a1 + 204) == 0;
      return result;
    }

    void __fastcall LogicProjectileData::createReferences2(AreaEffectObject *a1)
    {
      __int64 v2; // x0
      const String *v3; // x1
      __int64 v4; // [xsp+0h] [xbp-40h] BYREF
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      LogicData::createReferences2();
      v2 = *((_QWORD *)a1 + 17);
      if ( v2
        && (int)LogicAreaEffectObjectData::getDamage(v2, 0) >= 1
        && (int)LogicProjectileData::getDamage((__int64)a1, 0) >= 1 )
      {
        LogicData::getDebuggerName(a1);
        operator+(&v5, "Damage from Projectile and Area Effect Object it creates, ", &v4);
        Debugger::warning((__siginfo *)&v5, v3);
        String::~String();
        String::~String();
      }
    }

    // attributes: thunk
    void __fastcall LogicProjectileData::~LogicProjectileData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicProjectileData::~LogicProjectileData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicProjectileData
