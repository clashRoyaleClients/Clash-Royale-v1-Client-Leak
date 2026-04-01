class LogicBuyCardCommand
{
public:

    _QWORD *__fastcall LogicBuyCardCommand::LogicBuyCardCommand(__int64 a1, __int64 a2)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      *result = &off_10046CB70;
      result[4] = a2;
      return result;
    }

    __int64 __fastcall LogicBuyCardCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(a1);
      *(_QWORD *)(a1 + 32) = 0;
      return result;
    }

    __int64 __fastcall LogicBuyCardCommand::execute(InitState **a1, UnlockAccountPopup *a2, char a3)
    {
      __int64 Home; // x0
      __int64 result; // x0
      tween::Bounce *PlayerAvatar; // x22
      __int64 v9; // x0
      __int64 ShopSpellBuyTimes; // x21
      LogicKickAllianceMemberCommand *CostInShop; // x0
      __int64 v12; // x23
      const #1355 *GoldData; // x0
      __int64 v14; // x0
      TextField *SpellByData; // x0
      int v16; // w25
      int v17; // w26
      __int64 v18; // x0
      int v19; // w24
      int v20; // w27
      __int64 Rarity; // x25
      __int64 v22; // x25
      LogicKickAllianceMemberCommand *FreeGold; // x0
      int v24; // w24
      const AreaEffectObject *v25; // x0
      CoOpenStreamEntry *v26; // x0
      __int64 v27; // x26
      __int64 v28; // x0
      TextField *v29; // x0
      TextField *v30; // x25
      int ShowNewCount; // w0
      __int64 Listener; // x0
      LogicSpell *v33; // x25
      const char *v34; // x2
      CoOpenStreamEntry *v35; // x0
      GameInputField *SpellCollection; // x0
      CoOpenStreamEntry *v37; // x0
      AcceptChallengeMessage *SelectedDeck; // x26
      const char *v39; // x27
      CoOpenStreamEntry *v40; // x0
      GameInputField *v41; // x25
      CoOpenStreamEntry *v42; // x0
      __int64 v43; // x0
      LeaderboardPopup *AchievementManager; // x0
      __int64 GameListener; // x0
      LogicClientHome *v46; // x0
      __int64 v47; // x24
      __int64 v48; // x22
      void (__fastcall *v49)(__int64, __int64, __int64, __int64, __int64, __int64); // x25
      __int64 GlobalID; // x0
      __int64 v51; // x0
    
      if ( !a2 || !LogicGameMode::getPlayerAvatar(a2) )
        return 5;
      if ( !LogicGameMode::getHome(a2) )
        return 6;
      Home = LogicGameMode::getHome(a2);
      if ( (LogicClientHome::getShopSpellBuyTimes(Home, a1[4]) & 0x80000000) != 0 )
        return 7;
      if ( (LogicSpellData::isNotInUse(a1[4]) & 1) != 0 )
        return 8;
      if ( !a1[4] )
        return 1;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      v9 = LogicGameMode::getHome(a2);
      ShopSpellBuyTimes = LogicClientHome::getShopSpellBuyTimes(v9, a1[4]);
      CostInShop = (LogicKickAllianceMemberCommand *)LogicSpellData::getCostInShop(a1[4], ShopSpellBuyTimes);
      v12 = (__int64)CostInShop;
      if ( ((unsigned int)CostInShop & 0x80000000) != 0 )
        return 2;
      GoldData = (const #1355 *)LogicDataTables::getGoldData(CostInShop);
      if ( !LogicClientAvatar::hasEnoughResources(PlayerAvatar, GoldData, v12, 1, (PvpMatchmakeNotificationMessage *)a1, 0) )
        return 3;
      v14 = LogicGameMode::getHome(a2);
      SpellByData = (TextField *)LogicClientHome::getSpellByData(v14, a1[4]);
      if ( SpellByData )
      {
        v16 = *((_DWORD *)SpellByData + 4);
        if ( v16 >= (int)LogicSpell::getMaxMaterialCount(SpellByData) )
          return 4;
      }
      v17 = a3 & 2;
      v18 = LogicGameMode::getHome(a2);
      v19 = LogicClientHome::getShopSpellBuyTimes(v18, a1[4]);
      v20 = *(_DWORD *)(LogicDataTables::getGlobals() + 456);
      Rarity = LogicSpellData::getRarity(a1[4]);
      if ( Rarity == LogicDataTables::getRarityRare() )
        v20 = *(_DWORD *)(LogicDataTables::getGlobals() + 452);
      v22 = LogicSpellData::getRarity(a1[4]);
      if ( v22 == LogicDataTables::getRarityEpic() )
        v20 = *(_DWORD *)(LogicDataTables::getGlobals() + 448);
      if ( v19 < v20 )
        result = 0;
      else
        result = 5;
      if ( v17 && v19 < v20 )
      {
        FreeGold = (LogicKickAllianceMemberCommand *)LogicClientAvatar::getFreeGold(PlayerAvatar);
        v24 = (int)FreeGold;
        v25 = (const AreaEffectObject *)LogicDataTables::getGoldData(FreeGold);
        LogicClientAvatar::commodityCountChangeHelper(PlayerAvatar, 0, v25, (unsigned int)-(int)v12, 15);
        v26 = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
        LogicClientHome::increaseSoldSpells(v26, a1[4]);
        v27 = (__int64)a1[4];
        v28 = LogicGameMode::getHome(a2);
        v29 = (TextField *)LogicClientHome::getSpellByData(v28, v27);
        v30 = v29;
        if ( v29 )
        {
          LogicSpell::addMaterial(v29, 1);
          ShowNewCount = LogicSpell::getShowNewCount(v30);
          LogicSpell::setShowNewCount((__int64)v30, ShowNewCount + 1);
          if ( LogicSpell::getListener(v30) )
          {
            Listener = LogicSpell::getListener(v30);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)Listener + 64LL))(Listener);
          }
        }
        else
        {
          v33 = (LogicSpell *)operator new(48);
          LogicSpell::LogicSpell(v33);
          LogicSpell::setSpellData(v33, v27);
          *((_DWORD *)v33 + 2) = 0;
          LogicSpell::setMaterialCount(v33, 1, v34);
          v35 = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
          SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(v35);
          LogicSpellCollection::addSpell(SpellCollection, v33);
          LogicSpell::setShowNewIcon((__int64)v33, 1);
          LogicSpell::setShowNewCount((__int64)v33, *((_DWORD *)v33 + 4));
          v37 = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
          SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(v37);
          if ( (int)LogicSpellDeck::size(SelectedDeck) >= 1 )
          {
            v39 = 0;
            while ( LogicSpellDeck::getSpell(SelectedDeck, v39)
                 || !(unsigned int)LogicSpellDeck::canBeInserted(SelectedDeck, v33, (int)v39) )
            {
              v39 = (const char *)(unsigned int)((_DWORD)v39 + 1);
              if ( (int)v39 >= (int)LogicSpellDeck::size(SelectedDeck) )
                goto LABEL_38;
            }
            v40 = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
            v41 = (GameInputField *)LogicClientHome::getSpellCollection(v40);
            v42 = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
            v43 = LogicClientHome::getSpellCollection(v42);
            LogicSpellDeck::moveSpellFromCollection(SelectedDeck, v39, v41, *(_DWORD *)(v43 + 12) - 1);
          }
    LABEL_38:
          AchievementManager = (LeaderboardPopup *)LogicGameMode::getAchievementManager(a2);
          LogicAchievementManager::refreshStatus(AchievementManager);
          GameListener = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, InitState *))(*(_QWORD *)GameListener + 368LL))(GameListener, a1[4]);
          v46 = (LogicClientHome *)LogicGameMode::getHome(a2);
          LogicClientHome::updateCardCountToAvatar(v46);
        }
        if ( LogicClientAvatar::getChangeListener(PlayerAvatar) )
        {
          v47 = v24 - (unsigned int)LogicClientAvatar::getFreeGold(PlayerAvatar);
          v48 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          v49 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v48 + 32LL);
          GlobalID = LogicData::getGlobalID(a1[4]);
          v49(v48, 15, GlobalID, ShopSpellBuyTimes, v12, v47);
        }
        v51 = LogicGameMode::getGameListener(a2);
        (*(void (__fastcall **)(__int64, InitState *))(*(_QWORD *)v51 + 352LL))(v51, a1[4]);
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicBuyCardCommand::getCommandType(LogicResources *this)
    {
      return 530;
    }

    __int64 __fastcall LogicBuyCardCommand::encode(AreaEffectObject **this, #1226 *a2)
    {
      LogicCommand::encode((__int64)this, a2);
      (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 1);
      return ByteStreamHelper::writeDataReference((int)a2, *(this + 4));
    }

    __int64 __fastcall LogicBuyCardCommand::decode(LogicResources *this, #1225 *a2)
    {
      int v4; // w2
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      (*(void (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 144LL))(a2);
      result = ByteStreamHelper::readDataReference(a2, (ByteStream *)7, v4);
      *((_QWORD *)this + 4) = result;
      return result;
    }

    __int64 __fastcall LogicBuyCardCommand::getCommandGoldCost(LogicResources *this, const UnlockAccountPopup *a2)
    {
      __int64 Home; // x0
      int ShopSpellBuyTimes; // w1
    
      Home = LogicGameMode::getHome(a2);
      ShopSpellBuyTimes = LogicClientHome::getShopSpellBuyTimes(Home, *((_QWORD *)this + 4));
      return LogicSpellData::getCostInShop(*((InitState **)this + 4), ShopSpellBuyTimes);
    }

    void __fastcall LogicBuyCardCommand::~LogicBuyCardCommand(LogicResources *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicBuyCardCommand::~LogicBuyCardCommand(LogicResources *this)
    {
      operator delete(this);
    }

}; // end class LogicBuyCardCommand
