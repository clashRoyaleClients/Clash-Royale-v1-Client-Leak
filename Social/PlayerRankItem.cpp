class PlayerRankItem
{
public:

    void __fastcall PlayerRankItem::PlayerRankItem(PlayerRankItem *this, DonationContainer *a2, int a3)
    {
      const String *v6; // x2
      const String *v7; // x2
      #1375 *v8; // x22
      String *v9; // x2
      #1257 *MovieClip; // x24
      const AreaEffectObject *AllianceBadgeData; // x26
      __int64 v12; // x0
      DataIcon *v13; // x25
      __int64 MovieClipByName; // x25
      __int64 v15; // x26
      AllianceStream *Id; // x0
      const LogicLong *v17; // x1
      char isMyAvatarId; // w0
      const char *v19; // x1
      int Score; // w0
      int ExpLevel; // w0
      #1257 *v22; // x0
      MovieClip *v23; // x24
      __int64 v24; // x0
      __int64 TextFieldByName; // x23
      __int64 Name; // x0
      const char *v27; // x1
      const String *AllianceName; // x23
      MovieClip *v29; // x0
      const String *String; // x0
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
      __int128 v45; // [xsp+8h] [xbp-148h] BYREF
      String v46; // [xsp+18h] [xbp-138h] BYREF
      String v47; // [xsp+30h] [xbp-120h] BYREF
      String v48; // [xsp+48h] [xbp-108h] BYREF
      String v49; // [xsp+60h] [xbp-F0h] BYREF
      String v50; // [xsp+78h] [xbp-D8h] BYREF
      String v51; // [xsp+90h] [xbp-C0h] BYREF
      String v52; // [xsp+A8h] [xbp-A8h] BYREF
      String v53; // [xsp+C0h] [xbp-90h] BYREF
      String v54; // [xsp+D8h] [xbp-78h] BYREF
    
      GameButton::GameButton(this);
      *(_QWORD *)this = off_1004F1608;
      LogicLong::LogicLong((PlayerRankItem *)((char *)this + 264));
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_DWORD *)this + 67) = *(_DWORD *)(AvatarRankingEntry::getHomeId(a2) + 4);
      *((_DWORD *)this + 66) = *(_DWORD *)AvatarRankingEntry::getHomeId(a2);
      String::String(&v53, "sc/ui.sc");
      String::String(&v52, "rank_list_item_01");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v53, &v52, v6, &v54);
      String::~String();
      String::~String();
      String::String(&v50, "sc/ui.sc");
      String::String(&v49, "rank_list_item_02");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v50, &v49, v7, &v51);
      String::~String();
      String::~String();
      v8 = (#1375 *)operator new(192);
      String::String(&v48, "sc/ui.sc");
      if ( (a3 & 1) != 0 )
        v9 = &v51;
      else
        v9 = &v54;
      DropGUIContainer::DropGUIContainer(v8, &v48, v9);
      String::~String();
      MovieClip = (#1257 *)GUIContainer::getMovieClip(v8);
      AllianceBadgeData = (const AreaEffectObject *)AvatarRankingEntry::getAllianceBadgeData(a2);
      if ( AllianceBadgeData )
      {
        v12 = *((_QWORD *)this + 34);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        *((_QWORD *)this + 34) = 0;
        v13 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v13, AllianceBadgeData);
        *((_QWORD *)this + 34) = v13;
        String::String(&v47, "clan_icon");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v13,
          MovieClip,
          &v47,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          1,
          1);
        String::~String();
      }
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "panel_green");
      v15 = MovieClip::getMovieClipByName(MovieClip, "panel_white");
      Id = (AllianceStream *)RankingEntry::getId(a2);
      isMyAvatarId = AllianceStream::isMyAvatarId(Id, v17);
      *(_BYTE *)(MovieClipByName + 8) = isMyAvatarId;
      *(_BYTE *)(v15 + 8) = isMyAvatarId ^ 1;
      String::format((String *)"%d.", v19, (unsigned int)(a3 + 1));
      MovieClip::setText(MovieClip, "player_rank", &v46);
      String::~String();
      Score = RankingEntry::getScore(a2);
      MovieClip::setNumberText(MovieClip, "player_points", Score, 1);
      ExpLevel = AvatarRankingEntry::getExpLevel(a2);
      MovieClip::setNumberText(MovieClip, "player_xp", ExpLevel, 0);
      v22 = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "rank_badge");
      v23 = v22;
      if ( v22 )
      {
        if ( a3 < 0 || (int)MovieClip::getTotalFrames(v22) <= a3 )
        {
          *((_BYTE *)v23 + 8) = 0;
        }
        else
        {
          *((_BYTE *)v23 + 8) = 1;
          MovieClip::gotoAndStopFrameIndex(v23, a3);
        }
      }
      v24 = GUIContainer::getMovieClip(v8);
      TextFieldByName = MovieClip::getTextFieldByName(v24, "player_name");
      if ( TextFieldByName )
      {
        Name = RankingEntry::getName(a2);
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, Name, 0);
      }
      AllianceName = (const String *)AvatarRankingEntry::getAllianceName(a2);
      if ( AllianceName )
      {
        v29 = (MovieClip *)GUIContainer::getMovieClip(v8);
        MovieClip::setText(v29, "team", AllianceName);
      }
      else
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_NO_CLAN", v27);
        GUIContainer::setText(v8, "team", String, 1);
      }
      Rect::Rect((Rect *)&v45);
      DisplayObject::getBounds(v8, 0, &v45);
      v31 = (DisplayObject *)GUIContainer::getMovieClip(v8);
      Height = Rect::getHeight(&v45);
      DisplayObject::setPixelSnappedXY(v31, 0.0, *(float *)&Height * -0.5);
      v33 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(&v45)));
      v34 = Rect::getHeight(&v45);
      *(__n128 *)&v35 = DisplayObject::setPixelSnappedXY(v8, v33 * 0.5, *(float *)&v34 * 0.5);
      (*(void (__fastcall **)(PlayerRankItem *, #1375 *, __int64, long double))(*(_QWORD *)this + 288LL))(this, v8, 1, v35);
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
            goto LABEL_25;
          }
          if ( v39 < 0 )
          {
            MovieClip::gotoAndStop(v37, "2");
            v42 = MovieClip::getMovieClipByName(v37, "rank_difference");
            v41 = (TextField *)MovieClip::getTextFieldByName(v42, "txt");
    LABEL_25:
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
            goto LABEL_35;
          }
        }
        MovieClip::gotoAndStop(v37, "3");
      }
    LABEL_35:
      Rect::~Rect((Rect *)&v45);
      String::~String();
      String::~String();
    }

    // attributes: thunk
    void __fastcall PlayerRankItem::~PlayerRankItem(#1390 *this)
    {
      __ZN14PlayerRankItemD2Ev(this);
    }

    void __fastcall PlayerRankItem::~PlayerRankItem(#1390 *this)
    {
      PlayerRankItem::~PlayerRankItem(this);
      operator delete(this);
    }

    LogicAllianceSettingsChangedCommand *__fastcall PlayerRankItem::buttonPressed(#1390 *this)
    {
      BadgePopup *v2; // x0
      __int64 Instance; // x0
      LogicAllianceSettingsChangedCommand *result; // x0
      LogicAllianceSettingsChangedCommand *v5; // x20
      PlayerInfo *v6; // x21
      #1236 *v7; // x0
    
      v2 = (BadgePopup *)GameButton::buttonPressed(this);
      Instance = GUI::getInstance(v2);
      result = (LogicAllianceSettingsChangedCommand *)GUI::getPopupByType(Instance, 22);
      v5 = result;
      if ( result )
      {
        result = (LogicAllianceSettingsChangedCommand *)AlliancePopup::getPlayerInfosWaitingForData(result);
        if ( !(_DWORD)result )
        {
          v6 = (PlayerInfo *)operator new(336);
          v7 = (#1236 *)LogicLong::clone((char *)this + 264);
          PlayerInfo::PlayerInfo(v6, v7);
          AlliancePopup::pushScreen(v5, v6);
          return (LogicAllianceSettingsChangedCommand *)(*(__int64 (__fastcall **)(#1390 *, _QWORD))(*(_QWORD *)this + 304LL))(
                                                          this,
                                                          0);
        }
      }
      return result;
    }

    void __fastcall PlayerRankItem::~PlayerRankItem(#1390 *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_1004F1608;
      v2 = *((_QWORD *)this + 34);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      GameButton::~GameButton(this);
    }

}; // end class PlayerRankItem
