class AccountConfirmPopup
{
public:

    void __fastcall AccountConfirmPopup::AccountConfirmPopup(AccountConfirmPopup *this, String *a2, String *a3)
    {
      _QWORD *v6; // x25
      const char *v7; // x1
      const char *v8; // x1
      const String *String; // x0
      MovieClip *MovieClip; // x0
      MovieClip *v11; // x0
      #1257 *v12; // x0
      MovieClip *MovieClipByName; // x24
      int v14; // w1
      const char *v15; // x1
      GameButton *v16; // x23
      const String *v17; // x0
      const char *v18; // x1
      const String *v19; // x0
      InputField *v20; // x23
      TextField *TextFieldByName; // x0
      pthread_attr_t *v22; // x0
      int v23; // w8
      #1014 *v24; // x23
      long double v25; // q0
      __int64 ChildByName; // x0
      __int64 v27; // x22
      void (__fastcall *v28)(__int64, __int64); // x23
      __int64 TextField; // x0
      String v30; // [xsp+0h] [xbp-D0h] BYREF
      String v31; // [xsp+18h] [xbp-B8h] BYREF
      String v32; // [xsp+30h] [xbp-A0h] BYREF
      String v33; // [xsp+48h] [xbp-88h] BYREF
      String v34; // [xsp+60h] [xbp-70h] BYREF
      String v35; // [xsp+78h] [xbp-58h] BYREF
    
      String::String(&v35, "sc/ui.sc");
      String::String(&v34, "popup_confirm_deleting");
      PopupBase::PopupBase(this, &v35, &v34);
      String::~String(&v34);
      String::~String(&v35);
      *(_QWORD *)this = off_100460CC0;
      *((_QWORD *)this + 12) = &off_100460E98;
      String::String((String *)this + 11);
      String::String((String *)((char *)this + 296));
      *((_QWORD *)this + 29) = 0;
      v6 = (_QWORD *)((char *)this + 232);
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 30) = 0;
      String::operator=((char *)this + 264, "confirm");
      StringTable::getString((#1308 *)"TID_CONFIRM_WORD", v7);
      String::operator=((String *)this + 11);
      String = (const String *)StringTable::getString((#1308 *)"TID_PLEASE_TYPE_CONFIRM_ACCOUNT", v8);
      String::String(&v33, String);
      String::String(&v31, "<CONFIRM>");
      String::replace(&v32, &v33, &v31, (char *)this + 264);
      String::operator=(&v33);
      String::~String(&v32);
      String::~String(&v31);
      MovieClip = (MovieClip *)GUIContainer::getMovieClip(this);
      MovieClip::setText(MovieClip, "TID_PLEASE_TYPE_CONFIRM_ACCOUNT", &v33);
      v11 = (MovieClip *)GUIContainer::getMovieClip(this);
      MovieClip::setText(v11, "player_name", a3);
      v12 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(v12, "xp_level");
      String::valueOf(&v30, a2, v14);
      MovieClip::setText(MovieClipByName, "txt", &v30);
      String::~String(&v30);
      v16 = (GameButton *)DropGUIContainer::addGameButton(this, "button_ok", 1);
      *((_QWORD *)this + 30) = v16;
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v17 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_CONFIRM_ACCOUNT", v15);
      GameButton::setText(v16, "txt", v17);
      *((_QWORD *)this + 31) = DropGUIContainer::addGameButton(this, "close", 1);
      v19 = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_WORD", v18);
      GUIContainer::setText(this, "text", v19, 1);
      v20 = (InputField *)operator new(136);
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "text");
      v22 = (pthread_attr_t *)InputField::InputField(v20, TextFieldByName);
      *((_QWORD *)this + 32) = v20;
      v23 = *(_DWORD *)(LogicDataTables::getClientGlobals(v22) + 188LL);
      if ( !v23 )
        v23 = *((_DWORD *)this + 66);
      TextInput::setMaxTextLength(*((TextInput **)this + 32), v23);
      v24 = (#1014 *)operator new(264);
      GameButton::GameButton(v24);
      *((_QWORD *)this + 29) = v24;
      ChildByName = MovieClip::getChildByName(*((_QWORD *)this + 14), "type_in_field", v25);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v6 + 288LL))(*v6, ChildByName, 0);
      CustomButton::setButtonListener(*v6, (char *)this + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 160LL))(
        *((_QWORD *)this + 14),
        *((_QWORD *)this + 29));
      v27 = *((_QWORD *)this + 14);
      v28 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 160LL);
      TextField = InputField::getTextField(*((#1279 **)this + 32));
      v28(v27, TextField);
      *((_QWORD *)this + 24) = DropGUIContainer::addGameButton(this, "close", 1);
      (*(void (__fastcall **)(AccountConfirmPopup *, long double))(*(_QWORD *)this + 336LL))(
        this,
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      String::~String(&v33);
    }

    // attributes: thunk
    void __fastcall AccountConfirmPopup::AccountConfirmPopup(AccountConfirmPopup *this, String *a2, String *a3)
    {
      __ZN19AccountConfirmPopupC2Ei6String(this, a2, a3);
    }

    void __fastcall AccountConfirmPopup::~AccountConfirmPopup(GameObject *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      *(_QWORD *)this = off_100460CC0;
      *((_QWORD *)this + 12) = &off_100460E98;
      v2 = *((_QWORD *)this + 32);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v3 = *((_QWORD *)this + 29);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      String::operator=((char *)this + 264, "confirm");
      String::~String((String *)((char *)this + 296));
      String::~String((String *)this + 11);
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall AccountConfirmPopup::~AccountConfirmPopup(GameObject *this)
    {
      __ZN19AccountConfirmPopupD2Ev(this);
    }

    void __fastcall AccountConfirmPopup::~AccountConfirmPopup(GameObject *this)
    {
      AccountConfirmPopup::~AccountConfirmPopup(this);
      operator delete(this);
    }

    __int64 __fastcall AccountConfirmPopup::keyDown(GameObject *this)
    {
      return 0;
    }

    __int64 __fastcall AccountConfirmPopup::buttonClicked(#1279 **this, #1251 *a2)
    {
      __int64 InputText; // x0
      const String *v5; // x3
      __int64 v6; // x21
      __int64 v7; // x22
      __int64 HigherInt; // x23
      __int64 LowerInt; // x0
      NewItemIndicators *v10; // x0
      #1080 *v11; // x0
      __uint16_t *Instance; // x0
      String v13; // [xsp+8h] [xbp-48h] BYREF
    
      if ( *(this + 30) == a2 )
      {
        InputText = InputField::getInputText(*(this + 32));
        if ( (unsigned int)String::equalsIgnoreCase(InputText, this + 33) && *(this + 36) )
        {
          if ( *((_DWORD *)this + 74) )
          {
            String::String(&v13, "confirmed");
            EventTracker::sendEvent(
              (MovieClip *)&EventTracker::EVENT_LABEL_GAME,
              &EventTracker::EVENT_TYPE_SWITCH_ACCOUNT,
              &v13,
              v5);
            String::~String(&v13);
            v6 = ServerConnection::sm_pInstance;
            v7 = *(unsigned int *)(ServerConnection::sm_pInstance + 20);
            HigherInt = LogicLong::getHigherInt(*(this + 36));
            LowerInt = LogicLong::getLowerInt(*(this + 36));
            v10 = (NewItemIndicators *)ServerConnection::saveAccount(v6, v7, this + 37, HigherInt, LowerInt);
            v11 = (#1080 *)NewItemIndicators::removeLastSeenInboxIds(v10);
            Instance = (__uint16_t *)GameMain::getInstance(v11);
            GameMain::reloadGame(Instance);
          }
        }
        return (*((__int64 (__fastcall **)(#1279 **))*this + 44))(this);
      }
      if ( *(this + 31) != a2 )
      {
        if ( *(this + 29) == a2 )
          return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*(this + 32) + 56LL))(*(this + 32), 1);
        return (*((__int64 (__fastcall **)(#1279 **))*this + 44))(this);
      }
      return (*((__int64 (__fastcall **)(#1279 **))*this + 44))(this);
    }

    __int64 __fastcall AccountConfirmPopup::update(#1279 **this, long double a2)
    {
      __int64 InputText; // x0
      int v5; // w0
      char v6; // w20
    
      PopupBase::update((MatchmakeFailedMessage *)this, *(float *)&a2);
      InputText = InputField::getInputText(*(this + 32));
      v5 = String::equalsIgnoreCase(InputText, this + 33);
      v6 = v5;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(this + 30) + 152LL))(*(this + 30), v5 ^ 1u);
      *((_BYTE *)*(this + 30) + 64) = v6;
      return (*(__int64 (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 32) + 88LL))(*(this + 32), a2);
    }

    __int64 __fastcall AccountConfirmPopup::touchReleased(__int64 a1, __int64 a2)
    {
      Sprite::touchReleased(a1, a2);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 0);
      return 1;
    }

    __int64 __fastcall AccountConfirmPopup::touchPressed(__int64 a1, __int64 a2)
    {
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    __int64 __fastcall AccountConfirmPopup::setTargetAccount(GameObject *this, #1236 *a2, const String *a3)
    {
      *((_QWORD *)this + 36) = a2;
      return String::operator=((String *)((char *)this + 296));
    }

    __int64 __fastcall AccountConfirmPopup::getPopupType(GameObject *this)
    {
      return 44;
    }

}; // end class AccountConfirmPopup
