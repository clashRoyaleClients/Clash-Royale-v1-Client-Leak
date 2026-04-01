class LogicShopOpenedCommand
{
public:

    // attributes: thunk
    __int64 __fastcall LogicShopOpenedCommand::destruct(__int64 this)
    {
      return LogicCommand::destruct(this);
    }

    __int64 __fastcall LogicShopOpenedCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      LogicClientHome *Home; // x20
      __int64 v6; // x0
      int ShopWeekdayIndex; // w0
    
      if ( !LogicGameMode::getHome(a2) )
        return 1;
      if ( (a3 & 2) != 0 )
      {
        Home = (LogicClientHome *)LogicGameMode::getHome(a2);
        v6 = LogicGameMode::getHome(a2);
        ShopWeekdayIndex = LogicClientHome::getShopWeekdayIndex(v6);
        LogicClientHome::setShopWeekdayIndexSeen(Home, ShopWeekdayIndex);
      }
      return 0;
    }

    __int64 __fastcall LogicShopOpenedCommand::getCommandType(JoinRequestAllianceStreamEntry *this)
    {
      return 532;
    }

    // attributes: thunk
    __int64 __fastcall LogicShopOpenedCommand::encode(__int64 this, #1317 *a2)
    {
      return LogicCommand::encode(this, a2);
    }

    // attributes: thunk
    void __fastcall LogicShopOpenedCommand::decode(_DWORD *this, ByteStreamHelper *a2)
    {
      LogicCommand::decode(this, a2);
    }

    void __fastcall LogicShopOpenedCommand::~LogicShopOpenedCommand(JoinRequestAllianceStreamEntry *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicShopOpenedCommand::~LogicShopOpenedCommand(JoinRequestAllianceStreamEntry *this)
    {
      operator delete(this);
    }

}; // end class LogicShopOpenedCommand
