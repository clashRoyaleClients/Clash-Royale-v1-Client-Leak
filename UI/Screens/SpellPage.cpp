class SpellPage
{
public:

    __int64 __fastcall SpellPage::SpellPage(__int64 a1)
    {
      #1257 *MovieClip; // x21
      const char *v3; // x2
      #1375 *v4; // x0
      #1257 *v5; // x1
      Stage *TextFieldByName; // x0
      const char *v7; // x1
      #1271 *v8; // x22
      const String *String; // x0
      Stage *Instance; // x0
      int v11; // s8
      int v12; // s10
      #1271 *v13; // x0
      const char *v14; // x1
      #1249 *v15; // x22
      float v16; // s9
      #1253 *v17; // x23
      long double Width; // q0
      float v19; // s8
      long double Height; // q0
      __int64 v21; // x0
      DisplayObject *v22; // x21
      long double v23; // q0
      long double v24; // q0
      const char *v25; // x2
      #1375 *v26; // x0
      #1257 *v27; // x1
      DisplayObject *v28; // x21
      float MidX; // s0
      MovieClip *v30; // x21
      const char *v31; // x1
      const String *v32; // x0
      MovieClip *v33; // x21
      const char *v34; // x1
      const String *v35; // x0
      const char *v36; // x2
      #1249 *v37; // x0
      const char *v38; // x2
      #1375 *v39; // x0
      #1257 *v40; // x1
      DisplayObject *v41; // x21
      float v42; // s8
      long double v43; // q0
      __int64 MovieClipByName; // x0
      const char *v45; // x1
      MovieClip *v46; // x21
      const String *v47; // x0
      MovieClip *v48; // x21
      const char *v49; // x1
      const String *v50; // x0
      __int64 v51; // x0
      long double v52; // q0
      long double v53; // q0
      __int64 v54; // x0
      CoOpenStreamEntry *Home; // x0
      GameInputField *SpellCollection; // x0
      SpellPage *CurrentSort; // x0
      Rect v59[2]; // [xsp+0h] [xbp-B0h] BYREF
      Rect v60; // [xsp+10h] [xbp-A0h] BYREF
      float v61; // [xsp+1Ch] [xbp-94h]
      Rect v62; // [xsp+20h] [xbp-90h] BYREF
      float v63; // [xsp+28h] [xbp-88h]
      float v64; // [xsp+2Ch] [xbp-84h]
      String v65; // [xsp+30h] [xbp-80h] BYREF
      String v66; // [xsp+48h] [xbp-68h] BYREF
    
      String::String(&v66, "sc/ui.sc");
      String::String(&v65, "screen_spell_collection");
      PageItem::PageItem((PageItem *)a1, &v66, &v65);
      String::~String();
      String::~String();
      SpellItemListener::SpellItemListener((SpellItemListener *)(a1 + 200));
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)a1 = off_10046FF58;
      *(_QWORD *)(a1 + 96) = &off_100470128;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 200) = off_100470148;
      *(_QWORD *)(a1 + 288) = a1 + 272;
      *(_QWORD *)(a1 + 296) = a1 + 272;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 336) = a1 + 320;
      *(_QWORD *)(a1 + 344) = a1 + 320;
      *(_BYTE *)(a1 + 424) = 0;
      *(_BYTE *)(a1 + 425) = 0;
      *(_BYTE *)(a1 + 426) = 0;
      *(_BYTE *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)(a1 + 408) = 0;
      *(_BYTE *)(a1 + 444) = 0;
      *(_QWORD *)(a1 + 436) = 0;
      *(_QWORD *)(a1 + 428) = 0;
      *(_QWORD *)(a1 + 453) = 0;
      *(_QWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      v4 = (#1375 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "collection_card_divider", v3);
      *(_QWORD *)(a1 + 256) = v4;
      DropGUIContainer::putLocalizedTIDsToTextFields(v4, v5);
      TextFieldByName = (Stage *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 256), "TID_UNLOCK_AT_ARENA");
      v8 = TextFieldByName;
      if ( TextFieldByName )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_SPELL_SCREEN_LOCKED_CARDS_TITLE", v7);
        TextFieldByName = (Stage *)TextField::setText(v8, String);
      }
      Instance = (Stage *)Stage::getInstance(TextFieldByName);
      v11 = *((_DWORD *)Instance + 107);
      v12 = *(_DWORD *)(Stage::getInstance(Instance) + 432LL);
      Rect::Rect(&v62);
      v13 = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "scroll_area");
      v15 = v13;
      if ( !v13 )
        Debugger::error((__siginfo *)"no scroll_area in spell page!", v14);
      TextField::getTextFieldBounds(v13, (#1261 *)&v62);
      v16 = (float)v11;
      *(_DWORD *)&v62.top = 0;
      v63 = (float)v11;
      *(_DWORD *)&v62.bottom = 0;
      v64 = (float)v12;
      v17 = (#1253 *)operator new(504);
      Width = Rect::getWidth(&v62);
      v19 = *(float *)&Width;
      Height = Rect::getHeight(&v62);
      ScrollArea::ScrollArea(v17, v19, *(float *)&Height, 1);
      *(_QWORD *)(a1 + 224) = v17;
      ScrollArea::enablePinching(v17, 0);
      ScrollArea::enableHorizontalDrag(*(#1253 **)(a1 + 224), 0);
      ScrollArea::enableVerticalDrag(*(#1253 **)(a1 + 224), 1);
      v21 = *(_QWORD *)(a1 + 224);
      *(_BYTE *)(v21 + 496) = 0;
      ScrollArea::setAlignment((#1253 *)v21, 12);
      MovieClip::changeTimelineChild(MovieClip, v15, *(#1249 **)(a1 + 224));
      v22 = *(DisplayObject **)(a1 + 224);
      v23 = DisplayObject::getY(v15);
      *(__n128 *)&v24 = DisplayObject::setPixelSnappedXY(v22, v16 * -0.5, *(float *)&v23 + *(float *)&v62.bottom);
      (*(void (__fastcall **)(#1249 *, long double))(*(_QWORD *)v15 + 8LL))(v15, v24);
      Rect::Rect(&v60);
      v26 = (#1375 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "card_page_deck", v25);
      *(_QWORD *)(a1 + 384) = v26;
      DropGUIContainer::putLocalizedTIDsToTextFields(v26, v27);
      DisplayObject::getBounds(*(_QWORD *)(a1 + 384), 0, &v60);
      v28 = *(DisplayObject **)(a1 + 384);
      MidX = Rect::getMidX(&v62);
      DisplayObject::setPixelSnappedXY(v28, MidX, -*(float *)&v60.bottom);
      v30 = *(MovieClip **)(a1 + 384);
      v32 = (const String *)StringTable::getString((#1308 *)"TID_BATTLE_SPELLS", v31);
      MovieClip::setText(v30, "battle_cards_title", v32);
      v33 = *(MovieClip **)(a1 + 384);
      v35 = (const String *)StringTable::getString((#1308 *)"TID_BATTLE_SPELLS_ELIXIR_AVERAGE", v34);
      MovieClip::setText(v33, "elixar_total_title", v35);
      v37 = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui_panels.sc", "panel_battleSpells", v36);
      *(_QWORD *)(a1 + 232) = v37;
      MovieClip::changeTimelineChild(*(#1257 **)(a1 + 384), "panel", v37);
      v39 = (#1375 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "card_page_collection", v38);
      *(_QWORD *)(a1 + 392) = v39;
      DropGUIContainer::putLocalizedTIDsToTextFields(v39, v40);
      v41 = *(DisplayObject **)(a1 + 392);
      v42 = Rect::getMidX(&v62);
      v43 = DisplayObject::getY(*(_QWORD *)(a1 + 384));
      DisplayObject::setPixelSnappedXY(v41, v42, *(float *)&v43 + v61);
      *(_QWORD *)(a1 + 408) = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 392), "TID_SELECT_SPELL_TO_BE_REPLACED_HEADER");
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 392), "header");
      v46 = (MovieClip *)MovieClipByName;
      *(_QWORD *)(a1 + 400) = MovieClipByName;
      if ( MovieClipByName )
      {
        v47 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_COLLECTION", v45);
        MovieClip::setText(v46, "collection_title", v47);
        v48 = *(MovieClip **)(a1 + 400);
        v50 = (const String *)StringTable::getString((#1308 *)"TID_CARD_UNLOCK_COUNT", v49);
        MovieClip::setText(v48, "cards_unlocked_title", v50);
      }
      Rect::Rect(v59);
      v51 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 384), "battle_cards_area");
      DisplayObject::getBounds(v51, *(_QWORD *)(a1 + 224), v59);
      v52 = Rect::getWidth(v59);
      *(float *)(a1 + 416) = *(float *)&v52 * 0.25;
      v53 = Rect::getHeight(v59);
      *(float *)(a1 + 420) = *(float *)&v53 * 0.5;
      v54 = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v54 + 112));
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
      CurrentSort = (SpellPage *)LogicSpellCollection::getCurrentSort(SpellCollection);
      SpellPage::updateSortButtonText(CurrentSort, *(GameButton **)(a1 + 240), (int)CurrentSort);
      SpellPage::deckChanged((SpellPage *)a1);
      SpellPage::collectionChanged((SpellPage *)a1);
      ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 224), *(#1249 **)(a1 + 256));
      Rect::~Rect(v59);
      Rect::~Rect(&v60);
      Rect::~Rect(&v62);
      return a1;
    }

    void __fastcall SpellPage::updateSortButtonText(__int64 a1, const char *a2, int a3)
    {
      char *v4; // x0
      const String *String; // x2
    
      if ( a2 )
      {
        if ( a3 == 1 )
        {
          v4 = "TID_SORT_FACTION";
        }
        else
        {
          if ( a3 )
            return;
          v4 = "TID_SORT_NEWEST";
        }
        String = (const String *)StringTable::getString((#1308 *)v4, a2);
        GameButton::setText((__int64)a2, (__int64)"txt", String);
      }
    }

    __int64 __fastcall SpellPage::deckChanged(SpellPage *a1)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      AcceptChallengeMessage *SelectedDeck; // x20
      int v5; // w21
      int v6; // w22
      const char *v7; // x23
      TextField *Spell; // x0
      TextField *v9; // x25
      InitState *SpellData; // x0
      int ManaCost; // w26
      __int64 Listener; // x0
      __int64 v13; // x27
      const char *v14; // x2
      AskForAllianceStreamMessage *v15; // x1
      __int64 v16; // x0
    
      SpellPage::createSortOrder(a1);
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
      v5 = 0;
      v6 = 0;
      v7 = 0;
      do
      {
        Spell = (TextField *)LogicSpellDeck::getSpell(SelectedDeck, v7);
        v9 = Spell;
        if ( Spell )
        {
          SpellData = (InitState *)LogicSpell::getSpellData(Spell);
          ManaCost = LogicSpellData::getManaCost(SpellData);
          if ( LogicSpell::getListener(v9) )
          {
            Listener = LogicSpell::getListener(v9);
            if ( Listener )
              v13 = Listener - 264;
            else
              v13 = 0;
          }
          else
          {
            v13 = operator new(464);
            SpellItem::SpellItem(v13, v9, 1, 1);
            SpellItem::setItemListener(v13, (__int64)a1 + 200, v14);
          }
          v5 += ManaCost;
          ++v6;
          if ( v13 )
            v15 = (AskForAllianceStreamMessage *)(v13 + 264);
          else
            v15 = 0;
          LogicSpell::setListener(v9, v15);
        }
        v7 = (const char *)(unsigned int)((_DWORD)v7 + 1);
      }
      while ( (int)v7 < 8 );
      SpellPage::setAverageElixirCost(a1, v5, v6);
      v16 = *((_QWORD *)a1 + 45);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      *((_QWORD *)a1 + 45) = 0;
      return SpellPage::sortCollectionItems(a1, 0);
    }

    __int64 __fastcall SpellPage::collectionChanged(SpellPage *a1)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      GameInputField *SpellCollection; // x20
      int v5; // w25
      int i; // w21
      TextField *Spell; // x23
      __int64 Listener; // x0
      __int64 v9; // x24
      const char *v10; // x2
      AskForAllianceStreamMessage *v11; // x1
    
      SpellPage::createSortOrder(a1);
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
      v5 = *((_DWORD *)SpellCollection + 3);
      if ( v5 >= 1 )
      {
        for ( i = 0; i < v5; ++i )
        {
          Spell = (TextField *)LogicSpellCollection::getSpell(SpellCollection, i);
          if ( LogicSpell::getListener(Spell) )
          {
            Listener = LogicSpell::getListener(Spell);
            if ( Listener )
              v9 = Listener - 264;
            else
              v9 = 0;
          }
          else
          {
            v9 = operator new(464);
            SpellItem::SpellItem(v9, Spell, 1, 1);
            SpellItem::setItemListener(v9, (__int64)a1 + 200, v10);
          }
          if ( v9 )
            v11 = (AskForAllianceStreamMessage *)(v9 + 264);
          else
            v11 = 0;
          LogicSpell::setListener(Spell, v11);
        }
      }
      return SpellPage::sortCollectionItems(a1, 0);
    }

    // attributes: thunk
    void __fastcall SpellPage::SpellPage(SpellPage *this)
    {
      __ZN9SpellPageC2Ev((__int64)this);
    }

    void __fastcall SpellPage::~SpellPage(__int64 a1)
    {
      AskForBattleReplayStreamMessage *v2; // x20
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x23
      __int64 i; // x21
      _QWORD *v8; // x0
      TextField *v9; // x22
      __int64 v10; // x0
      int SpellCount; // w22
      long double v12; // q0
      int j; // w23
      __int64 SpellItem; // x0
      __int64 v15; // x0
      __int64 v16; // x0
      __int64 v17; // x0
      __int64 v18; // x0
    
      *(_QWORD *)a1 = off_10046FF58;
      *(_QWORD *)(a1 + 96) = &off_100470128;
      *(_QWORD *)(a1 + 200) = off_100470148;
      v2 = (AskForBattleReplayStreamMessage *)(a1 + 200);
      v3 = *(_QWORD *)(a1 + 232);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *(_QWORD *)(a1 + 232) = 0;
      v4 = *(_QWORD *)(a1 + 360);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_QWORD *)(a1 + 360) = 0;
      v5 = *(_QWORD *)(a1 + 256);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *(_QWORD *)(a1 + 256) = 0;
      SpellPage::destroyUnusedItems((SpellPage *)a1);
      v6 = a1 + 272;
      for ( i = *(_QWORD *)(a1 + 288); i != v6; i = std::_Rb_tree_increment(i) )
      {
        v8 = *(_QWORD **)(i + 40);
        v9 = (TextField *)v8[38];
        if ( v8 )
          (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
        if ( v9 )
        {
          LogicSpell::destruct(v9);
          operator delete(v9);
        }
      }
      v10 = std::_Rb_tree<LogicSpellData const*,std::pair<LogicSpellData const* const,SpellItem *>,std::_Select1st<std::pair<LogicSpellData const* const,SpellItem *>>,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,SpellItem *>>>::_M_erase(
              a1 + 264,
              *(_QWORD *)(a1 + 280));
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 288) = v6;
      *(_QWORD *)(a1 + 296) = v6;
      *(_QWORD *)(a1 + 304) = 0;
      SpellCount = SpellPage::getSpellCount(v10);
      if ( SpellCount >= 1 )
      {
        for ( j = 0; j < SpellCount; ++j )
        {
          SpellItem = SpellPage::getSpellItem();
          if ( SpellItem )
            LogicSpell::setListener(*(TextField **)(SpellItem + 304), 0);
        }
      }
      v15 = *(_QWORD *)(a1 + 384);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      *(_QWORD *)(a1 + 384) = 0;
      v16 = *(_QWORD *)(a1 + 392);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      *(_QWORD *)(a1 + 392) = 0;
      v17 = *(_QWORD *)(a1 + 224);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      *(_QWORD *)(a1 + 360) = 0;
      *(_BYTE *)(a1 + 424) = 0;
      *(_BYTE *)(a1 + 425) = 0;
      *(_BYTE *)(a1 + 426) = 0;
      *(_BYTE *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)(a1 + 408) = 0;
      *(_BYTE *)(a1 + 444) = 0;
      *(_QWORD *)(a1 + 436) = 0;
      *(_QWORD *)(a1 + 428) = 0;
      *(_QWORD *)(a1 + 453) = 0;
      *(_QWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      v18 = *(_QWORD *)(a1 + 368);
      if ( v18 )
        *(__n128 *)&v12 = operator delete[](v18);
      *(_QWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      std::_Rb_tree<LogicSpellData const*,std::pair<LogicSpellData const* const,int>,std::_Select1st<std::pair<LogicSpellData const* const,int>>,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,int>>>::_M_erase(
        a1 + 312,
        *(_QWORD *)(a1 + 328),
        v12);
      std::_Rb_tree<LogicSpellData const*,std::pair<LogicSpellData const* const,SpellItem *>,std::_Select1st<std::pair<LogicSpellData const* const,SpellItem *>>,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,SpellItem *>>>::_M_erase(
        a1 + 264,
        *(_QWORD *)(a1 + 280));
      SpellItemListener::~SpellItemListener(v2);
      PageItem::~PageItem((LogicProjectileData *)a1);
    }

    int *__fastcall SpellPage::destroyUnusedItems(int *result)
    {
      int *v1; // x19
      __int64 v2; // x8
      __int64 v3; // x20
      __int64 v4; // x8
    
      v1 = result;
      v2 = result[95];
      if ( (int)v2 >= 1 )
      {
        v3 = v2 - 1;
        do
        {
          result = *(int **)(*((_QWORD *)v1 + 46) + 8 * v3);
          if ( result )
            result = (int *)(*(__int64 (__fastcall **)(int *))(*(_QWORD *)result + 8LL))(result);
          v4 = v3-- + 1;
        }
        while ( v4 > 1 );
      }
      v1[95] = 0;
      return result;
    }

    __int64 SpellPage::getSpellCount()
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x19
      int v2; // w20
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      v2 = *(_DWORD *)(LogicClientHome::getSpellCollection(Home) + 12);
      return v2 + 8 * (unsigned int)LogicClientHome::getDeckCount(Home);
    }

    __int64 __fastcall SpellPage::getSpellItem(__int64 a1, int a2, const char *a3)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x20
      GameInputField *SpellCollection; // x21
      const char *v7; // x2
      int v8; // w8
      int v9; // w8
      const char *v10; // x19
      AcceptChallengeMessage *LogicDeck; // x0
      TextField *Spell; // x0
      int v13; // w19
      __int64 Listener; // x0
    
      Debugger::doAssert((Debugger *)(a2 >= 0), (bool)"", a3);
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
      v8 = 8 * LogicClientHome::getDeckCount(Home);
      if ( v8 <= a2 )
      {
        v13 = a2 - v8;
        Debugger::doAssert((Debugger *)(v13 < *((_DWORD *)SpellCollection + 3)), (bool)"", v7);
        Spell = (TextField *)LogicSpellCollection::getSpell(SpellCollection, v13);
      }
      else
      {
        v9 = a2 + 7;
        if ( a2 >= 0 )
          v9 = a2;
        v10 = (const char *)(a2 - (v9 & 0xFFFFFFF8));
        LogicDeck = (AcceptChallengeMessage *)LogicClientHome::getLogicDeck(Home, v9 >> 3);
        Spell = (TextField *)LogicSpellDeck::getSpell(LogicDeck, v10);
        if ( !Spell )
          return 0;
      }
      Listener = LogicSpell::getListener(Spell);
      if ( Listener )
        return Listener - 264;
      return 0;
    }

    // attributes: thunk
    void __fastcall SpellPage::~SpellPage(__int64 this)
    {
      __ZN9SpellPageD2Ev(this);
    }

    void __fastcall SpellPage::~SpellPage(ShopItem *this)
    {
      SpellPage::~SpellPage((__int64)this);
      operator delete(this);
    }

    __int64 __fastcall SpellPage::update(ShopItem *this, float a2)
    {
      long double v2; // q9
      ShopItem *v4; // x19
      float v5; // s10
      float v6; // s0
      float v7; // s1
      float v8; // s1
      float v9; // s0
      __int64 DragHandler; // x0
      LogicPageOpenedCommand *Instance; // x0
      MessageManager *PageGUI; // x0
      __int64 result; // x0
      int v14; // w8
    
      v4 = this;
      if ( *((_BYTE *)this + 460) )
      {
        *((float *)this + 114) = *((float *)this + 114) + a2;
        v5 = *((float *)this + 113);
        LODWORD(v2) = *((_DWORD *)this + 112);
        if ( *((_BYTE *)GameMain::getInstance(this) + 356) )
        {
          v5 = *((float *)v4 + 112);
          LODWORD(v2) = *((_DWORD *)v4 + 113);
          v6 = 3.5;
        }
        else
        {
          v6 = 2.2;
        }
        v7 = *((float *)v4 + 114);
        if ( v7 >= v6 )
        {
          *((_BYTE *)v4 + 460) = 0;
        }
        else
        {
          v8 = v7 / v6;
          if ( v8 >= 0.0 )
          {
            v9 = 1.0;
            if ( v8 <= 1.0 )
              v9 = v8;
          }
          else
          {
            v9 = 0.0;
          }
          *(float *)&v2 = v5
                        + (float)((float)(*(float *)&v2 - v5)
                                * (float)((float)(v9 * (float)(v9 * v9))
                                        * (float)((float)(v9 * (float)((float)(v9 * 6.0) + -15.0)) + 10.0)));
        }
        DragHandler = ScrollArea::getDragHandler(*((#1253 **)v4 + 28));
        this = (ShopItem *)(*(__int64 (__fastcall **)(__int64, long double, long double, float))(*(_QWORD *)DragHandler
                                                                                               + 280LL))(
                             DragHandler,
                             COERCE_LONG_DOUBLE((unsigned __int128)0),
                             v2,
                             1.0);
        *(_BYTE *)(*((_QWORD *)v4 + 28) + 64LL) = 0;
      }
      else
      {
        *(_BYTE *)(*((_QWORD *)this + 28) + 64LL) = 1;
      }
      Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(this);
      PageGUI = (MessageManager *)HomeScreen::getPageGUI(Instance);
      result = PageGUI::getCurrentPageIndex(PageGUI);
      v14 = 1 - result;
      if ( (int)result >= 1 )
        v14 = result - 1;
      *((_BYTE *)v4 + 8) = v14 < 2;
      if ( *((_DWORD *)v4 + 47) == 2 )
      {
        result = SpellPage::updateSpells(v4, a2);
        *((float *)v4 + 110) = *((float *)v4 + 110) + a2;
      }
      else
      {
        *((_DWORD *)v4 + 110) = 0;
        *((_BYTE *)v4 + 444) = 0;
      }
      return result;
    }

    ShopItem *__fastcall SpellPage::updateSpells(ShopItem *this, float a2)
    {
      long double v2; // q10
      float v5; // s9
      long double v6; // q0
      __int64 DeckItemAt; // x20
      __int64 v8; // x0
      long double v9; // q0
      float v10; // s0
      float v11; // s9
      #1249 *v12; // x20
      long double v13; // q0
      float v14; // s1
      bool v15; // cc
      float v16; // s1
      float v17; // s2
      DisplayObject *v18; // x20
      long double v19; // q0
      float v20; // s1
      float v21; // s1
      float v22; // s2
      __int64 v23; // x0
      float v24; // s0
      float v25; // s0
      __int64 v26; // x0
      __int64 v27; // x0
      ShopItem *isPanning; // x0
      char v29; // w20
      ShopItem *result; // x0
      const char *v31; // x2
      int v32; // w20
      int v33; // w21
      ShopItem *v34; // x22
      __int64 Instance; // x0
      __int64 Home; // x0
      int v37; // w24
      _BOOL4 v38; // w1
      long double v39; // q9
      ShopItem *v40; // x20
    
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 272LL))(*((_QWORD *)this + 28));
      ScrollArea::enableVerticalDrag(*((#1253 **)this + 28), *((_BYTE *)this + 425) == 0);
      if ( *((_BYTE *)this + 425) )
      {
        if ( (unsigned int)SpellItem::isDragging(*((InboxItem **)this + 45)) )
        {
          LODWORD(v5) = COERCE_UNSIGNED_INT128(DisplayObject::getX(*((_QWORD *)this + 45)));
          v6 = DisplayObject::getY(*((_QWORD *)this + 45));
          DeckItemAt = SpellPage::getDeckItemAt(this, v5, *(float *)&v6);
          v8 = *((_QWORD *)this + 54);
          if ( DeckItemAt != v8 )
          {
            if ( v8 )
              SpellItem::setHoveringHighlight(v8, 0);
            *((_QWORD *)this + 54) = DeckItemAt;
            if ( DeckItemAt )
              SpellItem::setHoveringHighlight(DeckItemAt, 1);
          }
          goto LABEL_23;
        }
        SpellPage::getSwapModeOrigX(this);
        v2 = v9;
        SpellPage::getSwapModeOrigY(this);
        v11 = v10;
        v12 = (#1249 *)*((_QWORD *)this + 45);
        v13 = DisplayObject::getX(v12);
        v14 = *(float *)&v13 - *(float *)&v2;
        if ( (float)(*(float *)&v13 - *(float *)&v2) < 0.0 )
          v14 = -(float)(*(float *)&v13 - *(float *)&v2);
        v15 = v14 > 0.5;
        v16 = *(float *)&v2;
        if ( v15 )
        {
          v17 = (float)(a2 * 6.0) / 0.016667;
          v16 = *(float *)&v13;
          if ( v17 >= 1.0 )
            v16 = (float)(*(float *)&v2 + (float)(*(float *)&v13 * (float)(v17 + -1.0))) / v17;
        }
        DisplayObject::setX(v12, v16);
        v18 = (DisplayObject *)*((_QWORD *)this + 45);
        v19 = DisplayObject::getY(v18);
        v20 = *(float *)&v19 - v11;
        if ( (float)(*(float *)&v19 - v11) < 0.0 )
          v20 = -(float)(*(float *)&v19 - v11);
        v15 = v20 > 0.5;
        v21 = v11;
        if ( v15 )
        {
          v22 = (float)(a2 * 6.0) / 0.016667;
          v21 = *(float *)&v19;
          if ( v22 >= 1.0 )
            v21 = (float)(v11 + (float)(*(float *)&v19 * (float)(v22 + -1.0))) / v22;
        }
        DisplayObject::setY(v18, v21);
      }
      v23 = *((_QWORD *)this + 54);
      if ( v23 )
      {
        SpellItem::setHoveringHighlight(v23, 0);
        *((_QWORD *)this + 54) = 0;
      }
    LABEL_23:
      v24 = 4.0;
      if ( *((_BYTE *)this + 425) )
        v24 = -4.0;
      v25 = *((float *)this + 107) + (float)(v24 * a2);
      if ( v25 < 0.0 )
        v25 = 0.0;
      LODWORD(v2) = 1.0;
      if ( v25 > 1.0 )
        v25 = 1.0;
      *((float *)this + 107) = v25;
      v26 = *((_QWORD *)this + 51);
      if ( v26 )
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v26 + 80LL))(v26, 1.0 - v25);
      v27 = *((_QWORD *)this + 50);
      if ( v27 )
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v27 + 80LL))(v27, *((float *)this + 107));
      (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 32) + 80LL))(
        *((_QWORD *)this + 32),
        *((float *)this + 107));
      isPanning = (ShopItem *)ScrollArea::isPanning(*((#1253 **)this + 28));
      v29 = (char)isPanning;
      if ( (_DWORD)isPanning != *((unsigned __int8 *)this + 424) )
      {
        if ( ((unsigned __int8)isPanning & 1) == 0 )
          SpellPage::didScroll(isPanning);
        *((_BYTE *)this + 424) = v29;
      }
      SpellPage::updateFusion(this);
      SpellPage::updateSelectedItem(this, a2);
      result = (ShopItem *)SpellPage::getSpellCount();
      v32 = (int)result;
      if ( (int)result >= 1 )
      {
        v33 = 0;
        do
        {
          result = (ShopItem *)SpellPage::getSpellItem((__int64)result, v33, v31);
          v34 = result;
          if ( result )
          {
            Instance = GameMode::getInstance();
            Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
            v37 = 8 * LogicClientHome::getDeckCount(Home);
            if ( v37 <= v33 )
            {
              SpellItem::enableFrameHilite((__int64)v34, 0);
              v38 = 0;
            }
            else
            {
              SpellItem::enableFrameHilite((__int64)v34, *((unsigned __int8 *)this + 425));
              v38 = *((_BYTE *)this + 425) != 0;
            }
            SpellItem::setWobble(v34, v38);
            SpellItem::update((__int64)v34, a2);
            SpellItem::setInDeck((__int64)v34, v37 > v33);
            v39 = v2;
            if ( v37 <= v33 )
              LODWORD(v39) = *((_DWORD *)this + 107);
            result = (ShopItem *)(*(__int64 (__fastcall **)(ShopItem *, long double))(*(_QWORD *)v34 + 80LL))(v34, v39);
            *((_BYTE *)v34 + 64) = *(float *)&v39 > 0.9;
          }
          ++v33;
        }
        while ( v32 != v33 );
      }
      v40 = (ShopItem *)*((_QWORD *)this + 36);
      if ( v40 != (ShopItem *)((char *)this + 272) )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)v40 + 5) + 80LL))(
            *((_QWORD *)v40 + 5),
            *((float *)this + 107));
          *(_BYTE *)(*((_QWORD *)v40 + 5) + 64LL) = *((float *)this + 107) > 0.9;
          result = (ShopItem *)std::_Rb_tree_increment(v40);
          v40 = result;
        }
        while ( result != (ShopItem *)((char *)this + 272) );
      }
      return result;
    }

    __int64 __fastcall SpellPage::getDeckItemAt(ShopItem *this, float a2, float a3)
    {
      __int64 TextFieldByName; // x0
      __int64 v7; // x0
      const char *v8; // x2
      unsigned int v9; // w1
      __int64 SpellItem; // x19
      Rect v12; // [xsp+0h] [xbp-30h] BYREF
      float v13; // [xsp+8h] [xbp-28h]
      float v14; // [xsp+Ch] [xbp-24h]
    
      Rect::Rect(&v12);
      TextFieldByName = MovieClip::getTextFieldByName(*((_QWORD *)this + 48), "battle_cards_area");
      DisplayObject::getBounds(TextFieldByName, *((_QWORD *)this + 28), &v12);
      if ( *(float *)&v12.top <= a2
        && v13 >= a2
        && v14 >= a3
        && *(float *)&v12.bottom <= a3
        && (v9 = (int)(float)((float)((float)((float)(a2 - *(float *)&v12.top) - (float)(*((float *)this + 104) * 0.5))
                                    / *((float *)this + 104))
                            + 0.5)
               + 4
               * (int)(float)((float)((float)((float)(a3 - *(float *)&v12.bottom) - (float)(*((float *)this + 105) * 0.5))
                                    / *((float *)this + 105))
                            + 0.5),
            v9 <= 7) )
      {
        SpellItem = SpellPage::getSpellItem(v7, v9, v8);
      }
      else
      {
        SpellItem = 0;
      }
      Rect::~Rect(&v12);
      return SpellItem;
    }

    long double __fastcall SpellPage::getSwapModeOrigX(ShopItem *this)
    {
      __int64 TextFieldByName; // x0
      long double v3; // q0
      long double v4; // q8
      Rect v6[2]; // [xsp+0h] [xbp-30h] BYREF
    
      Rect::Rect(v6);
      TextFieldByName = MovieClip::getTextFieldByName(*((_QWORD *)this + 49), "collection_cards_area");
      DisplayObject::getBounds(TextFieldByName, *((_QWORD *)this + 28), v6);
      *(float *)&v3 = Rect::getMidX(v6);
      v4 = v3;
      Rect::~Rect(v6);
      return v4;
    }

    long double __fastcall SpellPage::getSwapModeOrigY(#1271 **this)
    {
      float v2; // s9
      long double v3; // q8
      Stage *v4; // x0
      LogicPageOpenedCommand *Instance; // x0
      int v6; // s10
      LogicPageOpenedCommand *v7; // x0
      LogicClientAvatar *MainHUD; // x0
      float v9; // s0
      Rect v11; // [xsp+0h] [xbp-40h] BYREF
      float v12; // [xsp+Ch] [xbp-34h]
    
      Rect::Rect(&v11);
      TextField::getTextFieldBounds(*(this + 51), (#1261 *)&v11);
      v2 = v12;
      v3 = DisplayObject::getY(*(this + 49));
      Instance = (LogicPageOpenedCommand *)Stage::getInstance(v4);
      v6 = *((_DWORD *)Instance + 108);
      v7 = (LogicPageOpenedCommand *)HomeScreen::getInstance(Instance);
      MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(v7);
      MainHUD::getBottomHUDHeight(MainHUD);
      *(float *)&v3 = (float)((float)(v2 + *(float *)&v3) + (float)((float)v6 - v9)) * 0.5;
      Rect::~Rect(&v11);
      return v3;
    }

    void __fastcall SpellPage::didScroll(ShopItem *this)
    {
      NoAlliance *v1; // x19
      const AreaEffectObject *v2; // x2
      AreaEffectObject *SoundByName; // x0
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      v1 = (NoAlliance *)SoundManager::sm_pInstance;
      String::String(&v4, "Menu updown swipe");
      SoundByName = (AreaEffectObject *)LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v4, 0, v2);
      SoundManager::playSound(v1, SoundByName, 0xFFFFFFFFLL, 1.0, 0.0);
      String::~String();
    }

    void __fastcall SpellPage::updateFusion(ShopItem *this)
    {
      __int64 v1; // x19
      int canUpgrade; // w0
      __int64 SpellCount; // x0
      const char *v4; // x2
      int v5; // w19
      int v6; // w20
      __int64 v7; // x21
      int v8; // w0
    
      v1 = *((_QWORD *)this + 45);
      if ( v1 )
      {
        canUpgrade = LogicSpell::canUpgrade(*(TextField **)(v1 + 304));
        SpellItem::updateFusionMode(v1, canUpgrade);
      }
      SpellCount = SpellPage::getSpellCount();
      v5 = SpellCount;
      if ( (int)SpellCount >= 1 )
      {
        v6 = 0;
        do
        {
          SpellCount = SpellPage::getSpellItem(SpellCount, v6, v4);
          v7 = SpellCount;
          if ( SpellCount )
          {
            v8 = LogicSpell::canUpgrade(*(TextField **)(SpellCount + 304));
            SpellItem::updateFusionMode(v7, v8);
          }
          ++v6;
        }
        while ( v5 != v6 );
      }
    }

    int *__fastcall SpellPage::updateSelectedItem(ShopItem *this, float a2)
    {
      int *result; // x0
      SpellItem *v5; // x20
      long double v6; // q0
      float v7; // s10
      float v8; // s9
      #1249 *v9; // x20
      long double v10; // q0
      float v11; // s1
      bool v12; // cc
      float v13; // s1
      float v14; // s2
      DisplayObject *v15; // x20
      long double v16; // q0
      float v17; // s1
      float v18; // s1
      float v19; // s2
      __int64 v20; // x0
      int SpellSortIndex; // w0
    
      result = SpellPage::destroyUnusedItems((int *)this);
      v5 = (SpellItem *)*((_QWORD *)this + 45);
      if ( v5 )
      {
        if ( *((_BYTE *)this + 425) )
        {
          if ( (SpellItem::isDragging(*((InboxItem **)this + 45)) & 1) == 0 )
          {
            v7 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(SpellPage::getSwapModeOrigX(this)));
            LODWORD(v8) = COERCE_UNSIGNED_INT128(SpellPage::getSwapModeOrigY((#1271 **)this));
            v9 = (#1249 *)*((_QWORD *)this + 45);
            v10 = DisplayObject::getX(v9);
            v11 = *(float *)&v10 - v7;
            if ( (float)(*(float *)&v10 - v7) < 0.0 )
              v11 = -v11;
            v12 = v11 > 0.5;
            v13 = v7;
            if ( v12 )
            {
              v14 = (float)(a2 * 6.0) / 0.016667;
              v13 = *(float *)&v10;
              if ( v14 >= 1.0 )
                v13 = (float)(v7 + (float)(*(float *)&v10 * (float)(v14 + -1.0))) / v14;
            }
            DisplayObject::setX(v9, v13);
            v15 = (DisplayObject *)*((_QWORD *)this + 45);
            v16 = DisplayObject::getY(v15);
            v17 = *(float *)&v16 - v8;
            if ( (float)(*(float *)&v16 - v8) < 0.0 )
              v17 = -v17;
            v12 = v17 > 0.5;
            v18 = v8;
            if ( v12 )
            {
              v19 = (float)(a2 * 6.0) / 0.016667;
              v18 = *(float *)&v16;
              if ( v19 >= 1.0 )
                v18 = (float)(v8 + (float)(*(float *)&v16 * (float)(v19 + -1.0))) / v19;
            }
            *(__n128 *)&v6 = DisplayObject::setY(v15, v18);
          }
          v20 = *((_QWORD *)this + 45);
          LODWORD(v6) = *((_DWORD *)this + 107);
        }
        else
        {
          SpellSortIndex = SpellPage::getSpellSortIndex(this, *((_QWORD *)this + 27));
          SpellPage::setCollectionItemPosition(this, v5, SpellSortIndex);
          v20 = *((_QWORD *)this + 45);
          LODWORD(v6) = 1.0;
        }
        SpellItem::setButtonAlpha(v20, v6);
        return (int *)SpellItem::update(*((_QWORD *)this + 45), a2);
      }
      return result;
    }

    void __fastcall SpellPage::setAverageElixirCost(__int64 a1, const char *a2, int a3)
    {
      MovieClip *v3; // x19
      String v4; // [xsp+18h] [xbp-28h] BYREF
    
      if ( a3 )
      {
        v3 = *(MovieClip **)(a1 + 384);
        String::format((String *)"%d.%d", a2, (unsigned int)((int)a2 / a3), (unsigned int)(10 * (int)a2 / a3 % 10));
        MovieClip::setText(v3, "total_elixar_count", &v4);
        String::~String();
      }
    }

    void __fastcall SpellPage::setCardUnlockCount(__int64 a1, const char *a2, __int64 a3)
    {
      MovieClip *v3; // x19
      String v4; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = *(MovieClip **)(a1 + 400);
      if ( v3 )
      {
        String::format((String *)"%d/%d", a2, a2, a3);
        MovieClip::setText(v3, "cards_unlocked_count", &v4);
        String::~String();
      }
    }

    void __fastcall SpellPage::setCollectionItemPosition(__int64 a1, float *a2, int a3)
    {
      __int64 TextFieldByName; // x0
      unsigned int v7; // w9
      float v8; // s9
      float v9; // s8
      int v10; // w22
      __int64 v11; // x0
      long double v12; // q0
      int UnlockedCardsInLibrary; // w0
      int v14; // w21
      int v16; // w23
      float v17; // s0
      _BOOL4 v18; // w8
      float v19; // s2
      float v20; // s10
      float v21; // s9
      float v22; // s8
      DisplayObject *v23; // x20
      long double Width; // q0
      float v25; // [xsp+0h] [xbp-70h]
      Rect v26[2]; // [xsp+10h] [xbp-60h] BYREF
    
      Rect::Rect(v26);
      TextFieldByName = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 384), "battle_cards_area");
      DisplayObject::getBounds(TextFieldByName, *(_QWORD *)(a1 + 224), v26);
      v8 = *(float *)(a1 + 416);
      v9 = *(float *)(a1 + 420);
      v10 = a3 - 8;
      if ( a3 < 8 )
      {
        v18 = 0;
        v19 = 0.0;
      }
      else
      {
        v11 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 392), "collection_cards_area");
        *(__n128 *)&v12 = DisplayObject::getBounds(v11, *(_QWORD *)(a1 + 224), v26);
        UnlockedCardsInLibrary = SpellPage::getUnlockedCardsInLibrary(v12);
        v14 = UnlockedCardsInLibrary;
        if ( v10 < UnlockedCardsInLibrary || UnlockedCardsInLibrary < 1 )
        {
          v18 = 0;
          v19 = 0.0;
          a3 = v10;
        }
        else
        {
          if ( UnlockedCardsInLibrary >= 0 )
            v16 = UnlockedCardsInLibrary;
          else
            v16 = UnlockedCardsInLibrary + 3;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 96LL))(*(_QWORD *)(a1 + 256));
          if ( v14 == (v16 & 0xFFFFFFFC) )
            v7 = 0;
          else
            v7 = 4 - (v14 - (v16 & 0xFFFFFFFC));
          v18 = v10 == v14;
          a3 = v7 + v10;
          v19 = v17 * 1.5;
        }
      }
      v20 = *(float *)&v26[0].top;
      v21 = (float)(v8 * 0.5) + (float)(*(float *)&v26[0].top + (float)(v8 * (float)(int)(a3 - (v7 & 0xFFFFFFFC))));
      v22 = floorf(v19 + (float)((float)((float)(v9 * (float)(a3 / 4)) + *(float *)&v26[0].bottom) - a2[83]));
      if ( v18 )
      {
        v23 = *(DisplayObject **)(a1 + 256);
        v25 = v19;
        Width = Rect::getWidth(v26);
        DisplayObject::setPixelSnappedXY(
          v23,
          v20 + (float)(*(float *)&Width * 0.5),
          (float)(v22 + a2[83]) - (float)(v25 * 0.5));
      }
      DisplayObject::setXY((DisplayObject *)a2, floorf(v21), v22);
      Rect::~Rect(v26);
    }

    __int64 __fastcall SpellPage::getSpellSortIndex(__int64 a1, __int64 a2)
    {
      __int64 v3; // x0
      const char *v4; // x1
      __int64 v6; // [xsp+8h] [xbp-18h] BYREF
    
      v6 = a2;
      v3 = std::_Rb_tree<LogicSpellData const*,std::pair<LogicSpellData const* const,int>,std::_Select1st<std::pair<LogicSpellData const* const,int>>,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,int>>>::find(
             a1 + 312,
             &v6);
      if ( v3 != a1 + 320 )
        return *(unsigned int *)(v3 + 40);
      Debugger::warning((__siginfo *)"cant find idx", v4);
      return 0;
    }

    __int64 __fastcall SpellPage::opened(__int64 a1)
    {
      long double v1; // q8
      __int64 Instance; // x0
      __int64 Home; // x0
      char isPageOpened; // w20
      __int64 v6; // x0
      float v7; // s1
      float v8; // s0
      __int64 result; // x0
      long double v10; // q0
      __int64 DragHandler; // x0
      PvpMatchmakeNotificationMessage *v12; // x20
      __int64 v13; // x0
      int UnlockedCardsInLibrary; // w0
      const char *v15; // x1
      MovieClip *v16; // x20
      const String *v17; // x0
      char v18; // w20
      const String *String; // x0
      __int64 TextFieldByName; // x0
    
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      isPageOpened = LogicClientHome::isPageOpened(Home, 1);
      ScrollArea::getContentHeight(*(#1253 **)(a1 + 224));
      v6 = *(_QWORD *)(a1 + 224);
      v7 = *(float *)(v6 + 96) * 0.5;
      *(float *)&v1 = v8 - v7;
      *(float *)(a1 + 448) = v7;
      *(float *)(a1 + 452) = v8 - v7;
      if ( (isPageOpened & 1) != 0 )
      {
        result = ScrollArea::scrollTo((#1253 *)v6, 0.0, 0.0, 1.0, 0.0);
        *(_DWORD *)(a1 + 456) = 0;
        *(_BYTE *)(a1 + 460) = 0;
      }
      else
      {
        DragHandler = ScrollArea::getDragHandler((#1253 *)v6);
        (*(void (__fastcall **)(__int64, long double, long double, float))(*(_QWORD *)DragHandler + 280LL))(
          DragHandler,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          v1,
          1.0);
        *(_BYTE *)(*(_QWORD *)(a1 + 224) + 64LL) = 0;
        *(_DWORD *)(a1 + 456) = -1090519040;
        *(_BYTE *)(a1 + 460) = 1;
        v12 = (PvpMatchmakeNotificationMessage *)operator new(32);
        LogicPageOpenedCommand::LogicPageOpenedCommand((__int64)v12);
        LogicPageOpenedCommand::setPageID((__int64)v12, 1);
        v13 = GameMode::getInstance();
        result = GameMode::addCommand(v13, v12, 1);
      }
      *(_BYTE *)(a1 + 426) = 1;
      if ( *(_QWORD *)(a1 + 400) )
      {
        UnlockedCardsInLibrary = SpellPage::getUnlockedCardsInLibrary(v10);
        v16 = *(MovieClip **)(a1 + 400);
        if ( UnlockedCardsInLibrary <= 0 )
        {
          String = (const String *)StringTable::getString((#1308 *)"TID_SPELL_COLLECTION_EMPTY", v15);
          MovieClip::setText(v16, "collection_title", String);
          v18 = 0;
        }
        else
        {
          v17 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_COLLECTION", v15);
          MovieClip::setText(v16, "collection_title", v17);
          v18 = 1;
        }
        TextFieldByName = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 400), "cards_unlocked_title");
        if ( TextFieldByName )
          *(_BYTE *)(TextFieldByName + 8) = v18;
        result = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 400), "cards_unlocked_count");
        if ( result )
          *(_BYTE *)(result + 8) = v18;
      }
      return result;
    }

    __int64 SpellPage::getUnlockedCardsInLibrary()
    {
      __int64 Table; // x19
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x20
      __int64 v3; // x21
      __int64 v4; // x22
      const InitState *v5; // x23
      AcceptChallengeMessage *SelectedDeck; // x0
    
      Table = LogicDataTables::getTable(7);
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) < 1 )
        return 0;
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = (const InitState *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v4);
        if ( LogicClientHome::getSpellByData(Home, v5) )
        {
          SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
          v3 = !LogicSpellDeck::containsSpellData(SelectedDeck, v5) + (int)v3;
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (int)v4 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      return v3;
    }

    void __fastcall SpellPage::setSelectedSpell(ShopItem *this, const InitState *a2, int a3)
    {
      _QWORD *v5; // x20
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x22
      GameInputField *SpellCollection; // x0
      int SpellIdxByData; // w25
      TextField *SpellByData; // x22
      __int64 Listener; // x0
      __int64 v12; // x23
      __int64 v13; // x24
      int8x16_t v14; // q0
      const char *v15; // x2
      LogicPageOpenedCommand *isShowNewIcon; // x0
      PvpMatchmakeNotificationMessage *v17; // x23
      __int64 SpellData; // x0
      __int64 v19; // x0
      LogicPageOpenedCommand *v20; // x0
      LogicClientAvatar *MainHUD; // x21
      float v22; // s0
      float v23; // s8
      Stage *BottomHUDHeight; // x0
      float v25; // s0
      float v26; // s9
      int v27; // s10
      float v28; // s0
      float v29; // s0
      __int64 DragHandler; // x0
      float v31; // s8
      #1253 *v32; // x20
      float v33; // s0
      float v34; // s9
      float v35; // s0
      float v36; // [xsp+0h] [xbp-80h]
      _BYTE v37[12]; // [xsp+10h] [xbp-70h] BYREF
      float v38; // [xsp+1Ch] [xbp-64h]
    
      if ( *((const InitState **)this + 27) != a2 )
      {
        *((_QWORD *)this + 27) = a2;
        v5 = (_QWORD *)((char *)this + 360);
        if ( *((_QWORD *)this + 45) )
        {
          LogicArrayList<SpellItem *>::add((__int64)this + 368, (__int64 *)this + 45);
          *(_BYTE *)(*((_QWORD *)this + 45) + 8LL) = 0;
          *((_QWORD *)this + 45) = 0;
          a2 = (const InitState *)*((_QWORD *)this + 27);
        }
        if ( a2 )
        {
          Instance = GameMode::getInstance();
          Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
          SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
          SpellIdxByData = LogicSpellCollection::getSpellIdxByData(SpellCollection, *((const InitState **)this + 27));
          SpellByData = (TextField *)LogicClientHome::getSpellByData(Home, *((_QWORD *)this + 27));
          Listener = LogicSpell::getListener(SpellByData);
          if ( Listener )
            v12 = Listener - 264;
          else
            v12 = 0;
          SpellItem::updateNewTagVisibility(v12);
          v13 = operator new(464);
          SpellItem::SpellItem(v13, SpellByData, (SpellIdxByData >> 31) + 6, 1);
          *((_QWORD *)this + 45) = v13;
          v14 = *(int8x16_t *)(v12 + 16);
          *(_QWORD *)(v13 + 16) = v14.i64[0];
          *(_QWORD *)(v13 + 24) = vextq_s8(v14, v14, 8u).u64[0];
          *(_DWORD *)(v13 + 32) = *(_DWORD *)(v12 + 32);
          *(_DWORD *)(v13 + 36) = *(_DWORD *)(v12 + 36);
          SpellItem::setItemListener(v13, (__int64)this + 200, v15);
          GameButton::wobble(*((DeviceLinkCodeReceivedScreen **)this + 45));
          ScrollArea::addContent(*((#1253 **)this + 28), *((#1249 **)this + 45));
          if ( (int)LogicSpell::getShowNewCount(SpellByData) > 0
            || *((_BYTE *)SpellByData + 32)
            || (isShowNewIcon = (LogicPageOpenedCommand *)LogicSpell::isShowNewIcon(SpellByData), (_DWORD)isShowNewIcon) )
          {
            v17 = (PvpMatchmakeNotificationMessage *)operator new(48);
            LogicSpellPageOpenedCommand::LogicSpellPageOpenedCommand((__int64)v17);
            SpellData = LogicSpell::getSpellData(SpellByData);
            LogicSpellPageOpenedCommand::addSpell((__int64)v17, SpellData);
            v19 = GameMode::getInstance();
            isShowNewIcon = (LogicPageOpenedCommand *)GameMode::addCommand(v19, v17, 1);
          }
          if ( a3 )
          {
            v20 = (LogicPageOpenedCommand *)HomeScreen::getInstance(isShowNewIcon);
            MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(v20);
            MainHUD::getBottomHUDHeight(MainHUD);
            v23 = v22;
            BottomHUDHeight = (Stage *)MainHUD::getBottomHUDHeight(MainHUD);
            v26 = v25;
            v27 = *(_DWORD *)(Stage::getInstance(BottomHUDHeight) + 432LL);
            Rect::Rect((Rect *)v37);
            DisplayObject::getGlobalBounds(*v5, v37);
            if ( *(float *)&v37[4] >= (float)(v26 + 1.0) )
            {
              v29 = (float)v27 - (float)(v23 + 1.0);
              if ( v38 <= v29 )
                v28 = 0.0;
              else
                v28 = v29 - v38;
            }
            else
            {
              v28 = (float)(v26 + 1.0) - *(float *)&v37[4];
            }
            v36 = v28;
            if ( fabsf(v28) > 0.1 )
            {
              DragHandler = ScrollArea::getDragHandler(*((#1253 **)this + 28));
              v31 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)DragHandler + 304LL))(DragHandler)));
              v32 = (#1253 *)*((_QWORD *)this + 28);
              ScrollArea::getXOffset(v32);
              v34 = v33;
              ScrollArea::getScale(*((#1253 **)this + 28));
              ScrollArea::scrollTo(v32, v34, v31 - v36, v35, 0.5);
            }
            Rect::~Rect((Rect *)v37);
          }
        }
      }
    }

    void __fastcall SpellPage::stateChanged(__int64 a1, int a2, int a3)
    {
      PageItem::stateChanged((BadgePopup *)a1);
      if ( a2 != a3 )
      {
        if ( a3 == 1 )
        {
          SpellPage::setSelectedSpell((ShopItem *)a1, 0, 1);
          *(_BYTE *)(a1 + 425) = 0;
          *(_DWORD *)(a1 + 428) = 1065353216;
        }
        else if ( a3 == 2 )
        {
          SpellPage::opened(a1);
        }
      }
    }

    __int64 __fastcall SpellPage::isBlockingPageScroll(#1253 **this)
    {
      if ( *((_BYTE *)this + 208) )
        return 1;
      else
        return ScrollArea::isPanning(*(this + 28));
    }

    __int64 __fastcall SpellPage::getNotificationCount(ShopItem *this)
    {
      __int64 SpellCount; // x0
      const char *v2; // x2
      int v3; // w20
      __int64 v4; // x19
      int v5; // w21
    
      SpellCount = SpellPage::getSpellCount();
      v3 = SpellCount;
      v4 = 0;
      if ( (int)SpellCount >= 1 )
      {
        v5 = 0;
        do
        {
          SpellCount = SpellPage::getSpellItem(SpellCount, v5, v2);
          if ( SpellCount )
          {
            SpellCount = LogicSpell::isShowNewIcon(*(TextField **)(SpellCount + 304));
            v4 = (unsigned int)(SpellCount + v4);
          }
          ++v5;
        }
        while ( v3 != v5 );
      }
      return v4;
    }

    __int64 __fastcall SpellPage::createIcon(ShopItem *this, __int64 a2, const char *a3)
    {
      return ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_menu_cards", a3);
    }

    void *__fastcall SpellPage::getLocalizedName(ShopItem *this, const char *a2)
    {
      return StringTable::getString((#1308 *)"TID_TAB_SPELLS", a2);
    }

    __int64 __fastcall SpellPage::touchReleased(SpellPage *a1, __int64 a2)
    {
      SpellPage::backgroundTouch(a1);
      return Sprite::touchReleased(a1, a2);
    }

    AllianceStreamMessage *__fastcall SpellPage::backgroundTouch(__int64 a1)
    {
      AllianceStreamMessage *v2; // x0
      AllianceStreamMessage *result; // x0
    
      *(_BYTE *)(a1 + 425) = 0;
      SpellPage::setSelectedSpell((ShopItem *)a1, 0, 1);
      result = GameMain::getInstance(v2);
      if ( *((_BYTE *)result + 356) )
      {
        *(_DWORD *)(a1 + 456) = 0;
        *(_BYTE *)(a1 + 460) = 1;
      }
      return result;
    }

    void __fastcall SpellPage::spellItemPressed(__int64 a1, __int64 a2, const char *a3)
    {
      const InitState *SpellData; // x20
      tween::Bounce *PlayerAvatar; // x0
      const DonateItem *Arena; // x0
      _BOOL8 isUnlockedInArena; // x0
      LogicSpell *v9; // x21
      const char *v10; // x2
      SpellInfoPopup *v11; // x20
      BadgePopup *v12; // x0
      __int64 v13; // x0
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x20
      GameInputField *SpellCollection; // x22
      AcceptChallengeMessage *SelectedDeck; // x23
      int SpellIdxByData; // w22
      const InitState *v19; // x0
      const char *v20; // x1
      int v21; // w24
      PvpMatchmakeNotificationMessage *v22; // x23
      __int64 v23; // x0
      TextField *SpellByData; // x0
      __int64 Listener; // x0
      _DWORD *v26; // x20
      Stage *v27; // x21
      const char *v28; // x1
      void *String; // x22
      #1308 *UnlockArena; // x0
      const AreaEffectObject *v31; // x1
      #1308 *LocalizedName; // x0
      __int64 Rarity; // x0
      __int64 TID; // x0
      char *v35; // x0
      long double v36; // q0
      long double v37; // q0
      String v38; // [xsp+0h] [xbp-90h] BYREF
      String v39; // [xsp+18h] [xbp-78h] BYREF
      String v40; // [xsp+30h] [xbp-60h] BYREF
      String v41; // [xsp+48h] [xbp-48h] BYREF
    
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", a3);
      SpellData = (const InitState *)LogicSpell::getSpellData(*(TextField **)(a2 + 304));
      if ( *(_BYTE *)(a1 + 425) && *(_DWORD *)(a2 + 384) != 4 )
      {
        Instance = GameMode::getInstance();
        Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
        SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
        SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
        SpellIdxByData = LogicSpellCollection::getSpellIdxByData(SpellCollection, *(const InitState **)(a1 + 216));
        v19 = (const InitState *)LogicSpell::getSpellData(*(TextField **)(a2 + 304));
        v21 = LogicSpellDeck::getSpellIdxByData(SelectedDeck, v19);
        if ( (v21 | SpellIdxByData) < 0 )
        {
          v35 = "cannot swap";
        }
        else
        {
          v22 = (PvpMatchmakeNotificationMessage *)operator new(40);
          LogicSwapSpellsCommand::LogicSwapSpellsCommand((__int64)v22);
          LogicSwapSpellsCommand::setSpells((__int64)v22, SpellIdxByData, 0, v21, 1);
          v23 = GameMode::getInstance();
          if ( (unsigned int)GameMode::addCommand(v23, v22, 1) )
          {
            *(_DWORD *)(a2 + 296) = 1008981770;
            SpellItem::savePosition(a2);
            SpellByData = (TextField *)LogicClientHome::getSpellByData(Home, *(_QWORD *)(a1 + 216));
            Listener = LogicSpell::getListener(SpellByData);
            if ( Listener )
              v26 = (_DWORD *)(Listener - 264);
            else
              v26 = 0;
            v26[74] = 1036831949;
            v36 = DisplayObject::getX(*(_QWORD *)(a1 + 360));
            v26[70] = LODWORD(v36);
            v37 = DisplayObject::getY(*(_QWORD *)(a1 + 360));
            v26[71] = LODWORD(v37);
            goto LABEL_19;
          }
          v35 = "swap spell command failed!";
        }
        Debugger::warning((__siginfo *)v35, v20);
    LABEL_19:
        *(_BYTE *)(a1 + 425) = 0;
    LABEL_20:
        SpellPage::setSelectedSpell((ShopItem *)a1, 0, 1);
        return;
      }
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      if ( *(_DWORD *)(a2 + 384) != 4 )
      {
        if ( *(const InitState **)(a1 + 216) != SpellData )
        {
          SpellPage::setSelectedSpell((ShopItem *)a1, SpellData, 1);
          return;
        }
        goto LABEL_20;
      }
      Arena = (const DonateItem *)LogicClientAvatar::getArena(PlayerAvatar);
      isUnlockedInArena = LogicSpellData::isUnlockedInArena(SpellData, Arena);
      if ( isUnlockedInArena )
      {
        v9 = (LogicSpell *)operator new(48);
        LogicSpell::LogicSpell(v9);
        LogicSpell::setSpellData(v9, (__int64)SpellData);
        *((_DWORD *)v9 + 2) = 0;
        LogicSpell::setMaterialCount(v9, 1, v10);
        v11 = (SpellInfoPopup *)operator new(288);
        SpellInfoPopup::SpellInfoPopup(v11, v9, 0, 0);
        v13 = GUI::getInstance(v12);
        GUI::showPopup(v13, v11, 0, 0, 0);
        operator delete(v9);
      }
      else
      {
        v27 = (Stage *)GUI::getInstance((BadgePopup *)isUnlockedInArena);
        String = StringTable::getString((#1308 *)"TID_LOCKED_CARD_PRESSED", v28);
        String::String(&v39, "<ARENA_NAME>");
        UnlockArena = (#1308 *)LogicSpellData::getUnlockArena(SpellData);
        LocalizedName = StringTable::getLocalizedName(UnlockArena, v31);
        String::replace(&v40, String, &v39, LocalizedName);
        String::String(&v38, "<RARITY>");
        Rarity = LogicSpellData::getRarity(SpellData);
        TID = LogicData::getTID(Rarity);
        String::replace(&v41, &v40, &v38, TID);
        GUI::showCenteredFloaterText(v27, (__int64)&v41, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        String::~String();
        String::~String();
        String::~String();
        String::~String();
      }
      SpellPage::setSelectedSpell((ShopItem *)a1, 0, 1);
    }

    __int64 __fastcall SpellPage::spellItemDragged(__int64 this, const InboxItem *a2)
    {
      _QWORD *v2; // x19
    
      v2 = (_QWORD *)this;
      if ( *(_BYTE *)(this + 425) )
      {
        this = *(_QWORD *)(this + 432);
        if ( this )
        {
          SpellItem::setHoveringHighlight(this, 0);
          this = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v2 + 424LL))(v2, v2[54]);
          v2[54] = 0;
        }
      }
      return this;
    }

    __int64 __fastcall SpellPage::newCardBought(SpellPage *a1)
    {
      SpellPage::collectionSorted(a1);
      return SpellPage::deckChanged(a1);
    }

    DeviceLinkCodeReceivedScreen *__fastcall SpellPage::collectionSorted(SpellPage *a1)
    {
      DeviceLinkCodeReceivedScreen *result; // x0
      const char *v2; // x2
      int v3; // w19
      int v4; // w8
    
      SpellPage::collectionChanged(a1);
      result = (DeviceLinkCodeReceivedScreen *)SpellPage::getSpellCount();
      v3 = (_DWORD)result - 1;
      if ( (int)result >= 1 )
      {
        do
        {
          result = (DeviceLinkCodeReceivedScreen *)SpellPage::getSpellItem((__int64)result, v3, v2);
          if ( result )
            result = (DeviceLinkCodeReceivedScreen *)GameButton::wobble(result);
          v4 = v3-- + 1;
        }
        while ( v4 > 1 );
      }
      return result;
    }

    void __fastcall SpellPage::createSortOrder(_QWORD *a1)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x22
      AcceptChallengeMessage *SelectedDeck; // x23
      __int64 Table; // x24
      _QWORD *v6; // x20
      long double v7; // q0
      __int64 v8; // x27
      __int64 v9; // x25
      const char *v10; // x26
      _QWORD *v11; // x19
      InitState *v12; // x28
      int SpellIdxByData; // w0
      int UnlockedCardsInLibrary; // w0
      bool v15; // w8
      __int64 *v16; // x21
      void *v17; // x22
      __int64 v18; // x2
      signed __int64 i; // x8
      void *v20; // x21
      __int64 *v21; // x23
      __int64 v22; // x2
      signed __int64 j; // x8
      _QWORD *v24; // x22
      unsigned __int64 v25; // x8
      __int64 v26; // x23
      __int64 v27; // x24
      __int64 v28; // [xsp+58h] [xbp-A8h] BYREF
      InitState *v29; // [xsp+60h] [xbp-A0h] BYREF
      void *v30; // [xsp+68h] [xbp-98h] BYREF
      char *v31; // [xsp+70h] [xbp-90h]
      __int64 v32; // [xsp+78h] [xbp-88h]
      void *v33; // [xsp+80h] [xbp-80h] BYREF
      char *v34; // [xsp+88h] [xbp-78h]
      __int64 v35; // [xsp+90h] [xbp-70h]
      _QWORD *v36; // [xsp+98h] [xbp-68h] BYREF
      __int64 v37; // [xsp+A0h] [xbp-60h]
      __int64 v38; // [xsp+A8h] [xbp-58h]
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
      Table = LogicDataTables::getTable(7);
      v6 = a1 + 39;
      std::_Rb_tree<LogicSpellData const*,std::pair<LogicSpellData const* const,int>,std::_Select1st<std::pair<LogicSpellData const* const,int>>,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,int>>>::_M_erase(
        a1 + 39,
        a1[41],
        v7);
      a1[41] = 0;
      a1[42] = a1 + 40;
      a1[43] = a1 + 40;
      a1[44] = 0;
      v37 = 0;
      v38 = 0;
      v36 = 0;
      std::vector<LogicSpellData const*>::resize(&v36, 8, 0);
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v34 = 0;
      v35 = 0;
      v32 = 0;
      v33 = 0;
      v30 = 0;
      v31 = 0;
      v11 = v36;
      while ( (int)v8 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) )
      {
        v12 = (InitState *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v8);
        v29 = v12;
        if ( LogicClientHome::getSpellByData(Home, v12) )
        {
          v10 = (const char *)(unsigned int)((_DWORD)v10 + 1);
          v9 = (unsigned int)(v9 + 1);
        }
        else
        {
          v9 = ((unsigned int)LogicSpellData::isNotInUse(v12) ^ 1) + (unsigned int)v9;
        }
        SpellIdxByData = LogicSpellDeck::getSpellIdxByData(SelectedDeck, v12);
        if ( SpellIdxByData < 0 )
        {
          if ( LogicClientHome::getSpellByData(Home, v12) )
          {
            std::vector<LogicSpellData const*>::push_back((__int64)&v33, &v29);
          }
          else if ( (LogicSpellData::isNotInUse(v12) & 1) == 0 )
          {
            std::vector<LogicSpellData const*>::push_back((__int64)&v30, &v29);
          }
        }
        else
        {
          v11[SpellIdxByData] = v12;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      UnlockedCardsInLibrary = SpellPage::getUnlockedCardsInLibrary();
      v15 = (int)v10 < (int)v9 && UnlockedCardsInLibrary > 0;
      *(_BYTE *)(a1[32] + 8LL) = v15;
      SpellPage::setCardUnlockCount((__int64)a1, v10, v9);
      v17 = v33;
      v16 = (__int64 *)v34;
      if ( v33 != v34 )
      {
        v18 = 0;
        for ( i = (v34 - (_BYTE *)v33) >> 3; i != 1; i >>= 1 )
          v18 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
          (__int64)v33,
          v34,
          v18,
          (__int64 (__fastcall *)(__int64, __int64))cardSort2);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
          (__int64)v17,
          v16,
          (__int64 (__fastcall *)(__int64, _QWORD))cardSort2);
      }
      v20 = v30;
      v21 = (__int64 *)v31;
      if ( v30 != v31 )
      {
        v22 = 0;
        for ( j = (v31 - (_BYTE *)v30) >> 3; j != 1; j >>= 1 )
          v22 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
          (__int64)v30,
          v31,
          v22,
          (__int64 (__fastcall *)(__int64, __int64))cardSort2);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
          (__int64)v20,
          v21,
          (__int64 (__fastcall *)(__int64, _QWORD))cardSort2);
      }
      std::vector<LogicSpellData const*>::_M_range_insert<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>>(
        &v33,
        v17,
        v11,
        v37);
      std::vector<LogicSpellData const*>::_M_range_insert<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>>(
        &v33,
        v34,
        v20,
        v21);
      v24 = v33;
      v25 = (unsigned __int64)(v34 - (_BYTE *)v33) >> 3;
      if ( (int)v25 >= 1 )
      {
        v26 = 0;
        v27 = (int)v25;
        do
        {
          v28 = v24[v26];
          if ( v28 )
            *(_DWORD *)std::map<LogicSpellData const*,int>::operator[](v6, &v28) = v26;
          ++v26;
        }
        while ( v26 < v27 );
      }
      if ( v20 )
        operator delete(v20);
      if ( v24 )
        operator delete(v24);
      if ( v11 )
        operator delete(v11);
    }

    __int64 __fastcall SpellPage::sortCollectionItems(__int64 a1)
    {
      __int64 v2; // x20
      __int64 Instance; // x0
      __int64 Home; // x21
      __int64 v5; // x24
      __int64 v6; // x0
      __int64 v7; // x25
      LogicSpell *v8; // x26
      const char *v9; // x2
      int SpellSortIndex; // w0
      long double v11; // q0
      float v12; // s0
      __int128 v13; // q1
      __int64 SpellCount; // x0
      const char *v15; // x2
      int v16; // w20
      int v17; // w21
      __int64 v18; // x22
      __int64 SpellData; // x0
      int v20; // w0
      long double v21; // q0
      long double v22; // q0
      int i; // w21
      #1249 *v24; // x1
      float v25; // s8
      __int64 v26; // x20
      ScrollArea *v27; // x0
      __int128 v29; // [xsp+0h] [xbp-80h]
      __int64 v30; // [xsp+18h] [xbp-68h] BYREF
    
      ScrollArea::removeAllContent(*(#1253 **)(a1 + 224));
      ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 224), *(#1249 **)(a1 + 384));
      ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 224), *(#1249 **)(a1 + 392));
      ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 224), *(#1249 **)(a1 + 256));
      v2 = *(_QWORD *)(a1 + 336);
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      if ( v2 == a1 + 320 )
      {
        LODWORD(v29) = 0;
      }
      else
      {
        v29 = 0u;
        do
        {
          v5 = *(_QWORD *)(v2 + 32);
          v30 = v5;
          v6 = std::_Rb_tree<LogicSpellData const*,std::pair<LogicSpellData const* const,SpellItem *>,std::_Select1st<std::pair<LogicSpellData const* const,SpellItem *>>,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,SpellItem *>>>::find(
                 a1 + 264,
                 &v30);
          if ( v6 == a1 + 272 )
          {
            v8 = (LogicSpell *)operator new(48);
            LogicSpell::LogicSpell(v8);
            LogicSpell::setSpellData(v8, v5);
            v7 = operator new(464);
            SpellItem::SpellItem(v7, v8, 4, 0);
            SpellItem::setItemListener(v7, a1 + 200, v9);
            *(_QWORD *)std::map<LogicSpellData const*,SpellItem *>::operator[](a1 + 264, &v30) = v7;
          }
          else
          {
            v7 = *(_QWORD *)(v6 + 40);
          }
          SpellSortIndex = SpellPage::getSpellSortIndex(a1, v5);
          SpellPage::setCollectionItemPosition(a1, (float *)v7, SpellSortIndex);
          ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 224), (#1249 *)v7);
          *(_BYTE *)(v7 + 8) = LogicClientHome::getSpellByData(Home, v5) == 0;
          v11 = DisplayObject::getY(v7);
          v12 = *(float *)&v11 + *(float *)(v7 + 340);
          v13 = v29;
          if ( v12 > *(float *)&v29 )
            *(float *)&v13 = v12;
          v29 = v13;
          v2 = std::_Rb_tree_increment(v2);
        }
        while ( v2 != a1 + 320 );
      }
      SpellCount = SpellPage::getSpellCount();
      v16 = SpellCount;
      if ( (int)SpellCount > 0 )
      {
        v17 = 0;
        do
        {
          SpellCount = SpellPage::getSpellItem(SpellCount, v17, v15);
          v18 = SpellCount;
          if ( SpellCount )
          {
            SpellData = LogicSpell::getSpellData(*(TextField **)(SpellCount + 304));
            v20 = SpellPage::getSpellSortIndex(a1, SpellData);
            SpellPage::setCollectionItemPosition(a1, (float *)v18, v20);
            if ( *(float *)(v18 + 296) <= 0.0 )
            {
              SpellCount = ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 224), (#1249 *)v18);
            }
            else
            {
              v21 = DisplayObject::getX(v18);
              *(_DWORD *)(v18 + 288) = LODWORD(v21);
              v22 = DisplayObject::getY(v18);
              *(_DWORD *)(v18 + 292) = LODWORD(v22);
            }
          }
          ++v17;
        }
        while ( v16 != v17 );
        if ( v16 > 0 )
        {
          for ( i = 0; i != v16; ++i )
          {
            SpellCount = SpellPage::getSpellItem(SpellCount, i, v15);
            if ( SpellCount && *(float *)(SpellCount + 296) > 0.0 )
              SpellCount = ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 224), (#1249 *)SpellCount);
          }
        }
      }
      v24 = *(#1249 **)(a1 + 360);
      if ( v24 )
        ScrollArea::addContentDontUpdateBounds(*(#1253 **)(a1 + 224), v24);
      v25 = (float)(*(float *)&v29 + (float)(*(float *)(a1 + 420) * 0.5)) + 110.0;
      if ( v25 <= 0.0 )
        return ScrollArea::updateBounds(*(ScrollArea **)(a1 + 224));
      v26 = operator new(16);
      Rect::Rect((Rect *)v26);
      *(_QWORD *)v26 = 0;
      v27 = *(ScrollArea **)(a1 + 224);
      *(_DWORD *)(v26 + 8) = *((_DWORD *)v27 + 23);
      *(float *)(v26 + 12) = v25;
      return ScrollArea::setForcedContentBounds(v27, (Rect *)v26);
    }

    __int64 __fastcall SpellPage::spellPlaceChanged(__int64 this, const TextField *a2, int a3)
    {
      #1253 *v3; // x19
      float v4; // s0
    
      if ( a3 )
      {
        v3 = *(#1253 **)(this + 224);
        ScrollArea::getScale(v3);
        return ScrollArea::scrollTo(v3, 0.0, 0.0, v4, 1.0);
      }
      return this;
    }

    __int64 __fastcall SpellPage::showFusionEffect(ShopItem *this, const TextField *a2)
    {
      __int64 Listener; // x0
      _BYTE *v5; // x0
      __int64 result; // x0
    
      Listener = LogicSpell::getListener(a2);
      if ( Listener )
      {
        v5 = (_BYTE *)(Listener - 264);
        if ( v5 )
          SpellItem::showFuseEffect(v5);
      }
      result = *((_QWORD *)this + 45);
      if ( result )
      {
        if ( *(const TextField **)(result + 304) == a2 )
          return SpellItem::showFuseEffect((_BYTE *)result);
      }
      return result;
    }

    __int64 __fastcall SpellPage::gotoSwapMode(ShopItem *this, const char *a2)
    {
      if ( *((_BYTE *)this + 425) )
        return Debugger::warning((__siginfo *)"SpellPage::goToSwapMode() already in swap mode", a2);
      *((_BYTE *)this + 425) = 1;
      return SpellItem::setDraggingEnabled(*((_QWORD *)this + 45), 1);
    }

    __int64 __fastcall SpellPage::getSpellWithUpgradeAvailable(ShopItem *this)
    {
      __int64 SpellCount; // x0
      const char *v2; // x2
      int v3; // w19
      int v4; // w20
      __int64 v5; // x21
    
      SpellCount = SpellPage::getSpellCount();
      v3 = SpellCount;
      if ( (int)SpellCount < 1 )
        return 0;
      v4 = 0;
      while ( 1 )
      {
        SpellCount = SpellPage::getSpellItem(SpellCount, v4, v2);
        v5 = SpellCount;
        if ( SpellCount )
        {
          SpellCount = LogicSpell::canUpgrade(*(TextField **)(SpellCount + 304));
          if ( (SpellCount & 1) != 0 )
            break;
        }
        if ( ++v4 >= v3 )
          return 0;
      }
      return v5;
    }

    __int64 __fastcall SpellPage::getSelectedSpellItem(ShopItem *this)
    {
      return *((_QWORD *)this + 45);
    }

    __int64 __fastcall SpellPage::getGreenNotificationCount(ShopItem *this)
    {
      tween::Bounce *PlayerAvatar; // x19
      __int64 SpellCount; // x0
      const char *v3; // x2
      int v4; // w20
      __int64 v5; // x21
      int v6; // w22
      __int64 v7; // x23
      __int64 v8; // x23
      const #1355 *GoldData; // x0
    
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      SpellCount = SpellPage::getSpellCount();
      v4 = SpellCount;
      if ( (int)SpellCount < 1 )
        return 0;
      v5 = 0;
      v6 = 0;
      do
      {
        SpellCount = SpellPage::getSpellItem(SpellCount, v6, v3);
        v7 = SpellCount;
        if ( SpellCount )
        {
          SpellCount = LogicSpell::canUpgrade(*(TextField **)(SpellCount + 304));
          if ( (_DWORD)SpellCount )
          {
            SpellCount = LogicFuseSpellsCommand::getFuseCost(*(unsigned int **)(v7 + 304));
            v8 = SpellCount;
            if ( PlayerAvatar )
            {
              GoldData = (const #1355 *)LogicDataTables::getGoldData((LogicKickAllianceMemberCommand *)SpellCount);
              SpellCount = LogicClientAvatar::hasEnoughResources(PlayerAvatar, GoldData, v8, 0, 0, 0);
              v5 = (unsigned int)(SpellCount + v5);
            }
          }
        }
        ++v6;
      }
      while ( v4 != v6 );
      return v5;
    }

    __int64 SpellPage::hasGreenNotifications()
    {
      return 1;
    }

    __int64 SpellPage::isLongPressInfoPopupEnabled()
    {
      return 1;
    }

}; // end class SpellPage
