class LogicSoundData
{
public:

    _QWORD *__fastcall LogicSoundData::LogicSoundData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicData::LogicData(a1, a2, a3);
      *result = off_100467480;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicSoundData::destruct(__int64 this)
    {
      return LogicData::destruct(this);
    }

    __int64 __fastcall LogicSoundData::createReferences(#1354 *this)
    {
      __int64 result; // x0
      #1354 *Table; // x0
      const #1224 *v4; // x1
    
      LogicData::createReferences(this);
      result = CSVRow::getRowOffset(*((_QWORD *)this + 1));
      if ( !(_DWORD)result )
      {
        Table = (#1354 *)CSVRow::getTable(*((_QWORD *)this + 1));
        return LogicSoundData::resetStatics(Table, v4);
      }
      return result;
    }

    __n128 __fastcall LogicSoundData::resetStatics(#1354 *this, const #1224 *a2)
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
      _BOOL8 v15; // x0
      const char *v16; // x2
      _BOOL8 v17; // x0
      const char *v18; // x2
      _BOOL8 v19; // x0
      const char *v20; // x2
      _BOOL8 v21; // x0
      const char *v22; // x2
      _BOOL8 v23; // x0
      const char *v24; // x2
      _BOOL8 v25; // x0
      const char *v26; // x2
      _BOOL8 v27; // x0
      const char *v28; // x2
      _BOOL8 v29; // x0
      const char *v30; // x2
      String v32; // [xsp+0h] [xbp-170h] BYREF
      String v33; // [xsp+18h] [xbp-158h] BYREF
      String v34; // [xsp+30h] [xbp-140h] BYREF
      String v35; // [xsp+48h] [xbp-128h] BYREF
      String v36; // [xsp+60h] [xbp-110h] BYREF
      String v37; // [xsp+78h] [xbp-F8h] BYREF
      String v38; // [xsp+90h] [xbp-E0h] BYREF
      String v39; // [xsp+A8h] [xbp-C8h] BYREF
      String v40; // [xsp+C0h] [xbp-B0h] BYREF
      String v41; // [xsp+D8h] [xbp-98h] BYREF
      String v42; // [xsp+F0h] [xbp-80h] BYREF
      String v43; // [xsp+108h] [xbp-68h] BYREF
      String v44; // [xsp+120h] [xbp-50h] BYREF
      String v45; // [xsp+138h] [xbp-38h] BYREF
    
      String::String(&v45, "FileNames");
      LogicSoundData::sm_columnIndexFileNames = CSVTable::getColumnIndexByName(this, &v45);
      String::~String();
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexFileNames) == 0;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v44, "MinVolume");
      LogicSoundData::sm_columnIndexMinVolume = CSVTable::getColumnIndexByName(this, &v44);
      String::~String();
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexMinVolume) == 1;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v43, "MaxVolume");
      LogicSoundData::sm_columnIndexMaxVolume = CSVTable::getColumnIndexByName(this, &v43);
      String::~String();
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexMaxVolume) == 1;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v42, "MinPitch");
      LogicSoundData::sm_columnIndexMinPitch = CSVTable::getColumnIndexByName(this, &v42);
      String::~String();
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexMinPitch) == 1;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v41, "MaxPitch");
      LogicSoundData::sm_columnIndexMaxPitch = CSVTable::getColumnIndexByName(this, &v41);
      String::~String();
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexMaxPitch) == 1;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v40, "Priority");
      LogicSoundData::sm_columnIndexPriority = CSVTable::getColumnIndexByName(this, &v40);
      String::~String();
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexPriority) == 1;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v39, "MaximumByType");
      LogicSoundData::sm_columnIndexMaximumByType = CSVTable::getColumnIndexByName(this, &v39);
      String::~String();
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexMaximumByType) == 1;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v38, "Loop");
      LogicSoundData::sm_columnIndexLoop = CSVTable::getColumnIndexByName(this, &v38);
      String::~String();
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexLoop) == 2;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v37, "PlayVariationsInSequence");
      LogicSoundData::sm_columnIndexPlayVariationsInSequence = CSVTable::getColumnIndexByName(this, &v37);
      String::~String();
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexPlayVariationsInSequence) == 2;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v36, "PlayVariationsInSequenceManualReset");
      LogicSoundData::sm_columnIndexPlayVariationsInSequenceManualReset = CSVTable::getColumnIndexByName(this, &v36);
      String::~String();
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexPlayVariationsInSequenceManualReset) == 2;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v35, "StartDelayMinMs");
      LogicSoundData::sm_columnIndexStartDelayMinMs = CSVTable::getColumnIndexByName(this, &v35);
      String::~String();
      v23 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexStartDelayMinMs) == 1;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v34, "StartDelayMaxMs");
      LogicSoundData::sm_columnIndexStartDelayMaxMs = CSVTable::getColumnIndexByName(this, &v34);
      String::~String();
      v25 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexStartDelayMaxMs) == 1;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v33, "PadEmpyToEndMs");
      LogicSoundData::sm_columnIndexPadEmpyToEndMs = CSVTable::getColumnIndexByName(this, &v33);
      String::~String();
      v27 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexPadEmpyToEndMs) == 1;
      Debugger::doAssert((Debugger *)v27, (bool)"", v28);
      String::String(&v32, "MaxRepeatMs");
      LogicSoundData::sm_columnIndexMaxRepeatMs = CSVTable::getColumnIndexByName(this, &v32);
      String::~String();
      v29 = (unsigned int)CSVTable::getColumnType(this, LogicSoundData::sm_columnIndexMaxRepeatMs) == 1;
      return Debugger::doAssert((Debugger *)v29, (bool)"", v30);
    }

    __int64 __fastcall LogicSoundData::getFileNameCount(__int64 a1)
    {
      return CSVRow::getArraySizeAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexFileNames);
    }

    __int64 __fastcall LogicSoundData::getFileName(__int64 a1, __int64 a2)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexFileNames, a2);
    }

    __int64 __fastcall LogicSoundData::getMinVolume(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexMinVolume, a2);
    }

    __int64 __fastcall LogicSoundData::getMaxVolume(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexMaxVolume, a2);
    }

    __int64 __fastcall LogicSoundData::getMinPitch(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexMinPitch, a2);
    }

    __int64 __fastcall LogicSoundData::getMaxPitch(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexMaxPitch, a2);
    }

    __int64 __fastcall LogicSoundData::getPriority(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexPriority, a2);
    }

    __int64 __fastcall LogicSoundData::getMaximumByType(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexMaximumByType, a2);
    }

    __int64 __fastcall LogicSoundData::getLoop(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexLoop);
    }

    __int64 __fastcall LogicSoundData::getPlayVariationsInSequence(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicSoundData::sm_columnIndexPlayVariationsInSequence);
    }

    __int64 __fastcall LogicSoundData::getPlayVariationsInSequenceManualReset(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicSoundData::sm_columnIndexPlayVariationsInSequenceManualReset);
    }

    __int64 __fastcall LogicSoundData::getStartDelayMinMs(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexStartDelayMinMs, a2);
    }

    __int64 __fastcall LogicSoundData::getStartDelayMaxMs(__int64 a1, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexStartDelayMaxMs, a2);
    }

    __int64 __fastcall LogicSoundData::getPadEmpyToEndMs(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexPadEmpyToEndMs);
    }

    __int64 __fastcall LogicSoundData::getMaxRepeatMs(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicSoundData::sm_columnIndexMaxRepeatMs);
    }

    // attributes: thunk
    void __fastcall LogicSoundData::~LogicSoundData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicSoundData::~LogicSoundData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicSoundData
