class ChallengeStreamItem
{
public:

    void __fastcall ChallengeStreamItem::~ChallengeStreamItem(#1385 *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10046AAE0;
      *((_QWORD *)this + 33) = &off_10046AC88;
      v2 = *((_QWORD *)this + 45);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 45) = 0;
      StreamItem::~StreamItem((__int64)this);
    }

    // attributes: thunk
    void __fastcall ChallengeStreamItem::~ChallengeStreamItem(#1385 *this)
    {
      __ZN19ChallengeStreamItemD2Ev(this);
    }

    void __fastcall ChallengeStreamItem::~ChallengeStreamItem(#1385 *this)
    {
      ChallengeStreamItem::~ChallengeStreamItem(this);
      operator delete(this);
    }

    __int64 __fastcall ChallengeStreamItem::ChallengeStreamItem(__int64 a1, __int64 a2)
    {
      const String *v4; // x2
      #1308 *MovieClip; // x21
      DeviceLinkCodeReceivedScreen *v6; // x22
      void (__fastcall *v7)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x23
      __int64 MovieClipByName; // x0
      LogicDataTables *TextFieldByName; // x22
      __int64 Globals; // x0
      int v11; // w1
      __int64 v12; // x22
      __int64 Message; // x0
      __int64 v14; // x22
      __int64 SenderName; // x0
      const char *v16; // x1
      unsigned int v17; // w8
      char *v18; // x0
      const String *String; // x0
      String v21; // [xsp+8h] [xbp-78h] BYREF
      String v22; // [xsp+20h] [xbp-60h] BYREF
      String v23; // [xsp+38h] [xbp-48h] BYREF
    
      StreamItem::StreamItem(a1);
      *(_QWORD *)a1 = off_10046AAE0;
      *(_QWORD *)(a1 + 264) = &off_10046AC88;
      *(_QWORD *)(a1 + 352) = a2;
      String::String(&v23, "sc/ui.sc");
      String::String(&v22, "speech_bubble_challenge");
      MovieClip = StringTable::getMovieClip((#1308 *)&v23, &v22, v4);
      String::~String();
      String::~String();
      (*(void (__fastcall **)(__int64, #1308 *, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 0);
      *(_BYTE *)(a1 + 64) = 1;
      *((_BYTE *)MovieClip + 64) = 1;
      *(float *)(a1 + 280) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
      v6 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v6);
      *(_QWORD *)(a1 + 360) = v6;
      v7 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v6 + 280LL);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "button_challenge");
      v7(v6, MovieClipByName, 1);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 360), a1 + 264);
      (*(void (__fastcall **)(#1308 *, _QWORD))(*(_QWORD *)MovieClip + 160LL))(MovieClip, *(_QWORD *)(a1 + 360));
      TextFieldByName = (LogicDataTables *)MovieClip::getTextFieldByName(*(_QWORD *)(*(_QWORD *)(a1 + 360) + 96LL), "txt");
      *(_QWORD *)(a1 + 368) = TextFieldByName;
      Globals = LogicDataTables::getGlobals(TextFieldByName);
      String::valueOf(&v21, (String *)*(unsigned int *)(Globals + 476), v11);
      TextField::setText(TextFieldByName, &v21);
      String::~String();
      if ( ChallengeStreamEntry::getMessage(*(ChallengeStreamEntry **)(a1 + 352)) )
      {
        v12 = MovieClip::getTextFieldByName(MovieClip, "text");
        Message = ChallengeStreamEntry::getMessage(*(ChallengeStreamEntry **)(a1 + 352));
        MovieClipHelper::setTextAndScaleIfNecessary(v12, Message, 0);
      }
      if ( StreamEntry::getSenderName(a2) )
      {
        v14 = MovieClip::getTextFieldByName(MovieClip, "player_name");
        SenderName = StreamEntry::getSenderName(*(_QWORD *)(a1 + 352));
        MovieClipHelper::setTextAndScaleIfNecessary(v14, SenderName, 0);
      }
      v17 = StreamEntry::getSenderRole(a2) - 2;
      if ( v17 > 2 )
        v18 = "TID_ALLIANCE_ROLE_MEMBER";
      else
        v18 = off_10046AE60[v17];
      String = (const String *)StringTable::getString((#1308 *)v18, v16);
      MovieClip::setText(MovieClip, "member", String);
      return a1;
    }

    void __fastcall ChallengeStreamItem::refreshEntry(#1385 *this, #1168 *a2)
    {
      StreamItem::refreshEntry((__int64)this, (__int64)a2);
      *((_QWORD *)this + 44) = *((_QWORD *)this + 34);
    }

    __int64 __fastcall ChallengeStreamItem::update(#1385 *this, float a2)
    {
      #1395 *v3; // x20
      LogicDataTables *v4; // x0
      __int64 Globals; // x0
      const char *v6; // x4
      __int64 SenderAvatarId; // x20
      VisitHomeMessage *Instance; // x0
      __darwin_pthread_mutex_t *AccountId; // x21
      CharacterAnimator *v10; // x0
      char isChallenging; // w22
      char v12; // w0
      __int64 v13; // x1
    
      StreamItem::update(this, a2);
      v3 = (#1395 *)*((_QWORD *)this + 46);
      Globals = LogicDataTables::getGlobals(v4);
      MovieClipHelper::setGoldPriceText(v3, (#1271 *)*(unsigned int *)(Globals + 476), -1, 0, v6);
      SenderAvatarId = StreamEntry::getSenderAvatarId(*((_QWORD *)this + 44));
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      AccountId = (__darwin_pthread_mutex_t *)GameMode::getAccountId(Instance);
      v10 = (CharacterAnimator *)AllianceStream::getInstance(AccountId);
      isChallenging = AllianceStream::isChallenging(v10);
      v12 = LogicLong::equals(AccountId, SenderAvatarId);
      v13 = 1;
      if ( (isChallenging & 1) == 0 && (v12 & 1) == 0 )
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 44) + 48LL))(*((_QWORD *)this + 44), 1);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 152LL))(*((_QWORD *)this + 45), v13);
    }

    void __fastcall ChallengeStreamItem::buttonClicked(#1385 *this, #1251 *a2)
    {
      __int64 v3; // x20
      VisitHomeMessage *Instance; // x0
      __darwin_pthread_mutex_t *AccountId; // x22
      CharacterAnimator *v6; // x0
      int isChallenging; // w21
      __int64 SenderAvatarId; // x0
      BadgePopup *v9; // x0
      const char *v10; // x1
      Stage *v11; // x19
      char *v12; // x0
      BadgePopup *v13; // x0
      LogicDataTables *PlayerAvatar; // x20
      unsigned int *Globals; // x0
      __int64 v16; // x21
      const #1355 *GoldData; // x0
      _BOOL8 hasEnoughResources; // x0
      __int64 v19; // x0
      __int64 Id; // x20
      PiranhaMessage *v21; // x19
      __int64 v22; // x0
      void *String; // x1
    
      if ( *((#1251 **)this + 45) != a2 )
      {
        StreamItem::buttonClicked(this);
        return;
      }
      v3 = *((_QWORD *)this + 34);
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      AccountId = (__darwin_pthread_mutex_t *)GameMode::getAccountId(Instance);
      v6 = (CharacterAnimator *)AllianceStream::getInstance(AccountId);
      isChallenging = AllianceStream::isChallenging(v6);
      SenderAvatarId = StreamEntry::getSenderAvatarId(*((_QWORD *)this + 44));
      v9 = (BadgePopup *)LogicLong::equals(AccountId, SenderAvatarId);
      if ( (_DWORD)v9 )
      {
        v11 = (Stage *)GUI::getInstance(v9);
        v12 = "TID_CHALLENGE_OWN";
    LABEL_14:
        String = StringTable::getString((#1308 *)v12, v10);
        GUI::showCenteredFloaterText(v11, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        return;
      }
      if ( isChallenging )
      {
        v11 = (Stage *)GUI::getInstance(v9);
        v12 = "TID_OWN_CHALLENGE_ALREADY_ACTIVE";
        goto LABEL_14;
      }
      v13 = (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
      if ( (_DWORD)v13 )
      {
        v11 = (Stage *)GUI::getInstance(v13);
        v12 = "TID_CHALLENGE_CLOSED";
        goto LABEL_14;
      }
      GameMode::getInstance();
      PlayerAvatar = (LogicDataTables *)GameMode::getPlayerAvatar();
      Globals = (unsigned int *)LogicDataTables::getGlobals(PlayerAvatar);
      v16 = Globals[119];
      GoldData = (const #1355 *)LogicDataTables::getGoldData((LogicKickAllianceMemberCommand *)Globals);
      hasEnoughResources = LogicClientAvatar::hasEnoughResources(PlayerAvatar, GoldData, v16, 0, 0, 0);
      if ( !hasEnoughResources )
      {
        v11 = (Stage *)GUI::getInstance((BadgePopup *)hasEnoughResources);
        v12 = "TID_NOT_ENOUGH_GOLD";
        goto LABEL_14;
      }
      v19 = *((_QWORD *)this + 34);
      if ( v19 )
      {
        Id = StreamEntry::getId(v19);
        v21 = (PiranhaMessage *)operator new(80);
        AcceptChallengeMessage::AcceptChallengeMessage((__int64)v21);
        v22 = LogicLong::clone(Id);
        AcceptChallengeMessage::setEntryId((__int64)v21, v22);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v21);
        ClanPage::sm_pendingGoToClan = 1;
      }
    }

}; // end class ChallengeStreamItem
