class LogicHitpointComponent
{
public:

    void __fastcall LogicHitpointComponent::LogicHitpointComponent(LogicHitpointComponent *this, GameMode *a2, int a3)
    {
      Sprite *v4; // x0
    
      v4 = LogicComponent::LogicComponent(this, a2);
      *(_QWORD *)v4 = off_10045FF68;
      *((_DWORD *)v4 + 8) = 0;
      *((_QWORD *)v4 + 2) = 0;
      *((_QWORD *)v4 + 3) = 0;
      *((_DWORD *)v4 + 4) = a3;
      *((_DWORD *)v4 + 5) = a3;
    }

    __int64 __fastcall LogicHitpointComponent::destruct(LogicArenaData *this)
    {
      __int64 result; // x0
    
      result = LogicComponent::destruct(this);
      *((_DWORD *)this + 8) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      return result;
    }

    int *__fastcall LogicHitpointComponent::tick(int *this)
    {
      int v1; // w8
      int v2; // w9
      int v3; // w8
      __int64 Parent; // x0
    
      v1 = *(this + 4);
      if ( v1 >= 1 )
      {
        v2 = *(this + 7) + *(this + 8);
        *(this + 7) = v2;
        if ( v2 >= 100 )
        {
          *(this + 7) = v2 % 100;
          v3 = v1 - v2 / 100;
          *(this + 4) = v3;
          if ( v3 <= 0 )
          {
            *(this + 4) = 0;
            *(this + 7) = 0;
            Parent = LogicComponent::getParent((Sprite *)this);
            return (int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Parent + 80LL))(Parent);
          }
        }
      }
      return this;
    }

    __int64 __fastcall LogicHitpointComponent::encode(LogicArenaData *this, #1226 *a2)
    {
      __int64 result; // x0
      const char *v5; // x1
    
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 4));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 5));
      result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 8));
      if ( *((_DWORD *)this + 8) )
      {
        result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
      }
      else if ( *((_DWORD *)this + 7) )
      {
        Debugger::error((__siginfo *)"LogicHitpointComponent::encode - Potential offsync", v5);
      }
      if ( *((int *)this + 4) <= 0 )
        return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 6));
      return result;
    }

    __int64 __fastcall LogicHitpointComponent::decode(_DWORD *a1, __int64 a2)
    {
      int v4; // w0
      int v5; // w0
      __int64 result; // x0
    
      a1[4] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      a1[5] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      a1[8] = v4;
      if ( v4 )
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      else
        v5 = 0;
      a1[7] = v5;
      if ( (int)a1[4] <= 0 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      else
        result = 0;
      a1[6] = result;
      return result;
    }

    __int64 __fastcall LogicHitpointComponent::getType(LogicArenaData *this)
    {
      return 2;
    }

    __int64 __fastcall LogicHitpointComponent::getHitpoints(LogicArenaData *this)
    {
      return *((unsigned int *)this + 4);
    }

    bool __fastcall LogicHitpointComponent::isAlive(LogicArenaData *this)
    {
      return *((_DWORD *)this + 4) > 0;
    }

    _DWORD *__fastcall LogicHitpointComponent::setLifeTime(_DWORD *this, int a2)
    {
      __int64 v2; // x8
      int v3; // w8
    
      if ( a2 < 1 )
      {
        v3 = 0;
      }
      else
      {
        v2 = 1717986919LL * (100000 * *(this + 5) / a2);
        v3 = (v2 >> 35) + ((unsigned __int64)v2 >> 63);
      }
      *(this + 7) = 0;
      *(this + 8) = v3;
      return this;
    }

    Sprite *__fastcall LogicHitpointComponent::heal(Sprite *this, int a2, const GameMode *a3)
    {
      Sprite *v4; // x19
      GameMode *Parent; // x0
      __int64 CharacterBuffComponent; // x0
      int v7; // w2
      int v8; // w8
      int v9; // w20
      signed int v10; // w22
      __int64 v11; // x0
      __int64 v12; // x8
      int v13; // w20
      __int64 v14; // x0
      int v15; // w0
      int v16; // w8
      __int64 v17; // x19
      __int64 HealingEffect; // x1
      LogicDataTables *v19; // [xsp+8h] [xbp-28h]
    
      v4 = this;
      if ( *((int *)this + 4) >= 1 )
      {
        Debugger::doAssert((Debugger *)(a2 >= 0), (bool)"", (const char *)a3);
        Parent = (GameMode *)LogicComponent::getParent(v4);
        CharacterBuffComponent = LogicGameObject::getCharacterBuffComponent(Parent);
        v8 = 100;
        if ( CharacterBuffComponent )
          v8 = 100 - *(_DWORD *)(CharacterBuffComponent + 84);
        v9 = LogicMath::max((LogicMath *)(unsigned int)(v8 * a2 / 100), 1, v7);
        v10 = *((_DWORD *)v4 + 4);
        v11 = LogicComponent::getParent(v4);
        this = (Sprite *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
        v12 = 1374389535LL * *((_DWORD *)v4 + 5) * (int)this;
        if ( v10 < (int)((v12 >> 37) + ((unsigned __int64)v12 >> 63)) )
        {
          v13 = *((_DWORD *)v4 + 4) + v9;
          *((_DWORD *)v4 + 4) = v13;
          v14 = LogicComponent::getParent(v4);
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14);
          v16 = *((_DWORD *)v4 + 5);
          if ( v13 > v16 * v15 / 100 )
            *((_DWORD *)v4 + 4) = v16;
          v17 = *(_QWORD *)(LogicComponent::getParent(v4) + 40);
          v19 = *(LogicDataTables **)(*(_QWORD *)v17 + 72LL);
          HealingEffect = LogicDataTables::getHealingEffect(v19);
          return (Sprite *)((__int64 (__fastcall *)(__int64, __int64))v19)(v17, HealingEffect);
        }
      }
      return this;
    }

    __int64 __fastcall LogicHitpointComponent::getMaxHitpoints(LogicArenaData *this)
    {
      __int64 Parent; // x0
    
      Parent = LogicComponent::getParent(this);
      return (unsigned int)((int)(*((_DWORD *)this + 5)
                                * (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Parent + 120LL))(Parent))
                          / 100);
    }

    __int64 __fastcall LogicHitpointComponent::takeDamage(
            LogicArenaData *this,
            int a2,
            const LogicData *a3,
            GameMode *a4,
            const AskForTVContentMessage *a5,
            const #1240 *a6)
    {
      LogicData *PhysicalDamageType; // x22
      int v10; // w25
      #1060 *ParentCharacter; // x0
      __int64 result; // x0
      __int64 Parent; // x0
      #1060 *v15; // x0
      #1025 *CharacterData; // x23
      GameMode *v17; // x0
      LogicDataTables *v18; // x0
      __int64 v19; // x23
      void (__fastcall *v20)(__int64, __int64); // x26
      __int64 VulnerabilityEffect; // x0
      const TextField *v22; // x23
      GameMode *v23; // x0
      const GameMode *v24; // x26
      GameMode *v25; // x0
      #1037 *CombatComponent; // x0
      const GameMode *v27; // x1
      GameMode *v28; // x0
      int Efficiency; // w0
      int v30; // w2
      int v31; // w25
      GameMode *v32; // x0
      GameMode *v33; // x0
      FriendListMessage *CharacterBuffComponent; // x0
      LogicDataTables *ProtectionPercentage; // x26
      __int64 Globals; // x0
      int v37; // w3
      int v38; // w25
      const char *v39; // x2
      int v40; // w2
      __int64 v41; // x0
      const char *v42; // x2
      int v43; // w25
      int v44; // w2
      const BattleResultMessage *Buff; // x26
      int BankDamage; // w27
      GameMode *v48; // x0
      const char *v49; // x2
      __int64 LevelIndex; // x24
      int v51; // w27
      int v52; // w2
      int v53; // w27
      GameMode *v54; // x0
      FriendListMessage *v55; // x28
      GameMode *v56; // x0
      const TextField *OriginSpell; // x0
      int MinBuffChance; // w27
      LogicGameMode **LogicBattle; // x0
      int BuffTime; // w27
      GameMode *v61; // x0
      FriendListMessage *v62; // x28
      GameMode *v63; // x0
      const TextField *v64; // x0
      GameMode *v65; // x0
      GameMode *v66; // x0
      __int64 v67; // x0
      __int64 v68; // x20
      __int64 v69; // x1
    
      PhysicalDamageType = a3;
      v10 = a2;
      Debugger::doAssert((Debugger *)(a2 >= 0), (bool)"", (const char *)a3);
      ParentCharacter = (#1060 *)LogicComponent::getParentCharacter(this);
      result = LogicCharacter::isHidden(ParentCharacter);
      if ( v10 < 1 || (result & 1) != 0 )
        return result;
      if ( !PhysicalDamageType )
        PhysicalDamageType = (LogicData *)LogicDataTables::getPhysicalDamageType((LogicDataTables *)result);
      Parent = LogicComponent::getParent(this);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)Parent + 88LL))(Parent) != 5 )
      {
    LABEL_13:
        if ( !a4 )
        {
          v22 = 0;
    LABEL_22:
          Efficiency = LogicDamageTypeData::getEfficiency(PhysicalDamageType);
          v31 = LogicMath::max((LogicMath *)(unsigned int)(Efficiency * v10 / 100), 1, v30);
          v32 = (GameMode *)LogicComponent::getParent(this);
          if ( LogicGameObject::getCharacterBuffComponent(v32) )
          {
            v33 = (GameMode *)LogicComponent::getParent(this);
            CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v33);
            ProtectionPercentage = (LogicDataTables *)LogicCharacterBuffComponent::getProtectionPercentage(
                                                        CharacterBuffComponent,
                                                        PhysicalDamageType);
            Globals = LogicDataTables::getGlobals(ProtectionPercentage);
            v38 = (100 - LogicMath::clamp(
                           ProtectionPercentage,
                           -*(_DWORD *)(Globals + 128),
                           *(_DWORD *)(Globals + 128),
                           v37))
                * v31;
            Debugger::doAssert((Debugger *)(v38 >= 0), (bool)"", v39);
            v31 = LogicMath::max((LogicMath *)(unsigned int)(v38 / 100), 1, v40);
            if ( a4 )
            {
              v41 = LogicGameObject::getCharacterBuffComponent(a4);
              if ( v41 )
              {
                v43 = *(_DWORD *)(v41 + 80) * v31;
                Debugger::doAssert((Debugger *)(v43 >= 0), (bool)"", v42);
                v31 = LogicMath::max((LogicMath *)(unsigned int)(v43 / 100), 1, v44);
              }
            }
          }
          Buff = (const BattleResultMessage *)LogicDamageTypeData::getBuff(PhysicalDamageType);
          BankDamage = LogicDamageTypeData::getBankDamage(PhysicalDamageType);
          if ( v31 < 1 || Buff == 0 )
            goto LABEL_42;
          v48 = (GameMode *)LogicComponent::getParent(this);
          if ( !LogicGameObject::getCharacterBuffComponent(v48) )
            goto LABEL_42;
          if ( a4 )
          {
            if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)a4 + 88LL))(a4) == 5 )
            {
              LevelIndex = LogicCharacter::getLevelIndex(a4);
    LABEL_37:
              if ( BankDamage >= 1 )
              {
                v51 = BankDamage * v31;
                Debugger::doAssert((Debugger *)(v51 >= 0), (bool)"", v49);
                v53 = LogicMath::max((LogicMath *)(unsigned int)(v51 / 100), 1, v52);
                v31 -= v53;
                v54 = (GameMode *)LogicComponent::getParent(this);
                v55 = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v54);
                v56 = (GameMode *)LogicComponent::getParent(this);
                OriginSpell = (const TextField *)LogicGameObject::getOriginSpell(v56);
                LogicCharacterBuffComponent::addCharacterBuff(v55, 0, Buff, v53, LevelIndex, 0xFFFFFFFF, OriginSpell);
              }
              MinBuffChance = LogicDamageTypeData::getMinBuffChance(PhysicalDamageType);
              if ( MinBuffChance >= 1 )
              {
                LogicBattle = (LogicGameMode **)LogicComponent::getLogicBattle(this);
                if ( (int)LogicBattle::rand(LogicBattle, 100) < MinBuffChance )
                {
                  BuffTime = LogicDamageTypeData::getBuffTime(PhysicalDamageType);
                  v61 = (GameMode *)LogicComponent::getParent(this);
                  v62 = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v61);
                  v63 = (GameMode *)LogicComponent::getParent(this);
                  v64 = (const TextField *)LogicGameObject::getOriginSpell(v63);
                  LogicCharacterBuffComponent::addCharacterBuff(v62, 0, Buff, BuffTime, LevelIndex, 0xFFFFFFFF, v64);
                }
              }
    LABEL_42:
              v65 = (GameMode *)LogicComponent::getParent(this);
              result = LogicGameObject::getCharacterBuffComponent(v65);
              if ( result )
              {
                v66 = (GameMode *)LogicComponent::getParent(this);
                v67 = LogicGameObject::getCharacterBuffComponent(v66);
                result = LogicCharacterBuffComponent::onDamageTaken(v67);
              }
              if ( v31 )
                return LogicHitpointComponent::applyDamage(this, v31, PhysicalDamageType, a5, v22, a6, 0);
              return result;
            }
            if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)a4 + 88LL))(a4) == 3 )
            {
              LevelIndex = *((unsigned int *)a4 + 52);
              goto LABEL_37;
            }
          }
          LevelIndex = 0;
          goto LABEL_37;
        }
        v22 = (const TextField *)LogicGameObject::getOriginSpell(a4);
        v23 = (GameMode *)LogicComponent::getParent(this);
        if ( LogicGameObject::getCombatComponent(v23) )
        {
          if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)a4 + 88LL))(a4) != 3 )
          {
            v28 = (GameMode *)LogicComponent::getParent(this);
            CombatComponent = (#1037 *)LogicGameObject::getCombatComponent(v28);
            v27 = a4;
            goto LABEL_20;
          }
          v24 = (const GameMode *)*((_QWORD *)a4 + 16);
          if ( v24 )
          {
            v25 = (GameMode *)LogicComponent::getParent(this);
            CombatComponent = (#1037 *)LogicGameObject::getCombatComponent(v25);
            v27 = v24;
    LABEL_20:
            LogicCombatComponent::addToDamageFromGameObjectsList(CombatComponent, v27);
          }
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a4 + 5) + 24LL))(*((_QWORD *)a4 + 5));
        goto LABEL_22;
      }
      v15 = (#1060 *)LogicComponent::getParentCharacter(this);
      CharacterData = (#1025 *)LogicCharacter::getCharacterData(v15);
      result = LogicCharacterData::hasImmunity(CharacterData, PhysicalDamageType);
      if ( !(_DWORD)result )
      {
        if ( (unsigned int)LogicCharacterData::hasVulnerability(CharacterData, PhysicalDamageType) )
        {
          v10 *= 2;
          v18 = (LogicDataTables *)LogicComponent::getParent(this);
          v19 = *((_QWORD *)v18 + 5);
          v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 72LL);
          VulnerabilityEffect = LogicDataTables::getVulnerabilityEffect(v18);
          v20(v19, VulnerabilityEffect);
        }
        goto LABEL_13;
      }
      if ( !a4 )
        return result;
      if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)a4 + 88LL))(a4) == 5 )
      {
        result = LogicGameObject::getCombatComponent(a4);
        if ( !result )
          return result;
        v17 = a4;
        goto LABEL_50;
      }
      result = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)a4 + 88LL))(a4);
      if ( (_DWORD)result == 3 )
      {
        result = *((_QWORD *)a4 + 16);
        if ( result )
        {
          result = LogicGameObject::getCombatComponent((GameMode *)result);
          if ( result )
          {
            v17 = (GameMode *)*((_QWORD *)a4 + 16);
    LABEL_50:
            v68 = LogicGameObject::getCombatComponent(v17);
            v69 = LogicComponent::getParent(this);
            return LogicCombatComponent::addObjectToIgnoreList(v68, v69);
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicHitpointComponent::applyDamage(
            __int64 this,
            int a2,
            const LogicData *a3,
            const AskForTVContentMessage *a4,
            const TextField *a5,
            const #1240 *a6,
            char a7)
    {
      Sprite *v12; // x19
      GameMode *v13; // x0
      GameMode *v14; // x0
      FriendListMessage *CharacterBuffComponent; // x0
      UnbindFacebookAccountMessage *v16; // x0
      int v17; // w8
      int v18; // w8
      GameMode *Parent; // x0
      const LogicLong *OwnerAccountId; // x0
      __int64 v21; // x0
      GameMode *v22; // x0
      __int64 v23; // x24
      __int64 ServerEventOwnerAccountId; // x0
      __int64 v25; // x0
      #1060 *v26; // x0
      __int64 CharacterData; // x0
      __int64 TakeDamageEffect; // x20
      __int64 v29; // x0
      UnbindFacebookAccountMessage *LogicBattle; // x0
      ChangeAllianceMemberRoleOkMessage *LocationData; // x20
      __int64 v32; // x0
      const #916 *v33; // x2
      __int64 EffectByName; // x20
      __int64 v35; // x0
      __int64 v36; // x0
      GameMode *v37; // x0
      __int64 Data; // x0
      int v39; // w0
      GameMode *v40; // x0
      GameMode *v41; // x0
      TextField *OriginSpell; // x0
      #1060 *ParentCharacter; // x0
      __int64 v44; // x0
      String v45; // [xsp+8h] [xbp-58h] BYREF
    
      v12 = (Sprite *)this;
      if ( (a7 & 1) != 0
        || ((v13 = (GameMode *)LogicComponent::getParent((Sprite *)this), !LogicGameObject::getCharacterBuffComponent(v13))
         || (v14 = (GameMode *)LogicComponent::getParent(v12),
             CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v14),
             this = LogicCharacterBuffComponent::isImmuneToDamageType(CharacterBuffComponent, a3),
             (this & 1) == 0))
        && (v16 = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle(v12),
            this = LogicBattle::isBattleEndedCalled(v16),
            (this & 1) == 0) )
      {
        v17 = *((_DWORD *)v12 + 4);
        if ( v17 >= 1 )
        {
          v18 = v17 - a2;
          *((_DWORD *)v12 + 4) = v18;
          if ( a5 && LogicServerEventCollector::ENABLED )
          {
            Parent = (GameMode *)LogicComponent::getParent(v12);
            OwnerAccountId = (const LogicLong *)LogicGameObject::getOwnerAccountId(Parent);
            LogicSpell::increaseDamageCount(a5, OwnerAccountId, a2);
            v21 = LogicComponent::getParent(v12);
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 200LL))(v21) )
            {
              v22 = (GameMode *)LogicComponent::getParent(v12);
              v23 = LogicGameObject::getOwnerAccountId(v22);
              ServerEventOwnerAccountId = LogicSpell::getServerEventOwnerAccountId(a5);
              if ( (LogicLong::equals(v23, ServerEventOwnerAccountId) & 1) == 0 )
                LogicSpell::increaseServerEvent(a5, 5, a2);
            }
            v18 = *((_DWORD *)v12 + 4);
          }
          if ( v18 <= 0 )
          {
            v37 = (GameMode *)LogicComponent::getParent(v12);
            Data = LogicGameObject::getData(v37);
            v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Data + 56LL))(Data);
            if ( LogicServerEventCollector::ENABLED && ((v39 ^ 1) & 1) == 0 )
            {
              v40 = (GameMode *)LogicComponent::getParent(v12);
              if ( LogicGameObject::getOriginSpell(v40) )
              {
                v41 = (GameMode *)LogicComponent::getParent(v12);
                OriginSpell = (TextField *)LogicGameObject::getOriginSpell(v41);
                LogicSpell::increaseServerEvent(OriginSpell, 6, 1);
              }
              if ( a5 )
              {
                ParentCharacter = (#1060 *)LogicComponent::getParentCharacter(v12);
                LogicCharacter::setServerEventKillSpell(ParentCharacter, a5);
              }
            }
            if ( a6 )
              *((_DWORD *)v12 + 6) = LogicVector2::getAngle(a6);
            v44 = LogicComponent::getParent(v12);
            this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 80LL))(v44);
            *((_DWORD *)v12 + 4) = 0;
          }
          else
          {
            if ( a4 )
            {
              v25 = LogicComponent::getParent(v12);
              (*(void (__fastcall **)(_QWORD, const AskForTVContentMessage *))(**(_QWORD **)(v25 + 40) + 72LL))(
                *(_QWORD *)(v25 + 40),
                a4);
            }
            v26 = (#1060 *)LogicComponent::getParentCharacter(v12);
            CharacterData = LogicCharacter::getCharacterData(v26);
            TakeDamageEffect = LogicCharacterData::getTakeDamageEffect(CharacterData);
            if ( TakeDamageEffect )
            {
              v29 = LogicComponent::getParent(v12);
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v29 + 40) + 72LL))(
                *(_QWORD *)(v29 + 40),
                TakeDamageEffect);
            }
            LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle(v12);
            LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(LogicBattle);
            if ( LocationData )
            {
              v32 = LogicComponent::getParent(v12);
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v32 + 208LL))(v32) )
              {
                if ( (unsigned int)LogicLocationData::isCrowdEffectsEnabled(LocationData) )
                {
                  String::String(&v45, "CrowdTowerTakeDamage");
                  EffectByName = LogicDataTables::getEffectByName((#1004 *)&v45, 0, v33);
                  String::~String(&v45);
                  v35 = LogicComponent::getParent(v12);
                  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v35 + 40) + 72LL))(
                    *(_QWORD *)(v35 + 40),
                    EffectByName);
                }
              }
            }
            v36 = LogicComponent::getParent(v12);
            return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v36 + 40) + 32LL))(*(_QWORD *)(v36 + 40));
          }
        }
      }
      return this;
    }

    __int64 __fastcall LogicHitpointComponent::onSizeChanged(LogicArenaData *this, int a2, int a3)
    {
      __int64 Parent; // x0
      __int64 result; // x0
      __int64 v6; // x8
      int v7; // w8
    
      *((_DWORD *)this + 4) += *((_DWORD *)this + 5) * a2 / -100 + *((_DWORD *)this + 5) * a3 / 100;
      Parent = LogicComponent::getParent(this);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Parent + 120LL))(Parent);
      v6 = 1374389535LL * *((_DWORD *)this + 5) * (int)result;
      v7 = (v6 >> 37) + ((unsigned __int64)v6 >> 63);
      if ( *((_DWORD *)this + 4) > v7 )
        *((_DWORD *)this + 4) = v7;
      return result;
    }

    bool __fastcall LogicHitpointComponent::hasFullHealth(LogicArenaData *this)
    {
      return *((_DWORD *)this + 4) == *((_DWORD *)this + 5);
    }

    __int64 __fastcall LogicHitpointComponent::getDeathHitAngle(LogicArenaData *this)
    {
      if ( *((int *)this + 4) <= 0 )
        return *((unsigned int *)this + 6);
      else
        return 0;
    }

    bool __fastcall LogicHitpointComponent::isEnoughToKill(LogicArenaData *this, int a2)
    {
      GameMode *Parent; // x0
      GameMode *v5; // x0
      LogicDataTables *CharacterBuffComponent; // x21
      const LogicData *PhysicalDamageType; // x0
      LogicDataTables *ProtectionPercentage; // x21
      __int64 Globals; // x0
      int v10; // w3
      int v11; // w20
      const char *v12; // x2
      int v13; // w2
    
      Parent = (GameMode *)LogicComponent::getParent(this);
      if ( LogicGameObject::getCharacterBuffComponent(Parent) )
      {
        v5 = (GameMode *)LogicComponent::getParent(this);
        CharacterBuffComponent = (LogicDataTables *)LogicGameObject::getCharacterBuffComponent(v5);
        PhysicalDamageType = (const LogicData *)LogicDataTables::getPhysicalDamageType(CharacterBuffComponent);
        ProtectionPercentage = (LogicDataTables *)LogicCharacterBuffComponent::getProtectionPercentage(
                                                    CharacterBuffComponent,
                                                    PhysicalDamageType);
        Globals = LogicDataTables::getGlobals(ProtectionPercentage);
        v11 = (100 - LogicMath::clamp(ProtectionPercentage, -*(_DWORD *)(Globals + 128), *(_DWORD *)(Globals + 128), v10))
            * a2;
        Debugger::doAssert((Debugger *)(v11 >= 0), (bool)"", v12);
        a2 = LogicMath::max((LogicMath *)(unsigned int)(v11 / 100), 1, v13);
      }
      return a2 >= *((_DWORD *)this + 4);
    }

    void __fastcall LogicHitpointComponent::~LogicHitpointComponent(LogicArenaData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicHitpointComponent::~LogicHitpointComponent(LogicArenaData *this)
    {
      operator delete(this);
    }

}; // end class LogicHitpointComponent
