class LogicAreaEffectObject
{
public:

    void __fastcall LogicAreaEffectObject::LogicAreaEffectObject(LogicAreaEffectObject *this, const #1108 *a2)
    {
      __int64 v2; // x0
    
      LogicGameObject::LogicGameObject(this, a2);
      *(_QWORD *)v2 = off_100465120;
      *(_QWORD *)(v2 + 136) = 0;
      *(_QWORD *)(v2 + 144) = 0;
      *(_DWORD *)(v2 + 128) = 0;
      *(_QWORD *)(v2 + 120) = 0;
    }

    __int64 __fastcall LogicAreaEffectObject::destruct(CombatHUD *this)
    {
      __int64 result; // x0
    
      result = LogicGameObject::destruct(this);
      *((_DWORD *)this + 32) = 0;
      *((_QWORD *)this + 15) = 0;
      return result;
    }

    __int64 __fastcall LogicAreaEffectObject::encode(CombatHUD *this, #1226 *a2)
    {
      __int64 result; // x0
      __int64 v5; // x21
    
      LogicGameObject::encode(this, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 31));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 30));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 32));
      result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 37));
      if ( *((int *)this + 37) >= 1 )
      {
        v5 = 0;
        do
          result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(
                     a2,
                     *(unsigned int *)(*((_QWORD *)this + 17) + 4 * v5++));
        while ( v5 < *((int *)this + 37) );
      }
      return result;
    }

    __int64 __fastcall LogicAreaEffectObject::decode(CombatHUD *this, #1225 *a2)
    {
      int v4; // w20
      __int64 result; // x0
      int v6; // [xsp+Ch] [xbp-24h] BYREF
    
      LogicGameObject::decode(this, a2);
      *((_DWORD *)this + 31) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 30) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v4 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 37) = 0;
      result = LogicArrayList<int>::ensureCapacity((__int64)this + 136, v4);
      if ( v4 >= 1 )
      {
        do
        {
          v6 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
          result = LogicArrayList<int>::add((__int64)this + 136, &v6);
          --v4;
        }
        while ( v4 );
      }
      return result;
    }

    __int64 __fastcall LogicAreaEffectObject::getLevelIndex(CombatHUD *this)
    {
      return *((unsigned int *)this + 30);
    }

    __int64 __fastcall LogicAreaEffectObject::canBeTargeted(CombatHUD *this)
    {
      return 0;
    }

    // attributes: thunk
    __int64 __fastcall LogicAreaEffectObject::getAreaEffectObjectData(CombatHUD *this)
    {
      return LogicGameObject::getData(this);
    }

    GameMode *__fastcall LogicAreaEffectObject::tick(CombatHUD *this)
    {
      int *v1; // x27
      #1108 *Data; // x22
      int LifeDuration; // w20
      int v4; // w8
      int v5; // w19
      int v6; // w21
      int HitSpeed; // w0
      int v8; // w8
      _BOOL4 v9; // w9
      int v10; // w19
      int v11; // w20
      int v12; // w28
      int Pushback; // w26
      int MaximumTargets; // w20
      char OnlyEnemies; // w25
      int Damage; // w24
      GameMode *v17; // x25
      __int64 v18; // x27
      #1237 *v19; // x19
      __int64 v20; // x21
      int v21; // w23
      UnlockAccountPopup **v22; // x0
      int Healing; // w21
      Sprite *LogicGameObjectManager; // x19
      #1237 *v25; // x20
      #1237 *v26; // x0
      const BattleResultMessage *Buff; // x21
      int v28; // w23
      char v29; // w19
      char OnlyOwnTroops; // w20
      __int64 v31; // x24
      #1237 *v32; // x25
      #1237 *v33; // x26
      const TextField *OriginSpell; // x0
      GameMode *result; // x0
      #1401 *v36; // x20
      int v38; // w23
      int v39; // w26
      int ProjectileStartHeight; // w21
      GameMode *v41; // x22
      int v42; // w23
      int v43; // w26
      #1108 *v44; // x0
      int ProjectilesToCenter; // w0
      __int64 v46; // x0
      int v47; // w19
      LogicGameMode **LogicBattle; // x22
      __int64 v49; // x0
      int v50; // w0
      LogicGameMode **v51; // x0
      int v52; // w1
      GameMode *v53; // x0
      GameMode *v54; // x0
      int v55; // w24
      int v56; // w25
      #1108 *v57; // x0
      GameMode *v58; // x0
      GameMode *v59; // x0
      GameMode *GameObjectByClassID; // x20
      int OwnerIndex; // w0
      int *v62; // x28
      const LogicEffectData *DamageEffect; // x27
      __int64 ProjectileData; // x0
      LogicData *v65; // x0
      int v66; // w19
      const LogicSpell *v67; // x0
      LogicSpellListener *v68; // x0
      int v69; // [xsp+4h] [xbp-9Ch]
      int v70; // [xsp+20h] [xbp-80h]
      int v71; // [xsp+24h] [xbp-7Ch]
      char hasReducedCrownTowerDamage; // [xsp+28h] [xbp-78h]
      char v73; // [xsp+2Ch] [xbp-74h]
      LogicData *DamageType; // [xsp+30h] [xbp-70h]
      char v75; // [xsp+38h] [xbp-68h]
      char v76; // [xsp+3Ch] [xbp-64h]
      unsigned int Radius; // [xsp+40h] [xbp-60h]
      int GlobalID; // [xsp+44h] [xbp-5Ch] BYREF
      _DWORD v79[2]; // [xsp+48h] [xbp-58h] BYREF
    
      v1 = (int *)this;
      LogicGameObject::tick(this);
      Data = (#1108 *)LogicGameObject::getData((GameMode *)v1);
      LifeDuration = LogicAreaEffectObjectData::getLifeDuration(Data, v1[30]);
      v4 = v1[31];
      v5 = LifeDuration - v4;
      v6 = v4 - 50;
      v1[31] = v4 - 50;
      HitSpeed = LogicAreaEffectObjectData::getHitSpeed(Data);
      v8 = v5 / HitSpeed;
      v9 = v5 > 0;
      if ( HitSpeed >= 1 )
        v10 = (LifeDuration - v6) / HitSpeed;
      else
        v10 = 1;
      if ( HitSpeed >= 1 )
        v11 = v8;
      else
        v11 = v9;
      v70 = v11;
      v71 = v10;
      Radius = LogicAreaEffectObjectData::getRadius(Data);
      v12 = v10 - v11;
      if ( v10 > v11 )
      {
        do
        {
          Pushback = LogicAreaEffectObjectData::getPushback(Data);
          MaximumTargets = LogicAreaEffectObjectData::getMaximumTargets(Data);
          OnlyEnemies = LogicAreaEffectObjectData::getOnlyEnemies(Data);
          Damage = LogicAreaEffectObjectData::getDamage(Data, (unsigned int)v1[30]);
          if ( Damage < 1 )
          {
            Healing = LogicAreaEffectObjectData::getHealing(Data, (unsigned int)v1[30]);
            if ( Healing >= 1 )
            {
              LogicGameObjectManager = (Sprite *)LogicGameObject::getLogicGameObjectManager((GameMode *)v1);
              v25 = (#1237 *)LogicGameObject::getX((GameMode *)v1);
              v26 = (#1237 *)LogicGameObject::getY((GameMode *)v1);
              LogicGameObjectManager::healObjectsInArea(
                LogicGameObjectManager,
                v25,
                v26,
                Radius,
                Healing,
                (const GameMode *)v1);
            }
          }
          else
          {
            v76 = OnlyEnemies ^ 1;
            v75 = LogicAreaEffectObjectData::hitsGround(Data);
            v73 = LogicAreaEffectObjectData::hitsAir(Data);
            v17 = (GameMode *)v1;
            hasReducedCrownTowerDamage = LogicAreaEffectObjectData::hasReducedCrownTowerDamage(Data);
            DamageType = (LogicData *)LogicAreaEffectObjectData::getDamageType(Data);
            v18 = LogicGameObject::getLogicGameObjectManager((GameMode *)v1);
            v19 = (#1237 *)LogicGameObject::getX(v17);
            v20 = LogicGameObject::getY(v17);
            v21 = LogicGameObject::getX(v17);
            v69 = LogicGameObject::getY(v17);
            v22 = (UnlockAccountPopup **)v18;
            v1 = (int *)v17;
            LogicGameObjectManager::giveDamageToObjectsInArea(
              v22,
              v19,
              v20,
              Radius,
              Damage,
              DamageType,
              v17,
              Pushback,
              v21,
              v69,
              MaximumTargets,
              v76,
              v75,
              v73,
              hasReducedCrownTowerDamage);
          }
          Buff = (const BattleResultMessage *)LogicAreaEffectObjectData::getBuff(Data);
          if ( Buff )
          {
            v28 = v1[31];
            if ( v28 >= 1 )
            {
              v29 = LogicAreaEffectObjectData::getOnlyEnemies(Data);
              OnlyOwnTroops = LogicAreaEffectObjectData::getOnlyOwnTroops(Data);
              v31 = LogicGameObject::getLogicGameObjectManager((GameMode *)v1);
              v32 = (#1237 *)LogicGameObject::getX((GameMode *)v1);
              v33 = (#1237 *)LogicGameObject::getY((GameMode *)v1);
              OriginSpell = (const TextField *)LogicGameObject::getOriginSpell((GameMode *)v1);
              LogicGameObjectManager::giveBuffToObjectsInArea(
                v31,
                v32,
                v33,
                Radius,
                (const GameMode *)v1,
                Buff,
                v28,
                0x10000,
                OnlyOwnTroops,
                v29,
                0,
                OriginSpell);
            }
          }
          --v12;
        }
        while ( v12 );
      }
      result = (GameMode *)LogicAreaEffectObjectData::getProjectile(Data);
      v36 = result;
      if ( v71 > v70 && result != 0 )
      {
        LogicVector2::LogicVector2((LogicVector2 *)v79, 0, 0);
        v38 = v79[0];
        v39 = v79[1];
        LogicVector2::destruct((LogicVector2 *)v79);
        ProjectileStartHeight = LogicAreaEffectObjectData::getProjectileStartHeight(Data);
        if ( (unsigned int)LogicAreaEffectObjectData::hitBiggestTargets(Data) )
        {
          result = (GameMode *)LogicAreaEffectObject::getNextBiggestTargetFromArea((CombatHUD *)v1);
          v41 = result;
          if ( !result )
            return result;
          GlobalID = LogicGameObject::getGlobalID(result);
          LogicArrayList<int>::add((__int64)(v1 + 34), &GlobalID);
          if ( ProjectileStartHeight == -1 )
          {
            v53 = (GameMode *)(*(__int64 (__fastcall **)(int *))(*(_QWORD *)v1 + 144LL))(v1);
            v42 = LogicGameObject::getX(v53);
            v54 = (GameMode *)(*(__int64 (__fastcall **)(int *))(*(_QWORD *)v1 + 144LL))(v1);
            v43 = LogicGameObject::getY(v54);
            ProjectileStartHeight = 1000;
          }
          else
          {
            v42 = LogicGameObject::getX(v41);
            v43 = LogicGameObject::getY(v41);
          }
          v55 = LogicGameObject::getX(v41);
          v56 = LogicGameObject::getY(v41);
        }
        else
        {
          v44 = (#1108 *)LogicGameObject::getData((GameMode *)v1);
          ProjectilesToCenter = LogicAreaEffectObjectData::getProjectilesToCenter(v44);
          if ( v71 >= 2 && ProjectilesToCenter != 1 )
          {
            v46 = LogicGameObject::getData((GameMode *)v1);
            v47 = LogicAreaEffectObjectData::getRadius(v46);
            LogicBattle = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)v1);
            v49 = LogicGameObject::getData((GameMode *)v1);
            v50 = LogicAreaEffectObjectData::getRadius(v49);
            v79[0] = (int)(LogicBattle::rand(LogicBattle, v50) + v47) / 2;
            if ( v71 == 2 )
            {
              v51 = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)v1);
              v52 = LogicBattle::rand(v51, 360);
              v1[32] = v52;
            }
            else
            {
              v57 = (#1108 *)LogicGameObject::getData((GameMode *)v1);
              v52 = v1[32] + 360 / (int)(LogicAreaEffectObjectData::getTotalHitCount(v57, v1[30]) - 1) * (v71 - 2);
            }
            LogicVector2::rotate((LogicVector2 *)v79, v52);
          }
          v55 = LogicGameObject::getX((GameMode *)v1) + v38;
          v56 = LogicGameObject::getY((GameMode *)v1) + v39;
          if ( ProjectileStartHeight == -1 )
          {
            v58 = (GameMode *)(*(__int64 (__fastcall **)(int *))(*(_QWORD *)v1 + 144LL))(v1);
            v42 = LogicGameObject::getX(v58);
            v59 = (GameMode *)(*(__int64 (__fastcall **)(int *))(*(_QWORD *)v1 + 144LL))(v1);
            v43 = LogicGameObject::getY(v59);
            v41 = 0;
            ProjectileStartHeight = 1000;
          }
          else
          {
            v42 = LogicGameObject::getX((GameMode *)v1) + v38;
            v41 = 0;
            v43 = LogicGameObject::getY((GameMode *)v1) + v39;
          }
        }
        GameObjectByClassID = (GameMode *)LogicGameObjectFactory::createGameObjectByClassID(
                                            v36,
                                            (const AreaEffectObject *)3);
        OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)v1);
        LogicGameObject::setOwnerIndex((__int64)GameObjectByClassID, OwnerIndex);
        v62 = v1;
        DamageEffect = (const LogicEffectData *)(*(__int64 (__fastcall **)(int *))(*(_QWORD *)v1 + 168LL))(v1);
        if ( !DamageEffect )
        {
          ProjectileData = LogicProjectile::getProjectileData(GameObjectByClassID);
          v65 = (LogicData *)LogicProjectileData::getDamageType(ProjectileData);
          DamageEffect = (const LogicEffectData *)LogicDamageTypeData::getDamageEffect(v65);
        }
        v66 = v62[30];
        v67 = (const LogicSpell *)LogicGameObject::getOriginSpell((GameMode *)v62);
        LogicProjectile::init(
          GameObjectByClassID,
          v42,
          v43,
          ProjectileStartHeight,
          v41,
          v55,
          v56,
          (LogicGameObject *)v62,
          DamageEffect,
          v66,
          v67);
        v68 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)v62);
        return (GameMode *)LogicGameObjectManager::addLogicGameObject(v68, GameObjectByClassID, 1);
      }
      return result;
    }

    GameMode *__fastcall LogicAreaEffectObject::getNextBiggestTargetFromArea(CombatHUD *this)
    {
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 v3; // x0
      __int64 v4; // x20
      #1108 *Data; // x21
      __int64 v6; // x26
      GameMode *v7; // x22
      GameMode *v8; // x23
      int v9; // w25
      int v10; // w24
      __int64 v11; // x27
      int GlobalID; // w0
      int v13; // w8
      char OnlyOwnTroops; // w0
      Font *CharacterData; // x0
      Font *v17; // x0
      #1237 *v18; // x24
      #1237 *v19; // x25
      int Radius; // w0
      LogicArenaData *v21; // x0
      int Hitpoints; // w24
      LogicArenaData *v23; // x0
    
      LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(this);
      LogicGameObjectManager::getGameObjects(LogicGameObjectManager);
      v4 = v3;
      Data = (#1108 *)LogicGameObject::getData(this);
      if ( *(int *)(v4 + 12) < 1 )
        return 0;
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = *(GameMode **)(*(_QWORD *)v4 + 8 * v6);
        if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v8 + 88LL))(v8) == 5 )
        {
          v9 = LogicAreaEffectObjectData::hitsAir(Data);
          v10 = LogicAreaEffectObjectData::hitsGround(Data);
          if ( *((int *)this + 37) < 1 )
            goto LABEL_11;
          v11 = 0;
          do
          {
            GlobalID = LogicGameObject::getGlobalID(v8);
            v13 = *(_DWORD *)(*((_QWORD *)this + 17) + 4 * v11++);
          }
          while ( GlobalID != v13 && v11 < *((int *)this + 37) );
          if ( GlobalID != v13 )
          {
    LABEL_11:
            OnlyOwnTroops = LogicAreaEffectObjectData::getOnlyOwnTroops(Data);
            if ( LogicGameObject::isValidTarget(this, v8, OnlyOwnTroops, 0) )
            {
              CharacterData = (Font *)LogicCharacter::getCharacterData(v8);
              if ( (v9 | ((int)LogicCharacterData::getFlyingHeight(CharacterData) < 1)) == 1 )
              {
                v17 = (Font *)LogicCharacter::getCharacterData(v8);
                if ( (v10 | ((unsigned int)LogicCharacterData::getFlyingHeight(v17) != 0)) == 1 )
                {
                  v18 = (#1237 *)LogicGameObject::getX(this);
                  v19 = (#1237 *)LogicGameObject::getY(this);
                  Radius = LogicAreaEffectObjectData::getRadius(Data);
                  if ( LogicGameObject::intersects(v8, v18, v19, Radius) )
                  {
                    if ( !v7
                      || (v21 = (LogicArenaData *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v7 + 136LL))(v7),
                          Hitpoints = LogicHitpointComponent::getHitpoints(v21),
                          v23 = (LogicArenaData *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v8 + 136LL))(v8),
                          Hitpoints < (int)LogicHitpointComponent::getHitpoints(v23)) )
                    {
                      v7 = v8;
                    }
                  }
                }
              }
            }
          }
        }
        ++v6;
      }
      while ( v6 < *(int *)(v4 + 12) );
      return v7;
    }

    bool __fastcall LogicAreaEffectObject::shouldDestruct(CombatHUD *this)
    {
      return *((_DWORD *)this + 31) < 1;
    }

    __int64 __fastcall LogicAreaEffectObject::getType(CombatHUD *this)
    {
      return 2;
    }

    __int64 __fastcall LogicAreaEffectObject::init(CombatHUD *this, int a2, const TextField *a3)
    {
      #1108 *Data; // x0
    
      *((_DWORD *)this + 30) = a2;
      Data = (#1108 *)LogicGameObject::getData(this);
      *((_DWORD *)this + 31) = LogicAreaEffectObjectData::getLifeDuration(Data, *((_DWORD *)this + 30));
      return LogicGameObject::setOriginSpell((__int64)this, (__int64)a3);
    }

    void __fastcall LogicAreaEffectObject::~LogicAreaEffectObject(CombatHUD *this)
    {
      __int64 v1; // x0
      _QWORD *v2; // x20
    
      *(_QWORD *)this = off_100465120;
      v2 = (_QWORD *)((char *)this + 136);
      v1 = *((_QWORD *)this + 17);
      if ( v1 )
        operator delete[](v1);
      *v2 = 0;
      v2[1] = 0;
    }

    void __fastcall LogicAreaEffectObject::~LogicAreaEffectObject(CombatHUD *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100465120;
      v2 = *((_QWORD *)this + 17);
      if ( v2 )
        operator delete[](v2);
      operator delete(this);
    }

}; // end class LogicAreaEffectObject
