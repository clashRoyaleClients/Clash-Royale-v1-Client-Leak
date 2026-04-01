class LogicStartRewardClaimCommand
{
public:

    void __fastcall LogicStartRewardClaimCommand::LogicStartRewardClaimCommand(LogicStartRewardClaimCommand *this)
    {
      __int64 v1; // x0
    
      v1 = LogicCommand::LogicCommand((__int64)this);
      *(_QWORD *)v1 = &off_100465900;
      *(_DWORD *)(v1 + 28) = -1;
    }

    __int64 __fastcall LogicStartRewardClaimCommand::destruct(LogicParticleEmitterData *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_DWORD *)this + 7) = -1;
      return result;
    }

    __int64 __fastcall LogicStartRewardClaimCommand::getCommandType(LogicParticleEmitterData *this)
    {
      return 503;
    }

    __int64 __fastcall LogicStartRewardClaimCommand::encode(LogicParticleEmitterData *this, #1226 *a2)
    {
      LogicCommand::encode((__int64)this, a2);
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
    }

    __int64 __fastcall LogicStartRewardClaimCommand::decode(LogicParticleEmitterData *this, #1225 *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 7) = result;
      return result;
    }

    __int64 __fastcall LogicStartRewardClaimCommand::execute(
            LogicParticleEmitterData *this,
            UnlockAccountPopup *a2,
            char a3)
    {
      #1146 *Home; // x0
      #1146 *v7; // x22
      __int64 ChestWithID; // x0
      LogicChest *v9; // x20
      __int64 result; // x0
      int v11; // w21
      int isClaimingReward; // w0
      char v13; // w8
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      v7 = Home;
      if ( !Home )
        return 2;
      ChestWithID = LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 7));
      v9 = (LogicChest *)ChestWithID;
      if ( !ChestWithID )
        return 1;
      if ( !(unsigned int)LogicChest::isUnlocked(ChestWithID) )
        return 3;
      if ( *((_BYTE *)v9 + 40) )
        return 4;
      v11 = a3 & 2;
      isClaimingReward = LogicClientHome::isClaimingReward(v7);
      v13 = isClaimingReward;
      if ( isClaimingReward )
        result = 5;
      else
        result = 0;
      if ( v11 )
      {
        if ( (v13 & 1) == 0 )
        {
          LogicChest::setClaimed(v9, a2, 1);
          return 0;
        }
      }
      return result;
    }

    __int64 __fastcall LogicStartRewardClaimCommand::setChestId(__int64 this, int a2)
    {
      *(_DWORD *)(this + 28) = a2;
      return this;
    }

    void __fastcall LogicStartRewardClaimCommand::~LogicStartRewardClaimCommand(LogicParticleEmitterData *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicStartRewardClaimCommand::~LogicStartRewardClaimCommand(LogicParticleEmitterData *this)
    {
      operator delete(this);
    }

}; // end class LogicStartRewardClaimCommand
