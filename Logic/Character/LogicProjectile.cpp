class LogicProjectile
{
public:

    __int64 __fastcall LogicProjectile::LogicProjectile(__int64 a1, const AreaEffectObject *a2)
    {
      LogicGameObject::LogicGameObject((LogicGameObject *)a1, a2);
      *(_QWORD *)a1 = off_10046D598;
      LogicVector2::LogicVector2((LogicVector2 *)(a1 + 144));
      LogicVector2::LogicVector2((LogicVector2 *)(a1 + 152));
      LogicVector2::LogicVector2((LogicVector2 *)(a1 + 164));
      *(_DWORD *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 172) = 0;
      *(_BYTE *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 184) = 0;
      return a1;
    }

    // attributes: thunk
    void __fastcall LogicProjectile::LogicProjectile(LogicProjectile *this, const AreaEffectObject *a2)
    {
      __ZN15LogicProjectileC2EPK19LogicProjectileData((__int64)this, a2);
    }

    __int64 __fastcall LogicProjectile::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      LogicGameObject::destruct((GameMode *)a1);
      LogicVector2::destruct((LogicVector2 *)(a1 + 144));
      LogicVector2::destruct((LogicVector2 *)(a1 + 164));
      result = LogicVector2::destruct((LogicVector2 *)(a1 + 152));
      *(_DWORD *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 172) = 0;
      *(_BYTE *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 184) = 0;
      *(_DWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      return result;
    }

    __int64 __fastcall LogicProjectile::encode(__int64 a1, #1226 *a2)
    {
      LogicSpellListener *LogicGameObjectManager; // x0
      LogicSpellListener *v5; // x0
      __int64 result; // x0
      __int64 v7; // x21
    
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 176));
      LogicGameObject::encode((GameMode *)a1, a2);
      ByteStreamHelper::encodeVector((__int64)a2, (unsigned int *)(a1 + 144));
      ByteStreamHelper::encodeVector((__int64)a2, (unsigned int *)(a1 + 164));
      ByteStreamHelper::encodeVector((__int64)a2, (unsigned int *)(a1 + 152));
      LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
      LogicGameObjectManager::writeGameObjectReference(LogicGameObjectManager, a2, *(const GameMode **)(a1 + 136));
      v5 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
      LogicGameObjectManager::writeGameObjectReference(v5, a2, *(const GameMode **)(a1 + 128));
      ByteStreamHelper::writeDataReference((__int64)a2, *(AreaEffectObject **)(a1 + 120));
      ByteStreamHelper::writeDataReference((__int64)a2, *(AreaEffectObject **)(a1 + 184));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 208));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 160));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 172));
      result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 204));
      if ( *(int *)(a1 + 204) >= 1 )
      {
        v7 = 0;
        do
          result = ByteStreamHelper::writeGlobalID(
                     (__int64)a2,
                     (SectorCommandMessage *)*(unsigned int *)(*(_QWORD *)(a1 + 192) + 4 * v7++));
        while ( v7 < *(int *)(a1 + 204) );
      }
      return result;
    }

    __int64 __fastcall LogicProjectile::decode(__int64 a1, #1225 *a2)
    {
      LogicSpellListener *LogicGameObjectManager; // x0
      LogicSpellListener *v5; // x0
      __int64 result; // x0
      int v7; // w21
      __int64 v8; // x20
      int GlobalID; // [xsp+Ch] [xbp-24h] BYREF
    
      *(_BYTE *)(a1 + 176) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      LogicGameObject::decode((GameMode *)a1, a2);
      ByteStreamHelper::decodeVector((__int64)a2, (_DWORD *)(a1 + 144));
      ByteStreamHelper::decodeVector((__int64)a2, (_DWORD *)(a1 + 164));
      ByteStreamHelper::decodeVector((__int64)a2, (_DWORD *)(a1 + 152));
      LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
      *(_QWORD *)(a1 + 136) = LogicGameObjectManager::readGameObjectReference(LogicGameObjectManager, a2);
      v5 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
      *(_QWORD *)(a1 + 128) = LogicGameObjectManager::readGameObjectReference(v5, a2);
      *(_QWORD *)(a1 + 120) = ByteStreamHelper::readDataReference((__int64)a2, 7);
      *(_QWORD *)(a1 + 184) = ByteStreamHelper::readDataReference((__int64)a2, 11);
      *(_DWORD *)(a1 + 208) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 160) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 172) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 204) = 0;
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v7 = result;
      if ( (int)result >= 1 )
      {
        v8 = a1 + 192;
        do
        {
          GlobalID = ByteStreamHelper::readGlobalID((__int64)a2);
          result = LogicArrayList<int>::add(v8, &GlobalID);
          --v7;
        }
        while ( v7 );
      }
      return result;
    }

    __int64 __fastcall LogicProjectile::canBeTargeted(RespondToAllianceJoinRequestMessage *this)
    {
      return 0;
    }

    __int64 __fastcall LogicProjectile::getType(RespondToAllianceJoinRequestMessage *this)
    {
      return 3;
    }

    __int64 __fastcall LogicProjectile::init(
            LogicProjectile *a1,
            AllianceJoinFailedMessage *a2,
            LogicGameObject *a3,
            int a4,
            int a5,
            LogicGameObject *a6,
            const LogicEffectData *a7,
            int a8,
            const LogicSpell *a9)
    {
      __int64 CharacterData; // x27
      int ProjectileStartRadius; // w28
      int v16; // w19
      int v17; // w23
      int v18; // w1
      int v19; // w0
      int RealOwnerIndex; // w28
      int ProjectileYOffset; // w0
      int v22; // w8
      int v23; // w23
      int v24; // w28
      int v25; // w19
      int v26; // w26
      int ProjectileStartZ; // w0
    
      CharacterData = LogicCharacter::getCharacterData(a2);
      ProjectileStartRadius = LogicCharacterData::getProjectileStartRadius(CharacterData);
      v16 = a4 - LogicGameObject::getX(a2);
      v17 = a5 - LogicGameObject::getY(a2);
      v19 = LogicMath::sqrt((#1237 *)(unsigned int)(v16 * v16 + v17 * v17), v18);
      if ( v19 )
      {
        v16 = v16 * ProjectileStartRadius / v19;
        v17 = v17 * ProjectileStartRadius / v19;
      }
      RealOwnerIndex = LogicGameObject::getRealOwnerIndex(a2);
      ProjectileYOffset = LogicCharacterData::getProjectileYOffset(CharacterData);
      if ( RealOwnerIndex )
        v22 = -ProjectileYOffset;
      else
        v22 = ProjectileYOffset;
      v23 = v22 + v17;
      v24 = LogicGameObject::getX(a2) + v16;
      v25 = v23 + LogicGameObject::getY(a2);
      v26 = LogicGameObject::getZ(a2);
      ProjectileStartZ = LogicCharacterData::getProjectileStartZ(CharacterData);
      return LogicProjectile::init(a1, v24, v25, ProjectileStartZ + v26, a3, a4, a5, a6, a7, a8, a9);
    }

    __int64 __fastcall LogicProjectile::init(
            __int64 a1,
            const char *a2,
            int a3,
            int a4,
            __int64 a5,
            int a6,
            int a7,
            LogicSpellListener **a8,
            __int64 a9,
            int a10,
            __int64 a11)
    {
      int v17; // w24
      __int64 v19; // x20
      __int64 v20; // x28
      int v21; // w0
      void (__fastcall *v22)(__int64, __int64); // x20
      __int64 Data; // x0
      __int64 Damage; // x0
      __int64 v25; // x0
      LogicGameMode **LogicBattle; // x27
      __int64 v27; // x0
      int VisualRandomRadius; // w0
      LogicGameMode **v29; // x0
      int v30; // w0
      int v31; // w9
      __int64 v32; // x0
      __int64 v33; // x0
      int ProjectileRange; // w0
    
      v17 = (int)a2;
      v19 = a11;
      v20 = a9;
      *(_DWORD *)(a1 + 208) = a10;
      if ( *(_QWORD *)(a1 + 136) )
      {
        Debugger::warning((__siginfo *)"LogicProjectile::init called twice?", a2);
      }
      else
      {
        v21 = LogicProjectile::usePendingPhysicalDamage((LogicProjectile *)a1);
        if ( a5 && v21 )
        {
          v22 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a5 + 224LL);
          Data = LogicGameObject::getData((GameMode *)a1);
          Damage = LogicProjectileData::getDamage(Data, *(unsigned int *)(a1 + 208));
          v22(a5, Damage);
          v19 = a11;
          v20 = a9;
        }
      }
      *(_QWORD *)(a1 + 128) = a8;
      *(_QWORD *)(a1 + 136) = a5;
      v25 = LogicGameObject::getData((GameMode *)a1);
      if ( (int)LogicProjectileData::getVisualRandomRadius(v25) > 0 )
      {
        LogicBattle = (LogicGameMode **)LogicGameObject::getLogicBattle(a8);
        v27 = LogicGameObject::getData((GameMode *)a1);
        VisualRandomRadius = LogicProjectileData::getVisualRandomRadius(v27);
        *(_DWORD *)(a1 + 152) = LogicBattle::rand(LogicBattle, VisualRandomRadius);
        *(_DWORD *)(a1 + 156) = 0;
        v29 = (LogicGameMode **)LogicGameObject::getLogicBattle(a8);
        v30 = LogicBattle::rand(v29, 360);
        LogicVector2::rotate((LogicVector2 *)(a1 + 152), v30);
      }
      v31 = *(_DWORD *)(a1 + 156);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 152) + a6;
      *(_DWORD *)(a1 + 148) = v31 + a7;
      LogicGameObject::setPosition((_DWORD *)a1, v17, a3, a4);
      v32 = LogicGameObject::getData((GameMode *)a1);
      if ( (unsigned int)LogicProjectileData::isJuggernaut(v32) )
      {
        *(_DWORD *)(a1 + 144) -= LogicGameObject::getX((GameMode *)a1);
        *(_DWORD *)(a1 + 148) -= LogicGameObject::getY((GameMode *)a1);
        v33 = LogicGameObject::getData((GameMode *)a1);
        ProjectileRange = LogicProjectileData::getProjectileRange(v33, *(unsigned int *)(a1 + 208));
        LogicVector2::normalize((LogicVector2 *)(a1 + 144), ProjectileRange);
        *(_DWORD *)(a1 + 144) += LogicGameObject::getX((GameMode *)a1);
        *(_DWORD *)(a1 + 148) += LogicGameObject::getY((GameMode *)a1);
      }
      *(_DWORD *)(a1 + 164) = LogicGameObject::getX((GameMode *)a1);
      *(_DWORD *)(a1 + 168) = LogicGameObject::getY((GameMode *)a1);
      *(_DWORD *)(a1 + 172) = LogicGameObject::getZ((GameMode *)a1);
      *(_QWORD *)(a1 + 184) = v20;
      return LogicGameObject::setOriginSpell(a1, v19);
    }

    bool __fastcall LogicProjectile::usePendingPhysicalDamage(GameMode *a1)
    {
      __int64 Data; // x0
      __int64 v3; // x0
      __int64 v5; // x0
      __int64 DamageType; // x19
    
      Data = LogicGameObject::getData(a1);
      if ( !(unsigned int)LogicProjectileData::getHoming(Data) )
        return 0;
      v3 = LogicGameObject::getData(a1);
      if ( (unsigned int)LogicProjectileData::getRadius(v3) )
        return 0;
      v5 = LogicGameObject::getData(a1);
      DamageType = LogicProjectileData::getDamageType(v5);
      return DamageType == LogicDataTables::getPhysicalDamageType();
    }

    // attributes: thunk
    __int64 __fastcall LogicProjectile::getProjectileData(GameMode *this)
    {
      return LogicGameObject::getData(this);
    }

    _DWORD *__fastcall LogicProjectile::tick(__int64 a1)
    {
      __int64 Position; // x0
      int Distance; // w21
      __int64 Data; // x0
      int Speed; // w24
      int v6; // w20
      int v7; // w22
      int v8; // w23
      int v9; // w25
      int v10; // w26
      int v11; // w21
      __int64 v12; // x0
      int v13; // w3
      _DWORD *result; // x0
      __int64 v15; // x0
      int Damage; // w20
      __int64 v17; // x0
      HomeScreen *Globals; // x0
      __int64 v19; // x8
      __int64 v20; // x0
      int Pushback; // w22
      __int64 v22; // x0
      int ReducedCrownTowerDamage; // w24
      __int64 v24; // x0
      __int64 Radius; // x26
      __int64 v26; // x0
      const LogicData *DamageType; // x25
      __int64 v28; // x0
      const BattleResultMessage *TargetBuff; // x23
      #1237 *v30; // x21
      __int64 v31; // x20
      __int64 v32; // x0
      int MaximumTargets; // w28
      __int64 v34; // x0
      char v35; // w22
      char v36; // w25
      int v37; // w27
      const BattleResultMessage *v38; // x24
      char v39; // w23
      __int64 v40; // x0
      char hasReducedCrownTowerDamage; // w0
      int v42; // w27
      __int64 v43; // x0
      int v44; // w22
      __int64 v45; // x0
      char OnlyEnemies; // w24
      __int64 v47; // x0
      char OnlyOwnTroops; // w25
      __int64 v49; // x28
      const TextField *v50; // x0
      __int64 v51; // x0
      __int64 v52; // x0
      __int64 v53; // x0
      HomeScreen *v54; // x0
      unsigned int v55; // w26
      unsigned int v56; // w27
      LogicArenaData *v57; // x0
      __int64 v58; // x0
      int BuffTime; // w24
      FriendListMessage *CharacterBuffComponent; // x25
      __int64 v61; // x26
      const TextField *OriginSpell; // x0
      LogicMovementComponent *MovementComponentEvenIfDisabled; // x0
      __int64 v64; // x0
      __int64 HitEffect; // x22
      __int64 Angle; // x23
      __int64 v67; // x24
      void (__fastcall *v68)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64); // x28
      __int64 v69; // x25
      __int64 v70; // x26
      __int64 v71; // x27
      __int64 OwnerAccountId; // x0
      __int64 v73; // x0
      __int64 v74; // x0
      Font *SpawnCharacter; // x22
      int OwnerIndex; // w23
      __int64 v77; // x0
      int SpawnCharacterCount; // w24
      int i; // w25
      const char *CollisionRadius; // x0
      UnbindFacebookAccountMessage *LogicBattle; // x26
      LogicMath *v82; // x27
      LogicMath *v83; // x28
      const #1236 *v84; // x0
      GameMode *v85; // x26
      __int64 v86; // x0
      __int64 v87; // x27
      __int64 v88; // x0
      __int64 v89; // x0
      int SpawnCharacterDeployTime; // w8
      LogicSpellListener *v91; // x0
      __int64 v92; // x0
      UnbindFacebookAccountMessage *v93; // x22
      __int64 v94; // x0
      const AreaEffectObject *SpawnAreaEffectObject; // x23
      const #1236 *v96; // x0
      GameMode *v97; // x20
      int v98; // w21
      const TextField *v99; // x0
      LogicSpellListener *v100; // x0
      bool v101; // [xsp+Eh] [xbp-92h]
      UnlockAccountPopup **LogicGameObjectManager; // [xsp+20h] [xbp-80h]
      const LogicData *v103; // [xsp+28h] [xbp-78h]
      int v104; // [xsp+34h] [xbp-6Ch]
      _DWORD v105[2]; // [xsp+38h] [xbp-68h] BYREF
      _BYTE v106[8]; // [xsp+40h] [xbp-60h] BYREF
      _BYTE v107[8]; // [xsp+48h] [xbp-58h] BYREF
    
      LogicGameObject::tick((GameMode *)a1);
      LogicProjectile::updateTargetPosition((RespondToAllianceJoinRequestMessage *)a1);
      Position = LogicGameObject::getPosition((GameMode *)a1);
      Distance = LogicVector2::getDistance(a1 + 144, Position);
      Data = LogicGameObject::getData((GameMode *)a1);
      Speed = LogicProjectileData::getSpeed(Data);
      if ( Distance <= Speed )
      {
        if ( !*(_BYTE *)(a1 + 176) && LogicProjectile::usePendingPhysicalDamage((GameMode *)a1) && *(_QWORD *)(a1 + 136) )
        {
          v15 = LogicGameObject::getData((GameMode *)a1);
          Damage = LogicProjectileData::getDamage(v15, *(unsigned int *)(a1 + 208));
          v17 = LogicGameObject::getData((GameMode *)a1);
          if ( (unsigned int)LogicProjectileData::hasReducedCrownTowerDamage(v17)
            && (((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 200LL))(*(_QWORD *)(a1 + 136)) & 1) != 0
             || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 208LL))(*(_QWORD *)(a1 + 136))) )
          {
            Globals = (HomeScreen *)LogicDataTables::getGlobals();
            Damage = LogicGlobals::getReducedCrownTowerDamage(Globals, Damage);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 224LL))(
            *(_QWORD *)(a1 + 136),
            (unsigned int)-Damage);
        }
        *(_BYTE *)(a1 + 176) = 1;
        LogicGameObject::setPosition((_DWORD *)a1, *(_DWORD *)(a1 + 144), *(_DWORD *)(a1 + 148), 0);
        v19 = *(_QWORD *)(a1 + 128);
        if ( v19 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 40) + 24LL))(*(_QWORD *)(v19 + 40));
        v20 = LogicGameObject::getData((GameMode *)a1);
        Pushback = LogicProjectileData::getPushback(v20);
        v22 = LogicGameObject::getData((GameMode *)a1);
        ReducedCrownTowerDamage = LogicProjectileData::getDamage(v22, *(unsigned int *)(a1 + 208));
        v24 = LogicGameObject::getData((GameMode *)a1);
        Radius = LogicProjectileData::getRadius(v24);
        v26 = LogicGameObject::getData((GameMode *)a1);
        DamageType = (const LogicData *)LogicProjectileData::getDamageType(v26);
        v28 = LogicGameObject::getData((GameMode *)a1);
        TargetBuff = (const BattleResultMessage *)LogicProjectileData::getTargetBuff(v28);
        v30 = (#1237 *)(unsigned int)(*(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 152));
        v31 = (unsigned int)(*(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 156));
        if ( (int)Radius < 1 )
        {
          v51 = *(_QWORD *)(a1 + 136);
          if ( v51 )
          {
            v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 136LL))(v51);
            if ( ReducedCrownTowerDamage >= 1 && v52 )
            {
              v53 = LogicGameObject::getData((GameMode *)a1);
              if ( (unsigned int)LogicProjectileData::hasReducedCrownTowerDamage(v53)
                && (((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 200LL))(*(_QWORD *)(a1 + 136)) & 1) != 0
                 || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 208LL))(*(_QWORD *)(a1 + 136))) )
              {
                v54 = (HomeScreen *)LogicDataTables::getGlobals();
                ReducedCrownTowerDamage = LogicGlobals::getReducedCrownTowerDamage(v54, ReducedCrownTowerDamage);
              }
              v55 = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 164);
              v56 = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 168);
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 136) + 40LL) + 128LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 136) + 40LL),
                v55,
                v56,
                0);
              LogicVector2::LogicVector2((LogicVector2 *)v107, v55, v56);
              v57 = (LogicArenaData *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 136LL))(*(_QWORD *)(a1 + 136));
              LogicHitpointComponent::takeDamage(
                v57,
                ReducedCrownTowerDamage,
                DamageType,
                (GameMode *)a1,
                *(const AskForTVContentMessage **)(a1 + 184),
                (const #1240 *)v107);
            }
            if ( TargetBuff && LogicGameObject::getCharacterBuffComponent(*(GameMode **)(a1 + 136)) )
            {
              v58 = LogicGameObject::getData((GameMode *)a1);
              BuffTime = LogicProjectileData::getBuffTime(v58, *(unsigned int *)(a1 + 208));
              CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(*(GameMode **)(a1 + 136));
              v61 = *(unsigned int *)(a1 + 208);
              OriginSpell = (const TextField *)LogicGameObject::getOriginSpell((GameMode *)a1);
              LogicCharacterBuffComponent::addCharacterBuff(
                CharacterBuffComponent,
                0,
                TargetBuff,
                BuffTime,
                v61,
                0xFFFFFFFF,
                OriginSpell);
            }
            if ( Pushback >= 1 && LogicGameObject::getMovementComponentEvenIfDisabled(*(GameMode **)(a1 + 136)) )
            {
              LogicGameObject::enableComponent(*(_QWORD *)(a1 + 136), 1, 1);
              MovementComponentEvenIfDisabled = (LogicMovementComponent *)LogicGameObject::getMovementComponentEvenIfDisabled(*(GameMode **)(a1 + 136));
              LogicMovementComponent::doPushback(MovementComponentEvenIfDisabled, (int)v30, v31, Pushback);
            }
          }
        }
        else
        {
          v103 = DamageType;
          v104 = Pushback;
          v32 = LogicGameObject::getData((GameMode *)a1);
          MaximumTargets = LogicProjectileData::getMaximumTargets(v32);
          if ( ReducedCrownTowerDamage >= 1 )
          {
            LogicGameObjectManager = (UnlockAccountPopup **)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
            v34 = LogicGameObject::getData((GameMode *)a1);
            v35 = LogicProjectileData::getOnlyEnemies(v34) ^ 1;
            v36 = *(_BYTE *)(LogicGameObject::getData((GameMode *)a1) + 188);
            v37 = ReducedCrownTowerDamage;
            v38 = TargetBuff;
            v39 = *(_BYTE *)(LogicGameObject::getData((GameMode *)a1) + 189);
            v40 = LogicGameObject::getData((GameMode *)a1);
            hasReducedCrownTowerDamage = LogicProjectileData::hasReducedCrownTowerDamage(v40);
            v101 = v39;
            TargetBuff = v38;
            LogicGameObjectManager::giveDamageToObjectsInArea(
              LogicGameObjectManager,
              v30,
              v31,
              Radius,
              v37,
              v103,
              (GameMode *)a1,
              v104,
              (int)v30,
              v31,
              MaximumTargets,
              v35,
              v36,
              v101,
              hasReducedCrownTowerDamage);
          }
          v42 = MaximumTargets;
          if ( TargetBuff )
          {
            v43 = LogicGameObject::getData((GameMode *)a1);
            v44 = LogicProjectileData::getBuffTime(v43, *(unsigned int *)(a1 + 208));
            v45 = LogicGameObject::getData((GameMode *)a1);
            OnlyEnemies = LogicProjectileData::getOnlyEnemies(v45);
            v47 = LogicGameObject::getData((GameMode *)a1);
            OnlyOwnTroops = LogicProjectileData::getOnlyOwnTroops(v47);
            v49 = LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
            v50 = (const TextField *)LogicGameObject::getOriginSpell((GameMode *)a1);
            LogicGameObjectManager::giveBuffToObjectsInArea(
              v49,
              v30,
              (#1237 *)v31,
              Radius,
              (const GameMode *)a1,
              TargetBuff,
              v44,
              v42,
              OnlyOwnTroops,
              OnlyEnemies,
              0,
              v50);
          }
        }
        v64 = LogicGameObject::getData((GameMode *)a1);
        HitEffect = LogicProjectileData::getHitEffect(v64);
        if ( HitEffect )
        {
          LogicVector2::LogicVector2(
            (LogicVector2 *)v106,
            *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 164),
            *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 168));
          Angle = LogicVector2::getAngle(v106);
          LogicVector2::destruct((LogicVector2 *)v106);
          v67 = *(_QWORD *)(LogicGameObject::getLogicGameObjectManager((GameMode *)a1) + 40);
          v68 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v67 + 72LL);
          v69 = *(unsigned int *)(a1 + 144);
          v70 = *(unsigned int *)(a1 + 148);
          v71 = LogicGameObject::getZ((GameMode *)a1);
          OwnerAccountId = LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
          v68(v67, v69, v70, v71, HitEffect, 0, OwnerAccountId, Angle);
        }
        v73 = LogicGameObject::getData((GameMode *)a1);
        if ( LogicProjectileData::getSpawnCharacter(v73) )
        {
          v74 = LogicGameObject::getData((GameMode *)a1);
          SpawnCharacter = (Font *)LogicProjectileData::getSpawnCharacter(v74);
          OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)a1);
          v77 = LogicGameObject::getData((GameMode *)a1);
          SpawnCharacterCount = LogicProjectileData::getSpawnCharacterCount(v77);
          if ( SpawnCharacterCount >= 1 )
          {
            for ( i = 0; i != SpawnCharacterCount; ++i )
            {
              LogicVector2::LogicVector2((LogicVector2 *)v105);
              CollisionRadius = (const char *)LogicCharacterData::getCollisionRadius(SpawnCharacter);
              LogicBattle::getSpawnOffset(i, SpawnCharacterCount, CollisionRadius, OwnerIndex == 0, v105);
              LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
              v82 = (LogicMath *)(unsigned int)(v105[0] + (_DWORD)v30);
              v83 = (LogicMath *)(unsigned int)(v105[1] + v31);
              v84 = (const #1236 *)LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
              v85 = LogicBattle::spawnObject(LogicBattle, SpawnCharacter, v82, v83, v84, 0, 0);
              LODWORD(v82) = *(_DWORD *)(a1 + 208);
              v86 = LogicGameObject::getData((GameMode *)a1);
              v87 = (unsigned int)LogicProjectileData::getSpawnCharacterLevelIndex(v86) + (unsigned int)v82;
              v88 = LogicGameObject::getOriginSpell((GameMode *)a1);
              LogicCharacter::setLevelIndex(v85, v87, v88);
              v89 = LogicGameObject::getData((GameMode *)a1);
              SpawnCharacterDeployTime = LogicProjectileData::getSpawnCharacterDeployTime(v89);
              if ( SpawnCharacterDeployTime >= 1 )
                LogicCharacter::setCustomDeployTime(v85, SpawnCharacterDeployTime);
              v91 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
              LogicGameObjectManager::addLogicGameObject(v91, v85, 1);
            }
          }
        }
        v92 = LogicGameObject::getData((GameMode *)a1);
        result = (_DWORD *)LogicProjectileData::getSpawnAreaEffectObject(v92);
        if ( result )
        {
          v93 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
          v94 = LogicGameObject::getData((GameMode *)a1);
          SpawnAreaEffectObject = (const AreaEffectObject *)LogicProjectileData::getSpawnAreaEffectObject(v94);
          v96 = (const #1236 *)LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
          v97 = LogicBattle::spawnObject(v93, SpawnAreaEffectObject, v30, (LogicMath *)v31, v96, 0, 0);
          v98 = *(_DWORD *)(a1 + 208);
          v99 = (const TextField *)LogicGameObject::getOriginSpell((GameMode *)a1);
          LogicAreaEffectObject::init(v97, v98, v99);
          v100 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
          return (_DWORD *)LogicGameObjectManager::addLogicGameObject(v100, v97, 1);
        }
      }
      else
      {
        v6 = LogicGameObject::getX((GameMode *)a1);
        v7 = LogicGameObject::getY((GameMode *)a1);
        v8 = LogicGameObject::getZ((GameMode *)a1);
        v9 = (*(_DWORD *)(a1 + 144) - v6) * Speed / Distance;
        v10 = (*(_DWORD *)(a1 + 148) - v7) * Speed / Distance;
        v11 = (*(_DWORD *)(a1 + 160) - v8) * Speed / Distance;
        v12 = LogicGameObject::getData((GameMode *)a1);
        if ( (unsigned int)LogicProjectileData::isJuggernaut(v12) )
          LogicProjectile::checkCollisions((LogicProjectile *)a1, v9, v10, v13);
        return LogicGameObject::setPosition((_DWORD *)a1, v9 + v6, v10 + v7, v11 + v8);
      }
      return result;
    }

    _QWORD *__fastcall LogicProjectile::updateTargetPosition(_QWORD *this)
    {
      _QWORD *v1; // x19
      __int64 Data; // x0
      int v3; // w20
      int v4; // w8
    
      v1 = this;
      if ( *(this + 17) )
      {
        Data = LogicGameObject::getData((GameMode *)this);
        this = (_QWORD *)LogicProjectileData::getHoming(Data);
        if ( (_DWORD)this )
        {
          *((_DWORD *)v1 + 36) = *((_DWORD *)v1 + 38) + LogicGameObject::getX((GameMode *)v1[17]);
          *((_DWORD *)v1 + 37) = *((_DWORD *)v1 + 39) + LogicGameObject::getY((GameMode *)v1[17]);
          v3 = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 112LL))(v1);
          this = (_QWORD *)LogicGameObject::getZ((GameMode *)v1[17]);
          if ( v3 >= 0 )
            v4 = v3;
          else
            v4 = v3 + 1;
          *((_DWORD *)v1 + 40) = (_DWORD)this + (v4 >> 1);
        }
      }
      return this;
    }

    __int64 __fastcall LogicProjectile::checkCollisions(__int64 a1, int a2, int a3)
    {
      __int64 result; // x0
      int v7; // w22
      int v8; // w21
      __int64 LogicGameObjectManager; // x0
      __int64 IntersectingObjects; // x22
      __int64 Data; // x0
      __int64 v12; // x0
      const LogicData *v13; // x24
      __int64 v14; // x20
      GameMode *v15; // x26
      __int64 v16; // x0
      int OwnerIndex; // w27
      __int64 v18; // x8
      __int64 v19; // x9
      int v21; // w10
      LogicArenaData *v22; // x27
      int v23; // w28
      int v24; // w0
      LogicMovementComponent *MovementComponent; // x27
      int v26; // w28
      int v27; // w23
      __int64 v28; // x0
      int Pushback; // w0
      int Damage; // [xsp+Ch] [xbp-64h]
      unsigned int v31; // [xsp+10h] [xbp-60h]
      int GlobalID; // [xsp+14h] [xbp-5Ch] BYREF
      _DWORD v33[2]; // [xsp+18h] [xbp-58h] BYREF
    
      result = LogicGameObject::getData((GameMode *)a1);
      v7 = *(_DWORD *)(result + 168);
      if ( v7 >= 1 )
      {
        v31 = LogicGameObject::getX((GameMode *)a1) + a2;
        v8 = LogicGameObject::getY((GameMode *)a1) + a3;
        LogicGameObjectManager = LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
        IntersectingObjects = LogicSpacePartition::getIntersectingObjects(
                                *(Screen **)(LogicGameObjectManager + 64),
                                v31,
                                v8,
                                v7);
        Data = LogicGameObject::getData((GameMode *)a1);
        Damage = LogicProjectileData::getDamage(Data, *(unsigned int *)(a1 + 208));
        v12 = LogicGameObject::getData((GameMode *)a1);
        result = LogicProjectileData::getDamageType(v12);
        v13 = (const LogicData *)result;
        if ( *(int *)(IntersectingObjects + 12) >= 1 )
        {
          v14 = 0;
          do
          {
            v15 = *(GameMode **)(*(_QWORD *)IntersectingObjects + 8 * v14);
            v16 = LogicGameObject::getData((GameMode *)a1);
            if ( !(unsigned int)LogicProjectileData::getOnlyEnemies(v16)
              || (OwnerIndex = LogicGameObject::getOwnerIndex(v15),
                  result = LogicGameObject::getOwnerIndex((GameMode *)a1),
                  OwnerIndex != (_DWORD)result) )
            {
              result = LogicGameObject::getGlobalID(v15);
              v18 = *(int *)(a1 + 204);
              v19 = 4LL * ((int)v18 - 1);
              while ( v18-- >= 1 )
              {
                v21 = *(_DWORD *)(*(_QWORD *)(a1 + 192) + v19);
                v19 -= 4;
                if ( v21 == (_DWORD)result )
                  goto LABEL_14;
              }
              result = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v15 + 136LL))(v15);
              v22 = (LogicArenaData *)result;
              if ( result )
              {
                v23 = LogicGameObject::getX(v15) - v31;
                v24 = LogicGameObject::getY(v15);
                LogicVector2::LogicVector2((LogicVector2 *)v33, v23, v24 - v8);
                (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)v15 + 5) + 128LL))(
                  *((_QWORD **)v15 + 5),
                  v33[0],
                  v33[1],
                  0);
                LogicHitpointComponent::takeDamage(
                  v22,
                  Damage,
                  v13,
                  (GameMode *)a1,
                  *(const AskForTVContentMessage **)(a1 + 184),
                  (const #1240 *)v33);
                MovementComponent = (LogicMovementComponent *)LogicGameObject::getMovementComponent(v15);
                if ( MovementComponent )
                {
                  v26 = LogicGameObject::getX((GameMode *)a1);
                  v27 = LogicGameObject::getY((GameMode *)a1);
                  v28 = LogicGameObject::getData((GameMode *)a1);
                  Pushback = LogicProjectileData::getPushback(v28);
                  LogicMovementComponent::doPushback(MovementComponent, v26, v27, Pushback);
                }
                GlobalID = LogicGameObject::getGlobalID(v15);
                result = LogicArrayList<int>::add(a1 + 192, &GlobalID);
              }
            }
    LABEL_14:
            ++v14;
          }
          while ( v14 < *(int *)(IntersectingObjects + 12) );
        }
      }
      return result;
    }

    __int64 __fastcall LogicProjectile::removeGameObjectReferences(
            RespondToAllianceJoinRequestMessage *this,
            const GameMode *a2,
            __int64 a3,
            __int64 a4,
            GameMode *a5)
    {
      __int64 v10; // x8
      __int64 v11; // x1
    
      if ( *((const GameMode **)this + 17) == a2 )
      {
        LogicProjectile::updateTargetPosition(this);
        *((_QWORD *)this + 17) = a5;
      }
      v10 = *((int *)this + 51);
      if ( (int)v10 >= 1 )
      {
        v11 = 0;
        while ( *(_DWORD *)(*((_QWORD *)this + 24) + 4 * v11) != (_DWORD)a3 )
        {
          if ( ++v11 >= v10 )
            goto LABEL_10;
        }
        if ( (_DWORD)v11 != -1 )
          LogicArrayList<int>::remove((__int64 *)this + 24, v11);
      }
    LABEL_10:
      if ( *((const GameMode **)this + 16) == a2 )
        *((_QWORD *)this + 16) = a5;
      return LogicGameObject::removeGameObjectReferences(this, a2, a3, a4, a5);
    }

    __int64 __fastcall LogicProjectile::shouldDestruct(RespondToAllianceJoinRequestMessage *this)
    {
      return *((unsigned __int8 *)this + 176);
    }

    __int64 __fastcall LogicProjectile::getTargetX(RespondToAllianceJoinRequestMessage *this)
    {
      __int64 Data; // x0
    
      if ( *((_QWORD *)this + 17)
        && (Data = LogicGameObject::getData(this), (unsigned int)LogicProjectileData::getHoming(Data)) )
      {
        return *((_DWORD *)this + 38) + (unsigned int)LogicGameObject::getX(*((GameMode **)this + 17));
      }
      else
      {
        return *((unsigned int *)this + 36);
      }
    }

    __int64 __fastcall LogicProjectile::getTargetY(RespondToAllianceJoinRequestMessage *this)
    {
      __int64 Data; // x0
    
      if ( *((_QWORD *)this + 17)
        && (Data = LogicGameObject::getData(this), (unsigned int)LogicProjectileData::getHoming(Data)) )
      {
        return *((_DWORD *)this + 39) + (unsigned int)LogicGameObject::getY(*((GameMode **)this + 17));
      }
      else
      {
        return *((unsigned int *)this + 37);
      }
    }

    void __fastcall LogicProjectile::~LogicProjectile(RespondToAllianceJoinRequestMessage *this)
    {
      __int64 v1; // x0
      _QWORD *v2; // x20
    
      *(_QWORD *)this = off_10046D598;
      v2 = (_QWORD *)((char *)this + 192);
      v1 = *((_QWORD *)this + 24);
      if ( v1 )
        operator delete[](v1);
      *v2 = 0;
      v2[1] = 0;
    }

    void __fastcall LogicProjectile::~LogicProjectile(RespondToAllianceJoinRequestMessage *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10046D598;
      v2 = *((_QWORD *)this + 24);
      if ( v2 )
        operator delete[](v2);
      operator delete(this);
    }

}; // end class LogicProjectile
