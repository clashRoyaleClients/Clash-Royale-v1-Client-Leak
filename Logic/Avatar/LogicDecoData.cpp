class LogicDecoData
{
public:

    void __fastcall LogicDecoData::LogicDecoData(LogicDecoData *this, const #1223 *a2, const ResetAccountMessage *a3)
    {
      __int64 v3; // x0
    
      v3 = LogicData::LogicData(this, a2, a3);
      *(_QWORD *)v3 = off_100465BC8;
      *(_QWORD *)(v3 + 100) = -1;
      *(_DWORD *)(v3 + 132) = 0;
      *(_QWORD *)(v3 + 124) = 0;
      *(_QWORD *)(v3 + 116) = 0;
      *(_QWORD *)(v3 + 108) = 0;
    }

    __int64 __fastcall LogicDecoData::destruct(LogicDamageTypeData *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(this);
      *((_DWORD *)this + 33) = 0;
      *(_QWORD *)((char *)this + 100) = -1;
      *(_QWORD *)((char *)this + 124) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      return result;
    }

    __int64 __fastcall LogicDecoData::createReferences(LogicDamageTypeData *this)
    {
      LogicDamageTypeData *Table; // x0
      const #1224 *v3; // x1
      AskForTVContentMessage *ValueAt; // x0
      const AreaEffectObject *v5; // x2
      AskForTVContentMessage *v6; // x0
      const AreaEffectObject *v7; // x2
      LogicKickAllianceMemberCommand *v8; // x0
      const AreaEffectObject *v9; // x2
      __int64 result; // x0
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
      {
        Table = (LogicDamageTypeData *)CSVRow::getTable(*((_QWORD *)this + 1));
        LogicDecoData::resetStatics(Table, v3);
      }
      ValueAt = (AskForTVContentMessage *)CSVRow::getValueAt(
                                            *((_QWORD *)this + 1),
                                            (unsigned int)LogicDecoData::sm_columnIndexLayer);
      *((_DWORD *)this + 25) = LogicEffectData::parseLayer(ValueAt, (String *)this, v5);
      v6 = (AskForTVContentMessage *)CSVRow::getValueAt(
                                       *((_QWORD *)this + 1),
                                       (unsigned int)LogicDecoData::sm_columnIndexLayerLowend);
      *((_DWORD *)this + 26) = LogicEffectData::parseLayer(v6, (String *)this, v7);
      v8 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                               *((_QWORD *)this + 1),
                                               (unsigned int)LogicDecoData::sm_columnIndexEffect);
      *((_QWORD *)this + 16) = LogicDataTables::getEffectByName(v8, (const String *)this, v9);
      *((_DWORD *)this + 31) = LogicData::getIntegerValueAt(this, LogicDecoData::sm_columnIndexCollisionRadius);
      *((_DWORD *)this + 30) = LogicData::getIntegerValueAt(this, LogicDecoData::sm_columnIndexShadowSkew);
      *((_DWORD *)this + 29) = LogicData::getIntegerValueAt(this, LogicDecoData::sm_columnIndexShadowY);
      *((_DWORD *)this + 28) = LogicData::getIntegerValueAt(this, LogicDecoData::sm_columnIndexShadowX);
      result = LogicData::getIntegerValueAt(this, LogicDecoData::sm_columnIndexShadowScale);
      *((_DWORD *)this + 27) = result;
      return result;
    }

    __n128 __fastcall LogicDecoData::resetStatics(LogicDamageTypeData *this, const #1224 *a2)
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
      String v24; // [xsp+0h] [xbp-110h] BYREF
      String v25; // [xsp+18h] [xbp-F8h] BYREF
      String v26; // [xsp+30h] [xbp-E0h] BYREF
      String v27; // [xsp+48h] [xbp-C8h] BYREF
      String v28; // [xsp+60h] [xbp-B0h] BYREF
      String v29; // [xsp+78h] [xbp-98h] BYREF
      String v30; // [xsp+90h] [xbp-80h] BYREF
      String v31; // [xsp+A8h] [xbp-68h] BYREF
      String v32; // [xsp+C0h] [xbp-50h] BYREF
      String v33; // [xsp+D8h] [xbp-38h] BYREF
    
      String::String(&v33, "FileName");
      LogicDecoData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(this, &v33);
      String::~String(&v33);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v32, "ExportName");
      LogicDecoData::sm_columnIndexExportName = CSVTable::getColumnIndexByName(this, &v32);
      String::~String(&v32);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexExportName) == 0;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v31, "Layer");
      LogicDecoData::sm_columnIndexLayer = CSVTable::getColumnIndexByName(this, &v31);
      String::~String(&v31);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexLayer) == 0;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v30, "LowendLayer");
      LogicDecoData::sm_columnIndexLayerLowend = CSVTable::getColumnIndexByName(this, &v30);
      String::~String(&v30);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexLayerLowend) == 0;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v29, "ShadowScale");
      LogicDecoData::sm_columnIndexShadowScale = CSVTable::getColumnIndexByName(this, &v29);
      String::~String(&v29);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexShadowScale) == 1;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v28, "ShadowX");
      LogicDecoData::sm_columnIndexShadowX = CSVTable::getColumnIndexByName(this, &v28);
      String::~String(&v28);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexShadowX) == 1;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v27, "ShadowY");
      LogicDecoData::sm_columnIndexShadowY = CSVTable::getColumnIndexByName(this, &v27);
      String::~String(&v27);
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexShadowY) == 1;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v26, "ShadowSkew");
      LogicDecoData::sm_columnIndexShadowSkew = CSVTable::getColumnIndexByName(this, &v26);
      String::~String(&v26);
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexShadowSkew) == 1;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v25, "CollisionRadius");
      LogicDecoData::sm_columnIndexCollisionRadius = CSVTable::getColumnIndexByName(this, &v25);
      String::~String(&v25);
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexCollisionRadius) == 1;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v24, "Effect");
      LogicDecoData::sm_columnIndexEffect = CSVTable::getColumnIndexByName(this, &v24);
      String::~String(&v24);
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicDecoData::sm_columnIndexEffect) == 0;
      return Debugger::doAssert((Debugger *)v21, (bool)"", v22);
    }

    __int64 __fastcall LogicDecoData::getFileName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicDecoData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicDecoData::getExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicDecoData::sm_columnIndexExportName);
    }

    __int64 __fastcall LogicDecoData::getLayer(__int64 a1)
    {
      return *(unsigned int *)(a1 + 100);
    }

    __int64 __fastcall LogicDecoData::getLayerLowend(__int64 a1)
    {
      return *(unsigned int *)(a1 + 104);
    }

    __int64 __fastcall LogicDecoData::getShadowScale(__int64 a1)
    {
      return *(unsigned int *)(a1 + 108);
    }

    __int64 __fastcall LogicDecoData::getShadowX(__int64 a1)
    {
      return *(unsigned int *)(a1 + 112);
    }

    __int64 __fastcall LogicDecoData::getShadowY(__int64 a1)
    {
      return *(unsigned int *)(a1 + 116);
    }

    __int64 __fastcall LogicDecoData::getShadowSkew(__int64 a1)
    {
      return *(unsigned int *)(a1 + 120);
    }

    __int64 __fastcall LogicDecoData::getCollisionRadius(__int64 a1)
    {
      return *(unsigned int *)(a1 + 124);
    }

    __int64 __fastcall LogicDecoData::getEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 128);
    }

    // attributes: thunk
    void __fastcall LogicDecoData::~LogicDecoData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicDecoData::~LogicDecoData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicDecoData
