class JoinRequestStreamItem
{
public:

    __int64 __fastcall JoinRequestStreamItem::JoinRequestStreamItem(__int64 a1, LogicCharacterBuffData *a2)
    {
      const String *v4; // x2
      #1308 *MovieClip; // x21
      DeviceLinkCodeReceivedScreen *v6; // x21
      void (__fastcall *v7)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x22
      __int64 MovieClipByName; // x0
      GameButton *v9; // x21
      const char *v10; // x1
      const String *String; // x0
      DeviceLinkCodeReceivedScreen *v12; // x22
      void (__fastcall *v13)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x23
      __int64 v14; // x0
      GameButton *v15; // x22
      const char *v16; // x1
      const String *v17; // x0
      MovieClip *v18; // x21
      const String *Message; // x0
      String v21; // [xsp+0h] [xbp-60h] BYREF
      String v22; // [xsp+18h] [xbp-48h] BYREF
    
      StreamItem::StreamItem(a1);
      *(_QWORD *)a1 = off_10046A588;
      *(_QWORD *)(a1 + 264) = &off_10046A730;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      String::String(&v22, "sc/ui.sc");
      String::String(&v21, "speech_bubble_accept_player");
      MovieClip = StringTable::getMovieClip((#1308 *)&v22, &v21, v4);
      String::~String();
      String::~String();
      (*(void (__fastcall **)(__int64, #1308 *, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 0);
      *(_BYTE *)(a1 + 64) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 96) + 64LL) = 1;
      *(float *)(a1 + 280) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
      v6 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v6);
      *(_QWORD *)(a1 + 352) = v6;
      v7 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v6 + 288LL);
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "accept_button");
      v7(v6, MovieClipByName, 1);
      v9 = *(GameButton **)(a1 + 352);
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_ACCEPT", v10);
      GameButton::setText(v9, "txt", String);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 352), a1 + 264);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 160LL))(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 352));
      v12 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v12);
      *(_QWORD *)(a1 + 360) = v12;
      v13 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v12 + 288LL);
      v14 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "reject_button");
      v13(v12, v14, 1);
      v15 = *(GameButton **)(a1 + 360);
      v17 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_REJECT", v16);
      GameButton::setText(v15, "txt", v17);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 360), a1 + 264);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 160LL))(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 360));
      if ( JoinRequestAllianceStreamEntry::getMessage(a2) )
      {
        v18 = *(MovieClip **)(a1 + 96);
        Message = (const String *)JoinRequestAllianceStreamEntry::getMessage(a2);
        MovieClip::setText(v18, "text", Message);
      }
      return a1;
    }

    void __fastcall JoinRequestStreamItem::~JoinRequestStreamItem(_QWORD *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      *a1 = off_10046A588;
      a1[33] = &off_10046A730;
      v2 = a1[44];
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      a1[44] = 0;
      v3 = a1[45];
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      a1[45] = 0;
      StreamItem::~StreamItem((__int64)a1);
    }

    // attributes: thunk
    void __fastcall JoinRequestStreamItem::~JoinRequestStreamItem(_QWORD *a1)
    {
      __ZN21JoinRequestStreamItemD2Ev(a1);
    }

    void __fastcall JoinRequestStreamItem::~JoinRequestStreamItem(_QWORD *a1)
    {
      JoinRequestStreamItem::~JoinRequestStreamItem(a1);
      operator delete(a1);
    }

    void __fastcall JoinRequestStreamItem::updateVisible(AskForPlayingGamecenterFriendsMessage *this, float a2)
    {
      ;
    }

    void __fastcall JoinRequestStreamItem::refreshEntry(__int64 a1, LogicCharacterBuffData *a2)
    {
      __int64 v4; // x0
      __int64 v5; // x0
      const char *v6; // x1
      const String *v7; // x2
      #1308 *MovieClip; // x21
      __int64 TextFieldByName; // x21
      int State; // w22
      const char *v11; // x1
      __int64 ResponderName; // x20
      char *v13; // x0
      const String *String; // x0
      String v15; // [xsp+8h] [xbp-98h] BYREF
      String v16; // [xsp+20h] [xbp-80h] BYREF
      String v17; // [xsp+38h] [xbp-68h] BYREF
      String v18; // [xsp+50h] [xbp-50h] BYREF
      String v19; // [xsp+68h] [xbp-38h] BYREF
    
      if ( a2 )
      {
        if ( (unsigned int)JoinRequestAllianceStreamEntry::getState(a2) != 1 )
        {
          v4 = *(_QWORD *)(a1 + 352);
          if ( v4 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          *(_QWORD *)(a1 + 352) = 0;
          v5 = *(_QWORD *)(a1 + 360);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          *(_QWORD *)(a1 + 360) = 0;
          String::String(&v19, "sc/ui.sc");
          if ( (unsigned int)JoinRequestAllianceStreamEntry::getState(a2) == 2 )
            v6 = "speech_bubble_accepted";
          else
            v6 = "speech_bubble_rejected";
          String::String(&v18, v6);
          MovieClip = StringTable::getMovieClip((#1308 *)&v19, &v18, v7);
          String::~String();
          String::~String();
          (*(void (__fastcall **)(__int64, #1308 *, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 0);
          *(_BYTE *)(a1 + 64) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 96) + 64LL) = 1;
          *(float *)(a1 + 280) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
        }
        StreamItem::refreshEntry(a1, (__int64)a2);
        if ( (unsigned int)JoinRequestAllianceStreamEntry::getState(a2) != 1 )
        {
          TextFieldByName = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), "accept_status");
          if ( Assert::g_false )
          {
            while ( 1 )
              ;
          }
          State = JoinRequestAllianceStreamEntry::getState(a2);
          ResponderName = JoinRequestAllianceStreamEntry::getResponderName(a2);
          if ( State == 2 )
            v13 = "TID_ALLIANCE_ACCEPTED_BY";
          else
            v13 = "TID_ALLIANCE_REJECTED_BY";
          String = (const String *)StringTable::getString((#1308 *)v13, v11);
          String::String(&v17, String);
          if ( ResponderName )
          {
            String::String(&v15, "<name>");
            String::replace(&v16, &v17, &v15, ResponderName);
            String::operator=(&v17);
            String::~String();
            String::~String();
          }
          MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, &v17, 0);
          String::~String();
        }
      }
      else
      {
        StreamItem::refreshEntry(a1, 0);
      }
      *(float *)(a1 + 280) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    }

    __darwin_pthread_mutex_t *__fastcall JoinRequestStreamItem::update(
            AskForPlayingGamecenterFriendsMessage *this,
            float a2)
    {
      int v3; // w1
      __int64 PlayerAvatar; // x20
      __int64 v5; // x0
      int State; // w0
      __int64 v7; // x8
      __int64 v8; // x8
      __darwin_pthread_mutex_t *result; // x0
      int v10; // w21
      __int64 v11; // x20
      __int64 (__fastcall *v12)(__int64, _QWORD); // x23
      CharacterAnimator *Instance; // x0
      int v14; // w0
      __int64 v15; // x19
      CharacterAnimator *v16; // x0
      __int64 v17; // x1
      __darwin_pthread_mutex_t *v18; // [xsp+8h] [xbp-38h]
    
      StreamItem::update(this, a2);
      GameMode::getInstance();
      PlayerAvatar = GameMode::getPlayerAvatar();
      v5 = *((_QWORD *)this + 34);
      if ( v5 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) == 3 )
      {
        State = JoinRequestAllianceStreamEntry::getState(*((LogicCharacterBuffData **)this + 34));
        v7 = *((_QWORD *)this + 44);
        if ( v7 )
          *(_BYTE *)(v7 + 8) = State == 1;
        v8 = *((_QWORD *)this + 45);
        if ( v8 )
          *(_BYTE *)(v8 + 8) = State == 1;
      }
      result = (__darwin_pthread_mutex_t *)LogicClientAvatar::getAllianceRoleData(PlayerAvatar, v3);
      v10 = (unsigned __int8)result[1].__opaque[35];
      v11 = *((_QWORD *)this + 44);
      if ( v11 )
      {
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 152LL);
        Instance = (CharacterAnimator *)AllianceStream::getInstance(result);
        v14 = AllianceStream::actionAvailable(Instance, 2);
        result = (__darwin_pthread_mutex_t *)v12(v11, (v10 == 0) | v14 ^ 1u);
      }
      v15 = *((_QWORD *)this + 45);
      if ( v15 )
      {
        v18 = *(__darwin_pthread_mutex_t **)(*(_QWORD *)v15 + 152LL);
        v16 = (CharacterAnimator *)AllianceStream::getInstance(v18);
        v17 = (v10 == 0) | (unsigned int)AllianceStream::actionAvailable(v16, 2) ^ 1;
        return (__darwin_pthread_mutex_t *)((__int64 (__fastcall *)(__int64, __int64))v18)(v15, v17);
      }
      return result;
    }

    void __fastcall JoinRequestStreamItem::buttonClicked(AskForPlayingGamecenterFriendsMessage *this, #1251 *a2)
    {
      LogicCharacterBuffData *v4; // x19
      __int64 PlayerAvatar; // x0
      int v6; // w1
      BadgePopup *AllianceRoleData; // x0
      #1251 *v8; // x22
      CharacterAnimator *v9; // x0
      BadgePopup *v10; // x0
      RespondToAllianceJoinRequestMessage *v11; // x21
      __int64 Id; // x0
      __int64 v13; // x0
      Stage *Instance; // x19
      const char *v15; // x1
      void *String; // x1
      long double v17; // q0
      const char *v18; // x1
    
      v4 = (LogicCharacterBuffData *)*((_QWORD *)this + 34);
      if ( *((#1251 **)this + 44) != a2 && *((#1251 **)this + 45) != a2 )
      {
        StreamItem::buttonClicked(this);
        return;
      }
      GameMode::getInstance();
      PlayerAvatar = GameMode::getPlayerAvatar();
      AllianceRoleData = (BadgePopup *)LogicClientAvatar::getAllianceRoleData(PlayerAvatar, v6);
      if ( !*((_BYTE *)AllianceRoleData + 107) )
      {
        Instance = (Stage *)GUI::getInstance(AllianceRoleData);
        String = StringTable::getString((#1308 *)"TID_NO_RIGHTS_TO_ACCEPT_TO_JOIN_REQ", v15);
        *(_OWORD *)&v17 = 0u;
    LABEL_10:
        GUI::showCenteredFloaterText(Instance, (__int64)String, 0xFFFFFFFFLL, v17);
        return;
      }
      v8 = (#1251 *)*((_QWORD *)this + 44);
      v9 = (CharacterAnimator *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)AllianceRoleData);
      v10 = (BadgePopup *)AllianceStream::actionAvailable(v9, 2);
      if ( ((unsigned __int8)v10 & 1) == 0 )
      {
        Instance = (Stage *)GUI::getInstance(v10);
        String = StringTable::getString((#1308 *)"TID_ACCEPT_NOT_AVAILABLE_IN_MODE", v18);
        LODWORD(v17) = 1.0;
        goto LABEL_10;
      }
      if ( (unsigned int)JoinRequestAllianceStreamEntry::getState(v4) == 1 )
      {
        v11 = (RespondToAllianceJoinRequestMessage *)operator new(96);
        RespondToAllianceJoinRequestMessage::RespondToAllianceJoinRequestMessage(v11);
        *((_BYTE *)v11 + 80) = v8 == a2;
        Id = StreamEntry::getId(v4);
        v13 = LogicLong::clone(Id);
        RespondToAllianceJoinRequestMessage::setStreamId((__int64)v11, v13);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v11);
      }
    }

}; // end class JoinRequestStreamItem
