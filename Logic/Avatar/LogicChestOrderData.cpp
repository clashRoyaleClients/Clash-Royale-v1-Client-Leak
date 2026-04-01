class LogicChestOrderData
{
public:

    void __fastcall LogicChestOrderData::LogicChestOrderData(LogicChestOrderData *this, const #1223 *a2, const #1043 *a3)
    {
      _QWORD *v4; // x0
    
      LogicData::LogicData(this, a2, a3);
      *(_QWORD *)this = off_100462788;
      *((_QWORD *)this + 13) = 0;
      v4 = (_QWORD *)operator new(16);
      *v4 = 0;
      v4[1] = 0;
      *((_QWORD *)this + 13) = v4;
    }

    // attributes: thunk
    void __fastcall LogicChestOrderData::LogicChestOrderData(LogicChestOrderData *this, const #1223 *a2, const #1043 *a3)
    {
      __ZN19LogicChestOrderDataC2EPK6CSVRowPK14LogicDataTable(this, a2, a3);
    }

    void __fastcall LogicChestOrderData::destruct(LogicSpeedUpExploringCommand *this)
    {
      _QWORD *v2; // x20
    
      LogicData::destruct(this);
      v2 = (_QWORD *)*((_QWORD *)this + 13);
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)this + 13) = 0;
    }

    __n128 __fastcall LogicChestOrderData::createReferences(LogicSpeedUpExploringCommand *this)
    {
      LogicSpeedUpExploringCommand *Table; // x0
      const #1224 *v3; // x1
      const char *v4; // x2
      int ArraySizeAt; // w20
      _BOOL8 v6; // x0
      __int64 v7; // x21
      LogicDataTables *ValueAt; // x0
      const LogicData *v9; // x2
      __int64 TreasureChestByName; // x23
      const char *v11; // x1
      __int64 v13; // [xsp+8h] [xbp-38h] BYREF
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
      {
        Table = (LogicSpeedUpExploringCommand *)CSVRow::getTable(*((_QWORD *)this + 1));
        LogicChestOrderData::resetStatics(Table, v3);
      }
      ArraySizeAt = CSVRow::getArraySizeAt(*((_QWORD *)this + 1), (unsigned int)LogicChestOrderData::sm_columnIndexChest);
      v6 = 0;
      *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) = 0;
      if ( ArraySizeAt >= 1 )
      {
        v7 = 0;
        do
        {
          ValueAt = (LogicDataTables *)CSVRow::getValueAt(
                                         *((_QWORD *)this + 1),
                                         (unsigned int)LogicChestOrderData::sm_columnIndexChest,
                                         v7);
          TreasureChestByName = LogicDataTables::getTreasureChestByName(ValueAt, (const String *)this, v9);
          v13 = TreasureChestByName;
          LogicArrayList<LogicTreasureChestData const*>::add(*((_QWORD *)this + 13), &v13);
          if ( !TreasureChestByName )
            Debugger::error((__siginfo *)"LogicChestOrderData - Invalid chests", v11);
          v7 = (unsigned int)(v7 + 1);
        }
        while ( ArraySizeAt != (_DWORD)v7 );
        v6 = *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) > 0;
      }
      return Debugger::doAssert((Debugger *)v6, (bool)"", v4);
    }

    __n128 __fastcall LogicChestOrderData::resetStatics(LogicSpeedUpExploringCommand *this, const #1224 *a2)
    {
      _BOOL8 v3; // x0
      const char *v4; // x2
      String v6; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v6, "Chest");
      LogicChestOrderData::sm_columnIndexChest = CSVTable::getColumnIndexByName(this, &v6);
      String::~String(&v6);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicChestOrderData::sm_columnIndexChest) == 0;
      return Debugger::doAssert((Debugger *)v3, (bool)"", v4);
    }

    __int64 __fastcall LogicChestOrderData::getChestCount(LogicSpeedUpExploringCommand *this)
    {
      return *(unsigned int *)(*((_QWORD *)this + 13) + 12LL);
    }

    __int64 __fastcall LogicChestOrderData::getBaseChest(LogicSpeedUpExploringCommand *this, const char *a2)
    {
      __int64 v2; // x8
    
      if ( ((unsigned int)a2 & 0x80000000) != 0 || (v2 = *((_QWORD *)this + 13), *(_DWORD *)(v2 + 12) <= (int)a2) )
        Debugger::error((__siginfo *)"LogicTreasureChestData::getBaseChest - invalid index", a2);
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL * (int)a2);
    }

    __int64 __fastcall LogicChestOrderData::getChest(LogicSpeedUpExploringCommand *this, const char *a2, const #1143 *a3)
    {
      __int64 v3; // x8
    
      if ( ((unsigned int)a2 & 0x80000000) != 0 || (v3 = *((_QWORD *)this + 13), *(_DWORD *)(v3 + 12) <= (int)a2) )
        Debugger::error((__siginfo *)"LogicTreasureChestData::getChest - invalid index", a2);
      return LogicArenaData::getChestLoopChest(a3, *(_QWORD *)(*(_QWORD *)v3 + 8LL * (int)a2));
    }

    // attributes: thunk
    void __fastcall LogicChestOrderData::~LogicChestOrderData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicChestOrderData::~LogicChestOrderData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicChestOrderData
