class LogicCharacter
{
public:

    __int64 __fastcall LogicCharacter::getType(AllianceJoinFailedMessage *this)
    {
      return 5;
    }

    void __fastcall LogicCharacter::LogicCharacter(LogicCharacter *this, const AreaEffectObject *a2)
    {
      LogicGameObject::LogicGameObject(this, a2);
      *(_QWORD *)this = off_100472220;
      LogicVector2::LogicVector2((LogicCharacter *)((char *)this + 120));
      *((_DWORD *)this + 35) = 0;
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 32) = 0;
      *((_DWORD *)this + 33) = 0;
      *((_DWORD *)this + 34) = -1;
      *((_DWORD *)this + 37) = 100;
      *((_QWORD *)this + 25) = 0;
      *((_WORD *)this + 104) = 0;
      *((_DWORD *)this + 48) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 19) = 0;
    }

    // attributes: thunk
    void __fastcall LogicCharacter::LogicCharacter(LogicCharacter *this, const AreaEffectObject *a2)
    {
      __ZN14LogicCharacterC2EPK9LogicData(this, a2);
    }

    __int64 __fastcall LogicCharacter::destruct(AllianceJoinFailedMessage *this)
    {
      __int64 result; // x0
    
      LogicGameObject::destruct(this);
      result = LogicVector2::destruct((AllianceJoinFailedMessage *)((char *)this + 120));
      *((_DWORD *)this + 35) = 0;
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 32) = 0;
      *((_DWORD *)this + 33) = 0;
      *((_DWORD *)this + 34) = -1;
      *((_DWORD *)this + 37) = 100;
      *((_QWORD *)this + 25) = 0;
      *((_WORD *)this + 104) = 0;
      *((_DWORD *)this + 48) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 19) = 0;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicCharacter::getCharacterData(AllianceJoinFailedMessage *this)
    {
      return LogicGameObject::getData(this);
    }

    __int64 __fastcall LogicCharacter::encode(__int64 a1, ExpBar *a2, const char *a3)
    {
      long double v5; // q0
      __int64 Data; // x0
      __int64 result; // x0
    
      *(__n128 *)&v5 = Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 136) != -1), (bool)"", a3);
      (*(void (__fastcall **)(ExpBar *, _QWORD, long double))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 136), v5);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 208));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 209));
      LogicGameObject::encode((GameMode *)a1, a2);
      ByteStreamHelper::encodeVector((__int64)a2, (unsigned int *)(a1 + 120));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 132));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 148));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 152));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 156));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 160));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 164));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 172));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 176));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 188));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 144));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 140));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 128));
      if ( *(int *)(LogicGameObject::getData((GameMode *)a1) + 496) >= 1 )
        (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 168));
      Data = LogicGameObject::getData((GameMode *)a1);
      result = LogicCharacterData::getReloadAfterHits(Data);
      if ( (int)result >= 1 )
      {
        (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 180));
        return (*(__int64 (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 184));
      }
      return result;
    }

    __int64 __fastcall LogicCharacter::decode(__int64 a1, ChallengePopup *a2)
    {
      __int64 v4; // x21
      const char *v5; // x2
      __int64 OriginSpell; // x0
      __int64 Data; // x0
      __int64 result; // x0
    
      v4 = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      Debugger::doAssert((Debugger *)((_DWORD)v4 != -1), (bool)"", v5);
      if ( *(_DWORD *)(a1 + 136) == -1 )
      {
        OriginSpell = LogicGameObject::getOriginSpell((GameMode *)a1);
        LogicCharacter::setLevelIndex(a1, v4, OriginSpell);
      }
      *(_BYTE *)(a1 + 208) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 209) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 136LL))(a2);
      LogicGameObject::decode((GameMode *)a1, a2);
      ByteStreamHelper::decodeVector((__int64)a2, (_DWORD *)(a1 + 120));
      *(_DWORD *)(a1 + 132) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 148) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 152) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 156) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 160) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 164) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 172) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 176) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 188) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 144) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 140) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 128) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( *(int *)(LogicGameObject::getData((GameMode *)a1) + 496) >= 1 )
        *(_DWORD *)(a1 + 168) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      Data = LogicGameObject::getData((GameMode *)a1);
      result = LogicCharacterData::getReloadAfterHits(Data);
      if ( (int)result >= 1 )
      {
        *(_DWORD *)(a1 + 180) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
        result = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
        *(_DWORD *)(a1 + 184) = result;
      }
      return result;
    }

    __int64 __fastcall LogicCharacter::setLevelIndex(__int64 a1, LogicMath *a2, const char *a3)
    {
      Font *Data; // x21
      LogicMovementComponent *v7; // x23
      const char *v8; // x2
      int Hitpoints; // w23
      LogicSpellListener *v10; // x0
      UnbindFacebookAccountMessage *v11; // x0
      __int64 RealOwnerAccountId; // x24
      UnbindFacebookAccountMessage *LogicBattle; // x0
      Character::AnimFrameIndices *NpcData; // x0
      int WizardHpMultiplier; // w0
      int v16; // w24
      LogicHitpointComponent *v17; // x23
      _DWORD *v18; // x23
      __int64 v19; // x0
      Sprite *v20; // x23
      const char *v21; // x2
      LogicCharacterBuffComponent *v22; // x23
      int StartingBuffTime; // w24
      const BattleResultMessage *StartingBuff; // x0
      int GrowTime; // w0
      int SpawnStartTime; // w0
    
      Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 136) == -1), (bool)"", a3);
      *(_DWORD *)(a1 + 136) = (_DWORD)a2;
      Data = (Font *)LogicGameObject::getData((GameMode *)a1);
      *(_DWORD *)(a1 + 164) = LogicCharacterData::getSpawnLimit(Data);
      *(_DWORD *)(a1 + 168) = *((_DWORD *)Data + 124);
      if ( (int)LogicCharacterData::getSpeed(Data) >= 1 )
      {
        v7 = (LogicMovementComponent *)operator new(504);
        LogicMovementComponent::LogicMovementComponent(v7, (AllianceJoinFailedMessage *)a1, v8);
        LogicGameObject::addComponent((GameMode *)a1, v7);
        *(_DWORD *)(a1 + 132) = 1;
      }
      Hitpoints = LogicCharacterData::getHitpoints(Data, a2);
      if ( Hitpoints >= 1 )
      {
        v10 = *(LogicSpellListener **)(a1 + 32);
        if ( v10
          && (v11 = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(v10),
              LogicBattle::isNPCBattle(v11))
          && (RealOwnerAccountId = LogicGameObject::getRealOwnerAccountId((GameMode *)a1),
              (unsigned int)LogicLong::getLowerInt(RealOwnerAccountId) == -1)
          && (unsigned int)LogicLong::getHigherInt(RealOwnerAccountId) == -1
          && (LogicCharacterData::isSummoner(Data) || (unsigned int)LogicCharacterData::isPrincessTower(Data)) )
        {
          LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(*(LogicSpellListener **)(a1 + 32));
          NpcData = (Character::AnimFrameIndices *)LogicBattle::getNpcData(LogicBattle);
          WizardHpMultiplier = LogicNpcData::getWizardHpMultiplier(NpcData);
        }
        else
        {
          WizardHpMultiplier = 100;
        }
        v16 = (WizardHpMultiplier * Hitpoints + 99) / 100;
        v17 = (LogicHitpointComponent *)operator new(40);
        LogicHitpointComponent::LogicHitpointComponent(v17, (GameMode *)a1, v16);
        LogicGameObject::addComponent((GameMode *)a1, v17);
        v18 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
        v19 = LogicGameObject::getData((GameMode *)a1);
        LogicHitpointComponent::setLifeTime(v18, *(_DWORD *)(v19 + 776));
      }
      v20 = (Sprite *)operator new(104);
      LogicCombatComponent::LogicCombatComponent((__int64)v20, (GameMode *)a1, v21);
      LogicGameObject::addComponent((GameMode *)a1, v20);
      v22 = (LogicCharacterBuffComponent *)operator new(104);
      LogicCharacterBuffComponent::LogicCharacterBuffComponent(v22, (AllianceJoinFailedMessage *)a1);
      LogicGameObject::addComponent((GameMode *)a1, v22);
      if ( LogicCharacterData::getStartingBuff(Data) )
      {
        StartingBuffTime = LogicCharacterData::getStartingBuffTime((__int64)Data);
        StartingBuff = (const BattleResultMessage *)LogicCharacterData::getStartingBuff(Data);
        LogicCharacterBuffComponent::addCharacterBuff(
          v22,
          0,
          StartingBuff,
          StartingBuffTime,
          (__int64)a2,
          0xFFFFFFFF,
          (const TextField *)a3);
      }
      GrowTime = LogicCharacterData::getGrowTime(Data);
      if ( GrowTime >= 1 )
        *(_DWORD *)(a1 + 152) = GrowTime;
      SpawnStartTime = LogicCharacterData::getSpawnStartTime(Data);
      if ( SpawnStartTime >= 1 )
        *(_DWORD *)(a1 + 156) = SpawnStartTime;
      return LogicGameObject::setOriginSpell(a1, (__int64)a3);
    }

    GameMode *__fastcall LogicCharacter::setState(GameMode *result, const char *a2)
    {
      int v2; // w20
      __int64 v3; // x19
      int v4; // w8
      __int64 CombatComponent; // x0
      __int64 MovementComponent; // x0
      bool *Data; // x21
      int DashPushBack; // w23
      int DashDamage; // w24
      __int64 v10; // x25
      void (__fastcall *v11)(__int64, __int64); // x22
      __int64 LandingEffect; // x0
      UnlockAccountPopup **LogicGameObjectManager; // x25
      #1237 *v14; // x26
      __int64 v15; // x27
      const LogicData *DamageType; // x28
      int v17; // w22
      int v18; // w0
      __int64 v19; // x0
      __int64 v20; // x21
      __int64 v21; // x22
      void (__fastcall *v22)(__int64, __int64); // x23
      __int64 v23; // x0
      __int64 v24; // x0
      __int64 v25; // x0
      __int64 v26; // x0
      CommandStorage *v27; // x0
      __int64 v28; // x0
      __int64 v29; // x0
      __int64 v30; // x0
      LogicMath *v31; // x20
      __int64 v32; // x0
      int DeployTime; // w0
      int v34; // w2
      int v35; // w0
      unsigned int DashRadius; // [xsp+1Ch] [xbp-54h]
    
      v2 = (int)a2;
      v3 = (__int64)result;
      v4 = *((_DWORD *)result + 33);
      if ( v4 != (_DWORD)a2 && *((int *)result + 47) <= 0 )
      {
        switch ( v4 )
        {
          case 2:
            if ( LogicGameObject::getCombatComponent(result) )
            {
              CombatComponent = LogicGameObject::getCombatComponent((GameMode *)v3);
              LogicCombatComponent::deInitState(CombatComponent);
            }
            goto LABEL_14;
          case 3:
            if ( LogicGameObject::getMovementComponent(result) )
            {
              MovementComponent = LogicGameObject::getMovementComponent((GameMode *)v3);
              LogicMovementComponent::setPanic(MovementComponent, 0);
            }
            break;
          case 4:
            Data = (bool *)LogicGameObject::getData(result);
            DashRadius = LogicCharacterData::getDashRadius((Font *)Data);
            DashPushBack = LogicCharacterData::getDashPushBack((Font *)Data);
            DashDamage = LogicCharacterData::getDashDamage((__int64)Data, (LogicMath *)*(unsigned int *)(v3 + 136));
            if ( LogicCharacterData::getLandingEffect((__int64)Data) )
            {
              v10 = *(_QWORD *)(v3 + 40);
              v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 56LL);
              LandingEffect = LogicCharacterData::getLandingEffect((__int64)Data);
              v11(v10, LandingEffect);
            }
            LogicGameObjectManager = (UnlockAccountPopup **)LogicGameObject::getLogicGameObjectManager((GameMode *)v3);
            v14 = (#1237 *)LogicGameObject::getX((GameMode *)v3);
            v15 = LogicGameObject::getY((GameMode *)v3);
            DamageType = (const LogicData *)LogicCharacterData::getDamageType((Font *)Data);
            v17 = LogicGameObject::getX((GameMode *)v3);
            v18 = LogicGameObject::getY((GameMode *)v3);
            LogicGameObjectManager::giveDamageToObjectsInArea(
              LogicGameObjectManager,
              v14,
              v15,
              DashRadius,
              DashDamage,
              DamageType,
              (GameMode *)v3,
              DashPushBack,
              v17,
              v18,
              1000,
              0,
              Data[440],
              Data[441],
              0);
            if ( (unsigned int)LogicCharacterData::isKamikaze((__int64)Data) )
              *(_BYTE *)(v3 + 208) = 1;
            break;
          case 5:
            LogicGameObject::enableComponent((__int64)result, 1, 1);
            *(_DWORD *)(v3 + 188) = 0;
    LABEL_14:
            v19 = LogicGameObject::getData((GameMode *)v3);
            if ( (unsigned int)LogicCharacterData::isHidingWhenNotAttacking(v19) )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 40) + 160LL))(*(_QWORD *)(v3 + 40), 1);
            break;
          case 6:
            v20 = LogicGameObject::getData(result);
            if ( LogicCharacterData::getLandingEffect(v20) )
            {
              v21 = *(_QWORD *)(v3 + 40);
              v22 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 56LL);
              v23 = LogicCharacterData::getLandingEffect(v20);
              v22(v21, v23);
            }
            break;
          default:
            break;
        }
        *(_DWORD *)(v3 + 132) = v2;
        switch ( v2 )
        {
          case 0:
            if ( LogicGameObject::getMovementComponent((GameMode *)v3) )
            {
              v25 = LogicGameObject::getMovementComponent((GameMode *)v3);
              LogicMovementComponent::stop(v25);
            }
            break;
          case 1:
            LogicGameObject::enableComponent(v3, 1, 1);
            if ( LogicGameObject::getMovementComponent((GameMode *)v3) )
            {
              v26 = LogicGameObject::getMovementComponent((GameMode *)v3);
              LogicMovementComponent::start(v26);
              v27 = (CommandStorage *)LogicGameObject::getMovementComponent((GameMode *)v3);
              LogicMovementComponent::moveToTarget(v27);
            }
            break;
          case 2:
            if ( LogicGameObject::getMovementComponent((GameMode *)v3) )
            {
              v28 = LogicGameObject::getMovementComponent((GameMode *)v3);
              LogicMovementComponent::stop(v28);
            }
            v29 = LogicGameObject::getData((GameMode *)v3);
            if ( (unsigned int)LogicCharacterData::isHidingWhenNotAttacking(v29) )
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 40) + 160LL))(*(_QWORD *)(v3 + 40), 0);
            break;
          case 3:
            LogicGameObject::enableComponent(v3, 1, 1);
            if ( LogicGameObject::getMovementComponent((GameMode *)v3) )
            {
              v30 = LogicGameObject::getMovementComponent((GameMode *)v3);
              LogicMovementComponent::setPanic(v30, 1);
            }
            break;
          case 4:
          case 6:
            if ( LogicGameObject::getMovementComponent((GameMode *)v3) )
            {
              v24 = LogicGameObject::getMovementComponent((GameMode *)v3);
              LogicMovementComponent::start(v24);
            }
            break;
          case 5:
            LogicGameObject::enableComponent(v3, 1, 1);
            v31 = (LogicMath *)*(unsigned int *)(v3 + 188);
            v32 = LogicGameObject::getData((GameMode *)v3);
            DeployTime = LogicCharacterData::getDeployTime(v32);
            v35 = LogicMath::max(v31, DeployTime, v34);
            *(_DWORD *)(v3 + 188) = v35;
            *(_DWORD *)(v3 + 192) = v35;
            break;
          default:
            Debugger::error((__siginfo *)"Unknown state", a2);
            return result;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3);
        return (GameMode *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 40) + 152LL))(*(_QWORD *)(v3 + 40));
      }
      return result;
    }

    __int64 __fastcall LogicCharacter::updateCombatComponentState(AllianceJoinFailedMessage *this)
    {
      FriendListMessage *CharacterBuffComponent; // x0
      __int64 v3; // x2
      int v4; // w3
      int v5; // w2
      AllianceJoinFailedMessage *v6; // x0
      __int64 CombatComponent; // x0
    
      if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 152LL))(this)
        && *((int *)this + 47) <= 0
        && !*((_DWORD *)this + 45)
        && (CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(this),
            (unsigned int)LogicCharacterBuffComponent::calculateHitSpeed(CharacterBuffComponent, 50, v3, v4)) )
      {
        v5 = 1;
        v6 = this;
      }
      else
      {
        if ( LogicGameObject::getCombatComponent(this) )
        {
          CombatComponent = LogicGameObject::getCombatComponent(this);
          LogicCombatComponent::setTarget(CombatComponent, 0, 0);
        }
        v5 = 0;
        v6 = this;
      }
      return LogicGameObject::enableComponent((__int64)v6, 0, v5);
    }

    void __fastcall LogicCharacter::tick(AllianceJoinFailedMessage *this, __int64 a2, int a3)
    {
      int v4; // w8
      int v5; // w0
      int v6; // w8
      int v7; // w20
      int v8; // w8
      __int64 OwnerCharacter; // x0
      AllianceItem *v10; // x22
      __int64 v11; // x21
      int v12; // w23
      int v13; // w8
      int v14; // w2
      int v15; // w8
      LogicMath *v16; // x0
      UnlockAccountPopup **LogicBattle; // x0
      __int64 GameListener; // x20
      void (__fastcall *v19)(__int64, __int64, __int64, __int64); // x23
      __int64 v20; // x22
      __int64 v21; // x0
      __int64 Data; // x0
      int v23; // w8
      int v24; // w8
      Font *v25; // x0
      int GrowSize; // w20
      Font *v27; // x0
      int GrowTime; // w0
      int v29; // w2
      int v30; // w8
      int v31; // w1
      AllianceJoinFailedMessage *v32; // x0
      Font *v33; // x0
      const AreaEffectObject *MorphCharacter; // x20
      UnbindFacebookAccountMessage *v35; // x21
      LogicMath *v36; // x22
      LogicMath *v37; // x23
      const #1236 *OwnerAccountId; // x0
      GameMode *v39; // x20
      const char *v40; // x2
      __int64 v41; // x0
      LogicMath *v42; // x21
      const char *OriginSpell; // x0
      Font *v44; // x0
      LogicArenaData *v45; // x0
      int Hitpoints; // w21
      LogicArenaData *v47; // x0
      int v48; // w21
      LogicArenaData *v49; // x0
      int v50; // w21
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 v52; // x0
      __int64 v53; // x0
      LogicSpellListener *v54; // x21
      __int64 GlobalID; // x0
      Font *v56; // x0
      const AreaEffectObject *AreaEffectOnMorph; // x20
      UnbindFacebookAccountMessage *v58; // x21
      LogicMath *v59; // x22
      LogicMath *v60; // x23
      const #1236 *v61; // x0
      GameMode *v62; // x20
      const TextField *v63; // x0
      LogicSpellListener *v64; // x0
      __int64 v65; // x0
      const LogicCharacterData *SpawnCharacter; // x20
      Font *v67; // x0
      int SpawnLimit; // w0
      int v69; // w21
      FriendListMessage *CharacterBuffComponent; // x0
      __int64 v71; // x1
      __int64 v72; // x2
      int v73; // w3
      int SpawnSpeedMultiplier; // w0
      int v75; // w8
      int v76; // w8
      Font *v77; // x0
      int SpawnNumber; // w22
      int v79; // w8
      Font *v80; // x0
      int SpawnPauseTime; // w0
      int v82; // w2
      Font *v83; // x0
      LogicMath *v84; // x0
      _BYTE v85[48]; // [xsp+0h] [xbp-60h] BYREF
    
      v4 = *((_DWORD *)this + 47);
      if ( v4 >= 1 )
      {
        v5 = LogicMath::max((LogicMath *)(unsigned int)(v4 - 50), 0, a3);
        *((_DWORD *)this + 47) = v5;
        if ( v5 > 0 )
          return;
        LogicCharacter::setDefaultState(this);
      }
      v6 = *((_DWORD *)this + 45);
      if ( v6 >= 1 )
        *((_DWORD *)this + 45) = LogicMath::max((LogicMath *)(unsigned int)(v6 - 50), 0, a3);
      if ( *(_BYTE *)(LogicGameObject::getData(this) + 500)
        && (!*(_DWORD *)(LogicGameObject::getData(this) + 496) || *((int *)this + 42) >= 1) )
      {
        v7 = *(_DWORD *)(LogicGameObject::getData(this) + 508);
        v8 = *((_DWORD *)this + 35) + 50;
        *((_DWORD *)this + 35) = v8;
        if ( v8 >= v7 )
        {
          OwnerCharacter = LogicGameObject::getOwnerCharacter((LogicSpellListener **)this);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)OwnerCharacter + 200LL))(OwnerCharacter) )
          {
            v10 = (AllianceItem *)LogicGameObject::getOwnerCharacter((LogicSpellListener **)this);
            v11 = *(unsigned int *)(LogicGameObject::getData(this) + 504);
            v12 = *(_DWORD *)(LogicDataTables::getGlobals() + 148);
            if ( *(int *)(LogicGameObject::getData(this) + 496) >= 1 )
            {
              v13 = *((_DWORD *)this + 42);
              if ( (int)v11 <= v13 )
                v11 = (unsigned int)v11;
              else
                v11 = (unsigned int)v13;
            }
            v15 = LogicSummoner::getMana(v10) + v11;
            v16 = (LogicMath *)*((unsigned int *)this + 35);
            if ( v15 <= v12 )
            {
              *((_DWORD *)this + 35) = (_DWORD)v16 - v7;
              *((_DWORD *)this + 42) -= v11;
              LogicSummoner::increaseMana(v10, v11);
              LogicBattle = (UnlockAccountPopup **)LogicGameObject::getLogicBattle((LogicSpellListener **)this);
              GameListener = LogicBattle::getGameListener(LogicBattle);
              v19 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)GameListener + 376LL);
              v20 = LogicGameObject::getX(this);
              v21 = LogicGameObject::getY(this);
              v19(GameListener, v20, v21, v11);
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 168LL))(*((_QWORD *)this + 5));
            }
            else
            {
              *((_DWORD *)this + 35) = LogicMath::min(v16, v7, v14);
            }
          }
        }
      }
      Data = LogicGameObject::getData(this);
      if ( (unsigned int)LogicCharacterData::isHidingWhenNotAttacking(Data) )
        LogicCharacter::updateHideTimer(this);
      if ( *((_BYTE *)this + 209)
        && ((*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 152LL))(this) & 1) == 0 )
      {
        LogicCharacter::updateDestructionWave(this);
      }
      v23 = *((_DWORD *)this + 38);
      if ( v23 < 1 )
        goto LABEL_40;
      v24 = v23 - 50;
      *((_DWORD *)this + 38) = v24;
      if ( v24 > 0 )
      {
        v25 = (Font *)LogicGameObject::getData(this);
        GrowSize = LogicCharacterData::getGrowSize(v25);
        v27 = (Font *)LogicGameObject::getData(this);
        GrowTime = LogicCharacterData::getGrowTime(v27);
        v30 = *((_DWORD *)this + 38);
        if ( v30 <= 0 )
        {
          v32 = this;
          v31 = GrowSize;
        }
        else
        {
          if ( GrowSize < 101 )
          {
    LABEL_40:
            v65 = LogicGameObject::getData(this);
            SpawnCharacter = (const LogicCharacterData *)LogicCharacterData::getSpawnCharacter(v65);
            v67 = (Font *)LogicGameObject::getData(this);
            SpawnLimit = LogicCharacterData::getSpawnLimit(v67);
            v69 = SpawnLimit;
            if ( SpawnCharacter && (*((int *)this + 41) > 0 || SpawnLimit < 1) )
            {
              CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(this);
              SpawnSpeedMultiplier = LogicCharacterBuffComponent::getSpawnSpeedMultiplier(
                                       CharacterBuffComponent,
                                       v71,
                                       v72,
                                       v73);
              v75 = SpawnSpeedMultiplier >= 0 ? SpawnSpeedMultiplier : SpawnSpeedMultiplier + 1;
              v76 = *((_DWORD *)this + 39) - (v75 >> 1);
              *((_DWORD *)this + 39) = v76;
              if ( v76 <= 0 )
              {
                v77 = (Font *)LogicGameObject::getData(this);
                SpawnNumber = LogicCharacterData::getSpawnNumber(v77);
                LogicCharacter::spawnCharacters(this, SpawnCharacter, 1, 0);
                v79 = *((_DWORD *)this + 40) + 1;
                *((_DWORD *)this + 40) = v79;
                if ( v69 >= 1 )
                  --*((_DWORD *)this + 41);
                if ( v79 >= SpawnNumber )
                {
                  *((_DWORD *)this + 40) = 0;
                  v83 = (Font *)LogicGameObject::getData(this);
                  SpawnPauseTime = LogicCharacterData::getSpawnPauseTime(v83);
                }
                else
                {
                  v80 = (Font *)LogicGameObject::getData(this);
                  SpawnPauseTime = LogicCharacterData::getSpawnInterval(v80);
                }
                v84 = (LogicMath *)(unsigned int)(*((_DWORD *)this + 39) + SpawnPauseTime);
                *((_DWORD *)this + 39) = (_DWORD)v84;
                *((_DWORD *)this + 39) = LogicMath::max(v84, 1, v82);
              }
            }
            (*(void (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 248LL))(this);
            LogicGameObject::tick(this);
            return;
          }
          v31 = LogicMath::max((LogicMath *)1, (GrowTime - v30) * (GrowSize - 100) / GrowTime + 100, v29);
          v32 = this;
        }
        LogicCharacter::growToSize(v32, v31);
        goto LABEL_40;
      }
      *((_DWORD *)this + 38) = 0;
      *((_BYTE *)this + 208) = 1;
      v33 = (Font *)LogicGameObject::getData(this);
      MorphCharacter = (const AreaEffectObject *)LogicCharacterData::getMorphCharacter(v33);
      if ( MorphCharacter )
      {
        v35 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)this);
        v36 = (LogicMath *)*(unsigned int *)LogicGameObject::getPosition(this);
        v37 = (LogicMath *)*(unsigned int *)(LogicGameObject::getPosition(this) + 4);
        OwnerAccountId = (const #1236 *)LogicGameObject::getOwnerAccountId((LogicSpellListener **)this);
        v39 = LogicBattle::spawnObject(v35, MorphCharacter, v36, v37, OwnerAccountId, 0, 0);
        Debugger::doAssert((Debugger *)(*((_DWORD *)this + 34) != -1), (bool)"", v40);
        LODWORD(v35) = *((_DWORD *)this + 34);
        v41 = LogicGameObject::getData(this);
        v42 = (LogicMath *)((unsigned int)LogicCharacterData::getSpawnCharacterLevelIndex(v41) + (unsigned int)v35);
        OriginSpell = (const char *)LogicGameObject::getOriginSpell(this);
        LogicCharacter::setLevelIndex((__int64)v39, v42, OriginSpell);
        v44 = (Font *)LogicGameObject::getData(this);
        if ( (LogicCharacterData::getHealOnMorph(v44) & 1) == 0 )
        {
          v45 = (LogicArenaData *)(*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 136LL))(this);
          Hitpoints = LogicHitpointComponent::getHitpoints(v45);
          v47 = (LogicArenaData *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v39 + 136LL))(v39);
          v48 = LogicHitpointComponent::getMaxHitpoints(v47) * Hitpoints;
          v49 = (LogicArenaData *)(*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 136LL))(this);
          v50 = v48 / (int)LogicHitpointComponent::getMaxHitpoints(v49);
          *(_DWORD *)((*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v39 + 136LL))(v39) + 16) = v50;
        }
        LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(this);
        LogicGameObjectManager::addLogicGameObject(LogicGameObjectManager, v39, 1);
        if ( LogicGameObject::getCharacterBuffComponent(this) && LogicGameObject::getCharacterBuffComponent(v39) )
        {
          ByteStream::ByteStream((ByteStream *)v85, 128);
          v52 = LogicGameObject::getCharacterBuffComponent(this);
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v52 + 40LL))(v52, v85);
          ByteStream::resetOffset((ByteStream *)v85);
          v53 = LogicGameObject::getCharacterBuffComponent(v39);
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v53 + 48LL))(v53, v85);
          ByteStream::destruct((ChallengePopup *)v85);
        }
        v54 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(this);
        GlobalID = LogicGameObject::getGlobalID(this);
        LogicGameObjectManager::removeGameObjectReferences(v54, this, GlobalID, 0, v39);
      }
      v56 = (Font *)LogicGameObject::getData(this);
      AreaEffectOnMorph = (const AreaEffectObject *)LogicCharacterData::getAreaEffectOnMorph(v56);
      if ( AreaEffectOnMorph )
      {
        v58 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)this);
        v59 = (LogicMath *)*(unsigned int *)LogicGameObject::getPosition(this);
        v60 = (LogicMath *)*(unsigned int *)(LogicGameObject::getPosition(this) + 4);
        v61 = (const #1236 *)LogicGameObject::getOwnerAccountId((LogicSpellListener **)this);
        v62 = LogicBattle::spawnObject(v58, AreaEffectOnMorph, v59, v60, v61, 0, 0);
        LODWORD(v58) = *((_DWORD *)this + 34);
        v63 = (const TextField *)LogicGameObject::getOriginSpell(this);
        LogicAreaEffectObject::init(v62, (int)v58, v63);
        v64 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(this);
        LogicGameObjectManager::addLogicGameObject(v64, v62, 1);
      }
    }

    GameMode *__fastcall LogicCharacter::setDefaultState(AllianceJoinFailedMessage *this)
    {
      __int64 TutorialManager; // x0
      __int64 v3; // x1
    
      if ( LogicGameObject::hasMovementComponent(this) )
      {
        TutorialManager = LogicGameMode::getTutorialManager(*(_QWORD *)(*((_QWORD *)this + 4) + 56LL));
        if ( (unsigned int)LogicTutorialManager::isMovementEnabled(TutorialManager, *((unsigned __int8 *)this + 209)) )
        {
          v3 = 1;
          return LogicCharacter::setState(this, (const char *)v3);
        }
      }
      if ( (*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 136LL))(this) )
      {
        v3 = 0;
        return LogicCharacter::setState(this, (const char *)v3);
      }
      return (GameMode *)(*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 80LL))(this);
    }

    __int64 __fastcall LogicCharacter::updateHideTimer(AllianceJoinFailedMessage *this)
    {
      char shouldHide; // w22
      FriendListMessage *CharacterBuffComponent; // x0
      __int64 v4; // x2
      int v5; // w3
      int v6; // w21
      __int64 Data; // x0
      int UpTimeMs; // w20
      __int64 v9; // x0
      int v10; // w23
      int v11; // w24
      int v12; // w20
      __int64 v13; // x0
      __int64 result; // x0
      int v15; // w2
      int v16; // w21
      __int64 v19; // x21
      void (__fastcall *v20)(__int64, _QWORD); // x22
      __int64 v21; // x0
      __int64 v22; // x0
      __int64 v23; // x21
      __int64 (__fastcall *v24)(__int64, _QWORD); // x22
      __int64 v25; // x0
    
      shouldHide = LogicCharacter::shouldHide(this);
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(this);
      v6 = LogicCharacterBuffComponent::calculateSpeed(CharacterBuffComponent, 50, v4, v5);
      Data = LogicGameObject::getData(this);
      UpTimeMs = LogicCharacterData::getUpTimeMs(Data);
      v9 = LogicGameObject::getData(this);
      v10 = LogicCharacterData::getHideTimeMs(v9) + UpTimeMs;
      v11 = *((_DWORD *)this + 36);
      v12 = v11 + v6;
      v13 = LogicGameObject::getData(this);
      result = LogicCharacterData::getHideTimeMs(v13);
      if ( (shouldHide & 1) != 0 )
      {
        v16 = *((_DWORD *)this + 36);
        if ( v12 >= (int)result && v16 <= (int)result )
        {
          *((_DWORD *)this + 36) = result;
          return result;
        }
      }
      else
      {
        if ( v11 < (int)result )
        {
          result = LogicMath::max((LogicMath *)(unsigned int)(*((_DWORD *)this + 36) - v6), 0, v15);
          v12 = result;
        }
        v16 = *((_DWORD *)this + 36);
        if ( v12 > v10 || v16 == 0 )
        {
          *((_DWORD *)this + 36) = 0;
          return result;
        }
      }
      if ( !v16 )
      {
        v19 = *((_QWORD *)this + 5);
        v20 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 56LL);
        v21 = LogicGameObject::getData(this);
        v20(v19, *(_QWORD *)(v21 + 488));
        v16 = *((_DWORD *)this + 36);
      }
      v22 = LogicGameObject::getData(this);
      result = LogicCharacterData::getHideTimeMs(v22);
      if ( v16 == (_DWORD)result )
      {
        v23 = *((_QWORD *)this + 5);
        v24 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 56LL);
        v25 = LogicGameObject::getData(this);
        result = v24(v23, *(_QWORD *)(v25 + 480));
      }
      *((_DWORD *)this + 36) = v12 % v10;
      return result;
    }

    __int64 __fastcall LogicCharacter::isLeader(AllianceJoinFailedMessage *this)
    {
      return *((unsigned __int8 *)this + 209);
    }

    void __fastcall LogicCharacter::updateDestructionWave(AllianceJoinFailedMessage *this)
    {
      __int64 RealOwnerAccountId; // x19
      UnbindFacebookAccountMessage *LogicBattle; // x0
      __int64 v4; // x20
      UnbindFacebookAccountMessage *v5; // x0
      ChangeAllianceMemberRoleOkMessage *LocationData; // x0
      int v7; // w2
      int v8; // w21
      int v9; // w20
      const char *v10; // x2
      __int64 v11; // x21
      __int64 v12; // x22
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 v14; // x0
      _QWORD *v15; // x23
      int v16; // w26
      __int64 v17; // x27
      GameMode *v18; // x25
      __int64 Position; // x0
      LogicArenaData *v20; // x24
      __int64 v21; // x0
      int Hitpoints; // w25
      const LogicData *PhysicalDamageType; // x0
    
      *((_DWORD *)this + 43) += 50;
      RealOwnerAccountId = LogicGameObject::getRealOwnerAccountId(this);
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)this);
      v4 = 500 * (unsigned int)LogicBattle::getTilemapHeight(LogicBattle);
      v5 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)this);
      LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(v5);
      v8 = (int)LogicLocationData::getEndScreenDelay(LocationData) >> 1;
      if ( v8 >= 1 )
      {
        v9 = LogicMath::min((LogicMath *)*((unsigned int *)this + 43), v8, v7) * v4;
        Debugger::doAssert((Debugger *)(v9 >= 0), (bool)"", v10);
        v4 = (unsigned int)(v9 / v8);
      }
      v11 = LogicGameObject::getX(this);
      v12 = LogicGameObject::getY(this);
      LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(this);
      LogicGameObjectManager::getGameObjects(LogicGameObjectManager);
      v15 = (_QWORD *)v14;
      v16 = *(_DWORD *)(v14 + 12);
      if ( v16 >= 1 )
      {
        v17 = 0;
        do
        {
          v18 = *(GameMode **)(*v15 + 8 * v17);
          Position = LogicGameObject::getPosition(v18);
          if ( (unsigned int)LogicVector2::isInDistanceXY(Position, v11, v12, v4) )
          {
            v20 = (LogicArenaData *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v18 + 136LL))(v18);
            if ( v20 )
            {
              if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v18 + 152LL))(v18) )
              {
                v21 = LogicGameObject::getRealOwnerAccountId(v18);
                if ( (unsigned int)LogicLong::equals(v21, RealOwnerAccountId) )
                {
                  Hitpoints = LogicHitpointComponent::getHitpoints(v20);
                  PhysicalDamageType = (const LogicData *)LogicDataTables::getPhysicalDamageType();
                  LogicHitpointComponent::applyDamage((__int64)v20, Hitpoints, PhysicalDamageType, 0, 0, 0, 1);
                }
              }
            }
          }
          ++v17;
        }
        while ( v16 != (_DWORD)v17 );
      }
    }

    __int64 __fastcall LogicCharacter::getLevelIndex(AllianceJoinFailedMessage *this, __int64 a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)(*((_DWORD *)this + 34) != -1), (bool)"", a3);
      return *((unsigned int *)this + 34);
    }

    __int64 __fastcall LogicCharacter::growToSize(AllianceJoinFailedMessage *this, int a2)
    {
      int v3; // w20
      FriendListMessage *CharacterBuffComponent; // x0
      int v5; // w2
      int v6; // w20
      FriendListMessage *v7; // x0
      int v8; // w2
      int v9; // w21
      LogicArenaData *v10; // x0
    
      v3 = *((_DWORD *)this + 37);
      *((_DWORD *)this + 37) = a2;
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(this);
      v6 = LogicCharacterBuffComponent::calculateSize(CharacterBuffComponent, v3, v5);
      v7 = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(this);
      v9 = LogicCharacterBuffComponent::calculateSize(v7, *((_DWORD *)this + 37), v8);
      v10 = (LogicArenaData *)(*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 136LL))(this);
      return LogicHitpointComponent::onSizeChanged(v10, v6, v9);
    }

    __int64 __fastcall LogicCharacter::spawnCharacters(__int64 result, Font *a2, int a3, char a4)
    {
      int v5; // w28
      GameMode *v7; // x22
      int v8; // w21
      int v9; // w24
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int v11; // w25
      int v12; // w23
      int v13; // w27
      int v14; // w2
      int v15; // w26
      int v16; // w0
      int v17; // w0
      __int64 v18; // x0
      int v19; // w24
      int v20; // w0
      const #1236 *OwnerAccountId; // x24
      __int64 Data; // x0
      const AskForTVContentMessage *SpawnCharacterEffect; // x25
      UnbindFacebookAccountMessage *v24; // x0
      GameMode *v25; // x24
      const char *v26; // x2
      const char *OriginSpell; // x25
      Font *v28; // x0
      UnbindFacebookAccountMessage *v29; // x25
      __int64 v30; // x0
      int HigherInt; // w26
      __int64 v32; // x0
      int LowerInt; // w0
      __int64 v34; // x0
      char *MinionServerEventSpell; // x0
      int v36; // w23
      __int64 v37; // x0
      int SpawnCharacterLevelIndex; // w0
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 v40; // x24
      __int64 (__fastcall *v41)(__int64, __int64); // x23
      __int64 DeployTime; // x0
      LogicSpellListener *v43; // x0
      unsigned int v44; // [xsp+8h] [xbp-58h] BYREF
      unsigned int v45; // [xsp+Ch] [xbp-54h]
    
      v5 = a3;
      v7 = (GameMode *)result;
      if ( a2 && a3 >= 1 )
      {
        do
        {
          v8 = v5--;
          LogicVector2::LogicVector2((LogicVector2 *)&v44);
          v9 = LogicGameObject::getX(v7);
          LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)v7);
          v11 = 0;
          v12 = 0;
          v13 = (int)(500 * LogicBattle::getTilemapWidth(LogicBattle)) >> 1;
          do
          {
            if ( (a4 & 1) != 0 )
            {
              v14 = 0;
            }
            else
            {
              v15 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v7 + 112LL))(v7);
              v14 = LogicCharacterData::getCollisionRadius(a2) + v15;
            }
            LogicVector2::set((LogicVector2 *)&v44, 0, v14);
            LogicVector2::rotate((LogicVector2 *)&v44, v11);
            if ( v9 > v13 )
              v44 = -v44;
            if ( (unsigned int)LogicGameObject::getOwnerIndex(v7) == 1 )
              v45 = -v45;
            v16 = LogicGameObject::getX(v7);
            v44 += v16;
            v17 = LogicGameObject::getY(v7);
            v45 += v17;
            v18 = LogicGameObject::getLogicBattle((LogicSpellListener **)v7);
            if ( (LogicTileMap::isValidSpawnPoint(*(RequestSingleSpellPopup **)(v18 + 8), v44, v45, a2) & 1) != 0 )
              break;
            ++v12;
            v11 += 90;
          }
          while ( v12 < 4 );
          if ( v12 == 4 )
          {
            v19 = LogicGameObject::getX(v7) + 1;
            v20 = LogicGameObject::getY(v7);
            LogicVector2::set((LogicVector2 *)&v44, v19, v20);
          }
          OwnerAccountId = (const #1236 *)LogicGameObject::getOwnerAccountId((LogicSpellListener **)v7);
          Data = LogicGameObject::getData(v7);
          SpawnCharacterEffect = (const AskForTVContentMessage *)LogicCharacterData::getSpawnCharacterEffect(Data);
          v24 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)v7);
          v25 = LogicBattle::spawnObject(
                  v24,
                  a2,
                  (LogicMath *)v44,
                  (LogicMath *)v45,
                  OwnerAccountId,
                  SpawnCharacterEffect,
                  0);
          OriginSpell = (const char *)LogicGameObject::getOriginSpell(v7);
          if ( LogicServerEventCollector::ENABLED )
          {
            v28 = (Font *)LogicGameObject::getData(v7);
            if ( (unsigned int)LogicCharacterData::isPrincessTower(v28) )
            {
              v29 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)v7);
              v30 = LogicGameObject::getOwnerAccountId((LogicSpellListener **)v7);
              HigherInt = LogicLong::getHigherInt(v30);
              v32 = LogicGameObject::getOwnerAccountId((LogicSpellListener **)v7);
              LowerInt = LogicLong::getLowerInt(v32);
              LODWORD(v29) = LogicBattle::getAccountIndex(v29, HigherInt, LowerInt);
              v34 = LogicGameObject::getLogicBattle((LogicSpellListener **)v7);
              MinionServerEventSpell = (char *)LogicBattle::getMinionServerEventSpell(v34, (int)v29);
              OriginSpell = MinionServerEventSpell;
              if ( MinionServerEventSpell )
                LogicSpell::increaseServerEvent(MinionServerEventSpell);
              else
                OriginSpell = 0;
            }
          }
          Debugger::doAssert((Debugger *)(*((_DWORD *)v7 + 34) != -1), (bool)"", v26);
          v36 = *((_DWORD *)v7 + 34);
          v37 = LogicGameObject::getData(v7);
          SpawnCharacterLevelIndex = LogicCharacterData::getSpawnCharacterLevelIndex(v37);
          LogicCharacter::setLevelIndex(
            (__int64)v25,
            (LogicMath *)(unsigned int)(SpawnCharacterLevelIndex + v36),
            OriginSpell);
          if ( LogicCharacterData::isTrap(a2) && (int)LogicCharacterData::getDeployTime((__int64)a2) >= 1 )
          {
            LogicCharacter::setState(v25, (const char *)5);
            LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(v7);
            LogicGameObjectManager::addLogicGameObject(LogicGameObjectManager, v25, 1);
            v40 = *((_QWORD *)v25 + 5);
            v41 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 184LL);
            DeployTime = LogicCharacterData::getDeployTime((__int64)a2);
            result = v41(v40, DeployTime);
          }
          else
          {
            v43 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(v7);
            result = LogicGameObjectManager::addLogicGameObject(v43, v25, 1);
          }
        }
        while ( v8 >= 2 );
      }
      return result;
    }

    bool __fastcall LogicCharacter::isAlive(AllianceJoinFailedMessage *this)
    {
      if ( (*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 136LL))(this) )
        return LogicGameObject::isAlive(this);
      else
        return *((_DWORD *)this + 47) > 0;
    }

    __int64 __fastcall LogicCharacter::onSizeChanged(AllianceJoinFailedMessage *this, int a2, int a3)
    {
      LogicArenaData *v5; // x0
    
      v5 = (LogicArenaData *)(*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 136LL))(this);
      return LogicHitpointComponent::onSizeChanged(v5, a2, a3);
    }

    __int64 __fastcall LogicCharacter::isTower(AllianceJoinFailedMessage *this)
    {
      Font *Data; // x0
    
      Data = (Font *)LogicGameObject::getData(this);
      return LogicCharacterData::isPrincessTower(Data);
    }

    __int64 __fastcall LogicCharacter::shouldDestruct(AllianceJoinFailedMessage *this)
    {
      if ( *((_BYTE *)this + 209) )
        return 0;
      if ( *((_BYTE *)this + 208) )
        return 1;
      return LogicGameObject::shouldDestruct(this);
    }

    // attributes: thunk
    __int64 __fastcall LogicCharacter::attachLogicGameObjectManager(__int64 this, __int64 a2)
    {
      return LogicGameObject::attachLogicGameObjectManager(this, a2);
    }

    __int64 __fastcall LogicCharacter::canBeTargeted(AllianceJoinFailedMessage *this)
    {
      return (unsigned int)LogicCharacter::isHidden(this) ^ 1;
    }

    bool __fastcall LogicCharacter::isHidden(AllianceJoinFailedMessage *this)
    {
      __int64 Data; // x0
      int v3; // w20
      __int64 v4; // x0
    
      Data = LogicGameObject::getData(this);
      if ( !(unsigned int)LogicCharacterData::isHidingWhenNotAttacking(Data) )
        return 0;
      v3 = *((_DWORD *)this + 36);
      v4 = LogicGameObject::getData(this);
      return v3 == (unsigned int)LogicCharacterData::getHideTimeMs(v4);
    }

    bool __fastcall LogicCharacter::isFlying(AllianceJoinFailedMessage *this)
    {
      Font *Data; // x0
    
      Data = (Font *)LogicGameObject::getData(this);
      return LogicCharacterData::isFlying(Data);
    }

    __int64 __fastcall LogicCharacter::getState(AllianceJoinFailedMessage *this)
    {
      return *((unsigned int *)this + 33);
    }

    __int64 __fastcall LogicCharacter::getDamageEffect(AllianceJoinFailedMessage *this)
    {
      Font *Data; // x0
    
      Data = (Font *)LogicGameObject::getData(this);
      return LogicCharacterData::getDamageEffect(Data, 0);
    }

    __int64 __fastcall LogicCharacter::getDeathEffect(AllianceJoinFailedMessage *this)
    {
      Font *Data; // x0
    
      Data = (Font *)LogicGameObject::getData(this);
      return LogicCharacterData::getDeathEffect(Data);
    }

    __int64 __fastcall LogicCharacter::getRadius(AllianceJoinFailedMessage *this)
    {
      Font *Data; // x0
    
      if ( (*((_DWORD *)this + 33) | 2) == 6 )
        return 0;
      Data = (Font *)LogicGameObject::getData(this);
      return LogicCharacterData::getCollisionRadius(Data);
    }

    __int64 __fastcall LogicCharacter::onDeath(__int64 a1)
    {
      AllianceItem *v2; // x20
      __int64 Data; // x21
      __int64 ManaOnDeath; // x22
      __int64 v5; // x23
      bool v6; // zf
      LogicArenaData *v7; // x0
      __int64 DeathHitAngle; // x24
      __int64 v9; // x25
      void (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64); // x20
      __int64 v11; // x26
      __int64 v12; // x27
      __int64 v13; // x28
      __int64 OwnerAccountId; // x0
      __int64 CharacterBuffComponent; // x0
      __int64 v16; // x23
      int v17; // w22
      int DeathDamage; // w0
      int v19; // w24
      #1237 *v20; // x26
      __int64 v21; // x27
      const LogicData *DamageType; // x28
      int v23; // w25
      int v24; // w0
      Font *v25; // x1
      UnbindFacebookAccountMessage *LogicBattle; // x0
      ChangeAllianceMemberRoleOkMessage *LocationData; // x0
      __int64 v28; // x0
      const AreaEffectObject *v29; // x2
      __int64 EffectByName; // x21
      __int64 v31; // x21
      void (__fastcall *v32)(__int64, __int64); // x22
      const AreaEffectObject *v33; // x2
      __int64 v34; // x0
      int v35; // w0
      LogicSpellListener *v37; // [xsp+18h] [xbp-88h]
      UnlockAccountPopup **LogicGameObjectManager; // [xsp+18h] [xbp-88h]
      String v39; // [xsp+20h] [xbp-80h] BYREF
      String v40; // [xsp+38h] [xbp-68h] BYREF
    
      v2 = (AllianceItem *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
      Data = LogicGameObject::getData((GameMode *)a1);
      ManaOnDeath = LogicCharacterData::getManaOnDeath((Font *)Data);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL))(a1);
      if ( v5 )
        v6 = *(_BYTE *)(a1 + 209) == 0;
      else
        v6 = 0;
      if ( v6 )
      {
        v37 = v2;
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1) )
        {
          v7 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
          DeathHitAngle = LogicHitpointComponent::getDeathHitAngle(v7);
        }
        else
        {
          DeathHitAngle = 0;
        }
        v9 = *(_QWORD *)(LogicGameObject::getLogicGameObjectManager((GameMode *)a1) + 40);
        v10 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v9 + 72LL);
        v11 = LogicGameObject::getX((GameMode *)a1);
        v12 = LogicGameObject::getY((GameMode *)a1);
        v13 = LogicGameObject::getZ((GameMode *)a1);
        OwnerAccountId = LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
        v10(v9, v11, v12, v13, v5, 0, OwnerAccountId, DeathHitAngle);
        v2 = v37;
      }
      if ( (int)ManaOnDeath >= 1 )
      {
        if ( v2
          && (*(unsigned int (__fastcall **)(AllianceItem *))(*(_QWORD *)v2 + 200LL))(v2)
          && (*(unsigned int (__fastcall **)(AllianceItem *))(*(_QWORD *)v2 + 152LL))(v2) )
        {
          LogicSummoner::increaseMana(v2, ManaOnDeath);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 136LL))(*(_QWORD *)(a1 + 40), ManaOnDeath);
      }
      if ( LogicGameObject::getCharacterBuffComponent((GameMode *)a1) )
      {
        CharacterBuffComponent = LogicGameObject::getCharacterBuffComponent((GameMode *)a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)CharacterBuffComponent + 64LL))(CharacterBuffComponent);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 96LL))(*(_QWORD *)(a1 + 40), 0, 0);
      LogicGameObject::enableComponent(a1, 1, 0);
      LogicGameObject::enableComponent(a1, 0, 0);
      v16 = *(unsigned int *)(Data + 444);
      v17 = *(_DWORD *)(Data + 448);
      DeathDamage = LogicCharacterData::getDeathDamage(Data, (LogicMath *)*(unsigned int *)(a1 + 136));
      v19 = DeathDamage;
      if ( (int)v16 >= 1 && (v17 > 0 || DeathDamage >= 1) )
      {
        LogicGameObjectManager = (UnlockAccountPopup **)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
        v20 = (#1237 *)LogicGameObject::getX((GameMode *)a1);
        v21 = LogicGameObject::getY((GameMode *)a1);
        DamageType = (const LogicData *)LogicCharacterData::getDamageType((Font *)Data);
        v23 = LogicGameObject::getX((GameMode *)a1);
        v24 = LogicGameObject::getY((GameMode *)a1);
        LogicGameObjectManager::giveDamageToObjectsInArea(
          LogicGameObjectManager,
          v20,
          v21,
          v16,
          v19,
          DamageType,
          (GameMode *)a1,
          v17,
          v23,
          v24,
          1000,
          0,
          *(_BYTE *)(Data + 440),
          *(_BYTE *)(Data + 441),
          0);
      }
      v25 = *(Font **)(Data + 456);
      if ( v25 )
        LogicCharacter::spawnCharacters(a1, v25, *(_DWORD *)(Data + 452), *(_DWORD *)(Data + 452) == 1);
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
      LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(LogicBattle);
      if ( LocationData )
      {
        if ( (unsigned int)LogicLocationData::isCrowdEffectsEnabled(LocationData) )
        {
          v28 = LogicGameObject::getData((GameMode *)a1);
          if ( (unsigned int)LogicCharacterData::isCrowdEffectsEnabled(v28) )
          {
            String::String(&v40, "CrowdDieBigUnit");
            EffectByName = LogicDataTables::getEffectByName((LogicKickAllianceMemberCommand *)&v40, 0, v29);
            String::~String();
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40), EffectByName);
          }
        }
      }
      if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1) & 1) == 0
        && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1) & 1) == 0 )
      {
        v31 = *(_QWORD *)(a1 + 40);
        v32 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 72LL);
        String::String(&v39, "GenericDie");
        v34 = LogicDataTables::getEffectByName((LogicKickAllianceMemberCommand *)&v39, 0, v33);
        v32(v31, v34);
        String::~String();
      }
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1);
      if ( v2
        && v35
        && (*(unsigned int (__fastcall **)(AllianceItem *))(*(_QWORD *)v2 + 200LL))(v2)
        && (*(unsigned int (__fastcall **)(AllianceItem *))(*(_QWORD *)v2 + 152LL))(v2) )
      {
        LogicSummoner::onTowerDestroyed((LogicSpellListener **)v2);
      }
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1) )
        *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1) + 16) = 0;
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40));
    }

    __int64 __fastcall LogicCharacter::getControllingCharacter(AllianceJoinFailedMessage *this)
    {
      FriendListMessage *CharacterBuffComponent; // x0
    
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(this);
      if ( LogicCharacterBuffComponent::isControlChanged(CharacterBuffComponent) )
        return LogicGameObject::getOpponentOwnerCharacter((LogicSpellListener **)this);
      else
        return LogicGameObject::getOwnerCharacter((LogicSpellListener **)this);
    }

    __int64 __fastcall LogicCharacter::getSize(AllianceJoinFailedMessage *this)
    {
      FriendListMessage *CharacterBuffComponent; // x0
      int v3; // w2
    
      if ( !LogicGameObject::getCharacterBuffComponent(this) )
        return *((unsigned int *)this + 37);
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(this);
      return LogicCharacterBuffComponent::calculateSize(CharacterBuffComponent, *((_DWORD *)this + 37), v3);
    }

    __int64 __fastcall LogicCharacter::isBuffPointFor(AllianceJoinFailedMessage *this, const AllianceJoinFailedMessage *a2)
    {
      __int64 Data; // x0
      int OwnerIndex; // w21
      Font *v6; // x0
      const BattleResultMessage *BuffOnDamage; // x20
      FriendListMessage *CharacterBuffComponent; // x0
    
      Data = LogicGameObject::getData(this);
      if ( !LogicCharacterData::isBuffPoint(Data) )
        return 0;
      if ( !LogicGameObject::getMovementComponent(a2) )
        return 0;
      OwnerIndex = LogicGameObject::getOwnerIndex(a2);
      if ( OwnerIndex != (unsigned int)LogicGameObject::getOwnerIndex(this) )
        return 0;
      v6 = (Font *)LogicGameObject::getData(this);
      BuffOnDamage = (const BattleResultMessage *)LogicCharacterData::getBuffOnDamage(v6);
      if ( !BuffOnDamage )
        return 0;
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(a2);
      return (unsigned int)LogicCharacterBuffComponent::hasBuff(CharacterBuffComponent, BuffOnDamage) ^ 1;
    }

    __int64 __fastcall LogicCharacter::setAsLeader(__int64 this)
    {
      *(_BYTE *)(this + 209) = 1;
      return this;
    }

    __int64 __fastcall LogicCharacter::getHitpointsForWinningCondition(AllianceJoinFailedMessage *this)
    {
      LogicArenaData *v1; // x0
    
      v1 = (LogicArenaData *)(*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 136LL))(this);
      return LogicHitpointComponent::getHitpoints(v1);
    }

    __int64 __fastcall LogicCharacter::getDirection(AllianceJoinFailedMessage *this)
    {
      return (__int64)this + 120;
    }

    __int64 __fastcall LogicCharacter::getAngle(AllianceJoinFailedMessage *this)
    {
      return LogicVector2::getAngle((char *)this + 120);
    }

    __int64 __fastcall LogicCharacter::setDirectionTowardsTargetObject(AllianceJoinFailedMessage *this)
    {
      const GameMode *Target; // x1
    
      Target = (const GameMode *)LogicGameObject::getTarget(this);
      return LogicCharacter::setDirectionTowardsTargetObject(this, Target);
    }

    _DWORD *__fastcall LogicCharacter::setDirectionTowardsTargetObject(_DWORD *this, const GameMode *a2)
    {
      _DWORD *v3; // x19
      int v4; // w21
      int v5; // w20
    
      v3 = this;
      if ( a2 )
      {
        v4 = LogicGameObject::getX(a2);
        v3[30] = v4 - LogicGameObject::getX((GameMode *)v3);
        v5 = LogicGameObject::getY(a2);
        v3[31] = v5 - LogicGameObject::getY((GameMode *)v3);
        return (_DWORD *)LogicVector2::normalize((LogicVector2 *)(v3 + 30), 256);
      }
      return this;
    }

    __int64 __fastcall LogicCharacter::getGrowthTimer(AllianceJoinFailedMessage *this)
    {
      return *((unsigned int *)this + 38);
    }

    __int64 __fastcall LogicCharacter::setServerEventKillSpell(__int64 this, const TextField *a2)
    {
      if ( LogicServerEventCollector::ENABLED )
        *(_QWORD *)(this + 200) = a2;
      return this;
    }

    __int64 __fastcall LogicCharacter::getServerEventKillSpell(AllianceJoinFailedMessage *this)
    {
      return *((_QWORD *)this + 25);
    }

    __int64 __fastcall LogicCharacter::setLaneID(__int64 this, int a2)
    {
      *(_DWORD *)(this + 176) = a2;
      return this;
    }

    bool __fastcall LogicCharacter::isBuilding(AllianceJoinFailedMessage *this)
    {
      Font *Data; // x0
    
      Data = (Font *)LogicGameObject::getData(this);
      return LogicCharacterData::isBuilding(Data);
    }

    __int64 __fastcall LogicCharacter::getDeployT(AllianceJoinFailedMessage *this)
    {
      __int64 Data; // x0
      int DeployTime; // w8
      int v4; // w3
    
      Data = LogicGameObject::getData(this);
      DeployTime = LogicCharacterData::getDeployTime(Data);
      return LogicMath::clamp((#1237 *)(unsigned int)(DeployTime - *((_DWORD *)this + 47)), 0, DeployTime, v4);
    }

    __int64 __fastcall LogicCharacter::getPrevDeployT(AllianceJoinFailedMessage *this)
    {
      __int64 Data; // x0
      int DeployTime; // w8
      int v4; // w3
    
      Data = LogicGameObject::getData(this);
      DeployTime = LogicCharacterData::getDeployTime(Data);
      return LogicMath::clamp((#1237 *)(unsigned int)(DeployTime - *((_DWORD *)this + 48)), 0, DeployTime, v4);
    }

    LogicMovementComponent *__fastcall LogicCharacter::updatePrevPos(AllianceJoinFailedMessage *this)
    {
      LogicMovementComponent *result; // x0
    
      result = LogicGameObject::updatePrevPos(this);
      *((_DWORD *)this + 48) = *((_DWORD *)this + 47);
      return result;
    }

    __int64 __fastcall LogicCharacter::shouldHide(AllianceJoinFailedMessage *this)
    {
      __int64 Data; // x0
    
      Data = LogicGameObject::getData(this);
      if ( (unsigned int)LogicCharacterData::isHidingWhenNotAttacking(Data) )
        return (*((_DWORD *)this + 33) != 5) & (unsigned __int8)(*((_DWORD *)this + 33) != 2);
      else
        return 0;
    }

    __int64 __fastcall LogicCharacter::getRemainingAmmo(AllianceJoinFailedMessage *this)
    {
      __int64 Data; // x0
      int ReloadAfterHits; // w0
    
      Data = LogicGameObject::getData(this);
      ReloadAfterHits = LogicCharacterData::getReloadAfterHits(Data);
      if ( ReloadAfterHits < 1 || *((_DWORD *)this + 45) )
        return 0;
      else
        return (unsigned int)(ReloadAfterHits - *((_DWORD *)this + 46));
    }

    __int64 __fastcall LogicCharacter::attackDone(AllianceJoinFailedMessage *this)
    {
      __int64 Data; // x0
      int v3; // w20
      __int64 v4; // x0
      __int64 v5; // x0
      int ReloadTime; // w0
      int v7; // w1
    
      Data = LogicGameObject::getData(this);
      if ( (int)LogicCharacterData::getReloadAfterHits(Data) >= 1 )
      {
        v3 = *((_DWORD *)this + 46) + 1;
        *((_DWORD *)this + 46) = v3;
        v4 = LogicGameObject::getData(this);
        if ( v3 >= (int)LogicCharacterData::getReloadAfterHits(v4) )
        {
          *((_DWORD *)this + 46) = 0;
          v5 = LogicGameObject::getData(this);
          ReloadTime = LogicCharacterData::getReloadTime(v5);
          if ( ReloadTime )
            v7 = ReloadTime;
          else
            v7 = -1;
          *((_DWORD *)this + 45) = v7;
          if ( v7 >= 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 184LL))(*((_QWORD *)this + 5));
        }
      }
      return (*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)this + 248LL))(this);
    }

    __int64 __fastcall LogicCharacter::getRemainingManaGenerateLimit(AllianceJoinFailedMessage *this)
    {
      return *((unsigned int *)this + 42);
    }

    __int64 __fastcall LogicCharacter::getRemainingSpawnCount(AllianceJoinFailedMessage *this)
    {
      return *((unsigned int *)this + 41);
    }

    __int64 __fastcall LogicCharacter::addPendingPhysicalDamage(__int64 this, int a2)
    {
      *(_DWORD *)(this + 128) += a2;
      return this;
    }

    __int64 __fastcall LogicCharacter::getPendingPhysicalDamage(AllianceJoinFailedMessage *this)
    {
      return *((unsigned int *)this + 32);
    }

    GameMode *__fastcall LogicCharacter::setCustomDeployTime(GameMode *result, int a2)
    {
      GameMode *v3; // x20
    
      v3 = result;
      if ( a2 >= 1 )
      {
        result = LogicCharacter::setState(result, (const char *)5);
        *((_DWORD *)v3 + 47) = a2;
      }
      return result;
    }

    void __fastcall LogicCharacter::~LogicCharacter(AllianceJoinFailedMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicCharacter::~LogicCharacter(AllianceJoinFailedMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicCharacter
