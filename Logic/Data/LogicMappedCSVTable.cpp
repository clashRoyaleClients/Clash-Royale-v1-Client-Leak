class LogicMappedCSVTable
{
public:

    void __fastcall LogicMappedCSVTable::LogicMappedCSVTable(LogicMappedCSVTable *this)
    {
      char *v2; // x21
    
      *((_QWORD *)this + 2) = 0;
      v2 = (char *)this + 16;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 4) = (char *)this + 16;
      *((_QWORD *)this + 5) = (char *)this + 16;
      *(_QWORD *)this = 0;
      std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::_M_erase(
        (char *)this + 8,
        0);
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = v2;
      *((_QWORD *)this + 5) = v2;
      *((_QWORD *)this + 6) = 0;
    }

    // attributes: thunk
    void __fastcall LogicMappedCSVTable::LogicMappedCSVTable(LogicMappedCSVTable *this)
    {
      __ZN19LogicMappedCSVTableC2Ev(this);
    }

    __int64 __fastcall LogicMappedCSVTable::setTable(ChecksumEncoder *this, const #1224 *a2)
    {
      *(_QWORD *)this = a2;
      return LogicMappedCSVTable::rebuildLookup(this);
    }

    __int64 __fastcall LogicMappedCSVTable::destruct(ChecksumEncoder *this)
    {
      char *v2; // x20
      __int64 result; // x0
    
      *(_QWORD *)this = 0;
      v2 = (char *)this + 16;
      result = std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::_M_erase(
                 (char *)this + 8,
                 *((_QWORD *)this + 3));
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = v2;
      *((_QWORD *)this + 5) = v2;
      *((_QWORD *)this + 6) = 0;
      return result;
    }

    __int64 __fastcall LogicMappedCSVTable::getTable(ChecksumEncoder *this)
    {
      return *(_QWORD *)this;
    }

    __int64 __fastcall LogicMappedCSVTable::getRow(ChecksumEncoder *this, const String *a2)
    {
      char *v3; // x20
      char *v4; // x21
      __int64 v5; // x0
    
      if ( !*(_QWORD *)this )
        return 0;
      v3 = (char *)this + 8;
      v4 = (char *)this + 16;
      if ( (ChecksumEncoder *)std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::find(
                                (char *)this + 8,
                                a2) == (ChecksumEncoder *)((char *)this + 16) )
        return 0;
      v5 = std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::find(
             v3,
             a2);
      if ( (char *)v5 == v4 )
        return 0;
      else
        return *(_QWORD *)(v5 + 56);
    }

    #1224 *__fastcall LogicMappedCSVTable::rebuildLookup(ChecksumEncoder *this)
    {
      char *v2; // x20
      char *v3; // x25
      #1224 *result; // x0
      __int64 v5; // x21
      __int64 RowAt; // x23
      __int64 Name; // x24
      __int64 FileName; // x0
      const char *v9; // x1
      _QWORD *v10; // x8
      _QWORD *v11; // x9
      const String *v12; // x1
      int v13; // w8
      String v14; // [xsp+18h] [xbp-58h] BYREF
    
      v2 = (char *)this + 8;
      v3 = (char *)this + 16;
      std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::_M_erase(
        (char *)this + 8,
        *((_QWORD *)this + 3));
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = v3;
      *((_QWORD *)this + 5) = v3;
      *((_QWORD *)this + 6) = 0;
      result = *(#1224 **)this;
      if ( *(_QWORD *)this )
      {
        result = (#1224 *)CSVTable::getRowCount(result);
        v5 = (unsigned int)((_DWORD)result - 1);
        if ( (int)result >= 1 )
        {
          do
          {
            RowAt = CSVTable::getRowAt(*(_QWORD *)this, v5);
            Name = CSVRow::getName();
            if ( (char *)std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::find(
                           v2,
                           Name) != v3 )
            {
              FileName = CSVTable::getFileName(*(#1224 **)this);
              v10 = (_QWORD *)(FileName + 8);
              if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
                v10 = (_QWORD *)*v10;
              v11 = (_QWORD *)(Name + 8);
              if ( *(_DWORD *)(Name + 4) + 1 > 8 )
                v11 = (_QWORD *)*v11;
              String::format((String *)"Found duplicate rows in csv file: %s row: %s!", v9, v10, v11);
              Debugger::error((Debugger *)&v14, v12);
            }
            result = (#1224 *)std::map<String,CSVRow *>::operator[](v2, Name);
            *(_QWORD *)result = RowAt;
            v13 = v5 + 1;
            v5 = (unsigned int)(v5 - 1);
          }
          while ( v13 > 1 );
        }
      }
      return result;
    }

}; // end class LogicMappedCSVTable
