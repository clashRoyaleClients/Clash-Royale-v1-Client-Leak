class LogicDataTables
{
public:

    void LogicDataTables::destructInstance()
    {
      __int64 i; // x19
      Shader *v1; // x0
      int v2; // w8
      __int64 v3; // x21
      _QWORD *v4; // x19
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
    
      LogicDataTables::sm_loaded = 0;
      for ( i = 8; i != 496; i += 8 )
      {
        v1 = *(Shader **)((char *)&TABLES + i);
        if ( v1 )
        {
          (*(void (__fastcall **)(Shader *))(*(_QWORD *)v1 + 16LL))(v1);
          v1 = *(Shader **)((char *)&TABLES + i);
          if ( v1 )
            v1 = (Shader *)(*(__int64 (__fastcall **)(Shader *))(*(_QWORD *)v1 + 8LL))(v1);
          *(_QWORD *)((char *)&TABLES + i) = 0;
        }
      }
      v2 = dword_1004F6E3C;
      if ( dword_1004F6E3C > 0 )
      {
        v3 = 0;
        do
        {
          v4 = *(_QWORD **)(LogicDataTables::sm_tilemaps + 8 * v3);
          if ( v4 )
          {
            LogicTilemapData::destruct(*(BillingManager **)(LogicDataTables::sm_tilemaps + 8 * v3));
            v5 = v4[12];
            if ( v5 )
              operator delete[](v5);
            v4[12] = 0;
            v4[13] = 0;
            v6 = v4[10];
            if ( v6 )
              operator delete[](v6);
            v4[10] = 0;
            v4[11] = 0;
            v7 = v4[8];
            if ( v7 )
              operator delete[](v7);
            v4[8] = 0;
            v4[9] = 0;
            v8 = v4[6];
            if ( v8 )
              operator delete[](v8);
            v4[6] = 0;
            v4[7] = 0;
            String::~String();
            String::~String();
            operator delete(v4);
            v2 = dword_1004F6E3C;
          }
          ++v3;
        }
        while ( v3 < v2 );
      }
      dword_1004F6E3C = 0;
      s_pGoldData = 0;
      s_pFreeGoldData = 0;
      s_pDiamondData = 0;
      s_pChestOrderIndexData = 0;
      s_pChestCountData = 0;
      s_pStarCountData = 0;
      s_pCardCountData = 0;
      LogicDataTables::sm_pAttackButtonSound = 0;
      LogicDataTables::sm_pSpellAvailableSound = 0;
      LogicDataTables::sm_pSpellNotReadySound = 0;
      LogicDataTables::sm_pSpellReadySound = 0;
      LogicDataTables::sm_pUnlockWithDiamondsSound = 0;
      LogicDataTables::sm_pLoadingSound = 0;
      LogicDataTables::sm_pSpellFuseSound = 0;
      LogicDataTables::sm_pNoWorkersSound = 0;
      LogicDataTables::sm_pChestDiscardSound = 0;
      LogicDataTables::sm_pClaimChestSound = 0;
      LogicDataTables::sm_pNewChatMessage = 0;
      LogicDataTables::sm_pCardDonated = 0;
      LogicDataTables::sm_pScrollTapHoldSound = 0;
      LogicDataTables::sm_pScrollDropSound = 0;
      LogicDataTables::sm_pScrollOpenSound = 0;
      LogicDataTables::sm_pScrollCloseSound = 0;
      LogicDataTables::sm_pSoundButtonClick = 0;
      LogicDataTables::sm_pSoundButtonClick2 = 0;
      LogicDataTables::sm_pSelectSpellSound = 0;
      LogicDataTables::sm_pChestUnlockStartSound = 0;
      LogicDataTables::sm_pMenuMusic = 0;
      LogicDataTables::sm_pWinMusic = 0;
      LogicDataTables::sm_pLoseMusic = 0;
      LogicDataTables::sm_pDrawMusic = 0;
      LogicDataTables::sm_pSellChestSound = 0;
      LogicDataTables::sm_pFinalFightSound = 0;
      LogicDataTables::sm_pSummonerData = 0;
      LogicDataTables::sm_pPhysicalDamageType = 0;
      LogicDataTables::sm_pElectricalDamageType = 0;
      LogicDataTables::sm_pImmunityEffect = 0;
      LogicDataTables::sm_pVulnerabilityEffect = 0;
      LogicDataTables::sm_pHealingEffect = 0;
      LogicDataTables::sm_pRangeDangerEffect = 0;
      LogicDataTables::sm_pGoodTargetEffect = 0;
      LogicDataTables::sm_pChestTemplateDeco = 0;
      LogicDataTables::sm_pDragEffect = 0;
      LogicDataTables::sm_pGetGoldEffect = 0;
      LogicDataTables::sm_pGetManaEffect = 0;
      LogicDataTables::sm_pGetDiamondsSound = 0;
      LogicDataTables::sm_pSpellFusionSound = 0;
      LogicDataTables::sm_pLevelUpEffect = 0;
      LogicDataTables::sm_pCharacterMarkerPlayer = 0;
      LogicDataTables::sm_pKingActivateEffect = 0;
      LogicDataTables::sm_pKingActivateTrainingEffect = 0;
      LogicDataTables::sm_pCharacterMoveTargetMarkerPlayer = 0;
      dword_1004F6E4C = 0;
      LogicDataTables::sm_pEditorSearchReferencesData = 0;
      LogicDataTables::sm_pRarityRare = 0;
      LogicDataTables::sm_pRarityEpic = 0;
      LogicDataTables::sm_pRarityCommon = 0;
      LogicDataTables::sm_pTowerData = 0;
      LogicDataTables::sm_pMainChestCycle = 0;
      LogicLocalization::destructInstance(v1);
    }

    void __fastcall LogicDataTables::initDataTable(#1222 *a1, const char *a2)
    {
      int v2; // w19
      const String *v4; // x1
      __int64 FileName; // x0
      const CSVTable *Table; // x20
      __int64 v7; // x0
      const String *v8; // x1
      LogicDataTable *v9; // x0
      LogicClientGlobals *v10; // x21
      _QWORD v11[3]; // [xsp+18h] [xbp-68h] BYREF
      String v12; // [xsp+30h] [xbp-50h] BYREF
      _BYTE v13[24]; // [xsp+48h] [xbp-38h] BYREF
    
      v2 = (int)a2;
      if ( (unsigned int)a2 >= 0x3E )
      {
        String::format((String *)"LogicDataTables::initDataTable invalid index %d/%d", a2, a2, 62);
        if ( a1 )
        {
          String::String(&v12, ", ");
          String::operator+=(v13, &v12);
          String::~String();
          FileName = CSVNode::getFileName(a1);
          String::operator+=(v13, FileName);
        }
        Debugger::error((Debugger *)v13, v4);
      }
      Table = (const CSVTable *)CSVNode::getTable(a1);
      if ( !Table )
      {
        v7 = CSVNode::getFileName(a1);
        operator+(v11, "Unable to find table from ", v7);
        Debugger::error((Debugger *)v11, v8);
      }
      v9 = (LogicDataTable *)TABLES[v2];
      if ( v9 )
      {
        LogicDataTable::setTable(v9, Table);
      }
      else
      {
        if ( v2 == 20 )
        {
          v10 = (LogicClientGlobals *)operator new(504);
          LogicClientGlobals::LogicClientGlobals(v10, Table, 20);
        }
        else if ( v2 == 3 )
        {
          v10 = (LogicClientGlobals *)operator new(496);
          LogicGlobals::LogicGlobals(v10, Table, 3);
        }
        else
        {
          v10 = (LogicClientGlobals *)operator new(64);
          LogicDataTable::LogicDataTable(v10, Table, v2);
        }
        TABLES[v2] = v10;
      }
    }

    __int64 __fastcall LogicDataTables::getTable(int a1)
    {
      return TABLES[a1];
    }

    __int64 LogicDataTables::getGlobals()
    {
      return qword_1004F8A78;
    }

    __int64 LogicDataTables::getClientGlobals()
    {
      return qword_1004F8B00;
    }

    __int64 __fastcall LogicDataTables::getDataById(SectorCommandMessage *a1, int a2)
    {
      int ClassID; // w0
      __int64 v5; // x20
    
      ClassID = GlobalID::getClassID(a1);
      if ( (unsigned int)(ClassID - 1) <= 0x3C
        && (v5 = TABLES[a2]) != 0
        && (ClassID == a2 || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 96LL))(TABLES[a2])) )
      {
        return (*(__int64 (__fastcall **)(__int64, SectorCommandMessage *))(*(_QWORD *)v5 + 88LL))(v5, a1);
      }
      else
      {
        return 0;
      }
    }

    __int64 __fastcall LogicDataTables::getDataById(SectorCommandMessage *a1)
    {
      int ClassID; // w0
      __int64 v3; // x0
    
      ClassID = GlobalID::getClassID(a1);
      if ( (unsigned int)(ClassID - 1) <= 0x3C && (v3 = TABLES[ClassID]) != 0 )
        return (*(__int64 (__fastcall **)(__int64, SectorCommandMessage *))(*(_QWORD *)v3 + 88LL))(v3, a1);
      else
        return 0;
    }

    __int64 __fastcall LogicDataTables::getResourceByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8A88 + 48LL))(
               qword_1004F8A88,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getChestOrderByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8C00 + 48LL))(
               qword_1004F8C00,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getMusicByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8BA8 + 48LL))(
               qword_1004F8BA8,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getSoundByName(
            LogicKickAllianceMemberCommand *this,
            const String *a2,
            const AreaEffectObject *a3)
    {
      return (*(__int64 (__fastcall **)(__int64, LogicKickAllianceMemberCommand *, const String *))(*(_QWORD *)qword_1004F8A80
                                                                                                  + 48LL))(
               qword_1004F8A80,
               this,
               a2);
    }

    __int64 __fastcall LogicDataTables::getSpellSetByName(
            LogicKickAllianceMemberCommand *this,
            const String *a2,
            const AreaEffectObject *a3)
    {
      return (*(__int64 (__fastcall **)(__int64, LogicKickAllianceMemberCommand *, const String *))(*(_QWORD *)qword_1004F8BF8
                                                                                                  + 48LL))(
               qword_1004F8BF8,
               this,
               a2);
    }

    __int64 __fastcall LogicDataTables::getBillingPackageByName(
            LogicKickAllianceMemberCommand *this,
            const String *a2,
            AreaEffectObject *a3)
    {
      return (*(__int64 (__fastcall **)(__int64, LogicKickAllianceMemberCommand *, const String *))(*(_QWORD *)qword_1004F8A70
                                                                                                  + 48LL))(
               qword_1004F8A70,
               this,
               a2);
    }

    __int64 __fastcall LogicDataTables::getRegionByName(
            LogicKickAllianceMemberCommand *this,
            const String *a2,
            AreaEffectObject *a3)
    {
      return (*(__int64 (__fastcall **)(__int64, LogicKickAllianceMemberCommand *, const String *))(*(_QWORD *)qword_1004F8C28
                                                                                                  + 48LL))(
               qword_1004F8C28,
               this,
               a2);
    }

    __int64 __fastcall LogicDataTables::getDiamondData(LogicKickAllianceMemberCommand *this)
    {
      return s_pDiamondData;
    }

    __int64 __fastcall LogicDataTables::getGoldData(LogicKickAllianceMemberCommand *this)
    {
      return s_pGoldData;
    }

    __int64 __fastcall LogicDataTables::getFreeGoldData(LogicKickAllianceMemberCommand *this)
    {
      return s_pFreeGoldData;
    }

    __int64 LogicDataTables::createReferences()
    {
      __int64 v0; // x20
      __int64 v1; // x20
      __int64 v2; // x20
      __int64 i; // x19
      __int64 v4; // x0
      LogicTimeUtil *v5; // x0
      int CurrentTime; // w20
      __int64 j; // x24
      __int64 v8; // x0
      LogicTimeUtil *v9; // x0
      int v10; // w21
      const char *v11; // x1
      const String *v12; // x1
      int v13; // w20
      __int64 v14; // x19
      __int64 v15; // x21
      LogicTilemapData *v16; // x0
      LogicDataTables *v17; // x0
      __int64 result; // x0
      String v19; // [xsp+10h] [xbp-5E0h] BYREF
      String v20; // [xsp+28h] [xbp-5C8h] BYREF
      String v21; // [xsp+40h] [xbp-5B0h] BYREF
      String v22; // [xsp+58h] [xbp-598h] BYREF
      String v23; // [xsp+70h] [xbp-580h] BYREF
      String v24; // [xsp+88h] [xbp-568h] BYREF
      String v25; // [xsp+A0h] [xbp-550h] BYREF
      String v26; // [xsp+B8h] [xbp-538h] BYREF
      String v27; // [xsp+D0h] [xbp-520h] BYREF
      String v28; // [xsp+E8h] [xbp-508h] BYREF
      String v29; // [xsp+100h] [xbp-4F0h] BYREF
      String v30; // [xsp+118h] [xbp-4D8h] BYREF
      String v31; // [xsp+130h] [xbp-4C0h] BYREF
      String v32; // [xsp+148h] [xbp-4A8h] BYREF
      String v33; // [xsp+160h] [xbp-490h] BYREF
      String v34; // [xsp+178h] [xbp-478h] BYREF
      String v35; // [xsp+190h] [xbp-460h] BYREF
      String v36; // [xsp+1A8h] [xbp-448h] BYREF
      String v37; // [xsp+1C0h] [xbp-430h] BYREF
      String v38; // [xsp+1D8h] [xbp-418h] BYREF
      String v39; // [xsp+1F0h] [xbp-400h] BYREF
      String v40; // [xsp+208h] [xbp-3E8h] BYREF
      String v41; // [xsp+220h] [xbp-3D0h] BYREF
      String v42; // [xsp+238h] [xbp-3B8h] BYREF
      String v43; // [xsp+250h] [xbp-3A0h] BYREF
      String v44; // [xsp+268h] [xbp-388h] BYREF
      String v45; // [xsp+280h] [xbp-370h] BYREF
      String v46; // [xsp+298h] [xbp-358h] BYREF
      String v47; // [xsp+2B0h] [xbp-340h] BYREF
      String v48; // [xsp+2C8h] [xbp-328h] BYREF
      String v49; // [xsp+2E0h] [xbp-310h] BYREF
      String v50; // [xsp+2F8h] [xbp-2F8h] BYREF
      String v51; // [xsp+310h] [xbp-2E0h] BYREF
      String v52; // [xsp+328h] [xbp-2C8h] BYREF
      String v53; // [xsp+340h] [xbp-2B0h] BYREF
      String v54; // [xsp+358h] [xbp-298h] BYREF
      String v55; // [xsp+370h] [xbp-280h] BYREF
      String v56; // [xsp+388h] [xbp-268h] BYREF
      String v57; // [xsp+3A0h] [xbp-250h] BYREF
      String v58; // [xsp+3B8h] [xbp-238h] BYREF
      String v59; // [xsp+3D0h] [xbp-220h] BYREF
      String v60; // [xsp+3E8h] [xbp-208h] BYREF
      String v61; // [xsp+400h] [xbp-1F0h] BYREF
      String v62; // [xsp+418h] [xbp-1D8h] BYREF
      String v63; // [xsp+430h] [xbp-1C0h] BYREF
      String v64; // [xsp+448h] [xbp-1A8h] BYREF
      String v65; // [xsp+460h] [xbp-190h] BYREF
      String v66; // [xsp+478h] [xbp-178h] BYREF
      String v67; // [xsp+490h] [xbp-160h] BYREF
      String v68; // [xsp+4A8h] [xbp-148h] BYREF
      String v69; // [xsp+4C0h] [xbp-130h] BYREF
      String v70; // [xsp+4D8h] [xbp-118h] BYREF
      String v71; // [xsp+4F0h] [xbp-100h] BYREF
      String v72; // [xsp+508h] [xbp-E8h] BYREF
      String v73; // [xsp+520h] [xbp-D0h] BYREF
      String v74; // [xsp+538h] [xbp-B8h] BYREF
      String v75; // [xsp+550h] [xbp-A0h] BYREF
      String v76; // [xsp+568h] [xbp-88h] BYREF
      String v77; // [xsp+580h] [xbp-70h] BYREF
      String v78; // [xsp+598h] [xbp-58h] BYREF
    
      if ( !qword_1004F8A98 )
      {
        v0 = operator new(104);
        LogicCombinedDataTable::LogicCombinedDataTable(v0, 7);
        LogicCombinedDataTable::addDataTableReference(v0, (char *)0x1A);
        LogicCombinedDataTable::addDataTableReference(v0, (char *)0x1B);
        LogicCombinedDataTable::addDataTableReference(v0, (char *)0x1C);
        qword_1004F8A98 = v0;
      }
      if ( !qword_1004F8A90 )
      {
        v1 = operator new(104);
        LogicCombinedDataTable::LogicCombinedDataTable(v1, 6);
        LogicCombinedDataTable::addDataTableReference(v1, (char *)0x22);
        LogicCombinedDataTable::addDataTableReference(v1, (char *)0x23);
        qword_1004F8A90 = v1;
      }
      if ( !qword_1004F8BE8 )
      {
        v2 = operator new(104);
        LogicCombinedDataTable::LogicCombinedDataTable(v2, 49);
        LogicCombinedDataTable::addDataTableReference(v2, (char *)0x2D);
        LogicCombinedDataTable::addDataTableReference(v2, (char *)0x30);
        qword_1004F8BE8 = v2;
      }
      LogicDataTables::sm_loaded = 0;
      for ( i = 1; i != 62; ++i )
      {
        v4 = TABLES[i];
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
      }
      String::String(&v78, "Diamonds");
      s_pDiamondData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A88 + 48LL))(
                         qword_1004F8A88,
                         &v78,
                         0);
      String::~String();
      String::String(&v77, "ChestOrderIndex");
      s_pChestOrderIndexData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A88 + 48LL))(
                                 qword_1004F8A88,
                                 &v77,
                                 0);
      String::~String();
      String::String(&v76, "ChestCount");
      s_pChestCountData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A88 + 48LL))(
                            qword_1004F8A88,
                            &v76,
                            0);
      String::~String();
      String::String(&v75, "StarCount");
      s_pStarCountData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A88 + 48LL))(
                           qword_1004F8A88,
                           &v75,
                           0);
      String::~String();
      String::String(&v74, "CardCount");
      s_pCardCountData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A88 + 48LL))(
                           qword_1004F8A88,
                           &v74,
                           0);
      String::~String();
      String::String(&v73, "Spell available");
      LogicDataTables::sm_pSpellAvailableSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                      + 48LL))(
                                                   qword_1004F8A80,
                                                   &v73,
                                                   0);
      String::~String();
      String::String(&v72, "Spell not ready");
      LogicDataTables::sm_pSpellNotReadySound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                     + 48LL))(
                                                  qword_1004F8A80,
                                                  &v72,
                                                  0);
      String::~String();
      String::String(&v71, "Spell ready");
      LogicDataTables::sm_pSpellReadySound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                  + 48LL))(
                                               qword_1004F8A80,
                                               &v71,
                                               0);
      String::~String();
      String::String(&v70, "AttackButton");
      LogicDataTables::sm_pAttackButtonSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                    + 48LL))(
                                                 qword_1004F8A80,
                                                 &v70,
                                                 0);
      String::~String();
      String::String(&v69, "Unlock with diamonds");
      LogicDataTables::sm_pUnlockWithDiamondsSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80 + 48LL))(
                                                       qword_1004F8A80,
                                                       &v69,
                                                       0);
      String::~String();
      String::String(&v68, "Scroll loading");
      LogicDataTables::sm_pLoadingSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                               + 48LL))(
                                            qword_1004F8A80,
                                            &v68,
                                            0);
      String::~String();
      String::String(&v67, "Spell fuse");
      LogicDataTables::sm_pSpellFuseSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                 + 48LL))(
                                              qword_1004F8A80,
                                              &v67,
                                              0);
      String::~String();
      String::String(&v66, "No workers");
      LogicDataTables::sm_pNoWorkersSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                 + 48LL))(
                                              qword_1004F8A80,
                                              &v66,
                                              0);
      String::~String();
      String::String(&v65, "Chest discard");
      LogicDataTables::sm_pChestDiscardSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                    + 48LL))(
                                                 qword_1004F8A80,
                                                 &v65,
                                                 0);
      String::~String();
      String::String(&v64, "Claim chest");
      LogicDataTables::sm_pClaimChestSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                  + 48LL))(
                                               qword_1004F8A80,
                                               &v64,
                                               0);
      String::~String();
      String::String(&v63, "chat_new_msg");
      LogicDataTables::sm_pNewChatMessage = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                 + 48LL))(
                                              qword_1004F8A80,
                                              &v63,
                                              0);
      String::~String();
      String::String(&v62, "chat_donate");
      LogicDataTables::sm_pCardDonated = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                              + 48LL))(
                                           qword_1004F8A80,
                                           &v62,
                                           0);
      String::~String();
      String::String(&v61, "Chest unlockstart");
      LogicDataTables::sm_pChestUnlockStartSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80 + 48LL))(
                                                     qword_1004F8A80,
                                                     &v61,
                                                     0);
      String::~String();
      String::String(&v60, "Scroll taphold");
      LogicDataTables::sm_pScrollTapHoldSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                     + 48LL))(
                                                  qword_1004F8A80,
                                                  &v60,
                                                  0);
      String::~String();
      String::String(&v59, "Scroll drop");
      LogicDataTables::sm_pScrollDropSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                  + 48LL))(
                                               qword_1004F8A80,
                                               &v59,
                                               0);
      String::~String();
      String::String(&v58, "Scroll open");
      LogicDataTables::sm_pScrollOpenSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                  + 48LL))(
                                               qword_1004F8A80,
                                               &v58,
                                               0);
      String::~String();
      String::String(&v57, "Scroll close");
      LogicDataTables::sm_pScrollCloseSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                   + 48LL))(
                                                qword_1004F8A80,
                                                &v57,
                                                0);
      String::~String();
      String::String(&v56, "ButtonClick");
      LogicDataTables::sm_pSoundButtonClick = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                   + 48LL))(
                                                qword_1004F8A80,
                                                &v56,
                                                0);
      String::~String();
      String::String(&v55, "ButtonClick2");
      LogicDataTables::sm_pSoundButtonClick2 = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                    + 48LL))(
                                                 qword_1004F8A80,
                                                 &v55,
                                                 0);
      String::~String();
      String::String(&v54, "Select spell");
      LogicDataTables::sm_pSelectSpellSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                   + 48LL))(
                                                qword_1004F8A80,
                                                &v54,
                                                0);
      String::~String();
      String::String(&v53, "SellChest");
      LogicDataTables::sm_pSellChestSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                 + 48LL))(
                                              qword_1004F8A80,
                                              &v53,
                                              0);
      String::~String();
      String::String(&v52, "Get diamonds");
      LogicDataTables::sm_pGetDiamondsSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                   + 48LL))(
                                                qword_1004F8A80,
                                                &v52,
                                                0);
      String::~String();
      String::String(&v51, "Spellfusion");
      LogicDataTables::sm_pSpellFusionSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                   + 48LL))(
                                                qword_1004F8A80,
                                                &v51,
                                                0);
      String::~String();
      String::String(&v50, "sound_get_star_player");
      LogicDataTables::sm_pPlayerGainedStarSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80 + 48LL))(
                                                     qword_1004F8A80,
                                                     &v50,
                                                     0);
      String::~String();
      String::String(&v49, "sound_get_star_enemy");
      LogicDataTables::sm_pEnemyGainedStarSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80 + 48LL))(
                                                    qword_1004F8A80,
                                                    &v49,
                                                    0);
      String::~String();
      String::String(&v48, "MainCycle");
      LogicDataTables::sm_pMainChestCycle = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8C00
                                                                                                 + 48LL))(
                                              qword_1004F8C00,
                                              &v48,
                                              0);
      String::~String();
      String::String(&v47, "WizMove");
      LogicDataTables::sm_pFinalFightSound = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A80
                                                                                                  + 48LL))(
                                               qword_1004F8A80,
                                               &v47,
                                               0);
      String::~String();
      String::String(&v46, "MenuMusic");
      LogicDataTables::sm_pMenuMusic = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8BA8
                                                                                            + 48LL))(
                                         qword_1004F8BA8,
                                         &v46,
                                         0);
      String::~String();
      String::String(&v45, "Win");
      LogicDataTables::sm_pWinMusic = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8BA8
                                                                                           + 48LL))(
                                        qword_1004F8BA8,
                                        &v45,
                                        0);
      String::~String();
      String::String(&v44, "Lose");
      LogicDataTables::sm_pLoseMusic = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8BA8
                                                                                            + 48LL))(
                                         qword_1004F8BA8,
                                         &v44,
                                         0);
      String::~String();
      String::String(&v43, "Draw");
      LogicDataTables::sm_pDrawMusic = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8BA8
                                                                                            + 48LL))(
                                         qword_1004F8BA8,
                                         &v43,
                                         0);
      String::~String();
      String::String(&v42, "Gold");
      s_pGoldData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A88 + 48LL))(
                      qword_1004F8A88,
                      &v42,
                      0);
      String::~String();
      String::String(&v41, "FreeGold");
      s_pFreeGoldData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A88 + 48LL))(
                          qword_1004F8A88,
                          &v41,
                          0);
      String::~String();
      String::String(&v40, "KingTower");
      LogicDataTables::sm_pSummonerData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A90
                                                                                               + 48LL))(
                                            qword_1004F8A90,
                                            &v40,
                                            0);
      String::~String();
      String::String(&v39, "PrincessTower");
      LogicDataTables::sm_pTowerData = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8A90
                                                                                            + 48LL))(
                                         qword_1004F8A90,
                                         &v39,
                                         0);
      String::~String();
      String::String(&v38, "Physical");
      LogicDataTables::sm_pPhysicalDamageType = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AA0
                                                                                                     + 48LL))(
                                                  qword_1004F8AA0,
                                                  &v38,
                                                  0);
      String::~String();
      String::String(&v37, "Electrical");
      LogicDataTables::sm_pElectricalDamageType = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AA0 + 48LL))(
                                                    qword_1004F8AA0,
                                                    &v37,
                                                    0);
      String::~String();
      String::String(&v36, "Immunity");
      LogicDataTables::sm_pImmunityEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                 + 48LL))(
                                              qword_1004F8AB8,
                                              &v36,
                                              0);
      String::~String();
      String::String(&v35, "Vulnerability");
      LogicDataTables::sm_pVulnerabilityEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                      + 48LL))(
                                                   qword_1004F8AB8,
                                                   &v35,
                                                   0);
      String::~String();
      String::String(&v34, "Healing");
      LogicDataTables::sm_pHealingEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                + 48LL))(
                                             qword_1004F8AB8,
                                             &v34,
                                             0);
      String::~String();
      String::String(&v33, "GetGold");
      LogicDataTables::sm_pGetGoldEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                + 48LL))(
                                             qword_1004F8AB8,
                                             &v33,
                                             0);
      String::~String();
      String::String(&v32, "GetMana");
      LogicDataTables::sm_pGetManaEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                + 48LL))(
                                             qword_1004F8AB8,
                                             &v32,
                                             0);
      String::~String();
      String::String(&v31, "RangeDanger");
      LogicDataTables::sm_pRangeDangerEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                    + 48LL))(
                                                 qword_1004F8AB8,
                                                 &v31,
                                                 0);
      String::~String();
      String::String(&v30, "GoodTarget");
      LogicDataTables::sm_pGoodTargetEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                   + 48LL))(
                                                qword_1004F8AB8,
                                                &v30,
                                                0);
      String::~String();
      String::String(&v29, "DragEffect");
      LogicDataTables::sm_pDragEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                             + 48LL))(
                                          qword_1004F8AB8,
                                          &v29,
                                          0);
      String::~String();
      String::String(&v28, "LevelUp");
      LogicDataTables::sm_pLevelUpEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                + 48LL))(
                                             qword_1004F8AB8,
                                             &v28,
                                             0);
      String::~String();
      String::String(&v27, "Character_marker_player");
      LogicDataTables::sm_pCharacterMarkerPlayer = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8 + 48LL))(
                                                     qword_1004F8AB8,
                                                     &v27,
                                                     0);
      String::~String();
      String::String(&v26, "King_player_activate");
      LogicDataTables::sm_pKingActivateEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8
                                                                                                     + 48LL))(
                                                  qword_1004F8AB8,
                                                  &v26,
                                                  0);
      String::~String();
      String::String(&v25, "King_enemy_activate_training");
      LogicDataTables::sm_pKingActivateTrainingEffect = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8 + 48LL))(
                                                          qword_1004F8AB8,
                                                          &v25,
                                                          0);
      String::~String();
      String::String(&v24, "Character_move_target_marker_player");
      LogicDataTables::sm_pCharacterMoveTargetMarkerPlayer = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AB8 + 48LL))(
                                                               qword_1004F8AB8,
                                                               &v24,
                                                               0);
      String::~String();
      String::String(&v23, "ChestTemplate");
      LogicDataTables::sm_pChestTemplateDeco = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8BB0
                                                                                                    + 48LL))(
                                                 qword_1004F8BB0,
                                                 &v23,
                                                 0);
      String::~String();
      String::String(&v22, "Common");
      LogicDataTables::sm_pRarityCommon = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AD0
                                                                                               + 48LL))(
                                            qword_1004F8AD0,
                                            &v22,
                                            0);
      String::~String();
      String::String(&v21, "Rare");
      LogicDataTables::sm_pRarityRare = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AD0
                                                                                             + 48LL))(
                                          qword_1004F8AD0,
                                          &v21,
                                          0);
      String::~String();
      String::String(&v20, "Epic");
      LogicDataTables::sm_pRarityEpic = (*(__int64 (__fastcall **)(__int64, String *, _QWORD))(*(_QWORD *)qword_1004F8AD0
                                                                                             + 48LL))(
                                          qword_1004F8AD0,
                                          &v20,
                                          0);
      String::~String();
      CurrentTime = LogicTimeUtil::getCurrentTime(v5);
      for ( j = 1; j < 62; ++j )
      {
        v8 = TABLES[j];
        if ( v8 )
        {
          v9 = (LogicTimeUtil *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
          v10 = LogicTimeUtil::getCurrentTime(v9);
          String::format((String *)"createReferences for table %d took %d ms", v11, j, (unsigned int)(v10 - CurrentTime));
          Debugger::print((Debugger *)&v19, v12);
          String::~String();
          CurrentTime = v10;
        }
      }
      v13 = dword_1004F6E3C;
      v14 = 1;
      if ( dword_1004F6E3C >= 1 )
      {
        v15 = 0;
        v14 = 1;
        do
        {
          v16 = *(LogicTilemapData **)(LogicDataTables::sm_tilemaps + 8 * v15);
          if ( v16 )
            LogicTilemapData::createReferences(v16);
          ++v15;
        }
        while ( v13 != (_DWORD)v15 );
      }
      do
      {
        v17 = (LogicDataTables *)TABLES[v14];
        if ( v17 )
          v17 = (LogicDataTables *)(*(__int64 (__fastcall **)(LogicDataTables *))(*(_QWORD *)v17 + 80LL))(v17);
        ++v14;
      }
      while ( v14 != 62 );
      result = LogicDataTables::validateTables(v17);
      LogicDataTables::sm_loaded = 1;
      return result;
    }

    __int64 __fastcall LogicDataTables::getCharacterByName(
            LogicKickAllianceMemberCommand *this,
            const String *a2,
            const AreaEffectObject *a3)
    {
      return (*(__int64 (__fastcall **)(__int64, LogicKickAllianceMemberCommand *, const String *))(*(_QWORD *)qword_1004F8A90
                                                                                                  + 48LL))(
               qword_1004F8A90,
               this,
               a2);
    }

    __int64 __fastcall LogicDataTables::getDamageTypeByName(
            LogicKickAllianceMemberCommand *this,
            const String *a2,
            const AreaEffectObject *a3)
    {
      return (*(__int64 (__fastcall **)(__int64, LogicKickAllianceMemberCommand *, const String *))(*(_QWORD *)qword_1004F8AA0
                                                                                                  + 48LL))(
               qword_1004F8AA0,
               this,
               a2);
    }

    __int64 __fastcall LogicDataTables::getEffectByName(
            LogicKickAllianceMemberCommand *this,
            const String *a2,
            const AreaEffectObject *a3)
    {
      return (*(__int64 (__fastcall **)(__int64, LogicKickAllianceMemberCommand *, const String *))(*(_QWORD *)qword_1004F8AB8
                                                                                                  + 48LL))(
               qword_1004F8AB8,
               this,
               a2);
    }

    __int64 __fastcall LogicDataTables::getRarityByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8AD0 + 48LL))(
               qword_1004F8AD0,
               a1,
               a2);
    }

    __int64 LogicDataTables::validateTables()
    {
      Debugger *isPrincessTower; // x0
      const char *v1; // x2
      long double v2; // q0
      __int64 v3; // x19
      __int64 result; // x0
      __int64 v5; // x20
      LogicGameObjectManagerListener **v6; // x22
      int MaxLevelIndex; // w23
      int v8; // w26
      __int64 v9; // x24
      int v10; // w25
      __int64 Name; // x0
      const char *v12; // x1
      _QWORD *v13; // x8
      const String *v14; // x1
      __siginfo var58; // [xsp+18h] [xbp-58h] BYREF
    
      isPrincessTower = (Debugger *)LogicCharacterData::isPrincessTower((Font *)LogicDataTables::sm_pTowerData);
      *(__n128 *)&v2 = Debugger::doAssert(isPrincessTower, (bool)"", v1);
      v3 = qword_1004F8A98;
      result = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)qword_1004F8A98 + 32LL))(qword_1004F8A98, v2);
      if ( (int)result >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = (LogicGameObjectManagerListener **)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(
                                                    v3,
                                                    v5);
          MaxLevelIndex = LogicSpellData::getMaxLevelIndex(v6);
          v8 = LogicSpellData::calculateChecksumForLevel((InitState *)v6, 0);
          if ( MaxLevelIndex >= 2 )
          {
            v9 = 1;
            do
            {
              v10 = LogicSpellData::calculateChecksumForLevel((InitState *)v6, (LogicMath *)v9);
              if ( v10 == v8 )
              {
                Name = LogicData::getName((AreaEffectObject *)v6);
                v13 = (_QWORD *)(Name + 8);
                if ( *(_DWORD *)(Name + 4) + 1 > 8 )
                  v13 = (_QWORD *)*v13;
                v9 = (unsigned int)(v9 + 1);
                String::format(
                  (String *)"Spell %s at level %d values are identical to previous level. (or checksum calculation is missing a value)",
                  v12,
                  v13,
                  v9);
                Debugger::warning(&var58, v14);
                String::~String();
              }
              else
              {
                v9 = (unsigned int)(v9 + 1);
              }
              v8 = v10;
            }
            while ( (int)v9 < MaxLevelIndex );
          }
          v5 = (unsigned int)(v5 + 1);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
        }
        while ( (int)v5 < (int)result );
      }
      return result;
    }

    __int64 LogicDataTables::isLoaded()
    {
      return (unsigned __int8)LogicDataTables::sm_loaded;
    }

    __int64 __fastcall LogicDataTables::getDataFromTable(int a1)
    {
      __int64 v1; // x0
    
      if ( (unsigned int)(a1 - 1) <= 0x3C && (v1 = TABLES[a1]) != 0 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
      else
        return 0;
    }

    __int64 LogicDataTables::getDefaultButtonClickSound()
    {
      return LogicDataTables::sm_pSoundButtonClick2;
    }

    __int64 __fastcall LogicDataTables::getAchievementByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8C40 + 48LL))(
               qword_1004F8C40,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getCharacterBuffByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8AA8 + 48LL))(
               qword_1004F8AA8,
               a1,
               a2);
    }

    __int64 LogicDataTables::getSummonerData()
    {
      return LogicDataTables::sm_pSummonerData;
    }

    __int64 LogicDataTables::getMenuMusic()
    {
      return LogicDataTables::sm_pMenuMusic;
    }

    __int64 LogicDataTables::getSelectSpellSound()
    {
      return LogicDataTables::sm_pSelectSpellSound;
    }

    __int64 __fastcall LogicDataTables::getProjectileByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8AB0 + 48LL))(
               qword_1004F8AB0,
               a1,
               a2);
    }

    __int64 LogicDataTables::getPhysicalDamageType()
    {
      return LogicDataTables::sm_pPhysicalDamageType;
    }

    __int64 LogicDataTables::getImmunityEffect()
    {
      return LogicDataTables::sm_pImmunityEffect;
    }

    __int64 LogicDataTables::getVulnerabilityEffect()
    {
      return LogicDataTables::sm_pVulnerabilityEffect;
    }

    __int64 __fastcall LogicDataTables::getSpellByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8A98 + 48LL))(
               qword_1004F8A98,
               a1,
               a2);
    }

    __int64 LogicDataTables::getHealingEffect()
    {
      return LogicDataTables::sm_pHealingEffect;
    }

    __int64 __fastcall LogicDataTables::getPredefinedDeckByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8AC0 + 48LL))(
               qword_1004F8AC0,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getEggByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8AC8 + 48LL))(
               qword_1004F8AC8,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getArenaByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8C10 + 48LL))(
               qword_1004F8C10,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getLocationByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8AD8 + 48LL))(
               qword_1004F8AD8,
               a1,
               a2);
    }

    __int64 LogicDataTables::getMaxExpLevel()
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1004F8BD0 + 32LL))(qword_1004F8BD0);
    }

    __int64 __fastcall LogicDataTables::getNpcByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8AF0 + 48LL))(
               qword_1004F8AF0,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getTreasureChestByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8AF8 + 48LL))(
               qword_1004F8AF8,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getParticleEmitterByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8B08 + 48LL))(
               qword_1004F8B08,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::initTilemap(__int64 a1, int a2)
    {
      int v4; // w8
      int v5; // w22
      BillingManager *v6; // x21
      BillingManager *v8; // [xsp+0h] [xbp-30h] BYREF
      __int64 v9; // [xsp+8h] [xbp-28h] BYREF
    
      LogicArrayList<LogicTilemapData *>::ensureCapacity(&LogicDataTables::sm_tilemaps, (unsigned int)(a2 + 1));
      v4 = dword_1004F6E3C;
      if ( dword_1004F6E3C < a2 )
      {
        v5 = a2 - dword_1004F6E3C;
        do
        {
          v9 = 0;
          LogicArrayList<LogicTilemapData *>::add(&LogicDataTables::sm_tilemaps, &v9);
          --v5;
        }
        while ( v5 );
        v4 = dword_1004F6E3C;
      }
      v8 = 0;
      if ( v4 <= a2 )
      {
        v6 = (BillingManager *)operator new(160);
        LogicTilemapData::LogicTilemapData(v6);
        v8 = v6;
        LogicArrayList<LogicTilemapData *>::add(&LogicDataTables::sm_tilemaps, &v8);
      }
      else
      {
        v6 = *(BillingManager **)(LogicDataTables::sm_tilemaps + 8LL * a2);
        v8 = v6;
        if ( !v6 )
        {
          v6 = (BillingManager *)operator new(160);
          LogicTilemapData::LogicTilemapData(v6);
          v8 = v6;
          *(_QWORD *)(LogicDataTables::sm_tilemaps + 8LL * a2) = v6;
        }
      }
      LogicTilemapData::setCSVNode(v6, a1);
      return LogicTilemapData::createReferences(v6);
    }

    __int64 __fastcall LogicDataTables::getAreaEffectObjectByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8B10 + 48LL))(
               qword_1004F8B10,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getHealthBarByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8BA0 + 48LL))(
               qword_1004F8BA0,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getBestHealthBar(int a1)
    {
      __int64 v2; // x20
      __int64 v3; // x21
      __int64 v4; // x22
      __int64 v5; // x23
      int v6; // w24
      int MinimumHitpointValue; // w0
      bool v8; // cc
    
      v2 = qword_1004F8BA0;
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)qword_1004F8BA0 + 32LL))(qword_1004F8BA0) < 1 )
        return 0;
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 40LL))(v2, v4);
        v6 = ((__int64 (*)(void))LogicHealthBarData::getMinimumHitpointValue)();
        if ( v6 != -1 )
        {
          if ( !v3
            || ((MinimumHitpointValue = LogicHealthBarData::getMinimumHitpointValue(v3), v6 < a1)
              ? (v8 = MinimumHitpointValue < v6)
              : (v8 = 0),
                v8) )
          {
            v3 = v5;
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (int)v4 < (*(int (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2) );
      return v3;
    }

    __int64 LogicDataTables::getScrollOpenSound()
    {
      return LogicDataTables::sm_pScrollOpenSound;
    }

    __int64 LogicDataTables::getScrollCloseSound()
    {
      return LogicDataTables::sm_pScrollCloseSound;
    }

    __int64 LogicDataTables::getManaEffect()
    {
      return LogicDataTables::sm_pGetManaEffect;
    }

    __int64 LogicDataTables::getChestUnlockStartSound()
    {
      return LogicDataTables::sm_pChestUnlockStartSound;
    }

    __int64 LogicDataTables::getClaimChestSound()
    {
      return LogicDataTables::sm_pClaimChestSound;
    }

    __int64 LogicDataTables::getRangeDangerEffect()
    {
      return LogicDataTables::sm_pRangeDangerEffect;
    }

    __int64 LogicDataTables::getGoodTargetEffect()
    {
      return LogicDataTables::sm_pGoodTargetEffect;
    }

    __int64 LogicDataTables::getNoWorkersSound()
    {
      return LogicDataTables::sm_pNoWorkersSound;
    }

    __int64 LogicDataTables::getSpellFuseSound()
    {
      return LogicDataTables::sm_pSpellFuseSound;
    }

    __int64 LogicDataTables::getUnlockWithDiamondsSound()
    {
      return LogicDataTables::sm_pUnlockWithDiamondsSound;
    }

    __int64 __fastcall LogicDataTables::getTilemapAt(int a1)
    {
      __int64 result; // x0
    
      result = 0;
      if ( (a1 & 0x80000000) == 0 && dword_1004F6E3C > a1 )
        return *(_QWORD *)(LogicDataTables::sm_tilemaps + 8LL * a1);
      return result;
    }

    __int64 __fastcall LogicDataTables::getTutorialByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8BE8 + 48LL))(
               qword_1004F8BE8,
               a1,
               a2);
    }

    __int64 __fastcall LogicDataTables::getExpLevel(int a1)
    {
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_1004F8BD0 + 40LL))(
               qword_1004F8BD0,
               (unsigned int)(a1 - 1));
    }

    __int64 LogicDataTables::getSellChestSound()
    {
      return LogicDataTables::sm_pSellChestSound;
    }

    __int64 LogicDataTables::getSpellAvailableSound()
    {
      return LogicDataTables::sm_pSpellAvailableSound;
    }

    __int64 LogicDataTables::getSpellNotReadySound()
    {
      return LogicDataTables::sm_pSpellNotReadySound;
    }

    __int64 LogicDataTables::getAttackButtonSound()
    {
      return LogicDataTables::sm_pAttackButtonSound;
    }

    __int64 LogicDataTables::getGetDiamondsSound()
    {
      return LogicDataTables::sm_pGetDiamondsSound;
    }

    __int64 LogicDataTables::getCharacterMarkerPlayer()
    {
      return LogicDataTables::sm_pCharacterMarkerPlayer;
    }

    __int64 LogicDataTables::getKingActivateEffect()
    {
      return LogicDataTables::sm_pKingActivateEffect;
    }

    __int64 LogicDataTables::getKingActivateTrainingEffect()
    {
      return LogicDataTables::sm_pKingActivateTrainingEffect;
    }

    __int64 LogicDataTables::getCharacterMarkerMoveTargetPlayer()
    {
      return LogicDataTables::sm_pCharacterMoveTargetMarkerPlayer;
    }

    __int64 __fastcall LogicDataTables::getChestOrderData(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_1004F8C00 + 40LL))(qword_1004F8C00, a1);
    }

    __int64 __fastcall LogicDataTables::getTauntData(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_1004F8C08 + 40LL))(qword_1004F8C08, a1);
    }

    __int64 __fastcall LogicDataTables::getTauntByName(__int64 a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1004F8C08 + 48LL))(
               qword_1004F8C08,
               a1,
               a2);
    }

    __int64 LogicDataTables::getTauntCount()
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1004F8C08 + 32LL))(qword_1004F8C08);
    }

    __int64 LogicDataTables::getSpellCount()
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1004F8A98 + 32LL))(qword_1004F8A98);
    }

    __int64 __fastcall LogicDataTables::getSpellAt(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_1004F8A98 + 40LL))(qword_1004F8A98, a1);
    }

    // attributes: thunk
    __int64 __fastcall LogicDataTables::getSpellById(SectorCommandMessage *this)
    {
      return LogicDataTables::getDataById(this);
    }

    __int64 LogicDataTables::getChestOrderIndexData()
    {
      return s_pChestOrderIndexData;
    }

    __int64 LogicDataTables::getChestCountData()
    {
      return s_pChestCountData;
    }

    __int64 LogicDataTables::getStarCountData()
    {
      return s_pStarCountData;
    }

    __int64 LogicDataTables::getCardCountData()
    {
      return s_pCardCountData;
    }

    __int64 LogicDataTables::getRarityEpic()
    {
      return LogicDataTables::sm_pRarityEpic;
    }

    __int64 LogicDataTables::getRarityRare()
    {
      return LogicDataTables::sm_pRarityRare;
    }

    __int64 LogicDataTables::getRarityCommon()
    {
      return LogicDataTables::sm_pRarityCommon;
    }

    __int64 LogicDataTables::getKingTowerData()
    {
      return LogicDataTables::sm_pSummonerData;
    }

    __int64 LogicDataTables::getPrincessTowerData()
    {
      return LogicDataTables::sm_pTowerData;
    }

    __int64 LogicDataTables::getEnemyGainedStar()
    {
      return LogicDataTables::sm_pEnemyGainedStarSound;
    }

    __int64 LogicDataTables::getPlayerGainedStar()
    {
      return LogicDataTables::sm_pPlayerGainedStarSound;
    }

    __int64 LogicDataTables::getNewChatMessageSound()
    {
      return LogicDataTables::sm_pNewChatMessage;
    }

    __int64 LogicDataTables::getCardDonatedSound()
    {
      return LogicDataTables::sm_pCardDonated;
    }

}; // end class LogicDataTables
