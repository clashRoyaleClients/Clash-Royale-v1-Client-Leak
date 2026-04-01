class LogicLocationData
{
public:

    void __fastcall LogicLocationData::LogicLocationData(LogicLocationData *this, const #1223 *a2, #1043 *a3)
    {
      _QWORD *v4; // x20
      _QWORD *v5; // x20
    
      LogicData::LogicData(this, a2, a3);
      *(_QWORD *)this = off_100463E28;
      *((_QWORD *)this + 13) = 0;
      *((_DWORD *)this + 36) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      v4 = (_QWORD *)operator new(16);
      *v4 = 0;
      v4[1] = 0;
      *((_DWORD *)v4 + 2) = 16;
      *v4 = operator new[](128);
      *((_QWORD *)this + 13) = v4;
      v5 = (_QWORD *)operator new(16);
      *v5 = 0;
      v5[1] = 0;
      *((_DWORD *)v5 + 2) = 4;
      *v5 = operator new[](32);
      *((_QWORD *)this + 14) = v5;
    }

    // attributes: thunk
    void __fastcall LogicLocationData::LogicLocationData(LogicLocationData *this, const #1223 *a2, #1043 *a3)
    {
      __ZN17LogicLocationDataC2EPK6CSVRowP14LogicDataTable(this, a2, a3);
    }

    void __fastcall LogicLocationData::destruct(ChangeAllianceMemberRoleOkMessage *this)
    {
      _QWORD *v2; // x20
      char *v3; // x21
      _QWORD *v4; // x19
    
      LogicData::destruct(this);
      v3 = (char *)this + 104;
      v2 = (_QWORD *)*((_QWORD *)this + 13);
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)this + 13) = 0;
      v4 = (_QWORD *)*((_QWORD *)this + 14);
      if ( v4 )
      {
        if ( *v4 )
          operator delete[](*v4);
        operator delete(v4);
      }
      *((_DWORD *)v3 + 10) = 0;
      *((_QWORD *)v3 + 3) = 0;
      *((_QWORD *)v3 + 4) = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_QWORD *)v3 + 2) = 0;
      *(_QWORD *)v3 = 0;
    }

    __n128 __fastcall LogicLocationData::resetStatics(ChangeAllianceMemberRoleOkMessage *this, const #1224 *a2)
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
      _BOOL8 v65; // x0
      const char *v66; // x2
      _BOOL8 v67; // x0
      const char *v68; // x2
      _BOOL8 v69; // x0
      const char *v70; // x2
      _BOOL8 v71; // x0
      const char *v72; // x2
      _BOOL8 v73; // x0
      const char *v74; // x2
      _BOOL8 v75; // x0
      const char *v76; // x2
      String v78; // [xsp+8h] [xbp-398h] BYREF
      String v79; // [xsp+20h] [xbp-380h] BYREF
      String v80; // [xsp+38h] [xbp-368h] BYREF
      String v81; // [xsp+50h] [xbp-350h] BYREF
      String v82; // [xsp+68h] [xbp-338h] BYREF
      String v83; // [xsp+80h] [xbp-320h] BYREF
      String v84; // [xsp+98h] [xbp-308h] BYREF
      String v85; // [xsp+B0h] [xbp-2F0h] BYREF
      String v86; // [xsp+C8h] [xbp-2D8h] BYREF
      String v87; // [xsp+E0h] [xbp-2C0h] BYREF
      String v88; // [xsp+F8h] [xbp-2A8h] BYREF
      String v89; // [xsp+110h] [xbp-290h] BYREF
      String v90; // [xsp+128h] [xbp-278h] BYREF
      String v91; // [xsp+140h] [xbp-260h] BYREF
      String v92; // [xsp+158h] [xbp-248h] BYREF
      String v93; // [xsp+170h] [xbp-230h] BYREF
      String v94; // [xsp+188h] [xbp-218h] BYREF
      String v95; // [xsp+1A0h] [xbp-200h] BYREF
      String v96; // [xsp+1B8h] [xbp-1E8h] BYREF
      String v97; // [xsp+1D0h] [xbp-1D0h] BYREF
      String v98; // [xsp+1E8h] [xbp-1B8h] BYREF
      String v99; // [xsp+200h] [xbp-1A0h] BYREF
      String v100; // [xsp+218h] [xbp-188h] BYREF
      String v101; // [xsp+230h] [xbp-170h] BYREF
      String v102; // [xsp+248h] [xbp-158h] BYREF
      String v103; // [xsp+260h] [xbp-140h] BYREF
      String v104; // [xsp+278h] [xbp-128h] BYREF
      String v105; // [xsp+290h] [xbp-110h] BYREF
      String v106; // [xsp+2A8h] [xbp-F8h] BYREF
      String v107; // [xsp+2C0h] [xbp-E0h] BYREF
      String v108; // [xsp+2D8h] [xbp-C8h] BYREF
      String v109; // [xsp+2F0h] [xbp-B0h] BYREF
      String v110; // [xsp+308h] [xbp-98h] BYREF
      String v111; // [xsp+320h] [xbp-80h] BYREF
      String v112; // [xsp+338h] [xbp-68h] BYREF
      String v113; // [xsp+350h] [xbp-50h] BYREF
      String v114; // [xsp+368h] [xbp-38h] BYREF
    
      String::String(&v114, "NpcOnly");
      LogicLocationData::sm_columnIndexNpcOnly = CSVTable::getColumnIndexByName(this, &v114);
      String::~String(&v114);
      v3 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexNpcOnly) == 2;
      Debugger::doAssert((Debugger *)v3, (bool)"", v4);
      String::String(&v113, "PvpOnly");
      LogicLocationData::sm_columnIndexPvpOnly = CSVTable::getColumnIndexByName(this, &v113);
      String::~String(&v113);
      v5 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexPvpOnly) == 2;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      String::String(&v112, "ShadowR");
      LogicLocationData::sm_columnIndexShadowR = CSVTable::getColumnIndexByName(this, &v112);
      String::~String(&v112);
      v7 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexShadowR) == 1;
      Debugger::doAssert((Debugger *)v7, (bool)"", v8);
      String::String(&v111, "ShadowG");
      LogicLocationData::sm_columnIndexShadowG = CSVTable::getColumnIndexByName(this, &v111);
      String::~String(&v111);
      v9 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexShadowG) == 1;
      Debugger::doAssert((Debugger *)v9, (bool)"", v10);
      String::String(&v110, "ShadowB");
      LogicLocationData::sm_columnIndexShadowB = CSVTable::getColumnIndexByName(this, &v110);
      String::~String(&v110);
      v11 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexShadowB) == 1;
      Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      String::String(&v109, "ShadowA");
      LogicLocationData::sm_columnIndexShadowA = CSVTable::getColumnIndexByName(this, &v109);
      String::~String(&v109);
      v13 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexShadowA) == 1;
      Debugger::doAssert((Debugger *)v13, (bool)"", v14);
      String::String(&v108, "ShadowOffsetX");
      LogicLocationData::sm_columnIndexShadowOffsetX = CSVTable::getColumnIndexByName(this, &v108);
      String::~String(&v108);
      v15 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexShadowOffsetX) == 1;
      Debugger::doAssert((Debugger *)v15, (bool)"", v16);
      String::String(&v107, "ShadowOffsetY");
      LogicLocationData::sm_columnIndexShadowOffsetY = CSVTable::getColumnIndexByName(this, &v107);
      String::~String(&v107);
      v17 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexShadowOffsetY) == 1;
      Debugger::doAssert((Debugger *)v17, (bool)"", v18);
      String::String(&v106, "ShadowClamp");
      LogicLocationData::sm_columnIndexShadowClamp = CSVTable::getColumnIndexByName(this, &v106);
      String::~String(&v106);
      v19 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexShadowClamp) == 1;
      Debugger::doAssert((Debugger *)v19, (bool)"", v20);
      String::String(&v105, "Music");
      LogicLocationData::sm_columnIndexMusic = CSVTable::getColumnIndexByName(this, &v105);
      String::~String(&v105);
      v21 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexMusic) == 0;
      Debugger::doAssert((Debugger *)v21, (bool)"", v22);
      String::String(&v104, "MusicStartTime");
      LogicLocationData::sm_columnIndexMusicStartTime = CSVTable::getColumnIndexByName(this, &v104);
      String::~String(&v104);
      v23 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexMusicStartTime) == 1;
      Debugger::doAssert((Debugger *)v23, (bool)"", v24);
      String::String(&v103, "ExtraTimeMusic");
      LogicLocationData::sm_columnIndexExtraTimeMusic = CSVTable::getColumnIndexByName(this, &v103);
      String::~String(&v103);
      v25 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexExtraTimeMusic) == 0;
      Debugger::doAssert((Debugger *)v25, (bool)"", v26);
      String::String(&v102, "MatchLength");
      LogicLocationData::sm_columnIndexMatchLength = CSVTable::getColumnIndexByName(this, &v102);
      String::~String(&v102);
      v27 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexMatchLength) == 1;
      Debugger::doAssert((Debugger *)v27, (bool)"", v28);
      String::String(&v101, "WinCondition");
      LogicLocationData::sm_columnIndexWinCondition = CSVTable::getColumnIndexByName(this, &v101);
      String::~String(&v101);
      v29 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexWinCondition) == 0;
      Debugger::doAssert((Debugger *)v29, (bool)"", v30);
      String::String(&v100, "OvertimeSeconds");
      LogicLocationData::sm_columnIndexOvertimeSeconds = CSVTable::getColumnIndexByName(this, &v100);
      String::~String(&v100);
      v31 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexOvertimeSeconds) == 1;
      Debugger::doAssert((Debugger *)v31, (bool)"", v32);
      String::String(&v99, "NoStartScreen");
      LogicLocationData::sm_columnIndexNoStartScreen = CSVTable::getColumnIndexByName(this, &v99);
      String::~String(&v99);
      v33 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexNoStartScreen) == 2;
      Debugger::doAssert((Debugger *)v33, (bool)"", v34);
      String::String(&v98, "NoEndScreen");
      LogicLocationData::sm_columnIndexNoEndScreen = CSVTable::getColumnIndexByName(this, &v98);
      String::~String(&v98);
      v35 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexNoEndScreen) == 2;
      Debugger::doAssert((Debugger *)v35, (bool)"", v36);
      String::String(&v97, "HideTopUI");
      LogicLocationData::sm_columnIndexHideTopUI = CSVTable::getColumnIndexByName(this, &v97);
      String::~String(&v97);
      v37 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexHideTopUI) == 2;
      Debugger::doAssert((Debugger *)v37, (bool)"", v38);
      String::String(&v96, "HideManaBar");
      LogicLocationData::sm_columnIndexHideManaBar = CSVTable::getColumnIndexByName(this, &v96);
      String::~String(&v96);
      v39 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexHideManaBar) == 2;
      Debugger::doAssert((Debugger *)v39, (bool)"", v40);
      String::String(&v95, "EndScreenDelay");
      LogicLocationData::sm_columnIndexEndScreenDelay = CSVTable::getColumnIndexByName(this, &v95);
      String::~String(&v95);
      v41 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexEndScreenDelay) == 1;
      Debugger::doAssert((Debugger *)v41, (bool)"", v42);
      String::String(&v94, "FileName");
      LogicLocationData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(this, &v94);
      String::~String(&v94);
      v43 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexFileName) == 0;
      Debugger::doAssert((Debugger *)v43, (bool)"", v44);
      String::String(&v93, "AmbientSound");
      LogicLocationData::sm_columnIndexAmbientSound = CSVTable::getColumnIndexByName(this, &v93);
      String::~String(&v93);
      v45 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexAmbientSound) == 0;
      Debugger::doAssert((Debugger *)v45, (bool)"", v46);
      String::String(&v92, "Sound");
      LogicLocationData::sm_columnIndexSound = CSVTable::getColumnIndexByName(this, &v92);
      String::~String(&v92);
      v47 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexSound) == 0;
      Debugger::doAssert((Debugger *)v47, (bool)"", v48);
      String::String(&v91, "SoundStartTime");
      LogicLocationData::sm_columnIndexSoundStartTime = CSVTable::getColumnIndexByName(this, &v91);
      String::~String(&v91);
      v49 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexSoundStartTime) == 1;
      Debugger::doAssert((Debugger *)v49, (bool)"", v50);
      String::String(&v90, "SoundPlayOvertime");
      LogicLocationData::sm_columnIndexSoundPlayOvertime = CSVTable::getColumnIndexByName(this, &v90);
      String::~String(&v90);
      v51 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexSoundPlayOvertime) == 2;
      Debugger::doAssert((Debugger *)v51, (bool)"", v52);
      String::String(&v89, "OverlaySC");
      LogicLocationData::sm_columnIndexOverlaySC = CSVTable::getColumnIndexByName(this, &v89);
      String::~String(&v89);
      v53 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexOverlaySC) == 0;
      Debugger::doAssert((Debugger *)v53, (bool)"", v54);
      String::String(&v88, "OverlayExportName");
      LogicLocationData::sm_columnIndexOverlayExportName = CSVTable::getColumnIndexByName(this, &v88);
      String::~String(&v88);
      v55 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexOverlayExportName) == 0;
      Debugger::doAssert((Debugger *)v55, (bool)"", v56);
      String::String(&v87, "CrowdEffects");
      LogicLocationData::sm_columnIndexCrowdEffectsEnabled = CSVTable::getColumnIndexByName(this, &v87);
      String::~String(&v87);
      v57 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCrowdEffectsEnabled) == 2;
      Debugger::doAssert((Debugger *)v57, (bool)"", v58);
      String::String(&v86, "CloudFileName");
      LogicLocationData::sm_columnIndexCloudSC = CSVTable::getColumnIndexByName(this, &v86);
      String::~String(&v86);
      v59 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudSC) == 0;
      Debugger::doAssert((Debugger *)v59, (bool)"", v60);
      String::String(&v85, "CloudExportName");
      LogicLocationData::sm_columnIndexCloudExportName = CSVTable::getColumnIndexByName(this, &v85);
      String::~String(&v85);
      v61 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudExportName) == 0;
      Debugger::doAssert((Debugger *)v61, (bool)"", v62);
      String::String(&v84, "CloudMinAlpha");
      LogicLocationData::sm_columnIndexCloudMinAlpha = CSVTable::getColumnIndexByName(this, &v84);
      String::~String(&v84);
      v63 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudMinAlpha) == 1;
      Debugger::doAssert((Debugger *)v63, (bool)"", v64);
      String::String(&v83, "CloudMaxAlpha");
      LogicLocationData::sm_columnIndexCloudMaxAlpha = CSVTable::getColumnIndexByName(this, &v83);
      String::~String(&v83);
      v65 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudMaxAlpha) == 1;
      Debugger::doAssert((Debugger *)v65, (bool)"", v66);
      String::String(&v82, "CloudMinScale");
      LogicLocationData::sm_columnIndexCloudMinScale = CSVTable::getColumnIndexByName(this, &v82);
      String::~String(&v82);
      v67 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudMinScale) == 1;
      Debugger::doAssert((Debugger *)v67, (bool)"", v68);
      String::String(&v81, "CloudMaxScale");
      LogicLocationData::sm_columnIndexCloudMaxScale = CSVTable::getColumnIndexByName(this, &v81);
      String::~String(&v81);
      v69 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudMaxScale) == 1;
      Debugger::doAssert((Debugger *)v69, (bool)"", v70);
      String::String(&v80, "CloudMinSpeed");
      LogicLocationData::sm_columnIndexCloudMinSpeed = CSVTable::getColumnIndexByName(this, &v80);
      String::~String(&v80);
      v71 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudMinSpeed) == 1;
      Debugger::doAssert((Debugger *)v71, (bool)"", v72);
      String::String(&v79, "CloudMaxSpeed");
      LogicLocationData::sm_columnIndexCloudMaxSpeed = CSVTable::getColumnIndexByName(this, &v79);
      String::~String(&v79);
      v73 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudMaxSpeed) == 1;
      Debugger::doAssert((Debugger *)v73, (bool)"", v74);
      String::String(&v78, "CloudCount");
      LogicLocationData::sm_columnIndexCloudCount = CSVTable::getColumnIndexByName(this, &v78);
      String::~String(&v78);
      v75 = (unsigned int)CSVTable::getColumnType(this, LogicLocationData::sm_columnIndexCloudCount) == 1;
      return Debugger::doAssert((Debugger *)v75, (bool)"", v76);
    }

    void __fastcall LogicLocationData::createReferences(ChangeAllianceMemberRoleOkMessage *this)
    {
      ChangeAllianceMemberRoleOkMessage *Table; // x0
      const #1224 *v3; // x1
      __int64 ValueAt; // x20
      const String *v5; // x1
      LogicKickAllianceMemberCommand *v6; // x0
      const AreaEffectObject *v7; // x2
      int ArraySizeAt; // w20
      const char *v9; // x1
      __int64 v10; // x0
      __int64 v11; // x21
      LogicDataTables *v12; // x0
      __int64 v13; // x22
      const LogicData *v14; // x2
      LogicDataTables *v15; // x0
      const LogicData *v16; // x2
      __int64 v17; // x0
      int v18; // w20
      const char *v19; // x1
      __int64 v20; // x21
      LogicKickAllianceMemberCommand *v21; // x0
      __int64 v22; // x22
      const AreaEffectObject *v23; // x2
      __int64 SoundByName; // [xsp+8h] [xbp-58h] BYREF
      __int64 MusicByName; // [xsp+10h] [xbp-50h] BYREF
      String v26; // [xsp+18h] [xbp-48h] BYREF
    
      LogicData::createReferences(this);
      if ( !(unsigned int)CSVRow::getRowOffset(*((_QWORD *)this + 1)) )
      {
        Table = (ChangeAllianceMemberRoleOkMessage *)CSVRow::getTable(*((_QWORD *)this + 1));
        LogicLocationData::resetStatics(Table, v3);
      }
      *((_DWORD *)this + 36) = 0;
      ValueAt = CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexWinCondition);
      if ( (unsigned int)String::equalsIgnoreCase(ValueAt, "Normal") )
      {
        *((_DWORD *)this + 36) = 0;
      }
      else
      {
        operator+(&v26, "Invalid WinCondition ", ValueAt);
        Debugger::warning((__siginfo *)&v26, v5);
        String::~String(&v26);
      }
      *((_QWORD *)this + 15) = 0;
      v6 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                               *((_QWORD *)this + 1),
                                               (unsigned int)LogicLocationData::sm_columnIndexAmbientSound);
      *((_QWORD *)this + 16) = LogicDataTables::getSoundByName(v6, (const String *)this, v7);
      ArraySizeAt = CSVRow::getArraySizeAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexMusic);
      if ( ArraySizeAt != (unsigned int)CSVRow::getArraySizeAt(
                                          *((_QWORD *)this + 1),
                                          (unsigned int)LogicLocationData::sm_columnIndexMusicStartTime) )
        Debugger::error((__siginfo *)"locations.csv: 'Music' and 'MusicStartTime' array size needs to match", v9);
      *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) = 0;
      v10 = *((_QWORD *)this + 1);
      if ( ArraySizeAt >= 1 )
      {
        v11 = 0;
        do
        {
          v12 = (LogicDataTables *)CSVRow::getValueAt(v10, (unsigned int)LogicLocationData::sm_columnIndexMusic, v11);
          v13 = *((_QWORD *)this + 13);
          MusicByName = LogicDataTables::getMusicByName(v12, (const String *)this, v14);
          LogicArrayList<LogicMusicData const*>::add(v13, &MusicByName);
          v11 = (unsigned int)(v11 + 1);
          v10 = *((_QWORD *)this + 1);
        }
        while ( ArraySizeAt != (_DWORD)v11 );
      }
      v15 = (LogicDataTables *)CSVRow::getValueAt(v10, (unsigned int)LogicLocationData::sm_columnIndexExtraTimeMusic);
      if ( *(_DWORD *)v15 )
        v17 = LogicDataTables::getMusicByName(v15, (const String *)this, v16);
      else
        v17 = 0;
      *((_QWORD *)this + 17) = v17;
      v18 = CSVRow::getArraySizeAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexSound);
      if ( v18 != (unsigned int)CSVRow::getArraySizeAt(
                                  *((_QWORD *)this + 1),
                                  (unsigned int)LogicLocationData::sm_columnIndexSoundStartTime) )
        Debugger::error((__siginfo *)"locations.csv: 'Music' and 'MusicStartTime' array size needs to match", v19);
      *(_DWORD *)(*((_QWORD *)this + 14) + 12LL) = 0;
      if ( v18 >= 1 )
      {
        v20 = 0;
        do
        {
          v21 = (LogicKickAllianceMemberCommand *)CSVRow::getValueAt(
                                                    *((_QWORD *)this + 1),
                                                    (unsigned int)LogicLocationData::sm_columnIndexSound,
                                                    v20);
          v22 = *((_QWORD *)this + 14);
          SoundByName = LogicDataTables::getSoundByName(v21, (const String *)this, v23);
          LogicArrayList<LogicSoundData const*>::add(v22, &SoundByName);
          v20 = (unsigned int)(v20 + 1);
        }
        while ( v18 != (_DWORD)v20 );
      }
    }

    __int64 __fastcall LogicLocationData::npcOnly(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexNpcOnly);
    }

    __int64 __fastcall LogicLocationData::getShadowR(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexShadowR);
    }

    __int64 __fastcall LogicLocationData::getShadowG(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexShadowG);
    }

    __int64 __fastcall LogicLocationData::getShadowB(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexShadowB);
    }

    __int64 __fastcall LogicLocationData::getShadowA(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexShadowA);
    }

    __int64 __fastcall LogicLocationData::getShadowOffsetX(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexShadowOffsetX);
    }

    __int64 __fastcall LogicLocationData::getShadowOffsetY(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexShadowOffsetY);
    }

    __int64 __fastcall LogicLocationData::getShadowClamp(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexShadowClamp);
    }

    __int64 __fastcall LogicLocationData::getMusicCount(ChangeAllianceMemberRoleOkMessage *this)
    {
      return *(unsigned int *)(*((_QWORD *)this + 13) + 12LL);
    }

    __int64 __fastcall LogicLocationData::getMusic(ChangeAllianceMemberRoleOkMessage *this, int a2)
    {
      return *(_QWORD *)(**((_QWORD **)this + 13) + 8LL * a2);
    }

    __int64 __fastcall LogicLocationData::getExtraTimeMusic(ChangeAllianceMemberRoleOkMessage *this)
    {
      return *((_QWORD *)this + 17);
    }

    __int64 __fastcall LogicLocationData::getMusicStartTime(ChangeAllianceMemberRoleOkMessage *this, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicLocationData::sm_columnIndexMusicStartTime,
               a2);
    }

    __int64 __fastcall LogicLocationData::getSoundCount(ChangeAllianceMemberRoleOkMessage *this)
    {
      return *(unsigned int *)(*((_QWORD *)this + 14) + 12LL);
    }

    __int64 __fastcall LogicLocationData::getSound(ChangeAllianceMemberRoleOkMessage *this, int a2)
    {
      return *(_QWORD *)(**((_QWORD **)this + 14) + 8LL * a2);
    }

    __int64 __fastcall LogicLocationData::getSoundStartTime(ChangeAllianceMemberRoleOkMessage *this, __int64 a2)
    {
      return CSVRow::getIntegerValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicLocationData::sm_columnIndexSoundStartTime,
               a2);
    }

    __int64 __fastcall LogicLocationData::getSoundPlayOvertime(ChangeAllianceMemberRoleOkMessage *this, __int64 a2)
    {
      return CSVRow::getBooleanValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicLocationData::sm_columnIndexSoundPlayOvertime,
               a2);
    }

    __int64 __fastcall LogicLocationData::getTilemapData(ChangeAllianceMemberRoleOkMessage *this)
    {
      LogicDataTables *InstanceID; // x0
      int v2; // w1
    
      InstanceID = (LogicDataTables *)LogicData::getInstanceID(this);
      return LogicDataTables::getTilemapAt(InstanceID, v2);
    }

    __int64 __fastcall LogicLocationData::getTilemapFileName(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexFileName);
    }

    __int64 __fastcall LogicLocationData::getOvertimeLengthSeconds(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicLocationData::sm_columnIndexOvertimeSeconds);
    }

    __int64 __fastcall LogicLocationData::getMatchLengthSeconds(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexMatchLength);
    }

    __int64 __fastcall LogicLocationData::getNoStartScreen(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexNoStartScreen);
    }

    __int64 __fastcall LogicLocationData::getNoEndScreen(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getBooleanValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexNoEndScreen);
    }

    __int64 __fastcall LogicLocationData::isCrowdEffectsEnabled(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getBooleanValueAt(
               *((_QWORD *)this + 1),
               (unsigned int)LogicLocationData::sm_columnIndexCrowdEffectsEnabled);
    }

    __int64 __fastcall LogicLocationData::getEndScreenDelay(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexEndScreenDelay);
    }

    __int64 __fastcall LogicLocationData::setNPC(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 120) = a2;
      return result;
    }

    __int64 __fastcall LogicLocationData::getAmbientSound(ChangeAllianceMemberRoleOkMessage *this)
    {
      return *((_QWORD *)this + 16);
    }

    __int64 __fastcall LogicLocationData::getOverlayFileName(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexOverlaySC);
    }

    __int64 __fastcall LogicLocationData::getOverlayExportName(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexOverlayExportName);
    }

    __int64 __fastcall LogicLocationData::getCloudClipCount(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getArraySizeAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudSC);
    }

    __int64 __fastcall LogicLocationData::getCloudFileName(ChangeAllianceMemberRoleOkMessage *this, __int64 a2)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudSC, a2);
    }

    __int64 __fastcall LogicLocationData::getCloudExportName(ChangeAllianceMemberRoleOkMessage *this, __int64 a2)
    {
      return CSVRow::getValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudExportName, a2);
    }

    __int64 __fastcall LogicLocationData::getCloudMinAlpha(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudMinAlpha);
    }

    __int64 __fastcall LogicLocationData::getCloudMaxAlpha(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudMaxAlpha);
    }

    __int64 __fastcall LogicLocationData::getCloudMinScale(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudMinScale);
    }

    __int64 __fastcall LogicLocationData::getCloudMaxScale(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudMaxScale);
    }

    __int64 __fastcall LogicLocationData::getCloudMinSpeed(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudMinSpeed);
    }

    __int64 __fastcall LogicLocationData::getCloudMaxSpeed(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudMaxSpeed);
    }

    __int64 __fastcall LogicLocationData::getCloudCount(ChangeAllianceMemberRoleOkMessage *this)
    {
      return CSVRow::getIntegerValueAt(*((_QWORD *)this + 1), (unsigned int)LogicLocationData::sm_columnIndexCloudCount);
    }

    // attributes: thunk
    void __fastcall LogicLocationData::~LogicLocationData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicLocationData::~LogicLocationData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicLocationData
