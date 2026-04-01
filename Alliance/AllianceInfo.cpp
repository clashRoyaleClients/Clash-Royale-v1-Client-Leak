class AllianceInfo
{
public:

    void __fastcall AllianceInfo::AllianceInfo(AllianceInfo *this, #1236 *a2)
    {
      char *v4; // x23
      tween::Bounce *PlayerAvatar; // x21
      __int64 AllianceId; // x0
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x21
      const char *v9; // x2
      #1253 *v10; // x22
      long double Width; // q0
      float v12; // s8
      long double Height; // q0
      __int64 v14; // x0
      #1257 *v15; // x0
      DisplayObject *v16; // x22
      float v17; // s8
      float v18; // s9
      long double v19; // q0
      #1257 *v20; // x0
      #1257 *MovieClipByName; // x22
      MovieClip *v22; // x22
      const char *v23; // x1
      const String *String; // x0
      MovieClip *v25; // x22
      const char *v26; // x1
      const String *v27; // x0
      MovieClip *v28; // x22
      const char *v29; // x1
      const String *v30; // x0
      MovieClip *v31; // x22
      const char *v32; // x1
      const String *v33; // x0
      MovieClip *v34; // x22
      const char *v35; // x1
      const String *v36; // x0
      String v37; // [xsp+8h] [xbp-F8h] BYREF
      String v38; // [xsp+20h] [xbp-E0h] BYREF
      String v39; // [xsp+38h] [xbp-C8h] BYREF
      String v40; // [xsp+50h] [xbp-B0h] BYREF
      String v41; // [xsp+68h] [xbp-98h] BYREF
      Rect v42[2]; // [xsp+80h] [xbp-80h] BYREF
      String v43; // [xsp+90h] [xbp-70h] BYREF
      String v44; // [xsp+A8h] [xbp-58h] BYREF
    
      String::String(&v44, "sc/ui.sc");
      String::String(&v43, "popup_guild_info");
      AllianceScreen::AllianceScreen(this, 0, &v44, &v43);
      String::~String();
      String::~String();
      *(_QWORD *)this = off_10046D078;
      *((_QWORD *)this + 12) = &off_10046D208;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 32) = 0;
      String::String((String *)((char *)this + 296));
      *((_BYTE *)this + 288) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 25) = 0;
      v4 = (char *)this + 200;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 27) = 0;
      String::operator=((char *)this + 296, "");
      *((_QWORD *)this + 40) = 0;
      *((_BYTE *)this + 8) = 0;
      *((_QWORD *)this + 35) = a2;
      *((_BYTE *)this + 288) = 0;
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      if ( LogicClientAvatar::isInAlliance(PlayerAvatar) )
      {
        AllianceId = LogicClientAvatar::getAllianceId(PlayerAvatar);
        if ( (unsigned int)LogicLong::equals(AllianceId, *((_QWORD *)this + 35)) )
          *((_BYTE *)this + 288) = 1;
      }
      MovieClip = GUIContainer::getMovieClip(this);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "ScrollArea");
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v9);
      Rect::Rect(v42);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v42);
      v10 = (#1253 *)operator new(504);
      Width = Rect::getWidth(v42);
      v12 = *(float *)&Width;
      Height = Rect::getHeight(v42);
      ScrollArea::ScrollArea(v10, v12, *(float *)&Height, 100);
      *((_QWORD *)this + 31) = v10;
      ScrollArea::enablePinching(v10, 0);
      ScrollArea::enableHorizontalDrag(*((#1253 **)this + 31), 0);
      ScrollArea::enableVerticalDrag(*((#1253 **)this + 31), 1);
      v14 = *((_QWORD *)this + 31);
      *(_BYTE *)(v14 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v14, 5);
      v15 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClip::changeTimelineChild(v15, TextFieldByName, *((#1249 **)this + 31));
      v16 = (DisplayObject *)*((_QWORD *)this + 31);
      v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v16)));
      v18 = *(float *)&v42[0].top;
      v19 = DisplayObject::getY(*((_QWORD *)this + 31));
      DisplayObject::setPixelSnappedXY(v16, v17 + v18, *(float *)&v19 + *(float *)&v42[0].bottom);
      v20 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(v20, "guild_top_pane");
      String::String(&v41, "button_leave");
      *(_QWORD *)v4 = DropGUIContainer::addGameButton(this, MovieClipByName, &v41);
      String::~String();
      String::String(&v40, "button_edit");
      *((_QWORD *)this + 26) = DropGUIContainer::addGameButton(this, MovieClipByName, &v40);
      String::~String();
      String::String(&v39, "button_join");
      *((_QWORD *)this + 28) = DropGUIContainer::addGameButton(this, MovieClipByName, &v39);
      String::~String();
      String::String(&v38, "button_message");
      *((_QWORD *)this + 27) = DropGUIContainer::addGameButton(this, MovieClipByName, &v38);
      String::~String();
      String::String(&v37, "button_request_join");
      *((_QWORD *)this + 29) = DropGUIContainer::addGameButton(this, MovieClipByName, &v37);
      String::~String();
      v22 = *(MovieClip **)(*(_QWORD *)v4 + 96LL);
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_LEAVE", v23);
      MovieClip::setText(v22, "txt", String);
      v25 = *(MovieClip **)(*((_QWORD *)this + 26) + 96LL);
      v27 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SETTINGS", v26);
      MovieClip::setText(v25, "txt", v27);
      v28 = *(MovieClip **)(*((_QWORD *)this + 28) + 96LL);
      v30 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_JOIN", v29);
      MovieClip::setText(v28, "txt", v30);
      v31 = *(MovieClip **)(*((_QWORD *)this + 27) + 96LL);
      v33 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_MESSAGE", v32);
      MovieClip::setText(v31, "txt", v33);
      v34 = *(MovieClip **)(*((_QWORD *)this + 29) + 96LL);
      v36 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_REQUEST_JOIN", v35);
      MovieClip::setText(v34, "txt", v36);
      *(_BYTE *)(*((_QWORD *)this + 25) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 26) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 28) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 27) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 29) + 8LL) = 0;
      if ( TextFieldByName )
        (*(void (__fastcall **)(#1271 *))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName);
      Rect::~Rect(v42);
    }

    // attributes: thunk
    void __fastcall AllianceInfo::AllianceInfo(AllianceInfo *this, #1236 *a2)
    {
      __ZN12AllianceInfoC2EP9LogicLong(this, a2);
    }

    void __fastcall AllianceInfo::~AllianceInfo(__int64 a1)
    {
      void **v2; // x20
      __int64 v3; // x8
      __int64 v4; // x9
      unsigned __int64 v5; // x10
      unsigned int v6; // w21
      __int64 v7; // x0
      Rect *v8; // x0
      void *v9; // x0
      __int64 v10; // x0
      __int64 v11; // x0
      void *v12; // x0
    
      *(_QWORD *)a1 = off_10046D078;
      *(_QWORD *)(a1 + 96) = &off_10046D208;
      v2 = (void **)(a1 + 256);
      v3 = *(_QWORD *)(a1 + 256);
      v4 = *(_QWORD *)(a1 + 264);
      if ( v4 != v3 )
      {
        v5 = 0;
        v6 = 1;
        do
        {
          v7 = *(_QWORD *)(v3 + 8 * v5);
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            v3 = *(_QWORD *)(a1 + 256);
            v4 = *(_QWORD *)(a1 + 264);
          }
          v5 = v6++;
        }
        while ( v5 < (v4 - v3) >> 3 );
      }
      std::vector<AllianceMemberItem *>::resize(v2, 0, 0);
      v8 = *(Rect **)(a1 + 328);
      if ( v8 )
      {
        AllianceFullEntry::destruct(v8);
        v9 = *(void **)(a1 + 328);
        if ( v9 )
          operator delete(v9);
        *(_QWORD *)(a1 + 328) = 0;
      }
      v10 = *(_QWORD *)(a1 + 240);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *(_QWORD *)(a1 + 240) = 0;
      v11 = *(_QWORD *)(a1 + 248);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *(_QWORD *)(a1 + 248) = 0;
      v12 = *(void **)(a1 + 280);
      if ( v12 )
        operator delete(v12);
      *(_BYTE *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      String::operator=(a1 + 296, "");
      *(_QWORD *)(a1 + 320) = 0;
      String::~String();
      if ( *v2 )
        operator delete(*v2);
      AllianceScreen::~AllianceScreen((AskForAvatarLocalRankingListMessage *)a1);
    }

    // attributes: thunk
    void __fastcall AllianceInfo::~AllianceInfo(__int64 a1)
    {
      __ZN12AllianceInfoD2Ev(a1);
    }

    void __fastcall AllianceInfo::~AllianceInfo(void *a1)
    {
      AllianceInfo::~AllianceInfo((__int64)a1);
      operator delete(a1);
    }

    void __fastcall AllianceInfo::buttonClicked(__int64 a1, __int64 a2)
    {
      LocalNotificationManager *v3; // x20
      #1236 *v4; // x21
      const LogicUpgradeTowerCommand *v5; // x22
      BadgePopup *v6; // x0
      __int64 v7; // x0
      __int64 v8; // x19
      LeaveAllianceMessage *v9; // x20
      const char *v10; // x1
      const String *String; // x21
      const char *v12; // x1
      const String *v13; // x0
      BadgePopup *v14; // x0
      __int64 Instance; // x0
      DisplayObject *v16; // x1
      LogicBuyResourcePackCommand *v17; // x20
      BadgePopup *v18; // x0
      __int64 v19; // x0
      __int64 v20; // x0
      __int64 Home; // x0
      const char *v22; // x1
      int SendTeamMailCooldownTime; // w19
      const String *v24; // x0
      BadgePopup *v25; // x0
      Stage *v26; // x0
      JoinAllianceMessage *v27; // x20
      LogicLong *v28; // x0
      ClanMessagePopup *v29; // x20
      BadgePopup *v30; // x0
      String v31; // [xsp+0h] [xbp-B0h] BYREF
      String v32; // [xsp+18h] [xbp-98h] BYREF
      _QWORD v33[3]; // [xsp+30h] [xbp-80h] BYREF
      String v34; // [xsp+48h] [xbp-68h] BYREF
      String v35; // [xsp+60h] [xbp-50h] BYREF
      String v36; // [xsp+78h] [xbp-38h] BYREF
    
      if ( *(_QWORD *)(a1 + 200) == a2 )
      {
        v8 = operator new(384);
        v9 = (LeaveAllianceMessage *)operator new(72);
        LeaveAllianceMessage::LeaveAllianceMessage(v9);
        String = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_LEAVE_CONFIRMATION_TITLE", v10);
        v13 = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_LEAVE_CONFIRMATION", v12);
        v14 = (BadgePopup *)ConfirmPopup::ConfirmPopup(v8, 5, (__int64)v9, String, v13);
        Instance = GUI::getInstance(v14);
        v16 = (DisplayObject *)v8;
        goto LABEL_16;
      }
      if ( *(_QWORD *)(a1 + 208) == a2 )
      {
        v17 = (LogicBuyResourcePackCommand *)operator new(240);
        v18 = EditClanPopup::EditClanPopup(v17, *(Rect **)(a1 + 328));
        v19 = GUI::getInstance(v18);
        GUI::showPopup(v19, v17, 1, 0, 0);
    LABEL_14:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1);
        return;
      }
      if ( *(_QWORD *)(a1 + 216) == a2 )
      {
        v20 = GameMode::getInstance();
        Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(v20 + 112));
        if ( Home )
        {
          SendTeamMailCooldownTime = LogicClientHome::getSendTeamMailCooldownTime(Home);
          if ( SendTeamMailCooldownTime >= 1 )
          {
            v24 = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_MESSAGE_FAIL", v22);
            String::String(&v36, v24);
            String::String(&v35, "");
            TimeUtil::getTimeString(SendTeamMailCooldownTime, 1, &v34);
            String::operator=(&v35);
            String::~String();
            String::String(&v32, "<time>");
            String::replace(v33, &v36, &v32, &v35);
            String::operator=(&v36);
            String::~String();
            String::~String();
            v26 = (Stage *)GUI::getInstance(v25);
            GUI::showCenteredFloaterText(v26, (__int64)&v36, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
            String::~String();
            String::~String();
            return;
          }
        }
        v29 = (ClanMessagePopup *)operator new(288);
        v30 = ClanMessagePopup::ClanMessagePopup(v29);
        Instance = GUI::getInstance(v30);
        v16 = v29;
    LABEL_16:
        GUI::showPopup(Instance, v16, 1, 0, 0);
        return;
      }
      if ( *(_QWORD *)(a1 + 224) == a2 )
      {
        v27 = (JoinAllianceMessage *)operator new(88);
        JoinAllianceMessage::JoinAllianceMessage(v27);
        v28 = (LogicLong *)LogicLong::clone(*(_QWORD *)(a1 + 280));
        JoinAllianceMessage::setAllianceId(v27, v28);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v27);
        goto LABEL_14;
      }
      if ( *(_QWORD *)(a1 + 232) == a2 )
      {
        v3 = (LocalNotificationManager *)operator new(280);
        v4 = (#1236 *)LogicLong::clone(*(_QWORD *)(a1 + 280));
        v5 = *(const LogicUpgradeTowerCommand **)(a1 + 320);
        String::String(&v31, (const String *)(a1 + 296));
        AllianceJoinRequestPopup::AllianceJoinRequestPopup(v3, v4, v5, &v31);
        String::~String();
        v7 = GUI::getInstance(v6);
        GUI::showPopup(v7, v3, 1, 0, 0);
      }
    }

    __int64 __fastcall AllianceInfo::update(LogicChallengeCommand *this, long double a2)
    {
      __int64 result; // x0
      tween::Bounce *PlayerAvatar; // x0
    
      AllianceScreen::update(this, *(float *)&a2);
      result = (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 31) + 272LL))(
                 *((_QWORD *)this + 31),
                 a2);
      if ( *((_BYTE *)this + 288) )
      {
        GameMode::getInstance();
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
        result = LogicClientAvatar::isInAlliance(PlayerAvatar);
        if ( (result & 1) == 0 )
          return (*(__int64 (__fastcall **)(LogicChallengeCommand *))(*(_QWORD *)this + 360LL))(this);
      }
      return result;
    }

    __int64 __fastcall AllianceInfo::getHasData(LogicChallengeCommand *this)
    {
      return *((unsigned __int8 *)this + 193);
    }

    void __fastcall AllianceInfo::setData(LogicChallengeCommand *this, #1242 *a2)
    {
      Rect *v4; // x0
      Rect *v5; // x21
      Rect AllianceHeaderEntry; // x22
      __int64 AllianceId; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 v9; // x0
      int v10; // w1
      __int64 Instance; // x0
      __int64 Home; // x0
      int SendTeamMailCooldownTime; // w0
      tween::Bounce *v14; // x0
      int v15; // w24
      tween::Bounce *v16; // x0
      int ExpLevel; // w23
      bool v18; // w8
      __int64 v19; // x0
      int v20; // w1
      Rect *v21; // x0
      void *v22; // x0
      Rect *v23; // x23
      #1257 *MovieClip; // x0
      #1257 *MovieClipByName; // x23
      __int64 v26; // x0
      DataIcon *v27; // x24
      const AreaEffectObject *AllianceBadgeData; // x0
      String *Score; // x0
      int v30; // w1
      std::ostream *AllianceType; // x0
      #1308 *v32; // x0
      const char *v33; // x1
      const String *String; // x0
      __int64 TextFieldByName; // x24
      __int64 AllianceDescription; // x0
      #1271 *v37; // x24
      const char *v38; // x1
      const String *v39; // x0
      HashTagCodeGenerator *v40; // x24
      const #1236 *v41; // x0
      String *v42; // x25
      __int64 Region; // x0
      __int64 v44; // x24
      #1308 *TID; // x0
      const String *v46; // x1
      #1308 *v47; // x2
      String *RequiredScore; // x0
      int v49; // w1
      String *Donations; // x0
      int v51; // w1
      __int64 AllianceMembers; // x22
      __int64 v53; // x27
      const char *v54; // x1
      __int64 v55; // x26
      int v56; // w28
      #1373 *v57; // x24
      AllianceJoinRequestOkMessage *v58; // x25
      #1236 *v59; // x0
      long double v60; // q0
      float v61; // [xsp+20h] [xbp-120h]
      #1373 *v62; // [xsp+30h] [xbp-110h] BYREF
      String v63; // [xsp+38h] [xbp-108h] BYREF
      String v64; // [xsp+50h] [xbp-F0h] BYREF
      String v65; // [xsp+68h] [xbp-D8h] BYREF
      String v66; // [xsp+80h] [xbp-C0h] BYREF
      String v67; // [xsp+98h] [xbp-A8h] BYREF
      _BYTE v68[48]; // [xsp+B0h] [xbp-90h] BYREF
    
      if ( !*((_BYTE *)this + 193) && (*(unsigned int (__fastcall **)(#1242 *))(*(_QWORD *)a2 + 40LL))(a2) == 24301 )
      {
        v4 = (Rect *)AllianceDataMessage::removeAllianceFullEntry(a2);
        v5 = v4;
        if ( v4 )
        {
          AllianceHeaderEntry = AllianceFullEntry::getAllianceHeaderEntry(v4);
          AllianceId = AllianceHeaderEntry::getAllianceId(*(_QWORD *)&AllianceHeaderEntry);
          if ( (unsigned int)LogicLong::equals(AllianceId, *((_QWORD *)this + 35)) )
          {
            if ( *((_BYTE *)this + 288) )
            {
              *(_BYTE *)(*((_QWORD *)this + 25) + 8LL) = 1;
              GameMode::getInstance();
              PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
              if ( LogicClientAvatar::isInAlliance(PlayerAvatar) )
              {
                GameMode::getInstance();
                v9 = GameMode::getPlayerAvatar();
                if ( *(_BYTE *)(LogicClientAvatar::getAllianceRoleData(v9, v10) + 105) )
                {
                  *(_BYTE *)(*((_QWORD *)this + 27) + 8LL) = 1;
                  Instance = GameMode::getInstance();
                  Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
                  if ( Home )
                    SendTeamMailCooldownTime = LogicClientHome::getSendTeamMailCooldownTime(Home);
                  else
                    SendTeamMailCooldownTime = 0;
                  (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 27) + 152LL))(
                    *((_QWORD *)this + 27),
                    SendTeamMailCooldownTime > 0);
                }
                GameMode::getInstance();
                v19 = GameMode::getPlayerAvatar();
                if ( *(_BYTE *)(LogicClientAvatar::getAllianceRoleData(v19, v20) + 106) )
                {
                  ByteStream::ByteStream((ByteStream *)v68, 1000);
                  AllianceFullEntry::encode(v5, (#1225 *)v68);
                  ByteStream::setOffset((ByteStream *)v68, 0);
                  v21 = (Rect *)*((_QWORD *)this + 41);
                  if ( v21 )
                  {
                    AllianceFullEntry::destruct(v21);
                    v22 = (void *)*((_QWORD *)this + 41);
                    if ( v22 )
                      operator delete(v22);
                    *((_QWORD *)this + 41) = 0;
                  }
                  v23 = (Rect *)operator new(40);
                  AllianceFullEntry::AllianceFullEntry(v23);
                  *((_QWORD *)this + 41) = v23;
                  AllianceFullEntry::decode(v23, (#1225 *)v68);
                  *(_BYTE *)(*((_QWORD *)this + 26) + 8LL) = 1;
                  ByteStream::destruct((#1225 *)v68);
                }
              }
            }
            else
            {
              GameMode::getInstance();
              v14 = (tween::Bounce *)GameMode::getPlayerAvatar();
              if ( !LogicClientAvatar::isInAlliance(v14) )
              {
                GameMode::getInstance();
                v15 = *(_DWORD *)(GameMode::getPlayerAvatar() + 64);
                GameMode::getInstance();
                v16 = (tween::Bounce *)GameMode::getPlayerAvatar();
                ExpLevel = LogicClientAvatar::getExpLevel(v16);
                if ( (int)AllianceHeaderEntry::getNumberOfMembers(*(_QWORD *)&AllianceHeaderEntry) <= 49
                  && v15 >= (int)AllianceHeaderEntry::getRequiredScore(*(_QWORD *)&AllianceHeaderEntry)
                  && ExpLevel >= *(_DWORD *)(LogicDataTables::getGlobals() + 72) )
                {
                  *(_BYTE *)(*((_QWORD *)this + 28) + 8LL) = (unsigned int)AllianceHeaderEntry::getAllianceType(*(_QWORD *)&AllianceHeaderEntry) == 1;
                  v18 = (unsigned int)AllianceHeaderEntry::getAllianceType(*(_QWORD *)&AllianceHeaderEntry) == 2;
                }
                else
                {
                  v18 = 0;
                  *(_BYTE *)(*((_QWORD *)this + 28) + 8LL) = 0;
                }
                *(_BYTE *)(*((_QWORD *)this + 29) + 8LL) = v18;
              }
            }
            MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
            MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "guild_top_pane");
            if ( AllianceHeaderEntry::getAllianceBadgeData(*(_QWORD *)&AllianceHeaderEntry) )
            {
              v26 = *((_QWORD *)this + 30);
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
              *((_QWORD *)this + 30) = 0;
              v27 = (DataIcon *)operator new(112);
              AllianceBadgeData = (const AreaEffectObject *)AllianceHeaderEntry::getAllianceBadgeData(*(_QWORD *)&AllianceHeaderEntry);
              DataIcon::DataIcon(v27, AllianceBadgeData);
              *((_QWORD *)this + 30) = v27;
              String::String(&v67, "badge");
              DataIcon::replaceInstanceWithIcon(
                (DisplayObject **)v27,
                MovieClipByName,
                &v67,
                1,
                COERCE_LONG_DOUBLE((unsigned __int128)0),
                0,
                1,
                0,
                0);
              String::~String();
              *(_BYTE *)(MovieClip::getMovieClipByName(MovieClipByName, "badge") + 8) = 0;
              *((_QWORD *)this + 40) = AllianceHeaderEntry::getAllianceBadgeData(*(_QWORD *)&AllianceHeaderEntry);
            }
            Score = (String *)AllianceHeaderEntry::getScore(*(_QWORD *)&AllianceHeaderEntry);
            String::valueOf(&v66, Score, v30);
            MovieClip::setText(MovieClipByName, "trophies", &v66);
            String::~String();
            AllianceType = (std::ostream *)AllianceHeaderEntry::getAllianceType(*(_QWORD *)&AllianceHeaderEntry);
            v32 = (#1308 *)AllianceSettings::typeToString(AllianceType);
            String = (const String *)StringTable::getString(v32, v33);
            MovieClip::setText(MovieClipByName, "type", String);
            TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "guild_description");
            if ( TextFieldByName && AllianceFullEntry::getAllianceDescription(v5) )
            {
              AllianceDescription = AllianceFullEntry::getAllianceDescription(v5);
              MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, AllianceDescription, 0);
            }
            v37 = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "guild_name");
            if ( v37 )
            {
              if ( AllianceHeaderEntry::getAllianceName(*(_QWORD *)&AllianceHeaderEntry) )
              {
                AllianceHeaderEntry::getAllianceName(*(_QWORD *)&AllianceHeaderEntry);
                String::operator=((String *)((char *)this + 296));
                MovieClipHelper::setTextAndScaleIfNecessary(v37, (char *)this + 296, 0);
              }
              else
              {
                v39 = (const String *)StringTable::getString((#1308 *)"TID_NO_CLAN", v38);
                TextField::setText(v37, v39);
              }
            }
            if ( MovieClip::getTextFieldByName(MovieClipByName, "guild_tag") )
            {
              v40 = (HashTagCodeGenerator *)operator new(8);
              HashTagCodeGenerator::HashTagCodeGenerator(v40);
              v41 = (const #1236 *)AllianceHeaderEntry::getAllianceId(*(_QWORD *)&AllianceHeaderEntry);
              v42 = (String *)HashTagCodeGenerator::toCode((#1333 **)v40, v41);
              if ( v42 )
              {
                MovieClip::setText(MovieClipByName, "guild_tag", v42);
                String::~String();
                operator delete(v42);
              }
              HashTagCodeGenerator::destruct((String **)v40);
              operator delete(v40);
            }
            Region = AllianceHeaderEntry::getRegion(*(_QWORD *)&AllianceHeaderEntry);
            v44 = Region;
            if ( Region )
            {
              if ( *(_DWORD *)LogicData::getTID(Region) )
              {
                TID = (#1308 *)LogicData::getTID(v44);
                v47 = StringTable::getString(TID, v46);
              }
              else
              {
                v47 = (#1308 *)(v44 + 104);
              }
              MovieClip::setText(MovieClipByName, "guild_location", (const String *)v47);
            }
            RequiredScore = (String *)AllianceHeaderEntry::getRequiredScore(*(_QWORD *)&AllianceHeaderEntry);
            String::valueOf(&v65, RequiredScore, v49);
            MovieClip::setText(MovieClipByName, "required_trophie", &v65);
            String::~String();
            Donations = (String *)AllianceHeaderEntry::getDonations(*(_QWORD *)&AllianceHeaderEntry);
            String::valueOf(&v64, Donations, v51);
            MovieClip::setText(MovieClipByName, "donations", &v64);
            String::~String();
            AllianceMembers = AllianceFullEntry::getAllianceMembers(v5);
            v53 = *(int *)(AllianceMembers + 12);
            String::format((String *)"%d/%d", v54, v53, 50);
            MovieClip::setText(MovieClipByName, "member_count", &v63);
            v55 = 0;
            v56 = 0;
            v61 = 0.0;
            while ( v55 < v53 )
            {
              v57 = (#1373 *)operator new(280);
              v58 = *(AllianceJoinRequestOkMessage **)(*(_QWORD *)AllianceMembers + 8 * v55);
              v59 = (#1236 *)LogicLong::clone(*((_QWORD *)this + 35));
              AllianceMemberItem::AllianceMemberItem(v57, v58, ++v55, v59);
              v62 = v57;
              if ( (_DWORD)v55 == 1 )
                LODWORD(v61) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(#1373 *))*(_QWORD *)(*(_QWORD *)v57 + 96LL))(v57));
              else
                v56 += (int)(float)(v61 * 0.5) + 1;
              *(__n128 *)&v60 = DisplayObject::setXY(v57, 0.0, (float)v56);
              std::vector<AllianceMemberItem *>::push_back((char *)this + 256, &v62, v60);
              v56 += (int)(float)(v61 * 0.5) + 1;
              ScrollArea::addContent(*((#1253 **)this + 31), v57);
            }
            ScrollArea::updateBounds(*((ScrollArea **)this + 31));
            AllianceDataMessage::setAllianceFullEntry((__int64)a2, v5);
            *((_BYTE *)this + 8) = 1;
            *((_BYTE *)this + 193) = 1;
            String::~String();
          }
        }
      }
    }

    void *__fastcall AllianceInfo::getTitleText(__int64 a1, const char *a2)
    {
      return StringTable::getString((#1308 *)"TID_TITLE_ALLIANCE", a2);
    }

}; // end class AllianceInfo
