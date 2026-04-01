class BattleLogItem
{
public:

    void __fastcall BattleLogItem::BattleLogItem(BattleLogItem *this, #1055 *a2, #1049 *a3)
    {
      __int64 v5; // x8
      char *v6; // x9
      LogicJSONParser *BattleLogJSON; // x0
      const String *v8; // x1
      const #1234 *v9; // x26
      const char *v10; // x2
      LogicBattleLog *v11; // x22
      const char *v12; // x2
      vm_address_t *JSON; // x0
      VisitHomeMessage *Instance; // x0
      __int64 AccountId; // x22
      __int64 Player; // x23
      LogicHealthBarData *v17; // x24
      __int64 v18; // x0
      int v19; // w25
      LogicHealthBarData *v20; // x27
      LogicLong *v21; // x22
      LogicHealthBarData *v22; // x0
      __int64 v23; // x0
      int HigherInt; // w23
      __int64 v25; // x0
      int LowerInt; // w0
      __int64 AllianceId; // x0
      LogicLong *v28; // x22
      __int64 v29; // x0
      int v30; // w23
      __int64 v31; // x0
      int v32; // w0
      LogicLong *v33; // x22
      __int64 HomeId; // x0
      int v35; // w23
      __int64 v36; // x0
      int v37; // w0
      const String *v38; // x2
      MovieClip *v39; // x0
      #1257 *v40; // x1
      MovieClip *v41; // x22
      const char *v42; // x1
      const String *String; // x0
      #1257 *v44; // x28
      #1271 *TextFieldByName; // x24
      __int64 v46; // x23
      __int64 v47; // x25
      __int64 v48; // x22
      const char *v49; // x1
      const String *v50; // x0
      const char *v51; // x1
      void *AllianceName; // x0
      const AreaEffectObject *AllianceBadgeData; // x24
      DataIcon *v54; // x23
      int PrevScore; // w0
      MovieClip *v56; // x23
      int Stars; // w0
      __int64 Name; // x0
      const char *v59; // x1
      void *v60; // x0
      const AreaEffectObject *v61; // x23
      DataIcon *v62; // x22
      int v63; // w0
      MovieClip *v64; // x22
      int v65; // w0
      const char *v66; // x1
      MovieClip *v67; // x22
      const String *v68; // x0
      int v69; // w23
      int v70; // w0
      const char *v71; // x1
      MovieClip *v72; // x22
      const String *v73; // x0
      const String *v74; // x0
      #1257 *v75; // x25
      #1257 *v76; // x28
      AcceptChallengeMessage *Deck; // x27
      const char *v78; // x22
      const char *v79; // x1
      __int64 Spell; // x26
      internal_t *pHeap; // x0
      __int64 v82; // x23
      DisplayObject *v83; // x24
      long double v84; // q0
      float v85; // s8
      float v86; // s0
      float v87; // s8
      long double v88; // q0
      AcceptChallengeMessage *v89; // x25
      const char *v90; // x22
      const char *v91; // x1
      __int64 v92; // x26
      internal_t *p_internal; // x0
      __int64 v94; // x23
      DisplayObject *v95; // x24
      long double v96; // q0
      float v97; // s8
      float v98; // s0
      float v99; // s8
      long double v100; // q0
      MovieClip *v101; // x23
      #1308 *TID; // x0
      const String *v103; // x1
      #1308 *v104; // x0
      #1308 *v105; // x0
      const String *v106; // x1
      #1308 *v107; // x0
      const char *v108; // x1
      TimeUtil *AgeSeconds; // x0
      bool v110; // w2
      pthread_attr_t *isReplayCompatibleWithCurrentVersion; // x0
      char v112; // w22
      unsigned __int8 *v113; // x8
      int v114; // w20
      __int64 v115; // x24
      DeviceLinkCodeReceivedScreen *v116; // x25
      char v117; // w26
      __int64 v118; // x24
      DeviceLinkCodeReceivedScreen *v119; // x25
      __int64 v120; // x0
      char v121; // w8
      __int64 v122; // x0
      vm_address_t *PlayerAvatar; // x0
      __int64 v124; // x0
      tween::Bounce *v125; // x0
      int v126; // [xsp+1Ch] [xbp-1A4h]
      int Score; // [xsp+20h] [xbp-1A0h]
      int v128; // [xsp+24h] [xbp-19Ch]
      const #1234 *v129; // [xsp+28h] [xbp-198h]
      AreaEffectObject *ChestData; // [xsp+38h] [xbp-188h]
      MovieClip *MovieClipByName; // [xsp+40h] [xbp-180h]
      AreaEffectObject *ArenaData; // [xsp+40h] [xbp-180h]
      LogicJSONParser *v133; // [xsp+48h] [xbp-178h]
      LogicHealthBarData *v134; // [xsp+50h] [xbp-170h]
      char *v135; // [xsp+58h] [xbp-168h]
      String v136; // [xsp+60h] [xbp-160h] BYREF
      String v137; // [xsp+78h] [xbp-148h] BYREF
      String v138; // [xsp+90h] [xbp-130h] BYREF
      DisplayObject *v139; // [xsp+A8h] [xbp-118h] BYREF
      String v140; // [xsp+B0h] [xbp-110h] BYREF
      DisplayObject *v141; // [xsp+C8h] [xbp-F8h] BYREF
      String v142; // [xsp+D0h] [xbp-F0h] BYREF
      String v143; // [xsp+E8h] [xbp-D8h] BYREF
      String v144; // [xsp+100h] [xbp-C0h] BYREF
      String v145; // [xsp+118h] [xbp-A8h] BYREF
      String v146; // [xsp+130h] [xbp-90h] BYREF
      String v147; // [xsp+148h] [xbp-78h] BYREF
    
      EventScreenItem::EventScreenItem(this, a2, a3);
      v5 = 0;
      *((_QWORD *)this + 62) = 0;
      *((_QWORD *)this + 63) = 0;
      *(_QWORD *)this = off_100464148;
      *((_QWORD *)this + 33) = &off_1004642E8;
      v135 = (char *)this + 496;
      *((_BYTE *)this + 472) = 0;
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_QWORD *)this + 60) = 0;
      *((_DWORD *)this + 122) = 0;
      *((_QWORD *)this + 56) = 0;
      *((_QWORD *)this + 57) = 0;
      *((_QWORD *)this + 55) = 0;
      do
      {
        v6 = (char *)this + v5;
        *((_QWORD *)v6 + 49) = 0;
        *((_QWORD *)v6 + 52) = 0;
        v5 += 8;
      }
      while ( v5 != 24 );
      *((_QWORD *)this + 65) = 0;
      *((_QWORD *)this + 64) = 0;
      *((_BYTE *)this + 64) = 1;
      BattleLogJSON = (LogicJSONParser *)BattleReportStreamEntry::getBattleLogJSON(a2);
      v9 = (const #1234 *)LogicJSONParser::parseJSONObject(BattleLogJSON, v8);
      Debugger::doAssert((Debugger *)(v9 != 0), (bool)"failed parsing battle log json string", v10);
      v11 = (LogicBattleLog *)operator new(40);
      LogicBattleLog::LogicBattleLog(v11);
      v133 = v11;
      JSON = (vm_address_t *)LogicBattleLog::loadJSON(v11, v9, v12);
      Instance = (VisitHomeMessage *)GameMode::getInstance(JSON);
      AccountId = GameMode::getAccountId(Instance);
      Player = LogicBattleLog::getPlayer(v133, 0);
      v17 = (LogicHealthBarData *)LogicBattleLog::getPlayer(v133, (const char *)1);
      v18 = LogicBattleLogPlayer::getAccountId(v17);
      v19 = LogicLong::equals(v18, AccountId);
      if ( v19 )
        v20 = v17;
      else
        v20 = (LogicHealthBarData *)Player;
      v21 = (LogicLong *)operator new(8);
      if ( v19 )
        v22 = (LogicHealthBarData *)Player;
      else
        v22 = v17;
      v134 = v22;
      v23 = LogicBattleLogPlayer::getAccountId(v22);
      HigherInt = LogicLong::getHigherInt(v23);
      v25 = LogicBattleLogPlayer::getAccountId(v134);
      LowerInt = LogicLong::getLowerInt(v25);
      LogicLong::LogicLong(v21, HigherInt, LowerInt);
      *((_QWORD *)this + 37) = v21;
      *((_QWORD *)this + 39) = 0;
      AllianceId = LogicBattleLogPlayer::getAllianceId(v134);
      if ( (LogicLong::isZero(AllianceId) & 1) == 0 )
      {
        v28 = (LogicLong *)operator new(8);
        v29 = LogicBattleLogPlayer::getAllianceId(v134);
        v30 = LogicLong::getHigherInt(v29);
        v31 = LogicBattleLogPlayer::getAllianceId(v134);
        v32 = LogicLong::getLowerInt(v31);
        LogicLong::LogicLong(v28, v30, v32);
        *((_QWORD *)this + 39) = v28;
      }
      v33 = (LogicLong *)operator new(8);
      HomeId = LogicBattleLogPlayer::getHomeId(v134);
      v35 = LogicLong::getHigherInt(HomeId);
      v36 = LogicBattleLogPlayer::getHomeId(v134);
      v37 = LogicLong::getLowerInt(v36);
      LogicLong::LogicLong(v33, v35, v37);
      *((_QWORD *)this + 38) = v33;
      LogicBattleLogPlayer::getName(v134);
      String::operator=((String *)((char *)this + 320));
      String::String(&v147, "sc/ui.sc");
      String::String(&v146, "log_item_battle_expanding");
      *((_QWORD *)this + 60) = StringTable::getMovieClip((#1308 *)&v147, &v146, v38);
      String::~String(&v146);
      String::~String(&v147);
      v39 = (MovieClip *)*((_QWORD *)this + 60);
      *((_BYTE *)v39 + 64) = 1;
      MovieClip::gotoAndStop(v39, "open_end");
      (*(void (__fastcall **)(BattleLogItem *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 60));
      DropGUIContainer::putLocalizedTIDsToTextFields(*((#1375 **)this + 60), v40);
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 60), "log_heading_bar");
      v41 = (MovieClip *)*((_QWORD *)this + 60);
      String = (const String *)StringTable::getString((#1308 *)"TID_VS", v42);
      MovieClip::setText(v41, "vs", String);
      v128 = (*(__int64 (__fastcall **)(#1055 *))(*(_QWORD *)a2 + 32LL))(a2);
      v44 = (#1257 *)MovieClip::getMovieClipByName(*((#1257 **)this + 60), "decks");
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 60), "player01_name");
      v46 = MovieClip::getTextFieldByName(v44, "player01_clan");
      v47 = MovieClip::getTextFieldByName(*((_QWORD *)this + 60), "player02_name");
      v48 = MovieClip::getTextFieldByName(v44, "player02_clan");
      v50 = (const String *)StringTable::getString((#1308 *)"TID_YOU", v49);
      TextField::setText(TextFieldByName, v50);
      if ( *(int *)LogicBattleLogPlayer::getAllianceName(v20) < 1 )
        AllianceName = StringTable::getString((#1308 *)"TID_NO_CLAN", v51);
      else
        AllianceName = (void *)LogicBattleLogPlayer::getAllianceName(v20);
      MovieClipHelper::setTextAndScaleIfNecessary(v46, AllianceName, 0);
      AllianceBadgeData = (const AreaEffectObject *)LogicBattleLogPlayer::getAllianceBadgeData(v20);
      if ( AllianceBadgeData )
      {
        v54 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v54, AllianceBadgeData);
        *((_QWORD *)this + 64) = v54;
        String::String(&v145, "player01_badge");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v54,
          v44,
          &v145,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          0);
        String::~String(&v145);
        *(_BYTE *)(MovieClip::getMovieClipByName(v44, "player01_badge") + 8) = 0;
      }
      PrevScore = LogicBattleLogPlayer::getPrevScore(v20);
      MovieClip::setNumberText(v44, "player01_trophy", PrevScore, 0);
      v56 = (MovieClip *)*((_QWORD *)this + 60);
      Stars = LogicBattleLogPlayer::getStars(v20);
      MovieClip::setNumberText(v56, "player01_score", Stars, 0);
      Name = LogicBattleLogPlayer::getName(v134);
      MovieClipHelper::setTextAndScaleIfNecessary(v47, Name, 0);
      if ( *(int *)LogicBattleLogPlayer::getAllianceName(v134) < 1 )
        v60 = StringTable::getString((#1308 *)"TID_NO_CLAN", v59);
      else
        v60 = (void *)LogicBattleLogPlayer::getAllianceName(v134);
      MovieClipHelper::setTextAndScaleIfNecessary(v48, v60, 0);
      v61 = (const AreaEffectObject *)LogicBattleLogPlayer::getAllianceBadgeData(v134);
      if ( v61 )
      {
        v62 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v62, v61);
        *((_QWORD *)this + 65) = v62;
        String::String(&v144, "player02_badge");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v62,
          v44,
          &v144,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          0);
        String::~String(&v144);
        *(_BYTE *)(MovieClip::getMovieClipByName(v44, "player02_badge") + 8) = 0;
      }
      v63 = LogicBattleLogPlayer::getPrevScore(v134);
      MovieClip::setNumberText(v44, "player02_trophy", v63, 0);
      v64 = (MovieClip *)*((_QWORD *)this + 60);
      v65 = LogicBattleLogPlayer::getStars(v134);
      MovieClip::setNumberText(v64, "player02_score", v65, 0);
      LODWORD(v64) = LogicBattleLogPlayer::getStars(v20);
      if ( (int)v64 <= (int)LogicBattleLogPlayer::getStars(v134) )
      {
        v69 = LogicBattleLogPlayer::getStars(v20);
        v70 = LogicBattleLogPlayer::getStars(v134);
        v72 = (MovieClip *)*((_QWORD *)this + 60);
        if ( v69 >= v70 )
        {
          v74 = (const String *)StringTable::getString((#1308 *)"TID_DRAW", v71);
          MovieClip::setText(v72, "battle_result_txt", v74);
          *(_DWORD *)(MovieClip::getTextFieldByName(*((_QWORD *)this + 60), "battle_result_txt") + 64) = -3355444;
          MovieClip::gotoAndStopFrameIndex(MovieClipByName, 2);
        }
        else
        {
          v73 = (const String *)StringTable::getString((#1308 *)"TID_DEFEAT", v71);
          MovieClip::setText(v72, "battle_result_txt", v73);
          *(_DWORD *)(MovieClip::getTextFieldByName(*((_QWORD *)this + 60), "battle_result_txt") + 64) = -52378;
          MovieClip::gotoAndStopFrameIndex(MovieClipByName, 1);
        }
      }
      else
      {
        v67 = (MovieClip *)*((_QWORD *)this + 60);
        v68 = (const String *)StringTable::getString((#1308 *)"TID_VICTORY", v66);
        MovieClip::setText(v67, "battle_result_txt", v68);
        *(_DWORD *)(MovieClip::getTextFieldByName(*((_QWORD *)this + 60), "battle_result_txt") + 64) = -10040065;
        MovieClip::gotoAndStopFrameIndex(MovieClipByName, 0);
      }
      Score = LogicBattleLogPlayer::getScore(v20);
      v126 = LogicBattleLogPlayer::getPrevScore(v20);
      ArenaData = (AreaEffectObject *)LogicBattleLog::getArenaData(v133);
      ChestData = (AreaEffectObject *)LogicBattleLogPlayer::getChestData(v20);
      v75 = (#1257 *)MovieClip::getMovieClipByName(v44, "player_deck");
      v76 = (#1257 *)MovieClip::getMovieClipByName(v44, "opponent_deck");
      String::String(&v143, "player_card_0%d");
      v129 = v9;
      LogicArrayList<SpellItem *>::ensureCapacity((__int64)v135, 16);
      Deck = (AcceptChallengeMessage *)LogicBattleLogPlayer::getDeck(v20);
      if ( Deck )
      {
        v78 = 0;
        while ( (int)v78 < (int)LogicSpellDeck::getSpellCnt((__int64)Deck) )
        {
          Spell = LogicSpellDeck::getSpell(Deck, v78);
          if ( v143.m_bytes + 1 >= 9 )
            pHeap = (internal_t *)v143.internal.pHeap;
          else
            pHeap = &v143.internal;
          v78 = (const char *)(unsigned int)((_DWORD)v78 + 1);
          String::format((String *)pHeap, v79, v78);
          v82 = MovieClip::getMovieClipByName(v75, &v142);
          v83 = (DisplayObject *)operator new(464);
          SpellItem::SpellItem(v83, Spell, 7, 1);
          v141 = v83;
          v84 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v82 + 88LL))(v82);
          v85 = *(float *)&v84;
          v86 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v83 + 88LL))(v83);
          (*(void (__fastcall **)(DisplayObject *, float))(*(_QWORD *)v83 + 40LL))(v83, v85 / v86);
          LODWORD(v87) = COERCE_UNSIGNED_INT128(DisplayObject::getX(v82));
          v88 = DisplayObject::getY(v82);
          DisplayObject::setPixelSnappedXY(v83, v87, *(float *)&v88);
          CustomButton::setButtonListener(v83, (char *)this + 264);
          (*(void (__fastcall **)(#1257 *, DisplayObject *))(*(_QWORD *)v75 + 160LL))(v75, v83);
          LogicArrayList<SpellItem *>::add((__int64)v135, (__int64 *)&v141);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
          String::~String(&v142);
        }
      }
      v89 = (AcceptChallengeMessage *)LogicBattleLogPlayer::getDeck(v134);
      if ( v89 )
      {
        v90 = 0;
        while ( (int)v90 < (int)LogicSpellDeck::getSpellCnt((__int64)v89) )
        {
          v92 = LogicSpellDeck::getSpell(v89, v90);
          if ( v143.m_bytes + 1 >= 9 )
            p_internal = (internal_t *)v143.internal.pHeap;
          else
            p_internal = &v143.internal;
          v90 = (const char *)(unsigned int)((_DWORD)v90 + 1);
          String::format((String *)p_internal, v91, v90);
          v94 = MovieClip::getMovieClipByName(v76, &v140);
          v95 = (DisplayObject *)operator new(464);
          SpellItem::SpellItem(v95, v92, 7, 1);
          v139 = v95;
          v96 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v94 + 88LL))(v94);
          v97 = *(float *)&v96;
          v98 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v95 + 88LL))(v95);
          (*(void (__fastcall **)(DisplayObject *, float))(*(_QWORD *)v95 + 40LL))(v95, v97 / v98);
          LODWORD(v99) = COERCE_UNSIGNED_INT128(DisplayObject::getX(v94));
          v100 = DisplayObject::getY(v94);
          DisplayObject::setPixelSnappedXY(v95, v99, *(float *)&v100);
          CustomButton::setButtonListener(v95, (char *)this + 264);
          (*(void (__fastcall **)(#1257 *, DisplayObject *))(*(_QWORD *)v76 + 160LL))(v76, v95);
          LogicArrayList<SpellItem *>::add((__int64)v135, (__int64 *)&v139);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 8LL))(v94);
          String::~String(&v140);
        }
      }
      String::~String(&v143);
      *((_QWORD *)this + 58) = v133;
      *((_BYTE *)this + 472) = *((_BYTE *)v133 + 32);
      if ( v129 )
      {
        (*(void (__fastcall **)(const #1234 *))(*(_QWORD *)v129 + 16LL))(v129);
        (*(void (__fastcall **)(const #1234 *))(*(_QWORD *)v129 + 8LL))(v129);
      }
      v101 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 60), "bottom");
      if ( v101 )
      {
        if ( ArenaData )
        {
          TID = (#1308 *)LogicData::getTID(ArenaData);
          v104 = StringTable::getString(TID, v103);
          MovieClip::setText(v101, "arena", (const String *)v104);
        }
        if ( ChestData )
        {
          v105 = (#1308 *)LogicData::getTID(ChestData);
          v107 = StringTable::getString(v105, v106);
          MovieClip::setText(v101, "chest", (const String *)v107);
        }
        String::String(&v138, "0");
        if ( Score != v126 )
        {
          if ( Score - v126 < 1 )
            String::format((String *)"%d", v108, (unsigned int)(Score - v126));
          else
            String::format((String *)"+%d", v108, (unsigned int)(Score - v126));
          String::operator=(&v138);
          String::~String(&v137);
        }
        MovieClip::setText(v101, "trophy_difference", &v138);
        AgeSeconds = (TimeUtil *)AvatarStreamEntry::getAgeSeconds(a2);
        TimeUtil::getTimeString(AgeSeconds, 0, v110);
        MovieClip::setText(v101, "time", &v136);
        String::~String(&v136);
        isReplayCompatibleWithCurrentVersion = (pthread_attr_t *)BattleLogItem::isReplayCompatibleWithCurrentVersion(this);
        v112 = (char)isReplayCompatibleWithCurrentVersion;
        if ( v128 == 1 )
          v113 = (unsigned __int8 *)(LogicDataTables::getClientGlobals(isReplayCompatibleWithCurrentVersion) + 377LL);
        else
          v113 = (unsigned __int8 *)(LogicDataTables::getClientGlobals(isReplayCompatibleWithCurrentVersion) + 376LL);
        v114 = *v113;
        v115 = MovieClip::getMovieClipByName(v101, "replay_button");
        v116 = (DeviceLinkCodeReceivedScreen *)operator new(264);
        GameButton::GameButton(v116);
        *((_QWORD *)this + 47) = v116;
        (*(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v116 + 280LL))(v116, v115, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 47), (char *)this + 264);
        if ( v114 )
          v117 = v112;
        else
          v117 = 0;
        *(_BYTE *)(*((_QWORD *)this + 47) + 8LL) = v117;
        (*(void (__fastcall **)(MovieClip *))(*(_QWORD *)v101 + 160LL))(v101);
        v118 = MovieClip::getMovieClipByName(v101, "share_button");
        v119 = (DeviceLinkCodeReceivedScreen *)operator new(264);
        GameButton::GameButton(v119);
        *((_QWORD *)this + 48) = v119;
        (*(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v119 + 280LL))(v119, v118, 1);
        CustomButton::setButtonListener(*((_QWORD *)this + 48), (char *)this + 264);
        *(_BYTE *)(*((_QWORD *)this + 48) + 8LL) = v117;
        (*(void (__fastcall **)(MovieClip *))(*(_QWORD *)v101 + 160LL))(v101);
        v120 = MovieClip::getTextFieldByName(v101, "TID_REPLAY_NO_LONGER_AVAILABLE");
        v121 = v112 ^ 1;
        if ( !v114 )
          v121 = 1;
        *(_BYTE *)(v120 + 8) = v121;
        v122 = GameMode::getInstance((vm_address_t *)v120);
        PlayerAvatar = (vm_address_t *)GameMode::getPlayerAvatar(v122);
        if ( PlayerAvatar )
        {
          v124 = GameMode::getInstance(PlayerAvatar);
          v125 = (tween::Bounce *)GameMode::getPlayerAvatar(v124);
          if ( (LogicClientAvatar::isInAlliance(v125) & 1) == 0 )
            *(_BYTE *)(*((_QWORD *)this + 48) + 8LL) = 0;
        }
        String::~String(&v138);
      }
    }

    __int64 __fastcall BattleLogItem::isReplayCompatibleWithCurrentVersion(#1309 *this)
    {
      __int64 v1; // x19
      #1049 *MajorVersion; // x20
      int Build; // w21
      int ContentVersion; // w2
      int v5; // w3
    
      v1 = *((_QWORD *)this + 34);
      MajorVersion = (#1049 *)BattleReportStreamEntry::getMajorVersion(v1);
      Build = BattleReportStreamEntry::getBuild(v1);
      ContentVersion = BattleReportStreamEntry::getContentVersion(v1);
      return EventScreen::isReplayCompatibleWithCurrentVersion(MajorVersion, Build, ContentVersion, v5);
    }

    // attributes: thunk
    void __fastcall BattleLogItem::BattleLogItem(BattleLogItem *this, #1055 *a2, #1049 *a3)
    {
      __ZN13BattleLogItemC2EP17AvatarStreamEntryP11EventScreen(this, a2, a3);
    }

    void __fastcall BattleLogItem::~BattleLogItem(#1309 *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x8
      __int64 v7; // x21
      char *v8; // x22
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 v11; // x0
      __int64 v12; // x0
      __int64 v13; // x0
      __int64 v14; // x0
      __int64 v15; // x0
      __int64 v16; // x0
      __int64 v17; // x0
      __int64 v18; // x9
      char *v19; // x10
      void *v20; // x0
    
      *(_QWORD *)this = off_100464148;
      *((_QWORD *)this + 33) = &off_1004642E8;
      v2 = (_QWORD *)((char *)this + 496);
      v3 = *((int *)this + 127);
      if ( (int)v3 >= 1 )
      {
        v4 = v3 - 1;
        do
        {
          v5 = *(_QWORD *)(*v2 + 8 * v4);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          v6 = v4-- + 1;
        }
        while ( v6 > 1 );
      }
      v7 = 0;
      *((_DWORD *)this + 127) = 0;
      do
      {
        v8 = (char *)this + 8 * v7;
        v9 = *((_QWORD *)v8 + 49);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        *((_QWORD *)v8 + 49) = 0;
        v10 = *((_QWORD *)v8 + 52);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        *((_QWORD *)v8 + 52) = 0;
        ++v7;
      }
      while ( v7 < 3 );
      v11 = *((_QWORD *)this + 64);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *((_QWORD *)this + 64) = 0;
      v12 = *((_QWORD *)this + 65);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *((_QWORD *)this + 65) = 0;
      v13 = *((_QWORD *)this + 48);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *((_QWORD *)this + 48) = 0;
      v14 = *((_QWORD *)this + 58);
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v15 = *((_QWORD *)this + 58);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        *((_QWORD *)this + 58) = 0;
      }
      v16 = *((_QWORD *)this + 47);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      *((_QWORD *)this + 47) = 0;
      v17 = *((_QWORD *)this + 60);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v18 = 0;
      *((_BYTE *)this + 472) = 0;
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_QWORD *)this + 56) = *((_QWORD *)this + 55);
      *((_QWORD *)this + 60) = 0;
      *((_DWORD *)this + 122) = 0;
      do
      {
        v19 = (char *)this + v18;
        *((_QWORD *)v19 + 49) = 0;
        *((_QWORD *)v19 + 52) = 0;
        v18 += 8;
      }
      while ( v18 != 24 );
      *((_QWORD *)this + 64) = 0;
      *((_QWORD *)this + 65) = 0;
      if ( *v2 )
        operator delete[](*v2);
      *v2 = 0;
      v2[1] = 0;
      v20 = (void *)*((_QWORD *)this + 55);
      if ( v20 )
        operator delete(v20);
      EventScreenItem::~EventScreenItem(this);
    }

    // attributes: thunk
    void __fastcall BattleLogItem::~BattleLogItem(#1309 *this)
    {
      __ZN13BattleLogItemD2Ev(this);
    }

    void __fastcall BattleLogItem::~BattleLogItem(#1309 *this)
    {
      BattleLogItem::~BattleLogItem(this);
      operator delete(this);
    }

    void __fastcall BattleLogItem::update(#1257 **this, float a2)
    {
      float v4; // s0
      #1055 *v5; // x0
      const char *v6; // x1
      TimeUtil *AgeSeconds; // x21
      __int64 v8; // x0
      #1271 *v9; // x20
      String *v10; // x0
      void *String; // x20
      bool v12; // w2
      __int64 MovieClipByName; // x0
      #1271 *TextFieldByName; // x0
      __int64 Instance; // x0
      __int64 Home; // x0
      String v17; // [xsp+0h] [xbp-90h] BYREF
      String v18; // [xsp+18h] [xbp-78h] BYREF
      String v19; // [xsp+30h] [xbp-60h] BYREF
      String v20; // [xsp+48h] [xbp-48h] BYREF
    
      EventScreenItem::update((LogicSpellDeck *)this, a2);
      v4 = *((float *)this + 122) - a2;
      *((float *)this + 122) = v4;
      v5 = *(this + 34);
      if ( v5 && v4 < 0.0 )
      {
        AgeSeconds = (TimeUtil *)AvatarStreamEntry::getAgeSeconds(v5);
        if ( (int)AgeSeconds > 59 )
        {
          String = StringTable::getString((#1308 *)"TID_STREAM_ENTRY_AGE", v6);
          String::String(&v18, "<time>");
          TimeUtil::getTimeString(AgeSeconds, 0, v12);
          String::replace(&v19, String, &v18, &v17);
          String::~String(&v17);
          String::~String(&v18);
          MovieClipByName = MovieClip::getMovieClipByName(*(this + 60), "bottom");
          TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "time");
          TextField::setText(TextFieldByName, &v19);
          v10 = &v19;
        }
        else
        {
          v8 = MovieClip::getMovieClipByName(*(this + 60), "bottom");
          v9 = (#1271 *)MovieClip::getTextFieldByName(v8, "time");
          String::String(&v20, "");
          TextField::setText(v9, &v20);
          v10 = &v20;
        }
        String::~String(v10);
        *((_DWORD *)this + 122) = 1114636288;
      }
      if ( *(this + 48) )
      {
        Instance = GameMode::getInstance((vm_address_t *)v5);
        Home = LogicGameMode::getHome(*(#1028 **)(Instance + 112));
        if ( Home )
          LogicClientHome::getShareReplayCooldownTime(Home);
        (*(void (**)(void))(*(_QWORD *)*(this + 48) + 152LL))();
      }
    }

    void __fastcall BattleLogItem::buttonClicked(#1309 *this, #1251 *a2)
    {
      int v4; // w8
      __int64 i; // x21
      vm_address_t *Instance; // x0
      vm_address_t *isReplayCompatibleWithCurrentVersion; // x0
      __int64 v8; // x0
      __int64 Home; // x0
      const char *v10; // x1
      TimeUtil *ShareReplayCooldownTime; // x20
      const String *String; // x0
      bool v13; // w2
      BadgePopup *v14; // x0
      Stage *v15; // x0
      __int64 v16; // x20
      MovieClip *v17; // x21
      const char *v18; // x1
      const String *v19; // x0
      LogicProgressSimulator *v20; // x21
      #1234 *JSON; // x0
      HomeBattleReplayMessage *v22; // x21
      __int64 ReplayId; // x0
      LogicLong *v24; // x0
      int ReplayShardId; // w0
      Stage *v26; // x19
      const char *v27; // x1
      void *v28; // x0
      ShareReplayPopup *v29; // x20
      __int64 Id; // x0
      #1236 *v31; // x0
      Stage *v32; // x0
      int v33; // s11
      float v34; // s8
      Stage *v35; // x0
      float v36; // s0
      float v37; // s9
      float v38; // s12
      int v39; // s13
      float v40; // s10
      float v41; // s0
      BadgePopup *v42; // x0
      __int64 v43; // x0
      Rect v44[2]; // [xsp+8h] [xbp-D8h] BYREF
      String v45; // [xsp+18h] [xbp-C8h] BYREF
      String v46; // [xsp+30h] [xbp-B0h] BYREF
      String v47; // [xsp+48h] [xbp-98h] BYREF
      String v48; // [xsp+60h] [xbp-80h] BYREF
      String v49; // [xsp+78h] [xbp-68h] BYREF
    
      v4 = *((_DWORD *)this + 127);
      if ( v4 >= 1 )
      {
        for ( i = 0; i < v4; ++i )
        {
          if ( *(#1251 **)(*((_QWORD *)this + 62) + 8 * i) == a2 )
          {
            Instance = (vm_address_t *)GUI::getInstance(this);
            GUI::openSpellInfo(Instance, *(const TextField **)(*(_QWORD *)(*((_QWORD *)this + 62) + 8 * i) + 304LL), 1);
            v4 = *((_DWORD *)this + 127);
          }
        }
      }
      if ( *((#1251 **)this + 47) != a2 )
      {
        if ( *((#1251 **)this + 48) != a2 )
          return;
        isReplayCompatibleWithCurrentVersion = (vm_address_t *)BattleLogItem::isReplayCompatibleWithCurrentVersion(this);
        if ( ((unsigned __int8)isReplayCompatibleWithCurrentVersion & 1) != 0 )
        {
          v8 = GameMode::getInstance(isReplayCompatibleWithCurrentVersion);
          Home = LogicGameMode::getHome(*(#1028 **)(v8 + 112));
          if ( Home
            && (ShareReplayCooldownTime = (TimeUtil *)LogicClientHome::getShareReplayCooldownTime(Home),
                (int)ShareReplayCooldownTime >= 1) )
          {
            String = (const String *)StringTable::getString((#1308 *)"TID_REPLAY_SHARED_FAIL", v10);
            String::String(&v49, String);
            String::String(&v48, "");
            TimeUtil::getTimeString(ShareReplayCooldownTime, 1, v13);
            String::operator=(&v48);
            String::~String(&v47);
            String::String(&v45, "<time>");
            String::replace(&v46, &v49, &v45, &v48);
            String::operator=(&v49);
            String::~String(&v46);
            String::~String(&v45);
            v15 = (Stage *)GUI::getInstance(v14);
            GUI::showCenteredFloaterText(v15, (__int64)&v49, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
            String::~String(&v48);
            String::~String(&v49);
          }
          else
          {
            v29 = (ShareReplayPopup *)operator new(280);
            Id = AvatarStreamEntry::getId(*((#1055 **)this + 34));
            v31 = (#1236 *)LogicLong::clone(Id);
            ShareReplayPopup::ShareReplayPopup(v29, v31);
            Rect::Rect(v44);
            DisplayObject::getBounds(v29, 0, v44);
            v33 = *(_DWORD *)(Stage::getInstance(v32) + 428LL);
            v34 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(ShareReplayPopup *))*(_QWORD *)(*(_QWORD *)v29 + 88LL))(v29)));
            v35 = (Stage *)(*(__int64 (__fastcall **)(ShareReplayPopup *))(*(_QWORD *)v29 + 64LL))(v29);
            v37 = v36;
            v38 = *(float *)&v44[0].top;
            v39 = *(_DWORD *)(Stage::getInstance(v35) + 432LL);
            v40 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(ShareReplayPopup *))*(_QWORD *)(*(_QWORD *)v29 + 96LL))(v29)));
            v41 = (*(float (__fastcall **)(ShareReplayPopup *))(*(_QWORD *)v29 + 72LL))(v29);
            v42 = (BadgePopup *)DisplayObject::setPixelSnappedXY(
                                  v29,
                                  (float)((float)((float)v33 - (float)(v34 * v37)) * 0.5) - v38,
                                  (float)((float)((float)v39 - (float)(v40 * v41)) * 0.1) - *(float *)&v44[0].bottom);
            v43 = GUI::getInstance(v42);
            GUI::showPopup(v43, v29, 1, 0, 0);
            Rect::~Rect(v44);
          }
          return;
        }
    LABEL_16:
        v26 = (Stage *)GUI::getInstance((BadgePopup *)isReplayCompatibleWithCurrentVersion);
        v28 = StringTable::getString((#1308 *)"TID_REPLAY_NO_LONGER_AVAILABLE", v27);
        GUI::showCenteredFloaterText(v26, (__int64)v28, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        return;
      }
      isReplayCompatibleWithCurrentVersion = (vm_address_t *)BattleLogItem::isReplayCompatibleWithCurrentVersion(this);
      if ( ((unsigned __int8)isReplayCompatibleWithCurrentVersion & 1) == 0 )
        goto LABEL_16;
      v16 = *((_QWORD *)this + 34);
      if ( v16 && BattleReportStreamEntry::getReplayId(*((_QWORD *)this + 34)) )
      {
        CustomButton::setEnabled(*((CustomButton **)this + 47), 0);
        v17 = *(MovieClip **)(*((_QWORD *)this + 47) + 96LL);
        v19 = (const String *)StringTable::getString((#1308 *)"TID_LOADING", v18);
        MovieClip::setText(v17, "TID_BUTTON_REPLAY", v19);
        v20 = (LogicProgressSimulator *)GameStateManager::getInstance();
        JSON = LogicBattleLog::getJSON(*((LogicJSONParser **)this + 58));
        GameStateManager::setNextBattleTypeReplay(v20, JSON);
        v22 = (HomeBattleReplayMessage *)operator new(96);
        HomeBattleReplayMessage::HomeBattleReplayMessage(v22);
        ReplayId = BattleReportStreamEntry::getReplayId(v16);
        v24 = (LogicLong *)LogicLong::clone(ReplayId);
        HomeBattleReplayMessage::setReplayId(v22, v24);
        ReplayShardId = BattleReportStreamEntry::getReplayShardId(v16);
        HomeBattleReplayMessage::setReplayShardId(v22, ReplayShardId);
        *((_BYTE *)v22 + 81) = 1;
        *((_BYTE *)v22 + 82) = *((_BYTE *)this + 472);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v22);
      }
    }

    __int64 __fastcall BattleLogItem::getReplayID(#1309 *this)
    {
      __int64 v1; // x19
    
      v1 = *((_QWORD *)this + 34);
      if ( BattleReportStreamEntry::getReplayId(v1) )
        return BattleReportStreamEntry::getReplayId(v1);
      else
        return 0;
    }

}; // end class BattleLogItem
