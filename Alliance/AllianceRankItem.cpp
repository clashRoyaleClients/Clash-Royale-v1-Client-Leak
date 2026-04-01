class AllianceRankItem
{
public:

    __int64 __fastcall AllianceRankItem::AllianceRankItem(__int64 a1, HomeLogicStoppedMessage *a2, int a3)
    {
      const String *v6; // x2
      const String *v7; // x2
      #1375 *v8; // x22
      const String *v9; // x2
      tween::Bounce *PlayerAvatar; // x0
      __int64 AllianceId; // x0
      char v12; // w24
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x0
      #1257 *v15; // x0
      __int64 v16; // x0
      MovieClip *v17; // x24
      __int64 TextFieldByName; // x25
      const String *Name; // x0
      int Score; // w0
      __int64 NumberOfMembers; // x0
      const char *v22; // x1
      const char *v23; // x1
      #1257 *v24; // x0
      MovieClip *v25; // x24
      const AreaEffectObject *AllianceBadgeData; // x24
      DataIcon **v27; // x25
      __int64 v28; // x0
      DataIcon *v29; // x23
      #1257 *v30; // x24
      DisplayObject *v31; // x23
      long double Height; // q0
      float v33; // s8
      long double v34; // q0
      long double v35; // q0
      #1257 *v36; // x0
      MovieClip *v37; // x22
      int PreviousOrder; // w23
      int v39; // w21
      __int64 v40; // x0
      TextField *v41; // x0
      __int64 v42; // x0
      int v43; // w8
      int v44; // w1
      Rect v46[2]; // [xsp+10h] [xbp-160h] BYREF
      String v47; // [xsp+20h] [xbp-150h] BYREF
      String v48; // [xsp+38h] [xbp-138h] BYREF
      String v49; // [xsp+50h] [xbp-120h] BYREF
      String v50; // [xsp+68h] [xbp-108h] BYREF
      String v51; // [xsp+80h] [xbp-F0h] BYREF
      String v52; // [xsp+98h] [xbp-D8h] BYREF
      String v53; // [xsp+B0h] [xbp-C0h] BYREF
      String v54; // [xsp+C8h] [xbp-A8h] BYREF
      String v55; // [xsp+E0h] [xbp-90h] BYREF
      String v56; // [xsp+F8h] [xbp-78h] BYREF
    
      GameButton::GameButton((GameButton *)a1);
      *(_QWORD *)a1 = off_100470BD8;
      LogicLong::LogicLong((LogicLong *)(a1 + 272));
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = *(_DWORD *)(RankingEntry::getId(a2) + 4);
      *(_DWORD *)(a1 + 272) = *(_DWORD *)RankingEntry::getId(a2);
      String::String(&v55, "sc/ui.sc");
      String::String(&v54, "leaderboard_guild_item_01");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v55, &v54, v6, &v56);
      String::~String();
      String::~String();
      String::String(&v52, "sc/ui.sc");
      String::String(&v51, "leaderboard_guild_item_02");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v52, &v51, v7, &v53);
      String::~String();
      String::~String();
      v8 = (#1375 *)operator new(192);
      String::String(&v50, "sc/ui.sc");
      if ( (a3 & 1) != 0 )
        v9 = &v56;
      else
        v9 = &v53;
      DropGUIContainer::DropGUIContainer(v8, &v50, v9);
      String::~String();
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      AllianceId = LogicClientAvatar::getAllianceId(PlayerAvatar);
      v12 = LogicLong::equals(a1 + 272, AllianceId);
      MovieClip = (#1257 *)GUIContainer::getMovieClip(v8);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "panel_green");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = v12;
      v15 = (#1257 *)GUIContainer::getMovieClip(v8);
      v16 = MovieClip::getMovieClipByName(v15, "panel_white");
      if ( v16 )
        *(_BYTE *)(v16 + 8) = v12 ^ 1;
      v17 = (MovieClip *)GUIContainer::getMovieClip(v8);
      TextFieldByName = MovieClip::getTextFieldByName(v17, "guild_name");
      if ( TextFieldByName )
      {
        Name = (const String *)RankingEntry::getName(a2);
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, Name, 0);
      }
      Score = RankingEntry::getScore(a2);
      MovieClip::setNumberText(v17, "guild_points", Score, 0);
      NumberOfMembers = AllianceRankingEntry::getNumberOfMembers((__int64)a2);
      String::format((String *)"%d/%d", v22, NumberOfMembers, 50);
      MovieClip::setText(v17, "member_count", &v49);
      String::~String();
      String::format((String *)"%d.", v23, (unsigned int)(a3 + 1));
      MovieClip::setText(v17, "guild_rank", &v48);
      String::~String();
      v24 = (#1257 *)MovieClip::getMovieClipByName(v17, "rank_badge");
      v25 = v24;
      if ( v24 )
      {
        if ( a3 < 0 || (int)MovieClip::getTotalFrames(v24) <= a3 )
        {
          *((_BYTE *)v25 + 8) = 0;
        }
        else
        {
          MovieClip::gotoAndStopFrameIndex(v25, a3);
          *((_BYTE *)v25 + 8) = 1;
        }
      }
      AllianceBadgeData = (const AreaEffectObject *)AllianceRankingEntry::getAllianceBadgeData((__int64)a2);
      if ( AllianceBadgeData )
      {
        v27 = (DataIcon **)(a1 + 264);
        v28 = *(_QWORD *)(a1 + 264);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
        *v27 = 0;
        v29 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v29, AllianceBadgeData);
        *v27 = v29;
        v30 = (#1257 *)GUIContainer::getMovieClip(v8);
        String::String(&v47, "clan_icon");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v29,
          v30,
          &v47,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          1);
        String::~String();
      }
      Rect::Rect(v46);
      DisplayObject::getBounds(v8, 0, v46);
      v31 = (DisplayObject *)GUIContainer::getMovieClip(v8);
      Height = Rect::getHeight(v46);
      DisplayObject::setPixelSnappedXY(v31, 0.0, *(float *)&Height * -0.5);
      v33 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v46)));
      v34 = Rect::getHeight(v46);
      *(__n128 *)&v35 = DisplayObject::setPixelSnappedXY(v8, v33 * 0.5, *(float *)&v34 * 0.5);
      (*(void (__fastcall **)(__int64, #1375 *, __int64, long double))(*(_QWORD *)a1 + 288LL))(a1, v8, 1, v35);
      v36 = (#1257 *)GUIContainer::getMovieClip(v8);
      v37 = (MovieClip *)MovieClip::getMovieClipByName(v36, "rank_change");
      if ( v37 )
      {
        if ( (unsigned int)RankingEntry::getPreviousOrder(a2) != -1 )
        {
          PreviousOrder = RankingEntry::getPreviousOrder(a2);
          v39 = PreviousOrder - RankingEntry::getOrder(a2);
          if ( v39 >= 1 )
          {
            MovieClip::gotoAndStop(v37, "1");
            v40 = MovieClip::getMovieClipByName(v37, "rank_difference");
            v41 = (TextField *)MovieClip::getTextFieldByName(v40, "txt");
            goto LABEL_26;
          }
          if ( v39 < 0 )
          {
            MovieClip::gotoAndStop(v37, "2");
            v42 = MovieClip::getMovieClipByName(v37, "rank_difference");
            v41 = (TextField *)MovieClip::getTextFieldByName(v42, "txt");
    LABEL_26:
            if ( v41 )
            {
              if ( v39 >= -999 )
                v43 = v39;
              else
                v43 = -999;
              if ( v43 > 999 )
                v43 = 999;
              if ( v43 >= 0 )
                v44 = v43;
              else
                v44 = -v43;
              TextField::setNumberText(v41, v44, 0);
            }
            goto LABEL_36;
          }
        }
        MovieClip::gotoAndStop(v37, "3");
      }
    LABEL_36:
      Rect::~Rect(v46);
      String::~String();
      String::~String();
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall AllianceRankItem::AllianceRankItem(__int64 a1, HomeLogicStoppedMessage *a2, int a3)
    {
      return __ZN16AllianceRankItemC2EP20AllianceRankingEntryi(a1, a2, a3);
    }

    void __fastcall AllianceRankItem::~AllianceRankItem(DeviceLinkCodeReceivedScreen *a1)
    {
      __int64 v2; // x0
    
      *(_QWORD *)a1 = off_100470BD8;
      v2 = *((_QWORD *)a1 + 33);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)a1 + 33) = 0;
      *((_QWORD *)a1 + 34) = 0;
      GameButton::~GameButton(a1);
    }

    // attributes: thunk
    void __fastcall AllianceRankItem::~AllianceRankItem(DeviceLinkCodeReceivedScreen *this)
    {
      __ZN16AllianceRankItemD2Ev(this);
    }

    void __fastcall AllianceRankItem::~AllianceRankItem(#1374 *this)
    {
      AllianceRankItem::~AllianceRankItem(this);
      operator delete(this);
    }

    LogicAllianceSettingsChangedCommand *__fastcall AllianceRankItem::buttonPressed(__int64 a1)
    {
      BadgePopup *v2; // x0
      __int64 Instance; // x0
      LogicAllianceSettingsChangedCommand *result; // x0
      LogicAllianceSettingsChangedCommand *v5; // x20
    
      v2 = (BadgePopup *)GameButton::buttonPressed((CustomButton *)a1);
      Instance = GUI::getInstance(v2);
      result = (LogicAllianceSettingsChangedCommand *)GUI::getPopupByType(Instance, 22);
      v5 = result;
      if ( result )
      {
        result = (LogicAllianceSettingsChangedCommand *)AlliancePopup::getAllianceInfosWaitingForData(result);
        if ( !(_DWORD)result )
        {
          AlliancePopup::pushAllianceInfo(v5, (const #1236 *)(a1 + 272));
          return (LogicAllianceSettingsChangedCommand *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(
                                                          a1,
                                                          0);
        }
      }
      return result;
    }

}; // end class AllianceRankItem
