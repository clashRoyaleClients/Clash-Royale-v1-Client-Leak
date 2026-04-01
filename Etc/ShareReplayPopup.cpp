class ShareReplayPopup
{
public:

    void __fastcall ShareReplayPopup::ShareReplayPopup(ShareReplayPopup *this, #1236 *a2)
    {
      GameButton *v4; // x21
      const char *v5; // x1
      const String *String; // x0
      const char *v7; // x1
      const String *v8; // x0
      #1271 *TextFieldByName; // x21
      InputField *v10; // x22
      LogicDataTables *v11; // x0
      __int64 Globals; // x0
      __int64 v13; // x22
      void (__fastcall *v14)(__int64, __int64); // x23
      const char *v15; // x1
      __int64 v16; // x0
      long double Height; // q0
      #1014 *v18; // x21
      long double v19; // q0
      __int64 ChildByName; // x1
      __int64 v21; // x20
      void (__fastcall *v22)(__int64, __int64); // x21
      __int64 TextField; // x0
      Rect v24[2]; // [xsp+0h] [xbp-70h] BYREF
      String v25; // [xsp+10h] [xbp-60h] BYREF
      String v26; // [xsp+28h] [xbp-48h] BYREF
    
      String::String(&v26, "sc/ui.sc");
      String::String(&v25, "popup_share_replay");
      PopupBase::PopupBase(this, &v26, &v25);
      String::~String(&v25);
      String::~String(&v26);
      *(_QWORD *)this = off_100461B48;
      *((_QWORD *)this + 12) = &off_100461D20;
      *((_QWORD *)this + 29) = 0;
      *((_BYTE *)this + 256) = 1;
      *((_BYTE *)this + 264) = 1;
      *((_DWORD *)this + 65) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 34) = a2;
      *((_QWORD *)this + 24) = DropGUIContainer::addGameButton(this, "close_button", 1);
      v4 = (GameButton *)DropGUIContainer::addGameButton(this, "share_button", 1);
      *((_QWORD *)this + 29) = v4;
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SHARE", v5);
      GameButton::setText(v4, "txt", String);
      v8 = (const String *)StringTable::getString((#1308 *)"TID_TITLE_SHARE_REPLAY", v7);
      GUIContainer::setText(this, "title", v8, 1);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "share_input");
      TextField::fetchFont(TextFieldByName);
      v10 = (InputField *)operator new(136);
      v11 = InputField::InputField(v10, TextFieldByName);
      *((_QWORD *)this + 30) = v10;
      Globals = LogicDataTables::getGlobals(v11);
      TextInput::setMaxTextLength((TextInput *)v10, *(_DWORD *)(Globals + 292));
      v13 = *((_QWORD *)this + 30);
      v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 16LL);
      v16 = StringTable::getString((#1308 *)"TID_STREAM_REPLAY_TEXT", v15);
      v14(v13, v16);
      *((_BYTE *)this + 256) = 1;
      *((_BYTE *)this + 264) = 0;
      Rect::Rect(v24);
      DisplayObject::getBounds(TextFieldByName, *((_QWORD *)this + 14), v24);
      Height = Rect::getHeight(v24);
      *((_DWORD *)this + 65) = LODWORD(Height);
      v18 = (#1014 *)operator new(264);
      GameButton::GameButton(v18);
      *((_QWORD *)this + 31) = v18;
      ChildByName = MovieClip::getChildByName(*((_QWORD *)this + 14), "cell", v19);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 31) + 288LL))(
        *((_QWORD *)this + 31),
        ChildByName,
        0);
      CustomButton::setButtonListener(*((_QWORD *)this + 31), (char *)this + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 160LL))(
        *((_QWORD *)this + 14),
        *((_QWORD *)this + 31));
      v21 = *((_QWORD *)this + 14);
      v22 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 160LL);
      TextField = InputField::getTextField(*((#1279 **)this + 30));
      v22(v21, TextField);
      *((_BYTE *)this + 64) = 1;
      Rect::~Rect(v24);
    }

    // attributes: thunk
    void __fastcall ShareReplayPopup::ShareReplayPopup(ShareReplayPopup *this, #1236 *a2)
    {
      __ZN16ShareReplayPopupC2EP9LogicLong(this, a2);
    }

    void __fastcall ShareReplayPopup::~ShareReplayPopup(LogicLeaveAllianceCommand *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x0
      void *v4; // x0
    
      *(_QWORD *)this = off_100461B48;
      *((_QWORD *)this + 12) = &off_100461D20;
      v2 = (_QWORD *)((char *)this + 240);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 30) + 56LL))(*((_QWORD *)this + 30), 0);
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
      v3 = *((_QWORD *)this + 31);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = (void *)*((_QWORD *)this + 34);
      if ( v4 )
        operator delete(v4);
      *((_QWORD *)this + 29) = 0;
      *((_BYTE *)this + 256) = 1;
      *((_BYTE *)this + 264) = 1;
      *((_DWORD *)this + 65) = 0;
      *((_QWORD *)this + 34) = 0;
      *v2 = 0;
      v2[1] = 0;
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall ShareReplayPopup::~ShareReplayPopup(LogicLeaveAllianceCommand *this)
    {
      __ZN16ShareReplayPopupD2Ev(this);
    }

    void __fastcall ShareReplayPopup::~ShareReplayPopup(LogicLeaveAllianceCommand *this)
    {
      ShareReplayPopup::~ShareReplayPopup(this);
      operator delete(this);
    }

    void __fastcall ShareReplayPopup::buttonClicked(LogicLeaveAllianceCommand *this, #1251 *a2)
    {
      LogicShareReplayCommand *v4; // x20
      __int64 v5; // x0
      String *v6; // x21
      const String *InputText; // x0
      vm_address_t *v8; // x0
      GameMode *Instance; // x0
      BadgePopup *v10; // x0
      pid_t *v11; // x20
      const char *v12; // x1
      const String *String; // x0
      BadgePopup *v14; // x0
      BadgePopup *v15; // x0
      __int64 EventScreen; // x0
      __int64 v17; // x20
      void (__fastcall *v18)(__int64, String *); // x21
      String v19; // [xsp+8h] [xbp-38h] BYREF
    
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 30) + 56LL))(*((_QWORD *)this + 30), 0);
      if ( *((#1251 **)this + 29) == a2 )
      {
        v4 = (LogicShareReplayCommand *)operator new(48);
        LogicShareReplayCommand::LogicShareReplayCommand(v4);
        v5 = LogicLong::clone(*((_QWORD *)this + 34));
        LogicShareReplayCommand::setBattleEntryId((__int64)v4, v5);
        v6 = (String *)operator new(24);
        InputText = (const String *)InputField::getInputText(*((#1279 **)this + 30));
        String::String(v6, InputText);
        v8 = (vm_address_t *)LogicShareReplayCommand::setMessage((__int64)v4, v6);
        Instance = (GameMode *)GameMode::getInstance(v8);
        v10 = (BadgePopup *)GameMode::addCommand(Instance, v4, 1);
        v11 = (pid_t *)GUI::getInstance(v10);
        String = (const String *)StringTable::getString((#1308 *)"TID_REPLAY_SHARED_SUCCESS", v12);
        GUI::showCenteredFloaterText(v11, String, 0.0, -1);
        v14 = (BadgePopup *)(*(__int64 (__fastcall **)(LogicLeaveAllianceCommand *))(*(_QWORD *)this + 352LL))(this);
        v15 = (BadgePopup *)GUI::getInstance(v14);
        EventScreen = GUI::getEventScreen(v15);
        if ( EventScreen )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)EventScreen + 352LL))(EventScreen);
      }
      else if ( *((#1251 **)this + 31) == a2 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 56LL))(*((_QWORD *)this + 30), 1);
        *((_BYTE *)this + 264) = 1;
        if ( *((_BYTE *)this + 256) )
        {
          v17 = *((_QWORD *)this + 30);
          v18 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v17 + 16LL);
          String::String(&v19, "");
          v18(v17, &v19);
          String::~String(&v19);
          *((_BYTE *)this + 256) = 0;
        }
      }
      else
      {
        (*(void (__fastcall **)(LogicLeaveAllianceCommand *))(*(_QWORD *)this + 352LL))(this);
      }
    }

    LogicDataTables *__fastcall ShareReplayPopup::update(LogicLeaveAllianceCommand *this, long double a2)
    {
      LogicDataTables *result; // x0
      InputField *v5; // x20
      float v6; // s8
      int v7; // w1
    
      PopupBase::update(this, *(float *)&a2);
      result = (LogicDataTables *)*((_QWORD *)this + 30);
      if ( result )
      {
        result = (LogicDataTables *)(*(__int64 (__fastcall **)(LogicDataTables *, long double))(*(_QWORD *)result + 88LL))(
                                      result,
                                      a2);
        v5 = (InputField *)*((_QWORD *)this + 30);
        if ( *((_BYTE *)v5 + 16) )
        {
          v6 = *((float *)this + 65);
          v7 = *(_DWORD *)(LogicDataTables::getGlobals(result) + 292LL);
          return (LogicDataTables *)InputField::checkTextFits(v5, v6, v7);
        }
      }
      return result;
    }

    __int64 __fastcall ShareReplayPopup::keyDown(LogicLeaveAllianceCommand *this)
    {
      return 0;
    }

    __int64 __fastcall ShareReplayPopup::getPopupType(LogicLeaveAllianceCommand *this)
    {
      return 33;
    }

}; // end class ShareReplayPopup
