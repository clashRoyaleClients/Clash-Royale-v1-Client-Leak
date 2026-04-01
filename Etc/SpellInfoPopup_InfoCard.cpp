class SpellInfoPopup::InfoCard
{
public:

    // attributes: thunk
    __int64 __fastcall SpellInfoPopup::InfoCard::InfoCard(
            LogicFuseSpellsCommand *this,
            ScrollArea *a2,
            const TextField *a3,
            bool a4,
            bool a5,
            bool a6,
            int a7)
    {
      return __ZN14SpellInfoPopup8InfoCardC2EPS_PK10LogicSpellbbbi(this, a2, a3, a4, a5, a6, a7);
    }

    LogicFuseSpellsCommand *__fastcall SpellInfoPopup::InfoCard::InfoCard(
            LogicFuseSpellsCommand *this,
            ScrollArea *a2,
            const TextField *a3,
            char a4,
            char a5,
            char a6,
            int a7)
    {
      InitState *SpellData; // x0
      __int64 MovieClip; // x0
      __int64 TextFieldByName; // x26
      int v17; // w27
      InitState *v18; // x0
      __int64 v19; // x0
      const char *v20; // x1
      __int64 v21; // x26
      __int64 v22; // x0
      #1257 *v23; // x0
      __int64 MovieClipByName; // x0
      MovieClip *v25; // x26
      InitState *v26; // x0
      LogicDataTables *Rarity; // x27
      InitState *v28; // x0
      LogicDataTables *v29; // x27
      int v30; // w1
      __int64 v31; // x0
      const char *v32; // x1
      __int64 v33; // x26
      __int64 v34; // x0
      GameButton *v35; // x0
      GameButton *v36; // x26
      const char *v37; // x1
      const String *String; // x0
      GameButton *v39; // x26
      const char *v40; // x1
      const String *v41; // x0
      GameButton *v42; // x0
      __int64 v43; // x0
      String v45; // [xsp+0h] [xbp-80h] BYREF
      String v46; // [xsp+18h] [xbp-68h] BYREF
    
      String::String(&v46, "sc/ui.sc");
      String::String(&v45, "popup_card_info");
      PageItem::PageItem(this, &v46, &v45);
      String::~String(&v45);
      String::~String(&v46);
      *(_QWORD *)this = off_100462CB8;
      *((_QWORD *)this + 12) = &off_100462E70;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 29) = 0;
      Rect::Rect((Rect *)this + 34);
      Rect::Rect((Rect *)this + 36);
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_DWORD *)this + 78) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_DWORD *)this + 67) = 0;
      *(_QWORD *)((char *)this + 260) = 0;
      *(_QWORD *)((char *)this + 252) = 0;
      *(_QWORD *)((char *)this + 244) = 0;
      *(_QWORD *)((char *)this + 236) = 0;
      *((_DWORD *)this + 79) = -1;
      *((_BYTE *)this + 330) = 0;
      *((_QWORD *)this + 27) = a2;
      *((_BYTE *)this + 328) = a5;
      *((_BYTE *)this + 329) = a4;
      if ( a7 < 0
        || (SpellData = (InitState *)LogicSpell::getSpellData(a3), (int)LogicSpellData::getMaxLevelIndex(SpellData) < a7) )
      {
        a7 = *((_DWORD *)a3 + 2);
      }
      *((_DWORD *)this + 79) = a7;
      MovieClip = GUIContainer::getMovieClip(this);
      TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "TID_MAX_LVL_REACHED");
      if ( TextFieldByName )
      {
        v17 = *((_DWORD *)a3 + 2);
        v18 = (InitState *)LogicSpell::getSpellData(a3);
        *(_BYTE *)(TextFieldByName + 8) = v17 >= (int)LogicSpellData::getMaxLevelIndex(v18);
      }
      v19 = GUIContainer::getMovieClip(this);
      v21 = MovieClip::getTextFieldByName(v19, "card_placement");
      if ( !v21 )
        Debugger::error((__siginfo *)"failed initializing popup_card_info: cannot find card_size movieclip", v20);
      v22 = GUIContainer::getMovieClip(this);
      DisplayObject::getBounds(v21, v22, (char *)this + 272);
      v23 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = MovieClip::getMovieClipByName(v23, "card_attribute");
      v25 = (MovieClip *)MovieClipByName;
      if ( MovieClipByName )
      {
        v26 = (InitState *)LogicSpell::getSpellData(a3);
        Rarity = (LogicDataTables *)LogicSpellData::getRarity(v26);
        if ( Rarity == (LogicDataTables *)LogicDataTables::getRarityRare(Rarity) )
        {
          v30 = 1;
        }
        else
        {
          v28 = (InitState *)LogicSpell::getSpellData(a3);
          v29 = (LogicDataTables *)LogicSpellData::getRarity(v28);
          v30 = 2 * (v29 == (LogicDataTables *)LogicDataTables::getRarityEpic(v29));
        }
        MovieClip::gotoAndStopFrameIndex(v25, v30);
      }
      v31 = GUIContainer::getMovieClip(this);
      v33 = MovieClip::getTextFieldByName(v31, "stats_area");
      if ( !v33 )
        Debugger::error((__siginfo *)"failed initializing popup_card_info: cannot find stats_area textfield", v32);
      v34 = GUIContainer::getMovieClip(this);
      DisplayObject::getBounds(v33, v34, (char *)this + 288);
      *((_DWORD *)this + 78) = *(_DWORD *)(v33 + 56);
      v35 = (GameButton *)DropGUIContainer::addGameButton(this, "select", 1);
      *((_QWORD *)this + 30) = v35;
      GameButton::setClickSound(v35, 0);
      v36 = (GameButton *)*((_QWORD *)this + 30);
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SELECT", v37);
      GameButton::setText(v36, "button_text", String);
      *(_BYTE *)(*((_QWORD *)this + 30) + 8LL) = a6;
      v39 = (GameButton *)DropGUIContainer::addGameButton(this, "UpgradeButton", 1);
      *((_QWORD *)this + 31) = v39;
      v41 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_UPGRADE", v40);
      GameButton::setText(v39, "button_text", v41);
      *(_BYTE *)(*((_QWORD *)this + 31) + 8LL) = a4;
      v42 = (GameButton *)DropGUIContainer::addGameButton(this, "button_cancel", 1);
      *((_QWORD *)this + 32) = v42;
      GameButton::setClickSound(v42, 0);
      LogicArrayList<SpellItemAttribute>::ensureCapacity((char *)this + 224, 10);
      SpellInfoPopup::InfoCard::setSpell(this, a3);
      v43 = MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 26) + 96LL), "progress");
      if ( v43 )
        *(_BYTE *)(v43 + 8) = a6;
      return this;
    }

    void __fastcall SpellInfoPopup::InfoCard::setSpell(LogicFuseSpellsCommand *this, const TextField *a2)
    {
      vm_address_t *v4; // x0
      __int64 Instance; // x0
      #1146 *Home; // x24
      __int64 SpellData; // x0
      InitState *v8; // x21
      const char *v9; // x2
      #1308 *Rarity; // x22
      int v11; // w20
      InitState *v12; // x0
      _BOOL8 v13; // x0
      int v14; // w20
      __int64 SelectedDeck; // x0
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x0
      MovieClip *v18; // x24
      __int64 TextFieldByName; // x25
      __int64 StringObject; // x0
      int UpgradeExp; // w0
      __int64 v22; // x0
      __int64 v23; // x25
      void (__fastcall *v24)(__int64, float); // x27
      long double Width; // q0
      float v26; // s8
      float v27; // s0
      DisplayObject *v28; // x25
      float MidX; // s8
      long double MidY; // q0
      SpellItem *v31; // x25
      char canUpgrade; // w0
      __int64 v33; // x0
      const char *v34; // x1
      __int64 String; // x25
      int v36; // w1
      const AreaEffectObject *v37; // x1
      __int64 LocalizedName; // x0
      __int64 TextField; // x0
      __int64 v40; // x24
      void (__fastcall *v41)(__int64, _QWORD); // x25
      int v42; // w0
      InitState *v43; // x0
      const AreaEffectObject *v44; // x1
      #1271 *FuseCost; // x23
      __int64 v46; // x24
      TextField *v47; // x25
      const char *v48; // x4
      bool v49; // w3
      const String *v50; // x0
      #1308 *TypeTID; // x0
      const String *v52; // x1
      const String *v53; // x0
      __int64 v54; // x0
      __int64 v55; // x22
      __int64 v56; // x0
      __int64 v57; // x0
      __int64 v58; // x22
      __int64 v59; // x0
      __int64 v60; // x0
      #1271 *v61; // x22
      #1308 *InfoTID; // x0
      const String *v63; // x1
      const String *v64; // x0
      #1271 *v65; // x1
      String v66; // [xsp+8h] [xbp-D8h] BYREF
      String v67; // [xsp+20h] [xbp-C0h] BYREF
      String v68; // [xsp+38h] [xbp-A8h] BYREF
      String v69; // [xsp+50h] [xbp-90h] BYREF
      String v70; // [xsp+68h] [xbp-78h] BYREF
    
      v4 = (vm_address_t *)SpellInfoPopup::InfoCard::clearAttributes(this);
      Instance = GameMode::getInstance(v4);
      Home = (#1146 *)LogicGameMode::getHome(*(#1028 **)(Instance + 112));
      *((_QWORD *)this + 25) = a2;
      SpellData = LogicSpell::getSpellData(a2);
      *((_DWORD *)this + 77) = LogicClientHome::getSpellCount(Home, SpellData);
      v8 = (InitState *)LogicSpell::getSpellData(a2);
      Rarity = (#1308 *)LogicSpellData::getRarity(v8);
      v11 = *((_DWORD *)this + 79);
      if ( v11 < 0 )
      {
        v13 = 0;
      }
      else
      {
        v12 = (InitState *)LogicSpell::getSpellData(a2);
        v13 = v11 <= (int)LogicSpellData::getMaxLevelIndex(v12);
      }
      Debugger::doAssert((Debugger *)v13, (bool)"spell info card: level index out of bounds", v9);
      v14 = *((_DWORD *)this + 79);
      SelectedDeck = LogicClientHome::getSelectedDeck(Home);
      if ( (unsigned int)LogicSpellDeck::getSpellIdx(SelectedDeck, (__int64)a2) != -1 )
        *(_BYTE *)(*((_QWORD *)this + 30) + 8LL) = 0;
      MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "UpgradeExp");
      v18 = (MovieClip *)MovieClipByName;
      if ( MovieClipByName )
      {
        TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "TID_SPELL_UPGRADE_EXP");
        StringObject = TextField::getStringObject(TextFieldByName);
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, StringObject, 0);
        if ( (unsigned int)LogicSpell::canUpgrade(*((TextField **)this + 25)) )
        {
          *((_BYTE *)v18 + 8) = 1;
          UpgradeExp = LogicSpell::getUpgradeExp(*((InitState ***)this + 25));
          MovieClip::setNumberText(v18, "xp_gain", UpgradeExp, 0);
        }
        else
        {
          *((_BYTE *)v18 + 8) = 0;
        }
      }
      v22 = *((_QWORD *)this + 26);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      *((_QWORD *)this + 26) = 0;
      v23 = operator new(464);
      SpellItem::SpellItem(v23, a2, 8, 1);
      *((_QWORD *)this + 26) = v23;
      v24 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v23 + 40LL);
      Width = Rect::getWidth((char *)this + 272);
      v26 = *(float *)&Width;
      v27 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 88LL))(*((_QWORD *)this + 26));
      v24(v23, v26 / v27);
      v28 = (DisplayObject *)*((_QWORD *)this + 26);
      MidX = Rect::getMidX((char *)this + 272);
      MidY = Rect::getMidY((char *)this + 272);
      DisplayObject::setPixelSnappedXY(v28, MidX, *(float *)&MidY);
      v31 = (SpellItem *)*((_QWORD *)this + 26);
      canUpgrade = LogicSpell::canUpgrade(a2);
      SpellItem::updateFusionMode(v31, canUpgrade);
      v33 = GUIContainer::getMovieClip(this);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 160LL))(v33, *((_QWORD *)this + 26));
      String = StringTable::getString((#1308 *)"TID_SPELL_INFO_TITLE", v34);
      String::String(&v68, "<LEVEL>");
      String::valueOf(&v67, (String *)(unsigned int)(v14 + 1), v36);
      String::replace(&v69, String, &v68, &v67);
      String::String(&v66, "<SPELL>");
      LocalizedName = StringTable::getLocalizedName(v8, v37);
      String::replace(&v70, &v69, &v66, LocalizedName);
      String::~String(&v66);
      String::~String(&v69);
      String::~String(&v67);
      String::~String(&v68);
      TextField = GUIContainer::getTextField(this, "SpellName");
      MovieClipHelper::setTextAndScaleIfNecessary(TextField, &v70, 0);
      v40 = *((_QWORD *)this + 31);
      v41 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 152LL);
      v42 = LogicSpell::canUpgrade(*((TextField **)this + 25));
      v41(v40, v42 ^ 1u);
      v43 = (InitState *)LogicSpell::getSpellData(a2);
      if ( v14 >= (int)LogicSpellData::getMaxLevelIndex(v43) )
      {
        *(_BYTE *)(*((_QWORD *)this + 31) + 8LL) = 0;
      }
      else
      {
        FuseCost = (#1271 *)LogicFuseSpellsCommand::getFuseCost(*((unsigned int **)this + 25));
        v46 = MovieClip::getTextFieldByName(*(_QWORD *)(*((_QWORD *)this + 31) + 96LL), "price");
        v47 = (TextField *)MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 31) + 96LL), "icon");
        MovieClipHelper::setGoldPriceText((#1395 *)v46, FuseCost, *(_DWORD *)(v46 + 64), 0, v48);
        MovieClipHelper::moveIconNextToText((MovieClipHelper *)v46, v47, 0, 3.0, v49);
      }
      v50 = (const String *)StringTable::getLocalizedName(Rarity, v44);
      GUIContainer::setText(this, "SpellRarity", v50, 1);
      TypeTID = (#1308 *)LogicSpellData::getTypeTID(v8);
      v53 = (const String *)StringTable::getString(TypeTID, v52);
      GUIContainer::setText(this, "Spell", v53, 1);
      v54 = GUIContainer::getTextField(this, "TID_CARD_RARITY");
      v55 = v54;
      if ( v54 )
      {
        v56 = TextField::getStringObject(v54);
        MovieClipHelper::setTextAndScaleIfNecessary(v55, v56, 0);
      }
      v57 = GUIContainer::getTextField(this, "TID_CARD_TYPE");
      v58 = v57;
      if ( v57 )
      {
        v59 = TextField::getStringObject(v57);
        MovieClipHelper::setTextAndScaleIfNecessary(v58, v59, 0);
      }
      v60 = GUIContainer::getMovieClip(this);
      v61 = (#1271 *)MovieClip::getTextFieldByName(v60, "description_text");
      if ( v61 )
      {
        InfoTID = (#1308 *)LogicSpellData::getInfoTID(v8);
        if ( *(_DWORD *)InfoTID )
        {
          v64 = (const String *)StringTable::getString(InfoTID, v63);
          TextField::setText(v61, v64);
          TextField::setAlign(v61, 2);
          MovieClipHelper::setTextFieldVerticallyCentered(v61, v65);
        }
      }
      SpellInfoPopup::InfoCard::createAttributes(this, v14, *((_BYTE *)this + 328));
      String::~String(&v70);
    }

    void __fastcall SpellInfoPopup::InfoCard::~InfoCard(LogicFuseSpellsCommand *this)
    {
      __int64 v2; // x8
      char *v3; // x21
      _QWORD *v4; // x20
      __int64 v5; // x22
      __int64 v6; // x23
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
    
      *(_QWORD *)this = off_100462CB8;
      *((_QWORD *)this + 12) = &off_100462E70;
      v3 = (char *)this + 236;
      v2 = *((int *)this + 59);
      v4 = (_QWORD *)((char *)this + 224);
      if ( (int)v2 >= 1 )
      {
        v5 = v2 + 1;
        v6 = 80 * v2 - 80;
        do
        {
          v7 = *(_QWORD *)(*v4 + v6);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          --v5;
          v6 -= 80;
        }
        while ( v5 > 1 );
      }
      v8 = *((_QWORD *)this + 33);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *((_QWORD *)this + 33) = 0;
      v9 = *((_QWORD *)this + 26);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *((_BYTE *)this + 328) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_DWORD *)this + 78) = 0;
      *((_DWORD *)v3 + 8) = 0;
      *((_QWORD *)v3 + 2) = 0;
      *((_QWORD *)v3 + 3) = 0;
      *(_QWORD *)v3 = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_DWORD *)this + 79) = -1;
      *(_WORD *)((char *)this + 329) = 0;
      Rect::~Rect((Rect *)this + 36);
      Rect::~Rect((Rect *)this + 34);
      LogicArrayList<SpellItemAttribute>::~LogicArrayList(v4);
      PageItem::~PageItem(this);
    }

    // attributes: thunk
    void __fastcall SpellInfoPopup::InfoCard::~InfoCard(LogicFuseSpellsCommand *this)
    {
      __ZN14SpellInfoPopup8InfoCardD2Ev(this);
    }

    void __fastcall SpellInfoPopup::InfoCard::~InfoCard(LogicFuseSpellsCommand *this)
    {
      SpellInfoPopup::InfoCard::~InfoCard(this);
      operator delete(this);
    }

    _DWORD *__fastcall SpellInfoPopup::InfoCard::clearAttributes(_DWORD *this)
    {
      _DWORD *v1; // x19
      int v2; // w8
      __int64 v3; // x20
      __int64 i; // x21
    
      v1 = this;
      *(this + 76) = 0;
      v2 = *(this + 59);
      if ( v2 >= 1 )
      {
        v3 = 0;
        for ( i = 0; i < v2; ++i )
        {
          this = *(_DWORD **)(*((_QWORD *)v1 + 28) + v3);
          if ( this )
          {
            this = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)this + 8LL))(this);
            v2 = v1[59];
          }
          v3 += 80;
        }
      }
      v1[59] = 0;
      return this;
    }

    void __fastcall SpellInfoPopup::InfoCard::createAttributes(TextField **this, int a2, int a3)
    {
      TextField **v5; // x20
      InitState *SpellData; // x19
      int v7; // w28
      const String *v8; // x0
      const char *v9; // x1
      int Hitpoints; // w26
      const String *v11; // x0
      char v12; // w27
      char *v13; // x0
      const String *v14; // x0
      __int64 v15; // x23
      __int64 SummonCharacter; // x21
      const char *v17; // x1
      const String *String; // x0
      __int64 SpawnCharacter; // x24
      const char *v20; // x1
      String *v21; // x22
      const String *v22; // x0
      const char *v23; // x1
      const String *v24; // x22
      String *Healing; // x0
      #1308 *DamageType; // x25
      int v27; // w24
      __int64 v28; // x22
      LogicMath *Damage; // x26
      int AreaDamageRadius; // w24
      int ChargeRange; // w27
      __int64 Projectile; // x0
      __int64 v33; // x22
      __int64 SpawnAreaEffectObject; // x0
      const char *v35; // x1
      #1108 *v36; // x22
      int v37; // w22
      int VariableDamage2; // w0
      int v39; // w2
      LogicMath *v40; // x27
      int VariableDamage3; // w0
      int v42; // w2
      int v43; // w28
      int v44; // w0
      int v45; // w2
      int v46; // w0
      int v47; // w2
      int v48; // w24
      int v49; // w22
      int v50; // w8
      int v51; // w24
      int v52; // w26
      const char *v53; // x1
      __int64 v54; // x27
      #1308 *v55; // x0
      const String *v56; // x1
      __int64 v57; // x0
      const char *v58; // x1
      const String *v59; // x0
      const char *v60; // x1
      const String *v61; // x24
      String *SpawnLimit; // x0
      int HitSpeed; // w27
      int SpawnInterval; // w24
      int v65; // w22
      int v66; // w8
      int v67; // w24
      int SpawnCharacterLevelIndex; // w26
      const char *v69; // x1
      __int64 v70; // x28
      #1308 *TID; // x0
      const String *v72; // x1
      __int64 v73; // x0
      const char *v74; // x1
      const String *v75; // x0
      const char *v76; // x1
      const String *v77; // x0
      const char *v78; // x1
      const String *v79; // x24
      String *ReloadAfterHits; // x0
      const char *v81; // x1
      const char *v82; // x1
      const String *v83; // x24
      char *v84; // x0
      int v85; // w22
      const String *v86; // x0
      pthread_attr_t *Speed; // x0
      int v88; // w24
      _DWORD *ClientGlobals; // x0
      const char *v90; // x1
      int v91; // w22
      const char *v92; // x1
      const String *v93; // x26
      const char *v94; // x1
      const String *v95; // x24
      char *v96; // x0
      const String *v97; // x0
      const char *v98; // x1
      int Range; // w24
      LogicDataTables *v100; // x0
      const char *v101; // x1
      const String *v102; // x0
      const String *v103; // x24
      int DeployTime; // w0
      const char *v105; // x1
      const String *v106; // x0
      const char *v107; // x1
      int SummonNumber; // w21
      const String *v109; // x0
      #1108 *AreaEffectObject; // x21
      __int64 v111; // x24
      __int64 CustomFirstProjectile; // x26
      InitState *v113; // x8
      LogicFuseSpellsCommand *v114; // x19
      LogicMath *MultipleProjectiles; // x0
      int v116; // w2
      int v117; // w25
      int Radius; // w0
      int v119; // w2
      LogicMath *v120; // x0
      LogicMath *v121; // x20
      int v122; // w0
      int v123; // w2
      int hasReducedCrownTowerDamage; // w27
      int v125; // w28
      int v126; // w0
      __int64 v127; // x20
      int v128; // w23
      int v129; // w22
      int v130; // w28
      int v131; // w26
      const char *v132; // x1
      int v133; // w8
      int v134; // w9
      String *v135; // x25
      String *v136; // x26
      const String *v137; // x0
      LogicDataTables *v138; // x27
      HomeScreen *Globals; // x0
      String *ReducedCrownTowerDamage; // x0
      const String *v141; // x0
      const char *v142; // x1
      LogicDataTables *v143; // x26
      HomeScreen *v144; // x0
      String *v145; // x0
      String *v146; // x24
      int v147; // w22
      const char *v148; // x1
      int MaximumTargets; // w25
      const String *v150; // x0
      const String *v151; // x0
      const char *v152; // x1
      const String *v153; // x0
      __int64 v154; // x26
      String *v155; // x25
      int v156; // w24
      const char *v157; // x1
      int LifeDuration; // w25
      int v159; // w25
      const String *v160; // x0
      int v161; // w0
      const char *v162; // x1
      int v163; // w27
      char *v165; // x0
      const char *v167; // x1
      __int64 v168; // x0
      int v169; // w0
      const String *v170; // x0
      const String *v171; // x0
      const char *v172; // x1
      LogicDataTables *v173; // x22
      HomeScreen *v174; // x0
      String *v175; // x2
      int v176; // w3
      const String *v177; // x0
      const char *v178; // x1
      HomeScreen *v179; // x0
      const char *v180; // x1
      const String *v181; // x22
      int v182; // w0
      const char *v183; // x1
      BattleResultMessage *BuffType; // x21
      const String *v185; // x22
      int BuffTime; // w0
      const char *v187; // x1
      int BuffNumber; // w22
      const String *v189; // x0
      const String *v190; // x0
      LogicDataTables *SpawnCharacterCount; // x0
      __int64 v192; // x0
      __int64 v193; // x0
      __int64 v194; // x22
      __int64 v195; // x0
      const char *v196; // x1
      int v197; // w21
      __int64 v198; // x0
      int v199; // w23
      const char *v200; // x1
      __int64 v201; // x24
      #1308 *v202; // x0
      const String *v203; // x1
      __int64 v204; // x0
      __int64 v205; // x23
      #1308 *v206; // x0
      const String *v207; // x1
      __int64 v208; // x0
      __int64 PhysicalDamageType; // x0
      const char *v210; // x1
      const String *v211; // x21
      const AreaEffectObject *v212; // x1
      const String *LocalizedName; // x0
      AreaEffectObject *v214; // [xsp+10h] [xbp-130h]
      InitState *v215; // [xsp+18h] [xbp-128h]
      int v216; // [xsp+20h] [xbp-120h]
      int v217; // [xsp+20h] [xbp-120h]
      int v218; // [xsp+24h] [xbp-11Ch]
      int v219; // [xsp+28h] [xbp-118h]
      int v220; // [xsp+28h] [xbp-118h]
      unsigned int v221; // [xsp+2Ch] [xbp-114h]
      int v222; // [xsp+2Ch] [xbp-114h]
      int v223; // [xsp+2Ch] [xbp-114h]
      String v224; // [xsp+30h] [xbp-110h] BYREF
      String v225; // [xsp+48h] [xbp-F8h] BYREF
      String v226; // [xsp+60h] [xbp-E0h] BYREF
      String v227; // [xsp+78h] [xbp-C8h] BYREF
      String v228; // [xsp+90h] [xbp-B0h] BYREF
      String v229; // [xsp+A8h] [xbp-98h] BYREF
      String v230; // [xsp+C0h] [xbp-80h] BYREF
      String v231; // [xsp+D8h] [xbp-68h] BYREF
    
      v5 = this;
      SpellData = (InitState *)LogicSpell::getSpellData(*(this + 25));
      v215 = SpellData;
      v218 = a3 + a2;
      v7 = a2 - 1;
      do
      {
        v15 = (unsigned int)(v7 + 1);
        *((_DWORD *)v5 + 76) = 0;
        SummonCharacter = LogicSpellData::getSummonCharacter(SpellData);
        if ( (unsigned int)LogicSpellData::isMirror(SpellData) )
        {
          String = (const String *)StringTable::getString((#1308 *)"TID_MIRRORED_SPELL_LEVEL", v17);
          SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, String, (String *)(unsigned int)(v7 + 2), 17);
        }
        if ( !SummonCharacter )
        {
          DamageType = 0;
          v28 = 0xFFFFFFFFLL;
          goto LABEL_85;
        }
        Hitpoints = LogicCharacterData::getHitpoints((#1025 *)SummonCharacter, 0);
        if ( LogicCharacterData::getMorphResultCharacter(SummonCharacter) )
          SummonCharacter = LogicCharacterData::getMorphResultCharacter(SummonCharacter);
        SpawnCharacter = LogicCharacterData::getSpawnCharacter(SummonCharacter);
        v21 = (String *)LogicCharacterData::getHitpoints((#1025 *)SummonCharacter, v7 + 1);
        if ( Hitpoints )
        {
          v22 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_HEALTH", v20);
          SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v22, v21, 9);
        }
        if ( (int)LogicCharacterData::getHealing(SummonCharacter, (unsigned int)(v7 + 1)) >= 1 )
        {
          if ( (int)LogicCharacterData::getHitSpeed((#1025 *)SummonCharacter) >= 1 )
          {
            v24 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_HEAL", v23);
            Healing = (String *)LogicCharacterData::getHealing(SummonCharacter, (unsigned int)(v7 + 1));
            SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v24, Healing, 1);
          }
          DamageType = 0;
          v27 = -1;
          goto LABEL_57;
        }
        v214 = (AreaEffectObject *)SpawnCharacter;
        v216 = Hitpoints;
        DamageType = (#1308 *)LogicCharacterData::getDamageType((#1025 *)SummonCharacter);
        Damage = (LogicMath *)LogicCharacterData::getDamage(SummonCharacter, (unsigned int)(v7 + 1));
        AreaDamageRadius = LogicCharacterData::getAreaDamageRadius((#1025 *)SummonCharacter);
        ChargeRange = LogicCharacterData::getChargeRange((#1025 *)SummonCharacter);
        Projectile = LogicCharacterData::getProjectile((#1025 *)SummonCharacter, 0);
        v33 = Projectile;
        if ( Projectile )
        {
          Damage = (LogicMath *)LogicProjectileData::getDamage(Projectile, (unsigned int)(v7 + 1));
          AreaDamageRadius = LogicProjectileData::getRadius(v33);
          DamageType = (#1308 *)LogicProjectileData::getDamageType(v33);
          SpawnAreaEffectObject = LogicProjectileData::getSpawnAreaEffectObject(v33);
        }
        else
        {
          if ( ChargeRange > 0 )
            AreaDamageRadius = 0;
          SpawnAreaEffectObject = LogicCharacterData::getAreaEffectOnMorph((#1025 *)SummonCharacter);
        }
        v36 = (#1108 *)SpawnAreaEffectObject;
        if ( SpawnAreaEffectObject )
        {
          Damage = (LogicMath *)LogicAreaEffectObjectData::getDamage(SpawnAreaEffectObject, (unsigned int)(v7 + 1));
          DamageType = (#1308 *)LogicAreaEffectObjectData::getDamageType(v36);
          AreaDamageRadius = LogicAreaEffectObjectData::getRadius(v36);
        }
        if ( (unsigned int)Damage | v216 )
        {
          v37 = -1;
        }
        else
        {
          Damage = (LogicMath *)LogicCharacterData::getDeathDamage(SummonCharacter, (unsigned int)(v7 + 1));
          AreaDamageRadius = *(_DWORD *)(SummonCharacter + 444);
          v37 = AreaDamageRadius;
        }
        if ( (int)Damage >= 1 )
        {
          v219 = v7;
          v222 = v37;
          if ( (unsigned int)LogicCharacterData::hasVariableDamage(SummonCharacter) )
          {
            VariableDamage2 = LogicCharacterData::getVariableDamage2(SummonCharacter, (unsigned int)v15);
            v40 = (LogicMath *)LogicMath::min(Damage, VariableDamage2, v39);
            VariableDamage3 = LogicCharacterData::getVariableDamage3(SummonCharacter, (unsigned int)v15);
            v43 = LogicMath::min(v40, VariableDamage3, v42);
            v44 = LogicCharacterData::getVariableDamage2(SummonCharacter, (unsigned int)v15);
            Damage = (LogicMath *)LogicMath::max(Damage, v44, v45);
            v46 = LogicCharacterData::getVariableDamage3(SummonCharacter, (unsigned int)v15);
            LODWORD(Damage) = LogicMath::max(Damage, v46, v47);
          }
          else
          {
            v43 = (int)Damage;
          }
          HitSpeed = LogicCharacterData::getHitSpeed((#1025 *)SummonCharacter);
          if ( HitSpeed >= 1 && (LogicCharacterData::isKamikaze(SummonCharacter) & 1) == 0 )
            SpellInfoPopup::InfoCard::addDPSAttribute(
              (LogicFuseSpellsCommand *)v5,
              1000 * v43 / HitSpeed,
              1000 * (int)Damage / HitSpeed);
          SpellInfoPopup::InfoCard::addDamageAttribute((LogicFuseSpellsCommand *)v5, v43, (int)Damage, AreaDamageRadius > 0);
          if ( v214 )
          {
            SpawnInterval = LogicCharacterData::getSpawnInterval((#1025 *)SummonCharacter);
            v65 = LogicCharacterData::getSpawnNumber((#1025 *)SummonCharacter) - 1;
            v66 = LogicCharacterData::getSpawnPauseTime((#1025 *)SummonCharacter) + v65 * SpawnInterval;
            if ( v66 >= 8001 )
              v67 = 1000 * ((v66 + 500) / 1000);
            else
              v67 = v66;
            SpawnCharacterLevelIndex = LogicCharacterData::getSpawnCharacterLevelIndex(SummonCharacter);
            v70 = StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPAWN_CHARACTER_LEVEL", v69);
            String::String(&v230, "<CHARACTER>");
            TID = (#1308 *)LogicData::getTID(v214);
            v73 = StringTable::getString(TID, v72);
            String::replace(&v231, v70, &v230, v73);
            SpellInfoPopup::InfoCard::addAttribute(
              (LogicFuseSpellsCommand *)v5,
              &v231,
              (String *)(unsigned int)(SpawnCharacterLevelIndex + v219 + 2),
              12);
            String::~String(&v231);
            String::~String(&v230);
            v75 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPAWN_TIME", v74);
            SpellInfoPopup::InfoCard::addTimeAttribute((LogicFuseSpellsCommand *)v5, v75, v67);
          }
          if ( HitSpeed < 1 )
          {
            v7 = v219;
            v27 = v222;
            v15 = (unsigned int)v15;
            Hitpoints = v216;
          }
          else
          {
            v7 = v219;
            Hitpoints = v216;
            if ( (LogicCharacterData::isKamikaze(SummonCharacter) & 1) != 0 )
            {
              v15 = (unsigned int)v15;
            }
            else
            {
              v77 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_HIT_SPEED", v76);
              SpellInfoPopup::InfoCard::addHitSpeedAttribute((LogicFuseSpellsCommand *)v5, v77, HitSpeed);
              v15 = (unsigned int)v15;
              if ( (int)LogicCharacterData::getReloadAfterHits(SummonCharacter) >= 1 )
              {
                v79 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_AMMO", v78);
                ReloadAfterHits = (String *)LogicCharacterData::getReloadAfterHits(SummonCharacter);
                SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v79, ReloadAfterHits, 21);
              }
            }
            v27 = v222;
          }
    LABEL_57:
          if ( (unsigned int)LogicCharacterData::getTargetOnlyBuildings((#1025 *)SummonCharacter) )
          {
            v221 = v27;
            v83 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_TARGET", v81);
            v84 = "TID_TARGETS_BUILDINGS";
          }
          else
          {
            v85 = *(unsigned __int8 *)(SummonCharacter + 441);
            if ( *(_BYTE *)(SummonCharacter + 440) )
            {
              v221 = v27;
              v83 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_TARGET", v81);
              if ( v85 )
                v84 = "TID_TARGETS_AIR_AND_GROUND";
              else
                v84 = "TID_TARGETS_AIR";
            }
            else
            {
              v221 = v27;
              if ( !*(_BYTE *)(SummonCharacter + 441) )
              {
    LABEL_66:
                v12 = 0;
                goto LABEL_67;
              }
              v83 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_TARGET", v81);
              v84 = "TID_TARGETS_GROUND";
            }
          }
          v86 = (const String *)StringTable::getString((#1308 *)v84, v82);
          SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v83, v86, 0, 0, 15);
          goto LABEL_66;
        }
        if ( v214 )
        {
          v221 = v37;
          v48 = LogicCharacterData::getSpawnInterval((#1025 *)SummonCharacter);
          v49 = LogicCharacterData::getSpawnNumber((#1025 *)SummonCharacter) - 1;
          v50 = LogicCharacterData::getSpawnPauseTime((#1025 *)SummonCharacter) + v49 * v48;
          if ( v50 >= 8001 )
            v51 = 1000 * ((v50 + 500) / 1000);
          else
            v51 = v50;
          v52 = LogicCharacterData::getSpawnCharacterLevelIndex(SummonCharacter);
          v54 = StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPAWN_CHARACTER_LEVEL", v53);
          String::String(&v228, "<CHARACTER>");
          v55 = (#1308 *)LogicData::getTID(v214);
          v57 = StringTable::getString(v55, v56);
          String::replace(&v229, v54, &v228, v57);
          SpellInfoPopup::InfoCard::addAttribute(
            (LogicFuseSpellsCommand *)v5,
            &v229,
            (String *)(unsigned int)(v52 + v7 + 2),
            12);
          String::~String(&v229);
          String::~String(&v228);
          v59 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPAWN_TIME", v58);
          SpellInfoPopup::InfoCard::addTimeAttribute((LogicFuseSpellsCommand *)v5, v59, v51);
          if ( (int)LogicCharacterData::getSpawnLimit((#1025 *)SummonCharacter) >= 1 )
          {
            v61 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_MAX_SPAWN_COUNT", v60);
            SpawnLimit = (String *)LogicCharacterData::getSpawnLimit((#1025 *)SummonCharacter);
            SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v61, SpawnLimit, 19);
          }
          goto LABEL_9;
        }
        if ( !*(_BYTE *)(SummonCharacter + 500) )
        {
          v221 = v37;
    LABEL_9:
          v12 = 1;
          Hitpoints = v216;
          goto LABEL_67;
        }
        v221 = v37;
        v8 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_ELIXIR_TIME", v35);
        SpellInfoPopup::InfoCard::addTimeAttribute((LogicFuseSpellsCommand *)v5, v8, *(_DWORD *)(SummonCharacter + 508));
        Hitpoints = v216;
        if ( *(int *)(SummonCharacter + 496) >= 1 )
        {
          v11 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_MAX_ELIXIR", v9);
          SpellInfoPopup::InfoCard::addAttribute(
            (LogicFuseSpellsCommand *)v5,
            v11,
            (String *)*(unsigned int *)(SummonCharacter + 496),
            20);
        }
        v12 = 1;
    LABEL_67:
        if ( (int)LogicCharacterData::getSpeed((#1025 *)SummonCharacter) >= 1 )
        {
          Speed = (pthread_attr_t *)LogicCharacterData::getSpeed((#1025 *)SummonCharacter);
          v88 = (int)Speed;
          ClientGlobals = (_DWORD *)LogicDataTables::getClientGlobals(Speed);
          if ( v88 <= ClientGlobals[40] )
          {
            v95 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPEED", v90);
            v96 = "TID_SPEED_1";
          }
          else if ( v88 <= ClientGlobals[41] )
          {
            v95 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPEED", v90);
            v96 = "TID_SPEED_2";
          }
          else
          {
            if ( v88 > ClientGlobals[42] )
            {
              v217 = Hitpoints;
              v91 = ClientGlobals[43];
              v93 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPEED", v90);
              if ( v88 <= v91 )
                v13 = "TID_SPEED_4";
              else
                v13 = "TID_SPEED_5";
              v14 = (const String *)StringTable::getString((#1308 *)v13, v92);
              SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v93, v14, 0, 0, 10);
              Hitpoints = v217;
              goto LABEL_77;
            }
            v95 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPEED", v90);
            v96 = "TID_SPEED_3";
          }
          v97 = (const String *)StringTable::getString((#1308 *)v96, v94);
          SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v95, v97, 0, 0, 10);
        }
    LABEL_77:
        Range = LogicCharacterData::getRange((#1025 *)SummonCharacter);
        if ( !((Hitpoints == 0) | v12 & 1) )
        {
          v100 = (LogicDataTables *)LogicCharacterData::getRange((#1025 *)SummonCharacter);
          if ( (int)v100 <= *(_DWORD *)(LogicDataTables::getGlobals(v100) + 176LL) )
            Range = 0;
          v102 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_RANGE", v101);
          SpellInfoPopup::InfoCard::addDistanceAttribute((LogicFuseSpellsCommand *)v5, v102, Range);
        }
        v103 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DEPLOY_TIME", v98);
        DeployTime = LogicCharacterData::getDeployTime(SummonCharacter);
        SpellInfoPopup::InfoCard::addTimeAttribute((LogicFuseSpellsCommand *)v5, v103, DeployTime);
        v28 = v221;
        if ( *(int *)(SummonCharacter + 776) >= 1 )
        {
          v106 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_LIFETIME", v105);
          SpellInfoPopup::InfoCard::addTimeAttribute((LogicFuseSpellsCommand *)v5, v106, *(_DWORD *)(SummonCharacter + 776));
        }
        SummonNumber = LogicSpellData::getSummonNumber(SpellData);
        if ( SummonNumber > 1 )
        {
          v109 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_COUNT", v107);
          SpellInfoPopup::InfoCard::addCountAttribute((LogicFuseSpellsCommand *)v5, v109, SummonNumber);
        }
    LABEL_85:
        AreaEffectObject = (#1108 *)LogicSpellData::getAreaEffectObject(SpellData);
        v111 = LogicSpellData::getProjectile(SpellData);
        CustomFirstProjectile = LogicSpellData::getCustomFirstProjectile(SpellData);
        if ( v111 )
        {
          v113 = SpellData;
          v114 = (LogicFuseSpellsCommand *)v5;
          v220 = v7;
          MultipleProjectiles = (LogicMath *)LogicSpellData::getMultipleProjectiles(v113);
          v117 = LogicMath::max(MultipleProjectiles, 1, v116);
          Radius = LogicProjectileData::getRadius(v111);
          v120 = (LogicMath *)LogicMath::max((LogicMath *)v28, Radius, v119);
          v121 = v120;
          if ( CustomFirstProjectile )
          {
            v122 = LogicProjectileData::getRadius(CustomFirstProjectile);
            v223 = LogicMath::max(v121, v122, v123);
            hasReducedCrownTowerDamage = LogicProjectileData::hasReducedCrownTowerDamage(CustomFirstProjectile);
            v125 = LogicProjectileData::getRadius(CustomFirstProjectile);
            v126 = LogicProjectileData::getDamage(CustomFirstProjectile, v15);
            v127 = v15;
            if ( v125 <= 0 )
              v128 = v126;
            else
              v128 = 0;
            if ( v125 <= 0 )
              v129 = 0;
            else
              v129 = v126;
            --v117;
          }
          else
          {
            v223 = (int)v120;
            v127 = v15;
            v128 = 0;
            v129 = 0;
            hasReducedCrownTowerDamage = 0;
          }
          v130 = hasReducedCrownTowerDamage | LogicProjectileData::hasReducedCrownTowerDamage(v111);
          v131 = LogicProjectileData::getRadius(v111);
          v133 = LogicProjectileData::getDamage(v111, v127) * v117;
          if ( v131 <= 0 )
            v134 = v133;
          else
            v134 = 0;
          v135 = (String *)(unsigned int)(v134 + v128);
          if ( v131 <= 0 )
            v133 = 0;
          v136 = (String *)(unsigned int)(v133 + v129);
          if ( (int)v136 >= 1 )
          {
            v137 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_AREA_DAMAGE", v132);
            SpellInfoPopup::InfoCard::addAttribute(v114, v137, v136, 8);
            if ( v130 )
            {
              v138 = (LogicDataTables *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_TOWER_DAMAGE", v132);
              Globals = (HomeScreen *)LogicDataTables::getGlobals(v138);
              ReducedCrownTowerDamage = (String *)LogicGlobals::getReducedCrownTowerDamage(Globals, (int)v136);
              SpellInfoPopup::InfoCard::addAttribute(v114, (const String *)v138, ReducedCrownTowerDamage, 8);
            }
          }
          if ( (int)v135 >= 1 )
          {
            v141 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DAMAGE", v132);
            SpellInfoPopup::InfoCard::addAttribute(v114, v141, v135, 1);
            if ( v130 )
            {
              v143 = (LogicDataTables *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_TOWER_DAMAGE", v142);
              v144 = (HomeScreen *)LogicDataTables::getGlobals(v143);
              v145 = (String *)LogicGlobals::getReducedCrownTowerDamage(v144, (int)v135);
              SpellInfoPopup::InfoCard::addAttribute(v114, (const String *)v143, v145, 1);
            }
          }
          DamageType = (#1308 *)LogicProjectileData::getDamageType(v111);
          v7 = v220;
          LODWORD(v28) = v223;
          v15 = v127;
          v5 = (TextField **)v114;
          SpellData = v215;
          if ( AreaEffectObject )
            goto LABEL_109;
          AreaEffectObject = (#1108 *)LogicProjectileData::getSpawnAreaEffectObject(v111);
        }
        if ( !AreaEffectObject )
          goto LABEL_143;
    LABEL_109:
        v146 = (String *)LogicAreaEffectObjectData::getHealing(AreaEffectObject, v15);
        v147 = LogicAreaEffectObjectData::getHitSpeed(AreaEffectObject);
        MaximumTargets = LogicAreaEffectObjectData::getMaximumTargets(AreaEffectObject);
        if ( MaximumTargets > 1 )
        {
          v150 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_MAX_TARGETS", v148);
          SpellInfoPopup::InfoCard::addCountAttribute((LogicFuseSpellsCommand *)v5, v150, MaximumTargets);
        }
        if ( (int)v146 >= 1 )
        {
          v151 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_HEAL", v148);
          SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v151, v146, 4);
          if ( v147 >= 1 )
          {
            v153 = (const String *)StringTable::getString((#1308 *)"TID_HIT_SPEED", v152);
            SpellInfoPopup::InfoCard::addHitSpeedAttribute((LogicFuseSpellsCommand *)v5, v153, v147);
          }
        }
        v154 = LogicAreaEffectObjectData::getProjectile(AreaEffectObject);
        v155 = (String *)LogicAreaEffectObjectData::getDamage(AreaEffectObject, v15);
        v156 = LogicAreaEffectObjectData::hasReducedCrownTowerDamage(AreaEffectObject);
        if ( v154 )
        {
          if ( (int)LogicAreaEffectObjectData::getHitSpeed(AreaEffectObject) < 1
            || (int)LogicAreaEffectObjectData::getLifeDuration(AreaEffectObject, v15) < 101 )
          {
            v159 = 1;
          }
          else
          {
            LifeDuration = LogicAreaEffectObjectData::getLifeDuration(AreaEffectObject, v15);
            v159 = LifeDuration / (int)LogicAreaEffectObjectData::getHitSpeed(AreaEffectObject);
          }
          v160 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_COUNT", v157);
          SpellInfoPopup::InfoCard::addCountAttribute((LogicFuseSpellsCommand *)v5, v160, v159);
          v155 = (String *)LogicProjectileData::getDamage(v154, v15);
          v156 |= LogicProjectileData::hasReducedCrownTowerDamage(v154);
        }
        if ( (int)v155 < 1 )
          goto LABEL_140;
        v161 = LogicAreaEffectObjectData::getRadius(AreaEffectObject);
        v163 = v161;
        if ( v147 >= 1 && v154 == 0 )
        {
          if ( v161 < 1 )
            v165 = "TID_SPELL_ATTRIBUTE_DAMAGE_PER_SECOND";
          else
            v165 = "TID_SPELL_ATTRIBUTE_AREA_DAMAGE_PER_SECOND";
          v170 = (const String *)StringTable::getString((#1308 *)v165, v162);
          SpellInfoPopup::InfoCard::addDpsAttributeNoDecimal((LogicFuseSpellsCommand *)v5, v170, (int)v155, (int)v155, v147);
          goto LABEL_140;
        }
        if ( LogicAreaEffectObjectData::getProjectile(AreaEffectObject) )
        {
          v168 = LogicAreaEffectObjectData::getProjectile(AreaEffectObject);
          v169 = LogicProjectileData::getRadius(v168);
          if ( v163 < 1 || !v169 )
          {
    LABEL_137:
            v177 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DAMAGE", v167);
            SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v177, v155, 1);
            if ( v156 )
            {
              v173 = (LogicDataTables *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_TOWER_DAMAGE", v178);
              v179 = (HomeScreen *)LogicDataTables::getGlobals(v173);
              v175 = (String *)LogicGlobals::getReducedCrownTowerDamage(v179, (int)v155);
              v176 = 1;
              goto LABEL_139;
            }
            goto LABEL_140;
          }
        }
        else if ( v163 < 1 )
        {
          goto LABEL_137;
        }
        v171 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_AREA_DAMAGE", v167);
        SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v171, v155, 8);
        if ( v156 )
        {
          v173 = (LogicDataTables *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_TOWER_DAMAGE", v172);
          v174 = (HomeScreen *)LogicDataTables::getGlobals(v173);
          v175 = (String *)LogicGlobals::getReducedCrownTowerDamage(v174, (int)v155);
          v176 = 8;
    LABEL_139:
          SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, (const String *)v173, v175, v176);
        }
    LABEL_140:
        if ( (int)LogicAreaEffectObjectData::getLifeDuration(AreaEffectObject, v15) >= 101 )
        {
          v181 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DURATION", v180);
          v182 = LogicAreaEffectObjectData::getLifeDuration(AreaEffectObject, v15);
          SpellInfoPopup::InfoCard::addTimeAttribute((LogicFuseSpellsCommand *)v5, v181, v182);
        }
        DamageType = (#1308 *)LogicAreaEffectObjectData::getDamageType(AreaEffectObject);
        LODWORD(v28) = LogicAreaEffectObjectData::getRadius(AreaEffectObject);
    LABEL_143:
        BuffType = (BattleResultMessage *)LogicSpellData::getBuffType(SpellData);
        if ( BuffType )
        {
          v185 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DURATION", v183);
          BuffTime = LogicSpellData::getBuffTime(SpellData, v15);
          SpellInfoPopup::InfoCard::addTimeAttribute((LogicFuseSpellsCommand *)v5, v185, BuffTime);
          BuffNumber = LogicSpellData::getBuffNumber(SpellData);
          if ( BuffNumber >= 1 )
          {
            v189 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_MAX_TARGETS", v187);
            SpellInfoPopup::InfoCard::addCountAttribute((LogicFuseSpellsCommand *)v5, v189, BuffNumber);
          }
          DamageType = (#1308 *)LogicCharacterBuffData::getDamageType(BuffType);
          LODWORD(v28) = LogicSpellData::getRadius(SpellData);
        }
        if ( (int)v28 >= 1 )
        {
          v190 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_RADIUS", v183);
          SpellInfoPopup::InfoCard::addRadiusAttribute((LogicFuseSpellsCommand *)v5, v190, v28);
        }
        SpawnCharacterCount = (LogicDataTables *)LogicSpellData::getProjectile(SpellData);
        if ( SpawnCharacterCount )
        {
          v192 = LogicSpellData::getProjectile(SpellData);
          SpawnCharacterCount = (LogicDataTables *)LogicProjectileData::getSpawnCharacter(v192);
          if ( SpawnCharacterCount )
          {
            v193 = LogicSpellData::getProjectile(SpellData);
            v194 = LogicProjectileData::getSpawnCharacter(v193);
            v195 = LogicSpellData::getProjectile(SpellData);
            SpawnCharacterCount = (LogicDataTables *)LogicProjectileData::getSpawnCharacterCount(v195);
            v197 = (int)SpawnCharacterCount;
            if ( v194 )
            {
              v198 = LogicSpellData::getProjectile(SpellData);
              v199 = LogicProjectileData::getSpawnCharacterLevelIndex(v198);
              v201 = StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPAWN_CHARACTER_LEVEL", v200);
              String::String(&v226, "<CHARACTER>");
              v202 = (#1308 *)LogicData::getTID(v194);
              v204 = StringTable::getString(v202, v203);
              String::replace(&v227, v201, &v226, v204);
              SpellInfoPopup::InfoCard::addAttribute(
                (LogicFuseSpellsCommand *)v5,
                &v227,
                (String *)(unsigned int)(v199 + v7 + 2),
                12);
              String::~String(&v227);
              String::~String(&v226);
            }
            if ( v197 >= 2 )
            {
              v205 = StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_SPAWN_CHARACTER_COUNT", v196);
              String::String(&v224, "<CHARACTER>");
              v206 = (#1308 *)LogicData::getTID(v194);
              v208 = StringTable::getString(v206, v207);
              String::replace(&v225, v205, &v224, v208);
              SpellInfoPopup::InfoCard::addCountAttribute((LogicFuseSpellsCommand *)v5, &v225, v197);
              String::~String(&v225);
              String::~String(&v224);
            }
          }
        }
        if ( DamageType )
        {
          PhysicalDamageType = LogicDataTables::getPhysicalDamageType(SpawnCharacterCount);
          if ( (LogicData::equals(DamageType, PhysicalDamageType) & 1) == 0 )
          {
            v211 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DAMAGE_TYPE", v210);
            LocalizedName = (const String *)StringTable::getLocalizedName(DamageType, v212);
            SpellInfoPopup::InfoCard::addAttribute((LogicFuseSpellsCommand *)v5, v211, LocalizedName, 0, 0, 13);
          }
        }
        *((_BYTE *)v5 + 330) = 1;
        ++v7;
      }
      while ( v7 < v218 );
      *((_BYTE *)v5 + 330) = 0;
    }

    void __fastcall SpellInfoPopup::InfoCard::addAttribute(
            LogicFuseSpellsCommand *this,
            const String *a2,
            String *a3,
            int a4)
    {
      int v5; // w20
      String v8; // [xsp+8h] [xbp-38h] BYREF
    
      v5 = (int)a3;
      String::valueOf(&v8, a3, (int)a2);
      SpellInfoPopup::InfoCard::addAttribute(this, a2, &v8, v5, v5, a4);
      String::~String(&v8);
    }

    void __fastcall SpellInfoPopup::InfoCard::addDPSAttribute(LogicFuseSpellsCommand *this, __int64 a2, __int64 a3)
    {
      const char *v6; // x1
      const char *v7; // x1
      String v8; // [xsp+18h] [xbp-68h] BYREF
      String v9; // [xsp+30h] [xbp-50h] BYREF
      String v10; // [xsp+48h] [xbp-38h] BYREF
    
      String::String(&v10);
      StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DPS", v6);
      String::operator=(&v10);
      if ( (_DWORD)a2 == (_DWORD)a3 )
      {
        String::format((String *)"%i", v7, a2);
        SpellInfoPopup::InfoCard::addAttribute(this, &v10, &v8, a2, a2, 5);
        String::~String(&v8);
      }
      else
      {
        String::format((String *)"%i-%i", v7, a2, a3);
        SpellInfoPopup::InfoCard::addAttribute(this, &v10, &v9, a2, a3, 5);
        String::~String(&v9);
      }
      String::~String(&v10);
    }

    void __fastcall SpellInfoPopup::InfoCard::addDamageAttribute(
            LogicFuseSpellsCommand *this,
            String *a2,
            __int64 a3,
            int a4)
    {
      const char *v8; // x1
      const char *v9; // x1
      int v10; // w22
      String v11; // [xsp+18h] [xbp-68h] BYREF
      String v12; // [xsp+30h] [xbp-50h] BYREF
      String v13; // [xsp+48h] [xbp-38h] BYREF
    
      String::String(&v13);
      if ( a4 )
      {
        StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_AREA_DAMAGE", v8);
        String::operator=(&v13);
        v10 = 8;
      }
      else
      {
        StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_DAMAGE", v8);
        String::operator=(&v13);
        v10 = 1;
      }
      if ( (_DWORD)a2 == (_DWORD)a3 )
      {
        String::valueOf(&v11, a2, (int)v9);
        SpellInfoPopup::InfoCard::addAttribute(this, &v13, &v11, (int)a2, (int)a2, v10);
        String::~String(&v11);
      }
      else
      {
        String::format((String *)"%i-%i", v9, a2, a3);
        SpellInfoPopup::InfoCard::addAttribute(this, &v13, &v12, (int)a2, a3, v10);
        String::~String(&v12);
      }
      String::~String(&v13);
    }

    void __fastcall SpellInfoPopup::InfoCard::addTimeAttribute(LogicFuseSpellsCommand *this, const String *a2, int a3)
    {
      unsigned int v5; // w21
      String v6; // [xsp+8h] [xbp-38h] BYREF
    
      if ( a3 )
      {
        v5 = 100 * (a3 / 100);
        SpellInfoPopup::getTimeText((ScrollArea *)v5, *((unsigned __int8 *)this + 330), a3, (__int64 *)&v6.m_length);
        SpellInfoPopup::InfoCard::addAttribute(this, a2, &v6, v5, v5, 2);
        String::~String(&v6);
      }
    }

    void __fastcall SpellInfoPopup::InfoCard::addHitSpeedAttribute(LogicFuseSpellsCommand *this, const String *a2, int a3)
    {
      unsigned int v5; // w21
      String v6; // [xsp+8h] [xbp-38h] BYREF
    
      if ( a3 )
      {
        v5 = 100 * (a3 / 100);
        SpellInfoPopup::getTimeText((ScrollArea *)v5, *((unsigned __int8 *)this + 330), a3, (__int64 *)&v6.m_length);
        SpellInfoPopup::InfoCard::addAttribute(this, a2, &v6, v5, v5, 14);
        String::~String(&v6);
      }
    }

    void __fastcall SpellInfoPopup::InfoCard::addDistanceAttribute(LogicFuseSpellsCommand *this, const String *a2, int a3)
    {
      int v5; // w21
      const String *String; // x0
      String v7; // [xsp+28h] [xbp-38h] BYREF
    
      v5 = a3 / 100;
      if ( a3 < 1 )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_ATTRIBUTE_MELEE_RANGE", (const char *)a2);
        SpellInfoPopup::InfoCard::addAttribute(this, a2, String, v5, v5, 3);
      }
      else
      {
        SpellInfoPopup::getDistanceText(
          (ScrollArea *)(unsigned int)(a3 / 100),
          (const char *)*((unsigned __int8 *)this + 330),
          (__int64 *)&v7.m_length);
        SpellInfoPopup::InfoCard::addAttribute(this, a2, &v7, v5, v5, 3);
        String::~String(&v7);
      }
    }

    void __fastcall SpellInfoPopup::InfoCard::addCountAttribute(LogicFuseSpellsCommand *this, const String *a2, String *a3)
    {
      __int64 String; // x22
      int v7; // w1
      String v8; // [xsp+8h] [xbp-68h] BYREF
      String v9; // [xsp+20h] [xbp-50h] BYREF
      String v10; // [xsp+38h] [xbp-38h] BYREF
    
      String = StringTable::getString((#1308 *)"TID_SPELL_ATTRIBUTE_COUNT_VALUE", (const char *)a2);
      String::String(&v9, "<COUNT>");
      String::valueOf(&v8, a3, v7);
      String::replace(&v10, String, &v9, &v8);
      SpellInfoPopup::InfoCard::addAttribute(this, a2, &v10, (int)a3, (int)a3, 6);
      String::~String(&v10);
      String::~String(&v8);
      String::~String(&v9);
    }

    void __fastcall SpellInfoPopup::InfoCard::addRadiusAttribute(LogicFuseSpellsCommand *this, const String *a2, int a3)
    {
      int v5; // w21
      String v6; // [xsp+8h] [xbp-38h] BYREF
    
      v5 = a3 / 100;
      SpellInfoPopup::getDistanceText(
        (ScrollArea *)(unsigned int)(a3 / 100),
        (const char *)*((unsigned __int8 *)this + 330),
        (__int64 *)&v6.m_length);
      SpellInfoPopup::InfoCard::addAttribute(this, a2, &v6, v5, v5, 16);
      String::~String(&v6);
    }

    void __fastcall SpellInfoPopup::InfoCard::buttonClicked(LogicFuseSpellsCommand *this, #1251 *a2)
    {
      TextField *v3; // x0
      LogicFuseSpellsCommand *v4; // x20
      __int64 v5; // x0
      vm_address_t *v6; // x0
      GameMode *v7; // x0
      const char *v8; // x1
      __int64 String; // x20
      __int64 MaterialCountForNextLevel; // x0
      const char *v11; // x1
      BadgePopup *v12; // x0
      Stage *v13; // x19
      float v14; // s1
      __int64 v15; // x0
      #1047 *Instance; // x0
      #1093 *SpellPage; // x20
      const InitState *SpellData; // x0
      #1047 *v19; // x0
      #1047 *v20; // x0
      #1093 *v21; // x0
      float v22[2]; // [xsp+10h] [xbp-60h] BYREF
      String v23; // [xsp+18h] [xbp-58h] BYREF
      String v24; // [xsp+30h] [xbp-40h] BYREF
      String v25; // [xsp+48h] [xbp-28h] BYREF
    
      if ( *((#1251 **)this + 32) == a2 )
      {
        v15 = *((_QWORD *)this + 27);
        if ( !v15 )
          return;
    LABEL_13:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 352LL))(v15);
        return;
      }
      if ( *((#1251 **)this + 30) == a2 )
      {
        if ( !*((_QWORD *)this + 25) )
          return;
        Instance = (#1047 *)HomeScreen::getInstance(this);
        SpellPage = (#1093 *)HomeScreen::getSpellPage(Instance);
        SpellData = (const InitState *)LogicSpell::getSpellData(*((TextField **)this + 25));
        v19 = (#1047 *)SpellPage::setSelectedSpell(SpellPage, SpellData, 1);
        v20 = (#1047 *)HomeScreen::getInstance(v19);
        v21 = (#1093 *)HomeScreen::getSpellPage(v20);
        SpellPage::gotoSwapMode(v21);
        v15 = *((_QWORD *)this + 27);
        goto LABEL_13;
      }
      if ( *((#1251 **)this + 31) == a2 )
      {
        v3 = (TextField *)*((_QWORD *)this + 25);
        if ( v3 )
        {
          if ( *((_BYTE *)this + 329) )
          {
            v4 = (LogicFuseSpellsCommand *)operator new(40);
            LogicFuseSpellsCommand::LogicFuseSpellsCommand(v4);
            v5 = LogicSpell::getSpellData(*((TextField **)this + 25));
            v6 = (vm_address_t *)LogicFuseSpellsCommand::setSpell((__int64)v4, v5);
            v7 = (GameMode *)GameMode::getInstance(v6);
            GameMode::addCommand(v7, v4, 1);
            v3 = (TextField *)*((_QWORD *)this + 25);
          }
          if ( (LogicSpell::canUpgrade(v3) & 1) == 0 )
          {
            String = StringTable::getString((#1308 *)"TID_CANT_FUSE_NOT_ENOUGH_MATERIAL", v8);
            String::String(&v24, "<COUNT>");
            MaterialCountForNextLevel = LogicSpell::getMaterialCountForNextLevel(*((TextField **)this + 25));
            String::format((String *)"%d", v11, MaterialCountForNextLevel);
            String::replace(&v25, String, &v24, &v23);
            String::~String(&v23);
            String::~String(&v24);
            v13 = (Stage *)GUI::getInstance(v12);
            v22[0] = GUI::getDefaultFloaterPos(v13);
            v22[1] = v14;
            GUI::showFloaterTextAt((__int64)v13, v22, &v25, -1, 0.0);
            String::~String(&v25);
          }
        }
      }
    }

    void __fastcall SpellInfoPopup::InfoCard::update(LogicFuseSpellsCommand *this, float a2)
    {
      ;
    }

    __int64 __fastcall SpellInfoPopup::InfoCard::getAttributes(LogicFuseSpellsCommand *this)
    {
      return (__int64)this + 224;
    }

    void __fastcall SpellInfoPopup::InfoCard::addDpsAttributeNoDecimal(
            LogicFuseSpellsCommand *this,
            const String *a2,
            int a3,
            int a4,
            int a5)
    {
      int v7; // w21
      String *v8; // x0
      String v9; // [xsp+10h] [xbp-50h] BYREF
      String v10; // [xsp+28h] [xbp-38h] BYREF
    
      if ( a5 )
      {
        v7 = 1000 * a3 / a5;
        if ( v7 == 1000 * a4 / a5 )
        {
          String::valueOf(&v9, (String *)(unsigned int)(1000 * a3 / a5), (int)a2);
          SpellInfoPopup::InfoCard::addAttribute(this, a2, &v9, v7, v7, 5);
          v8 = &v9;
        }
        else
        {
          String::format(
            (String *)"%i-%i",
            (const char *)a2,
            (unsigned int)(1000 * a3 / a5),
            (unsigned int)(1000 * a4 / a5));
          SpellInfoPopup::InfoCard::addAttribute(this, a2, &v10, 0, 0, 5);
          v8 = &v10;
        }
        String::~String(v8);
      }
    }

    void __fastcall SpellInfoPopup::InfoCard::addAttribute(
            LogicFuseSpellsCommand *this,
            const String *a2,
            const String *a3,
            int a4,
            int a5,
            ScrollArea *a6)
    {
      int v10; // w8
      __int64 *v11; // x24
      __int64 v12; // x28
      __int64 v13; // x25
      __int64 v14; // x27
      __int64 v15; // x19
      __int64 v16; // x21
      int v17; // w27
      const char *v18; // x1
      const String *v19; // x2
      MovieClip *MovieClip; // x25
      long double Width; // q0
      long double Height; // q0
      __int64 TextFieldByName; // x0
      float v24; // s8
      float v25; // s9
      float v26; // s10
      float v27; // s11
      long double v28; // q0
      __int64 v29; // x0
      const char *v30; // x1
      #1249 *ChildByName; // x26
      const String *v32; // x2
      #1249 *v33; // x27
      __int64 MovieClipByName; // x0
      __int64 v35; // x19
      _DWORD *v36; // x23
      int v37; // w8
      int v38; // w9
      ScrollArea *v39; // x20
      __int64 v40; // x22
      #1257 *v42; // x19
      const char *v43; // x1
      bool v44; // w2
      const char *v46; // x1
      int v47; // w9
      internal_t *pHeap; // x8
      const char *v49; // x1
      int v50; // w9
      internal_t *p_internal; // x8
      const char *v52; // x1
      int v53; // w9
      internal_t *v54; // x8
      const char *v55; // x1
      __int64 v56; // x20
      internal_t *v57; // x8
      internal_t *v58; // x9
      MovieClip *v59; // x0
      const String *StringObject; // x0
      _BYTE v63[80]; // [xsp+98h] [xbp-298h] BYREF
      String v64; // [xsp+E8h] [xbp-248h] BYREF
      Rect v65[2]; // [xsp+100h] [xbp-230h] BYREF
      String v66; // [xsp+110h] [xbp-220h] BYREF
      String v67; // [xsp+128h] [xbp-208h] BYREF
      String v68; // [xsp+140h] [xbp-1F0h] BYREF
      String v69; // [xsp+158h] [xbp-1D8h] BYREF
      String v70; // [xsp+170h] [xbp-1C0h] BYREF
      String v71; // [xsp+188h] [xbp-1A8h] BYREF
      String v72; // [xsp+1A0h] [xbp-190h] BYREF
      String v73; // [xsp+1B8h] [xbp-178h] BYREF
      String v74; // [xsp+1D0h] [xbp-160h] BYREF
      String v75; // [xsp+1E8h] [xbp-148h] BYREF
      String v76; // [xsp+200h] [xbp-130h] BYREF
      String v77; // [xsp+218h] [xbp-118h] BYREF
      String v78; // [xsp+230h] [xbp-100h] BYREF
      String v79; // [xsp+248h] [xbp-E8h] BYREF
      String v80; // [xsp+260h] [xbp-D0h] BYREF
      String v81; // [xsp+278h] [xbp-B8h] BYREF
      String v82; // [xsp+290h] [xbp-A0h] BYREF
      String v83; // [xsp+2A8h] [xbp-88h] BYREF
    
      v10 = *((_DWORD *)this + 76);
      if ( v10 >= 10 )
      {
        Debugger::warning((__siginfo *)"Trying to add too many attributes in SpellInfoPopup", (const char *)a2);
        return;
      }
      *((_DWORD *)this + 76) = v10 + 1;
      v11 = (__int64 *)((char *)this + 224);
      v12 = *((int *)this + 59);
      if ( (int)v12 < 1 )
      {
    LABEL_10:
        if ( (int)v12 >= 0 )
          v17 = v12;
        else
          v17 = v12 + 1;
        if ( ((v17 >> 1) & 1) != 0 )
          v18 = "stat_list_item_01";
        else
          v18 = "stat_list_item_02";
        String::String(&v66, v18);
        MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v66, v19);
        String::~String(&v66);
        if ( !(_DWORD)v12 )
        {
          Rect::Rect(v65);
          DisplayObject::getBounds(MovieClip, 0, v65);
          Width = Rect::getWidth(v65);
          *((float *)this + 80) = ceilf(*(float *)&Width);
          Height = Rect::getHeight(v65);
          *((float *)this + 81) = ceilf(*(float *)&Height);
          Rect::~Rect(v65);
        }
        TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "stat_name");
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, a2, 1);
        MovieClip::setText(MovieClip, "stat_value", a3);
        LODWORD(v24) = COERCE_UNSIGNED_INT128(Rect::getWidth((char *)this + 288));
        v25 = *((float *)this + 72);
        v26 = *((float *)this + 73);
        v27 = *((float *)this + 81);
        if ( GUIContainer::getMovieClip(this) )
        {
          DisplayObject::setPixelSnappedXY(
            MovieClip,
            v25 + (float)((float)(int)(v12 - (v17 & 0xFFFFFFFE)) * (float)(v24 * 0.5)),
            v26 + (float)((float)(v17 >> 1) * v27));
          v29 = GUIContainer::getMovieClip(this);
          v28 = ((long double (__fastcall *)(__int64, MovieClip *, _QWORD))*(_QWORD *)(*(_QWORD *)v29 + 168LL))(
                  v29,
                  MovieClip,
                  *((unsigned int *)this + 78));
        }
        ChildByName = (#1249 *)MovieClip::getChildByName(MovieClip, "icon", v28);
        if ( !ChildByName )
          Debugger::error((__siginfo *)"no icon placeholder for spell info attribute", v30);
        SpellInfoPopup::getIconExportName(a6, &v64);
        v33 = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v64, v32);
        String::~String(&v64);
        MovieClip::changeTimelineChild(MovieClip, ChildByName, v33);
        (*(void (__fastcall **)(#1249 *))(*(_QWORD *)ChildByName + 8LL))(ChildByName);
        MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "stat_upgrade_bg");
        if ( MovieClipByName )
          *(_BYTE *)(MovieClipByName + 8) = 0;
        memset(v63, 0, sizeof(v63));
        String::String((String *)&v63[8]);
        String::String((String *)&v63[32]);
        LogicArrayList<SpellItemAttribute>::add(v11, v63);
        String::~String((String *)&v63[32]);
        String::~String((String *)&v63[8]);
        v35 = *v11 + 80 * v12;
        String::operator=((String *)(v35 + 8));
        *(_DWORD *)(v35 + 56) = a4;
        *(_DWORD *)(v35 + 60) = a5;
        *(_QWORD *)v35 = MovieClip;
        String::operator=((String *)(v35 + 32));
        *(_DWORD *)(v35 + 64) = (_DWORD)a6;
        return;
      }
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = *v11;
        v16 = *v11 + v13;
        if ( (unsigned int)String::equals(v16 + 8, a2) )
        {
          if ( *(_DWORD *)(v16 + 64) == (_DWORD)a6 )
            break;
        }
    LABEL_9:
        ++v14;
        v13 += 80;
        if ( v14 >= v12 )
          goto LABEL_10;
      }
      if ( (_DWORD)a6 == 7 )
      {
        if ( (String::equals(a3, v15 + v13 + 32) & 1) != 0 )
          return;
        goto LABEL_9;
      }
      v36 = (_DWORD *)(v15 + v13);
      v37 = *(_DWORD *)(v15 + v13 + 56);
      v38 = *(_DWORD *)(v15 + v13 + 60);
      v39 = (ScrollArea *)(unsigned int)(a4 - v37);
      v40 = (unsigned int)(a5 - v38);
      v36[17] = (_DWORD)v39;
      v36[18] = v40;
      if ( v37 != a4 || v38 != a5 )
      {
        v42 = *(#1257 **)(v15 + v13);
        String::String(&v83);
        String::String(&v82, "00ff00");
        switch ( v36[16] )
        {
          case 1:
          case 4:
          case 5:
          case 6:
          case 8:
          case 9:
          case 0xC:
          case 0x11:
            if ( (int)v39 <= 0 && (int)v40 < 1 )
            {
              String::format((String *)" %d", v43, v39);
              String::operator+=(&v83, &v79);
              String::~String(&v79);
            }
            else if ( (_DWORD)v39 == (_DWORD)v40 )
            {
              String::format((String *)" +%d", v43, v39);
              String::operator+=(&v83, &v80);
              String::~String(&v80);
            }
            else
            {
              String::format((String *)" +%d/+%d", v43, v39, v40);
              String::operator+=(&v83, &v81);
              String::~String(&v81);
            }
            break;
          case 2:
            SpellInfoPopup::getTimeText(v39, *((unsigned __int8 *)this + 330), v44, (__int64 *)&v72.m_length);
            if ( v72.m_length )
            {
              v50 = v72.m_bytes + 1;
              p_internal = &v72.internal;
              if ( (int)v39 < 1 )
              {
                if ( v50 > 8 )
                  p_internal = (internal_t *)v72.internal.pHeap;
                String::format((String *)" %s", v49, p_internal);
                String::operator+=(&v83, &v70);
                String::~String(&v70);
              }
              else
              {
                if ( v50 > 8 )
                  p_internal = (internal_t *)v72.internal.pHeap;
                String::format((String *)" +%s", v49, p_internal);
                String::operator+=(&v83, &v71);
                String::~String(&v71);
              }
            }
            String::~String(&v72);
            break;
          case 3:
          case 0x10:
            SpellInfoPopup::getDistanceText(v39, (const char *)*((unsigned __int8 *)this + 330), (__int64 *)&v78.m_length);
            if ( v78.m_length )
            {
              v47 = v78.m_bytes + 1;
              pHeap = &v78.internal;
              if ( (int)v39 < 1 )
              {
                if ( v47 > 8 )
                  pHeap = (internal_t *)v78.internal.pHeap;
                String::format((String *)" %s", v46, pHeap);
                String::operator+=(&v83, &v76);
                String::~String(&v76);
              }
              else
              {
                if ( v47 > 8 )
                  pHeap = (internal_t *)v78.internal.pHeap;
                String::format((String *)" +%s", v46, pHeap);
                String::operator+=(&v83, &v77);
                String::~String(&v77);
              }
            }
            String::~String(&v78);
            break;
          case 0xE:
            SpellInfoPopup::getTimeText(v39, *((unsigned __int8 *)this + 330), v44, (__int64 *)&v75.m_length);
            if ( v75.m_length )
            {
              v53 = v75.m_bytes + 1;
              v54 = &v75.internal;
              if ( (int)v39 < 1 )
              {
                if ( v53 > 8 )
                  v54 = (internal_t *)v75.internal.pHeap;
                String::format((String *)" %s", v52, v54);
                String::operator+=(&v83, &v73);
                String::~String(&v73);
              }
              else
              {
                if ( v53 > 8 )
                  v54 = (internal_t *)v75.internal.pHeap;
                String::format((String *)" +%s", v52, v54);
                String::operator+=(&v83, &v74);
                String::~String(&v74);
              }
            }
            String::~String(&v75);
            break;
          default:
            break;
        }
        v56 = MovieClip::getTextFieldByName(v42, "stat_value");
        if ( v83.m_length )
        {
          if ( v82.m_length )
          {
            if ( v82.m_bytes + 1 > 8 )
              v57 = (internal_t *)v82.internal.pHeap;
            else
              v57 = &v82.internal;
            if ( v83.m_bytes + 1 > 8 )
              v58 = (internal_t *)v83.internal.pHeap;
            else
              v58 = &v83.internal;
            String::format((String *)"<c%s>%s</c>", v55, v57, v58);
            String::operator=(&v83);
            String::~String(&v69);
            *(_BYTE *)(v56 + 78) = 1;
          }
          v59 = (MovieClip *)MovieClip::getMovieClipByName(v42, "stat_upgrade_bg");
          if ( v59 )
          {
            *((_BYTE *)v59 + 8) = 1;
            MovieClip::play(v59);
          }
          if ( TextField::getStringObject(v56) )
          {
            StringObject = (const String *)TextField::getStringObject(v56);
            String::String(&v68, StringObject);
          }
          else
          {
            String::String(&v68, "");
          }
          operator+((__int64 *)&v67.m_length, &v68, &v83);
          TextField::setText((#1271 *)v56, &v67);
          String::~String(&v67);
          String::~String(&v68);
        }
        String::~String(&v82);
        String::~String(&v83);
      }
    }

}; // end class SpellInfoPopup::InfoCard
