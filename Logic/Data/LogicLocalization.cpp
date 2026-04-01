class LogicLocalization
{
public:

    __int64 __fastcall LogicLocalization::LogicLocalization(__int64 a1, const CSVTable *a2)
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 44) = -1;
      *(_QWORD *)(a1 + 36) = -1;
      *(_QWORD *)(a1 + 28) = -1;
      *(_DWORD *)(a1 + 24) = 0;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 20) = 0;
      LogicLocalization::setCSVTable((LogicLocalization *)a1, a2);
      return a1;
    }

    __int64 __fastcall LogicLocalization::setCSVTable(__int64 a1, #1224 *a2)
    {
      __int64 RowCount; // x21
      int v5; // w8
      __int64 v6; // x23
      ChecksumEncoder *v7; // x0
      __int64 *v8; // x24
      int v9; // w8
      int v10; // w24
      LogicMappedCSVTable *v11; // x23
      __int64 result; // x0
      LogicMappedCSVTable *v13; // [xsp+8h] [xbp-38h] BYREF
    
      *(_QWORD *)a1 = a2;
      RowCount = CSVTable::getRowCount(a2);
      v5 = *(_DWORD *)(a1 + 20);
      v6 = (unsigned int)(v5 - 1);
      if ( v5 >= 1 )
      {
        do
        {
          v7 = (ChecksumEncoder *)LogicArrayList<LogicMappedCSVTable *>::remove(a1 + 8, v6);
          v8 = (__int64 *)v7;
          if ( v7 )
          {
            LogicMappedCSVTable::destruct(v7);
            std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::_M_erase(
              (__int64)(v8 + 1),
              v8[3]);
            operator delete(v8);
          }
          v9 = v6 + 1;
          v6 = (unsigned int)(v6 - 1);
        }
        while ( v9 > 1 );
      }
      LogicArrayList<LogicMappedCSVTable *>::ensureCapacity(a1 + 8, RowCount);
      if ( (int)RowCount >= 1 )
      {
        v10 = 0;
        do
        {
          v11 = (LogicMappedCSVTable *)operator new(56);
          LogicMappedCSVTable::LogicMappedCSVTable(v11);
          v13 = v11;
          LogicArrayList<LogicMappedCSVTable *>::add(a1 + 8, &v13);
          ++v10;
        }
        while ( v10 < (int)RowCount );
      }
      *(_DWORD *)(a1 + 28) = CSVTable::getColumnIndexByName(a2, &LogicLocaleData::ATTRIBUTE_LOCALIZED_NAME);
      *(_DWORD *)(a1 + 40) = CSVTable::getColumnIndexByName(a2, &LogicLocaleData::ATTRIBUTE_FILE_NAME);
      result = CSVTable::getColumnIndexByName(a2, &LogicLocaleData::ATTRIBUTE_ENABLED);
      *(_DWORD *)(a1 + 44) = result;
      return result;
    }

    void __fastcall LogicLocalization::destruct(Shader *this)
    {
      __int64 v2; // x8
      __int64 v3; // x21
      __int64 v4; // x8
      __int64 *v5; // x20
      __int64 v6; // x8
    
      v2 = *((int *)this + 5);
      if ( (int)v2 >= 1 )
      {
        v3 = v2 - 1;
        do
        {
          v4 = *((_QWORD *)this + 1);
          v5 = *(__int64 **)(v4 + 8 * v3);
          if ( v5 )
          {
            LogicMappedCSVTable::destruct(*(ChecksumEncoder **)(v4 + 8 * v3));
            std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::_M_erase(
              (__int64)(v5 + 1),
              v5[3]);
            operator delete(v5);
          }
          v6 = v3-- + 1;
        }
        while ( v6 > 1 );
      }
      *((_DWORD *)this + 6) = 0;
      *((_DWORD *)this + 11) = -1;
      *(_QWORD *)((char *)this + 36) = -1;
      *(_QWORD *)((char *)this + 28) = -1;
      *(_QWORD *)this = 0;
      *((_DWORD *)this + 5) = 0;
    }

    __int64 __fastcall LogicLocalization::constructInstance(Shader *this, const #1224 *a2)
    {
      __int64 v3; // x19
      __int64 result; // x0
    
      LogicLocalization::destructInstance(this);
      v3 = operator new(48);
      result = LogicLocalization::LogicLocalization(v3, this);
      LogicLocalization::sm_pInstance = v3;
      return result;
    }

    void __fastcall LogicLocalization::destructInstance(Shader *this)
    {
      void *v1; // x19
      __int64 v2; // x0
    
      if ( LogicLocalization::sm_pInstance )
      {
        LogicLocalization::destruct((Shader *)LogicLocalization::sm_pInstance);
        v1 = (void *)LogicLocalization::sm_pInstance;
        if ( LogicLocalization::sm_pInstance )
        {
          v2 = *(_QWORD *)(LogicLocalization::sm_pInstance + 8);
          if ( v2 )
            operator delete[](v2);
          operator delete(v1);
        }
        LogicLocalization::sm_pInstance = 0;
      }
    }

    __int64 __fastcall LogicLocalization::getInstance(Shader *this)
    {
      return LogicLocalization::sm_pInstance;
    }

    __int64 __fastcall LogicLocalization::getLanguageIndexIgnoreCase(#1224 **a1, __int64 a2)
    {
      __int64 v4; // x21
      __int64 RowAt; // x0
      __int64 Name; // x0
    
      v4 = (unsigned int)CSVTable::getRowCount(*a1) - 1;
      while ( (int)v4 + 1 >= 1 )
      {
        RowAt = CSVTable::getRowAt(*a1, v4);
        Name = CSVRow::getName(RowAt);
        v4 = (unsigned int)(v4 - 1);
        if ( (unsigned int)String::equalsIgnoreCase(Name, a2) )
          return (unsigned int)(v4 + 1);
      }
      return 0xFFFFFFFFLL;
    }

    __int64 __fastcall LogicLocalization::setLanguage(__int64 a1, int a2, const #1224 *a3)
    {
      __int64 result; // x0
      __int64 v5; // x8
      __int64 v6; // x20
      __int64 v7; // x8
    
      result = LogicMappedCSVTable::setTable(*(ChecksumEncoder **)(*(_QWORD *)(a1 + 8) + 8LL * a2), a3);
      *(_DWORD *)(a1 + 24) = 0;
      v5 = *(int *)(a1 + 20);
      if ( (int)v5 >= 1 )
      {
        v6 = v5 - 1;
        do
        {
          result = LogicMappedCSVTable::getTable(*(ChecksumEncoder **)(*(_QWORD *)(a1 + 8) + 8 * v6));
          if ( result )
            ++*(_DWORD *)(a1 + 24);
          v7 = v6-- + 1;
        }
        while ( v7 > 1 );
      }
      return result;
    }

    bool __fastcall LogicLocalization::isLanguageLoaded(Shader *this, int a2)
    {
      return LogicMappedCSVTable::getTable(*(ChecksumEncoder **)(*((_QWORD *)this + 1) + 8LL * a2)) != 0;
    }

    String *__fastcall LogicLocalization::getString(__int64 a1, const String *a2, int a3)
    {
      ChecksumEncoder *v4; // x20
      __int64 Row; // x0
      const char *v6; // x1
      internal_t *p_internal; // x8
    
      v4 = *(ChecksumEncoder **)(*(_QWORD *)(a1 + 8) + 8LL * a3);
      if ( LogicMappedCSVTable::getTable(v4) )
      {
        Row = LogicMappedCSVTable::getRow(v4, a2);
        if ( Row )
          return (String *)LogicLocalization::getLocalizedValue(Row, Row);
        p_internal = &a2->internal;
        if ( a2->m_bytes + 1 > 8 )
          p_internal = (internal_t *)p_internal->pHeap;
        String::format((String *)"TODO:%s", v6, p_internal);
        String::operator=(&ret);
        String::~String();
      }
      return &ret;
    }

    String *__fastcall LogicLocalization::getLocalizedValue(__int64 a1, CSVRow *a2)
    {
      __int64 v3; // x20
      String *ValueAt; // x22
      int v5; // w23
      int v6; // w0
      int v7; // w21
      String v9; // [xsp+8h] [xbp-78h] BYREF
      String v10; // [xsp+20h] [xbp-60h] BYREF
      String v11; // [xsp+38h] [xbp-48h] BYREF
    
      v3 = (unsigned int)CSVRow::getColumnCount(a2) - 1;
      ValueAt = (String *)CSVRow::getValueAt(a2, v3, 0);
      v5 = String::contains(ValueAt, &CSV_LINE_BREAK);
      v6 = String::contains(ValueAt, &CSV_QUOTE);
      v7 = v6;
      if ( (v5 & 1) != 0 || v6 )
      {
        String::String(&v11, ValueAt);
        if ( v5 )
        {
          String::replace(&v10, &v11, &CSV_LINE_BREAK, &LINE_BREAK);
          String::operator=(&v11);
          String::~String();
        }
        if ( v7 )
        {
          String::replace(&v9, &v11, &CSV_QUOTE, &QUOTE);
          String::operator=(&v11);
          String::~String();
        }
        CSVRow::setStringValueAt(a2, &v11, v3, 0);
        ValueAt = (String *)CSVRow::getValueAt(a2, v3, 0);
        String::~String();
      }
      return ValueAt;
    }

    __int64 __fastcall LogicLocalization::getLanguageCode(_QWORD *a1, __int64 a2)
    {
      __int64 RowAt; // x0
    
      RowAt = CSVTable::getRowAt(*a1, a2);
      return CSVRow::getName(RowAt);
    }

    __int64 __fastcall LogicLocalization::getLoadedLanguageCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 24);
    }

    __int64 __fastcall LogicLocalization::getFileName(__int64 a1, __int64 a2)
    {
      __int64 RowAt; // x0
    
      RowAt = CSVTable::getRowAt(*(_QWORD *)a1, a2);
      return CSVRow::getValueAt(RowAt, *(unsigned int *)(a1 + 40));
    }

}; // end class LogicLocalization
