class LogicMusicData
{
public:

    void __fastcall LogicMusicData::LogicMusicData(LogicMusicData *this, const #1223 *a2, const #1043 *a3)
    {
      *(_QWORD *)LogicData::LogicData(this, a2, a3) = off_100461F80;
    }

    // attributes: thunk
    __int64 __fastcall LogicMusicData::destruct(#1346 *this)
    {
      return LogicData::destruct(this);
    }

    __int64 __fastcall LogicMusicData::createReferences(#1346 *this)
    {
      __int64 result; // x0
      #1346 *Table; // x0
      const #1224 *v4; // x1
    
      LogicData::createReferences(this);
      result = CSVRow::getRowOffset(*((_QWORD *)this + 1));
      if ( !(_DWORD)result )
      {
        Table = (#1346 *)CSVRow::getTable(*((_QWORD *)this + 1));
        return LogicMusicData::resetStatics(Table, v4);
      }
      return result;
    }

    __n128 __fastcall LogicMusicData::resetStatics(#1346 *this, const #1224 *a2)
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
      String v16; // [xsp+0h] [xbp-A0h] BYREF
      String v17; // [xsp+18h] [xbp-88h] BYREF
      String v18; // [xsp+30h] [xbp-70h] BYREF
      String v19; // [xsp+48h] [xbp-58h] BYREF
      String v20; // [xsp+60h] [xbp-40h] BYREF
      String v21; // [xsp+78h] [xbp-28h] BYREF
    
      String::String(&v21, "FileName");
      LogicMusicData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(this, &v21);
      String::~String(&v21);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicMusicData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v20, "Volume");
      LogicMusicData::sm_columnIndexVolume = CSVTable::getColumnIndexByName(this, &v20);
      String::~String(&v20);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicMusicData::sm_columnIndexVolume) == 1;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v19, "Loop");
      LogicMusicData::sm_columnIndexLoop = CSVTable::getColumnIndexByName(this, &v19);
      String::~String(&v19);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicMusicData::sm_columnIndexLoop) == 2;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v18, "PlayCount");
      LogicMusicData::sm_columnIndexPlayCount = CSVTable::getColumnIndexByName(this, &v18);
      String::~String(&v18);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicMusicData::sm_columnIndexPlayCount) == 1;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v17, "FadeOutTimeSec");
      LogicMusicData::sm_columnIndexFadeOutTimeSec = CSVTable::getColumnIndexByName(this, &v17);
      String::~String(&v17);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicMusicData::sm_columnIndexFadeOutTimeSec) == 1;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v16, "DurationSec");
      LogicMusicData::sm_columnIndexDurationSec = CSVTable::getColumnIndexByName(this, &v16);
      String::~String(&v16);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicMusicData::sm_columnIndexDurationSec) == 1;
      return Debugger::doAssert((Debugger *)v13, (bool)"", v14);
    }

    __int64 __fastcall LogicMusicData::getFileName(#1346 *this, __int64 a2)
    {
      #1346 *ValueAt; // x0
      const String *v3; // x1
    
      ValueAt = (#1346 *)CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicMusicData::sm_columnIndexFileName, a2);
      return LogicMusicData::getIOSFileName(ValueAt, v3);
    }

    void __fastcall LogicMusicData::getIOSFileName(#1346 *this, const String *a2)
    {
      String v2; // [xsp+0h] [xbp-70h] BYREF
      String v3; // [xsp+18h] [xbp-58h] BYREF
      String v4; // [xsp+30h] [xbp-40h] BYREF
      String v5; // [xsp+48h] [xbp-28h] BYREF
    
      String::substring(&v4, this, 0, (unsigned int)(*(_DWORD *)this - 3));
      String::String(&v3, "music/");
      String::String(&v2, "music/ios/");
      String::replace(&v5, &v4, &v3, &v2);
      String::~String(&v2);
      String::~String(&v3);
      String::~String(&v4);
      operator+(&v5, "m4a");
      String::~String(&v5);
    }

    __int64 __fastcall LogicMusicData::getVolume(#1346 *this, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicMusicData::sm_columnIndexVolume, a2);
    }

    __int64 __fastcall LogicMusicData::getLoop(#1346 *this, __int64 a2)
    {
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), (unsigned int)LogicMusicData::sm_columnIndexLoop, a2);
    }

    __int64 __fastcall LogicMusicData::getPlayCount(#1346 *this, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicMusicData::sm_columnIndexPlayCount, a2);
    }

    __int64 __fastcall LogicMusicData::getFadeOutTimeSeconds(#1346 *this, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicMusicData::sm_columnIndexFadeOutTimeSec,
               a2);
    }

    __int64 __fastcall LogicMusicData::getDurationSeconds(#1346 *this, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicMusicData::sm_columnIndexDurationSec, a2);
    }

    __int64 __fastcall LogicMusicData::getVariationCount(#1346 *this)
    {
      return CSVRow::getArraySizeAt(*((_QWORD *)this + 1), (unsigned int)LogicMusicData::sm_columnIndexFileName);
    }

    // attributes: thunk
    void __fastcall LogicMusicData::~LogicMusicData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicMusicData::~LogicMusicData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicMusicData
