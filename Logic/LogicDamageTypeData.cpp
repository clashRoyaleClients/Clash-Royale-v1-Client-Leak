class LogicDamageTypeData
{
public:

    void __fastcall LogicDamageTypeData::LogicDamageTypeData(LogicDamageTypeData *this, const #1223 *a2, const #1043 *a3)
    {
      _QWORD *v3; // x0
    
      v3 = (_QWORD *)LogicData::LogicData(this, a2, a3);
      *v3 = off_1004606D0;
      *(_QWORD *)((char *)v3 + 116) = 0;
      *(_QWORD *)((char *)v3 + 108) = 0;
      *(_QWORD *)((char *)v3 + 100) = 0;
      v3[16] = 0;
      v3[17] = 0;
    }

    __int64 __fastcall LogicDamageTypeData::destruct(LogicData *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(this);
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      return result;
    }

    __int64 __fastcall LogicDamageTypeData::createReferences(LogicData *this)
    {
      LogicData *Table; // x0
      const #1224 *v3; // x1
      LogicDataTables *ValueAt; // x0
      const LogicData *v5; // x2
      #1004 *v6; // x0
      const #916 *v7; // x2
      __int64 result; // x0
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
      {
        Table = (LogicData *)CSVRow::getTable(*((_QWORD *)this + 1));
        LogicDamageTypeData::resetStatics(Table, v3);
      }
      ValueAt = (LogicDataTables *)CSVRow::getValueAt(
                                     *((_QWORD *)this + 1),
                                     (unsigned int)LogicDamageTypeData::sm_columnIndexBuff);
      *((_QWORD *)this + 16) = LogicDataTables::getCharacterBuffByName(ValueAt, (const String *)this, v5);
      v6 = (#1004 *)CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicDamageTypeData::sm_columnIndexDamageEffect);
      *((_QWORD *)this + 17) = LogicDataTables::getEffectByName(v6, (const String *)this, v7);
      *((_DWORD *)this + 25) = LogicData::getIntegerValueAt(this, LogicDamageTypeData::sm_columnIndexEfficiency);
      *((_DWORD *)this + 26) = LogicData::getIntegerValueAt(this, LogicDamageTypeData::sm_columnIndexNumberOfJumps);
      *((_DWORD *)this + 27) = LogicData::getIntegerValueAt(this, LogicDamageTypeData::sm_columnIndexMinBuffChance);
      *((_DWORD *)this + 28) = LogicData::getIntegerValueAt(this, LogicDamageTypeData::sm_columnIndexMaxBuffChance);
      *((_DWORD *)this + 29) = LogicData::getIntegerValueAt(this, LogicDamageTypeData::sm_columnIndexBankDamage);
      result = CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicDamageTypeData::sm_columnIndexBuffTime);
      *((_DWORD *)this + 30) = result;
      return result;
    }

    __n128 __fastcall LogicDamageTypeData::resetStatics(LogicData *this, const #1224 *a2)
    {
      _BOOL8 v3; // x0
      const char *v4; // x2
      _BOOL8 v5; // x0
      const char *v6; // x2
      _BOOL8 v7; // x0
      const char *v8; // x2
      _BOOL8 v9; // x0
      const char *v10; // x2
      _BOOL8 v11; // x0
      const char *v12; // x2
      _BOOL8 v13; // x0
      const char *v14; // x2
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
    
      String::String(&v26, "Efficiency");
      LogicDamageTypeData::sm_columnIndexEfficiency = CSVTable::getColumnIndexByName(this, &v26);
      String::~String(&v26);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicDamageTypeData::sm_columnIndexEfficiency) == 1;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v25, "NumberOfJumps");
      LogicDamageTypeData::sm_columnIndexNumberOfJumps = CSVTable::getColumnIndexByName(this, &v25);
      String::~String(&v25);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicDamageTypeData::sm_columnIndexNumberOfJumps) == 1;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v24, "MinBuffChance");
      LogicDamageTypeData::sm_columnIndexMinBuffChance = CSVTable::getColumnIndexByName(this, &v24);
      String::~String(&v24);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicDamageTypeData::sm_columnIndexMinBuffChance) == 1;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v23, "MaxBuffChance");
      LogicDamageTypeData::sm_columnIndexMaxBuffChance = CSVTable::getColumnIndexByName(this, &v23);
      String::~String(&v23);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicDamageTypeData::sm_columnIndexMaxBuffChance) == 1;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v22, "BankDamage");
      LogicDamageTypeData::sm_columnIndexBankDamage = CSVTable::getColumnIndexByName(this, &v22);
      String::~String(&v22);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicDamageTypeData::sm_columnIndexBankDamage) == 1;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v21, "Buff");
      LogicDamageTypeData::sm_columnIndexBuff = CSVTable::getColumnIndexByName(this, &v21);
      String::~String(&v21);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicDamageTypeData::sm_columnIndexBuff) == 0;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v20, "DamageEffect");
      LogicDamageTypeData::sm_columnIndexDamageEffect = CSVTable::getColumnIndexByName(this, &v20);
      String::~String(&v20);
      Debugger::doAssert((Debugger *)(LogicDamageTypeData::sm_columnIndexDamageEffect != -1), (bool)"", v15);
      String::String(&v19, "BuffTime");
      LogicDamageTypeData::sm_columnIndexBuffTime = CSVTable::getColumnIndexByName(this, &v19);
      String::~String(&v19);
      v16 = (unsigned int)CSVTable::getColumnType(this, LogicDamageTypeData::sm_columnIndexBuffTime) == 1;
      return Debugger::doAssert((Debugger *)v16, (bool)"", v17);
    }

    __int64 __fastcall LogicDamageTypeData::getEfficiency(LogicData *this)
    {
      return *((unsigned int *)this + 25);
    }

    __int64 __fastcall LogicDamageTypeData::getMinBuffChance(LogicData *this)
    {
      return *((unsigned int *)this + 27);
    }

    __int64 __fastcall LogicDamageTypeData::getBankDamage(LogicData *this)
    {
      return *((unsigned int *)this + 29);
    }

    __int64 __fastcall LogicDamageTypeData::getBuff(LogicData *this)
    {
      return *((_QWORD *)this + 16);
    }

    __int64 __fastcall LogicDamageTypeData::getDamageEffect(LogicData *this)
    {
      return *((_QWORD *)this + 17);
    }

    __int64 __fastcall LogicDamageTypeData::getBuffTime(LogicData *this)
    {
      return *((unsigned int *)this + 30);
    }

    // attributes: thunk
    void __fastcall LogicDamageTypeData::~LogicDamageTypeData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicDamageTypeData::~LogicDamageTypeData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicDamageTypeData
