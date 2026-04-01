class LogicEffectData
{
public:

    void __fastcall LogicEffectData::LogicEffectData(LogicEffectData *this, const #1223 *a2, const #1043 *a3)
    {
      LogicData::LogicData(this, a2, a3);
      *(_QWORD *)this = off_100462828;
      memset((char *)this + 104, 0, 0x62u);
    }

    __int64 __fastcall LogicEffectData::destruct(AskForTVContentMessage *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(this);
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 33) = 0;
      *((_DWORD *)this + 37) = 0;
      *((_DWORD *)this + 41) = 0;
      *(_QWORD *)((char *)this + 194) = 0;
      *(_QWORD *)((char *)this + 188) = 0;
      *(_QWORD *)((char *)this + 180) = 0;
      return result;
    }

    AskForTVContentMessage *__fastcall LogicEffectData::createReferences(AskForTVContentMessage *this)
    {
      AskForTVContentMessage *Table; // x0
      const #1224 *v3; // x1
      __int64 ArraySizeAt; // x24
      __int64 v5; // x25
      AskForTVContentMessage *ValueAt; // x0
      const AreaEffectObject *v7; // x2
      __int64 v8; // x28
      LogicDataTables *v9; // x0
      const LogicData *v10; // x2
      const char *v11; // x1
      #1004 *v12; // x0
      const AreaEffectObject *v13; // x2
      _QWORD *v14; // x8
      const String *v15; // x1
      #1004 *v16; // x0
      const AreaEffectObject *v17; // x2
      int IntegerValueAt; // w0
      float v19; // s0
      #1004 *v20; // x0
      const AreaEffectObject *v21; // x2
      AskForTVContentMessage *result; // x0
      AskForTVContentMessage *v23; // x8
      __int64 SoundByName; // [xsp+10h] [xbp-90h] BYREF
      __siginfo v25; // [xsp+18h] [xbp-88h] BYREF
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
      {
        Table = (AskForTVContentMessage *)CSVRow::getTable(*((_QWORD *)this + 1));
        LogicEffectData::resetStatics(Table, v3);
      }
      *((_BYTE *)this + 200) = LogicData::getBooleanValueAt(this, LogicEffectData::sm_columnIndexFollowParent);
      *((_BYTE *)this + 201) = LogicData::getBooleanValueAt(this, LogicEffectData::sm_columnIndexLoop);
      *((_DWORD *)this + 48) = LogicData::getIntegerValueAt(this, LogicEffectData::sm_columnIndexShakeScreen);
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 33) = 0;
      *((_DWORD *)this + 37) = 0;
      *((_DWORD *)this + 41) = 0;
      *((_DWORD *)this + 45) = 0;
      ArraySizeAt = CSVRow::getArraySizeAt(*((_QWORD *)this + 1), (unsigned int)LogicEffectData::sm_columnIndexType);
      LogicArrayList<int>::ensureCapacity((__int64)this + 104, ArraySizeAt);
      LogicArrayList<int>::ensureCapacity((__int64)this + 120, ArraySizeAt);
      LogicArrayList<LogicParticleEmitterData const*>::ensureCapacity((char *)this + 136, ArraySizeAt);
      LogicArrayList<LogicSoundData const*>::ensureCapacity((char *)this + 152, ArraySizeAt);
      LogicArrayList<LogicParticleEmitterData const*>::ensureCapacity((char *)this + 136, ArraySizeAt);
      if ( (int)ArraySizeAt >= 1 )
      {
        v5 = 0;
        do
        {
          ValueAt = (AskForTVContentMessage *)LogicData::getValueAt(
                                                this,
                                                (unsigned int)LogicEffectData::sm_columnIndexLayer,
                                                v5);
          HIDWORD(v25.__pad[0]) = LogicEffectData::parseLayer(ValueAt, (const String *)this, v7);
          LogicArrayList<int>::add((__int64)this + 104, (int *)v25.__pad + 1);
          v25.si_value.sival_ptr = 0;
          v25.si_band = 0;
          v8 = LogicData::getValueAt(this, (unsigned int)LogicEffectData::sm_columnIndexType, v5);
          HIDWORD(v25.si_addr) = 3;
          if ( (unsigned int)String::equalsIgnoreCase(v8, "Filter") )
          {
            HIDWORD(v25.si_addr) = 0;
          }
          else if ( (unsigned int)String::equalsIgnoreCase(v8, "SWF") )
          {
            HIDWORD(v25.si_addr) = 1;
          }
          else if ( (unsigned int)String::equalsIgnoreCase(v8, "ParticleEmitter") )
          {
            HIDWORD(v25.si_addr) = 2;
            v9 = (LogicDataTables *)LogicData::getValueAt(
                                      this,
                                      (unsigned int)LogicEffectData::sm_columnIndexParticleEmitterName,
                                      v5);
            v25.si_band = LogicDataTables::getParticleEmitterByName(v9, (const String *)this, v10);
          }
          else if ( (unsigned int)String::equalsIgnoreCase(v8, "ScreenFlash") )
          {
            HIDWORD(v25.si_addr) = 3;
          }
          else if ( (unsigned int)String::equalsIgnoreCase(v8, "Effect") )
          {
            HIDWORD(v25.si_addr) = 4;
            v12 = (#1004 *)LogicData::getValueAt(this, (unsigned int)LogicEffectData::sm_columnIndexEffect, v5);
            v25.si_value.sival_ptr = (void *)LogicDataTables::getEffectByName(v12, (const String *)this, v13);
          }
          else
          {
            v14 = (_QWORD *)(v8 + 8);
            if ( *(_DWORD *)(v8 + 4) + 1 > 8 )
              v14 = (_QWORD *)*v14;
            String::format((String *)"Invalid type in effects.csv: %s", v11, v14);
            Debugger::warning(&v25, v15);
            String::~String((String *)&v25);
          }
          LogicArrayList<int>::add((__int64)this + 120, (int *)&v25.si_addr + 1);
          LogicArrayList<LogicParticleEmitterData const*>::add((char *)this + 136, &v25.si_band);
          LogicArrayList<LogicEffectData const*>::add((char *)this + 168, &v25.si_value);
          v16 = (#1004 *)LogicData::getValueAt(this, (unsigned int)LogicEffectData::sm_columnIndexSound, v5);
          SoundByName = LogicDataTables::getSoundByName(v16, (const String *)this, v17);
          LogicArrayList<LogicSoundData const*>::add((char *)this + 152, &SoundByName);
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (int)v5 < (int)ArraySizeAt );
      }
      IntegerValueAt = CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicEffectData::sm_columnIndexScale);
      if ( IntegerValueAt )
        v19 = (float)IntegerValueAt / 100.0;
      else
        v19 = 1.0;
      *((float *)this + 49) = v19;
      v20 = (#1004 *)CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicEffectData::sm_columnIndexEnemyVersion);
      result = (AskForTVContentMessage *)LogicDataTables::getEffectByName(v20, (const String *)this, v21);
      if ( result )
        v23 = result;
      else
        v23 = this;
      *((_QWORD *)this + 23) = v23;
      return result;
    }

    __n128 __fastcall LogicEffectData::resetStatics(AskForTVContentMessage *this, const #1224 *a2)
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
      String v40; // [xsp+0h] [xbp-1D0h] BYREF
      String v41; // [xsp+18h] [xbp-1B8h] BYREF
      String v42; // [xsp+30h] [xbp-1A0h] BYREF
      String v43; // [xsp+48h] [xbp-188h] BYREF
      String v44; // [xsp+60h] [xbp-170h] BYREF
      String v45; // [xsp+78h] [xbp-158h] BYREF
      String v46; // [xsp+90h] [xbp-140h] BYREF
      String v47; // [xsp+A8h] [xbp-128h] BYREF
      String v48; // [xsp+C0h] [xbp-110h] BYREF
      String v49; // [xsp+D8h] [xbp-F8h] BYREF
      String v50; // [xsp+F0h] [xbp-E0h] BYREF
      String v51; // [xsp+108h] [xbp-C8h] BYREF
      String v52; // [xsp+120h] [xbp-B0h] BYREF
      String v53; // [xsp+138h] [xbp-98h] BYREF
      String v54; // [xsp+150h] [xbp-80h] BYREF
      String v55; // [xsp+168h] [xbp-68h] BYREF
      String v56; // [xsp+180h] [xbp-50h] BYREF
      String v57; // [xsp+198h] [xbp-38h] BYREF
    
      String::String(&v57, "FlashWidth");
      LogicEffectData::sm_columnIndexFlashWidth = CSVTable::getColumnIndexByName(this, &v57);
      String::~String(&v57);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexFlashWidth) == 1;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v56, "FileName");
      LogicEffectData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(this, &v56);
      String::~String(&v56);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v55, "ExportName");
      LogicEffectData::sm_columnIndexExportName = CSVTable::getColumnIndexByName(this, &v55);
      String::~String(&v55);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexExportName) == 0;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v54, "Loop");
      LogicEffectData::sm_columnIndexLoop = CSVTable::getColumnIndexByName(this, &v54);
      String::~String(&v54);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexLoop) == 2;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v53, "Layer");
      LogicEffectData::sm_columnIndexLayer = CSVTable::getColumnIndexByName(this, &v53);
      String::~String(&v53);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexLayer) == 0;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v52, "Sound");
      LogicEffectData::sm_columnIndexSound = CSVTable::getColumnIndexByName(this, &v52);
      String::~String(&v52);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexSound) == 0;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v51, "FollowParent");
      LogicEffectData::sm_columnIndexFollowParent = CSVTable::getColumnIndexByName(this, &v51);
      String::~String(&v51);
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexFollowParent) == 2;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v50, "Scale");
      LogicEffectData::sm_columnIndexScale = CSVTable::getColumnIndexByName(this, &v50);
      String::~String(&v50);
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexScale) == 1;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v49, "Time");
      LogicEffectData::sm_columnIndexTime = CSVTable::getColumnIndexByName(this, &v49);
      String::~String(&v49);
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexTime) == 1;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v48, "ShakeScreen");
      LogicEffectData::sm_columnIndexShakeScreen = CSVTable::getColumnIndexByName(this, &v48);
      String::~String(&v48);
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexShakeScreen) == 1;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v47, "Type");
      LogicEffectData::sm_columnIndexType = CSVTable::getColumnIndexByName(this, &v47);
      String::~String(&v47);
      v23 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexType) == 0;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v46, "ParticleEmitterName");
      LogicEffectData::sm_columnIndexParticleEmitterName = CSVTable::getColumnIndexByName(this, &v46);
      String::~String(&v46);
      v25 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexParticleEmitterName) == 0;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v45, "FlashColor");
      LogicEffectData::sm_columnIndexFlashColor = CSVTable::getColumnIndexByName(this, &v45);
      String::~String(&v45);
      v27 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexFlashColor) == 1;
      Debugger::doAssert((Debugger *)v27, (bool)"", v28);
      String::String(&v44, "FlashDuration");
      LogicEffectData::sm_columnIndexFlashDuration = CSVTable::getColumnIndexByName(this, &v44);
      String::~String(&v44);
      v29 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexFlashDuration) == 1;
      Debugger::doAssert((Debugger *)v29, (bool)"", v30);
      String::String(&v43, "TextInstanceName");
      LogicEffectData::sm_columnIndexTextInstanceName = CSVTable::getColumnIndexByName(this, &v43);
      String::~String(&v43);
      v31 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexTextInstanceName) == 0;
      Debugger::doAssert((Debugger *)v31, (bool)"", v32);
      String::String(&v42, "TextParentInstanceName");
      LogicEffectData::sm_columnIndexTextParentInstanceName = CSVTable::getColumnIndexByName(this, &v42);
      String::~String(&v42);
      v33 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexTextParentInstanceName) == 0;
      Debugger::doAssert((Debugger *)v33, (bool)"", v34);
      String::String(&v41, "Effect");
      LogicEffectData::sm_columnIndexEffect = CSVTable::getColumnIndexByName(this, &v41);
      String::~String(&v41);
      v35 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexEffect) == 0;
      Debugger::doAssert((Debugger *)v35, (bool)"", v36);
      String::String(&v40, "EnemyVersion");
      LogicEffectData::sm_columnIndexEnemyVersion = CSVTable::getColumnIndexByName(this, &v40);
      String::~String(&v40);
      v37 = (unsigned int)CSVTable::getColumnType(this, LogicEffectData::sm_columnIndexEnemyVersion) == 0;
      return Debugger::doAssert((Debugger *)v37, (bool)"", v38);
    }

    __int64 __fastcall LogicEffectData::parseLayer(AskForTVContentMessage *this, String *a2, const AreaEffectObject *a3)
    {
      __int64 CSVRow; // x0
      #1224 *Table; // x0
      __int64 FileName; // x21
      int v9; // w8
      _QWORD *v10; // x20
      __int64 Name; // x0
      const char *v12; // x1
      _QWORD *v13; // x8
      _QWORD *v14; // x9
      const String *v15; // x1
      String v16; // [xsp+18h] [xbp-38h] BYREF
    
      if ( (String::equalsIgnoreCase(this, "Ground") & 1) == 0 )
      {
        if ( (String::equalsIgnoreCase(this, "Object") & 1) != 0 )
          return 9;
        if ( (String::equalsIgnoreCase(this, "Above") & 1) != 0 )
          return 10;
        if ( (String::equalsIgnoreCase(this, "Shadow") & 1) != 0 )
          return 4;
        if ( (String::equalsIgnoreCase(this, "Base") & 1) != 0 )
          return 3;
        if ( (String::equalsIgnoreCase(this, "Background1") & 1) != 0 )
          return 0;
        if ( (String::equalsIgnoreCase(this, "Background2") & 1) != 0 )
          return 1;
        if ( (String::equalsIgnoreCase(this, "Background3") & 1) != 0 )
          return 2;
        CSVRow = LogicData::getCSVRow(a2);
        Table = (#1224 *)CSVRow::getTable(CSVRow);
        FileName = CSVTable::getFileName(Table);
        v9 = *((_DWORD *)this + 1) + 1;
        v10 = (_QWORD *)((char *)this + 8);
        if ( v9 > 8 )
          v10 = (_QWORD *)*v10;
        Name = LogicData::getName((AreaEffectObject *)a2);
        v13 = (_QWORD *)(Name + 8);
        if ( *(_DWORD *)(Name + 4) + 1 > 8 )
          v13 = (_QWORD *)*v13;
        v14 = (_QWORD *)(FileName + 8);
        if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
          v14 = (_QWORD *)*v14;
        String::format((String *)"Invalid layer '%s' in %s, %s", v12, v10, v13, v14);
        Debugger::warning((__siginfo *)&v16, v15);
        String::~String(&v16);
      }
      return 7;
    }

    __int64 __fastcall LogicEffectData::getFileName(AskForTVContentMessage *this, __int64 a2)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicEffectData::sm_columnIndexFileName, a2);
    }

    __int64 __fastcall LogicEffectData::getExportName(AskForTVContentMessage *this, __int64 a2)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicEffectData::sm_columnIndexExportName, a2);
    }

    __int64 __fastcall LogicEffectData::getLoop(AskForTVContentMessage *this)
    {
      return *((unsigned __int8 *)this + 201);
    }

    __int64 __fastcall LogicEffectData::getLayer(AskForTVContentMessage *this, int a2)
    {
      return *(unsigned int *)(*((_QWORD *)this + 13) + 4LL * a2);
    }

    __int64 __fastcall LogicEffectData::getSound(AskForTVContentMessage *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * a2);
    }

    __int64 __fastcall LogicEffectData::isFollowParent(AskForTVContentMessage *this)
    {
      return *((unsigned __int8 *)this + 200);
    }

    float __fastcall LogicEffectData::getScale(AskForTVContentMessage *this)
    {
      return *((float *)this + 49);
    }

    __int64 __fastcall LogicEffectData::getRenderableCount(AskForTVContentMessage *this)
    {
      return *((unsigned int *)this + 29);
    }

    __int64 __fastcall LogicEffectData::getRenderableTime(AskForTVContentMessage *this, __int64 a2)
    {
      return LogicData::getIntegerValueAt(this, (unsigned int)LogicEffectData::sm_columnIndexTime, a2);
    }

    __int64 __fastcall LogicEffectData::getFlashWidth(AskForTVContentMessage *this, __int64 a2)
    {
      return LogicData::getIntegerValueAt(this, (unsigned int)LogicEffectData::sm_columnIndexFlashWidth, a2);
    }

    __int64 __fastcall LogicEffectData::getShakeScreen(AskForTVContentMessage *this)
    {
      return *((unsigned int *)this + 48);
    }

    __int64 __fastcall LogicEffectData::getRenderableType(AskForTVContentMessage *this, int a2)
    {
      return *(unsigned int *)(*((_QWORD *)this + 15) + 4LL * a2);
    }

    __int64 __fastcall LogicEffectData::getParticleEmitter(AskForTVContentMessage *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * a2);
    }

    __int64 __fastcall LogicEffectData::getTextParentInstanceName(AskForTVContentMessage *this, __int64 a2)
    {
      return LogicData::getValueAt(this, (unsigned int)LogicEffectData::sm_columnIndexTextParentInstanceName, a2);
    }

    __int64 __fastcall LogicEffectData::getTextInstanceName(AskForTVContentMessage *this, __int64 a2)
    {
      return LogicData::getValueAt(this, (unsigned int)LogicEffectData::sm_columnIndexTextInstanceName, a2);
    }

    __int64 __fastcall LogicEffectData::getEffect(AskForTVContentMessage *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * a2);
    }

    __int64 __fastcall LogicEffectData::getEnemyVersion(AskForTVContentMessage *this)
    {
      return *((_QWORD *)this + 23);
    }

    // attributes: thunk
    void __fastcall LogicEffectData::~LogicEffectData(AskForTVContentMessage *this)
    {
      __ZN15LogicEffectDataD2Ev(this);
    }

    void __fastcall LogicEffectData::~LogicEffectData(AskForTVContentMessage *this)
    {
      LogicEffectData::~LogicEffectData(this);
      operator delete(this);
    }

    void __fastcall LogicEffectData::~LogicEffectData(AskForTVContentMessage *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
    
      *(_QWORD *)this = off_100462828;
      v3 = (_QWORD *)((char *)this + 168);
      v2 = *((_QWORD *)this + 21);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = *((_QWORD *)this + 19);
      if ( v4 )
        operator delete[](v4);
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 20) = 0;
      v5 = *((_QWORD *)this + 17);
      if ( v5 )
        operator delete[](v5);
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 18) = 0;
      v6 = *((_QWORD *)this + 15);
      if ( v6 )
        operator delete[](v6);
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      v7 = *((_QWORD *)this + 13);
      if ( v7 )
        operator delete[](v7);
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 14) = 0;
      LogicData::~LogicData((String *)this);
    }

}; // end class LogicEffectData
