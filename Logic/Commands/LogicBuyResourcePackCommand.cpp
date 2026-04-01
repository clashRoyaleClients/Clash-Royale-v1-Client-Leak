class LogicBuyResourcePackCommand
{
public:

    _QWORD *__fastcall LogicBuyResourcePackCommand::LogicBuyResourcePackCommand(__int64 a1, __int64 a2)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      *result = &off_100469318;
      result[4] = a2;
      return result;
    }

    __int64 __fastcall LogicBuyResourcePackCommand::destruct(FriendEntry *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_QWORD *)this + 4) = 0;
      return result;
    }

    __int64 __fastcall LogicBuyResourcePackCommand::getCommandType(FriendEntry *this)
    {
      return 529;
    }

    __int64 __fastcall LogicBuyResourcePackCommand::encode(AreaEffectObject **this, #1226 *a2)
    {
      int v2; // w19
    
      v2 = (int)a2;
      LogicCommand::encode((__int64)this, a2);
      return ByteStreamHelper::writeDataReference(v2, *(this + 4));
    }

    __int64 __fastcall LogicBuyResourcePackCommand::decode(__int64 a1, ByteStreamHelper *a2)
    {
      int v4; // w2
      __int64 result; // x0
    
      LogicCommand::decode((_DWORD *)a1, a2);
      result = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x37, v4);
      *(_QWORD *)(a1 + 32) = result;
      return result;
    }

    __int64 __fastcall LogicBuyResourcePackCommand::execute(_QWORD *a1, UnlockAccountPopup *a2, char a3, int a4)
    {
      #1146 *Home; // x23
      __int64 v9; // x8
      tween::Bounce *PlayerAvatar; // x21
      __int64 v11; // x24
      __int64 result; // x0
      __int64 v13; // x8
      AreaEffectObject *v14; // x22
      __int64 v15; // x25
      __int64 v16; // x23
      void (__fastcall *v17)(__int64, __int64, __int64, __int64, __int64); // x26
      __int64 GlobalID; // x0
      __int64 v19; // x0
      __int64 GameListener; // x0
    
      if ( !a2 || !LogicGameMode::getPlayerAvatar(a2) )
        return 1;
      Home = (#1146 *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 2;
      v9 = a1[4];
      if ( !v9 || *(int *)(v9 + 112) < 1 )
        return 3;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      v11 = (*(__int64 (__fastcall **)(_QWORD *, UnlockAccountPopup *))(*a1 + 64LL))(a1, a2);
      if ( !LogicClientAvatar::hasEnoughDiamonds(PlayerAvatar, v11, a4) )
        return 5;
      if ( !(unsigned int)LogicResourcePackData::canBePurchased(a1[4], PlayerAvatar) )
        return 6;
      result = 0;
      if ( (a3 & 2) != 0 && (int)v11 >= 1 )
      {
        v13 = a1[4];
        v14 = *(AreaEffectObject **)(v13 + 104);
        v15 = *(unsigned int *)(v13 + 112);
        LogicClientAvatar::useDiamonds(PlayerAvatar, v11, Home);
        v16 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        v17 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 24LL);
        GlobalID = LogicData::getGlobalID(v14);
        v17(v16, 4, GlobalID, v15, v11);
        LogicClientAvatar::commodityCountChangeHelper(PlayerAvatar, 0, v14, v15, 14);
        v19 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v19 + 288LL))(v19, v15, 14, 4);
        GameListener = LogicGameMode::getGameListener(a2);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 360LL))(GameListener, a1[4]);
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicBuyResourcePackCommand::getCommandDiamondCost(LogicDataTables *a1)
    {
      HomeScreen *Globals; // x0
    
      Globals = (HomeScreen *)LogicDataTables::getGlobals(a1);
      return LogicGlobals::getResourceDiamondCost(Globals, *(_DWORD *)(*((_QWORD *)a1 + 4) + 112LL));
    }

    _QWORD *__fastcall LogicBuyResourcePackCommand::~LogicBuyResourcePackCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicBuyResourcePackCommand::~LogicBuyResourcePackCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicBuyResourcePackCommand
