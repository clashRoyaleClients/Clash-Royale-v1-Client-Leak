class LogicParticleEmitterData
{
public:

    _QWORD *__fastcall LogicParticleEmitterData::LogicParticleEmitterData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicData::LogicData(a1, a2, a3);
      *result = off_10046BC68;
      result[13] = 0;
      return result;
    }

    __int64 __fastcall LogicParticleEmitterData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(a1);
      *(_QWORD *)(a1 + 104) = 0;
      return result;
    }

    __int64 __fastcall LogicParticleEmitterData::createReferences(AreaEffectObject *a1)
    {
      LogicParticleEmitterData *Table; // x0
      const CSVTable *v3; // x1
      __int64 ValueAt; // x0
      __int64 result; // x0
      AreaEffectObject *v6; // x8
    
      LogicData::createReferences(a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)a1 + 1)) )
      {
        Table = (LogicParticleEmitterData *)CSVRow::getTable(*((_QWORD *)a1 + 1));
        LogicParticleEmitterData::resetStatics(Table, v3);
      }
      ValueAt = CSVRow::getValueAt(*((_QWORD *)a1 + 1), (unsigned int)LogicParticleEmitterData::sm_columnIndexEnemyVersion);
      result = LogicDataTables::getParticleEmitterByName(ValueAt, (__int64)a1);
      if ( result )
        v6 = (AreaEffectObject *)result;
      else
        v6 = a1;
      *((_QWORD *)a1 + 13) = v6;
      return result;
    }

    __n128 __fastcall LogicParticleEmitterData::resetStatics(#1224 *a1)
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
      _BOOL8 v36; // x0
      const char *v37; // x2
      _BOOL8 v38; // x0
      const char *v39; // x2
      _BOOL8 v40; // x0
      const char *v41; // x2
      _BOOL8 v42; // x0
      const char *v43; // x2
      _BOOL8 v44; // x0
      const char *v45; // x2
      _BOOL8 v46; // x0
      const char *v47; // x2
      _BOOL8 v48; // x0
      const char *v49; // x2
      _BOOL8 v50; // x0
      const char *v51; // x2
      _BOOL8 v52; // x0
      const char *v53; // x2
      _BOOL8 v54; // x0
      const char *v55; // x2
      _BOOL8 v56; // x0
      const char *v57; // x2
      _BOOL8 v58; // x0
      const char *v59; // x2
      _BOOL8 v60; // x0
      const char *v61; // x2
      String v63; // [xsp+0h] [xbp-2F0h] BYREF
      String v64; // [xsp+18h] [xbp-2D8h] BYREF
      String v65; // [xsp+30h] [xbp-2C0h] BYREF
      String v66; // [xsp+48h] [xbp-2A8h] BYREF
      String v67; // [xsp+60h] [xbp-290h] BYREF
      String v68; // [xsp+78h] [xbp-278h] BYREF
      String v69; // [xsp+90h] [xbp-260h] BYREF
      String v70; // [xsp+A8h] [xbp-248h] BYREF
      String v71; // [xsp+C0h] [xbp-230h] BYREF
      String v72; // [xsp+D8h] [xbp-218h] BYREF
      String v73; // [xsp+F0h] [xbp-200h] BYREF
      String v74; // [xsp+108h] [xbp-1E8h] BYREF
      String v75; // [xsp+120h] [xbp-1D0h] BYREF
      String v76; // [xsp+138h] [xbp-1B8h] BYREF
      String v77; // [xsp+150h] [xbp-1A0h] BYREF
      String v78; // [xsp+168h] [xbp-188h] BYREF
      String v79; // [xsp+180h] [xbp-170h] BYREF
      String v80; // [xsp+198h] [xbp-158h] BYREF
      String v81; // [xsp+1B0h] [xbp-140h] BYREF
      String v82; // [xsp+1C8h] [xbp-128h] BYREF
      String v83; // [xsp+1E0h] [xbp-110h] BYREF
      String v84; // [xsp+1F8h] [xbp-F8h] BYREF
      String v85; // [xsp+210h] [xbp-E0h] BYREF
      String v86; // [xsp+228h] [xbp-C8h] BYREF
      String v87; // [xsp+240h] [xbp-B0h] BYREF
      String v88; // [xsp+258h] [xbp-98h] BYREF
      String v89; // [xsp+270h] [xbp-80h] BYREF
      String v90; // [xsp+288h] [xbp-68h] BYREF
      String v91; // [xsp+2A0h] [xbp-50h] BYREF
      String v92; // [xsp+2B8h] [xbp-38h] BYREF
    
      String::String(&v92, "ParticleCount");
      LogicParticleEmitterData::sm_columnIndexParticleCount = CSVTable::getColumnIndexByName(a1, &v92);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleCount) == 1;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v91, "MinLife");
      LogicParticleEmitterData::sm_columnIndexMinLife = CSVTable::getColumnIndexByName(a1, &v91);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexMinLife) == 1;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v90, "MaxLife");
      LogicParticleEmitterData::sm_columnIndexMaxLife = CSVTable::getColumnIndexByName(a1, &v90);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexMaxLife) == 1;
      Debugger::doAssert((Debugger *)v6, (bool)"", v7);
      String::String(&v89, "ParticleMinInterval");
      LogicParticleEmitterData::sm_columnIndexParticleMinInterval = CSVTable::getColumnIndexByName(a1, &v89);
      String::~String();
      v8 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMinInterval) == 1;
      Debugger::doAssert((Debugger *)v8, (bool)"", v9);
      String::String(&v88, "ParticleMaxInterval");
      LogicParticleEmitterData::sm_columnIndexParticleMaxInterval = CSVTable::getColumnIndexByName(a1, &v88);
      String::~String();
      v10 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMaxInterval) == 1;
      Debugger::doAssert((Debugger *)v10, (bool)"", v11);
      String::String(&v87, "ParticleMinLife");
      LogicParticleEmitterData::sm_columnIndexParticleMinLife = CSVTable::getColumnIndexByName(a1, &v87);
      String::~String();
      v12 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMinLife) == 1;
      Debugger::doAssert((Debugger *)v12, (bool)"", v13);
      String::String(&v86, "ParticleMaxLife");
      LogicParticleEmitterData::sm_columnIndexParticleMaxLife = CSVTable::getColumnIndexByName(a1, &v86);
      String::~String();
      v14 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMaxLife) == 1;
      Debugger::doAssert((Debugger *)v14, (bool)"", v15);
      String::String(&v85, "ParticleMinAngle");
      LogicParticleEmitterData::sm_columnIndexParticleMinAngle = CSVTable::getColumnIndexByName(a1, &v85);
      String::~String();
      v16 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMinAngle) == 1;
      Debugger::doAssert((Debugger *)v16, (bool)"", v17);
      String::String(&v84, "ParticleMaxAngle");
      LogicParticleEmitterData::sm_columnIndexParticleMaxAngle = CSVTable::getColumnIndexByName(a1, &v84);
      String::~String();
      v18 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMaxAngle) == 1;
      Debugger::doAssert((Debugger *)v18, (bool)"", v19);
      String::String(&v83, "ParticleAngleRelativeToParent");
      LogicParticleEmitterData::sm_columnIndexParticleAngleRelativeToParent = CSVTable::getColumnIndexByName(a1, &v83);
      String::~String();
      v20 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleAngleRelativeToParent) == 2;
      Debugger::doAssert((Debugger *)v20, (bool)"", v21);
      String::String(&v82, "ParticleRandomAngle");
      LogicParticleEmitterData::sm_columnIndexParticleRandomAngle = CSVTable::getColumnIndexByName(a1, &v82);
      String::~String();
      v22 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleRandomAngle) == 2;
      Debugger::doAssert((Debugger *)v22, (bool)"", v23);
      String::String(&v81, "ParticleMinRadius");
      LogicParticleEmitterData::sm_columnIndexParticleMinRadius = CSVTable::getColumnIndexByName(a1, &v81);
      String::~String();
      v24 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMinRadius) == 1;
      Debugger::doAssert((Debugger *)v24, (bool)"", v25);
      String::String(&v80, "ParticleMaxRadius");
      LogicParticleEmitterData::sm_columnIndexParticleMaxRadius = CSVTable::getColumnIndexByName(a1, &v80);
      String::~String();
      v26 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMaxRadius) == 1;
      Debugger::doAssert((Debugger *)v26, (bool)"", v27);
      String::String(&v79, "ParticleMinSpeed");
      LogicParticleEmitterData::sm_columnIndexParticleMinSpeed = CSVTable::getColumnIndexByName(a1, &v79);
      String::~String();
      v28 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMinSpeed) == 1;
      Debugger::doAssert((Debugger *)v28, (bool)"", v29);
      String::String(&v78, "ParticleMaxSpeed");
      LogicParticleEmitterData::sm_columnIndexParticleMaxSpeed = CSVTable::getColumnIndexByName(a1, &v78);
      String::~String();
      v30 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMaxSpeed) == 1;
      Debugger::doAssert((Debugger *)v30, (bool)"", v31);
      String::String(&v77, "ParticleStartZ");
      LogicParticleEmitterData::sm_columnIndexParticleStartZ = CSVTable::getColumnIndexByName(a1, &v77);
      String::~String();
      v32 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleStartZ) == 1;
      Debugger::doAssert((Debugger *)v32, (bool)"", v33);
      String::String(&v76, "ParticleMinVelocityZ");
      LogicParticleEmitterData::sm_columnIndexParticleMinVelocityZ = CSVTable::getColumnIndexByName(a1, &v76);
      String::~String();
      v34 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMinVelocityZ) == 1;
      Debugger::doAssert((Debugger *)v34, (bool)"", v35);
      String::String(&v75, "ParticleMaxVelocityZ");
      LogicParticleEmitterData::sm_columnIndexParticleMaxVelocityZ = CSVTable::getColumnIndexByName(a1, &v75);
      String::~String();
      v36 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMaxVelocityZ) == 1;
      Debugger::doAssert((Debugger *)v36, (bool)"", v37);
      String::String(&v74, "ParticleGravity");
      LogicParticleEmitterData::sm_columnIndexParticleGravity = CSVTable::getColumnIndexByName(a1, &v74);
      String::~String();
      v38 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleGravity) == 1;
      Debugger::doAssert((Debugger *)v38, (bool)"", v39);
      String::String(&v73, "ParticleMinTailLength");
      LogicParticleEmitterData::sm_columnIndexParticleMinTailLength = CSVTable::getColumnIndexByName(a1, &v73);
      String::~String();
      v40 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMinTailLength) == 1;
      Debugger::doAssert((Debugger *)v40, (bool)"", v41);
      String::String(&v72, "ParticleMaxTailLength");
      LogicParticleEmitterData::sm_columnIndexParticleMaxTailLength = CSVTable::getColumnIndexByName(a1, &v72);
      String::~String();
      v42 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleMaxTailLength) == 1;
      Debugger::doAssert((Debugger *)v42, (bool)"", v43);
      String::String(&v71, "ParticleResource");
      LogicParticleEmitterData::sm_columnIndexParticleResource = CSVTable::getColumnIndexByName(a1, &v71);
      String::~String();
      v44 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleResource) == 0;
      Debugger::doAssert((Debugger *)v44, (bool)"", v45);
      String::String(&v70, "ParticleExportName");
      LogicParticleEmitterData::sm_columnIndexParticleExportName = CSVTable::getColumnIndexByName(a1, &v70);
      String::~String();
      v46 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexParticleExportName) == 0;
      Debugger::doAssert((Debugger *)v46, (bool)"", v47);
      String::String(&v69, "RotateToDirection");
      LogicParticleEmitterData::sm_columnIndexRotateToDirection = CSVTable::getColumnIndexByName(a1, &v69);
      String::~String();
      v48 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexRotateToDirection) == 2;
      Debugger::doAssert((Debugger *)v48, (bool)"", v49);
      String::String(&v68, "LoopParticleClip");
      LogicParticleEmitterData::sm_columnIndexLoopParticleClip = CSVTable::getColumnIndexByName(a1, &v68);
      String::~String();
      v50 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexLoopParticleClip) == 2;
      Debugger::doAssert((Debugger *)v50, (bool)"", v51);
      String::String(&v67, "StartScale");
      LogicParticleEmitterData::sm_columnIndexStartScale = CSVTable::getColumnIndexByName(a1, &v67);
      String::~String();
      v52 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexStartScale) == 1;
      Debugger::doAssert((Debugger *)v52, (bool)"", v53);
      String::String(&v66, "EndScale");
      LogicParticleEmitterData::sm_columnIndexEndScale = CSVTable::getColumnIndexByName(a1, &v66);
      String::~String();
      v54 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexEndScale) == 1;
      Debugger::doAssert((Debugger *)v54, (bool)"", v55);
      String::String(&v65, "FadeOutDuration");
      LogicParticleEmitterData::sm_columnIndexFadeOutDuration = CSVTable::getColumnIndexByName(a1, &v65);
      String::~String();
      v56 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexFadeOutDuration) == 1;
      Debugger::doAssert((Debugger *)v56, (bool)"", v57);
      String::String(&v64, "Inertia");
      LogicParticleEmitterData::sm_columnIndexInertia = CSVTable::getColumnIndexByName(a1, &v64);
      String::~String();
      v58 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexInertia) == 1;
      Debugger::doAssert((Debugger *)v58, (bool)"", v59);
      String::String(&v63, "EnemyVersion");
      LogicParticleEmitterData::sm_columnIndexEnemyVersion = CSVTable::getColumnIndexByName(a1, &v63);
      String::~String();
      v60 = (unsigned int)CSVTable::getColumnType(a1, LogicParticleEmitterData::sm_columnIndexEnemyVersion) == 0;
      return Debugger::doAssert((Debugger *)v60, (bool)"", v61);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleCount(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleCount);
    }

    __int64 __fastcall LogicParticleEmitterData::getMinLife(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicParticleEmitterData::sm_columnIndexMinLife);
    }

    __int64 __fastcall LogicParticleEmitterData::getMaxLife(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicParticleEmitterData::sm_columnIndexMaxLife);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMinInterval(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMinInterval);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMaxInterval(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMaxInterval);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMinLife(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMinLife);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMaxLife(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMaxLife);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMinAngle(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMinAngle);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMaxAngle(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMaxAngle);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleAngleRelativeToParent(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleAngleRelativeToParent);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleRandomAngle(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleRandomAngle);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMinRadius(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMinRadius);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMaxRadius(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMaxRadius);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMinSpeed(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMinSpeed);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMaxSpeed(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMaxSpeed);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleStartZ(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleStartZ);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMinVelocityZ(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMinVelocityZ);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMaxVelocityZ(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMaxVelocityZ);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleGravity(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleGravity);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMinTailLength(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMinTailLength);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleMaxTailLength(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleMaxTailLength);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleResource(__int64 a1, const char *a2)
    {
      return LogicData::getValueAt(a1, (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleResource, a2);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleExportName(__int64 a1, const char *a2)
    {
      return LogicData::getValueAt(a1, (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleExportName, a2);
    }

    __int64 __fastcall LogicParticleEmitterData::getRotateToDirection(LogicTauntData *this)
    {
      return CSVRow::getBooleanValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexRotateToDirection);
    }

    __int64 __fastcall LogicParticleEmitterData::getParticleResourceCount(LogicTauntData *this)
    {
      return CSVRow::getArraySizeAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexParticleExportName);
    }

    __int64 __fastcall LogicParticleEmitterData::getLoopParticleClip(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexLoopParticleClip);
    }

    __int64 __fastcall LogicParticleEmitterData::getStartScale(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexStartScale);
    }

    __int64 __fastcall LogicParticleEmitterData::getEndScale(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicParticleEmitterData::sm_columnIndexEndScale);
    }

    __int64 __fastcall LogicParticleEmitterData::getFadeOutDuration(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicParticleEmitterData::sm_columnIndexFadeOutDuration);
    }

    __int64 __fastcall LogicParticleEmitterData::getInertia(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicParticleEmitterData::sm_columnIndexInertia);
    }

    __int64 __fastcall LogicParticleEmitterData::getEnemyVersion(LogicTauntData *this)
    {
      return *((_QWORD *)this + 13);
    }

    // attributes: thunk
    void __fastcall LogicParticleEmitterData::~LogicParticleEmitterData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicParticleEmitterData::~LogicParticleEmitterData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicParticleEmitterData
