class LogicEgg
{
public:

    void __fastcall LogicEgg::LogicEgg(LogicEgg *this, const Character *a2)
    {
      __int64 v2; // x0
    
      LogicGameObject::LogicGameObject(this, a2);
      *(_QWORD *)v2 = off_10046ECF8;
      *(_DWORD *)(v2 + 136) = 0;
      *(_QWORD *)(v2 + 120) = 0;
      *(_QWORD *)(v2 + 128) = 0;
    }

    __int64 __fastcall LogicEgg::destruct(LogicStartRewardClaimCommand *this)
    {
      __int64 result; // x0
    
      result = LogicGameObject::destruct(this);
      *((_DWORD *)this + 34) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      return result;
    }

    __int64 __fastcall LogicEgg::encode(AreaEffectObject **this, #1226 *a2)
    {
      LogicGameObject::encode((GameMode *)this, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 30));
      ByteStreamHelper::writeDataReference((__int64)a2, *(this + 16));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 34));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 31));
    }

    __int64 __fastcall LogicEgg::decode(__int64 a1, #1225 *a2)
    {
      __int64 DataReference; // x0
      const char *v5; // x2
      long double v6; // q0
      __int64 result; // x0
    
      LogicGameObject::decode((GameMode *)a1, a2);
      *(_DWORD *)(a1 + 120) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      DataReference = ByteStreamHelper::readDataReference((__int64)a2, 6);
      *(_QWORD *)(a1 + 128) = DataReference;
      *(__n128 *)&v6 = Debugger::doAssert((Debugger *)(DataReference != 0), (bool)"", v5);
      *(_DWORD *)(a1 + 136) = (*(__int64 (__fastcall **)(#1225 *, long double))(*(_QWORD *)a2 + 152LL))(a2, v6);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 124) = result;
      return result;
    }

    __int64 __fastcall LogicEgg::canBeTargeted(LogicStartRewardClaimCommand *this)
    {
      return 1;
    }

    void __fastcall LogicEgg::tick(__int64 a1)
    {
      int v2; // w2
      int v3; // w8
      int v4; // w0
      int v5; // w20
      int v6; // w21
      __int64 OwnerAccountId; // x22
      Character *Data; // x0
      const BattleResultMessage *CharacterStartingBuff; // x23
      Character *v10; // x0
      int v11; // w28
      ChangeAllianceMemberRoleOkMessage **LogicBattle; // x24
      __int64 v13; // x25
      unsigned int v14; // w26
      int v15; // w27
      const TextField *OriginSpell; // x0
      GameMode *v17; // x20
      LogicSpellListener *LogicGameObjectManager; // x21
      __int64 GlobalID; // x2
    
      LogicGameObject::tick((GameMode *)a1);
      v3 = *(_DWORD *)(a1 + 120);
      if ( v3 >= 1 )
      {
        v4 = LogicMath::max(0, v3 - 50, v2);
        *(_DWORD *)(a1 + 120) = v4;
        if ( !v4 )
        {
          v5 = LogicGameObject::getX((GameMode *)a1);
          v6 = LogicGameObject::getY((GameMode *)a1);
          OwnerAccountId = LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
          Data = (Character *)LogicGameObject::getData((GameMode *)a1);
          CharacterStartingBuff = (const BattleResultMessage *)LogicEggData::getCharacterStartingBuff(Data);
          v10 = (Character *)LogicGameObject::getData((GameMode *)a1);
          v11 = 1000 * LogicEggData::getCharacterStartingBuffTime(v10);
          LogicBattle = (ChangeAllianceMemberRoleOkMessage **)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
          v13 = *(_QWORD *)(a1 + 128);
          v14 = *(_DWORD *)(a1 + 136);
          v15 = *(_DWORD *)(a1 + 124);
          OriginSpell = (const TextField *)LogicGameObject::getOriginSpell((GameMode *)a1);
          v17 = LogicBattle::spawnObjects(
                  LogicBattle,
                  v13,
                  v14,
                  v5,
                  v6,
                  v15,
                  OwnerAccountId,
                  CharacterStartingBuff,
                  v11,
                  OriginSpell,
                  0);
          if ( v17 )
          {
            LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
            GlobalID = LogicGameObject::getGlobalID((GameMode *)a1);
            LogicGameObjectManager::removeGameObjectReferences(
              LogicGameObjectManager,
              (const GameMode *)a1,
              GlobalID,
              0,
              v17);
          }
        }
      }
    }

    // attributes: thunk
    __int64 __fastcall LogicEgg::getEggData(LogicStartRewardClaimCommand *this)
    {
      return LogicGameObject::getData(this);
    }

    bool __fastcall LogicEgg::shouldDestruct(LogicStartRewardClaimCommand *this)
    {
      return !(*(unsigned int (__fastcall **)(LogicStartRewardClaimCommand *))(*(_QWORD *)this + 152LL))(this)
          || *((_DWORD *)this + 30) < 1;
    }

    __int64 __fastcall LogicEgg::getType(LogicStartRewardClaimCommand *this)
    {
      return 4;
    }

    __int64 __fastcall LogicEgg::init(__int64 a1, __int64 a2, const char *a3, int a4, int a5, __int64 a6)
    {
      int v9; // w22
    
      v9 = (int)a3;
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", a3);
      *(_QWORD *)(a1 + 128) = a2;
      *(_DWORD *)(a1 + 120) = v9;
      *(_DWORD *)(a1 + 136) = a4;
      *(_DWORD *)(a1 + 124) = a5;
      return LogicGameObject::setOriginSpell(a1, a6);
    }

    __int64 __fastcall LogicEgg::getRadius(LogicStartRewardClaimCommand *this)
    {
      Character *Data; // x0
    
      Data = (Character *)LogicGameObject::getData(this);
      return LogicEggData::getCollisionRadius(Data);
    }

    __int64 __fastcall LogicEgg::getDeathEffect(LogicStartRewardClaimCommand *this)
    {
      __int64 Data; // x0
      __int64 v2; // x1
      __int64 v3; // x2
    
      Data = LogicGameObject::getData(this);
      return LogicEggData::getDeathEffect(Data, v2, v3);
    }

    void __fastcall LogicEgg::onDeath(LogicStartRewardClaimCommand *this)
    {
      ;
    }

    void __fastcall LogicEgg::~LogicEgg(LogicStartRewardClaimCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicEgg::~LogicEgg(LogicStartRewardClaimCommand *this)
    {
      operator delete(this);
    }

}; // end class LogicEgg
