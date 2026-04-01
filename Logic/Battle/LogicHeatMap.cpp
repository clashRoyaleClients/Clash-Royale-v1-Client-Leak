class LogicHeatMap
{
public:

    __int64 *__fastcall LogicHeatMap::LogicHeatMap(__int64 *a1, int a2, int a3)
    {
      __int64 v5; // x8
      __int64 v6; // x9
      int v7; // w8
      int v8; // w22
      int v9; // w8
      int v10; // w21
      _QWORD *v11; // x0
      _QWORD *v12; // x0
      int v13; // w24
      int v14; // w26
      int v15; // w20
      int v16; // w21
      __int64 v17; // x22
      LogicHeatTile *v18; // x23
      __int64 v19; // x22
      LogicHeatTile *v20; // x23
      LogicHeatTile *v22; // [xsp+0h] [xbp-50h] BYREF
      LogicHeatTile *v23; // [xsp+8h] [xbp-48h] BYREF
    
      v5 = 0;
      *a1 = 0;
      a1[1] = 0;
      do
      {
        v6 = (__int64)a1 + v5;
        *(_DWORD *)(v6 + 16) = 0;
        *(_DWORD *)(v6 + 24) = 0;
        v5 += 4;
      }
      while ( v5 != 8 );
      if ( a2 >= 0 )
        v7 = a2;
      else
        v7 = a2 + 1;
      v8 = v7 >> 1;
      if ( a3 >= 0 )
        v9 = a3;
      else
        v9 = a3 + 1;
      v10 = v9 >> 1;
      *((_DWORD *)a1 + 8) = v8;
      *((_DWORD *)a1 + 9) = v9 >> 1;
      v11 = (_QWORD *)operator new(16);
      *v11 = 0;
      v11[1] = 0;
      *a1 = (__int64)v11;
      v12 = (_QWORD *)operator new(16);
      *v12 = 0;
      v12[1] = 0;
      a1[1] = (__int64)v12;
      if ( a3 >= 2 )
      {
        v13 = 0;
        do
        {
          if ( v8 >= 1 )
          {
            v14 = 0;
            v15 = 1000 * v13 + 500;
            v16 = 500;
            do
            {
              v17 = *a1;
              v18 = (LogicHeatTile *)operator new(40);
              LogicHeatTile::LogicHeatTile(v18, v16, v15);
              v23 = v18;
              LogicArrayList<LogicHeatTile *>::add(v17, &v23);
              v19 = a1[1];
              v20 = (LogicHeatTile *)operator new(40);
              LogicHeatTile::LogicHeatTile(v20, v16, v15);
              v22 = v20;
              LogicArrayList<LogicHeatTile *>::add(v19, &v22);
              ++v14;
              v8 = *((_DWORD *)a1 + 8);
              v16 += 1000;
            }
            while ( v14 < v8 );
            v10 = *((_DWORD *)a1 + 9);
          }
          ++v13;
        }
        while ( v13 < v10 );
      }
      return a1;
    }

    // attributes: thunk
    void __fastcall LogicHeatMap::LogicHeatMap(LogicHeatMap *this, int a2, int a3)
    {
      __ZN12LogicHeatMapC2Eii((__int64 *)this, a2, a3);
    }

    void __fastcall LogicHeatMap::destruct(_QWORD *a1)
    {
      _QWORD *v2; // x20
      __int64 v3; // x22
      void *v4; // x21
      int *v5; // x20
      __int64 v6; // x22
      void *v7; // x21
      __int64 v8; // x8
      char *v9; // x9
    
      v2 = (_QWORD *)*a1;
      if ( *(int *)(*a1 + 12LL) >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = *(void **)(*v2 + 8 * v3);
          if ( v4 )
          {
            LogicHeatTile::destruct(*(SendBattleEventMessage **)(*v2 + 8 * v3));
            operator delete(v4);
            v2 = (_QWORD *)*a1;
          }
          ++v3;
        }
        while ( v3 < *((int *)v2 + 3) );
      }
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *a1 = 0;
      v5 = (int *)a1[1];
      if ( v5[3] >= 1 )
      {
        v6 = 0;
        do
        {
          v7 = *(void **)(*(_QWORD *)v5 + 8 * v6);
          if ( v7 )
          {
            LogicHeatTile::destruct(*(SendBattleEventMessage **)(*(_QWORD *)v5 + 8 * v6));
            operator delete(v7);
            v5 = (int *)a1[1];
          }
          ++v6;
        }
        while ( v6 < v5[3] );
      }
      if ( v5 )
      {
        if ( *(_QWORD *)v5 )
          operator delete[](*(_QWORD *)v5);
        operator delete(v5);
      }
      v8 = 0;
      *a1 = 0;
      a1[1] = 0;
      do
      {
        v9 = (char *)a1 + v8;
        *((_DWORD *)v9 + 4) = 0;
        *((_DWORD *)v9 + 6) = 0;
        v8 += 4;
      }
      while ( v8 != 8 );
      a1[4] = 0;
    }

    __int64 __fastcall LogicHeatMap::build(int *a1, __int64 a2, const char *a3)
    {
      __int64 v5; // x20
      _QWORD *v6; // x9
      __int64 v7; // x8
      char *v8; // x9
      const char *v9; // x2
      __int64 v10; // x0
      __int64 v11; // x20
      __int64 i; // x22
      __int64 result; // x0
      __int64 v14; // x26
      int *v15; // x25
      GameMode *v16; // x21
      int *Position; // x0
      int v18; // w23
      int v19; // w8
      int v20; // w9
      int v21; // w10
      int v22; // w8
      _BOOL4 isOwnerTop; // w22
      _BOOL8 v24; // x24
      Font *CharacterData; // x0
      Sprite *CombatComponent; // x0
      __int64 v27; // x28
      LogicArenaData *v28; // x22
      AllianceListMessage *v29; // x21
      int Hitpoints; // w23
      int v31; // w21
      int v32; // w8
      int j; // w27
      int v34; // w8
      __int64 v35; // x28
      __int64 v36; // x20
      int v37; // w8
      int v38; // w9
      int v39; // w10
      int v40; // w8
      _QWORD v41[2]; // [xsp+8h] [xbp-68h]
    
      Debugger::doAssert(
        (Debugger *)(*(_DWORD *)(*((_QWORD *)a1 + 1) + 12LL) == *(_DWORD *)(*(_QWORD *)a1 + 12LL)),
        (bool)"",
        a3);
      v5 = 0;
      v6 = *(_QWORD **)a1;
      if ( *(int *)(*(_QWORD *)a1 + 12LL) < 1 )
      {
        v7 = 0;
      }
      else
      {
        do
        {
          LogicHeatTile::clear(*(_QWORD *)(*v6 + 8 * v5));
          LogicHeatTile::clear(*(_QWORD *)(**((_QWORD **)a1 + 1) + 8 * v5));
          v7 = 0;
          ++v5;
          v6 = *(_QWORD **)a1;
        }
        while ( v5 < *(int *)(*(_QWORD *)a1 + 12LL) );
      }
      do
      {
        v8 = (char *)&a1[v7];
        *((_DWORD *)v8 + 4) = 0;
        *((_DWORD *)v8 + 6) = 0;
        ++v7;
      }
      while ( v7 != 2 );
      LogicGameObjectManager::getGameObjects(*(LogicSpellListener **)(a2 + 64));
      v11 = v10;
      for ( i = 0; i != 2; ++i )
      {
        result = LogicBattle::getLeaderByIndex(*(UnbindFacebookAccountMessage **)(a2 + 168), i, v9);
        v41[i] = result;
      }
      if ( *(int *)(v11 + 12) <= 0 )
      {
        v15 = a1 + 9;
      }
      else
      {
        v14 = 0;
        v15 = a1 + 9;
        do
        {
          v16 = *(GameMode **)(*(_QWORD *)v11 + 8 * v14);
          result = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v16 + 88LL))(v16);
          if ( (_DWORD)result == 5 )
          {
            Position = (int *)LogicGameObject::getPosition(v16);
            v18 = -1;
            if ( *Position >= -999 )
            {
              v19 = Position[1];
              if ( v19 >= -999 )
              {
                v20 = *Position / 1000;
                v21 = a1[8];
                if ( v20 >= v21 || (v22 = v19 / 1000, v22 >= *v15) )
                  v18 = -1;
                else
                  v18 = v20 + v21 * v22;
              }
            }
            isOwnerTop = LogicGameObject::isOwnerTop(v16);
            result = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v16 + 152LL))(v16);
            if ( (_DWORD)result )
            {
              v24 = !isOwnerTop;
              CharacterData = (Font *)LogicCharacter::getCharacterData(v16);
              if ( (unsigned int)LogicCharacterData::isPrincessTower(CharacterData) )
                ++a1[v24 + 4];
              result = LogicGameObject::getMovementComponent(v16);
              if ( !result )
              {
                result = LogicGameObject::getCombatComponent(v16);
                if ( result )
                {
                  CombatComponent = (Sprite *)LogicGameObject::getCombatComponent(v16);
                  result = LogicCombatComponent::isInRangeToHit(CombatComponent, (const GameMode *)v41[v24]);
                  if ( (_DWORD)result )
                    ++a1[v24 + 6];
                }
              }
              if ( (v18 & 0x80000000) == 0 )
              {
                v27 = *(_QWORD *)(**((_QWORD **)a1 + 1) + 8LL * v18);
                v28 = (LogicArenaData *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v16 + 136LL))(v16);
                result = LogicGameObject::getCombatComponent(v16);
                v29 = (AllianceListMessage *)result;
                ++*(_DWORD *)(v27 + 4 * v24);
                if ( v28 )
                {
                  Hitpoints = LogicHitpointComponent::getHitpoints(v28);
                  result = LogicHitpointComponent::getMaxHitpoints(v28);
                  if ( Hitpoints != (_DWORD)result )
                    ++*(_DWORD *)(v27 + 4 * v24 + 16);
                }
                if ( v29 )
                {
                  result = LogicCombatComponent::getHitTimer(v29);
                  if ( (int)result >= 1 )
                    ++*(_DWORD *)(v27 + 4 * v24 + 24);
                }
              }
            }
          }
          ++v14;
        }
        while ( v14 < *(int *)(v11 + 12) );
      }
      if ( *v15 >= 1 )
      {
        v31 = 0;
        v32 = a1[8];
        do
        {
          if ( v32 >= 1 )
          {
            for ( j = 0; j < v32; ++j )
            {
              if ( (j | v31) < 0 )
              {
                v34 = -1;
              }
              else
              {
                v34 = j + v32 * v31;
                if ( *v15 <= v31 )
                  v34 = -1;
              }
              v35 = 0;
              v36 = *(_QWORD *)(**(_QWORD **)a1 + 8LL * v34);
              do
              {
                v37 = *(_DWORD *)((char *)&LogicHeatMap::build(LogicGameMode const*)::dx + v35) + j;
                v38 = *(_DWORD *)((char *)&LogicHeatMap::build(LogicGameMode const*)::dy + v35) + v31;
                if ( ((v38 | v37) & 0x80000000) == 0 )
                {
                  v39 = a1[8];
                  if ( v39 > v37 && *v15 > v38 )
                  {
                    v40 = v37 + v39 * v38;
                    if ( (v40 & 0x80000000) == 0 )
                      result = LogicHeatTile::addTile(
                                 v36,
                                 *(const SendBattleEventMessage **)(**((_QWORD **)a1 + 1) + 8LL * v40),
                                 *(_DWORD *)((char *)&LogicHeatMap::build(LogicGameMode const*)::w + v35));
                  }
                }
                v35 += 4;
              }
              while ( v35 != 100 );
              v32 = a1[8];
            }
          }
          ++v31;
        }
        while ( v31 < *v15 );
      }
      return result;
    }

    __int64 __fastcall LogicHeatMap::getHeatIdx(__int64 a1, int *a2)
    {
      __int64 v2; // x8
      int v3; // w10
      int v4; // w8
      int v5; // w11
    
      v2 = 0xFFFFFFFFLL;
      if ( *a2 >= -999 )
      {
        v3 = a2[1];
        if ( v3 >= -999 )
        {
          v4 = *a2 / 1000;
          v5 = *(_DWORD *)(a1 + 32);
          if ( v4 >= v5 || v3 / 1000 >= *(_DWORD *)(a1 + 36) )
            return 0xFFFFFFFFLL;
          else
            return (unsigned int)(v4 + v5 * (v3 / 1000));
        }
      }
      return v2;
    }

    __int64 __fastcall LogicHeatMap::getBiggestGroupIdx(__int64 this, __int64 a2, int a3)
    {
      __int64 v3; // x8
      __int64 v4; // x9
      int v5; // w11
      __int64 v6; // x12
    
      v3 = *(int *)(*(_QWORD *)this + 12LL);
      if ( (int)v3 < 1 )
        return 0xFFFFFFFFLL;
      v4 = 0;
      v5 = a3 - 1;
      v6 = **(_QWORD **)this;
      LODWORD(this) = -1;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 8 * v4) + 4 * (a2 ^ 1)) <= v5 )
        {
          this = (unsigned int)this;
        }
        else
        {
          v5 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v4) + 4 * (a2 ^ 1));
          this = (unsigned int)v4;
        }
        ++v4;
      }
      while ( v4 < v3 );
      return this;
    }

    __int64 __fastcall LogicHeatMap::getFrontGroupIdx(_DWORD *a1, __int64 a2, const char *a3)
    {
      int v3; // w20
      int v6; // w8
      int v7; // w9
      int v8; // w10
      int v9; // w9
      int v10; // w11
      bool v11; // cc
      int v12; // w10
      int v13; // w23
      int v14; // w8
      int v15; // w10
      bool v16; // cc
      int v17; // w24
      bool v18; // zf
      int v19; // w8
      const char *v20; // x2
      const char *v21; // x2
      int v22; // w9
      __int64 *v23; // x10
      __int64 result; // x0
      __int64 v25; // t1
      int v26; // w11
    
      v3 = (int)a3;
      v6 = a1[9];
      if ( v6 >= 0 )
        v7 = a1[9];
      else
        v7 = v6 + 1;
      v8 = v7 >> 1;
      if ( (_DWORD)a2 )
        v9 = 0;
      else
        v9 = v7 >> 1;
      if ( !(_DWORD)a2 )
        v8 = 0;
      if ( v8 < 0 )
      {
        v13 = -1;
      }
      else
      {
        v10 = a1[8];
        v11 = v6 <= v8 || v10 < 1;
        v12 = v10 * v8;
        if ( v11 )
          v13 = -1;
        else
          v13 = v12;
      }
      v14 = v6 - v9;
      if ( v14 < 0
        || ((v15 = a1[8], v9 >= 1) ? (v16 = v15 < 1) : (v16 = 1),
            (v17 = v15 * v14, !v16) ? (v18 = v17 == -1) : (v18 = 1),
            v18) )
      {
        v19 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
        v17 = v19;
      }
      else
      {
        v19 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
      }
      Debugger::doAssert((Debugger *)(v13 <= v19), (bool)"", a3);
      Debugger::doAssert((Debugger *)(v17 <= *(_DWORD *)(*(_QWORD *)a1 + 12LL)), (bool)"", v20);
      Debugger::doAssert((Debugger *)(v13 >= 0), (bool)"", v21);
      if ( v13 >= v17 )
        return 0xFFFFFFFFLL;
      v22 = v3 - 1;
      v23 = (__int64 *)(**(_QWORD **)a1 + 8LL * v13);
      LODWORD(result) = -1;
      do
      {
        v25 = *v23++;
        v26 = *(_DWORD *)(v25 + 4 * (a2 ^ 1));
        if ( v26 <= v22 )
        {
          result = (unsigned int)result;
        }
        else
        {
          v22 = v26;
          result = (unsigned int)v13;
        }
        ++v13;
      }
      while ( v17 != v13 );
      return result;
    }

    __int64 __fastcall LogicHeatMap::getDefenceCnt(SettingsPopup *this, __int64 a2)
    {
      return *((unsigned int *)this + (a2 ^ 1) + 6);
    }

}; // end class LogicHeatMap
