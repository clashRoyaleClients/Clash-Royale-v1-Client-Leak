class FriendItem
{
public:

    __int64 __fastcall FriendItem::FriendItem(__int64 a1, #1144 *a2, int a3)
    {
      const String *v6; // x2
      const String *v7; // x2
      #1375 *v8; // x23
      const String *v9; // x2
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x0
      #1257 *v12; // x0
      __int64 v13; // x0
      tween::Bounce *PlayerAvatar; // x25
      const LogicLong *Id; // x22
      const LogicLong *AllianceId; // x23
      int Score; // w24
      int ExpLevel; // w25
      const String *Name; // x0
      const String *AllianceName; // x0
      __int64 HomeId; // x0
      __int64 v22; // x0
      long double v23; // q0
      #1249 *ChildByName; // x26
      ProfilePicture *v25; // x27
      float v26; // s0
      String v28; // [xsp+8h] [xbp-158h] BYREF
      String v29; // [xsp+20h] [xbp-140h] BYREF
      String v30; // [xsp+38h] [xbp-128h] BYREF
      String v31; // [xsp+50h] [xbp-110h] BYREF
      String v32; // [xsp+68h] [xbp-F8h] BYREF
      String v33; // [xsp+80h] [xbp-E0h] BYREF
      String v34; // [xsp+98h] [xbp-C8h] BYREF
      String v35; // [xsp+B0h] [xbp-B0h] BYREF
      String v36; // [xsp+C8h] [xbp-98h] BYREF
      String v37; // [xsp+E0h] [xbp-80h] BYREF
      String v38; // [xsp+F8h] [xbp-68h] BYREF
    
      GameButton::GameButton((DeviceLinkCodeReceivedScreen *)a1);
      *(_QWORD *)a1 = off_100469E40;
      String::String((String *)(a1 + 328));
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_BYTE *)(a1 + 360) = 0;
      String::operator=(a1 + 328, "");
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      String::String(&v37, "sc/ui.sc");
      String::String(&v36, "friend_item_01");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v37, &v36, v6, &v38);
      String::~String();
      String::~String();
      String::String(&v34, "sc/ui.sc");
      String::String(&v33, "friend_item_02");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v34, &v33, v7, &v35);
      String::~String();
      String::~String();
      v8 = (#1375 *)operator new(192);
      String::String(&v32, "sc/ui.sc");
      if ( a3 )
        v9 = &v38;
      else
        v9 = &v35;
      DropGUIContainer::DropGUIContainer(v8, &v32, v9);
      *(_QWORD *)(a1 + 280) = v8;
      String::~String();
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 288LL))(a1, *(_QWORD *)(a1 + 280), 1);
      MovieClip = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 280));
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "panel_green");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = a3;
      v12 = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 280));
      v13 = MovieClip::getMovieClipByName(v12, "panel_white");
      if ( v13 )
        *(_BYTE *)(v13 + 8) = a3 ^ 1;
      *(_BYTE *)(a1 + 360) = a3;
      String::String(&v31, "");
      String::String(&v30);
      if ( a3 )
      {
        GameMode::getInstance();
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
        Id = (const LogicLong *)LogicClientAvatar::getId(PlayerAvatar);
        AllianceId = (const LogicLong *)LogicClientAvatar::getAllianceId(PlayerAvatar);
        LogicClientAvatar::getName(PlayerAvatar);
        String::operator=(&v31);
        LogicClientAvatar::getAllianceName(PlayerAvatar);
        String::operator=(&v30);
        Score = *((_DWORD *)PlayerAvatar + 16);
        ExpLevel = LogicClientAvatar::getExpLevel(PlayerAvatar);
        *(_QWORD *)(a1 + 320) = 0;
      }
      else
      {
        Id = (const LogicLong *)FriendEntry::getAvatarId(a2);
        AllianceId = (const LogicLong *)FriendEntry::getAllianceId(a2);
        if ( FriendEntry::getName(a2) )
        {
          Name = (const String *)FriendEntry::getName(a2);
          String::String(&v29, Name);
        }
        else
        {
          String::String(&v29, "");
        }
        String::operator=(&v31);
        String::~String();
        if ( FriendEntry::getAllianceName(a2) )
        {
          AllianceName = (const String *)FriendEntry::getAllianceName(a2);
          String::String(&v28, AllianceName);
        }
        else
        {
          String::String(&v28, "");
        }
        String::operator=(&v30);
        String::~String();
        Score = FriendEntry::getScore(a2);
        ExpLevel = FriendEntry::getExpLevel(a2);
        if ( FriendEntry::getHomeId(a2) )
        {
          HomeId = FriendEntry::getHomeId(a2);
          *(_QWORD *)(a1 + 320) = LogicLong::clone(HomeId);
        }
      }
      v22 = GUIContainer::getMovieClip(*(#1254 **)(a1 + 280));
      ChildByName = (#1249 *)MovieClip::getChildByName(v22, "fb_pict", v23);
      if ( !*(_BYTE *)(a1 + 360) || (a2 = *(#1144 **)FriendManager::sm_pInstance) != 0 )
      {
        v25 = (ProfilePicture *)operator new(216);
        ProfilePicture::ProfilePicture(v25, a2, ChildByName);
        *(_QWORD *)(a1 + 272) = v25;
      }
      FriendItem::init((FriendItem *)a1, &v31, Score, ExpLevel, Id, AllianceId);
      FriendItem::update((FriendItem *)a1, v26);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      return a1;
    }

    __int64 __fastcall FriendItem::init(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
    {
      __int64 TextField; // x0
      __int64 MovieClip; // x0
      TextField *TextFieldByName; // x0
      __int64 v15; // x0
      TextField *v16; // x0
      LogicLong *v17; // x25
      int HigherInt; // w26
      int LowerInt; // w0
      LogicLong *v20; // x24
      int v21; // w25
      int v22; // w0
      __int64 result; // x0
    
      TextField = GUIContainer::getTextField(*(#1254 **)(a1 + 280), "player_name");
      if ( TextField )
        MovieClipHelper::setTextAndScaleIfNecessary(TextField, a2, 0);
      MovieClip = GUIContainer::getMovieClip(*(#1254 **)(a1 + 280));
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(MovieClip, "player_points");
      if ( TextFieldByName )
        TextField::setNumberText(TextFieldByName, a3, 0);
      v15 = GUIContainer::getMovieClip(*(#1254 **)(a1 + 280));
      v16 = (TextField *)MovieClip::getTextFieldByName(v15, "player_xp");
      if ( v16 )
        TextField::setNumberText(v16, a4, 0);
      if ( a5 )
      {
        v17 = (LogicLong *)operator new(8);
        HigherInt = LogicLong::getHigherInt(a5);
        LowerInt = LogicLong::getLowerInt(a5);
        LogicLong::LogicLong(v17, HigherInt, LowerInt);
        *(_QWORD *)(a1 + 312) = v17;
      }
      if ( a6 )
      {
        v20 = (LogicLong *)operator new(8);
        v21 = LogicLong::getHigherInt(a6);
        v22 = LogicLong::getLowerInt(a6);
        LogicLong::LogicLong(v20, v21, v22);
        *(_QWORD *)(a1 + 304) = v20;
      }
      result = String::operator=((String *)(a1 + 328));
      *(_DWORD *)(a1 + 288) = a3;
      *(_DWORD *)(a1 + 292) = a4;
      return result;
    }

    __int64 __fastcall FriendItem::update(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 272);
      if ( result )
      {
        ProfilePicture::update(result, 1, 0);
        return ProfilePicture::imageSetUpdate(*(_QWORD *)(a1 + 272), 1);
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall FriendItem::FriendItem(__int64 a1, #1144 *a2, int a3)
    {
      return __ZN10FriendItemC2EP11FriendEntryb(a1, a2, a3);
    }

    __int64 __fastcall FriendItem::FriendItem(__int64 a1, __int64 a2)
    {
      #1375 *v4; // x22
      const String *v5; // x2
      __int64 v6; // x22
      __int64 v7; // x23
      int m_length; // w25
      __int64 v9; // x0
      String v11; // [xsp+0h] [xbp-100h] BYREF
      String v12; // [xsp+18h] [xbp-E8h] BYREF
      String v13; // [xsp+30h] [xbp-D0h] BYREF
      String v14; // [xsp+48h] [xbp-B8h] BYREF
      String v15; // [xsp+60h] [xbp-A0h] BYREF
      String v16; // [xsp+78h] [xbp-88h] BYREF
      String v17; // [xsp+90h] [xbp-70h] BYREF
      String v18; // [xsp+A8h] [xbp-58h] BYREF
    
      GameButton::GameButton((DeviceLinkCodeReceivedScreen *)a1);
      *(_QWORD *)a1 = off_100469E40;
      String::String((String *)(a1 + 328));
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_BYTE *)(a1 + 360) = 0;
      String::operator=(a1 + 328, "");
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      v4 = (#1375 *)operator new(192);
      String::String(&v18, "sc/ui.sc");
      String::String(&v16, "sc/ui.sc");
      String::String(&v15, "friend_item_02");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v16, &v15, v5, &v17);
      DropGUIContainer::DropGUIContainer(v4, &v18, &v17);
      *(_QWORD *)(a1 + 280) = v4;
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 288LL))(a1, *(_QWORD *)(a1 + 280), 1);
      String::String(&v14);
      String::String(&v13);
      v6 = *(_QWORD *)(a2 + 88);
      v7 = *(_QWORD *)(a2 + 192);
      String::String(&v12, (const String *)(a2 + 40));
      m_length = v12.m_length;
      String::~String();
      if ( m_length )
      {
        String::String(&v11, (const String *)(a2 + 40));
        String::operator=(&v14);
        String::~String();
      }
      else
      {
        String::operator=(&v14);
      }
      if ( v7 )
        String::operator=(&v13);
      else
        String::operator=(&v13, "");
      v9 = *(_QWORD *)(a2 + 96);
      if ( v9 )
        *(_QWORD *)(a1 + 320) = LogicLong::clone(v9);
      FriendItem::init(a1, (__int64)&v14, *(_DWORD *)(a2 + 180), *(_DWORD *)(a2 + 176), v6, v7);
      String::~String();
      String::~String();
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall FriendItem::FriendItem(__int64 a1, __int64 a2)
    {
      return __ZN10FriendItemC2EP14FacebookFriend(a1, a2);
    }

    __n128 __fastcall FriendItem::setOrderNum(__int64 a1, const char *a2)
    {
      int v2; // w19
      #1254 *v4; // x21
      #1257 *MovieClip; // x0
      #1257 *MovieClipByName; // x0
      __n128 result; // q0
      MovieClip *v8; // x20
      String v9; // [xsp+8h] [xbp-38h] BYREF
    
      v2 = (int)a2;
      v4 = *(#1254 **)(a1 + 280);
      String::format((String *)"%d.", a2, a2);
      GUIContainer::setText(v4, "player_rank", &v9, 1);
      String::~String();
      MovieClip = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 280));
      MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "rank_badge");
      v8 = MovieClipByName;
      if ( MovieClipByName )
      {
        if ( v2 >= 1 && (int)MovieClip::getTotalFrames(MovieClipByName) >= v2 )
        {
          *((_BYTE *)v8 + 8) = 1;
          return MovieClip::gotoAndStopFrameIndex(v8, v2 - 1);
        }
        else
        {
          *((_BYTE *)v8 + 8) = 0;
        }
      }
      return result;
    }

    void __fastcall FriendItem::~FriendItem(__int64 a1)
    {
      void *v2; // x0
      void *v3; // x0
      void *v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      *(_QWORD *)a1 = off_100469E40;
      v2 = *(void **)(a1 + 320);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 320) = 0;
      v3 = *(void **)(a1 + 312);
      if ( v3 )
        operator delete(v3);
      *(_QWORD *)(a1 + 312) = 0;
      v4 = *(void **)(a1 + 304);
      if ( v4 )
        operator delete(v4);
      *(_QWORD *)(a1 + 304) = 0;
      v5 = *(_QWORD *)(a1 + 352);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *(_QWORD *)(a1 + 352) = 0;
      v6 = *(_QWORD *)(a1 + 272);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *(_QWORD *)(a1 + 352) = 0;
      *(_BYTE *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      String::operator=(a1 + 328, "");
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      String::~String();
      GameButton::~GameButton((DeviceLinkCodeReceivedScreen *)a1);
    }

    // attributes: thunk
    void __fastcall FriendItem::~FriendItem(__int64 a1)
    {
      __ZN10FriendItemD2Ev(a1);
    }

    void __fastcall FriendItem::~FriendItem(void *a1)
    {
      FriendItem::~FriendItem((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall FriendItem::buttonPressed(GameButton *a1)
    {
      BadgePopup *v2; // x0
      int v3; // w2
      __int64 Instance; // x0
      LogicAllianceSettingsChangedCommand *PopupByType; // x20
      int v6; // w22
      PlayerInfo *v8; // x21
      #1236 *v9; // x0
      BadgePopup *v10; // x0
      __int64 v11; // x0
    
      v2 = (BadgePopup *)GameButton::buttonPressed(a1);
      if ( !*((_QWORD *)a1 + 39) )
        return Debugger::hudPrint((__siginfo *)"NO pAvatarId ID SET", (const char *)0xFFFFFFFFLL, v3);
      Instance = GUI::getInstance(v2);
      PopupByType = (LogicAllianceSettingsChangedCommand *)GUI::getPopupByType(Instance, 22);
      if ( PopupByType )
      {
        v6 = 0;
      }
      else
      {
        PopupByType = (LogicAllianceSettingsChangedCommand *)operator new(280);
        AlliancePopup::AlliancePopup(PopupByType);
        v6 = 1;
      }
      v8 = (PlayerInfo *)operator new(336);
      v9 = (#1236 *)LogicLong::clone(*((_QWORD *)a1 + 39));
      PlayerInfo::PlayerInfo(v8, v9);
      v10 = (BadgePopup *)AlliancePopup::pushScreen(PopupByType, v8);
      if ( v6 )
      {
        v11 = GUI::getInstance(v10);
        GUI::showPopup(v11, PopupByType, 1, 0, 0);
      }
      return (*(__int64 (__fastcall **)(GameButton *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
    }

}; // end class FriendItem
