class LogicTutorialData
{
public:

    _QWORD *__fastcall LogicTutorialData::LogicTutorialData(_QWORD *a1, __int64 a2, ResetAccountMessage *a3)
    {
      LogicData::LogicData((__int64)a1, a2, a3);
      *a1 = off_100467CD0;
      a1[23] = 0;
      a1[24] = 0;
      memset(a1 + 13, 0, 0x49u);
      return a1;
    }

    void *__fastcall LogicTutorialData::destruct(__int64 a1)
    {
      LogicData::destruct(a1);
      return memset((void *)(a1 + 104), 0, 0x49u);
    }

    __int64 __fastcall LogicTutorialData::createReferences(__int64 a1)
    {
      LogicTutorialData *Table; // x0
      const CSVTable *v3; // x1
      __int64 ParentTable; // x0
      int v5; // w20
      const char *v6; // x2
      __int64 ValueAt; // x0
      LogicDataTables *v8; // x0
      const LogicData *v9; // x2
      LogicDataTables *v10; // x0
      const LogicData *v11; // x2
      LogicDataTables *v12; // x0
      const LogicData *v13; // x2
      LogicDataTables *v14; // x0
      const LogicData *v15; // x2
      LogicKickAllianceMemberCommand *v16; // x0
      const AreaEffectObject *v17; // x2
      LogicDataTables *v18; // x0
      const LogicData *v19; // x2
      LogicDataTables *v20; // x0
      const LogicData *v21; // x2
      __int64 v22; // x20
      __int64 v23; // x20
      __int64 v24; // x20
      __int64 v25; // x23
      __int64 v26; // x23
      __int64 Value; // x0
      __int64 result; // x0
      __int64 v29; // x20
      int v30; // w1
      __int64 v31; // x0
      int v32; // w1
      __int64 v33; // x0
      String v34; // [xsp+0h] [xbp-90h] BYREF
      String v35; // [xsp+18h] [xbp-78h] BYREF
      String v36; // [xsp+30h] [xbp-60h] BYREF
      String v37; // [xsp+48h] [xbp-48h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (LogicTutorialData *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicTutorialData::resetStatics(Table, v3);
        ParentTable = LogicData::getParentTable((AreaEffectObject *)a1);
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)ParentTable + 32LL))(ParentTable);
        LogicData::getDataType((ResetAccountMessage **)a1);
        Debugger::doAssert((Debugger *)(v5 < 257), (bool)"", v6);
      }
      ValueAt = CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTutorialData::sm_columnIndexFinishRequirement);
      *(_DWORD *)(a1 + 172) = LogicTutorialData::parseRequirement(ValueAt, ValueAt);
      v8 = (LogicDataTables *)CSVRow::getValueAt(
                                *(_QWORD *)(a1 + 8),
                                (unsigned int)LogicTutorialData::sm_columnIndexDependency);
      *(_QWORD *)(a1 + 104) = LogicDataTables::getTutorialByName(v8, (const String *)a1, v9);
      v10 = (LogicDataTables *)CSVRow::getValueAt(
                                 *(_QWORD *)(a1 + 8),
                                 (unsigned int)LogicTutorialData::sm_columnIndexLocation);
      *(_QWORD *)(a1 + 112) = LogicDataTables::getLocationByName(v10, (const String *)a1, v11);
      v12 = (LogicDataTables *)CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTutorialData::sm_columnIndexNpc);
      *(_QWORD *)(a1 + 120) = LogicDataTables::getNpcByName(v12, (const String *)a1, v13);
      v14 = (LogicDataTables *)CSVRow::getValueAt(
                                 *(_QWORD *)(a1 + 8),
                                 (unsigned int)LogicTutorialData::sm_columnIndexSpellToCast);
      *(_QWORD *)(a1 + 128) = LogicDataTables::getSpellByName(v14, (const String *)a1, v15);
      v16 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                *(_QWORD *)(a1 + 8),
                                                (unsigned int)LogicTutorialData::sm_columnIndexSound);
      *(_QWORD *)(a1 + 152) = LogicDataTables::getSoundByName(v16, (const String *)a1, v17);
      v18 = (LogicDataTables *)CSVRow::getValueAt(
                                 *(_QWORD *)(a1 + 8),
                                 (unsigned int)LogicTutorialData::sm_columnIndexTutorialSpell);
      *(_QWORD *)(a1 + 136) = LogicDataTables::getSpellByName(v18, (const String *)a1, v19);
      v20 = (LogicDataTables *)CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTutorialData::sm_columnIndexTaunt);
      *(_QWORD *)(a1 + 160) = LogicDataTables::getTauntByName(v20, (const String *)a1, v21);
      *(_QWORD *)(a1 + 144) = 0;
      v22 = *(_QWORD *)(a1 + 8);
      String::String(&v37, "NpcMatchesPlayed");
      *(_DWORD *)(a1 + 168) = CSVRow::getIntegerValue(v22, &v37, 0);
      String::~String();
      v23 = *(_QWORD *)(a1 + 8);
      String::String(&v36, "DisableBattleMenu");
      *(_BYTE *)(a1 + 176) = CSVRow::getBooleanValue(v23, &v36, 0);
      String::~String();
      v24 = 0;
      *(_DWORD *)(a1 + 196) = 0;
      while ( 1 )
      {
        v25 = *(_QWORD *)(a1 + 8);
        String::String(&v35, "TID");
        LODWORD(v25) = CSVRow::getArraySize(v25, &v35);
        String::~String();
        if ( (int)v24 >= (int)v25 )
          break;
        v26 = *(_QWORD *)(a1 + 8);
        String::String(&v34, "TID");
        Value = CSVRow::getValue(v26, &v34, v24);
        LogicArrayList<String>::add(a1 + 184, Value);
        String::~String();
        v24 = (unsigned int)(v24 + 1);
      }
      result = LogicData::getDataType((ResetAccountMessage **)a1);
      if ( (_DWORD)result == 48 )
      {
        v29 = CSVRow::getValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTutorialData::sm_columnIndexBubbleObject);
        v31 = LogicDataTables::getTable((LogicDataTables *)6, v30);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 56LL))(v31, v29);
        *(_QWORD *)(a1 + 144) = result;
        if ( !result )
        {
          v33 = LogicDataTables::getTable((LogicDataTables *)0x2A, v32);
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 56LL))(v33, v29);
          *(_QWORD *)(a1 + 144) = result;
        }
      }
      return result;
    }

    __n128 __fastcall LogicTutorialData::resetStatics(#1224 *a1)
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
      _BOOL8 v26; // x0
      const char *v27; // x2
      _BOOL8 v28; // x0
      const char *v29; // x2
      _BOOL8 v30; // x0
      const char *v31; // x2
      _BOOL8 v32; // x0
      const char *v33; // x2
      _BOOL8 v34; // x0
      const char *v35; // x2
      _BOOL8 v36; // x0
      const char *v37; // x2
      _BOOL8 v38; // x0
      const char *v39; // x2
      _BOOL8 v40; // x0
      const char *v41; // x2
      _BOOL8 v42; // x0
      const char *v43; // x2
      _BOOL8 v44; // x0
      const char *v45; // x2
      _BOOL8 v46; // x0
      const char *v47; // x2
      _BOOL8 v48; // x0
      const char *v49; // x2
      _BOOL8 v50; // x0
      const char *v51; // x2
      _BOOL8 v52; // x0
      const char *v53; // x2
      _BOOL8 v54; // x0
      const char *v55; // x2
      _BOOL8 v56; // x0
      const char *v57; // x2
      _BOOL8 v58; // x0
      const char *v59; // x2
      _BOOL8 v60; // x0
      const char *v61; // x2
      String v63; // [xsp+0h] [xbp-2F0h] BYREF
      String v64; // [xsp+18h] [xbp-2D8h] BYREF
      String v65; // [xsp+30h] [xbp-2C0h] BYREF
      String v66; // [xsp+48h] [xbp-2A8h] BYREF
      String v67; // [xsp+60h] [xbp-290h] BYREF
      String v68; // [xsp+78h] [xbp-278h] BYREF
      String v69; // [xsp+90h] [xbp-260h] BYREF
      String v70; // [xsp+A8h] [xbp-248h] BYREF
      String v71; // [xsp+C0h] [xbp-230h] BYREF
      String v72; // [xsp+D8h] [xbp-218h] BYREF
      String v73; // [xsp+F0h] [xbp-200h] BYREF
      String v74; // [xsp+108h] [xbp-1E8h] BYREF
      String v75; // [xsp+120h] [xbp-1D0h] BYREF
      String v76; // [xsp+138h] [xbp-1B8h] BYREF
      String v77; // [xsp+150h] [xbp-1A0h] BYREF
      String v78; // [xsp+168h] [xbp-188h] BYREF
      String v79; // [xsp+180h] [xbp-170h] BYREF
      String v80; // [xsp+198h] [xbp-158h] BYREF
      String v81; // [xsp+1B0h] [xbp-140h] BYREF
      String v82; // [xsp+1C8h] [xbp-128h] BYREF
      String v83; // [xsp+1E0h] [xbp-110h] BYREF
      String v84; // [xsp+1F8h] [xbp-F8h] BYREF
      String v85; // [xsp+210h] [xbp-E0h] BYREF
      String v86; // [xsp+228h] [xbp-C8h] BYREF
      String v87; // [xsp+240h] [xbp-B0h] BYREF
      String v88; // [xsp+258h] [xbp-98h] BYREF
      String v89; // [xsp+270h] [xbp-80h] BYREF
      String v90; // [xsp+288h] [xbp-68h] BYREF
      String v91; // [xsp+2A0h] [xbp-50h] BYREF
      String v92; // [xsp+2B8h] [xbp-38h] BYREF
    
      String::String(&v92, "Dependency");
      LogicTutorialData::sm_columnIndexDependency = CSVTable::getColumnIndexByName(a1, &v92);
      String::~String();
      v2 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexDependency) == 0;
      Debugger::doAssert((Debugger *)v2, (bool)"", v3);
      String::String(&v91, "FinishRequirement");
      LogicTutorialData::sm_columnIndexFinishRequirement = CSVTable::getColumnIndexByName(a1, &v91);
      String::~String();
      v4 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexFinishRequirement) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      String::String(&v90, "WaitTimeMS");
      LogicTutorialData::sm_columnIndexWaitTimeMS = CSVTable::getColumnIndexByName(a1, &v90);
      String::~String();
      v6 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexWaitTimeMS) == 1;
      Debugger::doAssert((Debugger *)v6, (bool)"", v7);
      String::String(&v89, "FileName");
      LogicTutorialData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(a1, &v89);
      String::~String();
      v8 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v8, (bool)"", v9);
      String::String(&v88, "PopupExportName");
      LogicTutorialData::sm_columnIndexPopupExportName = CSVTable::getColumnIndexByName(a1, &v88);
      String::~String();
      v10 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexPopupExportName) == 0;
      Debugger::doAssert((Debugger *)v10, (bool)"", v11);
      String::String(&v87, "BubbleExportName");
      LogicTutorialData::sm_columnIndexBubbleExportName = CSVTable::getColumnIndexByName(a1, &v87);
      String::~String();
      v12 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexBubbleExportName) == 0;
      Debugger::doAssert((Debugger *)v12, (bool)"", v13);
      String::String(&v86, "HideCombatUI");
      LogicTutorialData::sm_columnIndexHideCombatUI = CSVTable::getColumnIndexByName(a1, &v86);
      String::~String();
      v14 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexHideCombatUI) == 2;
      Debugger::doAssert((Debugger *)v14, (bool)"", v15);
      String::String(&v85, "PauseCombat");
      LogicTutorialData::sm_columnIndexPauseCombat = CSVTable::getColumnIndexByName(a1, &v85);
      String::~String();
      v16 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexPauseCombat) == 2;
      Debugger::doAssert((Debugger *)v16, (bool)"", v17);
      String::String(&v84, "DisableTroopMovement");
      LogicTutorialData::sm_columnIndexDisableTroopMovement = CSVTable::getColumnIndexByName(a1, &v84);
      String::~String();
      v18 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexDisableTroopMovement) == 2;
      Debugger::doAssert((Debugger *)v18, (bool)"", v19);
      String::String(&v83, "DisableLeaderMovement");
      LogicTutorialData::sm_columnIndexDisableLeaderMovement = CSVTable::getColumnIndexByName(a1, &v83);
      String::~String();
      v20 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexDisableLeaderMovement) == 2;
      Debugger::doAssert((Debugger *)v20, (bool)"", v21);
      String::String(&v82, "DisableSpawnPoints");
      LogicTutorialData::sm_columnIndexDisableSpawnPoints = CSVTable::getColumnIndexByName(a1, &v82);
      String::~String();
      v22 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexDisableSpawnPoints) == 2;
      Debugger::doAssert((Debugger *)v22, (bool)"", v23);
      String::String(&v81, "DisableOpponentSpells");
      LogicTutorialData::sm_columnIndexDisableOpponentSpells = CSVTable::getColumnIndexByName(a1, &v81);
      String::~String();
      v24 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexDisableOpponentSpells) == 2;
      Debugger::doAssert((Debugger *)v24, (bool)"", v25);
      String::String(&v80, "OverlayExportName");
      LogicTutorialData::sm_columnIndexOverlayExportName = CSVTable::getColumnIndexByName(a1, &v80);
      String::~String();
      v26 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexOverlayExportName) == 0;
      Debugger::doAssert((Debugger *)v26, (bool)"", v27);
      String::String(&v79, "SpellDragExportName");
      LogicTutorialData::sm_columnIndexSpellDragExportName = CSVTable::getColumnIndexByName(a1, &v79);
      String::~String();
      v28 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexSpellDragExportName) == 0;
      Debugger::doAssert((Debugger *)v28, (bool)"", v29);
      String::String(&v78, "Location");
      LogicTutorialData::sm_columnIndexLocation = CSVTable::getColumnIndexByName(a1, &v78);
      String::~String();
      v30 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexLocation) == 0;
      Debugger::doAssert((Debugger *)v30, (bool)"", v31);
      String::String(&v77, "NPC");
      LogicTutorialData::sm_columnIndexNpc = CSVTable::getColumnIndexByName(a1, &v77);
      String::~String();
      v32 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexNpc) == 0;
      Debugger::doAssert((Debugger *)v32, (bool)"", v33);
      String::String(&v76, "SpellToCast");
      LogicTutorialData::sm_columnIndexSpellToCast = CSVTable::getColumnIndexByName(a1, &v76);
      String::~String();
      v34 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexSpellToCast) == 0;
      Debugger::doAssert((Debugger *)v34, (bool)"", v35);
      String::String(&v75, "SpellTileX");
      LogicTutorialData::sm_columnIndexSpellTileX = CSVTable::getColumnIndexByName(a1, &v75);
      String::~String();
      v36 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexSpellTileX) == 1;
      Debugger::doAssert((Debugger *)v36, (bool)"", v37);
      String::String(&v74, "SpellTileY");
      LogicTutorialData::sm_columnIndexSpellTileY = CSVTable::getColumnIndexByName(a1, &v74);
      String::~String();
      v38 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexSpellTileY) == 1;
      Debugger::doAssert((Debugger *)v38, (bool)"", v39);
      String::String(&v73, "Priority");
      LogicTutorialData::sm_columnIndexPriority = CSVTable::getColumnIndexByName(a1, &v73);
      String::~String();
      v40 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexPriority) == 1;
      Debugger::doAssert((Debugger *)v40, (bool)"", v41);
      String::String(&v72, "Darkening");
      LogicTutorialData::sm_columnIndexDarkening = CSVTable::getColumnIndexByName(a1, &v72);
      String::~String();
      v42 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexDarkening) == 2;
      Debugger::doAssert((Debugger *)v42, (bool)"", v43);
      String::String(&v71, "DisableSpells");
      LogicTutorialData::sm_columnIndexDisableSpells = CSVTable::getColumnIndexByName(a1, &v71);
      String::~String();
      v44 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexDisableSpells) == 2;
      Debugger::doAssert((Debugger *)v44, (bool)"", v45);
      String::String(&v70, "ButtonTID");
      LogicTutorialData::sm_columnIndexButtonTID = CSVTable::getColumnIndexByName(a1, &v70);
      String::~String();
      v46 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexButtonTID) == 0;
      Debugger::doAssert((Debugger *)v46, (bool)"", v47);
      String::String(&v69, "BubbleObject");
      LogicTutorialData::sm_columnIndexBubbleObject = CSVTable::getColumnIndexByName(a1, &v69);
      String::~String();
      v48 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexBubbleObject) == 0;
      Debugger::doAssert((Debugger *)v48, (bool)"", v49);
      String::String(&v68, "Sound");
      LogicTutorialData::sm_columnIndexSound = CSVTable::getColumnIndexByName(a1, &v68);
      String::~String();
      v50 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexSound) == 0;
      Debugger::doAssert((Debugger *)v50, (bool)"", v51);
      String::String(&v67, "PopupCorner");
      LogicTutorialData::sm_columnIndexPopupCorner = CSVTable::getColumnIndexByName(a1, &v67);
      String::~String();
      v52 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexPopupCorner) == 1;
      Debugger::doAssert((Debugger *)v52, (bool)"", v53);
      String::String(&v66, "TutorialSpell");
      LogicTutorialData::sm_columnIndexTutorialSpell = CSVTable::getColumnIndexByName(a1, &v66);
      String::~String();
      v54 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexTutorialSpell) == 0;
      Debugger::doAssert((Debugger *)v54, (bool)"", v55);
      String::String(&v65, "Taunt");
      LogicTutorialData::sm_columnIndexTaunt = CSVTable::getColumnIndexByName(a1, &v65);
      String::~String();
      v56 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexTaunt) == 0;
      Debugger::doAssert((Debugger *)v56, (bool)"", v57);
      String::String(&v64, "HighlightTargetsOnManaFull");
      LogicTutorialData::sm_columnIndexHighlightTargetsOnManaFull = CSVTable::getColumnIndexByName(a1, &v64);
      String::~String();
      v58 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexHighlightTargetsOnManaFull) == 2;
      Debugger::doAssert((Debugger *)v58, (bool)"", v59);
      String::String(&v63, "DisableBattleStartScreen");
      LogicTutorialData::sm_columnIndexDisableBattleStartScreen = CSVTable::getColumnIndexByName(a1, &v63);
      String::~String();
      v60 = (unsigned int)CSVTable::getColumnType(a1, LogicTutorialData::sm_columnIndexDisableBattleStartScreen) == 2;
      return Debugger::doAssert((Debugger *)v60, (bool)"", v61);
    }

    __int64 __fastcall LogicTutorialData::parseRequirement(__int64 a1, _DWORD *a2)
    {
      const String *v4; // x1
      _QWORD v5[3]; // [xsp+8h] [xbp-28h] BYREF
    
      if ( *a2 && (String::equalsIgnoreCase(a2, "None") & 1) == 0 )
      {
        if ( (String::equalsIgnoreCase(a2, "OwnTroopsDead") & 1) != 0 )
          return 1;
        if ( (String::equalsIgnoreCase(a2, "EnemyTroopsDead") & 1) != 0 )
          return 2;
        if ( (String::equalsIgnoreCase(a2, "EnemyLeaderDead") & 1) != 0 )
          return 3;
        if ( (String::equalsIgnoreCase(a2, "StarGained") & 1) != 0 )
          return 7;
        if ( (String::equalsIgnoreCase(a2, "OpenChest") & 1) != 0 )
          return 101;
        if ( (String::equalsIgnoreCase(a2, "CastSpell") & 1) != 0 )
          return 5;
        if ( (String::equalsIgnoreCase(a2, "EnterName") & 1) != 0 )
          return 102;
        if ( (String::equalsIgnoreCase(a2, "CompleteLocation") & 1) != 0 )
          return 103;
        if ( (String::equalsIgnoreCase(a2, "CompleteLocationNoMap") & 1) != 0 )
          return 105;
        if ( (String::equalsIgnoreCase(a2, "FuseSpell") & 1) != 0 )
          return 106;
        if ( (String::equalsIgnoreCase(a2, "NonSkippable") & 1) != 0 )
          return 6;
        if ( (String::equalsIgnoreCase(a2, "OpenBattleTab") & 1) != 0 )
          return 108;
        if ( (String::equalsIgnoreCase(a2, "OpenTrainTab") & 1) != 0 )
          return 109;
        if ( (String::equalsIgnoreCase(a2, "MoveSpellToDeck") & 1) != 0 )
          return 110;
        if ( (String::equalsIgnoreCase(a2, "OpenSpellsTab") & 1) != 0 )
          return 111;
        if ( (String::equalsIgnoreCase(a2, "PressOk") & 1) != 0 )
          return 8;
        operator+(v5, "Invalid tutorial action ", a2);
        Debugger::warning((__siginfo *)v5, v4);
        String::~String();
      }
      return 0;
    }

    bool __fastcall LogicTutorialData::isNPCMode(ResetAccountMessage **this)
    {
      return (unsigned int)LogicData::getDataType(this) == 48;
    }

    __int64 __fastcall LogicTutorialData::getDependency(LogicMusicData *this)
    {
      return *((_QWORD *)this + 13);
    }

    bool __fastcall LogicTutorialData::isHomeMode(ResetAccountMessage **this)
    {
      return (unsigned int)LogicData::getDataType(this) == 45;
    }

    __int64 __fastcall LogicTutorialData::getWaitTimeMS(LogicMusicData *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexWaitTimeMS);
    }

    __int64 __fastcall LogicTutorialData::getFileName(LogicMusicData *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicTutorialData::getPopupExportName(LogicMusicData *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexPopupExportName);
    }

    __int64 __fastcall LogicTutorialData::getBubbleExportName(LogicMusicData *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexBubbleExportName);
    }

    __int64 __fastcall LogicTutorialData::isHideCombatUI(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexHideCombatUI);
    }

    __int64 __fastcall LogicTutorialData::isPauseCombat(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexPauseCombat);
    }

    __int64 __fastcall LogicTutorialData::isDisableTroopMovement(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicTutorialData::sm_columnIndexDisableTroopMovement);
    }

    __int64 __fastcall LogicTutorialData::getOverlayExportName(LogicMusicData *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexOverlayExportName);
    }

    __int64 __fastcall LogicTutorialData::getFinishRequirement(LogicMusicData *this)
    {
      return *((unsigned int *)this + 43);
    }

    __int64 __fastcall LogicTutorialData::getSpellDragExportName(LogicMusicData *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexSpellDragExportName);
    }

    __int64 __fastcall LogicTutorialData::getLocationData(LogicMusicData *this)
    {
      return *((_QWORD *)this + 14);
    }

    __int64 __fastcall LogicTutorialData::getNpcData(LogicMusicData *this)
    {
      return *((_QWORD *)this + 15);
    }

    __int64 __fastcall LogicTutorialData::getSpellToCast(LogicMusicData *this)
    {
      return *((_QWORD *)this + 16);
    }

    __int64 __fastcall LogicTutorialData::isDisableSpawnPoints(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicTutorialData::sm_columnIndexDisableSpawnPoints);
    }

    __int64 __fastcall LogicTutorialData::isDisableOpponentSpells(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicTutorialData::sm_columnIndexDisableOpponentSpells);
    }

    __int64 __fastcall LogicTutorialData::getSpellTileX(LogicMusicData *this)
    {
      return 500
           * (unsigned int)CSVRow::getIntegerValueAt(
                             *((_QWORD *)this + 1),
                             (unsigned int)LogicTutorialData::sm_columnIndexSpellTileX);
    }

    __int64 __fastcall LogicTutorialData::getSpellTileY(LogicMusicData *this)
    {
      return 500
           * (unsigned int)CSVRow::getIntegerValueAt(
                             *((_QWORD *)this + 1),
                             (unsigned int)LogicTutorialData::sm_columnIndexSpellTileY);
    }

    __int64 __fastcall LogicTutorialData::isDisableLeaderMovement(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicTutorialData::sm_columnIndexDisableLeaderMovement);
    }

    __int64 __fastcall LogicTutorialData::getPriority(LogicMusicData *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexPriority);
    }

    __int64 __fastcall LogicTutorialData::isPopupDarkening(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexDarkening);
    }

    __int64 __fastcall LogicTutorialData::isDisableSpells(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexDisableSpells);
    }

    __int64 __fastcall LogicTutorialData::isHighlightTargetsOnManaFull(LogicMusicData *this)
    {
      return CSVRow::getBooleanValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicTutorialData::sm_columnIndexHighlightTargetsOnManaFull);
    }

    __int64 __fastcall LogicTutorialData::getButtonTID(LogicMusicData *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicTutorialData::sm_columnIndexButtonTID);
    }

    __int64 __fastcall LogicTutorialData::getBubbleObject(__int64 a1)
    {
      return *(_QWORD *)(a1 + 144);
    }

    __int64 __fastcall LogicTutorialData::getSound(__int64 a1)
    {
      return *(_QWORD *)(a1 + 152);
    }

    __int64 __fastcall LogicTutorialData::getPopupCorner(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicTutorialData::sm_columnIndexPopupCorner);
    }

    __int64 __fastcall LogicTutorialData::getTauntData(__int64 a1)
    {
      return *(_QWORD *)(a1 + 160);
    }

    __int64 __fastcall LogicTutorialData::disableBattleStartScreen(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(
               *(_QWORD *)(a1 + 8),
               (unsigned int)LogicTutorialData::sm_columnIndexDisableBattleStartScreen);
    }

    __int64 __fastcall LogicTutorialData::getBubbleTID(__int64 a1, int a2)
    {
      return *(_QWORD *)(a1 + 184) + 24LL * a2;
    }

    __int64 __fastcall LogicTutorialData::getBubbleTIDCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 196);
    }

    __int64 __fastcall LogicTutorialData::disableBattleMenu(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 176);
    }

    // attributes: thunk
    void __fastcall LogicTutorialData::~LogicTutorialData(LogicTutorialData *a1)
    {
      __ZN17LogicTutorialDataD2Ev(a1);
    }

    void __fastcall LogicTutorialData::~LogicTutorialData(LogicTutorialData *a1)
    {
      LogicTutorialData::~LogicTutorialData(a1);
      operator delete(a1);
    }

    void __fastcall LogicTutorialData::~LogicTutorialData(String *a1)
    {
      *(_QWORD *)&a1->m_length = off_100467CD0;
      LogicArrayList<String>::~LogicArrayList(&a1[7].m_iteratorCacheByteOffset);
      LogicData::~LogicData(a1);
    }

}; // end class LogicTutorialData
