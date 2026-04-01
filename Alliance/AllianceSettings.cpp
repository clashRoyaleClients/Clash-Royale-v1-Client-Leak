class AllianceSettings
{
public:

    __int64 __fastcall AllianceSettings::AllianceSettings(__int64 a1, int a2)
    {
      __int64 v4; // x22
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x21
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x0
      __int64 v9; // x0
      MovieClip *v10; // x23
      const char *v11; // x1
      const String *String; // x0
      MovieClip *v13; // x22
      HomeScreen *Globals; // x0
      int Cost; // w0
      #1257 *v16; // x0
      __int64 v17; // x0
      __int64 v18; // x0
      MovieClip *v19; // x22
      const char *v20; // x1
      const String *v21; // x0
      MovieClip *v22; // x22
      const char *v23; // x1
      const String *v24; // x0
      MovieClip *v25; // x22
      const char *v26; // x1
      const String *v27; // x0
      __int64 v28; // x0
      __int64 v29; // x0
      #1257 *v30; // x0
      __int64 v31; // x0
      Rect *v32; // x21
      __int64 v33; // x0
      __int64 TextFieldByName; // x22
      __int64 v35; // x0
      TextInput *InputField; // x0
      __int64 Table; // x21
      __int64 (__fastcall *v38)(__int64, _QWORD); // x23
      int v39; // w0
      __int64 v40; // x0
      __int64 v41; // x0
      #1271 *v42; // x22
      const String *AllianceName; // x0
      #1257 *v44; // x0
      __int64 v45; // x0
      Rect *v46; // x21
      __int64 v47; // x0
      __int64 v48; // x22
      __int64 v49; // x0
      TextInput *v50; // x0
      void (__fastcall *v51)(__int64, __int64); // x20
      AreaEffectObject *v52; // x2
      __int64 RegionByName; // x0
      String v55; // [xsp+8h] [xbp-78h] BYREF
      String v56; // [xsp+20h] [xbp-60h] BYREF
      String v57; // [xsp+38h] [xbp-48h] BYREF
    
      String::String(&v57, "sc/ui.sc");
      String::String(&v56, "guild_create_page");
      DropGUIContainer::DropGUIContainer((#1375 *)a1, &v57, &v56);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046CE40;
      *(_QWORD *)(a1 + 96) = &off_10046CFC8;
      *(_QWORD *)(a1 + 192) = off_10046CFE8;
      *(_QWORD *)(a1 + 200) = &off_10046D028;
      *(_QWORD *)(a1 + 208) = &off_10046D040;
      *(_WORD *)(a1 + 216) = 0;
      v4 = a1 + 224;
      memset((void *)(a1 + 224), 0, 0x4Cu);
      *(_DWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      Instance = GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(Instance + 112));
      *(_BYTE *)(a1 + 216) = a2;
      if ( a2 )
      {
        MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
        MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "save_button");
        if ( MovieClipByName )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)MovieClipByName + 8LL))(MovieClipByName);
        v9 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "create_club_button", 1);
        *(_QWORD *)v4 = v9;
        v10 = *(MovieClip **)(v9 + 96);
        String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_CREATE", v11);
        MovieClip::setText(v10, "button_text", String);
        v13 = *(MovieClip **)(*(_QWORD *)v4 + 96LL);
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        Cost = LogicGlobals::getAllianceCreateCost(Globals);
        MovieClip::setNumberText(v13, "price", Cost, 0);
      }
      else
      {
        v16 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
        v17 = MovieClip::getMovieClipByName(v16, "create_club_button");
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        v18 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "save_button", 1);
        *(_QWORD *)v4 = v18;
        v19 = *(MovieClip **)(v18 + 96);
        v21 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SAVE", v20);
        MovieClip::setText(v19, "txt", v21);
      }
      *(_QWORD *)(a1 + 280) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "min_trophie_button_left", 1);
      *(_QWORD *)(a1 + 288) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "min_trophie_button_right", 1);
      *(_QWORD *)(a1 + 312) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "club_type_button_left", 1);
      *(_QWORD *)(a1 + 320) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "club_type_button_right", 1);
      *(_QWORD *)(a1 + 272) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "location_button", 1);
      *(_QWORD *)(a1 + 264) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "badge_button", 1);
      v22 = *(MovieClip **)(*(_QWORD *)(a1 + 272) + 96LL);
      v24 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_BROWSE", v23);
      MovieClip::setText(v22, "txt", v24);
      v25 = *(MovieClip **)(*(_QWORD *)(a1 + 264) + 96LL);
      v27 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_BROWSE", v26);
      MovieClip::setText(v25, "txt", v27);
      *(_DWORD *)(a1 + 296) = 0;
      v28 = GUIContainer::getMovieClip((#1254 *)a1);
      *(_QWORD *)(a1 + 304) = MovieClip::getTextFieldByName(v28, "min_trophies");
      *(_DWORD *)(a1 + 328) = 1;
      v29 = GUIContainer::getMovieClip((#1254 *)a1);
      *(_QWORD *)(a1 + 336) = MovieClip::getTextFieldByName(v29, "type");
      AllianceSettings::updateScoreAndType((AllianceSettings *)a1);
      v30 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      v31 = MovieClip::getMovieClipByName(v30, "header");
      if ( v31 )
        *(_BYTE *)(v31 + 8) = a2;
      if ( *(_BYTE *)(a1 + 216) )
      {
        v32 = (Rect *)operator new(16);
        Rect::Rect(v32);
        v33 = GUIContainer::getMovieClip((#1254 *)a1);
        TextFieldByName = MovieClip::getTextFieldByName(v33, "guild_name");
        TextField::fetchFont((#1271 *)TextFieldByName);
        v35 = GUIContainer::getMovieClip((#1254 *)a1);
        DisplayObject::getBounds(TextFieldByName, v35, v32);
        *(_BYTE *)(TextFieldByName + 74) = 1;
        InputField = (TextInput *)AllianceSettings::createInputField((AllianceSettings *)a1, (TextField *)TextFieldByName);
        *(_QWORD *)(a1 + 240) = InputField;
        TextInput::setMaxTextLength(InputField, 15);
        *(_QWORD *)(a1 + 232) = AllianceSettings::createInputActivationButton((AllianceSettings *)a1, v32);
        Table = LogicDataTables::getTable(16);
        v38 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Table + 40LL);
        LODWORD(TextFieldByName) = rand();
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
        v40 = v38(Table, (unsigned int)((int)TextFieldByName % v39));
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 368LL))(a1, v40);
      }
      else
      {
        v41 = GUIContainer::getMovieClip((#1254 *)a1);
        v42 = (#1271 *)MovieClip::getTextFieldByName(v41, "guild_name");
        TextField::fetchFont(v42);
        AllianceName = (const String *)LogicClientAvatar::getAllianceName(PlayerAvatar);
        TextField::setText(v42, AllianceName);
        v44 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
        v45 = MovieClip::getMovieClipByName(v44, "name_bg");
        if ( v45 )
          *(_BYTE *)(v45 + 8) = 0;
      }
      v46 = (Rect *)operator new(16);
      Rect::Rect(v46);
      v47 = GUIContainer::getMovieClip((#1254 *)a1);
      v48 = MovieClip::getTextFieldByName(v47, "description");
      TextField::fetchFont((#1271 *)v48);
      v49 = GUIContainer::getMovieClip((#1254 *)a1);
      DisplayObject::getBounds(v48, v49, v46);
      *(_BYTE *)(v48 + 74) = 1;
      TextField::setMultiLine((#1271 *)v48, 1);
      v50 = (TextInput *)AllianceSettings::createInputField((AllianceSettings *)a1, (TextField *)v48);
      *(_QWORD *)(a1 + 256) = v50;
      TextInput::setMaxTextLength(v50, 128);
      *(_QWORD *)(a1 + 248) = AllianceSettings::createInputActivationButton((AllianceSettings *)a1, v46);
      if ( a2 )
      {
        v51 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 360LL);
        String::String(&v55, "_INT");
        RegionByName = LogicDataTables::getRegionByName((LogicKickAllianceMemberCommand *)&v55, 0, v52);
        v51(a1, RegionByName);
        String::~String();
      }
      return a1;
    }

    __int64 __fastcall AllianceSettings::updateScoreAndType(__int64 a1, const char *a2)
    {
      unsigned int v3; // w8
      char *v4; // x0
      #1271 *v5; // x20
      const String *String; // x0
    
      v3 = *(_DWORD *)(a1 + 328) - 1;
      if ( v3 > 2 )
        v4 = "TID_INVALID";
      else
        v4 = off_10046D050[v3];
      v5 = *(#1271 **)(a1 + 336);
      String = (const String *)StringTable::getString((#1308 *)v4, a2);
      TextField::setText(v5, String);
      return TextField::setNumberText(*(TextField **)(a1 + 304), *(_DWORD *)(a1 + 296), 0);
    }

    GameInputField *__fastcall AllianceSettings::createInputField(DropGUIContainer *a1, TextField *a2)
    {
      GameInputField *v4; // x19
      String v6; // [xsp+8h] [xbp-68h] BYREF
      String v7; // [xsp+20h] [xbp-50h] BYREF
      String v8; // [xsp+38h] [xbp-38h] BYREF
    
      v4 = (GameInputField *)operator new(144);
      GameInputField::GameInputField(v4, a2, a1);
      String::String(&v8, "  ");
      InputField::addForbiddenCharacter(v4, &v8);
      String::~String();
      String::String(&v7, "\t");
      InputField::addForbiddenCharacter(v4, &v7);
      String::~String();
      String::String(&v6, "\n");
      InputField::addForbiddenCharacter(v4, &v6);
      String::~String();
      return v4;
    }

    GameButton *__fastcall AllianceSettings::createInputActivationButton(#1254 *a1, #1261 *a2)
    {
      GameButton *v4; // x19
      __int64 MovieClip; // x0
    
      v4 = (GameButton *)operator new(264);
      GameButton::GameButton(v4);
      Sprite::setHitArea(v4, a2);
      GUIContainer::addButtonManually(a1, v4);
      CustomButton::setButtonListener(v4, (char *)a1 + 96);
      MovieClip = GUIContainer::getMovieClip(a1);
      (*(void (__fastcall **)(__int64, GameButton *))(*(_QWORD *)MovieClip + 160LL))(MovieClip, v4);
      return v4;
    }

    // attributes: thunk
    void __fastcall AllianceSettings::AllianceSettings(AllianceSettings *this, int a2)
    {
      __ZN16AllianceSettingsC2Eb((__int64)this, a2);
    }

    void __fastcall AllianceSettings::~AllianceSettings(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      *(_QWORD *)a1 = off_10046CE40;
      *(_QWORD *)(a1 + 96) = &off_10046CFC8;
      *(_QWORD *)(a1 + 192) = off_10046CFE8;
      *(_QWORD *)(a1 + 200) = &off_10046D028;
      *(_QWORD *)(a1 + 208) = &off_10046D040;
      v2 = *(_QWORD *)(a1 + 344);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 344) = 0;
      v3 = *(_QWORD *)(a1 + 232);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_QWORD *)(a1 + 232) = 0;
      v4 = *(_QWORD *)(a1 + 240);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_QWORD *)(a1 + 240) = 0;
      v5 = *(_QWORD *)(a1 + 248);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *(_QWORD *)(a1 + 248) = 0;
      v6 = *(_QWORD *)(a1 + 256);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *(_WORD *)(a1 + 216) = 0;
      *(_DWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      memset((void *)(a1 + 224), 0, 0x4Cu);
      DropGUIContainer::~DropGUIContainer((#1375 *)a1);
    }

    // attributes: thunk
    void __fastcall AllianceSettings::~AllianceSettings(__int64 a1)
    {
      __ZN16AllianceSettingsD2Ev(a1);
    }

    void __fastcall AllianceSettings::~AllianceSettings(void *a1)
    {
      AllianceSettings::~AllianceSettings((__int64)a1);
      operator delete(a1);
    }

    _BYTE *__fastcall AllianceSettings::buttonClicked(__int64 a1, const char *a2)
    {
      __int64 v4; // x0
      _BYTE *result; // x0
      const char *v6; // x9
      __int64 i; // x10
      int v8; // w9
      BadgePopup *v9; // x21
      BadgePopup *v10; // x0
      __int64 v11; // x8
      __int64 Instance; // x0
      const char *v13; // x9
      __int64 v14; // x0
      std::ostream *v15; // x0
      CreateAllianceMessage *v16; // x20
      String *v17; // x21
      const String *InputText; // x0
      String *v19; // x21
      const String *v20; // x0
      __int64 j; // x10
      int v22; // w9
      __int64 v23; // x8
      LocalNotification *v24; // x20
      String *v25; // x21
      const String *v26; // x0
      BadgePopup *v27; // x0
      __int64 v28; // x0
    
      v4 = *(_QWORD *)(a1 + 240);
      if ( v4 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, 0);
      result = *(_BYTE **)(a1 + 256);
      if ( result )
        result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)result + 56LL))(result, 0);
      if ( *(const char **)(a1 + 264) == a2 )
      {
        v9 = (BadgePopup *)operator new(272);
        BadgePopup::BadgePopup(v9);
        v11 = a1 + 208;
    LABEL_18:
        *((_QWORD *)v9 + 33) = v11;
        Instance = GUI::getInstance(v10);
        result = (_BYTE *)GUI::showPopup(Instance, v9, 1, 0, 0);
        goto LABEL_19;
      }
      if ( *(const char **)(a1 + 272) == a2 )
      {
        v9 = (BadgePopup *)operator new(272);
        RegionPopup::RegionPopup(v9, 0);
        v11 = a1 + 200;
        goto LABEL_18;
      }
      v6 = *(const char **)(a1 + 312);
      if ( v6 == a2 || *(const char **)(a1 + 320) == a2 )
      {
        for ( i = 0; i < 3; ++i )
        {
          if ( AllianceSettings::buttonClicked(CustomButton *)::types[i] == *(_DWORD *)(a1 + 328) )
            break;
        }
        if ( v6 == a2 )
          v8 = 2;
        else
          v8 = 4;
        *(_DWORD *)(a1 + 328) = AllianceSettings::buttonClicked(CustomButton *)::types[(v8 + (int)i) % 3];
        result = (_BYTE *)AllianceSettings::updateScoreAndType(a1, a2);
      }
    LABEL_19:
      v13 = *(const char **)(a1 + 280);
      if ( v13 == a2 || *(const char **)(a1 + 288) == a2 )
      {
        for ( j = 0; j < 6; ++j )
        {
          if ( AllianceSettings::buttonClicked(CustomButton *)::types[j] == *(_DWORD *)(a1 + 296) )
            break;
        }
        if ( v13 == a2 )
          v22 = 5;
        else
          v22 = 7;
        *(_DWORD *)(a1 + 296) = AllianceSettings::buttonClicked(CustomButton *)::types[(v22 + (int)j) % 6];
        return (_BYTE *)AllianceSettings::updateScoreAndType(a1, a2);
      }
      if ( *(const char **)(a1 + 232) == a2 )
      {
        if ( *(_BYTE *)(a1 + 217) || *(_BYTE *)(*(_QWORD *)(a1 + 240) + 16LL) )
          return result;
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 56LL))(*(_QWORD *)(a1 + 256), 0);
        result = *(_BYTE **)(a1 + 240);
        return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)result + 56LL))(result, 1);
      }
      if ( *(const char **)(a1 + 248) == a2 )
      {
        if ( *(_BYTE *)(a1 + 217) )
          return result;
        result = *(_BYTE **)(a1 + 256);
        if ( result[16] )
          return result;
        v23 = *(_QWORD *)(a1 + 240);
        if ( v23 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v23 + 56LL))(*(_QWORD *)(a1 + 240), 0);
          result = *(_BYTE **)(a1 + 256);
        }
        return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)result + 56LL))(result, 1);
      }
      if ( *(const char **)(a1 + 224) == a2 )
      {
        result = (_BYTE *)AllianceSettings::allOK((std::ostream *)a1, 1);
        if ( (_DWORD)result )
        {
          *(_BYTE *)(a1 + 217) = 1;
          v14 = *(_QWORD *)(a1 + 240);
          if ( v14 )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 56LL))(v14, 0);
          v15 = (std::ostream *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 56LL))(
                                  *(_QWORD *)(a1 + 256),
                                  0);
          if ( *(_BYTE *)(a1 + 216) )
          {
            result = (_BYTE *)AllianceSettings::hasResourceToCreate(v15, 1);
            if ( (_DWORD)result )
            {
              v16 = (CreateAllianceMessage *)operator new(112);
              CreateAllianceMessage::CreateAllianceMessage(v16);
              v17 = (String *)operator new(24);
              InputText = (const String *)InputField::getInputText(*(#1279 **)(a1 + 240));
              String::String(v17, InputText);
              CreateAllianceMessage::setAllianceName((__int64)v16, v17);
              v19 = (String *)operator new(24);
              v20 = (const String *)InputField::getInputText(*(#1279 **)(a1 + 256));
              String::String(v19, v20);
              CreateAllianceMessage::setAllianceDescription((__int64)v16, v19);
              CreateAllianceMessage::setAllianceType((__int64)v16, *(_DWORD *)(a1 + 328));
              CreateAllianceMessage::setRequiredScore((__int64)v16, *(_DWORD *)(a1 + 296));
              CreateAllianceMessage::setRegion((__int64)v16, *(_QWORD *)(a1 + 352));
              CreateAllianceMessage::setAllianceBadgeData((__int64)v16, *(_QWORD *)(a1 + 360));
              return (_BYTE *)MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v16);
            }
          }
          else
          {
            v24 = (LocalNotification *)operator new(104);
            ChangeAllianceSettingsMessage::ChangeAllianceSettingsMessage(v24);
            v25 = (String *)operator new(24);
            v26 = (const String *)InputField::getInputText(*(#1279 **)(a1 + 256));
            String::String(v25, v26);
            ChangeAllianceSettingsMessage::setAllianceDescription(v24, v25);
            ChangeAllianceSettingsMessage::setAllianceType(v24, *(_DWORD *)(a1 + 328));
            ChangeAllianceSettingsMessage::setRequiredScore(v24, *(_DWORD *)(a1 + 296));
            ChangeAllianceSettingsMessage::setRegion(v24, *(const LogicRegionData **)(a1 + 352));
            ChangeAllianceSettingsMessage::setAllianceBadgeData(v24, *(const LogicUpgradeTowerCommand **)(a1 + 360));
            v27 = (BadgePopup *)MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v24);
            v28 = GUI::getInstance(v27);
            result = (_BYTE *)GUI::getPopupByType(v28, 32);
            if ( result )
              return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)result + 352LL))(result);
          }
        }
      }
      return result;
    }

    bool __fastcall AllianceSettings::allOK(std::ostream *this, int a2)
    {
      #1279 *v4; // x0
      BadgePopup *InputText; // x0
      Stage *Instance; // x19
      float v7; // s1
      const char *v8; // x1
      const String *String; // x0
      __int64 v11; // x0
      tween::Bounce *PlayerAvatar; // x20
      HomeScreen *Globals; // x21
      const #1355 *Resource; // x22
      __int64 Cost; // x0
      float v16[2]; // [xsp+8h] [xbp-28h] BYREF
    
      if ( *((_BYTE *)this + 217) )
        return 0;
      v4 = (#1279 *)*((_QWORD *)this + 30);
      if ( v4 )
      {
        InputText = (BadgePopup *)InputField::getInputText(v4);
        if ( *(int *)InputText <= 1 )
        {
          if ( a2 )
          {
            Instance = (Stage *)GUI::getInstance(InputText);
            v16[0] = GUI::getDefaultFloaterPos(Instance);
            v16[1] = v7;
            String = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_NAME_TOO_SHORT", v8);
            GUI::showFloaterTextAt((__int64)Instance, v16, String, -1, 0.0);
          }
          return 0;
        }
      }
      if ( !*((_BYTE *)this + 216) )
        return 1;
      v11 = GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*(_QWORD *)(v11 + 112));
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      Resource = (const #1355 *)LogicGlobals::getAllianceCreateResource(Globals);
      Cost = LogicGlobals::getAllianceCreateCost(Globals);
      return LogicClientAvatar::hasEnoughResources(PlayerAvatar, Resource, Cost, a2, 0, 0);
    }

    bool __fastcall AllianceSettings::hasResourceToCreate(std::ostream *this, int a2)
    {
      HomeScreen *Globals; // x0
      const #1355 *Resource; // x20
      HomeScreen *v5; // x0
      __int64 Cost; // x21
      tween::Bounce *PlayerAvatar; // x0
    
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      Resource = (const #1355 *)LogicGlobals::getAllianceCreateResource(Globals);
      v5 = (HomeScreen *)LogicDataTables::getGlobals();
      Cost = LogicGlobals::getAllianceCreateCost(v5);
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      return LogicClientAvatar::hasEnoughResources(PlayerAvatar, Resource, Cost, a2, 0, 0);
    }

    __int64 __fastcall AllianceSettings::update(std::ostream *this, long double a2)
    {
      __int64 v4; // x0
      __int64 v5; // x0
      HomeScreen *Globals; // x0
      #1271 *Cost; // x20
      char *v8; // x21
      #1395 *TextFieldByName; // x0
      const char *v10; // x4
      __int64 v11; // x20
      _BOOL8 v12; // x1
      __int64 (__fastcall *v14)(__int64, _BOOL8); // [xsp+8h] [xbp-38h]
    
      v4 = *((_QWORD *)this + 32);
      if ( v4 )
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v4 + 88LL))(v4, *(float *)&a2);
      v5 = *((_QWORD *)this + 30);
      if ( v5 )
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v5 + 88LL))(v5, a2);
      if ( *((_BYTE *)this + 216) )
      {
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        Cost = (#1271 *)LogicGlobals::getAllianceCreateCost(Globals);
        v8 = (char *)this + 224;
        TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(*(_QWORD *)(*((_QWORD *)this + 28) + 96LL), "price");
        MovieClipHelper::setGoldPriceText(TextFieldByName, Cost, -1, 0, v10);
      }
      else
      {
        v8 = (char *)this + 224;
      }
      v11 = *(_QWORD *)v8;
      v14 = *(__int64 (__fastcall **)(__int64, _BOOL8))(**(_QWORD **)v8 + 152LL);
      v12 = !AllianceSettings::allOK(this, 0);
      return v14(v11, v12);
    }

    const char *__fastcall AllianceSettings::typeToString(std::ostream *this)
    {
      if ( (unsigned int)((_DWORD)this - 1) > 2 )
        return "TID_INVALID";
      else
        return off_10046D050[(int)this - 1];
    }

    __int64 __fastcall AllianceSettings::setData(std::ostream *this, Rect *a2)
    {
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x21
      __int64 v6; // x0
      Rect AllianceHeaderEntry; // x0
      const String *AllianceName; // x0
      __int64 v9; // x21
      void (__fastcall *v10)(__int64, __int64); // x22
      __int64 AllianceDescription; // x0
      Rect v12; // x0
      Rect v13; // x0
      void (__fastcall *v14)(std::ostream *, __int64); // x21
      Rect v15; // x0
      __int64 AllianceBadgeData; // x0
      void (__fastcall *v17)(std::ostream *, __int64); // x21
      Rect v18; // x0
      __int64 Region; // x0
      const char *v20; // x1
    
      MovieClip = GUIContainer::getMovieClip(this);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "alliance_name_input");
      if ( TextFieldByName
        || (v6 = GUIContainer::getMovieClip(this),
            (TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v6, "guild_name")) != 0) )
      {
        AllianceHeaderEntry = AllianceFullEntry::getAllianceHeaderEntry(a2);
        AllianceName = (const String *)AllianceHeaderEntry::getAllianceName(*(_QWORD *)&AllianceHeaderEntry);
        TextField::setText(TextFieldByName, AllianceName);
      }
      if ( AllianceFullEntry::getAllianceDescription(a2) )
      {
        v9 = *((_QWORD *)this + 32);
        v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL);
        AllianceDescription = AllianceFullEntry::getAllianceDescription(a2);
        v10(v9, AllianceDescription);
      }
      v12 = AllianceFullEntry::getAllianceHeaderEntry(a2);
      *((_DWORD *)this + 82) = AllianceHeaderEntry::getAllianceType(*(_QWORD *)&v12);
      v13 = AllianceFullEntry::getAllianceHeaderEntry(a2);
      *((_DWORD *)this + 74) = AllianceHeaderEntry::getRequiredScore(*(_QWORD *)&v13);
      v14 = *(void (__fastcall **)(std::ostream *, __int64))(*(_QWORD *)this + 368LL);
      v15 = AllianceFullEntry::getAllianceHeaderEntry(a2);
      AllianceBadgeData = AllianceHeaderEntry::getAllianceBadgeData(*(_QWORD *)&v15);
      v14(this, AllianceBadgeData);
      v17 = *(void (__fastcall **)(std::ostream *, __int64))(*(_QWORD *)this + 360LL);
      v18 = AllianceFullEntry::getAllianceHeaderEntry(a2);
      Region = AllianceHeaderEntry::getRegion(*(_QWORD *)&v18);
      v17(this, Region);
      return AllianceSettings::updateScoreAndType((__int64)this, v20);
    }

    _BYTE *__fastcall AllianceSettings::closeInput(std::ostream *this)
    {
      _BYTE *v2; // x0
      _BYTE *result; // x0
    
      v2 = (_BYTE *)*((_QWORD *)this + 30);
      if ( v2[16] )
        (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, 0);
      result = (_BYTE *)*((_QWORD *)this + 32);
      if ( result[16] )
        return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)result + 56LL))(result, 0);
      return result;
    }

    _BYTE *__fastcall AllianceSettings::badgeSelected(std::ostream *this, const LogicUpgradeTowerCommand *a2)
    {
      _BYTE *result; // x0
      DataIcon *v5; // x20
      #1257 *MovieClip; // x21
      #1257 *v7; // x0
      String v8; // [xsp+8h] [xbp-38h] BYREF
    
      *((_QWORD *)this + 45) = a2;
      result = (_BYTE *)*((_QWORD *)this + 43);
      if ( result )
        result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)result + 8LL))(result);
      *((_QWORD *)this + 43) = 0;
      if ( a2 )
      {
        v5 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v5, a2);
        *((_QWORD *)this + 43) = v5;
        MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
        String::String(&v8, "badge");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v5,
          MovieClip,
          &v8,
          1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          1,
          0,
          0);
        String::~String();
        v7 = (#1257 *)GUIContainer::getMovieClip(this);
        result = (_BYTE *)MovieClip::getMovieClipByName(v7, "badge");
        result[8] = 0;
      }
      return result;
    }

    __int64 __fastcall AllianceSettings::regionSelected(std::ostream *this, const #1342 *a2)
    {
      MovieClip *MovieClip; // x20
      const char *v4; // x1
      const String *RegionName; // x2
    
      *((_QWORD *)this + 44) = a2;
      MovieClip = (MovieClip *)GUIContainer::getMovieClip(this);
      RegionName = (const String *)RegionItem::getRegionName((__int64)a2, v4);
      return MovieClip::setText(MovieClip, "location", RegionName);
    }

    __int64 __fastcall AllianceSettings::setOkButtonGrayOut(std::ostream *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 28);
      if ( result )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 152LL))(result);
        *((_BYTE *)this + 217) = 0;
      }
      return result;
    }

    __int64 __fastcall AllianceSettings::isPanning(std::ostream *this)
    {
      return 0;
    }

    void __fastcall AllianceSettings::getRootNode(std::ostream *this)
    {
      ;
    }

}; // end class AllianceSettings
