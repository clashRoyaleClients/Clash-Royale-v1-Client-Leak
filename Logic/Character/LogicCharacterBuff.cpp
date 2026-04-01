class LogicCharacterBuff
{
public:

    __int64 __fastcall LogicCharacterBuff::LogicCharacterBuff(__int64 result, __int64 a2)
    {
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 64) = 0;
      *(_DWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 56) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 24) = a2;
      return result;
    }

    GameMode *__fastcall LogicCharacterBuff::onCharacterDeath(__int64 a1)
    {
      GameMode *result; // x0
      __int64 CharacterBuffComponent; // x0
    
      result = *(GameMode **)(a1 + 40);
      if ( result )
      {
        CharacterBuffComponent = LogicGameObject::getCharacterBuffComponent(result);
        result = (GameMode *)LogicCharacterBuffComponent::onBuffRemovedFromTarget(CharacterBuffComponent);
        *(_QWORD *)(a1 + 40) = 0;
      }
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::destruct(__int64 result)
    {
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 64) = 0;
      *(_DWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 56) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::encode(unsigned int *a1, #1226 *a2)
    {
      LogicSpellListener *LogicGameObjectManager; // x0
    
      ByteStreamHelper::writeDataReference((int)a2, *((AreaEffectObject **)a1 + 2));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *a1);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a1[8]);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a1[2]);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a1[1]);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a1[12]);
      LogicGameObjectManager = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager(*((GameMode ***)a1 + 3));
      LogicGameObjectManager::writeGameObjectReference(LogicGameObjectManager, a2, *((const GameMode **)a1 + 5));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a1[13]);
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a1[14]);
    }

    __int64 __fastcall LogicCharacterBuff::decode(__int64 a1, ByteStreamHelper *a2, int a3)
    {
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 result; // x0
    
      *(_QWORD *)(a1 + 16) = ByteStreamHelper::readDataReference(a2, (ByteStream *)9, a3);
      *(_DWORD *)a1 = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 4) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 48) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      LogicGameObjectManager = (LogicSpellListener *)LogicComponent::getLogicGameObjectManager(*(GameMode ***)(a1 + 24));
      *(_QWORD *)(a1 + 40) = LogicGameObjectManager::readGameObjectReference(LogicGameObjectManager, a2);
      *(_DWORD *)(a1 + 52) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 56) = result;
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::tick(__int64 a1)
    {
      __int64 result; // x0
      int v3; // w2
      int v4; // w8
      int v5; // w20
      __int64 v6; // x2
      __int64 v7; // x3
      int v8; // w4
      int v9; // w8
      __int64 ParentCharacter; // x0
      __int64 v11; // x21
      const LogicData *DamageType; // x22
      LogicData *v13; // x0
      const AskForTVContentMessage *DamageEffect; // x3
    
      result = LogicCharacterBuffData::getTimeToEmptyBankedDamage(*(BattleResultMessage **)(a1 + 16));
      if ( (int)result >= 1 )
      {
        v4 = *(_DWORD *)(a1 + 8) + 1;
        *(_DWORD *)(a1 + 8) = v4;
        if ( v4 < 20 )
          return result;
        *(_DWORD *)(a1 + 8) = 0;
        v5 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 -= v5;
        goto LABEL_6;
      }
      result = LogicMath::max(0, *(_DWORD *)a1 - 50, v3);
      *(_DWORD *)a1 = result;
      v9 = *(_DWORD *)(a1 + 8) + 1;
      *(_DWORD *)(a1 + 8) = v9;
      if ( v9 >= 20 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        result = LogicCharacterBuffData::getDamagePerSecond(*(InitState ***)(a1 + 16), *(_DWORD *)(a1 + 32), v6, v7, v8);
        v5 = result;
        if ( (int)result >= 1 )
        {
    LABEL_6:
          ParentCharacter = LogicComponent::getParentCharacter(*(Sprite **)(a1 + 24));
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)ParentCharacter + 136LL))(ParentCharacter);
          DamageType = (const LogicData *)LogicCharacterBuffData::getDamageType(*(BattleResultMessage **)(a1 + 16));
          v13 = (LogicData *)LogicCharacterBuffData::getDamageType(*(BattleResultMessage **)(a1 + 16));
          DamageEffect = (const AskForTVContentMessage *)LogicDamageTypeData::getDamageEffect(v13);
          return LogicHitpointComponent::applyDamage(
                   v11,
                   v5,
                   DamageType,
                   DamageEffect,
                   *(const TextField **)(a1 + 64),
                   0,
                   0);
        }
      }
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::shouldDestruct(__int64 a1)
    {
      int TimeToEmptyBankedDamage; // w0
      int v3; // w8
      __int64 v4; // x0
      GameMode *ParentCharacter; // x0
      __int64 Position; // x20
      __int64 v7; // x0
      int HitsToDestroy; // w0
    
      TimeToEmptyBankedDamage = LogicCharacterBuffData::getTimeToEmptyBankedDamage(*(BattleResultMessage **)(a1 + 16));
      v3 = *(_DWORD *)a1;
      if ( TimeToEmptyBankedDamage < 1 )
      {
        if ( !v3 )
          return 1;
      }
      else if ( v3 < 1 )
      {
        return 1;
      }
      v4 = *(_QWORD *)(a1 + 40);
      if ( !v4
        || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4) & 1) == 0
        && (*(_DWORD *)(a1 + 48) == -1
         || (ParentCharacter = (GameMode *)LogicComponent::getParentCharacter(*(Sprite **)(a1 + 24)),
             Position = LogicGameObject::getPosition(ParentCharacter),
             v7 = LogicGameObject::getPosition(*(GameMode **)(a1 + 40)),
             (int)LogicVector2::getDistance(Position, v7) <= *(_DWORD *)(a1 + 48))) )
      {
        if ( (unsigned int)LogicCharacterBuff::isDisableRadiusClear(a1) )
        {
          HitsToDestroy = LogicCharacterBuffData::getHitsToDestroy(*(BattleResultMessage **)(a1 + 16));
          if ( HitsToDestroy < 1 || *(_DWORD *)(a1 + 52) < HitsToDestroy )
            return 0;
        }
      }
      return 1;
    }

    bool __fastcall LogicCharacterBuff::isDisableRadiusClear(__int64 a1)
    {
      int DisableRadius; // w20
      GameMode *ParentCharacter; // x19
      const char *v4; // x2
      Screen *v5; // x21
      const #1240 *Position; // x0
      __int64 IntersectingObjects; // x20
      __int64 v8; // x23
      int v9; // w22
      _BOOL4 isOwnerTop; // w21
    
      DisableRadius = LogicCharacterBuffData::getDisableRadius(*(BattleResultMessage **)(a1 + 16));
      if ( DisableRadius < 1 )
        return 1;
      ParentCharacter = (GameMode *)LogicComponent::getParentCharacter(*(Sprite **)(a1 + 24));
      Debugger::doAssert((Debugger *)(ParentCharacter != 0), (bool)"", v4);
      v5 = *(Screen **)(LogicGameObject::getLogicGameObjectManager(ParentCharacter) + 64);
      Position = (const #1240 *)LogicGameObject::getPosition(ParentCharacter);
      IntersectingObjects = LogicSpacePartition::getIntersectingObjects(v5, Position, DisableRadius);
      if ( *(int *)(IntersectingObjects + 12) < 1 )
        return 1;
      v8 = 0;
      v9 = 0;
      do
      {
        isOwnerTop = LogicGameObject::isOwnerTop(*(GameMode **)(*(_QWORD *)IntersectingObjects + 8 * v8));
        v9 += isOwnerTop ^ LogicGameObject::isOwnerTop(ParentCharacter);
        ++v8;
      }
      while ( v8 < *(int *)(IntersectingObjects + 12) );
      return v9 == 0;
    }

    __int64 __fastcall LogicCharacterBuff::setValue(__int64 a1, int a2)
    {
      __int64 Name; // x0
      const char *v5; // x1
      _QWORD *v6; // x8
      const String *v7; // x1
      __int64 result; // x0
      int v9; // w2
      char v10; // [xsp+8h] [xbp-28h] BYREF
    
      if ( a2 >= 1 && (int)LogicCharacterBuffData::getDisabledCooldown(*(BattleResultMessage **)(a1 + 16)) >= 1 )
      {
        Name = LogicData::getName(*(AreaEffectObject **)(a1 + 16));
        v6 = (_QWORD *)(Name + 8);
        if ( *(_DWORD *)(Name + 4) + 1 > 8 )
          v6 = (_QWORD *)*v6;
        String::format((String *)"Buff %s has DisabledCooldown and value/timer >= 0", v5, v6);
        Debugger::warning((__siginfo *)&v10, v7);
        String::~String();
      }
      *(_DWORD *)a1 = a2;
      result = LogicCharacterBuffData::getTimeToEmptyBankedDamage(*(BattleResultMessage **)(a1 + 16));
      if ( (int)result >= 1 )
      {
        result = LogicMath::max((LogicMath *)1, 1000 * *(_DWORD *)a1 / (int)result, v9);
        *(_DWORD *)(a1 + 4) = result;
      }
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::stackBuff(int *a1, int a2, int a3)
    {
      __int64 result; // x0
      int v7; // w2
      int v8; // w8
      int v9; // w8
    
      result = LogicCharacterBuffData::getTimeToEmptyBankedDamage(*((BattleResultMessage **)a1 + 2));
      v8 = *a1;
      if ( (int)result < 1 )
      {
        if ( v8 < a2 && v8 != -1 )
          *a1 = a2;
      }
      else
      {
        v9 = v8 + a2;
        *a1 = v9;
        result = LogicMath::max((LogicMath *)1, 1000 * v9 / (int)result, v7);
        a1[1] = result;
      }
      if ( a1[8] < a3 )
        a1[8] = a3;
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::setData(__int64 result, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
    {
      *(_QWORD *)(result + 16) = a2;
      *(_DWORD *)(result + 32) = a3;
      *(_DWORD *)(result + 48) = a4;
      *(_QWORD *)(result + 40) = a5;
      *(_QWORD *)(result + 64) = a6;
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::onDamageTaken(__int64 result)
    {
      __int64 v1; // x19
    
      v1 = result;
      if ( *(int *)(result + 56) >= 1 )
      {
        result = LogicCharacterBuffData::getDisabledCooldown(*(BattleResultMessage **)(result + 16));
        *(_DWORD *)(v1 + 56) = result;
      }
      ++*(_DWORD *)(v1 + 52);
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::startCooldown(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCharacterBuffData::getDisabledCooldown(*(BattleResultMessage **)(a1 + 16));
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = result;
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::tickCooldown(__int64 a1, __int64 a2, int a3)
    {
      __int64 result; // x0
    
      result = LogicMath::max(0, *(_DWORD *)(a1 + 56) - 50, a3);
      *(_DWORD *)(a1 + 56) = result;
      return result;
    }

    __int64 __fastcall LogicCharacterBuff::getOriginSpell(__int64 a1)
    {
      return *(_QWORD *)(a1 + 64);
    }

}; // end class LogicCharacterBuff
