class LogicAchievementData
{
public:

    __int64 __fastcall LogicAchievementData::LogicAchievementData(__int64 a1, __int64 a2, __int64 a3)
    {
      __int64 result; // x0
    
      result = LogicData::LogicData(a1, a2, a3);
      *(_QWORD *)result = off_100466358;
      *(_BYTE *)(result + 124) = 0;
      *(_QWORD *)(result + 116) = 0;
      *(_QWORD *)(result + 108) = 0;
      *(_QWORD *)(result + 100) = 0;
      return result;
    }

    __int64 __fastcall LogicAchievementData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicData::destruct((LogicData *)a1);
      *(_BYTE *)(a1 + 124) = 0;
      *(_QWORD *)(a1 + 116) = 0;
      *(_QWORD *)(a1 + 108) = 0;
      *(_QWORD *)(a1 + 100) = 0;
      return result;
    }

    void __fastcall LogicAchievementData::createReferences(__int64 a1)
    {
      __int64 v2; // x20
      __int64 v3; // x20
      __int64 v4; // x20
      __int64 v5; // x20
      const char *v6; // x1
      __int64 v7; // x20
      const String *Value; // x0
      const char *v9; // x1
      internal_t *pHeap; // x8
      const String *v11; // x1
      __int64 v12; // x20
      __int64 v13; // x20
      #1224 *Table; // x20
      #1224 *v15; // x0
      _BOOL8 v16; // x0
      const char *v17; // x2
      String v18; // [xsp+10h] [xbp-110h] BYREF
      String v19; // [xsp+28h] [xbp-F8h] BYREF
      String v20; // [xsp+40h] [xbp-E0h] BYREF
      String v21; // [xsp+58h] [xbp-C8h] BYREF
      String v22; // [xsp+70h] [xbp-B0h] BYREF
      String v23; // [xsp+88h] [xbp-98h] BYREF
      String v24; // [xsp+A0h] [xbp-80h] BYREF
      String v25; // [xsp+B8h] [xbp-68h] BYREF
      String v26; // [xsp+D0h] [xbp-50h] BYREF
      String v27; // [xsp+E8h] [xbp-38h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      v2 = *(_QWORD *)(a1 + 8);
      String::String(&v27, "DiamondReward");
      *(_DWORD *)(a1 + 108) = CSVRow::getIntegerValue(v2, &v27, 0);
      String::~String(&v27);
      v3 = *(_QWORD *)(a1 + 8);
      String::String(&v26, "ExpReward");
      *(_DWORD *)(a1 + 112) = CSVRow::getIntegerValue(v3, &v26, 0);
      String::~String(&v26);
      v4 = *(_QWORD *)(a1 + 8);
      String::String(&v25, "ActionCount");
      *(_DWORD *)(a1 + 104) = CSVRow::getIntegerValue(v4, &v25, 0);
      String::~String(&v25);
      v5 = *(_QWORD *)(a1 + 8);
      String::String(&v24, "Level");
      *(_DWORD *)(a1 + 116) = CSVRow::getIntegerValue(v5, &v24, 0);
      String::~String(&v24);
      if ( !*(_DWORD *)(a1 + 104) )
        Debugger::error((__siginfo *)"Achievement has invalid ActionCount 0", v6);
      v7 = *(_QWORD *)(a1 + 8);
      String::String(&v22, "Action");
      Value = (const String *)CSVRow::getValue(v7, &v22, 0);
      String::String(&v23, Value);
      String::~String(&v22);
      if ( (unsigned int)String::equals(&v23, "jointeam") )
      {
        *(_DWORD *)(a1 + 100) = 0;
      }
      else if ( (unsigned int)String::equals(&v23, "donate") )
      {
        *(_DWORD *)(a1 + 100) = 1;
      }
      else if ( (unsigned int)String::equals(&v23, "reacharena") )
      {
        *(_DWORD *)(a1 + 100) = 2;
      }
      else if ( (unsigned int)String::equals(&v23, "findcard") )
      {
        *(_DWORD *)(a1 + 100) = 3;
      }
      else
      {
        if ( !(unsigned int)String::equals(&v23, "watchtv") )
        {
          if ( v23.m_bytes + 1 > 8 )
            pHeap = (internal_t *)v23.internal.pHeap;
          else
            pHeap = &v23.internal;
          String::format((String *)"Unknown Action in achievements %s", v9, pHeap);
          Debugger::error((Debugger *)&v21, v11);
        }
        *(_DWORD *)(a1 + 100) = 4;
      }
      v12 = *(_QWORD *)(a1 + 8);
      String::String(&v20, "SortIndex");
      *(_DWORD *)(a1 + 120) = CSVRow::getIntegerValue(v12, &v20, 0);
      String::~String(&v20);
      v13 = *(_QWORD *)(a1 + 8);
      String::String(&v19, "Hidden");
      *(_BYTE *)(a1 + 124) = CSVRow::getBooleanValue(v13, &v19, 0);
      String::~String(&v19);
      Table = (#1224 *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
      String::String(&v18, "InfoTID");
      LogicAchievementData::sm_columnIndexInfoTID = CSVTable::getColumnIndexByName(Table, &v18);
      String::~String(&v18);
      v15 = (#1224 *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
      v16 = (unsigned int)CSVTable::getColumnType(v15, LogicAchievementData::sm_columnIndexInfoTID) == 0;
      Debugger::doAssert((Debugger *)v16, (bool)"", v17);
      String::~String(&v23);
    }

    __int64 __fastcall LogicAchievementData::getInfoTID(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicAchievementData::sm_columnIndexInfoTID);
    }

    // attributes: thunk
    void __fastcall LogicAchievementData::~LogicAchievementData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicAchievementData::~LogicAchievementData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicAchievementData
