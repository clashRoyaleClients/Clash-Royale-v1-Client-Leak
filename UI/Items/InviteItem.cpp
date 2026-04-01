class InviteItem
{
public:

    __int64 __fastcall InviteItem::InviteItem(__int64 a1, LogicStartMatchmakeCommand *a2, __int64 a3)
    {
      const String *v5; // x2
      DisplayObject **v6; // x23
      const char *v7; // x1
      const String *String; // x0
      __int64 SenderName; // x0
      __int64 TextFieldByName; // x0
      __int64 v11; // x21
      const char *v12; // x1
      const String *AllianceName; // x0
      __int64 v14; // x0
      DataIcon *v15; // x21
      const AreaEffectObject *AllianceBadgeData; // x0
      #1257 *v17; // x22
      LogicLong *v18; // x21
      __int64 SenderAvatarId; // x0
      int HigherInt; // w22
      __int64 v21; // x0
      int LowerInt; // w0
      const char *v23; // x1
      __int64 AllianceId; // x0
      MovieClip *v25; // x20
      const String *v26; // x0
      long double v27; // q0
      GameButton *v28; // x21
      void (__fastcall *v29)(GameButton *, __int64, __int64); // x20
      __int64 MovieClipByName; // x0
      MovieClip *v31; // x21
      const char *v32; // x1
      const String *v33; // x0
      long double v34; // q0
      GameButton *v35; // x21
      void (__fastcall *v36)(GameButton *, __int64, __int64); // x22
      __int64 v37; // x0
      MovieClip *v38; // x21
      const char *v39; // x1
      const String *v40; // x0
      long double v41; // q0
      GameButton *v42; // x21
      void (__fastcall *v43)(GameButton *, __int64, __int64); // x22
      __int64 v44; // x0
      long double v45; // q0
      Rect v47; // [xsp+0h] [xbp-D0h] BYREF
      String v48; // [xsp+10h] [xbp-C0h] BYREF
      String v49; // [xsp+28h] [xbp-A8h] BYREF
      _QWORD v50[3]; // [xsp+40h] [xbp-90h] BYREF
      String v51; // [xsp+58h] [xbp-78h] BYREF
      String v52; // [xsp+70h] [xbp-60h] BYREF
      String v53; // [xsp+88h] [xbp-48h] BYREF
    
      EventScreenItem::EventScreenItem(a1, (__int64)a2, a3);
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)a1 = off_100471F78;
      *(_QWORD *)(a1 + 264) = &off_100472118;
      *(_QWORD *)(a1 + 384) = 0;
      *(_QWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      *(_BYTE *)(a1 + 64) = 1;
      String::String(&v53, "sc/ui.sc");
      String::String(&v52, "message_item_confirm");
      v6 = (DisplayObject **)(a1 + 368);
      *(_QWORD *)(a1 + 368) = StringTable::getMovieClip((#1308 *)&v53, &v52, v5);
      String::~String();
      String::~String();
      String = (const String *)StringTable::getString((#1308 *)"TID_INVITE_BY", v7);
      String::String(&v51, String);
      if ( AvatarStreamEntry::getSenderName(a2) )
      {
        String::String(&v49, "<name>");
        SenderName = AvatarStreamEntry::getSenderName(a2);
        String::replace(v50, &v51, &v49, SenderName);
        String::operator=(&v51);
        String::~String();
        String::~String();
      }
      TextFieldByName = MovieClip::getTextFieldByName(*v6, "player_name");
      if ( TextFieldByName )
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, &v51, 0);
      v11 = MovieClip::getTextFieldByName(*v6, "clan_name");
      if ( v11 )
      {
        if ( AllianceInvitationAvatarStreamEntry::getAllianceName(a2) )
          AllianceName = (const String *)AllianceInvitationAvatarStreamEntry::getAllianceName(a2);
        else
          AllianceName = (const String *)StringTable::getString((#1308 *)"TID_NO_CLAN", v12);
        MovieClipHelper::setTextAndScaleIfNecessary(v11, AllianceName, 0);
      }
      if ( AllianceInvitationAvatarStreamEntry::getAllianceBadgeData(a2) )
      {
        v14 = *(_QWORD *)(a1 + 400);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        *(_QWORD *)(a1 + 400) = 0;
        v15 = (DataIcon *)operator new(112);
        AllianceBadgeData = (const AreaEffectObject *)AllianceInvitationAvatarStreamEntry::getAllianceBadgeData(a2);
        DataIcon::DataIcon(v15, AllianceBadgeData);
        *(_QWORD *)(a1 + 400) = v15;
        v17 = *(#1257 **)(a1 + 368);
        String::String(&v48, "clan_icon");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v15,
          v17,
          &v48,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          1);
        String::~String();
      }
      if ( AvatarStreamEntry::getSenderAvatarId(a2) )
      {
        v18 = (LogicLong *)operator new(8);
        SenderAvatarId = AvatarStreamEntry::getSenderAvatarId(a2);
        HigherInt = LogicLong::getHigherInt(SenderAvatarId);
        v21 = AvatarStreamEntry::getSenderAvatarId(a2);
        LowerInt = LogicLong::getLowerInt(v21);
        LogicLong::LogicLong(v18, HigherInt, LowerInt);
        *(_QWORD *)(a1 + 296) = v18;
      }
      if ( AvatarStreamEntry::getSenderName(a2) )
      {
        AvatarStreamEntry::getSenderName(a2);
        String::operator=((String *)(a1 + 320));
      }
      if ( AllianceInvitationAvatarStreamEntry::getAllianceId(a2) )
      {
        AllianceId = AllianceInvitationAvatarStreamEntry::getAllianceId(a2);
        *(_QWORD *)(a1 + 312) = LogicLong::clone(AllianceId);
      }
      v25 = *v6;
      v26 = (const String *)StringTable::getString((#1308 *)"TID_INVITE_TO_TEAM_MESSAGE", v23);
      *(__n128 *)&v27 = MovieClip::setText(v25, "title", v26);
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 368), v27);
      v28 = (GameButton *)operator new(264);
      GameButton::GameButton(v28);
      *(_QWORD *)(a1 + 376) = v28;
      v29 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v28 + 280LL);
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 368), "button_accept");
      v29(v28, MovieClipByName, 1);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 376), a1 + 264);
      v31 = *(MovieClip **)(*(_QWORD *)(a1 + 376) + 96LL);
      v33 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_ACCEPT", v32);
      *(__n128 *)&v34 = MovieClip::setText(v31, "txt", v33);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(a1 + 368) + 160LL))(
        *(_QWORD *)(a1 + 368),
        *(_QWORD *)(a1 + 376),
        v34);
      v35 = (GameButton *)operator new(264);
      GameButton::GameButton(v35);
      *(_QWORD *)(a1 + 384) = v35;
      v36 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v35 + 280LL);
      v37 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 368), "button_decline");
      v36(v35, v37, 1);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 384), a1 + 264);
      v38 = *(MovieClip **)(*(_QWORD *)(a1 + 384) + 96LL);
      v40 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_REJECT", v39);
      *(__n128 *)&v41 = MovieClip::setText(v38, "txt", v40);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(a1 + 368) + 160LL))(
        *(_QWORD *)(a1 + 368),
        *(_QWORD *)(a1 + 384),
        v41);
      v42 = (GameButton *)operator new(264);
      GameButton::GameButton(v42);
      *(_QWORD *)(a1 + 392) = v42;
      v43 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v42 + 280LL);
      v44 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 368), "button_info");
      v43(v42, v44, 1);
      *(__n128 *)&v45 = CustomButton::setButtonListener(*(_QWORD *)(a1 + 392), a1 + 264);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(a1 + 368) + 160LL))(
        *(_QWORD *)(a1 + 368),
        *(_QWORD *)(a1 + 392),
        v45);
      Rect::Rect(&v47);
      DisplayObject::getBounds(*v6, 0, &v47);
      DisplayObject::setXY(*v6, -*(float *)&v47.top, -*(float *)&v47.bottom);
      *(_BYTE *)(*(_QWORD *)(a1 + 368) + 64LL) = 1;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 368LL))(a1, COERCE_LONG_DOUBLE((unsigned __int128)0));
      Rect::~Rect(&v47);
      String::~String();
      return a1;
    }

    // attributes: thunk
    void __fastcall InviteItem::InviteItem(InviteItem *this, LogicStartMatchmakeCommand *a2, __int64 a3)
    {
      __ZN10InviteItemC2EP17AvatarStreamEntryP11EventScreen((__int64)this, a2, a3);
    }

    void __fastcall InviteItem::~InviteItem(ChestInfoPopup *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      *(_QWORD *)this = off_100471F78;
      *((_QWORD *)this + 33) = &off_100472118;
      v2 = *((_QWORD *)this + 47);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 47) = 0;
      v3 = *((_QWORD *)this + 48);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 48) = 0;
      v4 = *((_QWORD *)this + 49);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 49) = 0;
      v5 = *((_QWORD *)this + 50);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 50) = 0;
      v6 = *((_QWORD *)this + 46);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 49) = 0;
      *((_QWORD *)this + 50) = 0;
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 46) = 0;
      EventScreenItem::~EventScreenItem((__int64)this);
    }

    // attributes: thunk
    void __fastcall InviteItem::~InviteItem(ChestInfoPopup *this)
    {
      __ZN10InviteItemD2Ev(this);
    }

    void __fastcall InviteItem::~InviteItem(ChestInfoPopup *this)
    {
      InviteItem::~InviteItem(this);
      operator delete(this);
    }

    __int64 __fastcall InviteItem::update(LogicStartMatchmakeCommand **this, float a2)
    {
      int AgeSeconds; // w21
      const char *v4; // x1
      #1271 *TextFieldByName; // x20
      void *String; // x22
      tween::Bounce *PlayerAvatar; // x20
      bool v8; // w20
      int ExpLevel; // w20
      String v11; // [xsp+0h] [xbp-80h] BYREF
      String v12; // [xsp+18h] [xbp-68h] BYREF
      String v13; // [xsp+30h] [xbp-50h] BYREF
      String v14; // [xsp+48h] [xbp-38h] BYREF
    
      EventScreenItem::update((LogicSpellDeck *)this, a2);
      AgeSeconds = AvatarStreamEntry::getAgeSeconds(*(this + 34));
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*(this + 46), "time");
      if ( AgeSeconds > 59 )
      {
        String = StringTable::getString((#1308 *)"TID_STREAM_ENTRY_AGE", v4);
        String::String(&v12, "<time>");
        TimeUtil::getTimeString(AgeSeconds, 0, &v11);
        String::replace(&v13, String, &v12, &v11);
        TextField::setText(TextFieldByName, &v13);
        String::~String();
        String::~String();
      }
      else
      {
        String::String(&v14, "");
        TextField::setText(TextFieldByName, &v14);
      }
      String::~String();
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      if ( LogicClientAvatar::isInAlliance(PlayerAvatar) )
      {
        v8 = 0;
      }
      else
      {
        ExpLevel = LogicClientAvatar::getExpLevel(PlayerAvatar);
        v8 = ExpLevel >= *(_DWORD *)(LogicDataTables::getGlobals() + 72);
      }
      CustomButton::setEnabled(*(this + 47), v8);
      return CustomButton::setEnabled(*(this + 48), v8);
    }

    SearchAlliancesMessage **__fastcall InviteItem::buttonClicked(SearchAlliancesMessage **this, #1251 *a2)
    {
      LogicStartMatchmakeCommand *v2; // x19
      AskForAllianceDataMessage *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 SenderAvatarId; // x0
      __int64 v7; // x0
      __int64 Id; // x0
      __int64 v9; // x0
      AlliancePopup *v10; // x20
      AllianceInfo *v11; // x21
      __int64 AllianceId; // x0
      #1236 *v13; // x0
      const char *v14; // x2
      BadgePopup *v15; // x0
      __int64 Instance; // x0
      __int64 v17; // x0
      __int64 v18; // x0
    
      v2 = *(this + 34);
      if ( *(this + 48) == a2 )
      {
        v3 = (AskForAllianceDataMessage *)operator new(80);
        RemoveAvatarStreamEntryMessage::RemoveAvatarStreamEntryMessage((__int64)v3);
        Id = AvatarStreamEntry::getId(v2);
        v9 = LogicLong::clone(Id);
        RemoveAvatarStreamEntryMessage::setStreamEntryId((__int64)v3, v9);
      }
      else if ( *(this + 49) == a2 )
      {
        this = (SearchAlliancesMessage **)AllianceInvitationAvatarStreamEntry::getAllianceId(*(this + 34));
        if ( !this )
          return this;
        v10 = (AlliancePopup *)operator new(280);
        AlliancePopup::AlliancePopup(v10);
        v11 = (AllianceInfo *)operator new(336);
        AllianceId = AllianceInvitationAvatarStreamEntry::getAllianceId(v2);
        v13 = (#1236 *)LogicLong::clone(AllianceId);
        AllianceInfo::AllianceInfo(v11, v13);
        v15 = (BadgePopup *)AlliancePopup::pushScreen(v10, v11, v14);
        Instance = GUI::getInstance(v15);
        GUI::showPopup(Instance, v10, 1, 0, 0);
        v3 = (AskForAllianceDataMessage *)operator new(80);
        AskForAllianceDataMessage::AskForAllianceDataMessage(v3);
        v17 = AllianceInvitationAvatarStreamEntry::getAllianceId(v2);
        v18 = LogicLong::clone(v17);
        AskForAllianceDataMessage::setAllianceId((__int64)v3, v18);
      }
      else
      {
        if ( *(this + 47) != a2 )
          return this;
        v3 = (AskForAllianceDataMessage *)operator new(88);
        JoinAllianceUsingInvitationMessage::JoinAllianceUsingInvitationMessage(v3);
        v4 = AvatarStreamEntry::getId(v2);
        v5 = LogicLong::clone(v4);
        JoinAllianceUsingInvitationMessage::setAvatarStreamEntryId((__int64)v3, v5);
        SenderAvatarId = AvatarStreamEntry::getSenderAvatarId(v2);
        v7 = LogicLong::clone(SenderAvatarId);
        JoinAllianceUsingInvitationMessage::setInviterAvatarId((__int64)v3, v7);
      }
      return (SearchAlliancesMessage **)MessageManager::sendMessage((Messaging **)MessageManager::sm_pInstance, v3);
    }

    __int64 __fastcall InviteItem::shouldRemove(LogicStartMatchmakeCommand **this)
    {
      tween::Bounce *PlayerAvatar; // x0
    
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      if ( LogicClientAvatar::isInAlliance(PlayerAvatar) )
        return 1;
      else
        return AvatarStreamEntry::isRemoved(*(this + 34));
    }

}; // end class InviteItem
