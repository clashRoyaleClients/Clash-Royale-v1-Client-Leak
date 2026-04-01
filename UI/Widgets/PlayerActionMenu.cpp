class PlayerActionMenu
{
public:

    void __fastcall PlayerActionMenu::PlayerActionMenu(
            PlayerActionMenu *this,
            #1236 *a2,
            #1236 *a3,
            #1236 *a4,
            int a5,
            int a6,
            int a7)
    {
      _QWORD *v13; // x28
      DeviceLinkCodeReceivedScreen **v14; // x26
      vm_address_t *v15; // x0
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x25
      __int64 Id; // x22
      #1257 *MovieClipByName; // x0
      #1257 *v20; // x22
      DeviceLinkCodeReceivedScreen *v21; // x23
      __int64 v22; // x21
      void (__fastcall *v23)(__int64, __int64, __int64); // x23
      const char *v24; // x1
      __int64 v25; // x0
      MovieClip *v26; // x21
      const char *v27; // x1
      const String *String; // x0
      unsigned __int64 v29; // x28
      #1257 *v30; // x0
      __darwin_pthread_mutex_t *v31; // x22
      #1077 *v32; // x0
      __darwin_pthread_mutex_t *AllianceId; // x0
      DeviceLinkCodeReceivedScreen *v34; // x27
      __int64 v35; // x27
      const char *v36; // x1
      __int64 v37; // x0
      MovieClip *v38; // x27
      const char *v39; // x1
      const String *v40; // x0
      #1077 *v41; // x0
      DeviceLinkCodeReceivedScreen *v42; // x27
      DeviceLinkCodeReceivedScreen *v43; // x27
      void (__fastcall *v44)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x20
      const char *v45; // x1
      __int64 v46; // x0
      MovieClip *v47; // x27
      const char *v48; // x1
      const String *v49; // x0
      #1077 *v50; // x0
      DeviceLinkCodeReceivedScreen *v51; // x24
      __int64 v52; // x24
      void (__fastcall *v53)(__int64, __int64, __int64); // x20
      const char *v54; // x1
      __int64 v55; // x0
      MovieClip *v56; // x24
      const char *v57; // x1
      const String *v58; // x0
      #1077 *v59; // x0
      __darwin_pthread_mutex_t *v60; // x0
      DeviceLinkCodeReceivedScreen *v61; // x23
      __int64 v62; // x23
      void (__fastcall *v63)(__int64, __int64, __int64); // x20
      const char *v64; // x1
      __int64 v65; // x0
      MovieClip *v66; // x23
      const char *v67; // x1
      const String *v68; // x0
      #1077 *v69; // x0
      DeviceLinkCodeReceivedScreen *v70; // x23
      __int64 v71; // x21
      void (__fastcall *v72)(__int64, __int64, __int64); // x20
      const char *v73; // x1
      __int64 v74; // x0
      MovieClip *v75; // x21
      const char *v76; // x1
      const String *v77; // x0
      #1257 *v78; // x0
      const char *v79; // x1
      #1257 *v80; // x21
      __int64 v81; // x24
      internal_t *pHeap; // x1
      const char *v83; // x1
      internal_t *p_internal; // x1
      int v85; // w8
      __int64 v86; // x23
      internal_t *v87; // x1
      __int64 v88; // x22
      const char *v89; // x1
      internal_t *v90; // x1
      __int64 v91; // x22
      const char *v92; // x1
      double v93; // d0
      internal_t *v94; // x1
      String v95; // [xsp+18h] [xbp-158h] BYREF
      String v96; // [xsp+30h] [xbp-140h] BYREF
      String v97; // [xsp+48h] [xbp-128h] BYREF
      String v98; // [xsp+60h] [xbp-110h] BYREF
      String v99; // [xsp+78h] [xbp-F8h] BYREF
      String v100; // [xsp+90h] [xbp-E0h] BYREF
      String v101; // [xsp+A8h] [xbp-C8h] BYREF
      String v102; // [xsp+C0h] [xbp-B0h] BYREF
      String v103; // [xsp+D8h] [xbp-98h] BYREF
      String v104; // [xsp+F0h] [xbp-80h] BYREF
      String v105; // [xsp+108h] [xbp-68h] BYREF
    
      PlayerContextMenuBase::PlayerContextMenuBase(this, a7);
      *(_QWORD *)this = off_100464308;
      *((_QWORD *)this + 12) = &off_1004644F8;
      String::String((String *)((char *)this + 256));
      *((_QWORD *)this + 29) = 0;
      v13 = (_QWORD *)((char *)this + 232);
      v14 = (DeviceLinkCodeReceivedScreen **)((char *)this + 280);
      *((_QWORD *)this + 30) = 0;
      memset((char *)this + 280, 0, 0x41u);
      v15 = (vm_address_t *)String::operator=((char *)this + 256, "");
      *((_QWORD *)this + 31) = a3;
      *((_QWORD *)this + 29) = a2;
      *((_QWORD *)this + 30) = a4;
      Instance = GameMode::getInstance(v15);
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(Instance);
      Id = LogicClientAvatar::getId(PlayerAvatar);
      if ( !*((_QWORD *)this + 29) )
        goto LABEL_6;
      if ( (LogicLong::equals(*((_QWORD *)this + 29), Id) & 1) != 0 )
      {
        if ( *v13 && (unsigned int)LogicLong::equals(*v13, Id) )
        {
          MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(*((#1257 **)this + 14), "menu_bubble");
          v20 = (#1257 *)MovieClip::getMovieClipByName(MovieClipByName, "bubble");
          v21 = (DeviceLinkCodeReceivedScreen *)operator new(264);
          GameButton::GameButton(v21);
          *((_QWORD *)this + 38) = v21;
          CustomButton::setButtonListener(v21, (char *)this + 96);
          v22 = *((_QWORD *)this + 38);
          v23 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 280LL);
          String::getFormatted((__int64 *)&v100.m_length, (String *)"Button%i", v24, 1);
          v25 = MovieClip::getMovieClipByName(v20, &v100);
          v23(v22, v25, 1);
          String::~String(&v100);
          v26 = *(MovieClip **)(*((_QWORD *)this + 38) + 96LL);
          String = (const String *)StringTable::getString((#1308 *)"TID_VIEW_PROFILE_BUTTON", v27);
          MovieClip::setText(v26, "Text", String);
          (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)v20 + 160LL))(v20, *((_QWORD *)this + 38));
          LODWORD(v29) = 1;
          goto LABEL_23;
        }
    LABEL_6:
        LODWORD(v29) = 0;
        goto LABEL_23;
      }
      v30 = (#1257 *)MovieClip::getMovieClipByName(*((#1257 **)this + 14), "menu_bubble");
      v31 = (__darwin_pthread_mutex_t *)MovieClip::getMovieClipByName(v30, "bubble");
      v32 = (#1077 *)AllianceStream::getInstance(v31);
      AllianceId = (__darwin_pthread_mutex_t *)AllianceStream::actionAvailable(v32, 1);
      if ( (_DWORD)AllianceId )
      {
        v34 = (DeviceLinkCodeReceivedScreen *)operator new(264);
        GameButton::GameButton(v34);
        *((_QWORD *)this + 38) = v34;
        CustomButton::setButtonListener(v34, (char *)this + 96);
        v35 = *((_QWORD *)this + 38);
        v29 = *(_QWORD *)(*(_QWORD *)v35 + 280LL);
        String::getFormatted((__int64 *)&v105.m_length, (String *)"Button%i", v36, 1);
        v37 = MovieClip::getMovieClipByName((#1257 *)v31, &v105);
        ((void (__fastcall *)(__int64, __int64, __int64))v29)(v35, v37, 1);
        String::~String(&v105);
        v38 = *(MovieClip **)(*((_QWORD *)this + 38) + 96LL);
        v40 = (const String *)StringTable::getString((#1308 *)"TID_VIEW_PROFILE_BUTTON", v39);
        MovieClip::setText(v38, "Text", v40);
        AllianceId = (__darwin_pthread_mutex_t *)(*(__int64 (__fastcall **)(__darwin_pthread_mutex_t *, _QWORD))(v31->__sig + 160))(
                                                   v31,
                                                   *((_QWORD *)this + 38));
        LODWORD(v29) = 1;
      }
      else
      {
        LODWORD(v29) = 0;
      }
      if ( *((_QWORD *)this + 30) )
      {
        v41 = (#1077 *)AllianceStream::getInstance(AllianceId);
        AllianceId = (__darwin_pthread_mutex_t *)AllianceStream::actionAvailable(v41, 3);
        if ( (_DWORD)AllianceId )
        {
          v42 = (DeviceLinkCodeReceivedScreen *)operator new(264);
          GameButton::GameButton(v42);
          *v14 = v42;
          CustomButton::setButtonListener(v42, (char *)this + 96);
          v43 = *v14;
          v44 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)*v14 + 280LL);
          v29 = (unsigned int)(v29 + 1);
          String::getFormatted((__int64 *)&v104.m_length, (String *)"Button%i", v45, v29);
          v46 = MovieClip::getMovieClipByName((#1257 *)v31, &v104);
          v44(v43, v46, 1);
          String::~String(&v104);
          v47 = (MovieClip *)*((_QWORD *)*v14 + 12);
          v49 = (const String *)StringTable::getString((#1308 *)"TID_VIEW_CLAN_BUTTON_CONTEXT", v48);
          MovieClip::setText(v47, "Text", v49);
          AllianceId = (__darwin_pthread_mutex_t *)(*(__int64 (__fastcall **)(__darwin_pthread_mutex_t *, DeviceLinkCodeReceivedScreen *))(v31->__sig + 160))(
                                                     v31,
                                                     *v14);
        }
      }
      if ( a5 )
      {
        v50 = (#1077 *)AllianceStream::getInstance(AllianceId);
        AllianceId = (__darwin_pthread_mutex_t *)AllianceStream::actionAvailable(v50, 7);
        if ( (_DWORD)AllianceId )
        {
          AllianceId = (__darwin_pthread_mutex_t *)LogicClientAvatar::getAllianceId(PlayerAvatar);
          if ( AllianceId )
          {
            AllianceId = (__darwin_pthread_mutex_t *)LogicClientAvatar::getAllianceRole(PlayerAvatar);
            if ( (_DWORD)AllianceId != 1 )
            {
              v51 = (DeviceLinkCodeReceivedScreen *)operator new(264);
              GameButton::GameButton(v51);
              *((_QWORD *)this + 40) = v51;
              CustomButton::setButtonListener(v51, (char *)this + 96);
              v52 = *((_QWORD *)this + 40);
              v53 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v52 + 280LL);
              v29 = (unsigned int)(v29 + 1);
              String::getFormatted((__int64 *)&v103.m_length, (String *)"Button%i", v54, v29);
              v55 = MovieClip::getMovieClipByName((#1257 *)v31, &v103);
              v53(v52, v55, 1);
              String::~String(&v103);
              v56 = *(MovieClip **)(*((_QWORD *)this + 40) + 96LL);
              v58 = (const String *)StringTable::getString((#1308 *)"TID_INVITE_BUTTON", v57);
              MovieClip::setText(v56, "Text", v58);
              AllianceId = (__darwin_pthread_mutex_t *)(*(__int64 (__fastcall **)(__darwin_pthread_mutex_t *, _QWORD))(v31->__sig + 160))(
                                                         v31,
                                                         *((_QWORD *)this + 40));
            }
          }
        }
      }
      if ( a6 )
      {
        v59 = (#1077 *)AllianceStream::getInstance(AllianceId);
        v60 = (__darwin_pthread_mutex_t *)AllianceStream::actionAvailable(v59, 5);
        if ( (_DWORD)v60 )
        {
          v61 = (DeviceLinkCodeReceivedScreen *)operator new(264);
          GameButton::GameButton(v61);
          *((_QWORD *)this + 41) = v61;
          CustomButton::setButtonListener(v61, (char *)this + 96);
          v62 = *((_QWORD *)this + 41);
          v63 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v62 + 280LL);
          v29 = (unsigned int)(v29 + 1);
          String::getFormatted((__int64 *)&v102.m_length, (String *)"Button%i", v64, v29);
          v65 = MovieClip::getMovieClipByName((#1257 *)v31, &v102);
          v63(v62, v65, 1);
          String::~String(&v102);
          v66 = *(MovieClip **)(*((_QWORD *)this + 41) + 96LL);
          v68 = (const String *)StringTable::getString((#1308 *)"TID_REPORT_PLAYER_BUTTON", v67);
          MovieClip::setText(v66, "Text", v68);
          v60 = (__darwin_pthread_mutex_t *)(*(__int64 (__fastcall **)(__darwin_pthread_mutex_t *, _QWORD))(v31->__sig + 160))(
                                              v31,
                                              *((_QWORD *)this + 41));
        }
        v69 = (#1077 *)AllianceStream::getInstance(v60);
        if ( (unsigned int)AllianceStream::actionAvailable(v69, 6) )
        {
          v70 = (DeviceLinkCodeReceivedScreen *)operator new(264);
          GameButton::GameButton(v70);
          *((_QWORD *)this + 42) = v70;
          CustomButton::setButtonListener(v70, (char *)this + 96);
          v71 = *((_QWORD *)this + 42);
          v72 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v71 + 280LL);
          v29 = (unsigned int)(v29 + 1);
          String::getFormatted((__int64 *)&v101.m_length, (String *)"Button%i", v73, v29);
          v74 = MovieClip::getMovieClipByName((#1257 *)v31, &v101);
          v72(v71, v74, 1);
          String::~String(&v101);
          v75 = *(MovieClip **)(*((_QWORD *)this + 42) + 96LL);
          v77 = (const String *)StringTable::getString((#1308 *)"TID_MUTE_PLAYER_BUTTON", v76);
          MovieClip::setText(v75, "Text", v77);
          (*(void (__fastcall **)(__darwin_pthread_mutex_t *, _QWORD))(v31->__sig + 160))(v31, *((_QWORD *)this + 42));
        }
      }
    LABEL_23:
      v78 = (#1257 *)MovieClip::getMovieClipByName(*((#1257 **)this + 14), "menu_bubble");
      v80 = (#1257 *)MovieClip::getMovieClipByName(v78, "bubble");
      LODWORD(v81) = 0;
      while ( (int)v81 <= 4 )
      {
        v81 = (unsigned int)(v81 + 1);
        String::getFormatted((__int64 *)&v99.m_length, (String *)"middle%i", v79, v81);
        if ( v99.m_bytes + 1 >= 9 )
          pHeap = (internal_t *)v99.internal.pHeap;
        else
          pHeap = &v99.internal;
        *(_BYTE *)(MovieClip::getMovieClipByName(v80, (const char *)pHeap) + 8) = 0;
        String::~String(&v99);
        String::getFormatted((__int64 *)&v98.m_length, (String *)"bottom%i", v83, v81);
        if ( v98.m_bytes + 1 >= 9 )
          p_internal = (internal_t *)v98.internal.pHeap;
        else
          p_internal = &v98.internal;
        *(_BYTE *)(MovieClip::getMovieClipByName(v80, (const char *)p_internal) + 8) = 0;
        String::~String(&v98);
      }
      if ( (int)v29 >= 1 )
        v85 = v29;
      else
        v85 = 1;
      if ( v85 <= 5 )
        v86 = (unsigned int)v85;
      else
        v86 = 5;
      String::getFormatted((__int64 *)&v97.m_length, (String *)"middle%i", v79, v86);
      if ( v97.m_bytes + 1 > 8 )
        v87 = (internal_t *)v97.internal.pHeap;
      else
        v87 = &v97.internal;
      v88 = MovieClip::getMovieClipByName(v80, (const char *)v87);
      String::~String(&v97);
      *(_BYTE *)(v88 + 8) = 1;
      String::getFormatted((__int64 *)&v96.m_length, (String *)"bottom%i", v89, v86);
      if ( v96.m_bytes + 1 > 8 )
        v90 = (internal_t *)v96.internal.pHeap;
      else
        v90 = &v96.internal;
      v91 = MovieClip::getMovieClipByName(v80, (const char *)v90);
      String::~String(&v96);
      *(_BYTE *)(v91 + 8) = 1;
      DisplayObject::setY(v80, (float)((float)((float)(5 - (int)v29) * 75.0) / 5.0) + 64.5);
      *(_QWORD *)&v93 = MovieClip::gotoAndPlay((MovieClip *)*((_QWORD *)this + 14), "AppearStart", "AppearEnd").n128_u64[0];
      *((_BYTE *)this + 228) = 0;
      while ( (int)v29 <= 4 )
      {
        v29 = (unsigned int)(v29 + 1);
        String::getFormatted((__int64 *)&v95.m_length, (String *)"Button%i", v92, v93, v29);
        if ( v95.m_bytes + 1 >= 9 )
          v94 = (internal_t *)v95.internal.pHeap;
        else
          v94 = &v95.internal;
        *(_BYTE *)(MovieClip::getMovieClipByName(v80, (const char *)v94) + 8) = 0;
        String::~String(&v95);
      }
    }

    // attributes: thunk
    void __fastcall PlayerActionMenu::PlayerActionMenu(
            PlayerActionMenu *this,
            #1236 *a2,
            #1236 *a3,
            #1236 *a4,
            int a5,
            int a6,
            int a7)
    {
      __ZN16PlayerActionMenuC2EP9LogicLongS1_S1_bbb(this, a2, a3, a4, a5, a6, a7);
    }

    void __fastcall PlayerActionMenu::~PlayerActionMenu(RegionPopup *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      void *v10; // x0
      void *v11; // x0
      void *v12; // x0
    
      *(_QWORD *)this = off_100464308;
      *((_QWORD *)this + 12) = &off_1004644F8;
      v2 = *((_QWORD *)this + 36);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 36) = 0;
      v3 = *((_QWORD *)this + 38);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 38) = 0;
      v4 = *((_QWORD *)this + 37);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 37) = 0;
      v5 = *((_QWORD *)this + 35);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 35) = 0;
      v6 = *((_QWORD *)this + 39);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 39) = 0;
      v7 = *((_QWORD *)this + 41);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_QWORD *)this + 41) = 0;
      v8 = *((_QWORD *)this + 42);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *((_QWORD *)this + 42) = 0;
      v9 = *((_QWORD *)this + 40);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *((_QWORD *)this + 40) = 0;
      v10 = (void *)*((_QWORD *)this + 29);
      if ( v10 )
        operator delete(v10);
      v11 = (void *)*((_QWORD *)this + 30);
      if ( v11 )
        operator delete(v11);
      v12 = (void *)*((_QWORD *)this + 31);
      if ( v12 )
        operator delete(v12);
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      memset((char *)this + 280, 0, 0x41u);
      String::operator=((char *)this + 256, "");
      *((_QWORD *)this + 31) = 0;
      String::~String((String *)((char *)this + 256));
      PlayerContextMenuBase::~PlayerContextMenuBase(this);
    }

    // attributes: thunk
    void __fastcall PlayerActionMenu::~PlayerActionMenu(RegionPopup *this)
    {
      __ZN16PlayerActionMenuD2Ev(this);
    }

    void __fastcall PlayerActionMenu::~PlayerActionMenu(RegionPopup *this)
    {
      PlayerActionMenu::~PlayerActionMenu(this);
      operator delete(this);
    }

    __int64 __fastcall PlayerActionMenu::buttonClicked(__int64 this, #1251 *a2)
    {
      __int64 v2; // x19
      #1054 *v3; // x20
      #1032 *v4; // x21
      #1236 *v5; // x0
      BadgePopup *v6; // x0
      __int64 v7; // x0
      SendAllianceInvitationMessage *v8; // x20
      __int64 v9; // x0
      LogicLong *v10; // x0
      #1054 *v11; // x20
      PlayerInfo *v12; // x21
      #1236 *v13; // x0
      BadgePopup *v14; // x0
      __int64 Instance; // x0
      Stage *v16; // x20
      const char *v17; // x1
      void *String; // x0
      long double v19; // q0
    
      v2 = this;
      if ( *(#1251 **)(this + 320) == a2 )
      {
        v8 = (SendAllianceInvitationMessage *)operator new(80);
        SendAllianceInvitationMessage::SendAllianceInvitationMessage(v8);
        v10 = (LogicLong *)LogicLong::clone(*(_QWORD *)(v2 + 232));
        SendAllianceInvitationMessage::setAvatarId(v8, v10);
        goto LABEL_11;
      }
      if ( *(#1251 **)(this + 288) != a2 && *(#1251 **)(this + 328) != a2 && *(#1251 **)(this + 336) != a2 )
      {
        if ( *(#1251 **)(this + 304) == a2 )
        {
          if ( *(_QWORD *)(this + 248) )
          {
            v11 = (#1054 *)operator new(280);
            AlliancePopup::AlliancePopup(v11);
            v12 = (PlayerInfo *)operator new(336);
            v13 = (#1236 *)LogicLong::clone(*(_QWORD *)(v2 + 248));
            PlayerInfo::PlayerInfo(v12, v13);
            v14 = (BadgePopup *)AlliancePopup::pushScreen(v11, v12);
            Instance = GUI::getInstance(v14);
            this = GUI::showPopup(Instance, v11, 1, 0, 0);
          }
        }
        else
        {
          if ( *(#1251 **)(this + 296) == a2 )
          {
            v16 = (Stage *)GUI::getInstance((BadgePopup *)this);
            String = StringTable::getString((#1308 *)"TID_EDIT_MODE_SAVE_FIRST", v17);
            LODWORD(v19) = 1.0;
            this = GUI::showCenteredFloaterText(v16, (__int64)String, 0xFFFFFFFFLL, v19);
            goto LABEL_12;
          }
          if ( *(#1251 **)(this + 280) == a2 && *(_QWORD *)(this + 240) )
          {
            v3 = (#1054 *)operator new(280);
            AlliancePopup::AlliancePopup(v3);
            v4 = (#1032 *)operator new(336);
            v5 = (#1236 *)LogicLong::clone(*(_QWORD *)(v2 + 240));
            AllianceInfo::AllianceInfo(v4, v5);
            v6 = (BadgePopup *)AlliancePopup::pushScreen(v3, v4);
            v7 = GUI::getInstance(v6);
            GUI::showPopup(v7, v3, 1, 0, 0);
            v8 = (SendAllianceInvitationMessage *)operator new(80);
            AskForAllianceDataMessage::AskForAllianceDataMessage(v8);
            v9 = LogicLong::clone(*(_QWORD *)(v2 + 240));
            AskForAllianceDataMessage::setAllianceId((__int64)v8, v9);
    LABEL_11:
            this = MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v8);
          }
        }
      }
    LABEL_12:
      *(_BYTE *)(v2 + 344) = 1;
      return this;
    }

    __int64 __fastcall PlayerActionMenu::getContextMenuType(RegionPopup *this)
    {
      return 1;
    }

    __int64 __fastcall PlayerActionMenu::setName(RegionPopup *this, const String *a2)
    {
      #1257 *MovieClipByName; // x0
      __int64 v5; // x0
      __int64 TextFieldByName; // x0
    
      MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(*((#1257 **)this + 14), "menu_bubble");
      v5 = MovieClip::getMovieClipByName(MovieClipByName, "bubble");
      TextFieldByName = MovieClip::getTextFieldByName(v5, "player_name");
      if ( TextFieldByName )
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, a2, 0);
      return String::operator=((String *)((char *)this + 256));
    }

    // attributes: thunk
    __int64 __fastcall PlayerActionMenu::update(RegionPopup *this, float a2)
    {
      return PopupBase::update(this, a2);
    }

    void __fastcall PlayerActionMenu::hide(MovieClip **this)
    {
      if ( !*((_BYTE *)this + 228) )
      {
        MovieClip::gotoAndPlay(*(this + 14), "DisappearStart", "DisappearEnd");
        *((_BYTE *)this + 228) = 1;
      }
      *((_BYTE *)this + 64) = 0;
    }

    __int64 __fastcall PlayerActionMenu::getPopupType(RegionPopup *this)
    {
      return 36;
    }

    __int64 __fastcall PlayerActionMenu::shouldClose(RegionPopup *this)
    {
      return *((unsigned __int8 *)this + 344);
    }

}; // end class PlayerActionMenu
