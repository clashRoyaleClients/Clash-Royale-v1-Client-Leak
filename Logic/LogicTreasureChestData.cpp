class LogicTreasureChestData
{
public:

    void __fastcall LogicTreasureChestData::LogicTreasureChestData(
            LogicTreasureChestData *this,
            const #1223 *a2,
            const ResetAccountMessage *a3)
    {
      _QWORD *v3; // x0
    
      v3 = (_QWORD *)LogicData::LogicData((__int64)this, (__int64)a2, a3);
      v3[24] = 0;
      v3[25] = 0;
      v3[22] = 0;
      v3[23] = 0;
      v3[20] = 0;
      v3[21] = 0;
      v3[19] = 0;
      *v3 = off_100467C50;
      v3[18] = 0;
      *(_QWORD *)((char *)v3 + 132) = 0;
      *(_QWORD *)((char *)v3 + 124) = 0;
      *(_QWORD *)((char *)v3 + 116) = 0;
      *(_QWORD *)((char *)v3 + 108) = 0;
      *(_QWORD *)((char *)v3 + 100) = 0;
    }

    __int64 __fastcall LogicTreasureChestData::destruct(LogicRefreshAchievementsCommand *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct((__int64)this);
      *(_QWORD *)((char *)this + 100) = 0;
      *((_DWORD *)this + 27) = 0;
      *(_QWORD *)((char *)this + 132) = 0;
      *(_QWORD *)((char *)this + 124) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      return result;
    }

    __n128 __fastcall LogicTreasureChestData::resetStatics(LogicRefreshAchievementsCommand *this, const #1224 *a2)
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
      _BOOL8 v39; // x0
      const char *v40; // x2
      _BOOL8 v41; // x0
      const char *v42; // x2
      _BOOL8 v43; // x0
      const char *v44; // x2
      _BOOL8 v45; // x0
      const char *v46; // x2
      _BOOL8 v47; // x0
      const char *v48; // x2
      _BOOL8 v49; // x0
      const char *v50; // x2
      _BOOL8 v51; // x0
      const char *v52; // x2
      _BOOL8 v53; // x0
      const char *v54; // x2
      _BOOL8 v55; // x0
      const char *v56; // x2
      _BOOL8 v57; // x0
      const char *v58; // x2
      _BOOL8 v59; // x0
      const char *v60; // x2
      _BOOL8 v61; // x0
      const char *v62; // x2
      _BOOL8 v63; // x0
      const char *v64; // x2
      String v66; // [xsp+8h] [xbp-308h] BYREF
      String v67; // [xsp+20h] [xbp-2F0h] BYREF
      String v68; // [xsp+38h] [xbp-2D8h] BYREF
      String v69; // [xsp+50h] [xbp-2C0h] BYREF
      String v70; // [xsp+68h] [xbp-2A8h] BYREF
      String v71; // [xsp+80h] [xbp-290h] BYREF
      String v72; // [xsp+98h] [xbp-278h] BYREF
      String v73; // [xsp+B0h] [xbp-260h] BYREF
      String v74; // [xsp+C8h] [xbp-248h] BYREF
      String v75; // [xsp+E0h] [xbp-230h] BYREF
      String v76; // [xsp+F8h] [xbp-218h] BYREF
      String v77; // [xsp+110h] [xbp-200h] BYREF
      String v78; // [xsp+128h] [xbp-1E8h] BYREF
      String v79; // [xsp+140h] [xbp-1D0h] BYREF
      String v80; // [xsp+158h] [xbp-1B8h] BYREF
      String v81; // [xsp+170h] [xbp-1A0h] BYREF
      String v82; // [xsp+188h] [xbp-188h] BYREF
      String v83; // [xsp+1A0h] [xbp-170h] BYREF
      String v84; // [xsp+1B8h] [xbp-158h] BYREF
      String v85; // [xsp+1D0h] [xbp-140h] BYREF
      String v86; // [xsp+1E8h] [xbp-128h] BYREF
      String v87; // [xsp+200h] [xbp-110h] BYREF
      String v88; // [xsp+218h] [xbp-F8h] BYREF
      String v89; // [xsp+230h] [xbp-E0h] BYREF
      String v90; // [xsp+248h] [xbp-C8h] BYREF
      String v91; // [xsp+260h] [xbp-B0h] BYREF
      String v92; // [xsp+278h] [xbp-98h] BYREF
      String v93; // [xsp+290h] [xbp-80h] BYREF
      String v94; // [xsp+2A8h] [xbp-68h] BYREF
      String v95; // [xsp+2C0h] [xbp-50h] BYREF
      String v96; // [xsp+2D8h] [xbp-38h] BYREF
    
      String::String(&v96, "TimeTakenDays");
      LogicTreasureChestData::sm_columnIndexTimeTakenDays = CSVTable::getColumnIndexByName(this, &v96);
      String::~String();
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexTimeTakenDays) == 1;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v95, "TimeTakenHours");
      LogicTreasureChestData::sm_columnIndexTimeTakenHours = CSVTable::getColumnIndexByName(this, &v95);
      String::~String();
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexTimeTakenHours) == 1;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v94, "TimeTakenMinutes");
      LogicTreasureChestData::sm_columnIndexTimeTakenMinutes = CSVTable::getColumnIndexByName(this, &v94);
      String::~String();
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexTimeTakenMinutes) == 1;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v93, "TimeTakenSeconds");
      LogicTreasureChestData::sm_columnIndexTimeTakenSeconds = CSVTable::getColumnIndexByName(this, &v93);
      String::~String();
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexTimeTakenSeconds) == 1;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v92, "FileName");
      LogicTreasureChestData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(this, &v92);
      String::~String();
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v91, "ShopExportName");
      LogicTreasureChestData::sm_columnIndexShopExportName = CSVTable::getColumnIndexByName(this, &v91);
      String::~String();
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexShopExportName) == 0;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v90, "ExportName");
      LogicTreasureChestData::sm_columnIndexExportName = CSVTable::getColumnIndexByName(this, &v90);
      String::~String();
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexExportName) == 0;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v89, "GainedExportName");
      LogicTreasureChestData::sm_columnIndexGainedExportName = CSVTable::getColumnIndexByName(this, &v89);
      String::~String();
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexGainedExportName) == 0;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v88, "DescriptionTID");
      LogicTreasureChestData::sm_columnIndexDescriptionTID = CSVTable::getColumnIndexByName(this, &v88);
      String::~String();
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexDescriptionTID) == 0;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v87, "NotificationTID");
      LogicTreasureChestData::sm_columnIndexNotificationTID = CSVTable::getColumnIndexByName(this, &v87);
      String::~String();
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexNotificationTID) == 0;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v86, "TutorialChest");
      LogicTreasureChestData::sm_columnIndexTutorialChest = CSVTable::getColumnIndexByName(this, &v86);
      String::~String();
      v23 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexTutorialChest) == 2;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v85, "AddFirstSpellToCollection");
      LogicTreasureChestData::sm_columnIndexAddFirstSpellToCollection = CSVTable::getColumnIndexByName(this, &v85);
      String::~String();
      v25 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexAddFirstSpellToCollection) == 2;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v84, "ShopPriceWithoutSpeedUp");
      LogicTreasureChestData::sm_columnIndexShopPriceWithoutSpeedUp = CSVTable::getColumnIndexByName(this, &v84);
      String::~String();
      v27 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexShopPriceWithoutSpeedUp) == 1;
      Debugger::doAssert((Debugger *)v27, (bool)"", v28);
      String::String(&v83, "SpeedUpCost");
      LogicTreasureChestData::sm_columnIndexSpeedUpCost = CSVTable::getColumnIndexByName(this, &v83);
      String::~String();
      v29 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexSpeedUpCost) == 1;
      Debugger::doAssert((Debugger *)v29, (bool)"", v30);
      String::String(&v82, "OpenInstanceName");
      LogicTreasureChestData::sm_columnIndexOpenInstanceName = CSVTable::getColumnIndexByName(this, &v82);
      String::~String();
      v31 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexOpenInstanceName) == 0;
      Debugger::doAssert((Debugger *)v31, (bool)"", v32);
      String::String(&v81, "SpellSet");
      LogicTreasureChestData::sm_columnIndexSpellSet = CSVTable::getColumnIndexByName(this, &v81);
      String::~String();
      v33 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexSpellSet) == 0;
      Debugger::doAssert((Debugger *)v33, (bool)"", v34);
      String::String(&v80, "Exp");
      LogicTreasureChestData::sm_columnIndexExp = CSVTable::getColumnIndexByName(this, &v80);
      String::~String();
      v35 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexExp) == 1;
      Debugger::doAssert((Debugger *)v35, (bool)"", v36);
      String::String(&v79, "SlotLandEffect");
      LogicTreasureChestData::sm_columnIndexSlotLandEffect = CSVTable::getColumnIndexByName(this, &v79);
      String::~String();
      v37 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexSlotLandEffect) == 0;
      Debugger::doAssert((Debugger *)v37, (bool)"", v38);
      String::String(&v78, "OpenEffect");
      LogicTreasureChestData::sm_columnIndexOpenEffect = CSVTable::getColumnIndexByName(this, &v78);
      String::~String();
      v39 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexOpenEffect) == 0;
      Debugger::doAssert((Debugger *)v39, (bool)"", v40);
      String::String(&v77, "AnimExportName");
      LogicTreasureChestData::sm_columnIndexAnimExportName = CSVTable::getColumnIndexByName(this, &v77);
      String::~String();
      v41 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexAnimExportName) == 0;
      Debugger::doAssert((Debugger *)v41, (bool)"", v42);
      String::String(&v76, "TapSound");
      LogicTreasureChestData::sm_columnIndexTapSound = CSVTable::getColumnIndexByName(this, &v76);
      String::~String();
      v43 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexTapSound) == 0;
      Debugger::doAssert((Debugger *)v43, (bool)"", v44);
      String::String(&v75, "TapSoundShop");
      LogicTreasureChestData::sm_columnIndexTapSoundShop = CSVTable::getColumnIndexByName(this, &v75);
      String::~String();
      v45 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexTapSoundShop) == 0;
      Debugger::doAssert((Debugger *)v45, (bool)"", v46);
      String::String(&v74, "BaseChest");
      LogicTreasureChestData::sm_columnIndexBaseChest = CSVTable::getColumnIndexByName(this, &v74);
      String::~String();
      v47 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexBaseChest) == 0;
      Debugger::doAssert((Debugger *)v47, (bool)"", v48);
      String::String(&v73, "Arena");
      LogicTreasureChestData::sm_columnIndexArena = CSVTable::getColumnIndexByName(this, &v73);
      String::~String();
      v49 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexArena) == 0;
      Debugger::doAssert((Debugger *)v49, (bool)"", v50);
      String::String(&v72, "RandomSpells");
      LogicTreasureChestData::sm_columnIndexRandomSpells = CSVTable::getColumnIndexByName(this, &v72);
      String::~String();
      v51 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexRandomSpells) == 1;
      Debugger::doAssert((Debugger *)v51, (bool)"", v52);
      String::String(&v71, "EpicChance");
      LogicTreasureChestData::sm_columnIndexEpicChance = CSVTable::getColumnIndexByName(this, &v71);
      String::~String();
      v53 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexEpicChance) == 1;
      Debugger::doAssert((Debugger *)v53, (bool)"", v54);
      String::String(&v70, "RareChance");
      LogicTreasureChestData::sm_columnIndexRareChance = CSVTable::getColumnIndexByName(this, &v70);
      String::~String();
      v55 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexRareChance) == 1;
      Debugger::doAssert((Debugger *)v55, (bool)"", v56);
      String::String(&v69, "DifferentSpells");
      LogicTreasureChestData::sm_columnIndexDifferentSpells = CSVTable::getColumnIndexByName(this, &v69);
      String::~String();
      v57 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexDifferentSpells) == 1;
      Debugger::doAssert((Debugger *)v57, (bool)"", v58);
      String::String(&v68, "GuaranteedSpells");
      LogicTreasureChestData::sm_columnIndexGuaranteedSpells = CSVTable::getColumnIndexByName(this, &v68);
      String::~String();
      v59 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexGuaranteedSpells) == 0;
      Debugger::doAssert((Debugger *)v59, (bool)"", v60);
      String::String(&v67, "MinGold");
      LogicTreasureChestData::sm_columnIndexMinGold = CSVTable::getColumnIndexByName(this, &v67);
      String::~String();
      v61 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexMinGold) == 1;
      Debugger::doAssert((Debugger *)v61, (bool)"", v62);
      String::String(&v66, "MaxGold");
      LogicTreasureChestData::sm_columnIndexMaxGold = CSVTable::getColumnIndexByName(this, &v66);
      String::~String();
      v63 = (unsigned int)CSVTable::getColumnType(this, LogicTreasureChestData::sm_columnIndexMaxGold) == 1;
      return Debugger::doAssert((Debugger *)v63, (bool)"", v64);
    }

    __int64 __fastcall LogicTreasureChestData::createReferences(__int64 a1)
    {
      const char *v2; // x2
      LogicRefreshAchievementsCommand *Table; // x0
      const #1224 *v4; // x1
      LogicDataTables *ValueAt; // x0
      const LogicData *v6; // x2
      const char *v7; // x2
      LogicDataTables *v8; // x0
      const LogicData *v9; // x2
      __int64 ArenaByName; // x0
      const char *v11; // x2
      LogicKickAllianceMemberCommand *v12; // x0
      const AreaEffectObject *v13; // x2
      LogicKickAllianceMemberCommand *v14; // x0
      const AreaEffectObject *v15; // x2
      const char *v16; // x2
      const char *v17; // x2
      const char *v18; // x2
      const char *v19; // x2
      int ArraySizeAt; // w21
      const char *v21; // x2
      const char *v22; // x22
      LogicDataTables *v23; // x0
      const LogicData *v24; // x2
      const char *v25; // x2
      const char *v26; // x2
      int IntegerValueAt; // w0
      const char *v28; // x2
      LogicKickAllianceMemberCommand *v29; // x0
      const AreaEffectObject *v30; // x2
      const char *v31; // x2
      LogicKickAllianceMemberCommand *v32; // x0
      const AreaEffectObject *v33; // x2
      const char *v34; // x2
      LogicKickAllianceMemberCommand *v35; // x0
      const AreaEffectObject *v36; // x2
      __int64 result; // x0
      __int64 SpellByName; // [xsp+8h] [xbp-38h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (LogicRefreshAchievementsCommand *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicTreasureChestData::resetStatics(Table, v4);
      }
      ValueAt = (LogicDataTables *)LogicData::getValueAt(
                                     a1,
                                     (unsigned int)LogicTreasureChestData::sm_columnIndexBaseChest,
                                     v2);
      *(_QWORD *)(a1 + 144) = LogicDataTables::getTreasureChestByName(ValueAt, (const String *)a1, v6);
      v8 = (LogicDataTables *)LogicData::getValueAt(a1, (unsigned int)LogicTreasureChestData::sm_columnIndexArena, v7);
      ArenaByName = LogicDataTables::getArenaByName(v8, (const String *)a1, v9);
      *(_QWORD *)(a1 + 152) = ArenaByName;
      Debugger::doAssert((Debugger *)(ArenaByName != 0), (bool)"", v11);
      v12 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(_QWORD *)(a1 + 8),
                                                (unsigned int)LogicTreasureChestData::sm_columnIndexSlotLandEffect);
      *(_QWORD *)(a1 + 176) = LogicDataTables::getEffectByName(v12, 0, v13);
      v14 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(_QWORD *)(a1 + 8),
                                                (unsigned int)LogicTreasureChestData::sm_columnIndexOpenEffect);
      *(_QWORD *)(a1 + 184) = LogicDataTables::getEffectByName(v14, 0, v15);
      *(_DWORD *)(a1 + 100) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicTreasureChestData::sm_columnIndexRandomSpells,
                                v16);
      *(_DWORD *)(a1 + 104) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicTreasureChestData::sm_columnIndexEpicChance,
                                v17);
      *(_DWORD *)(a1 + 108) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicTreasureChestData::sm_columnIndexRareChance,
                                v18);
      *(_DWORD *)(a1 + 136) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicTreasureChestData::sm_columnIndexDifferentSpells,
                                v19);
      *(_DWORD *)(a1 + 124) = 0;
      ArraySizeAt = CSVRow::getArraySizeAt(
                      *(_QWORD *)(a1 + 8),
                      (unsigned int)LogicTreasureChestData::sm_columnIndexGuaranteedSpells);
      LogicArrayList<LogicSpellData const*>::ensureCapacity(a1 + 112, ArraySizeAt);
      if ( ArraySizeAt >= 1 )
      {
        v22 = 0;
        do
        {
          v23 = (LogicDataTables *)LogicData::getValueAt(
                                     a1,
                                     (unsigned int)LogicTreasureChestData::sm_columnIndexGuaranteedSpells,
                                     v22);
          SpellByName = LogicDataTables::getSpellByName(v23, (const String *)a1, v24);
          Debugger::doAssert((Debugger *)(SpellByName != 0), (bool)"", v25);
          LogicArrayList<LogicSpellData const*>::add(a1 + 112, &SpellByName);
          v22 = (const char *)(unsigned int)((_DWORD)v22 + 1);
        }
        while ( ArraySizeAt != (_DWORD)v22 );
      }
      *(_DWORD *)(a1 + 128) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicTreasureChestData::sm_columnIndexMinGold,
                                v21);
      IntegerValueAt = LogicData::getIntegerValueAt(
                         (AreaEffectObject *)a1,
                         (unsigned int)LogicTreasureChestData::sm_columnIndexMaxGold,
                         v26);
      *(_DWORD *)(a1 + 132) = IntegerValueAt;
      Debugger::doAssert((Debugger *)(IntegerValueAt >= *(_DWORD *)(a1 + 128)), (bool)"", v28);
      v29 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(_QWORD *)(a1 + 8),
                                                (unsigned int)LogicTreasureChestData::sm_columnIndexSpellSet);
      *(_QWORD *)(a1 + 168) = LogicDataTables::getSpellSetByName(v29, (const String *)a1, v30);
      v32 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                a1,
                                                (unsigned int)LogicTreasureChestData::sm_columnIndexTapSound,
                                                v31);
      *(_QWORD *)(a1 + 192) = LogicDataTables::getSoundByName(v32, (const String *)a1, v33);
      v35 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                a1,
                                                (unsigned int)LogicTreasureChestData::sm_columnIndexTapSoundShop,
                                                v34);
      result = LogicDataTables::getSoundByName(v35, (const String *)a1, v36);
      *(_QWORD *)(a1 + 200) = result;
      return result;
    }

    __int64 __fastcall LogicTreasureChestData::createReferences2(__int64 a1)
    {
      __int64 v2; // x22
      AreaEffectObject *v3; // x21
      const String *v4; // x1
      __int64 result; // x0
      const char *v6; // x1
      String v7; // [xsp+0h] [xbp-80h] BYREF
      String v8; // [xsp+18h] [xbp-68h] BYREF
      String v9; // [xsp+30h] [xbp-50h] BYREF
      String v10; // [xsp+48h] [xbp-38h] BYREF
    
      if ( *(int *)(a1 + 124) >= 1 )
      {
        v2 = 0;
        do
        {
          v3 = *(AreaEffectObject **)(*(_QWORD *)(a1 + 112) + 8 * v2);
          if ( (unsigned int)LogicSpellData::isNotInUse(v3) )
          {
            LogicData::getDebuggerName((AreaEffectObject *)a1);
            operator+(&v8, " gives spell that is not in use: ");
            LogicData::getDebuggerName(v3);
            operator+((__int64 *)&v10.m_length, &v9, &v7);
            Debugger::warning((__siginfo *)&v10, v4);
            String::~String();
            String::~String();
            String::~String();
            String::~String();
          }
          ++v2;
        }
        while ( v2 < *(int *)(a1 + 124) );
      }
      result = LogicTreasureChestData::getRandomSpellCount(a1);
      if ( (result & 0x80000000) != 0 )
        Debugger::error(
          (__siginfo *)"LogicTreasureChestData has negative random spell count (too many guaranteed spells)",
          v6);
      return result;
    }

    __int64 __fastcall LogicTreasureChestData::getRandomSpellCount(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x8
      __int64 v4; // x1
    
      v3 = *(_QWORD *)(a1 + 144);
      v2 = *(_QWORD *)(a1 + 152);
      if ( v3 )
        v4 = *(unsigned int *)(v3 + 100);
      else
        v4 = *(unsigned int *)(a1 + 100);
      return (unsigned int)LogicArenaData::getScaledChestReward(v2, v4) - *(_DWORD *)(a1 + 124);
    }

    __int64 __fastcall LogicTreasureChestData::getMinSpellCountForRarity(__int64 a1, __int64 a2)
    {
      int ChanceForRarity; // w20
      __int64 result; // x0
    
      if ( a2 )
      {
        ChanceForRarity = LogicTreasureChestData::getChanceForRarity(a1, a2, 0);
        result = 0;
        if ( ChanceForRarity >= 1 )
          return (unsigned int)((int)LogicTreasureChestData::getRandomSpellCount(a1) / ChanceForRarity);
      }
      else
      {
        Debugger::warning((__siginfo *)"getMinDropChanceForRarity called with NULL rarity", 0);
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicTreasureChestData::getChanceForRarity(__int64 a1, __int64 a2)
    {
      return LogicTreasureChestData::getChanceForRarity(a1, a2, 0);
    }

    __int64 __fastcall LogicTreasureChestData::getTotalSpellCount(__int64 a1)
    {
      return *(_DWORD *)(a1 + 124) + (unsigned int)LogicTreasureChestData::getRandomSpellCount(a1);
    }

    __int64 __fastcall LogicTreasureChestData::getGuaranteedSpellArraySize(__int64 a1)
    {
      return *(unsigned int *)(a1 + 124);
    }

    __int64 __fastcall LogicTreasureChestData::getDifferentSpellCount(__int64 a1)
    {
      __int64 v1; // x8
    
      do
      {
        v1 = a1;
        a1 = *(_QWORD *)(a1 + 144);
      }
      while ( a1 );
      return *(unsigned int *)(v1 + 136);
    }

    __int64 __fastcall LogicTreasureChestData::getChanceForRarity(__int64 a1, LogicDataTables *a2, char a3)
    {
      __int64 v4; // x20
      LogicDataTables *RarityEpic; // x0
    
      if ( a2 )
      {
        while ( 1 )
        {
          v4 = a1;
          if ( (a3 & 1) == 0 && !(unsigned int)LogicArenaData::getUnlockedCardCountForRarity(*(_QWORD *)(a1 + 152), a2) )
            break;
          a1 = *(_QWORD *)(v4 + 144);
          a3 = 1;
          if ( !a1 )
          {
            RarityEpic = (LogicDataTables *)LogicDataTables::getRarityEpic(0);
            if ( RarityEpic == a2 )
              return *(unsigned int *)(v4 + 104);
            if ( (LogicDataTables *)LogicDataTables::getRarityRare(RarityEpic) == a2 )
              return *(unsigned int *)(v4 + 108);
            return 1;
          }
        }
      }
      else
      {
        Debugger::warning((__siginfo *)"getCustomChanceForRarity called with NULL rarity", 0);
      }
      return 0;
    }

    __int64 __fastcall LogicTreasureChestData::getGuaranteedSpell(__int64 a1, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * a2);
    }

    __int64 __fastcall LogicTreasureChestData::getMinGold(__int64 a1)
    {
      __int64 v1; // x19
      __int64 MinGold; // x1
    
      if ( !*(_QWORD *)(a1 + 144) )
        return *(unsigned int *)(a1 + 128);
      v1 = *(_QWORD *)(a1 + 152);
      MinGold = LogicTreasureChestData::getMinGold(*(_QWORD *)(a1 + 144));
      return LogicArenaData::getScaledChestReward(v1, MinGold);
    }

    __int64 __fastcall LogicTreasureChestData::getMaxGold(__int64 a1)
    {
      __int64 v1; // x19
      __int64 MaxGold; // x1
    
      if ( !*(_QWORD *)(a1 + 144) )
        return *(unsigned int *)(a1 + 132);
      v1 = *(_QWORD *)(a1 + 152);
      MaxGold = LogicTreasureChestData::getMaxGold(*(_QWORD *)(a1 + 144));
      return LogicArenaData::getScaledChestReward(v1, MaxGold);
    }

    __int64 __fastcall LogicTreasureChestData::getFileName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTreasureChestData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicTreasureChestData::getExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTreasureChestData::sm_columnIndexExportName);
    }

    __int64 __fastcall LogicTreasureChestData::getShopExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTreasureChestData::sm_columnIndexShopExportName);
    }

    __int64 __fastcall LogicTreasureChestData::getGainedExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTreasureChestData::sm_columnIndexGainedExportName);
    }

    __int64 __fastcall LogicTreasureChestData::getAnimExportName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTreasureChestData::sm_columnIndexAnimExportName);
    }

    __int64 __fastcall LogicTreasureChestData::getNotificationTID(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTreasureChestData::sm_columnIndexNotificationTID);
    }

    __int64 __fastcall LogicTreasureChestData::getTotalTimeTakenSeconds(__int64 a1)
    {
      __int64 v1; // x19
      __int64 v2; // x9
      __int64 v3; // x8
      int IntegerValueAt; // w20
      __int64 v5; // x9
      __int64 v6; // x8
      int v7; // w8
      __int64 v8; // x10
      __int64 v9; // x9
      int v10; // w20
      int v11; // w8
      __int64 v12; // x9
    
      v1 = a1;
      v2 = a1;
      do
      {
        v3 = v2;
        v2 = *(_QWORD *)(v2 + 144);
      }
      while ( v2 );
      IntegerValueAt = CSVRow::getIntegerValueAt(
                         *(_QWORD *)(v3 + 8),
                         (unsigned int)LogicTreasureChestData::sm_columnIndexTimeTakenSeconds);
      v5 = v1;
      do
      {
        v6 = v5;
        v5 = *(_QWORD *)(v5 + 144);
      }
      while ( v5 );
      v7 = 60
         * CSVRow::getIntegerValueAt(
             *(_QWORD *)(v6 + 8),
             (unsigned int)LogicTreasureChestData::sm_columnIndexTimeTakenMinutes);
      v8 = v1;
      do
      {
        v9 = v8;
        v8 = *(_QWORD *)(v8 + 144);
      }
      while ( v8 );
      v10 = v7 + IntegerValueAt;
      v11 = 3600
          * CSVRow::getIntegerValueAt(
              *(_QWORD *)(v9 + 8),
              (unsigned int)LogicTreasureChestData::sm_columnIndexTimeTakenHours);
      do
      {
        v12 = v1;
        v1 = *(_QWORD *)(v1 + 144);
      }
      while ( v1 );
      return v10
           + v11
           + 86400
           * (unsigned int)CSVRow::getIntegerValueAt(
                             *(_QWORD *)(v12 + 8),
                             (unsigned int)LogicTreasureChestData::sm_columnIndexTimeTakenDays);
    }

    __int64 __fastcall LogicTreasureChestData::isTutorialChest(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicTreasureChestData::sm_columnIndexTutorialChest);
    }

    __int64 __fastcall LogicTreasureChestData::isAddFirstSpellToCollection(__int64 a1, __int64 a2)
    {
      return CSVRow::getBooleanValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicTreasureChestData::sm_columnIndexAddFirstSpellToCollection,
               a2);
    }

    __int64 __fastcall LogicTreasureChestData::getShopPrice(_QWORD *a1)
    {
      __int64 v2; // x20
      __int64 IntegerValueAt; // x0
      int ScaledChestPrice; // w20
      __int64 v5; // x8
      __int64 v6; // x20
      __int64 v7; // x0
      __int64 TotalTimeTakenSeconds; // x0
      int v9; // w8
      unsigned int v11; // w9
    
      v2 = a1[19];
      IntegerValueAt = CSVRow::getIntegerValueAt(
                         a1[1],
                         (unsigned int)LogicTreasureChestData::sm_columnIndexShopPriceWithoutSpeedUp);
      ScaledChestPrice = LogicArenaData::getScaledChestPrice(v2, IntegerValueAt);
      v5 = a1[18];
      if ( v5 )
      {
        v6 = a1[19];
        v7 = CSVRow::getIntegerValueAt(
               *(_QWORD *)(v5 + 8),
               (unsigned int)LogicTreasureChestData::sm_columnIndexShopPriceWithoutSpeedUp);
        ScaledChestPrice = LogicArenaData::getScaledChestPrice(v6, v7);
      }
      TotalTimeTakenSeconds = LogicTreasureChestData::getTotalTimeTakenSeconds((__int64)a1);
      v9 = LogicTreasureChestData::getSpeedUpCost(a1, TotalTimeTakenSeconds) + ScaledChestPrice;
      if ( v9 >= 501 )
        return (unsigned int)(100 * ((v9 + 50) / 100));
      v11 = 5 * ((v9 + 3) / 5);
      if ( v9 < 21 )
        v11 = v9;
      if ( v9 >= 101 )
        return (unsigned int)(10 * ((v9 + 5) / 10));
      else
        return v11;
    }

    __int64 __fastcall LogicTreasureChestData::getSpeedUpCost(__int64 a1, int a2)
    {
      int TotalTimeTakenSeconds; // w0
      int v5; // w20
      __int64 v6; // x8
      __int64 v7; // x0
      int IntegerValueAt; // w8
      int v10; // w3
    
      TotalTimeTakenSeconds = LogicTreasureChestData::getTotalTimeTakenSeconds(a1);
      v5 = TotalTimeTakenSeconds;
      if ( a2 < 1 || TotalTimeTakenSeconds < 1 )
        return 0;
      v6 = *(_QWORD *)(a1 + 144);
      if ( v6 )
        v7 = *(_QWORD *)(v6 + 8);
      else
        v7 = *(_QWORD *)(a1 + 8);
      IntegerValueAt = CSVRow::getIntegerValueAt(v7, (unsigned int)LogicTreasureChestData::sm_columnIndexSpeedUpCost);
      return LogicMath::clamp((#1237 *)(unsigned int)((v5 + IntegerValueAt * a2 - 1) / v5), 1, IntegerValueAt, v10);
    }

    __int64 __fastcall LogicTreasureChestData::getOpenInstanceName(__int64 a1)
    {
      return CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTreasureChestData::sm_columnIndexOpenInstanceName);
    }

    __int64 __fastcall LogicTreasureChestData::getExp(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTreasureChestData::sm_columnIndexExp);
    }

    __int64 __fastcall LogicTreasureChestData::getBaseChest(__int64 a1)
    {
      return *(_QWORD *)(a1 + 144);
    }

    __int64 __fastcall LogicTreasureChestData::getArena(__int64 a1)
    {
      return *(_QWORD *)(a1 + 152);
    }

    __int64 __fastcall LogicTreasureChestData::getSlotLandEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 176);
    }

    __int64 __fastcall LogicTreasureChestData::getOpenEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 184);
    }

    __int64 __fastcall LogicTreasureChestData::getTapSound(LogicRefreshAchievementsCommand *this)
    {
      return *((_QWORD *)this + 24);
    }

    __int64 __fastcall LogicTreasureChestData::getTapSoundShop(LogicRefreshAchievementsCommand *this)
    {
      return *((_QWORD *)this + 25);
    }

    bool __fastcall LogicTreasureChestData::isFreeChest(LogicRefreshAchievementsCommand *this)
    {
      return LogicArenaData::getFreeChest(*((_QWORD *)this + 19)) == (_QWORD)this;
    }

    bool __fastcall LogicTreasureChestData::isCrownChest(LogicRefreshAchievementsCommand *this)
    {
      return LogicArenaData::getCrownChest(*((_QWORD *)this + 19)) == (_QWORD)this;
    }

    // attributes: thunk
    void __fastcall LogicTreasureChestData::~LogicTreasureChestData(LogicRefreshAchievementsCommand *this)
    {
      __ZN22LogicTreasureChestDataD2Ev(this);
    }

    void __fastcall LogicTreasureChestData::~LogicTreasureChestData(LogicRefreshAchievementsCommand *this)
    {
      LogicTreasureChestData::~LogicTreasureChestData(this);
      operator delete(this);
    }

    void __fastcall LogicTreasureChestData::~LogicTreasureChestData(LogicRefreshAchievementsCommand *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      *(_QWORD *)this = off_100467C50;
      v3 = (_QWORD *)((char *)this + 112);
      v2 = *((_QWORD *)this + 14);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      LogicData::~LogicData((String *)this);
    }

}; // end class LogicTreasureChestData
