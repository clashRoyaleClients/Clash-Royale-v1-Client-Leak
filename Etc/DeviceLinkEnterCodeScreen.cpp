class DeviceLinkEnterCodeScreen
{
public:

    void __fastcall DeviceLinkEnterCodeScreen::DeviceLinkEnterCodeScreen(DeviceLinkEnterCodeScreen *this)
    {
      InputField **v2; // x22
      #1320 *v3; // x21
      #1271 *TextFieldByName; // x0
      LogicDataTables *v5; // x0
      int v6; // w1
      InputField *v7; // x21
      InputField *v8; // x21
      InputField *v9; // x21
      DeviceLinkCodeReceivedScreen *v10; // x21
      long double v11; // q0
      __int64 ChildByName; // x0
      __int64 v13; // x20
      void (__fastcall *v14)(__int64, __int64); // x21
      __int64 TextField; // x0
      MovieClip *v16; // x20
      __int64 v17; // x0
      String v18; // [xsp+0h] [xbp-E0h] BYREF
      String v19; // [xsp+18h] [xbp-C8h] BYREF
      String v20; // [xsp+30h] [xbp-B0h] BYREF
      String v21; // [xsp+48h] [xbp-98h] BYREF
      String v22; // [xsp+60h] [xbp-80h] BYREF
      String v23; // [xsp+78h] [xbp-68h] BYREF
      String v24; // [xsp+90h] [xbp-50h] BYREF
      String v25; // [xsp+A8h] [xbp-38h] BYREF
    
      String::String(&v25, "sc/ui.sc");
      String::String(&v24, "link_device_enter_code");
      String::String(&v23, "TID_LINK_NEW_DEVICE_TITLE");
      String::String(&v22, "enterCodeScreen");
      DeviceLinkSubScreen::DeviceLinkSubScreen(this, &v25, &v24, &v23, 1, &v22);
      String::~String(&v22);
      String::~String(&v23);
      String::~String(&v24);
      String::~String(&v25);
      *(_QWORD *)this = off_100464F18;
      *((_QWORD *)this + 12) = &off_1004650A0;
      *((_QWORD *)this + 31) = 0;
      v2 = (InputField **)((char *)this + 248);
      *(_QWORD *)((char *)this + 277) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = DropGUIContainer::addGameButton(this, "button_confirm", 1);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v3 = (#1320 *)operator new(144);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "Text");
      v5 = DeviceLinkCodeInput::DeviceLinkCodeInput(v3, TextFieldByName, this);
      *v2 = v3;
      v6 = *(_DWORD *)(LogicDataTables::getGlobals(v5) + 488LL);
      *((_DWORD *)this + 70) = v6;
      TextInput::setMaxTextLength(*((TextInput **)this + 31), v6);
      v7 = *v2;
      String::String(&v21, "\t");
      InputField::addForbiddenCharacter(v7, &v21);
      String::~String(&v21);
      v8 = *v2;
      String::String(&v20, "\n");
      InputField::addForbiddenCharacter(v8, &v20);
      String::~String(&v20);
      v9 = *v2;
      String::String(&v19, " ");
      InputField::addForbiddenCharacter(v9, &v19);
      String::~String(&v19);
      v10 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v10);
      *((_QWORD *)this + 32) = v10;
      ChildByName = MovieClip::getChildByName(*((_QWORD *)this + 14), "name_background", v11);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 32) + 288LL))(
        *((_QWORD *)this + 32),
        ChildByName,
        0);
      CustomButton::setButtonListener(*((_QWORD *)this + 32), (char *)this + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 160LL))(
        *((_QWORD *)this + 14),
        *((_QWORD *)this + 32));
      v13 = *((_QWORD *)this + 14);
      v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 160LL);
      TextField = InputField::getTextField(*((#1279 **)this + 31));
      v14(v13, TextField);
      v16 = (MovieClip *)*((_QWORD *)this + 14);
      String::String(&v18, "");
      MovieClip::setText(v16, "TID_LINK_DEVICES_ENTER_CODE_TEXT", &v18);
      String::~String(&v18);
      v17 = DropGUIContainer::addGameButton(this, "kunlun_tutorial_video_button", 1);
      *((_QWORD *)this + 34) = v17;
      *(_BYTE *)(v17 + 8) = 0;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31), 1);
    }

    void __fastcall DeviceLinkEnterCodeScreen::DeviceLinkEnterCodeScreen(DeviceLinkEnterCodeScreen *this)
    {
      DeviceLinkEnterCodeScreen::DeviceLinkEnterCodeScreen(this);
    }

    void __fastcall DeviceLinkEnterCodeScreen::~DeviceLinkEnterCodeScreen(TutorialManager *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      *(_QWORD *)this = off_100464F18;
      *((_QWORD *)this + 12) = &off_1004650A0;
      v2 = *((_QWORD *)this + 32);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 32) = 0;
      v3 = *((_QWORD *)this + 31);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_QWORD *)((char *)this + 277) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen(this);
    }

    // attributes: thunk
    void __fastcall DeviceLinkEnterCodeScreen::~DeviceLinkEnterCodeScreen(TutorialManager *this)
    {
      __ZN25DeviceLinkEnterCodeScreenD2Ev(this);
    }

    void __fastcall DeviceLinkEnterCodeScreen::~DeviceLinkEnterCodeScreen(TutorialManager *this)
    {
      DeviceLinkEnterCodeScreen::~DeviceLinkEnterCodeScreen(this);
      operator delete(this);
    }

    __int64 __fastcall DeviceLinkEnterCodeScreen::update(#1279 **this, long double a2)
    {
      _BOOL4 v4; // w20
    
      if ( *((_BYTE *)this + 284) )
        v4 = 0;
      else
        v4 = *(_DWORD *)InputField::getInputText(*(this + 31)) == *((_DWORD *)this + 70);
      (*(void (__fastcall **)(_QWORD, bool))(*(_QWORD *)*(this + 33) + 152LL))(*(this + 33), !v4);
      *((_BYTE *)*(this + 33) + 64) = v4;
      return (*(__int64 (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 31) + 88LL))(*(this + 31), a2);
    }

    __int64 __fastcall DeviceLinkEnterCodeScreen::buttonClicked(__int64 this, #1251 *a2)
    {
      if ( *(#1251 **)(this + 256) == a2 )
      {
        if ( !*(_BYTE *)(this + 284) )
          return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(this + 248) + 56LL))(*(_QWORD *)(this + 248), 1);
      }
      else if ( *(#1251 **)(this + 264) == a2 )
      {
        return DeviceLinkEnterCodeScreen::sendCode((TutorialManager *)this);
      }
      return this;
    }

    __int64 __fastcall DeviceLinkEnterCodeScreen::sendCode(__int64 this)
    {
      __int64 v1; // x19
      const String *InputText; // x20
      #1153 *v3; // x19
    
      v1 = this;
      if ( !*(_BYTE *)(this + 284) )
      {
        this = InputField::getInputText(*(#1279 **)(this + 248));
        if ( *(_DWORD *)this == *(_DWORD *)(v1 + 280) )
        {
          InputText = (const String *)InputField::getInputText(*(#1279 **)(v1 + 248));
          CustomButton::setEnabled(*(CustomButton **)(v1 + 256), 0);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 248) + 56LL))(*(_QWORD *)(v1 + 248), 0);
          *(_BYTE *)(v1 + 284) = 1;
          v3 = (#1153 *)operator new(96);
          LogicDeviceLinkEnterCodeMessage::LogicDeviceLinkEnterCodeMessage(v3);
          LogicDeviceLinkEnterCodeMessage::setLinkCode(v3, InputText);
          return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v3);
        }
      }
      return this;
    }

    __int64 __fastcall DeviceLinkEnterCodeScreen::getEnteredLinkCode(__int64 a1)
    {
      return InputField::getInputText(*(#1279 **)(a1 + 248));
    }

    __int64 __fastcall DeviceLinkEnterCodeScreen::poppedBack(__int64 a1)
    {
      DeviceLinkSubScreen::poppedBack((UnlockAccountOkMessage *)a1);
      *(_BYTE *)(a1 + 284) = 0;
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 56LL))(*(_QWORD *)(a1 + 248), 1);
    }

    __int64 DeviceLinkEnterCodeScreen::keyDown()
    {
      return 0;
    }

    __int64 DeviceLinkEnterCodeScreen::getSubScreenType()
    {
      return 1;
    }

}; // end class DeviceLinkEnterCodeScreen
