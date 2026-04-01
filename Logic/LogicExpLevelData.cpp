class LogicExpLevelData
{
public:

    void __fastcall LogicExpLevelData::LogicExpLevelData(
            LogicExpLevelData *this,
            const #1223 *a2,
            const ResetAccountMessage *a3)
    {
      *(_QWORD *)LogicData::LogicData((__int64)this, (__int64)a2, a3) = off_10046F388;
    }

    // attributes: thunk
    __int64 __fastcall LogicExpLevelData::destruct(__int64 this)
    {
      return LogicData::destruct(this);
    }

    __int64 __fastcall LogicExpLevelData::createReferences(AreaEffectObject *a1)
    {
      __int64 result; // x0
      LogicExpLevelData *Table; // x0
      const CSVTable *v4; // x1
    
      LogicData::createReferences(a1);
      result = CSVRow::getRowOffset(*((_QWORD *)a1 + 1));
      if ( !(_DWORD)result )
      {
        Table = (LogicExpLevelData *)CSVRow::getTable(*((_QWORD *)a1 + 1));
        return LogicExpLevelData::resetStatics(Table, v4);
      }
      return result;
    }

    __n128 __fastcall LogicExpLevelData::resetStatics(#1224 *a1)
    {
      _BOOL8 v2; // x0
      const char *v3; // x2
      _BOOL8 v4; // x0
      const char *v5; // x2
      _BOOL8 v6; // x0
      const char *v7; // x2
      _BOOL8 v8; // x0
      const char *v9; // x2
      _BOOL8 v10; // x0
      const char *v11; // x2
      _BOOL8 v12; // x0
      const char *v13; // x2
      _BOOL8 v14; // x0
      const char *v15; // x2
      _BOOL8 v16; // x0
      const char *v17; // x2
      String v19; // [xsp+0h] [xbp-D0h] BYREF
      String v20; // [xsp+18h] [xbp-B8h] BYREF
      String v21; // [xsp+30h] [xbp-A0h] BYREF
      String v22; // [xsp+48h] [xbp-88h] BYREF
      String v23; // [xsp+60h] [xbp-70h] BYREF
      String v24; // [xsp+78h] [xbp-58h] BYREF
      String v25; // [xsp+90h] [xbp-40h] BYREF
      String v26; // [xsp+A8h] [xbp-28h] BYREF
    
      String::String(&v26, "ExpToNextLevel");
      LogicExpLevelData::sm_columnIndexExpToNextLevel = CSVTable::getColumnIndexByName(a1, &v26);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicExpLevelData::sm_columnIndexExpToNextLevel) == 1;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v25, "SummonerLevel");
      LogicExpLevelData::sm_columnIndexSummonerLevel = CSVTable::getColumnIndexByName(a1, &v25);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicExpLevelData::sm_columnIndexSummonerLevel) == 1;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v24, "TowerLevel");
      LogicExpLevelData::sm_columnIndexTowerLevel = CSVTable::getColumnIndexByName(a1, &v24);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicExpLevelData::sm_columnIndexTowerLevel) == 1;
      Debugger::doAssert((Debugger *)v6, (bool)"", v7);
      String::String(&v23, "TroopLevel");
      LogicExpLevelData::sm_columnIndexTroopLevel = CSVTable::getColumnIndexByName(a1, &v23);
      String::~String();
      v8 = (unsigned int)CSVTable::getColumnType(a1, LogicExpLevelData::sm_columnIndexTroopLevel) == 1;
      Debugger::doAssert((Debugger *)v8, (bool)"", v9);
      String::String(&v22, "Decks");
      LogicExpLevelData::sm_columnIndexDecks = CSVTable::getColumnIndexByName(a1, &v22);
      String::~String();
      v10 = (unsigned int)CSVTable::getColumnType(a1, LogicExpLevelData::sm_columnIndexDecks) == 1;
      Debugger::doAssert((Debugger *)v10, (bool)"", v11);
      String::String(&v21, "SummonerKillGold");
      LogicExpLevelData::sm_columnIndexSummonerKillGold = CSVTable::getColumnIndexByName(a1, &v21);
      String::~String();
      v12 = (unsigned int)CSVTable::getColumnType(a1, LogicExpLevelData::sm_columnIndexSummonerKillGold) == 1;
      Debugger::doAssert((Debugger *)v12, (bool)"", v13);
      String::String(&v20, "TowerKillGold");
      LogicExpLevelData::sm_columnIndexTowerKillGold = CSVTable::getColumnIndexByName(a1, &v20);
      String::~String();
      v14 = (unsigned int)CSVTable::getColumnType(a1, LogicExpLevelData::sm_columnIndexTowerKillGold) == 1;
      Debugger::doAssert((Debugger *)v14, (bool)"", v15);
      String::String(&v19, "DiamondReward");
      LogicExpLevelData::sm_columnIndexDiamondReward = CSVTable::getColumnIndexByName(a1, &v19);
      String::~String();
      v16 = (unsigned int)CSVTable::getColumnType(a1, LogicExpLevelData::sm_columnIndexDiamondReward) == 1;
      return Debugger::doAssert((Debugger *)v16, (bool)"", v17);
    }

    __int64 __fastcall LogicExpLevelData::getExpToNextLevel(#1364 *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicExpLevelData::sm_columnIndexExpToNextLevel);
    }

    __int64 __fastcall LogicExpLevelData::getSummonerLevel(#1364 *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicExpLevelData::sm_columnIndexSummonerLevel);
    }

    __int64 __fastcall LogicExpLevelData::getTowerLevel(#1364 *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicExpLevelData::sm_columnIndexTowerLevel);
    }

    __int64 __fastcall LogicExpLevelData::getTroopLevel(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicExpLevelData::sm_columnIndexTroopLevel);
    }

    __int64 __fastcall LogicExpLevelData::getDecks(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicExpLevelData::sm_columnIndexDecks);
    }

    __int64 __fastcall LogicExpLevelData::getDiamondReward(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicExpLevelData::sm_columnIndexDiamondReward);
    }

    // attributes: thunk
    void __fastcall LogicExpLevelData::~LogicExpLevelData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicExpLevelData::~LogicExpLevelData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicExpLevelData
