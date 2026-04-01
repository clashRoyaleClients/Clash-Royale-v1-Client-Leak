class ChallengeDoneStreamItem
{
public:

    void __fastcall ChallengeDoneStreamItem::ChallengeDoneStreamItem(ChallengeDoneStreamItem *this, #1168 *a2)
    {
      const String *v4; // x2
      #1257 *MovieClip; // x20
      DeviceLinkCodeReceivedScreen *v6; // x22
      void (__fastcall *v7)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x23
      __int64 MovieClipByName; // x0
      LogicJSONParser *BattleLogJSON; // x0
      const String *v10; // x1
      const char *v11; // x1
      const #1234 *v12; // x21
      LogicBattleLog *v13; // x22
      const char *v14; // x2
      VisitHomeMessage *Instance; // x0
      __int64 AccountId; // x23
      __int64 Player; // x25
      LogicHealthBarData *v18; // x26
      __int64 v19; // x0
      int v20; // w0
      LogicHealthBarData *v21; // x24
      LogicHealthBarData *v22; // x23
      const String *Name; // x0
      __int64 TextFieldByName; // x0
      int Stars; // w0
      int Score; // w24
      const String *v27; // x0
      __int64 v28; // x0
      int v29; // w0
      const char *v30; // x1
      const String *v31; // x0
      const char *v32; // x1
      const String *String; // x0
      int v34; // w0
      String v35; // [xsp+0h] [xbp-A0h] BYREF
      String v36; // [xsp+18h] [xbp-88h] BYREF
      String v37; // [xsp+30h] [xbp-70h] BYREF
      String v38; // [xsp+48h] [xbp-58h] BYREF
    
      StreamItem::StreamItem((__int64)this);
      *(_QWORD *)this = off_10046ACA8;
      *((_QWORD *)this + 33) = &off_10046AE50;
      String::String(&v38, "sc/ui.sc");
      String::String(&v37, "speech_bubble_challenge_event");
      MovieClip = StringTable::getMovieClip((#1308 *)&v38, &v37, v4);
      String::~String();
      String::~String();
      (*(void (__fastcall **)(ChallengeDoneStreamItem *, #1257 *, _QWORD))(*(_QWORD *)this + 280LL))(this, MovieClip, 0);
      *((_BYTE *)this + 64) = 1;
      *(_BYTE *)(*((_QWORD *)this + 12) + 64LL) = 1;
      *((float *)this + 70) = (*(float (__fastcall **)(ChallengeDoneStreamItem *))(*(_QWORD *)this + 96LL))(this);
      v6 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v6);
      *((_QWORD *)this + 44) = v6;
      v7 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v6 + 280LL);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "info_button");
      v7(v6, MovieClipByName, 1);
      CustomButton::setButtonListener(*((_QWORD *)this + 44), (char *)this + 264);
      (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)MovieClip + 160LL))(MovieClip, *((_QWORD *)this + 44));
      BattleLogJSON = (LogicJSONParser *)ChallengeDoneStreamEntry::getBattleLogJSON(a2);
      v12 = (const #1234 *)LogicJSONParser::parseJSONObject(BattleLogJSON, v10);
      if ( v12 )
      {
        v13 = (LogicBattleLog *)operator new(40);
        LogicBattleLog::LogicBattleLog(v13);
        LogicBattleLog::loadJSON(v13, v12, v14);
        Instance = (VisitHomeMessage *)GameMode::getInstance();
        AccountId = GameMode::getAccountId(Instance);
        Player = LogicBattleLog::getPlayer(v13, 0);
        v18 = (LogicHealthBarData *)LogicBattleLog::getPlayer(v13, (const char *)1);
        v19 = LogicBattleLogPlayer::getAccountId(v18);
        v20 = LogicLong::equals(v19, AccountId);
        if ( v20 )
          v21 = v18;
        else
          v21 = (LogicHealthBarData *)Player;
        if ( v20 )
          v22 = (LogicHealthBarData *)Player;
        else
          v22 = v18;
        Name = (const String *)LogicBattleLogPlayer::getName(v21);
        MovieClip::setText(MovieClip, "player01_name", Name);
        TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "player01_name");
        MovieClipHelper::scaleSingleLineText(TextFieldByName);
        Stars = LogicBattleLogPlayer::getStars(v21);
        MovieClip::setNumberText(MovieClip, "player01_score", Stars, 0);
        Score = LogicBattleLogPlayer::getScore(v21);
        v27 = (const String *)LogicBattleLogPlayer::getName(v22);
        MovieClip::setText(MovieClip, "player02_name", v27);
        v28 = MovieClip::getTextFieldByName(MovieClip, "player02_name");
        MovieClipHelper::scaleSingleLineText(v28);
        v29 = LogicBattleLogPlayer::getScore(v22);
        if ( Score != v29 )
        {
          if ( Score >= v29 )
          {
            if ( Score > v29 )
            {
              String::String(&v35, "");
              MovieClip::setText(MovieClip, "TID_DRAW", &v35);
              String::~String();
              String = (const String *)StringTable::getString((#1308 *)"TID_WINNER", v32);
              MovieClip::setText(MovieClip, "winner_01", String);
            }
          }
          else
          {
            String::String(&v36, "");
            MovieClip::setText(MovieClip, "TID_DRAW", &v36);
            String::~String();
            v31 = (const String *)StringTable::getString((#1308 *)"TID_WINNER", v30);
            MovieClip::setText(MovieClip, "winner_02", v31);
          }
        }
        v34 = LogicBattleLogPlayer::getStars(v22);
        MovieClip::setNumberText(MovieClip, "player02_score", v34, 0);
        (*(void (__fastcall **)(LogicBattleLog *))(*(_QWORD *)v13 + 16LL))(v13);
        (*(void (__fastcall **)(LogicBattleLog *))(*(_QWORD *)v13 + 8LL))(v13);
        (*(void (__fastcall **)(const #1234 *))(*(_QWORD *)v12 + 16LL))(v12);
        (*(void (__fastcall **)(const #1234 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
      else
      {
        Debugger::warning((__siginfo *)"failed parsing battle log json string for royal tv", v11);
      }
    }

    void __fastcall ChallengeDoneStreamItem::~ChallengeDoneStreamItem(_QWORD *a1)
    {
      __int64 v2; // x0
    
      *a1 = off_10046ACA8;
      a1[33] = &off_10046AE50;
      v2 = a1[44];
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      a1[44] = 0;
      StreamItem::~StreamItem((__int64)a1);
    }

    // attributes: thunk
    void __fastcall ChallengeDoneStreamItem::~ChallengeDoneStreamItem(_QWORD *a1)
    {
      __ZN23ChallengeDoneStreamItemD2Ev(a1);
    }

    void __fastcall ChallengeDoneStreamItem::~ChallengeDoneStreamItem(_QWORD *a1)
    {
      ChallengeDoneStreamItem::~ChallengeDoneStreamItem(a1);
      operator delete(a1);
    }

    // attributes: thunk
    void __fastcall ChallengeDoneStreamItem::refreshEntry(__int64 a1, __int64 a2)
    {
      StreamItem::refreshEntry(a1, a2);
    }

    void __fastcall ChallengeDoneStreamItem::buttonClicked(StarHud *a1, __int64 a2)
    {
      PopupBase *v2; // x20
      ChallengeResultInfo *v3; // x19
      BadgePopup *v4; // x0
      __int64 Instance; // x0
    
      if ( *((_QWORD *)a1 + 44) == a2 )
      {
        v2 = (PopupBase *)*((_QWORD *)a1 + 34);
        v3 = (ChallengeResultInfo *)operator new(280);
        ChallengeResultInfo::ChallengeResultInfo(v3, v2);
        Instance = GUI::getInstance(v4);
        GUI::showPopup(Instance, v3, 1, 0, 0);
      }
      else
      {
        StreamItem::buttonClicked(a1);
      }
    }

}; // end class ChallengeDoneStreamItem
