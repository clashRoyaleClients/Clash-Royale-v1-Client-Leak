class LogicCombinedDataTable
{
public:

    __int64 __fastcall LogicCombinedDataTable::LogicCombinedDataTable(__int64 a1, __int64 a2)
    {
      const char *v4; // x1
    
      LogicDataTable::LogicDataTable((ResetAccountMessage *)a1, 0, a2);
      *(_QWORD *)a1 = off_10046AFF0;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      String::String((String *)(a1 + 80));
      *(_DWORD *)(a1 + 76) = 0;
      String::operator=(a1 + 80, "");
      if ( (_DWORD)a2 == 7 )
      {
        String::operator=(a1 + 80, "COMBINED SPELLS");
      }
      else if ( (_DWORD)a2 == 6 )
      {
        String::operator=(a1 + 80, "COMBINED CHARACTERS");
      }
      else
      {
        String::format((String *)"Combined Table %d", v4, a2);
        String::operator=((String *)(a1 + 80));
        String::~String();
      }
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall LogicCombinedDataTable::LogicCombinedDataTable(__int64 a1, __int64 a2)
    {
      return __ZN22LogicCombinedDataTableC2Ei(a1, a2);
    }

    __int64 __fastcall LogicCombinedDataTable::destruct(ResetAccountMessage *a1)
    {
      *((_DWORD *)a1 + 19) = 0;
      String::operator=((char *)a1 + 80, "");
      return LogicDataTable::destruct(a1);
    }

    __int64 __fastcall LogicCombinedDataTable::addDataTableReference(__int64 a1, char *a2)
    {
      _QWORD *v2; // x19
      __int64 v3; // x23
      __int64 v4; // x20
      int v5; // w8
      ResetAccountMessage *Table; // x21
      const char *v7; // x2
      int v9; // [xsp+Ch] [xbp-34h] BYREF
    
      v9 = (int)a2;
      v2 = (_QWORD *)(a1 + 64);
      v3 = *(int *)(a1 + 76);
      if ( (int)v3 < 1 )
      {
    LABEL_7:
        v4 = 0xFFFFFFFFLL;
      }
      else
      {
        v4 = 0;
        while ( 1 )
        {
          v5 = *(_DWORD *)(*v2 + 4 * v4);
          if ( v5 == (_DWORD)a2 )
            Debugger::error((__siginfo *)"Trying to add same table twice to combined data table", a2);
          if ( v5 > (int)a2 )
            break;
          if ( ++v4 >= v3 )
            goto LABEL_7;
        }
      }
      Table = (ResetAccountMessage *)LogicDataTables::getTable((LogicDataTables *)a2, (int)a2);
      Debugger::doAssert((Debugger *)(Table != 0), (bool)"", v7);
      LogicDataTable::setUsedInCombinedDataTable(Table);
      if ( (_DWORD)v4 == -1 )
        return LogicArrayList<int>::add((__int64)v2, &v9);
      else
        return LogicArrayList<int>::add(v2, v4, &v9);
    }

    __int64 __fastcall LogicCombinedDataTable::getTableName(__int64 a1)
    {
      return a1 + 80;
    }

    __int64 __fastcall LogicCombinedDataTable::getItemCount(__int64 a1, int a2)
    {
      int v3; // w21
      __int64 v4; // x22
      __int64 v5; // x20
      __int64 Table; // x0
    
      v3 = *(_DWORD *)(a1 + 76);
      if ( v3 < 1 )
        return 0;
      v4 = 0;
      LODWORD(v5) = 0;
      do
      {
        Table = LogicDataTables::getTable((LogicDataTables *)*(unsigned int *)(*(_QWORD *)(a1 + 64) + 4 * v4), a2);
        v5 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) + (unsigned int)v5;
        ++v4;
      }
      while ( v3 != (_DWORD)v4 );
      return v5;
    }

    __int64 __fastcall LogicCombinedDataTable::getItemAt(__int64 a1, const char *a2)
    {
      __int64 v4; // x22
      __int64 v5; // x23
      int v6; // w24
      __int64 Table; // x21
      int v8; // w0
      __int64 v9; // x8
      const String *v10; // x1
      _BYTE v12[24]; // [xsp+18h] [xbp-48h] BYREF
    
      v4 = *(int *)(a1 + 76);
      if ( (int)v4 < 1 )
      {
        v9 = 0;
    LABEL_8:
        String::format((String *)"Combined data table invalid item index %d/%d", a2, a2, v9);
        Debugger::error((Debugger *)v12, v10);
      }
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        Table = LogicDataTables::getTable((LogicDataTables *)*(unsigned int *)(*(_QWORD *)(a1 + 64) + 4 * v5), (int)a2);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
        v9 = (unsigned int)(v8 + v6);
        if ( v6 <= (int)a2 && (int)v9 > (int)a2 )
          return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Table + 40LL))(
                   Table,
                   (unsigned int)((_DWORD)a2 - v6));
        ++v5;
        v6 += v8;
        if ( v5 >= v4 )
          goto LABEL_8;
      }
    }

    __int64 __fastcall LogicCombinedDataTable::getDataByName(__int64 a1, _DWORD *a2, AreaEffectObject *a3)
    {
      __int64 v6; // x0
      __int64 v7; // x20
      __int64 v8; // x8
      AreaEffectObject **i; // x9
      AreaEffectObject *v11; // t1
      _QWORD *v12; // x20
      __int64 v13; // x0
      const char *v14; // x1
      _QWORD *v15; // x8
      const String *v16; // x1
      const char *v17; // x1
      _QWORD *v18; // x8
      int v20; // [xsp+14h] [xbp-6Ch]
      _QWORD *v21; // [xsp+18h] [xbp-68h] BYREF
      char v22[24]; // [xsp+28h] [xbp-58h] BYREF
      _BYTE v23[24]; // [xsp+40h] [xbp-40h] BYREF
      AreaEffectObject *v24; // [xsp+58h] [xbp-28h] BYREF
    
      v24 = a3;
      if ( !*a2 )
        return 0;
      v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 56LL))(a1, a2);
      v7 = v6;
      if ( !v6 )
      {
        v12 = a2 + 2;
        if ( a2[1] + 1 > 8 )
          v12 = (_QWORD *)*v12;
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
        v15 = (_QWORD *)(v13 + 8);
        if ( *(_DWORD *)(v13 + 4) + 1 > 8 )
          v15 = (_QWORD *)*v15;
        String::format((String *)"Can't find %s from %s", v14, v12, v15);
        if ( a3 )
        {
          LogicData::getDebuggerName(a3);
          if ( v20 + 1 > 8 )
            v18 = v21;
          else
            v18 = &v21;
          String::format((String *)", needed by %s", v17, v18);
          String::operator+=(v23, v22);
          String::~String();
          String::~String();
        }
        Debugger::error((Debugger *)v23, v16);
      }
      if ( v6 == LogicDataTables::sm_pEditorSearchReferencesData )
      {
        v8 = dword_1004F6E4C;
        for ( i = (AreaEffectObject **)(LogicDataTables::sm_editorSearchReferencesList + 8LL * (dword_1004F6E4C - 1));
              v8-- >= 1;
              --i )
        {
          v11 = *i;
          if ( v11 == a3 )
            return v7;
        }
        LogicArrayList<LogicData const*>::add(&LogicDataTables::sm_editorSearchReferencesList, &v24);
      }
      return v7;
    }

    __int64 __fastcall LogicCombinedDataTable::getDataByNameDontCrashIfNotFound(TutorialPopup *this, const String *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      __int64 Table; // x0
      __int64 result; // x0
    
      if ( !a2->m_length )
        return 0;
      v4 = *((int *)this + 19);
      if ( (int)v4 < 1 )
        return 0;
      v5 = 0;
      while ( 1 )
      {
        Table = LogicDataTables::getTable((LogicDataTables *)*(unsigned int *)(*((_QWORD *)this + 8) + 4 * v5), (int)a2);
        result = (*(__int64 (__fastcall **)(__int64, const String *))(*(_QWORD *)Table + 56LL))(Table, a2);
        if ( result )
          break;
        if ( ++v5 >= v4 )
          return 0;
      }
      return result;
    }

    __int64 __fastcall LogicCombinedDataTable::preCreateReferences(__int64 this, int a2)
    {
      __int64 v2; // x19
      __int64 v3; // x20
      __int64 v4; // x21
      ResetAccountMessage *Table; // x24
      #1224 *CSVTable; // x25
      int ColumnCount; // w26
      int v8; // w27
      __int64 v9; // x20
      __int64 v10; // x20
      ResetAccountMessage *v11; // x28
      #1224 *v12; // x23
      int i; // w19
      __int64 ColumnName; // x21
      __int64 v15; // x20
      __int64 v16; // x0
      _QWORD *v17; // x22
      __int64 v18; // x0
      const char *v19; // x1
      _QWORD *v20; // x8
      _QWORD *v21; // x9
      _QWORD *v22; // x10
      const String *v23; // x1
      int ColumnType; // w22
      __int64 v25; // x0
      _QWORD *v26; // x22
      __int64 v27; // x0
      const char *v28; // x1
      _QWORD *v29; // x8
      _QWORD *v30; // x9
      _QWORD *v31; // x10
      const String *v32; // x1
      __int64 FileName; // x0
      _QWORD *v34; // x19
      __int64 v35; // x0
      const char *v36; // x1
      _QWORD *v37; // x8
      const String *v38; // x1
      __int64 v39; // x19
      AreaEffectObject *v40; // x0
      __int64 Name; // x20
      int v42; // w8
      _QWORD *v43; // x20
      __int64 v44; // x0
      _QWORD *v45; // x21
      __int64 v46; // x0
      const char *v47; // x1
      _QWORD *v48; // x8
      const String *v49; // x1
      __int64 v50; // [xsp+28h] [xbp-D8h]
      __int64 v51; // [xsp+30h] [xbp-D0h]
      __int64 v52; // [xsp+38h] [xbp-C8h]
      __int64 v53; // [xsp+40h] [xbp-C0h]
      __int64 v54; // [xsp+48h] [xbp-B8h]
      String v55; // [xsp+50h] [xbp-B0h] BYREF
      String v56; // [xsp+68h] [xbp-98h] BYREF
      String v57; // [xsp+80h] [xbp-80h] BYREF
      String v58; // [xsp+98h] [xbp-68h] BYREF
    
      v53 = this;
      v2 = *(int *)(this + 76);
      v52 = v2;
      if ( (int)v2 >= 1 )
      {
        v3 = 0;
        v4 = 1;
        do
        {
          Table = (ResetAccountMessage *)LogicDataTables::getTable(
                                           (LogicDataTables *)*(unsigned int *)(*(_QWORD *)(v53 + 64) + 4 * v3),
                                           a2);
          CSVTable = (#1224 *)LogicDataTable::getCSVTable(Table);
          ColumnCount = CSVTable::getColumnCount(CSVTable);
          this = (*(__int64 (__fastcall **)(ResetAccountMessage *))(*(_QWORD *)Table + 32LL))(Table);
          v8 = this;
          v9 = v3 + 1;
          if ( v9 >= v2 )
            break;
          v51 = v9;
          v10 = v4;
          v50 = v4;
          do
          {
            v11 = (ResetAccountMessage *)LogicDataTables::getTable(
                                           (LogicDataTables *)*(unsigned int *)(*(_QWORD *)(v53 + 64) + 4 * v10),
                                           a2);
            v12 = (#1224 *)LogicDataTable::getCSVTable(v11);
            this = CSVTable::getColumnCount(v12);
            if ( ColumnCount != (_DWORD)this )
            {
              FileName = CSVTable::getFileName(CSVTable);
              v34 = (_QWORD *)(FileName + 8);
              if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
                v34 = (_QWORD *)*v34;
              v35 = CSVTable::getFileName(v12);
              v37 = (_QWORD *)(v35 + 8);
              if ( *(_DWORD *)(v35 + 4) + 1 > 8 )
                v37 = (_QWORD *)*v37;
              String::format((String *)"%s and %s don't have equal amount of columns", v36, v34, v37);
              Debugger::error((Debugger *)&v58, v38);
            }
            v54 = v10;
            if ( ColumnCount > 0 )
            {
              for ( i = 0; i < ColumnCount; ++i )
              {
                ColumnName = CSVTable::getColumnName(CSVTable, i);
                v15 = CSVTable::getColumnName(v12, i);
                if ( (String::equals(ColumnName, v15) & 1) == 0 )
                {
                  v16 = CSVTable::getFileName(CSVTable);
                  v17 = (_QWORD *)(v16 + 8);
                  if ( *(_DWORD *)(v16 + 4) + 1 > 8 )
                    v17 = (_QWORD *)*v17;
                  v18 = CSVTable::getFileName(v12);
                  v20 = (_QWORD *)(v18 + 8);
                  if ( *(_DWORD *)(v18 + 4) + 1 > 8 )
                    v20 = (_QWORD *)*v20;
                  v21 = (_QWORD *)(ColumnName + 8);
                  if ( *(_DWORD *)(ColumnName + 4) + 1 > 8 )
                    v21 = (_QWORD *)*v21;
                  v22 = (_QWORD *)(v15 + 8);
                  if ( *(_DWORD *)(v15 + 4) + 1 > 8 )
                    v22 = (_QWORD *)*v22;
                  String::format((String *)"%s and %s have differences in column names %s VS %s", v19, v17, v20, v21, v22);
                  Debugger::error((Debugger *)&v57, v23);
                }
                ColumnType = CSVTable::getColumnType(CSVTable, i);
                this = CSVTable::getColumnType(v12, i);
                if ( ColumnType != (_DWORD)this )
                {
                  v25 = CSVTable::getFileName(CSVTable);
                  v26 = (_QWORD *)(v25 + 8);
                  if ( *(_DWORD *)(v25 + 4) + 1 > 8 )
                    v26 = (_QWORD *)*v26;
                  v27 = CSVTable::getFileName(v12);
                  v29 = (_QWORD *)(v27 + 8);
                  if ( *(_DWORD *)(v27 + 4) + 1 > 8 )
                    v29 = (_QWORD *)*v29;
                  v30 = (_QWORD *)(ColumnName + 8);
                  if ( *(_DWORD *)(ColumnName + 4) + 1 > 8 )
                    v30 = (_QWORD *)*v30;
                  v31 = (_QWORD *)(v15 + 8);
                  if ( *(_DWORD *)(v15 + 4) + 1 > 8 )
                    v31 = (_QWORD *)*v31;
                  String::format(
                    (String *)"%s and %s have differences in column types of %s VS %s",
                    v28,
                    v26,
                    v29,
                    v30,
                    v31);
                  Debugger::error((Debugger *)&v56, v32);
                }
              }
            }
            if ( v8 > 0 )
            {
              v39 = 0;
              do
              {
                v40 = (AreaEffectObject *)(*(__int64 (__fastcall **)(ResetAccountMessage *, __int64))(*(_QWORD *)Table + 40LL))(
                                            Table,
                                            v39);
                Name = LogicData::getName(v40);
                this = LogicDataTable::contains(v11, Name);
                if ( (_DWORD)this )
                {
                  v42 = *(_DWORD *)(Name + 4) + 1;
                  v43 = (_QWORD *)(Name + 8);
                  if ( v42 > 8 )
                    v43 = (_QWORD *)*v43;
                  v44 = CSVTable::getFileName(CSVTable);
                  v45 = (_QWORD *)(v44 + 8);
                  if ( *(_DWORD *)(v44 + 4) + 1 > 8 )
                    v45 = (_QWORD *)*v45;
                  v46 = CSVTable::getFileName(v12);
                  v48 = (_QWORD *)(v46 + 8);
                  if ( *(_DWORD *)(v46 + 4) + 1 > 8 )
                    v48 = (_QWORD *)*v48;
                  String::format((String *)"%s included in multiple files", v47, v43, v45, v48);
                  Debugger::error((Debugger *)&v55, v49);
                }
                v39 = (unsigned int)(v39 + 1);
              }
              while ( (int)v39 < v8 );
            }
            v10 = v54 + 1;
            v2 = v52;
          }
          while ( (int)v54 + 1 < (int)v52 );
          v3 = v51;
          v4 = v50 + 1;
        }
        while ( v51 < v52 );
      }
      return this;
    }

    void __fastcall LogicCombinedDataTable::createReferences(TutorialPopup *this)
    {
      ;
    }

    void __fastcall LogicCombinedDataTable::createReferences2(TutorialPopup *this)
    {
      ;
    }

    __int64 __fastcall LogicCombinedDataTable::getItemById(TutorialPopup *this, SectorCommandMessage *a2)
    {
      LogicDataTables *ClassID; // x0
      int v5; // w1
      __int64 v6; // x8
      __int64 v7; // x9
      int v9; // w10
      __int64 Table; // x0
    
      if ( (_DWORD)a2 )
      {
        ClassID = (LogicDataTables *)GlobalID::getClassID(a2);
        v6 = *((int *)this + 19);
        v7 = 4LL * ((int)v6 - 1);
        while ( v6-- >= 1 )
        {
          v9 = *(_DWORD *)(*((_QWORD *)this + 8) + v7);
          v7 -= 4;
          if ( v9 == (_DWORD)ClassID )
          {
            Table = LogicDataTables::getTable(ClassID, v5);
            return (*(__int64 (__fastcall **)(__int64, SectorCommandMessage *))(*(_QWORD *)Table + 88LL))(Table, a2);
          }
        }
      }
      return 0;
    }

    __int64 __fastcall LogicCombinedDataTable::isCombinedDataTable(TutorialPopup *this)
    {
      return 1;
    }

    void __fastcall LogicCombinedDataTable::~LogicCombinedDataTable(TutorialPopup *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10046AFF0;
      String::~String();
      v2 = *((_QWORD *)this + 8);
      if ( v2 )
        operator delete[](v2);
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 9) = 0;
      LogicDataTable::~LogicDataTable(this);
    }

    void __fastcall LogicCombinedDataTable::~LogicCombinedDataTable(TutorialPopup *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10046AFF0;
      String::~String();
      v2 = *((_QWORD *)this + 8);
      if ( v2 )
        operator delete[](v2);
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 9) = 0;
      LogicDataTable::~LogicDataTable(this);
      operator delete(this);
    }

}; // end class LogicCombinedDataTable
