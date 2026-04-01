class LogicHintData
{
public:

    void __fastcall LogicHintData::LogicHintData(LogicHintData *this, const #1223 *a2, #1043 *a3)
    {
      LogicData::LogicData(this, a2, a3);
      *(_QWORD *)this = off_100464670;
      String::String((String *)((char *)this + 136));
      String::String((String *)((char *)this + 160));
      String::operator=((char *)this + 136, "");
      String::operator=((char *)this + 160, "");
      *((_BYTE *)this + 97) = 0;
      *(_QWORD *)((char *)this + 124) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
    }

    // attributes: thunk
    void __fastcall LogicHintData::LogicHintData(LogicHintData *this, const #1223 *a2, #1043 *a3)
    {
      __ZN13LogicHintDataC2EPK6CSVRowP14LogicDataTable(this, a2, a3);
    }

    __int64 __fastcall LogicHintData::destruct(LogicRequestSpellsCommand *this)
    {
      __int64 result; // x0
    
      LogicData::destruct(this);
      String::operator=((char *)this + 136, "");
      result = String::operator=((char *)this + 160, "");
      *((_BYTE *)this + 97) = 0;
      *(_QWORD *)((char *)this + 124) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      return result;
    }

    __int64 __fastcall LogicHintData::createReferences2(LogicRequestSpellsCommand *this)
    {
      int v2; // w1
      __int64 Table; // x20
      __int64 v4; // x21
      __int64 v5; // x21
      #1237 *v6; // x21
      int v7; // w0
      int v8; // w3
      #1237 *v9; // x21
      int v10; // w0
      int v11; // w3
      __int64 result; // x0
      String v13; // [xsp+0h] [xbp-50h] BYREF
      String v14; // [xsp+18h] [xbp-38h] BYREF
    
      LogicData::createReferences2(this);
      Table = LogicDataTables::getTable((LogicDataTables *)0x36, v2);
      v4 = *((_QWORD *)this + 1);
      String::String(&v14, "MinArena");
      *((_DWORD *)this + 25) = CSVRow::getIntegerValue(v4, &v14, 0);
      String::~String(&v14);
      v5 = *((_QWORD *)this + 1);
      String::String(&v13, "MaxArena");
      *((_DWORD *)this + 26) = CSVRow::getIntegerValue(v5, &v13, 0);
      String::~String(&v13);
      v6 = (#1237 *)*((unsigned int *)this + 25);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      *((_DWORD *)this + 25) = LogicMath::clamp(v6, 0, v7 - 1, v8);
      v9 = (#1237 *)*((unsigned int *)this + 26);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      result = LogicMath::clamp(v9, 0, v10 - 1, v11);
      *((_DWORD *)this + 26) = result;
      return result;
    }

    void __fastcall LogicHintData::createReferences(LogicRequestSpellsCommand *this)
    {
      __int64 v2; // x20
      __int64 v3; // x20
      __int64 v4; // x20
      __int64 v5; // x20
      __int64 v6; // x20
      __int64 v7; // x20
      __int64 v8; // x20
      __int64 v9; // x20
      __int64 v10; // x20
      String v11; // [xsp+8h] [xbp-E8h] BYREF
      String v12; // [xsp+20h] [xbp-D0h] BYREF
      String v13; // [xsp+38h] [xbp-B8h] BYREF
      String v14; // [xsp+50h] [xbp-A0h] BYREF
      String v15; // [xsp+68h] [xbp-88h] BYREF
      String v16; // [xsp+80h] [xbp-70h] BYREF
      String v17; // [xsp+98h] [xbp-58h] BYREF
      String v18; // [xsp+B0h] [xbp-40h] BYREF
      String v19; // [xsp+C8h] [xbp-28h] BYREF
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
        CSVRow::getTable(*((_QWORD *)this + 1));
      v2 = *((_QWORD *)this + 1);
      String::String(&v19, "NotBeenInClan");
      *((_BYTE *)this + 97) = CSVRow::getBooleanValue(v2, &v19, 0);
      String::~String(&v19);
      v3 = *((_QWORD *)this + 1);
      String::String(&v18, "MinTrophies");
      *((_DWORD *)this + 27) = CSVRow::getIntegerValue(v3, &v18, 0);
      String::~String(&v18);
      v4 = *((_QWORD *)this + 1);
      String::String(&v17, "MaxTrophies");
      *((_DWORD *)this + 28) = CSVRow::getIntegerValue(v4, &v17, 0);
      String::~String(&v17);
      v5 = *((_QWORD *)this + 1);
      String::String(&v16, "MinExpLevel");
      *((_DWORD *)this + 29) = CSVRow::getIntegerValue(v5, &v16, 0);
      String::~String(&v16);
      v6 = *((_QWORD *)this + 1);
      String::String(&v15, "MaxExpLevel");
      *((_DWORD *)this + 30) = CSVRow::getIntegerValue(v6, &v15, 0);
      String::~String(&v15);
      v7 = *((_QWORD *)this + 1);
      String::String(&v14, "MinNpcWins");
      *((_DWORD *)this + 31) = CSVRow::getIntegerValue(v7, &v14, 0);
      String::~String(&v14);
      v8 = *((_QWORD *)this + 1);
      String::String(&v13, "MaxNpcWins");
      *((_DWORD *)this + 32) = CSVRow::getIntegerValue(v8, &v13, 0);
      String::~String(&v13);
      v9 = *((_QWORD *)this + 1);
      String::String(&v12, "iOSTID");
      CSVRow::getValue(v9, &v12, 0);
      String::operator=((String *)((char *)this + 160));
      String::~String(&v12);
      v10 = *((_QWORD *)this + 1);
      String::String(&v11, "AndroidTID");
      CSVRow::getValue(v10, &v11, 0);
      String::operator=((String *)((char *)this + 136));
      String::~String(&v11);
    }

    __int64 __fastcall LogicHintData::canBeShown(LogicRequestSpellsCommand *this, int a2, int a3, int a4, int a5, int a6)
    {
      bool v6; // zf
      int v7; // w8
      int v9; // w8
      int v11; // w8
      int v12; // w8
      int v13; // w8
      int v14; // w8
    
      if ( *((_BYTE *)this + 97) )
        v6 = a6 == 1;
      else
        v6 = 0;
      if ( v6 )
        return 0;
      v7 = *((_DWORD *)this + 27);
      if ( v7 && v7 > a5 )
        return 0;
      v9 = *((_DWORD *)this + 28);
      if ( v9 && v9 < a5 )
        return 0;
      v11 = *((_DWORD *)this + 31);
      if ( v11 )
      {
        if ( v11 > a4 )
          return 0;
      }
      v12 = *((_DWORD *)this + 32);
      if ( v12 )
      {
        if ( v12 < a4 )
          return 0;
      }
      v13 = *((_DWORD *)this + 29);
      if ( v13 )
      {
        if ( v13 > a2 )
          return 0;
      }
      v14 = *((_DWORD *)this + 30);
      if ( v14 )
      {
        if ( v14 < a2 )
          return 0;
      }
      if ( *((_DWORD *)this + 25) > a3 )
        return 0;
      else
        return (*((_DWORD *)this + 26) >= a3) | (unsigned int)(*((_DWORD *)this + 26) == 0);
    }

    __int64 __fastcall LogicHintData::getIOSTID(LogicRequestSpellsCommand *this)
    {
      return (__int64)this + 160;
    }

    void __fastcall LogicHintData::~LogicHintData(LogicRequestSpellsCommand *this)
    {
      *(_QWORD *)this = off_100464670;
      String::~String((String *)((char *)this + 160));
      String::~String((String *)((char *)this + 136));
      LogicData::~LogicData((String *)this);
    }

    void __fastcall LogicHintData::~LogicHintData(__int64 a1)
    {
      *(_QWORD *)a1 = off_100464670;
      String::~String((String *)(a1 + 160));
      String::~String((String *)(a1 + 136));
      LogicData::~LogicData((String *)a1);
      operator delete((void *)a1);
    }

}; // end class LogicHintData
