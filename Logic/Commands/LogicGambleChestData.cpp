class LogicGambleChestData
{
public:

    _QWORD *__fastcall LogicGambleChestData::LogicGambleChestData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicData::LogicData(a1, a2, a3);
      *result = off_100471ED0;
      result[13] = 0;
      return result;
    }

    __int64 __fastcall LogicGambleChestData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(a1);
      *(_QWORD *)(a1 + 104) = 0;
      return result;
    }

    void __fastcall LogicGambleChestData::createReferences(AreaEffectObject *a1)
    {
      LogicGambleChestData *Table; // x0
      const CSVTable *v3; // x1
      __int64 v4; // x20
      __int64 Value; // x0
      String v6; // [xsp+8h] [xbp-28h] BYREF
    
      LogicData::createReferences(a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)a1 + 1)) )
      {
        Table = (LogicGambleChestData *)CSVRow::getTable(*((_QWORD *)a1 + 1));
        LogicGambleChestData::resetStatics(Table, v3);
      }
      v4 = *((_QWORD *)a1 + 1);
      String::String(&v6, "Location");
      Value = CSVRow::getValue(v4, &v6, 0);
      *((_QWORD *)a1 + 13) = LogicDataTables::getTreasureChestByName(Value, (__int64)a1);
      String::~String();
    }

    __n128 __fastcall LogicGambleChestData::resetStatics(UdpConnectionInfoMessage *a1)
    {
      _BOOL8 v2; // x0
      const char *v3; // x2
      String v5; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v5, "GoldPrice");
      LogicGambleChestData::sm_columnIndexGoldPrice = CSVTable::getColumnIndexByName(a1, &v5);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicGambleChestData::sm_columnIndexGoldPrice) == 1;
      return Debugger::doAssert((Debugger *)v2, (bool)"", v3);
    }

    __int64 __fastcall LogicGambleChestData::getGoldPrice(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicGambleChestData::sm_columnIndexGoldPrice);
    }

    // attributes: thunk
    void __fastcall LogicGambleChestData::~LogicGambleChestData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicGambleChestData::~LogicGambleChestData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicGambleChestData
