class ChallengePopup
{
public:

    void __fastcall ChallengePopup::ChallengePopup(ChallengePopup *this)
    {
      long double v2; // q0
      __int64 v3; // x21
      const char *v4; // x1
      const String *String; // x0
      String *v6; // x0
      int v7; // w1
      MovieClip *v8; // x21
      long double v9; // q0
      __int64 MovieClipByName; // x0
      __int64 v11; // x21
      const char *v12; // x1
      const String *v13; // x0
      #1271 *TextFieldByName; // x21
      InputField *v15; // x22
      __int64 Globals; // x0
      __int64 v17; // x22
      void (__fastcall *v18)(__int64, void *); // x23
      const char *v19; // x1
      void *v20; // x0
      long double Height; // q0
      GameButton *v22; // x21
      long double v23; // q0
      __int64 ChildByName; // x1
      long double v25; // q0
      __int64 v26; // x20
      void (__fastcall *v27)(__int64, __int64); // x21
      __int64 TextField; // x0
      Rect v29[2]; // [xsp+0h] [xbp-A0h] BYREF
      String v30; // [xsp+10h] [xbp-90h] BYREF
      String v31; // [xsp+28h] [xbp-78h] BYREF
      String v32; // [xsp+40h] [xbp-60h] BYREF
      String v33; // [xsp+58h] [xbp-48h] BYREF
    
      String::String(&v33, "sc/ui.sc");
      String::String(&v32, "popup_challenge");
      PopupBase::PopupBase((__int64)this, &v33, &v32);
      String::~String();
      String::~String();
      *(_QWORD *)this = off_1004714A8;
      *((_QWORD *)this + 12) = &off_100471680;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_BYTE *)this + 272) = 1;
      *((_BYTE *)this + 280) = 1;
      *((_DWORD *)this + 69) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      v3 = DropGUIContainer::addGameButton((__int64)this, "challenge_button", 1, v2);
      *((_QWORD *)this + 31) = v3;
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SEND", v4);
      GameButton::setText(v3, (__int64)"txt", String);
      v6 = (String *)*(unsigned int *)(LogicDataTables::getGlobals() + 476);
      v8 = *(MovieClip **)(*((_QWORD *)this + 31) + 96LL);
      if ( (_DWORD)v6 )
      {
        String::valueOf(&v30, v6, v7);
        MovieClip::setText(v8, "txt", &v30);
        String::~String();
      }
      else
      {
        String::String(&v31, "");
        MovieClip::setText(v8, "txt", &v31);
        String::~String();
        MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 31) + 96LL), "icon");
        if ( MovieClipByName )
          *(_BYTE *)(MovieClipByName + 8) = 0;
      }
      v11 = DropGUIContainer::addGameButton((__int64)this, "cancel_button", 1, v9);
      *((_QWORD *)this + 30) = v11;
      v13 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_CANCEL", v12);
      GameButton::setText(v11, (__int64)"txt", v13);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "text");
      TextField::fetchFont(TextFieldByName);
      v15 = (InputField *)operator new(136);
      InputField::InputField(v15, TextFieldByName);
      *((_QWORD *)this + 32) = v15;
      Globals = LogicDataTables::getGlobals();
      TextInput::setMaxTextLength((TextInput *)v15, *(_DWORD *)(Globals + 292));
      v17 = *((_QWORD *)this + 32);
      v18 = *(void (__fastcall **)(__int64, void *))(*(_QWORD *)v17 + 16LL);
      v20 = StringTable::getString((#1308 *)"TID_CHALLENGE_DEFAULT_TEXT", v19);
      v18(v17, v20);
      *((_BYTE *)this + 272) = 1;
      *((_BYTE *)this + 280) = 0;
      Rect::Rect(v29);
      DisplayObject::getBounds(TextFieldByName, *((_QWORD *)this + 14), v29);
      Height = Rect::getHeight(v29);
      *((_DWORD *)this + 69) = LODWORD(Height);
      v22 = (GameButton *)operator new(264);
      GameButton::GameButton(v22);
      *((_QWORD *)this + 33) = v22;
      ChildByName = MovieClip::getChildByName(*((_QWORD *)this + 14), "input", v23);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 33) + 288LL))(
        *((_QWORD *)this + 33),
        ChildByName,
        0);
      *(__n128 *)&v25 = CustomButton::setButtonListener(*((_QWORD *)this + 33), (char *)this + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**((_QWORD **)this + 14) + 160LL))(
        *((_QWORD *)this + 14),
        *((_QWORD *)this + 33),
        v25);
      v26 = *((_QWORD *)this + 14);
      v27 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 160LL);
      TextField = InputField::getTextField(*((#1279 **)this + 32));
      v27(v26, TextField);
      Rect::~Rect(v29);
    }

    // attributes: thunk
    void __fastcall ChallengePopup::ChallengePopup(ChallengePopup *this)
    {
      __ZN14ChallengePopupC2Ev(this);
    }

    void __fastcall ChallengePopup::~ChallengePopup(SpellItemListener *this)
    {
      __int64 v2; // x1
      const char *v3; // x2
      __int64 v4; // x0
      __int64 v5; // x0
    
      *(_QWORD *)this = off_1004714A8;
      *((_QWORD *)this + 12) = &off_100471680;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32), 0);
      v4 = *((_QWORD *)this + 32);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = *((_QWORD *)this + 33);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_BYTE *)this + 272) = 1;
      *((_BYTE *)this + 280) = 1;
      *((_DWORD *)this + 69) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      PopupBase::~PopupBase(this, v2, v3);
    }

    // attributes: thunk
    void __fastcall ChallengePopup::~ChallengePopup(SpellItemListener *this)
    {
      __ZN14ChallengePopupD2Ev(this);
    }

    void __fastcall ChallengePopup::~ChallengePopup(SpellItemListener *this)
    {
      ChallengePopup::~ChallengePopup(this);
      operator delete(this);
    }

    void __fastcall ChallengePopup::buttonClicked(SpellItemListener *this, #1251 *a2)
    {
      LogicChallengeCommand *v4; // x20
      String *v5; // x21
      const String *InputText; // x0
      __int64 Instance; // x0
      __int64 v8; // x20
      void (__fastcall *v9)(__int64, String *); // x21
      String v10; // [xsp+8h] [xbp-38h] BYREF
    
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32), 0);
      if ( *((#1251 **)this + 31) == a2 )
      {
        v4 = (LogicChallengeCommand *)operator new(40);
        LogicChallengeCommand::LogicChallengeCommand(v4);
        v5 = (String *)operator new(24);
        InputText = (const String *)InputField::getInputText(*((#1279 **)this + 32));
        String::String(v5, InputText);
        LogicChallengeCommand::setMessage((__int64)v4, v5);
        Instance = GameMode::getInstance();
        GameMode::addCommand(Instance, v4, 1);
        ClanPage::sm_pendingGoToClan = 1;
        goto LABEL_5;
      }
      if ( *((#1251 **)this + 33) != a2 )
      {
        ClanPage::sm_pendingGoToClan = 0;
    LABEL_5:
        (*(void (__fastcall **)(SpellItemListener *))(*(_QWORD *)this + 352LL))(this);
        return;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32), 1);
      if ( *((_BYTE *)this + 272) )
      {
        v8 = *((_QWORD *)this + 32);
        v9 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v8 + 16LL);
        String::String(&v10, "");
        v9(v8, &v10);
        String::~String();
        *((_BYTE *)this + 272) = 0;
      }
    }

    __int64 __fastcall ChallengePopup::update(#1279 **this, long double a2)
    {
      __int64 v4; // x0
      InputField *v5; // x20
      float v6; // s8
      __int64 Globals; // x0
      #1395 *TextFieldByName; // x20
      __int64 v9; // x0
      const char *v10; // x4
      CustomButton *v11; // x20
      bool v12; // w1
    
      PopupBase::update((MiniTimer *)this, a2);
      v4 = (__int64)*(this + 32);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v4 + 88LL))(v4, a2);
        v5 = *(this + 32);
        v6 = *((float *)this + 69);
        Globals = LogicDataTables::getGlobals();
        InputField::checkTextFits(v5, v6, *(_DWORD *)(Globals + 292));
      }
      TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(*((_QWORD *)*(this + 31) + 12), "txt");
      v9 = LogicDataTables::getGlobals();
      MovieClipHelper::setGoldPriceText(TextFieldByName, (#1271 *)*(unsigned int *)(v9 + 476), -1, 0, v10);
      v11 = *(this + 31);
      v12 = *(_DWORD *)InputField::getInputText(*(this + 32)) > 0;
      return CustomButton::setEnabled(v11, v12);
    }

    __int64 __fastcall ChallengePopup::keyDown(SpellItemListener *this)
    {
      return 0;
    }

    __int64 __fastcall ChallengePopup::getPopupType(SpellItemListener *this)
    {
      return 41;
    }

}; // end class ChallengePopup
