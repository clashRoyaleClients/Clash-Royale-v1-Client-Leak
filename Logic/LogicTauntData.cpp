class LogicTauntData
{
public:

    void __fastcall LogicTauntData::LogicTauntData(LogicTauntData *this, const #1223 *a2, #1043 *a3)
    {
      _QWORD *v3; // x0
    
      v3 = (_QWORD *)LogicData::LogicData(this, a2, a3);
      *v3 = off_100463D88;
      v3[13] = 0;
    }

    __int64 __fastcall LogicTauntData::destruct(ChallengeDoneStreamEntry *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(this);
      *((_QWORD *)this + 13) = 0;
      return result;
    }

    __n128 __fastcall LogicTauntData::resetStatics(ChallengeDoneStreamEntry *this, const #1224 *a2)
    {
      _BOOL8 v3; // x0
      const char *v4; // x2
      String v6; // [xsp+8h] [xbp-88h] BYREF
      String v7; // [xsp+20h] [xbp-70h] BYREF
      String v8; // [xsp+38h] [xbp-58h] BYREF
      String v9; // [xsp+50h] [xbp-40h] BYREF
      String v10; // [xsp+68h] [xbp-28h] BYREF
    
      String::String(&v10, "TauntMenu");
      LogicTauntData::sm_inInTauntMenuColumnIndex = CSVTable::getColumnIndexByName(this, &v10);
      String::~String(&v10);
      String::String(&v9, "FileName");
      LogicTauntData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(this, &v9);
      String::~String(&v9);
      String::String(&v8, "ExportName");
      LogicTauntData::sm_columnIndexExportName = CSVTable::getColumnIndexByName(this, &v8);
      String::~String(&v8);
      String::String(&v7, "BtnExportName");
      LogicTauntData::sm_columnBtnIndexExportName = CSVTable::getColumnIndexByName(this, &v7);
      String::~String(&v7);
      String::String(&v6, "Sound");
      LogicTauntData::sm_columnIndexSound = CSVTable::getColumnIndexByName(this, &v6);
      String::~String(&v6);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicTauntData::sm_inInTauntMenuColumnIndex) == 2;
      return Debugger::doAssert((Debugger *)v3, (bool)"", v4);
    }

    __int64 __fastcall LogicTauntData::createReferences(ChallengeDoneStreamEntry *this)
    {
      ChallengeDoneStreamEntry *Table; // x0
      const #1224 *v3; // x1
      LogicKickAllianceMemberCommand *ValueAt; // x0
      const AreaEffectObject *v5; // x2
      __int64 result; // x0
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
      {
        Table = (ChallengeDoneStreamEntry *)CSVRow::getTable(*((_QWORD *)this + 1));
        LogicTauntData::resetStatics(Table, v3);
      }
      ValueAt = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                    *((_QWORD *)this + 1),
                                                    (unsigned int)LogicTauntData::sm_columnIndexSound);
      result = LogicDataTables::getSoundByName(ValueAt, (const String *)this, v5);
      *((_QWORD *)this + 13) = result;
      return result;
    }

    __int64 __fastcall LogicTauntData::isInTauntMenu(ChallengeDoneStreamEntry *this)
    {
      return LogicData::getBooleanValueAt(this, LogicTauntData::sm_inInTauntMenuColumnIndex);
    }

    __int64 __fastcall LogicTauntData::getSound(ChallengeDoneStreamEntry *this)
    {
      return *((_QWORD *)this + 13);
    }

    __int64 __fastcall LogicTauntData::getFileName(#847 *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTauntData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicTauntData::getExportName(ChallengeDoneStreamEntry *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTauntData::sm_columnIndexExportName);
    }

    __int64 __fastcall LogicTauntData::getBtnExportName(ChallengeDoneStreamEntry *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTauntData::sm_columnBtnIndexExportName);
    }

    // attributes: thunk
    void __fastcall LogicTauntData::~LogicTauntData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicTauntData::~LogicTauntData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicTauntData
