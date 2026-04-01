class NameChangeScreen
{
public:

    __int64 __fastcall NameChangeScreen::NameChangeScreen(__int64 a1, __int64 a2, const String *a3)
    {
      const String *v6; // x2
      #1308 *MovieClip; // x24
      const char *v8; // x1
      GameInputField *v9; // x22
      TextField *TextFieldByName; // x0
      DeviceLinkCodeReceivedScreen *v11; // x22
      long double v12; // q0
      __int64 ChildByName; // x0
      __int64 v14; // x21
      void (__fastcall *v15)(__int64, __int64); // x22
      __int64 TextField; // x0
      __int64 v17; // x21
      void (__fastcall *v18)(__int64, String *); // x22
      InputField *v19; // x21
      InputField *v20; // x21
      InputField *v21; // x21
      String v23; // [xsp+10h] [xbp-100h] BYREF
      String v24; // [xsp+28h] [xbp-E8h] BYREF
      String v25; // [xsp+40h] [xbp-D0h] BYREF
      String v26; // [xsp+58h] [xbp-B8h] BYREF
      String v27; // [xsp+70h] [xbp-A0h] BYREF
      String v28; // [xsp+88h] [xbp-88h] BYREF
      String v29; // [xsp+A0h] [xbp-70h] BYREF
      String v30; // [xsp+B8h] [xbp-58h] BYREF
    
      NameChangeSubScreen::NameChangeSubScreen((LogicExpLevelData *)a1);
      *(_QWORD *)a1 = off_100468598;
      *(_QWORD *)(a1 + 96) = &off_100468740;
      *(_QWORD *)(a1 + 248) = &off_100468760;
      String::String((String *)(a1 + 296));
      *(_DWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 277) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      String::operator=(a1 + 296, "");
      *(_QWORD *)(a1 + 320) = 0;
      *(_DWORD *)(a1 + 328) = 0;
      String::String(&v30, "change_name_dialog_1");
      if ( (_DWORD)a2 == 1 )
        String::operator=(&v30, "change_name_dialog_2");
      *(_DWORD *)(a1 + 288) = a2;
      String::String(&v29, "sc/ui.sc");
      MovieClip = StringTable::getMovieClip((#1308 *)&v29, &v30, v6);
      String::~String();
      (*(void (__fastcall **)(__int64, #1308 *))(*(_QWORD *)a1 + 272LL))(a1, MovieClip);
      String::String(&v28, "TID_CHANGE_NAME_TITLE");
      NameChangeSubScreen::setTitleTID((NameChangeSubScreen *)a1, &v28);
      String::~String();
      String::getFormatted((__int64 *)&v27.m_length, (String *)"enterNameScreen_%i", v8, a2);
      GUIContainer::setAnalyticsName((#1254 *)a1, &v27);
      String::~String();
      String::operator=((String *)(a1 + 296));
      if ( !(_DWORD)a2 )
        MovieClip::setText(*(MovieClip **)(a1 + 112), "player_name", a3);
      *(_QWORD *)(a1 + 272) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button_continue", 1);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      *(_QWORD *)(a1 + 320) = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 112), "names_not_matching");
      v9 = (GameInputField *)operator new(144);
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 112), "name_field");
      GameInputField::GameInputField(v9, TextFieldByName, (DropGUIContainer *)a1);
      *(_QWORD *)(a1 + 256) = v9;
      v11 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v11);
      *(_QWORD *)(a1 + 264) = v11;
      ChildByName = MovieClip::getChildByName(*(_QWORD *)(a1 + 112), "name_background", v12);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 264) + 288LL))(
        *(_QWORD *)(a1 + 264),
        ChildByName,
        0);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 264), a1 + 96);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 160LL))(
        *(_QWORD *)(a1 + 112),
        *(_QWORD *)(a1 + 264));
      v14 = *(_QWORD *)(a1 + 112);
      v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 160LL);
      TextField = InputField::getTextField(*(#1279 **)(a1 + 256));
      v15(v14, TextField);
      v17 = *(_QWORD *)(a1 + 256);
      v18 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v17 + 16LL);
      String::String(&v26, "");
      v18(v17, &v26);
      String::~String();
      TextInput::setMaxTextLength(*(TextInput **)(a1 + 256), 15);
      v19 = *(InputField **)(a1 + 256);
      String::String(&v25, "  ");
      InputField::addForbiddenCharacter(v19, &v25);
      String::~String();
      v20 = *(InputField **)(a1 + 256);
      String::String(&v24, "\t");
      InputField::addForbiddenCharacter(v20, &v24);
      String::~String();
      v21 = *(InputField **)(a1 + 256);
      String::String(&v23, "\n");
      InputField::addForbiddenCharacter(v21, &v23);
      String::~String();
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 1);
      NameChangeSubScreen::setUseBack((LogicExpLevelData *)a1, 1);
      String::~String();
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall NameChangeScreen::NameChangeScreen(__int64 a1, __int64 a2, const String *a3)
    {
      return __ZN16NameChangeScreenC2EN19NameChangeSubScreen6ScreenERK6String(a1, a2, a3);
    }

    void __fastcall NameChangeScreen::~NameChangeScreen(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      *(_QWORD *)a1 = off_100468598;
      *(_QWORD *)(a1 + 96) = &off_100468740;
      *(_QWORD *)(a1 + 248) = &off_100468760;
      v2 = *(_QWORD *)(a1 + 264);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 264) = 0;
      v3 = *(_QWORD *)(a1 + 256);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_DWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 277) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      String::operator=(a1 + 296, "");
      *(_QWORD *)(a1 + 320) = 0;
      *(_DWORD *)(a1 + 328) = 0;
      String::~String();
      NameChangeSubScreen::~NameChangeSubScreen((LogicExpLevelData *)a1);
    }

    // attributes: thunk
    void __fastcall NameChangeScreen::~NameChangeScreen(__int64 a1)
    {
      __ZN16NameChangeScreenD2Ev(a1);
    }

    void __fastcall NameChangeScreen::~NameChangeScreen(void *a1)
    {
      NameChangeScreen::~NameChangeScreen((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall NameChangeScreen::update(tween::Sine *this, long double a2)
    {
      NameChangeSubScreen::update(this, *(float *)&a2);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 34) + 152LL))(*((_QWORD *)this + 34), 0);
      *(_BYTE *)(*((_QWORD *)this + 34) + 64LL) = 1;
      return (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 32) + 88LL))(*((_QWORD *)this + 32), a2);
    }

    void __fastcall NameChangeScreen::buttonClicked(__int64 *a1, __int64 a2)
    {
      int v3; // w20
      const String *InputText; // x0
      int v5; // w0
      const char *v6; // x1
      __int64 v7; // x8
      BadgePopup *v8; // x0
      Stage *Instance; // x19
      const char *v10; // x1
      void *v11; // x0
      void *String; // x1
      AvatarNameCheckRequestMessage *v13; // x19
      String *v14; // x0
      String *v15; // x20
      internal_t *pHeap; // x1
      void (__fastcall *v17)(__int64 *, void *); // [xsp+0h] [xbp-40h]
      String v18; // [xsp+8h] [xbp-38h] BYREF
    
      if ( a1[33] == a2 )
      {
        if ( !*((_BYTE *)a1 + 284) )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[32] + 56LL))(a1[32], 1);
      }
      else if ( a1[34] == a2 )
      {
        v3 = *((_DWORD *)a1 + 72);
        InputText = (const String *)InputField::getInputText((#1279 *)a1[32]);
        if ( v3 )
        {
          v5 = String::equals(InputText, a1 + 37);
          v7 = *a1;
          if ( v5 )
          {
            (*(void (__fastcall **)(__int64 *, __int64 *))(v7 + 400))(a1, a1 + 37);
          }
          else
          {
            v17 = *(void (__fastcall **)(__int64 *, void *))(v7 + 376);
            String = StringTable::getString((#1308 *)"TID_ERROR_NAMES_DONT_MATCH", v6);
            v17(a1, String);
          }
        }
        else
        {
          v8 = (BadgePopup *)String::String(&v18, InputText);
          if ( v18.m_length > 1 )
          {
            v13 = (AvatarNameCheckRequestMessage *)operator new(80);
            AvatarNameCheckRequestMessage::AvatarNameCheckRequestMessage(v13);
            v14 = (String *)operator new(24);
            v15 = v14;
            if ( v18.m_bytes + 1 > 8 )
              pHeap = (internal_t *)v18.internal.pHeap;
            else
              pHeap = &v18.internal;
            String::String(v14, (const char *)pHeap);
            AvatarNameCheckRequestMessage::setName(v13, v15);
            MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v13);
          }
          else
          {
            Instance = (Stage *)GUI::getInstance(v8);
            v11 = StringTable::getString((#1308 *)"TID_NAME_TOO_SHORT", v10);
            GUI::showCenteredFloaterText(Instance, (__int64)v11, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          }
          String::~String();
        }
      }
    }

    __int64 __fastcall NameChangeScreen::getSubScreenType(tween::Sine *this)
    {
      return *((unsigned int *)this + 72);
    }

    __int64 __fastcall NameChangeScreen::poppedBack(tween::Sine *this)
    {
      NameChangeSubScreen::poppedBack(this);
      *((_BYTE *)this + 284) = 0;
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32), 1);
    }

    #1271 *__fastcall NameChangeScreen::showWarning(tween::Sine *this, const String *a2)
    {
      #1271 *result; // x0
    
      result = (#1271 *)*((_QWORD *)this + 40);
      if ( result )
        return (#1271 *)TextField::setText(result, a2);
      return result;
    }

    __int64 __fastcall NameChangeScreen::keyDown(tween::Sine *this)
    {
      return 0;
    }

    void __fastcall NameChangeScreen::handleNameChangeMessage(tween::Sine *this)
    {
      ;
    }

    __int64 __fastcall NameChangeScreen::handleNameCheckOk(#1279 **this)
    {
      __int64 Instance; // x0
      #1165 *v3; // x19
      LogicExpLevelData *v4; // x20
      const String *InputText; // x0
    
      Instance = GUI::getInstance((BadgePopup *)this);
      v3 = (#1165 *)GUI::getNameChangeWindow(Instance);
      v4 = (LogicExpLevelData *)operator new(336);
      InputText = (const String *)InputField::getInputText(*(this + 32));
      NameChangeScreen::NameChangeScreen((__int64)v4, 1, InputText);
      return NameChangeWindow::pushScreen(v3, v4);
    }

    __int64 __fastcall NameChangeScreen::nameChanged(#1279 **this, const String *a2)
    {
      BadgePopup *v3; // x0
      const char *v4; // x1
      __int64 Instance; // x0
      #1165 *v6; // x20
      NameChangeConfirmationScreen *v7; // x21
      const String *InputText; // x0
      void *String; // x1
      __int64 (__fastcall *v11)(#1279 **, void *); // [xsp+8h] [xbp-28h]
    
      v3 = (BadgePopup *)String::equals(a2, this + 37);
      if ( (_DWORD)v3 )
      {
        Instance = GUI::getInstance(v3);
        v6 = (#1165 *)GUI::getNameChangeWindow(Instance);
        v7 = (NameChangeConfirmationScreen *)operator new(320);
        InputText = (const String *)InputField::getInputText(*(this + 32));
        NameChangeConfirmationScreen::NameChangeConfirmationScreen(v7, InputText);
        return NameChangeWindow::pushScreen(v6, v7);
      }
      else
      {
        v11 = (__int64 (__fastcall *)(#1279 **, void *))*((_QWORD *)*this + 47);
        String = StringTable::getString((#1308 *)"TID_ERROR_NAMES_DONT_MATCH", v4);
        return v11(this, String);
      }
    }

}; // end class NameChangeScreen
