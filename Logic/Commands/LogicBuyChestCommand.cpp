class LogicBuyChestCommand
{
public:

    void __fastcall LogicBuyChestCommand::LogicBuyChestCommand(
            LogicBuyChestCommand *this,
            const LogicRefreshAchievementsCommand *a2)
    {
      LogicCommand *v3; // x0
    
      v3 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v3 = &off_100463D18;
      *((_QWORD *)v3 + 4) = a2;
    }

    __int64 __fastcall LogicBuyChestCommand::destruct(JoinAllianceResponseAvatarStreamEntry *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(this);
      *((_QWORD *)this + 4) = 0;
      return result;
    }

    __int64 __fastcall LogicBuyChestCommand::execute(
            JoinAllianceResponseAvatarStreamEntry *this,
            #1028 *a2,
            char a3,
            bool a4)
    {
      tween::Bounce *PlayerAvatar; // x21
      __int64 Arena; // x22
      __int64 result; // x0
      __int64 v11; // x0
      __int64 ShopPrice; // x22
      #1146 *Home; // x0
      __int64 PurchasedChest; // x8
      #1146 *v15; // x0
      __int64 v16; // x23
      __int64 (__fastcall *v17)(__int64, __int64, __int64, _QWORD, __int64); // x24
      __int64 GlobalID; // x0
      LogicKickAllianceMemberCommand *v19; // x0
      const AreaEffectObject *DiamondData; // x0
      LogicClientHome *v21; // x0
    
      if ( !a2 )
        return 99;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      if ( !LogicGameMode::getPlayerAvatar(a2) )
        return 1;
      if ( !LogicGameMode::getHome(a2) )
        return 2;
      if ( !*((_QWORD *)this + 4) )
        return 3;
      Arena = LogicClientAvatar::getArena(PlayerAvatar);
      if ( LogicTreasureChestData::getArena(*((_QWORD *)this + 4)) != Arena )
        return 4;
      v11 = LogicTreasureChestData::getArena(*((_QWORD *)this + 4));
      if ( (LogicArenaData::isTrainingCamp(v11) & 1) != 0 )
        return 5;
      ShopPrice = LogicTreasureChestData::getShopPrice(*((_QWORD *)this + 4));
      if ( (int)ShopPrice < 1 )
        return 6;
      if ( !(unsigned int)LogicClientAvatar::hasEnoughDiamonds(PlayerAvatar, ShopPrice, a4) )
        return 7;
      Home = (#1146 *)LogicGameMode::getHome(a2);
      PurchasedChest = LogicClientHome::getPurchasedChest(Home);
      result = 8 * (unsigned int)(PurchasedChest != 0);
      if ( (a3 & 2) != 0 && !PurchasedChest )
      {
        v15 = (#1146 *)LogicGameMode::getHome(a2);
        LogicClientAvatar::useDiamonds(PlayerAvatar, ShopPrice, v15);
        v16 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v16 + 24LL);
        GlobalID = LogicData::getGlobalID(*((AreaEffectObject **)this + 4));
        v19 = (LogicKickAllianceMemberCommand *)v17(v16, 4, GlobalID, 0, ShopPrice);
        DiamondData = (const AreaEffectObject *)LogicDataTables::getDiamondData(v19);
        LogicClientAvatar::commodityCountChangeHelper(PlayerAvatar, 0, DiamondData, ShopPrice, 17);
        v21 = (LogicClientHome *)LogicGameMode::getHome(a2);
        LogicClientHome::chestPurchased(v21, *((const LogicTreasureChestData **)this + 4));
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicBuyChestCommand::getCommandType(JoinAllianceResponseAvatarStreamEntry *this)
    {
      return 528;
    }

    __int64 __fastcall LogicBuyChestCommand::encode(AreaEffectObject **this, #1226 *a2)
    {
      LogicCommand::encode(this, a2);
      (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 1);
      return ByteStreamHelper::writeDataReference((int)a2, *(this + 4));
    }

    __int64 __fastcall LogicBuyChestCommand::decode(JoinAllianceResponseAvatarStreamEntry *this, #1225 *a2)
    {
      int v4; // w2
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      (*(void (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 144LL))(a2);
      result = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x13, v4);
      *((_QWORD *)this + 4) = result;
      return result;
    }

    void __fastcall LogicBuyChestCommand::~LogicBuyChestCommand(JoinAllianceResponseAvatarStreamEntry *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicBuyChestCommand::~LogicBuyChestCommand(JoinAllianceResponseAvatarStreamEntry *this)
    {
      operator delete(this);
    }

}; // end class LogicBuyChestCommand
