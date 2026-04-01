class LogicGlobals
{
public:

    void __fastcall LogicGlobals::LogicGlobals(LogicGlobals *this, const #1224 *a2, int a3)
    {
      LogicGameObjectListener *v4; // x20
    
      LogicDataTable::LogicDataTable(this, a2, a3);
      *((_DWORD *)this + 121) = 0;
      *(_QWORD *)this = off_100464A78;
      *(_QWORD *)((char *)this + 404) = 0;
      *((_QWORD *)this + 61) = 0;
      *(_QWORD *)((char *)this + 68) = 0;
      *(_QWORD *)((char *)this + 60) = 0;
      memset((char *)this + 80, 0, 0xDCu);
      memset((char *)this + 304, 0, 0x61u);
      memset((char *)this + 416, 0, 0x41u);
      v4 = (LogicGameObjectListener *)operator new(8);
      LogicGameObjectListener::LogicGameObjectListener(v4);
      *((_QWORD *)this + 15) = v4;
    }

    // attributes: thunk
    void __fastcall LogicGlobals::LogicGlobals(LogicGlobals *this, const #1224 *a2, int a3)
    {
      __ZN12LogicGlobalsC2EPK8CSVTablei(this, a2, a3);
    }

    void *__fastcall LogicGlobals::destruct(HomeScreen *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      LogicDataTable::destruct(this);
      v2 = *((_QWORD *)this + 15);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        v3 = *((_QWORD *)this + 15);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *((_QWORD *)this + 15) = 0;
      }
      *((_DWORD *)this + 121) = 0;
      *(_QWORD *)((char *)this + 404) = 0;
      *((_QWORD *)this + 61) = 0;
      *(_QWORD *)((char *)this + 68) = 0;
      *(_QWORD *)((char *)this + 60) = 0;
      memset((char *)this + 80, 0, 0xDCu);
      memset((char *)this + 304, 0, 0x61u);
      return memset((char *)this + 416, 0, 0x41u);
    }

    void __fastcall LogicGlobals::createReferences(HomeScreen *this)
    {
      const char *v2; // x1
      const char *v3; // x1
      __int64 v4; // x0
      const LogicData *v5; // x2
      String v6; // [xsp+0h] [xbp-9B0h] BYREF
      String v7; // [xsp+18h] [xbp-998h] BYREF
      String v8; // [xsp+30h] [xbp-980h] BYREF
      String v9; // [xsp+48h] [xbp-968h] BYREF
      String v10; // [xsp+60h] [xbp-950h] BYREF
      String v11; // [xsp+78h] [xbp-938h] BYREF
      String v12; // [xsp+90h] [xbp-920h] BYREF
      String v13; // [xsp+A8h] [xbp-908h] BYREF
      String v14; // [xsp+C0h] [xbp-8F0h] BYREF
      String v15; // [xsp+D8h] [xbp-8D8h] BYREF
      String v16; // [xsp+F0h] [xbp-8C0h] BYREF
      String v17; // [xsp+108h] [xbp-8A8h] BYREF
      String v18; // [xsp+120h] [xbp-890h] BYREF
      String v19; // [xsp+138h] [xbp-878h] BYREF
      String v20; // [xsp+150h] [xbp-860h] BYREF
      String v21; // [xsp+168h] [xbp-848h] BYREF
      String v22; // [xsp+180h] [xbp-830h] BYREF
      String v23; // [xsp+198h] [xbp-818h] BYREF
      String v24; // [xsp+1B0h] [xbp-800h] BYREF
      String v25; // [xsp+1C8h] [xbp-7E8h] BYREF
      String v26; // [xsp+1E0h] [xbp-7D0h] BYREF
      String v27; // [xsp+1F8h] [xbp-7B8h] BYREF
      String v28; // [xsp+210h] [xbp-7A0h] BYREF
      String v29; // [xsp+228h] [xbp-788h] BYREF
      String v30; // [xsp+240h] [xbp-770h] BYREF
      String v31; // [xsp+258h] [xbp-758h] BYREF
      String v32; // [xsp+270h] [xbp-740h] BYREF
      String v33; // [xsp+288h] [xbp-728h] BYREF
      String v34; // [xsp+2A0h] [xbp-710h] BYREF
      String v35; // [xsp+2B8h] [xbp-6F8h] BYREF
      String v36; // [xsp+2D0h] [xbp-6E0h] BYREF
      String v37; // [xsp+2E8h] [xbp-6C8h] BYREF
      String v38; // [xsp+300h] [xbp-6B0h] BYREF
      String v39; // [xsp+318h] [xbp-698h] BYREF
      String v40; // [xsp+330h] [xbp-680h] BYREF
      String v41; // [xsp+348h] [xbp-668h] BYREF
      String v42; // [xsp+360h] [xbp-650h] BYREF
      String v43; // [xsp+378h] [xbp-638h] BYREF
      String v44; // [xsp+390h] [xbp-620h] BYREF
      String v45; // [xsp+3A8h] [xbp-608h] BYREF
      String v46; // [xsp+3C0h] [xbp-5F0h] BYREF
      String v47; // [xsp+3D8h] [xbp-5D8h] BYREF
      String v48; // [xsp+3F0h] [xbp-5C0h] BYREF
      String v49; // [xsp+408h] [xbp-5A8h] BYREF
      String v50; // [xsp+420h] [xbp-590h] BYREF
      String v51; // [xsp+438h] [xbp-578h] BYREF
      String v52; // [xsp+450h] [xbp-560h] BYREF
      String v53; // [xsp+468h] [xbp-548h] BYREF
      String v54; // [xsp+480h] [xbp-530h] BYREF
      String v55; // [xsp+498h] [xbp-518h] BYREF
      String v56; // [xsp+4B0h] [xbp-500h] BYREF
      String v57; // [xsp+4C8h] [xbp-4E8h] BYREF
      String v58; // [xsp+4E0h] [xbp-4D0h] BYREF
      String v59; // [xsp+4F8h] [xbp-4B8h] BYREF
      String v60; // [xsp+510h] [xbp-4A0h] BYREF
      String v61; // [xsp+528h] [xbp-488h] BYREF
      String v62; // [xsp+540h] [xbp-470h] BYREF
      String v63; // [xsp+558h] [xbp-458h] BYREF
      String v64; // [xsp+570h] [xbp-440h] BYREF
      String v65; // [xsp+588h] [xbp-428h] BYREF
      String v66; // [xsp+5A0h] [xbp-410h] BYREF
      String v67; // [xsp+5B8h] [xbp-3F8h] BYREF
      String v68; // [xsp+5D0h] [xbp-3E0h] BYREF
      String v69; // [xsp+5E8h] [xbp-3C8h] BYREF
      String v70; // [xsp+600h] [xbp-3B0h] BYREF
      String v71; // [xsp+618h] [xbp-398h] BYREF
      String v72; // [xsp+630h] [xbp-380h] BYREF
      String v73; // [xsp+648h] [xbp-368h] BYREF
      String v74; // [xsp+660h] [xbp-350h] BYREF
      String v75; // [xsp+678h] [xbp-338h] BYREF
      String v76; // [xsp+690h] [xbp-320h] BYREF
      String v77; // [xsp+6A8h] [xbp-308h] BYREF
      String v78; // [xsp+6C0h] [xbp-2F0h] BYREF
      String v79; // [xsp+6D8h] [xbp-2D8h] BYREF
      String v80; // [xsp+6F0h] [xbp-2C0h] BYREF
      String v81; // [xsp+708h] [xbp-2A8h] BYREF
      String v82; // [xsp+720h] [xbp-290h] BYREF
      String v83; // [xsp+738h] [xbp-278h] BYREF
      String v84; // [xsp+750h] [xbp-260h] BYREF
      String v85; // [xsp+768h] [xbp-248h] BYREF
      String v86; // [xsp+780h] [xbp-230h] BYREF
      String v87; // [xsp+798h] [xbp-218h] BYREF
      String v88; // [xsp+7B0h] [xbp-200h] BYREF
      String v89; // [xsp+7C8h] [xbp-1E8h] BYREF
      String v90; // [xsp+7E0h] [xbp-1D0h] BYREF
      String v91; // [xsp+7F8h] [xbp-1B8h] BYREF
      String v92; // [xsp+810h] [xbp-1A0h] BYREF
      String v93; // [xsp+828h] [xbp-188h] BYREF
      String v94; // [xsp+840h] [xbp-170h] BYREF
      String v95; // [xsp+858h] [xbp-158h] BYREF
      String v96; // [xsp+870h] [xbp-140h] BYREF
      String v97; // [xsp+888h] [xbp-128h] BYREF
      String v98; // [xsp+8A0h] [xbp-110h] BYREF
      String v99; // [xsp+8B8h] [xbp-F8h] BYREF
      String v100; // [xsp+8D0h] [xbp-E0h] BYREF
      String v101; // [xsp+8E8h] [xbp-C8h] BYREF
      String v102; // [xsp+900h] [xbp-B0h] BYREF
      String v103; // [xsp+918h] [xbp-98h] BYREF
      String v104; // [xsp+930h] [xbp-80h] BYREF
      String v105; // [xsp+948h] [xbp-68h] BYREF
      String v106; // [xsp+960h] [xbp-50h] BYREF
      String v107; // [xsp+978h] [xbp-38h] BYREF
    
      LogicDataTable::createReferences(this);
      String::String(&v107, "ACHIEVEMENTS_ENABLED");
      *((_BYTE *)this + 399) = *(_BYTE *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v107,
                                            0)
                                        + 160);
      String::~String(&v107);
      String::String(&v106, "CLAN_TOURNAMENT_ENABLED");
      *((_BYTE *)this + 398) = *(_BYTE *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v106,
                                            0)
                                        + 160);
      String::~String(&v106);
      String::String(&v105, "STARTING_DIAMONDS");
      *((_DWORD *)this + 67) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v105,
                                             0)
                                         + 100);
      String::~String(&v105);
      String::String(&v104, "MAX_MANA");
      *((_DWORD *)this + 37) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v104,
                                             0)
                                         + 100);
      String::~String(&v104);
      String::String(&v103, "START_MANA");
      *((_DWORD *)this + 38) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v103,
                                             0)
                                         + 100);
      String::~String(&v103);
      if ( *((_DWORD *)this + 38) > *((_DWORD *)this + 37) )
        Debugger::warning((__siginfo *)"Starting mana is greater than max mana", v2);
      String::String(&v102, "TUTORIAL_ARENA_MATCH_COUNT");
      *((_DWORD *)this + 101) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v102,
                                              0)
                                          + 100);
      String::~String(&v102);
      String::String(&v101, "TUTORIAL_UPGRADE_COUNT");
      *((_DWORD *)this + 102) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v101,
                                              0)
                                          + 100);
      String::~String(&v101);
      String::String(&v100, "CROWN_CHEST_CROWN_COUNT");
      *((_DWORD *)this + 33) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v100,
                                             0)
                                         + 100);
      String::~String(&v100);
      String::String(&v99, "CROWN_CHEST_COOLDOWN_HOURS");
      *((_DWORD *)this + 34) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v99,
                                             0)
                                         + 100);
      String::~String(&v99);
      String::String(&v98, "REQUEST_SPELLS_COOLDOWN_MINUTES");
      *((_DWORD *)this + 35) = 60
                             * *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v98,
                                             0)
                                         + 100);
      String::~String(&v98);
      String::String(&v97, "LEAVE_ALLIANCE_DONATION_COOLDOWN_MINUTES");
      *((_DWORD *)this + 27) = 60
                             * *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v97,
                                             0)
                                         + 100);
      String::~String(&v97);
      String::String(&v96, "MELEE_RANGE_LIMIT");
      *((_DWORD *)this + 44) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v96,
                                             0)
                                         + 100);
      String::~String(&v96);
      String::String(&v95, "MANA_REGEN_MS");
      *((_DWORD *)this + 39) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v95,
                                             0)
                                         + 100);
      String::~String(&v95);
      String::String(&v94, "MANA_REGEN_MS_END");
      *((_DWORD *)this + 40) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v94,
                                             0)
                                         + 100);
      String::~String(&v94);
      String::String(&v93, "MANA_REGEN_MS_OVERTIME");
      *((_DWORD *)this + 41) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v93,
                                             0)
                                         + 100);
      String::~String(&v93);
      String::String(&v92, "MANA_SPEED_UP_WHEN_REMAINING_SECONDS");
      *((_DWORD *)this + 42) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v92,
                                             0)
                                         + 100);
      String::~String(&v92);
      String::String(&v91, "MANA_REGEN_PENALTY_FROM_TOWER");
      *((_DWORD *)this + 43) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v91,
                                             0)
                                         + 100);
      String::~String(&v91);
      String::String(&v90, "REDUCED_TOWER_DAMAGE_PERCENT");
      *((_DWORD *)this + 50) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v90,
                                             0)
                                         + 100);
      String::~String(&v90);
      String::String(&v89, "TARGET_SCORE");
      *((_DWORD *)this + 69) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v89,
                                             0)
                                         + 100);
      String::~String(&v89);
      String::String(&v88, "MINIMUM_SCORE");
      *((_DWORD *)this + 29) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v88,
                                             0)
                                         + 100);
      String::~String(&v88);
      String::String(&v87, "K_FACTOR");
      *((_DWORD *)this + 70) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v87,
                                             0)
                                         + 100);
      String::~String(&v87);
      String::String(&v86, "MINIMUM_CHANGE_FOR_REAL_BATTLE");
      *((_DWORD *)this + 71) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v86,
                                             0)
                                         + 100);
      String::~String(&v86);
      String::String(&v85, "DAMAGE_NOTICE_TIME");
      *((_DWORD *)this + 72) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v85,
                                             0)
                                         + 100);
      String::~String(&v85);
      String::String(&v84, "PROTECTION_CAP_PERCENTAGE");
      *((_DWORD *)this + 32) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v84,
                                             0)
                                         + 100);
      String::~String(&v84);
      String::String(&v83, "PANIC_RUN_MIN_TIME");
      *((_DWORD *)this + 15) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v83,
                                             0)
                                         + 100);
      String::~String(&v83);
      String::String(&v82, "PANIC_RUN_MAX_TIME");
      *((_DWORD *)this + 16) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v82,
                                             0)
                                         + 100);
      String::~String(&v82);
      String::String(&v81, "PANIC_SPEED_MULTIPLIER");
      *((_DWORD *)this + 17) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v81,
                                             0)
                                         + 100);
      String::~String(&v81);
      String::String(&v80, "MAX_RESOURCE_PURCHASE_SIZE");
      *((_DWORD *)this + 121) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v80,
                                              0)
                                          + 100);
      String::~String(&v80);
      String::String(&v79, "TV_WEIGHT_TOP3_VS_TOP3");
      *((_DWORD *)this + 57) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v79,
                                             0)
                                         + 100);
      String::~String(&v79);
      String::String(&v78, "TV_WEIGHT_TOP3_VS_TOP10");
      *((_DWORD *)this + 58) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v78,
                                             0)
                                         + 100);
      String::~String(&v78);
      String::String(&v77, "TV_WEIGHT_TOP10_VS_TOP10");
      *((_DWORD *)this + 59) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v77,
                                             0)
                                         + 100);
      String::~String(&v77);
      String::String(&v76, "TV_WEIGHT_TOP10_VS_TOP20");
      *((_DWORD *)this + 60) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v76,
                                             0)
                                         + 100);
      String::~String(&v76);
      String::String(&v75, "TV_WEIGHT_TOP20_VS_TOP20");
      *((_DWORD *)this + 61) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v75,
                                             0)
                                         + 100);
      String::~String(&v75);
      String::String(&v74, "TV_WEIGHT_TOP20_VS_TOP50");
      *((_DWORD *)this + 62) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v74,
                                             0)
                                         + 100);
      String::~String(&v74);
      String::String(&v73, "TV_WEIGHT_TOP50_VS_TOP50");
      *((_DWORD *)this + 63) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v73,
                                             0)
                                         + 100);
      String::~String(&v73);
      String::String(&v72, "TV_WEIGHT_OTHERS");
      *((_DWORD *)this + 64) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v72,
                                             0)
                                         + 100);
      String::~String(&v72);
      String::String(&v71, "TV_WEIGTH_NOT_UNDERDOG");
      *((_DWORD *)this + 65) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v71,
                                             0)
                                         + 100);
      String::~String(&v71);
      String::String(&v70, "TV_WEIGHT_WINNER_ONE_CROWN_BEHIND");
      *((_DWORD *)this + 66) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v70,
                                             0)
                                         + 100);
      String::~String(&v70);
      String::String(&v69, "MAX_MESSAGE_LENGTH");
      *((_DWORD *)this + 73) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v69,
                                             0)
                                         + 100);
      String::~String(&v69);
      String::String(&v68, "MAX_ALLIANCE_MAIL_LENGTH");
      *((_DWORD *)this + 74) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v68,
                                             0)
                                         + 100);
      String::~String(&v68);
      String::String(&v67, "ALLIANCE_CREATE_COST");
      *((_DWORD *)this + 91) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v67,
                                             0)
                                         + 100);
      String::~String(&v67);
      String::String(&v66, "END_TIMER_ANIM_MS");
      *((_DWORD *)this + 36) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v66,
                                             0)
                                         + 100);
      String::~String(&v66);
      String::String(&v65, "NEXT_SPELL_COOLDOWN_MILLISECONDS");
      *((_DWORD *)this + 78) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v65,
                                             0)
                                         + 100);
      String::~String(&v65);
      String::String(&v64, "NEXT_SPELL_COOLDOWN_MILLISECONDS_BOOST");
      *((_DWORD *)this + 79) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v64,
                                             0)
                                         + 100);
      String::~String(&v64);
      String::String(&v63, "NEXT_SPELL_COOLDOWN_MILLISECONDS_OVERTIME");
      *((_DWORD *)this + 80) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v63,
                                             0)
                                         + 100);
      String::~String(&v63);
      String::String(&v62, "GAMBLE_PRICE_COOLDOWN_MINUTES");
      *((_DWORD *)this + 28) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v62,
                                             0)
                                         + 100);
      String::~String(&v62);
      String::String(&v61, "ALLIANCE_SCORE_CONTRIBUTION_PERCENTAGE");
      *((_QWORD *)this + 38) = (*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                 this,
                                 &v61,
                                 0)
                             + 144;
      String::~String(&v61);
      String::String(&v60, "FREE_CHEST_DIAMONDS");
      *((_QWORD *)this + 11) = (*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                 this,
                                 &v60,
                                 0)
                             + 144;
      String::~String(&v60);
      String::String(&v59, "CROWN_CHEST_DIAMONDS");
      *((_QWORD *)this + 10) = (*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                 this,
                                 &v59,
                                 0)
                             + 144;
      String::~String(&v59);
      if ( !*(_DWORD *)(*((_QWORD *)this + 38) + 12LL) )
        Debugger::warning((__siginfo *)"ALLIANCE_SCORE_CONTRIBUTION_PERCENTAGE is not defined in Globals.csv", v3);
      String::String(&v58, "STARTING_ARENA");
      v4 = (*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v58, 0);
      *((_QWORD *)this + 52) = LogicDataTables::getArenaByName((LogicDataTables *)(v4 + 104), 0, v5);
      String::~String(&v58);
      String::String(&v57, "SPEED_UP_DIAMOND_COST_1_MIN");
      *((_DWORD *)this + 45) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v57,
                                             0)
                                         + 100);
      String::~String(&v57);
      String::String(&v56, "SPEED_UP_DIAMOND_COST_1_HOUR");
      *((_DWORD *)this + 46) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v56,
                                             0)
                                         + 100);
      String::~String(&v56);
      String::String(&v55, "SPEED_UP_DIAMOND_COST_24_HOURS");
      *((_DWORD *)this + 47) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v55,
                                             0)
                                         + 100);
      String::~String(&v55);
      String::String(&v54, "SPEED_UP_DIAMOND_COST_1_WEEK");
      *((_DWORD *)this + 48) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v54,
                                             0)
                                         + 100);
      String::~String(&v54);
      String::String(&v53, "BATTLE_END_EXP_REWARD");
      *((_DWORD *)this + 90) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v53,
                                             0)
                                         + 100);
      String::~String(&v53);
      String::String(&v52, "DAMAGE_INCREASE_PERCENT_PER_SPELL_LEVEL");
      *((_DWORD *)this + 51) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v52,
                                             0)
                                         + 100);
      String::~String(&v52);
      String::String(&v51, "HITPOINT_INCREASE_PERCENT_PER_SPELL_LEVEL");
      *((_DWORD *)this + 52) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v51,
                                             0)
                                         + 100);
      String::~String(&v51);
      String::String(&v50, "DAMAGE_INCREASE_PERCENT_PER_KING_LEVEL");
      *((_DWORD *)this + 53) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v50,
                                             0)
                                         + 100);
      String::~String(&v50);
      String::String(&v49, "HITPOINT_INCREASE_PERCENT_PER_KING_LEVEL");
      *((_DWORD *)this + 54) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v49,
                                             0)
                                         + 100);
      String::~String(&v49);
      String::String(&v48, "DAMAGE_INCREASE_PERCENT_PER_TOWER_LEVEL");
      *((_DWORD *)this + 55) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v48,
                                             0)
                                         + 100);
      String::~String(&v48);
      String::String(&v47, "HITPOINT_INCREASE_PERCENT_PER_TOWER_LEVEL");
      *((_DWORD *)this + 56) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v47,
                                             0)
                                         + 100);
      String::~String(&v47);
      String::String(&v46, "TUTORIAL_MAX_SPELL_CAST_DISTANCE_TILES");
      *((_DWORD *)this + 81) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v46,
                                             0)
                                         + 100);
      String::~String(&v46);
      String::String(&v45, "SPEED_UP_FREE_SECONDS");
      *((_DWORD *)this + 82) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v45,
                                             0)
                                         + 100);
      String::~String(&v45);
      String::String(&v44, "RESOURCE_DIAMOND_COST_1");
      *((_DWORD *)this + 83) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v44,
                                             0)
                                         + 100);
      String::~String(&v44);
      String::String(&v43, "RESOURCE_DIAMOND_COST_10");
      *((_DWORD *)this + 84) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v43,
                                             0)
                                         + 100);
      String::~String(&v43);
      String::String(&v42, "RESOURCE_DIAMOND_COST_100");
      *((_DWORD *)this + 85) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v42,
                                             0)
                                         + 100);
      String::~String(&v42);
      String::String(&v41, "RESOURCE_DIAMOND_COST_1000");
      *((_DWORD *)this + 86) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v41,
                                             0)
                                         + 100);
      String::~String(&v41);
      String::String(&v40, "RESOURCE_DIAMOND_COST_10000");
      *((_DWORD *)this + 87) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v40,
                                             0)
                                         + 100);
      String::~String(&v40);
      String::String(&v39, "RESOURCE_DIAMOND_COST_100000");
      *((_DWORD *)this + 88) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v39,
                                             0)
                                         + 100);
      String::~String(&v39);
      String::String(&v38, "RESOURCE_DIAMOND_COST_1000000");
      *((_DWORD *)this + 89) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v38,
                                             0)
                                         + 100);
      String::~String(&v38);
      String::String(&v37, "STARTING_GOLD");
      *((_DWORD *)this + 68) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v37,
                                             0)
                                         + 100);
      String::~String(&v37);
      String::String(&v36, "ATTACK_FINISH_TIME_MS");
      *((_DWORD *)this + 92) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v36,
                                             0)
                                         + 100);
      String::~String(&v36);
      String::String(&v35, "BATTLE_PING_SAMPLE_SECONDS");
      *((_DWORD *)this + 93) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v35,
                                             0)
                                         + 100);
      String::~String(&v35);
      String::String(&v34, "FREE_CHEST_INTERVAL_HOURS");
      *((_DWORD *)this + 94) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v34,
                                             0)
                                         + 100);
      String::~String(&v34);
      String::String(&v33, "EXTRA_BUFF_RADIUS");
      *((_DWORD *)this + 95) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v33,
                                             0)
                                         + 100);
      String::~String(&v33);
      String::String(&v32, "PVP_UNLOCKED_AT_LEVEL");
      *((_DWORD *)this + 96) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v32,
                                             0)
                                         + 100);
      String::~String(&v32);
      String::String(&v31, "CHEST_AUTO_OPENING");
      *((_BYTE *)this + 396) = *(_BYTE *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v31,
                                            0)
                                        + 160);
      String::~String(&v31);
      String::String(&v30, "MAX_CHEST_COUNT");
      *((_DWORD *)this + 98) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v30,
                                             0)
                                         + 100);
      String::~String(&v30);
      String::String(&v29, "MAX_WORKERS");
      *((_DWORD *)this + 97) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v29,
                                             0)
                                         + 100);
      String::~String(&v29);
      String::String(&v28, "EXTRA_CHEST_ENABLED");
      *((_BYTE *)this + 397) = *(_BYTE *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v28,
                                            0)
                                        + 160);
      String::~String(&v28);
      String::String(&v27, "RECORD_TOUCH_EVENTS");
      *((_BYTE *)this + 400) = *(_BYTE *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v27,
                                            0)
                                        + 160);
      String::~String(&v27);
      String::String(&v26, "ALLIANCE_UNLOCK_EXP_LEVEL");
      *((_DWORD *)this + 18) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v26,
                                             0)
                                         + 100);
      String::~String(&v26);
      String::String(&v25, "DONATION_CAPACITY_LIMIT_COOLDOWN_HOURS");
      *((_DWORD *)this + 25) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v25,
                                             0)
                                         + 100);
      String::~String(&v25);
      String::String(&v24, "PRICE_EPIC");
      *((_DWORD *)this + 106) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v24,
                                              0)
                                          + 100);
      String::~String(&v24);
      String::String(&v23, "PRICE_RARE");
      *((_DWORD *)this + 107) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v23,
                                              0)
                                          + 100);
      String::~String(&v23);
      String::String(&v22, "PRICE_COMMON");
      *((_DWORD *)this + 108) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v22,
                                              0)
                                          + 100);
      String::~String(&v22);
      String::String(&v21, "PRICE_EPIC_INCREASE_PER_ONE_BOUGHT_PERCENT");
      *((_DWORD *)this + 109) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v21,
                                              0)
                                          + 100);
      String::~String(&v21);
      String::String(&v20, "PRICE_RARE_INCREASE_PER_ONE_BOUGHT_PERCENT");
      *((_DWORD *)this + 110) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v20,
                                              0)
                                          + 100);
      String::~String(&v20);
      String::String(&v19, "PRICE_COMMON_INCREASE_PER_ONE_BOUGHT_PERCENT");
      *((_DWORD *)this + 111) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v19,
                                              0)
                                          + 100);
      String::~String(&v19);
      String::String(&v18, "BUY_LIMIT_EPIC");
      *((_DWORD *)this + 112) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v18,
                                              0)
                                          + 100);
      String::~String(&v18);
      String::String(&v17, "BUY_LIMIT_RARE");
      *((_DWORD *)this + 113) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v17,
                                              0)
                                          + 100);
      String::~String(&v17);
      String::String(&v16, "BUY_LIMIT_COMMON");
      *((_DWORD *)this + 114) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v16,
                                              0)
                                          + 100);
      String::~String(&v16);
      String::String(&v15, "BIG_LIMIT");
      *((_DWORD *)this + 115) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v15,
                                              0)
                                          + 100);
      String::~String(&v15);
      String::String(&v14, "SUPER_LIMIT");
      *((_DWORD *)this + 116) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v14,
                                              0)
                                          + 100);
      String::~String(&v14);
      String::String(&v13, "SHARE_REPLAY_COOLDOWN_SECS");
      *((_DWORD *)this + 117) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v13,
                                              0)
                                          + 100);
      String::~String(&v13);
      String::String(&v12, "TEAM_MAIL_COOLDOWN_SECS");
      *((_DWORD *)this + 118) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v12,
                                              0)
                                          + 100);
      String::~String(&v12);
      String::String(&v11, "CHALLENGE_MATCH_COST");
      *((_DWORD *)this + 119) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v11,
                                              0)
                                          + 100);
      String::~String(&v11);
      String::String(&v10, "CHALLENGE_MATCHES_ENABLED");
      *((_BYTE *)this + 480) = *(_BYTE *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v10,
                                            0)
                                        + 160);
      String::~String(&v10);
      String::String(&v9, "KING_ACTIVATE_TIME_MS");
      *((_DWORD *)this + 26) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v9,
                                             0)
                                         + 100);
      String::~String(&v9);
      String::String(&v8, "DEVICE_LINK_CODE_LENGTH");
      *((_DWORD *)this + 122) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v8,
                                              0)
                                          + 100);
      String::~String(&v8);
      String::String(&v7, "DEVICE_LINK_CODE_VALID_SECONDS");
      *((_DWORD *)this + 123) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this
                                                                                                      + 48LL))(
                                              this,
                                              &v7,
                                              0)
                                          + 100);
      String::~String(&v7);
      String::String(&v6, "RESET_SPELL_USAGE_COUNTER_MATCHES");
      *((_DWORD *)this + 24) = *(_DWORD *)((*(__int64 (__fastcall **)(HomeScreen *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v6,
                                             0)
                                         + 100);
      String::~String(&v6);
    }

    __int64 __fastcall LogicGlobals::getDefaultGameObjectListener(HomeScreen *this)
    {
      return *((_QWORD *)this + 15);
    }

    __int64 __fastcall LogicGlobals::getStartingArena(HomeScreen *this)
    {
      return *((_QWORD *)this + 52);
    }

    // attributes: thunk
    __int64 __fastcall LogicGlobals::getAllianceCreateResource(HomeScreen *this)
    {
      return LogicDataTables::getGoldData(this);
    }

    __int64 __fastcall LogicGlobals::getAllianceCreateCost(HomeScreen *this)
    {
      return *((unsigned int *)this + 91);
    }

    __int64 __fastcall LogicGlobals::getResourceDiamondCost(HomeScreen *this, int a2)
    {
      int v3; // w8
      int v4; // w9
      int v5; // w10
      int v6; // w9
      int v7; // w9
      int v8; // w10
      __int64 v9; // x8
    
      if ( a2 < 1 )
        return 0;
      if ( a2 <= 9 )
        return *((unsigned int *)this + 83);
      if ( a2 <= 99 )
      {
        v3 = *((_DWORD *)this + 84);
        v4 = (unsigned __int64)(3054198967LL * ((*((_DWORD *)this + 85) - v3) * (a2 - 10) + 45)) >> 32;
        v5 = v4 >> 6;
    LABEL_9:
        v6 = v5 + ((unsigned int)v4 >> 31);
        return (unsigned int)(v6 + v3);
      }
      if ( a2 <= 999 )
      {
        v3 = *((_DWORD *)this + 85);
        v4 = (unsigned __int64)(2443359173LL * ((*((_DWORD *)this + 86) - v3) * (a2 - 100) + 450)) >> 32;
        v5 = v4 >> 9;
        goto LABEL_9;
      }
      if ( a2 > 9999 )
      {
        v3 = *((_DWORD *)this + 88);
        if ( a2 <= 99999 )
        {
          v8 = *((_DWORD *)this + 87);
          v9 = 1954687339LL * ((v3 - v8) * (a2 / 10 - 1000) + 4500);
          return (unsigned int)(v9 >> 44) + ((unsigned __int64)v9 >> 63) + v8;
        }
        v7 = (*((_DWORD *)this + 89) - v3) * (a2 / 100 - 1000) + 4500;
      }
      else
      {
        v3 = *((_DWORD *)this + 86);
        v7 = (*((_DWORD *)this + 87) - v3) * (a2 - 1000) + 4500;
      }
      v6 = v7 / 9000;
      return (unsigned int)(v6 + v3);
    }

    __int64 __fastcall LogicGlobals::getAttackFinishTime(HomeScreen *this)
    {
      return *((unsigned int *)this + 92);
    }

    __int64 __fastcall LogicGlobals::getEndTimerAnimMS(HomeScreen *this)
    {
      return *((unsigned int *)this + 36);
    }

    __int64 __fastcall LogicGlobals::getMaxResourceCountForDiamondCost(HomeScreen *this, const char *a2)
    {
      int v2; // w19
      __int64 v4; // x22
      int i; // w24
      int v6; // w21
      int v7; // w25
      bool v8; // vf
    
      v2 = (int)a2;
      if ( (int)a2 < 1 )
        return 0;
      if ( (int)a2 >= 100001 )
        Debugger::error((__siginfo *)"getResourceCountForDiamondCost called with invalid parameter!", a2);
      for ( i = 0; ; i += 1000 )
      {
        v6 = i + 1000;
        if ( (int)LogicGlobals::getResourceDiamondCost(this, i + 1000) > v2 )
          break;
    LABEL_11:
        if ( v6 >= 10000000 )
          return 0;
      }
      v7 = 999;
      while ( 1 )
      {
        v4 = (unsigned int)(i + v7);
        if ( (unsigned int)LogicGlobals::getResourceDiamondCost(this, i + v7) == v2 )
          return v4;
        v8 = __OFSUB__(v7--, 1);
        if ( v7 < 0 != v8 )
          goto LABEL_11;
      }
    }

    __int64 __fastcall LogicGlobals::getReducedCrownTowerDamage(HomeScreen *this, int a2)
    {
      return (unsigned int)((*((_DWORD *)this + 50) * a2 + 99) / 100);
    }

    __int64 __fastcall LogicGlobals::getTvUnderdogWeight(HomeScreen *this, int a2)
    {
      if ( a2 == 2 )
        return 100;
      if ( a2 == 1 )
        return *((unsigned int *)this + 66);
      return *((unsigned int *)this + 65);
    }

    __int64 __fastcall LogicGlobals::getTvLeaderboardPositionWeight(HomeScreen *this, #1237 *a2, int a3)
    {
      int v6; // w20
      int v7; // w2
      int v8; // w0
      char *v9; // x8
    
      if ( (int)a2 < 1 || a3 < 1 )
        goto LABEL_20;
      v6 = LogicMath::min(a2, a3, a3);
      v8 = LogicMath::max(a2, a3, v7);
      if ( v8 > 3 )
      {
        if ( v6 <= 3 && v8 <= 10 )
        {
          v9 = (char *)this + 232;
          return *(unsigned int *)v9;
        }
        if ( v8 <= 10 )
        {
          v9 = (char *)this + 236;
          return *(unsigned int *)v9;
        }
        if ( v6 <= 10 && v8 <= 20 )
        {
          v9 = (char *)this + 240;
          return *(unsigned int *)v9;
        }
        if ( v8 <= 20 )
        {
          v9 = (char *)this + 244;
          return *(unsigned int *)v9;
        }
        if ( v6 <= 20 && v8 <= 50 )
        {
          v9 = (char *)this + 248;
          return *(unsigned int *)v9;
        }
        if ( v8 <= 50 )
        {
          v9 = (char *)this + 252;
          return *(unsigned int *)v9;
        }
    LABEL_20:
        v9 = (char *)this + 256;
        return *(unsigned int *)v9;
      }
      v9 = (char *)this + 228;
      return *(unsigned int *)v9;
    }

    __int64 __fastcall LogicGlobals::getCrownChestDiamondLoopLength(HomeScreen *this)
    {
      return *(unsigned int *)(*((_QWORD *)this + 10) + 12LL);
    }

    __int64 __fastcall LogicGlobals::getCrownChestDiamonds(HomeScreen *this, const char *a2)
    {
      __int64 v2; // x8
    
      if ( ((unsigned int)a2 & 0x80000000) == 0 )
      {
        v2 = *((_QWORD *)this + 10);
        if ( *(_DWORD *)(v2 + 12) > (int)a2 )
          return *(unsigned int *)(*(_QWORD *)v2 + 4LL * (int)a2);
      }
      Debugger::warning((__siginfo *)"getCrownChestDiamonds called with an invalid index", a2);
      return 0;
    }

    __int64 __fastcall LogicGlobals::getFreeChestDiamondLoopLength(HomeScreen *this)
    {
      return *(unsigned int *)(*((_QWORD *)this + 11) + 12LL);
    }

    __int64 __fastcall LogicGlobals::getFreeChestDiamonds(HomeScreen *this, const char *a2)
    {
      __int64 v2; // x8
    
      if ( ((unsigned int)a2 & 0x80000000) == 0 )
      {
        v2 = *((_QWORD *)this + 11);
        if ( *(_DWORD *)(v2 + 12) > (int)a2 )
          return *(unsigned int *)(*(_QWORD *)v2 + 4LL * (int)a2);
      }
      Debugger::warning((__siginfo *)"getFreeChestDiamonds called with an invalid index", a2);
      return 0;
    }

    // attributes: thunk
    void __fastcall LogicGlobals::~LogicGlobals(HomeScreen *this)
    {
      LogicDataTable::~LogicDataTable(this);
    }

    void __fastcall LogicGlobals::~LogicGlobals(HomeScreen *this)
    {
      LogicDataTable::~LogicDataTable(this);
      operator delete(this);
    }

}; // end class LogicGlobals
