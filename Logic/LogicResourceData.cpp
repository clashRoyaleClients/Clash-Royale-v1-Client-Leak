class LogicResourceData
{
public:

    void __fastcall LogicResourceData::LogicResourceData(
            LogicResourceData *this,
            const #1223 *a2,
            const ResetAccountMessage *a3)
    {
      *(_QWORD *)LogicData::LogicData((__int64)this, (__int64)a2, a3) = off_100468040;
    }

    // attributes: thunk
    __int64 __fastcall LogicResourceData::destruct(__int64 this)
    {
      return LogicData::destruct(this);
    }

    __int64 __fastcall LogicResourceData::createReferences(#1355 *this)
    {
      __int64 result; // x0
      #1355 *Table; // x0
      const #1224 *v4; // x1
    
      LogicData::createReferences(this);
      result = CSVRow::getRowOffset(*((_QWORD *)this + 1));
      if ( !(_DWORD)result )
      {
        Table = (#1355 *)CSVRow::getTable(*((_QWORD *)this + 1));
        return LogicResourceData::resetStatics(Table, v4);
      }
      return result;
    }

    __n128 __fastcall LogicResourceData::resetStatics(#1355 *this, const #1224 *a2)
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
      String v22; // [xsp+8h] [xbp-E8h] BYREF
      String v23; // [xsp+20h] [xbp-D0h] BYREF
      String v24; // [xsp+38h] [xbp-B8h] BYREF
      String v25; // [xsp+50h] [xbp-A0h] BYREF
      String v26; // [xsp+68h] [xbp-88h] BYREF
      String v27; // [xsp+80h] [xbp-70h] BYREF
      String v28; // [xsp+98h] [xbp-58h] BYREF
      String v29; // [xsp+B0h] [xbp-40h] BYREF
      String v30; // [xsp+C8h] [xbp-28h] BYREF
    
      String::String(&v30, "IconFile");
      LogicResourceData::sm_columnIndexIconFileName = CSVTable::getColumnIndexByName(this, &v30);
      String::~String();
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexIconFileName) == 0;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v29, "CollectEffect");
      LogicResourceData::sm_columnIndexCollectEffect = CSVTable::getColumnIndexByName(this, &v29);
      String::~String();
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexCollectEffect) == 0;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v28, "PremiumCurrency");
      LogicResourceData::sm_columnIndexPremiumCurrency = CSVTable::getColumnIndexByName(this, &v28);
      String::~String();
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexPremiumCurrency) == 2;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v27, "CapFullTID");
      LogicResourceData::sm_columnIndexCapFullTID = CSVTable::getColumnIndexByName(this, &v27);
      String::~String();
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexCapFullTID) == 0;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v26, "TextRed");
      LogicResourceData::sm_columnIndexTextRed = CSVTable::getColumnIndexByName(this, &v26);
      String::~String();
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexTextRed) == 1;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v25, "TextGreen");
      LogicResourceData::sm_columnIndexTextGreen = CSVTable::getColumnIndexByName(this, &v25);
      String::~String();
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexTextGreen) == 1;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v24, "TextBlue");
      LogicResourceData::sm_columnIndexTextBlue = CSVTable::getColumnIndexByName(this, &v24);
      String::~String();
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexTextBlue) == 1;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v23, "Cap");
      LogicResourceData::sm_columnIndexCap = CSVTable::getColumnIndexByName(this, &v23);
      String::~String();
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexCap) == 1;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v22, "ShopIcon");
      LogicResourceData::sm_columnIndexShopIconExportName = CSVTable::getColumnIndexByName(this, &v22);
      String::~String();
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicResourceData::sm_columnIndexShopIconExportName) == 0;
      return Debugger::doAssert((Debugger *)v19, (bool)"", v20);
    }

    __int64 __fastcall LogicResourceData::getIconFileName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicResourceData::sm_columnIndexIconFileName);
    }

    __int64 __fastcall LogicResourceData::getPremiumCurrency(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicResourceData::sm_columnIndexPremiumCurrency);
    }

    __int64 __fastcall LogicResourceData::getCapFullTID(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicResourceData::sm_columnIndexCapFullTID);
    }

    __int64 __fastcall LogicResourceData::getShopIconExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicResourceData::sm_columnIndexShopIconExportName);
    }

    __int64 __fastcall LogicResourceData::getResourceCap(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicResourceData::sm_columnIndexCap);
    }

    // attributes: thunk
    void __fastcall LogicResourceData::~LogicResourceData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicResourceData::~LogicResourceData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicResourceData
