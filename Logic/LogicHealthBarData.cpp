class LogicHealthBarData
{
public:

    _QWORD *__fastcall LogicHealthBarData::LogicHealthBarData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicData::LogicData(a1, a2, a3);
      *result = off_10046F170;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicHealthBarData::destruct(__int64 a1)
    {
      return LogicData::destruct(a1);
    }

    __int64 __fastcall LogicHealthBarData::createReferences(AreaEffectObject *a1)
    {
      __int64 result; // x0
      LogicHealthBarData *Table; // x0
      const CSVTable *v4; // x1
    
      LogicData::createReferences(a1);
      result = CSVRow::getRowOffset(*((_QWORD *)a1 + 1));
      if ( !(_DWORD)result )
      {
        Table = (LogicHealthBarData *)CSVRow::getTable(*((_QWORD *)a1 + 1));
        return LogicHealthBarData::resetStatics(Table, v4);
      }
      return result;
    }

    __n128 __fastcall LogicHealthBarData::resetStatics(#1224 *a1)
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
      String v21; // [xsp+8h] [xbp-E8h] BYREF
      String v22; // [xsp+20h] [xbp-D0h] BYREF
      String v23; // [xsp+38h] [xbp-B8h] BYREF
      String v24; // [xsp+50h] [xbp-A0h] BYREF
      String v25; // [xsp+68h] [xbp-88h] BYREF
      String v26; // [xsp+80h] [xbp-70h] BYREF
      String v27; // [xsp+98h] [xbp-58h] BYREF
      String v28; // [xsp+B0h] [xbp-40h] BYREF
      String v29; // [xsp+C8h] [xbp-28h] BYREF
    
      String::String(&v29, "FileName");
      LogicHealthBarData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(a1, &v29);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v28, "PlayerExportName");
      LogicHealthBarData::sm_columnIndexPlayerExportName = CSVTable::getColumnIndexByName(a1, &v28);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexPlayerExportName) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v27, "EnemyExportName");
      LogicHealthBarData::sm_columnIndexEnemyExportName = CSVTable::getColumnIndexByName(a1, &v27);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexEnemyExportName) == 0;
      Debugger::doAssert((Debugger *)v6, (bool)"", v7);
      String::String(&v26, "MinimumHitpointValue");
      LogicHealthBarData::sm_columnIndexMinimumHitpointValue = CSVTable::getColumnIndexByName(a1, &v26);
      String::~String();
      v8 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexMinimumHitpointValue) == 1;
      Debugger::doAssert((Debugger *)v8, (bool)"", v9);
      String::String(&v25, "ShowOwnAlways");
      LogicHealthBarData::sm_columnIndexShowOwnAlways = CSVTable::getColumnIndexByName(a1, &v25);
      String::~String();
      v10 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexShowOwnAlways) == 2;
      Debugger::doAssert((Debugger *)v10, (bool)"", v11);
      String::String(&v24, "ShowEnemyAlways");
      LogicHealthBarData::sm_columnIndexShowEnemyAlways = CSVTable::getColumnIndexByName(a1, &v24);
      String::~String();
      v12 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexShowEnemyAlways) == 2;
      Debugger::doAssert((Debugger *)v12, (bool)"", v13);
      String::String(&v23, "YOffset");
      LogicHealthBarData::sm_columnIndexYOffset = CSVTable::getColumnIndexByName(a1, &v23);
      String::~String();
      v14 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexYOffset) == 1;
      Debugger::doAssert((Debugger *)v14, (bool)"", v15);
      String::String(&v22, "NoDamagePlayerExportName");
      LogicHealthBarData::sm_columnIndexNoDamagePlayerExportName = CSVTable::getColumnIndexByName(a1, &v22);
      String::~String();
      v16 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexNoDamagePlayerExportName) == 0;
      Debugger::doAssert((Debugger *)v16, (bool)"", v17);
      String::String(&v21, "NoDamageEnemyExportName");
      LogicHealthBarData::sm_columnIndexNoDamageEnemyExportName = CSVTable::getColumnIndexByName(a1, &v21);
      String::~String();
      v18 = (unsigned int)CSVTable::getColumnType(a1, LogicHealthBarData::sm_columnIndexNoDamageEnemyExportName) == 0;
      return Debugger::doAssert((Debugger *)v18, (bool)"", v19);
    }

    __int64 __fastcall LogicHealthBarData::getFileName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicHealthBarData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicHealthBarData::getPlayerExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicHealthBarData::sm_columnIndexPlayerExportName);
    }

    __int64 __fastcall LogicHealthBarData::getEnemyExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicHealthBarData::sm_columnIndexEnemyExportName);
    }

    __int64 __fastcall LogicHealthBarData::getMinimumHitpointValue(__int64 a1)
    {
      if ( (unsigned int)CSVRow::getArraySizeAt(
                           *(_QWORD *)(a1 + 8),
                           (unsigned int)LogicHealthBarData::sm_columnIndexMinimumHitpointValue) )
        return CSVRow::getIntegerValueAt(
                 *(_QWORD *)(a1 + 8),
                 (unsigned int)LogicHealthBarData::sm_columnIndexMinimumHitpointValue);
      else
        return 0xFFFFFFFFLL;
    }

    __int64 __fastcall LogicHealthBarData::isShowEnemyAlways(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicHealthBarData::sm_columnIndexShowEnemyAlways);
    }

    __int64 __fastcall LogicHealthBarData::isShowOwnAlways(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicHealthBarData::sm_columnIndexShowOwnAlways);
    }

    __int64 __fastcall LogicHealthBarData::getYOffset(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicHealthBarData::sm_columnIndexYOffset);
    }

    __int64 __fastcall LogicHealthBarData::getNoDamagePlayerExportName(__int64 a1)
    {
      return CSVRow::getValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicHealthBarData::sm_columnIndexNoDamagePlayerExportName);
    }

    __int64 __fastcall LogicHealthBarData::getNoDamageEnemyExportName(__int64 a1)
    {
      return CSVRow::getValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicHealthBarData::sm_columnIndexNoDamageEnemyExportName);
    }

    // attributes: thunk
    void __fastcall LogicHealthBarData::~LogicHealthBarData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicHealthBarData::~LogicHealthBarData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicHealthBarData
