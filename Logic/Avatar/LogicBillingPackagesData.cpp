class LogicBillingPackagesData
{
public:

    void __fastcall LogicBillingPackagesData::LogicBillingPackagesData(
            LogicBillingPackagesData *this,
            const #1223 *a2,
            #1043 *a3)
    {
      LogicData::LogicData(this, a2, a3);
      *(_QWORD *)this = off_100463CC0;
      String::String((String *)((char *)this + 112));
      String::operator=((char *)this + 112, "");
      *(_QWORD *)((char *)this + 100) = 0;
      *((_BYTE *)this + 138) = 1;
      *((_BYTE *)this + 136) = 1;
      *((_BYTE *)this + 137) = 1;
      *((_DWORD *)this + 35) = 0;
    }

    // attributes: thunk
    void __fastcall LogicBillingPackagesData::LogicBillingPackagesData(
            LogicBillingPackagesData *this,
            const #1223 *a2,
            #1043 *a3)
    {
      __ZN24LogicBillingPackagesDataC2EPK6CSVRowP14LogicDataTable(this, a2, a3);
    }

    __int64 __fastcall LogicBillingPackagesData::destruct(DeviceLinkedStreamEntry *this)
    {
      __int64 result; // x0
    
      LogicData::destruct(this);
      result = String::operator=((char *)this + 112, "");
      *(_QWORD *)((char *)this + 100) = 0;
      *((_BYTE *)this + 138) = 1;
      *((_BYTE *)this + 136) = 1;
      *((_BYTE *)this + 137) = 1;
      *((_DWORD *)this + 35) = 0;
      return result;
    }

    __int64 __fastcall LogicBillingPackagesData::getDiamonds(DeviceLinkedStreamEntry *this)
    {
      return *((unsigned int *)this + 25);
    }

    __int64 __fastcall LogicBillingPackagesData::getCurrencyInUSD(DeviceLinkedStreamEntry *this)
    {
      return *((unsigned int *)this + 26);
    }

    __int64 __fastcall LogicBillingPackagesData::getIconFileName(DeviceLinkedStreamEntry *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicBillingPackagesData::sm_columnIndexIconFileName);
    }

    void __fastcall LogicBillingPackagesData::createReferences(DeviceLinkedStreamEntry *this)
    {
      #1224 *Table; // x20
      #1224 *v3; // x0
      _BOOL8 v4; // x0
      const char *v5; // x2
      __int64 v6; // x20
      __int64 v7; // x20
      __int64 v8; // x20
      __int64 v9; // x20
      __int64 v10; // x20
      __int64 v11; // x20
      String v12; // [xsp+8h] [xbp-B8h] BYREF
      String v13; // [xsp+20h] [xbp-A0h] BYREF
      String v14; // [xsp+38h] [xbp-88h] BYREF
      String v15; // [xsp+50h] [xbp-70h] BYREF
      String v16; // [xsp+68h] [xbp-58h] BYREF
      String v17; // [xsp+80h] [xbp-40h] BYREF
      String v18; // [xsp+98h] [xbp-28h] BYREF
    
      LogicData::createReferences(this);
      Table = (#1224 *)CSVRow::getTable(*((_QWORD *)this + 1));
      String::String(&v18, "IconFile");
      LogicBillingPackagesData::sm_columnIndexIconFileName = CSVTable::getColumnIndexByName(Table, &v18);
      String::~String(&v18);
      v3 = (#1224 *)CSVRow::getTable(*((_QWORD *)this + 1));
      v4 = (unsigned int)CSVTable::getColumnType(v3, LogicBillingPackagesData::sm_columnIndexIconFileName) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      v6 = *((_QWORD *)this + 1);
      String::String(&v17, "Disabled");
      *((_BYTE *)this + 138) = CSVRow::getBooleanValue(v6, &v17, 0) ^ 1;
      String::~String(&v17);
      v7 = *((_QWORD *)this + 1);
      String::String(&v16, "ExistsApple");
      *((_BYTE *)this + 137) = CSVRow::getBooleanValue(v7, &v16, 0);
      String::~String(&v16);
      v8 = *((_QWORD *)this + 1);
      String::String(&v15, "ExistsAndroid");
      *((_BYTE *)this + 136) = CSVRow::getBooleanValue(v8, &v15, 0);
      String::~String(&v15);
      v9 = *((_QWORD *)this + 1);
      String::String(&v14, "Diamonds");
      *((_DWORD *)this + 25) = CSVRow::getIntegerValue(v9, &v14, 0);
      String::~String(&v14);
      v10 = *((_QWORD *)this + 1);
      String::String(&v13, "USD");
      *((_DWORD *)this + 26) = CSVRow::getIntegerValue(v10, &v13, 0);
      String::~String(&v13);
      v11 = *((_QWORD *)this + 1);
      String::String(&v12, "Order");
      *((_DWORD *)this + 35) = CSVRow::getIntegerValue(v11, &v12, 0);
      String::~String(&v12);
    }

    bool __fastcall LogicBillingPackagesData::isEnabled(DeviceLinkedStreamEntry *this)
    {
      return *((_BYTE *)this + 138) && *((_BYTE *)this + 137) != 0;
    }

    __int64 __fastcall LogicBillingPackagesData::existsOnPlatform(DeviceLinkedStreamEntry *this)
    {
      return *((unsigned __int8 *)this + 137);
    }

    void __fastcall LogicBillingPackagesData::~LogicBillingPackagesData(DeviceLinkedStreamEntry *this)
    {
      *(_QWORD *)this = off_100463CC0;
      String::~String((String *)((char *)this + 112));
      LogicData::~LogicData((String *)this);
    }

    void __fastcall LogicBillingPackagesData::~LogicBillingPackagesData(DeviceLinkedStreamEntry *this)
    {
      *(_QWORD *)this = off_100463CC0;
      String::~String((String *)((char *)this + 112));
      LogicData::~LogicData((String *)this);
      operator delete(this);
    }

}; // end class LogicBillingPackagesData
