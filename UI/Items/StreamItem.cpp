class StreamItem
{
public:

    OfferChestForCoOpenMessage *__fastcall StreamItem::createStreamItem(#1168 *a1)
    {
      const char *v2; // x1
      OfferChestForCoOpenMessage *v3; // x19
    
      switch ( (*(unsigned int (__fastcall **)(#1168 *))(*(_QWORD *)a1 + 32LL))(a1) )
      {
        case 1u:
          v3 = (OfferChestForCoOpenMessage *)operator new(424);
          DonateStreamItem::DonateStreamItem(v3, a1);
          break;
        case 2u:
          v3 = (OfferChestForCoOpenMessage *)operator new(360);
          ChatStreamItem::ChatStreamItem(v3, a1);
          break;
        case 3u:
          v3 = (OfferChestForCoOpenMessage *)operator new(368);
          JoinRequestStreamItem::JoinRequestStreamItem(v3, a1);
          break;
        case 4u:
          v3 = (OfferChestForCoOpenMessage *)operator new(352);
          AllianceEventStreamItem::AllianceEventStreamItem(v3, a1);
          break;
        case 5u:
          v3 = (OfferChestForCoOpenMessage *)operator new(384);
          ReplayStreamItem::ReplayStreamItem(v3, a1);
          break;
        case 0xAu:
          v3 = (OfferChestForCoOpenMessage *)operator new(376);
          ChallengeStreamItem::ChallengeStreamItem(v3, a1);
          break;
        case 0xBu:
          v3 = (OfferChestForCoOpenMessage *)operator new(360);
          ChallengeDoneStreamItem::ChallengeDoneStreamItem(v3, a1);
          break;
        default:
          Debugger::warning((__siginfo *)"Unsupported stream entry type", v2);
          v3 = 0;
          break;
      }
      return v3;
    }

    __int64 __fastcall StreamItem::StreamItem(__int64 a1)
    {
      GameButton::GameButton((DeviceLinkCodeReceivedScreen *)a1);
      *(_QWORD *)a1 = off_10046A030;
      *(_QWORD *)(a1 + 264) = &off_10046A1D8;
      String::String((String *)(a1 + 328));
      *(_DWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 280) = 0;
      *(_DWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      String::operator=(a1 + 328, "StreamItem");
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 80LL))(a1, COERCE_LONG_DOUBLE((unsigned __int128)0));
      CustomButton::setButtonListener(a1, a1 + 264);
      return a1;
    }

    __int64 __fastcall StreamItem::init(_QWORD *a1, String *a2, String *a3)
    {
      const String *v6; // x2
      DisplayObject *MovieClip; // x21
      float v8; // s0
      long double v9; // q0
      const String *v10; // x2
      String v12; // [xsp+0h] [xbp-50h] BYREF
      String v13; // [xsp+18h] [xbp-38h] BYREF
    
      String::String(&v13, "sc/ui.sc");
      MovieClip = StringTable::getMovieClip((#1308 *)&v13, a2, v6);
      String::~String();
      v8 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)MovieClip + 96LL))(MovieClip);
      *(__n128 *)&v9 = DisplayObject::setY(MovieClip, floorf(v8));
      (*(void (__fastcall **)(_QWORD *, DisplayObject *, _QWORD, long double))(*a1 + 280LL))(a1, MovieClip, 0, v9);
      *((_BYTE *)a1 + 64) = 1;
      *(_BYTE *)(a1[12] + 64LL) = 1;
      String::String(&v12, "sc/ui.sc");
      a1[37] = StringTable::getMovieClip((#1308 *)&v12, a3, v10);
      String::~String();
      return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 160LL))(a1, a1[37]);
    }

    void __fastcall StreamItem::~StreamItem(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
    
      *(_QWORD *)a1 = off_10046A030;
      *(_QWORD *)(a1 + 264) = &off_10046A1D8;
      v2 = *(_QWORD *)(a1 + 272);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
        v3 = *(_QWORD *)(a1 + 272);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *(_QWORD *)(a1 + 272) = 0;
      }
      v4 = *(_QWORD *)(a1 + 296);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_QWORD *)(a1 + 296) = 0;
      v5 = *(_QWORD *)(a1 + 288);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *(_DWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 280) = 0;
      *(_DWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      String::operator=(a1 + 328, "StreamItem");
      String::~String();
      GameButton::~GameButton((DeviceLinkCodeReceivedScreen *)a1);
    }

    // attributes: thunk
    void __fastcall StreamItem::~StreamItem(__int64 a1)
    {
      __ZN10StreamItemD2Ev(a1);
    }

    void __fastcall StreamItem::~StreamItem(void *a1)
    {
      StreamItem::~StreamItem((__int64)a1);
      operator delete(a1);
    }

    void __fastcall StreamItem::update(_DWORD *a1, float a2)
    {
      int isRemoved; // w0
      long double v5; // q0
      float v6; // s1
      float v7; // s1
      float v8; // s0
      xTimer *v9; // x20
      uint64_t NativeTime; // x0
      unsigned __int64 v11; // x2
      float v12; // s0
      const char *v13; // x1
      int v14; // w21
      void *String; // x20
      bool v16; // w2
      String v17; // [xsp+0h] [xbp-90h] BYREF
      String v18; // [xsp+18h] [xbp-78h] BYREF
      String v19; // [xsp+30h] [xbp-60h] BYREF
      String v20; // [xsp+48h] [xbp-48h] BYREF
    
      isRemoved = StreamEntry::isRemoved(*((_QWORD *)a1 + 34));
      LODWORD(v5) = 1.0;
      v6 = -1.0;
      if ( !isRemoved )
        v6 = 1.0;
      v7 = *((float *)a1 + 76) + (float)((float)(a2 + a2) * v6);
      if ( v7 < 0.0 )
        v7 = 0.0;
      if ( v7 > 1.0 )
        v7 = 1.0;
      *((float *)a1 + 76) = v7;
      if ( v7 <= 0.1 )
        *(float *)&v5 = 0.0;
      (*(void (__fastcall **)(_DWORD *, long double))(*(_QWORD *)a1 + 80LL))(a1, v5);
      (*(void (__fastcall **)(_DWORD *, float))(*(_QWORD *)a1 + 40LL))(
        a1,
        (float)(*((float *)a1 + 76) + *((float *)a1 + 76)) - (float)(*((float *)a1 + 76) * *((float *)a1 + 76)));
      v8 = *((float *)a1 + 80) - a2;
      *((float *)a1 + 80) = v8;
      if ( v8 <= 0.0 )
      {
        v9 = (xTimer *)*((_QWORD *)a1 + 39);
        NativeTime = xTimer::getNativeTime();
        xTimer::getPassedTimeMs(v9, NativeTime, v11);
        v14 = StreamEntry::getAgeSeconds(*((_QWORD *)a1 + 34)) + (int)v12 / 1000;
        if ( v14 >= 60 )
        {
          String = StringTable::getString((#1308 *)"TID_STREAM_ENTRY_AGE", v13);
          String::String(&v19, "<time>");
          TimeUtil::getTimeString((TimeUtil *)(unsigned int)(60 * (v14 / 60)), 0, v16);
          String::replace(&v20, String, &v19, &v18);
          String::~String();
          String::~String();
          String::String(&v17, &v20);
          StreamItem::setTimeText((StreamItem *)a1, &v17);
          String::~String();
          String::~String();
        }
        a1[80] = 1114636288;
      }
    }

    __int64 __fastcall StreamItem::setTimeText(__int64 a1, const String *a2)
    {
      MovieClip *v3; // x0
    
      v3 = *(MovieClip **)(a1 + 296);
      if ( !v3 )
        v3 = *(MovieClip **)(a1 + 96);
      return MovieClip::setText(v3, "time", a2);
    }

    void __fastcall StreamItem::buttonClicked(StarHud *a1)
    {
      LogicPageOpenedCommand *v2; // x0
      LogicPageOpenedCommand *Instance; // x0
      __darwin_pthread_mutex_t *ClanPage; // x0
      DisplayObject **v5; // x20
      CharacterAnimator *v6; // x0
    
      v2 = (LogicPageOpenedCommand *)StreamItem::closePopovers(a1);
      if ( ((unsigned __int8)v2 & 1) == 0 )
      {
        Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(v2);
        ClanPage = (__darwin_pthread_mutex_t *)HomeScreen::getClanPage(Instance);
        v5 = (DisplayObject **)ClanPage;
        if ( ClanPage )
        {
          v6 = (CharacterAnimator *)AllianceStream::getInstance(ClanPage);
          if ( (AllianceStream::isChallenging(v6) & 1) == 0 )
            ClanPage::openContextMenu(v5, (__int64)a1);
        }
      }
    }

    __int64 __fastcall StreamItem::closePopovers(StarHud *this)
    {
      __int64 Instance; // x0
      LogicPageOpenedCommand *VisiblePopOver; // x0
      __int64 v3; // x19
      LogicPageOpenedCommand *v4; // x0
      __int64 ClanPage; // x0
      ColorTransform *v6; // x20
    
      Instance = GUI::getInstance(this);
      VisiblePopOver = (LogicPageOpenedCommand *)GUI::getVisiblePopOver(Instance);
      if ( VisiblePopOver )
      {
        VisiblePopOver = (LogicPageOpenedCommand *)Popover::fadeOut((__int64)VisiblePopOver);
        v3 = 1;
      }
      else
      {
        v3 = 0;
      }
      v4 = (LogicPageOpenedCommand *)HomeScreen::getInstance(VisiblePopOver);
      ClanPage = HomeScreen::getClanPage(v4);
      v6 = (ColorTransform *)ClanPage;
      if ( ClanPage && ClanPage::getContextMenu(ClanPage) )
      {
        ClanPage::closeContextMenu(v6);
        return 1;
      }
      return v3;
    }

    float __fastcall StreamItem::getItemHeight(StarHud *this)
    {
      return *((float *)this + 70)
           * (float)(1.0
                   - (float)((float)(1.0 - *((float *)this + 76))
                           * (float)((float)(1.0 - *((float *)this + 76)) * (float)(1.0 - *((float *)this + 76)))));
    }

    const char *__fastcall StreamItem::getRoleTid(StarHud *this)
    {
      if ( (unsigned int)((_DWORD)this - 2) > 2 )
        return "TID_ALLIANCE_ROLE_MEMBER";
      else
        return off_10046AE60[(int)this - 2];
    }

    void __fastcall StreamItem::refreshEntry(__int64 a1, __int64 a2)
    {
      __int64 v4; // x0
      const char *v5; // x1
      AllianceStream *SenderAvatarId; // x0
      const LogicLong *v7; // x1
      const char *v8; // x1
      const String *String; // x0
      __int64 TextFieldByName; // x0
      MovieClip *v11; // x21
      const char *v12; // x1
      unsigned int v13; // w8
      char *v14; // x0
      const String *v15; // x0
      __int64 v16; // x0
      __int64 v17; // x0
      String v18; // [xsp+0h] [xbp-50h] BYREF
      String v19; // [xsp+18h] [xbp-38h] BYREF
    
      v4 = *(_QWORD *)(a1 + 272);
      if ( v4 && (unsigned int)StreamEntry::isRemoved(v4) )
        Debugger::warning((__siginfo *)"StreamItem::refreshEntry: trying to refresh removed entry", v5);
      *(_QWORD *)(a1 + 312) = xTimer::getNativeTime();
      *(_DWORD *)(a1 + 320) = 0;
      SenderAvatarId = (AllianceStream *)StreamEntry::getSenderAvatarId(a2);
      if ( (unsigned int)AllianceStream::isMyAvatarId(SenderAvatarId, v7) )
        String = (const String *)StringTable::getString((#1308 *)"TID_STREAM_SENDER_YOU", v8);
      else
        String = (const String *)StreamEntry::getSenderName(a2);
      String::String(&v19, String);
      TextFieldByName = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), "player_name");
      if ( TextFieldByName )
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, &v19, 0);
      v11 = *(MovieClip **)(a1 + 96);
      v13 = StreamEntry::getSenderRole(a2) - 2;
      if ( v13 > 2 )
        v14 = "TID_ALLIANCE_ROLE_MEMBER";
      else
        v14 = off_10046AE60[v13];
      v15 = (const String *)StringTable::getString((#1308 *)v14, v12);
      MovieClip::setText(v11, "member", v15);
      if ( (int)StreamEntry::getAgeSeconds(a2) <= 59 )
      {
        String::String(&v18, "");
        StreamItem::setTimeText(a1, &v18);
        String::~String();
      }
      v16 = *(_QWORD *)(a1 + 272);
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
        v17 = *(_QWORD *)(a1 + 272);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        *(_QWORD *)(a1 + 272) = 0;
      }
      *(_QWORD *)(a1 + 272) = a2;
      String::~String();
    }

    __int64 __fastcall StreamItem::setRemoved(StreamEntry **this)
    {
      return StreamEntry::setRemoved(*(this + 34));
    }

    bool __fastcall StreamItem::shouldDestroy(StarHud *this)
    {
      return (unsigned int)StreamEntry::isRemoved(*((_QWORD *)this + 34)) && *((float *)this + 76) <= 0.0;
    }

    void __fastcall StreamItem::updateVisible(StarHud *this, float a2)
    {
      ;
    }

    __int64 __fastcall StreamItem::needsAction(StarHud *this, float a2)
    {
      return 0;
    }

    __int64 __fastcall StreamItem::getAnalyticsName(StarHud *this)
    {
      return (__int64)this + 328;
    }

}; // end class StreamItem
