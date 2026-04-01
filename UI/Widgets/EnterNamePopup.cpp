class EnterNamePopup
{
public:

    __int64 __fastcall EnterNamePopup::EnterNamePopup(__int64 a1)
    {
      DeviceLinkCodeReceivedScreen **v2; // x25
      const char *v3; // x1
      const String *String; // x0
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x0
      #1257 *v7; // x0
      __int64 MovieClipByName; // x0
      __int64 v9; // x0
      __int64 v10; // x23
      Rect *v11; // x22
      __int64 v12; // x0
      long double Width; // q0
      GameInputField *v14; // x24
      InputField *v15; // x23
      InputField *v16; // x23
      InputField *v17; // x23
      tween::Bounce *PlayerAvatar; // x23
      _BOOL4 hasName; // w0
      DeviceLinkCodeReceivedScreen *v20; // x23
      __int64 v21; // x0
      GameButton *v22; // x21
      const char *v23; // x1
      const String *v24; // x0
      String v26; // [xsp+0h] [xbp-D0h] BYREF
      String v27; // [xsp+18h] [xbp-B8h] BYREF
      String v28; // [xsp+30h] [xbp-A0h] BYREF
      String v29; // [xsp+48h] [xbp-88h] BYREF
      String v30; // [xsp+60h] [xbp-70h] BYREF
      String v31; // [xsp+78h] [xbp-58h] BYREF
    
      String::String(&v31, "sc/ui.sc");
      String::String(&v30, "popup_type_name");
      PopupBase::PopupBase((PopupBase *)a1, &v31, &v30);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_1004698A8;
      *(_QWORD *)(a1 + 96) = &off_100469A88;
      *(_QWORD *)(a1 + 232) = &off_100469AA8;
      String::String((String *)(a1 + 288));
      *(_BYTE *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      v2 = (DeviceLinkCodeReceivedScreen **)(a1 + 240);
      *(_WORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      String = (const String *)StringTable::getString((#1308 *)"TID_ENTER_NAME_TITLE", v3);
      GUIContainer::setText((#1254 *)a1, "title", String, 1);
      MovieClip = GUIContainer::getMovieClip((#1254 *)a1);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "error");
      *(_QWORD *)(a1 + 264) = TextFieldByName;
      if ( TextFieldByName )
      {
        TextField::fetchFont(TextFieldByName);
        *(_DWORD *)(a1 + 276) = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 64LL);
      }
      v7 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClipByName = MovieClip::getMovieClipByName(v7, "close_button");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = 0;
      v9 = GUIContainer::getMovieClip((#1254 *)a1);
      v10 = MovieClip::getTextFieldByName(v9, "name_input_field");
      TextField::fetchFont((#1271 *)v10);
      v11 = (Rect *)operator new(16);
      Rect::Rect(v11);
      v12 = GUIContainer::getMovieClip((#1254 *)a1);
      DisplayObject::getBounds(v10, v12, v11);
      Width = Rect::getWidth(v11);
      *(_DWORD *)(a1 + 272) = LODWORD(Width);
      *(_BYTE *)(v10 + 74) = 1;
      v14 = (GameInputField *)operator new(144);
      GameInputField::GameInputField(v14, (TextField *)v10, (DropGUIContainer *)a1);
      *(_QWORD *)(a1 + 256) = v14;
      TextInput::setMaxTextLength((TextInput *)v14, 15);
      v15 = *(InputField **)(a1 + 256);
      String::String(&v29, "  ");
      InputField::addForbiddenCharacter(v15, &v29);
      String::~String();
      v16 = *(InputField **)(a1 + 256);
      String::String(&v28, "\t");
      InputField::addForbiddenCharacter(v16, &v28);
      String::~String();
      v17 = *(InputField **)(a1 + 256);
      String::String(&v27, "\n");
      InputField::addForbiddenCharacter(v17, &v27);
      String::~String();
      InputField::addEmojiToForbiddenCharacters(*(InputField **)(a1 + 256));
      String::String(&v26, "");
      if ( GameMode::getInstance() )
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      else
        PlayerAvatar = 0;
      hasName = LogicClientAvatar::hasName(PlayerAvatar);
      *(_BYTE *)(a1 + 280) = 0;
      if ( hasName )
      {
        LogicClientAvatar::getName(PlayerAvatar);
        String::operator=(&v26);
      }
      else
      {
        String::operator=(&v26, "");
      }
      (*(void (__fastcall **)(_QWORD, String *))(**(_QWORD **)(a1 + 256) + 16LL))(*(_QWORD *)(a1 + 256), &v26);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 1);
      v20 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v20);
      *v2 = v20;
      Sprite::setHitArea(v20, (#1261 *)v11);
      GUIContainer::addButtonManually((#1254 *)a1, *(#1251 **)(a1 + 240));
      CustomButton::setButtonListener(*v2, a1 + 96);
      v21 = GUIContainer::getMovieClip((#1254 *)a1);
      (*(void (__fastcall **)(__int64, DeviceLinkCodeReceivedScreen *))(*(_QWORD *)v21 + 160LL))(v21, *v2);
      v22 = (GameButton *)DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button", 1);
      *(_QWORD *)(a1 + 248) = v22;
      v24 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_OK", v23);
      GameButton::setText(v22, "txt", v24);
      MovieClip::playOnce(*(MovieClip **)(a1 + 112));
      EnterNamePopup::updateConfirmButton((EnterNamePopup *)a1);
      String::~String();
      return a1;
    }

    __int64 __fastcall EnterNamePopup::updateConfirmButton(__int64 a1)
    {
      const String *InputText; // x0
      char isValidName; // w1
    
      InputText = (const String *)InputField::getInputText(*(#1279 **)(a1 + 256));
      isValidName = EnterNamePopup::isValidName((SpellItem *)a1, InputText);
      if ( *(_BYTE *)(a1 + 280) || *(_BYTE *)(a1 + 281) )
        isValidName = 0;
      return CustomButton::setEnabled(*(CustomButton **)(a1 + 248), isValidName);
    }

    // attributes: thunk
    __int64 __fastcall EnterNamePopup::EnterNamePopup(__int64 a1)
    {
      return __ZN14EnterNamePopupC2Ev(a1);
    }

    void __fastcall EnterNamePopup::~EnterNamePopup(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)a1 = off_1004698A8;
      *(_QWORD *)(a1 + 96) = &off_100469A88;
      *(_QWORD *)(a1 + 232) = &off_100469AA8;
      v3 = a1 + 240;
      v2 = *(_QWORD *)(a1 + 240);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 240) = 0;
      v4 = *(_QWORD *)(a1 + 256);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_BYTE *)(a1 + 312) = 0;
      *(_WORD *)(v3 + 40) = 0;
      *(_QWORD *)(v3 + 24) = 0;
      *(_QWORD *)(v3 + 32) = 0;
      *(_QWORD *)(v3 + 8) = 0;
      *(_QWORD *)(v3 + 16) = 0;
      *(_QWORD *)v3 = 0;
      String::~String();
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1);
    }

    // attributes: thunk
    void __fastcall EnterNamePopup::~EnterNamePopup(__int64 this)
    {
      __ZN14EnterNamePopupD2Ev(this);
    }

    void __fastcall EnterNamePopup::~EnterNamePopup(SpellItem *this)
    {
      EnterNamePopup::~EnterNamePopup((__int64)this);
      operator delete(this);
    }

    __int64 __fastcall EnterNamePopup::update(SpellItem *this, long double a2)
    {
      tween::Bounce *PlayerAvatar; // x20
    
      PopupBase::update(this, *(float *)&a2);
      if ( GameMode::getInstance() )
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      else
        PlayerAvatar = 0;
      if ( ((*(__int64 (__fastcall **)(SpellItem *))(*(_QWORD *)this + 360LL))(this) & 1) == 0
        && (unsigned int)LogicClientAvatar::getNameSetByUser(PlayerAvatar) )
      {
        return (*(__int64 (__fastcall **)(SpellItem *))(*(_QWORD *)this + 352LL))(this);
      }
      if ( *((_BYTE *)this + 312) )
      {
        *((_BYTE *)this + 312) = 0;
        EnterNamePopup::handleOkPressed(this);
      }
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 32) + 88LL))(*((_QWORD *)this + 32), a2);
      EnterNamePopup::checkMaxPixelWidth(this);
      return EnterNamePopup::updateConfirmButton((__int64)this);
    }

    __int64 __fastcall EnterNamePopup::handleOkPressed(SpellItem *this)
    {
      __int64 result; // x0
      PiranhaMessage *v3; // x19
      const String *InputText; // x21
      String *v5; // x20
    
      *((_BYTE *)this + 312) = 0;
      EnterNamePopup::updateConfirmButton((__int64)this);
      result = CustomButton::isEnabled(*((#1251 **)this + 31));
      if ( (_DWORD)result )
      {
        *((_BYTE *)this + 281) = 1;
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32), 0);
        v3 = (PiranhaMessage *)operator new(88);
        ChangeAvatarNameMessage::ChangeAvatarNameMessage((__int64)v3);
        InputText = (const String *)InputField::getInputText(*((#1279 **)this + 32));
        v5 = (String *)operator new(24);
        String::String(v5, InputText);
        ChangeAvatarNameMessage::setAvatarName((__int64)v3, v5);
        ChangeAvatarNameMessage::setNameSetByUser((__int64)v3, 1);
        return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v3);
      }
      return result;
    }

    __int64 __fastcall EnterNamePopup::checkMaxPixelWidth(#1279 **this)
    {
      TextField *TextField; // x0
      #1279 *v3; // x0
      float v4; // s0
      int v5; // w1
    
      TextField = (TextField *)InputField::getTextField(*(this + 32));
      TextField::getTextWidth(TextField);
      v3 = *(this + 32);
      if ( v4 >= *((float *)this + 68) )
      {
        v5 = *(_DWORD *)InputField::getInputText(v3);
        v3 = *(this + 32);
      }
      else
      {
        v5 = 15;
      }
      return TextInput::setMaxTextLength((TextInput *)v3, v5);
    }

    void __fastcall EnterNamePopup::buttonClicked(SpellItem *this, #1251 *a2)
    {
      #1271 *v3; // x20
      _BYTE *v4; // x20
      void (__fastcall *v5)(_BYTE *, String *); // x21
      String v6; // [xsp+0h] [xbp-50h] BYREF
      String v7; // [xsp+18h] [xbp-38h] BYREF
    
      if ( *((#1251 **)this + 30) == a2 )
      {
        if ( !*((_BYTE *)this + 281) )
        {
          v3 = (#1271 *)*((_QWORD *)this + 33);
          if ( v3 )
          {
            String::String(&v7, "");
            TextField::setText(v3, &v7);
            String::~String();
          }
          v4 = (_BYTE *)*((_QWORD *)this + 32);
          if ( !v4[16] )
          {
            if ( *((_BYTE *)this + 280) )
            {
              *((_BYTE *)this + 280) = 0;
              v5 = *(void (__fastcall **)(_BYTE *, String *))(*(_QWORD *)v4 + 16LL);
              String::String(&v6, "");
              v5(v4, &v6);
              String::~String();
              v4 = (_BYTE *)*((_QWORD *)this + 32);
            }
            (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 56LL))(v4, 1);
            EnterNamePopup::updateConfirmButton((__int64)this);
          }
        }
      }
      else if ( *((#1251 **)this + 31) == a2 )
      {
        (*(void (__fastcall **)(SpellItem *, _QWORD))(*(_QWORD *)this + 304LL))(this, 0);
      }
    }

    __int64 __fastcall EnterNamePopup::isValidName(#1279 **this, String *a2)
    {
      TextField *TextField; // x0
      const char *v4; // x1
      const #1174 *v5; // x2
      const String *Font; // x8
    
      TextField = (TextField *)InputField::getTextField(*(this + 32));
      Font = (const String *)TextField::getFont(TextField);
      if ( Font )
        return EnterNamePopup::isValidName((SpellItem *)a2, Font, v5);
      Debugger::warning((__siginfo *)"EnterNamePopup: pFont is NULL.", v4);
      return 0;
    }

    __int64 __fastcall EnterNamePopup::allowClosingFromModalTapping(SpellItem *this)
    {
      return 0;
    }

    __int64 __fastcall EnterNamePopup::pendingNameFailed(SpellItem *this, const char *a2)
    {
      #1271 *v3; // x20
      const String *String; // x0
    
      v3 = (#1271 *)*((_QWORD *)this + 33);
      if ( v3 )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_NAME_FAILED", a2);
        TextField::setText(v3, String);
      }
      *((_BYTE *)this + 281) = 0;
      return EnterNamePopup::updateConfirmButton((__int64)this);
    }

    __int64 __fastcall EnterNamePopup::showTopHUDRightUnderModal(SpellItem *this)
    {
      return 1;
    }

    __int64 __fastcall EnterNamePopup::inputFieldOkPressed(__int64 result)
    {
      *(_BYTE *)(result + 312) = 1;
      return result;
    }

    __int64 __fastcall EnterNamePopup::inputEnded(__int64 a1)
    {
      return InputField::getInputText(*(#1279 **)(a1 + 256));
    }

    __int64 __fastcall EnterNamePopup::isValidName(SpellItem *this, const String *a2, const #1174 *a3)
    {
      int m_length; // w21
      String v7; // [xsp+8h] [xbp-38h] BYREF
    
      String::trim(&v7, this);
      m_length = v7.m_length;
      String::~String();
      if ( m_length )
        return (*(__int64 (__fastcall **)(const String *, SpellItem *))(*(_QWORD *)&a2->m_length + 24LL))(a2, this);
      else
        return 0;
    }

    __int64 __fastcall EnterNamePopup::getPopupType(SpellItem *this)
    {
      return 5;
    }

}; // end class EnterNamePopup
