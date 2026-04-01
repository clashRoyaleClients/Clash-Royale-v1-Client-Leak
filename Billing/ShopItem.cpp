class ShopItem
{
public:

    __int64 __fastcall ShopItem::ShopItem(__int64 a1, const LogicData *a2, int a3, __int64 a4)
    {
      GameButton::GameButton((GameButton *)a1);
      *(_QWORD *)a1 = off_10046BE80;
      *(_QWORD *)(a1 + 264) = 0;
      *(_DWORD *)(a1 + 272) = 0;
      memset((void *)(a1 + 280), 0, 0x49u);
      *(_QWORD *)(a1 + 344) = a4;
      ShopItem::initItem((ShopItem *)a1, a2, a3);
      return a1;
    }

    __int64 __fastcall ShopItem::initItem(__int64 a1, ShopItem *a2, int a3)
    {
      __int64 result; // x0
    
      *(_QWORD *)(a1 + 264) = a2;
      *(_DWORD *)(a1 + 272) = a3;
      result = ShopItem::getTypeForData(a2, a2);
      switch ( (int)result )
      {
        case 0:
          result = ShopItem::initSpell((ShopItem *)a1);
          break;
        case 1:
          result = ShopItem::initChest((ShopItem *)a1);
          break;
        case 2:
          result = ShopItem::initResource((ShopItem *)a1);
          break;
        case 3:
          result = ShopItem::initDiamondResource((ShopItem *)a1);
          break;
        default:
          return result;
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall ShopItem::ShopItem(__int64 a1, const LogicData *a2, int a3, __int64 a4)
    {
      return __ZN8ShopItemC2EPK9LogicDataiP14BillingProduct(a1, a2, a3, a4);
    }

    __int64 __fastcall ShopItem::ShopItem(__int64 a1, ShopItem *a2, int a3, char a4)
    {
      GameButton::GameButton((GameButton *)a1);
      *(_QWORD *)a1 = off_10046BE80;
      *(_QWORD *)(a1 + 264) = 0;
      *(_DWORD *)(a1 + 272) = 0;
      memset((void *)(a1 + 280), 0, 0x48u);
      *(_BYTE *)(a1 + 352) = a4;
      ShopItem::initItem(a1, a2, a3);
      return a1;
    }

    // attributes: thunk
    void __fastcall ShopItem::ShopItem(ShopItem *this, ShopItem *a2, int a3, char a4)
    {
      __ZN8ShopItemC2EPK9LogicDataib((__int64)this, a2, a3, a4);
    }

    __int64 __fastcall ShopItem::getTypeForData(ResetAccountMessage **a1, __int64 a2, const char *a3)
    {
      long double v4; // q0
      int DataType; // w0
      const char *v7; // x1
    
      *(__n128 *)&v4 = Debugger::doAssert((Debugger *)(a1 != 0), (bool)"", a3);
      if ( ((*((__int64 (__fastcall **)(ResetAccountMessage **, long double))*a1 + 8))(a1, v4) & 1) != 0 )
        return 0;
      DataType = LogicData::getDataType(a1);
      if ( DataType == 2 )
        return 3;
      if ( DataType == 19 )
        return 1;
      if ( DataType != 55 )
        Debugger::error((__siginfo *)"unsupported data type for ShopItem", v7);
      return 2;
    }

    void __fastcall ShopItem::initSpell(__int64 a1, __int64 a2, const char *a3)
    {
      _BOOL8 v4; // x0
      const char *v5; // x2
      __int64 v6; // x1
      const char *v7; // x2
      InitState *v8; // x20
      const String *v9; // x2
      #1257 *MovieClip; // x21
      String *IconFileName; // x0
      const String *v12; // x2
      __int64 MovieClipByName; // x0
      long double v14; // q0
      float v15; // s8
      __int64 v16; // x22
      void (__fastcall *v17)(__int64, float); // x23
      float v18; // s0
      #1308 *TID; // x0
      const String *v20; // x1
      #1308 *String; // x0
      __int64 Instance; // x0
      __int64 Home; // x0
      int ShopSpellBuyTimes; // w0
      LogicKickAllianceMemberCommand *CostInShop; // x0
      const LogicResourceData *GoldData; // x0
      #1257 *v27; // x0
      __int64 v28; // x0
      __int64 TextFieldByName; // x22
      __int64 Rarity; // x0
      #1308 *v31; // x0
      const String *v32; // x1
      #1308 *v33; // x0
      __int64 v34; // x0
      MovieClip *v35; // x22
      int FrameIndex; // w23
      const char *v37; // x2
      int v38; // w25
      const char *v39; // x2
      __int64 v40; // x0
      CoOpenStreamEntry *v41; // x0
      GameInputField *SpellCollection; // x0
      unsigned int *SpellByData; // x24
      __int64 v44; // x0
      CoOpenStreamEntry *v45; // x0
      AcceptChallengeMessage *LogicDeck; // x0
      const char *v47; // x1
      const String *v48; // x0
      const char *v49; // x1
      const String *v50; // x0
      __int64 v51; // x1
      const char *v52; // x2
      int v53; // w21
      __int64 v54; // x0
      const char *v55; // x1
      __int64 UpgradeMaterialCount; // x20
      __int64 v57; // x25
      int v58; // w3
      int v59; // w20
      InitState *v60; // x20
      __int64 v61; // x21
      __int64 v62; // x20
      const String *v63; // x2
      #1249 *v64; // x20
      long double v65; // q0
      DisplayObject *v66; // x20
      long double v67; // q0
      __int64 v68; // x1
      const char *v69; // x2
      InitState *v70; // x0
      String *v71; // x0
      const String *v72; // x2
      __int64 v73; // x0
      float v74; // s8
      __int64 v75; // x0
      __int64 v76; // x20
      void (__fastcall *v77)(__int64, float); // x21
      float v78; // s0
      String v79; // [xsp+18h] [xbp-F8h] BYREF
      String v80; // [xsp+30h] [xbp-E0h] BYREF
      String v81; // [xsp+48h] [xbp-C8h] BYREF
      String v82; // [xsp+60h] [xbp-B0h] BYREF
      String v83; // [xsp+78h] [xbp-98h] BYREF
      String v84; // [xsp+90h] [xbp-80h] BYREF
      String v85; // [xsp+A8h] [xbp-68h] BYREF
    
      v4 = (unsigned int)ShopItem::getTypeForData(*(ResetAccountMessage ***)(a1 + 264), a2, a3) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      if ( (unsigned int)ShopItem::getTypeForData(*(ResetAccountMessage ***)(a1 + 264), v6, v7) )
        v8 = 0;
      else
        v8 = *(InitState **)(a1 + 264);
      String::String(&v85, "sc/ui.sc");
      String::String(&v84, "item_shop_cards");
      MovieClip = StringTable::getMovieClip((#1308 *)&v85, &v84, v9);
      String::~String();
      String::~String();
      (*(void (__fastcall **)(__int64, #1257 *, __int64))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 1);
      *(_QWORD *)(a1 + 328) = MovieClip::getMovieClipByName(MovieClip, "frame");
      String::String(&v83, "sc/ui_spells.sc");
      IconFileName = (String *)LogicSpellData::getIconFileName(v8);
      *(_QWORD *)(a1 + 320) = StringTable::getMovieClip((#1308 *)&v83, IconFileName, v12);
      String::~String();
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "card_image");
      v14 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)MovieClipByName + 88LL))(MovieClipByName);
      v15 = *(float *)&v14;
      MovieClip::changeTimelineChild(MovieClip, "card_image", *(#1249 **)(a1 + 320));
      v16 = *(_QWORD *)(a1 + 320);
      v17 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v16 + 40LL);
      v18 = (*(float (__fastcall **)(#1257 *))(*(_QWORD *)MovieClip + 88LL))(MovieClip);
      v17(v16, (float)(v15 / v18) * 0.95);
      TID = (#1308 *)LogicData::getTID((__int64)v8);
      String = StringTable::getString(TID, v20);
      MovieClip::setText(MovieClip, "card_title", (const String *)String);
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      ShopSpellBuyTimes = LogicClientHome::getShopSpellBuyTimes(Home, v8);
      CostInShop = (LogicKickAllianceMemberCommand *)LogicSpellData::getCostInShop(v8, ShopSpellBuyTimes);
      LODWORD(v16) = (_DWORD)CostInShop;
      GoldData = (const LogicResourceData *)LogicDataTables::getGoldData(CostInShop);
      ShopItem::setPrice((ShopItem *)a1, v16, GoldData);
      v27 = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "progress");
      v28 = MovieClip::getMovieClipByName(v27, "lock");
      if ( v28 )
        *(_BYTE *)(v28 + 8) = 0;
      TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "card_rarity");
      Rarity = LogicSpellData::getRarity(v8);
      v31 = (#1308 *)LogicData::getTID(Rarity);
      v33 = StringTable::getString(v31, v32);
      TextField::setText((#1271 *)TextFieldByName, (const String *)v33);
      v34 = LogicSpellData::getRarity(v8);
      *(_DWORD *)(TextFieldByName + 64) = (unsigned __int16)(*(_WORD *)(v34 + 116) << 8)
                                        | ((unsigned __int16)*(_DWORD *)(v34 + 112) << 16)
                                        | *(unsigned __int8 *)(v34 + 120)
                                        | 0xFF000000;
      v35 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "progress");
      MovieClip::gotoAndStopFrameIndex(v35, 0);
      FrameIndex = MovieClip::getFrameIndex(v35, "progress_full");
      Debugger::doAssert((Debugger *)(FrameIndex != -1), (bool)"", v37);
      v38 = MovieClip::getFrameIndex(v35, "max_level");
      Debugger::doAssert((Debugger *)(v38 != -1), (bool)"", v39);
      v40 = GameMode::getInstance();
      v41 = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v40 + 112));
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(v41);
      SpellByData = (unsigned int *)LogicSpellCollection::getSpellByData(SpellCollection, v8);
      if ( SpellByData
        || (v44 = GameMode::getInstance(),
            v45 = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v44 + 112)),
            LogicDeck = (AcceptChallengeMessage *)LogicClientHome::getLogicDeck(v45, 0),
            (SpellByData = (unsigned int *)LogicSpellDeck::getSpellByData(LogicDeck, v8)) != 0) )
      {
        if ( LogicSpell::isLevelMax((TextField *)SpellByData) )
        {
          v48 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_MAX_LEVEL", v47);
          MovieClip::setText(MovieClip, "cards_left", v48);
          v50 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_MAX_LEVEL", v49);
          MovieClip::setText(v35, "card_count", v50);
          MovieClip::gotoAndStopFrameIndex(v35, v38);
          goto LABEL_19;
        }
        v53 = 1;
      }
      else
      {
        v53 = 0;
        SpellByData = 0;
      }
      v54 = LogicSpellData::getRarity(v8);
      UpgradeMaterialCount = LogicRarityData::getUpgradeMaterialCount(v54, 0);
      if ( v53 )
      {
        v57 = SpellByData[4];
        UpgradeMaterialCount = LogicSpell::getMaterialCountForNextLevel((TextField *)SpellByData);
      }
      else
      {
        v57 = 0;
      }
      String::format((String *)"%d/%d", v55, v57, UpgradeMaterialCount);
      MovieClip::setText(v35, "card_count", &v82);
      String::~String();
      v59 = LogicMath::clamp(
              (#1237 *)(unsigned int)(int)(float)((float)FrameIndex
                                                * (float)((float)(int)v57 / (float)(int)UpgradeMaterialCount)),
              0,
              FrameIndex,
              v58);
      if ( v53 )
        v59 -= (v59 == FrameIndex) & (LogicSpell::canUpgrade((TextField *)SpellByData) ^ 1);
      MovieClip::gotoAndStopFrameIndex(v35, v59);
      if ( v59 >= FrameIndex )
        MovieClip::stopAll(v35);
    LABEL_19:
      if ( (unsigned int)ShopItem::getTypeForData(*(ResetAccountMessage ***)(a1 + 264), v51, v52) )
        v60 = 0;
      else
        v60 = *(InitState **)(a1 + 264);
      String::String(&v81, "card_rotate_common_short");
      v61 = LogicSpellData::getRarity(v60);
      if ( v61 == LogicDataTables::getRarityEpic() )
        String::operator=(&v81, "card_rotate_epic_short");
      v62 = LogicSpellData::getRarity(v60);
      if ( v62 == LogicDataTables::getRarityRare() )
        String::operator=(&v81, "card_rotate_rare_short");
      String::String(&v80, "sc/ui_chest.sc");
      *(_QWORD *)(a1 + 304) = StringTable::getMovieClip((#1308 *)&v80, &v81, v63);
      String::~String();
      v64 = *(#1249 **)(a1 + 304);
      v65 = DisplayObject::getX(*(_QWORD *)(a1 + 320));
      DisplayObject::setX(v64, *(float *)&v65);
      v66 = *(DisplayObject **)(a1 + 304);
      v67 = DisplayObject::getY(*(_QWORD *)(a1 + 320));
      DisplayObject::setY(v66, *(float *)&v67);
      String::String(&v79, "sc/ui_spells.sc");
      if ( (unsigned int)ShopItem::getTypeForData(*(ResetAccountMessage ***)(a1 + 264), v68, v69) )
        v70 = 0;
      else
        v70 = *(InitState **)(a1 + 264);
      v71 = (String *)LogicSpellData::getIconFileName(v70);
      *(_QWORD *)(a1 + 312) = StringTable::getMovieClip((#1308 *)&v79, v71, v72);
      String::~String();
      v73 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 304), "card_image");
      v74 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v73 + 88LL))(v73)));
      v75 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 304), "card_image");
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v75 + 160LL))(v75, *(_QWORD *)(a1 + 312));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 160LL))(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 304));
      v76 = *(_QWORD *)(a1 + 312);
      v77 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v76 + 40LL);
      v78 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v76 + 88LL))(v76);
      v77(v76, v74 / v78);
      MovieClip::stop(*(MovieClip **)(a1 + 304));
      String::~String();
    }

    void __fastcall ShopItem::initChest(ResetAccountMessage ***a1, __int64 a2, const char *a3)
    {
      _BOOL8 v4; // x0
      const char *v5; // x2
      __int64 v6; // x1
      const char *v7; // x2
      const char *v8; // x2
      LogicRefreshAchievementsCommand *v9; // x20
      #1257 *MovieClip; // x19
      __int64 MovieClipByName; // x0
      long double v12; // q8
      const String *ShopExportName; // x0
      ResourceManager *FileName; // x0
      const String *v15; // x2
      #1249 *v16; // x22
      __int64 TapSoundShop; // x0
      String *ShopPrice; // x0
      int v19; // w1
      __int64 Arena; // x0
      #1308 *TID; // x0
      const String *v22; // x1
      #1308 *String; // x0
      #1308 *v24; // x0
      const String *v25; // x1
      #1308 *v26; // x0
      String v27; // [xsp+0h] [xbp-60h] BYREF
      String v28; // [xsp+18h] [xbp-48h] BYREF
    
      v4 = (unsigned int)ShopItem::getTypeForData(a1[33], a2, a3) == 1;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      if ( (unsigned int)ShopItem::getTypeForData(a1[33], v6, v7) == 1 )
        v9 = (LogicRefreshAchievementsCommand *)a1[33];
      else
        v9 = 0;
      MovieClip = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "item_shop_chest", v8);
      ((void (__fastcall *)(ResetAccountMessage ***, #1257 *, __int64))(*a1)[35])(a1, MovieClip, 1);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "chest");
      v12 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)MovieClipByName + 64LL))(MovieClipByName);
      ShopExportName = (const String *)LogicTreasureChestData::getShopExportName((__int64)v9);
      String::String(&v28, ShopExportName);
      FileName = (ResourceManager *)LogicTreasureChestData::getFileName((__int64)v9);
      v16 = (#1249 *)ResourceManager::getMovieClip(FileName, &v28, v15);
      MovieClip::changeTimelineChild(MovieClip, "chest", v16);
      (*(void (__fastcall **)(#1249 *, long double))(*(_QWORD *)v16 + 40LL))(v16, v12);
      TapSoundShop = LogicTreasureChestData::getTapSoundShop(v9);
      GameButton::setClickSound((__int64)a1, TapSoundShop);
      ShopPrice = (String *)LogicTreasureChestData::getShopPrice(v9);
      String::valueOf(&v27, ShopPrice, v19);
      MovieClip::setText(MovieClip, "cost", &v27);
      String::~String();
      Arena = LogicTreasureChestData::getArena((__int64)v9);
      TID = (#1308 *)LogicData::getTID(Arena);
      String = StringTable::getString(TID, v22);
      MovieClip::setText(MovieClip, "arena_title", (const String *)String);
      v24 = (#1308 *)LogicData::getTID((__int64)v9);
      v26 = StringTable::getString(v24, v25);
      MovieClip::setText(MovieClip, "chest_title", (const String *)v26);
      String::~String();
    }

    void __fastcall ShopItem::initDiamondResource(__int64 a1, __int64 a2, const char *a3)
    {
      _BOOL8 v4; // x0
      const char *v5; // x2
      DeviceLinkedStreamEntry *v6; // x21
      const char *v7; // x2
      MovieClip *MovieClip; // x20
      #1308 *TID; // x0
      const String *v10; // x1
      #1308 *String; // x0
      String *IconFileName; // x0
      const String *v13; // x2
      __int64 MovieClipByName; // x0
      float v15; // s8
      __int64 v16; // x21
      void (__fastcall *v17)(__int64, float); // x22
      float v18; // s0
      const AreaEffectObject *v19; // x2
      __int64 SoundByName; // x0
      String v21; // [xsp+0h] [xbp-60h] BYREF
      String v22; // [xsp+18h] [xbp-48h] BYREF
    
      v4 = (unsigned int)ShopItem::getTypeForData(*(ResetAccountMessage ***)(a1 + 264), a2, a3) == 3;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      v6 = *(DeviceLinkedStreamEntry **)(a1 + 264);
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "item_shop_resource", v7);
      (*(void (__fastcall **)(__int64, MovieClip *, __int64))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 1);
      TID = (#1308 *)LogicData::getTID((__int64)v6);
      String = StringTable::getString(TID, v10);
      MovieClip::setText(MovieClip, "resource_title", (const String *)String);
      MovieClip::setNumberText(MovieClip, "resource_count", *(_DWORD *)(a1 + 272), 1);
      String::String(&v22, "sc/ui_spells.sc");
      IconFileName = (String *)LogicBillingPackagesData::getIconFileName(v6);
      *(_QWORD *)(a1 + 320) = StringTable::getMovieClip((#1308 *)&v22, IconFileName, v13);
      String::~String();
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "card_image");
      v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)MovieClipByName
                                                                                                + 88LL))(MovieClipByName)));
      MovieClip::changeTimelineChild(MovieClip, "card_image", *(#1249 **)(a1 + 320));
      v16 = *(_QWORD *)(a1 + 320);
      v17 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v16 + 40LL);
      v18 = (*(float (__fastcall **)(MovieClip *))(*(_QWORD *)MovieClip + 88LL))(MovieClip);
      v17(v16, (float)(v15 / v18) * 0.95);
      String::String(&v21, "sound_tap_gems");
      SoundByName = LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v21, 0, v19);
      GameButton::setClickSound(a1, SoundByName);
      String::~String();
    }

    void __fastcall ShopItem::initResource(__int64 a1, __int64 a2, const char *a3)
    {
      _BOOL8 v4; // x0
      const char *v5; // x2
      __int64 v6; // x21
      const char *v7; // x2
      MovieClip *MovieClip; // x20
      #1308 *TID; // x0
      const String *v10; // x1
      #1308 *String; // x0
      String *IconFileName; // x0
      const String *v13; // x2
      __int64 MovieClipByName; // x0
      float v15; // s8
      __int64 v16; // x21
      void (__fastcall *v17)(__int64, float); // x22
      float v18; // s0
      const AreaEffectObject *v19; // x2
      __int64 SoundByName; // x0
      String v21; // [xsp+0h] [xbp-60h] BYREF
      String v22; // [xsp+18h] [xbp-48h] BYREF
    
      v4 = (unsigned int)ShopItem::getTypeForData(*(ResetAccountMessage ***)(a1 + 264), a2, a3) == 2;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      v6 = *(_QWORD *)(a1 + 264);
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "item_shop_resource", v7);
      (*(void (__fastcall **)(__int64, MovieClip *, __int64))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 1);
      TID = (#1308 *)LogicData::getTID(v6);
      String = StringTable::getString(TID, v10);
      MovieClip::setText(MovieClip, "resource_title", (const String *)String);
      MovieClip::setNumberText(MovieClip, "resource_count", *(_DWORD *)(a1 + 272), 1);
      String::String(&v22, "sc/ui_spells.sc");
      IconFileName = (String *)LogicResourcePackData::getIconFileName(v6);
      *(_QWORD *)(a1 + 320) = StringTable::getMovieClip((#1308 *)&v22, IconFileName, v13);
      String::~String();
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "card_image");
      v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)MovieClipByName
                                                                                                + 88LL))(MovieClipByName)));
      MovieClip::changeTimelineChild(MovieClip, "card_image", *(#1249 **)(a1 + 320));
      v16 = *(_QWORD *)(a1 + 320);
      v17 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v16 + 40LL);
      v18 = (*(float (__fastcall **)(MovieClip *))(*(_QWORD *)MovieClip + 88LL))(MovieClip);
      v17(v16, (float)(v15 / v18) * 0.95);
      String::String(&v21, "sound_tap_coins");
      SoundByName = LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v21, 0, v19);
      GameButton::setClickSound(a1, SoundByName);
      String::~String();
    }

    __int64 __fastcall ShopItem::getSpellData(__int64 a1, __int64 a2, const char *a3)
    {
      if ( (unsigned int)ShopItem::getTypeForData(*(ResetAccountMessage ***)(a1 + 264), a2, a3) )
        return 0;
      else
        return *(_QWORD *)(a1 + 264);
    }

    void __fastcall ShopItem::setPrice(__int64 a1, #1249 *a2, AreaEffectObject *a3)
    {
      __int64 v6; // x24
      #1395 *TextFieldByName; // x20
      tween::Bounce *PlayerAvatar; // x23
      const char *v9; // x2
      long double v10; // q0
      __int64 v11; // x0
      const char *ShopIconExportName; // x0
      const String *v13; // x2
      DisplayObject *MovieClip; // x25
      float v15; // s8
      float v16; // s9
      float v17; // s0
      long double v18; // q0
      int v19; // w24
      const #1355 *v20; // x4
      int ResourceCount; // w22
      __int64 v22; // x0
      long double TextWidth; // q0
      float v24; // s8
      float v25; // s9
      float MidX; // s10
      float v27; // s11
      long double v28; // q0
      float v29; // s2
      float v30; // s10
      #1249 *v31; // x19
      float v32; // s8
      long double Width; // q0
      Rect v34[2]; // [xsp+0h] [xbp-80h] BYREF
      __int128 v35; // [xsp+10h] [xbp-70h] BYREF
    
      v6 = *(_QWORD *)(a1 + 96);
      TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(v6, "cost");
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      *(__n128 *)&v10 = Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v9);
      if ( *(AreaEffectObject **)(a1 + 280) == a3 )
      {
        v19 = 0;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 296);
        if ( v11 )
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v11 + 8LL))(v11, v10);
        *(_QWORD *)(a1 + 296) = 0;
        ShopIconExportName = (const char *)LogicResourceData::getShopIconExportName((__int64)a3);
        MovieClip = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", ShopIconExportName, v13);
        *(_QWORD *)(a1 + 296) = MovieClip;
        LODWORD(v15) = COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName));
        v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(TextFieldByName)));
        v17 = (*(float (__fastcall **)(#1395 *))(*(_QWORD *)TextFieldByName + 96LL))(TextFieldByName);
        *(__n128 *)&v18 = DisplayObject::setXY(MovieClip, v15, (float)(v16 + (float)(v17 * 0.5)) + -5.0);
        (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v6 + 160LL))(v6, *(_QWORD *)(a1 + 296), v18);
        *(_QWORD *)(a1 + 280) = a3;
        v19 = 1;
      }
      ResourceCount = LogicClientAvatar::getResourceCount((__int64)PlayerAvatar, a3);
      v22 = *(_QWORD *)(a1 + 280);
      if ( v22 && (unsigned int)LogicResourceData::getPremiumCurrency(v22) )
        ResourceCount = LogicClientAvatar::getDiamonds(PlayerAvatar);
      if ( *(_DWORD *)(a1 + 292) != ResourceCount )
      {
        MovieClipHelper::setPriceText(TextFieldByName, *(#1271 **)(a1 + 296), a2, *(_QWORD *)(a1 + 280), v20);
        *(_DWORD *)(a1 + 292) = ResourceCount;
      }
      if ( *(_DWORD *)(a1 + 288) == (_DWORD)a2 )
      {
        if ( !v19 )
          return;
      }
      else
      {
        MovieClipHelper::setPriceText(TextFieldByName, *(#1271 **)(a1 + 296), a2, *(_QWORD *)(a1 + 280), v20);
        *(_DWORD *)(a1 + 288) = (_DWORD)a2;
      }
      Rect::Rect((Rect *)&v35);
      DisplayObject::getBounds(TextFieldByName, *(_QWORD *)(a1 + 96), &v35);
      Rect::Rect(v34);
      DisplayObject::getBounds(*(_QWORD *)(a1 + 296), *(_QWORD *)(a1 + 96), v34);
      TextWidth = TextField::getTextWidth(TextFieldByName);
      v24 = *(float *)&TextWidth;
      v25 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v34)));
      MidX = Rect::getMidX(&v35);
      v27 = Rect::getMidX(&v35);
      v28 = DisplayObject::getX(TextFieldByName);
      v29 = MidX + (float)(v24 * -0.5);
      v30 = (float)((float)(v24 + v25) + 5.0) * 0.5;
      DisplayObject::setX(TextFieldByName, (float)((float)(v27 - v30) - v29) + *(float *)&v28);
      v31 = *(#1249 **)(a1 + 296);
      v32 = Rect::getMidX(&v35);
      Width = Rect::getWidth(v34);
      DisplayObject::setX(v31, (float)(v30 + v32) + (float)(*(float *)&Width * -0.5));
      Rect::~Rect(v34);
      Rect::~Rect((Rect *)&v35);
    }

    void __fastcall ShopItem::~ShopItem(CancelChallengeMessage *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
    
      *(_QWORD *)this = off_10046BE80;
      v2 = *((_QWORD *)this + 37);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 37) = 0;
      v3 = *((_QWORD *)this + 39);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 39) = 0;
      v4 = *((_QWORD *)this + 38);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 33) = 0;
      *((_DWORD *)this + 68) = 0;
      memset((char *)this + 280, 0, 0x49u);
      GameButton::~GameButton(this);
    }

    // attributes: thunk
    void __fastcall ShopItem::~ShopItem(CancelChallengeMessage *this)
    {
      __ZN8ShopItemD2Ev(this);
    }

    void __fastcall ShopItem::~ShopItem(CancelChallengeMessage *this)
    {
      ShopItem::~ShopItem(this);
      operator delete(this);
    }

    BadgePopup *__fastcall ShopItem::buttonPressed(ResetAccountMessage ***a1)
    {
      __int64 v2; // x1
      const char *v3; // x2
      BadgePopup *result; // x0
      LogicClearChestSourceCommand *v5; // x20
      Stage *v6; // x0
      int *v7; // x0
      float v8; // s8
      __int64 v9; // x0
      BadgePopup *v10; // x0
      __int64 v11; // x0
      AreaEffectObject *v12; // x19
      String *Name; // x20
      const String *v14; // x3
      BillingManager *v15; // x20
      const String *v16; // x0
      __int64 v17; // x19
      BadgePopup *isWaitingForTransaction; // x0
      const char *v19; // x1
      Stage *Instance; // x19
      char *v21; // x0
      void *String; // x0
      String v23; // [xsp+0h] [xbp-60h] BYREF
      String v24; // [xsp+18h] [xbp-48h] BYREF
    
      GameButton::buttonPressed((CustomButton *)a1);
      result = (BadgePopup *)ShopItem::getTypeForData(a1[33], v2, v3);
      if ( (_DWORD)result == 3 )
      {
        if ( (unsigned int)ShopItem::canBeBought((ShopItem *)a1, 1) )
        {
          v12 = (AreaEffectObject *)a1[33];
          String::String(&v24, "purchasing");
          Name = (String *)LogicData::getName(v12);
          BillingManager::getStoreCountryCode(&v23, BillingManager::sm_pInstance);
          EventTracker::sendBillingEvent(&v24, Name, &v23, v14);
          String::~String();
          String::~String();
          v15 = (BillingManager *)BillingManager::sm_pInstance;
          v16 = (const String *)LogicData::getName(v12);
          return (BadgePopup *)BillingManager::buyProduct(v15, v16);
        }
        v17 = BillingManager::sm_pInstance;
        if ( (BillingManager::arePaymentsAvailable(BillingManager::sm_pInstance) & 1) != 0
          || (isWaitingForTransaction = (BadgePopup *)BillingManager::isWaitingForTransaction(v17),
              ((unsigned __int8)isWaitingForTransaction & 1) != 0) )
        {
          result = (BadgePopup *)BillingManager::arePaymentsAvailable(v17);
          if ( !(_DWORD)result )
            return result;
          result = (BadgePopup *)BillingManager::isWaitingForTransaction(v17);
          if ( !(_DWORD)result )
            return result;
          Instance = (Stage *)GUI::getInstance(result);
          v21 = "TID_IAP_TRANSACTION_PENDING";
        }
        else
        {
          Instance = (Stage *)GUI::getInstance(isWaitingForTransaction);
          v21 = "TID_IAP_NOT_AVAILABLE";
        }
        String = StringTable::getString((#1308 *)v21, v19);
        return (BadgePopup *)GUI::showCenteredFloaterText(
                               Instance,
                               (__int64)String,
                               0xFFFFFFFFLL,
                               COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      if ( (unsigned int)result <= 2 )
      {
        result = (BadgePopup *)ShopItem::canBeBought((ShopItem *)a1, 1);
        if ( (_DWORD)result )
        {
          v5 = (LogicClearChestSourceCommand *)operator new(288);
          v6 = ShopConfirmPopup::ShopConfirmPopup(v5, (const AreaEffectObject *)a1[33]);
          v7 = (int *)Stage::getInstance(v6);
          v8 = (float)v7[107] * 0.5;
          v9 = Stage::getInstance((Stage *)v7);
          DisplayObject::setPixelSnappedXY(v5, v8, (float)*(int *)(v9 + 432) * 0.5);
          v11 = GUI::getInstance(v10);
          return (BadgePopup *)GUI::showPopup(v11, v5, 1, 0, 0);
        }
      }
      return result;
    }

    __int64 __fastcall ShopItem::canBeBought(ResetAccountMessage ***a1, int a2)
    {
      __int64 PlayerAvatar; // x22
      __int64 Instance; // x0
      __int64 Home; // x21
      __int64 v7; // x19
      __int64 result; // x0
      int DataType; // w0
      __int64 *v10; // x23
      Stage *v11; // x19
      #1308 *CapFullTID; // x0
      const String *v13; // x1
      void *String; // x0
      BadgePopup *SpellBuyLimitReached; // x0
      const char *v16; // x1
      char *v17; // x0
      TextField *SpellByData; // x0
      int v19; // w20
      bool v20; // cc
    
      GameMode::getInstance();
      PlayerAvatar = GameMode::getPlayerAvatar();
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      if ( (unsigned int)LogicData::getDataType(a1[33]) == 2 )
      {
        v7 = BillingManager::sm_pInstance;
        if ( BillingManager::sm_pInstance
          && (unsigned int)BillingManager::arePaymentsAvailable(BillingManager::sm_pInstance) )
        {
          return (unsigned int)BillingManager::isWaitingForTransaction(v7) ^ 1;
        }
        return 0;
      }
      DataType = LogicData::getDataType(a1[33]);
      v10 = (__int64 *)a1[33];
      if ( DataType != 55 )
      {
        if ( (*(unsigned int (__fastcall **)(ResetAccountMessage **))(*v10 + 64))(a1[33]) )
        {
          SpellBuyLimitReached = (BadgePopup *)ShopItem::getSpellBuyLimitReached((CancelChallengeMessage *)a1);
          if ( (_DWORD)SpellBuyLimitReached )
          {
            if ( !a2 )
              return 0;
            v11 = (Stage *)GUI::getInstance(SpellBuyLimitReached);
            v17 = "TID_YOU_HAVE_ALREADY_BOUGHT_ALL_AVAILABLE_CARDS";
            goto LABEL_17;
          }
          SpellByData = (TextField *)LogicClientHome::getSpellByData(Home, a1[33]);
          if ( SpellByData )
          {
            v19 = *((_DWORD *)SpellByData + 4);
            v20 = v19 < (int)LogicSpell::getMaxMaterialCount(SpellByData);
            result = v20;
            if ( v20 || ((a2 ^ 1) & 1) != 0 )
              return result;
            v11 = (Stage *)GUI::getInstance((BadgePopup *)v20);
            v17 = "TID_CARD_CAP_REACHED";
    LABEL_17:
            String = StringTable::getString((#1308 *)v17, v16);
            goto LABEL_18;
          }
        }
        return 1;
      }
      result = LogicResourcePackData::fitsIntoResourceCap(a1[33], PlayerAvatar);
      if ( (result & 1) == 0 && ((a2 ^ 1) & 1) == 0 )
      {
        v11 = (Stage *)GUI::getInstance((BadgePopup *)result);
        CapFullTID = (#1308 *)LogicResourceData::getCapFullTID(v10[13]);
        String = StringTable::getString(CapFullTID, v13);
    LABEL_18:
        GUI::showCenteredFloaterText(v11, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        return 0;
      }
      return result;
    }

    BadgePopup *__fastcall ShopItem::update(__int64 a1, float a2)
    {
      float v4; // s0
      void (__fastcall *v5)(__int64, _QWORD); // x20
      int canBeBought; // w0
      BadgePopup *result; // x0
      __int64 Instance; // x0
      __int64 PopupByType; // x0
      __int64 v10; // x20
      #1257 *v11; // x0
      float v12; // s0
      float v13; // s2
      float v14; // s0
      __int64 MovieClipByName; // x0
      __int64 v16; // x0
      bool v17; // w20
      __int64 v18; // x8
      bool v19; // w20
      int SpellBuyLimitReached; // w20
      float v21; // [xsp+0h] [xbp-30h]
    
      ShopItem::setPrice(a1, (#1249 *)*(unsigned int *)(a1 + 288), *(AreaEffectObject **)(a1 + 280));
      v4 = *(float *)(a1 + 340) - a2;
      *(float *)(a1 + 340) = v4;
      if ( v4 <= 0.0 )
      {
        v5 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 152LL);
        canBeBought = ShopItem::canBeBought((ResetAccountMessage ***)a1, 0);
        v5(a1, canBeBought ^ 1u);
        *(_DWORD *)(a1 + 340) = 1077936128;
      }
      result = (BadgePopup *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 64LL))(*(_QWORD *)(a1 + 264));
      if ( (_DWORD)result )
      {
        Instance = GUI::getInstance(result);
        PopupByType = GUI::getPopupByType(Instance, 27);
        v10 = PopupByType;
        if ( PopupByType && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)PopupByType + 328LL))(PopupByType) == 27 )
        {
          if ( *(_QWORD *)(v10 + 232) == *(_QWORD *)(a1 + 264) )
          {
            MovieClip::gotoAndStop(*(MovieClip **)(a1 + 304), "hidden");
            *(_BYTE *)(*(_QWORD *)(a1 + 304) + 8LL) = 1;
          }
        }
        else
        {
          v11 = *(#1257 **)(a1 + 304);
          if ( v11 && (unsigned int)MovieClip::isStopped(v11) )
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 320) + 8LL) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 328) + 8LL) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 304) + 8LL) = 0;
          }
        }
        v12 = *(float *)(a1 + 336) - a2;
        v13 = 0.0;
        if ( v12 <= 0.0 )
          v12 = 0.0;
        *(float *)(a1 + 336) = v12;
        v14 = (float)(v12 + v12) + -1.0;
        if ( v14 <= 0.7 )
        {
          if ( v14 <= 0.6 )
          {
            if ( v14 <= 0.35 )
            {
              if ( v14 <= 0.15 )
                v13 = 0.0;
              else
                v13 = (float)((float)(v14 + -0.15) * -0.5) / 0.2;
            }
            else
            {
              v13 = (float)((float)(v14 + -0.35) * 4.0) + -0.5;
            }
          }
          else
          {
            v13 = (float)((float)((float)(v14 + -0.6) / -0.1) * 0.5) + 0.5;
          }
        }
        v21 = v13;
        MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "progress");
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)MovieClipByName + 48LL))(
          MovieClipByName,
          (float)(v21 * 0.3) + 1.0);
        v16 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "progress");
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v16 + 56LL))(v16, (float)(v21 * 0.075) + 1.0);
        if ( MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), "TID_NEXT_PRICE") )
        {
          v17 = *(float *)(a1 + 336) <= 0.65;
          *(_BYTE *)(MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), "TID_NEXT_PRICE") + 8) = v17;
        }
        v18 = *(_QWORD *)(a1 + 296);
        if ( v18 )
          *(_BYTE *)(v18 + 8) = *(float *)(a1 + 336) <= 0.6;
        if ( MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), "cost") )
        {
          v19 = *(float *)(a1 + 336) <= 0.6;
          *(_BYTE *)(MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), "cost") + 8) = v19;
        }
        SpellBuyLimitReached = ShopItem::getSpellBuyLimitReached((CancelChallengeMessage *)a1);
        result = (BadgePopup *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "progress");
        *((_BYTE *)result + 8) = SpellBuyLimitReached ^ 1;
        if ( SpellBuyLimitReached )
        {
          *(_BYTE *)(MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), "TID_NEXT_PRICE") + 8) = 0;
          result = (BadgePopup *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), "cost");
          *((_BYTE *)result + 8) = 0;
          *(_BYTE *)(*(_QWORD *)(a1 + 296) + 8LL) = 0;
        }
      }
      return result;
    }

    bool __fastcall ShopItem::getSpellBuyLimitReached(CancelChallengeMessage *this)
    {
      const char *v2; // x1
      InitState *v3; // x20
      __int64 Instance; // x0
      __int64 Home; // x0
      int ShopSpellBuyTimes; // w19
      int v7; // w22
      __int64 Rarity; // x21
      __int64 v9; // x20
    
      if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 64LL))(*((_QWORD *)this + 33)) & 1) == 0 )
        Debugger::error((__siginfo *)"invalid type", v2);
      v3 = (InitState *)*((_QWORD *)this + 33);
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      ShopSpellBuyTimes = LogicClientHome::getShopSpellBuyTimes(Home, v3);
      v7 = *(_DWORD *)(LogicDataTables::getGlobals() + 456);
      Rarity = LogicSpellData::getRarity(v3);
      if ( Rarity == LogicDataTables::getRarityRare() )
        v7 = *(_DWORD *)(LogicDataTables::getGlobals() + 452);
      v9 = LogicSpellData::getRarity(v3);
      if ( v9 == LogicDataTables::getRarityEpic() )
        v7 = *(_DWORD *)(LogicDataTables::getGlobals() + 448);
      return ShopSpellBuyTimes >= v7;
    }

    __int64 __fastcall ShopItem::getData(CancelChallengeMessage *this)
    {
      return *((_QWORD *)this + 33);
    }

    TextField *__fastcall ShopItem::setPriceLocalCurrency(CancelChallengeMessage *this)
    {
      TextField *result; // x0
      const char *v3; // x1
      #1271 *v4; // x19
      void *String; // x1
      bool v6; // zf
      __int64 Font; // x0
      int v8; // w0
      const String *v9; // x8
      const String *v10; // x1
    
      result = (TextField *)MovieClip::getTextFieldByName(*((_QWORD *)this + 12), "cost");
      v4 = result;
      if ( *((_BYTE *)this + 352) )
      {
        if ( result )
        {
          String = StringTable::getString((#1308 *)"TID_ANDROID_BILLING_PRODUCT_NOT_AVAILABLE_PRICE", v3);
          return (TextField *)MovieClipHelper::setTextAndScaleIfNecessary(v4, String, 0);
        }
      }
      else
      {
        if ( result )
          v6 = *((_QWORD *)this + 43) == 0;
        else
          v6 = 1;
        if ( v6 )
          Debugger::error((__siginfo *)"ShopItem - Can't get localized price billingProduct is NULL", v3);
        Font = TextField::getFont(result);
        v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Font + 24LL))(Font, *((_QWORD *)this + 43) + 48LL);
        v9 = (const String *)*((_QWORD *)this + 43);
        if ( v8 )
          v10 = v9 + 2;
        else
          v10 = v9 + 1;
        return (TextField *)TextField::setText(v4, v10);
      }
      return result;
    }

    __int64 __fastcall ShopItem::cardBoughtAnimation(CancelChallengeMessage *this)
    {
      __int64 result; // x0
    
      *(_BYTE *)(*((_QWORD *)this + 40) + 8LL) = 0;
      *(_BYTE *)(*((_QWORD *)this + 41) + 8LL) = 0;
      result = MovieClip::playOnce(*((MovieClip **)this + 38));
      *((_DWORD *)this + 84) = 1065353216;
      return result;
    }

}; // end class ShopItem
