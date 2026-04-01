class ClanMessagePopup
{
public:

    __int64 __fastcall ClanMessagePopup::ClanMessagePopup(__int64 a1)
    {
      __int64 v2; // x21
      const char *v3; // x1
      const String *String; // x0
      #1271 *TextFieldByName; // x21
      InputField *v6; // x22
      __int64 v7; // x22
      void (__fastcall *v8)(__int64, void *); // x23
      const char *v9; // x1
      void *v10; // x0
      #1271 *v11; // x22
      InputField *v12; // x23
      __int64 Globals; // x0
      __int64 v14; // x23
      void (__fastcall *v15)(__int64, void *); // x24
      const char *v16; // x1
      void *v17; // x0
      long double Height; // q0
      long double v19; // q0
      GameButton *v20; // x21
      long double v21; // q0
      __int64 ChildByName; // x1
      long double v23; // q0
      __int64 v24; // x21
      void (__fastcall *v25)(__int64, __int64); // x22
      __int64 TextField; // x0
      GameButton *v27; // x21
      long double v28; // q0
      __int64 v29; // x0
      long double v30; // q0
      __int64 v31; // x20
      void (__fastcall *v32)(__int64, __int64); // x21
      __int64 v33; // x0
      Rect v35[2]; // [xsp+0h] [xbp-80h] BYREF
      __int128 v36; // [xsp+10h] [xbp-70h] BYREF
      String v37; // [xsp+20h] [xbp-60h] BYREF
      String v38; // [xsp+38h] [xbp-48h] BYREF
    
      String::String(&v38, "sc/ui.sc");
      String::String(&v37, "popup_send_message");
      PopupBase::PopupBase(a1, &v38, &v37);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046E780;
      *(_QWORD *)(a1 + 96) = &off_10046E958;
      *(_QWORD *)(a1 + 232) = 0;
      *(_BYTE *)(a1 + 256) = 1;
      *(_BYTE *)(a1 + 268) = 1;
      *(_QWORD *)(a1 + 260) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_BYTE *)(a1 + 269) = 1;
      *(_QWORD *)(a1 + 192) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "close_button", 1);
      v2 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "send_button", 1);
      *(_QWORD *)(a1 + 232) = v2;
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SEND", v3);
      GameButton::setText(v2, (__int64)"txt", String);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 112), "subject");
      TextField::fetchFont(TextFieldByName);
      v6 = (InputField *)operator new(136);
      InputField::InputField(v6, TextFieldByName);
      *(_QWORD *)(a1 + 272) = v6;
      TextInput::setMaxTextLength((TextInput *)v6, 30);
      v7 = *(_QWORD *)(a1 + 272);
      v8 = *(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 16LL);
      v10 = StringTable::getString((#1308 *)"TID_CLAN_LEADER_MSG_DEF_TITLE", v9);
      v8(v7, v10);
      v11 = (#1271 *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 112), "message");
      TextField::fetchFont(v11);
      v12 = (InputField *)operator new(136);
      InputField::InputField(v12, v11);
      *(_QWORD *)(a1 + 240) = v12;
      Globals = LogicDataTables::getGlobals();
      TextInput::setMaxTextLength((TextInput *)v12, *(_DWORD *)(Globals + 292));
      v14 = *(_QWORD *)(a1 + 240);
      v15 = *(void (__fastcall **)(__int64, void *))(*(_QWORD *)v14 + 16LL);
      v17 = StringTable::getString((#1308 *)"TID_CLAN_LEADER_MSG_DEF_DESC", v16);
      v15(v14, v17);
      *(_BYTE *)(a1 + 256) = 1;
      *(_BYTE *)(a1 + 268) = 0;
      Rect::Rect((Rect *)&v36);
      DisplayObject::getBounds(TextFieldByName, *(_QWORD *)(a1 + 112), &v36);
      Height = Rect::getHeight(&v36);
      *(_DWORD *)(a1 + 260) = LODWORD(Height);
      Rect::Rect(v35);
      DisplayObject::getBounds(v11, *(_QWORD *)(a1 + 112), v35);
      v19 = Rect::getHeight(v35);
      *(_DWORD *)(a1 + 264) = LODWORD(v19);
      v20 = (GameButton *)operator new(264);
      GameButton::GameButton(v20);
      *(_QWORD *)(a1 + 248) = v20;
      ChildByName = MovieClip::getChildByName(*(_QWORD *)(a1 + 112), "cell", v21);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 248) + 288LL))(
        *(_QWORD *)(a1 + 248),
        ChildByName,
        0);
      *(__n128 *)&v23 = CustomButton::setButtonListener(*(_QWORD *)(a1 + 248), a1 + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(a1 + 112) + 160LL))(
        *(_QWORD *)(a1 + 112),
        *(_QWORD *)(a1 + 248),
        v23);
      v24 = *(_QWORD *)(a1 + 112);
      v25 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 160LL);
      TextField = InputField::getTextField(*(#1279 **)(a1 + 240));
      v25(v24, TextField);
      v27 = (GameButton *)operator new(264);
      GameButton::GameButton(v27);
      *(_QWORD *)(a1 + 280) = v27;
      v29 = MovieClip::getChildByName(*(_QWORD *)(a1 + 112), "subject_cell", v28);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 280) + 288LL))(*(_QWORD *)(a1 + 280), v29, 0);
      *(__n128 *)&v30 = CustomButton::setButtonListener(*(_QWORD *)(a1 + 280), a1 + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(a1 + 112) + 160LL))(
        *(_QWORD *)(a1 + 112),
        *(_QWORD *)(a1 + 280),
        v30);
      v31 = *(_QWORD *)(a1 + 112);
      v32 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 160LL);
      v33 = InputField::getTextField(*(#1279 **)(a1 + 272));
      v32(v31, v33);
      Rect::~Rect(v35);
      Rect::~Rect((Rect *)&v36);
      return a1;
    }

    // attributes: thunk
    void __fastcall ClanMessagePopup::ClanMessagePopup(ClanMessagePopup *this)
    {
      __ZN16ClanMessagePopupC2Ev((__int64)this);
    }

    void __fastcall ClanMessagePopup::~ClanMessagePopup(__int64 a1)
    {
      _QWORD *v2; // x20
      __int64 v3; // x1
      const char *v4; // x2
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
    
      *(_QWORD *)a1 = off_10046E780;
      *(_QWORD *)(a1 + 96) = &off_10046E958;
      v2 = (_QWORD *)(a1 + 240);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 240) + 56LL))(*(_QWORD *)(a1 + 240), 0);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 272) + 56LL))(*(_QWORD *)(a1 + 272), 0);
      v5 = *(_QWORD *)(a1 + 272);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = *(_QWORD *)(a1 + 280);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
      v7 = *(_QWORD *)(a1 + 248);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *(_QWORD *)(a1 + 232) = 0;
      *(_BYTE *)(a1 + 256) = 1;
      *(_BYTE *)(a1 + 268) = 1;
      *(_QWORD *)(a1 + 260) = 0;
      *v2 = 0;
      v2[1] = 0;
      *(_BYTE *)(a1 + 269) = 1;
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1, v3, v4);
    }

    // attributes: thunk
    void __fastcall ClanMessagePopup::~ClanMessagePopup(__int64 a1)
    {
      __ZN16ClanMessagePopupD2Ev(a1);
    }

    void __fastcall ClanMessagePopup::~ClanMessagePopup(void *a1)
    {
      ClanMessagePopup::~ClanMessagePopup((__int64)a1);
      operator delete(a1);
    }

    void __fastcall ClanMessagePopup::buttonClicked(__int64 a1, __int64 a2)
    {
      __int64 v4; // x20
      void (__fastcall *v5)(__int64, String *); // x21
      LogicSendAllianceMailCommand *v6; // x20
      String *v7; // x21
      const String *InputText; // x0
      String *v9; // x21
      const String *v10; // x0
      __int64 Instance; // x0
      BadgePopup *v12; // x0
      Stage *v13; // x20
      const char *v14; // x1
      void *String; // x0
      __int64 v16; // x20
      void (__fastcall *v17)(__int64, String *); // x21
      String v18; // [xsp+0h] [xbp-50h] BYREF
      String v19; // [xsp+18h] [xbp-38h] BYREF
    
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 240) + 56LL))(*(_QWORD *)(a1 + 240), 0);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 272) + 56LL))(*(_QWORD *)(a1 + 272), 0);
      if ( *(_QWORD *)(a1 + 232) == a2 )
      {
        v6 = (LogicSendAllianceMailCommand *)operator new(48);
        LogicSendAllianceMailCommand::LogicSendAllianceMailCommand(v6);
        v7 = (String *)operator new(24);
        InputText = (const String *)InputField::getInputText(*(#1279 **)(a1 + 272));
        String::String(v7, InputText);
        LogicSendAllianceMailCommand::setTitle((__int64)v6, v7);
        v9 = (String *)operator new(24);
        v10 = (const String *)InputField::getInputText(*(#1279 **)(a1 + 240));
        String::String(v9, v10);
        LogicSendAllianceMailCommand::setMessage((__int64)v6, v9);
        Instance = GameMode::getInstance();
        v12 = (BadgePopup *)GameMode::addCommand(Instance, v6, 1);
        v13 = (Stage *)GUI::getInstance(v12);
        String = StringTable::getString((#1308 *)"TID_ALLIANCE_MESSAGE_SUCCESS", v14);
        GUI::showCenteredFloaterText(v13, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        goto LABEL_7;
      }
      if ( *(_QWORD *)(a1 + 280) != a2 )
      {
        if ( *(_QWORD *)(a1 + 248) == a2 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 240) + 56LL))(*(_QWORD *)(a1 + 240), 1);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 272) + 56LL))(*(_QWORD *)(a1 + 272), 0);
          if ( *(_BYTE *)(a1 + 256) )
          {
            v4 = *(_QWORD *)(a1 + 240);
            v5 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v4 + 16LL);
            String::String(&v18, "");
            v5(v4, &v18);
            String::~String();
            *(_BYTE *)(a1 + 256) = 0;
          }
          return;
        }
    LABEL_7:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
        return;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 240) + 56LL))(*(_QWORD *)(a1 + 240), 0);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 272) + 56LL))(*(_QWORD *)(a1 + 272), 1);
      if ( *(_BYTE *)(a1 + 269) )
      {
        v16 = *(_QWORD *)(a1 + 272);
        v17 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v16 + 16LL);
        String::String(&v19, "");
        v17(v16, &v19);
        String::~String();
        *(_BYTE *)(a1 + 269) = 0;
      }
    }

    __int64 __fastcall ClanMessagePopup::update(__int64 a1, long double a2)
    {
      InputField *v4; // x20
      float v5; // s9
      __int64 Globals; // x0
      InputField *v7; // x20
      float v8; // s9
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 v11; // x0
      CustomButton *v12; // x20
      bool v13; // w1
    
      PopupBase::update((MiniTimer *)a1, a2);
      if ( *(_QWORD *)(a1 + 240) )
      {
        v4 = *(InputField **)(a1 + 272);
        v5 = *(float *)(a1 + 260);
        Globals = LogicDataTables::getGlobals();
        InputField::checkTextFits(v4, v5, *(_DWORD *)(Globals + 296));
        v7 = *(InputField **)(a1 + 240);
        if ( v7 )
        {
          v8 = *(float *)(a1 + 264);
          v9 = LogicDataTables::getGlobals();
          InputField::checkTextFits(v7, v8, *(_DWORD *)(v9 + 296));
          v10 = *(_QWORD *)(a1 + 240);
          if ( v10 )
            (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v10 + 88LL))(v10, a2);
        }
      }
      v11 = *(_QWORD *)(a1 + 272);
      if ( v11 )
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v11 + 88LL))(v11, a2);
      v12 = *(CustomButton **)(a1 + 232);
      v13 = !*(_BYTE *)(a1 + 269)
         && !*(_BYTE *)(a1 + 256)
         && *(int *)InputField::getInputText(*(#1279 **)(a1 + 240)) >= 1
         && *(_DWORD *)InputField::getInputText(*(#1279 **)(a1 + 272)) > 0;
      return CustomButton::setEnabled(v12, v13);
    }

    __int64 __fastcall ClanMessagePopup::keyDown(DeviceLinkInfoScreen *this)
    {
      return 0;
    }

    __int64 __fastcall ClanMessagePopup::getPopupType(DeviceLinkInfoScreen *this)
    {
      return 39;
    }

}; // end class ClanMessagePopup
