class PlayerInfo
{
public:

    void __fastcall PlayerInfo::PlayerInfo(PlayerInfo *this, #1236 *a2)
    {
      VisitHomeMessage *v4; // x21
      __int64 v5; // x0
      MovieClip *v6; // x20
      const char *v7; // x1
      const String *String; // x0
      MovieClip *v9; // x20
      const char *v10; // x1
      const String *v11; // x0
      MovieClip *v12; // x20
      const char *v13; // x1
      const String *v14; // x0
      MovieClip *v15; // x20
      const char *v16; // x1
      const String *v17; // x0
      String v18; // [xsp+0h] [xbp-50h] BYREF
      String v19; // [xsp+18h] [xbp-38h] BYREF
    
      String::String(&v19, "sc/ui.sc");
      String::String(&v18, "popup_profile_new");
      AllianceScreen::AllianceScreen(this, 2, &v19, &v18);
      String::~String(&v18);
      String::~String(&v19);
      *(_QWORD *)this = off_100463908;
      *((_QWORD *)this + 12) = &off_100463A98;
      memset((char *)this + 200, 0, 0x88u);
      *((_QWORD *)this + 37) = a2;
      v4 = (VisitHomeMessage *)operator new(80);
      VisitHomeMessage::VisitHomeMessage(v4);
      v5 = LogicLong::clone(a2);
      VisitHomeMessage::setHomeId((__int64)v4, v5);
      MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v4);
      *((_BYTE *)this + 192) = 1;
      *((_QWORD *)this + 27) = DropGUIContainer::addGameButton(this, "kick_button", 1);
      *((_QWORD *)this + 26) = DropGUIContainer::addGameButton(this, "promote_button", 1);
      *((_QWORD *)this + 28) = DropGUIContainer::addGameButton(this, "view_guild_button", 1);
      *((_QWORD *)this + 29) = DropGUIContainer::addGameButton(this, "invite_button", 1);
      v6 = *(MovieClip **)(*((_QWORD *)this + 27) + 96LL);
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_DEMOTE", v7);
      MovieClip::setText(v6, "txt", String);
      v9 = *(MovieClip **)(*((_QWORD *)this + 26) + 96LL);
      v11 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_PROMOTE", v10);
      MovieClip::setText(v9, "txt", v11);
      v12 = *(MovieClip **)(*((_QWORD *)this + 28) + 96LL);
      v14 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_VIEW_ALLIANCE", v13);
      MovieClip::setText(v12, "txt", v14);
      v15 = *(MovieClip **)(*((_QWORD *)this + 29) + 96LL);
      v17 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_INVITE", v16);
      MovieClip::setText(v15, "txt", v17);
      *(_BYTE *)(*((_QWORD *)this + 27) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 26) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 29) + 8LL) = 0;
    }

    // attributes: thunk
    void __fastcall PlayerInfo::PlayerInfo(PlayerInfo *this, #1236 *a2)
    {
      __ZN10PlayerInfoC2EP9LogicLong(this, a2);
    }

    void __fastcall PlayerInfo::~PlayerInfo(LogicDeviceLinkMenuClosedMessage *this)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      unsigned __int64 v4; // x10
      unsigned int v5; // w20
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 v11; // x8
      __int64 v12; // x9
      unsigned __int64 v13; // x10
      unsigned int v14; // w20
      __int64 v15; // x0
      __int64 *v16; // x21
      #1146 *v17; // x0
      __int64 v18; // x20
      __int64 v19; // x0
      __int64 v20; // x0
      __int64 v21; // x0
      __int64 v22; // x0
      __int64 v23; // x0
      void *v24; // x0
      void *v25; // x0
      void *v26; // x0
      __int64 v27; // x0
      AllianceJoinRequestOkMessage *v28; // x0
      void *v29; // x0
      void *v30; // x0
      void *v31; // x0
    
      *(_QWORD *)this = off_100463908;
      *((_QWORD *)this + 12) = &off_100463A98;
      v2 = *((_QWORD *)this + 33);
      v3 = *((_QWORD *)this + 34);
      if ( v3 != v2 )
      {
        v4 = 0;
        v5 = 1;
        do
        {
          v6 = *(_QWORD *)(v2 + 8 * v4);
          if ( v6 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
            v2 = *((_QWORD *)this + 33);
            v3 = *((_QWORD *)this + 34);
          }
          v4 = v5++;
        }
        while ( v4 < (v3 - v2) >> 3 );
      }
      v7 = *((_QWORD *)this + 27);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_QWORD *)this + 27) = 0;
      v8 = *((_QWORD *)this + 26);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *((_QWORD *)this + 26) = 0;
      v9 = *((_QWORD *)this + 28);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *((_QWORD *)this + 28) = 0;
      v10 = *((_QWORD *)this + 29);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *((_QWORD *)this + 29) = 0;
      v11 = *((_QWORD *)this + 30);
      v12 = *((_QWORD *)this + 31);
      if ( v12 != v11 )
      {
        v13 = 0;
        v14 = 1;
        do
        {
          v15 = *(_QWORD *)(v11 + 8 * v13);
          if ( v15 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
            v11 = *((_QWORD *)this + 30);
            v12 = *((_QWORD *)this + 31);
          }
          v13 = v14++;
        }
        while ( v13 < (v12 - v11) >> 3 );
      }
      *((_QWORD *)this + 31) = v11;
      v16 = (__int64 *)((char *)this + 288);
      v17 = (#1146 *)*((_QWORD *)this + 36);
      if ( v17 )
      {
        LogicClientHome::destruct(v17);
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *(_QWORD *)(v18 + 376);
          if ( v19 )
            operator delete[](v19);
          *(_QWORD *)(v18 + 376) = 0;
          *(_QWORD *)(v18 + 384) = 0;
          String::~String((String *)(v18 + 352));
          v20 = *(_QWORD *)(v18 + 264);
          if ( v20 )
            operator delete[](v20);
          *(_QWORD *)(v18 + 264) = 0;
          *(_QWORD *)(v18 + 272) = 0;
          v21 = *(_QWORD *)(v18 + 104);
          if ( v21 )
            operator delete[](v21);
          *(_QWORD *)(v18 + 104) = 0;
          *(_QWORD *)(v18 + 112) = 0;
          v22 = *(_QWORD *)(v18 + 40);
          if ( v22 )
            operator delete[](v22);
          *(_QWORD *)(v18 + 40) = 0;
          *(_QWORD *)(v18 + 48) = 0;
          v23 = *(_QWORD *)(v18 + 24);
          if ( v23 )
            operator delete[](v23);
          operator delete((void *)v18);
        }
        *v16 = 0;
      }
      v24 = (void *)*((_QWORD *)this + 37);
      if ( v24 )
        operator delete(v24);
      *((_QWORD *)this + 37) = 0;
      v25 = (void *)*((_QWORD *)this + 38);
      if ( v25 )
        operator delete(v25);
      *((_QWORD *)this + 38) = 0;
      v26 = (void *)*((_QWORD *)this + 39);
      if ( v26 )
        operator delete(v26);
      *((_QWORD *)this + 39) = 0;
      v27 = *((_QWORD *)this + 40);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      *((_QWORD *)this + 40) = 0;
      v28 = (AllianceJoinRequestOkMessage *)*((_QWORD *)this + 41);
      if ( v28 )
      {
        AllianceMemberEntry::destruct(v28);
        v29 = (void *)*((_QWORD *)this + 41);
        if ( v29 )
          operator delete(v29);
        *((_QWORD *)this + 41) = 0;
      }
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      *v16 = 0;
      *((_QWORD *)this + 37) = 0;
      v30 = (void *)*((_QWORD *)this + 33);
      if ( v30 )
        operator delete(v30);
      v31 = (void *)*((_QWORD *)this + 30);
      if ( v31 )
        operator delete(v31);
      AllianceScreen::~AllianceScreen(this);
    }

    // attributes: thunk
    void __fastcall PlayerInfo::~PlayerInfo(LogicDeviceLinkMenuClosedMessage *this)
    {
      __ZN10PlayerInfoD2Ev(this);
    }

    void __fastcall PlayerInfo::~PlayerInfo(LogicDeviceLinkMenuClosedMessage *this)
    {
      PlayerInfo::~PlayerInfo(this);
      operator delete(this);
    }

    __int64 __fastcall PlayerInfo::update(LogicDeviceLinkMenuClosedMessage *this, float a2)
    {
      char v3; // w20
      __int64 result; // x0
    
      AllianceScreen::update(this, a2);
      v3 = *((_BYTE *)this + 193);
      result = GUIContainer::getMovieClip(this);
      *(_BYTE *)(result + 8) = v3;
      return result;
    }

    void __fastcall PlayerInfo::buttonClicked(LogicDeviceLinkMenuClosedMessage *this, #1251 *a2)
    {
      __int64 v4; // x8
      __int64 v5; // x9
      unsigned __int64 v6; // x21
      unsigned int v7; // w10
      SendAllianceInvitationMessage *v8; // x21
      LogicLong *v9; // x0
      AllianceJoinRequestOkMessage *v10; // x0
      int Role; // w0
      int v12; // w21
      ChangeAllianceMemberRoleMessage *v13; // x20
      LogicLong *v14; // x0
      StarHud *HigherRole; // x21
      const char *v16; // x1
      const String *v17; // x0
      __int64 v18; // x0
      int v19; // w1
      #1308 *v20; // x0
      const char *v21; // x1
      void *v22; // x0
      DisplayObject *v23; // x21
      const char *v24; // x1
      void *v25; // x0
      BadgePopup *v26; // x0
      __int64 v27; // x0
      vm_address_t *Instance; // x0
      __int64 v29; // x0
      #1054 *PopupByType; // x0
      const #1236 *v31; // x1
      LogicKickAllianceMemberCommand *v32; // x21
      String *v33; // x20
      const char *v34; // x1
      const String *String; // x0
      LogicLong *v36; // x0
      ConfirmPopup *v37; // x20
      const char *v38; // x1
      const String *v39; // x22
      const char *v40; // x1
      void *v41; // x23
      __int64 Name; // x0
      BadgePopup *v43; // x0
      __int64 v44; // x0
      ChangeAllianceMemberRoleMessage *v45; // x20
      LogicLong *v46; // x0
      StarHud *LowerRole; // x21
      const char *v48; // x1
      const String *v49; // x0
      __int64 v50; // x0
      int v51; // w1
      #1308 *RoleTid; // x0
      const char *v53; // x1
      void *v54; // x0
      DisplayObject *v55; // x21
      const char *v56; // x1
      void *v57; // x0
      BadgePopup *v58; // x0
      __int64 v59; // x0
      String v60; // [xsp+0h] [xbp-150h] BYREF
      String v61; // [xsp+18h] [xbp-138h] BYREF
      String v62; // [xsp+30h] [xbp-120h] BYREF
      String v63; // [xsp+48h] [xbp-108h] BYREF
      String v64; // [xsp+60h] [xbp-F0h] BYREF
      String v65; // [xsp+78h] [xbp-D8h] BYREF
      String v66; // [xsp+90h] [xbp-C0h] BYREF
      String v67; // [xsp+A8h] [xbp-A8h] BYREF
      String v68; // [xsp+C0h] [xbp-90h] BYREF
      String v69; // [xsp+D8h] [xbp-78h] BYREF
      String v70; // [xsp+F0h] [xbp-60h] BYREF
      String v71; // [xsp+108h] [xbp-48h] BYREF
    
      v4 = *((_QWORD *)this + 30);
      v5 = *((_QWORD *)this + 31) - v4;
      if ( v5 )
      {
        v6 = 0;
        v7 = 1;
        while ( *(#1251 **)(v4 + 8 * v6) != a2 )
        {
          v6 = v7++;
          if ( v6 >= v5 >> 3 )
            goto LABEL_5;
        }
        Instance = (vm_address_t *)GUI::getInstance(this);
        GUI::openSpellInfo(Instance, *(const TextField **)(*(_QWORD *)(*((_QWORD *)this + 30) + 8 * v6) + 304LL), 0);
      }
      else
      {
    LABEL_5:
        if ( *((#1251 **)this + 28) == a2 )
        {
          v29 = GUI::getInstance(this);
          PopupByType = (#1054 *)GUI::getPopupByType(v29, 22);
          if ( PopupByType )
          {
            v31 = (const #1236 *)*((_QWORD *)this + 39);
            if ( v31 )
              AlliancePopup::pushAllianceInfo(PopupByType, v31);
          }
        }
        else
        {
          if ( *((#1251 **)this + 29) == a2 )
          {
            v8 = (SendAllianceInvitationMessage *)operator new(80);
            SendAllianceInvitationMessage::SendAllianceInvitationMessage(v8);
            v9 = (LogicLong *)LogicLong::clone(*((_QWORD *)this + 38));
            SendAllianceInvitationMessage::setAvatarId(v8, v9);
            MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v8);
          }
          v10 = (AllianceJoinRequestOkMessage *)*((_QWORD *)this + 41);
          if ( v10 )
          {
            Role = AllianceMemberEntry::getRole(v10);
            v12 = Role;
            if ( *((#1251 **)this + 27) == a2 )
            {
              if ( Role == 1 )
              {
                v32 = (LogicKickAllianceMemberCommand *)operator new(48);
                LogicKickAllianceMemberCommand::LogicKickAllianceMemberCommand(v32);
                v33 = (String *)operator new(24);
                String = (const String *)StringTable::getString((#1308 *)"TID_KICK_OUT_DEFAULT_REASON", v34);
                String::String(v33, String);
                LogicKickAllianceMemberCommand::setMessage(v32, v33);
                v36 = (LogicLong *)LogicLong::clone(*((_QWORD *)this + 38));
                LogicKickAllianceMemberCommand::setAvatarId(v32, v36);
                v37 = (ConfirmPopup *)operator new(384);
                v39 = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_KICK_TITLE", v38);
                v41 = StringTable::getString((#1308 *)"TID_ALLIANCE_KICK_CONFIRMATION", v40);
                String::String(&v70, "<name>");
                Name = AllianceMemberEntry::getName(*((AllianceJoinRequestOkMessage **)this + 41));
                String::replace(&v71, v41, &v70, Name);
                ConfirmPopup::ConfirmPopup(v37, 21, v32, v39, &v71);
                String::~String(&v71);
                String::~String(&v70);
                v44 = GUI::getInstance(v43);
                GUI::showPopup(v44, v37, 1, 0, 0);
              }
              else
              {
                v45 = (ChangeAllianceMemberRoleMessage *)operator new(88);
                ChangeAllianceMemberRoleMessage::ChangeAllianceMemberRoleMessage(v45);
                v46 = (LogicLong *)LogicLong::clone(*((_QWORD *)this + 38));
                ChangeAllianceMemberRoleMessage::setMemberAvatarId(v45, v46);
                LowerRole = (StarHud *)getLowerRole(v12);
                ChangeAllianceMemberRoleMessage::setNewRole(v45, (int)LowerRole);
                v49 = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_DEMOTE_CONFIRMATION", v48);
                String::String(&v69, v49);
                String::String(&v67, "<name>");
                v50 = AllianceMemberEntry::getName(*((AllianceJoinRequestOkMessage **)this + 41));
                String::replace(&v68, &v69, &v67, v50);
                String::operator=(&v69);
                String::~String(&v68);
                String::~String(&v67);
                String::String(&v65, "<role>");
                RoleTid = (#1308 *)StreamItem::getRoleTid(LowerRole, v51);
                v54 = StringTable::getString(RoleTid, v53);
                String::replace(&v66, &v69, &v65, v54);
                String::operator=(&v69);
                String::~String(&v66);
                String::~String(&v65);
                v55 = (DisplayObject *)operator new(384);
                v57 = StringTable::getString((#1308 *)"TID_ALLIANCE_DEMOTE_TITLE", v56);
                v58 = (BadgePopup *)ConfirmPopup::ConfirmPopup(v55, 19, v45, v57, &v69);
                v59 = GUI::getInstance(v58);
                GUI::showPopup(v59, v55, 1, 0, 0);
                String::~String(&v69);
              }
            }
            else if ( Role != 2 && *((#1251 **)this + 26) == a2 )
            {
              v13 = (ChangeAllianceMemberRoleMessage *)operator new(88);
              ChangeAllianceMemberRoleMessage::ChangeAllianceMemberRoleMessage(v13);
              v14 = (LogicLong *)LogicLong::clone(*((_QWORD *)this + 38));
              ChangeAllianceMemberRoleMessage::setMemberAvatarId(v13, v14);
              HigherRole = (StarHud *)getHigherRole(v12);
              ChangeAllianceMemberRoleMessage::setNewRole(v13, (int)HigherRole);
              v17 = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_PROMOTE_CONFIRMATION", v16);
              String::String(&v64, v17);
              String::String(&v62, "<name>");
              v18 = AllianceMemberEntry::getName(*((AllianceJoinRequestOkMessage **)this + 41));
              String::replace(&v63, &v64, &v62, v18);
              String::operator=(&v64);
              String::~String(&v63);
              String::~String(&v62);
              String::String(&v60, "<role>");
              v20 = (#1308 *)StreamItem::getRoleTid(HigherRole, v19);
              v22 = StringTable::getString(v20, v21);
              String::replace(&v61, &v64, &v60, v22);
              String::operator=(&v64);
              String::~String(&v61);
              String::~String(&v60);
              v23 = (DisplayObject *)operator new(384);
              v25 = StringTable::getString((#1308 *)"TID_ALLIANCE_PROMOTE_TITLE", v24);
              v26 = (BadgePopup *)ConfirmPopup::ConfirmPopup(v23, 20, v13, v25, &v64);
              v27 = GUI::getInstance(v26);
              GUI::showPopup(v27, v23, 1, 0, 0);
              String::~String(&v64);
            }
          }
        }
      }
    }

    __int64 __fastcall PlayerInfo::getHasData(LogicDeviceLinkMenuClosedMessage *this)
    {
      return *((unsigned __int8 *)this + 193);
    }

    void __fastcall PlayerInfo::setData(LogicDeviceLinkMenuClosedMessage *this, #1242 *a2)
    {
      __int64 v4; // x0
      #1146 *v5; // x27
      __int64 v6; // x22
      __int64 Id; // x0
      __int64 v8; // x23
      _BOOL4 v9; // w20
      tween::Bounce *v10; // x22
      __int64 v11; // x0
      const char *v12; // x1
      __int64 AllianceId; // x0
      __int64 AllianceRoleData; // x0
      const char *v15; // x1
      __int64 v16; // x0
      tween::Bounce *v17; // x0
      __int64 Instance; // x0
      __int64 PlayerAvatar; // x0
      bool v20; // w8
      __int64 v21; // x0
      __int64 v22; // x0
      ChangeAllianceMemberRoleMessage *AllianceRole; // x23
      __int64 Role; // x0
      const char *v25; // x1
      __int64 v26; // x24
      MovieClip *v27; // x25
      const String *String; // x0
      int LowerRole; // w0
      int v30; // w3
      int HigherRole; // w0
      int v32; // w3
      const String *v33; // x0
      vm_address_t *NameSetByUser; // x0
      __int64 v35; // x0
      tween::Bounce *v36; // x0
      __int64 AccountId; // x23
      __int64 v38; // x0
      const char *v39; // x1
      __int64 TextField; // x0
      StarHud *v41; // x0
      int v42; // w1
      #1308 *RoleTid; // x0
      const char *v44; // x1
      const String *v45; // x0
      int BattleCount; // w23
      int WinCount; // w24
      int LoseCount; // w25
      MovieClip *MovieClip; // x26
      int v50; // w0
      MovieClip *v51; // x26
      int v52; // w0
      MovieClip *v53; // x0
      int MaxScore; // w0
      int v55; // w2
      int ThreeCrownWins; // w0
      int CardsFound; // w0
      int TotalDonations; // w0
      __int64 FavouriteSpell; // x0
      #1308 *TID; // x0
      const String *v61; // x1
      #1257 *v62; // x0
      int v63; // w1
      MovieClip *MovieClipByName; // x23
      const char *v65; // x1
      __int64 v66; // x23
      __int64 AllianceName; // x0
      const String *v68; // x0
      __int64 v69; // x0
      HashTagCodeGenerator *v70; // x23
      const LogicLong *v71; // x0
      String *v72; // x24
      MovieClip *v73; // x0
      __int64 Arena; // x23
      #1257 *v75; // x0
      #1249 *v76; // x24
      ResourceManager *IconSWF; // x25
      const String *IconExportName; // x0
      const String *v79; // x2
      #1249 *v80; // x25
      #1257 *v81; // x0
      #1308 *v82; // x0
      const String *v83; // x1
      #1308 *v84; // x0
      #1257 *v85; // x0
      MovieClip *v86; // x23
      int ExpLevel; // w0
      __int64 v88; // x0
      #1271 *TextFieldByName; // x24
      const char *v90; // x2
      AcceptChallengeMessage *SelectedDeck; // x23
      float v92; // s9
      float v93; // s8
      float v94; // s10
      long double v95; // q0
      const char *v96; // x24
      float v97; // s9
      float v98; // s10
      __int64 Spell; // x28
      __int64 v100; // x27
      long double Height; // q0
      void (__fastcall *v102)(__int64); // x28
      long double v103; // q0
      float v104; // s8
      float v105; // s0
      float v106; // s8
      __int64 v107; // x0
      #1364 *ExpLevelData; // x0
      int SummonerLevel; // w23
      __int64 v110; // x0
      LogicDataTables *v111; // x24
      const #1025 *SummonerData; // x0
      __int64 v113; // x0
      LogicDataTables *v114; // x24
      const #1025 *PrincessTowerData; // x0
      const AreaEffectObject *AllianceBadge; // x21
      __int64 v117; // x0
      DataIcon *v118; // x22
      #1257 *v119; // x0
      DisplayObject **v120; // x21
      #1257 *v121; // x22
      #1146 *v122; // [xsp+10h] [xbp-100h]
      String v123; // [xsp+18h] [xbp-F8h] BYREF
      __int64 v124; // [xsp+30h] [xbp-E0h] BYREF
      Rect v125[2]; // [xsp+38h] [xbp-D8h] BYREF
      String v126; // [xsp+48h] [xbp-C8h] BYREF
      String v127; // [xsp+60h] [xbp-B0h] BYREF
      String v128; // [xsp+78h] [xbp-98h] BYREF
    
      if ( !*((_BYTE *)this + 193) && (*(unsigned int (__fastcall **)(#1242 *))(*(_QWORD *)a2 + 40LL))(a2) == 24113 )
      {
        v4 = VisitedHomeDataMessage::removeLogicClientHome(a2);
        v5 = (#1146 *)v4;
        if ( !v4 || (v6 = *((_QWORD *)this + 37), Id = LogicClientHome::getId(v4), !(unsigned int)LogicLong::equals(v6, Id)) )
        {
    LABEL_55:
          *((_QWORD *)this + 36) = v5;
          return;
        }
        *(_BYTE *)(GUIContainer::getMovieClip(this) + 64) = 1;
        v8 = *((_QWORD *)this + 41);
        v9 = v8 != 0;
        *(_BYTE *)(*((_QWORD *)this + 27) + 8LL) = v9;
        *(_BYTE *)(*((_QWORD *)this + 26) + 8LL) = v9;
        v10 = (tween::Bounce *)VisitedHomeDataMessage::removeOwnerLogicClientAvatar(a2);
        v11 = LogicClientAvatar::getId(v10);
        *((_QWORD *)this + 38) = LogicLong::clone(v11);
        if ( (unsigned int)LogicClientAvatar::isInAlliance(v10) )
        {
          AllianceId = LogicClientAvatar::getAllianceId(v10);
          *((_QWORD *)this + 39) = LogicLong::clone(AllianceId);
        }
        else
        {
          if ( v8 )
            Debugger::warning((__siginfo *)"Fellow alliance member is not in any allience!", v12);
          v9 = 0;
        }
        *(_BYTE *)(*((_QWORD *)this + 28) + 8LL) = LogicClientAvatar::isInAlliance(v10);
        AllianceRoleData = LogicClientAvatar::isInAlliance(v10);
        if ( (AllianceRoleData & 1) != 0
          || (v16 = GameMode::getInstance((vm_address_t *)AllianceRoleData),
              v17 = (tween::Bounce *)GameMode::getPlayerAvatar(v16),
              AllianceRoleData = LogicClientAvatar::isInAlliance(v17),
              !(_DWORD)AllianceRoleData) )
        {
          v20 = 0;
        }
        else
        {
          Instance = GameMode::getInstance((vm_address_t *)AllianceRoleData);
          PlayerAvatar = GameMode::getPlayerAvatar(Instance);
          AllianceRoleData = LogicClientAvatar::getAllianceRoleData(PlayerAvatar);
          v20 = *(_BYTE *)(AllianceRoleData + 104) != 0;
        }
        *(_BYTE *)(*((_QWORD *)this + 29) + 8LL) = v20;
        if ( v9 )
        {
          v21 = GameMode::getInstance((vm_address_t *)AllianceRoleData);
          v22 = GameMode::getPlayerAvatar(v21);
          AllianceRole = (ChangeAllianceMemberRoleMessage *)LogicClientAvatar::getAllianceRole(v22);
          Role = AllianceMemberEntry::getRole(*((AllianceJoinRequestOkMessage **)this + 41));
          v26 = Role;
          if ( (_DWORD)Role == 1 )
          {
            v27 = *(MovieClip **)(*((_QWORD *)this + 27) + 96LL);
            String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_KICK", v25);
            MovieClip::setText(v27, "txt", String);
            *(_BYTE *)(*((_QWORD *)this + 27) + 8LL) = (unsigned int)((_DWORD)AllianceRole - 2) < 3;
    LABEL_19:
            HigherRole = getHigherRole(v26, v15);
            *(_BYTE *)(*((_QWORD *)this + 26) + 8LL) = ChangeAllianceMemberRoleMessage::hasRights(
                                                         AllianceRole,
                                                         v26,
                                                         HigherRole,
                                                         v32);
            goto LABEL_20;
          }
          LowerRole = getLowerRole(Role, v25);
          *(_BYTE *)(*((_QWORD *)this + 27) + 8LL) = ChangeAllianceMemberRoleMessage::hasRights(
                                                       AllianceRole,
                                                       v26,
                                                       LowerRole,
                                                       v30);
          if ( (_DWORD)v26 != 2 )
            goto LABEL_19;
          *(_BYTE *)(*((_QWORD *)this + 26) + 8LL) = 0;
        }
    LABEL_20:
        v33 = (const String *)StringTable::getString((#1308 *)"TID_NAME_NOT_SET", v15);
        String::String(&v128, v33);
        NameSetByUser = (vm_address_t *)LogicClientAvatar::getNameSetByUser(v10);
        if ( (_DWORD)NameSetByUser )
        {
          LogicClientAvatar::getName(v10);
          String::operator=(&v128);
        }
        else
        {
          v35 = GameMode::getInstance(NameSetByUser);
          v36 = (tween::Bounce *)GameMode::getPlayerAvatar(v35);
          AccountId = LogicClientAvatar::getAccountId(v36);
          v38 = LogicClientAvatar::getAccountId(v10);
          if ( (unsigned int)LogicLong::equals(AccountId, v38) )
          {
            StringTable::getString((#1308 *)"TID_YOU", v39);
            String::operator=(&v128);
          }
        }
        TextField = GUIContainer::getTextField(this, "player_name");
        if ( TextField )
          MovieClipHelper::setTextAndScaleIfNecessary(TextField, &v128, 0);
        v41 = (StarHud *)LogicClientAvatar::getAllianceRole(v10);
        if ( (_DWORD)v41 )
        {
          RoleTid = (#1308 *)StreamItem::getRoleTid(v41, v42);
          v45 = (const String *)StringTable::getString(RoleTid, v44);
          GUIContainer::setText(this, "member", v45, 1);
        }
        BattleCount = LogicClientAvatar::getBattleCount(v10);
        WinCount = LogicClientAvatar::getWinCount(v10);
        LoseCount = LogicClientAvatar::getLoseCount(v10);
        MovieClip = (MovieClip *)GUIContainer::getMovieClip(this);
        v50 = LogicClientAvatar::getWinCount(v10);
        MovieClip::setNumberText(MovieClip, "wins", v50, 0);
        v51 = (MovieClip *)GUIContainer::getMovieClip(this);
        v52 = LogicClientAvatar::getLoseCount(v10);
        MovieClip::setNumberText(v51, "loses", v52, 0);
        v53 = (MovieClip *)GUIContainer::getMovieClip(this);
        MovieClip::setNumberText(v53, "draws", BattleCount - WinCount - LoseCount, 0);
        MaxScore = LogicClientAvatar::getMaxScore(v10);
        v55 = *((_DWORD *)v10 + 16);
        if ( MaxScore > v55 )
          v55 = LogicClientAvatar::getMaxScore(v10);
        GUIContainer::setNumberText(this, "highest_trophies", v55, 0);
        ThreeCrownWins = LogicClientAvatar::getThreeCrownWins(v10);
        GUIContainer::setNumberText(this, "three_crown_wins", ThreeCrownWins, 0);
        CardsFound = LogicClientAvatar::getCardsFound(v10);
        GUIContainer::setNumberText(this, "cards_found", CardsFound, 0);
        TotalDonations = LogicClientAvatar::getTotalDonations(v10);
        GUIContainer::setNumberText(this, "card_donated", TotalDonations, 0);
        String::String(&v127, "-");
        FavouriteSpell = LogicClientAvatar::getFavouriteSpell(v10);
        if ( FavouriteSpell )
        {
          TID = (#1308 *)LogicData::getTID(FavouriteSpell);
          StringTable::getString(TID, v61);
          String::operator=(&v127);
        }
        GUIContainer::setText(this, "favourite_card", &v127, 1);
        v62 = (#1257 *)GUIContainer::getMovieClip(this);
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(v62, "trophies");
        if ( MovieClipByName )
        {
          String::valueOf(&v126, (String *)*((unsigned int *)v10 + 16), v63);
          MovieClip::setText(MovieClipByName, "txt", &v126);
          String::~String(&v126);
        }
        if ( *(_DWORD *)LogicClientAvatar::getAllianceName(v10) )
        {
          v66 = GUIContainer::getTextField(this, "guild_name");
          if ( v66 )
          {
            AllianceName = LogicClientAvatar::getAllianceName(v10);
            MovieClipHelper::setTextAndScaleIfNecessary(v66, AllianceName, 0);
          }
        }
        else
        {
          v68 = (const String *)StringTable::getString((#1308 *)"TID_NO_CLAN", v65);
          GUIContainer::setText(this, "guild_name", v68, 1);
        }
        v69 = GUIContainer::getMovieClip(this);
        if ( MovieClip::getTextFieldByName(v69, "player_hashtag") )
        {
          v70 = (HashTagCodeGenerator *)operator new(8);
          HashTagCodeGenerator::HashTagCodeGenerator(v70);
          v71 = (const LogicLong *)LogicClientAvatar::getId(v10);
          v72 = (String *)HashTagCodeGenerator::toCode(v70, v71);
          if ( v72 )
          {
            v73 = (MovieClip *)GUIContainer::getMovieClip(this);
            MovieClip::setText(v73, "player_hashtag", v72);
            String::~String(v72);
            operator delete(v72);
          }
          HashTagCodeGenerator::destruct(v70);
          operator delete(v70);
        }
        Arena = LogicClientAvatar::getArena(v10);
        v75 = (#1257 *)GUIContainer::getMovieClip(this);
        v76 = (#1249 *)MovieClip::getMovieClipByName(v75, "arena_graphic");
        if ( v76 )
        {
          IconSWF = (ResourceManager *)LogicData::getIconSWF(Arena);
          IconExportName = (const String *)LogicData::getIconExportName(Arena);
          v80 = (#1249 *)ResourceManager::getMovieClip(IconSWF, IconExportName, v79);
          v81 = (#1257 *)GUIContainer::getMovieClip(this);
          MovieClip::changeTimelineChild(v81, v76, v80);
          (*(void (__fastcall **)(#1249 *))(*(_QWORD *)v76 + 8LL))(v76);
        }
        v82 = (#1308 *)LogicData::getTID(Arena);
        v84 = StringTable::getString(v82, v83);
        GUIContainer::setText(this, "arena", (const String *)v84, 1);
        v85 = (#1257 *)GUIContainer::getMovieClip(this);
        v86 = (MovieClip *)MovieClip::getMovieClipByName(v85, "xp_level");
        if ( v86 )
        {
          ExpLevel = LogicClientAvatar::getExpLevel(v10);
          MovieClip::setNumberText(v86, "txt", ExpLevel, 0);
        }
        v88 = GUIContainer::getMovieClip(this);
        TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v88, "card_area");
        Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v90);
        Rect::Rect(v125);
        TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v125);
        SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(v5);
        v92 = *(float *)&v125[0].top;
        v93 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName)));
        v94 = *(float *)&v125[0].bottom;
        v95 = DisplayObject::getY(TextFieldByName);
        v122 = v5;
        v96 = 0;
        v97 = v92 + v93;
        v98 = v94 + *(float *)&v95;
        do
        {
          Spell = LogicSpellDeck::getSpell(SelectedDeck, v96);
          if ( Spell )
          {
            v100 = operator new(464);
            SpellItem::SpellItem(v100, Spell, 7, 0);
            v124 = v100;
            *(_BYTE *)(v100 + 64) = 1;
            Height = Rect::getHeight(v125);
            DisplayObject::setHeight((#1249 *)v100, *(float *)&Height);
            v102 = *(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 48LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 72LL))(v100);
            v102(v100);
            v103 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v100 + 88LL))(v100);
            v104 = *(float *)&v103;
            v105 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v100 + 96LL))(v100);
            DisplayObject::setPixelSnappedXY((DisplayObject *)v100, v97 + (float)(v104 * 0.5), v98 + (float)(v105 * 0.5));
            CustomButton::setButtonListener(v100, (char *)this + 96);
            v106 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v125)));
            std::vector<SpellItem *>::push_back((__int64)this + 240, &v124);
            v107 = GUIContainer::getMovieClip(this);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v107 + 160LL))(v107, v100);
            v97 = v97 + (float)(v106 * 0.125);
          }
          v96 = (const char *)(unsigned int)((_DWORD)v96 + 1);
        }
        while ( (int)v96 < 8 );
        ExpLevelData = (#1364 *)LogicClientAvatar::getExpLevelData(v10);
        v5 = v122;
        SummonerLevel = LogicExpLevelData::getSummonerLevel(ExpLevelData);
        v110 = GUIContainer::getMovieClip(this);
        v111 = (LogicDataTables *)MovieClip::getTextFieldByName(v110, "stat_area_wizard");
        SummonerData = (const #1025 *)LogicDataTables::getSummonerData(v111);
        PlayerInfo::addStats(this, v111, SummonerData, --SummonerLevel);
        v113 = GUIContainer::getMovieClip(this);
        v114 = (LogicDataTables *)MovieClip::getTextFieldByName(v113, "stat_area_tower");
        PrincessTowerData = (const #1025 *)LogicDataTables::getPrincessTowerData(v114);
        PlayerInfo::addStats(this, v114, PrincessTowerData, SummonerLevel);
        VisitedHomeDataMessage::setOwnerLogicClientAvatar((__int64)a2, (__int64)v10);
        AllianceBadge = (const AreaEffectObject *)LogicClientAvatar::getAllianceBadge(v10);
        if ( AllianceBadge )
        {
          v117 = *((_QWORD *)this + 40);
          if ( v117 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v117 + 8LL))(v117);
          *((_QWORD *)this + 40) = 0;
          v118 = (DataIcon *)operator new(112);
          DataIcon::DataIcon(v118, AllianceBadge);
          *((_QWORD *)this + 40) = v118;
          v119 = (#1257 *)GUIContainer::getMovieClip(this);
          *(_BYTE *)(MovieClip::getMovieClipByName(v119, "guild_badge") + 8) = 0;
          v120 = (DisplayObject **)*((_QWORD *)this + 40);
          v121 = (#1257 *)GUIContainer::getMovieClip(this);
          String::String(&v123, "guild_badge");
          DataIcon::replaceInstanceWithIcon(v120, v121, &v123, 0, COERCE_LONG_DOUBLE((unsigned __int128)0), 0, 1, 1, 0);
          String::~String(&v123);
        }
        *((_BYTE *)this + 193) = 1;
        Rect::~Rect(v125);
        String::~String(&v127);
        String::~String(&v128);
        goto LABEL_55;
      }
    }

    void __fastcall PlayerInfo::addStats(
            LogicDeviceLinkMenuClosedMessage *this,
            const #1271 *a2,
            const #1025 *a3,
            __int64 a4)
    {
      float v8; // s14
      float v9; // s10
      float v10; // s8
      float v11; // s13
      float v12; // s15
      float v13; // s11
      float v14; // s12
      long double v15; // q0
      float v16; // s9
      const char *v17; // x1
      const String *String; // x0
      __int64 Hitpoints; // x0
      const char *v20; // x1
      DisplayObject *v21; // x22
      float v22; // s10
      float v23; // s13
      char *v24; // x22
      const char *v25; // x1
      const String *v26; // x0
      int Range; // w23
      int v28; // w0
      const char *v29; // x1
      DisplayObject *v30; // x23
      float v31; // s11
      const char *v32; // x1
      const String *v33; // x0
      int HitSpeed; // w0
      const char *v35; // x1
      const char *v36; // x1
      String *v37; // x0
      DisplayObject *v38; // x23
      const char *v39; // x1
      const String *v40; // x0
      __int64 Projectile; // x0
      __int64 Damage; // x0
      const char *v43; // x1
      DisplayObject *v44; // x19
      float v45; // [xsp+18h] [xbp-168h]
      float v46; // [xsp+1Ch] [xbp-164h]
      String v47; // [xsp+20h] [xbp-160h] BYREF
      String v48; // [xsp+38h] [xbp-148h] BYREF
      String v49; // [xsp+50h] [xbp-130h] BYREF
      String v50; // [xsp+68h] [xbp-118h] BYREF
      String v51; // [xsp+80h] [xbp-100h] BYREF
      String v52; // [xsp+98h] [xbp-E8h] BYREF
      String v53; // [xsp+B0h] [xbp-D0h] BYREF
      String v54; // [xsp+C8h] [xbp-B8h] BYREF
      String v55; // [xsp+E0h] [xbp-A0h] BYREF
      DisplayObject *v56; // [xsp+F8h] [xbp-88h] BYREF
      Rect v57[2]; // [xsp+100h] [xbp-80h] BYREF
    
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", (const char *)a3);
      Rect::Rect(v57);
      TextField::getTextFieldBounds(a2, (#1261 *)v57);
      v8 = *(float *)&v57[0].top;
      v9 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(a2)));
      v10 = *(float *)&v57[0].bottom;
      v11 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(a2)));
      v12 = *(float *)&v57[0].top;
      LODWORD(v13) = COERCE_UNSIGNED_INT128(DisplayObject::getX(a2));
      LODWORD(v14) = COERCE_UNSIGNED_INT128(Rect::getWidth(v57));
      v46 = *(float *)&v57[0].bottom;
      v15 = DisplayObject::getY(a2);
      v45 = *(float *)&v15;
      LODWORD(v16) = COERCE_UNSIGNED_INT128(Rect::getHeight(v57));
      String = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_HEALTH", v17);
      String::String(&v55, String);
      Hitpoints = LogicCharacterData::getHitpoints(a3, a4);
      String::format((String *)"%d", v20, Hitpoints);
      v21 = (DisplayObject *)PlayerInfo::createStatItem(this, 0, &v55, &v54, 9);
      v56 = v21;
      String::~String(&v54);
      String::~String(&v55);
      v22 = v8 + v9;
      v23 = v10 + v11;
      DisplayObject::setPixelSnappedXY(v21, v22, v23);
      v24 = (char *)this + 264;
      std::vector<MovieClip *>::push_back((char *)this + 264, &v56);
      if ( LogicCharacterData::getProjectile(a3, 0) )
      {
        v26 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_RANGE", v25);
        String::String(&v53, v26);
        Range = LogicCharacterData::getRange(a3);
        v28 = LogicCharacterData::getRange(a3);
        String::format((String *)"%d.%d", v29, (unsigned int)(Range / 1000), (unsigned int)(v28 % 1000 / 100));
        v30 = (DisplayObject *)PlayerInfo::createStatItem(this, 0, &v53, &v52, 3);
        v56 = v30;
        String::~String(&v52);
        String::~String(&v53);
        v31 = (float)(v12 + v13) + (float)(v14 * 0.5);
        DisplayObject::setPixelSnappedXY(v30, v31, v23);
        std::vector<MovieClip *>::push_back((char *)this + 264, &v56);
        v33 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_HIT_SPEED", v32);
        String::String(&v51, v33);
        LODWORD(v30) = LogicCharacterData::getHitSpeed(a3);
        HitSpeed = LogicCharacterData::getHitSpeed(a3);
        String::format((String *)"%d.%d", v35, (unsigned int)((int)v30 / 1000), (unsigned int)(HitSpeed % 1000 / 100));
        v37 = (String *)StringTable::getString((#1308 *)"TID_TIME_SECS", v36);
        operator+((__int64 *)&v50.m_length, &v49, v37);
        v38 = (DisplayObject *)PlayerInfo::createStatItem(this, 1, &v51, &v50, 14);
        v56 = v38;
        String::~String(&v50);
        String::~String(&v49);
        String::~String(&v51);
        DisplayObject::setPixelSnappedXY(v38, v22, (float)(v46 + v45) + (float)(v16 * 0.5));
        std::vector<MovieClip *>::push_back((char *)this + 264, &v56);
        v40 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DAMAGE", v39);
        String::String(&v48, v40);
        Projectile = LogicCharacterData::getProjectile(a3, 0);
        Damage = LogicProjectileData::getDamage(Projectile, a4);
        String::format((String *)"%d", v43, Damage);
        v44 = (DisplayObject *)PlayerInfo::createStatItem(this, 1, &v48, &v47, 1);
        v56 = v44;
        String::~String(&v47);
        String::~String(&v48);
        DisplayObject::setPixelSnappedXY(v44, v31, (float)(v46 + v45) + (float)(v16 * 0.5));
        std::vector<MovieClip *>::push_back(v24, &v56);
      }
      Rect::~Rect(v57);
    }

    MovieClip *__fastcall PlayerInfo::createStatItem(#1254 *a1, char a2, __int64 a3, const String *a4, ScrollArea *a5)
    {
      const char *v9; // x1
      const String *v10; // x2
      MovieClip *MovieClip; // x20
      __int64 TextFieldByName; // x0
      long double v13; // q0
      const char *v14; // x1
      #1249 *ChildByName; // x21
      const String *v16; // x2
      #1249 *v17; // x22
      long double Width; // q0
      long double Height; // q0
      __int64 MovieClipByName; // x0
      __int64 v21; // x0
      String v23; // [xsp+0h] [xbp-70h] BYREF
      __int128 v24; // [xsp+18h] [xbp-58h] BYREF
      String v25; // [xsp+28h] [xbp-48h] BYREF
    
      if ( (a2 & 1) != 0 )
        v9 = "stat_list_item_02";
      else
        v9 = "stat_list_item_01";
      String::String(&v25, v9);
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v25, v10);
      String::~String(&v25);
      TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "stat_name");
      MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, a3, 1);
      MovieClip::setText(MovieClip, "stat_value", a4);
      ChildByName = (#1249 *)MovieClip::getChildByName(MovieClip, "icon", v13);
      if ( ChildByName )
      {
        Rect::Rect((Rect *)&v24);
        DisplayObject::getBounds(ChildByName, MovieClip, &v24);
        SpellInfoPopup::getIconExportName(a5, &v23);
        v17 = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v23, v16);
        String::~String(&v23);
        MovieClip::changeTimelineChild(MovieClip, ChildByName, v17);
        Width = Rect::getWidth(&v24);
        DisplayObject::setWidth(v17, *(float *)&Width);
        Height = Rect::getHeight(&v24);
        DisplayObject::setHeight(v17, *(float *)&Height);
        (*(void (__fastcall **)(#1249 *))(*(_QWORD *)ChildByName + 8LL))(ChildByName);
        Rect::~Rect((Rect *)&v24);
      }
      else
      {
        Debugger::warning((__siginfo *)"no icon placeholder for spell info attribute", v14);
      }
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "stat_upgrade_bg");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = 0;
      v21 = GUIContainer::getMovieClip(a1);
      (*(void (__fastcall **)(__int64, MovieClip *))(*(_QWORD *)v21 + 160LL))(v21, MovieClip);
      return MovieClip;
    }

    void __fastcall PlayerInfo::setFellowMemberEntry(vm_address_t *this, AllianceJoinRequestOkMessage *a2)
    {
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x21
      __int64 Id; // x22
      __int64 AvatarId; // x0
      const char *v8; // x1
      __int64 HomeId; // x0
      char *v10; // x0
    
      Instance = GameMode::getInstance(this);
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(Instance);
      Id = LogicClientAvatar::getId(PlayerAvatar);
      AvatarId = AllianceMemberEntry::getAvatarId(a2);
      if ( (LogicLong::equals(Id, AvatarId) & 1) == 0 )
      {
        if ( (unsigned int)LogicClientAvatar::isInAlliance(PlayerAvatar) )
        {
          HomeId = AllianceMemberEntry::getHomeId(a2);
          if ( (unsigned int)LogicLong::equals(HomeId, *(this + 37)) )
          {
            *(this + 41) = (vm_address_t)a2;
            return;
          }
          v10 = "setFellowMemberEntry: homeId mismatch";
        }
        else
        {
          v10 = "setFellowMemberEntry: not in alliance";
        }
        Debugger::warning((__siginfo *)v10, v8);
      }
      if ( a2 )
      {
        AllianceMemberEntry::destruct(a2);
        operator delete(a2);
      }
    }

    void *__fastcall PlayerInfo::getTitleText(LogicDeviceLinkMenuClosedMessage *this, const char *a2)
    {
      return StringTable::getString((#1308 *)"TID_TITLE_PLAYER_PROFILE", a2);
    }

    __int64 __fastcall PlayerInfo::isScrollable(LogicDeviceLinkMenuClosedMessage *this)
    {
      return 1;
    }

}; // end class PlayerInfo
