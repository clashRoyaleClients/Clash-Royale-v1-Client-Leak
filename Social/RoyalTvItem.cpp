class RoyalTvItem
{
public:

    __int64 __fastcall RoyalTvItem::RoyalTvItem(__int64 a1, __int64 a2, __int64 a3, int a4)
    {
      String *v7; // x0
      const String *v8; // x2
      MovieClip *v9; // x0
      #1257 *v10; // x1
      LogicJSONParser *BattleLogJSON; // x0
      const String *v12; // x1
      const char *v13; // x1
      const #1234 *v14; // x25
      LogicBattleLog *v15; // x20
      const char *v16; // x2
      vm_address_t *JSON; // x0
      VisitHomeMessage *Instance; // x0
      __int64 AccountId; // x21
      __int64 Player; // x23
      LogicHealthBarData *v21; // x24
      __int64 v22; // x0
      int v23; // w0
      const char *v24; // x1
      LogicHealthBarData *v25; // x27
      LogicHealthBarData *v26; // x8
      MovieClip *v27; // x21
      const String *String; // x0
      __int64 TextFieldByName; // x24
      __int64 v30; // x23
      __int64 v31; // x21
      __int64 v32; // x28
      __int64 Name; // x0
      const char *v34; // x1
      void *AllianceName; // x0
      MovieClip *v36; // x23
      const char *v37; // x1
      void *v38; // x24
      String *HighscoreRank; // x0
      int v40; // w1
      MovieClip *v41; // x23
      __int64 v42; // x0
      const char *v43; // x1
      void *v44; // x0
      MovieClip *v45; // x21
      const char *v46; // x1
      void *v47; // x23
      String *v48; // x0
      int v49; // w1
      MovieClip *v50; // x21
      const AreaEffectObject *AllianceBadgeData; // x21
      _QWORD *v52; // x20
      __int64 v53; // x0
      DataIcon *v54; // x23
      __int64 MovieClipByName; // x0
      const AreaEffectObject *v56; // x21
      __int64 v57; // x0
      DataIcon *v58; // x23
      __int64 v59; // x0
      __int64 ArenaData; // x28
      __int64 v61; // x0
      const char *v62; // x1
      MovieClip *v63; // x21
      void *v64; // x23
      String *ShareCount; // x0
      int v66; // w1
      __int64 ViewCount; // x21
      __int64 v68; // x0
      __int64 Home; // x23
      const char *v70; // x1
      MovieClip *v71; // x23
      void *v72; // x24
      int v73; // w1
      MovieClip *v74; // x21
      int v75; // w1
      #1257 *v76; // x21
      #1257 *v77; // x26
      AcceptChallengeMessage *Deck; // x27
      const char *v79; // x28
      const char *v80; // x1
      __int64 Spell; // x25
      internal_t *pHeap; // x0
      __int64 v83; // x24
      DisplayObject *v84; // x23
      long double v85; // q0
      float v86; // s8
      float v87; // s0
      float v88; // s8
      long double v89; // q0
      AcceptChallengeMessage *v90; // x21
      const char *v91; // x25
      const char *v92; // x1
      __int64 v93; // x24
      internal_t *p_internal; // x0
      __int64 v95; // x27
      long double v96; // q0
      float v97; // s8
      float v98; // s9
      #1249 *v99; // x23
      float v100; // s8
      long double v101; // q0
      __int64 v102; // x21
      DeviceLinkCodeReceivedScreen *v103; // x23
      const char *v104; // x1
      const String *v105; // x0
      __int64 v106; // x0
      __int64 v107; // x0
      __int64 v108; // x21
      const char *v109; // x1
      MovieClip *v110; // x21
      const String *v111; // x0
      __int64 v112; // x0
      __int64 v113; // x21
      DeviceLinkCodeReceivedScreen *v114; // x23
      __int64 v115; // x21
      DeviceLinkCodeReceivedScreen *v116; // x23
      const #1234 *v118; // [xsp+20h] [xbp-270h]
      LogicJSONParser *v119; // [xsp+28h] [xbp-268h]
      LogicHealthBarData *v120; // [xsp+30h] [xbp-260h]
      __int64 v121; // [xsp+38h] [xbp-258h]
      #1249 *v122; // [xsp+40h] [xbp-250h] BYREF
      String v123; // [xsp+48h] [xbp-248h] BYREF
      DisplayObject *v124; // [xsp+60h] [xbp-230h] BYREF
      String v125; // [xsp+68h] [xbp-228h] BYREF
      String v126; // [xsp+80h] [xbp-210h] BYREF
      String v127; // [xsp+98h] [xbp-1F8h] BYREF
      String v128; // [xsp+B0h] [xbp-1E0h] BYREF
      String v129; // [xsp+C8h] [xbp-1C8h] BYREF
      String v130; // [xsp+E0h] [xbp-1B0h] BYREF
      String v131; // [xsp+F8h] [xbp-198h] BYREF
      String v132; // [xsp+110h] [xbp-180h] BYREF
      String v133; // [xsp+128h] [xbp-168h] BYREF
      String v134; // [xsp+140h] [xbp-150h] BYREF
      String v135; // [xsp+158h] [xbp-138h] BYREF
      String v136; // [xsp+170h] [xbp-120h] BYREF
      String v137; // [xsp+188h] [xbp-108h] BYREF
      String v138; // [xsp+1A0h] [xbp-F0h] BYREF
      String v139; // [xsp+1B8h] [xbp-D8h] BYREF
      String v140; // [xsp+1D0h] [xbp-C0h] BYREF
      String v141; // [xsp+1E8h] [xbp-A8h] BYREF
      String v142; // [xsp+200h] [xbp-90h] BYREF
      String v143; // [xsp+218h] [xbp-78h] BYREF
    
      GameButton::GameButton((DeviceLinkCodeReceivedScreen *)a1);
      *(_QWORD *)(a1 + 336) = 0;
      *(_QWORD *)a1 = off_100466DA0;
      *(_QWORD *)(a1 + 264) = &off_100466F28;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 328) = 0;
      v121 = a1 + 376;
      *(_QWORD *)(a1 + 376) = 0;
      *(_QWORD *)(a1 + 384) = 0;
      v7 = String::String((String *)(a1 + 392));
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 328) = *(_QWORD *)(a1 + 320);
      *(_QWORD *)(a1 + 360) = 0;
      *(_DWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 440) = 0;
      String::operator=(v7, "RoyalTvItem");
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 416) = 0;
      CustomButton::setButtonListener(a1, a1 + 264);
      *(_DWORD *)(a1 + 440) = a4;
      *(_QWORD *)(a1 + 272) = xTimer::getNativeTime();
      *(_DWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 352) = a2;
      String::String(&v143, "sc/ui.sc");
      String::String(&v142, "item_tv_royal_list");
      *(_QWORD *)(a1 + 360) = StringTable::getMovieClip((#1308 *)&v143, &v142, v8);
      String::~String(&v142);
      String::~String(&v143);
      v9 = *(MovieClip **)(a1 + 360);
      *((_BYTE *)v9 + 64) = 1;
      MovieClip::gotoAndStop(v9, "open_end");
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 360));
      DropGUIContainer::putLocalizedTIDsToTextFields(*(#1375 **)(a1 + 360), v10);
      BattleLogJSON = (LogicJSONParser *)RoyalTVEntry::getBattleLogJSON(a2);
      v14 = (const #1234 *)LogicJSONParser::parseJSONObject(BattleLogJSON, v12);
      if ( v14 )
      {
        v15 = (LogicBattleLog *)operator new(40);
        LogicBattleLog::LogicBattleLog(v15);
        v119 = v15;
        JSON = (vm_address_t *)LogicBattleLog::loadJSON(v15, v14, v16);
        Instance = (VisitHomeMessage *)GameMode::getInstance(JSON);
        AccountId = GameMode::getAccountId(Instance);
        Player = LogicBattleLog::getPlayer(v15, 0);
        v21 = (LogicHealthBarData *)LogicBattleLog::getPlayer(v15, (const char *)1);
        v22 = LogicBattleLogPlayer::getAccountId(v21);
        v23 = LogicLong::equals(v22, AccountId);
        if ( v23 )
          v25 = v21;
        else
          v25 = (LogicHealthBarData *)Player;
        if ( v23 )
          v26 = (LogicHealthBarData *)Player;
        else
          v26 = v21;
        v120 = v26;
        v27 = *(MovieClip **)(a1 + 360);
        String = (const String *)StringTable::getString((#1308 *)"TID_VS", v24);
        MovieClip::setText(v27, "vs", String);
        TextFieldByName = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 360), "player01_name");
        v30 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 360), "player01_clan");
        v31 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 360), "player02_name");
        v32 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 360), "player02_clan");
        Name = LogicBattleLogPlayer::getName(v25);
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, Name, 0);
        if ( *(int *)LogicBattleLogPlayer::getAllianceName(v25) < 1 )
          AllianceName = StringTable::getString((#1308 *)"TID_NO_CLAN", v34);
        else
          AllianceName = (void *)LogicBattleLogPlayer::getAllianceName(v25);
        MovieClipHelper::setTextAndScaleIfNecessary(v30, AllianceName, 0);
        v36 = *(MovieClip **)(a1 + 360);
        v38 = StringTable::getString((#1308 *)"TID_PLAYER_RANK", v37);
        String::String(&v140, "<num>");
        HighscoreRank = (String *)LogicBattleLogPlayer::getHighscoreRank(v25);
        String::valueOf(&v139, HighscoreRank, v40);
        String::replace(&v141, v38, &v140, &v139);
        MovieClip::setText(v36, "player01_rank", &v141);
        String::~String(&v141);
        String::~String(&v139);
        String::~String(&v140);
        if ( !(unsigned int)LogicBattleLogPlayer::getHighscoreRank(v25) )
        {
          v41 = *(MovieClip **)(a1 + 360);
          String::String(&v138, "");
          MovieClip::setText(v41, "player01_rank", &v138);
          String::~String(&v138);
        }
        v42 = LogicBattleLogPlayer::getName(v120);
        MovieClipHelper::setTextAndScaleIfNecessary(v31, v42, 0);
        if ( *(int *)LogicBattleLogPlayer::getAllianceName(v120) < 1 )
          v44 = StringTable::getString((#1308 *)"TID_NO_CLAN", v43);
        else
          v44 = (void *)LogicBattleLogPlayer::getAllianceName(v120);
        MovieClipHelper::setTextAndScaleIfNecessary(v32, v44, 0);
        v45 = *(MovieClip **)(a1 + 360);
        v47 = StringTable::getString((#1308 *)"TID_PLAYER_RANK", v46);
        String::String(&v136, "<num>");
        v48 = (String *)LogicBattleLogPlayer::getHighscoreRank(v120);
        String::valueOf(&v135, v48, v49);
        String::replace(&v137, v47, &v136, &v135);
        MovieClip::setText(v45, "player02_rank", &v137);
        String::~String(&v137);
        String::~String(&v135);
        String::~String(&v136);
        if ( !(unsigned int)LogicBattleLogPlayer::getHighscoreRank(v120) )
        {
          v50 = *(MovieClip **)(a1 + 360);
          String::String(&v134, "");
          MovieClip::setText(v50, "player02_rank", &v134);
          String::~String(&v134);
        }
        AllianceBadgeData = (const AreaEffectObject *)LogicBattleLogPlayer::getAllianceBadgeData(v25);
        if ( AllianceBadgeData )
        {
          v52 = (_QWORD *)(a1 + 416);
          v53 = *(_QWORD *)(a1 + 416);
          if ( v53 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
          *v52 = 0;
          v54 = (DataIcon *)operator new(112);
          DataIcon::DataIcon(v54, AllianceBadgeData);
          *(_QWORD *)(a1 + 416) = v54;
          MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "player01_clan_badge");
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)MovieClipByName + 160LL))(MovieClipByName, *v52);
        }
        v56 = (const AreaEffectObject *)LogicBattleLogPlayer::getAllianceBadgeData(v120);
        if ( v56 )
        {
          v57 = *(_QWORD *)(a1 + 424);
          if ( v57 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 8LL))(v57);
          *(_QWORD *)(a1 + 424) = 0;
          v58 = (DataIcon *)operator new(112);
          DataIcon::DataIcon(v58, v56);
          *(_QWORD *)(a1 + 424) = v58;
          v59 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "player02_clan_badge");
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v59 + 160LL))(v59, *(_QWORD *)(a1 + 424));
        }
        ArenaData = LogicBattleLog::getArenaData(v119);
        LogicBattleLogPlayer::getChestData(v25);
        v61 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 360), "like_count");
        if ( v61 )
          *(_BYTE *)(v61 + 8) = 0;
        v63 = *(MovieClip **)(a1 + 360);
        v64 = StringTable::getString((#1308 *)"TID_SHARE_COUNT", v62);
        String::String(&v132, "<num>");
        ShareCount = (String *)RoyalTVEntry::getShareCount(a2);
        String::valueOf(&v131, ShareCount, v66);
        String::replace(&v133, v64, &v132, &v131);
        MovieClip::setText(v63, "like_count", &v133);
        String::~String(&v133);
        String::~String(&v131);
        String::~String(&v132);
        ViewCount = RoyalTVEntry::getViewCount(a2);
        v68 = GameMode::getInstance((vm_address_t *)ViewCount);
        Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(v68 + 112));
        RoyalTVEntry::getRunningId(*(_QWORD *)(a1 + 352));
        if ( (unsigned int)LogicClientHome::getReplaySeen(Home) )
        {
          if ( (int)ViewCount >= 1 )
            ViewCount = (unsigned int)ViewCount;
          else
            ViewCount = 1;
        }
        v71 = *(MovieClip **)(a1 + 360);
        v72 = StringTable::getString((#1308 *)"TID_VIEW_COUNT", v70);
        String::String(&v129, "<num>");
        String::valueOf(&v128, (String *)ViewCount, v73);
        String::replace(&v130, v72, &v129, &v128);
        MovieClip::setText(v71, "view_count", &v130);
        String::~String(&v130);
        String::~String(&v128);
        String::~String(&v129);
        v74 = *(MovieClip **)(a1 + 360);
        String::valueOf(&v127, (String *)*(unsigned int *)(ArenaData + 144), v75);
        MovieClip::setText(v74, "arena_level", &v127);
        String::~String(&v127);
        v76 = (#1257 *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "player01_deck");
        v77 = (#1257 *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "player02_deck");
        String::String(&v126, "player_card_0%d");
        v118 = v14;
        LogicArrayList<SpellItem *>::ensureCapacity(v121, 16);
        Deck = (AcceptChallengeMessage *)LogicBattleLogPlayer::getDeck(v25);
        if ( Deck )
        {
          v79 = 0;
          while ( (int)v79 < (int)LogicSpellDeck::getSpellCnt((__int64)Deck) )
          {
            Spell = LogicSpellDeck::getSpell(Deck, v79);
            if ( v126.m_bytes + 1 >= 9 )
              pHeap = (internal_t *)v126.internal.pHeap;
            else
              pHeap = &v126.internal;
            v79 = (const char *)(unsigned int)((_DWORD)v79 + 1);
            String::format((String *)pHeap, v80, v79);
            v83 = MovieClip::getMovieClipByName(v76, &v125);
            v84 = (DisplayObject *)operator new(464);
            SpellItem::SpellItem(v84, Spell, 7, 1);
            v124 = v84;
            v85 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v83 + 88LL))(v83);
            v86 = *(float *)&v85;
            v87 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v84 + 88LL))(v84);
            (*(void (__fastcall **)(DisplayObject *, float))(*(_QWORD *)v84 + 40LL))(v84, v86 / v87);
            LODWORD(v88) = COERCE_UNSIGNED_INT128(DisplayObject::getX(v83));
            v89 = DisplayObject::getY(v83);
            DisplayObject::setXY(v84, v88, *(float *)&v89);
            CustomButton::setButtonListener(v84, a1 + 264);
            (*(void (__fastcall **)(#1257 *, DisplayObject *))(*(_QWORD *)v76 + 160LL))(v76, v84);
            LogicArrayList<SpellItem *>::add(v121, (__int64 *)&v124);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 8LL))(v83);
            String::~String(&v125);
          }
        }
        v90 = (AcceptChallengeMessage *)LogicBattleLogPlayer::getDeck(v120);
        if ( v90 )
        {
          v91 = 0;
          while ( (int)v91 < (int)LogicSpellDeck::getSpellCnt((__int64)v90) )
          {
            v93 = LogicSpellDeck::getSpell(v90, v91);
            if ( v126.m_bytes + 1 >= 9 )
              p_internal = (internal_t *)v126.internal.pHeap;
            else
              p_internal = &v126.internal;
            v91 = (const char *)(unsigned int)((_DWORD)v91 + 1);
            String::format((String *)p_internal, v92, v91);
            v95 = MovieClip::getMovieClipByName(v77, &v123);
            v96 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v95 + 88LL))(v95);
            v97 = *(float *)&v96;
            LODWORD(v98) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v95 + 96LL))(v95));
            v99 = (#1249 *)operator new(464);
            SpellItem::SpellItem(v99, v93, 7, 1);
            v122 = v99;
            DisplayObject::setWidth(v99, v97);
            DisplayObject::setHeight(v99, v98);
            LODWORD(v100) = COERCE_UNSIGNED_INT128(DisplayObject::getX(v95));
            v101 = DisplayObject::getY(v95);
            DisplayObject::setXY(v99, v100, *(float *)&v101);
            CustomButton::setButtonListener(v99, a1 + 264);
            (*(void (__fastcall **)(#1257 *, #1249 *))(*(_QWORD *)v77 + 160LL))(v77, v99);
            LogicArrayList<SpellItem *>::add(v121, (__int64 *)&v122);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 8LL))(v95);
            String::~String(&v123);
          }
        }
        String::~String(&v126);
        *(_QWORD *)(a1 + 344) = v119;
        (*(void (__fastcall **)(const #1234 *))(*(_QWORD *)v118 + 16LL))(v118);
        (*(void (__fastcall **)(const #1234 *))(*(_QWORD *)v118 + 8LL))(v118);
        v102 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "watch_button");
        v103 = (DeviceLinkCodeReceivedScreen *)operator new(264);
        GameButton::GameButton(v103);
        *(_QWORD *)(a1 + 296) = v103;
        MovieClip::changeTimelineChild(*(#1257 **)(a1 + 360), (#1249 *)v102, v103);
        *(_DWORD *)(v102 + 20) = 0;
        *(_DWORD *)(v102 + 16) = 1065353216;
        *(_DWORD *)(v102 + 24) = 0;
        *(_QWORD *)(v102 + 28) = 1065353216;
        *(_DWORD *)(v102 + 36) = 0;
        ColorTransform::reset((ColorTransform *)(v102 + 9));
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 296) + 288LL))(*(_QWORD *)(a1 + 296), v102, 1);
        CustomButton::setButtonListener(*(_QWORD *)(a1 + 296), a1 + 264);
        *(_BYTE *)(*(_QWORD *)(a1 + 296) + 8LL) = 1;
        v105 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_REPLAY", v104);
        MovieClip::setText((MovieClip *)v102, "txt", v105);
        v106 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "watched_bg");
        if ( v106 )
          *(_BYTE *)(v106 + 8) = 0;
        v107 = GameMode::getInstance((vm_address_t *)v106);
        v108 = LogicGameMode::getHome(*(UnlockAccountPopup **)(v107 + 112));
        RoyalTVEntry::getRunningId(*(_QWORD *)(a1 + 352));
        if ( (unsigned int)LogicClientHome::getReplaySeen(v108) )
        {
          v110 = *(MovieClip **)(a1 + 360);
          v111 = (const String *)StringTable::getString((#1308 *)"TID_STRING_WATCHED", v109);
          MovieClip::setText(v110, "watched", v111);
          v112 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "watched_bg");
          if ( v112 )
            *(_BYTE *)(v112 + 8) = 1;
        }
        MovieClip::gotoAndStop(*(MovieClip **)(a1 + 360), "open_end");
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 360) + 104LL))(*(_QWORD *)(a1 + 360), 1);
        v113 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 360), "area1");
        v114 = (DeviceLinkCodeReceivedScreen *)operator new(264);
        GameButton::GameButton(v114);
        *(_QWORD *)(a1 + 304) = v114;
        MovieClip::changeTimelineChild(*(#1257 **)(a1 + 360), (#1249 *)v113, v114);
        *(_DWORD *)(v113 + 20) = 0;
        *(_DWORD *)(v113 + 16) = 1065353216;
        *(_DWORD *)(v113 + 24) = 0;
        *(_QWORD *)(v113 + 28) = 1065353216;
        *(_DWORD *)(v113 + 36) = 0;
        ColorTransform::reset((ColorTransform *)(v113 + 9));
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 304) + 288LL))(*(_QWORD *)(a1 + 304), v113, 0);
        CustomButton::setButtonListener(*(_QWORD *)(a1 + 304), a1 + 264);
        v115 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 360), "area2");
        v116 = (DeviceLinkCodeReceivedScreen *)operator new(264);
        GameButton::GameButton(v116);
        *(_QWORD *)(a1 + 312) = v116;
        MovieClip::changeTimelineChild(*(#1257 **)(a1 + 360), (#1249 *)v115, v116);
        *(_DWORD *)(v115 + 20) = 0;
        *(_DWORD *)(v115 + 16) = 1065353216;
        *(_DWORD *)(v115 + 24) = 0;
        *(_QWORD *)(v115 + 28) = 1065353216;
        *(_DWORD *)(v115 + 36) = 0;
        ColorTransform::reset((ColorTransform *)(v115 + 9));
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 312) + 288LL))(*(_QWORD *)(a1 + 312), v115, 0);
        CustomButton::setButtonListener(*(_QWORD *)(a1 + 312), a1 + 264);
      }
      else
      {
        Debugger::warning((__siginfo *)"failed parsing battle log json string for royal tv", v13);
      }
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall RoyalTvItem::RoyalTvItem(__int64 a1, __int64 a2, __int64 a3, int a4)
    {
      return __ZN11RoyalTvItemC2EP12RoyalTVEntryP8FeedPagei(a1, a2, a3, a4);
    }

    void __fastcall RoyalTvItem::~RoyalTvItem(__int64 a1)
    {
      _QWORD *v2; // x21
      __int64 v3; // x8
      __int64 v4; // x20
      __int64 v5; // x0
      __int64 v6; // x8
      __int64 v7; // x0
      __int64 v8; // x0
      _QWORD *v9; // x20
      __int64 v10; // x0
      __int64 v11; // x0
      __int64 v12; // x0
      void *v13; // x0
    
      *(_QWORD *)a1 = off_100466DA0;
      *(_QWORD *)(a1 + 264) = &off_100466F28;
      v2 = (_QWORD *)(a1 + 376);
      v3 = *(int *)(a1 + 388);
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
      *(_DWORD *)(a1 + 388) = 0;
      v7 = *(_QWORD *)(a1 + 416);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *(_QWORD *)(a1 + 416) = 0;
      v8 = *(_QWORD *)(a1 + 424);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *(_QWORD *)(a1 + 424) = 0;
      v9 = (_QWORD *)(a1 + 344);
      v10 = *(_QWORD *)(a1 + 344);
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        if ( *v9 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
        *v9 = 0;
      }
      v11 = *(_QWORD *)(a1 + 296);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v12 = *(_QWORD *)(a1 + 360);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *v9 = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 328) = *(_QWORD *)(a1 + 320);
      *(_QWORD *)(a1 + 360) = 0;
      *(_DWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 440) = 0;
      String::operator=(a1 + 392, "RoyalTvItem");
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 416) = 0;
      String::~String();
      if ( *v2 )
        operator delete[](*v2);
      *v2 = 0;
      v2[1] = 0;
      v13 = *(void **)(a1 + 320);
      if ( v13 )
        operator delete(v13);
      GameButton::~GameButton((DeviceLinkCodeReceivedScreen *)a1);
    }

    // attributes: thunk
    void __fastcall RoyalTvItem::~RoyalTvItem(__int64 a1)
    {
      __ZN11RoyalTvItemD2Ev(a1);
    }

    void __fastcall RoyalTvItem::~RoyalTvItem(void *a1)
    {
      RoyalTvItem::~RoyalTvItem((__int64)a1);
      operator delete(a1);
    }

    void __fastcall RoyalTvItem::refreshEntry(__int64 a1, __int64 a2)
    {
      __int64 ViewCount; // x21
      __int64 Instance; // x0
      __int64 Home; // x22
      const char *v7; // x1
      MovieClip *v8; // x22
      const String *String; // x0
      MovieClip *v10; // x22
      void *v11; // x23
      int v12; // w1
      MovieClip *v13; // x21
      String v14; // [xsp+0h] [xbp-90h] BYREF
      String v15; // [xsp+18h] [xbp-78h] BYREF
      String v16; // [xsp+30h] [xbp-60h] BYREF
      String v17; // [xsp+48h] [xbp-48h] BYREF
    
      *(_QWORD *)(a1 + 272) = xTimer::getNativeTime();
      *(_DWORD *)(a1 + 280) = 0;
      ViewCount = RoyalTVEntry::getViewCount(a2);
      Instance = GameMode::getInstance((vm_address_t *)ViewCount);
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      RoyalTVEntry::getRunningId(a2);
      if ( (unsigned int)LogicClientHome::getReplaySeen(Home) )
      {
        v8 = *(MovieClip **)(a1 + 360);
        String = (const String *)StringTable::getString((#1308 *)"TID_STRING_WATCHED", v7);
        MovieClip::setText(v8, "watched", String);
        if ( (int)ViewCount >= 1 )
          ViewCount = (unsigned int)ViewCount;
        else
          ViewCount = 1;
      }
      v10 = *(MovieClip **)(a1 + 360);
      v11 = StringTable::getString((#1308 *)"TID_VIEW_COUNT", v7);
      String::String(&v16, "<num>");
      String::valueOf(&v15, (String *)ViewCount, v12);
      String::replace(&v17, v11, &v16, &v15);
      MovieClip::setText(v10, "view_count", &v17);
      String::~String();
      String::~String();
      String::~String();
      if ( (int)RoyalTVEntry::getAgeSeconds(a2) <= 59 )
      {
        v13 = *(MovieClip **)(a1 + 360);
        String::String(&v14, "");
        MovieClip::setText(v13, "time", &v14);
        String::~String();
      }
      *(_QWORD *)(a1 + 352) = a2;
    }

    void __fastcall RoyalTvItem::update(__int64 a1, float a2)
    {
      float v3; // s0
      xTimer *v4; // x20
      uint64_t NativeTime; // x0
      unsigned __int64 v6; // x2
      float v7; // s0
      const char *v8; // x1
      int v9; // w21
      void *String; // x20
      bool v11; // w2
      String v12; // [xsp+8h] [xbp-68h] BYREF
      String v13; // [xsp+20h] [xbp-50h] BYREF
      String v14; // [xsp+38h] [xbp-38h] BYREF
    
      v3 = *(float *)(a1 + 280) - a2;
      *(float *)(a1 + 280) = v3;
      if ( v3 <= 0.0 )
      {
        v4 = *(xTimer **)(a1 + 272);
        NativeTime = xTimer::getNativeTime();
        xTimer::getPassedTimeMs(v4, NativeTime, v6);
        v9 = RoyalTVEntry::getAgeSeconds(*(_QWORD *)(a1 + 352)) + (int)v7 / 1000;
        if ( v9 >= 60 )
        {
          String = StringTable::getString((#1308 *)"TID_STREAM_ENTRY_AGE", v8);
          String::String(&v13, "<time>");
          TimeUtil::getTimeString((TimeUtil *)(unsigned int)(60 * (v9 / 60)), 0, v11);
          String::replace(&v14, String, &v13, &v12);
          String::~String();
          String::~String();
          MovieClip::setText(*(MovieClip **)(a1 + 360), "time", &v14);
          String::~String();
        }
        *(_DWORD *)(a1 + 280) = 1114636288;
      }
    }

    void __fastcall RoyalTvItem::buttonClicked(LogicPageOpenedCommand *FeedPage, __int64 a2)
    {
      LogicPageOpenedCommand *v3; // x19
      LogicPageOpenedCommand *Instance; // x0
      FeedPage *v5; // x21
      int RunningId; // w0
      int v7; // w8
      __int64 i; // x21
      vm_address_t *v9; // x0
      __int64 v10; // x0
      MovieClip *v11; // x20
      const char *v12; // x1
      const String *String; // x0
      LogicProgressSimulator *v14; // x20
      #1234 *JSON; // x0
      __int64 v16; // x20
      __int64 ReplayId; // x0
      LogicLong *v18; // x0
      int ReplayShardId; // w0
    
      v3 = FeedPage;
      if ( *((_QWORD *)FeedPage + 38) == a2 || *((_QWORD *)FeedPage + 39) == a2 )
      {
        Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(FeedPage);
        FeedPage = (LogicPageOpenedCommand *)HomeScreen::getFeedPage(Instance);
        v5 = FeedPage;
        if ( FeedPage )
        {
          FeedPage = (LogicPageOpenedCommand *)*((_QWORD *)v3 + 44);
          if ( FeedPage )
          {
            RunningId = RoyalTVEntry::getRunningId((__int64)FeedPage);
            FeedPage = (LogicPageOpenedCommand *)FeedPage::openContextMenu(
                                                   v5,
                                                   v3,
                                                   ((*((_QWORD *)v3 + 39) == a2) | (2 * RunningId)) != 0,
                                                   *((_QWORD *)v3 + 38) == a2);
          }
        }
      }
      if ( *((_QWORD *)v3 + 37) == a2 )
      {
        v10 = *((_QWORD *)v3 + 44);
        if ( v10 && RoyalTVEntry::getReplayId(v10) )
        {
          if ( RoyalTvManager::sm_pInstance )
            RoyalTvManager::sendCommandToRemoveOldSeenFlags((RoyalTvManager *)RoyalTvManager::sm_pInstance);
          CustomButton::setEnabled(*((CustomButton **)v3 + 37), 0);
          v11 = *(MovieClip **)(*((_QWORD *)v3 + 37) + 96LL);
          String = (const String *)StringTable::getString((#1308 *)"TID_LOADING", v12);
          MovieClip::setText(v11, "TID_BUTTON_REPLAY", String);
          v14 = (LogicProgressSimulator *)GameStateManager::getInstance();
          JSON = LogicBattleLog::getJSON(*((LogicJSONParser **)v3 + 43));
          GameStateManager::setNextBattleTypeReplay(v14, JSON);
          v16 = operator new(96);
          HomeBattleReplayMessage::HomeBattleReplayMessage((HomeBattleReplayMessage *)v16);
          ReplayId = RoyalTVEntry::getReplayId(*((_QWORD *)v3 + 44));
          v18 = (LogicLong *)LogicLong::clone(ReplayId);
          HomeBattleReplayMessage::setReplayId((HomeBattleReplayMessage *)v16, v18);
          ReplayShardId = RoyalTVEntry::getReplayShardId(*((_QWORD *)v3 + 44));
          HomeBattleReplayMessage::setReplayShardId((AskForAvatarRankingListMessage *)v16, ReplayShardId);
          *(_BYTE *)(v16 + 80) = 1;
          *(_DWORD *)(v16 + 84) = RoyalTVEntry::getRunningId(*((_QWORD *)v3 + 44));
          *(_DWORD *)(v16 + 88) = *((_DWORD *)v3 + 110);
          MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, (PiranhaMessage *)v16);
          FeedPage::sm_pendingGoToFeed = 1;
          FeedPage::sm_pendingGoToFeedId = RoyalTVEntry::getRunningId(*((_QWORD *)v3 + 44));
        }
      }
      else
      {
        v7 = *((_DWORD *)v3 + 97);
        if ( v7 >= 1 )
        {
          for ( i = 0; i < v7; ++i )
          {
            if ( *(_QWORD *)(*((_QWORD *)v3 + 47) + 8 * i) == a2 )
            {
              v9 = (vm_address_t *)GUI::getInstance(FeedPage);
              GUI::openSpellInfo(v9, *(const TextField **)(*(_QWORD *)(*((_QWORD *)v3 + 47) + 8 * i) + 304LL), 1);
              v7 = *((_DWORD *)v3 + 97);
            }
          }
        }
      }
    }

    __int64 __fastcall RoyalTvItem::refreshNewIndicator(__int64 a1, int a2)
    {
      int RunningId; // w20
      __int64 result; // x0
    
      RunningId = RoyalTVEntry::getRunningId(*(_QWORD *)(a1 + 352));
      result = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 360), "new_tag");
      if ( result )
        *(_BYTE *)(result + 8) = RunningId > a2;
      return result;
    }

    __int64 __fastcall RoyalTvItem::getItemHeight(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 96LL))(*(_QWORD *)(a1 + 360));
    }

    __int64 __fastcall RoyalTvItem::getAnalyticsName(__int64 a1)
    {
      return a1 + 392;
    }

}; // end class RoyalTvItem
