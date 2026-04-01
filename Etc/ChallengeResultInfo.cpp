class ChallengeResultInfo
{
public:

    void __fastcall ChallengeResultInfo::ChallengeResultInfo(ChallengeResultInfo *this, PopupBase *a2)
    {
      GameButton *v4; // x21
      const char *v5; // x1
      const String *String; // x0
      LogicJSONParser *BattleLogJSON; // x0
      const String *v8; // x1
      const char *v9; // x1
      const #1234 *v10; // x24
      LogicJSONParser *v11; // x26
      vm_address_t *JSON; // x0
      #945 *Instance; // x0
      __int64 AccountId; // x22
      __int64 Player; // x21
      #893 *v16; // x23
      __int64 v17; // x0
      int v18; // w22
      #893 *v19; // x8
      MovieClip *MovieClip; // x27
      #893 *v21; // x28
      const String *Name; // x0
      __int64 TextFieldByName; // x0
      int Stars; // w0
      int Score; // w22
      const String *v26; // x0
      __int64 v27; // x0
      int v28; // w0
      const char *v29; // x1
      const String *v30; // x0
      const char *v31; // x1
      const String *v32; // x0
      int v33; // w0
      __int64 v34; // x0
      int ViewCount; // w21
      const String *v36; // x1
      __int64 v37; // x21
      String *v38; // x0
      int v39; // w1
      #1257 *MovieClipByName; // x26
      #1257 *v41; // x27
      AcceptChallengeMessage *Deck; // x28
      __int64 v43; // x23
      #795 *Spell; // x0
      __int64 v45; // x21
      const char *v46; // x1
      internal_t *pHeap; // x0
      __int64 v48; // x24
      DisplayObject *v49; // x22
      long double v50; // q0
      float v51; // s8
      float v52; // s0
      float v53; // s8
      long double v54; // q0
      AcceptChallengeMessage *v55; // x26
      __int64 v56; // x28
      #795 *v57; // x0
      __int64 v58; // x24
      const char *v59; // x1
      internal_t *p_internal; // x0
      __int64 v61; // x23
      long double v62; // q0
      float v63; // s8
      float v64; // s9
      #1249 *v65; // x22
      float v66; // s8
      long double v67; // q0
      #1049 *MajorVersion; // x21
      int Build; // w22
      int ContentVersion; // w0
      int v71; // w3
      pthread_attr_t *isReplayCompatibleWithCurrentVersion; // x0
      int v73; // w22
      __int64 v74; // x21
      void (__fastcall *v75)(__int64, _QWORD); // x20
      __int64 ClientGlobals; // x0
      const #1234 *v77; // x20
      LogicJSONParser *v78; // [xsp+18h] [xbp-1B8h]
      const #1234 *v79; // [xsp+20h] [xbp-1B0h]
      #893 *v80; // [xsp+30h] [xbp-1A0h]
      char *v81; // [xsp+38h] [xbp-198h]
      char *v82; // [xsp+40h] [xbp-190h]
      #1249 *v83; // [xsp+48h] [xbp-188h] BYREF
      String v84; // [xsp+50h] [xbp-180h] BYREF
      __int64 v85; // [xsp+68h] [xbp-168h] BYREF
      DisplayObject *v86; // [xsp+70h] [xbp-160h] BYREF
      String v87; // [xsp+78h] [xbp-158h] BYREF
      __int64 v88; // [xsp+90h] [xbp-140h] BYREF
      String v89; // [xsp+98h] [xbp-138h] BYREF
      String v90; // [xsp+B0h] [xbp-120h] BYREF
      String v91; // [xsp+C8h] [xbp-108h] BYREF
      String v92; // [xsp+E0h] [xbp-F0h] BYREF
      String v93; // [xsp+F8h] [xbp-D8h] BYREF
      String v94; // [xsp+110h] [xbp-C0h] BYREF
      String v95; // [xsp+128h] [xbp-A8h] BYREF
      String v96; // [xsp+140h] [xbp-90h] BYREF
      String v97; // [xsp+158h] [xbp-78h] BYREF
    
      String::String(&v97, "sc/ui.sc");
      String::String(&v96, "popup_challenge_results");
      PopupBase::PopupBase(this, &v97, &v96);
      String::~String(&v96);
      String::~String(&v97);
      *(_QWORD *)this = off_10045DE10;
      *((_QWORD *)this + 12) = &off_10045DFE8;
      *((_QWORD *)this + 31) = 0;
      v81 = (char *)this + 248;
      *((_QWORD *)this + 34) = 0;
      v82 = (char *)this + 264;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 29) = a2;
      *((_QWORD *)this + 24) = DropGUIContainer::addGameButton(this, "close", 1);
      v4 = (GameButton *)DropGUIContainer::addGameButton(this, "button_replay", 1);
      *((_QWORD *)this + 30) = v4;
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_REPLAY", v5);
      GameButton::setText(v4, "txt", String);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      *((_BYTE *)this + 64) = 1;
      BattleLogJSON = (LogicJSONParser *)ChallengeDoneStreamEntry::getBattleLogJSON(a2);
      v10 = (const #1234 *)LogicJSONParser::parseJSONObject(BattleLogJSON, v8);
      if ( v10 )
      {
        v11 = (LogicJSONParser *)operator new(40);
        LogicBattleLog::LogicBattleLog(v11);
        JSON = (vm_address_t *)LogicBattleLog::loadJSON(v11, v10);
        Instance = (#945 *)GameMode::getInstance(JSON);
        AccountId = GameMode::getAccountId(Instance);
        Player = LogicBattleLog::getPlayer(v11, 0);
        v16 = (#893 *)LogicBattleLog::getPlayer(v11, 1);
        v17 = LogicBattleLogPlayer::getAccountId(v16);
        v18 = LogicLong::equals(v17, AccountId);
        if ( v18 )
          v19 = (#893 *)Player;
        else
          v19 = v16;
        v80 = v19;
        MovieClip = (MovieClip *)GUIContainer::getMovieClip(this);
        if ( v18 )
          v21 = v16;
        else
          v21 = (#893 *)Player;
        Name = (const String *)LogicBattleLogPlayer::getName(v21);
        MovieClip::setText(MovieClip, "player01_name", Name);
        TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "player01_name");
        MovieClipHelper::scaleSingleLineText(TextFieldByName);
        Stars = LogicBattleLogPlayer::getStars(v21);
        MovieClip::setNumberText(MovieClip, "player01_score", Stars, 0);
        Score = LogicBattleLogPlayer::getScore(v21);
        v26 = (const String *)LogicBattleLogPlayer::getName(v80);
        MovieClip::setText(MovieClip, "player02_name", v26);
        v27 = MovieClip::getTextFieldByName(MovieClip, "player02_name");
        MovieClipHelper::scaleSingleLineText(v27);
        v28 = LogicBattleLogPlayer::getScore(v80);
        if ( Score != v28 )
        {
          if ( Score >= v28 )
          {
            if ( Score > v28 )
            {
              String::String(&v94, "");
              MovieClip::setText(MovieClip, "TID_DRAW", &v94);
              String::~String(&v94);
              v32 = (const String *)StringTable::getString((#1308 *)"TID_WINNER", v31);
              MovieClip::setText(MovieClip, "winner_01", v32);
            }
          }
          else
          {
            String::String(&v95, "");
            MovieClip::setText(MovieClip, "TID_DRAW", &v95);
            String::~String(&v95);
            v30 = (const String *)StringTable::getString((#1308 *)"TID_WINNER", v29);
            MovieClip::setText(MovieClip, "winner_02", v30);
          }
        }
        v33 = LogicBattleLogPlayer::getStars(v80);
        MovieClip::setNumberText(MovieClip, "player02_score", v33, 0);
        v34 = MovieClip::getTextFieldByName(MovieClip, "like_count");
        if ( v34 )
          *(_BYTE *)(v34 + 8) = 0;
        ViewCount = ChallengeDoneStreamEntry::getViewCount(a2);
        String::String(&v93, "TID_VIEW_COUNT_SINGLE");
        v78 = v11;
        v79 = v10;
        if ( ViewCount >= 2 )
          String::operator=(&v93, "TID_VIEW_COUNT");
        v37 = StringTable::getString((#1308 *)&v93, v36);
        String::String(&v91, "<num>");
        v38 = (String *)ChallengeDoneStreamEntry::getViewCount(a2);
        String::valueOf(&v90, v38, v39);
        String::replace(&v92, v37, &v91, &v90);
        MovieClip::setText(MovieClip, "view_count", &v92);
        String::~String(&v92);
        String::~String(&v90);
        String::~String(&v91);
        MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "player_deck");
        v41 = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "opponent_deck");
        String::String(&v89, "player_card_0%d");
        LogicArrayList<SpellItem *>::ensureCapacity(v81, 16);
        LogicArrayList<LogicSpell const*>::ensureCapacity(v82, 16);
        Deck = (AcceptChallengeMessage *)LogicBattleLogPlayer::getDeck(v21);
        if ( Deck )
        {
          LODWORD(v43) = 0;
          while ( (int)v43 < (int)LogicSpellDeck::getSpellCnt(Deck) )
          {
            Spell = (#795 *)LogicSpellDeck::getSpell(Deck, v43);
            v45 = LogicSpell::clone(Spell);
            v88 = v45;
            LogicArrayList<LogicSpell const*>::add(v82, &v88);
            if ( v89.m_bytes + 1 >= 9 )
              pHeap = (internal_t *)v89.internal.pHeap;
            else
              pHeap = &v89.internal;
            v43 = (unsigned int)(v43 + 1);
            String::format((String *)pHeap, v46, v43);
            v48 = MovieClip::getMovieClipByName(MovieClipByName, &v87);
            v49 = (DisplayObject *)operator new(464);
            SpellItem::SpellItem(v49, v45, 7, 1);
            v86 = v49;
            v50 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v48 + 88LL))(v48);
            v51 = *(float *)&v50;
            v52 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v49 + 88LL))(v49);
            (*(void (__fastcall **)(DisplayObject *, float))(*(_QWORD *)v49 + 40LL))(v49, v51 / v52);
            LODWORD(v53) = COERCE_UNSIGNED_INT128(DisplayObject::getX(v48));
            v54 = DisplayObject::getY(v48);
            DisplayObject::setXY(v49, v53, *(float *)&v54);
            CustomButton::setButtonListener(v49, (char *)this + 96);
            (*(void (__fastcall **)(#1257 *, DisplayObject *))(*(_QWORD *)MovieClipByName + 160LL))(MovieClipByName, v49);
            LogicArrayList<SpellItem *>::add(v81, &v86);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
            String::~String(&v87);
          }
        }
        v55 = (AcceptChallengeMessage *)LogicBattleLogPlayer::getDeck(v80);
        if ( v55 )
        {
          LODWORD(v56) = 0;
          while ( (int)v56 < (int)LogicSpellDeck::getSpellCnt(v55) )
          {
            v57 = (#795 *)LogicSpellDeck::getSpell(v55, v56);
            v58 = LogicSpell::clone(v57);
            v85 = v58;
            LogicArrayList<LogicSpell const*>::add(v82, &v85);
            if ( v89.m_bytes + 1 >= 9 )
              p_internal = (internal_t *)v89.internal.pHeap;
            else
              p_internal = &v89.internal;
            v56 = (unsigned int)(v56 + 1);
            String::format((String *)p_internal, v59, v56);
            v61 = MovieClip::getMovieClipByName(v41, &v84);
            v62 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v61 + 88LL))(v61);
            v63 = *(float *)&v62;
            LODWORD(v64) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v61 + 96LL))(v61));
            v65 = (#1249 *)operator new(464);
            SpellItem::SpellItem(v65, v58, 7, 1);
            v83 = v65;
            DisplayObject::setWidth(v65, v63);
            DisplayObject::setHeight(v65, v64);
            LODWORD(v66) = COERCE_UNSIGNED_INT128(DisplayObject::getX(v61));
            v67 = DisplayObject::getY(v61);
            DisplayObject::setXY(v65, v66, *(float *)&v67);
            CustomButton::setButtonListener(v65, (char *)this + 96);
            (*(void (__fastcall **)(#1257 *, #1249 *))(*(_QWORD *)v41 + 160LL))(v41, v65);
            LogicArrayList<SpellItem *>::add(v81, &v83);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
            String::~String(&v84);
          }
        }
        MajorVersion = (#1049 *)ChallengeDoneStreamEntry::getMajorVersion(a2);
        Build = ChallengeDoneStreamEntry::getBuild(a2);
        ContentVersion = ChallengeDoneStreamEntry::getContentVersion(a2);
        isReplayCompatibleWithCurrentVersion = (pthread_attr_t *)EventScreen::isReplayCompatibleWithCurrentVersion(
                                                                   MajorVersion,
                                                                   Build,
                                                                   ContentVersion,
                                                                   v71);
        v73 = (int)isReplayCompatibleWithCurrentVersion;
        v74 = *((_QWORD *)this + 30);
        v75 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v74 + 152LL);
        ClientGlobals = LogicDataTables::getClientGlobals(isReplayCompatibleWithCurrentVersion);
        v75(v74, (*(_BYTE *)(ClientGlobals + 376) == 0) | v73 ^ 1u);
        String::~String(&v89);
        String::~String(&v93);
        v77 = v79;
        (*(void (__fastcall **)(LogicJSONParser *))(*(_QWORD *)v78 + 16LL))(v78);
        (*(void (__fastcall **)(LogicJSONParser *))(*(_QWORD *)v78 + 8LL))(v78);
        (*(void (__fastcall **)(const #1234 *))(*(_QWORD *)v77 + 16LL))(v77);
        (*(void (__fastcall **)(const #1234 *))(*(_QWORD *)v77 + 8LL))(v77);
      }
      else
      {
        Debugger::warning((__siginfo *)"failed parsing battle log json string for royal tv", v9);
      }
    }

    // attributes: thunk
    void __fastcall ChallengeResultInfo::ChallengeResultInfo(ChallengeResultInfo *this, PopupBase *a2)
    {
      __ZN19ChallengeResultInfoC2EP24ChallengeDoneStreamEntry(this, a2);
    }

    void __fastcall ChallengeResultInfo::~ChallengeResultInfo(OwnAvatarDataMessage *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x8
      _QWORD *v7; // x21
      __int64 v8; // x8
      __int64 v9; // x22
      void *v10; // x0
      __int64 v11; // x8
      __int64 v12; // x0
    
      *(_QWORD *)this = off_10045DE10;
      *((_QWORD *)this + 12) = &off_10045DFE8;
      v2 = (_QWORD *)((char *)this + 248);
      v3 = *((int *)this + 65);
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
      *((_DWORD *)this + 65) = 0;
      v7 = (_QWORD *)((char *)this + 264);
      v8 = *((int *)this + 69);
      if ( (int)v8 >= 1 )
      {
        v9 = v8 - 1;
        do
        {
          v10 = *(void **)(*v7 + 8 * v9);
          if ( v10 )
            operator delete(v10);
          v11 = v9-- + 1;
        }
        while ( v11 > 1 );
      }
      *((_DWORD *)this + 69) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      v12 = *((_QWORD *)this + 33);
      if ( v12 )
        operator delete[](v12);
      *v7 = 0;
      *((_QWORD *)this + 34) = 0;
      if ( *v2 )
        operator delete[](*v2);
      *v2 = 0;
      v2[1] = 0;
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall ChallengeResultInfo::~ChallengeResultInfo(OwnAvatarDataMessage *this)
    {
      __ZN19ChallengeResultInfoD2Ev(this);
    }

    void __fastcall ChallengeResultInfo::~ChallengeResultInfo(OwnAvatarDataMessage *this)
    {
      ChallengeResultInfo::~ChallengeResultInfo(this);
      operator delete(this);
    }

    __int64 __fastcall ChallengeResultInfo::buttonClicked(#1251 **this, #1251 *a2)
    {
      PopupBase *v3; // x19
      __int64 v4; // x8
      __int64 v5; // x21
      #1049 *MajorVersion; // x21
      int Build; // w22
      int ContentVersion; // w0
      int v9; // w3
      #825 *isReplayCompatibleWithCurrentVersion; // x0
      __int64 result; // x0
      MovieClip *v12; // x20
      const char *v13; // x1
      const String *String; // x0
      LogicJSONParser *BattleLogJSON; // x0
      const String *v16; // x1
      thread_state_t *v17; // x20
      #772 *Instance; // x0
      HomeBattleReplayMessage *v19; // x20
      __int64 AttackReplayId; // x0
      LogicLong *v21; // x0
      int ReplayShardId; // w0
      __int64 v23; // x0
      pid_t *v24; // x19
      const char *v25; // x1
      const String *v26; // x1
    
      if ( *(this + 24) == a2 )
        return (*((__int64 (__fastcall **)(#1251 **))*this + 44))(this);
      v3 = *(this + 29);
      v4 = *((int *)this + 65);
      if ( (int)v4 < 1 )
      {
    LABEL_6:
        if ( v3 )
        {
          MajorVersion = (#1049 *)ChallengeDoneStreamEntry::getMajorVersion(*(this + 29));
          Build = ChallengeDoneStreamEntry::getBuild(v3);
          ContentVersion = ChallengeDoneStreamEntry::getContentVersion(v3);
          isReplayCompatibleWithCurrentVersion = (#825 *)EventScreen::isReplayCompatibleWithCurrentVersion(
                                                           MajorVersion,
                                                           Build,
                                                           ContentVersion,
                                                           v9);
          if ( ((unsigned __int8)isReplayCompatibleWithCurrentVersion & 1) != 0 )
          {
            result = ChallengeDoneStreamEntry::getAttackReplayId(v3);
            if ( result )
            {
              CustomButton::setEnabled(*(this + 30), 0);
              v12 = (MovieClip *)*((_QWORD *)*(this + 30) + 12);
              String = (const String *)StringTable::getString((#1308 *)"TID_LOADING", v13);
              MovieClip::setText(v12, "txt", String);
              BattleLogJSON = (LogicJSONParser *)ChallengeDoneStreamEntry::getBattleLogJSON(v3);
              v17 = (thread_state_t *)LogicJSONParser::parseJSONObject(BattleLogJSON, v16);
              Instance = (#772 *)GameStateManager::getInstance(v17);
              GameStateManager::setNextBattleTypeReplay(Instance, (#1234 *)v17);
              v19 = (HomeBattleReplayMessage *)operator new(96);
              HomeBattleReplayMessage::HomeBattleReplayMessage(v19);
              AttackReplayId = ChallengeDoneStreamEntry::getAttackReplayId(v3);
              v21 = (LogicLong *)LogicLong::clone(AttackReplayId);
              HomeBattleReplayMessage::setReplayId(v19, v21);
              ReplayShardId = ChallengeDoneStreamEntry::getReplayShardId(v3);
              HomeBattleReplayMessage::setReplayShardId(v19, ReplayShardId);
              *((_BYTE *)v19 + 82) = 1;
              return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v19);
            }
          }
          else
          {
            v24 = (pid_t *)GUI::getInstance(isReplayCompatibleWithCurrentVersion);
            v26 = (const String *)StringTable::getString((#1308 *)"TID_REPLAY_NO_LONGER_AVAILABLE", v25);
            return GUI::showCenteredFloaterText(v24, v26, 0.0, -1);
          }
          return result;
        }
        return (*((__int64 (__fastcall **)(#1251 **))*this + 44))(this);
      }
      v5 = 0;
      while ( *((#1251 **)*(this + 31) + v5) != a2 )
      {
        if ( ++v5 >= v4 )
          goto LABEL_6;
      }
      v23 = GUI::getInstance((#825 *)this);
      return GUI::openSpellInfo(v23, *(_QWORD *)(*((_QWORD *)*(this + 31) + v5) + 304LL), 1);
    }

    // attributes: thunk
    __int64 __fastcall ChallengeResultInfo::update(OwnAvatarDataMessage *this, float a2)
    {
      return PopupBase::update(this, a2);
    }

    __int64 ChallengeResultInfo::touchReleased()
    {
      Sprite::touchReleased();
      return 1;
    }

    __int64 ChallengeResultInfo::touchPressed()
    {
      Sprite::touchPressed();
      return 1;
    }

    __int64 __fastcall ChallengeResultInfo::getPopupType(OwnAvatarDataMessage *this)
    {
      return 52;
    }

}; // end class ChallengeResultInfo
