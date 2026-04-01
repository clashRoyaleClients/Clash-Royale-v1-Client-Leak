class LogicNpcData
{
public:

    void __fastcall LogicNpcData::LogicNpcData(LogicNpcData *this, const #1223 *a2, ResetAccountMessage *a3)
    {
      __int64 v3; // x0
    
      v3 = LogicData::LogicData((__int64)this, (__int64)a2, a3);
      *(_QWORD *)v3 = off_10046F5B0;
      *(_BYTE *)(v3 + 97) = 0;
      *(_DWORD *)(v3 + 128) = 0;
      *(_QWORD *)(v3 + 112) = 0;
      *(_QWORD *)(v3 + 120) = 0;
      *(_QWORD *)(v3 + 104) = 0;
    }

    void __fastcall LogicNpcData::destruct(Character::AnimFrameIndices *this)
    {
      void *v2; // x20
    
      LogicData::destruct((__int64)this);
      v2 = (void *)LogicNpcData::sm_pTauntColumnIndices;
      if ( LogicNpcData::sm_pTauntColumnIndices )
      {
        if ( *(_QWORD *)LogicNpcData::sm_pTauntColumnIndices )
          operator delete[](*(_QWORD *)LogicNpcData::sm_pTauntColumnIndices);
        operator delete(v2);
        LogicNpcData::sm_pTauntColumnIndices = 0;
      }
      *((_BYTE *)this + 97) = 0;
      *((_DWORD *)this + 32) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 13) = 0;
    }

    __int64 __fastcall LogicNpcData::createReferences(Character::AnimFrameIndices *this)
    {
      LogicNpcData *Table; // x0
      const CSVTable *v3; // x1
      __int64 ValueAt; // x0
      __int64 LocationByName; // x0
      const char *v6; // x1
      __int64 v7; // x20
      __int64 v8; // x20
      __int64 v9; // x20
      __int64 v10; // x0
      __int64 result; // x0
      String v12; // [xsp+8h] [xbp-58h] BYREF
      String v13; // [xsp+20h] [xbp-40h] BYREF
      String v14; // [xsp+38h] [xbp-28h] BYREF
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
      {
        Table = (LogicNpcData *)CSVRow::getTable(*((_QWORD *)this + 1));
        LogicNpcData::resetStatics(Table, v3);
      }
      ValueAt = CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicNpcData::sm_columnIndexLocation);
      LocationByName = LogicDataTables::getLocationByName(ValueAt, (__int64)this);
      *((_QWORD *)this + 13) = LocationByName;
      if ( LocationByName )
        LogicLocationData::setNPC(LocationByName, (__int64)this);
      else
        Debugger::warning((__siginfo *)"No location in NPC level", v6);
      v7 = *((_QWORD *)this + 1);
      String::String(&v14, "ManaReserve");
      *((_DWORD *)this + 30) = CSVRow::getIntegerValue(v7, &v14, 0);
      String::~String();
      v8 = *((_QWORD *)this + 1);
      String::String(&v13, "StartingMana");
      *((_DWORD *)this + 32) = CSVRow::getIntegerValue(v8, &v13, 0);
      String::~String();
      v9 = *((_QWORD *)this + 1);
      String::String(&v12, "WizardHpMultiplier");
      *((_DWORD *)this + 31) = CSVRow::getIntegerValue(v9, &v12, 0);
      String::~String();
      if ( !*((_DWORD *)this + 31) )
        *((_DWORD *)this + 31) = 100;
      v10 = CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicNpcData::sm_columnIndexPredefinedDeck);
      result = LogicDataTables::getPredefinedDeckByName(v10, (__int64)this);
      *((_QWORD *)this + 14) = result;
      return result;
    }

    void __fastcall LogicNpcData::resetStatics(#1224 *a1)
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
      _BOOL8 v18; // x0
      const char *v19; // x2
      _BOOL8 v20; // x0
      const char *v21; // x2
      _BOOL8 v22; // x0
      const char *v23; // x2
      _BOOL8 v24; // x0
      const char *v25; // x2
      __int64 v26; // x22
      __int64 v27; // x26
      const char *v28; // x1
      const String *v29; // x1
      __int64 v30; // x24
      int v31; // [xsp+8h] [xbp-1A8h] BYREF
      int ColumnIndexByName; // [xsp+Ch] [xbp-1A4h] BYREF
      String v33; // [xsp+10h] [xbp-1A0h] BYREF
      String v34; // [xsp+28h] [xbp-188h] BYREF
      String v35; // [xsp+40h] [xbp-170h] BYREF
      String v36; // [xsp+58h] [xbp-158h] BYREF
      String v37; // [xsp+70h] [xbp-140h] BYREF
      String v38; // [xsp+88h] [xbp-128h] BYREF
      String v39; // [xsp+A0h] [xbp-110h] BYREF
      String v40; // [xsp+B8h] [xbp-F8h] BYREF
      String v41; // [xsp+D0h] [xbp-E0h] BYREF
      String v42; // [xsp+E8h] [xbp-C8h] BYREF
      String v43; // [xsp+100h] [xbp-B0h] BYREF
      String v44; // [xsp+118h] [xbp-98h] BYREF
      String v45; // [xsp+130h] [xbp-80h] BYREF
      String v46; // [xsp+148h] [xbp-68h] BYREF
    
      String::String(&v46, "Location");
      LogicNpcData::sm_columnIndexLocation = CSVTable::getColumnIndexByName(a1, &v46);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexLocation) == 0;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v45, "PredefinedDeck");
      LogicNpcData::sm_columnIndexPredefinedDeck = CSVTable::getColumnIndexByName(a1, &v45);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexPredefinedDeck) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v44, "Trophies");
      LogicNpcData::sm_columnIndexTrophies = CSVTable::getColumnIndexByName(a1, &v44);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexTrophies) == 1;
      Debugger::doAssert((Debugger *)v6, (bool)"", v7);
      String::String(&v43, "ManaRegenMs");
      LogicNpcData::sm_columnIndexManaRegenMilliseconds = CSVTable::getColumnIndexByName(a1, &v43);
      String::~String();
      v8 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexManaRegenMilliseconds) == 1;
      Debugger::doAssert((Debugger *)v8, (bool)"", v9);
      String::String(&v42, "ManaRegenMsEnd");
      LogicNpcData::sm_columnIndexManaRegenMillisecondsEnd = CSVTable::getColumnIndexByName(a1, &v42);
      String::~String();
      v10 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexManaRegenMillisecondsEnd) == 1;
      Debugger::doAssert((Debugger *)v10, (bool)"", v11);
      String::String(&v41, "ManaRegenMsOvertime");
      LogicNpcData::sm_columnIndexManaRegenMillisecondsOvertime = CSVTable::getColumnIndexByName(a1, &v41);
      String::~String();
      v12 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexManaRegenMillisecondsOvertime) == 1;
      Debugger::doAssert((Debugger *)v12, (bool)"", v13);
      String::String(&v40, "ExpLevel");
      LogicNpcData::sm_columnIndexExpLevel = CSVTable::getColumnIndexByName(a1, &v40);
      String::~String();
      v14 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexExpLevel) == 1;
      Debugger::doAssert((Debugger *)v14, (bool)"", v15);
      String::String(&v39, "CanReplay");
      LogicNpcData::sm_columnIndexCanReplay = CSVTable::getColumnIndexByName(a1, &v39);
      String::~String();
      v16 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexCanReplay) == 2;
      Debugger::doAssert((Debugger *)v16, (bool)"", v17);
      String::String(&v38, "ExpReward");
      LogicNpcData::sm_columnIndexExpReward = CSVTable::getColumnIndexByName(a1, &v38);
      String::~String();
      v18 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexExpReward) == 1;
      Debugger::doAssert((Debugger *)v18, (bool)"", v19);
      String::String(&v37, "Seed");
      LogicNpcData::sm_columnIndexSeed = CSVTable::getColumnIndexByName(a1, &v37);
      String::~String();
      v20 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexSeed) == 1;
      Debugger::doAssert((Debugger *)v20, (bool)"", v21);
      String::String(&v36, "FullDeckNotNeeded");
      LogicNpcData::sm_columnIndexFullDeckNotNeeded = CSVTable::getColumnIndexByName(a1, &v36);
      String::~String();
      v22 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexFullDeckNotNeeded) == 2;
      Debugger::doAssert((Debugger *)v22, (bool)"", v23);
      String::String(&v35, "HighlightTargetsOnManaFull");
      LogicNpcData::sm_columnIndexHighlightTargetsOnManaFull = CSVTable::getColumnIndexByName(a1, &v35);
      String::~String();
      v24 = (unsigned int)CSVTable::getColumnType(a1, LogicNpcData::sm_columnIndexHighlightTargetsOnManaFull) == 2;
      Debugger::doAssert((Debugger *)v24, (bool)"", v25);
      v26 = LogicNpcData::sm_pTauntColumnIndices;
      if ( !LogicNpcData::sm_pTauntColumnIndices )
      {
        v26 = operator new(16);
        *(_QWORD *)v26 = 0;
        *(_QWORD *)(v26 + 8) = 0;
        *(_DWORD *)(v26 + 8) = 2;
        *(_QWORD *)v26 = operator new[](8);
        LogicNpcData::sm_pTauntColumnIndices = v26;
      }
      v27 = 0;
      *(_DWORD *)(v26 + 12) = 0;
      do
      {
        String::String(&v34, "");
        if ( (_DWORD)v27 == 1 )
        {
          String::operator=(&v34, "OwnTowerDestroyedTaunt");
        }
        else if ( (_DWORD)v27 )
        {
          String::format((String *)"failed to find column index for event %d taunt", v28, v27);
          Debugger::warning((__siginfo *)&v33, v29);
          String::~String();
        }
        else
        {
          String::operator=(&v34, "StartTaunt");
        }
        v30 = LogicNpcData::sm_pTauntColumnIndices;
        if ( v34.m_length )
        {
          ColumnIndexByName = CSVTable::getColumnIndexByName(a1, &v34);
          LogicArrayList<int>::add(v30, &ColumnIndexByName);
        }
        else
        {
          v31 = -1;
          LogicArrayList<int>::add(LogicNpcData::sm_pTauntColumnIndices, &v31);
        }
        String::~String();
        v27 = (unsigned int)(v27 + 1);
      }
      while ( (int)v27 < 2 );
    }

    __int64 __fastcall LogicNpcData::getLocation(Character::AnimFrameIndices *this)
    {
      return *((_QWORD *)this + 13);
    }

    __int64 __fastcall LogicNpcData::getWizardHpMultiplier(Character::AnimFrameIndices *this)
    {
      return *((unsigned int *)this + 31);
    }

    __int64 __fastcall LogicNpcData::getTrophies(Character::AnimFrameIndices *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicNpcData::sm_columnIndexTrophies);
    }

    __int64 __fastcall LogicNpcData::getManaRegenMilliseconds(Character::AnimFrameIndices *this)
    {
      return CSVRow::getIntegerValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicNpcData::sm_columnIndexManaRegenMilliseconds);
    }

    __int64 __fastcall LogicNpcData::getManaRegenMillisecondsEnd(Character::AnimFrameIndices *this)
    {
      return CSVRow::getIntegerValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicNpcData::sm_columnIndexManaRegenMillisecondsEnd);
    }

    __int64 __fastcall LogicNpcData::getManaRegenMillisecondsOvertime(Character::AnimFrameIndices *this)
    {
      return CSVRow::getIntegerValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicNpcData::sm_columnIndexManaRegenMillisecondsOvertime);
    }

    __int64 __fastcall LogicNpcData::getManaReserve(Character::AnimFrameIndices *this)
    {
      return *((unsigned int *)this + 30);
    }

    __int64 __fastcall LogicNpcData::getStartMana(Character::AnimFrameIndices *this)
    {
      __int64 result; // x0
    
      result = *((unsigned int *)this + 32);
      if ( !(_DWORD)result )
        return *(unsigned int *)(LogicDataTables::getGlobals() + 152);
      return result;
    }

    __int64 __fastcall LogicNpcData::getExpReward(Character::AnimFrameIndices *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicNpcData::sm_columnIndexExpReward);
    }

    __int64 __fastcall LogicNpcData::getSeed(Character::AnimFrameIndices *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicNpcData::sm_columnIndexSeed);
    }

    __int64 __fastcall LogicNpcData::getEventTauntData(Character::AnimFrameIndices *this, unsigned int a2, const char *a3)
    {
      const char *v5; // x2
      const char *v6; // x2
      __int64 v7; // x1
      _DWORD *ValueAt; // x0
    
      Debugger::doAssert((Debugger *)(a2 < 2), (bool)"", a3);
      Debugger::doAssert(
        (Debugger *)(LogicNpcData::sm_pTauntColumnIndices != 0),
        (bool)"resetStatics need to be called first!",
        v5);
      v7 = *(unsigned int *)(*(_QWORD *)LogicNpcData::sm_pTauntColumnIndices + 4LL * (int)a2);
      if ( (_DWORD)v7 == -1 )
        return 0;
      ValueAt = (_DWORD *)LogicData::getValueAt((__int64)this, v7, v6);
      if ( !*ValueAt )
        return 0;
      else
        return LogicDataTables::getTauntByName((__int64)ValueAt, 0);
    }

    // attributes: thunk
    void __fastcall LogicNpcData::~LogicNpcData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicNpcData::~LogicNpcData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicNpcData
