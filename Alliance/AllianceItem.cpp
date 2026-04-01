class AllianceItem
{
public:

    DeviceLinkCodeReceivedScreen *__fastcall AllianceItem::AllianceItem(DeviceLinkCodeReceivedScreen *a1, __int64 a2)
    {
      #1375 *v4; // x20
      const String *v5; // x2
      MovieClip *MovieClip; // x21
      __int64 TextFieldByName; // x23
      __int64 AllianceName; // x0
      int Score; // w0
      __int64 NumberOfMembers; // x0
      const char *v11; // x1
      const AreaEffectObject *AllianceBadgeData; // x23
      __int64 v13; // x0
      DataIcon *v14; // x22
      long double Height; // q0
      float v16; // s8
      long double v17; // q0
      long double v18; // q0
      __int128 v20; // [xsp+10h] [xbp-E0h] BYREF
      String v21; // [xsp+20h] [xbp-D0h] BYREF
      String v22; // [xsp+38h] [xbp-B8h] BYREF
      String v23; // [xsp+50h] [xbp-A0h] BYREF
      String v24; // [xsp+68h] [xbp-88h] BYREF
      String v25; // [xsp+80h] [xbp-70h] BYREF
      String v26; // [xsp+98h] [xbp-58h] BYREF
    
      GameButton::GameButton(a1);
      *(_QWORD *)a1 = off_1004671F8;
      *((_QWORD *)a1 + 33) = 0;
      *((_QWORD *)a1 + 34) = 0;
      *((_QWORD *)a1 + 33) = a2;
      v4 = (#1375 *)operator new(192);
      String::String(&v26, "sc/ui.sc");
      String::String(&v24, "sc/ui.sc");
      String::String(&v23, "guild_item_01");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v24, &v23, v5, &v25);
      DropGUIContainer::DropGUIContainer(v4, &v26, &v25);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      MovieClip = (MovieClip *)GUIContainer::getMovieClip(v4);
      TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "guild_name");
      if ( TextFieldByName )
      {
        AllianceName = AllianceHeaderEntry::getAllianceName(a2);
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, AllianceName, 0);
      }
      Score = AllianceHeaderEntry::getScore(a2);
      MovieClip::setNumberText(MovieClip, "player_points", Score, 0);
      NumberOfMembers = AllianceHeaderEntry::getNumberOfMembers(a2);
      String::format((String *)"%d/%d", v11, NumberOfMembers, 50);
      MovieClip::setText(MovieClip, "member_count", &v22);
      String::~String();
      AllianceBadgeData = (const AreaEffectObject *)AllianceHeaderEntry::getAllianceBadgeData(a2);
      if ( AllianceBadgeData )
      {
        v13 = *((_QWORD *)a1 + 34);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        *((_QWORD *)a1 + 34) = 0;
        v14 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v14, AllianceBadgeData);
        *((_QWORD *)a1 + 34) = v14;
        String::String(&v21, "clan_icon");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v14,
          MovieClip,
          &v21,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          0);
        String::~String();
        *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "clan_icon") + 8) = 0;
      }
      Rect::Rect((Rect *)&v20);
      DisplayObject::getBounds(v4, 0, &v20);
      Height = Rect::getHeight(&v20);
      DisplayObject::setPixelSnappedXY(MovieClip, 0.0, *(float *)&Height * -0.5);
      v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(&v20)));
      v17 = Rect::getHeight(&v20);
      *(__n128 *)&v18 = DisplayObject::setPixelSnappedXY(v4, v16 * 0.5, *(float *)&v17 * 0.5);
      (*(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, #1375 *, __int64, long double))(*(_QWORD *)a1 + 288LL))(
        a1,
        v4,
        1,
        v18);
      Rect::~Rect((Rect *)&v20);
      return a1;
    }

    // attributes: thunk
    DeviceLinkCodeReceivedScreen *__fastcall AllianceItem::AllianceItem(DeviceLinkCodeReceivedScreen *a1, __int64 a2)
    {
      return __ZN12AllianceItemC2EP19AllianceHeaderEntry(a1, a2);
    }

    void __fastcall AllianceItem::~AllianceItem(void **a1)
    {
      void *v2; // x0
      void **v3; // x20
      void *v4; // x0
    
      *a1 = off_1004671F8;
      v2 = a1[34];
      if ( v2 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 8LL))(v2);
      a1[34] = 0;
      v3 = a1 + 33;
      v4 = a1[33];
      if ( v4 )
      {
        AllianceHeaderEntry::destruct(v4);
        if ( *v3 )
          operator delete(*v3);
        *v3 = 0;
      }
      *v3 = 0;
      a1[34] = 0;
      GameButton::~GameButton((DeviceLinkCodeReceivedScreen *)a1);
    }

    // attributes: thunk
    void __fastcall AllianceItem::~AllianceItem(void **a1)
    {
      __ZN12AllianceItemD2Ev(a1);
    }

    void __fastcall AllianceItem::~AllianceItem(void **a1)
    {
      AllianceItem::~AllianceItem(a1);
      operator delete(a1);
    }

    __int64 __fastcall AllianceItem::buttonPressed(__int64 *a1)
    {
      LogicAllianceSettingsChangedCommand *v2; // x20
      LogicChallengeCommand *v3; // x21
      __int64 AllianceId; // x0
      #1236 *v5; // x0
      BadgePopup *v6; // x0
      __int64 Instance; // x0
      AskForAllianceDataMessage *v8; // x20
      __int64 v9; // x0
      __int64 v10; // x0
    
      GameButton::buttonPressed((GameButton *)a1);
      v2 = (LogicAllianceSettingsChangedCommand *)operator new(280);
      AlliancePopup::AlliancePopup(v2);
      v3 = (LogicChallengeCommand *)operator new(336);
      AllianceId = AllianceHeaderEntry::getAllianceId(a1[33]);
      v5 = (#1236 *)LogicLong::clone(AllianceId);
      AllianceInfo::AllianceInfo(v3, v5);
      v6 = (BadgePopup *)AlliancePopup::pushScreen(v2, v3);
      Instance = GUI::getInstance(v6);
      GUI::showPopup(Instance, v2, 1, 0, 0);
      v8 = (AskForAllianceDataMessage *)operator new(80);
      AskForAllianceDataMessage::AskForAllianceDataMessage(v8);
      v9 = AllianceHeaderEntry::getAllianceId(a1[33]);
      v10 = LogicLong::clone(v9);
      AskForAllianceDataMessage::setAllianceId((__int64)v8, v10);
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v8);
    }

}; // end class AllianceItem
