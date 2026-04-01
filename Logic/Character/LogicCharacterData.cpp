class LogicCharacterData
{
public:

    __int64 __fastcall LogicCharacterData::LogicCharacterData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      LogicData::LogicData(a1, a2, a3);
      *(_QWORD *)a1 = off_10046CB18;
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      String::String((String *)(a1 + 328));
      String::String((String *)(a1 + 352));
      String::String((String *)(a1 + 808));
      LogicCharacterData::initializeMembers((LogicCharacterData *)a1);
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall LogicCharacterData::LogicCharacterData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      return __ZN18LogicCharacterDataC2EPK6CSVRowPK14LogicDataTable(a1, a2, a3);
    }

    __int64 __fastcall LogicCharacterData::destruct(LogicCharacterData *a1)
    {
      LogicData::destruct((__int64)a1);
      return LogicCharacterData::initializeMembers(a1);
    }

    void __fastcall LogicCharacterData::createReferences(__int64 a1)
    {
      LogicCharacterData *Table; // x0
      const CSVTable *v3; // x1
      LogicKickAllianceMemberCommand *Value; // x0
      const AreaEffectObject *v5; // x2
      LogicKickAllianceMemberCommand *v6; // x0
      const AreaEffectObject *v7; // x2
      LogicKickAllianceMemberCommand *v8; // x0
      const AreaEffectObject *v9; // x2
      int v10; // w8
      const char *v11; // x2
      const char *v12; // x2
      const char *v13; // x2
      const char *v14; // x2
      const char *v15; // x2
      const char *v16; // x2
      const char *v17; // x2
      const char *v18; // x2
      const char *v19; // x2
      const char *v20; // x2
      const char *v21; // x2
      const char *v22; // x2
      const char *v23; // x2
      const char *v24; // x2
      const char *v25; // x2
      const String *v26; // x0
      const AreaEffectObject *v27; // x2
      const char *v28; // x2
      const char *v29; // x2
      const char *v30; // x2
      const char *v31; // x2
      const char *v32; // x2
      const char *v33; // x2
      const char *v34; // x2
      const char *v35; // x2
      __int64 v36; // x20
      const char *v37; // x2
      const char *v38; // x2
      const char *v39; // x2
      const char *v40; // x2
      const char *v41; // x2
      const char *v42; // x2
      const char *v43; // x2
      int IntegerValueAt; // w0
      const char *v45; // x2
      const char *v46; // x2
      const char *v47; // x2
      const char *v48; // x2
      const char *v49; // x2
      const char *v50; // x2
      const char *v51; // x2
      int v52; // w0
      const char *v53; // x2
      int v54; // w8
      const char *v55; // x2
      const char *v56; // x2
      const char *v57; // x2
      const char *v58; // x2
      const char *v59; // x2
      const char *v60; // x2
      const char *v61; // x2
      const char *v62; // x2
      __int64 v63; // x20
      __int64 ArraySizeAt; // x20
      const char *v65; // x22
      LogicKickAllianceMemberCommand *ValueAt; // x0
      const AreaEffectObject *v67; // x2
      const char *v68; // x2
      long double v69; // q0
      __int64 v70; // x20
      const char *v71; // x2
      const char *v72; // x22
      LogicKickAllianceMemberCommand *v73; // x0
      const AreaEffectObject *v74; // x2
      const char *v75; // x2
      long double v76; // q0
      __int64 v77; // x0
      const char *v78; // x2
      __int64 v79; // x0
      const char *v80; // x2
      LogicKickAllianceMemberCommand *v81; // x0
      const AreaEffectObject *v82; // x2
      const char *v83; // x2
      LogicKickAllianceMemberCommand *v84; // x0
      const AreaEffectObject *v85; // x2
      const char *v86; // x2
      LogicKickAllianceMemberCommand *v87; // x0
      const AreaEffectObject *v88; // x2
      const char *v89; // x2
      LogicKickAllianceMemberCommand *v90; // x0
      const AreaEffectObject *v91; // x2
      const char *v92; // x2
      LogicKickAllianceMemberCommand *v93; // x0
      const AreaEffectObject *v94; // x2
      const char *v95; // x2
      LogicKickAllianceMemberCommand *v96; // x0
      const AreaEffectObject *v97; // x2
      __int64 v98; // x0
      const char *v99; // x2
      __int64 v100; // x0
      const char *v101; // x2
      LogicKickAllianceMemberCommand *v102; // x0
      const AreaEffectObject *v103; // x2
      const char *v104; // x2
      __int64 v105; // x0
      const char *v106; // x2
      __int64 v107; // x0
      const char *v108; // x2
      const char *v109; // x1
      internal_t *pHeap; // x8
      const String *v111; // x1
      const char *v112; // x2
      const char *v113; // x2
      float v114; // s0
      const char *v115; // x2
      const char *v116; // x2
      const char *v117; // x2
      const char *v118; // x2
      __int64 v119; // x0
      const char *v120; // x2
      const char *v121; // x2
      const char *v122; // x2
      LogicKickAllianceMemberCommand *v123; // x0
      const AreaEffectObject *v124; // x2
      const char *v125; // x2
      LogicKickAllianceMemberCommand *v126; // x0
      const AreaEffectObject *v127; // x2
      const char *v128; // x2
      LogicKickAllianceMemberCommand *v129; // x0
      const AreaEffectObject *v130; // x2
      const char *v131; // x2
      LogicKickAllianceMemberCommand *v132; // x0
      const AreaEffectObject *v133; // x2
      const char *v134; // x2
      __int64 v135; // x0
      const char *v136; // x2
      LogicKickAllianceMemberCommand *v137; // x0
      const AreaEffectObject *v138; // x2
      const char *v139; // x2
      LogicKickAllianceMemberCommand *v140; // x0
      const AreaEffectObject *v141; // x2
      const char *v142; // x2
      __int64 v143; // x0
      const char *v144; // x2
      LogicKickAllianceMemberCommand *v145; // x0
      const AreaEffectObject *v146; // x2
      const char *v147; // x2
      LogicKickAllianceMemberCommand *v148; // x0
      const AreaEffectObject *v149; // x2
      const char *v150; // x2
      LogicKickAllianceMemberCommand *v151; // x0
      const AreaEffectObject *v152; // x2
      const char *v153; // x2
      LogicKickAllianceMemberCommand *v154; // x0
      const AreaEffectObject *v155; // x2
      const char *v156; // x2
      LogicKickAllianceMemberCommand *v157; // x0
      const AreaEffectObject *v158; // x2
      const char *v159; // x2
      const char *v160; // x2
      __int64 v161; // x20
      __int64 v162; // x20
      __int64 v163; // x20
      LogicKickAllianceMemberCommand *v164; // x0
      const AreaEffectObject *v165; // x2
      const char *v166; // x2
      __int64 v167; // x20
      LogicMath *IntegerValue; // x0
      int v169; // w2
      __int64 v170; // x0
      int v171; // w3
      __int64 v172; // x20
      LogicKickAllianceMemberCommand *v173; // x0
      const AreaEffectObject *v174; // x2
      __int64 v175; // x20
      LogicKickAllianceMemberCommand *v176; // x0
      const AreaEffectObject *v177; // x2
      __int64 v178; // x20
      LogicKickAllianceMemberCommand *v179; // x0
      const AreaEffectObject *v180; // x2
      __int64 v181; // x20
      LogicKickAllianceMemberCommand *v182; // x0
      const AreaEffectObject *v183; // x2
      __int64 v184; // x20
      LogicKickAllianceMemberCommand *v185; // x0
      const AreaEffectObject *v186; // x2
      __int64 v187; // x20
      LogicKickAllianceMemberCommand *v188; // x0
      const AreaEffectObject *v189; // x2
      __int64 v190; // x20
      LogicKickAllianceMemberCommand *v191; // x0
      const AreaEffectObject *v192; // x2
      __int64 v193; // x20
      LogicKickAllianceMemberCommand *v194; // x0
      const AreaEffectObject *v195; // x2
      const char *v196; // x1
      __int64 v197; // x20
      __int64 v198; // x20
      String v199; // [xsp+10h] [xbp-460h] BYREF
      String v200; // [xsp+28h] [xbp-448h] BYREF
      String v201; // [xsp+40h] [xbp-430h] BYREF
      String v202; // [xsp+58h] [xbp-418h] BYREF
      String v203; // [xsp+70h] [xbp-400h] BYREF
      String v204; // [xsp+88h] [xbp-3E8h] BYREF
      String v205; // [xsp+A0h] [xbp-3D0h] BYREF
      String v206; // [xsp+B8h] [xbp-3B8h] BYREF
      String v207; // [xsp+D0h] [xbp-3A0h] BYREF
      String v208; // [xsp+E8h] [xbp-388h] BYREF
      String v209; // [xsp+100h] [xbp-370h] BYREF
      String v210; // [xsp+118h] [xbp-358h] BYREF
      String v211; // [xsp+130h] [xbp-340h] BYREF
      String v212; // [xsp+148h] [xbp-328h] BYREF
      String v213; // [xsp+160h] [xbp-310h] BYREF
      String v214; // [xsp+178h] [xbp-2F8h] BYREF
      __int64 v215; // [xsp+190h] [xbp-2E0h] BYREF
      __int64 DamageTypeByName; // [xsp+198h] [xbp-2D8h] BYREF
      String v217; // [xsp+1A0h] [xbp-2D0h] BYREF
      String v218; // [xsp+1B8h] [xbp-2B8h] BYREF
      String v219; // [xsp+1D0h] [xbp-2A0h] BYREF
      String v220; // [xsp+1E8h] [xbp-288h] BYREF
      String v221; // [xsp+200h] [xbp-270h] BYREF
      String v222; // [xsp+218h] [xbp-258h] BYREF
      String v223; // [xsp+230h] [xbp-240h] BYREF
      String v224; // [xsp+248h] [xbp-228h] BYREF
      String v225; // [xsp+260h] [xbp-210h] BYREF
      String v226; // [xsp+278h] [xbp-1F8h] BYREF
      String v227; // [xsp+290h] [xbp-1E0h] BYREF
      String v228; // [xsp+2A8h] [xbp-1C8h] BYREF
      String v229; // [xsp+2C0h] [xbp-1B0h] BYREF
      String v230; // [xsp+2D8h] [xbp-198h] BYREF
      String v231; // [xsp+2F0h] [xbp-180h] BYREF
      String v232; // [xsp+308h] [xbp-168h] BYREF
      String v233; // [xsp+320h] [xbp-150h] BYREF
      String v234; // [xsp+338h] [xbp-138h] BYREF
      String v235; // [xsp+350h] [xbp-120h] BYREF
      String v236; // [xsp+368h] [xbp-108h] BYREF
      String v237; // [xsp+380h] [xbp-F0h] BYREF
      String v238; // [xsp+398h] [xbp-D8h] BYREF
      String v239; // [xsp+3B0h] [xbp-C0h] BYREF
      String v240; // [xsp+3C8h] [xbp-A8h] BYREF
      String v241; // [xsp+3E0h] [xbp-90h] BYREF
      String v242; // [xsp+3F8h] [xbp-78h] BYREF
    
      LogicData::createReferences((AreaEffectObject *)a1);
      if ( !(unsigned int)CSVRow::getRowOffset(*(_QWORD *)(a1 + 8)) )
      {
        Table = (LogicCharacterData *)CSVRow::getTable(*(_QWORD *)(a1 + 8));
        LogicCharacterData::resetStatics(Table, v3);
      }
      String::String(&v242, "HidesWhenNotAttacking");
      *(_BYTE *)(a1 + 465) = LogicData::getBooleanValue(a1, (__int64)&v242);
      String::~String();
      String::String(&v241, "TargetedHitEffect");
      Value = (LogicKickAllianceMemberCommand *)LogicData::getValue(a1, (__int64)&v241);
      *(_QWORD *)(a1 + 288) = LogicDataTables::getEffectByName(Value, (const String *)a1, v5);
      String::~String();
      if ( !*(_BYTE *)(a1 + 465) )
      {
        *(_DWORD *)(a1 + 468) = 0;
        goto LABEL_8;
      }
      String::String(&v240, "HideTimeMs");
      *(_DWORD *)(a1 + 468) = LogicData::getIntegerValue(a1, (__int64)&v240);
      String::~String();
      if ( !*(_BYTE *)(a1 + 465) )
      {
    LABEL_8:
        *(_DWORD *)(a1 + 472) = 0;
        goto LABEL_9;
      }
      String::String(&v239, "UpTimeMs");
      *(_DWORD *)(a1 + 472) = LogicData::getIntegerValue(a1, (__int64)&v239);
      String::~String();
      if ( *(_BYTE *)(a1 + 465) )
      {
        String::String(&v238, "AppearEffect");
        v6 = (LogicKickAllianceMemberCommand *)LogicData::getValue(a1, (__int64)&v238);
        *(_QWORD *)(a1 + 480) = LogicDataTables::getEffectByName(v6, (const String *)a1, v7);
        String::~String();
        String::String(&v237, "HideEffect");
        v8 = (LogicKickAllianceMemberCommand *)LogicData::getValue(a1, (__int64)&v237);
        *(_QWORD *)(a1 + 488) = LogicDataTables::getEffectByName(v8, (const String *)a1, v9);
        String::~String();
      }
    LABEL_9:
      String::String(&v236, "SpawnCharacterLevelIndex");
      *(_DWORD *)(a1 + 320) = LogicData::getIntegerValue(a1, (__int64)&v236);
      String::~String();
      String::String(&v235, "HasRotationOnTimeline");
      *(_BYTE *)(a1 + 791) = LogicData::getBooleanValue(a1, (__int64)&v235);
      String::~String();
      String::String(&v234, "TurretMovement");
      *(_DWORD *)(a1 + 792) = LogicData::getIntegerValue(a1, (__int64)&v234);
      String::~String();
      String::String(&v233, "ProjectileYOffset");
      *(_DWORD *)(a1 + 796) = LogicData::getIntegerValue(a1, (__int64)&v233);
      String::~String();
      String::String(&v232, "ManaCollectAmount");
      *(_DWORD *)(a1 + 504) = LogicData::getIntegerValue(a1, (__int64)&v232);
      String::~String();
      v10 = *(_DWORD *)(a1 + 504);
      *(_BYTE *)(a1 + 500) = v10 > 0;
      if ( v10 >= 1 )
      {
        String::String(&v231, "ManaGenerateTimeMs");
        *(_DWORD *)(a1 + 508) = LogicData::getIntegerValue(a1, (__int64)&v231);
        String::~String();
      }
      String::String(&v230, "ManaGenerateLimit");
      *(_DWORD *)(a1 + 496) = LogicData::getIntegerValue(a1, (__int64)&v230);
      String::~String();
      String::String(&v229, "StartingBuffTime");
      *(_DWORD *)(a1 + 436) = LogicData::getIntegerValue(a1, (__int64)&v229);
      String::~String();
      *(_DWORD *)(a1 + 664) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexTileSizeOverride,
                                v11);
      *(_DWORD *)(a1 + 412) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexProjectileStartRadius,
                                v12);
      *(_DWORD *)(a1 + 416) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexProjectileStartZ,
                                v13);
      *(_DWORD *)(a1 + 420) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexStopMovementAfterMS,
                                v14);
      *(_DWORD *)(a1 + 424) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexWaitMS,
                                v15);
      *(_DWORD *)(a1 + 660) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexCollisionRadius,
                                v16);
      *(_DWORD *)(a1 + 428) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexGrowSize,
                                v17);
      *(_DWORD *)(a1 + 432) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexFlyingHeight,
                                v18);
      *(_BYTE *)(a1 + 782) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexHealOnMorph,
                               v19);
      *(_BYTE *)(a1 + 783) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexAreaBuffEnemies,
                               v20);
      *(_BYTE *)(a1 + 784) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexAreaBuffOwnTroops,
                               v21);
      *(_BYTE *)(a1 + 785) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexIgnorePushback,
                               v22);
      *(_BYTE *)(a1 + 786) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexUseAnimator,
                               v23);
      *(_BYTE *)(a1 + 787) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexTargetOnlyBuildings,
                               v24);
      *(_BYTE *)(a1 + 788) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexKamikaze,
                               v25);
      String::String(&v227, "AttachedCharacter");
      v26 = (const String *)LogicData::getValue(a1, (__int64)&v227);
      String::String(&v228, v26);
      String::~String();
      if ( v228.m_length )
      {
        *(_QWORD *)(a1 + 376) = LogicDataTables::getCharacterByName(
                                  (LogicKickAllianceMemberCommand *)&v228,
                                  (const String *)a1,
                                  v27);
        String::String(&v226, "AttachedCharacterHeight");
        *(_DWORD *)(a1 + 384) = LogicData::getIntegerValue(a1, (__int64)&v226);
        String::~String();
      }
      String::String(&v225, "LifeTime");
      *(_DWORD *)(a1 + 776) = LogicData::getIntegerValue(a1, (__int64)&v225);
      String::~String();
      String::String(&v224, "AttacksAir");
      *(_BYTE *)(a1 + 440) = LogicData::getBooleanValue(a1, (__int64)&v224);
      String::~String();
      String::String(&v223, "AttacksGround");
      *(_BYTE *)(a1 + 441) = LogicData::getBooleanValue(a1, (__int64)&v223);
      String::~String();
      String::String(&v222, "SelfAsAoeCenter");
      *(_BYTE *)(a1 + 789) = LogicData::getBooleanValue(a1, (__int64)&v222);
      String::~String();
      String::String(&v221, "ForceAttackAnimationToEnd");
      *(_BYTE *)(a1 + 790) = LogicData::getBooleanValue(a1, (__int64)&v221);
      String::~String();
      String::String(&v220, "ChargeSpeedMultiplier");
      *(_DWORD *)(a1 + 540) = LogicData::getIntegerValue(a1, (__int64)&v220);
      String::~String();
      if ( !*(_BYTE *)(a1 + 441) && !*(_BYTE *)(a1 + 440) )
        *(_BYTE *)(a1 + 441) = 1;
      if ( *(_QWORD *)(a1 + 376) )
      {
        LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexRedExportName, v28);
        String::operator=((String *)(a1 + 352));
        LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexBlueExportName, v29);
        String::operator=((String *)(a1 + 328));
      }
      else
      {
        String::operator=(a1 + 352, "");
        String::operator=(a1 + 328, "");
      }
      *(_DWORD *)(a1 + 512) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexSpeed,
                                v30);
      *(_DWORD *)(a1 + 516) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexHitSpeed,
                                v31);
      *(_DWORD *)(a1 + 520) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexAreaDamageRadius,
                                v32);
      *(_DWORD *)(a1 + 524) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexRange,
                                v33);
      *(_DWORD *)(a1 + 528) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexMinimumRange,
                                v34);
      *(_DWORD *)(a1 + 532) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexSightRange,
                                v35);
      v36 = *(_QWORD *)(a1 + 8);
      String::String(&v219, "SightClip");
      *(_DWORD *)(a1 + 672) = CSVRow::getIntegerValue(v36, &v219, 0);
      String::~String();
      *(_DWORD *)(a1 + 536) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexChargeRange,
                                v37);
      *(_DWORD *)(a1 + 544) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexPushback,
                                v38);
      *(_DWORD *)(a1 + 548) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexAreaBuffRadius,
                                v39);
      *(_DWORD *)(a1 + 552) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexAreaBuffTime,
                                v40);
      *(_DWORD *)(a1 + 556) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexManaOnDeath,
                                v41);
      *(_DWORD *)(a1 + 632) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexReloadTime,
                                v42);
      IntegerValueAt = LogicData::getIntegerValueAt(
                         (AreaEffectObject *)a1,
                         (unsigned int)LogicCharacterData::sm_columnIndexReloadAfterHits,
                         v43);
      *(_DWORD *)(a1 + 628) = IntegerValueAt;
      if ( IntegerValueAt <= 0 )
        *(_QWORD *)(a1 + 628) = 0;
      *(_DWORD *)(a1 + 560) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexGrowTime,
                                v45);
      *(_DWORD *)(a1 + 564) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexDashCooldown,
                                v46);
      *(_DWORD *)(a1 + 568) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexJumpHeight,
                                v47);
      *(_DWORD *)(a1 + 572) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexDashRadius,
                                v48);
      *(_DWORD *)(a1 + 576) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexDashPushBack,
                                v49);
      *(_DWORD *)(a1 + 580) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexBuffOnDamageTime,
                                v50);
      v52 = LogicData::getIntegerValueAt(
              (AreaEffectObject *)a1,
              (unsigned int)LogicCharacterData::sm_columnIndexSpecialAttackInterval,
              v51);
      if ( v52 )
        v54 = v52;
      else
        v54 = 1;
      *(_DWORD *)(a1 + 584) = v54;
      *(_DWORD *)(a1 + 588) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexDashMinRange,
                                v53);
      *(_DWORD *)(a1 + 592) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexJumpSpeed,
                                v55);
      *(_DWORD *)(a1 + 596) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexSpawnStartTime,
                                v56);
      *(_DWORD *)(a1 + 600) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexSpawnInterval,
                                v57);
      *(_DWORD *)(a1 + 604) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexSpawnNumber,
                                v58);
      *(_DWORD *)(a1 + 608) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexSpawnPauseTime,
                                v59);
      *(_DWORD *)(a1 + 612) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexSpawnLimit,
                                v60);
      *(_DWORD *)(a1 + 616) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexDashMaxRange,
                                v61);
      *(_DWORD *)(a1 + 620) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexLoadTime,
                                v62);
      String::String(&v218, "DeployTime");
      *(_DWORD *)(a1 + 624) = LogicData::getIntegerValue(a1, (__int64)&v218);
      String::~String();
      v63 = *(_QWORD *)(a1 + 8);
      String::String(&v217, "JumpEnabled");
      *(_BYTE *)(a1 + 408) = CSVRow::getBooleanValue(v63, &v217, 0);
      String::~String();
      *(_DWORD *)(a1 + 116) = 0;
      ArraySizeAt = CSVRow::getArraySizeAt(
                      *(_QWORD *)(a1 + 8),
                      (unsigned int)LogicCharacterData::sm_columnIndexDamageTypeVulnerabilities);
      LogicArrayList<LogicDamageTypeData const*>::ensureCapacity(a1 + 104, ArraySizeAt);
      if ( (int)ArraySizeAt >= 1 )
      {
        v65 = 0;
        do
        {
          ValueAt = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                        a1,
                                                        (unsigned int)LogicCharacterData::sm_columnIndexDamageTypeVulnerabilities,
                                                        v65);
          DamageTypeByName = LogicDataTables::getDamageTypeByName(ValueAt, (const String *)a1, v67);
          *(__n128 *)&v69 = Debugger::doAssert((Debugger *)(DamageTypeByName != 0), (bool)"", v68);
          LogicArrayList<LogicDamageTypeData const*>::add(a1 + 104, &DamageTypeByName, v69);
          v65 = (const char *)(unsigned int)((_DWORD)v65 + 1);
        }
        while ( (int)v65 < (int)ArraySizeAt );
      }
      *(_DWORD *)(a1 + 132) = 0;
      v70 = CSVRow::getArraySizeAt(
              *(_QWORD *)(a1 + 8),
              (unsigned int)LogicCharacterData::sm_columnIndexDamageTypeImmunities);
      LogicArrayList<LogicDamageTypeData const*>::ensureCapacity(a1 + 120, v70);
      if ( (int)v70 >= 1 )
      {
        v72 = 0;
        do
        {
          v73 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                    a1,
                                                    (unsigned int)LogicCharacterData::sm_columnIndexDamageTypeImmunities,
                                                    v72);
          v215 = LogicDataTables::getDamageTypeByName(v73, (const String *)a1, v74);
          *(__n128 *)&v76 = Debugger::doAssert((Debugger *)(v215 != 0), (bool)"", v75);
          LogicArrayList<LogicDamageTypeData const*>::add(a1 + 120, &v215, v76);
          v72 = (const char *)(unsigned int)((_DWORD)v72 + 1);
        }
        while ( (int)v72 < (int)v70 );
      }
      v77 = LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexProjectile, v71);
      *(_QWORD *)(a1 + 144) = LogicDataTables::getProjectileByName(v77, a1);
      v79 = LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexProjectileSpecial, v78);
      *(_QWORD *)(a1 + 152) = LogicDataTables::getProjectileByName(v79, a1);
      v81 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                a1,
                                                (unsigned int)LogicCharacterData::sm_columnIndexProjectileEffect,
                                                v80);
      *(_QWORD *)(a1 + 168) = LogicDataTables::getEffectByName(v81, (const String *)a1, v82);
      v84 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                a1,
                                                (unsigned int)LogicCharacterData::sm_columnIndexProjectileEffectSpecial,
                                                v83);
      *(_QWORD *)(a1 + 176) = LogicDataTables::getEffectByName(v84, (const String *)a1, v85);
      v87 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                a1,
                                                (unsigned int)LogicCharacterData::sm_columnIndexDamageEffect,
                                                v86);
      *(_QWORD *)(a1 + 192) = LogicDataTables::getEffectByName(v87, (const String *)a1, v88);
      v90 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                a1,
                                                (unsigned int)LogicCharacterData::sm_columnIndexDamageEffectSpecial,
                                                v89);
      *(_QWORD *)(a1 + 200) = LogicDataTables::getEffectByName(v90, (const String *)a1, v91);
      v93 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                a1,
                                                (unsigned int)LogicCharacterData::sm_columnIndexDeathEffect,
                                                v92);
      *(_QWORD *)(a1 + 216) = LogicDataTables::getEffectByName(v93, (const String *)a1, v94);
      v96 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                a1,
                                                (unsigned int)LogicCharacterData::sm_columnIndexDamageType,
                                                v95);
      v98 = LogicDataTables::getDamageTypeByName(v96, (const String *)a1, v97);
      *(_QWORD *)(a1 + 208) = v98;
      if ( !v98 )
        *(_QWORD *)(a1 + 208) = LogicDataTables::getPhysicalDamageType();
      v100 = LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexStartingBuff, v99);
      *(_QWORD *)(a1 + 224) = LogicDataTables::getCharacterBuffByName(v100, a1);
      v102 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexSpawnEffect,
                                                 v101);
      *(_QWORD *)(a1 + 232) = LogicDataTables::getEffectByName(v102, (const String *)a1, v103);
      v105 = LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexEgg, v104);
      *(_QWORD *)(a1 + 240) = LogicDataTables::getEggByName(v105, a1);
      v107 = LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexAreaBuff, v106);
      *(_QWORD *)(a1 + 248) = LogicDataTables::getCharacterBuffByName(v107, a1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexSpeed,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHitpoints,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHitSpeed,
        0,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDamage,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexAreaDamageRadius,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexRange,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexMinimumRange,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHealing,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDeathDamage,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexChargeRange,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexPushback,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexAreaBuffRadius,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexPushback,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexManaOnDeath,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexReloadAfterHits,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexReloadTime,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexBuffOnDamageTime,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexSpecialAttackInterval,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDashCooldown,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDashDamage,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexJumpHeight,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDashPushBack,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDashRadius,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexSpawnStartTime,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexSpawnInterval,
        0,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexSpawnNumber,
        1,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexSpawnPauseTime,
        0,
        1);
      LogicSpellData::validateScaledValue(
        *(InitState **)(a1 + 8),
        (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexSpawnLimit,
        0,
        1);
      if ( (int)LogicCharacterData::getDamage(a1, 0) > 0
        || (int)LogicSpellData::getScaledValue(
                  *(InitState **)(a1 + 8),
                  (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHealing,
                  0,
                  1) > 0
        || *(_QWORD *)(a1 + 144) )
      {
        LogicData::validateIntColumnRange(
          *(_QWORD *)(a1 + 8),
          (unsigned int)LogicCharacterData::sm_columnIndexHitSpeed,
          50,
          100000);
        if ( *(_QWORD *)(a1 + 144) )
        {
          if ( (int)LogicSpellData::getScaledValue(
                      *(InitState **)(a1 + 8),
                      (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHealing,
                      0,
                      1) > 0
            || (int)LogicCharacterData::getDamage(a1, 0) >= 1 )
          {
            LogicData::getDebuggerName((AreaEffectObject *)a1);
            if ( v213.m_bytes + 1 > 8 )
              pHeap = (internal_t *)v213.internal.pHeap;
            else
              pHeap = &v213.internal;
            String::format((String *)"Cannot have characters with projectile and (heal or damage). In %s", v109, pHeap);
            Debugger::warning((__siginfo *)&v214, v111);
            String::~String();
            String::~String();
          }
        }
      }
      *(float *)(a1 + 640) = (float)(int)LogicData::getIntegerValueAt(
                                           (AreaEffectObject *)a1,
                                           (unsigned int)LogicCharacterData::sm_columnIndexShadowScaleX,
                                           v108)
                           / 100.0;
      v114 = (float)(int)LogicData::getIntegerValueAt(
                           (AreaEffectObject *)a1,
                           (unsigned int)LogicCharacterData::sm_columnIndexShadowScaleY,
                           v112)
           / 100.0;
      *(float *)(a1 + 644) = v114;
      if ( v114 == 0.0 )
        *(_DWORD *)(a1 + 644) = *(_DWORD *)(a1 + 640);
      *(float *)(a1 + 648) = (float)(int)LogicData::getIntegerValueAt(
                                           (AreaEffectObject *)a1,
                                           (unsigned int)LogicCharacterData::sm_columnIndexShadowX,
                                           v113);
      *(float *)(a1 + 652) = (float)(int)LogicData::getIntegerValueAt(
                                           (AreaEffectObject *)a1,
                                           (unsigned int)LogicCharacterData::sm_columnIndexShadowY,
                                           v115);
      *(float *)(a1 + 656) = (float)(int)LogicData::getIntegerValueAt(
                                           (AreaEffectObject *)a1,
                                           (unsigned int)LogicCharacterData::sm_columnIndexShadowSkew,
                                           v116)
                           / 100.0;
      *(float *)(a1 + 636) = (float)(int)LogicData::getIntegerValueAt(
                                           (AreaEffectObject *)a1,
                                           (unsigned int)LogicCharacterData::sm_columnIndexScale,
                                           v117)
                           / 100.0;
      v119 = LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexHealthBar, v118);
      *(_QWORD *)(a1 + 680) = LogicDataTables::getHealthBarByName(v119, a1);
      *(_DWORD *)(a1 + 688) = LogicData::getIntegerValueAt(
                                (AreaEffectObject *)a1,
                                (unsigned int)LogicCharacterData::sm_columnIndexHealthBarOffsetY,
                                v120);
      *(_BYTE *)(a1 + 692) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexShowHealthNumber,
                               v121);
      v123 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexAttackStartEffect,
                                                 v122);
      *(_QWORD *)(a1 + 696) = LogicDataTables::getEffectByName(v123, (const String *)a1, v124);
      v126 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexAttackStartEffectSpecial,
                                                 v125);
      *(_QWORD *)(a1 + 704) = LogicDataTables::getEffectByName(v126, (const String *)a1, v127);
      v129 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexMorphCharacter,
                                                 v128);
      *(_QWORD *)(a1 + 256) = LogicDataTables::getCharacterByName(v129, (const String *)a1, v130);
      v132 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexMorphEffect,
                                                 v131);
      *(_QWORD *)(a1 + 264) = LogicDataTables::getEffectByName(v132, (const String *)a1, v133);
      v135 = LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexAreaEffectOnMorph, v134);
      *(_QWORD *)(a1 + 136) = LogicDataTables::getAreaEffectObjectByName(v135, a1);
      v137 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexContinuousEffect,
                                                 v136);
      *(_QWORD *)(a1 + 184) = LogicDataTables::getEffectByName(v137, (const String *)a1, v138);
      v140 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexLandingEffect,
                                                 v139);
      *(_QWORD *)(a1 + 160) = LogicDataTables::getEffectByName(v140, (const String *)a1, v141);
      v143 = LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexBuffOnDamage, v142);
      *(_QWORD *)(a1 + 296) = LogicDataTables::getCharacterBuffByName(v143, a1);
      v145 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexSpawnCharacter,
                                                 v144);
      *(_QWORD *)(a1 + 304) = LogicDataTables::getCharacterByName(v145, (const String *)a1, v146);
      v148 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexSpawnCharacterEffect,
                                                 v147);
      *(_QWORD *)(a1 + 280) = LogicDataTables::getEffectByName(v148, (const String *)a1, v149);
      v151 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexChargeEffect,
                                                 v150);
      *(_QWORD *)(a1 + 272) = LogicDataTables::getEffectByName(v151, (const String *)a1, v152);
      v154 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexTakeDamageEffect,
                                                 v153);
      *(_QWORD *)(a1 + 392) = LogicDataTables::getEffectByName(v154, (const String *)a1, v155);
      v157 = (LogicKickAllianceMemberCommand *)LogicData::getValueAt(
                                                 a1,
                                                 (unsigned int)LogicCharacterData::sm_columnIndexMoveEffect,
                                                 v156);
      *(_QWORD *)(a1 + 400) = LogicDataTables::getEffectByName(v157, (const String *)a1, v158);
      *(_BYTE *)(a1 + 780) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexIgnoreTargetIfImmuneToDamageBuff,
                               v159);
      *(_BYTE *)(a1 + 781) = LogicData::getBooleanValueAt(
                               (AreaEffectObject *)a1,
                               (unsigned int)LogicCharacterData::sm_columnIndexIsSummonerTower,
                               v160);
      v161 = *(_QWORD *)(a1 + 8);
      String::String(&v212, "DeathDamageRadius");
      *(_DWORD *)(a1 + 444) = CSVRow::getIntegerValue(v161, &v212, 0);
      String::~String();
      v162 = *(_QWORD *)(a1 + 8);
      String::String(&v211, "DeathPushBack");
      *(_DWORD *)(a1 + 448) = CSVRow::getIntegerValue(v162, &v211, 0);
      String::~String();
      v163 = *(_QWORD *)(a1 + 8);
      String::String(&v210, "DeathSpawnCharacter");
      v164 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v163, &v210, 0);
      *(_QWORD *)(a1 + 456) = LogicDataTables::getCharacterByName(v164, (const String *)a1, v165);
      String::~String();
      if ( *(_QWORD *)(a1 + 456) )
      {
        v167 = *(_QWORD *)(a1 + 8);
        String::String(&v209, "DeathSpawnCount");
        IntegerValue = (LogicMath *)CSVRow::getIntegerValue(v167, &v209, 0);
        *(_DWORD *)(a1 + 452) = LogicMath::max(IntegerValue, 1, v169);
        String::~String();
      }
      else
      {
        *(_DWORD *)(a1 + 452) = 0;
      }
      v170 = LogicData::getIntegerValueAt(
               (AreaEffectObject *)a1,
               (unsigned int)LogicCharacterData::sm_columnIndexMass,
               v166);
      *(_DWORD *)(a1 + 668) = v170;
      if ( !(_DWORD)v170 )
      {
        v170 = (unsigned int)((int)(*(_DWORD *)(a1 + 660) * *(_DWORD *)(a1 + 660) / 0xFAu * *(_DWORD *)(a1 + 660)) / 62500);
        *(_DWORD *)(a1 + 668) = (int)(*(_DWORD *)(a1 + 660) * *(_DWORD *)(a1 + 660) / 0xFAu * *(_DWORD *)(a1 + 660)) / 62500;
      }
      *(_DWORD *)(a1 + 668) = LogicMath::clamp((#1237 *)v170, 1, 20, v171);
      v172 = *(_QWORD *)(a1 + 8);
      String::String(&v208, "TargettedDamageEffect1");
      v173 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v172, &v208, 0);
      *(_QWORD *)(a1 + 712) = LogicDataTables::getEffectByName(v173, (const String *)a1, v174);
      String::~String();
      v175 = *(_QWORD *)(a1 + 8);
      String::String(&v207, "TargettedDamageEffect2");
      v176 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v175, &v207, 0);
      *(_QWORD *)(a1 + 720) = LogicDataTables::getEffectByName(v176, (const String *)a1, v177);
      String::~String();
      v178 = *(_QWORD *)(a1 + 8);
      String::String(&v206, "TargettedDamageEffect3");
      v179 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v178, &v206, 0);
      *(_QWORD *)(a1 + 728) = LogicDataTables::getEffectByName(v179, (const String *)a1, v180);
      String::~String();
      v181 = *(_QWORD *)(a1 + 8);
      String::String(&v205, "DamageLevelTransitionEffect12");
      v182 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v181, &v205, 0);
      *(_QWORD *)(a1 + 736) = LogicDataTables::getEffectByName(v182, (const String *)a1, v183);
      String::~String();
      v184 = *(_QWORD *)(a1 + 8);
      String::String(&v204, "DamageLevelTransitionEffect23");
      v185 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v184, &v204, 0);
      *(_QWORD *)(a1 + 744) = LogicDataTables::getEffectByName(v185, (const String *)a1, v186);
      String::~String();
      v187 = *(_QWORD *)(a1 + 8);
      String::String(&v203, "FlameEffect1");
      v188 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v187, &v203, 0);
      *(_QWORD *)(a1 + 752) = LogicDataTables::getEffectByName(v188, (const String *)a1, v189);
      String::~String();
      v190 = *(_QWORD *)(a1 + 8);
      String::String(&v202, "FlameEffect2");
      v191 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v190, &v202, 0);
      *(_QWORD *)(a1 + 760) = LogicDataTables::getEffectByName(v191, (const String *)a1, v192);
      String::~String();
      v193 = *(_QWORD *)(a1 + 8);
      String::String(&v201, "FlameEffect3");
      v194 = (LogicKickAllianceMemberCommand *)CSVRow::getValue(v193, &v201, 0);
      *(_QWORD *)(a1 + 768) = LogicDataTables::getEffectByName(v194, (const String *)a1, v195);
      String::~String();
      if ( (int)CSVRow::getIntegerValueAt(
                  *(_QWORD *)(a1 + 8),
                  (unsigned int)LogicCharacterData::sm_columnIndexVariableDamageTime1) >= 1
        && (int)CSVRow::getIntegerValueAt(
                  *(_QWORD *)(a1 + 8),
                  (unsigned int)LogicCharacterData::sm_columnIndexVariableDamageTime2) >= 1 )
      {
        *(_BYTE *)(a1 + 464) = 1;
        if ( !(unsigned int)LogicSpellData::getScaledValue(
                              *(InitState **)(a1 + 8),
                              (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexVariableDamage2,
                              0,
                              1)
          || !(unsigned int)LogicSpellData::getScaledValue(
                              *(InitState **)(a1 + 8),
                              (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexVariableDamage3,
                              0,
                              1) )
        {
          Debugger::warning((__siginfo *)"VariableDamageTime 1&2 > 0 but VariableDamage 2 or 3 is zero", v196);
        }
      }
      v197 = *(_QWORD *)(a1 + 8);
      String::String(&v200, "RandomDeployDelay");
      *(_DWORD *)(a1 + 800) = CSVRow::getIntegerValue(v197, &v200, 0);
      String::~String();
      v198 = *(_QWORD *)(a1 + 8);
      String::String(&v199, "DeployBaseAnimExportName");
      CSVRow::getValue(v198, &v199, 0);
      String::operator=((String *)(a1 + 808));
      String::~String();
      String::~String();
    }

    __n128 __fastcall LogicCharacterData::resetStatics(#1224 *a1)
    {
      const char *v2; // x2
      const char *v3; // x2
      const char *v4; // x2
      const char *v5; // x2
      const char *v6; // x2
      const char *v7; // x2
      const char *v8; // x2
      const char *v9; // x2
      const char *v10; // x2
      const char *v11; // x2
      const char *v12; // x2
      const char *v13; // x2
      const char *v14; // x2
      const char *v15; // x2
      const char *v16; // x2
      const char *v17; // x2
      const char *v18; // x2
      const char *v19; // x2
      const char *v20; // x2
      const char *v21; // x2
      const char *v22; // x2
      const char *v23; // x2
      const char *v24; // x2
      const char *v25; // x2
      const char *v26; // x2
      const char *v27; // x2
      const char *v28; // x2
      const char *v29; // x2
      const char *v30; // x2
      const char *v31; // x2
      const char *v32; // x2
      const char *v33; // x2
      const char *v34; // x2
      const char *v35; // x2
      const char *v36; // x2
      const char *v37; // x2
      const char *v38; // x2
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
      const char *v52; // x2
      const char *v53; // x2
      const char *v54; // x2
      const char *v55; // x2
      const char *v56; // x2
      const char *v57; // x2
      const char *v58; // x2
      const char *v59; // x2
      const char *v60; // x2
      const char *v61; // x2
      const char *v62; // x2
      const char *v63; // x2
      const char *v64; // x2
      const char *v65; // x2
      const char *v66; // x2
      const char *v67; // x2
      const char *v68; // x2
      const char *v69; // x2
      const char *v70; // x2
      const char *v71; // x2
      const char *v72; // x2
      const char *v73; // x2
      const char *v74; // x2
      const char *v75; // x2
      const char *v76; // x2
      const char *v77; // x2
      const char *v78; // x2
      const char *v79; // x2
      const char *v80; // x2
      const char *v81; // x2
      const char *v82; // x2
      const char *v83; // x2
      const char *v84; // x2
      const char *v85; // x2
      const char *v86; // x2
      const char *v87; // x2
      const char *v88; // x2
      const char *v89; // x2
      const char *v90; // x2
      const char *v91; // x2
      _BOOL8 v92; // x0
      const char *v93; // x2
      _BOOL8 v94; // x0
      const char *v95; // x2
      _BOOL8 v96; // x0
      const char *v97; // x2
      _BOOL8 v98; // x0
      const char *v99; // x2
      _BOOL8 v100; // x0
      const char *v101; // x2
      _BOOL8 v102; // x0
      const char *v103; // x2
      _BOOL8 v104; // x0
      const char *v105; // x2
      _BOOL8 v106; // x0
      const char *v107; // x2
      _BOOL8 v108; // x0
      const char *v109; // x2
      _BOOL8 v110; // x0
      const char *v111; // x2
      _BOOL8 v112; // x0
      const char *v113; // x2
      _BOOL8 v114; // x0
      const char *v115; // x2
      _BOOL8 v116; // x0
      const char *v117; // x2
      _BOOL8 v118; // x0
      const char *v119; // x2
      _BOOL8 v120; // x0
      const char *v121; // x2
      _BOOL8 v122; // x0
      const char *v123; // x2
      _BOOL8 v124; // x0
      const char *v125; // x2
      _BOOL8 v126; // x0
      const char *v127; // x2
      _BOOL8 v128; // x0
      const char *v129; // x2
      _BOOL8 v130; // x0
      const char *v131; // x2
      _BOOL8 v132; // x0
      const char *v133; // x2
      _BOOL8 v134; // x0
      const char *v135; // x2
      _BOOL8 v136; // x0
      const char *v137; // x2
      _BOOL8 v138; // x0
      const char *v139; // x2
      _BOOL8 v140; // x0
      const char *v141; // x2
      String v143; // [xsp+8h] [xbp-A58h] BYREF
      String v144; // [xsp+20h] [xbp-A40h] BYREF
      String v145; // [xsp+38h] [xbp-A28h] BYREF
      String v146; // [xsp+50h] [xbp-A10h] BYREF
      String v147; // [xsp+68h] [xbp-9F8h] BYREF
      String v148; // [xsp+80h] [xbp-9E0h] BYREF
      String v149; // [xsp+98h] [xbp-9C8h] BYREF
      String v150; // [xsp+B0h] [xbp-9B0h] BYREF
      String v151; // [xsp+C8h] [xbp-998h] BYREF
      String v152; // [xsp+E0h] [xbp-980h] BYREF
      String v153; // [xsp+F8h] [xbp-968h] BYREF
      String v154; // [xsp+110h] [xbp-950h] BYREF
      String v155; // [xsp+128h] [xbp-938h] BYREF
      String v156; // [xsp+140h] [xbp-920h] BYREF
      String v157; // [xsp+158h] [xbp-908h] BYREF
      String v158; // [xsp+170h] [xbp-8F0h] BYREF
      String v159; // [xsp+188h] [xbp-8D8h] BYREF
      String v160; // [xsp+1A0h] [xbp-8C0h] BYREF
      String v161; // [xsp+1B8h] [xbp-8A8h] BYREF
      String v162; // [xsp+1D0h] [xbp-890h] BYREF
      String v163; // [xsp+1E8h] [xbp-878h] BYREF
      String v164; // [xsp+200h] [xbp-860h] BYREF
      String v165; // [xsp+218h] [xbp-848h] BYREF
      String v166; // [xsp+230h] [xbp-830h] BYREF
      String v167; // [xsp+248h] [xbp-818h] BYREF
      String v168; // [xsp+260h] [xbp-800h] BYREF
      String v169; // [xsp+278h] [xbp-7E8h] BYREF
      String v170; // [xsp+290h] [xbp-7D0h] BYREF
      String v171; // [xsp+2A8h] [xbp-7B8h] BYREF
      String v172; // [xsp+2C0h] [xbp-7A0h] BYREF
      String v173; // [xsp+2D8h] [xbp-788h] BYREF
      String v174; // [xsp+2F0h] [xbp-770h] BYREF
      String v175; // [xsp+308h] [xbp-758h] BYREF
      String v176; // [xsp+320h] [xbp-740h] BYREF
      String v177; // [xsp+338h] [xbp-728h] BYREF
      String v178; // [xsp+350h] [xbp-710h] BYREF
      String v179; // [xsp+368h] [xbp-6F8h] BYREF
      String v180; // [xsp+380h] [xbp-6E0h] BYREF
      String v181; // [xsp+398h] [xbp-6C8h] BYREF
      String v182; // [xsp+3B0h] [xbp-6B0h] BYREF
      String v183; // [xsp+3C8h] [xbp-698h] BYREF
      String v184; // [xsp+3E0h] [xbp-680h] BYREF
      String v185; // [xsp+3F8h] [xbp-668h] BYREF
      String v186; // [xsp+410h] [xbp-650h] BYREF
      String v187; // [xsp+428h] [xbp-638h] BYREF
      String v188; // [xsp+440h] [xbp-620h] BYREF
      String v189; // [xsp+458h] [xbp-608h] BYREF
      String v190; // [xsp+470h] [xbp-5F0h] BYREF
      String v191; // [xsp+488h] [xbp-5D8h] BYREF
      String v192; // [xsp+4A0h] [xbp-5C0h] BYREF
      String v193; // [xsp+4B8h] [xbp-5A8h] BYREF
      String v194; // [xsp+4D0h] [xbp-590h] BYREF
      String v195; // [xsp+4E8h] [xbp-578h] BYREF
      String v196; // [xsp+500h] [xbp-560h] BYREF
      String v197; // [xsp+518h] [xbp-548h] BYREF
      String v198; // [xsp+530h] [xbp-530h] BYREF
      String v199; // [xsp+548h] [xbp-518h] BYREF
      String v200; // [xsp+560h] [xbp-500h] BYREF
      String v201; // [xsp+578h] [xbp-4E8h] BYREF
      String v202; // [xsp+590h] [xbp-4D0h] BYREF
      String v203; // [xsp+5A8h] [xbp-4B8h] BYREF
      String v204; // [xsp+5C0h] [xbp-4A0h] BYREF
      String v205; // [xsp+5D8h] [xbp-488h] BYREF
      String v206; // [xsp+5F0h] [xbp-470h] BYREF
      String v207; // [xsp+608h] [xbp-458h] BYREF
      String v208; // [xsp+620h] [xbp-440h] BYREF
      String v209; // [xsp+638h] [xbp-428h] BYREF
      String v210; // [xsp+650h] [xbp-410h] BYREF
      String v211; // [xsp+668h] [xbp-3F8h] BYREF
      String v212; // [xsp+680h] [xbp-3E0h] BYREF
      String v213; // [xsp+698h] [xbp-3C8h] BYREF
      String v214; // [xsp+6B0h] [xbp-3B0h] BYREF
      String v215; // [xsp+6C8h] [xbp-398h] BYREF
      String v216; // [xsp+6E0h] [xbp-380h] BYREF
      String v217; // [xsp+6F8h] [xbp-368h] BYREF
      String v218; // [xsp+710h] [xbp-350h] BYREF
      String v219; // [xsp+728h] [xbp-338h] BYREF
      String v220; // [xsp+740h] [xbp-320h] BYREF
      String v221; // [xsp+758h] [xbp-308h] BYREF
      String v222; // [xsp+770h] [xbp-2F0h] BYREF
      String v223; // [xsp+788h] [xbp-2D8h] BYREF
      String v224; // [xsp+7A0h] [xbp-2C0h] BYREF
      String v225; // [xsp+7B8h] [xbp-2A8h] BYREF
      String v226; // [xsp+7D0h] [xbp-290h] BYREF
      String v227; // [xsp+7E8h] [xbp-278h] BYREF
      String v228; // [xsp+800h] [xbp-260h] BYREF
      String v229; // [xsp+818h] [xbp-248h] BYREF
      String v230; // [xsp+830h] [xbp-230h] BYREF
      String v231; // [xsp+848h] [xbp-218h] BYREF
      String v232; // [xsp+860h] [xbp-200h] BYREF
      String v233; // [xsp+878h] [xbp-1E8h] BYREF
      String v234; // [xsp+890h] [xbp-1D0h] BYREF
      String v235; // [xsp+8A8h] [xbp-1B8h] BYREF
      String v236; // [xsp+8C0h] [xbp-1A0h] BYREF
      String v237; // [xsp+8D8h] [xbp-188h] BYREF
      String v238; // [xsp+8F0h] [xbp-170h] BYREF
      String v239; // [xsp+908h] [xbp-158h] BYREF
      String v240; // [xsp+920h] [xbp-140h] BYREF
      String v241; // [xsp+938h] [xbp-128h] BYREF
      String v242; // [xsp+950h] [xbp-110h] BYREF
      String v243; // [xsp+968h] [xbp-F8h] BYREF
      String v244; // [xsp+980h] [xbp-E0h] BYREF
      String v245; // [xsp+998h] [xbp-C8h] BYREF
      String v246; // [xsp+9B0h] [xbp-B0h] BYREF
      String v247; // [xsp+9C8h] [xbp-98h] BYREF
      String v248; // [xsp+9E0h] [xbp-80h] BYREF
      String v249; // [xsp+9F8h] [xbp-68h] BYREF
      String v250; // [xsp+A10h] [xbp-50h] BYREF
      String v251; // [xsp+A28h] [xbp-38h] BYREF
    
      String::String(&v251, "VariableDamage3");
      LogicCharacterData::sm_columnIndexVariableDamage3 = CSVTable::getColumnIndexByName(a1, &v251);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexVariableDamage3 != -1), (bool)"", v2);
      String::String(&v250, "VariableDamage2");
      LogicCharacterData::sm_columnIndexVariableDamage2 = CSVTable::getColumnIndexByName(a1, &v250);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexVariableDamage2 != -1), (bool)"", v3);
      String::String(&v249, "VariableDamageTime2");
      LogicCharacterData::sm_columnIndexVariableDamageTime2 = CSVTable::getColumnIndexByName(a1, &v249);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexVariableDamageTime2 != -1), (bool)"", v4);
      String::String(&v248, "VariableDamageTime1");
      LogicCharacterData::sm_columnIndexVariableDamageTime1 = CSVTable::getColumnIndexByName(a1, &v248);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexVariableDamageTime1 != -1), (bool)"", v5);
      String::String(&v247, "Speed");
      LogicCharacterData::sm_columnIndexSpeed = CSVTable::getColumnIndexByName(a1, &v247);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpeed != -1), (bool)"", v6);
      String::String(&v246, "Hitpoints");
      LogicCharacterData::sm_columnIndexHitpoints = CSVTable::getColumnIndexByName(a1, &v246);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexHitpoints != -1), (bool)"", v7);
      String::String(&v245, "HitSpeed");
      LogicCharacterData::sm_columnIndexHitSpeed = CSVTable::getColumnIndexByName(a1, &v245);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexHitSpeed != -1), (bool)"", v8);
      String::String(&v244, "LoadTime");
      LogicCharacterData::sm_columnIndexLoadTime = CSVTable::getColumnIndexByName(a1, &v244);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexLoadTime != -1), (bool)"", v9);
      String::String(&v243, "Damage");
      LogicCharacterData::sm_columnIndexDamage = CSVTable::getColumnIndexByName(a1, &v243);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDamage != -1), (bool)"", v10);
      String::String(&v242, "DamageType");
      LogicCharacterData::sm_columnIndexDamageType = CSVTable::getColumnIndexByName(a1, &v242);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDamageType != -1), (bool)"", v11);
      String::String(&v241, "AreaDamageRadius");
      LogicCharacterData::sm_columnIndexAreaDamageRadius = CSVTable::getColumnIndexByName(a1, &v241);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexAreaDamageRadius != -1), (bool)"", v12);
      String::String(&v240, "TargetOnlyBuildings");
      LogicCharacterData::sm_columnIndexTargetOnlyBuildings = CSVTable::getColumnIndexByName(a1, &v240);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexTargetOnlyBuildings != -1), (bool)"", v13);
      String::String(&v239, "DamageTypeVulnerabilities");
      LogicCharacterData::sm_columnIndexDamageTypeVulnerabilities = CSVTable::getColumnIndexByName(a1, &v239);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDamageTypeVulnerabilities != -1), (bool)"", v14);
      String::String(&v238, "DamageTypeImmunities");
      LogicCharacterData::sm_columnIndexDamageTypeImmunities = CSVTable::getColumnIndexByName(a1, &v238);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDamageTypeImmunities != -1), (bool)"", v15);
      String::String(&v237, "Range");
      LogicCharacterData::sm_columnIndexRange = CSVTable::getColumnIndexByName(a1, &v237);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexRange != -1), (bool)"", v16);
      String::String(&v236, "MinimumRange");
      LogicCharacterData::sm_columnIndexMinimumRange = CSVTable::getColumnIndexByName(a1, &v236);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexMinimumRange != -1), (bool)"", v17);
      String::String(&v235, "Healing");
      LogicCharacterData::sm_columnIndexHealing = CSVTable::getColumnIndexByName(a1, &v235);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexHealing != -1), (bool)"", v18);
      String::String(&v234, "FileName");
      LogicCharacterData::sm_columnIndexFileName = CSVTable::getColumnIndexByName(a1, &v234);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexFileName != -1), (bool)"", v19);
      String::String(&v233, "BlueExportName");
      LogicCharacterData::sm_columnIndexBlueExportName = CSVTable::getColumnIndexByName(a1, &v233);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexBlueExportName != -1), (bool)"", v20);
      String::String(&v232, "RedExportName");
      LogicCharacterData::sm_columnIndexRedExportName = CSVTable::getColumnIndexByName(a1, &v232);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexRedExportName != -1), (bool)"", v21);
      String::String(&v231, "SightRange");
      LogicCharacterData::sm_columnIndexSightRange = CSVTable::getColumnIndexByName(a1, &v231);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSightRange != -1), (bool)"", v22);
      String::String(&v230, "Projectile");
      LogicCharacterData::sm_columnIndexProjectile = CSVTable::getColumnIndexByName(a1, &v230);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexProjectile != -1), (bool)"", v23);
      String::String(&v229, "ProjectileEffect");
      LogicCharacterData::sm_columnIndexProjectileEffect = CSVTable::getColumnIndexByName(a1, &v229);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexProjectileEffect != -1), (bool)"", v24);
      String::String(&v228, "DamageEffect");
      LogicCharacterData::sm_columnIndexDamageEffect = CSVTable::getColumnIndexByName(a1, &v228);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDamageEffect != -1), (bool)"", v25);
      String::String(&v227, "UseAnimator");
      LogicCharacterData::sm_columnIndexUseAnimator = CSVTable::getColumnIndexByName(a1, &v227);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexUseAnimator != -1), (bool)"", v26);
      String::String(&v226, "DeathEffect");
      LogicCharacterData::sm_columnIndexDeathEffect = CSVTable::getColumnIndexByName(a1, &v226);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDeathEffect != -1), (bool)"", v27);
      String::String(&v225, "StartingBuff");
      LogicCharacterData::sm_columnIndexStartingBuff = CSVTable::getColumnIndexByName(a1, &v225);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexStartingBuff != -1), (bool)"", v28);
      String::String(&v224, "SpawnEffect");
      LogicCharacterData::sm_columnIndexSpawnEffect = CSVTable::getColumnIndexByName(a1, &v224);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpawnEffect != -1), (bool)"", v29);
      String::String(&v223, "CrowdEffects");
      LogicCharacterData::sm_columnIndexCrowdEffects = CSVTable::getColumnIndexByName(a1, &v223);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexCrowdEffects != -1), (bool)"", v30);
      String::String(&v222, "Egg");
      LogicCharacterData::sm_columnIndexEgg = CSVTable::getColumnIndexByName(a1, &v222);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexEgg != -1), (bool)"", v31);
      String::String(&v221, "ChargeRange");
      LogicCharacterData::sm_columnIndexChargeRange = CSVTable::getColumnIndexByName(a1, &v221);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexChargeRange != -1), (bool)"", v32);
      String::String(&v220, "Pushback");
      LogicCharacterData::sm_columnIndexPushback = CSVTable::getColumnIndexByName(a1, &v220);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexPushback != -1), (bool)"", v33);
      String::String(&v219, "IgnorePushback");
      LogicCharacterData::sm_columnIndexIgnorePushback = CSVTable::getColumnIndexByName(a1, &v219);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexIgnorePushback != -1), (bool)"", v34);
      String::String(&v218, "AreaBuff");
      LogicCharacterData::sm_columnIndexAreaBuff = CSVTable::getColumnIndexByName(a1, &v218);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexAreaBuff != -1), (bool)"", v35);
      String::String(&v217, "AreaBuffRadius");
      LogicCharacterData::sm_columnIndexAreaBuffRadius = CSVTable::getColumnIndexByName(a1, &v217);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexAreaBuffRadius != -1), (bool)"", v36);
      String::String(&v216, "AreaBuffTime");
      LogicCharacterData::sm_columnIndexAreaBuffTime = CSVTable::getColumnIndexByName(a1, &v216);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexAreaBuffTime != -1), (bool)"", v37);
      String::String(&v215, "AreaBuffOwnTroops");
      LogicCharacterData::sm_columnIndexAreaBuffOwnTroops = CSVTable::getColumnIndexByName(a1, &v215);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexAreaBuffOwnTroops != -1), (bool)"", v38);
      String::String(&v214, "AreaBuffEnemies");
      LogicCharacterData::sm_columnIndexAreaBuffEnemies = CSVTable::getColumnIndexByName(a1, &v214);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexAreaBuffEnemies != -1), (bool)"", v39);
      String::String(&v213, "ShadowScaleX");
      v40 = (unsigned int)CSVTable::getColumnIndexByName(a1, &v213) != -1;
      Debugger::doAssert((Debugger *)v40, (bool)"", v41);
      String::~String();
      String::String(&v212, "ShadowScaleY");
      v42 = (unsigned int)CSVTable::getColumnIndexByName(a1, &v212) != -1;
      Debugger::doAssert((Debugger *)v42, (bool)"", v43);
      String::~String();
      String::String(&v211, "ShadowX");
      v44 = (unsigned int)CSVTable::getColumnIndexByName(a1, &v211) != -1;
      Debugger::doAssert((Debugger *)v44, (bool)"", v45);
      String::~String();
      String::String(&v210, "ShadowY");
      v46 = (unsigned int)CSVTable::getColumnIndexByName(a1, &v210) != -1;
      Debugger::doAssert((Debugger *)v46, (bool)"", v47);
      String::~String();
      String::String(&v209, "Pushback");
      v48 = (unsigned int)CSVTable::getColumnIndexByName(a1, &v209) != -1;
      Debugger::doAssert((Debugger *)v48, (bool)"", v49);
      String::~String();
      String::String(&v208, "Scale");
      v50 = (unsigned int)CSVTable::getColumnIndexByName(a1, &v208) != -1;
      Debugger::doAssert((Debugger *)v50, (bool)"", v51);
      String::~String();
      String::String(&v207, "RedTopExportName");
      LogicCharacterData::sm_columnIndexRedTopExportName = CSVTable::getColumnIndexByName(a1, &v207);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexRedTopExportName != -1), (bool)"", v52);
      String::String(&v206, "BlueTopExportName");
      LogicCharacterData::sm_columnIndexBlueTopExportName = CSVTable::getColumnIndexByName(a1, &v206);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexBlueTopExportName != -1), (bool)"", v53);
      String::String(&v205, "ManaOnDeath");
      LogicCharacterData::sm_columnIndexManaOnDeath = CSVTable::getColumnIndexByName(a1, &v205);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexManaOnDeath != -1), (bool)"", v54);
      String::String(&v204, "ReloadTime");
      LogicCharacterData::sm_columnIndexReloadTime = CSVTable::getColumnIndexByName(a1, &v204);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexReloadTime != -1), (bool)"", v55);
      String::String(&v203, "ReloadAfterHits");
      LogicCharacterData::sm_columnIndexReloadAfterHits = CSVTable::getColumnIndexByName(a1, &v203);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexReloadAfterHits != -1), (bool)"", v56);
      String::String(&v202, "HealthBar");
      LogicCharacterData::sm_columnIndexHealthBar = CSVTable::getColumnIndexByName(a1, &v202);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexHealthBar != -1), (bool)"", v57);
      String::String(&v201, "HealthBarOffsetY");
      LogicCharacterData::sm_columnIndexHealthBarOffsetY = CSVTable::getColumnIndexByName(a1, &v201);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexHealthBarOffsetY != -1), (bool)"", v58);
      String::String(&v200, "DamageExportName");
      LogicCharacterData::sm_columnIndexDamageExportName = CSVTable::getColumnIndexByName(a1, &v200);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDamageExportName != -1), (bool)"", v59);
      String::String(&v199, "FlyingHeight");
      LogicCharacterData::sm_columnIndexFlyingHeight = CSVTable::getColumnIndexByName(a1, &v199);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexFlyingHeight != -1), (bool)"", v60);
      String::String(&v198, "AttackStartEffect");
      LogicCharacterData::sm_columnIndexAttackStartEffect = CSVTable::getColumnIndexByName(a1, &v198);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexAttackStartEffect != -1), (bool)"", v61);
      String::String(&v197, "GrowTime");
      LogicCharacterData::sm_columnIndexGrowTime = CSVTable::getColumnIndexByName(a1, &v197);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexGrowTime != -1), (bool)"", v62);
      String::String(&v196, "GrowSize");
      LogicCharacterData::sm_columnIndexGrowSize = CSVTable::getColumnIndexByName(a1, &v196);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexGrowSize != -1), (bool)"", v63);
      String::String(&v195, "MorphCharacter");
      LogicCharacterData::sm_columnIndexMorphCharacter = CSVTable::getColumnIndexByName(a1, &v195);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexMorphCharacter != -1), (bool)"", v64);
      String::String(&v194, "MorphEffect");
      LogicCharacterData::sm_columnIndexMorphEffect = CSVTable::getColumnIndexByName(a1, &v194);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexMorphEffect != -1), (bool)"", v65);
      String::String(&v193, "HealOnMorph");
      LogicCharacterData::sm_columnIndexHealOnMorph = CSVTable::getColumnIndexByName(a1, &v193);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexHealOnMorph != -1), (bool)"", v66);
      String::String(&v192, "AreaEffectOnMorph");
      LogicCharacterData::sm_columnIndexAreaEffectOnMorph = CSVTable::getColumnIndexByName(a1, &v192);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexAreaEffectOnMorph != -1), (bool)"", v67);
      String::String(&v191, "DashCooldown");
      LogicCharacterData::sm_columnIndexDashCooldown = CSVTable::getColumnIndexByName(a1, &v191);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDashCooldown != -1), (bool)"", v68);
      String::String(&v190, "DashDamage");
      LogicCharacterData::sm_columnIndexDashDamage = CSVTable::getColumnIndexByName(a1, &v190);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDashDamage != -1), (bool)"", v69);
      String::String(&v189, "JumpHeight");
      LogicCharacterData::sm_columnIndexJumpHeight = CSVTable::getColumnIndexByName(a1, &v189);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexJumpHeight != -1), (bool)"", v70);
      String::String(&v188, "DashPushBack");
      LogicCharacterData::sm_columnIndexDashPushBack = CSVTable::getColumnIndexByName(a1, &v188);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDashPushBack != -1), (bool)"", v71);
      String::String(&v187, "DashRadius");
      LogicCharacterData::sm_columnIndexDashRadius = CSVTable::getColumnIndexByName(a1, &v187);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDashRadius != -1), (bool)"", v72);
      String::String(&v186, "BuffOnDamage");
      LogicCharacterData::sm_columnIndexBuffOnDamage = CSVTable::getColumnIndexByName(a1, &v186);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexBuffOnDamage != -1), (bool)"", v73);
      String::String(&v185, "BuffOnDamageTime");
      LogicCharacterData::sm_columnIndexBuffOnDamageTime = CSVTable::getColumnIndexByName(a1, &v185);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexBuffOnDamageTime != -1), (bool)"", v74);
      String::String(&v184, "IgnoreTargetIfImmuneToBuff");
      LogicCharacterData::sm_columnIndexIgnoreTargetIfImmuneToDamageBuff = CSVTable::getColumnIndexByName(a1, &v184);
      String::~String();
      Debugger::doAssert(
        (Debugger *)(LogicCharacterData::sm_columnIndexIgnoreTargetIfImmuneToDamageBuff != -1),
        (bool)"",
        v75);
      String::String(&v183, "SpecialAttackInterval");
      LogicCharacterData::sm_columnIndexSpecialAttackInterval = CSVTable::getColumnIndexByName(a1, &v183);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpecialAttackInterval != -1), (bool)"", v76);
      String::String(&v182, "ContinuousEffect");
      LogicCharacterData::sm_columnIndexContinuousEffect = CSVTable::getColumnIndexByName(a1, &v182);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexContinuousEffect != -1), (bool)"", v77);
      String::String(&v181, "LandingEffect");
      LogicCharacterData::sm_columnIndexLandingEffect = CSVTable::getColumnIndexByName(a1, &v181);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexLandingEffect != -1), (bool)"", v78);
      String::String(&v180, "DashMinRange");
      LogicCharacterData::sm_columnIndexDashMinRange = CSVTable::getColumnIndexByName(a1, &v180);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDashMinRange != -1), (bool)"", v79);
      String::String(&v179, "DashMaxRange");
      LogicCharacterData::sm_columnIndexDashMaxRange = CSVTable::getColumnIndexByName(a1, &v179);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexDashMaxRange != -1), (bool)"", v80);
      String::String(&v178, "JumpSpeed");
      LogicCharacterData::sm_columnIndexJumpSpeed = CSVTable::getColumnIndexByName(a1, &v178);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexJumpSpeed != -1), (bool)"", v81);
      String::String(&v177, "SpawnStartTime");
      LogicCharacterData::sm_columnIndexSpawnStartTime = CSVTable::getColumnIndexByName(a1, &v177);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpawnStartTime != -1), (bool)"", v82);
      String::String(&v176, "SpawnInterval");
      LogicCharacterData::sm_columnIndexSpawnInterval = CSVTable::getColumnIndexByName(a1, &v176);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpawnInterval != -1), (bool)"", v83);
      String::String(&v175, "SpawnNumber");
      LogicCharacterData::sm_columnIndexSpawnNumber = CSVTable::getColumnIndexByName(a1, &v175);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpawnNumber != -1), (bool)"", v84);
      String::String(&v174, "SpawnPauseTime");
      LogicCharacterData::sm_columnIndexSpawnPauseTime = CSVTable::getColumnIndexByName(a1, &v174);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpawnPauseTime != -1), (bool)"", v85);
      String::String(&v173, "SpawnLimit");
      LogicCharacterData::sm_columnIndexSpawnLimit = CSVTable::getColumnIndexByName(a1, &v173);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpawnLimit != -1), (bool)"", v86);
      String::String(&v172, "SpawnCharacter");
      LogicCharacterData::sm_columnIndexSpawnCharacter = CSVTable::getColumnIndexByName(a1, &v172);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpawnCharacter != -1), (bool)"", v87);
      String::String(&v171, "SpawnCharacterEffect");
      LogicCharacterData::sm_columnIndexSpawnCharacterEffect = CSVTable::getColumnIndexByName(a1, &v171);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexSpawnCharacterEffect != -1), (bool)"", v88);
      String::String(&v170, "Kamikaze");
      LogicCharacterData::sm_columnIndexKamikaze = CSVTable::getColumnIndexByName(a1, &v170);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexKamikaze != -1), (bool)"", v89);
      String::String(&v169, "ChargeEffect");
      LogicCharacterData::sm_columnIndexChargeEffect = CSVTable::getColumnIndexByName(a1, &v169);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexChargeEffect != -1), (bool)"", v90);
      String::String(&v168, "TakeDamageEffect");
      LogicCharacterData::sm_columnIndexTakeDamageEffect = CSVTable::getColumnIndexByName(a1, &v168);
      String::~String();
      Debugger::doAssert((Debugger *)(LogicCharacterData::sm_columnIndexTakeDamageEffect != -1), (bool)"", v91);
      String::String(&v167, "ShadowScaleX");
      LogicCharacterData::sm_columnIndexShadowScaleX = CSVTable::getColumnIndexByName(a1, &v167);
      String::~String();
      v92 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexShadowScaleX) == 1;
      Debugger::doAssert((Debugger *)v92, (bool)"", v93);
      String::String(&v166, "ShadowScaleY");
      LogicCharacterData::sm_columnIndexShadowScaleY = CSVTable::getColumnIndexByName(a1, &v166);
      String::~String();
      v94 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexShadowScaleY) == 1;
      Debugger::doAssert((Debugger *)v94, (bool)"", v95);
      String::String(&v165, "ShadowX");
      LogicCharacterData::sm_columnIndexShadowX = CSVTable::getColumnIndexByName(a1, &v165);
      String::~String();
      v96 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexShadowX) == 1;
      Debugger::doAssert((Debugger *)v96, (bool)"", v97);
      String::String(&v164, "ShadowY");
      LogicCharacterData::sm_columnIndexShadowY = CSVTable::getColumnIndexByName(a1, &v164);
      String::~String();
      v98 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexShadowY) == 1;
      Debugger::doAssert((Debugger *)v98, (bool)"", v99);
      String::String(&v163, "ShadowSkew");
      LogicCharacterData::sm_columnIndexShadowSkew = CSVTable::getColumnIndexByName(a1, &v163);
      String::~String();
      v100 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexShadowSkew) == 1;
      Debugger::doAssert((Debugger *)v100, (bool)"", v101);
      String::String(&v162, "Scale");
      LogicCharacterData::sm_columnIndexScale = CSVTable::getColumnIndexByName(a1, &v162);
      String::~String();
      v102 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexScale) == 1;
      Debugger::doAssert((Debugger *)v102, (bool)"", v103);
      String::String(&v161, "CollisionRadius");
      LogicCharacterData::sm_columnIndexCollisionRadius = CSVTable::getColumnIndexByName(a1, &v161);
      String::~String();
      v104 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexCollisionRadius) == 1;
      Debugger::doAssert((Debugger *)v104, (bool)"", v105);
      String::String(&v160, "Mass");
      LogicCharacterData::sm_columnIndexMass = CSVTable::getColumnIndexByName(a1, &v160);
      String::~String();
      v106 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexMass) == 1;
      Debugger::doAssert((Debugger *)v106, (bool)"", v107);
      String::String(&v159, "AttackStartEffectSpecial");
      LogicCharacterData::sm_columnIndexAttackStartEffectSpecial = CSVTable::getColumnIndexByName(a1, &v159);
      String::~String();
      v108 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexAttackStartEffectSpecial) == 0;
      Debugger::doAssert((Debugger *)v108, (bool)"", v109);
      String::String(&v158, "DamageEffectSpecial");
      LogicCharacterData::sm_columnIndexDamageEffectSpecial = CSVTable::getColumnIndexByName(a1, &v158);
      String::~String();
      v110 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexDamageEffectSpecial) == 0;
      Debugger::doAssert((Debugger *)v110, (bool)"", v111);
      String::String(&v157, "ProjectileEffectSpecial");
      LogicCharacterData::sm_columnIndexProjectileEffectSpecial = CSVTable::getColumnIndexByName(a1, &v157);
      String::~String();
      v112 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexProjectileEffectSpecial) == 0;
      Debugger::doAssert((Debugger *)v112, (bool)"", v113);
      String::String(&v156, "ProjectileSpecial");
      LogicCharacterData::sm_columnIndexProjectileSpecial = CSVTable::getColumnIndexByName(a1, &v156);
      String::~String();
      v114 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexProjectileSpecial) == 0;
      Debugger::doAssert((Debugger *)v114, (bool)"", v115);
      String::String(&v155, "DamageSpecial");
      LogicCharacterData::sm_columnIndexDamageSpecial = CSVTable::getColumnIndexByName(a1, &v155);
      String::~String();
      v116 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexDamageSpecial) == 1;
      Debugger::doAssert((Debugger *)v116, (bool)"", v117);
      String::String(&v154, "ProjectileStartRadius");
      LogicCharacterData::sm_columnIndexProjectileStartRadius = CSVTable::getColumnIndexByName(a1, &v154);
      String::~String();
      v118 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexProjectileStartRadius) == 1;
      Debugger::doAssert((Debugger *)v118, (bool)"", v119);
      String::String(&v153, "ProjectileStartZ");
      LogicCharacterData::sm_columnIndexProjectileStartZ = CSVTable::getColumnIndexByName(a1, &v153);
      String::~String();
      v120 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexProjectileStartZ) == 1;
      Debugger::doAssert((Debugger *)v120, (bool)"", v121);
      String::String(&v152, "StopMovementAfterMS");
      LogicCharacterData::sm_columnIndexStopMovementAfterMS = CSVTable::getColumnIndexByName(a1, &v152);
      String::~String();
      v122 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexStopMovementAfterMS) == 1;
      Debugger::doAssert((Debugger *)v122, (bool)"", v123);
      String::String(&v151, "WaitMS");
      LogicCharacterData::sm_columnIndexWaitMS = CSVTable::getColumnIndexByName(a1, &v151);
      String::~String();
      v124 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexWaitMS) == 1;
      Debugger::doAssert((Debugger *)v124, (bool)"", v125);
      String::String(&v150, "MoveEffect");
      LogicCharacterData::sm_columnIndexMoveEffect = CSVTable::getColumnIndexByName(a1, &v150);
      String::~String();
      v126 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexMoveEffect) == 0;
      Debugger::doAssert((Debugger *)v126, (bool)"", v127);
      String::String(&v149, "TileSizeOverride");
      LogicCharacterData::sm_columnIndexTileSizeOverride = CSVTable::getColumnIndexByName(a1, &v149);
      String::~String();
      v128 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexTileSizeOverride) == 1;
      Debugger::doAssert((Debugger *)v128, (bool)"", v129);
      String::String(&v148, "IsSummonerTower");
      LogicCharacterData::sm_columnIndexIsSummonerTower = CSVTable::getColumnIndexByName(a1, &v148);
      String::~String();
      v130 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexIsSummonerTower) == 2;
      Debugger::doAssert((Debugger *)v130, (bool)"", v131);
      String::String(&v147, "NoDeploySizeW");
      LogicCharacterData::sm_columnIndexNoDeploySizeW = CSVTable::getColumnIndexByName(a1, &v147);
      String::~String();
      v132 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexNoDeploySizeW) == 1;
      Debugger::doAssert((Debugger *)v132, (bool)"", v133);
      String::String(&v146, "NoDeploySizeH");
      LogicCharacterData::sm_columnIndexNoDeploySizeH = CSVTable::getColumnIndexByName(a1, &v146);
      String::~String();
      v134 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexNoDeploySizeH) == 1;
      Debugger::doAssert((Debugger *)v134, (bool)"", v135);
      String::String(&v145, "DeathDamage");
      LogicCharacterData::sm_columnIndexDeathDamage = CSVTable::getColumnIndexByName(a1, &v145);
      String::~String();
      v136 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexDeathDamage) == 1;
      Debugger::doAssert((Debugger *)v136, (bool)"", v137);
      String::String(&v144, "ShowHealthNumber");
      LogicCharacterData::sm_columnIndexShowHealthNumber = CSVTable::getColumnIndexByName(a1, &v144);
      String::~String();
      v138 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexShowHealthNumber) == 2;
      Debugger::doAssert((Debugger *)v138, (bool)"", v139);
      String::String(&v143, "TargetEffectY");
      LogicCharacterData::sm_columnIndexTargetEffectY = CSVTable::getColumnIndexByName(a1, &v143);
      String::~String();
      v140 = (unsigned int)CSVTable::getColumnType(a1, LogicCharacterData::sm_columnIndexTargetEffectY) == 1;
      return Debugger::doAssert((Debugger *)v140, (bool)"", v141);
    }

    __int64 __fastcall LogicCharacterData::getDamage(__int64 a1, LogicMath *a2)
    {
      InitState *v4; // x0
      const #1223 *v5; // x1
      int v6; // w3
    
      if ( LogicDataTables::getSummonerData() == a1 )
      {
        v4 = *(InitState **)(a1 + 8);
        v5 = (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDamage;
        v6 = 3;
      }
      else
      {
        v4 = *(InitState **)(a1 + 8);
        v5 = (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDamage;
        if ( *(_BYTE *)(a1 + 781) )
          v6 = 5;
        else
          v6 = 1;
      }
      return LogicSpellData::getScaledValue(v4, v5, a2, v6);
    }

    __int64 __fastcall LogicCharacterData::getHealing(__int64 a1, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(InitState **)(a1 + 8),
               (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHealing,
               a2,
               1);
    }

    __int64 __fastcall LogicCharacterData::getVariableDamage2(__int64 a1, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(InitState **)(a1 + 8),
               (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexVariableDamage2,
               a2,
               1);
    }

    __int64 __fastcall LogicCharacterData::getVariableDamage3(__int64 a1, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(InitState **)(a1 + 8),
               (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexVariableDamage3,
               a2,
               1);
    }

    void __fastcall LogicCharacterData::createReferences2(__int64 a1)
    {
      const char *v2; // x1
      sigval *sival_ptr; // x8
      const String *v4; // x1
      Font *v5; // x20
      int Hitpoints; // w24
      int v7; // w26
      int v8; // w25
      int v9; // w23
      const String *v10; // x1
      int v11; // w8
      const String *v12; // x1
      int v13; // w0
      __int64 BestHealthBar; // x0
      const char *v15; // x1
      sigval *p_si_value; // x8
      const String *v17; // x1
      const char *v18; // x1
      _QWORD *v19; // x8
      const String *v20; // x1
      int v21; // [xsp+Ch] [xbp-184h]
      _QWORD *v22; // [xsp+10h] [xbp-180h] BYREF
      __siginfo v23; // [xsp+20h] [xbp-170h] BYREF
      String v24; // [xsp+98h] [xbp-F8h] BYREF
      _BYTE v25[24]; // [xsp+B0h] [xbp-E0h] BYREF
      _QWORD v26[3]; // [xsp+C8h] [xbp-C8h] BYREF
      String v27; // [xsp+E0h] [xbp-B0h] BYREF
      __siginfo v28; // [xsp+F8h] [xbp-98h] BYREF
    
      LogicData::createReferences2();
      if ( *(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 144) )
      {
        LogicData::getDebuggerName((AreaEffectObject *)a1);
        if ( HIDWORD(v28.si_addr) + 1 > 8 )
          sival_ptr = (sigval *)v28.si_value.sival_ptr;
        else
          sival_ptr = &v28.si_value;
        String::format((String *)"character %s: has special projectile but no no projectile", v2, sival_ptr);
        Debugger::warning((__siginfo *)v28.__pad, v4);
        String::~String();
        String::~String();
      }
      if ( !*(_DWORD *)(a1 + 672) )
        *(_DWORD *)(a1 + 672) = 1000;
      if ( !*(_DWORD *)(a1 + 512) )
        *(_DWORD *)(a1 + 672) = 0;
      v5 = *(Font **)(a1 + 256);
      if ( v5 )
      {
        Hitpoints = LogicCharacterData::getHitpoints((Font *)a1, 0);
        v7 = 0;
        v8 = *(_DWORD *)(a1 + 512);
        do
        {
          if ( !v8 )
          {
            v9 = LogicCharacterData::getHitpoints(v5, 0);
            if ( v9 < Hitpoints )
            {
              LogicData::getDebuggerName((AreaEffectObject *)a1);
              operator+(v26, "Hitpoints decrease in building morph level ", v25);
              operator+(v26, " -> ");
              LogicData::getDebuggerName(v5);
              operator+((__int64 *)&v28.si_signo, &v27, &v24);
              Debugger::warning(&v28, v10);
              String::~String();
              String::~String();
              String::~String();
              String::~String();
              String::~String();
            }
            Hitpoints = v9;
          }
          *(_QWORD *)(a1 + 312) = v5;
          v11 = v7 + 1;
          if ( v7 > 18 )
            break;
          v5 = (Font *)*((_QWORD *)v5 + 32);
          ++v7;
        }
        while ( v5 );
        if ( v11 == 20 )
        {
          LogicData::getDebuggerName((AreaEffectObject *)a1);
          operator+(&v23.__pad[6], "Morph character chain has loop or is too long. ", &v23.__pad[3]);
          Debugger::warning((__siginfo *)&v23.__pad[6], v12);
          String::~String();
          String::~String();
        }
      }
      if ( !*(_QWORD *)(a1 + 680) )
      {
        v13 = LogicCharacterData::getHitpoints((Font *)a1, 0);
        BestHealthBar = LogicDataTables::getBestHealthBar(v13);
        *(_QWORD *)(a1 + 680) = BestHealthBar;
        if ( !BestHealthBar )
        {
          LogicData::getDebuggerName((AreaEffectObject *)a1);
          if ( HIDWORD(v23.si_addr) + 1 > 8 )
            p_si_value = (sigval *)v23.si_value.sival_ptr;
          else
            p_si_value = &v23.si_value;
          String::format((String *)"No health bar for %s", v15, p_si_value);
          Debugger::warning((__siginfo *)v23.__pad, v17);
          String::~String();
          String::~String();
        }
      }
      if ( !*(_DWORD *)(a1 + 512) && *(_DWORD *)(a1 + 532) != *(_DWORD *)(a1 + 524) )
      {
        LogicData::getDebuggerName((AreaEffectObject *)a1);
        if ( v21 + 1 > 8 )
          v19 = v22;
        else
          v19 = &v22;
        String::format((String *)"Stationary characters sight range should be same as range. Name:%s", v18, v19);
        Debugger::warning(&v23, v20);
        String::~String();
        String::~String();
      }
    }

    bool __fastcall LogicCharacterData::isBuilding(Font *this)
    {
      return *((_DWORD *)this + 128) == 0;
    }

    __int64 __fastcall LogicCharacterData::getHitpoints(Font *this, LogicMath *a2)
    {
      InitState *v4; // x0
      const #1223 *v5; // x1
      int v6; // w3
    
      if ( (Font *)LogicDataTables::getSummonerData() == this )
      {
        v4 = (InitState *)*((_QWORD *)this + 1);
        v5 = (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHitpoints;
        v6 = 4;
      }
      else
      {
        v4 = (InitState *)*((_QWORD *)this + 1);
        v5 = (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHitpoints;
        if ( *((_BYTE *)this + 781) )
          v6 = 6;
        else
          v6 = 2;
      }
      return LogicSpellData::getScaledValue(v4, v5, a2, v6);
    }

    __int64 __fastcall LogicCharacterData::getMorphCharacter(Font *this)
    {
      return *((_QWORD *)this + 32);
    }

    __int64 __fastcall LogicCharacterData::getSpeed(Font *this)
    {
      return *((unsigned int *)this + 128);
    }

    __int64 __fastcall LogicCharacterData::getSightRange(Font *this)
    {
      return *((unsigned int *)this + 133);
    }

    __int64 __fastcall LogicCharacterData::getRange(Font *this)
    {
      return *((unsigned int *)this + 131);
    }

    __int64 __fastcall LogicCharacterData::calculateChecksumForLevel(Font *this, LogicMath *a2)
    {
      int Hitpoints; // w0
      int Damage; // w0
      int ScaledValue; // w0
      int v7; // w0
      int v8; // w0
      AreaEffectObject *v9; // x0
      int GlobalID; // w0
      __int64 v11; // x0
      int v12; // w0
      __int64 v13; // x0
      int v14; // w0
      __int64 v15; // x19
      _BYTE v17[24]; // [xsp+8h] [xbp-28h] BYREF
    
      ChecksumEncoder::ChecksumEncoder((#1226 *)v17);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 129));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 128));
      Hitpoints = LogicCharacterData::getHitpoints(this, a2);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, Hitpoints);
      Damage = LogicCharacterData::getDamage((__int64)this, a2);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, Damage);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 130));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 131));
      ScaledValue = LogicSpellData::getScaledValue(
                      *((InitState **)this + 1),
                      (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHealing,
                      a2,
                      1);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, ScaledValue);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 134));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 136));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 137));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 139));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 140));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 145));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 146));
      v7 = LogicSpellData::getScaledValue(
             *((InitState **)this + 1),
             (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDashDamage,
             a2,
             1);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, v7);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 141));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 142));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 144));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 143));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 149));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 150));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 151));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 152));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 153));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 113));
      v8 = LogicSpellData::getScaledValue(
             *((InitState **)this + 1),
             (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDeathDamage,
             a2,
             1);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, v8);
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 111));
      ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 112));
      v9 = (AreaEffectObject *)*((_QWORD *)this + 47);
      if ( v9 )
      {
        GlobalID = LogicData::getGlobalID(v9);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, GlobalID);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, *((_DWORD *)this + 96));
      }
      v11 = *((_QWORD *)this + 17);
      if ( v11 )
      {
        v12 = LogicAreaEffectObjectData::calculateChecksumForLevel(v11, a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, v12);
      }
      v13 = *((_QWORD *)this + 18);
      if ( v13 )
      {
        v14 = LogicProjectileData::calculateChecksumForLevel(v13, a2);
        ChecksumEncoder::writeVInt((ChecksumEncoder *)v17, v14);
      }
      v15 = ChecksumEncoder::getCheckSum(v17);
      ChecksumEncoder::destruct((ChecksumEncoder *)v17);
      return v15;
    }

    __int64 __fastcall LogicCharacterData::getHitSpeed(Font *this)
    {
      return *((unsigned int *)this + 129);
    }

    __int64 __fastcall LogicCharacterData::getAreaDamageRadius(Font *this)
    {
      return *((unsigned int *)this + 130);
    }

    __int64 __fastcall LogicCharacterData::getChargeRange(Font *this)
    {
      return *((unsigned int *)this + 134);
    }

    __int64 __fastcall LogicCharacterData::getPushback(Font *this)
    {
      return *((unsigned int *)this + 136);
    }

    __int64 __fastcall LogicCharacterData::getAreaBuffRadius(Font *this)
    {
      return *((unsigned int *)this + 137);
    }

    __int64 __fastcall LogicCharacterData::getManaOnDeath(Font *this)
    {
      return *((unsigned int *)this + 139);
    }

    __int64 __fastcall LogicCharacterData::getGrowTime(Font *this)
    {
      return *((unsigned int *)this + 140);
    }

    __int64 __fastcall LogicCharacterData::getBuffOnDamageTime(Font *this)
    {
      return *((unsigned int *)this + 145);
    }

    __int64 __fastcall LogicCharacterData::getSpecialAttackInterval(Font *this)
    {
      return *((unsigned int *)this + 146);
    }

    __int64 __fastcall LogicCharacterData::getDashDamage(__int64 a1, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(InitState **)(a1 + 8),
               (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDashDamage,
               a2,
               1);
    }

    __int64 __fastcall LogicCharacterData::getDashCooldown(Font *this)
    {
      return *((unsigned int *)this + 141);
    }

    __int64 __fastcall LogicCharacterData::getJumpHeight(Font *this)
    {
      return *((unsigned int *)this + 142);
    }

    __int64 __fastcall LogicCharacterData::getDashPushBack(Font *this)
    {
      return *((unsigned int *)this + 144);
    }

    __int64 __fastcall LogicCharacterData::getDashRadius(Font *this)
    {
      return *((unsigned int *)this + 143);
    }

    __int64 __fastcall LogicCharacterData::getSpawnStartTime(Font *this)
    {
      return *((unsigned int *)this + 149);
    }

    __int64 __fastcall LogicCharacterData::getSpawnInterval(Font *this)
    {
      return *((unsigned int *)this + 150);
    }

    __int64 __fastcall LogicCharacterData::getSpawnNumber(Font *this)
    {
      return *((unsigned int *)this + 151);
    }

    __int64 __fastcall LogicCharacterData::getSpawnPauseTime(Font *this)
    {
      return *((unsigned int *)this + 152);
    }

    __int64 __fastcall LogicCharacterData::getSpawnLimit(Font *this)
    {
      return *((unsigned int *)this + 153);
    }

    __int64 __fastcall LogicCharacterData::getDeathDamage(__int64 a1, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(InitState **)(a1 + 8),
               (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDeathDamage,
               a2,
               1);
    }

    __int64 __fastcall LogicCharacterData::getAttachedCharacter(Font *this)
    {
      return *((_QWORD *)this + 47);
    }

    __int64 __fastcall LogicCharacterData::getAttachedCharacterHeight(Font *this)
    {
      return *((unsigned int *)this + 96);
    }

    __int64 __fastcall LogicCharacterData::getAreaEffectOnMorph(Font *this)
    {
      return *((_QWORD *)this + 17);
    }

    __int64 __fastcall LogicCharacterData::getProjectile(Font *this, int a2)
    {
      __int64 v2; // x8
    
      if ( !a2 )
        return *((_QWORD *)this + 18);
      v2 = *((_QWORD *)this + 19);
      if ( !v2 )
        return *((_QWORD *)this + 18);
      return v2;
    }

    bool __fastcall LogicCharacterData::isSummoner(Font *this)
    {
      return LogicDataTables::getSummonerData() == (_QWORD)this;
    }

    __int64 __fastcall LogicCharacterData::isPrincessTower(Font *this)
    {
      return *((unsigned __int8 *)this + 781);
    }

    __int64 __fastcall LogicCharacterData::getDamageType(Font *this)
    {
      return *((_QWORD *)this + 26);
    }

    __int64 __fastcall LogicCharacterData::getTargetOnlyBuildings(Font *this)
    {
      return *((unsigned __int8 *)this + 787);
    }

    __int64 __fastcall LogicCharacterData::getMinimumRange(Font *this)
    {
      return *((unsigned int *)this + 132);
    }

    __int64 __fastcall LogicCharacterData::getBaseFileName(__int64 a1, __int64 a2, const char *a3)
    {
      return LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexFileName, a3);
    }

    __int64 __fastcall LogicCharacterData::getFileName(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 v4; // x0
    
      do
      {
        v4 = a1;
        a1 = *(_QWORD *)(a1 + 376);
      }
      while ( a1 );
      return LogicData::getValueAt(v4, (unsigned int)LogicCharacterData::sm_columnIndexFileName, a3);
    }

    __int64 __fastcall LogicCharacterData::getBlueExportName(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 v4; // x0
    
      do
      {
        v4 = a1;
        a1 = *(_QWORD *)(a1 + 376);
      }
      while ( a1 );
      return LogicData::getValueAt(v4, (unsigned int)LogicCharacterData::sm_columnIndexBlueExportName, a3);
    }

    __int64 __fastcall LogicCharacterData::getRedExportName(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 v4; // x0
    
      do
      {
        v4 = a1;
        a1 = *(_QWORD *)(a1 + 376);
      }
      while ( a1 );
      return LogicData::getValueAt(v4, (unsigned int)LogicCharacterData::sm_columnIndexRedExportName, a3);
    }

    __int64 __fastcall LogicCharacterData::getCollisionRadius(Font *this)
    {
      return *((unsigned int *)this + 165);
    }

    __int64 __fastcall LogicCharacterData::getProjectileEffect(Font *this, int a2)
    {
      __int64 v2; // x8
    
      if ( !a2 )
        return *((_QWORD *)this + 21);
      v2 = *((_QWORD *)this + 22);
      if ( !v2 )
        return *((_QWORD *)this + 21);
      return v2;
    }

    __int64 __fastcall LogicCharacterData::getDamageEffect(Font *this, int a2)
    {
      __int64 v2; // x8
    
      if ( !a2 )
        return *((_QWORD *)this + 24);
      v2 = *((_QWORD *)this + 25);
      if ( !v2 )
        return *((_QWORD *)this + 24);
      return v2;
    }

    __int64 __fastcall LogicCharacterData::hasImmunity(Font *this, const LogicData *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      _BOOL4 v7; // w0
    
      v4 = *((int *)this + 33);
      v5 = 8LL * ((int)v4 - 1);
      while ( v4-- >= 1 )
      {
        v7 = LogicData::equals(*(_QWORD *)(*((_QWORD *)this + 15) + v5), (__int64)a2);
        v5 -= 8;
        if ( v7 )
          return 1;
      }
      return 0;
    }

    __int64 __fastcall LogicCharacterData::hasVulnerability(Font *this, const LogicData *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      _BOOL4 v7; // w0
    
      v4 = *((int *)this + 29);
      v5 = 8LL * ((int)v4 - 1);
      while ( v4-- >= 1 )
      {
        v7 = LogicData::equals(*(_QWORD *)(*((_QWORD *)this + 13) + v5), (__int64)a2);
        v5 -= 8;
        if ( v7 )
          return 1;
      }
      return 0;
    }

    __int64 __fastcall LogicCharacterData::isUseAnimator(Font *this)
    {
      Font *v1; // x8
    
      do
      {
        v1 = this;
        this = (Font *)*((_QWORD *)this + 47);
      }
      while ( this );
      return *((unsigned __int8 *)v1 + 786);
    }

    __int64 __fastcall LogicCharacterData::getDeathEffect(Font *this)
    {
      return *((_QWORD *)this + 27);
    }

    __int64 __fastcall LogicCharacterData::getStartingBuff(Font *this)
    {
      return *((_QWORD *)this + 28);
    }

    __int64 __fastcall LogicCharacterData::getSpawnEffect(Font *this)
    {
      return *((_QWORD *)this + 29);
    }

    __int64 __fastcall LogicCharacterData::getEgg(__int64 a1)
    {
      return *(_QWORD *)(a1 + 240);
    }

    __int64 __fastcall LogicCharacterData::getIgnorePushback(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 785);
    }

    __int64 __fastcall LogicCharacterData::getAreaBuff(__int64 a1)
    {
      return *(_QWORD *)(a1 + 248);
    }

    __int64 __fastcall LogicCharacterData::getAreaBuffTime(__int64 a1)
    {
      return *(unsigned int *)(a1 + 552);
    }

    __int64 __fastcall LogicCharacterData::getAreaBuffOwnTroops(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 784);
    }

    __int64 __fastcall LogicCharacterData::getAreaBuffEnemies(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 783);
    }

    float __fastcall LogicCharacterData::getShadowScaleX(__int64 a1)
    {
      return *(float *)(a1 + 640);
    }

    float __fastcall LogicCharacterData::getShadowScaleY(__int64 a1)
    {
      return *(float *)(a1 + 644);
    }

    float __fastcall LogicCharacterData::getShadowX(__int64 a1)
    {
      return *(float *)(a1 + 648);
    }

    float __fastcall LogicCharacterData::getShadowY(__int64 a1)
    {
      return *(float *)(a1 + 652);
    }

    float __fastcall LogicCharacterData::getScale(__int64 a1)
    {
      __int64 v1; // x8
    
      do
      {
        v1 = a1;
        a1 = *(_QWORD *)(a1 + 376);
      }
      while ( a1 );
      return *(float *)(v1 + 636);
    }

    __int64 __fastcall LogicCharacterData::getBlueTopExportName(__int64 a1, __int64 a2, const char *a3)
    {
      return LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexBlueTopExportName, a3);
    }

    __int64 __fastcall LogicCharacterData::getRedTopExportName(__int64 a1, __int64 a2, const char *a3)
    {
      return LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexRedTopExportName, a3);
    }

    __int64 __fastcall LogicCharacterData::getBlueBaseExportName(__int64 a1)
    {
      return a1 + 328;
    }

    __int64 __fastcall LogicCharacterData::getRedBaseExportName(__int64 a1)
    {
      return a1 + 352;
    }

    __int64 __fastcall LogicCharacterData::isCharacterData(Font *this)
    {
      return 1;
    }

    __int64 __fastcall LogicCharacterData::getHealthBar(Font *this)
    {
      return *((_QWORD *)this + 85);
    }

    __int64 __fastcall LogicCharacterData::getHealthBarOffsetY(Font *this)
    {
      return *((unsigned int *)this + 172);
    }

    __int64 __fastcall LogicCharacterData::showHealthNumber(Font *this)
    {
      return *((unsigned __int8 *)this + 692);
    }

    __int64 __fastcall LogicCharacterData::getDamageExportName(__int64 a1, __int64 a2, const char *a3)
    {
      return LogicData::getValueAt(a1, (unsigned int)LogicCharacterData::sm_columnIndexDamageExportName, a3);
    }

    __int64 __fastcall LogicCharacterData::getFlyingHeight(Font *this)
    {
      return *((unsigned int *)this + 108);
    }

    bool __fastcall LogicCharacterData::isFlying(Font *this)
    {
      return *((_DWORD *)this + 108) > 0;
    }

    float __fastcall LogicCharacterData::getShadowSkew(Font *this)
    {
      return *((float *)this + 164);
    }

    __int64 __fastcall LogicCharacterData::getAttackStartEffect(Font *this, int a2)
    {
      __int64 v2; // x8
    
      if ( !a2 )
        return *((_QWORD *)this + 87);
      v2 = *((_QWORD *)this + 88);
      if ( !v2 )
        return *((_QWORD *)this + 87);
      return v2;
    }

    __int64 __fastcall LogicCharacterData::getGrowSize(Font *this)
    {
      return *((unsigned int *)this + 107);
    }

    __int64 __fastcall LogicCharacterData::getMorphEffect(Font *this)
    {
      return *((_QWORD *)this + 33);
    }

    __int64 __fastcall LogicCharacterData::getHealOnMorph(Font *this)
    {
      return *((unsigned __int8 *)this + 782);
    }

    bool __fastcall LogicCharacterData::hasDash(Font *this)
    {
      return *((_DWORD *)this + 141) > 0;
    }

    __int64 __fastcall LogicCharacterData::getBuffOnDamage(Font *this)
    {
      return *((_QWORD *)this + 37);
    }

    __int64 __fastcall LogicCharacterData::getContinuousEffect(Font *this)
    {
      return *((_QWORD *)this + 23);
    }

    __int64 __fastcall LogicCharacterData::getLandingEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 160);
    }

    __int64 __fastcall LogicCharacterData::getDashMinRange(__int64 a1)
    {
      return *(unsigned int *)(a1 + 588);
    }

    __int64 __fastcall LogicCharacterData::getJumpSpeed(__int64 a1)
    {
      return *(unsigned int *)(a1 + 592);
    }

    __int64 __fastcall LogicCharacterData::isKamikaze(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 788);
    }

    __int64 __fastcall LogicCharacterData::getSpawnCharacter(__int64 a1)
    {
      return *(_QWORD *)(a1 + 304);
    }

    __int64 __fastcall LogicCharacterData::getSpawnCharacterLevelIndex(__int64 a1)
    {
      return *(unsigned int *)(a1 + 320);
    }

    __int64 __fastcall LogicCharacterData::getSpawnCharacterEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 280);
    }

    unsigned __int64 __fastcall LogicCharacterData::getSpawnCharacterRange(__int64 a1)
    {
      __int64 v1; // x8
      unsigned __int64 v3; // x9
      __int64 v4; // x8
    
      v1 = *(_QWORD *)(a1 + 304);
      if ( !v1 || *(_DWORD *)(a1 + 512) )
        return 0;
      v3 = 2863311532LL * *(_DWORD *)(v1 + 560);
      v4 = 274877907LL * (int)(20 * (HIDWORD(v3) + (v3 >> 63)) * *(_DWORD *)(v1 + 512));
      return (unsigned int)(v4 >> 38) + ((unsigned __int64)v4 >> 63);
    }

    bool __fastcall LogicCharacterData::isTrap(Font *a1)
    {
      return (unsigned int)LogicCharacterData::getHitpoints(a1, 0) == 0;
    }

    bool __fastcall LogicCharacterData::isBuffPoint(__int64 a1)
    {
      int ScaledValue; // w8
      _BOOL8 result; // x0
    
      ScaledValue = LogicSpellData::getScaledValue(
                      *(InitState **)(a1 + 8),
                      (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexHealing,
                      0,
                      1);
      result = 0;
      if ( ScaledValue >= 1 )
        return *(_QWORD *)(a1 + 296) != 0;
      return result;
    }

    unsigned __int64 __fastcall LogicCharacterData::getSizeInTiles(__int64 a1)
    {
      unsigned __int64 result; // x0
      __int64 v3; // x8
    
      result = *(unsigned int *)(a1 + 664);
      if ( (int)result <= 0 )
      {
        v3 = 274877907LL * (*(_DWORD *)(a1 + 660) + 499);
        return (unsigned int)(v3 >> 37) + ((unsigned __int64)v3 >> 63) + 1;
      }
      return result;
    }

    __int64 __fastcall LogicCharacterData::getChargeEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 272);
    }

    __int64 __fastcall LogicCharacterData::getTakeDamageEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 392);
    }

    __int64 __fastcall LogicCharacterData::snapCoordinate(_DWORD *a1, int a2)
    {
      unsigned int v2; // w8
      int v3; // w9
      int v4; // w9
      __int64 v5; // x9
    
      v2 = 1000 * (a2 / 1000);
      if ( a1[128] )
      {
        v3 = 1;
      }
      else
      {
        v4 = a1[166];
        if ( v4 <= 0 )
        {
          v5 = 274877907LL * (a1[165] + 499);
          v4 = (v5 >> 37) + ((unsigned __int64)v5 >> 63) + 1;
        }
        v3 = v4 & 1;
      }
      if ( v3 )
        return v2 + 500;
      else
        return v2;
    }

    __int64 __fastcall LogicCharacterData::getMorphResultCharacter(__int64 a1)
    {
      return *(_QWORD *)(a1 + 312);
    }

    __int64 __fastcall LogicCharacterData::getDashMaxRange(__int64 a1)
    {
      return *(unsigned int *)(a1 + 616);
    }

    bool __fastcall LogicCharacterData::isLeaderCharacter(__int64 a1)
    {
      __int64 SummonerData; // x1
    
      SummonerData = LogicDataTables::getSummonerData();
      return LogicData::equals(a1, SummonerData);
    }

    __int64 __fastcall LogicCharacterData::getDamageSpecial(__int64 a1, LogicMath *a2)
    {
      return LogicSpellData::getScaledValue(
               *(InitState **)(a1 + 8),
               (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDamageSpecial,
               a2,
               1);
    }

    __int64 __fastcall LogicCharacterData::getProjectileStartRadius(__int64 a1)
    {
      return *(unsigned int *)(a1 + 412);
    }

    __int64 __fastcall LogicCharacterData::getProjectileStartZ(__int64 a1)
    {
      return *(unsigned int *)(a1 + 416);
    }

    __int64 __fastcall LogicCharacterData::getStopMovementAfterMS(__int64 a1)
    {
      return *(unsigned int *)(a1 + 420);
    }

    __int64 __fastcall LogicCharacterData::getWaitMS(__int64 a1)
    {
      return *(unsigned int *)(a1 + 424);
    }

    __int64 __fastcall LogicCharacterData::getMoveEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 400);
    }

    __int64 __fastcall LogicCharacterData::ignoreTargetIfImmuneToDamageBuff(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 780);
    }

    __int64 __fastcall LogicCharacterData::getLoadTime(__int64 a1)
    {
      return *(unsigned int *)(a1 + 620);
    }

    __int64 LogicCharacterData::isBuilder()
    {
      return 0;
    }

    __int64 __fastcall LogicCharacterData::getNoDeploySizeW(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicCharacterData::sm_columnIndexNoDeploySizeW);
    }

    __int64 __fastcall LogicCharacterData::getNoDeploySizeH(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicCharacterData::sm_columnIndexNoDeploySizeH);
    }

    __int64 __fastcall LogicCharacterData::getStartingBuffTime(__int64 a1)
    {
      return *(unsigned int *)(a1 + 436);
    }

    __int64 __fastcall LogicCharacterData::getDeployTime(__int64 a1)
    {
      return *(unsigned int *)(a1 + 624);
    }

    __int64 __fastcall LogicCharacterData::hasVariableDamage(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 464);
    }

    __int64 __fastcall LogicCharacterData::getVariableDamage(__int64 a1, int a2, char *a3)
    {
      const char *v6; // x1
      InitState *v7; // x0
      unsigned __int64 v8; // x1
    
      Debugger::doAssert((Debugger *)*(unsigned __int8 *)(a1 + 464), (bool)"", a3);
      if ( a2 == 2 )
      {
        v7 = *(InitState **)(a1 + 8);
        v8 = (unsigned int)LogicCharacterData::sm_columnIndexVariableDamage3;
        return LogicSpellData::getScaledValue(v7, (const #1223 *)v8, (LogicMath *)a3, 1);
      }
      if ( a2 == 1 )
      {
        v7 = *(InitState **)(a1 + 8);
        v8 = (unsigned int)LogicCharacterData::sm_columnIndexVariableDamage2;
        return LogicSpellData::getScaledValue(v7, (const #1223 *)v8, (LogicMath *)a3, 1);
      }
      if ( a2 )
        Debugger::error((__siginfo *)"getVariableDamage: Illegal variableDamageLevelIdx", v6);
      return LogicCharacterData::getDamage(a1, (LogicMath *)a3);
    }

    __int64 __fastcall LogicCharacterData::getVariableDamageLevelIndex(__int64 a1, signed int a2, const char *a3)
    {
      signed int IntegerValueAt; // w21
    
      Debugger::doAssert((Debugger *)*(unsigned __int8 *)(a1 + 464), (bool)"", a3);
      IntegerValueAt = CSVRow::getIntegerValueAt(
                         *(_QWORD *)(a1 + 8),
                         (unsigned int)LogicCharacterData::sm_columnIndexVariableDamageTime1);
      if ( IntegerValueAt > a2 )
        return 0;
      if ( (int)(CSVRow::getIntegerValueAt(
                   *(_QWORD *)(a1 + 8),
                   (unsigned int)LogicCharacterData::sm_columnIndexVariableDamageTime2)
               + IntegerValueAt) > a2 )
        return 1;
      return 2;
    }

    __int64 __fastcall LogicCharacterData::getTargettedDamageEffect(__int64 a1, int a2, const char *a3)
    {
      const char *v5; // x1
    
      Debugger::doAssert((Debugger *)((a2 == 0) | (unsigned int)(*(_BYTE *)(a1 + 464) != 0)), (bool)"", a3);
      if ( a2 == 2 )
        return *(_QWORD *)(a1 + 728);
      if ( a2 == 1 )
        return *(_QWORD *)(a1 + 720);
      if ( a2 )
        Debugger::error((__siginfo *)"getVariableDamage: Illegal variableDamageLevelIdx", v5);
      return *(_QWORD *)(a1 + 712);
    }

    __int64 __fastcall LogicCharacterData::getDamageLevelTransitionEffect(__int64 a1, int a2, const char *a3)
    {
      const char *v5; // x1
    
      Debugger::doAssert((Debugger *)*(unsigned __int8 *)(a1 + 464), (bool)"", a3);
      if ( !a2 )
        return 0;
      if ( a2 == 2 )
        return *(_QWORD *)(a1 + 744);
      if ( a2 != 1 )
        Debugger::error((__siginfo *)"getVariableDamage: Illegal newDamageLvlIdx", v5);
      return *(_QWORD *)(a1 + 736);
    }

    __int64 __fastcall LogicCharacterData::getInfernoFlameEffect(__int64 a1, int a2, const char *a3)
    {
      const char *v5; // x1
    
      Debugger::doAssert((Debugger *)((a2 == 0) | (unsigned int)(*(_BYTE *)(a1 + 464) != 0)), (bool)"", a3);
      if ( a2 == 2 )
        return *(_QWORD *)(a1 + 768);
      if ( a2 == 1 )
        return *(_QWORD *)(a1 + 760);
      if ( a2 )
        Debugger::error((__siginfo *)"getVariableDamage: Illegal newDamageLvlIdx", v5);
      return *(_QWORD *)(a1 + 752);
    }

    __int64 __fastcall LogicCharacterData::getTargetEffectY(__int64 a1)
    {
      return CSVRow::getIntegerValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicCharacterData::sm_columnIndexTargetEffectY);
    }

    __int64 __fastcall LogicCharacterData::isSelfAsAoeCenter(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 789);
    }

    __int64 __fastcall LogicCharacterData::forceAttackAnimationToEnd(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 790);
    }

    __int64 __fastcall LogicCharacterData::getSightBackWardsClipDistance(__int64 a1)
    {
      return *(unsigned int *)(a1 + 672);
    }

    __int64 __fastcall LogicCharacterData::isHidingWhenNotAttacking(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 465);
    }

    __int64 __fastcall LogicCharacterData::getTargetedHitEffect(__int64 a1)
    {
      return *(_QWORD *)(a1 + 288);
    }

    __int64 __fastcall LogicCharacterData::getHideTimeMs(__int64 a1)
    {
      return *(unsigned int *)(a1 + 468);
    }

    __int64 __fastcall LogicCharacterData::getUpTimeMs(__int64 a1)
    {
      return *(unsigned int *)(a1 + 472);
    }

    __int64 __fastcall LogicCharacterData::hasRotationOnTimeline(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 791);
    }

    bool __fastcall LogicCharacterData::isBomb(__int64 a1)
    {
      int ScaledValue; // w8
      _BOOL8 result; // x0
    
      ScaledValue = LogicSpellData::getScaledValue(
                      *(InitState **)(a1 + 8),
                      (const #1223 *)(unsigned int)LogicCharacterData::sm_columnIndexDeathDamage,
                      0,
                      1);
      result = 0;
      if ( ScaledValue )
        return !*(_DWORD *)(a1 + 512) && (unsigned int)LogicCharacterData::getHitpoints((Font *)a1, 0) == 0;
      return result;
    }

    __int64 __fastcall LogicCharacterData::getProjectileYOffset(__int64 a1)
    {
      return *(unsigned int *)(a1 + 796);
    }

    __int64 __fastcall LogicCharacterData::getReloadAfterHits(__int64 a1)
    {
      return *(unsigned int *)(a1 + 628);
    }

    __int64 __fastcall LogicCharacterData::getReloadTime(__int64 a1)
    {
      return *(unsigned int *)(a1 + 632);
    }

    __int64 __fastcall LogicCharacterData::getDeployBaseAnimExportName(__int64 a1)
    {
      return a1 + 808;
    }

    bool __fastcall LogicCharacterData::ignoreTargetWithPendingDamage(__int64 a1)
    {
      return *(_QWORD *)(a1 + 144) != 0;
    }

    __int64 __fastcall LogicCharacterData::isCrowdEffectsEnabled(__int64 a1)
    {
      return CSVRow::getBooleanValueAt(*(_QWORD *)(a1 + 8), (unsigned int)LogicCharacterData::sm_columnIndexCrowdEffects);
    }

    void *__fastcall LogicCharacterData::initializeMembers(__int64 a1)
    {
      *(_BYTE *)(a1 + 789) = 0;
      *(_BYTE *)(a1 + 790) = 0;
      *(_BYTE *)(a1 + 465) = 0;
      *(_DWORD *)(a1 + 468) = 0;
      *(_DWORD *)(a1 + 472) = 0;
      *(_DWORD *)(a1 + 540) = 0;
      *(_BYTE *)(a1 + 408) = 0;
      *(_DWORD *)(a1 + 800) = 0;
      *(_QWORD *)(a1 + 480) = 0;
      *(_QWORD *)(a1 + 488) = 0;
      String::operator=(a1 + 808, "");
      *(_BYTE *)(a1 + 500) = 0;
      *(_DWORD *)(a1 + 504) = 0;
      *(_DWORD *)(a1 + 508) = 0;
      *(_DWORD *)(a1 + 496) = 0;
      *(_BYTE *)(a1 + 791) = 0;
      *(_DWORD *)(a1 + 792) = 0;
      *(_DWORD *)(a1 + 796) = 0;
      *(_DWORD *)(a1 + 688) = 0;
      *(_BYTE *)(a1 + 692) = 0;
      *(_DWORD *)(a1 + 612) = 0;
      *(_DWORD *)(a1 + 672) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_DWORD *)(a1 + 460) = 0;
      *(_QWORD *)(a1 + 452) = 0;
      *(_QWORD *)(a1 + 444) = 0;
      *(_DWORD *)(a1 + 668) = 1;
      *(_QWORD *)(a1 + 376) = 0;
      *(_DWORD *)(a1 + 384) = 0;
      *(_DWORD *)(a1 + 116) = 0;
      *(_QWORD *)(a1 + 680) = 0;
      *(_BYTE *)(a1 + 464) = 0;
      memset((void *)(a1 + 132), 0, 0x94u);
      *(_DWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)(a1 + 434) = 0;
      *(_QWORD *)(a1 + 428) = 0;
      *(_QWORD *)(a1 + 420) = 0;
      *(_QWORD *)(a1 + 412) = 0;
      *(_DWORD *)(a1 + 536) = 0;
      *(_QWORD *)(a1 + 528) = 0;
      *(_QWORD *)(a1 + 520) = 0;
      *(_QWORD *)(a1 + 512) = 0;
      memset((void *)(a1 + 544), 0, 0x44u);
      *(_DWORD *)(a1 + 664) = 0;
      *(_QWORD *)(a1 + 656) = 0;
      *(_QWORD *)(a1 + 648) = 0;
      *(_QWORD *)(a1 + 640) = 0;
      *(_QWORD *)(a1 + 632) = 0;
      *(_QWORD *)(a1 + 624) = 0;
      *(_QWORD *)(a1 + 616) = 0;
      return memset((void *)(a1 + 696), 0, 0x5Du);
    }

    // attributes: thunk
    void __fastcall LogicCharacterData::~LogicCharacterData(LogicCharacterData *a1)
    {
      __ZN18LogicCharacterDataD2Ev(a1);
    }

    void __fastcall LogicCharacterData::~LogicCharacterData(LogicCharacterData *a1)
    {
      LogicCharacterData::~LogicCharacterData(a1);
      operator delete(a1);
    }

    void __fastcall LogicCharacterData::~LogicCharacterData(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      *(_QWORD *)a1 = off_10046CB18;
      String::~String();
      String::~String();
      String::~String();
      v2 = *(_QWORD *)(a1 + 120);
      if ( v2 )
        operator delete[](v2);
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      v3 = *(_QWORD *)(a1 + 104);
      if ( v3 )
        operator delete[](v3);
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      LogicData::~LogicData((String *)a1);
    }

}; // end class LogicCharacterData
