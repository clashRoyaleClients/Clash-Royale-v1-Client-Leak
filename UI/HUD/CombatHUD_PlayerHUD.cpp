class CombatHUD::PlayerHUD
{
public:

    void __fastcall CombatHUD::PlayerHUD::onSimulatedSpellUsed(__int64 a1, int a2)
    {
      float v4; // s8
      const char *v5; // x2
      float v6; // s9
      DisplayObject *MovieClip; // x24
      DisplayObject *v8; // [xsp+8h] [xbp-48h] BYREF
    
      LODWORD(v4) = COERCE_UNSIGNED_INT128(DisplayObject::getX(*(_QWORD *)(a1 + 344)));
      LODWORD(v6) = COERCE_UNSIGNED_INT128(DisplayObject::getY(*(_QWORD *)(a1 + 344)));
      if ( a2 >= 1 )
      {
        do
        {
          MovieClip = (DisplayObject *)ResourceManager::getMovieClip(
                                         (ResourceManager *)"sc/ui.sc",
                                         "Elixir_bar_drop_anim",
                                         v5);
          v8 = MovieClip;
          DisplayObject::setXY(MovieClip, v4, v6);
          MovieClip::playOnce(MovieClip);
          (*(void (__fastcall **)(_QWORD, DisplayObject *))(**(_QWORD **)(*(_QWORD *)(a1 + 344) + 48LL) + 160LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 344) + 48LL),
            MovieClip);
          std::vector<MovieClip *>::push_back(a1 + 320, &v8);
          v4 = v4 + (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)MovieClip + 88LL))(MovieClip);
          --a2;
        }
        while ( a2 );
      }
    }

    __int64 __fastcall CombatHUD::PlayerHUD::update(NativeFont *this, float a2, float a3)
    {
      LogicTutorialManager *TutorialManager; // x23
      LogicTutorialManager *Instance; // x0
      _BOOL4 isReplay; // w25
      __int64 Globals; // x26
      const char *v9; // x2
      __int64 SimulatedMana; // x24
      int SimulatedAccurateMana; // w22
      int v12; // w26
      int v13; // w21
      int SelectedSpellManaCost; // w8
      __int64 v15; // x0
      int v17; // w8
      float v18; // s9
      float v19; // s10
      int TotalFrames; // w0
      const char *v21; // x1
      MovieClip *v22; // x0
      float v23; // s0
      float v24; // s0
      float v25; // s9
      float v26; // s11
      CombatHUD::BarFill *v27; // x25
      float v28; // s0
      #1271 *v29; // x25
      __int64 v30; // x8
      float v31; // s10
      long double v32; // q0
      #1257 *v33; // x0
      LogicTutorialManager *isHideCombatUI; // x0
      LogicTutorialManager *v35; // x0
      _BOOL8 isSlowZoom; // x0
      bool v37; // w8
      LogicTutorialManager *v38; // x0
      float v39; // s0
      float v40; // s9
      float v41; // s0
      __int64 v42; // x24
      const AreaEffectObject *v43; // x2
      __int64 SoundByName; // x0
      float v45; // s9
      DisplayObject *MovieClip; // x0
      __int64 v47; // x0
      long double v48; // q0
      LogicMusicData *CurrentTutorial; // x23
      const LogicSpellData *SpellDataForDeploy; // x25
      MovieClipHelper *SpellTargetIndicator; // x24
      __int64 v52; // x26
      const TextField *Spell; // x28
      SpellItem *v54; // x27
      long double v55; // q0
      long double v56; // q0
      const LogicSpell *NextSpell; // x22
      int v58; // w20
      _BYTE *v59; // x0
      __int64 v60; // x0
      LogicTutorialManager *TextFieldByName; // x0
      LogicTutorialManager *v62; // x21
      LogicTutorialManager *v63; // x0
      MovieClipHelper *ActiveSpellTargetIndicator; // x0
      const LogicLong *v65; // x3
      float v66; // s0
      float v67; // s1
      MovieClipHelper *v68; // x21
      long double v69; // q1
      AcceptChallengeMessage *Deck; // x20
      const char *v71; // x21
      TextField *v72; // x0
      AllianceStreamMessage *updated; // x0
      #1257 **v74; // x8
      #1257 **v75; // x20
      #1257 **v76; // x21
      #1257 *v77; // x22
      #1257 **v78; // x9
      #1257 **v79; // x8
      __int64 result; // x0
      __int64 v81; // [xsp+8h] [xbp-D8h]
      AllianceItem *Summoner; // [xsp+10h] [xbp-D0h]
      float v83; // [xsp+18h] [xbp-C8h] BYREF
      float v84; // [xsp+1Ch] [xbp-C4h] BYREF
      String v85; // [xsp+20h] [xbp-C0h] BYREF
      float v86; // [xsp+38h] [xbp-A8h] BYREF
      float v87; // [xsp+3Ch] [xbp-A4h] BYREF
      String v88; // [xsp+40h] [xbp-A0h] BYREF
      String v89; // [xsp+58h] [xbp-88h] BYREF
    
      v81 = *(_QWORD *)(GameMode::getInstance() + 112);
      TutorialManager = (LogicTutorialManager *)LogicGameMode::getTutorialManager(v81);
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(TutorialManager);
      isReplay = BattleScreen::isReplay(Instance);
      Globals = LogicDataTables::getGlobals();
      Summoner = (AllianceItem *)CombatHUD::PlayerHUD::getSummoner(this);
      Debugger::doAssert((Debugger *)(Summoner != 0), (bool)"", v9);
      SimulatedMana = LogicSummoner::getSimulatedMana(Summoner);
      SimulatedAccurateMana = LogicSummoner::getSimulatedAccurateMana(Summoner);
      v12 = *(_DWORD *)(Globals + 148);
      v13 = 100 * v12;
      SelectedSpellManaCost = CombatHUD::PlayerHUD::getSelectedSpellManaCost(this);
      v15 = *((_QWORD *)this + 48);
      if ( SelectedSpellManaCost < 1 || isReplay )
      {
        *(_BYTE *)(v15 + 8) = 0;
        v18 = (float)v13;
      }
      else
      {
        v17 = 100 * SelectedSpellManaCost;
        *(_BYTE *)(v15 + 8) = 1;
        if ( (int)SimulatedMana > v17 )
          v17 = v13 - v17;
        v18 = (float)v13;
        v19 = (float)v17 / (float)v13;
        TotalFrames = MovieClip::getTotalFrames((#1257 *)v15);
        MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 48), (int)(float)(v19 * (float)(TotalFrames - 1)));
      }
      CombatHUD::BarFill::set(*((CombatHUD::BarFill **)this + 45), (float)SimulatedAccurateMana / v18);
      v22 = (MovieClip *)*((_QWORD *)this + 47);
      if ( v22 )
      {
        if ( *((_BYTE *)v22 + 8) != SimulatedAccurateMana >= v13 )
        {
          *((_BYTE *)v22 + 8) = SimulatedAccurateMana >= v13;
          if ( SimulatedAccurateMana >= v13 )
          {
            MovieClip::play(v22);
            CombatHUD::PlayerHUD::showManaFullText(this);
          }
        }
      }
      v23 = *((float *)this + 106);
      if ( v23 > 0.0 )
      {
        v24 = v23 - a2;
        if ( v24 <= 0.0 )
          v24 = 0.0;
        *((float *)this + 106) = v24;
        v25 = v24 / 0.255;
        v26 = sinf((float)((float)(v24 / 0.255) * 3.1416) * 3.0) * 0.08;
        (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 50) + 48LL))(*((_QWORD *)this + 50), v26 + 1.0);
        (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 50) + 56LL))(*((_QWORD *)this + 50), 1.0 - v26);
        v27 = (CombatHUD::BarFill *)*((_QWORD *)this + 44);
        if ( v27 )
        {
          werp1(
            (float)(*((_DWORD *)this + 109) - 1) / (float)v12,
            (float)*((int *)this + 109) / (float)v12,
            1.0 - v25,
            0.25,
            fabsf((float)((float)*((int *)this + 109) / (float)v12) - (float)((float)(*((_DWORD *)this + 109) - 1)
                                                                            / (float)v12))
          / 5.0,
            0.75);
          CombatHUD::BarFill::set(v27, v28);
        }
      }
      if ( (_DWORD)SimulatedMana != *((_DWORD *)this + 109) )
      {
        v29 = (#1271 *)*((_QWORD *)this + 50);
        String::format((String *)"%d", v21, SimulatedMana);
        TextField::setText(v29, &v89);
        String::~String();
        *((_DWORD *)this + 109) = SimulatedMana;
        *((_DWORD *)this + 106) = 1048743772;
        v30 = *((_QWORD *)this + 44);
        if ( v30 )
        {
          if ( *((_QWORD *)this + 46) )
          {
            v31 = *(float *)(v30 + 32);
            v32 = DisplayObject::getX(*(_QWORD *)(v30 + 8));
            DisplayObject::setX(
              *((#1249 **)this + 46),
              (float)((float)((float)((float)(int)SimulatedMana / (float)v12) * v31) + *(float *)&v32) + 2.0);
            MovieClip::playOnce(*((MovieClip **)this + 46));
            *(_BYTE *)(*((_QWORD *)this + 46) + 8LL) = 1;
          }
        }
      }
      v33 = (#1257 *)*((_QWORD *)this + 46);
      if ( v33 && (unsigned int)MovieClip::isStopped(v33) )
        *(_BYTE *)(*((_QWORD *)this + 46) + 8LL) = 0;
      isHideCombatUI = (LogicTutorialManager *)LogicTutorialManager::isHideCombatUI(TutorialManager);
      if ( ((unsigned __int8)isHideCombatUI & 1) != 0
        || (v35 = (LogicTutorialManager *)BattleScreen::getInstance(isHideCombatUI),
            isSlowZoom = BattleScreen::isSlowZoom(v35)) )
      {
        v37 = 0;
      }
      else
      {
        v38 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isSlowZoom);
        v37 = !BattleScreen::isBattleEndHUDVisible(v38);
      }
      *((_BYTE *)this + 412) = v37;
      if ( *((_BYTE *)this + 441) )
      {
        *((_BYTE *)this + 412) = 1;
        *((_DWORD *)this + 107) = 1065353216;
        *((_BYTE *)this + 440) = 0;
        v39 = a2;
      }
      else
      {
        v39 = a2;
        if ( !v37 )
          v39 = -a2;
      }
      v40 = *((float *)this + 104);
      if ( *((_DWORD *)this + 102) == 1 )
        v40 = -v40;
      v41 = (float)(v39 + v39) + *((float *)this + 107);
      if ( v41 < 0.0 )
      {
        *((_DWORD *)this + 107) = 0;
        v41 = 0.0;
        goto LABEL_42;
      }
      if ( v41 <= 1.0 )
      {
        *((float *)this + 107) = v41;
        if ( v41 < 0.3 )
          goto LABEL_42;
      }
      else
      {
        *((_DWORD *)this + 107) = 1065353216;
        v41 = 1.0;
      }
      if ( *((_BYTE *)this + 440) )
      {
        v42 = SoundManager::sm_pInstance;
        String::String(&v88, "sound_board_slide_in");
        SoundByName = LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v88, 0, v43);
        SoundManager::playSound(v42, SoundByName, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
        String::~String();
        *((_BYTE *)this + 440) = 0;
        v41 = *((float *)this + 107);
      }
    LABEL_42:
      v45 = v40
          * (float)((float)((float)(1.0 - v41) * (float)(1.0 - v41)) * (float)((float)((float)(1.0 - v41) * -2.0) + 3.0));
      MovieClip = (DisplayObject *)GUIContainer::getMovieClip(this);
      DisplayObject::setY(MovieClip, v45);
      v47 = GUIContainer::getMovieClip(this);
      *(_OWORD *)&v48 = 0u;
      if ( *((float *)this + 107) > 0.0 )
        *(float *)&v48 = 1.0;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v47 + 80LL))(v47, v48);
      CurrentTutorial = (LogicMusicData *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
      v86 = 0.0;
      v87 = 0.0;
      if ( *((_BYTE *)this + 412) && *((float *)this + 107) >= 0.4 )
      {
        v52 = 0;
        SpellTargetIndicator = 0;
        SpellDataForDeploy = 0;
        do
        {
          Spell = (const TextField *)LogicSummoner::getSpell(Summoner, v52);
          v54 = (SpellItem *)*((_QWORD *)this + v52 + 27);
          if ( CurrentTutorial )
            LogicTutorialData::isDisableSpells(CurrentTutorial);
          SpellItem::setWobble(v54, SimulatedAccurateMana >= v13);
          SpellButton::update(
            v54,
            a2,
            SimulatedAccurateMana,
            Spell,
            v52,
            *((unsigned __int8 *)this + 187),
            *((_BYTE *)this + 186));
          if ( (SpellButton::isDragged((__int64)v54) & 1) != 0 || (unsigned int)SpellButton::isSelected(v54) )
          {
            SpellTargetIndicator = (MovieClipHelper *)SpellButton::getSpellTargetIndicator((__int64)v54);
            SpellDataForDeploy = (const LogicSpellData *)SpellButton::getSpellDataForDeploy((__int64)v54);
            v55 = DisplayObject::getX(v54);
            v87 = *(float *)&v55;
            v56 = DisplayObject::getY(v54);
            v86 = *(float *)&v56;
            if ( *(_BYTE *)(*((_QWORD *)this + 25) + 528LL) )
              SpellTargetIndicator::setAlpha(SpellTargetIndicator, COERCE_LONG_DOUBLE((unsigned __int128)0));
          }
          ++v52;
        }
        while ( v52 != 4 );
      }
      else
      {
        SpellDataForDeploy = 0;
        SpellTargetIndicator = 0;
      }
      NextSpell = (const LogicSpell *)LogicSummoner::getNextSpell(Summoner);
      v58 = *((_DWORD *)Summoner + 80);
      SpellItem::resetSpell(*((SpellItem **)this + 39), NextSpell);
      v59 = (_BYTE *)*((_QWORD *)this + 39);
      v59[8] = NextSpell != 0;
      (*(void (__fastcall **)(_BYTE *, bool))(*(_QWORD *)v59 + 152LL))(v59, v58 > 0);
      v60 = GUIContainer::getMovieClip(this);
      TextFieldByName = (LogicTutorialManager *)MovieClip::getTextFieldByName(v60, "NextSpellTimer");
      v62 = TextFieldByName;
      if ( TextFieldByName )
      {
        if ( !v58 && *((_BYTE *)TextFieldByName + 8) )
          TextFieldByName = (LogicTutorialManager *)GameButton::wobble(*((DeviceLinkCodeReceivedScreen **)this + 39));
        *((_BYTE *)v62 + 8) = v58 > 0;
        if ( v58 >= 1 )
        {
          TimeUtil::getTimeString((v58 + 999) / 1000, 1, &v85);
          TextField::setText(v62, &v85);
          String::~String();
        }
      }
      v63 = (LogicTutorialManager *)BattleScreen::getInstance(TextFieldByName);
      ActiveSpellTargetIndicator = (MovieClipHelper *)BattleScreen::getActiveSpellTargetIndicator(v63);
      v68 = ActiveSpellTargetIndicator;
      if ( ActiveSpellTargetIndicator )
      {
        *(_BYTE *)ActiveSpellTargetIndicator = 0;
        SpellDataForDeploy = (const LogicSpellData *)SpellTargetIndicator::getSpellData(ActiveSpellTargetIndicator);
        SpellTargetIndicator::getGlobalCoordinates(v68, &v84, &v83);
        *(float *)&v69 = v83;
        LODWORD(v66) = DisplayObject::globalToLocal(this, &v87, &v86, v84, v69).n128_u32[0];
        if ( *(_BYTE *)(*((_QWORD *)this + 25) + 528LL) )
          SpellTargetIndicator::setAlpha(v68, COERCE_LONG_DOUBLE((unsigned __int128)0));
        SpellTargetIndicator = v68;
      }
      if ( CurrentTutorial && !SpellDataForDeploy )
      {
        if ( (unsigned int)LogicTutorialData::getFinishRequirement(CurrentTutorial) == 2
          && LogicTutorialData::getSpellToCast(CurrentTutorial) )
        {
          Deck = (AcceptChallengeMessage *)LogicBattle::getDeck(*(UnbindFacebookAccountMessage **)(v81 + 168), 1);
          v71 = 0;
          while ( 1 )
          {
            v72 = (TextField *)LogicSpellDeck::getSpell(Deck, v71);
            if ( v72 )
              break;
            v71 = (const char *)(unsigned int)((_DWORD)v71 + 1);
            if ( (int)v71 > 7 )
              goto LABEL_72;
          }
          SpellDataForDeploy = (const LogicSpellData *)LogicSpell::getSpellData(v72);
        }
        else
        {
    LABEL_72:
          SpellDataForDeploy = 0;
        }
      }
      updated = (AllianceStreamMessage *)CombatHUD::updateTargetHelpers(
                                           *((CombatHUD **)this + 25),
                                           SpellDataForDeploy,
                                           v66,
                                           v67,
                                           SpellTargetIndicator,
                                           v65);
      v75 = (#1257 **)*((_QWORD *)this + 40);
      v74 = (#1257 **)*((_QWORD *)this + 41);
      while ( v75 != v74 )
      {
        v76 = v75++;
        while ( 1 )
        {
          v77 = *v76;
          updated = (AllianceStreamMessage *)MovieClip::isStopped(*v76);
          v74 = (#1257 **)*((_QWORD *)this + 41);
          if ( !(_DWORD)updated )
            break;
          v78 = v75;
          if ( v75 != v74 )
          {
            updated = (AllianceStreamMessage *)memmove(v76, v75, (char *)v74 - (char *)v75);
            v78 = (#1257 **)*((_QWORD *)this + 41);
          }
          v79 = v78 - 1;
          *((_QWORD *)this + 41) = v78 - 1;
          if ( v77 )
          {
            updated = (AllianceStreamMessage *)(*(__int64 (__fastcall **)(#1257 *))(*(_QWORD *)v77 + 8LL))(v77);
            v79 = (#1257 **)*((_QWORD *)this + 41);
          }
          if ( v76 == v79 )
            goto LABEL_82;
        }
      }
    LABEL_82:
      result = GameMain::getInstance(updated);
      if ( !*(_BYTE *)(result + 356) )
        *(_BYTE *)(*((_QWORD *)this + 25) + 8LL) = *(_BYTE *)(*((_QWORD *)this + 25) + 528LL) ^ 1;
      return result;
    }

    __int64 __fastcall CombatHUD::PlayerHUD::selectSpellButton(NativeFont *this, int a2)
    {
      LogicTutorialManager *Instance; // x0
      __int64 v5; // x21
      char *v6; // x20
      __int64 result; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(this);
      BattleScreen::disableSpellTargeting(Instance);
      v5 = 0;
      v6 = (char *)this + 216;
      do
      {
        result = SpellButton::isDragged(*(_QWORD *)&v6[8 * v5]);
        if ( (result & 1) == 0 )
          result = SpellButton::setSelected(*(_QWORD *)&v6[8 * v5], a2 == v5, 1);
        ++v5;
      }
      while ( v5 != 4 );
      return result;
    }

    NativeFont *__fastcall CombatHUD::PlayerHUD::PlayerHUD(
            NativeFont *this,
            GameState *a2,
            const tween::Bounce *a3,
            OutOfSyncMessage *a4,
            const #1236 *a5)
    {
      LogicTutorialManager *AccountId; // x0
      LogicTutorialManager *Instance; // x0
      _BOOL8 isReplay; // x0
      int v13; // w22
      LogicTutorialManager *v14; // x0
      NativeFont *isLandscape; // x0
      bool v16; // w4
      LogicTutorialManager *v17; // x0
      LogicTutorialManager *v18; // x0
      int v19; // w22
      LogicTutorialManager *v20; // x28
      int v21; // w8
      LogicTutorialManager *v22; // x0
      float v23; // s0
      AllianceStreamMessage *MovieClipByName; // x0
      AllianceStreamMessage *v25; // x24
      LogicTutorialManager *v26; // x0
      const char *v27; // x2
      DisplayObject *v28; // x27
      __int64 TextFieldByName; // x24
      __int64 v30; // x26
      const char *v31; // x2
      const char *v32; // x2
      __int64 Name; // x0
      const char *v34; // x1
      void *AllianceName; // x0
      const String *v36; // x4
      MovieClip *v37; // x24
      const char *v38; // x2
      const AreaEffectObject *AllianceBadge; // x0
      const AreaEffectObject *v40; // x26
      __int64 v41; // x0
      DataIcon *v42; // x24
      LogicChest *v43; // x0
      __int64 LogicGame; // x0
      LogicJSONParser *BattleLog; // x0
      const char *v46; // x2
      LogicHealthBarData *Player; // x24
      MovieClip *v48; // x26
      int Score; // w0
      String *HighscoreRank; // x24
      const char *v51; // x1
      #1271 *v52; // x26
      void *String; // x28
      int v54; // w1
      __int64 v55; // x21
      const char *v56; // x2
      __int64 v57; // x21
      #1257 **v58; // x24
      const String *v59; // x0
      const String *v60; // x4
      MovieClip *v61; // x24
      const String *v62; // x4
      MovieClip *v63; // x24
      const String *v64; // x4
      #1257 *v65; // x25
      #1257 *v66; // x0
      #1249 *v67; // x26
      __int64 v68; // x0
      float v69; // s8
      long double Height; // q0
      const String *v71; // x4
      MovieClip *v72; // x24
      #1257 *v73; // x0
      MovieClip *v74; // x0
      MovieClip *v75; // x0
      __int64 v76; // x0
      MovieClip *v77; // x26
      MovieClip *v78; // x24
      __int64 v79; // x0
      float v80; // s8
      CombatHUD::BarFill *v81; // x27
      __int64 v82; // x26
      __int64 v83; // x24
      #1257 *v84; // x24
      __int64 v85; // x0
      String *v86; // x26
      __int64 v87; // x0
      const char *v88; // x1
      #1271 *v89; // x27
      const char *v90; // x1
      void *v91; // x24
      int v92; // w1
      int v93; // w27
      #1257 *v94; // x24
      #1249 *v95; // x24
      #1375 *v96; // x0
      #1257 *v97; // x1
      MovieClip *v98; // x24
      const char *v99; // x1
      __int64 v100; // x26
      __int64 v101; // x24
      long double v102; // q0
      float v103; // s8
      float v104; // s0
      float MidX; // s8
      long double MidY; // q0
      long double v107; // q0
      long double v108; // q0
      __int64 ChildByName; // x0
      const char *v110; // x1
      __int64 v111; // x24
      long double Width; // q0
      long double v113; // q0
      float v114; // s1
      __int64 v115; // x24
      float v116; // s0
      float v117; // s15
      __int64 v118; // x26
      const AllianceItem *Summoner; // x0
      float v120; // s12
      float v121; // s11
      float v122; // s14
      float v123; // s13
      float v124; // s8
      float v125; // s8
      long double v126; // q0
      long double v127; // q0
      float v128; // s0
      __int64 v129; // x0
      long double v130; // q0
      OutOfSyncMessage *v132; // [xsp+10h] [xbp-350h]
      #1249 *MovieClip; // [xsp+18h] [xbp-348h]
      float v134; // [xsp+20h] [xbp-340h]
      float v135; // [xsp+24h] [xbp-33Ch]
      #1249 *v136; // [xsp+28h] [xbp-338h]
      float v137; // [xsp+28h] [xbp-338h]
      float v138[6]; // [xsp+30h] [xbp-330h] BYREF
      Rect v139[2]; // [xsp+48h] [xbp-318h] BYREF
      __int128 v140; // [xsp+58h] [xbp-308h] BYREF
      String v141; // [xsp+68h] [xbp-2F8h] BYREF
      String v142; // [xsp+80h] [xbp-2E0h] BYREF
      String v143; // [xsp+98h] [xbp-2C8h] BYREF
      String v144; // [xsp+B0h] [xbp-2B0h] BYREF
      String v145; // [xsp+C8h] [xbp-298h] BYREF
      String v146; // [xsp+E0h] [xbp-280h] BYREF
      String v147; // [xsp+F8h] [xbp-268h] BYREF
      __int128 v148; // [xsp+110h] [xbp-250h] BYREF
      String v149; // [xsp+120h] [xbp-240h] BYREF
      String v150; // [xsp+138h] [xbp-228h] BYREF
      String v151; // [xsp+150h] [xbp-210h] BYREF
      String v152; // [xsp+168h] [xbp-1F8h] BYREF
      String v153; // [xsp+180h] [xbp-1E0h] BYREF
      String v154; // [xsp+198h] [xbp-1C8h] BYREF
      String v155; // [xsp+1B0h] [xbp-1B0h] BYREF
      String v156; // [xsp+1C8h] [xbp-198h] BYREF
      String v157; // [xsp+1E0h] [xbp-180h] BYREF
      String v158; // [xsp+1F8h] [xbp-168h] BYREF
      String v159; // [xsp+210h] [xbp-150h] BYREF
      String v160; // [xsp+228h] [xbp-138h] BYREF
      String v161; // [xsp+240h] [xbp-120h] BYREF
      String v162; // [xsp+258h] [xbp-108h] BYREF
      String v163; // [xsp+270h] [xbp-F0h] BYREF
      String v164; // [xsp+288h] [xbp-D8h] BYREF
      String v165; // [xsp+2A0h] [xbp-C0h] BYREF
      String v166; // [xsp+2B8h] [xbp-A8h] BYREF
    
      String::String(&v166, "sc/ui.sc");
      AccountId = (LogicTutorialManager *)LogicClientAvatar::getAccountId(a3);
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(AccountId);
      isReplay = BattleScreen::isReplay(Instance);
      v13 = isReplay;
      v14 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)isReplay);
      isLandscape = (NativeFont *)BattleScreen::isLandscape(v14);
      CombatHUD::PlayerHUD::getExportName(&v165, isLandscape, a5, v13, (bool)isLandscape, v16);
      DropGUIContainer::DropGUIContainer(this, &v166, &v165);
      String::~String();
      String::~String();
      *(_QWORD *)this = off_10046C980;
      *((_QWORD *)this + 12) = &off_10046CAD8;
      LogicLong::LogicLong((NativeFont *)((char *)this + 188));
      v132 = a4;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 42) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 56) = 0;
      *((_QWORD *)this + 57) = 0;
      v17 = (LogicTutorialManager *)CombatHUD::PlayerHUD::initializeMembers(this);
      v18 = (LogicTutorialManager *)BattleScreen::getInstance(v17);
      v19 = BattleScreen::isLandscape(v18);
      v20 = (LogicTutorialManager *)LogicClientAvatar::getAccountId(a3);
      *((_DWORD *)this + 47) = *(_DWORD *)v20;
      v21 = *((_DWORD *)v20 + 1);
      *((_QWORD *)this + 25) = a2;
      *((_DWORD *)this + 48) = v21;
      *((_BYTE *)this + 186) = 1;
      *((_DWORD *)this + 109) = -1;
      *((_DWORD *)this + 102) = (_DWORD)a5;
      *((_BYTE *)this + 412) = 0;
      *((_DWORD *)this + 107) = 0;
      v22 = (LogicTutorialManager *)BattleScreen::getInstance(v20);
      *((_BYTE *)this + 440) = !BattleScreen::isReplay(v22);
      *((_BYTE *)this + 441) = v19;
      if ( v19 )
      {
        DisplayObject::setPixelSnappedXY(this, 0.0, *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
      }
      else
      {
        v23 = *(float *)&BattleScreen::STAGE_WIDTH * 0.5;
        if ( (_DWORD)a5 == 1 )
          DisplayObject::setPixelSnappedXY(this, v23, 0.0);
        else
          DisplayObject::setPixelSnappedXY(this, v23, *(float *)&BattleScreen::STAGE_HEIGHT);
      }
      MovieClip = (#1249 *)GUIContainer::getMovieClip(this);
      MovieClipByName = (AllianceStreamMessage *)MovieClip::getMovieClipByName(MovieClip, "darken");
      v25 = MovieClipByName;
      if ( MovieClipByName )
      {
        MovieClipByName = (AllianceStreamMessage *)GameMain::getInstance(MovieClipByName);
        *((_BYTE *)v25 + 8) = *((_DWORD *)MovieClipByName + 30) == 2;
      }
      v26 = (LogicTutorialManager *)BattleScreen::getInstance(MovieClipByName);
      if ( !BattleScreen::isReplay(v26) )
      {
        String::String(&v151, "panel");
        String::String(&v150, "sc/ui_panels.sc");
        String::String(&v149, "panel_ingame");
        v37 = (MovieClip *)MovieClipHelper::replaceChildWithMovieClip(MovieClip, (MovieClip *)&v151, &v150, &v149, v36);
        String::~String();
        String::~String();
        String::~String();
        if ( !v37 )
          goto LABEL_40;
        MovieClip::gotoAndStopFrameIndex(v37, 0);
        goto LABEL_38;
      }
      v136 = MovieClip;
      v28 = MovieClip;
      if ( v19 )
      {
        v136 = (#1249 *)MovieClip::getMovieClipByName(MovieClip, "info");
        v28 = (DisplayObject *)MovieClip::getMovieClipByName(MovieClip, "player_name");
      }
      Debugger::doAssert((Debugger *)(v28 != 0), (bool)"", v27);
      TextFieldByName = MovieClip::getTextFieldByName(v28, "player");
      v30 = MovieClip::getTextFieldByName(v28, "clan");
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v31);
      Debugger::doAssert((Debugger *)(v30 != 0), (bool)"", v32);
      Name = LogicClientAvatar::getName(a3);
      MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, Name, 0);
      if ( *(_DWORD *)LogicClientAvatar::getAllianceName(a3) )
        AllianceName = (void *)LogicClientAvatar::getAllianceName(a3);
      else
        AllianceName = StringTable::getString((#1308 *)"TID_NO_CLAN", v34);
      MovieClipHelper::setTextAndScaleIfNecessary(v30, AllianceName, 0);
      AllianceBadge = (const AreaEffectObject *)LogicClientAvatar::getAllianceBadge(a3);
      v40 = AllianceBadge;
      if ( AllianceBadge )
      {
        v41 = *((_QWORD *)this + 26);
        if ( v41 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
        *((_QWORD *)this + 26) = 0;
        v42 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v42, v40);
        *((_QWORD *)this + 26) = v42;
        String::String(&v164, "clan_icon");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v42,
          v136,
          &v164,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          0);
        String::~String();
        AllianceBadge = (const AreaEffectObject *)MovieClip::getMovieClipByName(v136, "clan_icon");
        *((_BYTE *)AllianceBadge + 8) = 0;
      }
      v43 = (LogicChest *)BattleScreen::getInstance(AllianceBadge);
      LogicGame = GameScreen::getLogicGame(v43);
      BattleLog = (LogicJSONParser *)LogicBattle::getBattleLog(*(UnbindFacebookAccountMessage **)(LogicGame + 168));
      if ( BattleLog )
      {
        Player = (LogicHealthBarData *)LogicBattleLog::getPlayer(BattleLog, v20);
        if ( Player )
        {
          v48 = (MovieClip *)MovieClip::getMovieClipByName(v136, "trophy");
          if ( v48 )
          {
            Score = LogicBattleLogPlayer::getScore(Player);
            MovieClip::setNumberText(v48, "txt", Score, 0);
          }
          HighscoreRank = (String *)LogicBattleLogPlayer::getHighscoreRank(Player);
          if ( (_DWORD)HighscoreRank )
          {
            v52 = (#1271 *)MovieClip::getTextFieldByName(v136, "rank");
            if ( v52 )
            {
              String = StringTable::getString((#1308 *)"TID_PLAYER_RANK", v51);
              String::String(&v162, "<num>");
              String::valueOf(&v161, HighscoreRank, v54);
              String::replace(&v163, String, &v162, &v161);
              TextField::setText(v52, &v163);
              String::~String();
              String::~String();
              String::~String();
            }
          }
        }
      }
      v55 = *((_QWORD *)this + 25);
      Debugger::doAssert((Debugger *)((unsigned int)a5 < 2), (bool)"", v46);
      if ( *(_QWORD *)(v55 + 8LL * (int)a5 + 128) )
      {
        v57 = *((_QWORD *)this + 25);
        Debugger::doAssert((Debugger *)((unsigned int)a5 < 2), (bool)"", v56);
        v58 = *(#1257 ***)(v57 + 8LL * (int)a5 + 128);
        v59 = (const String *)LogicClientAvatar::getName(a3);
        StarHud::setName(v58, v59);
      }
      if ( v19 )
      {
        String::String(&v160, "panel");
        String::String(&v159, "sc/ui_panels.sc");
        String::String(&v158, "panel_ingame");
        v61 = (MovieClip *)MovieClipHelper::replaceChildWithMovieClipFit(MovieClip, (MovieClip *)&v160, &v159, &v158, v60);
        String::~String();
        String::~String();
        String::~String();
        if ( v61 )
        {
          MovieClip::gotoAndStopFrameIndex(v61, 0);
          *((_BYTE *)v61 + 8) = *(_BYTE *)(*((_QWORD *)this + 25) + 528LL) ^ 1;
        }
        if ( *((_DWORD *)this + 102) == 1 )
        {
          DisplayObject::setY(v28, *(float *)&BattleScreen::STAGE_HEIGHT * -0.5);
          DisplayObject::setY(v136, *(float *)&BattleScreen::STAGE_HEIGHT * -0.5);
        }
        else
        {
          DisplayObject::setY(v28, *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
          DisplayObject::setY(v136, *(float *)&BattleScreen::STAGE_HEIGHT * 0.5);
        }
        goto LABEL_40;
      }
      String::String(&v157, "panel");
      String::String(&v156, "sc/ui_panels.sc");
      String::String(&v155, "panel_replay");
      v63 = (MovieClip *)MovieClipHelper::replaceChildWithMovieClip(MovieClip, (MovieClip *)&v157, &v156, &v155, v62);
      String::~String();
      String::~String();
      String::~String();
      if ( v63 )
      {
        MovieClip::gotoAndStopFrameIndex(v63, 0);
        *((_BYTE *)v63 + 8) = *(_BYTE *)(*((_QWORD *)this + 25) + 528LL) ^ 1;
      }
      String::String(&v154, "panel_back");
      String::String(&v153, "sc/ui_panels.sc");
      String::String(&v152, "panel_replay");
      v37 = (MovieClip *)MovieClipHelper::replaceChildWithMovieClip(MovieClip, (MovieClip *)&v154, &v153, &v152, v64);
      String::~String();
      String::~String();
      String::~String();
      if ( v37 )
      {
        MovieClip::gotoAndStopFrameIndex(v37, 0);
    LABEL_38:
        *((_BYTE *)v37 + 8) = *(_BYTE *)(*((_QWORD *)this + 25) + 528LL) ^ 1;
      }
    LABEL_40:
      v65 = MovieClip;
      if ( v19 )
      {
        v66 = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "cards");
        v65 = (#1257 *)MovieClip::getMovieClipByName(v66, "cards_clip");
      }
      Debugger::doAssert((Debugger *)(v65 != 0), (bool)"", v38);
      if ( v19 )
      {
        v67 = (#1249 *)*((_QWORD *)v65 + 6);
        DisplayObject::setX(v67, *(float *)&BattleScreen::STAGE_WIDTH);
        Rect::Rect((Rect *)&v148);
        v68 = MovieClip::getTextFieldByName(v65, "spacing");
        DisplayObject::getGlobalBounds(v68, &v148);
        v69 = *(float *)&BattleScreen::STAGE_HEIGHT;
        Height = Rect::getHeight(&v148);
        (*(void (__fastcall **)(#1257 *, float))(*(_QWORD *)v65 + 40LL))(v65, (float)(v69 * 0.5) / *(float *)&Height);
        String::String(&v147, "panel");
        String::String(&v146, "sc/ui_panels.sc");
        String::String(&v145, "panel_ingame");
        v72 = (MovieClip *)MovieClipHelper::replaceChildWithMovieClipFit(v67, (MovieClip *)&v147, &v146, &v145, v71);
        String::~String();
        String::~String();
        String::~String();
        if ( v72 )
        {
          MovieClip::gotoAndStopFrameIndex(v72, 0);
          *((_BYTE *)v72 + 8) = *(_BYTE *)(*((_QWORD *)this + 25) + 528LL) ^ 1;
        }
        Rect::~Rect((Rect *)&v148);
      }
      v73 = (#1257 *)MovieClip::getMovieClipByName(v65, "elixir_bar");
      *((_QWORD *)this + 43) = v73;
      v74 = (MovieClip *)MovieClip::getMovieClipByName(v73, "elixirRequirementBar");
      *((_QWORD *)this + 48) = v74;
      MovieClip::gotoAndStopFrameIndex(v74, 0);
      *(_BYTE *)(*((_QWORD *)this + 48) + 8LL) = 0;
      v75 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 43), "bar_tip");
      *((_QWORD *)this + 46) = v75;
      MovieClip::stop(v75);
      *(_BYTE *)(*((_QWORD *)this + 46) + 8LL) = 0;
      v76 = MovieClip::getMovieClipByName(*((#1257 **)this + 43), "bar_flow");
      *((_QWORD *)this + 47) = v76;
      *(_BYTE *)(v76 + 8) = 0;
      v77 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 43), "bar_body");
      v78 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 43), "bar_end");
      v79 = MovieClip::getMovieClipByName(*((#1257 **)this + 43), "bar_bg");
      LODWORD(v80) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v79 + 88LL))(v79));
      v81 = (CombatHUD::BarFill *)operator new(48);
      CombatHUD::BarFill::BarFill(v81, v77, v78, v80);
      *((_QWORD *)this + 44) = v81;
      v82 = MovieClip::getMovieClipByName(*((#1257 **)this + 43), "ghost");
      v83 = operator new(48);
      *(_QWORD *)v83 = off_10046CAF8;
      *(_DWORD *)(v83 + 40) = 0;
      *(_QWORD *)(v83 + 24) = 0;
      *(_QWORD *)(v83 + 32) = 0;
      *(_QWORD *)(v83 + 8) = 0;
      *(_QWORD *)(v83 + 16) = 0;
      *(float *)(v83 + 32) = v80;
      *(_QWORD *)(v83 + 8) = v82;
      *(float *)(v83 + 24) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v82 + 88LL))(v82);
      *(float *)(v83 + 28) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v82 + 64LL))(v82);
      *((_QWORD *)this + 45) = v83;
      v84 = (#1257 *)MovieClip::getMovieClipByName(*((#1257 **)this + 43), "elixirBarLeftNumbers");
      v85 = MovieClip::getMovieClipByName(v84, "elixirAmount");
      *((_QWORD *)this + 50) = MovieClip::getTextFieldByName(v85, "txt");
      v86 = (String *)*(unsigned int *)(LogicDataTables::getGlobals() + 148);
      v87 = MovieClip::getMovieClipByName(v84, "TID_MAX_ELIXIR");
      if ( v87 )
      {
        v89 = (#1271 *)MovieClip::getTextFieldByName(v87, "TID_MAX_ELIXIR");
        v91 = StringTable::getString((#1308 *)"TID_MAX_ELIXIR", v90);
        String::String(&v143, "<MAX_MANA>");
        String::valueOf(&v142, v86, v92);
        String::replace(&v144, v91, &v143, &v142);
        TextField::setText(v89, &v144);
        String::~String();
        String::~String();
        String::~String();
      }
      if ( (int)v86 >= 2 )
      {
        v93 = 0;
        do
        {
          v94 = (#1257 *)*((_QWORD *)this + 43);
          String::format((String *)"d%d", v88, (unsigned int)(v93 + 1));
          v95 = (#1249 *)MovieClip::getMovieClipByName(v94, &v141);
          String::~String();
          if ( !v95 )
            break;
          DisplayObject::setX(v95, (float)(v80 * (float)++v93) / (float)(int)v86);
        }
        while ( v93 < (int)v86 - 1 );
      }
      v96 = (#1375 *)MovieClip::getMovieClipByName(v65, "elixir_warning");
      v98 = v96;
      if ( v96 )
      {
        DropGUIContainer::putLocalizedTIDsToTextFields(v96, v97);
        MovieClip::stop(v98);
      }
      v100 = MovieClip::getTextFieldByName(v65, "nextCard1");
      if ( !v100 )
        Debugger::error((__siginfo *)"no nextCard1 instance name in combat hud", v99);
      Rect::Rect((Rect *)&v140);
      DisplayObject::getBounds(v100, v65, &v140);
      v101 = operator new(464);
      SpellItem::SpellItem(v101, 0, 3, 0);
      *((_QWORD *)this + 39) = v101;
      *(_BYTE *)(v101 + 64) = 0;
      v102 = Rect::getHeight(&v140);
      v103 = *(float *)&v102;
      v104 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 96LL))(*((_QWORD *)this + 39));
      (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 39) + 40LL))(*((_QWORD *)this + 39), v103 / v104);
      MidX = Rect::getMidX(&v140);
      MidY = Rect::getMidY(&v140);
      *(__n128 *)&v107 = DisplayObject::setXY((DisplayObject *)*((_QWORD *)this + 39), MidX, *(float *)&MidY);
      (*(void (__fastcall **)(#1257 *, _QWORD, _QWORD, long double))(*(_QWORD *)v65 + 168LL))(
        v65,
        *((_QWORD *)this + 39),
        *(unsigned int *)(v100 + 56),
        v107);
      Rect::~Rect((Rect *)&v140);
      ChildByName = MovieClip::getChildByName(v65, "cardArea", v108);
      v111 = ChildByName;
      if ( !ChildByName )
        Debugger::error((__siginfo *)"no cardArea instance name in combat hud", v110);
      Rect::Rect(v139);
      DisplayObject::getBounds(v111, v65, v139);
      Width = Rect::getWidth(v139);
      v135 = *(float *)&Width;
      v113 = Rect::getHeight(v139);
      v114 = *(float *)&v113;
      v115 = 0;
      v116 = v135;
      if ( v19 )
        v116 = v114;
      v134 = v114;
      v117 = v116 * 0.25;
      v137 = (float)(v116 * 0.25) * 0.5;
      do
      {
        v118 = operator new(656);
        Summoner = (const AllianceItem *)CombatHUD::PlayerHUD::getSummoner(this);
        SpellButton::SpellButton((SpellButton *)v118, v132, Summoner);
        *(_DWORD *)(v118 + 488) = (_DWORD)a5;
        *(_BYTE *)(v118 + 650) = v19;
        LODWORD(v120) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v118 + 88LL))(v118));
        LODWORD(v121) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v118 + 96LL))(v118));
        if ( v19 )
        {
          v122 = Rect::getMidX(v139);
          v123 = v137 + (float)((float)(v117 * (float)(int)v115) + *(float *)&v139[0].bottom);
          v124 = v135 / v120;
        }
        else
        {
          v125 = *(float *)&v139[0].top;
          LODWORD(v123) = COERCE_UNSIGNED_INT128(Rect::getMidY(v139));
          v122 = v137 + (float)((float)(v117 * (float)(int)v115) + v125);
          v124 = v134 / v121;
        }
        CustomButton::setButtonListener(v118, (char *)this + 96);
        *(float *)(v118 + 512) = v124;
        SpellButton::setNormalXY(v118, v122, v123);
        *(_BYTE *)(v118 + 8) = 0;
        *(_BYTE *)(v118 + 64) = 1;
        Matrix2x3::Matrix2x3((#1256 *)v138);
        v126 = DisplayObject::getX(*((_QWORD *)this + 39));
        v138[4] = *(float *)&v126;
        v127 = DisplayObject::getY(*((_QWORD *)this + 39));
        v138[5] = *(float *)&v127;
        v138[0] = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 88LL))(*((_QWORD *)this + 39)) / v120;
        v138[3] = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 96LL))(*((_QWORD *)this + 39)) / v121;
        SpellButton::setSpellChangeTransform(v118, (__int64)v138, 0.375);
        v128 = SpellButton::showSpellAppearAnim((AllianceLeaveOkMessage *)v118, (float)((float)(int)v115 * 0.18) + 0.6, 1);
        (*(void (__fastcall **)(#1257 *, __int64, float))(*(_QWORD *)v65 + 160LL))(v65, v118, v128);
        *((_QWORD *)this + v115 + 27) = v118;
        Matrix2x3::~Matrix2x3((#1256 *)v138);
        ++v115;
      }
      while ( v115 < 4 );
      *((_DWORD *)this + 108) = *(_DWORD *)(*((_QWORD *)this + 27) + 56LL);
      Rect::~Rect(v139);
      *((float *)this + 104) = (*(float (__fastcall **)(NativeFont *))(*(_QWORD *)this + 96LL))(this);
      if ( v19 )
      {
        v129 = MovieClip::getMovieClipByName(MovieClip, "player_name");
        v130 = DisplayObject::getX(v129);
        *((_DWORD *)this + 105) = LODWORD(v130);
      }
      else
      {
        *((float *)this + 105) = (*(float (__fastcall **)(NativeFont *))(*(_QWORD *)this + 88LL))(this);
        DisplayObject::setY(MovieClip, *((float *)this + 104));
      }
      return this;
    }

    String *__usercall CombatHUD::PlayerHUD::getExportName@<X0>(
            String *__return_ptr a1@<X8>,
            const #1236 *a2@<X1>,
            int a3@<W2>,
            int a4@<W3>)
    {
      if ( !a3 )
        return String::String(a1, "HUD_player");
      if ( !a4 )
      {
        if ( !(_DWORD)a2 )
          return String::String(a1, "Replay_HUD_player_bottomMiddle");
        if ( (_DWORD)a2 == 1 )
          return String::String(a1, "Replay_HUD_enermy_topMiddle");
        return String::String(a1, "HUD_player");
      }
      if ( !(_DWORD)a2 )
        return String::String(a1, "replay_HUD_landscape_player");
      if ( (_DWORD)a2 != 1 )
        return String::String(a1, "HUD_player");
      return String::String(a1, "replay_HUD_landscape_opponent");
    }

    __int64 __fastcall CombatHUD::PlayerHUD::getSummoner(NativeFont *this)
    {
      NativeFont *v1; // x19
      LogicChest *Instance; // x0
      UnbindFacebookAccountMessage *v3; // x20
      unsigned int HigherInt; // w21
      const char *LowerInt; // x2
    
      v1 = this;
      Instance = (LogicChest *)BattleScreen::getInstance(this);
      v3 = *(UnbindFacebookAccountMessage **)(GameScreen::getLogicGame(Instance) + 168);
      v1 = (NativeFont *)((char *)v1 + 188);
      HigherInt = LogicLong::getHigherInt(v1);
      LowerInt = (const char *)LogicLong::getLowerInt(v1);
      return LogicBattle::getLeaderCharacter(v3, HigherInt, LowerInt);
    }

    void __fastcall CombatHUD::PlayerHUD::~PlayerHUD(NativeFont *this)
    {
      __int64 v2; // x20
      char *v3; // x21
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x8
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 v11; // x0
      void *v12; // x0
    
      v2 = 0;
      *(_QWORD *)this = off_10046C980;
      *((_QWORD *)this + 12) = &off_10046CAD8;
      do
      {
        v3 = (char *)this + 8 * v2;
        v4 = *((_QWORD *)v3 + 30);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *((_QWORD *)v3 + 30) = 0;
        v5 = *((_QWORD *)v3 + 38);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        *((_QWORD *)v3 + 38) = 0;
        v6 = v2 + 3;
        --v2;
      }
      while ( v6 > 0 );
      v7 = *((_QWORD *)this + 26);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_QWORD *)this + 26) = 0;
      v8 = *((_QWORD *)this + 39);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *((_QWORD *)this + 39) = 0;
      v9 = *((_QWORD *)this + 44);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *((_QWORD *)this + 44) = 0;
      v10 = *((_QWORD *)this + 45);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *((_QWORD *)this + 45) = 0;
      CombatHUD::PlayerHUD::initializeMembers(this);
      v11 = *((_QWORD *)this + 56);
      if ( v11 )
        operator delete[](v11);
      *((_QWORD *)this + 56) = 0;
      *((_QWORD *)this + 57) = 0;
      v12 = (void *)*((_QWORD *)this + 40);
      if ( v12 )
        operator delete(v12);
      *(_QWORD *)((char *)this + 188) = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    // attributes: thunk
    void __fastcall CombatHUD::PlayerHUD::~PlayerHUD(NativeFont *this)
    {
      __ZN9CombatHUD9PlayerHUDD2Ev(this);
    }

    void __fastcall CombatHUD::PlayerHUD::~PlayerHUD(NativeFont *a1)
    {
      CombatHUD::PlayerHUD::~PlayerHUD(a1);
      operator delete(a1);
    }

    __int64 __fastcall CombatHUD::PlayerHUD::buttonClicked(NativeFont *a1, __int64 a2)
    {
      __int64 v3; // x20
      char *v4; // x21
      __int64 result; // x0
    
      v3 = 0;
      while ( 1 )
      {
        v4 = (char *)a1 + 8 * v3;
        result = *((_QWORD *)v4 + 27);
        if ( result == a2 )
          break;
        if ( ++v3 >= 4 )
          return result;
      }
      if ( (unsigned int)SpellButton::isIgnoreClickEnabled(result) )
        return SpellButton::removeIgnoreClick(*((_QWORD *)v4 + 27));
      else
        return CombatHUD::PlayerHUD::selectSpellButton(a1, v3);
    }

    __int64 __fastcall CombatHUD::PlayerHUD::touchReleased(__int64 a1, __int64 a2)
    {
      CombatHUD::showTauntSelector(*(_QWORD *)(a1 + 200), 0);
      return Sprite::touchReleased(a1, a2);
    }

    __int64 __fastcall CombatHUD::PlayerHUD::getSelectedSpellManaCost(NativeFont *a1)
    {
      __int64 Summoner; // x19
      __int64 v3; // x21
      __int64 i; // x23
      AllianceLeaveOkMessage *v5; // x22
      __int64 SpellData; // x8
      __int64 SelectedSpellIndex; // x8
      TextField *Spell; // x0
      __int64 v9; // x1
    
      Summoner = CombatHUD::PlayerHUD::getSummoner(a1);
      v3 = 0;
      for ( i = 216; i != 248; i += 8 )
      {
        v5 = *(AllianceLeaveOkMessage **)((char *)a1 + i);
        if ( (SpellButton::isDragged((__int64)v5) & 1) != 0 || (unsigned int)CustomButton::getButtonState(v5) == 1 )
        {
          SpellData = SpellButton::getSpellData(v5);
          if ( SpellData )
            v3 = (unsigned int)LogicSummoner::calculateSimulatedManaCost(Summoner, SpellData) + (unsigned int)v3;
        }
      }
      if ( (int)v3 <= 0 )
      {
        SelectedSpellIndex = CombatHUD::PlayerHUD::getSelectedSpellIndex(a1);
        if ( (_DWORD)SelectedSpellIndex != -1 )
        {
          Spell = (TextField *)LogicSummoner::getSpell(Summoner, SelectedSpellIndex);
          if ( Spell )
          {
            v9 = LogicSpell::getSpellData(Spell);
            return LogicSummoner::calculateSimulatedManaCost(Summoner, v9);
          }
        }
        return 0;
      }
      return v3;
    }

    __int64 __fastcall CombatHUD::PlayerHUD::getSelectedSpellIndex(__int64 a1)
    {
      __int64 v1; // x19
      __int64 v2; // x21
      AllianceLeaveOkMessage *v3; // x20
    
      v1 = 0;
      v2 = a1 + 216;
      while ( 1 )
      {
        v3 = *(AllianceLeaveOkMessage **)(v2 + 8 * v1);
        if ( SpellButton::getSpellData(v3) )
        {
          if ( (unsigned int)SpellButton::isSelected(v3) && !(unsigned int)SpellButton::isDragged((__int64)v3) )
            break;
        }
        if ( ++v1 >= 4 )
          return 0xFFFFFFFFLL;
      }
      return v1;
    }

    MovieClip *__fastcall CombatHUD::PlayerHUD::showManaFullText(#1254 *a1)
    {
      #1257 *MovieClip; // x0
      MovieClip *result; // x0
    
      MovieClip = (#1257 *)GUIContainer::getMovieClip(a1);
      result = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "elixir_warning");
      if ( result )
        return (MovieClip *)MovieClip::playOnce(result);
      return result;
    }

    __int64 __fastcall CombatHUD::PlayerHUD::initializeMembers(__int64 result)
    {
      __int64 v1; // x8
      _QWORD *v2; // x9
      __int64 v3; // x9
    
      v1 = 0;
      do
      {
        v2 = (_QWORD *)(result + 8 * v1);
        v2[30] = 0;
        v2[34] = 0;
        v2[38] = 0;
        v3 = v1 + 3;
        --v1;
      }
      while ( v3 > 0 );
      *(_BYTE *)(result + 441) = 0;
      *(_BYTE *)(result + 440) = 0;
      *(_DWORD *)(result + 408) = 0;
      *(_BYTE *)(result + 412) = 0;
      *(_QWORD *)(result + 208) = 0;
      *(_DWORD *)(result + 428) = 0;
      *(_QWORD *)(result + 392) = 0;
      *(_QWORD *)(result + 344) = 0;
      *(_QWORD *)(result + 328) = *(_QWORD *)(result + 320);
      *(_QWORD *)(result + 200) = 0;
      *(_QWORD *)(result + 312) = 0;
      *(_QWORD *)(result + 400) = 0;
      *(_BYTE *)(result + 186) = 0;
      *(_BYTE *)(result + 187) = 0;
      *(_DWORD *)(result + 432) = 0;
      *(_DWORD *)(result + 424) = 0;
      *(_DWORD *)(result + 436) = 0;
      *(_DWORD *)(result + 416) = 0;
      *(_QWORD *)(result + 376) = 0;
      *(_QWORD *)(result + 384) = 0;
      *(_QWORD *)(result + 360) = 0;
      *(_QWORD *)(result + 368) = 0;
      *(_QWORD *)(result + 352) = 0;
      return result;
    }

}; // end class CombatHUD::PlayerHUD
