class LogicData
{
public:

    void __fastcall LogicData::~LogicData(String *this)
    {
      *(_QWORD *)&this->m_length = off_100466848;
      String::~String(this + 3);
      String::~String(this + 2);
    }

    __int64 __fastcall LogicData::LogicData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      String *v5; // x21
      __int64 v6; // x19
      SectorCommandMessage *TableIndex; // x23
      int v8; // w0
      int v9; // w2
    
      *(_QWORD *)a1 = off_100466848;
      v5 = (String *)(a1 + 72);
      v6 = a1 + 48;
      String::String((String *)(a1 + 48));
      String::String(v5);
      String::operator=(v6, "");
      String::operator=(v5, "");
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 36) = -1;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_BYTE *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 16) = a3;
      TableIndex = (SectorCommandMessage *)LogicDataTable::getTableIndex(a3);
      v8 = (*(__int64 (__fastcall **)(ResetAccountMessage *))(*(_QWORD *)a3 + 32LL))(a3);
      *(_DWORD *)(a1 + 32) = GlobalID::createGlobalID(TableIndex, v8, v9);
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall LogicData::LogicData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      return __ZN9LogicDataC2EPK6CSVRowPK14LogicDataTable(a1, a2, a3);
    }

    __int64 __fastcall LogicData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      String::operator=(a1 + 48, "");
      result = String::operator=(a1 + 72, "");
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 36) = -1;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_BYTE *)(a1 + 96) = 0;
      return result;
    }

    void *__fastcall LogicData::setCSVRow(__int64 a1, __int64 a2, int a3)
    {
      #1224 *Table; // x0
      void *result; // x0
      String v7; // [xsp+0h] [xbp-40h] BYREF
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      *(_QWORD *)(a1 + 8) = a2;
      *(_DWORD *)(a1 + 40) = a3;
      String::String(&v8, "IconSWF");
      CSVRow::getValue(a2, &v8, 0);
      String::operator=((String *)(a1 + 48));
      String::~String(&v8);
      String::String(&v7, "IconExportName");
      CSVRow::getValue(a2, &v7, 0);
      String::operator=((String *)(a1 + 72));
      String::~String(&v7);
      Table = (#1224 *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
      if ( (unsigned int)CSVTable::getColumnType(Table, 0) )
        result = &NON_STRING_NAME;
      else
        result = (void *)CSVRow::getName(*(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 24) = result;
      return result;
    }

    void __fastcall LogicData::createReferences(AreaEffectObject *this)
    {
      ;
    }

    __int64 __fastcall LogicData::getDataType(ResetAccountMessage **this)
    {
      return LogicDataTable::getTableIndex(*(this + 2));
    }

    __int64 __fastcall LogicData::getGlobalID(AreaEffectObject *this)
    {
      return *((unsigned int *)this + 8);
    }

    __int64 __fastcall LogicData::getInstanceID(AreaEffectObject *this, int a2)
    {
      return GlobalID::getInstanceID((SectorCommandMessage *)*((unsigned int *)this + 8), a2);
    }

    __int64 __fastcall LogicData::getName(AreaEffectObject *this)
    {
      return *((_QWORD *)this + 3);
    }

    String *__usercall LogicData::toString@<X0>(AreaEffectObject *this@<X0>, String *a2@<X8>)
    {
      const String *Name; // x1
    
      Name = (const String *)CSVRow::getName(*((_QWORD *)this + 1));
      return String::String(a2, Name);
    }

    __int64 __fastcall LogicData::getParentTable(AreaEffectObject *this)
    {
      return *((_QWORD *)this + 2);
    }

    void __fastcall LogicData::getDebuggerName(AreaEffectObject *this)
    {
      int v3; // w1
      String *v4; // x0
      String v5; // [xsp+8h] [xbp-88h] BYREF
      String v6; // [xsp+20h] [xbp-70h] BYREF
      String v7; // [xsp+38h] [xbp-58h] BYREF
      String v8; // [xsp+50h] [xbp-40h] BYREF
      String v9; // [xsp+68h] [xbp-28h] BYREF
    
      operator+(*((_QWORD *)this + 3), " (");
      String::valueOf(&v5, (String *)*((unsigned int *)this + 8), v3);
      operator+((__int64 *)&v7.m_length, &v6, &v5);
      operator+(&v7, ", ");
      v4 = (String *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
      operator+((__int64 *)&v9.m_length, &v8, v4);
      operator+(&v9, ")");
      String::~String(&v9);
      String::~String(&v8);
      String::~String(&v7);
      String::~String(&v5);
      String::~String(&v6);
    }

    __int64 __fastcall LogicData::getColumnIndex(__int64 a1, __int64 a2)
    {
      __int64 ColumnIndexByName; // x19
      String *v5; // x0
      const String *v6; // x1
      String v8; // [xsp+8h] [xbp-68h] BYREF
      String v9; // [xsp+20h] [xbp-50h] BYREF
      String v10; // [xsp+38h] [xbp-38h] BYREF
    
      ColumnIndexByName = CSVRow::getColumnIndexByName(*(_QWORD *)(a1 + 8));
      if ( (_DWORD)ColumnIndexByName == -1 )
      {
        operator+(&v8, "Unable to find column ", a2);
        operator+(&v8, " from ");
        v5 = (String *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
        operator+((__int64 *)&v10.m_length, &v9, v5);
        Debugger::warning((__siginfo *)&v10, v6);
        String::~String(&v10);
        String::~String(&v9);
        String::~String(&v8);
      }
      return ColumnIndexByName;
    }

    __int64 __fastcall LogicData::testArrayIndex(__int64 result, const char *a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      String v4; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *(unsigned int *)(result + 40);
      if ( ((unsigned int)a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"Invalid array index %d/%d", a2, a2, v2);
        Debugger::error((Debugger *)&v4, v3);
      }
      return result;
    }

    __int64 __fastcall LogicData::getIntegerValue(__int64 a1, __int64 a2)
    {
      __int64 ColumnIndex; // x20
      const char *v4; // x2
    
      ColumnIndex = LogicData::getColumnIndex(a1, a2);
      Debugger::doAssert((Debugger *)((_DWORD)ColumnIndex != -1), (bool)"", v4);
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), ColumnIndex);
    }

    __int64 __fastcall LogicData::getBooleanValue(__int64 a1, __int64 a2)
    {
      __int64 ColumnIndex; // x20
      const char *v4; // x2
    
      ColumnIndex = LogicData::getColumnIndex(a1, a2);
      Debugger::doAssert((Debugger *)((_DWORD)ColumnIndex != -1), (bool)"", v4);
      return CSVRow::getBooleanValueAt(*(_QWORD *)(a1 + 8), ColumnIndex);
    }

    __int64 __fastcall LogicData::getValue(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 ColumnIndex; // x20
      const char *v7; // x2
    
      LogicData::testArrayIndex(a1, a3);
      ColumnIndex = LogicData::getColumnIndex(a1, a2);
      Debugger::doAssert((Debugger *)((_DWORD)ColumnIndex != -1), (bool)"", v7);
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), ColumnIndex, a3);
    }

    __int64 __fastcall LogicData::getValue(__int64 a1, __int64 a2)
    {
      __int64 ColumnIndex; // x20
      const char *v4; // x2
    
      ColumnIndex = LogicData::getColumnIndex(a1, a2);
      Debugger::doAssert((Debugger *)((_DWORD)ColumnIndex != -1), (bool)"", v4);
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), ColumnIndex);
    }

    __int64 __fastcall LogicData::getTID(__int64 a1)
    {
      __int64 v2; // x1
      int ColumnIndexByName; // w0
      const char *v4; // x2
    
      v2 = *(unsigned int *)(a1 + 36);
      if ( (_DWORD)v2 == -1 )
      {
        ColumnIndexByName = CSVRow::getColumnIndexByName(*(_QWORD *)(a1 + 8));
        *(_DWORD *)(a1 + 36) = ColumnIndexByName;
        Debugger::doAssert((Debugger *)(ColumnIndexByName != -1), (bool)"", v4);
        v2 = *(unsigned int *)(a1 + 36);
      }
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), v2);
    }

    void LogicData::createReferences2()
    {
      ;
    }

    __int64 __fastcall LogicData::getIconSWF(__int64 a1)
    {
      return a1 + 48;
    }

    __int64 __fastcall LogicData::getIconExportName(__int64 a1)
    {
      return a1 + 72;
    }

    void LogicData::preCreateReferences()
    {
      ;
    }

    bool __fastcall LogicData::equals(__int64 a1, __int64 a2)
    {
      return a2 && *(_DWORD *)(a2 + 32) == *(_DWORD *)(a1 + 32);
    }

    __int64 __fastcall LogicData::getCSVRow(__int64 a1)
    {
      return *(_QWORD *)(a1 + 8);
    }

    __int64 LogicData::isCharacterData()
    {
      return 0;
    }

    __int64 LogicData::isSpellData()
    {
      return 0;
    }

    void __fastcall LogicData::validateIntColumnRange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
    {
      int ArraySizeAt; // w0
      int v9; // w3
      int v10; // w23
      int v11; // w25
      #1237 *IntegerValueAt; // x0
      int v13; // w3
      #1224 *Table; // x0
      __int64 ColumnName; // x22
      __int64 Name; // x0
      const char *v17; // x1
      _QWORD *v18; // x8
      _QWORD *v19; // x9
      const String *v20; // x1
      __siginfo var58; // [xsp+28h] [xbp-58h] BYREF
    
      ArraySizeAt = CSVRow::getArraySizeAt(a1, a2);
      v10 = ArraySizeAt;
      if ( ArraySizeAt )
      {
        if ( ArraySizeAt <= 0 )
          return;
        v11 = 0;
        while ( 1 )
        {
          IntegerValueAt = (#1237 *)CSVRow::getIntegerValueAt(a1, a2);
          if ( (unsigned int)LogicMath::clamp(IntegerValueAt, a3, a4, v13) != (_DWORD)IntegerValueAt )
            break;
          if ( ++v11 >= v10 )
            return;
        }
      }
      else if ( !(unsigned int)LogicMath::clamp(0, a3, a4, v9) )
      {
        return;
      }
      Table = (#1224 *)CSVRow::getTable(a1);
      ColumnName = CSVTable::getColumnName(Table, a2);
      Name = CSVRow::getName(a1);
      v18 = (_QWORD *)(Name + 8);
      if ( *(_DWORD *)(Name + 4) + 1 > 8 )
        v18 = (_QWORD *)*v18;
      v19 = (_QWORD *)(ColumnName + 8);
      if ( *(_DWORD *)(ColumnName + 4) + 1 > 8 )
        v19 = (_QWORD *)*v19;
      String::format(
        (String *)"Value out of range. row name: %s column name: %s valid range: [%d %d]",
        v17,
        v18,
        v19,
        a3,
        a4);
      Debugger::warning(&var58, v20);
      String::~String((String *)&var58);
    }

    __int64 __fastcall LogicData::getValueAt(__int64 a1, __int64 a2, const char *a3)
    {
      const char *v6; // x2
    
      LogicData::testArrayIndex(a1, a3);
      Debugger::doAssert((Debugger *)((_DWORD)a2 != -1), (bool)"", v6);
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), a2, a3);
    }

    __int64 __fastcall LogicData::getValueAt(__int64 a1, __int64 a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)((_DWORD)a2 != -1), (bool)"", a3);
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), a2);
    }

    __int64 __fastcall LogicData::getIntegerValueAt(__int64 a1, __int64 a2, const char *a3)
    {
      const char *v6; // x2
    
      LogicData::testArrayIndex(a1, a3);
      Debugger::doAssert((Debugger *)((_DWORD)a2 != -1), (bool)"", v6);
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), a2, a3);
    }

    __int64 __fastcall LogicData::getIntegerValueAt(AreaEffectObject *this, __int64 a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)((_DWORD)a2 != -1), (bool)"", a3);
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), a2);
    }

    __int64 __fastcall LogicData::getBooleanValueAt(AreaEffectObject *this, __int64 a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)((_DWORD)a2 != -1), (bool)"", a3);
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), a2);
    }

    __int64 __fastcall LogicData::clearReferencedBoolean(__int64 this)
    {
      *(_BYTE *)(this + 96) = 0;
      return this;
    }

    __int64 __fastcall LogicData::markAsReferenced(__int64 this)
    {
      *(_BYTE *)(this + 96) = 1;
      return this;
    }

    // attributes: thunk
    void __fastcall LogicData::~LogicData(String *this)
    {
      __ZN9LogicDataD2Ev(this);
    }

    void __fastcall LogicData::~LogicData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicData
