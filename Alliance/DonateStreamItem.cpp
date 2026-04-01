class DonateStreamItem
{
public:

    void __fastcall DonateStreamItem::DonateStreamItem(DonateStreamItem *this, #1168 *a2)
    {
      const String *v4; // x2
      #1308 *MovieClip; // x22
      #1257 *v6; // x1
      __int64 v7; // x0
      #1271 *TextFieldByName; // x22
      DeviceLinkCodeReceivedScreen *v9; // x23
      void (__fastcall *v10)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x24
      __int64 MovieClipByName; // x0
      DeviceLinkCodeReceivedScreen *v12; // x24
      void (__fastcall *v13)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x25
      __int64 v14; // x0
      GameButton *v15; // x24
      const char *v16; // x1
      const String *String; // x0
      #1271 *v18; // x0
      #1271 *v19; // x0
      long double v20; // q0
      __int64 v21; // x23
      float v22; // s8
      float v23; // s10
      float v24; // s9
      float v25; // s11
      int v26; // w2
      __int64 v27; // x22
      float v28; // s9
      float v29; // s8
      #1249 *v30; // x21
      long double Width; // q0
      void (__fastcall *v32)(#1249 *); // x24
      long double v33; // q0
      long double v34; // q0
      #1249 *v35; // [xsp+8h] [xbp-B8h] BYREF
      __int128 v36; // [xsp+10h] [xbp-B0h] BYREF
      Rect v37[2]; // [xsp+20h] [xbp-A0h] BYREF
      String v38; // [xsp+30h] [xbp-90h] BYREF
      String v39; // [xsp+48h] [xbp-78h] BYREF
    
      StreamItem::StreamItem((__int64)this);
      *((_QWORD *)this + 52) = 0;
      *(_QWORD *)this = off_10046A750;
      *((_QWORD *)this + 50) = 0;
      *((_QWORD *)this + 51) = 0;
      *((_DWORD *)this + 98) = 0;
      *((_QWORD *)this + 33) = &off_10046A8F8;
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 45) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_WORD *)this + 176) = 257;
      String::String(&v39, "sc/ui.sc");
      String::String(&v38, "speech_bubble_requests_04");
      MovieClip = StringTable::getMovieClip((#1308 *)&v39, &v38, v4);
      String::~String();
      String::~String();
      DropGUIContainer::putLocalizedTIDsToTextFields(MovieClip, v6);
      (*(void (__fastcall **)(DonateStreamItem *, #1308 *, _QWORD))(*(_QWORD *)this + 280LL))(this, MovieClip, 0);
      *((float *)this + 70) = (*(float (__fastcall **)(DonateStreamItem *))(*(_QWORD *)this + 96LL))(this);
      *((_BYTE *)this + 64) = 1;
      v7 = *((_QWORD *)this + 12);
      *(_BYTE *)(v7 + 64) = 1;
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v7, "cards");
      Rect::Rect(v37);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v37);
      v9 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v9);
      *((_QWORD *)this + 45) = v9;
      v10 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v9 + 288LL);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "info");
      v10(v9, MovieClipByName, 1);
      CustomButton::setButtonListener(*((_QWORD *)this + 45), (char *)this + 264);
      *(_BYTE *)(*((_QWORD *)this + 45) + 64LL) = 1;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 160LL))(*((_QWORD *)this + 12));
      v12 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v12);
      *((_QWORD *)this + 46) = v12;
      v13 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v12 + 288LL);
      v14 = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "donate_button");
      v13(v12, v14, 1);
      v15 = (GameButton *)*((_QWORD *)this + 46);
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_DONATE", v16);
      GameButton::setText(v15, "txt", String);
      CustomButton::setButtonListener(*((_QWORD *)this + 46), (char *)this + 264);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 160LL))(
        *((_QWORD *)this + 12),
        *((_QWORD *)this + 46));
      if ( (*(unsigned int (__fastcall **)(#1168 *))(*(_QWORD *)a2 + 32LL))(a2) == 1 )
      {
        v18 = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 12), "next_upgrade");
        *((_QWORD *)this + 47) = v18;
        if ( v18 )
        {
          TextField::setAlign(v18, 0);
          fixTF(*((TextField **)this + 47));
        }
        v19 = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 12), "cards_left");
        *((_QWORD *)this + 48) = v19;
        if ( v19 )
        {
          TextField::setAlign(v19, 0);
          fixTF(*((TextField **)this + 48));
          v20 = DisplayObject::getX(*((_QWORD *)this + 48));
          *((_DWORD *)this + 98) = LODWORD(v20);
        }
        v21 = *((_QWORD *)a2 + 9);
        v22 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName)));
        v23 = *(float *)&v37[0].top;
        v24 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(TextFieldByName)));
        v25 = *(float *)&v37[0].bottom;
        Rect::Rect((Rect *)&v36);
        v27 = 0;
        v28 = v24 + v25;
        v29 = v22 + v23;
        while ( v27 < (int)LogicMath::min((LogicMath *)*(unsigned int *)(v21 + 12), 1, v26) )
        {
          v30 = (#1249 *)operator new(328);
          DonateItem::DonateItem(v30, this, *(_QWORD *)(*(_QWORD *)v21 + 8 * v27));
          v35 = v30;
          Width = Rect::getWidth(v37);
          DisplayObject::setWidth(v30, *(float *)&Width);
          v32 = *(void (__fastcall **)(#1249 *))(*(_QWORD *)v30 + 40LL);
          (*(void (__fastcall **)(#1249 *))(*(_QWORD *)v30 + 64LL))(v30);
          v32(v30);
          DisplayObject::getBounds(v30, 0, &v36);
          v33 = Rect::getWidth(&v36);
          *(__n128 *)&v34 = DisplayObject::setPixelSnappedXY(
                              v30,
                              v29 + (float)(*(float *)&v33 * 0.5),
                              v28 - *((float *)&v36 + 1));
          (*(void (__fastcall **)(_QWORD, #1249 *, long double))(**((_QWORD **)this + 12) + 160LL))(
            *((_QWORD *)this + 12),
            v30,
            v34);
          std::vector<DonateItem *>::push_back((char *)this + 400, &v35);
          v29 = v29 + 0.0;
          ++v27;
        }
        Rect::~Rect((Rect *)&v36);
      }
      Rect::~Rect(v37);
    }

    void __fastcall DonateStreamItem::~DonateStreamItem(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      _QWORD *v4; // x8
      _BYTE *v5; // x9
      unsigned __int64 v6; // x10
      unsigned int v7; // w21
      __int64 v8; // x0
    
      *(_QWORD *)a1 = off_10046A750;
      *(_QWORD *)(a1 + 264) = &off_10046A8F8;
      v2 = *(_QWORD *)(a1 + 360);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 360) = 0;
      v3 = *(_QWORD *)(a1 + 368);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_QWORD *)(a1 + 368) = 0;
      v4 = *(_QWORD **)(a1 + 400);
      v5 = *(_BYTE **)(a1 + 408);
      if ( v5 == (_BYTE *)v4 )
      {
        v4 = *(_QWORD **)(a1 + 408);
      }
      else
      {
        v6 = 0;
        v7 = 1;
        do
        {
          v8 = v4[v6];
          if ( v8 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
            v4 = *(_QWORD **)(a1 + 400);
            v5 = *(_BYTE **)(a1 + 408);
          }
          v6 = v7++;
        }
        while ( v6 < (v5 - (_BYTE *)v4) >> 3 );
      }
      *(_DWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      *(_QWORD *)(a1 + 384) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_WORD *)(a1 + 352) = 257;
      if ( v4 )
        operator delete(v4);
      StreamItem::~StreamItem(a1);
    }

    // attributes: thunk
    void __fastcall DonateStreamItem::~DonateStreamItem(__int64 a1)
    {
      __ZN16DonateStreamItemD2Ev(a1);
    }

    void __fastcall DonateStreamItem::~DonateStreamItem(void *a1)
    {
      DonateStreamItem::~DonateStreamItem((__int64)a1);
      operator delete(a1);
    }

    void __fastcall DonateStreamItem::refreshEntry(__int64 a1, LogicRandom *a2)
    {
      MovieClip *v4; // x20
      const String *Message; // x0
      int UsedCapacity; // w22
      int TotalCapacity; // w21
      __int64 v8; // x22
      const char *v9; // x1
      int v10; // w23
      const char *v11; // x1
      #1257 *MovieClipByName; // x0
      #1257 *v13; // x20
      int TotalFrames; // w21
      int v15; // w0
      int v16; // w3
      int v17; // w0
      __int64 v18[3]; // [xsp+8h] [xbp-D8h] BYREF
      String v19; // [xsp+20h] [xbp-C0h] BYREF
      _QWORD v20[3]; // [xsp+38h] [xbp-A8h] BYREF
      __int64 v21[3]; // [xsp+50h] [xbp-90h] BYREF
      String v22; // [xsp+68h] [xbp-78h] BYREF
      _QWORD v23[3]; // [xsp+80h] [xbp-60h] BYREF
      String v24; // [xsp+98h] [xbp-48h] BYREF
    
      StreamItem::refreshEntry(a1, (__int64)a2);
      if ( (*(unsigned int (__fastcall **)(LogicRandom *))(*(_QWORD *)a2 + 32LL))(a2) == 1 )
      {
        *(_BYTE *)(a1 + 353) = 1;
        v4 = *(MovieClip **)(a1 + 96);
        Message = (const String *)DonateStreamEntry::getMessage(a2);
        MovieClip::setText(v4, "text", Message);
        String::String(&v24, "<used>/<total>");
        LODWORD(v4) = DonateStreamEntry::getSmallestCapacityDelta(a2);
        UsedCapacity = DonateStreamEntry::getUsedCapacity(a2);
        TotalCapacity = DonateStreamEntry::getTotalCapacity(a2);
        String::String(&v22, "<used>");
        v8 = (unsigned int)(UsedCapacity / (int)v4);
        String::getFormatted(v21, (String *)"%i", v9, v8);
        String::replace(v23, &v24, &v22, v21);
        String::operator=(&v24);
        String::~String();
        String::~String();
        String::~String();
        String::String(&v19, "<total>");
        v10 = TotalCapacity / (int)v4;
        String::getFormatted(v18, (String *)"%i", v11, (unsigned int)(TotalCapacity / (int)v4));
        String::replace(v20, &v24, &v19, v18);
        String::operator=(&v24);
        String::~String();
        String::~String();
        String::~String();
        MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "donation_progress");
        v13 = MovieClipByName;
        if ( MovieClipByName )
        {
          TotalFrames = MovieClip::getTotalFrames(MovieClipByName);
          v15 = MovieClip::getTotalFrames(v13);
          v17 = LogicMath::clamp((#1237 *)(unsigned int)(TotalFrames * (int)v8 / v10), 0, v15 - 1, v16);
          MovieClip::gotoAndStopFrameIndex(v13, v17);
        }
        MovieClip::setText(*(MovieClip **)(a1 + 96), "donation_amount", &v24);
        String::~String();
      }
    }

    // attributes: thunk
    void __fastcall DonateStreamItem::update(_DWORD *this, float a2)
    {
      StreamItem::update(this, a2);
    }

    void __fastcall DonateStreamItem::updateVisible(OfferChestForCoOpenMessage *this, float a2)
    {
      __int64 v4; // x20
      _QWORD *v5; // x8
      void (__fastcall *v6)(__int64, _BOOL8); // x21
      _BOOL8 v7; // x1
      __int64 Instance; // x0
      __int64 Home; // x0
      TimeUtil *DonationCooldownSeconds; // x20
      __int64 MovieClipByName; // x0
      bool v12; // w2
      MovieClip *v13; // x21
      __int64 v14; // x8
      unsigned __int64 v15; // x9
      bool v16; // w25
      unsigned int v17; // w27
      __int64 v18; // x22
      int canDonate; // w0
      int v20; // w23
      TextField *v21; // x0
      __int64 v22; // x8
      const char *v23; // x1
      #1271 *v24; // x24
      #1249 *v25; // x24
      float v26; // s9
      long double TextWidth; // q0
      String v28; // [xsp+8h] [xbp-A8h] BYREF
      String v29; // [xsp+20h] [xbp-90h] BYREF
      String v30; // [xsp+38h] [xbp-78h] BYREF
    
      *((_BYTE *)this + 353) = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 32LL))(*((_QWORD *)this + 34)) == 1 )
      {
        v4 = *((_QWORD *)this + 46);
        if ( v4 )
        {
          v5 = (_QWORD *)*((_QWORD *)this + 50);
          if ( *((_QWORD **)this + 51) != v5 )
          {
            v6 = *(void (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)v4 + 152LL);
            v7 = (DisplayObject::getRenderConfigBits(*v5) & 7) != 0;
            v6(v4, v7);
          }
        }
        Instance = GameMode::getInstance();
        Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
        DonationCooldownSeconds = (TimeUtil *)LogicClientHome::getDonationCooldownSeconds(Home);
        MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "donation_cooldown");
        v13 = (MovieClip *)MovieClipByName;
        if ( MovieClipByName )
        {
          *(_BYTE *)(MovieClipByName + 8) = (int)DonationCooldownSeconds > 0;
          if ( (int)DonationCooldownSeconds >= 1 )
          {
            TimeUtil::getTimeString(DonationCooldownSeconds, 1, v12);
            MovieClip::setText(v13, "time_txt", &v30);
            String::~String();
          }
        }
        *((_BYTE *)this + 352) = 0;
        v14 = *((_QWORD *)this + 50);
        if ( *((_QWORD *)this + 51) != v14 )
        {
          v15 = 0;
          v16 = (_DWORD)DonationCooldownSeconds == 0;
          v17 = 1;
          do
          {
            v18 = *(_QWORD *)(v14 + 8 * v15);
            canDonate = DonateStreamItem::canDonate(this, *(_QWORD *)(v18 + 272), 1, 0);
            v20 = canDonate;
            if ( canDonate != *(unsigned __int8 *)(v18 + 265) )
              *(_BYTE *)(v18 + 265) = canDonate;
            DonateItem::update((DonateItem *)v18, a2);
            v21 = (TextField *)*((_QWORD *)this + 48);
            if ( v21 )
            {
              v22 = *((_QWORD *)this + 47);
              if ( v22 )
              {
                *((_BYTE *)v21 + 8) = v16;
                *(_BYTE *)(v22 + 8) = v16;
                TextField::setNumberText(v21, *(_DWORD *)(v18 + 320), 0);
                v24 = (#1271 *)*((_QWORD *)this + 47);
                if ( *(int *)(v18 + 324) < 1 )
                {
                  String::String(&v28, "");
                  TextField::setText(v24, &v28);
                }
                else
                {
                  String::format((String *)"/%d", v23, *(unsigned int *)(v18 + 324));
                  TextField::setText(v24, &v29);
                }
                String::~String();
                v25 = (#1249 *)*((_QWORD *)this + 47);
                v26 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(*((_QWORD *)this + 48))));
                TextWidth = TextField::getTextWidth((TextField *)*((_QWORD *)this + 48));
                DisplayObject::setX(v25, floorf(v26 + *(float *)&TextWidth));
              }
            }
            if ( *(_BYTE *)(v18 + 264) )
            {
              if ( ((v20 ^ 1) & 1) == 0 )
                *((_BYTE *)this + 352) = 1;
            }
            v15 = v17;
            v14 = *((_QWORD *)this + 50);
            ++v17;
          }
          while ( v15 < (*((_QWORD *)this + 51) - v14) >> 3 );
        }
      }
    }

    __int64 __fastcall DonateStreamItem::canDonate(__int64 a1, const char *a2, char a3, int a4)
    {
      tween::Bounce *PlayerAvatar; // x21
      __int64 v8; // x22
      tween::Bounce *v9; // x0
      __int64 Id; // x23
      __int64 Arena; // x0
      __int64 v12; // x0
      __int64 Home; // x23
      const char *v14; // x1
      const String *v15; // x0
      BadgePopup *v16; // x0
      Stage *v17; // x0
      const String *String; // x0
      BadgePopup *v19; // x0
      Stage *Instance; // x0
      __int64 v21; // x19
      __int64 SenderAvatarId; // x0
      const char *v23; // x1
      const String *v24; // x0
      BadgePopup *v25; // x0
      Stage *v26; // x0
      __int64 v27; // x24
      __int64 v28; // x0
      const char *v29; // x1
      __int64 result; // x0
      const char *v31; // x1
      const String *v32; // x0
      BadgePopup *v33; // x0
      Stage *v34; // x0
      DonateItem *v35; // x0
      __int64 SpellDonateLimit; // x20
      const char *v37; // x1
      BadgePopup *v38; // x0
      const String *v39; // x0
      BadgePopup *v40; // x0
      Stage *v41; // x0
      const String *v42; // x0
      BadgePopup *v43; // x0
      Stage *v44; // x0
      void *v45; // x19
      const char *v46; // x1
      Stage *v47; // x0
      String v48; // [xsp+10h] [xbp-130h] BYREF
      String v49; // [xsp+28h] [xbp-118h] BYREF
      String v50; // [xsp+40h] [xbp-100h] BYREF
      String v51; // [xsp+58h] [xbp-E8h] BYREF
      String v52; // [xsp+70h] [xbp-D0h] BYREF
      String v53; // [xsp+88h] [xbp-B8h] BYREF
      String v54; // [xsp+A0h] [xbp-A0h] BYREF
      String v55; // [xsp+B8h] [xbp-88h] BYREF
      String v56; // [xsp+D0h] [xbp-70h] BYREF
      String v57; // [xsp+E8h] [xbp-58h] BYREF
    
      if ( (a3 & 1) == 0 )
      {
        if ( !a4 )
          return 0;
        String = (const String *)StringTable::getString((#1308 *)"TID_DONATE_ERROR_MATERIAL_ZERO", a2);
        v19 = (BadgePopup *)String::String(&v57, String);
        Instance = (Stage *)GUI::getInstance(v19);
        GUI::showCenteredFloaterText(Instance, (__int64)&v57, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
    LABEL_23:
        String::~String();
        return 0;
      }
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      v8 = *(_QWORD *)(a1 + 272);
      GameMode::getInstance();
      v9 = (tween::Bounce *)GameMode::getPlayerAvatar();
      Id = LogicClientAvatar::getId(v9);
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      if ( (DonateStreamEntry::canDonateAnything(v8, Id, 0, Arena) & 1) == 0 )
      {
        if ( a4 )
        {
          v21 = LogicClientAvatar::getId(PlayerAvatar);
          SenderAvatarId = StreamEntry::getSenderAvatarId(v8);
          if ( (unsigned int)LogicLong::equals(v21, SenderAvatarId) )
          {
            v24 = (const String *)StringTable::getString((#1308 *)"TID_DONATE_ERROR_CANNOT_DONATE_YOURSELF", v23);
            v25 = (BadgePopup *)String::String(&v56, v24);
            v26 = (Stage *)GUI::getInstance(v25);
            GUI::showCenteredFloaterText(v26, (__int64)&v56, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          }
          else
          {
            v35 = (DonateItem *)LogicClientAvatar::getArena(PlayerAvatar);
            SpellDonateLimit = LogicArenaData::getSpellDonateLimit(v35);
            String::String(&v55, "");
            if ( (_DWORD)SpellDonateLimit == 1 )
            {
              StringTable::getString((#1308 *)"TID_DONATE_ERROR_CANNOT_DONATE_ANYTHING_SINGLE", v37);
              v38 = (BadgePopup *)String::operator=(&v55);
            }
            else
            {
              v45 = StringTable::getString((#1308 *)"TID_DONATE_ERROR_CANNOT_DONATE_ANYTHING", v37);
              String::String(&v53, "<amount>");
              String::format((String *)"%d", v46, SpellDonateLimit);
              String::replace(&v54, v45, &v53, &v52);
              String::operator=(&v55);
              String::~String();
              String::~String();
              String::~String();
            }
            v47 = (Stage *)GUI::getInstance(v38);
            GUI::showCenteredFloaterText(v47, (__int64)&v55, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          }
          goto LABEL_23;
        }
        return 0;
      }
      v12 = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(v12 + 112));
      if ( (int)LogicClientHome::getDonationCooldownSeconds(Home) >= 1 )
      {
        if ( a4 )
        {
          if ( (unsigned int)LogicClientHome::isDonationCapacityReached(Home) )
          {
            v15 = (const String *)StringTable::getString((#1308 *)"TID_DONATE_ERROR_COOLDOWN", v14);
            v16 = (BadgePopup *)String::String(&v51, v15);
            v17 = (Stage *)GUI::getInstance(v16);
            GUI::showCenteredFloaterText(v17, (__int64)&v51, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          }
          else
          {
            v42 = (const String *)StringTable::getString((#1308 *)"TID_DONATE_ERROR_JOIN_COOLDOWN", v14);
            v43 = (BadgePopup *)String::String(&v50, v42);
            v44 = (Stage *)GUI::getInstance(v43);
            GUI::showCenteredFloaterText(v44, (__int64)&v50, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          }
          goto LABEL_23;
        }
        return 0;
      }
      v27 = LogicClientAvatar::getId(PlayerAvatar);
      v28 = LogicClientAvatar::getArena(PlayerAvatar);
      if ( (DonateStreamEntry::canAddDonation(v8, v27, a2, 0, v28) & 1) == 0 )
      {
        if ( !a4 )
          return 0;
        v39 = (const String *)StringTable::getString((#1308 *)"TID_DONATE_ERROR_NOT_ENOUGH_REQUEST_CAPACITY", v29);
        v40 = (BadgePopup *)String::String(&v49, v39);
        v41 = (Stage *)GUI::getInstance(v40);
        GUI::showCenteredFloaterText(v41, (__int64)&v49, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        goto LABEL_23;
      }
      result = LogicClientHome::canDonate(Home, a2);
      if ( (result & 1) == 0 && ((a4 ^ 1) & 1) == 0 )
      {
        v32 = (const String *)StringTable::getString((#1308 *)"TID_DONATE_ERROR_NOT_ENOUGH_DAILY_CAPACITY", v31);
        v33 = (BadgePopup *)String::String(&v48, v32);
        v34 = (Stage *)GUI::getInstance(v33);
        GUI::showCenteredFloaterText(v34, (__int64)&v48, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        goto LABEL_23;
      }
      return result;
    }

    void __fastcall DonateStreamItem::showRewardFromDonate(BadgePopup *a1, int a2, LogicGameObjectManagerListener **a3)
    {
      __int64 v6; // x8
      unsigned int v7; // w9
      OutOfSyncMessage *v8; // x20
      int v9; // w23
      float MidX; // s8
      float v11; // s9
      BadgePopup *DonateXP; // x0
      int v13; // w21
      float v14; // s9
      __int64 Instance; // x0
      int v16; // s0
      __int64 v17; // x0
      float v18; // [xsp+0h] [xbp-60h]
      __int128 v19; // [xsp+10h] [xbp-50h] BYREF
    
      if ( GUI::getInstance(a1) )
      {
        v6 = *((_QWORD *)a1 + 50);
        v7 = ((unsigned __int64)(*((_QWORD *)a1 + 51) - v6) >> 3) - 1;
        do
          v8 = *(OutOfSyncMessage **)(v6 + 8LL * v7--);
        while ( *((LogicGameObjectManagerListener ***)v8 + 34) != a3 );
        if ( (unsigned int)Sprite::wasVisibleLastFrame(v8) )
        {
          v9 = DataGained::MAX_RANDOM_OFFSET_PERCENT;
          DataGained::MAX_RANDOM_OFFSET_PERCENT = 0;
          Rect::Rect((Rect *)&v19);
          DisplayObject::getBounds(v8, 0, &v19);
          MidX = Rect::getMidX(&v19);
          v11 = *((float *)&v19 + 1);
          DonateXP = (BadgePopup *)LogicSpellData::getDonateXP(a3);
          v13 = (int)DonateXP;
          v14 = v11 + -10.0;
          if ( (int)DonateXP < 1 )
          {
            v16 = 0;
          }
          else
          {
            Instance = GUI::getInstance(DonateXP);
            DonateXP = (BadgePopup *)GUI::addDataGained(Instance, (__int64)v8, 0, v13, 0, MidX, v14, 0.0, 1.0);
            MidX = MidX + 50.0;
            v16 = 1053609165;
          }
          if ( a2 >= 1 )
          {
            v18 = *(float *)&v16;
            v17 = GUI::getInstance(DonateXP);
            GUI::addDataGained(v17, (__int64)v8, (String *)1, a2, 0, MidX, v14, v18, 1.0);
          }
          DataGained::MAX_RANDOM_OFFSET_PERCENT = v9;
          Rect::~Rect((Rect *)&v19);
        }
      }
    }

    __int64 __fastcall DonateStreamItem::needsAction(unsigned __int8 *a1)
    {
      if ( a1[353] )
        (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a1 + 368LL))(a1);
      return a1[352];
    }

    __int64 __fastcall DonateStreamItem::refreshSpell(__int64 result, __int64 a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      unsigned __int64 v4; // x12
      unsigned __int64 v5; // x9
      unsigned int v6; // w11
    
      v2 = *(_QWORD *)(result + 400);
      v3 = *(_QWORD *)(result + 408) - v2;
      if ( v3 )
      {
        v4 = 0;
        v5 = v3 >> 3;
        v6 = 1;
        do
        {
          if ( *(_QWORD *)(*(_QWORD *)(v2 + 8 * v4) + 272LL) == a2 )
            *(_BYTE *)(result + 353) = 1;
          v4 = v6++;
        }
        while ( v4 < v5 );
      }
      return result;
    }

    void __fastcall DonateStreamItem::buttonClicked(StarHud *a1, __int64 a2)
    {
      _QWORD *v3; // x8
      __int64 Instance; // x0
      __int64 Home; // x22
      int DonationCapacityTimerSeconds; // w20
      tween::Bounce *PlayerAvatar; // x0
      DonateItem *Arena; // x21
      const char *v9; // x1
      void *String; // x23
      const char *v11; // x1
      __int64 DailyDonationCapacityLimit; // x0
      const char *v13; // x1
      bool v14; // w2
      BadgePopup *v15; // x0
      BadgePopup *v16; // x0
      Popover *v17; // x20
      const String *v18; // x2
      MovieClip *MovieClip; // x21
      #1271 *TextFieldByName; // x0
      float MidX; // s8
      float v22; // s9
      BadgePopup *v23; // x0
      BadgePopup *v24; // x0
      Rect v25; // [xsp+10h] [xbp-170h] BYREF
      float v26; // [xsp+1Ch] [xbp-164h]
      String v27; // [xsp+20h] [xbp-160h] BYREF
      String v28; // [xsp+38h] [xbp-148h] BYREF
      _BYTE v29[24]; // [xsp+50h] [xbp-130h] BYREF
      String v30; // [xsp+68h] [xbp-118h] BYREF
      _BYTE v31[24]; // [xsp+80h] [xbp-100h] BYREF
      String v32; // [xsp+98h] [xbp-E8h] BYREF
      _BYTE v33[24]; // [xsp+B0h] [xbp-D0h] BYREF
      String v34; // [xsp+C8h] [xbp-B8h] BYREF
      _QWORD v35[3]; // [xsp+E0h] [xbp-A0h] BYREF
      _QWORD v36[3]; // [xsp+F8h] [xbp-88h] BYREF
      _QWORD v37[3]; // [xsp+110h] [xbp-70h] BYREF
      String v38; // [xsp+128h] [xbp-58h] BYREF
    
      if ( *((_QWORD *)a1 + 46) == a2 )
      {
        v3 = (_QWORD *)*((_QWORD *)a1 + 50);
        if ( *((_QWORD **)a1 + 51) != v3 && *v3 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 272LL))(*v3);
      }
      else if ( *((_QWORD *)a1 + 45) == a2 )
      {
        if ( (StreamItem::closePopovers(a1) & 1) == 0 )
        {
          Instance = GameMode::getInstance();
          Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
          DonationCapacityTimerSeconds = LogicClientHome::getDonationCapacityTimerSeconds();
          GameMode::getInstance();
          PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
          Arena = (DonateItem *)LogicClientAvatar::getArena(PlayerAvatar);
          String::String(&v38);
          String = StringTable::getString((#1308 *)"TID_DONATE_COOLDOWN_INFO", v9);
          String::String(&v34, "<capacity>");
          String::format((String *)"%d", v11, *(unsigned int *)(Home + 220));
          String::replace(v35, String, &v34, v33);
          String::String(&v32, "<maxcapacity>");
          DailyDonationCapacityLimit = LogicArenaData::getDailyDonationCapacityLimit(Arena);
          String::format((String *)"%d", v13, DailyDonationCapacityLimit);
          String::replace(v36, v35, &v32, v31);
          String::String(&v30, "<timestamp>");
          TimeUtil::getTimeString(
            (TimeUtil *)(unsigned int)(DonationCapacityTimerSeconds + 60 - DonationCapacityTimerSeconds % 60),
            0,
            v14);
          String::replace(v37, v36, &v30, v29);
          String::operator=(&v38);
          String::~String();
          String::~String();
          String::~String();
          String::~String();
          String::~String();
          String::~String();
          String::~String();
          String::~String();
          String::~String();
          v16 = (BadgePopup *)GUI::getInstance(v15);
          GUI::removePopover(v16);
          v17 = (Popover *)operator new(280);
          Popover::Popover(v17, 1, 100);
          String::String(&v28, "sc/ui.sc");
          String::String(&v27, "popover_text_left");
          MovieClip = (MovieClip *)HomeScreen::getMovieClip((HomeScreen *)&v28, &v27, v18);
          String::~String();
          String::~String();
          TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "text");
          TextField::setMultiLine(TextFieldByName, 1);
          MovieClip::setText(MovieClip, "text", &v38);
          Popover::addContent((__int64)v17, (__int64)MovieClip);
          Rect::Rect(&v25);
          DisplayObject::getGlobalBounds(*((_QWORD *)a1 + 45), &v25);
          MidX = Rect::getMidX(&v25);
          v22 = v26;
          v24 = (BadgePopup *)GUI::getInstance(v23);
          GUI::showPopover(v24, v17, MidX, v22, 2);
          Rect::~Rect(&v25);
          String::~String();
        }
      }
      else
      {
        StreamItem::buttonClicked(a1);
      }
    }

}; // end class DonateStreamItem
