class ConfirmPopup
{
public:

    __int64 __fastcall ConfirmPopup::ConfirmPopup(__int64 a1, int a2, const String *a3, const String *a4)
    {
      const char *v8; // x1
      String v10; // [xsp+0h] [xbp-70h] BYREF
      String v11; // [xsp+18h] [xbp-58h] BYREF
    
      String::String(&v11, "sc/ui.sc");
      if ( a2 == 13 )
        v8 = "popup_training_camp";
      else
        v8 = "popup_confirm";
      String::String(&v10, v8);
      PopupBase::PopupBase((PopupBase *)a1, &v11, &v10);
      String::~String(&v10);
      String::~String(&v11);
      *(_QWORD *)a1 = off_100465C90;
      *(_QWORD *)(a1 + 96) = &off_100465E68;
      String::String((String *)(a1 + 296));
      String::String((String *)(a1 + 320));
      String::String((String *)(a1 + 352));
      ConfirmPopup::initializeMembers((ConfirmPopup *)a1);
      ConfirmPopup::basicInit((ConfirmPopup *)a1, a2, a3, a4);
      return a1;
    }

    __int64 __fastcall ConfirmPopup::basicInit(__int64 a1, int a2, String *a3, #1271 *a4)
    {
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x0
      #1257 *v10; // x0
      __int64 v11; // x0
      const LogicData *v12; // x2
      __int64 ArenaByName; // x23
      const char *v14; // x1
      #1308 *IconSWF; // x24
      String *IconExportName; // x0
      const String *v17; // x2
      #1257 *v18; // x0
      void (__fastcall *v19)(__int64, #1308 *); // x23
      const String *v20; // x2
      #1308 *v21; // x0
      #1395 *TextField; // x0
      const String *v23; // x2
      const char *v24; // x1
      const String *String; // x23
      const char *v26; // x1
      const char *v27; // x1
      const String *v28; // x22
      char *v29; // x0
      #1257 *v30; // x0
      #1257 *v31; // x0
      GameButton *v32; // x0
      #1395 *v33; // x0
      const String *v34; // x2
      __int64 v35; // x0
      __int64 TextFieldByName; // x0
      __int64 result; // x0
      int v38; // w20
      __int64 v39; // x0
      long double v40; // q0
      __int64 ChildByName; // x0
      __int64 v42; // x0
      long double v43; // q0
      __int64 v44; // x0
      GameButton *v45; // x0
      String v46; // [xsp+8h] [xbp-78h] BYREF
      String v47; // [xsp+20h] [xbp-60h] BYREF
      String v48; // [xsp+38h] [xbp-48h] BYREF
    
      ConfirmPopup::setTitle((ConfirmPopup *)a1, a3);
      *(_DWORD *)(a1 + 60) = a2;
      if ( a2 == 13 )
      {
        MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
        MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "darken_spot");
        if ( MovieClipByName )
          *(_BYTE *)(MovieClipByName + 64) = 0;
        v10 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
        v11 = MovieClip::getMovieClipByName(v10, "darken_grad");
        if ( v11 )
          *(_BYTE *)(v11 + 8) = 0;
        String::String(&v48, "TrainingCamp");
        ArenaByName = LogicDataTables::getArenaByName((LogicDataTables *)&v48, 0, v12);
        String::~String(&v48);
        if ( !ArenaByName )
          Debugger::error((__siginfo *)"arena 'TrainingCamp' missing", v14);
        IconSWF = (#1308 *)LogicData::getIconSWF(ArenaByName);
        IconExportName = (String *)LogicData::getIconExportName(ArenaByName);
        *(_QWORD *)(a1 + 376) = StringTable::getMovieClip(IconSWF, IconExportName, v17);
        v18 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
        MovieClip::changeTimelineChild(v18, "arena", *(#1249 **)(a1 + 376));
      }
      if ( a2 == 23 )
      {
        v19 = *(void (__fastcall **)(__int64, #1308 *))(*(_QWORD *)a1 + 272LL);
        String::String(&v47, "sc/ui.sc");
        String::String(&v46, "popup_gotoshop");
        v21 = StringTable::getMovieClip((#1308 *)&v47, &v46, v20);
        v19(a1, v21);
        String::~String(&v46);
        String::~String(&v47);
      }
      TextField = (#1395 *)GUIContainer::getTextField((#1254 *)a1, "txt");
      MovieClipHelper::setTextVerticallyCentered(TextField, a4, v23);
      *(_BYTE *)(a1 + 285) = 0;
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_CANCEL", v24);
      v28 = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_BUTTON_YES", v26);
      if ( a2 > 21 )
      {
        if ( a2 != 22 )
        {
          if ( a2 != 23 )
            goto LABEL_21;
          v29 = "TID_CONFIRM_BUTTON_GOTO_SHOP";
          goto LABEL_20;
        }
    LABEL_17:
        *(_BYTE *)(a1 + 285) = 1;
        goto LABEL_21;
      }
      if ( (unsigned int)a2 > 0xD )
        goto LABEL_21;
      if ( ((1 << a2) & 0x81A) != 0 )
        goto LABEL_17;
      if ( ((1 << a2) & 0x3000) != 0 )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_NO", v27);
        goto LABEL_21;
      }
      if ( a2 == 10 )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_DONATE", v27);
        v29 = "TID_BUTTON_CLAIM";
    LABEL_20:
        v28 = (const String *)StringTable::getString((#1308 *)v29, v27);
      }
    LABEL_21:
      v30 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      if ( MovieClip::getMovieClipByName(v30, "close") )
        *(_QWORD *)(a1 + 192) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "close", 1);
      v31 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      if ( MovieClip::getMovieClipByName(v31, "button_cancel") )
      {
        v32 = (GameButton *)DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_cancel", 1);
        *(_QWORD *)(a1 + 256) = v32;
        GameButton::setText(v32, "txt", String);
      }
      if ( a2 == 23 )
      {
        v33 = (#1395 *)GUIContainer::getTextField((#1254 *)a1, "title");
        MovieClipHelper::setTextVerticallyCentered(v33, (#1271 *)a3, v34);
        v35 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_diamonds", 1);
        *(_QWORD *)(a1 + 272) = v35;
        TextFieldByName = MovieClip::getTextFieldByName(*(_QWORD *)(v35 + 96), "txt");
        return MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, v28, 0);
      }
      else
      {
        v38 = *(unsigned __int8 *)(a1 + 285);
        v39 = GUIContainer::getMovieClip((#1254 *)a1);
        if ( v38 )
        {
          ChildByName = MovieClip::getChildByName(v39, "button_yes", v40);
          if ( ChildByName )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)ChildByName + 8LL))(ChildByName);
          result = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_diamonds", 1);
          *(_QWORD *)(a1 + 272) = result;
          *(_BYTE *)(*(_QWORD *)(a1 + 256) + 8LL) = 0;
        }
        else
        {
          if ( MovieClip::getChildByName(v39, "button_diamonds", v40) )
          {
            v42 = GUIContainer::getMovieClip((#1254 *)a1);
            v44 = MovieClip::getChildByName(v42, "button_diamonds", v43);
            if ( v44 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
          }
          v45 = (GameButton *)DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_yes", 1);
          *(_QWORD *)(a1 + 272) = v45;
          return GameButton::setText(v45, "txt", v28);
        }
      }
      return result;
    }

    // attributes: thunk
    void __fastcall ConfirmPopup::ConfirmPopup(ConfirmPopup *this, int a2, const String *a3, const String *a4)
    {
      __ZN12ConfirmPopupC2EiRK6StringS2_((__int64)this, a2, a3, a4);
    }

    __int64 __fastcall ConfirmPopup::ConfirmPopup(__int64 a1, int a2, __int64 a3, String *a4, #1271 *a5)
    {
      const char *v10; // x1
      String v12; // [xsp+0h] [xbp-70h] BYREF
      String v13; // [xsp+18h] [xbp-58h] BYREF
    
      String::String(&v13, "sc/ui.sc");
      if ( a2 == 13 )
        v10 = "popup_training_camp";
      else
        v10 = "popup_confirm";
      String::String(&v12, v10);
      PopupBase::PopupBase((PopupBase *)a1, &v13, &v12);
      String::~String(&v12);
      String::~String(&v13);
      *(_QWORD *)a1 = off_100465C90;
      *(_QWORD *)(a1 + 96) = &off_100465E68;
      String::String((String *)(a1 + 296));
      String::String((String *)(a1 + 320));
      String::String((String *)(a1 + 352));
      ConfirmPopup::initializeMembers((ConfirmPopup *)a1);
      *(_QWORD *)(a1 + 232) = a3;
      ConfirmPopup::basicInit(a1, a2, a4, a5);
      return a1;
    }

    // attributes: thunk
    void __fastcall ConfirmPopup::ConfirmPopup(ConfirmPopup *this, int a2, __int64 a3, String *a4, #1271 *a5)
    {
      __ZN12ConfirmPopupC2EiP12LogicCommandRK6StringS4_((__int64)this, a2, a3, a4, a5);
    }

    __int64 __fastcall ConfirmPopup::ConfirmPopup(__int64 a1, int a2, __int64 a3, const String *a4, const String *a5)
    {
      const char *v10; // x1
      tween::Bounce *v11; // x0
      const char *v12; // x1
      tween::Bounce *v13; // x25
      String *v14; // x26
      String *v15; // x25
      __int64 v16; // x0
      const char *v17; // x1
      const char *v18; // x1
      void *String; // x24
      const char *v20; // x1
      const char *v21; // x1
      String v23; // [xsp+8h] [xbp-158h] BYREF
      String v24; // [xsp+20h] [xbp-140h] BYREF
      String v25; // [xsp+38h] [xbp-128h] BYREF
      String v26; // [xsp+50h] [xbp-110h] BYREF
      String v27; // [xsp+68h] [xbp-F8h] BYREF
      String v28; // [xsp+80h] [xbp-E0h] BYREF
      String v29; // [xsp+98h] [xbp-C8h] BYREF
      String v30; // [xsp+B0h] [xbp-B0h] BYREF
      String v31; // [xsp+C8h] [xbp-98h] BYREF
      String v32; // [xsp+E0h] [xbp-80h] BYREF
      String v33; // [xsp+F8h] [xbp-68h] BYREF
    
      String::String(&v33, "sc/ui.sc");
      if ( a2 == 13 )
        v10 = "popup_training_camp";
      else
        v10 = "popup_confirm";
      String::String(&v32, v10);
      PopupBase::PopupBase((PopupBase *)a1, &v33, &v32);
      String::~String(&v32);
      String::~String(&v33);
      *(_QWORD *)a1 = off_100465C90;
      *(_QWORD *)(a1 + 96) = &off_100465E68;
      String::String((String *)(a1 + 296));
      String::String((String *)(a1 + 320));
      String::String((String *)(a1 + 352));
      ConfirmPopup::initializeMembers((ConfirmPopup *)a1);
      *(_QWORD *)(a1 + 248) = a3;
      String::String(&v31, a4);
      String::String(&v30, a5);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 40LL))(a3) == 24212 )
      {
        v11 = (tween::Bounce *)GamecenterAccountAlreadyBoundMessage::removeLogicClientAvatar(a3);
        v13 = v11;
        if ( v11 )
        {
          *(_DWORD *)(a1 + 344) = LogicClientAvatar::getExpLevel(v11);
          LogicClientAvatar::getName(v13);
          String::operator=((String *)(a1 + 352));
          (*(void (__fastcall **)(tween::Bounce *))(*(_QWORD *)v13 + 16LL))(v13);
          (*(void (__fastcall **)(tween::Bounce *))(*(_QWORD *)v13 + 8LL))(v13);
        }
        else
        {
          Debugger::warning((__siginfo *)"GamecenterAccountAlreadyBoundMessage doesn't contain an avatar!", v12);
        }
        v14 = (String *)GamecenterAccountAlreadyBoundMessage::removeGamecenterId(a3);
        v15 = (String *)GamecenterAccountAlreadyBoundMessage::removePassToken(a3);
        if ( v14 )
          String::String(&v29, v14);
        else
          String::String(&v29, "null");
        String::operator=((String *)(a1 + 320));
        String::~String(&v29);
        if ( v15 )
          String::String(&v28, v15);
        else
          String::String(&v28, "null");
        String::operator=((String *)(a1 + 296));
        String::~String(&v28);
        if ( v14 )
        {
          String::~String(v14);
          operator delete(v14);
        }
        if ( v15 )
        {
          String::~String(v15);
          operator delete(v15);
        }
        v16 = GamecenterAccountAlreadyBoundMessage::removeAccountId(a3);
        *(_QWORD *)(a1 + 288) = v16;
        if ( v16 )
        {
          *(_DWORD *)(a1 + 60) = 17;
          StringTable::getString((#1308 *)"TID_GAMECENTER_BOUND_TO_OTHER_ACCOUNT_TITLE", v17);
          String::operator=(&v31);
          String = StringTable::getString((#1308 *)"TID_GAMECENTER_BOUND_TO_OTHER_ACCOUNT", v18);
          String::String(&v26, "<number>");
          String::format((String *)"%d", v20, *(unsigned int *)(a1 + 344));
          String::replace(&v27, String, &v26, &v25);
          String::operator=(&v30);
          String::~String(&v27);
          String::~String(&v25);
          String::~String(&v26);
          String::String(&v23, "<name>");
          String::replace(&v24, &v30, &v23, a1 + 352);
          String::operator=(&v30);
          String::~String(&v24);
          String::~String(&v23);
        }
        else
        {
          *(_DWORD *)(a1 + 60) = 18;
          StringTable::getString((#1308 *)"TID_BIND_TO_NEW_GAMECENTER_ACCOUNT_TITLE", v17);
          String::operator=(&v31);
          StringTable::getString((#1308 *)"TID_BIND_TO_NEW_GAMECENTER_ACCOUNT", v21);
          String::operator=(&v30);
        }
        *(_QWORD *)(a1 + 248) = 0;
      }
      ConfirmPopup::basicInit(a1, a2, &v31, (#1271 *)&v30);
      String::~String(&v30);
      String::~String(&v31);
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall ConfirmPopup::ConfirmPopup(__int64 a1, int a2, __int64 a3, const String *a4, const String *a5)
    {
      return __ZN12ConfirmPopupC2EiP14PiranhaMessageRK6StringS4_(a1, a2, a3, a4, a5);
    }

    void __fastcall ConfirmPopup::~ConfirmPopup(__int64 a1)
    {
      __int64 v2; // x0
      void *v3; // x0
      void (__fastcall ***v4)(_QWORD); // x0
      __int64 v5; // x0
      void (__fastcall ***v6)(_QWORD); // x0
      __int64 v7; // x0
      __int64 v8; // x0
    
      *(_QWORD *)a1 = off_100465C90;
      *(_QWORD *)(a1 + 96) = &off_100465E68;
      v2 = *(_QWORD *)(a1 + 376);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 376) = 0;
      v3 = *(void **)(a1 + 288);
      if ( v3 )
        operator delete(v3);
      *(_QWORD *)(a1 + 288) = 0;
      v4 = *(void (__fastcall ****)(_QWORD))(a1 + 232);
      if ( v4 )
      {
        (**v4)(v4);
        v5 = *(_QWORD *)(a1 + 232);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        *(_QWORD *)(a1 + 232) = 0;
      }
      v6 = *(void (__fastcall ****)(_QWORD))(a1 + 240);
      if ( v6 )
      {
        (**v6)(v6);
        v7 = *(_QWORD *)(a1 + 240);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        *(_QWORD *)(a1 + 240) = 0;
      }
      v8 = *(_QWORD *)(a1 + 248);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *(_QWORD *)(a1 + 248) = 0;
      ConfirmPopup::initializeMembers((ConfirmPopup *)a1);
      String::~String((String *)(a1 + 352));
      String::~String((String *)(a1 + 320));
      String::~String((String *)(a1 + 296));
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1);
    }

    // attributes: thunk
    void __fastcall ConfirmPopup::~ConfirmPopup(__int64 a1)
    {
      __ZN12ConfirmPopupD2Ev(a1);
    }

    void __fastcall ConfirmPopup::~ConfirmPopup(void *a1)
    {
      ConfirmPopup::~ConfirmPopup((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall ConfirmPopup::setTitle(#1254 *a1, __int64 a2)
    {
      __int64 result; // x0
    
      result = GUIContainer::getTextField(a1, "title");
      if ( result )
        return MovieClipHelper::setTextAndScaleIfNecessary(result, a2, 0);
      return result;
    }

    BadgePopup *__fastcall ConfirmPopup::buttonClicked(__int64 a1, __int64 a2)
    {
      __int64 Instance; // x0
      BadgePopup *result; // x0
      LogicPageOpenedCommand *v6; // x20
      int v7; // w8
      __int64 v8; // x0
      int v9; // w8
      __int64 v10; // x0
      BadgePopup *v11; // x0
      int *v12; // x20
      __int64 v13; // x21
      OfferChestPopup *v14; // x22
      void (__fastcall ***v15)(_QWORD); // x0
      __int64 v16; // x0
      vm_address_t *v17; // x0
      __int64 v18; // x0
      tween::Bounce *v19; // x19
      __int64 Arena; // x0
      int MatchCost; // w21
      LogicDataTables *Gold; // x0
      const char *v23; // x1
      int v24; // w21
      HomeScreen *Globals; // x0
      int ResourceDiamondCost; // w0
      LogicAreaEffectObject *v27; // x0
      GameMode *v28; // x0
      ChangeAllianceMemberRoleMessage *v29; // x20
      LogicLong *v30; // x0
      BadgePopup *v31; // x0
      BadgePopup *v32; // x0
      __int64 v33; // x0
      LogicCommand *v34; // x20
      GameMode *v35; // x0
      PiranhaMessage *v36; // x1
      __int64 v37; // x0
      __int64 PopupByType; // x0
      LogicTutorialManager *v39; // x0
      __int64 v40; // x0
      LogicPageOpenedCommand *v41; // x0
      LogicPageOpenedCommand *v42; // x0
      #1314 *ShopPage; // x0
      #1314 *v44; // x20
      LogicPageOpenedCommand *isEnabled; // x0
      __int64 v46; // x0
      BattlePage *v47; // x0
      LogicAreaEffectObject *BattlePage; // x0
      __int64 v49; // x0
      __int64 PlayerAvatar; // x0
      tween::Bounce *v51; // x20
      _BOOL4 v52; // w21
      int v53; // w22
      int v54; // w20
      int v55; // w21
      PiranhaMessage *v56; // x20
      __int64 v57; // x0
      const String *v58; // x3
      String *v59; // x0
      const String *v60; // x3
      __int64 v61; // x20
      unsigned int v62; // w21
      String *HigherInt; // x23
      String *LowerInt; // x0
      #1080 *v65; // x0
      __uint16_t *v66; // x0
      AccountConfirmPopup *v67; // x20
      String *v68; // x21
      #1236 *v69; // x0
      BadgePopup *v70; // x0
      __int64 v71; // x0
      String v72; // [xsp+8h] [xbp-78h] BYREF
      String v73; // [xsp+20h] [xbp-60h] BYREF
      String v74; // [xsp+38h] [xbp-48h] BYREF
    
      Instance = GameMode::getInstance((vm_address_t *)a1);
      result = (BadgePopup *)GameMode::getHomeScreen(Instance);
      v6 = result;
      if ( *(_QWORD *)(a1 + 256) == a2 || *(_QWORD *)(a1 + 192) == a2 )
      {
        v9 = *(_DWORD *)(a1 + 60);
        if ( v9 != 12 )
        {
          if ( v9 == 13 )
          {
            if ( *(_DWORD *)(a1 + 280) )
              return result;
          }
          else
          {
            v10 = *(_QWORD *)(a1 + 240);
            if ( v10 )
            {
              v11 = (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
              v12 = *(int **)(a1 + 240);
              if ( (_DWORD)v11 == 515 )
              {
                v13 = GUI::getInstance(v11);
                v14 = (OfferChestPopup *)operator new(248);
                OfferChestPopup::OfferChestPopup(v14, v12[7]);
                GUI::showPopup(v13, v14, 1, 0, 0);
                v15 = *(void (__fastcall ****)(_QWORD))(a1 + 240);
                if ( v15 )
                {
                  (**v15)(v15);
                  v16 = *(_QWORD *)(a1 + 240);
                  if ( v16 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                  *(_QWORD *)(a1 + 240) = 0;
                }
              }
              else
              {
                *(_QWORD *)(a1 + 240) = 0;
                v28 = (GameMode *)GameMode::getInstance((vm_address_t *)v11);
                GameMode::addCommand(v28, (LogicCommand *)v12, 1);
              }
            }
          }
        }
        return (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
      }
      if ( *(_QWORD *)(a1 + 272) != a2 )
        return result;
      *(_BYTE *)(a1 + 284) = 1;
      v7 = *(_DWORD *)(a1 + 60);
      if ( v7 < 22 )
      {
        switch ( v7 )
        {
          case 9:
            v8 = GUI::getInstance(result);
            GUI::closeAllPopups(v8);
            return (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
          case 12:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
            goto LABEL_43;
          case 13:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
            BattlePage = (LogicAreaEffectObject *)HomeScreen::getBattlePage(v6);
            return (BadgePopup *)BattlePage::startTrainingCampMatch(BattlePage);
          case 15:
            FacebookManager::sendBindMessage((LogicBuyChestCommand *)FacebookManager::sm_pInstance, 1);
            return (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
          case 17:
            v49 = GameMode::getInstance((vm_address_t *)result);
            PlayerAvatar = GameMode::getPlayerAvatar(v49);
            v51 = (tween::Bounce *)PlayerAvatar;
            if ( !PlayerAvatar )
              goto LABEL_50;
            v52 = *(_DWORD *)(PlayerAvatar + 136) > 0;
            v53 = *(_DWORD *)(LogicDataTables::getClientGlobals((pthread_attr_t *)PlayerAvatar) + 384LL);
            v54 = v52 | ((int)LogicClientAvatar::getExpLevel(v51) > v53);
            if ( GameCenterManager::sm_pInstance
              && (GameCenterManager::isBoundWithGame((LogicDiamondsAddedCommand *)GameCenterManager::sm_pInstance) & 1) == 0 )
            {
              if ( (v54 & 1) == 0 )
              {
                v55 = 1;
                goto LABEL_51;
              }
            }
            else if ( !v54 )
            {
    LABEL_50:
              v55 = 0;
    LABEL_51:
              v56 = (PiranhaMessage *)operator new(88);
              AccountSwitchedMessage::AccountSwitchedMessage((__int64)v56);
              v57 = LogicLong::clone(*(_QWORD *)(a1 + 288));
              AccountSwitchedMessage::setSwitchedToAccountId((__int64)v56, v57);
              if ( v55 )
              {
                AccountSwitchedMessage::setDeleteOldAccount((__int64)v56, 1);
                String::String(&v73, "old_destroyed");
                EventTracker::sendEvent(
                  (MovieClip *)&EventTracker::EVENT_LABEL_GAME,
                  &EventTracker::EVENT_TYPE_SWITCH_ACCOUNT,
                  &v73,
                  v58);
                v59 = &v73;
              }
              else
              {
                AccountSwitchedMessage::setDeleteOldAccount((__int64)v56, 0);
                String::String(&v72, "unconfirmed");
                EventTracker::sendEvent(
                  (MovieClip *)&EventTracker::EVENT_LABEL_GAME,
                  &EventTracker::EVENT_TYPE_SWITCH_ACCOUNT,
                  &v72,
                  v60);
                v59 = &v72;
              }
              String::~String(v59);
              MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v56);
              v61 = ServerConnection::sm_pInstance;
              v62 = *(_DWORD *)(ServerConnection::sm_pInstance + 20);
              HigherInt = (String *)LogicLong::getHigherInt(*(_QWORD *)(a1 + 288));
              LowerInt = (String *)LogicLong::getLowerInt(*(_QWORD *)(a1 + 288));
              ServerConnection::saveAccount(v61, v62, (const String *)(a1 + 296), HigherInt, LowerInt);
              NewItemIndicators::removeLastSeenInboxIds();
              v66 = (__uint16_t *)GameMain::getInstance(v65);
              GameMain::reloadGame(v66);
              return (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
            }
            v67 = (AccountConfirmPopup *)operator new(320);
            v68 = (String *)*(unsigned int *)(a1 + 344);
            String::String(&v74, (const String *)(a1 + 352));
            AccountConfirmPopup::AccountConfirmPopup(v67, v68, &v74);
            String::~String(&v74);
            v69 = (#1236 *)LogicLong::clone(*(_QWORD *)(a1 + 288));
            v70 = (BadgePopup *)AccountConfirmPopup::setTargetAccount(v67, v69, (const String *)(a1 + 296));
            v71 = GUI::getInstance(v70);
            GUI::showPopup(v71, v67, 1, 0, 0);
            return (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
          case 18:
            if ( GameCenterManager::sm_pInstance )
              GameCenterManager::sendBindAccountMessageToPendingAccount(
                (LogicDiamondsAddedCommand *)GameCenterManager::sm_pInstance,
                1);
            return (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
          default:
            goto LABEL_27;
        }
      }
      if ( v7 > 22 )
      {
        if ( v7 == 24 )
        {
          v39 = (LogicTutorialManager *)BattleScreen::getInstance(result);
          if ( v39 )
            BattleScreen::sendGoHomeMessage(v39);
        }
        else if ( v7 == 23 )
        {
          v40 = GUI::getInstance(result);
          v41 = (LogicPageOpenedCommand *)GUI::closeAllPopups(v40);
          v42 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v41);
          ShopPage = (#1314 *)HomeScreen::getShopPage(v42);
          v44 = ShopPage;
          if ( ShopPage )
          {
            isEnabled = (LogicPageOpenedCommand *)ShopPage::isEnabled(ShopPage);
            if ( (_DWORD)isEnabled )
            {
              *((_DWORD *)v44 + 90) = 2;
              v46 = HomeScreen::getInstance(isEnabled);
              HomeScreen::gotoPage(v46, 0, 1);
            }
          }
        }
        else if ( (unsigned int)(v7 - 37) > 1 )
        {
    LABEL_27:
          v31 = *(BadgePopup **)(a1 + 232);
          if ( v31 )
          {
            v32 = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)v31 + 32LL))(v31);
            if ( (_DWORD)v32 == 506 )
            {
              v33 = GUI::getInstance(v32);
              v32 = (BadgePopup *)GUI::closeAllPopups(v33);
            }
            v34 = *(LogicCommand **)(a1 + 232);
            *(_QWORD *)(a1 + 232) = 0;
            v35 = (GameMode *)GameMode::getInstance((vm_address_t *)v32);
            v31 = (BadgePopup *)GameMode::addCommand(v35, v34, 1);
          }
          v36 = *(PiranhaMessage **)(a1 + 248);
          if ( v36 )
          {
            *(_QWORD *)(a1 + 248) = 0;
            v31 = (BadgePopup *)MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v36);
          }
          if ( (unsigned int)(*(_DWORD *)(a1 + 60) - 19) <= 2 )
          {
            v37 = GUI::getInstance(v31);
            PopupByType = GUI::getPopupByType(v37, 22);
            if ( PopupByType )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)PopupByType + 352LL))(PopupByType);
          }
        }
        else
        {
          v29 = (ChangeAllianceMemberRoleMessage *)operator new(88);
          ChangeAllianceMemberRoleMessage::ChangeAllianceMemberRoleMessage(v29);
          v30 = (LogicLong *)LogicLong::clone(*(_QWORD *)(a1 + 288));
          ChangeAllianceMemberRoleMessage::setMemberAvatarId(v29, v30);
          ChangeAllianceMemberRoleMessage::setNewRole(v29, *(_DWORD *)(a1 + 280));
          MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v29);
        }
        return (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
      }
      v17 = (vm_address_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
      v18 = GameMode::getInstance(v17);
      v19 = (tween::Bounce *)GameMode::getPlayerAvatar(v18);
      Arena = LogicClientAvatar::getArena(v19);
      MatchCost = LogicArenaData::getMatchCost(Arena);
      Gold = (LogicDataTables *)LogicClientAvatar::getGold(v19);
      v24 = MatchCost - (_DWORD)Gold;
      if ( v24 < 1 )
      {
        Debugger::warning((__siginfo *)"diamond confirm popup shown even when avatar has enough gold for pvp!", v23);
    LABEL_43:
        v47 = (BattlePage *)HomeScreen::getBattlePage(v6);
        return (BadgePopup *)BattlePage::startBattle(v47, 0);
      }
      else
      {
        Globals = (HomeScreen *)LogicDataTables::getGlobals(Gold);
        ResourceDiamondCost = LogicGlobals::getResourceDiamondCost(Globals, v24);
        result = (BadgePopup *)LogicClientAvatar::hasEnoughDiamonds(v19, ResourceDiamondCost, 1);
        if ( (_DWORD)result )
        {
          v27 = (LogicAreaEffectObject *)HomeScreen::getBattlePage(v6);
          return (BadgePopup *)BattlePage::startPvP(v27, 1);
        }
      }
      return result;
    }

    __int64 __fastcall ConfirmPopup::getPopupType(LogicDataTable *this)
    {
      return 8;
    }

    vm_address_t *__fastcall ConfirmPopup::update(__int64 a1, float a2)
    {
      vm_address_t *result; // x0
      __int64 v4; // x20
      __int64 (__fastcall *v5)(__int64, _QWORD); // x21
      __int64 Instance; // x0
      int ResourceDiamondCost; // w0
      __int64 v8; // x0
      tween::Bounce *PlayerAvatar; // x20
      __int64 Arena; // x0
      int MatchCost; // w21
      LogicDataTables *Gold; // x0
      int v13; // w20
      int v14; // w2
      HomeScreen *Globals; // x0
    
      PopupBase::update((MatchmakeFailedMessage *)a1, a2);
      result = (vm_address_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1);
      if ( ((unsigned __int8)result & 1) == 0 && !*(_BYTE *)(a1 + 284) && *(_BYTE *)(a1 + 285) )
      {
        v4 = *(_QWORD *)(a1 + 232);
        if ( v4 )
        {
          v5 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 64LL);
          Instance = GameMode::getInstance(result);
          ResourceDiamondCost = v5(v4, *(_QWORD *)(Instance + 112));
        }
        else
        {
          if ( *(_DWORD *)(a1 + 60) != 22 )
          {
            v14 = 0;
            return (vm_address_t *)GameButton::setDiamondPriceText(*(GameButton **)(a1 + 272), "txt", v14, "DiamondIcon");
          }
          v8 = GameMode::getInstance(result);
          PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(v8);
          Arena = LogicClientAvatar::getArena(PlayerAvatar);
          MatchCost = LogicArenaData::getMatchCost(Arena);
          Gold = (LogicDataTables *)LogicClientAvatar::getGold(PlayerAvatar);
          if ( MatchCost <= (int)Gold )
          {
            v13 = 0;
          }
          else
          {
            Gold = (LogicDataTables *)LogicClientAvatar::getGold(PlayerAvatar);
            v13 = MatchCost - (_DWORD)Gold;
          }
          Globals = (HomeScreen *)LogicDataTables::getGlobals(Gold);
          ResourceDiamondCost = LogicGlobals::getResourceDiamondCost(Globals, v13);
        }
        v14 = ResourceDiamondCost;
        return (vm_address_t *)GameButton::setDiamondPriceText(*(GameButton **)(a1 + 272), "txt", v14, "DiamondIcon");
      }
      return result;
    }

    __int64 __fastcall ConfirmPopup::initializeMembers(__int64 a1)
    {
      __int64 result; // x0
    
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 278) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      String::operator=(a1 + 296, "");
      String::operator=(a1 + 320, "");
      *(_DWORD *)(a1 + 344) = 0;
      result = String::operator=(a1 + 352, "");
      *(_QWORD *)(a1 + 376) = 0;
      return result;
    }

}; // end class ConfirmPopup
