class UnlockAccountPopup
{
public:

    __int64 __fastcall UnlockAccountPopup::UnlockAccountPopup(__int64 a1)
    {
      _QWORD *v2; // x22
      MovieClip *MovieClip; // x21
      const char *v4; // x1
      const String *String; // x0
      __int64 v6; // x21
      const char *v7; // x1
      const String *v8; // x0
      InputField *v9; // x21
      TextField *TextFieldByName; // x0
      int v11; // w1
      InputField *v12; // x21
      InputField *v13; // x21
      InputField *v14; // x21
      GameButton *v15; // x21
      long double v16; // q0
      __int64 ChildByName; // x0
      long double v18; // q0
      __int64 v19; // x20
      void (__fastcall *v20)(__int64, __int64); // x21
      __int64 TextField; // x0
      __int64 v22; // x0
      #1257 *v23; // x0
      __int64 v24; // x20
      const char *v25; // x1
      const String *v26; // x0
      String v28; // [xsp+8h] [xbp-98h] BYREF
      String v29; // [xsp+20h] [xbp-80h] BYREF
      String v30; // [xsp+38h] [xbp-68h] BYREF
      String v31; // [xsp+50h] [xbp-50h] BYREF
      String v32; // [xsp+68h] [xbp-38h] BYREF
    
      String::String(&v32, "sc/ui.sc");
      String::String(&v31, "popup_confirm_unlock_account");
      PopupBase::PopupBase(a1, &v32, &v31);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046FC20;
      *(_QWORD *)(a1 + 96) = &off_10046FDF8;
      *(_QWORD *)(a1 + 232) = 0;
      v2 = (_QWORD *)(a1 + 232);
      *(_QWORD *)(a1 + 269) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      MovieClip = (MovieClip *)GUIContainer::getMovieClip((#1254 *)a1);
      String = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_UNLOCK_ACCOUNT_TITLE", v4);
      MovieClip::setText(MovieClip, "title", String);
      v6 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "send_button", 1);
      *(_QWORD *)(a1 + 240) = v6;
      v8 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_OK", v7);
      GameButton::setText(v6, (__int64)"txt", v8);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v9 = (InputField *)operator new(136);
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 112), "text");
      InputField::InputField(v9, TextFieldByName);
      *(_QWORD *)(a1 + 256) = v9;
      v11 = *(_DWORD *)(LogicDataTables::getGlobals() + 488);
      *(_DWORD *)(a1 + 272) = v11;
      TextInput::setMaxTextLength(*(TextInput **)(a1 + 256), v11);
      v12 = *(InputField **)(a1 + 256);
      String::String(&v30, "\t");
      InputField::addForbiddenCharacter(v12, &v30);
      String::~String();
      v13 = *(InputField **)(a1 + 256);
      String::String(&v29, "\n");
      InputField::addForbiddenCharacter(v13, &v29);
      String::~String();
      v14 = *(InputField **)(a1 + 256);
      String::String(&v28, " ");
      InputField::addForbiddenCharacter(v14, &v28);
      String::~String();
      v15 = (GameButton *)operator new(264);
      GameButton::GameButton(v15);
      *(_QWORD *)(a1 + 232) = v15;
      ChildByName = MovieClip::getChildByName(*(_QWORD *)(a1 + 112), "type_in_field", v16);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v2 + 288LL))(*v2, ChildByName, 0);
      *(__n128 *)&v18 = CustomButton::setButtonListener(*v2, a1 + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(a1 + 112) + 160LL))(
        *(_QWORD *)(a1 + 112),
        *(_QWORD *)(a1 + 232),
        v18);
      v19 = *(_QWORD *)(a1 + 112);
      v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 160LL);
      TextField = InputField::getTextField(*(#1279 **)(a1 + 256));
      v20(v19, TextField);
      v22 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 112), "TID_INVAILD_UNLOCK_CODE");
      *(_QWORD *)(a1 + 264) = v22;
      *(_BYTE *)(v22 + 8) = 0;
      v23 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      if ( MovieClip::getMovieClipByName(v23, "button_faq") )
      {
        v24 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_faq", 1);
        *(_QWORD *)(a1 + 248) = v24;
        v26 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_HELP", v25);
        GameButton::setText(v24, (__int64)"txt", v26);
      }
      return a1;
    }

    // attributes: thunk
    void __fastcall UnlockAccountPopup::UnlockAccountPopup(UnlockAccountPopup *this)
    {
      __ZN18UnlockAccountPopupC2Ev((__int64)this);
    }

    void __fastcall UnlockAccountPopup::~UnlockAccountPopup(_QWORD *a1, __int64 a2, const char *a3)
    {
      __int64 v4; // x0
      _QWORD *v5; // x20
      __int64 v6; // x0
    
      *a1 = off_10046FC20;
      a1[12] = &off_10046FDF8;
      v5 = a1 + 29;
      v4 = a1[29];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      a1[29] = 0;
      v6 = a1[32];
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *(_QWORD *)((char *)v5 + 37) = 0;
      v5[3] = 0;
      v5[4] = 0;
      v5[1] = 0;
      v5[2] = 0;
      *v5 = 0;
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1, a2, a3);
    }

    // attributes: thunk
    void __fastcall UnlockAccountPopup::~UnlockAccountPopup(_QWORD *a1, __int64 a2, const char *a3)
    {
      __ZN18UnlockAccountPopupD2Ev(a1, a2, a3);
    }

    void __fastcall UnlockAccountPopup::~UnlockAccountPopup(_QWORD *a1, __int64 a2, const char *a3)
    {
      UnlockAccountPopup::~UnlockAccountPopup(a1, a2, a3);
      operator delete(a1);
    }

    __int64 __fastcall UnlockAccountPopup::keyDown(RoyalTvItem *this)
    {
      return 0;
    }

    __int64 __fastcall UnlockAccountPopup::buttonClicked(__int64 result, __int64 a2)
    {
      __int64 v2; // x19
    
      v2 = result;
      if ( *(_QWORD *)(result + 232) == a2 )
      {
        if ( !*(_BYTE *)(result + 276) )
        {
          result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(result + 256) + 56LL))(
                     *(_QWORD *)(result + 256),
                     1);
          *(_BYTE *)(*(_QWORD *)(v2 + 264) + 8LL) = 0;
        }
      }
      else if ( *(_QWORD *)(result + 248) == a2 )
      {
        return UnlockAccountPopup::contactSupportPressed((UnlockAccountPopup *)result);
      }
      else if ( *(_QWORD *)(result + 240) == a2 )
      {
        return UnlockAccountPopup::sendCode((UnlockAccountPopup *)result);
      }
      return result;
    }

    HelpshiftTitan *UnlockAccountPopup::contactSupportPressed()
    {
      pthread_attr_t *Instance; // x0
      HelpshiftTitan *result; // x0
      __int64 v2; // x1
      __int64 v3; // x2
      const String *v4; // x3
      const String *v5; // x1
    
      Instance = (pthread_attr_t *)GameMode::getInstance();
      result = (HelpshiftTitan *)GameMode::isHelpshiftEnabled(Instance);
      if ( (_DWORD)result )
      {
        HelpshiftManager::start((HelpshiftTitan *)HelpshiftManager::sm_pInstance, v2, v3, v4);
        HelpshiftManager::updateMetadata((_BYTE *)HelpshiftManager::sm_pInstance, v5);
        return HelpshiftManager::showConversation((HelpshiftTitan *)HelpshiftManager::sm_pInstance);
      }
      return result;
    }

    void __fastcall UnlockAccountPopup::sendCode(__int64 a1)
    {
      const String *InputText; // x0
      UnlockAccountMessage *v3; // x20
      __int64 Account; // x21
      String *v5; // x22
      LogicLong *v6; // x22
      String *v7; // x22
      String v8; // [xsp+8h] [xbp-38h] BYREF
    
      if ( !*(_BYTE *)(a1 + 276) && *(_DWORD *)InputField::getInputText(*(#1279 **)(a1 + 256)) == *(_DWORD *)(a1 + 272) )
      {
        InputText = (const String *)InputField::getInputText(*(#1279 **)(a1 + 256));
        String::String(&v8, InputText);
        CustomButton::setEnabled(*(CustomButton **)(a1 + 232), 0);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 0);
        *(_BYTE *)(a1 + 276) = 1;
        v3 = (UnlockAccountMessage *)operator new(96);
        UnlockAccountMessage::UnlockAccountMessage(v3);
        Account = ServerConnection::getAccount(
                    ServerConnection::sm_pInstance,
                    *(_DWORD *)(ServerConnection::sm_pInstance + 20));
        v5 = (String *)operator new(24);
        String::String(v5, &v8);
        UnlockAccountMessage::setUnlockCode((__int64)v3, v5);
        v6 = (LogicLong *)operator new(8);
        LogicLong::LogicLong(v6, *(_DWORD *)(Account + 4), *(_DWORD *)(Account + 8));
        UnlockAccountMessage::setAccountId((__int64)v3, (__int64)v6);
        v7 = (String *)operator new(24);
        String::String(v7, (const String *)(Account + 16));
        UnlockAccountMessage::setPassToken((__int64)v3, v7);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v3);
        *(_BYTE *)(*(_QWORD *)(a1 + 264) + 8LL) = 0;
        String::~String();
      }
    }

    __int64 __fastcall UnlockAccountPopup::update(__int64 a1, long double a2)
    {
      _BOOL4 v4; // w20
    
      PopupBase::update((MiniTimer *)a1, a2);
      if ( *(_BYTE *)(a1 + 276) )
        v4 = 0;
      else
        v4 = *(_DWORD *)InputField::getInputText(*(#1279 **)(a1 + 256)) == *(_DWORD *)(a1 + 272);
      (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 240) + 152LL))(*(_QWORD *)(a1 + 240), !v4);
      *(_BYTE *)(*(_QWORD *)(a1 + 240) + 64LL) = v4;
      return (*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 256) + 88LL))(*(_QWORD *)(a1 + 256), a2);
    }

    __int64 __fastcall UnlockAccountPopup::touchReleased(__int64 a1, __int64 a2)
    {
      Sprite::touchReleased(a1, a2);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 0);
      return 1;
    }

    __int64 __fastcall UnlockAccountPopup::touchPressed(__int64 a1, __int64 a2)
    {
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    void __fastcall UnlockAccountPopup::setInvalidUnlockCode(__int64 a1)
    {
      __int64 v2; // x20
      void (__fastcall *v3)(__int64, String *); // x22
      String v4; // [xsp+8h] [xbp-38h] BYREF
    
      CustomButton::setEnabled(*(CustomButton **)(a1 + 232), 1);
      v2 = *(_QWORD *)(a1 + 256);
      v3 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v2 + 16LL);
      String::String(&v4, "");
      v3(v2, &v4);
      String::~String();
      *(_BYTE *)(*(_QWORD *)(a1 + 264) + 8LL) = 1;
      *(_BYTE *)(a1 + 276) = 0;
    }

    __int64 __fastcall UnlockAccountPopup::getPopupType(RoyalTvItem *this)
    {
      return 47;
    }

}; // end class UnlockAccountPopup
