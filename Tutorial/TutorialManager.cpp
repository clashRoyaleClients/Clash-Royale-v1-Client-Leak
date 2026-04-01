class TutorialManager
{
public:

    void __fastcall TutorialManager::TutorialManager(TutorialManager *this)
    {
      memset(this, 0, 0x70u);
      *(_QWORD *)((char *)this + 108) = 0x4120000000000000LL;
    }

    __int64 __fastcall TutorialManager::initForCombat(__int64 this, OutOfSyncMessage *a2)
    {
      *(_QWORD *)(this + 40) = a2;
      return this;
    }

    _QWORD *__fastcall TutorialManager::~TutorialManager(_QWORD *a1)
    {
      __int64 v2; // x0
    
      TutorialManager::releaseContent((TutorialManager *)a1);
      a1[5] = 0;
      a1[6] = 0;
      a1[3] = 0;
      a1[4] = 0;
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
      *(_QWORD *)((char *)a1 + 108) = 0;
      *(_QWORD *)((char *)a1 + 100) = 0;
      *(_QWORD *)((char *)a1 + 92) = 0;
      *(_QWORD *)((char *)a1 + 84) = 0;
      *(_QWORD *)((char *)a1 + 76) = 0;
      *(_QWORD *)((char *)a1 + 68) = 0;
      v2 = a1[7];
      if ( v2 )
        operator delete[](v2);
      a1[7] = 0;
      a1[8] = 0;
      return a1;
    }

    void __fastcall TutorialManager::releaseContent(int *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x20
      _QWORD *v5; // x21
      __int64 v6; // x0
      int v7; // w8
      __int64 i; // x21
      _QWORD *v9; // x20
    
      v2 = *((_QWORD *)a1 + 1);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)a1 + 1) = 0;
      if ( *(_QWORD *)a1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 8LL))(*(_QWORD *)a1);
      *(_QWORD *)a1 = 0;
      v3 = *((_QWORD *)a1 + 2);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = 0;
      *((_QWORD *)a1 + 2) = 0;
      v5 = a1 + 6;
      do
      {
        v6 = v5[v4];
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v5[v4++] = 0;
      }
      while ( v4 != 2 );
      v7 = a1[17];
      if ( v7 >= 1 )
      {
        for ( i = 0; i < v7; ++i )
        {
          v9 = *(_QWORD **)(*((_QWORD *)a1 + 7) + 8 * i);
          if ( v9 )
          {
            if ( *v9 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
            operator delete(v9);
            v7 = a1[17];
          }
        }
      }
    }

    // attributes: thunk
    void __fastcall TutorialManager::~TutorialManager(_QWORD *this)
    {
      __ZN15TutorialManagerD2Ev(this);
    }

    __int64 __fastcall TutorialManager::tutorialStarted(_QWORD *a1, LogicMusicData *a2)
    {
      GameMain *FileName; // x0
      const String *v5; // x1
      const String *v6; // x1
      const char *v7; // x2
      const char *v8; // x2
      __int64 MovieClip; // x0
      __int64 v10; // x8
      __int64 v11; // x9
      int SpellTileX; // w21
      int SpellTileY; // w0
      vm_address_t *BubbleObject; // x0
      __int64 Instance; // x0
      __int64 TutorialManager; // x0
      GameMode *TutorialSpeechBubbleObject; // x22
      int v18; // w22
      bool v19; // zf
      const char *OverlayExportName; // x0
      const String *v21; // x2
      _BYTE *v22; // x0
      LogicTutorialManager *v23; // x0
      LogicTutorialManager *v24; // x0
      __int64 CombatHUD; // x0
      OutOfSyncMessage *v26; // x23
      __int64 (__fastcall *v27)(OutOfSyncMessage *, __int64, __int64); // x25
      __int64 v28; // x24
      __int64 ChildIndex; // x0
      LogicTutorialManager *v30; // x0
      LogicTutorialManager *v31; // x0
      LogicJSONObject *RenderSystem; // x0
      long double v33; // q1
      LogicTutorialManager *TauntData; // x0
      const LogicTauntData *v35; // x21
      LogicTutorialManager *v36; // x22
      CombatHUD *v37; // x0
      vm_address_t *v38; // x0
      __int64 v39; // x0
      __int64 v40; // x0
      LogicTutorialManager *v41; // x0
      GameMode *v42; // x22
      LogicTutorialManager *v43; // x0
      LogicJSONObject *v44; // x23
      ResourceManager *v45; // x21
      const String *BubbleExportName; // x0
      const String *v47; // x2
      MovieClip *v48; // x21
      int FrameIndex; // w0
      int v50; // w24
      int v51; // w0
      LogicTutorialManager *v52; // x0
      LogicTutorialManager *v53; // x0
      __int64 v54; // x22
      long double v55; // q1
      #1308 *TID; // x24
      __int64 MovieClipByName; // x0
      #1271 *TextFieldByName; // x23
      int isMultiLine; // w25
      const String *v60; // x1
      #1308 *String; // x1
      #1271 *v62; // x1
      BadgePopup *PopupExportName; // x0
      __int64 v64; // x21
      TutorialPopup *v65; // x22
      Stage *PopupCorner; // x0
      int v67; // w23
      __int64 v68; // x0
      float v69; // s0
      float v70; // s1
      float v71; // s2
      float v72; // s3
      float v73; // s4
      int v74; // w27
      __int64 v75; // x22
      float v76; // s0
      float v77; // s1
      long double v78; // q0
      __int64 v79; // x0
      const char *SpellDragExportName; // x0
      const String *v81; // x2
      MovieClip *v82; // x0
      _BYTE *v83; // x0
      LogicTutorialManager *isNPCMode; // x0
      LogicTutorialManager *v85; // x25
      __int64 v86; // x23
      __int64 SpellToCast; // x0
      __int64 SpellButtonBySpellData; // x0
      long double v89; // q1
      int v90; // w24
      int v91; // w26
      LogicJSONObject *v92; // x0
      long double v93; // q1
      const char *v94; // x1
      LogicTutorialManager *v95; // x0
      __int64 v96; // x21
      __int64 Sound; // x0
      LogicTutorialManager *v98; // x0
      LogicChest *v99; // x0
      ChangeAllianceMemberRoleOkMessage **v100; // x21
      __int64 result; // x0
      __int64 Name; // x0
      #1308 *v103; // x0
      const String *v104; // x1
      #1308 *v105; // x2
      bool v106; // w1
      __int64 v107; // x0
      #1308 *v108; // x0
      const String *v109; // x1
      __int64 v110; // x0
      LogicTutorialManager *v111; // x0
      LogicChest *v112; // x0
      LogicDataTables *LogicGame; // x0
      LogicSpellListener *v114; // x19
      const AreaEffectObject *SummonerData; // x0
      GameMode *GameObjectByDataIndex; // x0
      LogicDataTables *v117; // x0
      const AreaEffectObject *PrincessTowerData; // x0
      int v119; // w20
      int v120; // w21
      const AreaEffectObject *v121; // x0
      LogicSpellListener **v122; // x22
      __int64 v123; // x0
      LogicChest *v124; // x0
      LogicDataTables *v125; // x0
      LogicSpellListener *v126; // x19
      const AreaEffectObject *v127; // x0
      GameMode *v128; // x0
      LogicDataTables *v129; // x0
      const AreaEffectObject *v130; // x0
      int v131; // w20
      int v132; // w21
      const AreaEffectObject *v133; // x0
      LogicSpellListener **v134; // x22
      int v135; // [xsp+0h] [xbp-A0h] BYREF
      float v136; // [xsp+4h] [xbp-9Ch] BYREF
      __int64 v137; // [xsp+8h] [xbp-98h] BYREF
      float v138; // [xsp+10h] [xbp-90h] BYREF
      float v139; // [xsp+14h] [xbp-8Ch] BYREF
      float v140; // [xsp+18h] [xbp-88h] BYREF
      float v141; // [xsp+1Ch] [xbp-84h] BYREF
      __int64 v142; // [xsp+20h] [xbp-80h] BYREF
      float v143; // [xsp+28h] [xbp-78h] BYREF
      float v144; // [xsp+2Ch] [xbp-74h] BYREF
      float v145; // [xsp+30h] [xbp-70h] BYREF
      float v146; // [xsp+34h] [xbp-6Ch] BYREF
      String v147; // [xsp+38h] [xbp-68h] BYREF
    
      a1[6] = a2;
      TutorialManager::fadeOutBubbleSprites((AllianceSearch *)a1);
      if ( *(_DWORD *)LogicTutorialData::getFileName(a2) )
      {
        FileName = (GameMain *)LogicTutorialData::getFileName(a2);
        GameMain::loadAsset(FileName, v5);
      }
      String::String(&v147, "sc/tutorial.sc");
      GameMain::loadAsset((GameMain *)&v147, v6);
      String::~String();
      if ( (unsigned int)LogicTutorialData::isHomeMode(a2) && !a1[3] )
      {
        a1[3] = ResourceManager::getMovieClip((ResourceManager *)"sc/tutorial.sc", "tutorial_arrow", v7);
        MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/tutorial.sc", "tutorial_arrow_left", v8);
        v10 = 0;
        a1[4] = MovieClip;
        do
        {
          v11 = a1[v10 + 3];
          *(_BYTE *)(v11 + 8) = 0;
          *(_BYTE *)(v11 + 64) = 0;
          ++v10;
        }
        while ( v10 != 2 );
      }
      *((_BYTE *)a1 + 104) = 0;
      if ( *(_DWORD *)LogicTutorialData::getOverlayExportName(a2) && (LogicTutorialData::isHomeMode(a2) & 1) == 0 )
      {
        if ( LogicTutorialData::getSpellToCast(a2) )
        {
          SpellTileX = LogicTutorialData::getSpellTileX(a2);
          SpellTileY = LogicTutorialData::getSpellTileY(a2);
        }
        else
        {
          BubbleObject = (vm_address_t *)LogicTutorialData::getBubbleObject(a2);
          if ( !BubbleObject )
            goto LABEL_20;
          Instance = GameMode::getInstance(BubbleObject);
          TutorialManager = LogicGameMode::getTutorialManager(*(_QWORD *)(Instance + 112));
          TutorialSpeechBubbleObject = (GameMode *)LogicTutorialManager::getTutorialSpeechBubbleObject(TutorialManager);
          SpellTileX = LogicGameObject::getX(TutorialSpeechBubbleObject);
          SpellTileY = LogicGameObject::getY(TutorialSpeechBubbleObject);
        }
        v18 = SpellTileY;
        if ( SpellTileY )
          v19 = SpellTileX == 0;
        else
          v19 = 1;
        if ( !v19 )
        {
          *((_BYTE *)a1 + 104) = 1;
          if ( *a1 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
            *a1 = 0;
          }
          OverlayExportName = (const char *)LogicTutorialData::getOverlayExportName(a2);
          v22 = (_BYTE *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", OverlayExportName, v21);
          *a1 = v22;
          v22[64] = 0;
          v23 = (LogicTutorialManager *)(*(__int64 (__fastcall **)(_BYTE *, long double))(*(_QWORD *)v22 + 80LL))(
                                          v22,
                                          COERCE_LONG_DOUBLE((unsigned __int128)0));
          *(_BYTE *)(*a1 + 8LL) = 0;
          v24 = (LogicTutorialManager *)BattleScreen::getInstance(v23);
          CombatHUD = BattleScreen::getCombatHUD(v24);
          v26 = *(OutOfSyncMessage **)(CombatHUD + 48);
          v27 = *(__int64 (__fastcall **)(OutOfSyncMessage *, __int64, __int64))(*(_QWORD *)v26 + 168LL);
          v28 = *a1;
          ChildIndex = Sprite::getChildIndex(v26, (const #1249 *)CombatHUD);
          v30 = (LogicTutorialManager *)v27(v26, v28, ChildIndex);
          v31 = (LogicTutorialManager *)BattleScreen::getInstance(v30);
          RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(v31);
          v145 = 0.0;
          v146 = 0.0;
          RenderSystem::logicToGlobal(RenderSystem, SpellTileX, v18, &v146, &v145);
          v143 = 0.0;
          v144 = 0.0;
          *(float *)&v33 = v145;
          DisplayObject::globalToLocal(v26, &v144, &v143, v146, v33);
          DisplayObject::setXY((DisplayObject *)*a1, v144, v143);
        }
      }
    LABEL_20:
      TauntData = (LogicTutorialManager *)LogicTutorialData::getTauntData(a2);
      v35 = TauntData;
      if ( TauntData )
      {
        v36 = (LogicTutorialManager *)BattleScreen::getInstance(TauntData);
        if ( v36 )
        {
          LogicLong::LogicLong((LogicLong *)&v142, -1, -1);
          v37 = (CombatHUD *)BattleScreen::getCombatHUD(v36);
          CombatHUD::showTaunt(v37, (const LogicLong *)&v142, v35);
          v142 = 0;
        }
      }
      if ( *(_DWORD *)LogicTutorialData::getBubbleExportName(a2) )
      {
        v38 = (vm_address_t *)LogicTutorialData::getBubbleObject(a2);
        if ( v38 )
        {
          v39 = GameMode::getInstance(v38);
          v40 = LogicGameMode::getTutorialManager(*(_QWORD *)(v39 + 112));
          v41 = (LogicTutorialManager *)LogicTutorialManager::getTutorialSpeechBubbleObject(v40);
          v42 = v41;
          if ( v41 )
          {
            v43 = (LogicTutorialManager *)BattleScreen::getInstance(v41);
            v44 = (LogicJSONObject *)BattleScreen::getRenderSystem(v43);
            v45 = (ResourceManager *)LogicTutorialData::getFileName(a2);
            BubbleExportName = (const String *)LogicTutorialData::getBubbleExportName(a2);
            v48 = (MovieClip *)ResourceManager::getMovieClip(v45, BubbleExportName, v47);
            *((_BYTE *)v48 + 64) = 0;
            FrameIndex = MovieClip::getFrameIndex(v48, "stop");
            MovieClip::gotoAndPlayFrameIndex(v48, 0, FrameIndex);
            v140 = 0.0;
            v141 = 0.0;
            v50 = LogicGameObject::getX(v42);
            v51 = LogicGameObject::getY(v42);
            v52 = (LogicTutorialManager *)RenderSystem::logicToGlobal(v44, v50, v51, &v141, &v140);
            v53 = (LogicTutorialManager *)BattleScreen::getInstance(v52);
            v54 = *(_QWORD *)(BattleScreen::getCombatHUD(v53) + 48);
            v138 = 0.0;
            v139 = 0.0;
            *(float *)&v55 = v140;
            DisplayObject::globalToLocal(v54, &v139, &v138, v141, v55);
            TID = (#1308 *)LogicData::getTID((__int64)a2);
            MovieClipByName = MovieClip::getMovieClipByName(v48, "bubble");
            TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "txt");
            isMultiLine = TextField::isMultiLine(TextFieldByName);
            String = StringTable::getString(TID, v60);
            if ( isMultiLine )
            {
              TextField::setText(TextFieldByName, (const String *)String);
              MovieClipHelper::setTextFieldVerticallyCentered(TextFieldByName, v62);
            }
            else
            {
              MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, String, 0);
            }
            (*(void (__fastcall **)(__int64, MovieClip *))(*(_QWORD *)v54 + 160LL))(v54, v48);
            v75 = operator new(16);
            v77 = v138;
            v76 = v139;
            *(_QWORD *)v75 = 0;
            *(_QWORD *)(v75 + 8) = 0;
            *(_QWORD *)v75 = v48;
            *(float *)(v75 + 8) = v76;
            *(float *)(v75 + 12) = v77;
            *(__n128 *)&v78 = DisplayObject::setPixelSnappedXY(v48, v76 + 0.0, v77 + 0.0);
            v137 = v75;
            LogicArrayList<BubbleSprite *>::add(a1 + 7, &v137, v78);
          }
          goto LABEL_40;
        }
      }
      PopupExportName = (BadgePopup *)LogicTutorialData::getPopupExportName(a2);
      if ( !*(_DWORD *)PopupExportName )
      {
    LABEL_40:
        v74 = 1;
        goto LABEL_41;
      }
      v64 = GUI::getInstance(PopupExportName);
      v65 = (TutorialPopup *)operator new(320);
      TutorialPopup::TutorialPopup(v65, a2);
      PopupCorner = (Stage *)LogicTutorialData::getPopupCorner(a2);
      v67 = (int)PopupCorner;
      v68 = Stage::getInstance(PopupCorner);
      v69 = (float)*(int *)(v68 + 428);
      v70 = (float)*(int *)(v68 + 432);
      v71 = 0.0;
      v72 = 0.0;
      if ( v67 == 4 )
        v73 = (float)*(int *)(v68 + 432);
      else
        v73 = 0.0;
      if ( v67 == 2 )
        v72 = (float)*(int *)(v68 + 428);
      else
        v71 = v73;
      if ( v67 != 1 )
      {
        v70 = v71;
        v69 = v72;
      }
      DisplayObject::setPixelSnappedXY(v65, v69, v70);
      GUI::showPopup(v64, v65, v67 == 0, 1, 0);
      v74 = 0;
    LABEL_41:
      *((_BYTE *)a1 + 105) = 0;
      *((_BYTE *)a1 + 107) = 0;
      if ( *(_DWORD *)LogicTutorialData::getSpellDragExportName(a2) )
      {
        *((_BYTE *)a1 + 105) = 1;
        v79 = a1[1];
        if ( v79 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 8LL))(v79);
          a1[1] = 0;
        }
        SpellDragExportName = (const char *)LogicTutorialData::getSpellDragExportName(a2);
        v82 = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/tutorial.sc", SpellDragExportName, v81);
        a1[1] = v82;
        MovieClip::stop(v82);
        v83 = (_BYTE *)a1[1];
        v83[64] = 0;
        (*(void (__fastcall **)(_BYTE *, long double))(*(_QWORD *)v83 + 80LL))(
          v83,
          COERCE_LONG_DOUBLE((unsigned __int128)0));
        *(_BYTE *)(a1[1] + 8LL) = 0;
        *(_QWORD *)((char *)a1 + 92) = 0;
        *(_QWORD *)((char *)a1 + 84) = 0;
        *((_DWORD *)a1 + 25) = 0;
        isNPCMode = (LogicTutorialManager *)LogicTutorialData::isNPCMode(a2);
        if ( (_DWORD)isNPCMode )
        {
          v85 = (LogicTutorialManager *)BattleScreen::getInstance(isNPCMode);
          v86 = BattleScreen::getCombatHUD(v85);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v86 + 160LL))(v86, a1[1]);
          SpellToCast = LogicTutorialData::getSpellToCast(a2);
          SpellButtonBySpellData = CombatHUD::getSpellButtonBySpellData(v86, 0, SpellToCast);
          if ( !SpellButtonBySpellData )
            SpellButtonBySpellData = CombatHUD::getSpellButton(v86, 0, 0);
          v135 = 0;
          v136 = 0.0;
          DisplayObject::localToGlobal(*(float *)(SpellButtonBySpellData + 504), *(float *)(SpellButtonBySpellData + 508));
          LODWORD(v89) = 0;
          DisplayObject::globalToLocal(v86, (char *)a1 + 84, a1 + 11, 0.0, v89);
          v90 = LogicTutorialData::getSpellTileX(a2);
          v91 = LogicTutorialData::getSpellTileY(a2);
          v92 = (LogicJSONObject *)BattleScreen::getRenderSystem(v85);
          RenderSystem::logicToGlobal(v92, v90, v91, &v136, (float *)&v135);
          LODWORD(v93) = v135;
          DisplayObject::globalToLocal(v86, (char *)a1 + 92, a1 + 12, v136, v93);
        }
        else if ( (unsigned int)LogicTutorialData::getFinishRequirement(a2) == 110 )
        {
          Debugger::error((__siginfo *)"tutorial: TODO!", v94);
        }
        DisplayObject::setXY((DisplayObject *)a1[1], *((float *)a1 + 21), *((float *)a1 + 22));
      }
      *((_BYTE *)a1 + 106) = 0;
      v95 = (LogicTutorialManager *)LogicTutorialData::getSpellToCast(a2);
      if ( v95 )
        v95 = (LogicTutorialManager *)LogicTutorialData::isNPCMode(a2);
      if ( v74 )
      {
        v96 = SoundManager::sm_pInstance;
        Sound = LogicTutorialData::getSound(a2);
        v95 = (LogicTutorialManager *)SoundManager::playSound(
                                        v96,
                                        Sound,
                                        0xFFFFFFFFLL,
                                        1.0,
                                        COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      v98 = (LogicTutorialManager *)BattleScreen::getInstance(v95);
      if ( !v98
        || (v99 = (LogicChest *)BattleScreen::getInstance(v98),
            v100 = *(ChangeAllianceMemberRoleOkMessage ***)(GameScreen::getLogicGame(v99) + 168),
            result = LogicBattle::isFinished(v100),
            (result & 1) == 0)
        && (result = LogicBattle::isBattleEndedCalled((UnbindFacebookAccountMessage *)v100), (result & 1) == 0) )
      {
        Name = LogicData::getName(a2);
        if ( (unsigned int)String::equals(Name, "NPC1_Attack_HighlightArea") )
        {
          v103 = (#1308 *)LogicData::getTID((__int64)a2);
          v105 = StringTable::getString(v103, v104);
          v106 = 1;
          return TutorialManager::highlightArea((AllianceSearch *)a1, v106, (const String *)v105);
        }
        v107 = LogicData::getName(a2);
        if ( (unsigned int)String::equals(v107, "NPC1_Defend_HighlightArea") )
        {
          v108 = (#1308 *)LogicData::getTID((__int64)a2);
          v105 = StringTable::getString(v108, v109);
          v106 = 0;
          return TutorialManager::highlightArea((AllianceSearch *)a1, v106, (const String *)v105);
        }
        v110 = LogicData::getName(a2);
        v111 = (LogicTutorialManager *)String::equals(v110, "NPC1_Attack_HighlightUnits");
        if ( (_DWORD)v111 )
        {
          v112 = (LogicChest *)BattleScreen::getInstance(v111);
          LogicGame = (LogicDataTables *)GameScreen::getLogicGame(v112);
          v114 = (LogicSpellListener *)*((_QWORD *)LogicGame + 8);
          SummonerData = (const AreaEffectObject *)LogicDataTables::getSummonerData(LogicGame);
          GameObjectByDataIndex = LogicGameObjectManager::getGameObjectByDataIndex(v114, SummonerData, 0);
          v117 = (LogicDataTables *)Character::showHighlightMarker(*((Character **)GameObjectByDataIndex + 5));
          PrincessTowerData = (const AreaEffectObject *)LogicDataTables::getPrincessTowerData(v117);
          result = LogicGameObjectManager::getGameObjectCountByData(v114, PrincessTowerData);
          v119 = result;
          if ( (int)result >= 1 )
          {
            v120 = 0;
            do
            {
              v121 = (const AreaEffectObject *)LogicDataTables::getPrincessTowerData((LogicDataTables *)result);
              v122 = (LogicSpellListener **)LogicGameObjectManager::getGameObjectByDataIndex(v114, v121, v120);
              result = LogicGameObject::isOwnedByAI(v122);
              if ( (_DWORD)result )
                result = Character::showHighlightMarker(v122[5]);
              ++v120;
            }
            while ( v119 != v120 );
          }
        }
        else
        {
          v123 = LogicData::getName(a2);
          result = String::equals(v123, "NPC1_Defend_HighlightUnits");
          if ( (_DWORD)result )
          {
            v124 = (LogicChest *)BattleScreen::getInstance((LogicTutorialManager *)result);
            v125 = (LogicDataTables *)GameScreen::getLogicGame(v124);
            v126 = (LogicSpellListener *)*((_QWORD *)v125 + 8);
            v127 = (const AreaEffectObject *)LogicDataTables::getSummonerData(v125);
            v128 = LogicGameObjectManager::getGameObjectByDataIndex(v126, v127, 1);
            v129 = (LogicDataTables *)Character::showHighlightMarker(*((Character **)v128 + 5));
            v130 = (const AreaEffectObject *)LogicDataTables::getPrincessTowerData(v129);
            result = LogicGameObjectManager::getGameObjectCountByData(v126, v130);
            v131 = result;
            if ( (int)result >= 1 )
            {
              v132 = 0;
              do
              {
                v133 = (const AreaEffectObject *)LogicDataTables::getPrincessTowerData((LogicDataTables *)result);
                v134 = (LogicSpellListener **)LogicGameObjectManager::getGameObjectByDataIndex(v126, v133, v132);
                result = LogicGameObject::isOwnedByPlayer(v134);
                if ( (_DWORD)result )
                  result = Character::showHighlightMarker(v134[5]);
                ++v132;
              }
              while ( v131 != v132 );
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall TutorialManager::fadeOutBubbleSprites(__int64 this)
    {
      __int64 v1; // x19
      __int64 v2; // x20
    
      v1 = this;
      if ( *(int *)(this + 68) >= 1 )
      {
        v2 = 0;
        do
          this = BubbleSprite::fadeOut(*(BubbleSprite **)(*(_QWORD *)(v1 + 56) + 8 * v2++));
        while ( v2 < *(int *)(v1 + 68) );
      }
      return this;
    }

    void __fastcall TutorialManager::highlightArea(AllianceSearch *this, int a2, const String *a3)
    {
      int v6; // w22
      int v7; // w23
      LogicTutorialManager *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
    
      if ( a2 )
        v6 = 4;
      else
        v6 = 34;
      if ( a2 )
        v7 = 34;
      else
        v7 = 64;
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(this);
      RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(Instance);
      RenderSystem::highlightGround(RenderSystem, 0, v6, 36, v7, a2, a3);
      *((_DWORD *)this + 27) = 0;
    }

    LogicPageOpenedCommand *__fastcall TutorialManager::updateFuseSpellTutorial(AllianceSearch *this, float a2)
    {
      LogicPageOpenedCommand *result; // x0
      LogicPageOpenedCommand *v3; // x19
      int CurrentPage; // w20
      #1257 **MainHUD; // x0
    
      result = (LogicPageOpenedCommand *)HomeScreen::getInstance(this);
      v3 = result;
      if ( result )
      {
        CurrentPage = HomeScreen::getCurrentPage(result);
        MainHUD = (#1257 **)HomeScreen::getMainHUD(v3);
        return (LogicPageOpenedCommand *)MainHUD::setBottomGradientVisible(MainHUD, CurrentPage != 1);
      }
      return result;
    }

    LogicMusicData *__fastcall TutorialManager::update(AllianceSearch *this, float a2)
    {
      TutorialManager *updated; // x0
      LogicTutorialManager *v5; // x0
      __int64 Instance; // x0
      LogicChest *v7; // x20
      VisitHomeMessage *v8; // x0
      unsigned int *AccountId; // x21
      ChangeAllianceMemberRoleOkMessage **v10; // x20
      #1094 *v11; // x20
      int v12; // w21
      const char *v13; // x1
      const String *String; // x0
      float v15; // s0
      float *v16; // x3
      TutorialManager *v17; // x20
      __int64 i; // x8
      vm_address_t *ButtonTargetGlobalCoordinate; // x0
      __int64 v20; // x0
      LogicPageOpenedCommand *HomeScreen; // x21
      BadgePopup *RootSprite; // x20
      BadgePopup *v23; // x0
      BadgePopup *TopPopup; // x0
      __int64 v25; // x0
      int v26; // w23
      #1257 **MainHUD; // x0
      char v28; // w1
      void (__fastcall *v29)(BadgePopup *, __int64, __int64); // x24
      __int64 v30; // x22
      __int64 BottomGUIRootIndex; // x0
      long double v32; // q1
      DisplayObject **v33; // x20
      char v34; // w20
      LogicTutorialManager *DraggedSpellButton; // x0
      LogicTutorialManager *v36; // x0
      GameState *CombatHUD; // x0
      bool v38; // w4
      float MSPerFrame; // s8
      float v40; // s9
      float v41; // s10
      int v42; // w21
      float v43; // s9
      int TotalFrames; // w0
      float v45; // s10
      int FrameIndex; // w0
      float v47; // s0
      float v48; // s0
      __int64 v49; // x8
      LogicTutorialManager *v50; // x0
      LogicJSONObject *RenderSystem; // x20
      float ShakeX; // s8
      float ShakeY; // s9
      __int64 v54; // x8
      __int64 v55; // x21
      float *v56; // x22
      #1257 *v57; // x23
      int CurrentFrame; // w24
      __int64 v59; // x8
      LogicMusicData *result; // x0
      float v61; // s0
      float v62; // [xsp+8h] [xbp-68h] BYREF
      float v63; // [xsp+Ch] [xbp-64h] BYREF
      float v64; // [xsp+10h] [xbp-60h] BYREF
      float v65; // [xsp+14h] [xbp-5Ch] BYREF
      int v66; // [xsp+18h] [xbp-58h] BYREF
      bool v67; // [xsp+1Fh] [xbp-51h] BYREF
    
      updated = (TutorialManager *)TutorialManager::updateFade(
                                     this,
                                     (float *)this + 18,
                                     *(MovieClip **)this,
                                     *((_BYTE *)this + 104),
                                     a2,
                                     1);
      if ( (_DWORD)updated )
        *(_QWORD *)this = 0;
      v5 = (LogicTutorialManager *)TutorialManager::updateFade(
                                     updated,
                                     (float *)this + 20,
                                     *((MovieClip **)this + 2),
                                     *((_BYTE *)this + 106),
                                     a2,
                                     1);
      if ( (_DWORD)v5 )
        *((_QWORD *)this + 2) = 0;
      Instance = BattleScreen::getInstance(v5);
      v7 = (LogicChest *)Instance;
      if ( Instance )
      {
        Instance = *((_QWORD *)this + 6);
        if ( Instance )
        {
          Instance = LogicTutorialData::isHighlightTargetsOnManaFull((LogicMusicData *)Instance);
          if ( (_DWORD)Instance )
          {
            *((float *)this + 27) = *((float *)this + 27) + a2;
            v8 = (VisitHomeMessage *)GameMode::getInstance((vm_address_t *)Instance);
            AccountId = (unsigned int *)GameMode::getAccountId(v8);
            v10 = *(ChangeAllianceMemberRoleOkMessage ***)(GameScreen::getLogicGame(v7) + 168);
            Instance = LogicBattle::isFinished(v10);
            if ( (Instance & 1) == 0 )
            {
              Instance = LogicBattle::isBattleEndedCalled((UnbindFacebookAccountMessage *)v10);
              if ( (Instance & 1) == 0 )
              {
                Instance = LogicBattle::getLeaderCharacter(
                             (UnbindFacebookAccountMessage *)v10,
                             *AccountId,
                             (const char *)AccountId[1]);
                v11 = (#1094 *)Instance;
                if ( Instance )
                {
                  v12 = *(_DWORD *)(LogicDataTables::getGlobals((LogicDataTables *)Instance) + 148LL);
                  Instance = LogicSummoner::getSimulatedMana(v11);
                  if ( (int)Instance >= v12 && *((float *)this + 27) >= *((float *)this + 28) )
                  {
                    String = (const String *)StringTable::getString((#1308 *)"TID_TUTORIAL_ATTACK_REMINDER", v13);
                    TutorialManager::highlightArea(this, 1, String);
                    v15 = *((float *)this + 28) + *((float *)this + 28);
                    if ( v15 >= 30.0 )
                      v15 = 30.0;
                    *((float *)this + 28) = v15;
                  }
                }
              }
            }
          }
        }
      }
      if ( *((_QWORD *)this + 3) )
      {
        v67 = 0;
        v66 = 0;
        Instance = TutorialManager::getButtonTarget(this, &v67, &v66);
        v17 = (TutorialManager *)Instance;
        if ( !Instance
          || !*(_BYTE *)(Instance + 8)
          || (Instance = CustomButton::isEnabled((#1251 *)Instance), (Instance & 1) == 0) )
        {
          v17 = 0;
        }
        for ( i = 0; i != 16; i += 8 )
          *(_BYTE *)(*(_QWORD *)((char *)this + i + 24) + 8LL) = 0;
        if ( v17 )
        {
          v64 = 0.0;
          v65 = 0.0;
          ButtonTargetGlobalCoordinate = (vm_address_t *)TutorialManager::getButtonTargetGlobalCoordinate(
                                                           v17,
                                                           (const CustomButton *)&v65,
                                                           &v64,
                                                           v16);
          v20 = GameMode::getInstance(ButtonTargetGlobalCoordinate);
          HomeScreen = (LogicPageOpenedCommand *)GameMode::getHomeScreen(v20);
          RootSprite = (BadgePopup *)HomeScreen::getRootSprite(HomeScreen);
          v23 = (BadgePopup *)GUI::getInstance(RootSprite);
          TopPopup = (BadgePopup *)GUI::getTopPopup(v23);
          if ( TopPopup )
          {
            v25 = GUI::getInstance(TopPopup);
            RootSprite = (BadgePopup *)GUI::getLayer(v25, 3u);
            v26 = v66;
            (*(void (__fastcall **)(BadgePopup *, _QWORD, _QWORD))(*(_QWORD *)RootSprite + 168LL))(
              RootSprite,
              *((_QWORD *)this + v66 + 3),
              0);
          }
          else
          {
            if ( v67 )
            {
              v26 = v66;
              (*(void (__fastcall **)(BadgePopup *, _QWORD))(*(_QWORD *)RootSprite + 160LL))(
                RootSprite,
                *((_QWORD *)this + v66 + 3));
              MainHUD = (#1257 **)HomeScreen::getMainHUD(HomeScreen);
              v28 = 1;
    LABEL_30:
              MainHUD::setBottomGradientVisible(MainHUD, v28);
              v62 = 0.0;
              v63 = 0.0;
              *(float *)&v32 = v64;
              DisplayObject::globalToLocal(RootSprite, &v63, &v62, v65, v32);
              v33 = (DisplayObject **)((char *)this + 8 * v26);
              DisplayObject::setPixelSnappedXY(v33[3], v63, v62);
              *((_BYTE *)v33[3] + 8) = 1;
              goto LABEL_31;
            }
            v29 = *(void (__fastcall **)(BadgePopup *, __int64, __int64))(*(_QWORD *)RootSprite + 168LL);
            v26 = v66;
            v30 = *((_QWORD *)this + v66 + 3);
            BottomGUIRootIndex = HomeScreen::getBottomGUIRootIndex(HomeScreen);
            v29(RootSprite, v30, BottomGUIRootIndex);
          }
          MainHUD = (#1257 **)HomeScreen::getMainHUD(HomeScreen);
          v28 = 0;
          goto LABEL_30;
        }
      }
    LABEL_31:
      if ( !*((_QWORD *)this + 1) )
        goto LABEL_50;
      if ( *((_BYTE *)this + 105) )
        v34 = *((_BYTE *)this + 107) == 0;
      else
        v34 = 0;
      DraggedSpellButton = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)Instance);
      if ( DraggedSpellButton )
      {
        v36 = (LogicTutorialManager *)BattleScreen::getInstance(DraggedSpellButton);
        CombatHUD = (GameState *)BattleScreen::getCombatHUD(v36);
        DraggedSpellButton = (LogicTutorialManager *)CombatHUD::getDraggedSpellButton(CombatHUD);
        v38 = DraggedSpellButton == 0;
        v34 &= DraggedSpellButton == 0;
      }
      else
      {
        v38 = 1;
      }
      *((float *)this + 25) = *((float *)this + 25) + a2;
      Instance = TutorialManager::updateFade(
                   DraggedSpellButton,
                   (float *)this + 19,
                   *((MovieClip **)this + 1),
                   v34,
                   a2 + a2,
                   v38);
      if ( (_DWORD)Instance )
      {
        *((_QWORD *)this + 1) = 0;
        goto LABEL_50;
      }
      MSPerFrame = MovieClip::getMSPerFrame(*((_QWORD *)this + 1));
      v40 = MSPerFrame * (float)(int)MovieClip::getTotalFrames(*((#1257 **)this + 1));
      v41 = *((float *)this + 25);
      v42 = (int)(float)(v41 / MSPerFrame);
      v43 = v41 - (float)(v40 * (float)(v42 / (int)MovieClip::getTotalFrames(*((#1257 **)this + 1))));
      TotalFrames = MovieClip::getTotalFrames(*((#1257 **)this + 1));
      MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 1), v42 % TotalFrames);
      v45 = MSPerFrame * (float)(int)MovieClip::getFrameIndex(*((_QWORD *)this + 1), "start");
      FrameIndex = MovieClip::getFrameIndex(*((_QWORD *)this + 1), "end");
      if ( v43 > v45 )
      {
        v47 = MSPerFrame * (float)FrameIndex;
        if ( v43 >= v47 )
        {
          v48 = 1.0;
          goto LABEL_47;
        }
        v48 = sinf((float)((float)((float)(v43 - v45) / (float)(v47 - v45)) * 3.1415) * 0.5);
        if ( v48 > 0.0 )
        {
          if ( v48 > 1.0 )
            v48 = 1.0;
          goto LABEL_47;
        }
      }
      v48 = 0.0;
    LABEL_47:
      Instance = DisplayObject::setXY(
                   *((DisplayObject **)this + 1),
                   *((float *)this + 21) + (float)(v48 * (float)(*((float *)this + 23) - *((float *)this + 21))),
                   *((float *)this + 22) + (float)(v48 * (float)(*((float *)this + 24) - *((float *)this + 22))));
      v49 = *((_QWORD *)this + 1);
      if ( !(v34 & 1 | (v49 == 0)) && !*(_BYTE *)(v49 + 8) )
        *((_DWORD *)this + 25) = 0;
    LABEL_50:
      if ( *((_DWORD *)this + 17) )
      {
        v50 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)Instance);
        RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(v50);
        ShakeX = RenderSystem::getShakeX(RenderSystem);
        ShakeY = RenderSystem::getShakeY(RenderSystem);
        v54 = *((int *)this + 17);
        if ( (int)v54 >= 1 )
        {
          v55 = v54 - 1;
          do
          {
            v56 = *(float **)(*((_QWORD *)this + 7) + 8 * v55);
            DisplayObject::setPixelSnappedXY(*(DisplayObject **)v56, ShakeX + v56[2], ShakeY + v56[3]);
            v57 = *(#1257 **)v56;
            if ( (unsigned int)MovieClip::isStopped(*(#1257 **)v56) )
            {
              CurrentFrame = MovieClip::getCurrentFrame(v57);
              if ( CurrentFrame == (unsigned int)MovieClip::getTotalFrames(v57) - 1 )
              {
                LogicArrayList<BubbleSprite *>::remove((char *)this + 56, v55);
                if ( v56 )
                {
                  if ( *(_QWORD *)v56 )
                    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v56 + 8LL))(*(_QWORD *)v56);
                  operator delete(v56);
                }
              }
            }
            v59 = v55-- + 1;
          }
          while ( v59 > 1 );
        }
      }
      result = (LogicMusicData *)*((_QWORD *)this + 6);
      if ( result )
      {
        result = (LogicMusicData *)LogicTutorialData::getFinishRequirement(result);
        if ( (_DWORD)result == 106 )
          return TutorialManager::updateFuseSpellTutorial(result, v61);
      }
      return result;
    }

    __int64 __fastcall TutorialManager::updateFade(float a1, __int64 a2, float *a3, _BYTE *a4, int a5, int a6)
    {
      float v8; // s1
      float v9; // s0
    
      if ( !a4 )
        return 0;
      v8 = *a3;
      if ( a5 )
      {
        v9 = v8 + a1;
        *a3 = v9;
        if ( v9 > 0.5 )
        {
          *a3 = 0.5;
          v9 = 0.5;
        }
      }
      else
      {
        v9 = v8 - a1;
        *a3 = v9;
        if ( v9 <= 0.0 )
        {
          *a3 = 0.0;
          if ( a6 )
          {
            (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a4 + 8LL))(a4);
            return 1;
          }
          v9 = 0.0;
        }
      }
      (*(void (__fastcall **)(_BYTE *, float))(*(_QWORD *)a4 + 80LL))(a4, v9 + v9);
      a4[8] = *a3 > 0.0;
      return 0;
    }

    __int64 __fastcall TutorialManager::getButtonTarget(__int64 a1, _BYTE *a2, _DWORD *a3)
    {
      LogicMusicData *v5; // x0
      BadgePopup *FinishRequirement; // x0
      BadgePopup *Instance; // x0
      vm_address_t *v8; // x0
      __int64 v9; // x0
      LogicPageOpenedCommand *HomeScreen; // x21
      LogicPageOpenedCommand *v11; // x0
      LogicPageOpenedCommand *v12; // x0
      #1093 *SpellPage; // x19
      TextField **SelectedSpellItem; // x0
      TextField **v15; // x20
      BadgePopup *v16; // x0
      __int64 v17; // x0
      ScrollArea *v18; // x19
      __int64 result; // x0
      LogicClientAvatar *MainHUD; // x0
      BadgePopup *v21; // x0
      __int64 TopPopup; // x0
      const char *v23; // x1
    
      *a2 = 0;
      *a3 = 0;
      v5 = *(LogicMusicData **)(a1 + 48);
      if ( !v5 )
        return 0;
      FinishRequirement = (BadgePopup *)LogicTutorialData::getFinishRequirement(v5);
      if ( (_DWORD)FinishRequirement != 106 )
        return 0;
      Instance = (BadgePopup *)GUI::getInstance(FinishRequirement);
      v8 = (vm_address_t *)GUI::needToHideTutorialArrow(Instance, *(const LogicMusicData **)(a1 + 48));
      if ( ((unsigned __int8)v8 & 1) != 0 )
        return 0;
      v9 = GameMode::getInstance(v8);
      HomeScreen = (LogicPageOpenedCommand *)GameMode::getHomeScreen(v9);
      if ( (unsigned int)HomeScreen::getCurrentPage(HomeScreen) != 1 )
      {
        *a2 = 1;
        MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(HomeScreen);
        return MainHUD::getPageButton(MainHUD, 1);
      }
      v11 = (LogicPageOpenedCommand *)LogicTutorialData::getFinishRequirement(*(LogicMusicData **)(a1 + 48));
      if ( (_DWORD)v11 != 106 )
        return 0;
      v12 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v11);
      SpellPage = (#1093 *)HomeScreen::getSpellPage(v12);
      SelectedSpellItem = (TextField **)SpellPage::getSelectedSpellItem(SpellPage);
      v15 = SelectedSpellItem;
      if ( !SelectedSpellItem
        || (SelectedSpellItem = (TextField **)LogicSpell::canUpgrade(SelectedSpellItem[38]), !(_DWORD)SelectedSpellItem) )
      {
        v21 = (BadgePopup *)GUI::getInstance((BadgePopup *)SelectedSpellItem);
        TopPopup = GUI::getTopPopup(v21);
        if ( !TopPopup || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)TopPopup + 328LL))(TopPopup) )
        {
          result = SpellPage::getSpellWithUpgradeAvailable(SpellPage);
          if ( result )
            return result;
          Debugger::warning((__siginfo *)"no upgrades available for upgrade tutorial!?", v23);
        }
        return 0;
      }
      v16 = (BadgePopup *)GUI::getInstance((BadgePopup *)SelectedSpellItem);
      v17 = GUI::getTopPopup(v16);
      v18 = (ScrollArea *)v17;
      if ( v17 && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 328LL))(v17) )
        return SpellInfoPopup::getUpgradeButton(v18);
      else
        return (__int64)v15[52];
    }

    __n128 __fastcall TutorialManager::getButtonTargetGlobalCoordinate(__int64 a1)
    {
      float v2; // s1
      float v4; // [xsp+0h] [xbp-40h]
      __int128 v5; // [xsp+10h] [xbp-30h] BYREF
    
      if ( *(_QWORD *)(a1 + 96) )
      {
        Rect::Rect((Rect *)&v5);
        DisplayObject::getBounds(*(_QWORD *)(a1 + 96), a1, &v5);
        v4 = *((float *)&v5 + 1);
        Rect::~Rect((Rect *)&v5);
        v2 = v4;
      }
      else
      {
        v2 = 0.0;
      }
      return DisplayObject::localToGlobal(0.0, v2);
    }

    LogicPageOpenedCommand *__fastcall TutorialManager::tutorialFinished(__int64 a1, const LogicMusicData *a2)
    {
      BadgePopup *v4; // x0
      LogicPageOpenedCommand *Instance; // x0
      LogicPageOpenedCommand *result; // x0
      #1257 **MainHUD; // x0
    
      v4 = (BadgePopup *)TutorialManager::fadeOutBubbleSprites(a1);
      *(_QWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 104) = 0x1000000;
      Instance = (LogicPageOpenedCommand *)GUI::getInstance(v4);
      if ( Instance )
        Instance = (LogicPageOpenedCommand *)GUI::closeTutorialPopup((__int64)Instance, a2);
      result = (LogicPageOpenedCommand *)HomeScreen::getInstance(Instance);
      if ( result )
      {
        MainHUD = (#1257 **)HomeScreen::getMainHUD(result);
        return (LogicPageOpenedCommand *)MainHUD::setBottomGradientVisible(MainHUD, 0);
      }
      return result;
    }

    __int64 __fastcall TutorialManager::setSpellDragDone(__int64 this)
    {
      *(_BYTE *)(this + 107) = 1;
      return this;
    }

}; // end class TutorialManager
