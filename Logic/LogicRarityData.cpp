class LogicRarityData
{
public:

    void __fastcall LogicRarityData::LogicRarityData(LogicRarityData *this, const #1223 *a2, const ResetAccountMessage *a3)
    {
      LogicData::LogicData((__int64)this, (__int64)a2, a3);
      *(_QWORD *)this = off_100466CE8;
      String::String((String *)((char *)this + 152));
      *((_DWORD *)this + 50) = 0;
      String::operator=((char *)this + 152, "");
      *((_QWORD *)this + 17) = 0;
      *((_BYTE *)this + 144) = 0;
      *(_QWORD *)((char *)this + 124) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 22) = 0;
    }

    // attributes: thunk
    void __fastcall LogicRarityData::LogicRarityData(LogicRarityData *this, const #1223 *a2, const ResetAccountMessage *a3)
    {
      __ZN15LogicRarityDataC2EPK6CSVRowPK14LogicDataTable(this, a2, a3);
    }

    __int64 __fastcall LogicRarityData::destruct(LogicGameObjectManagerListener *this)
    {
      __int64 result; // x0
    
      LogicData::destruct((__int64)this);
      *((_DWORD *)this + 50) = 0;
      result = String::operator=((char *)this + 152, "");
      *((_QWORD *)this + 17) = 0;
      *((_BYTE *)this + 144) = 0;
      *(_QWORD *)((char *)this + 124) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 22) = 0;
      return result;
    }

    void __fastcall LogicRarityData::createReferences(__int64 a1)
    {
      LogicGameObjectManagerListener *Table; // x0
      const #1224 *v3; // x1
      LogicKickAllianceMemberCommand *ValueAt; // x0
      const AreaEffectObject *v5; // x2
      LogicKickAllianceMemberCommand *v6; // x0
      const AreaEffectObject *v7; // x2
      LogicKickAllianceMemberCommand *v8; // x0
      const AreaEffectObject *v9; // x2
      __int64 v10; // x20
      __int64 v11; // x20
      __int64 v12; // x20
      LogicKickAllianceMemberCommand *Value; // x0
      const AreaEffectObject *v14; // x2
      __int64 v15; // x20
      __int64 v16; // x20
      __int64 v17; // x20
      __int64 v18; // x20
      __int64 v19; // x20
      __int64 v20; // x20
      __int64 v21; // x20
      __int64 v22; // x20
      __int64 v23; // x20
      String v24; // [xsp+0h] [xbp-140h] BYREF
      String v25; // [xsp+18h] [xbp-128h] BYREF
      String v26; // [xsp+30h] [xbp-110h] BYREF
      String v27; // [xsp+48h] [xbp-F8h] BYREF
      String v28; // [xsp+60h] [xbp-E0h] BYREF
      String v29; // [xsp+78h] [xbp-C8h] BYREF
      String v30; // [xsp+90h] [xbp-B0h] BYREF
      String v31; // [xsp+A8h] [xbp-98h] BYREF
      String v32; // [xsp+C0h] [xbp-80h] BYREF
      String v33; // [xsp+D8h] [xbp-68h] BYREF
      String v34; // [xsp+F0h] [xbp-50h] BYREF
      String v35; // [xsp+108h] [xbp-38h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (LogicGameObjectManagerListener *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicRarityData::resetStatics(Table, v3);
      }
      ValueAt = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                    *(_QWORD *)(a1 + 8),
                                                    (unsigned int)LogicRarityData::sm_columnIndexCastEffect);
      *(_QWORD *)(a1 + 176) = LogicDataTables::getEffectByName(ValueAt, (const String *)a1, v5);
      v6 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                               *(_QWORD *)(a1 + 8),
                                               (unsigned int)LogicRarityData::sm_columnIndexAppearEffect);
      *(_QWORD *)(a1 + 184) = LogicDataTables::getEffectByName(v6, (const String *)a1, v7);
      v8 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                               *(_QWORD *)(a1 + 8),
                                               (unsigned int)LogicRarityData::sm_columnIndexLoopEffect);
      *(_QWORD *)(a1 + 192) = LogicDataTables::getEffectByName(v8, (const String *)a1, v9);
      v10 = *(_QWORD *)(a1 + 8);
      String::String(&v35, "RelativeLevel");
      *(_DWORD *)(a1 + 200) = CSVRow::getIntegerValue(v10, &v35, 0);
      String::~String(&v35);
      v11 = *(_QWORD *)(a1 + 8);
      String::String(&v34, "GoldConversionValue");
      *(_DWORD *)(a1 + 128) = CSVRow::getIntegerValue(v11, &v34, 0);
      String::~String(&v34);
      v12 = *(_QWORD *)(a1 + 8);
      String::String(&v33, "BuySound");
      Value = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v12, &v33, 0);
      *(_QWORD *)(a1 + 136) = LogicDataTables::getSoundByName(Value, (const String *)a1, v14);
      String::~String(&v33);
      v15 = *(_QWORD *)(a1 + 8);
      String::String(&v32, "BalanceMultiplier");
      *(_DWORD *)(a1 + 100) = CSVRow::getIntegerValue(v15, &v32, 0);
      String::~String(&v32);
      v16 = *(_QWORD *)(a1 + 8);
      String::String(&v31, "LevelCount");
      *(_DWORD *)(a1 + 104) = CSVRow::getIntegerValue(v16, &v31, 0);
      String::~String(&v31);
      v17 = *(_QWORD *)(a1 + 8);
      String::String(&v30, "ChanceWeight");
      *(_DWORD *)(a1 + 108) = CSVRow::getIntegerValue(v17, &v30, 0);
      String::~String(&v30);
      v18 = *(_QWORD *)(a1 + 8);
      String::String(&v29, "Red");
      *(_DWORD *)(a1 + 112) = CSVRow::getIntegerValue(v18, &v29, 0);
      String::~String(&v29);
      v19 = *(_QWORD *)(a1 + 8);
      String::String(&v28, "Green");
      *(_DWORD *)(a1 + 116) = CSVRow::getIntegerValue(v19, &v28, 0);
      String::~String(&v28);
      v20 = *(_QWORD *)(a1 + 8);
      String::String(&v27, "Blue");
      *(_DWORD *)(a1 + 120) = CSVRow::getIntegerValue(v20, &v27, 0);
      String::~String(&v27);
      v21 = *(_QWORD *)(a1 + 8);
      String::String(&v26, "ShowAsQuestionMark");
      *(_BYTE *)(a1 + 144) = CSVRow::getBooleanValue(v21, &v26, 0);
      String::~String(&v26);
      v22 = *(_QWORD *)(a1 + 8);
      String::String(&v25, "CardGlowInstanceName");
      CSVRow::getValue(v22, &v25, 0);
      String::operator=((String *)(a1 + 152));
      String::~String(&v25);
      v23 = *(_QWORD *)(a1 + 8);
      String::String(&v24, "CardTxtBgFrameIdx");
      *(_DWORD *)(a1 + 124) = CSVRow::getIntegerValue(v23, &v24, 0);
      String::~String(&v24);
    }

    __n128 __fastcall LogicRarityData::resetStatics(LogicGameObjectManagerListener *this, const #1224 *a2)
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
      _BOOL8 v31; // x0
      const char *v32; // x2
      _BOOL8 v33; // x0
      const char *v34; // x2
      _BOOL8 v35; // x0
      const char *v36; // x2
      _BOOL8 v37; // x0
      const char *v38; // x2
      String v40; // [xsp+0h] [xbp-1D0h] BYREF
      String v41; // [xsp+18h] [xbp-1B8h] BYREF
      String v42; // [xsp+30h] [xbp-1A0h] BYREF
      String v43; // [xsp+48h] [xbp-188h] BYREF
      String v44; // [xsp+60h] [xbp-170h] BYREF
      String v45; // [xsp+78h] [xbp-158h] BYREF
      String v46; // [xsp+90h] [xbp-140h] BYREF
      String v47; // [xsp+A8h] [xbp-128h] BYREF
      String v48; // [xsp+C0h] [xbp-110h] BYREF
      String v49; // [xsp+D8h] [xbp-F8h] BYREF
      String v50; // [xsp+F0h] [xbp-E0h] BYREF
      String v51; // [xsp+108h] [xbp-C8h] BYREF
      String v52; // [xsp+120h] [xbp-B0h] BYREF
      String v53; // [xsp+138h] [xbp-98h] BYREF
      String v54; // [xsp+150h] [xbp-80h] BYREF
      String v55; // [xsp+168h] [xbp-68h] BYREF
      String v56; // [xsp+180h] [xbp-50h] BYREF
      String v57; // [xsp+198h] [xbp-38h] BYREF
    
      String::String(&v57, "IconExportNamePrefix");
      LogicRarityData::sm_columnIndexIconExportNamePrefix = CSVTable::getColumnIndexByName(this, &v57);
      String::~String(&v57);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexIconExportNamePrefix) == 0;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v56, "UpgradeExp");
      LogicRarityData::sm_columnIndexUpgradeExp = CSVTable::getColumnIndexByName(this, &v56);
      String::~String(&v56);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexUpgradeExp) == 1;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v55, "CardBaseExportName");
      LogicRarityData::sm_columnIndexCardBaseExportName = CSVTable::getColumnIndexByName(this, &v55);
      String::~String(&v55);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexCardBaseExportName) == 0;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v54, "BigFrameExportName");
      LogicRarityData::sm_columnIndexBigFrameExportName = CSVTable::getColumnIndexByName(this, &v54);
      String::~String(&v54);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexBigFrameExportName) == 0;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v53, "CardBaseFileName");
      LogicRarityData::sm_columnIndexCardBaseFileName = CSVTable::getColumnIndexByName(this, &v53);
      String::~String(&v53);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexCardBaseFileName) == 0;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v52, "CastEffect");
      LogicRarityData::sm_columnIndexCastEffect = CSVTable::getColumnIndexByName(this, &v52);
      String::~String(&v52);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexCastEffect) == 0;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v51, "CardRarityBGExportName");
      LogicRarityData::sm_columnIndexCardRarityBGExportName = CSVTable::getColumnIndexByName(this, &v51);
      String::~String(&v51);
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexCardRarityBGExportName) == 0;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v50, "InfoTitleExportName");
      LogicRarityData::sm_columnIndexInfoTitleExportName = CSVTable::getColumnIndexByName(this, &v50);
      String::~String(&v50);
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexInfoTitleExportName) == 0;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v49, "UpgradeCost");
      LogicRarityData::sm_columnIndexUpgradeCost = CSVTable::getColumnIndexByName(this, &v49);
      String::~String(&v49);
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexUpgradeCost) == 1;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v48, "UpgradeMaterialCount");
      LogicRarityData::sm_columnIndexUpgradeMaterialCount = CSVTable::getColumnIndexByName(this, &v48);
      String::~String(&v48);
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexUpgradeMaterialCount) == 1;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v47, "DonateCapacity");
      LogicRarityData::sm_columnIndexDonateCapacity = CSVTable::getColumnIndexByName(this, &v47);
      String::~String(&v47);
      v23 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexDonateCapacity) == 1;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v46, "DonateReward");
      LogicRarityData::sm_columnIndexDonateReward = CSVTable::getColumnIndexByName(this, &v46);
      String::~String(&v46);
      v25 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexDonateReward) == 1;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v45, "DonateXP");
      LogicRarityData::sm_columnIndexDonateXP = CSVTable::getColumnIndexByName(this, &v45);
      String::~String(&v45);
      v27 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexDonateXP) == 1;
      Debugger::doAssert((Debugger *)v27, (bool)"", v28);
      String::String(&v44, "StackedCardExportName");
      LogicRarityData::sm_columnIndexStackedCardExportName = CSVTable::getColumnIndexByName(this, &v44);
      String::~String(&v44);
      v29 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexStackedCardExportName) == 0;
      Debugger::doAssert((Debugger *)v29, (bool)"", v30);
      String::String(&v43, "CardRewardExportName");
      LogicRarityData::sm_columnIndexCardMaterialExportName = CSVTable::getColumnIndexByName(this, &v43);
      String::~String(&v43);
      v31 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexCardMaterialExportName) == 0;
      Debugger::doAssert((Debugger *)v31, (bool)"", v32);
      String::String(&v42, "SortOrder");
      LogicRarityData::sm_columnIndexSortOrder = CSVTable::getColumnIndexByName(this, &v42);
      String::~String(&v42);
      v33 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexSortOrder) == 1;
      Debugger::doAssert((Debugger *)v33, (bool)"", v34);
      String::String(&v41, "AppearEffect");
      LogicRarityData::sm_columnIndexAppearEffect = CSVTable::getColumnIndexByName(this, &v41);
      String::~String(&v41);
      v35 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexAppearEffect) == 0;
      Debugger::doAssert((Debugger *)v35, (bool)"", v36);
      String::String(&v40, "LoopEffect");
      LogicRarityData::sm_columnIndexLoopEffect = CSVTable::getColumnIndexByName(this, &v40);
      String::~String(&v40);
      v37 = (unsigned int)CSVTable::getColumnType(this, LogicRarityData::sm_columnIndexLoopEffect) == 0;
      return Debugger::doAssert((Debugger *)v37, (bool)"", v38);
    }

    __int64 __fastcall LogicRarityData::getChanceWeight(LogicGameObjectManagerListener *this)
    {
      return *((unsigned int *)this + 27);
    }

    __int64 __fastcall LogicRarityData::getUpgradeExp(__int64 a1, const char *a2)
    {
      return LogicData::getIntegerValueAt(a1, (unsigned int)LogicRarityData::sm_columnIndexUpgradeExp, a2);
    }

    __int64 __fastcall LogicRarityData::getUpgradeCost(__int64 a1, const char *a2)
    {
      return LogicData::getIntegerValueAt(a1, (unsigned int)LogicRarityData::sm_columnIndexUpgradeCost, a2);
    }

    __int64 __fastcall LogicRarityData::getUpgradeMaterialCount(__int64 a1, const char *a2)
    {
      return LogicData::getIntegerValueAt(a1, (unsigned int)LogicRarityData::sm_columnIndexUpgradeMaterialCount, a2);
    }

    __int64 __fastcall LogicRarityData::getBuySound(LogicGameObjectManagerListener *this)
    {
      return *((_QWORD *)this + 17);
    }

    __int64 __fastcall LogicRarityData::getCastEffect(LogicGameObjectManagerListener *this)
    {
      return *((_QWORD *)this + 22);
    }

    __int64 __fastcall LogicRarityData::getCardGlowExportName(LogicGameObjectManagerListener *this)
    {
      return (__int64)this + 152;
    }

    __int64 __fastcall LogicRarityData::getAppearEffect(LogicGameObjectManagerListener *this)
    {
      return *((_QWORD *)this + 23);
    }

    __int64 __fastcall LogicRarityData::getLoopEffect(LogicGameObjectManagerListener *this)
    {
      return *((_QWORD *)this + 24);
    }

    __int64 __fastcall LogicRarityData::getMaxLevelIndex(LogicGameObjectManagerListener *this)
    {
      return (unsigned int)(*((_DWORD *)this + 26) - 1);
    }

    __int64 __fastcall LogicRarityData::getSortOrder(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicRarityData::sm_columnIndexSortOrder);
    }

    __int64 __fastcall LogicRarityData::getDonateCapacity(AreaEffectObject *a1, __int64 a2, const char *a3)
    {
      return LogicData::getIntegerValueAt(a1, (unsigned int)LogicRarityData::sm_columnIndexDonateCapacity, a3);
    }

    __int64 __fastcall LogicRarityData::getDonateReward(LogicGameObjectManagerListener *this, __int64 a2, const char *a3)
    {
      return LogicData::getIntegerValueAt(this, (unsigned int)LogicRarityData::sm_columnIndexDonateReward, a3);
    }

    __int64 __fastcall LogicRarityData::getDonateXP(LogicGameObjectManagerListener *this, __int64 a2, const char *a3)
    {
      return LogicData::getIntegerValueAt(this, (unsigned int)LogicRarityData::sm_columnIndexDonateXP, a3);
    }

    __int64 __fastcall LogicRarityData::getCardTxtBgFrameIdx(LogicGameObjectManagerListener *this)
    {
      return *((unsigned int *)this + 31);
    }

    __int64 __fastcall LogicRarityData::getGoldConversionValue(LogicGameObjectManagerListener *this)
    {
      return *((unsigned int *)this + 32);
    }

    // attributes: thunk
    void __fastcall LogicRarityData::~LogicRarityData(LogicGameObjectManagerListener *this)
    {
      __ZN15LogicRarityDataD2Ev(this);
    }

    void __fastcall LogicRarityData::~LogicRarityData(LogicGameObjectManagerListener *this)
    {
      LogicRarityData::~LogicRarityData(this);
      operator delete(this);
    }

    void __fastcall LogicRarityData::~LogicRarityData(LogicGameObjectManagerListener *this)
    {
      *(_QWORD *)this = off_100466CE8;
      String::~String((String *)((char *)this + 152));
      LogicData::~LogicData((String *)this);
    }

}; // end class LogicRarityData
