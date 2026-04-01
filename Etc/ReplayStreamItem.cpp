class ReplayStreamItem
{
public:

    void __fastcall ReplayStreamItem::~ReplayStreamItem(_QWORD *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
    
      *a1 = off_10046A918;
      a1[33] = &off_10046AAC0;
      v2 = a1[45];
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      a1[45] = 0;
      v3 = a1[46];
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      a1[46] = 0;
      v4 = a1[44];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      a1[44] = 0;
      StreamItem::~StreamItem((__int64)a1);
    }

    // attributes: thunk
    void __fastcall ReplayStreamItem::~ReplayStreamItem(_QWORD *a1)
    {
      __ZN16ReplayStreamItemD2Ev(a1);
    }

    void __fastcall ReplayStreamItem::~ReplayStreamItem(_QWORD *a1)
    {
      ReplayStreamItem::~ReplayStreamItem(a1);
      operator delete(a1);
    }

    _QWORD *__fastcall ReplayStreamItem::ReplayStreamItem(_QWORD *a1, ClientCapabilitiesMessage *a2)
    {
      const String *BattleJSON; // x0
      String *v5; // x21
      const String *v6; // x1
      const char *v7; // x2
      unsigned __int8 *v8; // x23
      const char *v9; // x2
      int v10; // w8
      const String *v11; // x2
      MovieClip *MovieClip; // x24
      const String *v13; // x2
      const char *v14; // x1
      __int64 TextFieldByName; // x20
      __int64 SenderName; // x0
      const String *String; // x0
      __int64 SenderAllianceRole; // x0
      #1308 *TID; // x0
      const String *v20; // x1
      #1308 *v21; // x0
      const char *v22; // x1
      const String *v23; // x0
      __int64 v24; // x20
      __int64 Message; // x0
      VisitHomeMessage *Instance; // x0
      __int64 AccountId; // x22
      LogicHealthBarData *Player; // x25
      LogicHealthBarData *v29; // x26
      __int64 v30; // x21
      __int64 v31; // x20
      __int64 v32; // x28
      __int64 v33; // x27
      __int64 v34; // x0
      const char *v35; // x1
      void *v36; // x0
      __int64 Name; // x0
      LogicHealthBarData *v38; // x0
      const char *v39; // x1
      void *AllianceName; // x0
      int Score; // w0
      __int64 v42; // x0
      const char *v43; // x1
      void *v44; // x0
      int v45; // w0
      const AreaEffectObject *AllianceBadgeData; // x20
      DataIcon **v47; // x22
      __int64 v48; // x0
      DataIcon *v49; // x21
      const AreaEffectObject *v50; // x20
      __int64 v51; // x0
      DataIcon *v52; // x21
      DeviceLinkCodeReceivedScreen *v53; // x21
      void (__fastcall *v54)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x20
      __int64 MovieClipByName; // x0
      MovieClip *v56; // x20
      const char *v57; // x1
      const String *v58; // x0
      LogicSellChestCommand *MajorVersion; // x20
      int ContentVersion; // w0
      int v61; // w3
      pthread_attr_t *isReplayCompatibleWithCurrentVersion; // x0
      __int64 v63; // x20
      void (__fastcall *v64)(__int64, _QWORD); // x22
      __int64 ClientGlobals; // x0
      String *v67; // [xsp+10h] [xbp-110h]
      #1234 *v68; // [xsp+18h] [xbp-108h]
      String v70; // [xsp+28h] [xbp-F8h] BYREF
      String v71; // [xsp+40h] [xbp-E0h] BYREF
      String v72; // [xsp+58h] [xbp-C8h] BYREF
      String v73; // [xsp+70h] [xbp-B0h] BYREF
      String v74; // [xsp+88h] [xbp-98h] BYREF
      String v75; // [xsp+A0h] [xbp-80h] BYREF
      String v76; // [xsp+B8h] [xbp-68h] BYREF
    
      StreamItem::StreamItem((__int64)a1);
      *a1 = off_10046A918;
      a1[33] = &off_10046AAC0;
      BattleJSON = (const String *)ReplayStreamEntry::getBattleJSON(a2);
      String::String(&v76, BattleJSON);
      v5 = (String *)operator new(24);
      String::String(v5, &v76);
      v67 = v5;
      v68 = (#1234 *)LogicJSONParser::parseJSONObject((LogicJSONParser *)v5, v6);
      Debugger::doAssert((Debugger *)(v68 != 0), (bool)"failed parsing battle log json string", v7);
      v8 = (unsigned __int8 *)operator new(40);
      LogicBattleLog::LogicBattleLog((LogicBattleLog *)v8);
      LogicBattleLog::loadJSON((LogicJSONParser *)v8, v68, v9);
      v10 = v8[32];
      *((_BYTE *)a1 + 376) = v10;
      if ( v10 )
      {
        String::String(&v75, "sc/ui.sc");
        String::String(&v74, "speech_bubble_share_friendly");
        MovieClip = StringTable::getMovieClip((#1308 *)&v75, &v74, v11);
        String::~String();
        String::~String();
      }
      else
      {
        String::String(&v73, "sc/ui.sc");
        String::String(&v72, "speech_bubble_share_new");
        MovieClip = StringTable::getMovieClip((#1308 *)&v73, &v72, v13);
        String::~String();
        String::~String();
      }
      (*(void (__fastcall **)(_QWORD *, MovieClip *, _QWORD))(*a1 + 280LL))(a1, MovieClip, 0);
      *((_BYTE *)a1 + 64) = 1;
      *(_BYTE *)(a1[12] + 64LL) = 1;
      *((float *)a1 + 70) = (*(float (__fastcall **)(_QWORD *))(*a1 + 96LL))(a1);
      TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "player_name");
      if ( TextFieldByName && StreamEntry::getSenderName(a2) )
      {
        SenderName = StreamEntry::getSenderName(a2);
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, SenderName, 0);
      }
      String = (const String *)StringTable::getString((#1308 *)"TID_REPLAY_SHARED_FROM", v14);
      MovieClip::setText(MovieClip, "share_from", String);
      SenderAllianceRole = StreamEntry::getSenderAllianceRole(a2);
      TID = (#1308 *)LogicData::getTID(SenderAllianceRole);
      v21 = StringTable::getString(TID, v20);
      MovieClip::setText(MovieClip, "member", (const String *)v21);
      v23 = (const String *)StringTable::getString((#1308 *)"TID_VS", v22);
      MovieClip::setText(MovieClip, "vs", v23);
      if ( ReplayStreamEntry::getMessage(a2) )
      {
        v24 = MovieClip::getTextFieldByName(MovieClip, "text");
        Message = ReplayStreamEntry::getMessage(a2);
        MovieClipHelper::setTextAndScaleIfNecessary(v24, Message, 0);
      }
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      AccountId = GameMode::getAccountId(Instance);
      Player = (LogicHealthBarData *)LogicBattleLog::getPlayer((LogicJSONParser *)v8, 0);
      v29 = (LogicHealthBarData *)LogicBattleLog::getPlayer((LogicJSONParser *)v8, (const char *)1);
      v30 = MovieClip::getTextFieldByName(MovieClip, "player01_name");
      v31 = MovieClip::getTextFieldByName(MovieClip, "player01_clan");
      v32 = MovieClip::getTextFieldByName(MovieClip, "player02_name");
      v33 = MovieClip::getTextFieldByName(MovieClip, "player02_clan");
      v34 = LogicBattleLogPlayer::getAccountId(v29);
      if ( (unsigned int)LogicLong::equals(v34, AccountId) )
      {
        v36 = StringTable::getString((#1308 *)"TID_YOU", v35);
        MovieClipHelper::setTextAndScaleIfNecessary(v30, v36, 0);
      }
      else
      {
        Name = LogicBattleLogPlayer::getName(Player);
        MovieClipHelper::setTextAndScaleIfNecessary(v30, Name, 0);
        v38 = v29;
        v29 = Player;
        Player = v38;
      }
      if ( *(int *)LogicBattleLogPlayer::getAllianceName(v29) < 1 )
        AllianceName = StringTable::getString((#1308 *)"TID_NO_CLAN", v39);
      else
        AllianceName = (void *)LogicBattleLogPlayer::getAllianceName(v29);
      MovieClipHelper::setTextAndScaleIfNecessary(v31, AllianceName, 0);
      Score = LogicBattleLogPlayer::getScore(v29);
      MovieClip::setNumberText(MovieClip, "player01_trophy", Score, 0);
      v42 = LogicBattleLogPlayer::getName(Player);
      MovieClipHelper::setTextAndScaleIfNecessary(v32, v42, 0);
      if ( *(int *)LogicBattleLogPlayer::getAllianceName(Player) < 1 )
        v44 = StringTable::getString((#1308 *)"TID_NO_CLAN", v43);
      else
        v44 = (void *)LogicBattleLogPlayer::getAllianceName(Player);
      MovieClipHelper::setTextAndScaleIfNecessary(v33, v44, 0);
      v45 = LogicBattleLogPlayer::getScore(Player);
      MovieClip::setNumberText(MovieClip, "player02_trophy", v45, 0);
      a1[45] = 0;
      a1[46] = 0;
      AllianceBadgeData = (const AreaEffectObject *)LogicBattleLogPlayer::getAllianceBadgeData(v29);
      if ( AllianceBadgeData )
      {
        v47 = (DataIcon **)(a1 + 45);
        v48 = a1[45];
        if ( v48 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
        *v47 = 0;
        v49 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v49, AllianceBadgeData);
        *v47 = v49;
        String::String(&v71, "player01_clan_badge");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v49,
          MovieClip,
          &v71,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          0);
        String::~String();
        *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "player01_clan_badge") + 8) = 0;
      }
      v50 = (const AreaEffectObject *)LogicBattleLogPlayer::getAllianceBadgeData(Player);
      if ( v50 )
      {
        v51 = a1[46];
        if ( v51 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
        a1[46] = 0;
        v52 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v52, v50);
        a1[46] = v52;
        String::String(&v70, "player02_clan_badge");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v52,
          MovieClip,
          &v70,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          0);
        String::~String();
        *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "player02_clan_badge") + 8) = 0;
      }
      v53 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v53);
      a1[44] = v53;
      v54 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v53 + 280LL);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "button_replay");
      v54(v53, MovieClipByName, 1);
      CustomButton::setButtonListener(a1[44], a1 + 33);
      v56 = *(MovieClip **)(a1[44] + 96LL);
      v58 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_REPLAY", v57);
      MovieClip::setText(v56, "txt", v58);
      (*(void (__fastcall **)(MovieClip *, _QWORD))(*(_QWORD *)MovieClip + 160LL))(MovieClip, a1[44]);
      MajorVersion = (LogicSellChestCommand *)ReplayStreamEntry::getMajorVersion(a2);
      LODWORD(v53) = ReplayStreamEntry::getBuild(a2);
      ContentVersion = ReplayStreamEntry::getContentVersion(a2);
      isReplayCompatibleWithCurrentVersion = (pthread_attr_t *)EventScreen::isReplayCompatibleWithCurrentVersion(
                                                                 MajorVersion,
                                                                 (int)v53,
                                                                 ContentVersion,
                                                                 v61);
      LODWORD(v53) = (_DWORD)isReplayCompatibleWithCurrentVersion;
      v63 = a1[44];
      v64 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v63 + 152LL);
      ClientGlobals = LogicDataTables::getClientGlobals(isReplayCompatibleWithCurrentVersion);
      v64(v63, (*(_BYTE *)(ClientGlobals + 376) == 0) | (unsigned int)v53 ^ 1);
      (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v8 + 16LL))(v8);
      (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v68 )
      {
        (*(void (**)(void))(*(_QWORD *)v68 + 16LL))();
        (*(void (__fastcall **)(#1234 *))(*(_QWORD *)v68 + 8LL))(v68);
      }
      String::~String();
      operator delete(v67);
      String::~String();
      return a1;
    }

    void __fastcall ReplayStreamItem::refreshEntry(#1384 *this, #1168 *a2)
    {
      const char *v4; // x1
      MovieClip *v5; // x20
      __int64 v6; // x8
      MovieClip *v7; // x22
      const String *String; // x0
      String *ViewCount; // x21
      const String *v10; // x1
      #1308 *v11; // x22
      int v12; // w1
      _QWORD v13[3]; // [xsp+0h] [xbp-80h] BYREF
      String v14; // [xsp+18h] [xbp-68h] BYREF
      String v15; // [xsp+30h] [xbp-50h] BYREF
      String v16; // [xsp+48h] [xbp-38h] BYREF
    
      StreamItem::refreshEntry((__int64)this, (__int64)a2);
      v5 = (MovieClip *)*((_QWORD *)this + 12);
      v6 = *((_QWORD *)this + 44);
      if ( v6 )
      {
        v7 = *(MovieClip **)(v6 + 96);
        String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_REPLAY", v4);
        MovieClip::setText(v7, "txt", String);
      }
      ViewCount = (String *)ReplayStreamEntry::getViewCount(a2);
      String::String(&v16, "TID_VIEW_COUNT_SINGLE");
      if ( (int)ViewCount >= 2 )
        String::operator=(&v16, "TID_VIEW_COUNT");
      v11 = StringTable::getString((#1308 *)&v16, v10);
      String::String(&v14, "<num>");
      String::valueOf(v13, ViewCount, v12);
      String::replace(&v15, v11, &v14, v13);
      MovieClip::setText(v5, "view_count", &v15);
      String::~String();
      String::~String();
      String::~String();
      if ( MovieClip::getTextFieldByName(v5, "view_count") )
        *(_BYTE *)(MovieClip::getTextFieldByName(v5, "view_count") + 8) = (int)ViewCount > 0;
      *((float *)this + 70) = (*(float (__fastcall **)(#1384 *))(*(_QWORD *)this + 96LL))(this);
      String::~String();
    }

    void __fastcall ReplayStreamItem::buttonClicked(__int64 a1, __int64 a2)
    {
      ClientCapabilitiesMessage *v3; // x20
      LogicSellChestCommand *MajorVersion; // x21
      int Build; // w22
      int ContentVersion; // w0
      int v7; // w3
      BadgePopup *isReplayCompatibleWithCurrentVersion; // x0
      const String *BattleJSON; // x0
      String *v10; // x21
      const String *v11; // x1
      #1234 *v12; // x22
      LogicProgressSimulator *Instance; // x0
      HomeBattleReplayMessage *v14; // x21
      __int64 ReplayId; // x0
      LogicLong *v16; // x0
      int ReplayShardId; // w0
      Stage *v18; // x19
      const char *v19; // x1
      void *String; // x0
      String v21; // [xsp+8h] [xbp-38h] BYREF
    
      if ( *(_QWORD *)(a1 + 352) == a2 )
      {
        v3 = *(ClientCapabilitiesMessage **)(a1 + 272);
        MajorVersion = (LogicSellChestCommand *)ReplayStreamEntry::getMajorVersion(v3);
        Build = ReplayStreamEntry::getBuild(v3);
        ContentVersion = ReplayStreamEntry::getContentVersion(v3);
        isReplayCompatibleWithCurrentVersion = (BadgePopup *)EventScreen::isReplayCompatibleWithCurrentVersion(
                                                               MajorVersion,
                                                               Build,
                                                               ContentVersion,
                                                               v7);
        if ( ((unsigned __int8)isReplayCompatibleWithCurrentVersion & 1) != 0 )
        {
          if ( v3 )
          {
            if ( ReplayStreamEntry::getReplayId(v3) )
            {
              BattleJSON = (const String *)ReplayStreamEntry::getBattleJSON(v3);
              String::String(&v21, BattleJSON);
              v10 = (String *)operator new(24);
              String::String(v10, &v21);
              v12 = (#1234 *)LogicJSONParser::parseJSONObject((LogicJSONParser *)v10, v11);
              Instance = (LogicProgressSimulator *)GameStateManager::getInstance();
              GameStateManager::setNextBattleTypeReplay(Instance, v12);
              String::~String();
              operator delete(v10);
              v14 = (HomeBattleReplayMessage *)operator new(96);
              HomeBattleReplayMessage::HomeBattleReplayMessage(v14);
              ReplayId = ReplayStreamEntry::getReplayId(v3);
              v16 = (LogicLong *)LogicLong::clone(ReplayId);
              HomeBattleReplayMessage::setReplayId(v14, v16);
              ReplayShardId = ReplayStreamEntry::getReplayShardId(v3);
              HomeBattleReplayMessage::setReplayShardId(v14, ReplayShardId);
              *((_BYTE *)v14 + 82) = *(_BYTE *)(a1 + 376);
              MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v14);
              String::~String();
            }
          }
        }
        else
        {
          v18 = (Stage *)GUI::getInstance(isReplayCompatibleWithCurrentVersion);
          String = StringTable::getString((#1308 *)"TID_REPLAY_NO_LONGER_AVAILABLE", v19);
          GUI::showCenteredFloaterText(v18, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        }
      }
      else
      {
        StreamItem::buttonClicked((StarHud *)a1);
      }
    }

}; // end class ReplayStreamItem
