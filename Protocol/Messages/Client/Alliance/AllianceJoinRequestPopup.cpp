class AllianceJoinRequestPopup
{
public:

    void __fastcall AllianceJoinRequestPopup::AllianceJoinRequestPopup(
            AllianceJoinRequestPopup *this,
            #1236 *a2,
            const LogicUpgradeTowerCommand *a3,
            String *a4)
    {
      const char *v7; // x1
      void *String; // x22
      __int64 v9; // x21
      const char *v10; // x1
      const String *v11; // x0
      __int64 v12; // x21
      const char *v13; // x1
      const String *v14; // x0
      #1271 *TextFieldByName; // x21
      InputField *v16; // x22
      __int64 Globals; // x0
      __int64 v18; // x22
      void (__fastcall *v19)(__int64, void *); // x23
      const char *v20; // x1
      void *v21; // x0
      long double Height; // q0
      GameButton *v23; // x21
      long double v24; // q0
      __int64 ChildByName; // x0
      long double v26; // q0
      Rect v27[2]; // [xsp+0h] [xbp-A0h] BYREF
      String v28; // [xsp+10h] [xbp-90h] BYREF
      String v29; // [xsp+28h] [xbp-78h] BYREF
      String v30; // [xsp+40h] [xbp-60h] BYREF
      String v31; // [xsp+58h] [xbp-48h] BYREF
    
      String::String(&v31, "sc/ui.sc");
      String::String(&v30, "popUp_request_join");
      PopupBase::PopupBase((__int64)this, &v31, &v30);
      String::~String();
      String::~String();
      *(_QWORD *)this = off_100470660;
      *((_QWORD *)this + 12) = &off_100470838;
      *((_BYTE *)this + 272) = 1;
      *((_DWORD *)this + 69) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 29) = a2;
      String = StringTable::getString((#1308 *)"JOIN_CLAN_REQUEST_POPUP_TITLE", v7);
      String::String(&v28, "<name>");
      String::replace(&v29, String, &v28, a4);
      String::~String();
      GUIContainer::setText(this, "request_title", &v29, 0);
      v9 = DropGUIContainer::addGameButton(this, "request_button", 1);
      *((_QWORD *)this + 30) = v9;
      v11 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SEND", v10);
      GameButton::setText(v9, (__int64)"txt", v11);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v12 = DropGUIContainer::addGameButton(this, "cancel_button", 1);
      *((_QWORD *)this + 31) = v12;
      v14 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_CANCEL", v13);
      GameButton::setText(v12, (__int64)"txt", v14);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "request_input");
      TextField::fetchFont(TextFieldByName);
      v16 = (InputField *)operator new(136);
      InputField::InputField(v16, TextFieldByName);
      *((_QWORD *)this + 32) = v16;
      Globals = LogicDataTables::getGlobals();
      TextInput::setMaxTextLength((TextInput *)v16, *(_DWORD *)(Globals + 292));
      v18 = *((_QWORD *)this + 32);
      v19 = *(void (__fastcall **)(__int64, void *))(*(_QWORD *)v18 + 16LL);
      v21 = StringTable::getString((#1308 *)"TID_ALLIANCE_DEFAULT_JOIN_REQUEST_MESSAGE", v20);
      v19(v18, v21);
      *((_BYTE *)this + 272) = 1;
      Rect::Rect(v27);
      DisplayObject::getBounds(TextFieldByName, *((_QWORD *)this + 14), v27);
      Height = Rect::getHeight(v27);
      *((_DWORD *)this + 69) = LODWORD(Height);
      v23 = (GameButton *)operator new(264);
      GameButton::GameButton(v23);
      *((_QWORD *)this + 33) = v23;
      ChildByName = MovieClip::getChildByName(*((_QWORD *)this + 14), "request_input", v24);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 33) + 288LL))(
        *((_QWORD *)this + 33),
        ChildByName,
        0);
      *(__n128 *)&v26 = CustomButton::setButtonListener(*((_QWORD *)this + 33), (char *)this + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**((_QWORD **)this + 14) + 160LL))(
        *((_QWORD *)this + 14),
        *((_QWORD *)this + 33),
        v26);
      Rect::~Rect(v27);
      String::~String();
    }

    // attributes: thunk
    void __fastcall AllianceJoinRequestPopup::AllianceJoinRequestPopup(
            AllianceJoinRequestPopup *this,
            #1236 *a2,
            const LogicUpgradeTowerCommand *a3,
            String *a4)
    {
      __ZN24AllianceJoinRequestPopupC2EP9LogicLongPK22LogicAllianceBadgeData6String(this, a2, a3, a4);
    }

    void __fastcall AllianceJoinRequestPopup::~AllianceJoinRequestPopup(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 v4; // x0
      void *v5; // x0
      __int64 v6; // x0
    
      *(_QWORD *)a1 = off_100470660;
      *(_QWORD *)(a1 + 96) = &off_100470838;
      v4 = *(_QWORD *)(a1 + 256);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = *(void **)(a1 + 232);
      if ( v5 )
        operator delete(v5);
      v6 = *(_QWORD *)(a1 + 264);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *(_DWORD *)(a1 + 276) = 0;
      *(_BYTE *)(a1 + 272) = 1;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1, a2, a3);
    }

    // attributes: thunk
    void __fastcall AllianceJoinRequestPopup::~AllianceJoinRequestPopup(__int64 a1, __int64 a2, const char *a3)
    {
      __ZN24AllianceJoinRequestPopupD2Ev(a1, a2, a3);
    }

    void __fastcall AllianceJoinRequestPopup::~AllianceJoinRequestPopup(void *a1, __int64 a2, const char *a3)
    {
      AllianceJoinRequestPopup::~AllianceJoinRequestPopup((__int64)a1, a2, a3);
      operator delete(a1);
    }

    __int64 AllianceJoinRequestPopup::keyDown()
    {
      return 0;
    }

    void __fastcall AllianceJoinRequestPopup::buttonClicked(__int64 a1, __int64 a2)
    {
      __int64 v3; // x20
      void (__fastcall *v4)(__int64, String *); // x21
      RequestJoinAllianceMessage *v5; // x20
      __int64 v6; // x0
      String *v7; // x21
      const String *InputText; // x0
      String v9; // [xsp+8h] [xbp-38h] BYREF
    
      if ( *(_QWORD *)(a1 + 240) == a2 )
      {
        v5 = (RequestJoinAllianceMessage *)operator new(96);
        RequestJoinAllianceMessage::RequestJoinAllianceMessage(v5);
        v6 = LogicLong::clone(*(_QWORD *)(a1 + 232));
        RequestJoinAllianceMessage::setAllianceId((__int64)v5, v6);
        v7 = (String *)operator new(24);
        InputText = (const String *)InputField::getInputText(*(#1279 **)(a1 + 256));
        String::String(v7, InputText);
        RequestJoinAllianceMessage::setMessage((__int64)v5, v7);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v5);
        goto LABEL_7;
      }
      if ( *(_QWORD *)(a1 + 264) != a2 )
      {
    LABEL_7:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
        return;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 1);
      if ( *(_BYTE *)(a1 + 272) )
      {
        v3 = *(_QWORD *)(a1 + 256);
        v4 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v3 + 16LL);
        String::String(&v9, "");
        v4(v3, &v9);
        String::~String();
        *(_BYTE *)(a1 + 272) = 0;
      }
    }

    __int64 __fastcall AllianceJoinRequestPopup::update(LocalNotificationManager *this, long double a2)
    {
      InputField *v4; // x20
      float v5; // s9
      __int64 Globals; // x0
    
      PopupBase::update(this, a2);
      v4 = (InputField *)*((_QWORD *)this + 32);
      v5 = *((float *)this + 69);
      Globals = LogicDataTables::getGlobals();
      InputField::checkTextFits(v4, v5, *(_DWORD *)(Globals + 292));
      return (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 32) + 88LL))(*((_QWORD *)this + 32), a2);
    }

    __int64 __fastcall AllianceJoinRequestPopup::touchReleased(__int64 a1, __int64 a2)
    {
      Sprite::touchReleased(a1, a2);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 0);
      return 1;
    }

    __int64 __fastcall AllianceJoinRequestPopup::touchPressed(__int64 a1, __int64 a2)
    {
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    __int64 __fastcall AllianceJoinRequestPopup::getPopupType(LocalNotificationManager *this)
    {
      return 49;
    }

}; // end class AllianceJoinRequestPopup
