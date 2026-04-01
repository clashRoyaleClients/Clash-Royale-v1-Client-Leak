class LogicSpellSetData
{
public:

    _QWORD *__fastcall LogicSpellSetData::LogicSpellSetData(__int64 a1, __int64 a2, __int64 a3)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicData::LogicData(a1, a2, a3);
      *result = off_100465FB0;
      result[13] = 0;
      result[14] = 0;
      return result;
    }

    __int64 __fastcall LogicSpellSetData::destruct(LogicData *a1)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(a1);
      *((_DWORD *)a1 + 29) = 0;
      return result;
    }

    __n128 __fastcall LogicSpellSetData::createReferences(__int64 a1)
    {
      LogicSpellSetData *Table; // x0
      const CSVTable *v3; // x1
      int ArraySizeAt; // w21
      const char *v5; // x2
      __int64 v6; // x22
      LogicDataTables *ValueAt; // x0
      const LogicData *v8; // x2
      InitState *SpellByName; // x0
      const char *v10; // x2
      Debugger *v11; // x0
      InitState *v13; // [xsp+8h] [xbp-38h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (LogicSpellSetData *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicSpellSetData::resetStatics(Table, v3);
      }
      *(_DWORD *)(a1 + 116) = 0;
      ArraySizeAt = CSVRow::getArraySizeAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSpellSetData::sm_columnIndexSpells);
      LogicArrayList<LogicSpellData const*>::ensureCapacity(a1 + 104, ArraySizeAt);
      if ( ArraySizeAt >= 1 )
      {
        v6 = 0;
        do
        {
          ValueAt = (LogicDataTables *)CSVRow::getValueAt(
                                         *(_QWORD *)(a1 + 8),
                                         (unsigned int)LogicSpellSetData::sm_columnIndexSpells,
                                         v6);
          SpellByName = (InitState *)LogicDataTables::getSpellByName(ValueAt, (const String *)a1, v8);
          v13 = SpellByName;
          if ( SpellByName )
            v11 = (Debugger *)((unsigned int)LogicSpellData::isNotInUse(SpellByName) ^ 1);
          else
            v11 = 0;
          Debugger::doAssert(v11, (bool)"", v10);
          LogicArrayList<LogicSpellData const*>::add(a1 + 104, (__int64 *)&v13);
          v6 = (unsigned int)(v6 + 1);
        }
        while ( ArraySizeAt != (_DWORD)v6 );
      }
      return Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 116) > 0), (bool)"", v5);
    }

    __n128 __fastcall LogicSpellSetData::resetStatics(#1224 *a1)
    {
      _BOOL8 v2; // x0
      const char *v3; // x2
      String v5; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v5, "Spells");
      LogicSpellSetData::sm_columnIndexSpells = CSVTable::getColumnIndexByName(a1, &v5);
      String::~String(&v5);
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicSpellSetData::sm_columnIndexSpells) == 0;
      return Debugger::doAssert((Debugger *)v2, (bool)"", v3);
    }

    __int64 __fastcall LogicSpellSetData::getSize(CreateAllianceMessage *this)
    {
      return *((unsigned int *)this + 29);
    }

    __int64 __fastcall LogicSpellSetData::getSpell(CreateAllianceMessage *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * a2);
    }

    // attributes: thunk
    void __fastcall LogicSpellSetData::~LogicSpellSetData(LogicSpellSetData *a1)
    {
      __ZN17LogicSpellSetDataD2Ev(a1);
    }

    void __fastcall LogicSpellSetData::~LogicSpellSetData(LogicSpellSetData *a1)
    {
      LogicSpellSetData::~LogicSpellSetData(a1);
      operator delete(a1);
    }

    void __fastcall LogicSpellSetData::~LogicSpellSetData(String *a1)
    {
      internal_t v2; // x0
      internal_t *p_internal; // x20
    
      *(_QWORD *)&a1->m_length = off_100465FB0;
      p_internal = &a1[4].internal;
      v2.pHeap = (char *)a1[4].internal;
      if ( v2.pHeap )
        ((void (__fastcall *)(_QWORD))operator delete[])((internal_t)v2.pHeap);
      p_internal->pHeap = 0;
      p_internal[1].pHeap = 0;
      LogicData::~LogicData(a1);
    }

}; // end class LogicSpellSetData
