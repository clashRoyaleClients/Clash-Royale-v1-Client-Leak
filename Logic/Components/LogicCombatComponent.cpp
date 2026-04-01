class LogicCombatComponent
{
public:

    __int64 __fastcall LogicCombatComponent::LogicCombatComponent(__int64 a1, GameMode *a2, const char *a3)
    {
      LogicComponent::LogicComponent((LogicComponent *)a1, a2, a3);
      *(_QWORD *)a1 = off_10046D370;
      memset((void *)(a1 + 16), 0, 0x52u);
      return a1;
    }

    __int64 __fastcall LogicCombatComponent::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicComponent::destruct(a1);
      *(_DWORD *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 90) = 0;
      *(_QWORD *)(a1 + 84) = 0;
      *(_QWORD *)(a1 + 76) = 0;
      *(_QWORD *)(a1 + 68) = 0;
      *(_QWORD *)(a1 + 60) = 0;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicCombatComponent::tick(LogicCombatComponent *a1)
    {
      return LogicCombatComponent::update(a1);
    }

    __int64 __fastcall LogicCombatComponent::update(__int64 a1, __int64 a2, int a3)
    {
      int v4; // w2
      __int64 v5; // x8
      _QWORD *v6; // x20
      __int64 v7; // x22
      int v8; // w9
      __int64 v9; // x8
      GameMode *Parent; // x0
      __int64 MovementComponent; // x0
      __int64 v12; // x23
      bool v13; // w26
      const GameMode *v14; // x20
      GameMode *v15; // x0
      __int64 v16; // x8
      LogicCombatComponent *v17; // x0
      LogicGameObject *v18; // x1
      AllianceJoinFailedMessage *ParentCharacter; // x20
      Font *CharacterData; // x21
      __int64 v21; // x1
      LogicMath *LevelIndex; // x22
      __int64 result; // x0
      int v24; // w1
      AllianceJoinFailedMessage *v25; // x0
      Font *v26; // x0
      int v27; // w24
      int v28; // w27
      int v29; // w0
      int v30; // w25
      int v32; // w23
      LogicMovementComponent *v33; // x21
      const LogicVector2 *Position; // x0
      int v35; // w8
      HomeScreen *Globals; // x0
      int AttackFinishTime; // w20
      int HitSpeed; // w20
      int v39; // w22
      __int64 CombatComponent; // x0
      AllianceJoinFailedMessage *v41; // x0
      int SpecialAttackInterval; // w23
      int v43; // w8
      int v44; // w23
      __int64 v45; // x24
      const char *v46; // x2
      __int64 Projectile; // x27
      int DamageSpecial; // w0
      int VariableDamage; // w25
      const char *v50; // x2
      int VariableDamageLevelIndex; // w0
      int Healing; // w28
      __int64 TargetedHitEffect; // x25
      __int64 v54; // x23
      void (__fastcall *v55)(__int64, __int64, __int64, __int64); // x24
      __int64 v56; // x26
      __int64 TargetEffectY; // x0
      GameMode *GameObjectByClassID; // x27
      int OwnerIndex; // w0
      __int64 v60; // x0
      const LogicEffectData *DamageEffect; // x28
      __int64 ProjectileData; // x0
      LogicData *DamageType; // x0
      GameMode *v64; // x23
      int v65; // w25
      int v66; // w24
      const LogicSpell *OriginSpell; // x0
      LogicSpellListener *LogicGameObjectManager; // x25
      Font *v69; // x0
      __int64 ProjectileEffect; // x28
      __int64 v71; // x23
      __int64 v72; // x24
      __int64 v73; // x25
      __int64 v74; // x26
      __int64 OwnerAccountId; // x27
      __int64 Angle; // x0
      const GameMode *v77; // x0
      const AskForTVContentMessage *v78; // x25
      LogicData *v79; // x0
      _BOOL4 v80; // w23
      int Pushback; // w24
      __int64 v82; // x0
      CommandStorage *v83; // x27
      #1237 *v84; // x28
      __int64 v85; // x27
      __int64 v86; // x26
      GameMode *v87; // x0
      GameMode *v88; // x0
      __int64 AreaDamageRadius; // x23
      const LogicData *v90; // x24
      int v91; // w25
      int v92; // w0
      __int64 v93; // x23
      void (__fastcall *v94)(__int64, #1237 *, __int64, __int64, LogicArenaData *, _QWORD, __int64, __int64); // x26
      __int64 v95; // x24
      __int64 v96; // x25
      __int64 v97; // x0
      GameMode *v98; // x0
      __int64 v99; // x23
      GameMode *v100; // x0
      __int64 v101; // x24
      const LogicData *v102; // x0
      __int64 BuffOnDamage; // x0
      const BattleResultMessage *v104; // x26
      int v105; // w24
      int BuffOnDamageTime; // w23
      GameMode *v107; // x0
      #1237 *v108; // x25
      int v109; // w28
      __int64 v110; // x27
      GameMode *v111; // x0
      const TextField *v112; // x0
      FriendListMessage *CharacterBuffComponent; // x24
      GameMode *v114; // x0
      const TextField *v115; // x0
      LogicArenaData *v116; // x20
      GameMode *v117; // x0
      const TextField *v118; // x21
      int Hitpoints; // w22
      const LogicData *PhysicalDamageType; // x0
      AllianceJoinFailedMessage *v121; // x0
      void (__fastcall *v122)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64); // [xsp+68h] [xbp-78h]
      int v123; // [xsp+68h] [xbp-78h]
      LogicArenaData *v124; // [xsp+70h] [xbp-70h]
      LogicArenaData *v125; // [xsp+70h] [xbp-70h]
      LogicArenaData *v126; // [xsp+70h] [xbp-70h]
      int v127; // [xsp+7Ch] [xbp-64h]
      int v128; // [xsp+80h] [xbp-60h]
      int v129; // [xsp+84h] [xbp-5Ch]
      bool v130[4]; // [xsp+84h] [xbp-5Ch]
      __int64 v131; // [xsp+88h] [xbp-58h] BYREF
    
      *(_DWORD *)(a1 + 84) = LogicMath::max(0, *(_DWORD *)(a1 + 84) - 50, a3);
      *(_DWORD *)(a1 + 76) = LogicMath::max(0, *(_DWORD *)(a1 + 76) - 50, v4);
      v5 = *(int *)(a1 + 60);
      if ( (int)v5 >= 1 )
      {
        v6 = (_QWORD *)(a1 + 48);
        v7 = v5 - 1;
        do
        {
          v8 = *(_DWORD *)(*v6 + 4 * v7) - 50;
          *(_DWORD *)(*v6 + 4 * v7) = v8;
          if ( v8 <= 0 )
          {
            LogicArrayList<int>::remove((__int64 *)(a1 + 48), v7);
            LogicArrayList<LogicGameObject *>::remove((__int64 *)(a1 + 32), v7);
          }
          v9 = v7-- + 1;
        }
        while ( v9 > 1 );
      }
      Parent = (GameMode *)LogicComponent::getParent((Sprite *)a1);
      MovementComponent = LogicGameObject::getMovementComponent(Parent);
      v12 = MovementComponent;
      if ( MovementComponent )
        v13 = *(_BYTE *)(MovementComponent + 488) != 0;
      else
        v13 = 0;
      if ( (int)LogicCombatComponent::getHealingPower((AllianceListMessage *)a1) >= 1 )
      {
        *(_BYTE *)(a1 + 96) = 1;
        v14 = *(const GameMode **)(a1 + 64);
        if ( v14
          && (v15 = (GameMode *)LogicComponent::getParent((Sprite *)a1), LogicGameObject::isValidHealingTarget(v15, v14, 1))
          && (unsigned int)LogicCombatComponent::isInRangeToHit(a1, *(_QWORD *)(a1 + 64)) )
        {
          v16 = *(_QWORD *)(a1 + 64);
        }
        else
        {
          v16 = LogicCombatComponent::observeHealingTargets((AllianceListMessage *)a1, 0);
        }
        if ( v16 )
        {
          v17 = (LogicCombatComponent *)a1;
          v18 = (LogicGameObject *)v16;
        }
        else
        {
          if ( *(_QWORD *)(a1 + 64) )
            goto LABEL_20;
          v18 = (LogicGameObject *)LogicCombatComponent::observeHealingTargets((AllianceListMessage *)a1, 1);
          v17 = (LogicCombatComponent *)a1;
        }
        LogicCombatComponent::setTarget(v17, v18, 1);
      }
    LABEL_20:
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)a1);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      if ( !*(_BYTE *)(a1 + 96) )
      {
        v21 = *(_QWORD *)(a1 + 64);
        if ( (!v21
           || !(unsigned int)LogicCombatComponent::isValidTarget(a1, v21, 0)
           || (LogicCombatComponent::isInRangeToHit(a1, *(_QWORD *)(a1 + 64)) & 1) == 0)
          && !*(_DWORD *)(a1 + 92) )
        {
          LogicCombatComponent::observeEnemies((LogicCombatComponent *)a1);
        }
      }
      LevelIndex = (LogicMath *)LogicCharacter::getLevelIndex(ParentCharacter);
      result = LogicCharacter::getState(ParentCharacter);
      if ( (_DWORD)result == 4 )
        goto LABEL_50;
      result = LogicCharacter::getState(ParentCharacter);
      if ( (_DWORD)result == 6 )
        goto LABEL_50;
      if ( LogicGameObject::getCharacterBuffComponent(ParentCharacter)
        && *(int *)(LogicGameObject::getCharacterBuffComponent(ParentCharacter) + 56) >= 1
        && LogicGameObject::hasMovementComponent(ParentCharacter)
        && (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)ParentCharacter + 152LL))(ParentCharacter) )
      {
        *(_DWORD *)(a1 + 72) = 0;
        *(_DWORD *)(a1 + 80) = 0;
        v24 = 3;
        *(_DWORD *)(a1 + 92) = 0;
        return LogicCharacter::setState(ParentCharacter, v24);
      }
      if ( !*(_QWORD *)(a1 + 64) )
      {
        v35 = *(_DWORD *)(a1 + 92);
        if ( v35 < 1 )
          goto LABEL_57;
        *(_DWORD *)(a1 + 92) = v35 + 50;
        Globals = (HomeScreen *)LogicDataTables::getGlobals();
        AttackFinishTime = LogicGlobals::getAttackFinishTime(Globals);
        result = LogicCharacterData::forceAttackAnimationToEnd((__int64)CharacterData);
        if ( (_DWORD)result )
        {
          HitSpeed = LogicCharacterData::getHitSpeed(CharacterData);
          v39 = *(_DWORD *)(a1 + 72);
          result = LogicCharacterData::getHitSpeed(CharacterData);
          AttackFinishTime = HitSpeed - 50 - v39 % (int)result;
        }
        if ( *(_DWORD *)(a1 + 92) < AttackFinishTime )
          return result;
    LABEL_50:
        *(_DWORD *)(a1 + 72) = 0;
        *(_DWORD *)(a1 + 80) = 0;
        *(_DWORD *)(a1 + 92) = 0;
        return result;
      }
      v25 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)a1);
      v26 = (Font *)LogicCharacter::getCharacterData(v25);
      result = LogicCharacterData::getHitSpeed(v26);
      v27 = result;
      if ( (_DWORD)result )
      {
        v28 = *(_DWORD *)(a1 + 72);
        v29 = LogicCombatComponent::isInRangeToHit(a1, *(_QWORD *)(a1 + 64));
        v30 = v29;
        if ( v12 )
        {
          if ( v29 && *(_BYTE *)(a1 + 96) != 0 )
            v30 = LogicMovementComponent::getPathLength(v12) == 0;
        }
        v32 = *(_DWORD *)(a1 + 72);
        if ( (unsigned int)LogicCombatComponent::canDashToTarget((AllianceListMessage *)a1, *(const GameMode **)(a1 + 64)) )
        {
          *(_DWORD *)(a1 + 84) = LogicCharacterData::getDashCooldown(CharacterData);
          if ( LogicGameObject::getMovementComponent(ParentCharacter) )
          {
            v33 = (LogicMovementComponent *)LogicGameObject::getMovementComponent(ParentCharacter);
            Position = (const LogicVector2 *)LogicGameObject::getPosition(*(GameMode **)(a1 + 64));
            LogicMovementComponent::moveToPoint(v33, Position);
          }
          v24 = 4;
          return LogicCharacter::setState(ParentCharacter, v24);
        }
        if ( (*(unsigned int (__fastcall **)(_QWORD, AllianceJoinFailedMessage *))(**(_QWORD **)(a1 + 64) + 184LL))(
               *(_QWORD *)(a1 + 64),
               ParentCharacter) )
        {
          *(_DWORD *)(a1 + 72) = 0;
          *(_DWORD *)(a1 + 80) = 0;
          *(_DWORD *)(a1 + 92) = 0;
          if ( LogicGameObject::getCombatComponent(*(GameMode **)(a1 + 64)) )
          {
            CombatComponent = LogicGameObject::getCombatComponent(*(GameMode **)(a1 + 64));
            if ( (unsigned int)LogicCombatComponent::isInRangeToHit(CombatComponent, ParentCharacter) )
            {
              v24 = 0;
              return LogicCharacter::setState(ParentCharacter, v24);
            }
          }
          goto LABEL_57;
        }
        if ( v13 | (v32 % v27 < 51) & ~v30 )
        {
    LABEL_57:
          *(_DWORD *)(a1 + 72) = 0;
          *(_DWORD *)(a1 + 80) = 0;
          *(_DWORD *)(a1 + 92) = 0;
          v41 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)a1);
          return LogicCharacter::setDefaultState(v41);
        }
        LogicCharacter::setState(ParentCharacter, 2);
        LogicCharacter::setDirectionTowardsTargetObject(ParentCharacter);
        result = LogicCombatComponent::updateHitTimer((AllianceListMessage *)a1);
        if ( *(_DWORD *)(a1 + 72) / v27 > v28 / v27 )
        {
          SpecialAttackInterval = LogicCharacterData::getSpecialAttackInterval(CharacterData);
          *(_DWORD *)(a1 + 76) = LogicCharacterData::getLoadTime((__int64)CharacterData);
          if ( SpecialAttackInterval < 2 )
          {
            v128 = SpecialAttackInterval;
            v44 = 0;
          }
          else
          {
            v43 = *(_DWORD *)(a1 + 88);
            v128 = SpecialAttackInterval;
            if ( v43 == SpecialAttackInterval - 1 )
            {
              *(_DWORD *)(a1 + 88) = 0;
              v44 = 1;
            }
            else
            {
              v44 = 0;
              *(_DWORD *)(a1 + 88) = v43 + 1;
            }
          }
          v45 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 136LL))(*(_QWORD *)(a1 + 64));
          Debugger::doAssert((Debugger *)(v45 != 0), (bool)"", v46);
          Projectile = LogicCharacterData::getProjectile(CharacterData, 0);
          if ( v44 )
            DamageSpecial = LogicCharacterData::getDamageSpecial((__int64)CharacterData, LevelIndex);
          else
            DamageSpecial = LogicCharacterData::getDamage((__int64)CharacterData, LevelIndex);
          VariableDamage = DamageSpecial;
          if ( (unsigned int)LogicCharacterData::hasVariableDamage((__int64)CharacterData) )
          {
            VariableDamageLevelIndex = LogicCharacterData::getVariableDamageLevelIndex(
                                         (__int64)CharacterData,
                                         *(_DWORD *)(a1 + 72),
                                         v50);
            VariableDamage = LogicCharacterData::getVariableDamage(
                               (__int64)CharacterData,
                               VariableDamageLevelIndex,
                               (char *)LevelIndex);
          }
          if ( *(_BYTE *)(a1 + 96) )
          {
            v124 = (LogicArenaData *)v45;
            v129 = v44;
            v127 = 0;
          }
          else
          {
            v127 = (int)((*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)ParentCharacter + 120LL))(ParentCharacter)
                       * VariableDamage)
                 / 100;
            if ( !*(_BYTE *)(a1 + 96) )
            {
              v124 = (LogicArenaData *)v45;
              v129 = v44;
              Healing = 0;
    LABEL_74:
              TargetedHitEffect = LogicCharacterData::getTargetedHitEffect((__int64)CharacterData);
              if ( TargetedHitEffect )
              {
                v54 = *(_QWORD *)(LogicComponent::getParent((Sprite *)a1) + 40);
                v55 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v54 + 64LL);
                v56 = *(_QWORD *)(a1 + 64);
                TargetEffectY = LogicCharacterData::getTargetEffectY((__int64)CharacterData);
                v55(v54, TargetedHitEffect, v56, TargetEffectY);
              }
              if ( Projectile )
              {
                v125 = (LogicArenaData *)LogicCharacterData::getProjectile(CharacterData, v129);
                GameObjectByClassID = (GameMode *)LogicGameObjectFactory::createGameObjectByClassID(
                                                    v125,
                                                    (const AreaEffectObject *)3);
                OwnerIndex = LogicGameObject::getOwnerIndex(ParentCharacter);
                LogicGameObject::setOwnerIndex((__int64)GameObjectByClassID, OwnerIndex);
                v60 = LogicComponent::getParent((Sprite *)a1);
                (*(void (__fastcall **)(_QWORD, LogicArenaData *))(**(_QWORD **)(v60 + 40) + 48LL))(
                  *(_QWORD *)(v60 + 40),
                  v125);
                DamageEffect = (const LogicEffectData *)LogicCharacterData::getDamageEffect(CharacterData, v129);
                if ( !DamageEffect )
                {
                  ProjectileData = LogicProjectile::getProjectileData(GameObjectByClassID);
                  DamageType = (LogicData *)LogicProjectileData::getDamageType(ProjectileData);
                  DamageEffect = (const LogicEffectData *)LogicDamageTypeData::getDamageEffect(DamageType);
                }
                v64 = *(GameMode **)(a1 + 64);
                v65 = LogicGameObject::getX(v64);
                v66 = LogicGameObject::getY(v64);
                OriginSpell = (const LogicSpell *)LogicGameObject::getOriginSpell(ParentCharacter);
                LogicProjectile::init(
                  GameObjectByClassID,
                  ParentCharacter,
                  v64,
                  v65,
                  v66,
                  ParentCharacter,
                  DamageEffect,
                  (int)LevelIndex,
                  OriginSpell);
                LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(ParentCharacter);
                LogicGameObjectManager::addLogicGameObject(LogicGameObjectManager, GameObjectByClassID, 1);
                v69 = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
                ProjectileEffect = LogicCharacterData::getProjectileEffect(v69, v129);
                if ( ProjectileEffect )
                {
                  v71 = *((_QWORD *)LogicGameObjectManager + 5);
                  v122 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v71 + 72LL);
                  v72 = LogicGameObject::getX(GameObjectByClassID);
                  v73 = LogicGameObject::getY(GameObjectByClassID);
                  v74 = LogicGameObject::getZ(GameObjectByClassID);
                  OwnerAccountId = LogicGameObject::getOwnerAccountId((LogicSpellListener **)GameObjectByClassID);
                  Angle = LogicCharacter::getAngle(ParentCharacter);
                  v122(v71, v72, v73, v74, ProjectileEffect, 0, OwnerAccountId, Angle);
                }
                if ( v125 )
                  goto LABEL_105;
              }
              else if ( *(_BYTE *)(a1 + 96) )
              {
                v77 = (const GameMode *)LogicComponent::getParent((Sprite *)a1);
                LogicHitpointComponent::heal(v124, Healing, v77);
              }
              else
              {
                v78 = (const AskForTVContentMessage *)LogicCharacterData::getDamageEffect(CharacterData, v129);
                if ( !v78 )
                {
                  v79 = (LogicData *)LogicCharacterData::getDamageType(CharacterData);
                  v78 = (const AskForTVContentMessage *)LogicDamageTypeData::getDamageEffect(v79);
                }
                v80 = (int)LogicCharacterData::getAreaDamageRadius(CharacterData) > 0;
                Pushback = LogicCharacterData::getPushback(CharacterData);
                if ( (int)LogicCharacterData::getChargeRange(CharacterData) >= 1 )
                {
                  v82 = LogicGameObject::getMovementComponent(ParentCharacter);
                  v83 = (CommandStorage *)v82;
                  if ( v82 )
                  {
                    if ( *(int *)(v82 + 460) < 10000 )
                    {
                      Pushback = 0;
                      v80 = 0;
                    }
                    else
                    {
                      v127 = LogicCharacterData::getDamageSpecial((__int64)CharacterData, LevelIndex);
                      v78 = (const AskForTVContentMessage *)LogicCharacterData::getDamageEffect(CharacterData, 1);
                    }
                    LogicMovementComponent::resetCharge(v83);
                  }
                }
                v84 = (#1237 *)LogicGameObject::getX(*(GameMode **)(a1 + 64));
                v85 = LogicGameObject::getY(*(GameMode **)(a1 + 64));
                if ( v80 )
                {
                  v123 = Pushback;
                  v126 = v78;
                  v86 = LogicComponent::getLogicGameObjectManager((GameMode **)a1);
                  if ( (unsigned int)LogicCharacterData::isSelfAsAoeCenter((__int64)CharacterData) )
                  {
                    v87 = (GameMode *)LogicComponent::getParentCharacter((Sprite *)a1);
                    v84 = (#1237 *)LogicGameObject::getX(v87);
                    v88 = (GameMode *)LogicComponent::getParentCharacter((Sprite *)a1);
                    v85 = LogicGameObject::getY(v88);
                  }
                  AreaDamageRadius = LogicCharacterData::getAreaDamageRadius(CharacterData);
                  v90 = (const LogicData *)LogicCharacterData::getDamageType(CharacterData);
                  v91 = LogicGameObject::getX(ParentCharacter);
                  v92 = LogicGameObject::getY(ParentCharacter);
                  LogicGameObjectManager::giveDamageToObjectsInArea(
                    (UnlockAccountPopup **)v86,
                    v84,
                    v85,
                    AreaDamageRadius,
                    v127,
                    v90,
                    ParentCharacter,
                    v123,
                    v91,
                    v92,
                    -1,
                    0,
                    1,
                    1,
                    0);
                  v93 = *(_QWORD *)(v86 + 40);
                  v94 = *(void (__fastcall **)(__int64, #1237 *, __int64, __int64, LogicArenaData *, _QWORD, __int64, __int64))(*(_QWORD *)v93 + 72LL);
                  v95 = LogicGameObject::getZ(*(GameMode **)(a1 + 64));
                  v96 = LogicGameObject::getOwnerAccountId((LogicSpellListener **)ParentCharacter);
                  v97 = LogicCharacter::getAngle(ParentCharacter);
                  v94(v93, v84, v85, v95, v126, 0, v96, v97);
                }
                else
                {
                  v98 = (GameMode *)LogicComponent::getParent((Sprite *)a1);
                  v99 = (unsigned int)v84 - (unsigned int)LogicGameObject::getX(v98);
                  v100 = (GameMode *)LogicComponent::getParent((Sprite *)a1);
                  v101 = (unsigned int)v85 - (unsigned int)LogicGameObject::getY(v100);
                  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 64) + 40LL)
                                                                           + 128LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL),
                    v99,
                    v101,
                    0);
                  LogicVector2::LogicVector2((LogicVector2 *)&v131, v99, v101);
                  v102 = (const LogicData *)LogicCharacterData::getDamageType(CharacterData);
                  LogicHitpointComponent::takeDamage(v124, v127, v102, ParentCharacter, v78, (const #1240 *)&v131);
                  LogicVector2::destruct((LogicVector2 *)&v131);
                }
              }
              BuffOnDamage = LogicCharacterData::getBuffOnDamage(CharacterData);
              v104 = (const BattleResultMessage *)BuffOnDamage;
              if ( ((v128 < 2) | v129) == 1 && BuffOnDamage )
              {
                v105 = LogicCharacterData::getAreaDamageRadius(CharacterData);
                BuffOnDamageTime = LogicCharacterData::getBuffOnDamageTime(CharacterData);
                v107 = *(GameMode **)(a1 + 64);
                if ( v105 < 1 )
                {
                  if ( LogicGameObject::getCharacterBuffComponent(v107) )
                  {
                    CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(*(GameMode **)(a1 + 64));
                    v114 = (GameMode *)LogicComponent::getParent((Sprite *)a1);
                    v115 = (const TextField *)LogicGameObject::getOriginSpell(v114);
                    LogicCharacterBuffComponent::addCharacterBuff(
                      CharacterBuffComponent,
                      ParentCharacter,
                      v104,
                      BuffOnDamageTime,
                      (__int64)LevelIndex,
                      0xFFFFFFFF,
                      v115);
                  }
                }
                else
                {
                  *(_DWORD *)v130 = LogicGameObject::getX(v107);
                  v108 = (#1237 *)LogicGameObject::getY(*(GameMode **)(a1 + 64));
                  v109 = *(unsigned __int8 *)(a1 + 96);
                  v110 = LogicComponent::getLogicGameObjectManager((GameMode **)a1);
                  v111 = (GameMode *)LogicComponent::getParent((Sprite *)a1);
                  v112 = (const TextField *)LogicGameObject::getOriginSpell(v111);
                  LogicGameObjectManager::giveBuffToObjectsInArea(
                    v110,
                    (#1237 *)*(unsigned int *)v130,
                    v108,
                    v105,
                    ParentCharacter,
                    v104,
                    BuffOnDamageTime,
                    1000,
                    v109,
                    v127 > 0 && v109 == 0,
                    0,
                    v112);
                }
              }
    LABEL_105:
              if ( (unsigned int)LogicCharacterData::isKamikaze((__int64)CharacterData) )
              {
                v116 = (LogicArenaData *)(*(__int64 (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)ParentCharacter
                                                                                                + 136LL))(ParentCharacter);
                if ( v116 )
                {
                  v117 = (GameMode *)LogicComponent::getParent((Sprite *)a1);
                  v118 = (const TextField *)LogicGameObject::getOriginSpell(v117);
                  Hitpoints = LogicHitpointComponent::getHitpoints(v116);
                  PhysicalDamageType = (const LogicData *)LogicDataTables::getPhysicalDamageType();
                  LogicHitpointComponent::applyDamage((__int64)v116, Hitpoints, PhysicalDamageType, 0, v118, 0, 1);
                }
              }
              result = LogicComponent::getParentCharacter((Sprite *)a1);
              if ( result )
              {
                v121 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)a1);
                return LogicCharacter::attackDone(v121);
              }
              return result;
            }
            v124 = (LogicArenaData *)v45;
            v129 = v44;
          }
          Healing = LogicCharacterData::getHealing((__int64)CharacterData, LevelIndex);
          goto LABEL_74;
        }
      }
      return result;
    }

    __int64 __fastcall LogicCombatComponent::encode(GameMode **this, #1226 *a2)
    {
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 result; // x0
      __int64 v6; // x21
      LogicSpellListener *v7; // x0
      __int64 v8; // x21
      LogicSpellListener *v9; // x0
    
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 96));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 97));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 18));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 19));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 21));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 22));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 23));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 11));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
      LogicGameObjectManager = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager(this);
      result = LogicGameObjectManager::writeGameObjectReference(LogicGameObjectManager, a2, *(this + 8));
      if ( *((int *)this + 11) >= 1 )
      {
        v6 = 0;
        do
        {
          v7 = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager(this);
          LogicGameObjectManager::writeGameObjectReference(v7, a2, *((const GameMode **)*(this + 4) + v6));
          result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(
                     a2,
                     *((unsigned int *)*(this + 6) + v6++));
        }
        while ( v6 < *((int *)this + 11) );
      }
      if ( *((int *)this + 7) >= 1 )
      {
        v8 = 0;
        do
        {
          v9 = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager(this);
          result = LogicGameObjectManager::writeGameObjectReference(v9, a2, *((const GameMode **)*(this + 2) + v8++));
        }
        while ( v8 < *((int *)this + 7) );
      }
      return result;
    }

    void __fastcall LogicCombatComponent::decode(AllianceListMessage *this, #1225 *a2)
    {
      int v4; // w22
      int v5; // w21
      LogicSpellListener *LogicGameObjectManager; // x0
      LogicSpellListener *v7; // x0
      LogicSpellListener *v8; // x0
      __int64 v9; // [xsp+8h] [xbp-48h] BYREF
      int v10; // [xsp+14h] [xbp-3Ch] BYREF
      __int64 GameObjectReference; // [xsp+18h] [xbp-38h] BYREF
    
      *((_BYTE *)this + 96) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 97) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_DWORD *)this + 18) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 19) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 21) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 22) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 23) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v4 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v5 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      LogicGameObjectManager = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager((GameMode **)this);
      *((_QWORD *)this + 8) = LogicGameObjectManager::readGameObjectReference(LogicGameObjectManager, a2);
      *((_DWORD *)this + 11) = 0;
      *((_DWORD *)this + 15) = 0;
      LogicArrayList<LogicGameObject *>::ensureCapacity((__int64)this + 32, v4);
      LogicArrayList<int>::ensureCapacity((__int64)this + 48, v4);
      if ( v4 >= 1 )
      {
        do
        {
          v7 = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager((GameMode **)this);
          GameObjectReference = LogicGameObjectManager::readGameObjectReference(v7, a2);
          LogicArrayList<LogicGameObject *>::add((__int64)this + 32, &GameObjectReference);
          v10 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
          LogicArrayList<int>::add((__int64)this + 48, &v10);
          --v4;
        }
        while ( v4 );
      }
      *((_DWORD *)this + 7) = 0;
      LogicArrayList<LogicGameObject const*>::ensureCapacity((__int64)this + 16, v5);
      if ( v5 >= 1 )
      {
        do
        {
          v8 = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager((GameMode **)this);
          v9 = LogicGameObjectManager::readGameObjectReference(v8, a2);
          LogicArrayList<LogicGameObject const*>::add((__int64)this + 16, &v9);
          --v5;
        }
        while ( v5 );
      }
    }

    __int64 __fastcall LogicCombatComponent::getType(AllianceListMessage *this)
    {
      return 0;
    }

    __int64 __fastcall LogicCombatComponent::getTarget(AllianceListMessage *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall LogicCombatComponent::setTarget(__int64 result, const GameMode *a2, int a3)
    {
      Sprite *v5; // x19
      GameMode *Parent; // x0
      const char *v7; // x1
      char *v8; // x0
      GameMode *v9; // x0
    
      v5 = (Sprite *)result;
      *(_BYTE *)(result + 96) = a3;
      if ( *(const GameMode **)(result + 64) != a2 )
      {
        *(_QWORD *)(result + 64) = a2;
        if ( a2 )
        {
          if ( (LogicCombatComponent::isInRangeToHit(result, a2) & 1) == 0 )
          {
            *((_DWORD *)v5 + 18) = 0;
            *((_DWORD *)v5 + 20) = 0;
            *((_DWORD *)v5 + 23) = 0;
          }
          if ( a3 )
          {
            Parent = (GameMode *)LogicComponent::getParent(v5);
            result = LogicGameObject::isValidHealingTarget(Parent, a2, 0);
            if ( (result & 1) == 0 )
            {
              v8 = "Not a valid healing target";
              goto LABEL_10;
            }
          }
          else
          {
            result = LogicCombatComponent::isValidTarget(v5, a2, 0);
            if ( (result & 1) == 0 )
            {
              v8 = "Not a valid target";
    LABEL_10:
              Debugger::error((__siginfo *)v8, v7);
            }
          }
        }
        if ( !*((_DWORD *)v5 + 23) )
        {
          v9 = (GameMode *)LogicComponent::getParent(v5);
          result = LogicGameObject::getMovementComponent(v9);
          if ( result )
            return LogicMovementComponent::moveToTarget((CommandStorage *)result);
        }
      }
      return result;
    }

    __int64 __fastcall LogicCombatComponent::isInRangeToHit(Sprite *a1, const GameMode *a2)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x21
      int Range; // w22
      int MinimumRange; // w3
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(a1);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      Range = LogicCharacterData::getRange(CharacterData);
      MinimumRange = LogicCharacterData::getMinimumRange(CharacterData);
      return LogicCombatComponent::isInRange(a1, a2, Range, MinimumRange);
    }

    bool __fastcall LogicCombatComponent::isValidTarget(__int64 a1, const GameMode *a2, char a3)
    {
      __int64 v6; // x8
      __int64 v7; // x9
      const GameMode *v9; // x10
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x0
      int TargetOnlyBuildings; // w22
      GameMode *Parent; // x0
    
      v6 = *(int *)(a1 + 28);
      v7 = 8LL * ((int)v6 - 1);
      while ( v6-- >= 1 )
      {
        v9 = *(const GameMode **)(*(_QWORD *)(a1 + 16) + v7);
        v7 -= 8;
        if ( v9 == a2 )
          return 0;
      }
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)a1);
      if ( ParentCharacter )
      {
        CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
        TargetOnlyBuildings = LogicCharacterData::getTargetOnlyBuildings(CharacterData);
      }
      else
      {
        TargetOnlyBuildings = 0;
      }
      Parent = (GameMode *)LogicComponent::getParent((Sprite *)a1);
      return LogicGameObject::isValidTarget(Parent, a2, a3, TargetOnlyBuildings);
    }

    __int64 __fastcall LogicCombatComponent::canDashToTarget(AllianceListMessage *this, const GameMode *a2)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x19
      GameMode *v6; // x22
      FriendListMessage *CharacterBuffComponent; // x23
      int Speed; // w0
      __int64 v9; // x2
      int v10; // w3
      bool v11; // zf
      GameMode *v12; // x0
      int DistanceToObjectSquared; // w21
      int DashMaxRange; // w22
      int v15; // w0
      int DashMinRange; // w0
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      if ( !LogicCharacterData::hasDash(CharacterData) )
        return 0;
      v6 = (GameMode *)LogicComponent::getParentCharacter(this);
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v6);
      Speed = LogicCharacterData::getSpeed(CharacterData);
      v11 = (int)LogicCharacterBuffComponent::calculateSpeed(CharacterBuffComponent, Speed, v9, v10) >= 1
         && *((_DWORD *)this + 21) == 0;
      if ( v11
        && ((*(__int64 (__fastcall **)(_QWORD, GameMode *))(**((_QWORD **)this + 8) + 184LL))(*((_QWORD *)this + 8), v6) & 1) == 0
        && (v12 = (GameMode *)LogicComponent::getParentCharacter(this),
            DistanceToObjectSquared = LogicGameObject::getDistanceToObjectSquared(v12, a2),
            DashMaxRange = LogicCharacterData::getDashMaxRange((__int64)CharacterData),
            v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 112LL))(*((_QWORD *)this + 8)),
            DistanceToObjectSquared < (v15 + DashMaxRange) * (v15 + DashMaxRange))
        && (DashMinRange = LogicCharacterData::getDashMinRange((__int64)CharacterData),
            DistanceToObjectSquared > DashMinRange * DashMinRange) )
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }

    __int64 __fastcall LogicCombatComponent::getSightRange(AllianceListMessage *this)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x0
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      return LogicCharacterData::getSightRange(CharacterData);
    }

    __int64 __fastcall LogicCombatComponent::observeEnemies(__int64 a1)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x20
      __int64 result; // x0
      Font *CharacterData; // x21
      int MinimumRange; // w21
      Screen *v7; // x23
      const #1240 *Position; // x0
      __int64 IntersectingObjects; // x23
      int v10; // w27
      __int64 v11; // x25
      const GameMode *v12; // x26
      int v13; // w28
      int v14; // w24
      int v15; // w0
      int v16; // w27
      int v17; // w27
      AllianceJoinFailedMessage *v18; // x0
      __int64 v19; // x0
      __int64 Parent; // x0
      int v21; // w0
      int v22; // w2
      int v23; // w27
      GameMode *v24; // x0
      int v25; // w27
      GameMode *v26; // x0
      const GameMode *v27; // x21
      int DistanceToObjectSquared; // w22
      int v29; // w25
      __int64 v30; // x26
      const GameMode *v31; // x22
      int v32; // w23
      int v33; // w0
      __int64 v34; // x0
      const GameMode *v35; // x1
      const GameMode *DefaultTarget; // x20
      int SightBackWardsClipDistance; // [xsp+54h] [xbp-6Ch]
      int v38; // [xsp+54h] [xbp-6Ch]
      int v39; // [xsp+58h] [xbp-68h]
      int SightRange; // [xsp+64h] [xbp-5Ch]
      int TargetPriority; // [xsp+68h] [xbp-58h]
      int v42; // [xsp+6Ch] [xbp-54h]
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)a1);
      result = LogicCharacter::getState(ParentCharacter);
      if ( (unsigned int)result <= 6 && ((1 << result) & 0x58) != 0 )
        return result;
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      SightRange = LogicCharacterData::getSightRange(CharacterData);
      MinimumRange = LogicCharacterData::getMinimumRange(CharacterData);
      v7 = *(Screen **)(LogicComponent::getLogicGameObjectManager((GameMode **)a1) + 64);
      Position = (const #1240 *)LogicGameObject::getPosition(ParentCharacter);
      IntersectingObjects = LogicSpacePartition::getIntersectingObjects(v7, Position, SightRange + 1000);
      v10 = *(_DWORD *)(IntersectingObjects + 12);
      v39 = v10;
      if ( v10 >= 1 )
      {
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v42 = MinimumRange * MinimumRange;
        v14 = 0x7FFFFFFF;
        while ( 1 )
        {
          v27 = *(const GameMode **)(*(_QWORD *)IntersectingObjects + 8 * v11);
          if ( !LogicCombatComponent::isValidTarget(a1, v27, 0)
            || LogicGameObject::getCharacterBuffComponent(v27)
            && *(int *)(LogicGameObject::getCharacterBuffComponent(v27) + 52) > 0
            || (DistanceToObjectSquared = LogicGameObject::getDistanceToObjectSquared(ParentCharacter, v27),
                DistanceToObjectSquared < v42) )
          {
            v27 = v12;
            goto LABEL_34;
          }
          TargetPriority = LogicGameObject::getTargetPriority(ParentCharacter, v27);
          if ( ((*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)v27 + 216LL))(v27) & 1) != 0 )
            v15 = 1;
          else
            v15 = (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)v27 + 200LL))(v27);
          if ( v15 )
            v16 = 1000;
          else
            v16 = 0;
          v17 = v16 + SightRange + (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)v27 + 112LL))(v27);
          if ( DistanceToObjectSquared <= v17 * v17 )
          {
            v18 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)a1);
            v19 = LogicCharacter::getCharacterData(v18);
            SightBackWardsClipDistance = LogicCharacterData::getSightBackWardsClipDistance(v19);
            Parent = LogicComponent::getParent((Sprite *)a1);
            if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Parent + 216LL))(Parent) & 1) != 0
              || (v21 = (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)v27 + 216LL))(v27),
                  SightBackWardsClipDistance < 1)
              || v21 == 1 )
            {
    LABEL_23:
              if ( TargetPriority <= v13 )
              {
                if ( DistanceToObjectSquared >= v14 || TargetPriority < v13 )
                {
                  v27 = v12;
                }
                else
                {
                  v13 = TargetPriority;
                  v14 = DistanceToObjectSquared;
                }
              }
              else
              {
                v13 = TargetPriority;
                v14 = DistanceToObjectSquared;
              }
              goto LABEL_28;
            }
            v38 = LogicMath::max(0, v17 - SightBackWardsClipDistance, v22);
            v23 = LogicGameObject::getY(v27);
            v24 = (GameMode *)LogicComponent::getParent((Sprite *)a1);
            v25 = v23 - LogicGameObject::getY(v24);
            v26 = (GameMode *)LogicComponent::getParent((Sprite *)a1);
            if ( LogicGameObject::isOwnerTop(v26) )
            {
              if ( v25 >= -v38 )
                goto LABEL_23;
            }
            else if ( v25 <= v38 )
            {
              goto LABEL_23;
            }
          }
          v27 = v12;
    LABEL_28:
          v10 = v39;
    LABEL_34:
          ++v11;
          v12 = v27;
          if ( v10 == (_DWORD)v11 )
            goto LABEL_37;
        }
      }
      v27 = 0;
      v13 = 0;
      v14 = 0x7FFFFFFF;
    LABEL_37:
      v29 = *(_DWORD *)(a1 + 44);
      if ( v29 >= 1 )
      {
        v30 = 0;
        do
        {
          v31 = *(const GameMode **)(*(_QWORD *)(a1 + 32) + 8 * v30);
          if ( LogicCombatComponent::isValidTarget(a1, v31, 0) )
          {
            v32 = LogicGameObject::getDistanceToObjectSquared(ParentCharacter, v31);
            v33 = LogicGameObject::getTargetPriority(ParentCharacter, v31);
            if ( v32 < v14 && v33 >= v13 )
            {
              v13 = v33;
              v27 = v31;
              v14 = v32;
            }
          }
          ++v30;
        }
        while ( v29 != (_DWORD)v30 );
      }
      if ( v27 )
      {
        v34 = a1;
        v35 = v27;
      }
      else
      {
        DefaultTarget = (const GameMode *)LogicCombatComponent::getDefaultTarget((AllianceListMessage *)a1);
        result = LogicCombatComponent::isValidTarget(a1, DefaultTarget, 0);
        if ( !(_DWORD)result )
          return result;
        v34 = a1;
        v35 = DefaultTarget;
      }
      return LogicCombatComponent::setTarget(v34, v35, 0);
    }

    GameMode *__fastcall LogicCombatComponent::getDefaultTarget(AllianceListMessage *this)
    {
      LogicSpellListener **ParentCharacter; // x0
      GameMode *OpponentOwnerCharacter; // x20
      UnbindFacebookAccountMessage *LogicBattle; // x21
      unsigned int OwnerIndex; // w0
      const char *v6; // x2
      __int64 LeaderTowers; // x21
      int v8; // w22
      UnbindFacebookAccountMessage *v9; // x0
      int TotalTowerCount; // w0
      int v11; // w8
      GameMode *v12; // x0
      int DistanceToObjectSquared; // w22
      __int64 v14; // x23
      GameMode *v15; // x0
      int v16; // w0
    
      ParentCharacter = (LogicSpellListener **)LogicComponent::getParentCharacter(this);
      OpponentOwnerCharacter = (GameMode *)LogicGameObject::getOpponentOwnerCharacter(ParentCharacter);
      LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
      OwnerIndex = LogicGameObject::getOwnerIndex(OpponentOwnerCharacter);
      LeaderTowers = LogicBattle::getLeaderTowers(LogicBattle, OwnerIndex, v6);
      v8 = *(_DWORD *)(LeaderTowers + 12);
      v9 = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
      TotalTowerCount = LogicBattle::getTotalTowerCount(v9);
      if ( TotalTowerCount >= 0 )
        v11 = TotalTowerCount;
      else
        v11 = TotalTowerCount + 1;
      if ( v8 == v11 >> 1 )
      {
        v12 = (GameMode *)LogicComponent::getParentCharacter(this);
        DistanceToObjectSquared = LogicGameObject::getDistanceToObjectSquared(v12, OpponentOwnerCharacter);
        if ( *(int *)(LeaderTowers + 12) >= 1 )
        {
          v14 = 0;
          do
          {
            v15 = (GameMode *)LogicComponent::getParentCharacter(this);
            v16 = LogicGameObject::getDistanceToObjectSquared(v15, *(const GameMode **)(*(_QWORD *)LeaderTowers + 8 * v14));
            if ( v16 < DistanceToObjectSquared )
            {
              OpponentOwnerCharacter = *(GameMode **)(*(_QWORD *)LeaderTowers + 8 * v14);
              DistanceToObjectSquared = v16;
            }
            ++v14;
          }
          while ( v14 < *(int *)(LeaderTowers + 12) );
        }
      }
      return OpponentOwnerCharacter;
    }

    __int64 __fastcall LogicCombatComponent::removeGameObjectReferences(
            AllianceListMessage *this,
            const GameMode *a2,
            int a3,
            bool a4,
            GameMode *a5)
    {
      __int64 result; // x0
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x0
      HomeScreen *Globals; // x0
    
      LogicComponent::removeGameObjectReferences(this, a2, a3, a4, a5);
      LogicCombatComponent::removeFromDamagedByGameObjectsList(this, a2);
      result = LogicCombatComponent::removeFromIgnoreList(this, a2);
      if ( *((const GameMode **)this + 8) == a2 )
      {
        *((_BYTE *)this + 96) = 0;
        *((_QWORD *)this + 8) = 0;
        if ( *((int *)this + 18) >= 1 )
        {
          ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
          CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
          result = LogicCharacterData::getHitSpeed(CharacterData);
          if ( (int)result >= 2 )
          {
            Globals = (HomeScreen *)LogicDataTables::getGlobals();
            result = LogicGlobals::getAttackFinishTime(Globals);
            if ( (int)result >= 1 )
              *((_DWORD *)this + 23) = 1;
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicCombatComponent::removeFromDamagedByGameObjectsList(__int64 this, const GameMode *a2)
    {
      __int64 v2; // x19
      __int64 v3; // x8
      __int64 v4; // x20
    
      v2 = this;
      v3 = *(int *)(this + 44);
      if ( (int)v3 >= 1 )
      {
        v4 = 0;
        this += 32;
        while ( *(const GameMode **)(*(_QWORD *)(v2 + 32) + 8 * v4) != a2 )
        {
          if ( ++v4 >= v3 )
            return this;
        }
        if ( (_DWORD)v4 != -1 )
        {
          LogicArrayList<LogicGameObject *>::remove((__int64 *)this, v4);
          return LogicArrayList<int>::remove((__int64 *)(v2 + 48), v4);
        }
      }
      return this;
    }

    __int64 __fastcall LogicCombatComponent::removeFromIgnoreList(__int64 this, const GameMode *a2)
    {
      __int64 v2; // x9
      __int64 v3; // x8
    
      v2 = *(int *)(this + 28);
      if ( (int)v2 >= 1 )
      {
        v3 = 0;
        this += 16;
        while ( *(const GameMode **)(*(_QWORD *)this + 8 * v3) != a2 )
        {
          if ( ++v3 >= v2 )
            return this;
        }
        if ( (_DWORD)v3 != -1 )
          return LogicArrayList<LogicGameObject const*>::remove();
      }
      return this;
    }

    __int64 __fastcall LogicCombatComponent::getRequiredTimeToHit(AllianceListMessage *this)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x0
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      return LogicCharacterData::getHitSpeed(CharacterData);
    }

    __int64 __fastcall LogicCombatComponent::getHealingPower(AllianceListMessage *this)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x19
      __int64 CharacterData; // x20
      LogicMath *LevelIndex; // x1
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      CharacterData = LogicCharacter::getCharacterData(ParentCharacter);
      LevelIndex = (LogicMath *)LogicCharacter::getLevelIndex(ParentCharacter);
      return LogicCharacterData::getHealing(CharacterData, LevelIndex);
    }

    const GameMode *__fastcall LogicCombatComponent::observeHealingTargets(GameMode **this, __int64 a2)
    {
      GameMode **v3; // x20
      Font *CharacterData; // x0
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 v6; // x0
      _QWORD *v7; // x23
      __int64 v8; // x26
      __int64 v9; // x22
      const GameMode *v10; // x25
      int v11; // w19
      const GameMode *v12; // x27
      GameMode *v13; // x0
      int DistanceToObjectSquared; // w28
      _QWORD *v15; // x24
      __int64 v16; // x23
      GameMode **v17; // x26
      __int64 v18; // x20
      int v19; // w21
      int v20; // w0
      const char *v21; // x2
      int v22; // w10
      int SightRange; // [xsp+4h] [xbp-6Ch]
      GameMode *Parent; // [xsp+8h] [xbp-68h]
      int v26; // [xsp+14h] [xbp-5Ch]
      char v27[8]; // [xsp+18h] [xbp-58h] BYREF
    
      v3 = this;
      Parent = (GameMode *)LogicComponent::getParent((Sprite *)this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(Parent);
      SightRange = LogicCharacterData::getSightRange(CharacterData);
      LogicGameObjectManager = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager(v3);
      LogicGameObjectManager::getGameObjects(LogicGameObjectManager);
      v7 = (_QWORD *)v6;
      v8 = *(unsigned int *)(v6 + 12);
      LogicVector2::LogicVector2((LogicVector2 *)v27);
      if ( (int)v8 < 1 )
      {
        v10 = 0;
      }
      else
      {
        v9 = 0;
        v10 = 0;
        v11 = a2 ^ 1;
        v26 = 0x7FFFFFFF;
        do
        {
          v12 = *(const GameMode **)(*v7 + 8 * v9);
          v13 = (GameMode *)LogicComponent::getParent((Sprite *)v3);
          if ( LogicGameObject::isValidHealingTarget(v13, v12, v11) )
          {
            DistanceToObjectSquared = LogicGameObject::getDistanceToObjectSquared(Parent, v12);
            v15 = v7;
            v16 = v8;
            v17 = v3;
            v18 = a2;
            if ( (a2 & 1) != 0 )
            {
              v19 = 0x7FFFFFFF;
            }
            else
            {
              v20 = (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)v12 + 112LL))(v12);
              v19 = (v20 + SightRange) * (v20 + SightRange);
              Debugger::doAssert((Debugger *)1, (bool)"", v21);
            }
            v22 = v26;
            if ( DistanceToObjectSquared < v26 && DistanceToObjectSquared <= v19 )
            {
              v10 = v12;
              v22 = DistanceToObjectSquared;
            }
            v26 = v22;
            a2 = v18;
            v3 = v17;
            v8 = v16;
            v7 = v15;
          }
          ++v9;
        }
        while ( (_DWORD)v8 != (_DWORD)v9 );
      }
      LogicVector2::destruct((LogicVector2 *)v27);
      return v10;
    }

    __int64 __fastcall LogicCombatComponent::updateHitTimer(GameMode **this)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x0
      __int64 result; // x0
      GameMode *ParentCharacter; // x22
      FriendListMessage *CharacterBuffComponent; // x0
      __int64 v6; // x2
      int v7; // w3
      int v8; // w20
      AllianceJoinFailedMessage *v9; // x0
      Font *CharacterData; // x0
      int v11; // w21
      int v12; // w8
      __int64 v13; // x0
      int v14; // w8
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle(this);
      result = LogicBattle::isBattleEndedCalled(LogicBattle);
      if ( (_DWORD)result )
        goto LABEL_8;
      ParentCharacter = (GameMode *)LogicComponent::getParentCharacter((Sprite *)this);
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(ParentCharacter);
      v8 = LogicCharacterBuffComponent::calculateHitSpeed(CharacterBuffComponent, 50, v6, v7);
      v9 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(v9);
      result = LogicCharacterData::getHitSpeed(CharacterData);
      v11 = result;
      if ( v8 < 1 )
        goto LABEL_8;
      v12 = *((_DWORD *)this + 18);
      if ( v12 )
        goto LABEL_11;
      if ( *((_BYTE *)this + 97) )
      {
        v12 = 0;
        goto LABEL_11;
      }
      v13 = LogicCharacter::getCharacterData(ParentCharacter);
      result = LogicCharacterData::getLoadTime(v13);
      v14 = *((_DWORD *)this + 19);
      if ( (int)result <= v11 )
      {
        v12 = result - v14 + *((_DWORD *)this + 18);
        *((_DWORD *)this + 18) = v12;
        *((_DWORD *)this + 19) = result;
      }
      else
      {
        if ( v14 > v11 )
        {
    LABEL_8:
          *((_DWORD *)this + 18) = 0;
          return result;
        }
        *((_DWORD *)this + 19) = 0;
        v12 = *((_DWORD *)this + 18);
      }
    LABEL_11:
      if ( *((_BYTE *)this + 97) )
      {
        *((_DWORD *)this + 18) = v12 + v11 - v12 % v11;
        *((_BYTE *)this + 97) = 0;
      }
      else
      {
        *((_DWORD *)this + 18) = v12 + v8;
      }
      return result;
    }

    bool __fastcall LogicCombatComponent::isInRange(AllianceListMessage *this, const GameMode *a2, const #1240 *a3, int a4)
    {
      GameMode *Parent; // x0
      const GameMode *Position; // x1
    
      LogicComponent::getParent(this);
      Parent = (GameMode *)LogicComponent::getParent(this);
      Position = (const GameMode *)LogicGameObject::getPosition(Parent);
      return LogicGameObject::isInRangeAccurate(a2, Position, a3, a4);
    }

    __int64 __fastcall LogicCombatComponent::addToDamageFromGameObjectsList(AllianceListMessage *this, const GameMode *a2)
    {
      const char *v4; // x1
      __int64 v5; // x8
      __int64 v6; // x22
      __int64 result; // x0
      int v8; // w8
      const GameMode *v9; // [xsp+0h] [xbp-30h] BYREF
      int v10; // [xsp+Ch] [xbp-24h] BYREF
    
      if ( (*(unsigned int (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 88LL))(a2) == 3 )
        Debugger::warning((__siginfo *)"addToDamageFromGameObjectsList trying to add projectile!", v4);
      v5 = *((int *)this + 11);
      if ( (int)v5 < 1 )
      {
    LABEL_7:
        LODWORD(v6) = -1;
      }
      else
      {
        v6 = 0;
        while ( *(const GameMode **)(*((_QWORD *)this + 4) + 8 * v6) != a2 )
        {
          if ( ++v6 >= v5 )
            goto LABEL_7;
        }
      }
      result = LogicDataTables::getGlobals();
      v8 = *(_DWORD *)(result + 288);
      v10 = v8;
      if ( (_DWORD)v6 == -1 )
      {
        v9 = a2;
        LogicArrayList<LogicGameObject *>::add((__int64)this + 32, (__int64 *)&v9);
        return LogicArrayList<int>::add((__int64)this + 48, &v10);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)this + 6) + 4LL * (int)v6) = v8;
      }
      return result;
    }

    int *__fastcall LogicCombatComponent::addObjectToIgnoreList(int *result, __int64 a2)
    {
      Sprite *v3; // x19
      _QWORD *v4; // x20
      __int64 v5; // x8
      __int64 v6; // x9
      __int64 v8; // x10
      __int64 v9; // x19
      __int64 ImmunityEffect; // x0
      __int64 (__fastcall *v11)(__int64, __int64); // [xsp+0h] [xbp-30h]
      __int64 v12; // [xsp+8h] [xbp-28h] BYREF
    
      v3 = (Sprite *)result;
      v12 = a2;
      v4 = result + 4;
      v5 = result[7];
      v6 = 8LL * ((int)v5 - 1);
      while ( v5-- >= 1 )
      {
        v8 = *(_QWORD *)(*v4 + v6);
        v6 -= 8;
        if ( v8 == a2 )
          return result;
      }
      result = (int *)LogicComponent::getParent((Sprite *)result);
      if ( result != (int *)a2 )
      {
        LogicArrayList<LogicGameObject const*>::add((__int64)v4, &v12);
        v9 = *(_QWORD *)(LogicComponent::getParent(v3) + 40);
        v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 72LL);
        ImmunityEffect = LogicDataTables::getImmunityEffect();
        return (int *)v11(v9, ImmunityEffect);
      }
      return result;
    }

    __int64 __fastcall LogicCombatComponent::getRequiredRangeToTarget(Sprite *a1)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x0
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(a1);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      return LogicCharacterData::getRange(CharacterData);
    }

    __int64 __fastcall LogicCombatComponent::getHitTimer(AllianceListMessage *this)
    {
      return *((unsigned int *)this + 18);
    }

    __int64 __fastcall LogicCombatComponent::getPrevHitTimer(AllianceListMessage *this)
    {
      return *((unsigned int *)this + 20);
    }

    __int64 __fastcall LogicCombatComponent::updatePrevPos(__int64 result)
    {
      *(_DWORD *)(result + 80) = *(_DWORD *)(result + 72);
      return result;
    }

    __int64 __fastcall LogicCombatComponent::deInitState(__int64 result)
    {
      *(_DWORD *)(result + 92) = 0;
      return result;
    }

    __int64 __fastcall LogicCombatComponent::getFinishHitAnimationTimer(__int64 a1)
    {
      return *(unsigned int *)(a1 + 92);
    }

    // attributes: thunk
    void __fastcall LogicCombatComponent::~LogicCombatComponent(LogicCombatComponent *a1)
    {
      __ZN20LogicCombatComponentD2Ev(a1);
    }

    void __fastcall LogicCombatComponent::~LogicCombatComponent(LogicCombatComponent *a1)
    {
      LogicCombatComponent::~LogicCombatComponent(a1);
      operator delete(a1);
    }

    _QWORD *__fastcall LogicCombatComponent::~LogicCombatComponent(_QWORD *a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
    
      *a1 = off_10046D370;
      v3 = a1 + 6;
      v2 = a1[6];
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = a1[4];
      if ( v4 )
        operator delete[](v4);
      a1[4] = 0;
      a1[5] = 0;
      v5 = a1[2];
      if ( v5 )
        operator delete[](v5);
      a1[2] = 0;
      a1[3] = 0;
      return a1;
    }

}; // end class LogicCombatComponent
