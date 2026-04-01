class RequestSingleSpellPopup
{
public:

    __int64 __fastcall RequestSingleSpellPopup::RequestSingleSpellPopup(__int64 a1)
    {
      __int64 Instance; // x0
      #1146 *Home; // x23
      tween::Bounce *PlayerAvatar; // x0
      #1143 *Arena; // x28
      LogicDataTables *SpellRequestSize; // x25
      AreaEffectObject *RarityCommon; // x0
      __int64 v8; // x1
      const char *v9; // x2
      LogicDataTables *DonateCapacity; // x0
      int v11; // w27
      AreaEffectObject *RarityRare; // x0
      __int64 v13; // x1
      const char *v14; // x2
      int v15; // w22
      const char *v16; // x1
      void *String; // x26
      #1308 *TID; // x0
      const String *v19; // x1
      #1308 *v20; // x0
      const char *v21; // x1
      void *v22; // x24
      const char *v23; // x1
      const char *v24; // x1
      MovieClip *MovieClip; // x0
      MovieClip *v26; // x0
      GameInputField *SpellCollection; // x24
      int v28; // w22
      int i; // w26
      TextField *Spell; // x27
      AcceptChallengeMessage *SelectedDeck; // x24
      int SpellCnt; // w26
      const char *v33; // x27
      TextField *v34; // x28
      _QWORD *v35; // x24
      _BYTE *v36; // x25
      __int64 v37; // x2
      __int64 j; // x8
      __int64 v39; // x0
      #1271 *TextFieldByName; // x26
      #1253 *v41; // x27
      long double Width; // q0
      float v43; // s8
      long double Height; // q0
      __int64 v45; // x0
      #1257 *v46; // x0
      DisplayObject *v47; // x27
      long double v48; // q8
      float v49; // s9
      long double v50; // q0
      long double v51; // q0
      unsigned __int64 v52; // x28
      unsigned __int64 v53; // x22
      __int64 v54; // x25
      __int64 SpellByData; // x26
      LogicSpell *v56; // x27
      const char *v57; // x2
      SpellItem *v58; // x25
      char canUpgrade; // w0
      void (__fastcall *v60)(SpellItem *, _BOOL8); // x27
      _BOOL8 hasEnoughMaterialToMaxLevel; // x0
      int v62; // w8
      float v63; // s10
      float v64; // s9
      long double v65; // q0
      float v66; // s11
      float v67; // s14
      float v68; // s10
      float v70; // [xsp+20h] [xbp-220h]
      float v71; // [xsp+30h] [xbp-210h]
      float v72; // [xsp+40h] [xbp-200h]
      float v73; // [xsp+50h] [xbp-1F0h]
      Rect v74[2]; // [xsp+68h] [xbp-1D8h] BYREF
      SpellItem *v75; // [xsp+78h] [xbp-1C8h] BYREF
      LogicSpell *v76; // [xsp+80h] [xbp-1C0h] BYREF
      Rect v77[2]; // [xsp+88h] [xbp-1B8h] BYREF
      __int64 v78; // [xsp+98h] [xbp-1A8h] BYREF
      __int64 SpellData; // [xsp+A0h] [xbp-1A0h] BYREF
      char v80[24]; // [xsp+A8h] [xbp-198h] BYREF
      String v81; // [xsp+C0h] [xbp-180h] BYREF
      char v82[24]; // [xsp+D8h] [xbp-168h] BYREF
      String v83; // [xsp+F0h] [xbp-150h] BYREF
      _QWORD v84[3]; // [xsp+108h] [xbp-138h] BYREF
      String v85; // [xsp+120h] [xbp-120h] BYREF
      String v86; // [xsp+138h] [xbp-108h] BYREF
      String v87; // [xsp+150h] [xbp-F0h] BYREF
      _QWORD *v88; // [xsp+168h] [xbp-D8h] BYREF
      _BYTE *v89; // [xsp+170h] [xbp-D0h]
      __int64 v90; // [xsp+178h] [xbp-C8h]
      String v91; // [xsp+180h] [xbp-C0h] BYREF
      String v92; // [xsp+198h] [xbp-A8h] BYREF
    
      String::String(&v92, "sc/ui.sc");
      String::String(&v91, "popup_request_selector");
      PopupBase::PopupBase((PopupBase *)a1, &v92, &v91);
      String::~String();
      String::~String();
      SpellItemListener::SpellItemListener((AskForBattleReplayStreamMessage *)(a1 + 232));
      *(_QWORD *)a1 = off_100469388;
      *(_QWORD *)(a1 + 96) = &off_100469568;
      *(_QWORD *)(a1 + 232) = off_100469588;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 288) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "close", 1);
      v89 = 0;
      v90 = 0;
      v88 = 0;
      Instance = GameMode::getInstance();
      Home = (#1146 *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      Arena = (#1143 *)LogicClientAvatar::getArena(PlayerAvatar);
      SpellRequestSize = (LogicDataTables *)LogicArenaData::getSpellRequestSize(Arena);
      RarityCommon = (AreaEffectObject *)LogicDataTables::getRarityCommon(SpellRequestSize);
      DonateCapacity = (LogicDataTables *)LogicRarityData::getDonateCapacity(RarityCommon, v8, v9);
      v11 = (int)DonateCapacity;
      RarityRare = (AreaEffectObject *)LogicDataTables::getRarityRare(DonateCapacity);
      v15 = LogicRarityData::getDonateCapacity(RarityRare, v13, v14);
      String = StringTable::getString((#1308 *)"TID_REQUEST_ARENA_INFO", v16);
      String::String(&v86, "<arena>");
      TID = (#1308 *)LogicData::getTID((__int64)Arena);
      v20 = StringTable::getString(TID, v19);
      String::replace(&v87, String, &v86, v20);
      String::~String();
      v22 = StringTable::getString((#1308 *)"TID_REQUEST_ARENA_CARD_AMOUNTS", v21);
      String::String(&v83, "<common>");
      String::format((String *)"%d", v23, (unsigned int)((int)SpellRequestSize / v11));
      String::replace(v84, v22, &v83, v82);
      String::String(&v81, "<rare>");
      String::format((String *)"%d", v24, (unsigned int)((int)SpellRequestSize / v15));
      String::replace(&v85, v84, &v81, v80);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      MovieClip = (MovieClip *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClip::setText(MovieClip, "TID_REQUEST_CAPACITY_TILTLE", &v87);
      v26 = (MovieClip *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClip::setText(v26, "TID_REQUEST_AMOUNT", &v85);
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
      v28 = *((_DWORD *)SpellCollection + 3);
      if ( v28 >= 1 )
      {
        for ( i = 0; i < v28; ++i )
        {
          Spell = (TextField *)LogicSpellCollection::getSpell(SpellCollection, i);
          if ( (unsigned int)includeSpell(Spell, (int)SpellRequestSize) )
          {
            SpellData = LogicSpell::getSpellData(Spell);
            std::vector<LogicSpellData const*>::push_back(&v88, &SpellData);
          }
        }
      }
      SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
      SpellCnt = LogicSpellDeck::getSpellCnt((__int64)SelectedDeck);
      if ( SpellCnt >= 1 )
      {
        v33 = 0;
        do
        {
          v34 = (TextField *)LogicSpellDeck::getSpell(SelectedDeck, v33);
          if ( (unsigned int)includeSpell(v34, (int)SpellRequestSize) )
          {
            v78 = LogicSpell::getSpellData(v34);
            std::vector<LogicSpellData const*>::push_back(&v88, &v78);
          }
          v33 = (const char *)(unsigned int)((_DWORD)v33 + 1);
        }
        while ( (int)v33 < SpellCnt );
      }
      v35 = v88;
      v36 = v89;
      if ( v88 != (_QWORD *)v89 )
      {
        v37 = 0;
        for ( j = (v89 - (_BYTE *)v88) >> 3; j != 1; j >>= 1 )
          v37 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
          v88,
          v89,
          v37,
          sortSpells);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
          v35,
          v36,
          sortSpells);
      }
      v39 = GUIContainer::getMovieClip((#1254 *)a1);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v39, "ScrollArea");
      Rect::Rect(v77);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v77);
      v41 = (#1253 *)operator new(504);
      Width = Rect::getWidth(v77);
      v43 = *(float *)&Width;
      Height = Rect::getHeight(v77);
      ScrollArea::ScrollArea(v41, v43, *(float *)&Height, (unsigned __int64)(v36 - (_BYTE *)v35) >> 3);
      *(_QWORD *)(a1 + 296) = v41;
      ScrollArea::enablePinching(v41, 0);
      ScrollArea::enableHorizontalDrag(*(#1253 **)(a1 + 296), 0);
      ScrollArea::enableVerticalDrag(*(#1253 **)(a1 + 296), 1);
      v45 = *(_QWORD *)(a1 + 296);
      *(_BYTE *)(v45 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v45, 12);
      v46 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClip::changeTimelineChild(v46, TextFieldByName, *(#1249 **)(a1 + 296));
      v47 = *(DisplayObject **)(a1 + 296);
      v48 = DisplayObject::getX(v47);
      v49 = *(float *)&v77[0].top;
      v50 = DisplayObject::getY(*(_QWORD *)(a1 + 296));
      *(__n128 *)&v51 = DisplayObject::setPixelSnappedXY(
                          v47,
                          *(float *)&v48 + v49,
                          *(float *)&v50 + *(float *)&v77[0].bottom);
      if ( TextFieldByName )
        (*(void (__fastcall **)(#1271 *, long double))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName, v51);
      if ( v35 != (_QWORD *)v36 )
      {
        v52 = 0;
        v53 = (v36 - (_BYTE *)v35) >> 3;
        v72 = 0.0;
        LODWORD(v48) = 1064514355;
        v71 = 0.0;
        v70 = 0.0;
        v73 = 0.0;
        do
        {
          v54 = v35[v52];
          SpellByData = LogicClientHome::getSpellByData(Home, v54);
          v56 = (LogicSpell *)operator new(48);
          LogicSpell::LogicSpell(v56);
          v76 = v56;
          *((_DWORD *)v56 + 2) = *(_DWORD *)(SpellByData + 8);
          LogicSpell::setSpellData(v56, v54);
          LogicSpell::setMaterialCount(v56, *(_DWORD *)(SpellByData + 16), v57);
          std::vector<LogicSpell *>::push_back(a1 + 264, &v76);
          v58 = (SpellItem *)operator new(464);
          SpellItem::SpellItem(v58, v56, 1, 0);
          v75 = v58;
          SpellItem::setManaVisible(v58, 0);
          canUpgrade = LogicSpell::canUpgrade(v56);
          SpellItem::updateFusionMode(v58, canUpgrade);
          (*(void (__fastcall **)(SpellItem *, long double))(*(_QWORD *)v58 + 40LL))(v58, v48);
          v60 = *(void (__fastcall **)(SpellItem *, _BOOL8))(*(_QWORD *)v58 + 152LL);
          hasEnoughMaterialToMaxLevel = LogicSpell::hasEnoughMaterialToMaxLevel((InitState **)SpellByData);
          v60(v58, hasEnoughMaterialToMaxLevel);
          if ( !(_DWORD)v52 )
          {
            Rect::Rect(v74);
            DisplayObject::getBounds(v58, 0, v74);
            v63 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v74)));
            v64 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getHeight(v74)));
            v65 = Rect::getWidth(v77);
            v66 = *(float *)&v65;
            v73 = v63 / 0.95;
            v67 = (float)(v63 / 0.95) * -3.0;
            v68 = *(float *)&v74[0].bottom;
            Rect::~Rect(v74);
            v72 = (float)(v66 + ceilf(v67)) * 0.5;
            v71 = -v68;
            v70 = v64 / 0.95;
          }
          DisplayObject::setPixelSnappedXY(
            v58,
            v72 + (float)(v73 * (float)(int)(v52 - (v62 & 0xFFFFFFFC))),
            v71 + (float)(v70 * (float)((int)v52 / 4)));
          ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 296), v58);
          std::vector<SpellItem *>::push_back(a1 + 240, &v75);
          SpellItem::setItemListener(v58, a1 + 232);
          ++v52;
        }
        while ( v52 < v53 );
      }
      ScrollArea::updateBounds(*(ScrollArea **)(a1 + 296));
      Rect::~Rect(v77);
      String::~String();
      String::~String();
      if ( v35 )
        operator delete(v35);
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall RequestSingleSpellPopup::RequestSingleSpellPopup(__int64 a1)
    {
      return __ZN23RequestSingleSpellPopupC2Ev(a1);
    }

    void __fastcall RequestSingleSpellPopup::~RequestSingleSpellPopup(_QWORD *a1)
    {
      AskForBattleReplayStreamMessage *v2; // x20
      _QWORD *v3; // x8
      _QWORD *v4; // x10
      __int64 v5; // x21
      unsigned int v6; // w22
      __int64 v7; // x0
      _BYTE *v8; // x0
      _QWORD *v9; // x9
      unsigned __int64 v10; // x8
      unsigned int v11; // w22
      void *v12; // x21
    
      *a1 = off_100469388;
      a1[12] = &off_100469568;
      a1[29] = off_100469588;
      v2 = (AskForBattleReplayStreamMessage *)(a1 + 29);
      v4 = (_QWORD *)a1[30];
      v3 = (_QWORD *)a1[31];
      if ( v3 != v4 )
      {
        v5 = 0;
        v6 = 0;
        v3 = (_QWORD *)a1[30];
        do
        {
          v7 = v3[v5];
          do
          {
            if ( v7 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
              v3 = (_QWORD *)a1[30];
            }
            v3[v5] = 0;
            v3 = (_QWORD *)a1[30];
            v7 = v3[v5];
          }
          while ( v7 );
          v5 = ++v6;
          v4 = (_QWORD *)a1[30];
        }
        while ( v6 < (unsigned __int64)((__int64)(a1[31] - (_QWORD)v3) >> 3) );
      }
      a1[31] = v4;
      v9 = (_QWORD *)a1[33];
      v8 = (_BYTE *)a1[34];
      if ( v8 != (_BYTE *)v9 )
      {
        v10 = 0;
        v11 = 1;
        do
        {
          v12 = (void *)v9[v10];
          if ( v12 )
          {
            LogicSpell::destruct((TextField *)v9[v10]);
            operator delete(v12);
            v9 = (_QWORD *)a1[33];
            v8 = (_BYTE *)a1[34];
          }
          v10 = v11++;
        }
        while ( v10 < (v8 - (_BYTE *)v9) >> 3 );
        v3 = (_QWORD *)a1[30];
        v8 = v9;
        v4 = v3;
      }
      a1[36] = 0;
      a1[37] = 0;
      a1[31] = v4;
      a1[34] = v9;
      if ( v8 )
      {
        operator delete(v8);
        v3 = (_QWORD *)a1[30];
      }
      if ( v3 )
        operator delete(v3);
      SpellItemListener::~SpellItemListener(v2);
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1);
    }

    // attributes: thunk
    void __fastcall RequestSingleSpellPopup::~RequestSingleSpellPopup(_QWORD *a1)
    {
      __ZN23RequestSingleSpellPopupD2Ev(a1);
    }

    void __fastcall RequestSingleSpellPopup::~RequestSingleSpellPopup(_QWORD *a1)
    {
      RequestSingleSpellPopup::~RequestSingleSpellPopup(a1);
      operator delete(a1);
    }

    _QWORD *__fastcall RequestSingleSpellPopup::buttonClicked(_QWORD *result, __int64 a2)
    {
      if ( result[36] == a2 )
        return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 352LL))(result);
      return result;
    }

    __int64 __fastcall RequestSingleSpellPopup::update(MatchmakeFailedMessage *a1, long double a2)
    {
      PopupBase::update(a1, *(float *)&a2);
      return (*(__int64 (__fastcall **)(_QWORD *, long double))(**((_QWORD **)a1 + 37) + 272LL))(*((_QWORD **)a1 + 37), a2);
    }

    __int64 __fastcall RequestSingleSpellPopup::spellItemPressed(__int64 a1, __int64 a2)
    {
      __int64 Instance; // x0
      __int64 Home; // x22
      const InitState *SpellData; // x21
      InitState **SpellByData; // x0
      TextField *v8; // x20
      _BOOL8 isLevelMax; // x0
      _BOOL4 v10; // w20
      const char *v11; // x1
      Stage *v12; // x19
      char *v13; // x0
      LogicRequestSpellsCommand *v14; // x20
      String *v15; // x21
      __int64 v16; // x0
      void *String; // x1
    
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      SpellData = (const InitState *)LogicSpell::getSpellData(*(TextField **)(a2 + 304));
      SpellByData = (InitState **)LogicClientHome::getSpellByData(Home, SpellData);
      v8 = (TextField *)SpellByData;
      if ( SpellByData && LogicSpell::hasEnoughMaterialToMaxLevel(SpellByData) )
      {
        isLevelMax = LogicSpell::isLevelMax(v8);
        v10 = isLevelMax;
        v12 = (Stage *)GUI::getInstance((BadgePopup *)isLevelMax);
        if ( v10 )
          v13 = "TID_CARD_REQUEST_FAIL_MAX_LEVEL";
        else
          v13 = "TID_CARD_REQUEST_FAIL_CARDS_FOR_MAX_LEVEL";
        String = StringTable::getString((#1308 *)v13, v11);
        return GUI::showCenteredFloaterText(v12, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      else
      {
        v14 = (LogicRequestSpellsCommand *)operator new(56);
        LogicRequestSpellsCommand::LogicRequestSpellsCommand(v14);
        LogicRequestSpellsCommand::addToWishList(v14, SpellData);
        v15 = (String *)operator new(24);
        String::String(v15, "");
        LogicRequestSpellsCommand::setMessage((__int64)v14, v15);
        v16 = GameMode::getInstance();
        GameMode::addCommand(v16, v14, 1);
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
      }
    }

    __int64 RequestSingleSpellPopup::getPopupType()
    {
      return 45;
    }

}; // end class RequestSingleSpellPopup
