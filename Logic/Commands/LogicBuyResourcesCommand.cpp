class LogicBuyResourcesCommand
{
public:

    void __fastcall LogicBuyResourcesCommand::LogicBuyResourcesCommand(LogicBuyResourcesCommand *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)LogicCommand::LogicCommand((__int64)this);
      *v1 = &off_10046D710;
      v1[4] = 0;
    }

    __int64 __fastcall LogicBuyResourcesCommand::destruct(DeviceLinkEnterCodeScreen *this)
    {
      __int64 result; // x0
    
      LogicCommand::destruct((__int64)this);
      result = *((_QWORD *)this + 4);
      if ( result )
      {
        (**(void (__fastcall ***)(__int64))result)(result);
        result = *((_QWORD *)this + 4);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        *((_QWORD *)this + 4) = 0;
      }
      *((_QWORD *)this + 4) = 0;
      return result;
    }

    __int64 __fastcall LogicBuyResourcesCommand::getCommandType(DeviceLinkEnterCodeScreen *this)
    {
      return 514;
    }

    __int64 __fastcall LogicBuyResourcesCommand::encode(DeviceLinkEnterCodeScreen *this, #1226 *a2)
    {
      __int64 (__fastcall *v4)(#1226 *, __int64); // x2
    
      LogicCommand::encode((__int64)this, a2);
      v4 = *(__int64 (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*((_QWORD *)this + 4) )
        return v4(a2, 0);
      v4(a2, 1);
      return LogicCommandManager::encodeCommand((__int64)a2, *((_QWORD *)this + 4));
    }

    _BYTE *__fastcall LogicBuyResourcesCommand::decode(DeviceLinkEnterCodeScreen *this, #1225 *a2)
    {
      _BYTE *result; // x0
    
      LogicCommand::decode(this, a2);
      if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        result = LogicCommandManager::decodeCommand(a2, 0, 0);
        *((_QWORD *)this + 4) = result;
      }
      else
      {
        result = (_BYTE *)*((_QWORD *)this + 4);
        if ( result )
        {
          (**(void (__fastcall ***)(_BYTE *))result)(result);
          result = (_BYTE *)*((_QWORD *)this + 4);
          if ( result )
            result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)result + 16LL))(result);
          *((_QWORD *)this + 4) = 0;
        }
      }
      return result;
    }

    __int64 __fastcall LogicBuyResourcesCommand::execute(
            DeviceLinkEnterCodeScreen *this,
            UnlockAccountPopup *a2,
            __int64 a3,
            __int64 a4)
    {
      CoOpenStreamEntry *Home; // x23
      __int64 v9; // x0
      int MatchCost; // w0
      __int64 result; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 Arena; // x0
      int v14; // w24
      LogicKickAllianceMemberCommand *v15; // x0
      tween::Bounce *v16; // x24
      const AreaEffectObject *GoldData; // x25
      __int64 v18; // x27
      __int64 v19; // x26
      _BOOL4 hasEnoughDiamonds; // w8
      __int64 v21; // x0
      const char *v22; // x1
      long double v23; // q0
      __int64 v24; // x0
      __int64 v25; // x23
      __int64 v26; // x24
      void (__fastcall *v27)(__int64, __int64, __int64, __int64, __int64); // x27
      __int64 GlobalID; // x0
      __int64 v29; // x0
    
      if ( !a2 || !LogicGameMode::getPlayerAvatar((__int64)a2) )
        return 1;
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 2;
      v9 = *((_QWORD *)this + 4);
      if ( v9 )
      {
        MatchCost = (*(__int64 (__fastcall **)(__int64, UnlockAccountPopup *))(*(_QWORD *)v9 + 56LL))(v9, a2);
      }
      else
      {
        PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar((__int64)a2);
        Arena = LogicClientAvatar::getArena(PlayerAvatar);
        MatchCost = LogicArenaData::getMatchCost(Arena);
      }
      v14 = MatchCost;
      if ( MatchCost > *(_DWORD *)(LogicDataTables::getGlobals() + 484) )
        return 3;
      if ( v14 < 1 )
        return 4;
      v15 = (LogicKickAllianceMemberCommand *)LogicGameMode::getPlayerAvatar((__int64)a2);
      v16 = v15;
      if ( !v15 )
        return 99;
      GoldData = (const AreaEffectObject *)LogicDataTables::getGoldData(v15);
      v18 = (*(__int64 (__fastcall **)(DeviceLinkEnterCodeScreen *, UnlockAccountPopup *))(*(_QWORD *)this + 96LL))(
              this,
              a2);
      v19 = (*(__int64 (__fastcall **)(DeviceLinkEnterCodeScreen *, UnlockAccountPopup *))(*(_QWORD *)this + 64LL))(
              this,
              a2);
      hasEnoughDiamonds = LogicClientAvatar::hasEnoughDiamonds(v16, v19, a4);
      if ( hasEnoughDiamonds )
        result = 0;
      else
        result = 5;
      if ( (a3 & 2) != 0 && hasEnoughDiamonds )
      {
        LogicClientAvatar::commodityCountChangeHelper(v16, 0, GoldData, v18, 5);
        v21 = LogicClientAvatar::getChangeListener(v16);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v21 + 288LL))(v21, v18, 5, 2);
        if ( (int)v19 >= 1 )
        {
          *(__n128 *)&v23 = LogicClientAvatar::useDiamonds(v16, v19, Home);
          v24 = *((_QWORD *)this + 4);
          if ( v24 )
            v25 = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v24 + 32LL))(v24, v23);
          else
            v25 = 0xFFFFFFFFLL;
          v26 = LogicClientAvatar::getChangeListener(v16);
          v27 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v26 + 24LL);
          GlobalID = LogicData::getGlobalID(GoldData);
          v27(v26, 2, GlobalID, v25, v19);
        }
        v29 = *((_QWORD *)this + 4);
        if ( !v29 )
          Debugger::error((__siginfo *)"LogicBuyResourcesCommand should always have command set!", v22);
        (*(void (__fastcall **)(__int64, UnlockAccountPopup *, __int64, __int64))(*(_QWORD *)v29 + 24LL))(v29, a2, a3, a4);
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicBuyResourcesCommand::setCommand(__int64 this, PvpMatchmakeNotificationMessage *a2)
    {
      *(_QWORD *)(this + 32) = a2;
      return this;
    }

    __int64 __fastcall LogicBuyResourcesCommand::getResourceCount(
            DeviceLinkEnterCodeScreen *this,
            const UnlockAccountPopup *a2)
    {
      LogicKickAllianceMemberCommand *PlayerAvatar; // x20
      AreaEffectObject *GoldData; // x0
      int v6; // w2
      int ResourceCount; // w20
      __int64 v8; // x0
      int v9; // w0
      int v10; // w2
      LogicMath *v11; // x19
      HomeScreen *Globals; // x0
      LogicMath *MaxResourceCountForDiamondCost; // x0
      int v14; // w2
    
      PlayerAvatar = (LogicKickAllianceMemberCommand *)LogicGameMode::getPlayerAvatar((__int64)a2);
      GoldData = (AreaEffectObject *)LogicDataTables::getGoldData(PlayerAvatar);
      ResourceCount = LogicClientAvatar::getResourceCount((__int64)PlayerAvatar, GoldData);
      v8 = *((_QWORD *)this + 4);
      if ( v8 )
        v9 = (*(__int64 (__fastcall **)(__int64, const UnlockAccountPopup *))(*(_QWORD *)v8 + 56LL))(v8, a2);
      else
        v9 = 0;
      v11 = (LogicMath *)LogicMath::max((LogicMath *)(unsigned int)(v9 - ResourceCount), 0, v6);
      if ( (int)v11 >= 1 )
      {
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        MaxResourceCountForDiamondCost = (LogicMath *)LogicGlobals::getMaxResourceCountForDiamondCost(
                                                        Globals,
                                                        (const char *)1);
        v11 = (LogicMath *)LogicMath::max(MaxResourceCountForDiamondCost, (int)v11, v14);
      }
      return LogicMath::max(v11, 0, v10);
    }

    bool __fastcall LogicBuyResourcesCommand::giveMoreThanCommandNeeds(
            DeviceLinkEnterCodeScreen *this,
            const UnlockAccountPopup *a2)
    {
      LogicKickAllianceMemberCommand *PlayerAvatar; // x20
      AreaEffectObject *GoldData; // x0
      int v6; // w2
      int ResourceCount; // w20
      __int64 v8; // x0
      int v9; // w0
      int v10; // w19
      _BOOL8 result; // x0
      HomeScreen *Globals; // x0
    
      PlayerAvatar = (LogicKickAllianceMemberCommand *)LogicGameMode::getPlayerAvatar((__int64)a2);
      GoldData = (AreaEffectObject *)LogicDataTables::getGoldData(PlayerAvatar);
      ResourceCount = LogicClientAvatar::getResourceCount((__int64)PlayerAvatar, GoldData);
      v8 = *((_QWORD *)this + 4);
      if ( v8 )
        v9 = (*(__int64 (__fastcall **)(__int64, const UnlockAccountPopup *))(*(_QWORD *)v8 + 56LL))(v8, a2);
      else
        v9 = 0;
      v10 = LogicMath::max((LogicMath *)(unsigned int)(v9 - ResourceCount), 0, v6);
      result = 0;
      if ( v10 >= 1 )
      {
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        return (int)LogicGlobals::getMaxResourceCountForDiamondCost(Globals, (const char *)1) > v10;
      }
      return result;
    }

    __int64 __fastcall LogicBuyResourcesCommand::getCommandDiamondCost(
            DeviceLinkEnterCodeScreen *this,
            const UnlockAccountPopup *a2)
    {
      int v2; // w19
      HomeScreen *Globals; // x0
    
      v2 = (*(__int64 (__fastcall **)(DeviceLinkEnterCodeScreen *, const UnlockAccountPopup *))(*(_QWORD *)this + 96LL))(
             this,
             a2);
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      return LogicGlobals::getResourceDiamondCost(Globals, v2);
    }

    void __fastcall LogicBuyResourcesCommand::~LogicBuyResourcesCommand(DeviceLinkEnterCodeScreen *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicBuyResourcesCommand::~LogicBuyResourcesCommand(DeviceLinkEnterCodeScreen *this)
    {
      operator delete(this);
    }

}; // end class LogicBuyResourcesCommand
