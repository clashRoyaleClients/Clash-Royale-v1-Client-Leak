class OfferChestPopup
{
public:

    void __fastcall OfferChestPopup::OfferChestPopup(OfferChestPopup *this, int a2)
    {
      __int64 v4; // x21
      void (__fastcall *v5)(__int64, __int64, _QWORD); // x22
      const char *v6; // x1
      __int64 String; // x0
      __int64 MovieClip; // x0
      long double v9; // q0
      vm_address_t *ChildByName; // x21
      __int64 Instance; // x0
      #1146 *Home; // x0
      #1057 *ChestWithID; // x20
      const char *v14; // x2
      __int64 TreasureChestData; // x20
      ResourceManager *FileName; // x22
      const String *IconExportName; // x0
      const String *v18; // x2
      __int64 v19; // x22
      #1257 *v20; // x0
      #1308 *TID; // x0
      const String *v22; // x1
      const String *v23; // x0
      __int64 v24; // x0
      __int64 TextFieldByName; // x20
      GameInputField *v26; // x21
      InputField *v27; // x20
      InputField *v28; // x20
      InputField *v29; // x20
      String v30; // [xsp+8h] [xbp-98h] BYREF
      String v31; // [xsp+20h] [xbp-80h] BYREF
      String v32; // [xsp+38h] [xbp-68h] BYREF
      String v33; // [xsp+50h] [xbp-50h] BYREF
      String v34; // [xsp+68h] [xbp-38h] BYREF
    
      String::String(&v34, "sc/ui.sc");
      String::String(&v33, "offer_chest_popup");
      PopupBase::PopupBase(this, &v34, &v33);
      String::~String(&v33);
      String::~String(&v34);
      *(_QWORD *)this = off_100461598;
      *((_QWORD *)this + 12) = &off_100461770;
      *((_DWORD *)this + 61) = 0;
      *(_QWORD *)((char *)this + 236) = 0;
      *(_QWORD *)((char *)this + 228) = 0;
      *((_DWORD *)this + 57) = a2;
      v4 = DropGUIContainer::addGameButton(this, "button_confirm", 1);
      *((_QWORD *)this + 29) = v4;
      v5 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 352LL);
      String = StringTable::getString((#1308 *)"TID_BUTTON_DONATE", v6);
      v5(v4, String, 0);
      MovieClip = GUIContainer::getMovieClip(this);
      ChildByName = (vm_address_t *)MovieClip::getChildByName(MovieClip, "chest_placeholder", v9);
      Instance = GameMode::getInstance(ChildByName);
      Home = (#1146 *)LogicGameMode::getHome(*(#1028 **)(Instance + 112));
      ChestWithID = (#1057 *)LogicClientHome::getChestWithID(Home, a2);
      Debugger::doAssert((Debugger *)(ChestWithID != 0), (bool)"invalid chest id!", v14);
      TreasureChestData = LogicChest::getTreasureChestData(ChestWithID);
      FileName = (ResourceManager *)LogicTreasureChestData::getFileName(TreasureChestData);
      IconExportName = (const String *)LogicData::getIconExportName(TreasureChestData);
      v19 = ResourceManager::getMovieClip(FileName, IconExportName, v18);
      v20 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClip::changeTimelineChild(v20, (#1249 *)ChildByName, (#1249 *)v19);
      if ( ChildByName )
        (*(void (__fastcall **)(vm_address_t *))(*ChildByName + 8))(ChildByName);
      *(_BYTE *)(v19 + 8) = 1;
      TID = (#1308 *)LogicData::getTID(TreasureChestData);
      v23 = (const String *)StringTable::getString(TID, v22);
      GUIContainer::setText(this, "chest_name", v23, 1);
      v24 = GUIContainer::getMovieClip(this);
      TextFieldByName = MovieClip::getTextFieldByName(v24, "message_text");
      TextField::fetchFont((#1271 *)TextFieldByName);
      *(_BYTE *)(TextFieldByName + 74) = 1;
      v26 = (GameInputField *)operator new(144);
      GameInputField::GameInputField(v26, (TextField *)TextFieldByName, this);
      *((_QWORD *)this + 30) = v26;
      (*(void (__fastcall **)(GameInputField *, __int64))(*(_QWORD *)v26 + 56LL))(v26, 1);
      v27 = (InputField *)*((_QWORD *)this + 30);
      String::String(&v32, "  ");
      InputField::addForbiddenCharacter(v27, &v32);
      String::~String(&v32);
      v28 = (InputField *)*((_QWORD *)this + 30);
      String::String(&v31, "\t");
      InputField::addForbiddenCharacter(v28, &v31);
      String::~String(&v31);
      v29 = (InputField *)*((_QWORD *)this + 30);
      String::String(&v30, "\n");
      InputField::addForbiddenCharacter(v29, &v30);
      String::~String(&v30);
      InputField::addEmojiToForbiddenCharacters(*((InputField **)this + 30));
      TextInput::setMaxTextLength(*((TextInput **)this + 30), 128);
    }

    // attributes: thunk
    void __fastcall OfferChestPopup::OfferChestPopup(OfferChestPopup *this, int a2)
    {
      __ZN15OfferChestPopupC2Ei(this, a2);
    }

    void __fastcall OfferChestPopup::~OfferChestPopup(ByteStreamHelper *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100461598;
      *((_QWORD *)this + 12) = &off_100461770;
      v2 = *((_QWORD *)this + 30);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_DWORD *)this + 61) = 0;
      *(_QWORD *)((char *)this + 236) = 0;
      *(_QWORD *)((char *)this + 228) = 0;
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall OfferChestPopup::~OfferChestPopup(ByteStreamHelper *this)
    {
      __ZN15OfferChestPopupD2Ev(this);
    }

    void __fastcall OfferChestPopup::~OfferChestPopup(ByteStreamHelper *this)
    {
      OfferChestPopup::~OfferChestPopup(this);
      operator delete(this);
    }

    __int64 __fastcall OfferChestPopup::buttonClicked(__int64 this, #1251 *a2)
    {
      __int64 v2; // x19
      LogicOfferChestForCoOpenCommand *v3; // x20
      String *v4; // x21
      const String *InputText; // x0
      vm_address_t *v6; // x0
      GameMode *Instance; // x0
    
      v2 = this;
      if ( *(#1251 **)(this + 232) == a2 )
      {
        v3 = (LogicOfferChestForCoOpenCommand *)operator new(40);
        LogicOfferChestForCoOpenCommand::LogicOfferChestForCoOpenCommand(v3);
        LogicOfferChestForCoOpenCommand::setChestId(v3, *(_DWORD *)(v2 + 228));
        v4 = (String *)operator new(24);
        InputText = (const String *)InputField::getInputText(*(#1279 **)(v2 + 240));
        String::String(v4, InputText);
        v6 = (vm_address_t *)LogicOfferChestForCoOpenCommand::setMessage(v3, v4);
        Instance = (GameMode *)GameMode::getInstance(v6);
        GameMode::addCommand(Instance, v3, 1);
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 352LL))(v2);
      }
      return this;
    }

    // attributes: thunk
    __int64 __fastcall OfferChestPopup::update(ByteStreamHelper *this, float a2)
    {
      return PopupBase::update(this, a2);
    }

    __int64 __fastcall OfferChestPopup::touchReleased(__int64 a1, __int64 a2)
    {
      GameInputField::touchReleasedExt(*(_QWORD *)(a1 + 240));
      return Sprite::touchReleased(a1, a2);
    }

    __int64 __fastcall OfferChestPopup::getPopupType(ByteStreamHelper *this)
    {
      return 17;
    }

}; // end class OfferChestPopup
