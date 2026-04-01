class LogicPredefinedDeckData
{
public:

    _QWORD *__fastcall LogicPredefinedDeckData::LogicPredefinedDeckData(_QWORD *a1, __int64 a2, ResetAccountMessage *a3)
    {
      _QWORD *v4; // x0
      _QWORD *v5; // x0
    
      LogicData::LogicData((__int64)a1, a2, a3);
      *a1 = off_10046E620;
      a1[13] = 0;
      a1[14] = 0;
      v4 = (_QWORD *)operator new(16);
      *v4 = 0;
      v4[1] = 0;
      a1[13] = v4;
      v5 = (_QWORD *)operator new(16);
      *v5 = 0;
      v5[1] = 0;
      a1[14] = v5;
      return a1;
    }

    // attributes: thunk
    void __fastcall LogicPredefinedDeckData::LogicPredefinedDeckData(
            LogicPredefinedDeckData *this,
            __int64 a2,
            ResetAccountMessage *a3)
    {
      __ZN23LogicPredefinedDeckDataC2EPK6CSVRowPK14LogicDataTable(this, a2, a3);
    }

    __int64 __fastcall LogicPredefinedDeckData::destruct(__int64 a1)
    {
      _QWORD *v2; // x20
      _QWORD *v3; // x21
      _QWORD *v4; // x20
      __int64 result; // x0
    
      v3 = (_QWORD *)(a1 + 104);
      v2 = *(_QWORD **)(a1 + 104);
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 104) = 0;
      v4 = *(_QWORD **)(a1 + 112);
      if ( v4 )
      {
        if ( *v4 )
          operator delete[](*v4);
        operator delete(v4);
      }
      *(_QWORD *)(a1 + 112) = 0;
      result = LogicData::destruct(a1);
      *v3 = 0;
      v3[1] = 0;
      return result;
    }

    __int64 __fastcall LogicPredefinedDeckData::createReferences(AreaEffectObject *a1)
    {
      LogicPredefinedDeckData *Table; // x0
      const CSVTable *v3; // x1
      __int64 result; // x0
      int v5; // w25
      const char *v6; // x20
      __int64 ValueAt; // x0
      __int64 SpellByName; // x23
      const char *v9; // x2
      const char *v10; // x2
      _QWORD *v11; // x0
      __int64 v12; // x27
      int v13; // w28
      __int64 v14; // x23
      bool v15; // zf
      int v16; // [xsp+4h] [xbp-5Ch] BYREF
      __int64 v17; // [xsp+8h] [xbp-58h] BYREF
    
      LogicData::createReferences(a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)a1 + 1)) )
      {
        Table = (LogicPredefinedDeckData *)CSVRow::getTable(*((_QWORD *)a1 + 1));
        LogicPredefinedDeckData::resetStatics(Table, v3);
      }
      *(_DWORD *)(*((_QWORD *)a1 + 14) + 12LL) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 13) + 12LL) = 0;
      result = CSVRow::getArraySizeAt(*((_QWORD *)a1 + 1), (unsigned int)LogicPredefinedDeckData::sm_columnIndexSpells);
      v5 = result - 1;
      if ( (int)result >= 1 )
      {
        v6 = 0;
        do
        {
          ValueAt = LogicData::getValueAt((__int64)a1, (unsigned int)LogicPredefinedDeckData::sm_columnIndexSpells, v6);
          SpellByName = LogicDataTables::getSpellByName(ValueAt, (__int64)a1);
          v17 = SpellByName;
          Debugger::doAssert((Debugger *)(SpellByName != 0), (bool)"", v9);
          v11 = (_QWORD *)*((_QWORD *)a1 + 13);
          if ( (int)v6 >= 1 )
          {
            v12 = 0;
            v13 = 0;
            do
            {
              Debugger::doAssert(
                (Debugger *)(*(_QWORD *)(*v11 + v12) != SpellByName),
                (bool)"Duplicate spell in NPC decks",
                v10);
              v11 = (_QWORD *)*((_QWORD *)a1 + 13);
              ++v13;
              v12 += 8;
            }
            while ( (_DWORD)v6 != v13 );
          }
          LogicArrayList<LogicSpellData const*>::add((__int64)v11, &v17);
          v14 = *((_QWORD *)a1 + 14);
          v16 = LogicData::getIntegerValueAt(
                  (__int64)a1,
                  (unsigned int)LogicPredefinedDeckData::sm_columnIndexSpellLevelIndexes,
                  v6)
              - 1;
          result = LogicArrayList<int>::add(v14, &v16);
          v15 = (_DWORD)v6 == v5;
          v6 = (const char *)(unsigned int)((_DWORD)v6 + 1);
        }
        while ( !v15 );
      }
      return result;
    }

    __n128 __fastcall LogicPredefinedDeckData::resetStatics(#1224 *a1)
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
    
      String::String(&v11, "Description");
      LogicPredefinedDeckData::sm_columnIndexDescription = CSVTable::getColumnIndexByName(a1, &v11);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicPredefinedDeckData::sm_columnIndexDescription) == 0;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v10, "Spells");
      LogicPredefinedDeckData::sm_columnIndexSpells = CSVTable::getColumnIndexByName(a1, &v10);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicPredefinedDeckData::sm_columnIndexSpells) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v9, "SpellLevel");
      LogicPredefinedDeckData::sm_columnIndexSpellLevelIndexes = CSVTable::getColumnIndexByName(a1, &v9);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicPredefinedDeckData::sm_columnIndexSpellLevelIndexes) == 1;
      return Debugger::doAssert((Debugger *)v6, (bool)"", v7);
    }

    void __fastcall LogicPredefinedDeckData::createReferences2(__int64 a1)
    {
      __int64 v2; // x8
      __int64 v3; // x21
      int MaxLevelIndex; // w0
      int v5; // w8
      const char *v6; // x2
    
      LogicData::createReferences2();
      v2 = *(_QWORD *)(a1 + 104);
      if ( *(int *)(v2 + 12) >= 1 )
      {
        v3 = 0;
        do
        {
          MaxLevelIndex = LogicSpellData::getMaxLevelIndex(*(LogicGameObjectManagerListener ***)(*(_QWORD *)v2 + 8 * v3));
          v5 = *(_DWORD *)(**(_QWORD **)(a1 + 112) + 4 * v3);
          Debugger::doAssert(
            (Debugger *)((v5 >= 0) & (unsigned __int8)(v5 < MaxLevelIndex)),
            (bool)"Illegal spell level in predefined deck.",
            v6);
          ++v3;
          v2 = *(_QWORD *)(a1 + 104);
        }
        while ( v3 < *(int *)(v2 + 12) );
      }
    }

    // attributes: thunk
    void __fastcall LogicPredefinedDeckData::~LogicPredefinedDeckData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicPredefinedDeckData::~LogicPredefinedDeckData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicPredefinedDeckData
