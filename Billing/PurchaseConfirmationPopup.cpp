class PurchaseConfirmationPopup
{
public:

    __int64 __fastcall PurchaseConfirmationPopup::PurchaseConfirmationPopup(__int64 a1, __int64 a2, #1308 *a3, __int64 a4)
    {
      _QWORD *v8; // x25
      const char *v9; // x1
      const char *v10; // x1
      const String *String; // x0
      const String *v12; // x1
      #1308 *v13; // x0
      MovieClip *MovieClip; // x0
      const char *v15; // x1
      GameButton *v16; // x23
      const String *v17; // x0
      GameButton *v18; // x23
      const char *v19; // x1
      const String *v20; // x0
      const char *v21; // x1
      const String *v22; // x0
      InputField *v23; // x23
      TextField *TextFieldByName; // x0
      int v25; // w8
      DeviceLinkCodeReceivedScreen *v26; // x23
      long double v27; // q0
      __int64 ChildByName; // x0
      __int64 v29; // x22
      void (__fastcall *v30)(__int64, __int64); // x23
      __int64 TextField; // x0
      String v33; // [xsp+0h] [xbp-130h] BYREF
      String v34; // [xsp+18h] [xbp-118h] BYREF
      String v35; // [xsp+30h] [xbp-100h] BYREF
      String v36; // [xsp+48h] [xbp-E8h] BYREF
      String v37; // [xsp+60h] [xbp-D0h] BYREF
      String v38; // [xsp+78h] [xbp-B8h] BYREF
      String v39; // [xsp+90h] [xbp-A0h] BYREF
      String v40; // [xsp+A8h] [xbp-88h] BYREF
      String v41; // [xsp+C0h] [xbp-70h] BYREF
      String v42; // [xsp+D8h] [xbp-58h] BYREF
    
      String::String(&v42, "sc/ui.sc");
      String::String(&v41, "popup_confirm_spending");
      PopupBase::PopupBase((PopupBase *)a1, &v42, &v41);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046B5D0;
      *(_QWORD *)(a1 + 96) = &off_10046B7A8;
      String::String((String *)(a1 + 264));
      *(_QWORD *)(a1 + 232) = 0;
      v8 = (_QWORD *)(a1 + 232);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      String::operator=(a1 + 264, "confirm");
      *(_DWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      StringTable::getString((#1308 *)"TID_CONFIRM_WORD", v9);
      String::operator=((String *)(a1 + 264));
      String = (const String *)StringTable::getString((#1308 *)"TID_PLEASE_TYPE_CONFIRM", v10);
      String::String(&v40, String);
      String::String(&v38, "<CONFIRM>");
      String::replace(&v39, &v40, &v38, a1 + 264);
      String::operator=(&v40);
      String::~String();
      String::~String();
      v13 = StringTable::getString(a3, v12);
      String::String(&v37, (const String *)v13);
      String::String(&v35, "<ITEM>");
      String::replace(&v36, &v40, &v35, &v37);
      String::operator=(&v40);
      String::~String();
      String::~String();
      String::String(&v33, "<PRICE>");
      String::replace(&v34, &v40, &v33, a4);
      String::operator=(&v40);
      String::~String();
      String::~String();
      MovieClip = (MovieClip *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClip::setText(MovieClip, "TID_PLEASE_TYPE_CONFIRM", &v40);
      v16 = (GameButton *)DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_confirm", 1);
      *(_QWORD *)(a1 + 240) = v16;
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v17 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_BUY", v15);
      GameButton::setText(v16, "txt", v17);
      v18 = (GameButton *)DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_cancel", 1);
      *(_QWORD *)(a1 + 248) = v18;
      v20 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_CANCEL", v19);
      GameButton::setText(v18, "txt", v20);
      v22 = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_WORD", v21);
      GUIContainer::setText((#1254 *)a1, "text", v22, 1);
      v23 = (InputField *)operator new(136);
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 112), "text");
      InputField::InputField(v23, TextFieldByName);
      *(_QWORD *)(a1 + 256) = v23;
      v25 = *(_DWORD *)(LogicDataTables::getClientGlobals() + 188);
      if ( !v25 )
        v25 = *(_DWORD *)(a1 + 264);
      TextInput::setMaxTextLength(*(TextInput **)(a1 + 256), v25);
      v26 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v26);
      *(_QWORD *)(a1 + 232) = v26;
      ChildByName = MovieClip::getChildByName(*(_QWORD *)(a1 + 112), "type_in_field", v27);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v8 + 288LL))(*v8, ChildByName, 0);
      CustomButton::setButtonListener(*v8, a1 + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 160LL))(
        *(_QWORD *)(a1 + 112),
        *(_QWORD *)(a1 + 232));
      v29 = *(_QWORD *)(a1 + 112);
      v30 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 160LL);
      TextField = InputField::getTextField(*(#1279 **)(a1 + 256));
      v30(v29, TextField);
      *(_QWORD *)(a1 + 296) = a2;
      *(_QWORD *)(a1 + 192) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "close", 1);
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 336LL))(a1, COERCE_LONG_DOUBLE((unsigned __int128)0));
      String::~String();
      String::~String();
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall PurchaseConfirmationPopup::PurchaseConfirmationPopup(__int64 a1, __int64 a2, #1308 *a3, __int64 a4)
    {
      return __ZN25PurchaseConfirmationPopupC2Ey6StringS0_(a1, a2, a3, a4);
    }

    void __fastcall PurchaseConfirmationPopup::~PurchaseConfirmationPopup(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
    
      *(_QWORD *)a1 = off_10046B5D0;
      *(_QWORD *)(a1 + 96) = &off_10046B7A8;
      v2 = *(_QWORD *)(a1 + 256);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v3 = *(_QWORD *)(a1 + 232);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = *(_QWORD *)(a1 + 288);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      String::operator=(a1 + 264, "confirm");
      *(_DWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      String::~String();
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1);
    }

    // attributes: thunk
    void __fastcall PurchaseConfirmationPopup::~PurchaseConfirmationPopup(__int64 this)
    {
      __ZN25PurchaseConfirmationPopupD2Ev(this);
    }

    void __fastcall PurchaseConfirmationPopup::~PurchaseConfirmationPopup(AvatarStreamEntryRemovedMessage *this)
    {
      PurchaseConfirmationPopup::~PurchaseConfirmationPopup((__int64)this);
      operator delete(this);
    }

    __int64 __fastcall PurchaseConfirmationPopup::keyDown(AvatarStreamEntryRemovedMessage *this)
    {
      return 0;
    }

    __int64 __fastcall PurchaseConfirmationPopup::buttonClicked(#1279 **this, #1251 *a2)
    {
      char v3; // w20
      __int64 InputText; // x0
    
      if ( *(this + 30) == a2 )
      {
        InputText = InputField::getInputText(*(this + 32));
        v3 = String::equalsIgnoreCase(InputText, this + 33);
        goto LABEL_6;
      }
      if ( *(this + 31) == a2 )
        return (*((__int64 (__fastcall **)(#1279 **))*this + 44))(this);
      if ( *(this + 29) != a2 )
      {
        v3 = 0;
    LABEL_6:
        (*((void (__fastcall **)(#1279 **))*this + 44))(this);
        return BillingManager::handlePurchaseConfirmation((#1155 *)BillingManager::sm_pInstance, v3);
      }
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*(this + 32) + 56LL))(*(this + 32), 1);
    }

    void __fastcall PurchaseConfirmationPopup::update(MovieClip **this, long double a2)
    {
      __int64 InputText; // x0
      int v5; // w0
      char v6; // w20
      xTimer *v7; // x20
      uint64_t NativeTime; // x0
      unsigned __int64 v9; // x2
      float v10; // s9
      const char *v11; // x1
      const String *String; // x0
      int v13; // w8
      int v14; // w0
      String v15; // [xsp+0h] [xbp-80h] BYREF
      String v16; // [xsp+18h] [xbp-68h] BYREF
      String v17; // [xsp+30h] [xbp-50h] BYREF
      String v18; // [xsp+48h] [xbp-38h] BYREF
    
      PopupBase::update((MatchmakeFailedMessage *)this, *(float *)&a2);
      InputText = InputField::getInputText(*(this + 32));
      v5 = String::equalsIgnoreCase(InputText, this + 33);
      v6 = v5;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(this + 30) + 152LL))(*(this + 30), v5 ^ 1u);
      *((_BYTE *)*(this + 30) + 64) = v6;
      v7 = *(this + 37);
      NativeTime = xTimer::getNativeTime();
      v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(xTimer::getPassedTimeMs(v7, NativeTime, v9)));
      LODWORD(v7) = *(_DWORD *)(LogicDataTables::getClientGlobals() + 180);
      String = (const String *)StringTable::getString((#1308 *)"TID_YOU_PURCHASED_TOO_MUCH", v11);
      String::String(&v18, String);
      String::String(&v16, "<TIME>");
      v13 = 60000 * (_DWORD)v7 - (int)v10;
      if ( v13 >= 0 )
        v14 = v13 / 1000;
      else
        v14 = 0;
      TimeUtil::getTimeString(v14, 1, &v15);
      String::replace(&v17, &v18, &v16, &v15);
      String::operator=(&v18);
      String::~String();
      String::~String();
      String::~String();
      MovieClip::setText(*(this + 14), "TID_YOU_PURCHASED_TOO_MUCH", &v18);
      (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 32) + 88LL))(*(this + 32), a2);
      String::~String();
    }

    __int64 __fastcall PurchaseConfirmationPopup::touchReleased(__int64 a1, __int64 a2)
    {
      Sprite::touchReleased(a1, a2);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 0);
      return 1;
    }

    __int64 __fastcall PurchaseConfirmationPopup::touchPressed(__int64 a1, __int64 a2)
    {
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    __int64 __fastcall PurchaseConfirmationPopup::getPopupType(AvatarStreamEntryRemovedMessage *this)
    {
      return 28;
    }

}; // end class PurchaseConfirmationPopup
