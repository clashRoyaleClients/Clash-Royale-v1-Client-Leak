class LogicSpawnPointData
{
public:

    void __fastcall LogicSpawnPointData::LogicSpawnPointData(
            LogicSpawnPointData *this,
            const #1223 *a2,
            const ResetAccountMessage *a3)
    {
      _QWORD *v3; // x0
    
      v3 = (_QWORD *)LogicData::LogicData(this, a2, a3);
      *v3 = off_100465220;
      *(_QWORD *)((char *)v3 + 117) = 0;
      v3[13] = 0;
      v3[14] = 0;
    }

    __int64 __fastcall LogicSpawnPointData::destruct(LogicTutorialData *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(this);
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 30) = 0;
      *((_BYTE *)this + 124) = 0;
      return result;
    }

    __int64 __fastcall LogicSpawnPointData::createReferences(LogicTutorialData *this)
    {
      LogicTutorialData *Table; // x0
      const #1224 *v3; // x1
      __int64 ArraySizeAt; // x21
      LogicKickAllianceMemberCommand *ValueAt; // x0
      const AreaEffectObject *v6; // x2
      __int64 result; // x0
      __int64 CharacterByName; // [xsp+8h] [xbp-28h] BYREF
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
      {
        Table = (LogicTutorialData *)CSVRow::getTable(*((_QWORD *)this + 1));
        LogicSpawnPointData::resetStatics(Table, v3);
      }
      *((_DWORD *)this + 29) = 0;
      ArraySizeAt = CSVRow::getArraySizeAt(
                      *((_QWORD *)this + 1),
                      (unsigned int)LogicSpawnPointData::sm_columnIndexCharacters);
      LogicArrayList<LogicCharacterData const*>::ensureCapacity((char *)this + 104, ArraySizeAt);
      if ( (int)ArraySizeAt >= 1 )
      {
        do
        {
          ValueAt = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                        *((_QWORD *)this + 1),
                                                        (unsigned int)LogicSpawnPointData::sm_columnIndexCharacters);
          CharacterByName = LogicDataTables::getCharacterByName(ValueAt, (const String *)this, v6);
          LogicArrayList<LogicCharacterData const*>::add((char *)this + 104, &CharacterByName);
          LODWORD(ArraySizeAt) = ArraySizeAt - 1;
        }
        while ( (_DWORD)ArraySizeAt );
      }
      *((_DWORD *)this + 30) = LogicData::getIntegerValueAt(this, LogicSpawnPointData::sm_columnIndexFirstWait);
      result = LogicData::getBooleanValueAt(this, LogicSpawnPointData::sm_columnIndexDontLoop);
      *((_BYTE *)this + 124) = result;
      return result;
    }

    __n128 __fastcall LogicSpawnPointData::resetStatics(LogicTutorialData *this, const #1224 *a2)
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
      String v16; // [xsp+0h] [xbp-A0h] BYREF
      String v17; // [xsp+18h] [xbp-88h] BYREF
      String v18; // [xsp+30h] [xbp-70h] BYREF
      String v19; // [xsp+48h] [xbp-58h] BYREF
      String v20; // [xsp+60h] [xbp-40h] BYREF
      String v21; // [xsp+78h] [xbp-28h] BYREF
    
      String::String(&v21, "FileName");
      LogicSpawnPointData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(this, &v21);
      String::~String(&v21);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicSpawnPointData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v20, "ExportName");
      LogicSpawnPointData::sm_columnIndexExportName = CSVTable::getColumnIndexByName(this, &v20);
      String::~String(&v20);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicSpawnPointData::sm_columnIndexExportName) == 0;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v19, "Characters");
      LogicSpawnPointData::sm_columnIndexCharacters = CSVTable::getColumnIndexByName(this, &v19);
      String::~String(&v19);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicSpawnPointData::sm_columnIndexCharacters) == 0;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v18, "Wait");
      LogicSpawnPointData::sm_columnIndexWait = CSVTable::getColumnIndexByName(this, &v18);
      String::~String(&v18);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicSpawnPointData::sm_columnIndexWait) == 1;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v17, "DontLoop");
      LogicSpawnPointData::sm_columnIndexDontLoop = CSVTable::getColumnIndexByName(this, &v17);
      String::~String(&v17);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicSpawnPointData::sm_columnIndexDontLoop) == 2;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v16, "FirstWait");
      LogicSpawnPointData::sm_columnIndexFirstWait = CSVTable::getColumnIndexByName(this, &v16);
      String::~String(&v16);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicSpawnPointData::sm_columnIndexFirstWait) == 1;
      return Debugger::doAssert((Debugger *)v13, (bool)"", v14);
    }

    __int64 __fastcall LogicSpawnPointData::getFileName(LogicTutorialData *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicSpawnPointData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicSpawnPointData::getExportName(LogicTutorialData *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicSpawnPointData::sm_columnIndexExportName);
    }

    __int64 __fastcall LogicSpawnPointData::getWait(LogicTutorialData *this, __int64 a2)
    {
      return LogicData::getIntegerValueAt(this, (unsigned int)LogicSpawnPointData::sm_columnIndexWait, a2);
    }

    __int64 __fastcall LogicSpawnPointData::getCharacter(LogicTutorialData *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * a2);
    }

    __int64 __fastcall LogicSpawnPointData::getCharacterCount(LogicTutorialData *this)
    {
      return *((unsigned int *)this + 29);
    }

    __int64 __fastcall LogicSpawnPointData::getFirstWait(LogicTutorialData *this)
    {
      return *((unsigned int *)this + 30);
    }

    __int64 __fastcall LogicSpawnPointData::isDontLoop(LogicTutorialData *this)
    {
      return *((unsigned __int8 *)this + 124);
    }

    // attributes: thunk
    void __fastcall LogicSpawnPointData::~LogicSpawnPointData(LogicTutorialData *this)
    {
      __ZN19LogicSpawnPointDataD2Ev(this);
    }

    void __fastcall LogicSpawnPointData::~LogicSpawnPointData(LogicTutorialData *this)
    {
      LogicSpawnPointData::~LogicSpawnPointData(this);
      operator delete(this);
    }

    void __fastcall LogicSpawnPointData::~LogicSpawnPointData(LogicTutorialData *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      *(_QWORD *)this = off_100465220;
      v3 = (_QWORD *)((char *)this + 104);
      v2 = *((_QWORD *)this + 13);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      LogicData::~LogicData((String *)this);
    }

}; // end class LogicSpawnPointData
