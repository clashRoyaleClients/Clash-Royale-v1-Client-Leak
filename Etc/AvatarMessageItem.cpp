class AvatarMessageItem
{
public:

    void __fastcall AvatarMessageItem::AvatarMessageItem(AvatarMessageItem *this, #1055 *a2, #1049 *a3)
    {
      LogicLong *v5; // x21
      __int64 SenderAvatarId; // x0
      int HigherInt; // w22
      __int64 v8; // x0
      int LowerInt; // w0
      const String *v10; // x2
      __int64 AllianceBadgeData; // x21
      __int64 Message; // x22
      const String *v13; // x2
      const char *v14; // x1
      const String *v15; // x2
      const char *v16; // x1
      const char *v17; // x1
      __int64 v18; // x22
      const String *v19; // x2
      const char *v20; // x1
      const char *v21; // x1
      __int64 SenderName; // x0
      __int64 v23; // x0
      __int64 TextFieldByName; // x0
      __int64 v25; // x0
      #1308 *IconSWF; // x22
      const String *IconExportName; // x0
      const String *v28; // x2
      #1249 *MovieClip; // x0
      __int64 v30; // x21
      __int64 v31; // x0
      __int64 v32; // x0
      __int64 MovieClipByName; // x20
      __int64 v34; // x21
      DisplayObject *v35; // x22
      #1271 *v36; // x24
      bool v37; // zf
      __int64 v40; // x0
      __int64 v41; // x23
      long double v42; // q0
      float v43; // s8
      long double v44; // q0
      float v45; // s9
      long double v46; // q0
      float v47; // s0
      long double v48; // q0
      float v49; // s9
      float v50; // s0
      float v51; // s10
      long double v52; // q0
      float v53; // s8
      long double v54; // q0
      float v55; // s9
      float v56; // s0
      long double v57; // q0
      long double v58; // q0
      float v59; // s8
      long double v60; // q0
      float v61; // s9
      float v62; // s10
      long double v63; // q0
      float v64; // s8
      float v65; // s9
      float v66; // [xsp+0h] [xbp-1D0h]
      Rect v67[2]; // [xsp+18h] [xbp-1B8h] BYREF
      _BYTE v68[12]; // [xsp+28h] [xbp-1A8h] BYREF
      float v69; // [xsp+34h] [xbp-19Ch]
      String v70; // [xsp+38h] [xbp-198h] BYREF
      String v71; // [xsp+50h] [xbp-180h] BYREF
      String v72; // [xsp+68h] [xbp-168h] BYREF
      String v73; // [xsp+80h] [xbp-150h] BYREF
      String v74; // [xsp+98h] [xbp-138h] BYREF
      String v75; // [xsp+B0h] [xbp-120h] BYREF
      String v76; // [xsp+C8h] [xbp-108h] BYREF
      String v77; // [xsp+E0h] [xbp-F0h] BYREF
      String v78; // [xsp+F8h] [xbp-D8h] BYREF
      String v79; // [xsp+110h] [xbp-C0h] BYREF
      String v80; // [xsp+128h] [xbp-A8h] BYREF
      String v81; // [xsp+140h] [xbp-90h] BYREF
      String v82; // [xsp+158h] [xbp-78h] BYREF
    
      EventScreenItem::EventScreenItem(this, a2, a3);
      *(_QWORD *)this = off_100462068;
      *((_QWORD *)this + 33) = &off_100462208;
      *((_QWORD *)this + 47) = 0;
      *((_DWORD *)this + 92) = 0;
      *((_BYTE *)this + 64) = 1;
      String::String(&v82, "");
      if ( AvatarStreamEntry::getSenderAvatarId(a2) )
      {
        v5 = (LogicLong *)operator new(8);
        SenderAvatarId = AvatarStreamEntry::getSenderAvatarId(a2);
        HigherInt = LogicLong::getHigherInt(SenderAvatarId);
        v8 = AvatarStreamEntry::getSenderAvatarId(a2);
        LowerInt = LogicLong::getLowerInt(v8);
        LogicLong::LogicLong(v5, HigherInt, LowerInt);
        *((_QWORD *)this + 37) = v5;
      }
      if ( AvatarStreamEntry::getSenderName(a2) )
      {
        AvatarStreamEntry::getSenderName(a2);
        String::operator=((String *)((char *)this + 320));
      }
      String::String(&v81, "");
      String::String(&v80, "");
      if ( (*(unsigned int (__fastcall **)(#1055 *))(*(_QWORD *)a2 + 32LL))(a2) == 9 )
      {
        String::String(&v79, "sc/ui.sc");
        String::String(&v78, "message_item_new_device");
        *((_QWORD *)this + 47) = StringTable::getMovieClip((#1308 *)&v79, &v78, v10);
        String::~String(&v78);
        String::~String(&v79);
    LABEL_7:
        AllianceBadgeData = 0;
        goto LABEL_24;
      }
      if ( (*(unsigned int (__fastcall **)(#1055 *))(*(_QWORD *)a2 + 32LL))(a2) == 5 )
      {
        Message = AllianceKickOutStreamEntry::getMessage(a2);
        AllianceBadgeData = AllianceKickOutStreamEntry::getAllianceBadgeData(a2);
        AllianceKickOutStreamEntry::getAllianceName(a2);
        String::operator=(&v82);
        String::String(&v77, "sc/ui.sc");
        String::String(&v76, "message_item");
        *((_QWORD *)this + 47) = StringTable::getMovieClip((#1308 *)&v77, &v76, v13);
        String::~String(&v76);
        String::~String(&v77);
        StringTable::getString((#1308 *)"TID_KICK_FROM_TEAM_MESSAGE", v14);
        String::operator=(&v81);
        if ( Message )
          String::operator=(&v80);
      }
      else if ( (*(unsigned int (__fastcall **)(#1055 *))(*(_QWORD *)a2 + 32LL))(a2) == 3 )
      {
        JoinAllianceResponseAvatarStreamEntry::getAllianceName(a2);
        String::operator=(&v82);
        AllianceBadgeData = JoinAllianceResponseAvatarStreamEntry::getAllianceBadgeData(a2);
        String::String(&v75, "sc/ui.sc");
        String::String(&v74, "message_item");
        *((_QWORD *)this + 47) = StringTable::getMovieClip((#1308 *)&v75, &v74, v15);
        String::~String(&v74);
        String::~String(&v75);
        if ( (unsigned int)JoinAllianceResponseAvatarStreamEntry::getAccepted(a2) )
        {
          StringTable::getString((#1308 *)"TID_TEAM_INVITE_ACCEPT_TITLE", v16);
          String::operator=(&v81);
          StringTable::getString((#1308 *)"TID_TEAM_INVITE_ACCEPT_MESSAGE", v17);
        }
        else
        {
          StringTable::getString((#1308 *)"TID_TEAM_INVITE_REJECT_TITLE", v16);
          String::operator=(&v81);
          StringTable::getString((#1308 *)"TID_TEAM_INVITE_REJECT_MESSAGE", v21);
        }
        String::operator=(&v80);
        if ( AvatarStreamEntry::getSenderName(a2) )
        {
          String::String(&v72, "<name>");
          SenderName = AvatarStreamEntry::getSenderName(a2);
          String::replace(&v73, &v80, &v72, SenderName);
          String::operator=(&v80);
          String::~String(&v73);
          String::~String(&v72);
        }
      }
      else
      {
        if ( (*(unsigned int (__fastcall **)(#1055 *))(*(_QWORD *)a2 + 32LL))(a2) != 6 )
          goto LABEL_7;
        v18 = AllianceMailAvatarStreamEntry::getMessage(a2);
        AllianceBadgeData = AllianceMailAvatarStreamEntry::getAllianceBadgeData(a2);
        AllianceMailAvatarStreamEntry::getAllianceName(a2);
        String::operator=(&v82);
        String::String(&v71, "sc/ui.sc");
        String::String(&v70, "message_item");
        *((_QWORD *)this + 47) = StringTable::getMovieClip((#1308 *)&v71, &v70, v19);
        String::~String(&v70);
        String::~String(&v71);
        if ( AllianceMailAvatarStreamEntry::getTitle(a2) && *(_DWORD *)AllianceMailAvatarStreamEntry::getTitle(a2) )
        {
          AllianceMailAvatarStreamEntry::getTitle(a2);
          String::operator=(&v81);
        }
        else
        {
          StringTable::getString((#1308 *)"TID_TEAM_MESSAGE", v20);
          String::operator=(&v81);
        }
        if ( v18 )
          String::operator=(&v80);
      }
    LABEL_24:
      v23 = *((_QWORD *)this + 47);
      if ( v23 )
      {
        if ( v81.m_length )
        {
          TextFieldByName = MovieClip::getTextFieldByName(v23, "title");
          if ( TextFieldByName )
            MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, &v81, 0);
        }
        if ( v80.m_length )
        {
          v25 = MovieClip::getTextFieldByName(*((_QWORD *)this + 47), "message");
          if ( v25 )
            MovieClipHelper::setTextAndScaleIfNecessary(v25, &v80, 0);
        }
      }
      if ( AllianceBadgeData )
      {
        IconSWF = (#1308 *)LogicData::getIconSWF(AllianceBadgeData);
        IconExportName = (const String *)LogicData::getIconExportName(AllianceBadgeData);
        MovieClip = (#1249 *)StringTable::getMovieClip(IconSWF, IconExportName, v28);
        MovieClip::changeTimelineChild(*((#1257 **)this + 47), "team_badge", MovieClip);
      }
      if ( AvatarStreamEntry::getSenderName(a2) )
      {
        v30 = MovieClip::getTextFieldByName(*((_QWORD *)this + 47), "sender_player");
        if ( v30 )
        {
          v31 = AvatarStreamEntry::getSenderName(a2);
          MovieClipHelper::setTextAndScaleIfNecessary(v30, v31, 0);
        }
      }
      if ( v82.m_length )
      {
        v32 = MovieClip::getTextFieldByName(*((_QWORD *)this + 47), "sender_team");
        if ( v32 )
          MovieClipHelper::setTextAndScaleIfNecessary(v32, &v82, 0);
      }
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 47), "top");
      v34 = MovieClip::getMovieClipByName(*((#1257 **)this + 47), "middle");
      v35 = (DisplayObject *)MovieClip::getMovieClipByName(*((#1257 **)this + 47), "bottom");
      v36 = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 47), "message");
      (*(void (__fastcall **)(AvatarMessageItem *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 47));
      *((float *)this + 92) = (*(float (__fastcall **)(AvatarMessageItem *))(*(_QWORD *)this + 96LL))(this);
      if ( MovieClipByName )
        v37 = v34 == 0;
      else
        v37 = 1;
      if ( !v37 && v35 != 0 && v36 != 0 )
      {
        v40 = MovieClip::getTextFieldByName(*((_QWORD *)this + 47), "spacer");
        v41 = v40;
        if ( v40 )
        {
          v42 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v40 + 96LL))(v40);
          v43 = *(float *)&v42;
          v44 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)MovieClipByName + 96LL))(MovieClipByName);
          v45 = *(float *)&v44;
          v46 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v34 + 96LL))(v34);
          v47 = v43
              - (float)((float)(v45 + *(float *)&v46)
                      + (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v35 + 96LL))(v35));
        }
        else
        {
          v47 = 0.0;
        }
        v66 = v47;
        v48 = ((long double (__fastcall *)(#1271 *))*(_QWORD *)(*(_QWORD *)v36 + 96LL))(v36);
        v49 = *(float *)&v48;
        TextField::getTextFieldHeight(v36);
        v51 = v50;
        v52 = DisplayObject::getY(v36);
        v53 = *(float *)&v52;
        if ( v49 > v51 )
          v51 = v49;
        v54 = DisplayObject::getY(v34);
        v55 = *(float *)&v54;
        v56 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v34 + 96LL))(v34);
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v34 + 56LL))(v34, (float)((float)(v51 + v53) - v55) / v56);
        Rect::Rect((Rect *)v68);
        DisplayObject::getBounds(v34, 0, v68);
        v57 = DisplayObject::getY(v34);
        DisplayObject::setY(v35, *(float *)&v57 + v69);
        if ( v41 )
        {
          v58 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v41 + 96LL))(v41);
          v59 = *(float *)&v58;
          v60 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)MovieClipByName + 96LL))(MovieClipByName);
          v61 = *(float *)&v60;
          v62 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v34 + 96LL))(v34)));
          v63 = ((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v35 + 96LL))(v35);
          v66 = v59 - (float)((float)(v61 + v62) + *(float *)&v63);
        }
        v64 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)MovieClipByName
                                                                                                  + 96LL))(MovieClipByName)));
        v65 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v34 + 96LL))(v34)));
        *((float *)this + 92) = v66
                              + (float)((float)(v64 + v65)
                                      + (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v35 + 96LL))(v35));
        Rect::~Rect((Rect *)v68);
      }
      Rect::Rect(v67);
      DisplayObject::getBounds(*((_QWORD *)this + 47), 0, v67);
      DisplayObject::setXY(*((DisplayObject **)this + 47), -*(float *)&v67[0].top, -*(float *)&v67[0].bottom);
      *(_BYTE *)(*((_QWORD *)this + 47) + 64LL) = 1;
      (*(void (__fastcall **)(AvatarMessageItem *, long double))(*(_QWORD *)this + 368LL))(
        this,
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      Rect::~Rect(v67);
      String::~String(&v80);
      String::~String(&v81);
      String::~String(&v82);
    }

    // attributes: thunk
    void __fastcall AvatarMessageItem::AvatarMessageItem(AvatarMessageItem *this, #1055 *a2, #1049 *a3)
    {
      __ZN17AvatarMessageItemC2EP17AvatarStreamEntryP11EventScreen(this, a2, a3);
    }

    void __fastcall AvatarMessageItem::~AvatarMessageItem(LogicCharacter *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100462068;
      *((_QWORD *)this + 33) = &off_100462208;
      v2 = *((_QWORD *)this + 47);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 47) = 0;
      *((_DWORD *)this + 92) = 0;
      EventScreenItem::~EventScreenItem(this);
    }

    // attributes: thunk
    void __fastcall AvatarMessageItem::~AvatarMessageItem(LogicCharacter *this)
    {
      __ZN17AvatarMessageItemD2Ev(this);
    }

    void __fastcall AvatarMessageItem::~AvatarMessageItem(LogicCharacter *this)
    {
      AvatarMessageItem::~AvatarMessageItem(this);
      operator delete(this);
    }

    void __fastcall AvatarMessageItem::update(#1055 **this, float a2)
    {
      TimeUtil *AgeSeconds; // x20
      __int64 TextFieldByName; // x0
      #1271 *v5; // x20
      #1271 *v6; // x19
      String *v7; // x0
      #1271 *v8; // x21
      const char *v9; // x1
      __int64 String; // x22
      bool v11; // w2
      #1271 *v12; // x19
      const char *v13; // x1
      __int64 v14; // x21
      bool v15; // w2
      String v16; // [xsp+0h] [xbp-E0h] BYREF
      String v17; // [xsp+18h] [xbp-C8h] BYREF
      String v18; // [xsp+30h] [xbp-B0h] BYREF
      String v19; // [xsp+48h] [xbp-98h] BYREF
      String v20; // [xsp+60h] [xbp-80h] BYREF
      String v21; // [xsp+78h] [xbp-68h] BYREF
      String v22; // [xsp+90h] [xbp-50h] BYREF
      String v23; // [xsp+A8h] [xbp-38h] BYREF
    
      EventScreenItem::update((LogicSpellDeck *)this, a2);
      AgeSeconds = (TimeUtil *)AvatarStreamEntry::getAgeSeconds(*(this + 34));
      TextFieldByName = MovieClip::getTextFieldByName(*(this + 47), "ago");
      if ( (int)AgeSeconds > 59 )
      {
        if ( TextFieldByName )
        {
          v8 = (#1271 *)MovieClip::getTextFieldByName(*(this + 47), "ago");
          String = StringTable::getString((#1308 *)"TID_STREAM_ENTRY_AGE", v9);
          String::String(&v20, "<time>");
          TimeUtil::getTimeString(AgeSeconds, 0, v11);
          String::replace(&v21, String, &v20, &v19);
          TextField::setText(v8, &v21);
          String::~String(&v21);
          String::~String(&v19);
          String::~String(&v20);
        }
        if ( MovieClip::getTextFieldByName(*(this + 47), "time") )
        {
          v12 = (#1271 *)MovieClip::getTextFieldByName(*(this + 47), "time");
          v14 = StringTable::getString((#1308 *)"TID_STREAM_ENTRY_AGE", v13);
          String::String(&v17, "<time>");
          TimeUtil::getTimeString(AgeSeconds, 0, v15);
          String::replace(&v18, v14, &v17, &v16);
          TextField::setText(v12, &v18);
          String::~String(&v18);
          String::~String(&v16);
          v7 = &v17;
          goto LABEL_10;
        }
      }
      else
      {
        if ( TextFieldByName )
        {
          v5 = (#1271 *)MovieClip::getTextFieldByName(*(this + 47), "ago");
          String::String(&v23, "");
          TextField::setText(v5, &v23);
          String::~String(&v23);
        }
        if ( MovieClip::getTextFieldByName(*(this + 47), "time") )
        {
          v6 = (#1271 *)MovieClip::getTextFieldByName(*(this + 47), "time");
          String::String(&v22, "");
          TextField::setText(v6, &v22);
          v7 = &v22;
    LABEL_10:
          String::~String(v7);
        }
      }
    }

    void AvatarMessageItem::buttonClicked()
    {
      ;
    }

    float __fastcall AvatarMessageItem::getItemHeight(LogicCharacter *this)
    {
      return *((float *)this + 92);
    }

}; // end class AvatarMessageItem
