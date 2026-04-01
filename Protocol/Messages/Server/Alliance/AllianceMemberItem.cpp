class AllianceMemberItem
{
public:

    void __fastcall AllianceMemberItem::AllianceMemberItem(
            AllianceMemberItem *this,
            AllianceJoinRequestOkMessage *a2,
            int a3,
            #1236 *a4)
    {
      const String *v8; // x2
      const String *v9; // x2
      #1375 *v10; // x20
      String *v11; // x2
      __int64 AvatarId; // x24
      tween::Bounce *PlayerAvatar; // x0
      __int64 Id; // x0
      char v15; // w24
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x0
      #1257 *v18; // x0
      __int64 v19; // x0
      MovieClip *v20; // x23
      __int64 TextFieldByName; // x24
      const String *Name; // x0
      TextField *v23; // x24
      int Score; // w0
      TextField *v25; // x0
      const char *v26; // x1
      TextField *v27; // x22
      int Donations; // w0
      const String *String; // x0
      StarHud *Role; // x0
      #1308 *RoleTid; // x0
      const char *v32; // x1
      const String *v33; // x0
      int ExpLevel; // w0
      DisplayObject *v35; // x0
      float v36; // s8
      long double Height; // q0
      long double v38; // q0
      __int128 v39; // [xsp+8h] [xbp-108h] BYREF
      String v40; // [xsp+18h] [xbp-F8h] BYREF
      String v41; // [xsp+30h] [xbp-E0h] BYREF
      String v42; // [xsp+48h] [xbp-C8h] BYREF
      String v43; // [xsp+60h] [xbp-B0h] BYREF
      String v44; // [xsp+78h] [xbp-98h] BYREF
      String v45; // [xsp+90h] [xbp-80h] BYREF
      String v46; // [xsp+A8h] [xbp-68h] BYREF
    
      GameButton::GameButton(this);
      *(_QWORD *)this = off_100470398;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      String::String(&v45, "sc/ui.sc");
      String::String(&v44, "guild_member_item_01");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v45, &v44, v8, &v46);
      String::~String();
      String::~String();
      String::String(&v42, "sc/ui.sc");
      String::String(&v41, "guild_member_item_02");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v42, &v41, v9, &v43);
      String::~String();
      String::~String();
      v10 = (#1375 *)operator new(192);
      String::String(&v40, "sc/ui.sc");
      if ( (a3 & 1) != 0 )
        v11 = &v43;
      else
        v11 = &v46;
      DropGUIContainer::DropGUIContainer(v10, &v40, v11);
      String::~String();
      AvatarId = AllianceMemberEntry::getAvatarId(a2);
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      Id = LogicClientAvatar::getId(PlayerAvatar);
      v15 = LogicLong::equals(AvatarId, Id);
      MovieClip = (#1257 *)GUIContainer::getMovieClip(v10);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "panel_green");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = v15;
      v18 = (#1257 *)GUIContainer::getMovieClip(v10);
      v19 = MovieClip::getMovieClipByName(v18, "panel_white");
      if ( v19 )
        *(_BYTE *)(v19 + 8) = v15 ^ 1;
      *((_QWORD *)this + 33) = AllianceMemberEntry::clone(a2);
      *((_QWORD *)this + 34) = a4;
      v20 = (MovieClip *)GUIContainer::getMovieClip(v10);
      TextFieldByName = MovieClip::getTextFieldByName(v20, "player_name");
      if ( TextFieldByName )
      {
        Name = (const String *)AllianceMemberEntry::getName(a2);
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, Name, 0);
      }
      v23 = (TextField *)MovieClip::getTextFieldByName(v20, "player_points");
      if ( v23 )
      {
        Score = AllianceMemberEntry::getScore(a2);
        TextField::setNumberText(v23, Score, 0);
      }
      v25 = (TextField *)MovieClip::getTextFieldByName(v20, "player_rank");
      if ( v25 )
        TextField::setNumberText(v25, a3, 0);
      v27 = (TextField *)MovieClip::getTextFieldByName(v20, "donation_count");
      if ( v27 )
      {
        Donations = AllianceMemberEntry::getDonations(a2);
        TextField::setNumberText(v27, Donations, 0);
      }
      String = (const String *)StringTable::getString((#1308 *)"TID_MEMBER_DONATED", v26);
      MovieClip::setText(v20, "donated", String);
      Role = (StarHud *)AllianceMemberEntry::getRole(a2);
      RoleTid = (#1308 *)StreamItem::getRoleTid(Role);
      v33 = (const String *)StringTable::getString(RoleTid, v32);
      MovieClip::setText(v20, "player_position", v33);
      ExpLevel = AllianceMemberEntry::getExpLevel(a2);
      MovieClip::setNumberText(v20, "player_xp", ExpLevel, 0);
      Rect::Rect((Rect *)&v39);
      DisplayObject::getBounds(v10, 0, &v39);
      v35 = (DisplayObject *)GUIContainer::getMovieClip(v10);
      DisplayObject::setPixelSnappedXY(v35, 0.0, 0.0);
      v36 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(&v39)));
      Height = Rect::getHeight(&v39);
      *(__n128 *)&v38 = DisplayObject::setPixelSnappedXY(v10, v36 * 0.5, *(float *)&Height * 0.5);
      (*(void (__fastcall **)(AllianceMemberItem *, #1375 *, __int64, long double))(*(_QWORD *)this + 288LL))(
        this,
        v10,
        1,
        v38);
      Rect::~Rect((Rect *)&v39);
      String::~String();
      String::~String();
    }

    // attributes: thunk
    void __fastcall AllianceMemberItem::AllianceMemberItem(
            AllianceMemberItem *this,
            AllianceJoinRequestOkMessage *a2,
            int a3,
            #1236 *a4)
    {
      __ZN18AllianceMemberItemC2EP19AllianceMemberEntryiP9LogicLong(this, a2, a3, a4);
    }

    void __fastcall AllianceMemberItem::~AllianceMemberItem(#1373 *this)
    {
      char *v2; // x20
      AllianceJoinRequestOkMessage *v3; // x0
      void *v4; // x0
    
      *(_QWORD *)this = off_100470398;
      v2 = (char *)this + 264;
      v3 = (AllianceJoinRequestOkMessage *)*((_QWORD *)this + 33);
      if ( v3 )
      {
        AllianceMemberEntry::destruct(v3);
        if ( *(_QWORD *)v2 )
          operator delete(*(void **)v2);
        *(_QWORD *)v2 = 0;
      }
      v4 = (void *)*((_QWORD *)this + 34);
      if ( v4 )
        operator delete(v4);
      *(_QWORD *)v2 = 0;
      *((_QWORD *)v2 + 1) = 0;
      GameButton::~GameButton(this);
    }

    // attributes: thunk
    void __fastcall AllianceMemberItem::~AllianceMemberItem(#1373 *this)
    {
      __ZN18AllianceMemberItemD2Ev(this);
    }

    void __fastcall AllianceMemberItem::~AllianceMemberItem(#1373 *a1)
    {
      AllianceMemberItem::~AllianceMemberItem(a1);
      operator delete(a1);
    }

    __int64 __fastcall AllianceMemberItem::buttonPressed(__int64 a1)
    {
      BadgePopup *v2; // x0
      __int64 Instance; // x0
      LogicAllianceSettingsChangedCommand *PopupByType; // x20
      tween::Bounce *PlayerAvatar; // x21
      __int64 result; // x0
      __int64 AllianceId; // x0
      int v8; // w22
      PlayerInfo *v9; // x21
      __int64 HomeId; // x0
      #1236 *v11; // x0
      const char *v12; // x2
      AllianceJoinRequestOkMessage *v13; // x0
    
      v2 = (BadgePopup *)GameButton::buttonPressed((CustomButton *)a1);
      Instance = GUI::getInstance(v2);
      PopupByType = (LogicAllianceSettingsChangedCommand *)GUI::getPopupByType(Instance, 22);
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      result = LogicClientAvatar::isInAlliance(PlayerAvatar);
      if ( (_DWORD)result )
      {
        AllianceId = LogicClientAvatar::getAllianceId(PlayerAvatar);
        result = LogicLong::equals(AllianceId, *(_QWORD *)(a1 + 272));
        v8 = result;
      }
      else
      {
        v8 = 0;
      }
      if ( PopupByType )
      {
        v9 = (PlayerInfo *)operator new(336);
        HomeId = AllianceMemberEntry::getHomeId(*(AllianceJoinRequestOkMessage **)(a1 + 264));
        v11 = (#1236 *)LogicLong::clone(HomeId);
        PlayerInfo::PlayerInfo(v9, v11);
        if ( v8 )
        {
          v13 = (AllianceJoinRequestOkMessage *)AllianceMemberEntry::clone(*(AllianceJoinRequestOkMessage **)(a1 + 264));
          PlayerInfo::setFellowMemberEntry((vm_address_t *)v9, v13);
        }
        AlliancePopup::pushScreen(PopupByType, v9, v12);
        return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
      }
      return result;
    }

}; // end class AllianceMemberItem
