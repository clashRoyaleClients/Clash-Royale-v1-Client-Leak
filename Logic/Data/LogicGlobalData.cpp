class LogicGlobalData
{
public:

    __int64 __fastcall LogicGlobalData::LogicGlobalData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      LogicData::LogicData(a1, a2, a3);
      *(_QWORD *)a1 = off_10046F428;
      String::String((String *)(a1 + 104));
      *(_DWORD *)(a1 + 100) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_BYTE *)(a1 + 160) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      String::operator=(a1 + 104, "");
      *(_DWORD *)(a1 + 140) = 0;
      *(_DWORD *)(a1 + 156) = 0;
      return a1;
    }

    // attributes: thunk
    void __fastcall LogicGlobalData::LogicGlobalData(LogicGlobalData *this, __int64 a2, ResetAccountMessage *a3)
    {
      __ZN15LogicGlobalDataC2EPK6CSVRowP14LogicDataTable((__int64)this, a2, a3);
    }

    __int64 __fastcall LogicGlobalData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      LogicData::destruct(a1);
      *(_BYTE *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 100) = 0;
      result = String::operator=(a1 + 104, "");
      *(_DWORD *)(a1 + 140) = 0;
      *(_DWORD *)(a1 + 156) = 0;
      return result;
    }

    void __fastcall LogicGlobalData::createReferences(__int64 a1)
    {
      __int64 v2; // x20
      int ArraySize; // w20
      const char *v4; // x22
      __int64 v5; // x20
      int v6; // w20
      __int64 v7; // x22
      __int64 v8; // x24
      String v9; // [xsp+0h] [xbp-E0h] BYREF
      int IntegerValue; // [xsp+1Ch] [xbp-C4h] BYREF
      String v11; // [xsp+20h] [xbp-C0h] BYREF
      String v12; // [xsp+38h] [xbp-A8h] BYREF
      String v13; // [xsp+50h] [xbp-90h] BYREF
      String v14; // [xsp+68h] [xbp-78h] BYREF
      String v15; // [xsp+80h] [xbp-60h] BYREF
      String v16; // [xsp+98h] [xbp-48h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      String::String(&v16, "BooleanValue");
      *(_BYTE *)(a1 + 160) = LogicData::getBooleanValue(a1, (__int64)&v16);
      String::~String();
      String::String(&v15, "NumberValue");
      *(_DWORD *)(a1 + 100) = LogicData::getIntegerValue(a1, (__int64)&v15);
      String::~String();
      String::String(&v14, "TextValue");
      LogicData::getValue(a1, (__int64)&v14);
      String::operator=((String *)(a1 + 104));
      String::~String();
      v2 = *(_QWORD *)(a1 + 8);
      String::String(&v13, "StringArray");
      ArraySize = CSVRow::getArraySize(v2, &v13);
      String::~String();
      *(_DWORD *)(a1 + 140) = 0;
      LogicArrayList<String>::ensureCapacity((String **)(a1 + 128), ArraySize);
      if ( ArraySize >= 1 )
      {
        v4 = 0;
        do
        {
          String::String(&v12, "StringArray");
          LogicData::getValue(a1, (__int64)&v12, v4);
          LogicArrayList<String>::add(a1 + 128);
          String::~String();
          v4 = (const char *)(unsigned int)((_DWORD)v4 + 1);
        }
        while ( (int)v4 < ArraySize );
      }
      v5 = *(_QWORD *)(a1 + 8);
      String::String(&v11, "NumberArray");
      v6 = CSVRow::getArraySize(v5, &v11);
      String::~String();
      LogicArrayList<int>::ensureCapacity(a1 + 144, v6);
      if ( v6 >= 1 )
      {
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)(a1 + 8);
          String::String(&v9, "NumberArray");
          IntegerValue = CSVRow::getIntegerValue(v8, &v9, v7);
          LogicArrayList<int>::add(a1 + 144, &IntegerValue);
          String::~String();
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (int)v7 < v6 );
      }
    }

    void __fastcall LogicGlobalData::~LogicGlobalData(__int64 a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      *(_QWORD *)a1 = off_10046F428;
      v3 = (_QWORD *)(a1 + 144);
      v2 = *(_QWORD *)(a1 + 144);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      LogicArrayList<String>::~LogicArrayList((__int64 *)(a1 + 128));
      String::~String();
      LogicData::~LogicData((String *)a1);
    }

    void __fastcall LogicGlobalData::~LogicGlobalData(__int64 a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      *(_QWORD *)a1 = off_10046F428;
      v3 = (_QWORD *)(a1 + 144);
      v2 = *(_QWORD *)(a1 + 144);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      LogicArrayList<String>::~LogicArrayList((__int64 *)(a1 + 128));
      String::~String();
      LogicData::~LogicData((String *)a1);
      operator delete((void *)a1);
    }

}; // end class LogicGlobalData
