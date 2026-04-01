class LogicBackgroundDecoData
{
public:

    __int64 __fastcall LogicBackgroundDecoData::LogicBackgroundDecoData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      __int64 result; // x0
    
      result = LogicData::LogicData(a1, a2, a3);
      *(_QWORD *)result = off_100467428;
      *(_DWORD *)(result + 100) = 0;
      return result;
    }

    __int64 __fastcall LogicBackgroundDecoData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(a1);
      *(_DWORD *)(a1 + 100) = 0;
      return result;
    }

    __int64 __fastcall LogicBackgroundDecoData::createReferences(__int64 a1)
    {
      LogicBackgroundDecoData *Table; // x0
      const CSVTable *v3; // x1
      AskForTVContentMessage *ValueAt; // x0
      const AreaEffectObject *v5; // x2
      __int64 result; // x0
    
      LogicData::createReferences((AreaEffectObject *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (LogicBackgroundDecoData *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicBackgroundDecoData::resetStatics(Table, v3);
      }
      ValueAt = (AskForTVContentMessage *)CSVRow::getValueAt(
                                            *(_QWORD *)(a1 + 8),
                                            (unsigned int)LogicBackgroundDecoData::sm_columnIndexLayer);
      result = LogicEffectData::parseLayer(ValueAt, (String *)a1, v5);
      *(_DWORD *)(a1 + 100) = result;
      return result;
    }

    __n128 __fastcall LogicBackgroundDecoData::resetStatics(#1224 *a1)
    {
      _BOOL8 v2; // x0
      const char *v3; // x2
      _BOOL8 v4; // x0
      const char *v5; // x2
      _BOOL8 v6; // x0
      const char *v7; // x2
      String v9; // [xsp+8h] [xbp-58h] BYREF
      String v10; // [xsp+20h] [xbp-40h] BYREF
      String v11; // [xsp+38h] [xbp-28h] BYREF
    
      String::String(&v11, "FileName");
      LogicBackgroundDecoData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(a1, &v11);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicBackgroundDecoData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v10, "ExportName");
      LogicBackgroundDecoData::sm_columnIndexExportName = CSVTable::getColumnIndexByName(a1, &v10);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicBackgroundDecoData::sm_columnIndexExportName) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v9, "Layer");
      LogicBackgroundDecoData::sm_columnIndexLayer = CSVTable::getColumnIndexByName(a1, &v9);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicBackgroundDecoData::sm_columnIndexLayer) == 0;
      return Debugger::doAssert((Debugger *)v6, (bool)"", v7);
    }

    __int64 __fastcall LogicBackgroundDecoData::getFileName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicBackgroundDecoData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicBackgroundDecoData::getExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicBackgroundDecoData::sm_columnIndexExportName);
    }

    __int64 __fastcall LogicBackgroundDecoData::getLayer(__int64 a1)
    {
      return *(unsigned int *)(a1 + 100);
    }

    // attributes: thunk
    void __fastcall LogicBackgroundDecoData::~LogicBackgroundDecoData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicBackgroundDecoData::~LogicBackgroundDecoData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicBackgroundDecoData
