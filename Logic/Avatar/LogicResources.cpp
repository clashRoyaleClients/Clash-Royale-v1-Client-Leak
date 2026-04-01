class LogicResources
{
public:

    _QWORD *LogicResources::createDataTableResourcesArray()
    {
      _QWORD *v0; // x19
      __int64 v1; // x20
      __int64 v2; // x20
      __int64 v3; // x20
      __int64 v4; // x20
      __int64 v5; // x20
      __int64 v6; // x20
      __int64 v7; // x20
      __int64 v8; // x20
      __int64 v9; // x20
      __int64 v10; // x20
      __int64 v11; // x20
      __int64 v12; // x20
      __int64 v13; // x20
      __int64 v14; // x20
      __int64 v15; // x20
      __int64 v16; // x20
      __int64 v17; // x20
      __int64 v18; // x20
      __int64 v19; // x20
      __int64 v20; // x20
      __int64 v21; // x20
      __int64 v22; // x20
      __int64 v23; // x20
      __int64 v24; // x20
      __int64 v25; // x20
      __int64 v26; // x20
      __int64 v27; // x20
      __int64 v28; // x20
      __int64 v29; // x20
      __int64 v30; // x20
      __int64 v31; // x20
      __int64 v32; // x20
      __int64 v33; // x20
      __int64 v34; // x20
      __int64 v35; // x20
      __int64 v36; // x20
      __int64 v37; // x20
      __int64 v38; // x20
      __int64 v39; // x20
      __int64 v40; // x20
      __int64 v41; // x20
      __int64 v42; // x20
      __int64 v43; // x20
      __int64 v44; // x20
      String v46; // [xsp+0h] [xbp-5A0h] BYREF
      __int64 v47; // [xsp+18h] [xbp-588h] BYREF
      String v48; // [xsp+20h] [xbp-580h] BYREF
      __int64 v49; // [xsp+38h] [xbp-568h] BYREF
      String v50; // [xsp+40h] [xbp-560h] BYREF
      __int64 v51; // [xsp+58h] [xbp-548h] BYREF
      String v52; // [xsp+60h] [xbp-540h] BYREF
      __int64 v53; // [xsp+78h] [xbp-528h] BYREF
      String v54; // [xsp+80h] [xbp-520h] BYREF
      __int64 v55; // [xsp+98h] [xbp-508h] BYREF
      String v56; // [xsp+A0h] [xbp-500h] BYREF
      __int64 v57; // [xsp+B8h] [xbp-4E8h] BYREF
      String v58; // [xsp+C0h] [xbp-4E0h] BYREF
      __int64 v59; // [xsp+D8h] [xbp-4C8h] BYREF
      String v60; // [xsp+E0h] [xbp-4C0h] BYREF
      __int64 v61; // [xsp+F8h] [xbp-4A8h] BYREF
      String v62; // [xsp+100h] [xbp-4A0h] BYREF
      __int64 v63; // [xsp+118h] [xbp-488h] BYREF
      String v64; // [xsp+120h] [xbp-480h] BYREF
      __int64 v65; // [xsp+138h] [xbp-468h] BYREF
      String v66; // [xsp+140h] [xbp-460h] BYREF
      __int64 v67; // [xsp+158h] [xbp-448h] BYREF
      String v68; // [xsp+160h] [xbp-440h] BYREF
      __int64 v69; // [xsp+178h] [xbp-428h] BYREF
      String v70; // [xsp+180h] [xbp-420h] BYREF
      __int64 v71; // [xsp+198h] [xbp-408h] BYREF
      String v72; // [xsp+1A0h] [xbp-400h] BYREF
      __int64 v73; // [xsp+1B8h] [xbp-3E8h] BYREF
      String v74; // [xsp+1C0h] [xbp-3E0h] BYREF
      __int64 v75; // [xsp+1D8h] [xbp-3C8h] BYREF
      String v76; // [xsp+1E0h] [xbp-3C0h] BYREF
      __int64 v77; // [xsp+1F8h] [xbp-3A8h] BYREF
      String v78; // [xsp+200h] [xbp-3A0h] BYREF
      __int64 v79; // [xsp+218h] [xbp-388h] BYREF
      String v80; // [xsp+220h] [xbp-380h] BYREF
      __int64 v81; // [xsp+238h] [xbp-368h] BYREF
      String v82; // [xsp+240h] [xbp-360h] BYREF
      __int64 v83; // [xsp+258h] [xbp-348h] BYREF
      String v84; // [xsp+260h] [xbp-340h] BYREF
      __int64 v85; // [xsp+278h] [xbp-328h] BYREF
      String v86; // [xsp+280h] [xbp-320h] BYREF
      __int64 v87; // [xsp+298h] [xbp-308h] BYREF
      String v88; // [xsp+2A0h] [xbp-300h] BYREF
      __int64 v89; // [xsp+2B8h] [xbp-2E8h] BYREF
      String v90; // [xsp+2C0h] [xbp-2E0h] BYREF
      __int64 v91; // [xsp+2D8h] [xbp-2C8h] BYREF
      String v92; // [xsp+2E0h] [xbp-2C0h] BYREF
      __int64 v93; // [xsp+2F8h] [xbp-2A8h] BYREF
      String v94; // [xsp+300h] [xbp-2A0h] BYREF
      __int64 v95; // [xsp+318h] [xbp-288h] BYREF
      String v96; // [xsp+320h] [xbp-280h] BYREF
      __int64 v97; // [xsp+338h] [xbp-268h] BYREF
      String v98; // [xsp+340h] [xbp-260h] BYREF
      __int64 v99; // [xsp+358h] [xbp-248h] BYREF
      String v100; // [xsp+360h] [xbp-240h] BYREF
      __int64 v101; // [xsp+378h] [xbp-228h] BYREF
      String v102; // [xsp+380h] [xbp-220h] BYREF
      __int64 v103; // [xsp+398h] [xbp-208h] BYREF
      String v104; // [xsp+3A0h] [xbp-200h] BYREF
      __int64 v105; // [xsp+3B8h] [xbp-1E8h] BYREF
      String v106; // [xsp+3C0h] [xbp-1E0h] BYREF
      __int64 v107; // [xsp+3D8h] [xbp-1C8h] BYREF
      String v108; // [xsp+3E0h] [xbp-1C0h] BYREF
      __int64 v109; // [xsp+3F8h] [xbp-1A8h] BYREF
      String v110; // [xsp+400h] [xbp-1A0h] BYREF
      __int64 v111; // [xsp+418h] [xbp-188h] BYREF
      String v112; // [xsp+420h] [xbp-180h] BYREF
      __int64 v113; // [xsp+438h] [xbp-168h] BYREF
      String v114; // [xsp+440h] [xbp-160h] BYREF
      __int64 v115; // [xsp+458h] [xbp-148h] BYREF
      String v116; // [xsp+460h] [xbp-140h] BYREF
      __int64 v117; // [xsp+478h] [xbp-128h] BYREF
      String v118; // [xsp+480h] [xbp-120h] BYREF
      __int64 v119; // [xsp+498h] [xbp-108h] BYREF
      String v120; // [xsp+4A0h] [xbp-100h] BYREF
      __int64 v121; // [xsp+4B8h] [xbp-E8h] BYREF
      String v122; // [xsp+4C0h] [xbp-E0h] BYREF
      __int64 v123; // [xsp+4D8h] [xbp-C8h] BYREF
      String v124; // [xsp+4E0h] [xbp-C0h] BYREF
      __int64 v125; // [xsp+4F8h] [xbp-A8h] BYREF
      String v126; // [xsp+500h] [xbp-A0h] BYREF
      __int64 v127; // [xsp+518h] [xbp-88h] BYREF
      String v128; // [xsp+520h] [xbp-80h] BYREF
      __int64 v129; // [xsp+538h] [xbp-68h] BYREF
      String v130; // [xsp+540h] [xbp-60h] BYREF
      __int64 v131; // [xsp+558h] [xbp-48h] BYREF
      String v132; // [xsp+560h] [xbp-40h] BYREF
      __int64 v133; // [xsp+578h] [xbp-28h] BYREF
    
      v0 = (_QWORD *)operator new(16);
      *v0 = 0;
      v0[1] = 0;
      *((_DWORD *)v0 + 2) = 66;
      *v0 = operator new[](528);
      v1 = operator new(40);
      String::String(&v132, "csv_logic/locales.csv");
      LogicDataTableResource::LogicDataTableResource(v1, (__int64)&v132, 1, 0);
      v133 = v1;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v133);
      String::~String();
      v2 = operator new(40);
      String::String(&v130, "csv_logic/globals.csv");
      LogicDataTableResource::LogicDataTableResource(v2, (__int64)&v130, 3, 0);
      v131 = v2;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v131);
      String::~String();
      v3 = operator new(40);
      String::String(&v128, "csv_logic/resources.csv");
      LogicDataTableResource::LogicDataTableResource(v3, (__int64)&v128, 5, 0);
      v129 = v3;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v129);
      String::~String();
      v4 = operator new(40);
      String::String(&v126, "csv_logic/damage_types.csv");
      LogicDataTableResource::LogicDataTableResource(v4, (__int64)&v126, 8, 0);
      v127 = v4;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v127);
      String::~String();
      v5 = operator new(40);
      String::String(&v124, "csv_logic/character_buffs.csv");
      LogicDataTableResource::LogicDataTableResource(v5, (__int64)&v124, 9, 0);
      v125 = v5;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v125);
      String::~String();
      v6 = operator new(40);
      String::String(&v122, "csv_logic/projectiles.csv");
      LogicDataTableResource::LogicDataTableResource(v6, (__int64)&v122, 10, 0);
      v123 = v6;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v123);
      String::~String();
      v7 = operator new(40);
      String::String(&v120, "csv_logic/predefined_decks.csv");
      LogicDataTableResource::LogicDataTableResource(v7, (__int64)&v120, 12, 0);
      v121 = v7;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v121);
      String::~String();
      v8 = operator new(40);
      String::String(&v118, "csv_logic/eggs.csv");
      LogicDataTableResource::LogicDataTableResource(v8, (__int64)&v118, 13, 0);
      v119 = v8;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v119);
      String::~String();
      v9 = operator new(40);
      String::String(&v116, "csv_logic/rarities.csv");
      LogicDataTableResource::LogicDataTableResource(v9, (__int64)&v116, 14, 0);
      v117 = v9;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v117);
      String::~String();
      v10 = operator new(40);
      String::String(&v114, "csv_logic/locations.csv");
      LogicDataTableResource::LogicDataTableResource(v10, (__int64)&v114, 15, 0);
      v115 = v10;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v115);
      String::~String();
      v11 = operator new(40);
      String::String(&v112, "csv_logic/npcs.csv");
      LogicDataTableResource::LogicDataTableResource(v11, (__int64)&v112, 18, 0);
      v113 = v11;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v113);
      String::~String();
      v12 = operator new(40);
      String::String(&v110, "csv_logic/treasure_chests.csv");
      LogicDataTableResource::LogicDataTableResource(v12, (__int64)&v110, 19, 0);
      v111 = v12;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v111);
      String::~String();
      v13 = operator new(40);
      String::String(&v108, "csv_logic/area_effect_objects.csv");
      LogicDataTableResource::LogicDataTableResource(v13, (__int64)&v108, 22, 0);
      v109 = v13;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v109);
      String::~String();
      v14 = operator new(40);
      String::String(&v106, "csv_logic/spells_characters.csv");
      LogicDataTableResource::LogicDataTableResource(v14, (__int64)&v106, 26, 0);
      v107 = v14;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v107);
      String::~String();
      v15 = operator new(40);
      String::String(&v104, "csv_logic/spells_buildings.csv");
      LogicDataTableResource::LogicDataTableResource(v15, (__int64)&v104, 27, 0);
      v105 = v15;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v105);
      String::~String();
      v16 = operator new(40);
      String::String(&v102, "csv_logic/spells_other.csv");
      LogicDataTableResource::LogicDataTableResource(v16, (__int64)&v102, 28, 0);
      v103 = v16;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v103);
      String::~String();
      v17 = operator new(40);
      String::String(&v100, "csv_logic/characters.csv");
      LogicDataTableResource::LogicDataTableResource(v17, (__int64)&v100, 34, 0);
      v101 = v17;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v101);
      String::~String();
      v18 = operator new(40);
      String::String(&v98, "csv_logic/buildings.csv");
      LogicDataTableResource::LogicDataTableResource(v18, (__int64)&v98, 35, 0);
      v99 = v18;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v99);
      String::~String();
      v19 = operator new(40);
      String::String(&v96, "csv_logic/decos.csv");
      LogicDataTableResource::LogicDataTableResource(v19, (__int64)&v96, 42, 0);
      v97 = v19;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v97);
      String::~String();
      v20 = operator new(40);
      String::String(&v94, "csv_logic/gamble_chests.csv");
      LogicDataTableResource::LogicDataTableResource(v20, (__int64)&v94, 43, 0);
      v95 = v20;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v95);
      String::~String();
      v21 = operator new(40);
      String::String(&v92, "csv_logic/spawn_points.csv");
      LogicDataTableResource::LogicDataTableResource(v21, (__int64)&v92, 44, 0);
      v93 = v21;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v93);
      String::~String();
      v22 = operator new(40);
      String::String(&v90, "csv_logic/tutorials_home.csv");
      LogicDataTableResource::LogicDataTableResource(v22, (__int64)&v90, 45, 0);
      v91 = v22;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v91);
      String::~String();
      v23 = operator new(40);
      String::String(&v88, "csv_logic/exp_levels.csv");
      LogicDataTableResource::LogicDataTableResource(v23, (__int64)&v88, 46, 0);
      v89 = v23;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v89);
      String::~String();
      v24 = operator new(40);
      String::String(&v86, "csv_logic/tutorials_npc.csv");
      LogicDataTableResource::LogicDataTableResource(v24, (__int64)&v86, 48, 0);
      v87 = v24;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v87);
      String::~String();
      v25 = operator new(40);
      String::String(&v84, "csv_logic/spell_sets.csv");
      LogicDataTableResource::LogicDataTableResource(v25, (__int64)&v84, 51, 0);
      v85 = v25;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v85);
      String::~String();
      v26 = operator new(40);
      String::String(&v82, "csv_logic/chest_order.csv");
      LogicDataTableResource::LogicDataTableResource(v26, (__int64)&v82, 52, 0);
      v83 = v26;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v83);
      String::~String();
      v27 = operator new(40);
      String::String(&v80, "csv_logic/taunts.csv");
      LogicDataTableResource::LogicDataTableResource(v27, (__int64)&v80, 53, 0);
      v81 = v27;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v81);
      String::~String();
      v28 = operator new(40);
      String::String(&v78, "csv_logic/arenas.csv");
      LogicDataTableResource::LogicDataTableResource(v28, (__int64)&v78, 54, 0);
      v79 = v28;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v79);
      String::~String();
      v29 = operator new(40);
      String::String(&v76, "csv_logic/resource_packs.csv");
      LogicDataTableResource::LogicDataTableResource(v29, (__int64)&v76, 55, 0);
      v77 = v29;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v77);
      String::~String();
      v30 = operator new(40);
      String::String(&v74, "csv_logic/regions.csv");
      LogicDataTableResource::LogicDataTableResource(v30, (__int64)&v74, 57, 0);
      v75 = v30;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v75);
      String::~String();
      v31 = operator new(40);
      String::String(&v72, "csv_logic/alliance_roles.csv");
      LogicDataTableResource::LogicDataTableResource(v31, (__int64)&v72, 59, 0);
      v73 = v31;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v73);
      String::~String();
      v32 = operator new(40);
      String::String(&v70, "csv_logic/alliance_badges.csv");
      LogicDataTableResource::LogicDataTableResource(v32, (__int64)&v70, 16, 0);
      v71 = v32;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v71);
      String::~String();
      v33 = operator new(40);
      String::String(&v68, "csv_logic/achievements.csv");
      LogicDataTableResource::LogicDataTableResource(v33, (__int64)&v68, 60, 0);
      v69 = v33;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v69);
      String::~String();
      v34 = operator new(40);
      String::String(&v66, "csv_client/music.csv");
      LogicDataTableResource::LogicDataTableResource(v34, (__int64)&v66, 41, 0);
      v67 = v34;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v67);
      String::~String();
      v35 = operator new(40);
      String::String(&v64, "csv_client/background_decos.csv");
      LogicDataTableResource::LogicDataTableResource(v35, (__int64)&v64, 50, 0);
      v65 = v35;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v65);
      String::~String();
      v36 = operator new(40);
      String::String(&v62, "csv_client/billing_packages.csv");
      LogicDataTableResource::LogicDataTableResource(v36, (__int64)&v62, 2, 0);
      v63 = v36;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v63);
      String::~String();
      v37 = operator new(40);
      String::String(&v60, "csv_client/sounds.csv");
      LogicDataTableResource::LogicDataTableResource(v37, (__int64)&v60, 4, 0);
      v61 = v37;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v61);
      String::~String();
      v38 = operator new(40);
      String::String(&v58, "csv_client/effects.csv");
      LogicDataTableResource::LogicDataTableResource(v38, (__int64)&v58, 11, 0);
      v59 = v38;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v59);
      String::~String();
      v39 = operator new(40);
      String::String(&v56, "csv_client/particle_emitters.csv");
      LogicDataTableResource::LogicDataTableResource(v39, (__int64)&v56, 21, 0);
      v57 = v39;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v57);
      String::~String();
      v40 = operator new(40);
      String::String(&v54, "csv_client/health_bars.csv");
      LogicDataTableResource::LogicDataTableResource(v40, (__int64)&v54, 40, 0);
      v55 = v40;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v55);
      String::~String();
      v41 = operator new(40);
      String::String(&v52, "csv_client/client_globals.csv");
      LogicDataTableResource::LogicDataTableResource(v41, (__int64)&v52, 20, 0);
      v53 = v41;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v53);
      String::~String();
      v42 = operator new(40);
      String::String(&v50, "csv_client/credits.csv");
      LogicDataTableResource::LogicDataTableResource(v42, (__int64)&v50, 56, 0);
      v51 = v42;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v51);
      String::~String();
      v43 = operator new(40);
      String::String(&v48, "csv_client/news.csv");
      LogicDataTableResource::LogicDataTableResource(v43, (__int64)&v48, 58, 0);
      v49 = v43;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v49);
      String::~String();
      v44 = operator new(40);
      String::String(&v46, "csv_client/hints.csv");
      LogicDataTableResource::LogicDataTableResource(v44, (__int64)&v46, 61, 0);
      v47 = v44;
      LogicArrayList<LogicDataTableResource *>::add(v0, &v47);
      String::~String();
      return v0;
    }

    void __fastcall LogicResources::load(__int64 a1, int a2, StartMissionMessage *a3, __int64 a4, int a5)
    {
      FeedPage *v8; // x22
      __int64 Type; // x0
      const char *v10; // x1
      const String *v11; // x1
      Shader *TableIndex; // x0
      const char *v13; // x22
      Shader *Instance; // x0
      __int64 v15; // x23
      UdpConnectionInfoMessage *Table; // x0
      Shader *v17; // x0
      const UdpConnectionInfoMessage *v18; // x1
      String v19; // [xsp+8h] [xbp-48h] BYREF
    
      if ( !a2 && a5 != 1 )
        LogicDataTables::destructInstance();
      v8 = *(FeedPage **)(*(_QWORD *)a1 + 8LL * a2);
      Type = LogicDataTableResource::getType(v8);
      if ( (_DWORD)Type )
      {
        String::format((String *)"LogicResources::Invalid resource type %d", v10, Type);
        Debugger::error((Debugger *)&v19, v11);
      }
      TableIndex = (Shader *)LogicDataTableResource::getTableIndex(v8);
      v13 = (const char *)TableIndex;
      if ( (_DWORD)TableIndex == 1 )
      {
        Instance = (Shader *)LogicLocalization::getInstance(TableIndex);
        if ( Instance )
        {
          v15 = LogicLocalization::getInstance(Instance);
          Table = (UdpConnectionInfoMessage *)CSVNode::getTable(a3);
          LogicLocalization::setCSVTable(v15, Table);
        }
        else
        {
          v17 = (Shader *)CSVNode::getTable(a3);
          LogicLocalization::constructInstance(v17, v18);
        }
      }
      LogicDataTables::initDataTable(a3, v13);
      if ( *(_DWORD *)(a1 + 12) - 1 == a2 )
        LogicDataTables::createReferences();
    }

}; // end class LogicResources
