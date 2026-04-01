class NameChangeConfirmationScreen
{
public:

    void __fastcall NameChangeConfirmationScreen::NameChangeConfirmationScreen(
            NameChangeConfirmationScreen *this,
            const String *a2)
    {
      const String *v4; // x2
      #1308 *MovieClip; // x23
      const char *v6; // x1
      const char *v7; // x1
      const String *String; // x0
      InputField *v9; // x23
      TextField *TextFieldByName; // x0
      pthread_attr_t *v11; // x0
      int v12; // w8
      __int64 v13; // x23
      void (__fastcall *v14)(__int64, __int64); // x24
      __int64 TextField; // x0
      String v16; // [xsp+8h] [xbp-D8h] BYREF
      String v17; // [xsp+20h] [xbp-C0h] BYREF
      String v18; // [xsp+38h] [xbp-A8h] BYREF
      String v19; // [xsp+50h] [xbp-90h] BYREF
      String v20; // [xsp+68h] [xbp-78h] BYREF
      String v21; // [xsp+80h] [xbp-60h] BYREF
      String v22; // [xsp+98h] [xbp-48h] BYREF
    
      NameChangeSubScreen::NameChangeSubScreen(this);
      *(_QWORD *)this = off_1004634D8;
      *((_QWORD *)this + 12) = &off_100463660;
      String::String((String *)this + 11);
      String::String((String *)this + 12);
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      String::operator=((char *)this + 264, "");
      String::operator=((char *)this + 288, "");
      *((_QWORD *)this + 39) = 0;
      String::String(&v22, "change_name_dialog_3");
      String::String(&v21, "sc/ui.sc");
      MovieClip = StringTable::getMovieClip((#1308 *)&v21, &v22, v4);
      String::~String(&v21);
      (*(void (__fastcall **)(NameChangeConfirmationScreen *, #1308 *))(*(_QWORD *)this + 272LL))(this, MovieClip);
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      String::operator=((char *)this + 264, "");
      String::operator=((char *)this + 288, "");
      *((_QWORD *)this + 39) = 0;
      StringTable::getString((#1308 *)"TID_CONFIRM_WORD", v6);
      String::operator=((String *)this + 11);
      String = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_CONFIRM", v7);
      String::String(&v20, String);
      String::String(&v18, "<confirmword>");
      String::replace(&v19, &v20, &v18, (char *)this + 264);
      String::operator=(&v20);
      String::~String(&v19);
      String::~String(&v18);
      MovieClip::setText(*((MovieClip **)this + 14), "TID_CONFIRM_CONFIRM", &v20);
      *((_QWORD *)this + 31) = DropGUIContainer::addGameButton(this, "button_confirm", 1);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v9 = (InputField *)operator new(136);
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "Text");
      v11 = (pthread_attr_t *)InputField::InputField(v9, TextFieldByName);
      *((_QWORD *)this + 39) = v9;
      v12 = *(_DWORD *)(LogicDataTables::getClientGlobals(v11) + 188LL);
      if ( !v12 )
        v12 = *((_DWORD *)this + 66);
      TextInput::setMaxTextLength(*((TextInput **)this + 39), v12);
      *((_QWORD *)this + 32) = DropGUIContainer::addGameButton(this, "typein_box", 1);
      v13 = *((_QWORD *)this + 14);
      v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 160LL);
      TextField = InputField::getTextField(*((#1279 **)this + 39));
      v14(v13, TextField);
      MovieClip::setText(*((MovieClip **)this + 14), "village_name", a2);
      String::String(&v17, "TID_CHANGE_NAME_TITLE");
      NameChangeSubScreen::setTitleTID(this, &v17);
      String::~String(&v17);
      String::String(&v16, "enterNameScreen_confirm");
      GUIContainer::setAnalyticsName(this, &v16);
      String::~String(&v16);
      MovieClip::setText(*((MovieClip **)this + 14), "player_name", a2);
      String::operator=((String *)this + 12);
      NameChangeSubScreen::setUseBack(this, 1);
      String::~String(&v20);
      String::~String(&v22);
    }

    // attributes: thunk
    void __fastcall NameChangeConfirmationScreen::NameChangeConfirmationScreen(
            NameChangeConfirmationScreen *this,
            const String *a2)
    {
      __ZN28NameChangeConfirmationScreenC2ERK6String(this, a2);
    }

    void __fastcall NameChangeConfirmationScreen::~NameChangeConfirmationScreen(String *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)&this->m_length = off_1004634D8;
      *((_QWORD *)this + 12) = &off_100463660;
      v2 = *((_QWORD *)this + 39);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      String::operator=(this + 11, "");
      String::operator=(this + 12, "");
      *((_QWORD *)this + 39) = 0;
      String::~String(this + 12);
      String::~String(this + 11);
      NameChangeSubScreen::~NameChangeSubScreen((LogicExpLevelData *)this);
    }

    // attributes: thunk
    void __fastcall NameChangeConfirmationScreen::~NameChangeConfirmationScreen(String *this)
    {
      __ZN28NameChangeConfirmationScreenD2Ev(this);
    }

    void __fastcall NameChangeConfirmationScreen::~NameChangeConfirmationScreen(String *this)
    {
      NameChangeConfirmationScreen::~NameChangeConfirmationScreen(this);
      operator delete(this);
    }

    __int64 __fastcall NameChangeConfirmationScreen::update(#1279 **this, long double a2)
    {
      __int64 InputText; // x0
      int v5; // w0
      char v6; // w20
    
      NameChangeSubScreen::update((LogicExpLevelData *)this, *(float *)&a2);
      InputText = InputField::getInputText(*(this + 39));
      v5 = String::equals(InputText, this + 33);
      v6 = v5;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(this + 31) + 152LL))(*(this + 31), v5 ^ 1u);
      *((_BYTE *)*(this + 31) + 64) = v6;
      return (*(__int64 (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 39) + 88LL))(*(this + 39), a2);
    }

    __int64 __fastcall NameChangeConfirmationScreen::buttonClicked(#1279 **this, #1251 *a2)
    {
      const String *v2; // x19
      __int64 InputText; // x0
      ChangeAvatarNameMessage *v5; // x20
      String *v6; // x21
      __int64 Instance; // x0
      __int64 v8; // x0
    
      v2 = (const String *)this;
      if ( *(this + 31) == a2 )
      {
        InputText = InputField::getInputText(*(this + 39));
        this = (#1279 **)String::equals(InputText, &v2[11]);
        if ( (_DWORD)this )
        {
          v5 = (ChangeAvatarNameMessage *)operator new(88);
          ChangeAvatarNameMessage::ChangeAvatarNameMessage(v5);
          ChangeAvatarNameMessage::setNameSetByUser(v5, 1);
          v6 = (String *)operator new(24);
          String::String(v6, v2 + 12);
          ChangeAvatarNameMessage::setAvatarName(v5, v6);
          MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v5);
          this = (#1279 **)GameStateManager::getInstance();
          if ( this )
          {
            this = (#1279 **)GameStateManager::getInstance();
            *((_BYTE *)this + 96) = 1;
          }
        }
      }
      else if ( *(this + 32) == a2 )
      {
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*(this + 39) + 56LL))(*(this + 39), 1);
      }
      Instance = GUI::getInstance((BadgePopup *)this);
      v8 = GUI::getNameChangeWindow(Instance);
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 352LL))(v8);
    }

    // attributes: thunk
    __int64 __fastcall NameChangeConfirmationScreen::poppedBack(LogicSpawnPoint *this)
    {
      return NameChangeSubScreen::poppedBack(this);
    }

    __int64 __fastcall NameChangeConfirmationScreen::keyDown(LogicSpawnPoint *this)
    {
      return 0;
    }

    __int64 __fastcall NameChangeConfirmationScreen::getSubScreenType(LogicSpawnPoint *this)
    {
      return 2;
    }

}; // end class NameChangeConfirmationScreen
