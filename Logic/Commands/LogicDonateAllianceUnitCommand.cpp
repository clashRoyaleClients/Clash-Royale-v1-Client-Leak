class LogicDonateAllianceUnitCommand
{
public:

    void __fastcall LogicDonateAllianceUnitCommand::LogicDonateAllianceUnitCommand(LogicDonateAllianceUnitCommand *this)
    {
      LogicServerCommand *v1; // x0
    
      v1 = LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)v1 = &off_10045E5F0;
      *((_QWORD *)v1 + 4) = 0;
      *((_QWORD *)v1 + 5) = 0;
    }

    __int64 __fastcall LogicDonateAllianceUnitCommand::destruct(AvatarNameCheckRequestMessage *this)
    {
      void *v2; // x0
      _QWORD *v3; // x20
      __int64 result; // x0
    
      v3 = (_QWORD *)((char *)this + 32);
      v2 = (void *)*((_QWORD *)this + 4);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 4) = 0;
      result = LogicServerCommand::destruct(this);
      *v3 = 0;
      v3[1] = 0;
      return result;
    }

    __int64 __fastcall LogicDonateAllianceUnitCommand::setData(__int64 result, __int64 a2, __int64 a3)
    {
      *(_QWORD *)(result + 32) = a2;
      *(_QWORD *)(result + 40) = a3;
      return result;
    }

    __int64 __fastcall LogicDonateAllianceUnitCommand::getCommandType(AvatarNameCheckRequestMessage *this)
    {
      return 203;
    }

    __int64 __fastcall LogicDonateAllianceUnitCommand::encode(#916 **this, #1226 *a2)
    {
      ByteStreamHelper::writeDataReference((int)a2, *(this + 5));
      ChecksumEncoder::writeLong(a2, *(this + 4));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicDonateAllianceUnitCommand::decode(AvatarNameCheckRequestMessage *this, #1225 *a2, int a3)
    {
      *((_QWORD *)this + 5) = ByteStreamHelper::readDataReference(a2, (ByteStream *)7, a3);
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      return LogicServerCommand::decode(this, a2);
    }

    __int64 __fastcall LogicDonateAllianceUnitCommand::execute(AvatarNameCheckRequestMessage *this, #1028 *a2)
    {
      #1146 *Home; // x22
      #962 *PlayerAvatar; // x19
      __int64 SpellByData; // x23
      __int64 Listener; // x0
      __int64 v8; // x0
      __int64 DonateReward; // x23
      int DonateXP; // w24
      int v11; // w25
      int MaxGold; // w23
      int Gold; // w0
      int v14; // w2
      __int64 v15; // x25
      void (__fastcall *v16)(__int64, __int64, __int64, __int64); // x26
      __int64 GlobalID; // x0
      int TotalDonations; // w0
      LogicDataTables *GameListener; // x22
      void (__fastcall *v20)(LogicDataTables *, __int64); // x24
      __int64 CardDonatedSound; // x0
      __int64 v22; // x0
      #1157 *AchievementManager; // x0
      __int64 v24; // x0
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      PlayerAvatar = (#962 *)LogicGameMode::getPlayerAvatar(a2);
      if ( PlayerAvatar )
      {
        if ( Home
          && (SpellByData = LogicClientHome::getSpellByData(Home, *((_QWORD *)this + 5))) != 0
          && !(unsigned int)LogicClientHome::getDonationCooldownSeconds(Home)
          && (unsigned int)LogicClientHome::canDonate(Home, *((_QWORD *)this + 5))
          && *(int *)(SpellByData + 16) >= 1 )
        {
          LogicSpell::addMaterial((#795 *)SpellByData, -1);
          if ( LogicSpell::getListener((#795 *)SpellByData) )
          {
            Listener = LogicSpell::getListener((#795 *)SpellByData);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)Listener + 64LL))(Listener);
          }
          v8 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 152LL))(
            v8,
            *((_QWORD *)this + 5),
            0,
            *((_QWORD *)this + 4));
          LogicClientHome::increaseDonatedCapacity(Home, *((_QWORD *)this + 5));
          DonateReward = LogicSpellData::getDonateReward(*((#895 **)this + 5));
          DonateXP = LogicSpellData::getDonateXP(*((#895 **)this + 5));
          v11 = LogicClientAvatar::getGold(PlayerAvatar) + DonateReward;
          if ( v11 > (int)LogicClientAvatar::getMaxGold(PlayerAvatar) )
          {
            MaxGold = LogicClientAvatar::getMaxGold(PlayerAvatar);
            Gold = LogicClientAvatar::getGold(PlayerAvatar);
            DonateReward = LogicMath::max((LogicMath *)(unsigned int)(MaxGold - Gold), 0, v14);
          }
          LogicClientAvatar::addFreeGold(PlayerAvatar, DonateReward, 19);
          v15 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          v16 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 296LL);
          GlobalID = LogicData::getGlobalID(*((#916 **)this + 5));
          v16(v15, DonateReward, 19, GlobalID);
          LogicClientAvatar::xpGainHelper(PlayerAvatar, DonateXP, Home);
          TotalDonations = LogicClientAvatar::getTotalDonations(PlayerAvatar);
          LogicClientAvatar::setTotalDonations(PlayerAvatar, TotalDonations + 1);
          GameListener = (LogicDataTables *)LogicGameMode::getGameListener(a2);
          v20 = *(void (__fastcall **)(LogicDataTables *, __int64))(*(_QWORD *)GameListener + 56LL);
          CardDonatedSound = LogicDataTables::getCardDonatedSound(GameListener);
          v20(GameListener, CardDonatedSound);
          v22 = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 312LL))(
            v22,
            DonateReward,
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 5));
          AchievementManager = (#1157 *)LogicGameMode::getAchievementManager(a2);
          LogicAchievementManager::updateAchievementProgress(AchievementManager, PlayerAvatar, 1, 1);
        }
        else
        {
          v24 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v24 + 160LL))(
            v24,
            *((_QWORD *)this + 5),
            0,
            *((_QWORD *)this + 4));
        }
      }
      return 0;
    }

    void __fastcall LogicDonateAllianceUnitCommand::~LogicDonateAllianceUnitCommand(AvatarNameCheckRequestMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicDonateAllianceUnitCommand::~LogicDonateAllianceUnitCommand(AvatarNameCheckRequestMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicDonateAllianceUnitCommand
