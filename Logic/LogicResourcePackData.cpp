class LogicResourcePackData
{
public:

    __int64 __fastcall LogicResourcePackData::LogicResourcePackData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      __int64 result; // x0
    
      result = LogicData::LogicData(a1, a2, a3);
      *(_QWORD *)result = off_10046F330;
      *(_QWORD *)(result + 104) = 0;
      *(_DWORD *)(result + 112) = 0;
      return result;
    }

    __int64 __fastcall LogicResourcePackData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicData::destruct(a1);
      *(_QWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 112) = 0;
      return result;
    }

    __n128 __fastcall LogicResourcePackData::createReferences(__int64 a1)
    {
      __int64 v2; // x20
      __int64 Value; // x0
      __int64 v4; // x20
      #1224 *Table; // x20
      #1224 *v6; // x0
      _BOOL8 v7; // x0
      const char *v8; // x2
      String v10; // [xsp+8h] [xbp-58h] BYREF
      String v11; // [xsp+20h] [xbp-40h] BYREF
      String v12; // [xsp+38h] [xbp-28h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      v2 = *(_QWORD *)(a1 + 8);
      String::String(&v12, "Resource");
      Value = CSVRow::getValue(v2, &v12, 0);
      *(_QWORD *)(a1 + 104) = LogicDataTables::getResourceByName(Value, a1);
      String::~String();
      v4 = *(_QWORD *)(a1 + 8);
      String::String(&v11, "Amount");
      *(_DWORD *)(a1 + 112) = CSVRow::getIntegerValue(v4, &v11, 0);
      String::~String();
      Table = (#1224 *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
      String::String(&v10, "IconFile");
      LogicResourcePackData::sm_columnIndexIconFileName = CSVTable::getColumnIndexByName(Table, &v10);
      String::~String();
      v6 = (#1224 *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
      v7 = (unsigned int)CSVTable::getColumnType(v6, LogicResourcePackData::sm_columnIndexIconFileName) == 0;
      return Debugger::doAssert((Debugger *)v7, (bool)"", v8);
    }

    __int64 __fastcall LogicResourcePackData::getIconFileName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicResourcePackData::sm_columnIndexIconFileName);
    }

    __int64 __fastcall LogicResourcePackData::fitsIntoResourceCap(__int64 a1, tween::Bounce *a2)
    {
      LogicKickAllianceMemberCommand *ResourceCap; // x0
      __int64 v5; // x21
      const char *v6; // x1
      int v7; // w20
    
      ResourceCap = (LogicKickAllianceMemberCommand *)LogicResourceData::getResourceCap(*(_QWORD *)(a1 + 104));
      if ( (int)ResourceCap >= 1 )
      {
        v5 = *(_QWORD *)(a1 + 104);
        if ( v5 == LogicDataTables::getGoldData(ResourceCap) )
        {
          v7 = *(_DWORD *)(a1 + 112) + LogicClientAvatar::getGold(a2);
          if ( v7 > (int)LogicResourceData::getResourceCap(*(_QWORD *)(a1 + 104)) )
            return 0;
        }
        else
        {
          Debugger::warning(
            (__siginfo *)"LogicResourcePackData::fitsIntoResourceCap - ResourceCap not implemented for resource type",
            v6);
        }
      }
      return 1;
    }

    __int64 __fastcall LogicResourcePackData::canBePurchased(__int64 a1, tween::Bounce *a2)
    {
      if ( *(int *)(a1 + 112) < 1 )
        return 0;
      else
        return LogicResourcePackData::fitsIntoResourceCap(a1, a2);
    }

    // attributes: thunk
    void __fastcall LogicResourcePackData::~LogicResourcePackData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicResourcePackData::~LogicResourcePackData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicResourcePackData
