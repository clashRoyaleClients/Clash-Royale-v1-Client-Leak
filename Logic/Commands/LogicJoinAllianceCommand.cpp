class LogicJoinAllianceCommand
{
public:

    void __fastcall LogicJoinAllianceCommand::LogicJoinAllianceCommand(LogicJoinAllianceCommand *this)
    {
      LogicServerCommand *v1; // x0
    
      v1 = LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)v1 = &off_10046D698;
      *((_BYTE *)v1 + 56) = 0;
      *((_QWORD *)v1 + 5) = 0;
      *((_QWORD *)v1 + 6) = 0;
      *((_QWORD *)v1 + 4) = 0;
    }

    void __fastcall LogicJoinAllianceCommand::destruct(RoyalTVEntry *this)
    {
      void *v2; // x20
      void *v3; // x0
      char *v4; // x19
      void *v5; // t1
    
      LogicServerCommand::destruct(this);
      v2 = (void *)*((_QWORD *)this + 6);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *((_QWORD *)this + 6) = 0;
      v5 = (void *)*((_QWORD *)this + 4);
      v4 = (char *)this + 32;
      v3 = v5;
      if ( v5 )
        operator delete(v3);
      v4[24] = 0;
      *((_QWORD *)v4 + 1) = 0;
      *((_QWORD *)v4 + 2) = 0;
      *(_QWORD *)v4 = 0;
    }

    __int64 __fastcall LogicJoinAllianceCommand::execute(RoyalTVEntry *this, UnlockAccountPopup *a2)
    {
      tween::Bounce *PlayerAvatar; // x21
      HomeScreen *Globals; // x0
      AreaEffectObject *Resource; // x22
      HomeScreen *v7; // x0
      LogicMath *Cost; // x23
      int ResourceCount; // w0
      int v10; // w2
      __int64 v11; // x23
      int FreeGold; // w24
      LogicKickAllianceMemberCommand *v13; // x0
      __int64 v14; // x24
      __int64 v15; // x25
      void (__fastcall *v16)(__int64, __int64, __int64, _QWORD, __int64, __int64); // x26
      __int64 GlobalID; // x0
      #1236 *v18; // x22
      int v19; // w1
      __int64 v20; // x0
      LeaderboardPopup *AchievementManager; // x0
      int v22; // w20
      __int64 v23; // x8
      void (*v24)(void); // x8
    
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar((__int64)a2);
      if ( !PlayerAvatar )
        return 1;
      if ( *((_BYTE *)this + 56) )
      {
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        Resource = (AreaEffectObject *)LogicGlobals::getAllianceCreateResource(Globals);
        v7 = (HomeScreen *)LogicDataTables::getGlobals();
        Cost = (LogicMath *)LogicGlobals::getAllianceCreateCost(v7);
        ResourceCount = LogicClientAvatar::getResourceCount((__int64)PlayerAvatar, Resource);
        v11 = LogicMath::min(Cost, ResourceCount, v10);
        FreeGold = LogicClientAvatar::getFreeGold(PlayerAvatar);
        v13 = (LogicKickAllianceMemberCommand *)LogicClientAvatar::commodityCountChangeHelper(
                                                  PlayerAvatar,
                                                  0,
                                                  Resource,
                                                  (unsigned int)-(int)v11,
                                                  4);
        if ( Resource == (AreaEffectObject *)LogicDataTables::getGoldData(v13) )
        {
          if ( LogicClientAvatar::getChangeListener(PlayerAvatar) )
          {
            v14 = FreeGold - (unsigned int)LogicClientAvatar::getFreeGold(PlayerAvatar);
            v15 = LogicClientAvatar::getChangeListener(PlayerAvatar);
            v16 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 32LL);
            GlobalID = LogicData::getGlobalID(Resource);
            v16(v15, 4, GlobalID, 0, v11, v14);
          }
        }
      }
      v18 = (#1236 *)LogicLong::clone(*((_QWORD *)this + 4));
      LogicClientAvatar::setAllianceId(PlayerAvatar, v18);
      LogicClientAvatar::setAllianceName(PlayerAvatar, *((const String **)this + 6));
      LogicClientAvatar::setAllianceBadge((__int64)PlayerAvatar, *((_QWORD *)this + 5));
      if ( *((_BYTE *)this + 56) )
        v19 = 2;
      else
        v19 = 1;
      LogicClientAvatar::setAllianceRole((__int64)PlayerAvatar, v19);
      v20 = LogicClientAvatar::getChangeListener(PlayerAvatar);
      (*(void (__fastcall **)(__int64, #1236 *, _QWORD, _QWORD))(*(_QWORD *)v20 + 80LL))(
        v20,
        v18,
        *((_QWORD *)this + 6),
        *((_QWORD *)this + 5));
      AchievementManager = (LeaderboardPopup *)LogicGameMode::getAchievementManager(a2);
      LogicAchievementManager::updateAchievementProgress(AchievementManager, PlayerAvatar, 1, 0);
      v22 = *((unsigned __int8 *)this + 56);
      v23 = *(_QWORD *)LogicGameMode::getGameListener(a2);
      if ( v22 )
        v24 = *(void (**)(void))(v23 + 152);
      else
        v24 = *(void (**)(void))(v23 + 160);
      v24();
      return 0;
    }

    __int64 __fastcall LogicJoinAllianceCommand::getCommandType(RoyalTVEntry *this)
    {
      return 209;
    }

    __int64 __fastcall LogicJoinAllianceCommand::encode(RoyalTVEntry *this, #1226 *a2)
    {
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 4));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 6));
      ByteStreamHelper::writeDataReference((__int64)a2, *((AreaEffectObject **)this + 5));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 56));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicJoinAllianceCommand::decode(RoyalTVEntry *this, #1225 *a2)
    {
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_QWORD *)this + 6) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 5) = ByteStreamHelper::readDataReference((__int64)a2, 16);
      *((_BYTE *)this + 56) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      return LogicServerCommand::decode(this, a2);
    }

    void __fastcall LogicJoinAllianceCommand::~LogicJoinAllianceCommand(RoyalTVEntry *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicJoinAllianceCommand::~LogicJoinAllianceCommand(RoyalTVEntry *this)
    {
      operator delete(this);
    }

}; // end class LogicJoinAllianceCommand
