class AllianceSearch
{
public:

    void __fastcall AllianceSearch::AllianceSearch(AllianceSearch *this)
    {
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x23
      const char *v4; // x2
      #1253 *v5; // x25
      long double Width; // q0
      float v7; // s8
      long double Height; // q0
      __int64 v9; // x0
      #1257 *v10; // x0
      DisplayObject *v11; // x25
      float v12; // s8
      float v13; // s9
      long double v14; // q0
      Stage *v15; // x0
      long double v16; // q0
      __int64 v17; // x0
      MovieClip *v18; // x25
      const char *v19; // x1
      const String *String; // x0
      __int64 v21; // x0
      MovieClip *v22; // x25
      const char *v23; // x1
      const String *v24; // x0
      #1257 *v25; // x0
      __int64 MovieClipByName; // x25
      #1257 *v27; // x25
      MovieClip *v28; // x25
      const char *v29; // x1
      const String *v30; // x0
      __int64 v31; // x0
      __int64 v32; // x25
      GameInputField *v33; // x26
      InputField *v34; // x26
      InputField *v35; // x26
      InputField *v36; // x26
      __int64 v37; // x26
      int8x16_t v38; // q0
      Rect *v39; // x26
      __int64 v40; // x0
      #1257 *v41; // x24
      #1014 *v42; // x24
      #1257 *v43; // x25
      #1014 *v44; // x0
      #1257 *v45; // x24
      #1014 *v46; // x24
      #1257 *v47; // x25
      #1014 *v48; // x0
      #1257 *v49; // x24
      #1014 *v50; // x24
      #1257 *v51; // x25
      #1014 *v52; // x0
      #1257 *v53; // x24
      const char *v54; // x1
      MovieClip *v55; // x24
      char *v56; // x0
      const String *v57; // x0
      String v58; // [xsp+0h] [xbp-1C0h] BYREF
      String v59; // [xsp+18h] [xbp-1A8h] BYREF
      String v60; // [xsp+30h] [xbp-190h] BYREF
      String v61; // [xsp+48h] [xbp-178h] BYREF
      String v62; // [xsp+60h] [xbp-160h] BYREF
      String v63; // [xsp+78h] [xbp-148h] BYREF
      String v64; // [xsp+90h] [xbp-130h] BYREF
      String v65; // [xsp+A8h] [xbp-118h] BYREF
      String v66; // [xsp+C0h] [xbp-100h] BYREF
      String v67; // [xsp+D8h] [xbp-E8h] BYREF
      String v68; // [xsp+F0h] [xbp-D0h] BYREF
      String v69; // [xsp+108h] [xbp-B8h] BYREF
      Rect v70[2]; // [xsp+120h] [xbp-A0h] BYREF
      String v71; // [xsp+130h] [xbp-90h] BYREF
      String v72; // [xsp+148h] [xbp-78h] BYREF
    
      String::String(&v72, "sc/ui.sc");
      String::String(&v71, "guild_search_page");
      DropGUIContainer::DropGUIContainer(this, &v72, &v71);
      String::~String(&v71);
      String::~String(&v72);
      *(_QWORD *)this = off_1004613A0;
      *((_QWORD *)this + 12) = &off_100461520;
      *((_QWORD *)this + 24) = off_100461540;
      *((_QWORD *)this + 25) = &off_100461580;
      *((_QWORD *)this + 26) = 0;
      *((_DWORD *)this + 60) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 27) = 0;
      *(_QWORD *)((char *)this + 244) = 1;
      *((_DWORD *)this + 72) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *(_QWORD *)((char *)this + 292) = 1;
      *((_DWORD *)this + 84) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      *(_QWORD *)((char *)this + 340) = 1;
      *((_BYTE *)this + 360) = 0;
      *((_QWORD *)this + 44) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 49) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_QWORD *)this + 47) = 0;
      *((_BYTE *)this + 432) = 0;
      *((_QWORD *)this + 52) = 0;
      *((_QWORD *)this + 53) = 0;
      *((_QWORD *)this + 51) = 0;
      *((_QWORD *)this + 57) = 0;
      *((_QWORD *)this + 58) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 56) = 0;
      MovieClip = GUIContainer::getMovieClip(this);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "scroll_area");
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v4);
      Rect::Rect(v70);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v70);
      v5 = (#1253 *)operator new(504);
      Width = Rect::getWidth(v70);
      v7 = *(float *)&Width;
      Height = Rect::getHeight(v70);
      ScrollArea::ScrollArea(v5, v7, *(float *)&Height, 100);
      *((_QWORD *)this + 55) = v5;
      ScrollArea::enablePinching(v5, 0);
      ScrollArea::enableHorizontalDrag(*((#1253 **)this + 55), 0);
      ScrollArea::enableVerticalDrag(*((#1253 **)this + 55), 1);
      v9 = *((_QWORD *)this + 55);
      *(_BYTE *)(v9 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v9, 5);
      v10 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClip::changeTimelineChild(v10, TextFieldByName, *((#1249 **)this + 55));
      v11 = (DisplayObject *)*((_QWORD *)this + 55);
      v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v11)));
      v13 = *(float *)&v70[0].top;
      v14 = DisplayObject::getY(*((_QWORD *)this + 55));
      v15 = (Stage *)DisplayObject::setPixelSnappedXY(v11, v12 + v13, *(float *)&v14 + *(float *)&v70[0].bottom);
      LODWORD(v11) = *(_DWORD *)(Stage::getInstance(v15) + 432LL);
      v16 = DisplayObject::getY(*((_QWORD *)this + 55));
      ScrollArea::setAreaHeight(*((#1253 **)this + 55), (float)(int)v11 - *(float *)&v16);
      v17 = DropGUIContainer::addGameButton(this, "advance_button", 1);
      *((_QWORD *)this + 47) = v17;
      v18 = *(MovieClip **)(v17 + 96);
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SHOW", v19);
      MovieClip::setText(v18, "txt", String);
      v21 = DropGUIContainer::addGameButton(this, "search_button", 1);
      *((_QWORD *)this + 48) = v21;
      v22 = *(MovieClip **)(v21 + 96);
      v24 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SEARCH", v23);
      MovieClip::setText(v22, "txt", v24);
      v25 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = MovieClip::getMovieClipByName(v25, "search_filter");
      *((_QWORD *)this + 52) = MovieClipByName;
      *(_BYTE *)(MovieClipByName + 8) = 0;
      String::String(&v69, "close_advanced_button");
      *((_QWORD *)this + 49) = DropGUIContainer::addGameButton(this, (#1257 *)MovieClipByName, &v69);
      String::~String(&v69);
      v27 = (#1257 *)*((_QWORD *)this + 52);
      String::String(&v68, "location_button");
      *((_QWORD *)this + 46) = DropGUIContainer::addGameButton(this, v27, &v68);
      String::~String(&v68);
      v28 = *(MovieClip **)(*((_QWORD *)this + 46) + 96LL);
      v30 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SELECT_REGION", v29);
      MovieClip::setText(v28, "txt", v30);
      v31 = GUIContainer::getMovieClip(this);
      v32 = MovieClip::getTextFieldByName(v31, "search_input_field");
      v33 = (GameInputField *)operator new(144);
      GameInputField::GameInputField(v33, (TextField *)v32, this);
      *((_QWORD *)this + 50) = v33;
      TextInput::setMaxTextLength((TextInput *)v33, 15);
      v34 = (InputField *)*((_QWORD *)this + 50);
      String::String(&v67, "  ");
      InputField::addForbiddenCharacter(v34, &v67);
      String::~String(&v67);
      v35 = (InputField *)*((_QWORD *)this + 50);
      String::String(&v66, "\t");
      InputField::addForbiddenCharacter(v35, &v66);
      String::~String(&v66);
      v36 = (InputField *)*((_QWORD *)this + 50);
      String::String(&v65, "\n");
      InputField::addForbiddenCharacter(v36, &v65);
      String::~String(&v65);
      v37 = operator new(264);
      GameButton::GameButton((#1014 *)v37);
      *((_QWORD *)this + 51) = v37;
      v38 = *(int8x16_t *)(v32 + 16);
      *(_QWORD *)(v37 + 16) = v38.i64[0];
      *(_QWORD *)(v37 + 24) = vextq_s8(v38, v38, 8u).u64[0];
      *(_DWORD *)(v37 + 32) = *(_DWORD *)(v32 + 32);
      *(_DWORD *)(v37 + 36) = *(_DWORD *)(v32 + 36);
      v39 = (Rect *)operator new(16);
      Rect::Rect(v39);
      TextField::getTextFieldBounds((#1271 *)v32, (#1261 *)v39);
      Sprite::setHitArea(*((OutOfSyncMessage **)this + 51), (#1261 *)v39);
      CustomButton::setButtonListener(*((_QWORD *)this + 51), (char *)this + 96);
      v40 = GUIContainer::getMovieClip(this);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 160LL))(v40, *((_QWORD *)this + 51));
      v41 = (#1257 *)*((_QWORD *)this + 52);
      String::String(&v64, "members_lower_button_right");
      v42 = (#1014 *)DropGUIContainer::addGameButton(this, v41, &v64);
      v43 = (#1257 *)*((_QWORD *)this + 52);
      String::String(&v63, "members_lower_button_left");
      v44 = (#1014 *)DropGUIContainer::addGameButton(this, v43, &v63);
      AllianceSearch::NumberEditButtons::setButtons((AllianceSearch *)((char *)this + 256), v42, v44);
      String::~String(&v63);
      String::~String(&v64);
      *((_QWORD *)this + 34) = MovieClip::getTextFieldByName(*((_QWORD *)this + 52), "members_lower");
      *((_DWORD *)this + 71) = 1;
      *((_DWORD *)this + 70) = 50;
      *((_DWORD *)this + 74) = 1;
      AllianceSearch::NumberEditButtons::setValue((AllianceSearch *)((char *)this + 256), (#1237 *)1);
      v45 = (#1257 *)*((_QWORD *)this + 52);
      String::String(&v62, "members_higher_button_right");
      v46 = (#1014 *)DropGUIContainer::addGameButton(this, v45, &v62);
      v47 = (#1257 *)*((_QWORD *)this + 52);
      String::String(&v61, "members_higher_button_left");
      v48 = (#1014 *)DropGUIContainer::addGameButton(this, v47, &v61);
      AllianceSearch::NumberEditButtons::setButtons((AllianceSearch *)((char *)this + 304), v46, v48);
      String::~String(&v61);
      String::~String(&v62);
      *((_QWORD *)this + 40) = MovieClip::getTextFieldByName(*((_QWORD *)this + 52), "members_higher");
      *((_DWORD *)this + 83) = 1;
      *((_DWORD *)this + 82) = 50;
      *((_DWORD *)this + 86) = 50;
      AllianceSearch::NumberEditButtons::setValue((AllianceSearch *)((char *)this + 304), (#1237 *)0x32);
      v49 = (#1257 *)*((_QWORD *)this + 52);
      String::String(&v60, "min_point_button_right");
      v50 = (#1014 *)DropGUIContainer::addGameButton(this, v49, &v60);
      v51 = (#1257 *)*((_QWORD *)this + 52);
      String::String(&v59, "min_point_button_left");
      v52 = (#1014 *)DropGUIContainer::addGameButton(this, v51, &v59);
      AllianceSearch::NumberEditButtons::setButtons((AllianceSearch *)((char *)this + 208), v50, v52);
      String::~String(&v59);
      String::~String(&v60);
      *((_QWORD *)this + 28) = MovieClip::getTextFieldByName(*((_QWORD *)this + 52), "min_guild_points");
      *((_QWORD *)this + 29) = 50000;
      *((_DWORD *)this + 62) = 0;
      AllianceSearch::NumberEditButtons::setValue((AllianceSearch *)((char *)this + 208), 0);
      *((_DWORD *)this + 61) = 500;
      v53 = (#1257 *)*((_QWORD *)this + 52);
      String::String(&v58, "i_can_join_onoff");
      *((_QWORD *)this + 44) = DropGUIContainer::addGameButton(this, v53, &v58);
      String::~String(&v58);
      v55 = *(MovieClip **)(*((_QWORD *)this + 44) + 96LL);
      if ( *((_BYTE *)this + 360) )
        v56 = "TID_ON";
      else
        v56 = "TID_OFF";
      v57 = (const String *)StringTable::getString((#1308 *)v56, v54);
      MovieClip::setText(v55, "txt", v57);
      *((_BYTE *)this + 360) = 0;
      (*(void (__fastcall **)(AllianceSearch *, _QWORD))(*(_QWORD *)this + 360LL))(this, 0);
      if ( TextFieldByName )
        (*(void (__fastcall **)(#1271 *))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName);
      Rect::~Rect(v70);
    }

    // attributes: thunk
    void __fastcall AllianceSearch::AllianceSearch(AllianceSearch *this)
    {
      __ZN14AllianceSearchC2Ev(this);
    }

    void __fastcall AllianceSearch::~AllianceSearch(LogicDonateAllianceUnitCommand *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      void *v5; // x0
    
      *(_QWORD *)this = off_1004613A0;
      *((_QWORD *)this + 12) = &off_100461520;
      *((_QWORD *)this + 24) = off_100461540;
      *((_QWORD *)this + 25) = &off_100461580;
      AllianceSearch::destroyItems(this);
      v2 = *((_QWORD *)this + 51);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 51) = 0;
      v3 = *((_QWORD *)this + 50);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 50) = 0;
      v4 = *((_QWORD *)this + 55);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_BYTE *)this + 360) = 0;
      *((_QWORD *)this + 44) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 49) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_QWORD *)this + 47) = 0;
      *((_BYTE *)this + 432) = 0;
      *((_QWORD *)this + 52) = 0;
      *((_QWORD *)this + 53) = 0;
      *((_QWORD *)this + 51) = 0;
      v5 = (void *)*((_QWORD *)this + 56);
      if ( v5 )
        operator delete(v5);
      *((_DWORD *)this + 84) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      *(_QWORD *)((char *)this + 340) = 1;
      *((_DWORD *)this + 72) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *(_QWORD *)((char *)this + 292) = 1;
      *((_DWORD *)this + 60) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 27) = 0;
      *(_QWORD *)((char *)this + 244) = 1;
      DropGUIContainer::~DropGUIContainer(this);
    }

    __int64 __fastcall AllianceSearch::destroyItems(#1253 **this)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      unsigned __int64 v4; // x10
      unsigned int v5; // w21
      __int64 v6; // x0
    
      ScrollArea::removeAllContent(*(this + 55));
      v2 = (__int64)*(this + 56);
      v3 = (__int64)*(this + 57);
      if ( v3 != v2 )
      {
        v4 = 0;
        v5 = 1;
        do
        {
          v6 = *(_QWORD *)(v2 + 8 * v4);
          if ( v6 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
            v2 = (__int64)*(this + 56);
            v3 = (__int64)*(this + 57);
          }
          v4 = v5++;
        }
        while ( v4 < (v3 - v2) >> 3 );
      }
      return std::vector<AllianceItem *>::resize(this + 56, 0, 0);
    }

    // attributes: thunk
    void __fastcall AllianceSearch::~AllianceSearch(LogicDonateAllianceUnitCommand *this)
    {
      __ZN14AllianceSearchD2Ev(this);
    }

    void __fastcall AllianceSearch::~AllianceSearch(LogicDonateAllianceUnitCommand *this)
    {
      AllianceSearch::~AllianceSearch(this);
      operator delete(this);
    }

    __int64 __fastcall AllianceSearch::buttonClicked(__int64 this, #1251 *a2)
    {
      __int64 v3; // x19
      #1237 *v4; // x1
      #1237 *v5; // x1
      int v6; // w8
      MovieClip *v7; // x19
      char *v8; // x0
      const String *String; // x2
      RegionPopup *v10; // x20
      BadgePopup *v11; // x0
      __int64 Instance; // x0
    
      v3 = this;
      if ( *(#1251 **)(this + 376) == a2 )
      {
        *(_BYTE *)(*(_QWORD *)(this + 416) + 8LL) = 1;
      }
      else if ( *(#1251 **)(this + 384) == a2 )
      {
        return AllianceSearch::sendSearchMessage((LogicDonateAllianceUnitCommand *)this);
      }
      else if ( *(#1251 **)(this + 392) == a2 )
      {
        *(_BYTE *)(*(_QWORD *)(this + 416) + 8LL) = 0;
      }
      else if ( *(#1251 **)(this + 408) == a2 )
      {
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(this + 400) + 56LL))(*(_QWORD *)(this + 400), 1);
      }
      else if ( *(#1251 **)(this + 352) == a2 )
      {
        v6 = *(unsigned __int8 *)(this + 360);
        *(_BYTE *)(this + 360) = v6 ^ 1;
        v7 = (MovieClip *)*((_QWORD *)a2 + 12);
        if ( v6 == 1 )
          v8 = "TID_OFF";
        else
          v8 = "TID_ON";
        String = (const String *)StringTable::getString((#1308 *)v8, (const char *)a2);
        return MovieClip::setText(v7, "txt", String);
      }
      else if ( *(#1251 **)(this + 368) == a2 )
      {
        v10 = (RegionPopup *)operator new(272);
        RegionPopup::RegionPopup(v10, 1);
        *((_QWORD *)v10 + 33) = v3 + 200;
        Instance = GUI::getInstance(v11);
        return GUI::showPopup(Instance, v10, 1, 0, 0);
      }
      else
      {
        if ( (unsigned int)AllianceSearch::NumberEditButtons::buttonPressed((#1400 *)(this + 256), a2) )
        {
          v4 = (#1237 *)*(unsigned int *)(v3 + 288);
          if ( *(_DWORD *)(v3 + 336) < (int)v4 )
            AllianceSearch::NumberEditButtons::setValue((#1400 *)(v3 + 304), v4);
        }
        if ( (unsigned int)AllianceSearch::NumberEditButtons::buttonPressed((#1400 *)(v3 + 304), a2) )
        {
          v5 = (#1237 *)*(unsigned int *)(v3 + 336);
          if ( *(_DWORD *)(v3 + 288) > (int)v5 )
            AllianceSearch::NumberEditButtons::setValue((#1400 *)(v3 + 256), v5);
        }
        return AllianceSearch::NumberEditButtons::buttonPressed((#1400 *)(v3 + 208), a2);
      }
      return this;
    }

    void __fastcall AllianceSearch::sendSearchMessage(LogicDonateAllianceUnitCommand *this)
    {
      const String *InputText; // x0
      #1163 *v3; // x20
      String *v4; // x21
      String v5; // [xsp+0h] [xbp-50h] BYREF
      String v6; // [xsp+18h] [xbp-38h] BYREF
    
      InputText = (const String *)InputField::getInputText(*((#1279 **)this + 50));
      String::String(&v6, InputText);
      String::trim(&v5, &v6);
      String::operator=(&v6);
      String::~String(&v5);
      if ( (AllianceSearch::canSend(this) & 1) != 0 )
      {
        v3 = (#1163 *)operator new(112);
        SearchAlliancesMessage::SearchAlliancesMessage(v3);
        v4 = (String *)operator new(24);
        String::String(v4, &v6);
        SearchAlliancesMessage::setSearchString(v3, v4);
        SearchAlliancesMessage::setMaxMembers(v3, *((_DWORD *)this + 84));
        SearchAlliancesMessage::setMinMembers(v3, *((_DWORD *)this + 72));
        SearchAlliancesMessage::setMinTrophies(v3, *((_DWORD *)this + 60));
        SearchAlliancesMessage::setFindOnlyJoinableClans(v3, *((_BYTE *)this + 360));
        SearchAlliancesMessage::setDesiredRegion(v3, *((const LogicRegionData **)this + 53));
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v3);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 50) + 56LL))(*((_QWORD *)this + 50), 0);
      }
      String::~String(&v6);
    }

    __int64 __fastcall AllianceSearch::update(LogicDonateAllianceUnitCommand *this, long double a2)
    {
      __int64 v4; // x20
      __int64 v5; // x1
      __int64 (__fastcall *v7)(__int64, __int64); // [xsp+8h] [xbp-28h]
    
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 55) + 272LL))(*((_QWORD *)this + 55));
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 50) + 88LL))(*((_QWORD *)this + 50), a2);
      CustomButton::updateContinuousPresses(*((#1251 **)this + 26), *(float *)&a2);
      CustomButton::updateContinuousPresses(*((#1251 **)this + 27), *(float *)&a2);
      CustomButton::updateContinuousPresses(*((#1251 **)this + 32), *(float *)&a2);
      CustomButton::updateContinuousPresses(*((#1251 **)this + 33), *(float *)&a2);
      CustomButton::updateContinuousPresses(*((#1251 **)this + 38), *(float *)&a2);
      CustomButton::updateContinuousPresses(*((#1251 **)this + 39), *(float *)&a2);
      v4 = *((_QWORD *)this + 48);
      v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 152LL);
      v5 = (unsigned int)AllianceSearch::canSend(this) ^ 1;
      return v7(v4, v5);
    }

    bool __fastcall AllianceSearch::canSend(#1279 **this)
    {
      const String *InputText; // x0
      _BOOL8 v3; // x19
      String v5; // [xsp+0h] [xbp-40h] BYREF
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      InputText = (const String *)InputField::getInputText(*(this + 50));
      String::String(&v6, InputText);
      String::trim(&v5, &v6);
      String::operator=(&v6);
      String::~String(&v5);
      v3 = *((_BYTE *)*(this + 52) + 8)
        && (*((_DWORD *)this + 72) != *((_DWORD *)this + 74)
         || *((_DWORD *)this + 60) != *((_DWORD *)this + 62)
         || *((_DWORD *)this + 84) != *((_DWORD *)this + 86)
         || *((_BYTE *)this + 360)
         || *(this + 53))
        || v6.m_length;
      String::~String(&v6);
      return v3;
    }

    void __fastcall AllianceSearch::setContent(__int64 a1, _DWORD *a2)
    {
      __int64 MovieClip; // x0
      const char *v5; // x1
      __int64 TextFieldByName; // x21
      const String *String; // x0
      int v8; // w8
      int *v9; // x22
      __int64 v10; // x24
      int v11; // w25
      #1253 **v12; // x23
      __int64 v13; // x20
      DisplayObject *v14; // x21
      int v15; // w25
      float v16; // s9
      float v17; // s0
      float v18; // s0
      __int64 ContentBounds; // x22
      #1047 *Instance; // x0
      LogicClientAvatar *MainHUD; // x0
      float v22; // s0
      float v23; // s8
      ScrollArea *v24; // x20
      Rect *v25; // x21
      float v26; // [xsp+0h] [xbp-70h]
      DisplayObject *v27; // [xsp+18h] [xbp-58h] BYREF
    
      AllianceSearch::destroyItems((#1253 **)a1);
      *(_BYTE *)(a1 + 432) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 416) + 8LL) = 0;
      MovieClip = GUIContainer::getMovieClip((#1254 *)a1);
      TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "warning");
      if ( TextFieldByName )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_SEARCH_EMPTY", v5);
        TextField::setText((#1271 *)TextFieldByName, String);
        v9 = a2 + 3;
        v8 = a2[3];
        *(_BYTE *)(TextFieldByName + 8) = v8 == 0;
      }
      else
      {
        v9 = a2 + 3;
        v8 = a2[3];
      }
      if ( v8 <= 0 )
      {
        v12 = (#1253 **)(a1 + 440);
        v18 = 0.0;
      }
      else
      {
        v10 = 0;
        v11 = 0;
        v12 = (#1253 **)(a1 + 440);
        v13 = a1 + 448;
        do
        {
          v14 = (DisplayObject *)operator new(280);
          AllianceItem::AllianceItem(v14, *(_QWORD *)(*(_QWORD *)a2 + 8 * v10));
          v27 = v14;
          v15 = v11 + (int)(float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v14 + 96LL))(v14) * 0.5) + 1;
          v16 = *((float *)*v12 + 23);
          v17 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v14 + 88LL))(v14);
          DisplayObject::setPixelSnappedXY(v14, (float)(v16 - v17) * 0.5, (float)v15);
          v11 = v15 + (int)(float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v14 + 96LL))(v14) * 0.5) + 1;
          std::vector<AllianceItem *>::push_back(v13, &v27);
          ScrollArea::addContent(*v12, v14);
          ++v10;
        }
        while ( v10 < *v9 );
        v18 = (float)v11;
      }
      v26 = v18;
      ScrollArea::updateBounds(*v12);
      ContentBounds = ScrollArea::getContentBounds(*v12);
      Instance = (#1047 *)HomeScreen::getInstance((#1047 *)ContentBounds);
      MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(Instance);
      MainHUD::getBottomHUDHeight(MainHUD);
      v23 = v22;
      v24 = *v12;
      v25 = (Rect *)operator new(16);
      Rect::Rect(v25, *(float *)ContentBounds, *(float *)(ContentBounds + 4), *(float *)(ContentBounds + 8), v26 + v23);
      ScrollArea::setForcedContentBounds(v24, v25);
      if ( *(_QWORD *)a2 )
        operator delete[](*(_QWORD *)a2);
      operator delete(a2);
    }

    __int64 __fastcall AllianceSearch::isPanning(#1253 **this)
    {
      return ScrollArea::isPanning(*(this + 55));
    }

    _BYTE *__fastcall AllianceSearch::closeInput(LogicDonateAllianceUnitCommand *this)
    {
      _BYTE *result; // x0
    
      result = (_BYTE *)*((_QWORD *)this + 50);
      if ( result[16] )
        return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)result + 56LL))(result, 0);
      return result;
    }

    void __fastcall AllianceSearch::inputEnded(LogicDonateAllianceUnitCommand *this, #1321 *a2)
    {
      if ( *((#1321 **)this + 50) == a2 )
        AllianceSearch::sendSearchMessage(this);
    }

    __int64 __fastcall AllianceSearch::regionSelected(LogicDonateAllianceUnitCommand *this, const #1342 *a2)
    {
      MovieClip *v2; // x19
      const String *RegionName; // x2
    
      *((_QWORD *)this + 53) = a2;
      v2 = (MovieClip *)*((_QWORD *)this + 52);
      RegionName = (const String *)RegionItem::getRegionName((__int64)a2, (const char *)a2);
      return MovieClip::setText(v2, "location", RegionName);
    }

    void __fastcall AllianceSearch::getRootNode(LogicDonateAllianceUnitCommand *this)
    {
      ;
    }

}; // end class AllianceSearch
