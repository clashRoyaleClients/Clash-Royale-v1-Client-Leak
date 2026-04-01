class ShopConfirmPopup
{
public:

    __int64 __fastcall ShopConfirmPopup::ShopConfirmPopup(__int64 a1, ResetAccountMessage **a2)
    {
      __int64 v4; // x1
      const char *v5; // x2
      const char *v6; // x2
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x0
      #1257 *v9; // x0
      __int64 v10; // x0
      String v12; // [xsp+0h] [xbp-40h] BYREF
      String v13; // [xsp+18h] [xbp-28h] BYREF
    
      String::String(&v13, "sc/ui.sc");
      String::String(&v12, "popup_shop_confirm");
      PopupBase::PopupBase(a1, &v13, &v12);
      String::~String();
      String::~String();
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)a1 = off_10046F9E0;
      *(_QWORD *)(a1 + 96) = &off_10046FBB8;
      *(_DWORD *)(a1 + 240) = 0;
      *(_DWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 232) = a2;
      switch ( (unsigned int)ShopItem::getTypeForData(a2, v4, v5) )
      {
        case 0u:
          ShopConfirmPopup::initSpell((ShopConfirmPopup *)a1);
          break;
        case 1u:
          ShopConfirmPopup::initChest((LogicClearChestSourceCommand *)a1);
          break;
        case 2u:
          ShopConfirmPopup::initResource((ShopConfirmPopup *)a1);
          break;
        case 3u:
          Debugger::doAssert(0, (bool)"invalid confirm", v6);
          break;
        default:
          break;
      }
      MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "darken_grad");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 64) = 0;
      v9 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      v10 = MovieClip::getMovieClipByName(v9, "darken_spot");
      if ( v10 )
        *(_BYTE *)(v10 + 64) = 0;
      return a1;
    }

    __int64 __fastcall ShopConfirmPopup::initSpell(__int64 a1, __int64 a2, const char *a3)
    {
      _BOOL8 v4; // x0
      const char *v5; // x2
      InitState *v6; // x19
      #1257 *MovieClip; // x20
      String *IconFileName; // x0
      const String *v9; // x2
      #1249 *v10; // x21
      __int64 MovieClipByName; // x0
      float v12; // s8
      void (__fastcall *v13)(#1249 *, float); // x22
      float v14; // s0
      const char *v15; // x1
      void *String; // x21
      #1308 *TID; // x0
      const String *v18; // x1
      #1308 *v19; // x0
      __int64 Instance; // x0
      __int64 Home; // x0
      int ShopSpellBuyTimes; // w0
      LogicKickAllianceMemberCommand *CostInShop; // x0
      const #1355 *GoldData; // x0
      __int64 v25; // x0
      __int64 v26; // x0
      unsigned int *SpellByData; // x0
      unsigned int *v28; // x21
      String *v29; // x24
      __int64 MaterialCountForNextLevel; // x22
      InitState *v31; // x25
      __int64 v32; // x0
      __int64 v33; // x0
      int v34; // w23
      int v35; // w27
      __int64 Rarity; // x26
      __int64 v37; // x25
      const char *v38; // x1
      String *v39; // x23
      void *v40; // x25
      int v41; // w1
      void *v42; // x25
      int v43; // w1
      int v44; // w1
      const char *v45; // x1
      MovieClip *v46; // x0
      MovieClip *v47; // x20
      int FrameIndex; // w22
      int v49; // w23
      __int64 v50; // x0
      const char *v51; // x1
      __int64 UpgradeMaterialCount; // x19
      __int64 v53; // x24
      int v54; // w3
      const char *v55; // x1
      int v56; // w3
      const String *v57; // x0
      int v58; // w19
      int v59; // w19
      __int64 result; // x0
      String v61; // [xsp+10h] [xbp-180h] BYREF
      String v62; // [xsp+28h] [xbp-168h] BYREF
      String v63; // [xsp+40h] [xbp-150h] BYREF
      _QWORD v64[3]; // [xsp+58h] [xbp-138h] BYREF
      String v65; // [xsp+70h] [xbp-120h] BYREF
      String v66; // [xsp+88h] [xbp-108h] BYREF
      _QWORD v67[3]; // [xsp+A0h] [xbp-F0h] BYREF
      String v68; // [xsp+B8h] [xbp-D8h] BYREF
      String v69; // [xsp+D0h] [xbp-C0h] BYREF
      String v70; // [xsp+E8h] [xbp-A8h] BYREF
      String v71; // [xsp+100h] [xbp-90h] BYREF
      String v72; // [xsp+118h] [xbp-78h] BYREF
    
      v4 = (unsigned int)ShopItem::getTypeForData(*(ResetAccountMessage ***)(a1 + 232), a2, a3) == 0;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      v6 = *(InitState **)(a1 + 232);
      MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      *(_QWORD *)(a1 + 248) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "buy_button", 1);
      *(_QWORD *)(a1 + 256) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "info_btn", 1);
      String::String(&v72, "sc/ui_spells.sc");
      IconFileName = (String *)LogicSpellData::getIconFileName(v6);
      v10 = StringTable::getMovieClip((#1308 *)&v72, IconFileName, v9);
      String::~String();
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "item");
      v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)MovieClipByName
                                                                                                + 88LL))(MovieClipByName)));
      MovieClip::changeTimelineChild(MovieClip, "item", v10);
      v13 = *(void (__fastcall **)(#1249 *, float))(*(_QWORD *)v10 + 40LL);
      v14 = (*(float (__fastcall **)(#1249 *))(*(_QWORD *)v10 + 88LL))(v10);
      v13(v10, (float)(v12 / v14) * 0.95);
      String = StringTable::getString((#1308 *)"TID_TEXT_BUY_CARD", v15);
      String::String(&v70, "<name>");
      TID = (#1308 *)LogicData::getTID((__int64)v6);
      v19 = StringTable::getString(TID, v18);
      String::replace(&v71, String, &v70, v19);
      MovieClip::setText(MovieClip, "text", &v71);
      String::~String();
      String::~String();
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      ShopSpellBuyTimes = LogicClientHome::getShopSpellBuyTimes(Home, v6);
      CostInShop = (LogicKickAllianceMemberCommand *)LogicSpellData::getCostInShop(v6, ShopSpellBuyTimes);
      LODWORD(String) = (_DWORD)CostInShop;
      GoldData = (const #1355 *)LogicDataTables::getGoldData(CostInShop);
      ShopConfirmPopup::setPrice((LogicClearChestSourceCommand *)a1, (int)String, GoldData);
      v25 = GameMode::getInstance();
      v26 = LogicGameMode::getHome(*(UnlockAccountPopup **)(v25 + 112));
      SpellByData = (unsigned int *)LogicClientHome::getSpellByData(v26, v6);
      v28 = SpellByData;
      if ( SpellByData )
      {
        v29 = (String *)SpellByData[4];
        MaterialCountForNextLevel = LogicSpell::getMaterialCountForNextLevel((TextField *)SpellByData);
      }
      else
      {
        MaterialCountForNextLevel = 0;
        v29 = 0;
      }
      v31 = *(InitState **)(a1 + 232);
      v32 = GameMode::getInstance();
      v33 = LogicGameMode::getHome(*(UnlockAccountPopup **)(v32 + 112));
      v34 = LogicClientHome::getShopSpellBuyTimes(v33, v31);
      v35 = *(_DWORD *)(LogicDataTables::getGlobals() + 456);
      Rarity = LogicSpellData::getRarity(v31);
      if ( Rarity == LogicDataTables::getRarityRare() )
        v35 = *(_DWORD *)(LogicDataTables::getGlobals() + 452);
      v37 = LogicSpellData::getRarity(v31);
      if ( v37 == LogicDataTables::getRarityEpic() )
        v35 = *(_DWORD *)(LogicDataTables::getGlobals() + 448);
      v39 = (String *)(unsigned int)(v35 - v34);
      if ( (int)v39 > 1 )
      {
        v42 = StringTable::getString((#1308 *)"TID_TEXT_SPELLS_LEFT", v38);
        String::String(&v65, "<amount>");
        String::valueOf(v64, v39, v43);
        String::replace(&v66, v42, &v65, v64);
        MovieClip::setText(MovieClip, "conditions", &v66);
        String::~String();
        String::~String();
      }
      else
      {
        v40 = StringTable::getString((#1308 *)"TID_TEXT_SPELLS_LEFT_SINGLE", v38);
        String::String(&v68, "<amount>");
        String::valueOf(v67, v39, v41);
        String::replace(&v69, v40, &v68, v67);
        MovieClip::setText(MovieClip, "conditions", &v69);
        String::~String();
        String::~String();
      }
      String::~String();
      String::valueOf(&v63, v29, v44);
      MovieClip::setText(MovieClip, "cards_left", &v63);
      String::~String();
      String::format((String *)"/%d", v45, MaterialCountForNextLevel);
      MovieClip::setText(MovieClip, "next_upgrade", &v62);
      String::~String();
      v46 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "frame");
      MovieClip::gotoAndStopFrameIndex(v46, 0);
      v47 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "progress");
      MovieClip::gotoAndStopFrameIndex(v47, 0);
      FrameIndex = MovieClip::getFrameIndex(v47, "progress_full");
      v49 = MovieClip::getFrameIndex(v47, "max_level");
      v50 = LogicSpellData::getRarity(v6);
      UpgradeMaterialCount = LogicRarityData::getUpgradeMaterialCount(v50, 0);
      if ( v28 )
      {
        v53 = v28[4];
        UpgradeMaterialCount = LogicSpell::getMaterialCountForNextLevel((TextField *)v28);
      }
      else
      {
        v53 = 0;
      }
      String::format((String *)"%d/%d", v51, v53, UpgradeMaterialCount);
      MovieClip::setText(v47, "card_count", &v61);
      String::~String();
      if ( v28 )
      {
        if ( LogicSpell::isLevelMax((TextField *)v28) )
        {
          v57 = (const String *)StringTable::getString((#1308 *)"TID_SPELL_MAX_LEVEL", v55);
          MovieClip::setText(v47, "card_count", v57);
          MovieClip::gotoAndStopFrameIndex(v47, 0);
        }
        v58 = LogicMath::clamp(
                (#1237 *)(unsigned int)((int)v53 * FrameIndex / (int)UpgradeMaterialCount),
                0,
                FrameIndex,
                v56);
        v59 = v58 - ((v58 == FrameIndex) & (LogicSpell::canUpgrade((TextField *)v28) ^ 1));
        if ( LogicSpell::isLevelMax((TextField *)v28) )
          v59 = v49;
      }
      else
      {
        v59 = LogicMath::clamp(
                (#1237 *)(unsigned int)((int)v53 * FrameIndex / (int)UpgradeMaterialCount),
                0,
                FrameIndex,
                v54);
      }
      MovieClip::gotoAndStopFrameIndex(v47, v59);
      if ( v59 >= FrameIndex )
        MovieClip::stopAll(v47);
      result = MovieClip::getMovieClipByName(v47, "lock");
      if ( result )
        *(_BYTE *)(result + 8) = 0;
      return result;
    }

    void __fastcall ShopConfirmPopup::initChest(ResetAccountMessage ***this, __int64 a2, const char *a3)
    {
      _BOOL8 v4; // x0
      const char *v5; // x2
      _QWORD *v6; // x20
      const String *v7; // x2
      #1257 *MovieClip; // x21
      #1257 *v9; // x0
      __int64 MovieClipByName; // x0
      ResourceManager *FileName; // x22
      const String *ExportName; // x0
      const String *v13; // x2
      #1249 *v14; // x0
      const char *v15; // x1
      void *String; // x22
      #1308 *TID; // x0
      const String *v18; // x1
      #1308 *v19; // x0
      __int64 Arena; // x0
      #1308 *v21; // x0
      const String *v22; // x1
      #1308 *v23; // x0
      #1308 *v24; // x0
      const String *v25; // x1
      #1308 *v26; // x0
      String *TotalSpellCount; // x23
      __int64 RarityRare; // x0
      String *MinSpellCountForRarity; // x22
      __int64 RarityEpic; // x0
      String *v31; // x21
      __int64 v32; // x24
      HomeScreen *Globals; // x0
      const char *v34; // x1
      int MinGold; // w24
      __int64 v36; // x24
      __int64 MaxGold; // x0
      const char *v38; // x1
      String *v39; // x0
      int v40; // w1
      int v41; // w1
      int v42; // w1
      int v43; // w1
      __int64 v44; // x0
      #1395 *TextFieldByName; // x0
      const String *v46; // x2
      LogicKickAllianceMemberCommand *ShopPrice; // x0
      int v48; // w21
      const #1355 *DiamondData; // x0
      const String *v50; // x2
      const char *AnimExportName; // x8
      #1257 *v52; // x20
      __int64 v53; // x0
      __int64 v54; // x0
      __int64 v55; // x0
      #1257 *v56; // x0
      __int64 v57; // x0
      #1257 *v58; // x0
      #1257 *v59; // x0
      String v60; // [xsp+18h] [xbp-208h] BYREF
      String v61; // [xsp+30h] [xbp-1F0h] BYREF
      String v62; // [xsp+48h] [xbp-1D8h] BYREF
      String v63; // [xsp+60h] [xbp-1C0h] BYREF
      String v64; // [xsp+78h] [xbp-1A8h] BYREF
      String v65; // [xsp+90h] [xbp-190h] BYREF
      String v66; // [xsp+A8h] [xbp-178h] BYREF
      String v67; // [xsp+C0h] [xbp-160h] BYREF
      String v68; // [xsp+D8h] [xbp-148h] BYREF
      String v69; // [xsp+F0h] [xbp-130h] BYREF
      String v70; // [xsp+108h] [xbp-118h] BYREF
      String v71; // [xsp+120h] [xbp-100h] BYREF
      String v72; // [xsp+150h] [xbp-D0h] BYREF
      String v73; // [xsp+168h] [xbp-B8h] BYREF
      String v74; // [xsp+180h] [xbp-A0h] BYREF
      String v75; // [xsp+198h] [xbp-88h] BYREF
      String v76; // [xsp+1B0h] [xbp-70h] BYREF
      String v77; // [xsp+1C8h] [xbp-58h] BYREF
    
      v4 = (unsigned int)ShopItem::getTypeForData(*(this + 29), a2, a3) == 1;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      v6 = *(this + 29);
      String::String(&v77, "sc/ui.sc");
      String::String(&v76, "popup_shop_chest_confirm");
      MovieClip = StringTable::getMovieClip((#1308 *)&v77, &v76, v7);
      String::~String();
      String::~String();
      ((void (__fastcall *)(ResetAccountMessage ***, #1257 *))(*this)[34])(this, MovieClip);
      *(this + 31) = (ResetAccountMessage **)DropGUIContainer::addGameButton((DropGUIContainer *)this, "buy_button", 1);
      v9 = (#1257 *)GUIContainer::getMovieClip((#1254 *)this);
      MovieClipByName = MovieClip::getMovieClipByName(v9, "info_btn");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = 0;
      FileName = (ResourceManager *)LogicTreasureChestData::getFileName((__int64)v6);
      ExportName = (const String *)LogicTreasureChestData::getExportName((__int64)v6);
      v14 = (#1249 *)ResourceManager::getMovieClip(FileName, ExportName, v13);
      MovieClip::changeTimelineChild(MovieClip, "item", v14);
      String = StringTable::getString((#1308 *)"TID_TEXT_BUY_CHEST", v15);
      String::String(&v74, "<name>");
      TID = (#1308 *)LogicData::getTID((__int64)v6);
      v19 = StringTable::getString(TID, v18);
      String::replace(&v75, String, &v74, v19);
      MovieClip::setText(MovieClip, "text", &v75);
      String::~String();
      String::~String();
      Arena = LogicTreasureChestData::getArena((__int64)v6);
      v21 = (#1308 *)LogicData::getTID(Arena);
      v23 = StringTable::getString(v21, v22);
      MovieClip::setText(MovieClip, "arena", (const String *)v23);
      v24 = (#1308 *)LogicData::getTID((__int64)v6);
      v26 = StringTable::getString(v24, v25);
      MovieClip::setText(MovieClip, "title", (const String *)v26);
      TotalSpellCount = (String *)LogicTreasureChestData::getTotalSpellCount((__int64)v6);
      RarityRare = LogicDataTables::getRarityRare();
      MinSpellCountForRarity = (String *)LogicTreasureChestData::getMinSpellCountForRarity((__int64)v6, RarityRare);
      RarityEpic = LogicDataTables::getRarityEpic();
      v31 = (String *)LogicTreasureChestData::getMinSpellCountForRarity((__int64)v6, RarityEpic);
      String::String(&v73);
      v32 = LogicTreasureChestData::getArena((__int64)v6);
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      if ( v32 == LogicGlobals::getStartingArena(Globals) )
      {
        StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_BASIC", v34);
        String::operator=(&v73);
      }
      else if ( (_DWORD)v31 == 1 )
      {
        StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_ONE_EPIC", v34);
        String::operator=(&v73);
      }
      else if ( (int)v31 < 2 )
      {
        if ( (_DWORD)MinSpellCountForRarity == 1 )
        {
          StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_ONE_RARE", v34);
          String::operator=(&v73);
        }
        else
        {
          if ( (int)MinSpellCountForRarity < 2 )
            StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_BASIC", v34);
          else
            StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_MULTIPLE_RARES", v34);
          String::operator=(&v73);
        }
      }
      else
      {
        StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_MULTIPLE_EPICS", v34);
        String::operator=(&v73);
      }
      String::String(&v72);
      MinGold = LogicTreasureChestData::getMinGold((__int64)v6);
      if ( MinGold >= (int)LogicTreasureChestData::getMaxGold((__int64)v6) )
      {
        v39 = (String *)LogicTreasureChestData::getMinGold((__int64)v6);
        String::valueOf(&v71, v39, v40);
        String::operator=(&v72);
        String::~String();
      }
      else
      {
        v36 = LogicTreasureChestData::getMinGold((__int64)v6);
        MaxGold = LogicTreasureChestData::getMaxGold((__int64)v6);
        String::format((String *)"%d-%d", v38, v36, MaxGold);
        String::operator=(&v72);
        String::~String();
      }
      String::String(&v66, "<GOLD_COUNT>");
      String::replace(&v67, &v73, &v66, &v72);
      String::String(&v65, "<CARD_COUNT>");
      String::valueOf(&v64, TotalSpellCount, v41);
      String::replace(&v68, &v67, &v65, &v64);
      String::String(&v63, "<RARE_COUNT>");
      String::valueOf(&v62, MinSpellCountForRarity, v42);
      String::replace(&v69, &v68, &v63, &v62);
      String::String(&v61, "<EPIC_COUNT>");
      String::valueOf(&v60, v31, v43);
      String::replace(&v70, &v69, &v61, &v60);
      String::operator=(&v73);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      v44 = GUIContainer::getMovieClip((#1254 *)this);
      TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(v44, "text");
      MovieClipHelper::setTextVerticallyCentered(TextFieldByName, &v73, v46);
      ShopPrice = (LogicKickAllianceMemberCommand *)LogicTreasureChestData::getShopPrice(v6);
      v48 = (int)ShopPrice;
      DiamondData = (const #1355 *)LogicDataTables::getDiamondData(ShopPrice);
      ShopConfirmPopup::setPrice((LogicClearChestSourceCommand *)this, v48, DiamondData);
      AnimExportName = (const char *)LogicTreasureChestData::getAnimExportName((__int64)v6);
      if ( *(_DWORD *)AnimExportName )
      {
        v52 = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui_chest.sc", AnimExportName, v50);
        v53 = MovieClip::getMovieClipByName(v52, "glow_common");
        if ( v53 )
          *(_BYTE *)(v53 + 8) = 0;
        v54 = MovieClip::getMovieClipByName(v52, "glow_rare");
        if ( v54 )
          *(_BYTE *)(v54 + 8) = 0;
        v55 = MovieClip::getMovieClipByName(v52, "glow_epic");
        if ( v55 )
          *(_BYTE *)(v55 + 8) = 0;
        v56 = (#1257 *)GUIContainer::getMovieClip((#1254 *)this);
        MovieClip::changeTimelineChild(v56, "chest", v52);
        MovieClip::gotoAndPlay(v52, 0, "idle");
        v57 = MovieClip::getMovieClipByName(v52, "cards_left");
        if ( v57 )
          *(_BYTE *)(v57 + 8) = 0;
      }
      v58 = (#1257 *)GUIContainer::getMovieClip((#1254 *)this);
      if ( MovieClip::getMovieClipByName(v58, "chest") )
      {
        v59 = (#1257 *)GUIContainer::getMovieClip((#1254 *)this);
        *(_BYTE *)(MovieClip::getMovieClipByName(v59, "chest") + 64) = 0;
      }
      String::~String();
      String::~String();
    }

    __int64 __fastcall ShopConfirmPopup::initResource(int *a1, __int64 a2, const char *a3)
    {
      _BOOL8 v4; // x0
      const char *v5; // x2
      __int64 v6; // x21
      const String *v7; // x2
      #1257 *MovieClip; // x20
      #1257 *v9; // x0
      __int64 MovieClipByName; // x0
      MovieClip *v11; // x0
      #1308 *TID; // x0
      const String *v13; // x1
      #1308 *String; // x0
      String *IconFileName; // x0
      const String *v16; // x2
      #1249 *v17; // x22
      __int64 v18; // x0
      float v19; // s8
      void (__fastcall *v20)(#1249 *, float); // x23
      float v21; // s0
      const char *v22; // x1
      void *v23; // x22
      #1308 *v24; // x0
      const String *v25; // x1
      #1308 *v26; // x0
      int v27; // w1
      const char *v28; // x1
      void *v29; // x22
      #1308 *v30; // x0
      const String *v31; // x1
      #1308 *v32; // x0
      int v33; // w1
      HomeScreen *Globals; // x0
      LogicKickAllianceMemberCommand *ResourceDiamondCost; // x0
      int v36; // w20
      const #1355 *DiamondData; // x0
      _QWORD v39[3]; // [xsp+0h] [xbp-190h] BYREF
      String v40; // [xsp+18h] [xbp-178h] BYREF
      String v41; // [xsp+30h] [xbp-160h] BYREF
      _QWORD v42[3]; // [xsp+48h] [xbp-148h] BYREF
      String v43; // [xsp+60h] [xbp-130h] BYREF
      _QWORD v44[3]; // [xsp+78h] [xbp-118h] BYREF
      String v45; // [xsp+90h] [xbp-100h] BYREF
      String v46; // [xsp+A8h] [xbp-E8h] BYREF
      _QWORD v47[3]; // [xsp+C0h] [xbp-D0h] BYREF
      String v48; // [xsp+D8h] [xbp-B8h] BYREF
      String v49; // [xsp+F0h] [xbp-A0h] BYREF
      String v50; // [xsp+108h] [xbp-88h] BYREF
      String v51; // [xsp+120h] [xbp-70h] BYREF
      String v52; // [xsp+138h] [xbp-58h] BYREF
    
      v4 = (unsigned int)ShopItem::getTypeForData(*((ResetAccountMessage ***)a1 + 29), a2, a3) == 2;
      Debugger::doAssert((Debugger *)v4, (bool)"", v5);
      v6 = *((_QWORD *)a1 + 29);
      a1[60] = *(_DWORD *)(v6 + 112);
      String::String(&v52, "sc/ui.sc");
      String::String(&v51, "popup_shop_resource_confirm");
      MovieClip = StringTable::getMovieClip((#1308 *)&v52, &v51, v7);
      String::~String();
      String::~String();
      (*(void (__fastcall **)(int *, #1257 *))(*(_QWORD *)a1 + 272LL))(a1, MovieClip);
      *((_QWORD *)a1 + 31) = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "buy_button", 1);
      v9 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClipByName = MovieClip::getMovieClipByName(v9, "info_btn");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = 0;
      v11 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "frame");
      MovieClip::gotoAndStopFrameIndex(v11, 0);
      TID = (#1308 *)LogicData::getTID(v6);
      String = StringTable::getString(TID, v13);
      MovieClip::setText(MovieClip, "resource_title", (const String *)String);
      MovieClip::setNumberText(MovieClip, "resource_count", a1[60], 0);
      String::String(&v50, "");
      MovieClip::setText(MovieClip, "TID_YOU_HAVE", &v50);
      String::~String();
      String::String(&v49, "sc/ui_spells.sc");
      IconFileName = (String *)LogicResourcePackData::getIconFileName(v6);
      v17 = StringTable::getMovieClip((#1308 *)&v49, IconFileName, v16);
      String::~String();
      v18 = MovieClip::getMovieClipByName(MovieClip, "item");
      v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v18 + 88LL))(v18)));
      MovieClip::changeTimelineChild(MovieClip, "item", v17);
      v20 = *(void (__fastcall **)(#1249 *, float))(*(_QWORD *)v17 + 40LL);
      v21 = (*(float (__fastcall **)(#1249 *))(*(_QWORD *)v17 + 88LL))(v17);
      v20(v17, (float)(v19 / v21) * 0.95);
      v23 = StringTable::getString((#1308 *)"TID_TEXT_BUY_RESOURCES", v22);
      String::String(&v46, "<name>");
      v24 = (#1308 *)LogicData::getTID(v6);
      v26 = StringTable::getString(v24, v25);
      String::replace(v47, v23, &v46, v26);
      String::String(&v45, "<amount>");
      String::valueOf(v44, (String *)(unsigned int)a1[60], v27);
      String::replace(&v48, v47, &v45, v44);
      MovieClip::setText(MovieClip, "text", &v48);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      v29 = StringTable::getString((#1308 *)"TID_TEXT_BUY_RESOURCE_COUNT", v28);
      String::String(&v41, "<resource>");
      v30 = (#1308 *)LogicData::getTID(*(_QWORD *)(v6 + 104));
      v32 = StringTable::getString(v30, v31);
      String::replace(v42, v29, &v41, v32);
      String::String(&v40, "<amount>");
      String::valueOf(v39, (String *)(unsigned int)a1[60], v33);
      String::replace(&v43, v42, &v40, v39);
      MovieClip::setText(MovieClip, "conditions", &v43);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      ResourceDiamondCost = (LogicKickAllianceMemberCommand *)LogicGlobals::getResourceDiamondCost(Globals, a1[60]);
      v36 = (int)ResourceDiamondCost;
      DiamondData = (const #1355 *)LogicDataTables::getDiamondData(ResourceDiamondCost);
      return ShopConfirmPopup::setPrice((LogicClearChestSourceCommand *)a1, v36, DiamondData);
    }

    // attributes: thunk
    void __fastcall ShopConfirmPopup::ShopConfirmPopup(ShopConfirmPopup *this, ResetAccountMessage **a2)
    {
      __ZN16ShopConfirmPopupC2EPK9LogicData((__int64)this, a2);
    }

    void __fastcall ShopConfirmPopup::~ShopConfirmPopup(LogicClearChestSourceCommand *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      *(_QWORD *)this = off_10046F9E0;
      *((_QWORD *)this + 12) = &off_10046FBB8;
      v4 = *((_QWORD *)this + 35);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 35) = 0;
      v5 = *((_QWORD *)this + 31);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 31) = 0;
      v6 = *((_QWORD *)this + 32);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_DWORD *)this + 60) = 0;
      *((_DWORD *)this + 68) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 31) = 0;
      PopupBase::~PopupBase(this, a2, a3);
    }

    // attributes: thunk
    void __fastcall ShopConfirmPopup::~ShopConfirmPopup(LogicClearChestSourceCommand *this, __int64 a2, const char *a3)
    {
      __ZN16ShopConfirmPopupD2Ev(this, a2, a3);
    }

    void __fastcall ShopConfirmPopup::~ShopConfirmPopup(LogicClearChestSourceCommand *this, __int64 a2, const char *a3)
    {
      ShopConfirmPopup::~ShopConfirmPopup(this, a2, a3);
      operator delete(this);
    }

    __int64 __fastcall ShopConfirmPopup::touchReleased(__int64 a1, __int64 a2)
    {
      PopupBase::touchReleased(a1, a2);
      return 1;
    }

    void __fastcall ShopConfirmPopup::buttonClicked(LogicClearChestSourceCommand *this, #1251 *a2, const char *a3)
    {
      int TypeForData; // w0
      const char *v5; // x2
      LogicBuyChestCommand *v6; // x20
      __int64 v7; // x20
      __int64 Instance; // x0
      __int64 Home; // x0
      LogicSpell *SpellByData; // x19
      char v11; // w21
      const char *v12; // x2
      SpellInfoPopup *v13; // x20
      BadgePopup *v14; // x0
      __int64 v15; // x0
      __int64 v16; // x21
      __int64 v17; // x0
      long double v18; // q0
    
      if ( *((#1251 **)this + 32) == a2 )
      {
        v7 = *((_QWORD *)this + 29);
        Instance = GameMode::getInstance();
        Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
        SpellByData = (LogicSpell *)LogicClientHome::getSpellByData(Home, v7);
        if ( SpellByData )
        {
          v11 = 1;
        }
        else
        {
          SpellByData = (LogicSpell *)operator new(48);
          LogicSpell::LogicSpell(SpellByData);
          LogicSpell::setSpellData(SpellByData, v7);
          *((_DWORD *)SpellByData + 2) = 0;
          LogicSpell::setMaterialCount(SpellByData, 1, v12);
          v11 = 0;
        }
        v13 = (SpellInfoPopup *)operator new(288);
        SpellInfoPopup::SpellInfoPopup(v13, SpellByData, 0, 0);
        v15 = GUI::getInstance(v14);
        GUI::showPopup(v15, v13, 0, 0, 0);
        if ( (v11 & 1) == 0 )
          operator delete(SpellByData);
      }
      else if ( *((#1251 **)this + 31) == a2 )
      {
        TypeForData = ShopItem::getTypeForData(*((ResetAccountMessage ***)this + 29), (__int64)a2, a3);
        if ( TypeForData == 2 )
        {
          v16 = *((_QWORD *)this + 29);
          v6 = (LogicBuyChestCommand *)operator new(40);
          LogicBuyResourcePackCommand::LogicBuyResourcePackCommand((__int64)v6, v16);
        }
        else if ( TypeForData == 1 )
        {
          v6 = (LogicBuyChestCommand *)operator new(40);
          LogicBuyChestCommand::LogicBuyChestCommand(v6, *((const LogicRefreshAchievementsCommand **)this + 29));
        }
        else
        {
          if ( TypeForData )
          {
            *(__n128 *)&v18 = Debugger::doAssert(0, (bool)"invalid type", v5);
            goto LABEL_17;
          }
          v6 = (LogicBuyChestCommand *)operator new(40);
          LogicBuyCardCommand::LogicBuyCardCommand((__int64)v6, *((_QWORD *)this + 29));
        }
        v17 = GameMode::getInstance();
        GameMode::addCommand(v17, v6, 1);
    LABEL_17:
        (*(void (__fastcall **)(LogicClearChestSourceCommand *, long double))(*(_QWORD *)this + 352LL))(this, v18);
      }
    }

    // attributes: thunk
    MiniTimer *__fastcall ShopConfirmPopup::update(MiniTimer *this, long double a2)
    {
      return PopupBase::update(this, a2);
    }

    void __fastcall ShopConfirmPopup::setPrice(LogicClearChestSourceCommand *this, #1249 *a2, const #1355 *a3)
    {
      #1395 *TextFieldByName; // x20
      tween::Bounce *PlayerAvatar; // x23
      const char *v8; // x2
      long double v9; // q0
      __int64 v10; // x0
      const char *ShopIconExportName; // x0
      const String *v12; // x2
      DisplayObject *MovieClip; // x24
      float v14; // s8
      float v15; // s9
      float v16; // s0
      long double v17; // q0
      int v18; // w24
      const #1355 *v19; // x4
      __int64 v20; // x0
      __int64 v21; // x0
      __int64 v22; // x21
      __int64 v23; // x0
      long double TextWidth; // q0
      float v25; // s8
      float v26; // s9
      float MidX; // s10
      float v28; // s11
      long double v29; // q0
      float v30; // s2
      float v31; // s10
      #1249 *v32; // x19
      float v33; // s8
      long double Width; // q0
      Rect v35[2]; // [xsp+0h] [xbp-70h] BYREF
      __int128 v36; // [xsp+10h] [xbp-60h] BYREF
    
      TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(*(_QWORD *)(*((_QWORD *)this + 31) + 96LL), "txt");
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      *(__n128 *)&v9 = Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v8);
      if ( *((const #1355 **)this + 33) == a3 )
      {
        v18 = 0;
      }
      else
      {
        v10 = *((_QWORD *)this + 35);
        if ( v10 )
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v10 + 8LL))(v10, v9);
        *((_QWORD *)this + 35) = 0;
        ShopIconExportName = (const char *)LogicResourceData::getShopIconExportName((__int64)a3);
        MovieClip = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", ShopIconExportName, v12);
        *((_QWORD *)this + 35) = MovieClip;
        LODWORD(v14) = COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName));
        v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(TextFieldByName)));
        v16 = (*(float (__fastcall **)(#1395 *))(*(_QWORD *)TextFieldByName + 96LL))(TextFieldByName);
        *(__n128 *)&v17 = DisplayObject::setXY(MovieClip, v14, (float)(v15 + (float)(v16 * 0.5)) + -5.0);
        (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(*((_QWORD *)this + 31) + 96LL) + 160LL))(
          *(_QWORD *)(*((_QWORD *)this + 31) + 96LL),
          *((_QWORD *)this + 35),
          v17);
        *((_QWORD *)this + 33) = a3;
        v18 = 1;
      }
      LogicClientAvatar::getResourceCount((__int64)PlayerAvatar, a3);
      v20 = *((_QWORD *)this + 33);
      if ( v20 )
      {
        if ( (unsigned int)LogicResourceData::getPremiumCurrency(v20) )
          LogicClientAvatar::getDiamonds(PlayerAvatar);
      }
      if ( *((_DWORD *)this + 68) == (_DWORD)a2 )
      {
        if ( !v18 )
          return;
      }
      else
      {
        MovieClipHelper::setPriceText(
          TextFieldByName,
          *((#1271 **)this + 35),
          a2,
          *((LogicKickAllianceMemberCommand **)this + 33),
          v19);
        *((_DWORD *)this + 68) = (_DWORD)a2;
      }
      Rect::Rect((Rect *)&v36);
      v21 = GUIContainer::getMovieClip(this);
      DisplayObject::getBounds(TextFieldByName, v21, &v36);
      Rect::Rect(v35);
      v22 = *((_QWORD *)this + 35);
      v23 = GUIContainer::getMovieClip(this);
      DisplayObject::getBounds(v22, v23, v35);
      TextWidth = TextField::getTextWidth(TextFieldByName);
      v25 = *(float *)&TextWidth;
      v26 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v35)));
      MidX = Rect::getMidX(&v36);
      v28 = Rect::getMidX(&v36);
      v29 = DisplayObject::getX(TextFieldByName);
      v30 = MidX + (float)(v25 * -0.5);
      v31 = (float)((float)(v25 + v26) + 5.0) * 0.5;
      DisplayObject::setX(TextFieldByName, (float)((float)(v28 - v31) - v30) + *(float *)&v29);
      v32 = (#1249 *)*((_QWORD *)this + 35);
      v33 = Rect::getMidX(&v36);
      Width = Rect::getWidth(v35);
      DisplayObject::setX(v32, (float)(v31 + v33) + (float)(*(float *)&Width * -0.5));
      Rect::~Rect(v35);
      Rect::~Rect((Rect *)&v36);
    }

    __int64 __fastcall ShopConfirmPopup::allowClosingFromModalTapping(LogicClearChestSourceCommand *this)
    {
      return 1;
    }

    __int64 __fastcall ShopConfirmPopup::useModal(LogicClearChestSourceCommand *this)
    {
      return 1;
    }

    __int64 __fastcall ShopConfirmPopup::getPopupType(LogicClearChestSourceCommand *this)
    {
      return 27;
    }

}; // end class ShopConfirmPopup
