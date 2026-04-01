class LogicCharacterBuffComponent
{
public:

    void __fastcall LogicCharacterBuffComponent::LogicCharacterBuffComponent(LogicCharacterBuffComponent *this, #1060 *a2)
    {
      int v3; // w1
      __int64 Table; // x0
      int v5; // w0
      __int64 v6; // x0
      int v7; // w1
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x22
      int v11; // w1
      __int64 v12; // x0
    
      LogicComponent::LogicComponent(this, a2);
      *(_QWORD *)this = off_10045E550;
      *((_DWORD *)this + 23) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_DWORD *)this + 14) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 10) = 100;
      *((_DWORD *)this + 22) = 0;
      *((_QWORD *)this + 12) = 100;
      Table = LogicDataTables::getTable((LogicDataTables *)8, v3);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      if ( is_mul_ok(v5, 4u) )
        v6 = 4LL * v5;
      else
        v6 = -1;
      *((_QWORD *)this + 8) = operator new[](v6);
      v8 = LogicDataTables::getTable((LogicDataTables *)8, v7);
      LODWORD(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      if ( (int)v9 < 0LL )
        v9 = -1;
      else
        v9 = (int)v9;
      v10 = 0;
      for ( *((_QWORD *)this + 9) = operator new[](v9); ; *(_BYTE *)(*((_QWORD *)this + 9) + v10++) = 0 )
      {
        v12 = LogicDataTables::getTable((LogicDataTables *)8, v11);
        if ( v10 >= (*(int (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) )
          break;
        *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v10) = 0;
      }
    }

    // attributes: thunk
    void __fastcall LogicCharacterBuffComponent::LogicCharacterBuffComponent(LogicCharacterBuffComponent *this, #1060 *a2)
    {
      __ZN27LogicCharacterBuffComponentC2EP14LogicCharacter(this, a2);
    }

    __int64 __fastcall LogicCharacterBuffComponent::destruct(FriendListMessage *this)
    {
      int v2; // w8
      __int64 i; // x21
      __int64 v4; // x9
      void *v5; // x20
      int v6; // w8
      __int64 j; // x21
      __int64 v8; // x9
      void *v9; // x20
      __int64 v10; // x0
      __int64 result; // x0
    
      LogicComponent::destruct(this);
      v2 = *((_DWORD *)this + 7);
      if ( v2 >= 1 )
      {
        for ( i = 0; i < v2; ++i )
        {
          v4 = *((_QWORD *)this + 2);
          v5 = *(void **)(v4 + 8 * i);
          if ( v5 )
          {
            LogicCharacterBuff::destruct(*(LogicCharacterBuff **)(v4 + 8 * i));
            operator delete(v5);
            v2 = *((_DWORD *)this + 7);
          }
        }
      }
      v6 = *((_DWORD *)this + 11);
      if ( v6 >= 1 )
      {
        for ( j = 0; j < v6; ++j )
        {
          v8 = *((_QWORD *)this + 4);
          v9 = *(void **)(v8 + 8 * j);
          if ( v9 )
          {
            LogicCharacterBuff::destruct(*(LogicCharacterBuff **)(v8 + 8 * j));
            operator delete(v9);
            v6 = *((_DWORD *)this + 11);
          }
        }
      }
      v10 = *((_QWORD *)this + 8);
      if ( v10 )
        operator delete[](v10);
      *((_QWORD *)this + 8) = 0;
      result = *((_QWORD *)this + 9);
      if ( result )
        result = operator delete[](result);
      *((_DWORD *)this + 23) = 0;
      *((_DWORD *)this + 7) = 0;
      *((_DWORD *)this + 12) = 0;
      *((_DWORD *)this + 13) = 0;
      *((_DWORD *)this + 14) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 10) = 100;
      *((_DWORD *)this + 22) = 0;
      *((_QWORD *)this + 12) = 100;
      return result;
    }

    int *__fastcall LogicCharacterBuffComponent::tick(FriendListMessage *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x8
      char *v4; // x21
      __int64 v5; // x22
      LogicCharacterBuff *v6; // x23
      __int64 v7; // x8
      __int64 v8; // x8
      __int64 v9; // x22
      BattleResultMessage **v10; // x23
      __int64 v11; // x8
      #1060 *ParentCharacter; // x0
      __int64 CharacterData; // x20
      #1060 *v14; // x0
      __int64 v15; // x0
      LogicMath *AreaBuffTime; // x21
      int *result; // x0
      int v18; // w2
      int v19; // w0
      int v20; // w21
      bool v21; // w22
      #1060 *v22; // x0
      #1025 *v23; // x0
      int v24; // w23
      int v25; // w8
      GameMode *v26; // x0
      #868 *v27; // x22
      GameMode *Parent; // x0
      const #1240 *Position; // x0
      __int64 v30; // x22
      __int64 v31; // x28
      int v32; // w23
      GameMode *v33; // x24
      int v34; // w25
      GameMode *v35; // x0
      int isOwnerTop; // w25
      GameMode *v37; // x0
      FriendListMessage *CharacterBuffComponent; // x24
      GameMode *v39; // x25
      const BattleResultMessage *AreaBuff; // x26
      #1060 *v41; // x0
      int LevelIndex; // w27
      GameMode *v43; // x0
      const #795 *OriginSpell; // x0
      BattleResultMessage **v45; // [xsp+0h] [xbp-60h] BYREF
      LogicCharacterBuff *v46; // [xsp+8h] [xbp-58h] BYREF
    
      v2 = (_QWORD *)((char *)this + 32);
      v3 = *((int *)this + 11);
      v4 = (char *)this + 16;
      if ( (int)v3 > 0 )
      {
        v5 = v3 - 1;
        do
        {
          v6 = *(LogicCharacterBuff **)(*v2 + 8 * v5);
          v46 = v6;
          LogicCharacterBuff::tickCooldown(v6);
          if ( !*((_DWORD *)v6 + 14) )
          {
            LogicArrayList<LogicCharacterBuff *>::remove(v2, v5);
            LogicArrayList<LogicCharacterBuff *>::add(v4, &v46);
            LogicCharacterBuffComponent::onCharacterBuffAdded(this, v6);
          }
          v7 = v5-- + 1;
        }
        while ( v7 > 1 );
      }
      v8 = *((int *)this + 7);
      if ( (int)v8 >= 1 )
      {
        v9 = v8 - 1;
        do
        {
          v10 = *(BattleResultMessage ***)(*((_QWORD *)this + 2) + 8 * v9);
          v45 = v10;
          LogicCharacterBuff::tick((LogicCharacterBuff *)v10);
          if ( (LogicCharacterBuff::shouldDestruct(v10) & 1) != 0 )
          {
            LogicArrayList<LogicCharacterBuff *>::remove(v4, v9);
            LogicCharacterBuffComponent::onCharacterBuffRemoved(this, (#952 *)v10);
            if ( (int)LogicCharacterBuffData::getDisabledCooldown(v10[2]) < 1 )
            {
              LogicCharacterBuff::destruct((LogicCharacterBuff *)v10);
              operator delete(v10);
              v45 = 0;
            }
            else
            {
              LogicCharacterBuff::startCooldown((LogicCharacterBuff *)v10);
              LogicArrayList<LogicCharacterBuff *>::add(v2, &v45);
            }
          }
          v11 = v9-- + 1;
        }
        while ( v11 > 1 );
      }
      ParentCharacter = (#1060 *)LogicComponent::getParentCharacter(this);
      CharacterData = LogicCharacter::getCharacterData(ParentCharacter);
      v14 = (#1060 *)LogicComponent::getParentCharacter(this);
      v15 = LogicCharacter::getCharacterData(v14);
      AreaBuffTime = (LogicMath *)LogicCharacterData::getAreaBuffTime(v15);
      result = (int *)LogicCharacterData::getAreaBuff(CharacterData);
      if ( result )
      {
        if ( (int)AreaBuffTime < 1 )
        {
          v21 = 0;
          v20 = -1;
        }
        else
        {
          v19 = LogicMath::min(AreaBuffTime, *((_DWORD *)this + 23) + 50, v18);
          *((_DWORD *)this + 23) = v19;
          v20 = (_DWORD)AreaBuffTime - v19;
          v21 = v20 < 1;
        }
        v22 = (#1060 *)LogicComponent::getParentCharacter(this);
        v23 = (#1025 *)LogicCharacter::getCharacterData(v22);
        result = (int *)LogicCharacterData::getAreaBuffRadius(v23);
        v24 = (int)result;
        v25 = *((_DWORD *)this + 22);
        if ( !v21 )
        {
          v25 += 50;
          *((_DWORD *)this + 22) = v25;
        }
        if ( v25 >= 101 )
        {
          *((_DWORD *)this + 22) = 0;
          v26 = (GameMode *)LogicComponent::getParentCharacter(this);
          v27 = *(#868 **)(LogicGameObject::getLogicGameObjectManager(v26) + 64);
          Parent = (GameMode *)LogicComponent::getParent(this);
          Position = (const #1240 *)LogicGameObject::getPosition(Parent);
          result = (int *)LogicSpacePartition::getIntersectingObjects(v27, Position, v24);
          v30 = (__int64)result;
          if ( result[3] >= 1 )
          {
            v31 = 0;
            v32 = 11 * v24 / 10;
            do
            {
              v33 = *(GameMode **)(*(_QWORD *)v30 + 8 * v31);
              result = (int *)LogicComponent::getParentCharacter(this);
              if ( v33 != (GameMode *)result )
              {
                result = (int *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v33 + 88LL))(v33);
                if ( (_DWORD)result == 5 )
                {
                  if ( (LogicCharacterData::getAreaBuffOwnTroops(CharacterData) & 1) != 0
                    || (v34 = LogicGameObject::isOwnerTop(v33),
                        v35 = (GameMode *)LogicComponent::getParent(this),
                        result = (int *)LogicGameObject::isOwnerTop(v35),
                        (v34 ^ (unsigned int)result) == 1) )
                  {
                    if ( (LogicCharacterData::getAreaBuffEnemies(CharacterData) & 1) != 0
                      || (isOwnerTop = LogicGameObject::isOwnerTop(v33),
                          v37 = (GameMode *)LogicComponent::getParent(this),
                          result = (int *)LogicGameObject::isOwnerTop(v37),
                          isOwnerTop == (_DWORD)result) )
                    {
                      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v33);
                      v39 = (GameMode *)LogicComponent::getParent(this);
                      AreaBuff = (const BattleResultMessage *)LogicCharacterData::getAreaBuff(CharacterData);
                      v41 = (#1060 *)LogicComponent::getParentCharacter(this);
                      LevelIndex = LogicCharacter::getLevelIndex(v41);
                      v43 = (GameMode *)LogicComponent::getParent(this);
                      OriginSpell = (const #795 *)LogicGameObject::getOriginSpell(v43);
                      result = (int *)LogicCharacterBuffComponent::addCharacterBuff(
                                        CharacterBuffComponent,
                                        v39,
                                        AreaBuff,
                                        v20,
                                        LevelIndex,
                                        v32,
                                        OriginSpell);
                    }
                  }
                }
              }
              ++v31;
            }
            while ( v31 < *(int *)(v30 + 12) );
          }
        }
      }
      return result;
    }

    GameMode *__fastcall LogicCharacterBuffComponent::onCharacterBuffAdded(FriendListMessage *this, #952 *a2)
    {
      BattleResultMessage *v4; // x21
      GameMode *Parent; // x0
      #795 *OriginSpell; // x21
      const #795 *v7; // x8
      GameMode *result; // x0
    
      v4 = (BattleResultMessage *)*((_QWORD *)a2 + 2);
      if ( (unsigned int)LogicCharacterBuffData::getChangeControl(v4) )
        ++*((_DWORD *)this + 12);
      if ( (unsigned int)LogicCharacterBuffData::getInvisible(v4) )
        ++*((_DWORD *)this + 13);
      if ( (unsigned int)LogicCharacterBuffData::getPanic(v4) )
        ++*((_DWORD *)this + 14);
      if ( LogicServerEventCollector::ENABLED )
      {
        Parent = (GameMode *)LogicComponent::getParent(this);
        OriginSpell = (#795 *)LogicGameObject::getOriginSpell(Parent);
        if ( OriginSpell )
        {
          v7 = (const #795 *)LogicCharacterBuff::getOriginSpell(a2);
          if ( v7 )
            LogicSpell::addServerEventModifier(OriginSpell, v7);
        }
      }
      LogicCharacterBuffComponent::onCharacterBuffsChanged(this);
      result = (GameMode *)*((_QWORD *)a2 + 5);
      if ( result )
      {
        result = (GameMode *)LogicGameObject::getCharacterBuffComponent(result);
        ++*((_DWORD *)result + 25);
      }
      return result;
    }

    GameMode *__fastcall LogicCharacterBuffComponent::onCharacterBuffRemoved(FriendListMessage *this, #952 *a2)
    {
      BattleResultMessage *v4; // x21
      GameMode *result; // x0
    
      v4 = (BattleResultMessage *)*((_QWORD *)a2 + 2);
      if ( (unsigned int)LogicCharacterBuffData::getChangeControl(v4) )
        --*((_DWORD *)this + 12);
      if ( (unsigned int)LogicCharacterBuffData::getInvisible(v4) )
        --*((_DWORD *)this + 13);
      if ( (unsigned int)LogicCharacterBuffData::getPanic(v4) )
        --*((_DWORD *)this + 14);
      LogicCharacterBuffComponent::onCharacterBuffsChanged(this);
      result = (GameMode *)*((_QWORD *)a2 + 5);
      if ( result )
      {
        result = (GameMode *)LogicGameObject::getCharacterBuffComponent(result);
        --*((_DWORD *)result + 25);
        *((_QWORD *)a2 + 5) = 0;
      }
      return result;
    }

    void __fastcall LogicCharacterBuffComponent::addCharacterBuff(
            FriendListMessage *this,
            GameMode *a2,
            const BattleResultMessage *a3,
            int a4,
            __int64 a5,
            unsigned int a6,
            const #795 *a7)
    {
      _QWORD *v12; // x20
      __int64 v13; // x8
      char v14; // w28
      __int64 v15; // x23
      char v16; // w22
      BattleResultMessage **v17; // x27
      char v18; // w0
      __int64 v19; // x8
      int v20; // w8
      __int64 v21; // x27
      __int64 v22; // x23
      __int64 v24; // x28
      __int64 v25; // x8
      __int64 v26; // x9
      LogicCharacterBuff *v27; // x27
      LogicCharacterBuff *v30; // [xsp+68h] [xbp-58h] BYREF
    
      v12 = (_QWORD *)((char *)this + 16);
      v13 = *((int *)this + 7);
      if ( (int)v13 < 1 )
      {
        v16 = 1;
      }
      else
      {
        v14 = 0;
        v15 = v13 - 1;
        v16 = 1;
        do
        {
          v17 = *(BattleResultMessage ***)(*v12 + 8 * v15);
          if ( (unsigned int)LogicData::equals(v17[2], a3) )
          {
            LogicCharacterBuff::stackBuff((LogicCharacterBuff *)v17, a4, a5);
            v16 = 0;
          }
          v18 = LogicCharacterBuffData::immuneToBuff(v17[2], a3);
          v14 |= v18;
          v16 &= v18 ^ 1;
          v19 = v15-- + 1;
        }
        while ( v19 > 1 );
        if ( (v14 & 1) != 0 )
          goto LABEL_16;
      }
      v20 = *((_DWORD *)this + 7);
    LABEL_11:
      v21 = v20;
      v22 = 8LL * (v20 - 1);
      while ( v21-- >= 1 )
      {
        v24 = *(_QWORD *)(*v12 + v22);
        v22 -= 8;
        if ( (unsigned int)LogicCharacterBuffData::negatesBuff(*(BattleResultMessage **)(v24 + 16), a3) )
        {
          LogicArrayList<LogicCharacterBuff *>::remove(v12, v21);
          LogicCharacterBuffComponent::onCharacterBuffRemoved(this, (#952 *)v24);
          if ( v24 )
          {
            LogicCharacterBuff::destruct((LogicCharacterBuff *)v24);
            operator delete((void *)v24);
          }
          v16 = 0;
          v20 = v21;
          goto LABEL_11;
        }
      }
    LABEL_16:
      if ( a2 && (v25 = *((int *)this + 7), (int)v25 >= 1) )
      {
        v26 = 0;
        while ( *(GameMode **)(*(_QWORD *)(*v12 + 8 * v26) + 40LL) != a2 )
        {
          if ( ++v26 >= v25 )
            goto LABEL_21;
        }
      }
      else
      {
    LABEL_21:
        if ( (v16 & 1) != 0 )
        {
          v27 = (LogicCharacterBuff *)operator new(72);
          LogicCharacterBuff::LogicCharacterBuff(v27, this);
          v30 = v27;
          LogicCharacterBuff::setData(v27, a3, a5, a6, a2, a7);
          LogicCharacterBuff::setValue(v27, a4);
          LogicArrayList<LogicCharacterBuff *>::add(v12, &v30);
          LogicCharacterBuffComponent::onCharacterBuffAdded(this, v27);
        }
      }
    }

    __int64 __fastcall LogicCharacterBuffComponent::encode(FriendListMessage *this, #1226 *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x21
      int v6; // w1
      __int64 Table; // x0
      int v8; // w0
      int v9; // w21
      __int64 v10; // x22
      int v11; // w23
      __int64 v12; // x22
    
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 11));
      if ( *((int *)this + 7) >= 1 )
      {
        v4 = 0;
        do
          LogicCharacterBuff::encode(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4++), a2);
        while ( v4 < *((int *)this + 7) );
      }
      if ( *((int *)this + 11) >= 1 )
      {
        v5 = 0;
        do
          LogicCharacterBuff::encode(*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v5++), a2);
        while ( v5 < *((int *)this + 11) );
      }
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 12));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 13));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 14));
      Table = LogicDataTables::getTable((LogicDataTables *)8, v6);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      v9 = v8;
      if ( v8 >= 1 )
      {
        v10 = 0;
        v11 = v8;
        do
          (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(
            a2,
            *(unsigned int *)(*((_QWORD *)this + 8) + 4 * v10++));
        while ( v11 != (_DWORD)v10 );
        if ( v9 >= 1 )
        {
          v12 = 0;
          do
            (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(
              a2,
              *(unsigned __int8 *)(*((_QWORD *)this + 9) + v12++));
          while ( v9 != (_DWORD)v12 );
        }
      }
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 20));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 21));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 22));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 23));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 24));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 25));
    }

    void __fastcall LogicCharacterBuffComponent::decodeBuffArray(
            LogicCharacterBuffComponent *a1,
            ByteStream *a2,
            __int64 a3,
            __int64 a4)
    {
      int v4; // w19
      __int64 i; // x24
      LogicCharacterBuff *v9; // x23
      int v10; // w8
      __int64 v11; // x21
      LogicCharacterBuff *v12; // x0
      LogicCharacterBuff *v13; // x22
      bool v14; // cc
      LogicCharacterBuff *v15; // [xsp+8h] [xbp-48h] BYREF
    
      v4 = a4;
      LogicArrayList<LogicCharacterBuff *>::ensureCapacity(a3, a4);
      if ( v4 >= 1 )
      {
        for ( i = 0; i < v4; ++i )
        {
          v15 = 0;
          if ( i >= *(int *)(a3 + 12) )
          {
            v9 = (LogicCharacterBuff *)operator new(72);
            LogicCharacterBuff::LogicCharacterBuff(v9, a1);
            v15 = v9;
            LogicArrayList<LogicCharacterBuff *>::add(a3, &v15);
          }
          else
          {
            v9 = *(LogicCharacterBuff **)(*(_QWORD *)a3 + 8 * i);
            v15 = v9;
          }
          LogicCharacterBuff::decode(v9, a2);
        }
      }
      v10 = *(_DWORD *)(a3 + 12);
      if ( v10 > v4 )
      {
        v11 = (unsigned int)(v10 - 1);
        do
        {
          v12 = (LogicCharacterBuff *)LogicArrayList<LogicCharacterBuff *>::remove(a3, v11);
          v13 = v12;
          if ( v12 )
          {
            LogicCharacterBuff::destruct(v12);
            operator delete(v13);
          }
          v14 = (int)v11 <= v4;
          v11 = (unsigned int)(v11 - 1);
        }
        while ( !v14 );
      }
    }

    __int64 __fastcall LogicCharacterBuffComponent::decode(FriendListMessage *this, #1225 *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      int v6; // w1
      __int64 Table; // x0
      int v8; // w0
      int v9; // w21
      __int64 v10; // x22
      int v11; // w23
      __int64 v12; // x22
      __int64 result; // x0
    
      v4 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v5 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      LogicCharacterBuffComponent::decodeBuffArray(this, a2, (__int64)this + 16, v4);
      LogicCharacterBuffComponent::decodeBuffArray(this, a2, (__int64)this + 32, v5);
      *((_DWORD *)this + 12) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 14) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      Table = LogicDataTables::getTable((LogicDataTables *)8, v6);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      v9 = v8;
      if ( v8 >= 1 )
      {
        v10 = 0;
        v11 = v8;
        do
          *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v10++) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
        while ( v11 != (_DWORD)v10 );
        if ( v9 >= 1 )
        {
          v12 = 0;
          do
            *(_BYTE *)(*((_QWORD *)this + 9) + v12++) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
          while ( v9 != (_DWORD)v12 );
        }
      }
      *((_DWORD *)this + 20) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 21) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 22) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 23) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 24) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 25) = result;
      return result;
    }

    __int64 __fastcall LogicCharacterBuffComponent::removeGameObjectReferences(
            FriendListMessage *this,
            const GameMode *a2,
            int a3,
            bool a4,
            GameMode *a5)
    {
      __int64 result; // x0
      __int64 v8; // x8
      _QWORD *v9; // x21
      __int64 v10; // x22
      const GameMode **v11; // x23
      __int64 v12; // x8
    
      result = LogicComponent::removeGameObjectReferences(this, a2, a3, a4, a5);
      v8 = *((int *)this + 7);
      if ( (int)v8 >= 1 )
      {
        v9 = (_QWORD *)((char *)this + 16);
        v10 = v8 - 1;
        do
        {
          v11 = *(const GameMode ***)(*v9 + 8 * v10);
          if ( v11[5] == a2 )
          {
            LogicCharacterBuffComponent::onCharacterBuffRemoved(this, *(#952 **)(*v9 + 8 * v10));
            if ( v11 )
            {
              LogicCharacterBuff::destruct((LogicCharacterBuff *)v11);
              operator delete(v11);
            }
            result = LogicArrayList<LogicCharacterBuff *>::remove((char *)this + 16, v10);
          }
          v12 = v10-- + 1;
        }
        while ( v12 > 1 );
      }
      return result;
    }

    __int64 __fastcall LogicCharacterBuffComponent::getType(FriendListMessage *this)
    {
      return 3;
    }

    __int64 __fastcall LogicCharacterBuffComponent::onBuffRemovedFromTarget(__int64 result)
    {
      --*(_DWORD *)(result + 100);
      return result;
    }

    __int64 __fastcall LogicCharacterBuffComponent::onCharacterBuffsChanged(FriendListMessage *this, int a2)
    {
      __int64 Table; // x0
      __int64 result; // x0
      __int64 v5; // x2
      __int64 v6; // x3
      int v7; // w4
      _DWORD *v8; // x8
      _BYTE *v9; // x9
      __int64 v10; // x26
      int v11; // w24
      int v12; // w25
      int v13; // w22
      int v14; // w23
      __int64 v15; // x8
      #895 **v16; // x21
      int DamageMultiplier; // w0
      int v18; // w8
      int v20; // w9
      int HealReduction; // w0
      int SizeMultiplier; // w0
      int DamageReduction; // w20
      int v24; // w1
      #916 *DamageType; // x0
      __int64 v26; // x0
      __int64 v27; // x8
      __int64 ParentCharacter; // x0
      int v29; // w20
      __int64 v30; // x0
      int v31; // w21
      #1060 *v32; // x0
    
      *((_DWORD *)this + 21) = 0;
      Table = LogicDataTables::getTable((LogicDataTables *)8, a2);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      if ( (int)result >= 1 )
      {
        v8 = (_DWORD *)*((_QWORD *)this + 8);
        v9 = (_BYTE *)*((_QWORD *)this + 9);
        do
        {
          *v8++ = 0;
          *v9++ = 0;
          result = (unsigned int)(result - 1);
        }
        while ( (_DWORD)result );
      }
      if ( *((int *)this + 7) < 1 )
      {
        v11 = 100;
        v12 = 100;
        v13 = 100;
        v14 = 100;
      }
      else
      {
        v10 = 0;
        v11 = 100;
        v12 = 100;
        v13 = 100;
        v14 = 100;
        do
        {
          v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v10);
          v16 = *(#895 ***)(v15 + 16);
          DamageMultiplier = LogicCharacterBuffData::getDamageMultiplier(v16, *(_DWORD *)(v15 + 32), v5, v6, v7);
          if ( v12 >= DamageMultiplier )
            v18 = v12;
          else
            v18 = DamageMultiplier;
          if ( DamageMultiplier <= 100 )
            v18 = v12;
          if ( DamageMultiplier > 99 || v11 <= DamageMultiplier )
          {
            v20 = v11;
          }
          else
          {
            v18 = v12;
            v20 = DamageMultiplier;
          }
          if ( DamageMultiplier >= 1 )
          {
            v12 = v18;
            v11 = v20;
          }
          HealReduction = LogicCharacterBuffData::getHealReduction((BattleResultMessage *)v16);
          if ( HealReduction > *((_DWORD *)this + 21) )
            *((_DWORD *)this + 21) = HealReduction;
          SizeMultiplier = LogicCharacterBuffData::getSizeMultiplier((BattleResultMessage *)v16);
          if ( SizeMultiplier > v13 )
            v13 = SizeMultiplier;
          if ( SizeMultiplier < v14 )
            v14 = SizeMultiplier;
          DamageReduction = LogicCharacterBuffData::getDamageReduction((BattleResultMessage *)v16);
          if ( LogicCharacterBuffData::isDamageTypeSpecified((BattleResultMessage *)v16) )
          {
            DamageType = (#916 *)LogicCharacterBuffData::getDamageType((BattleResultMessage *)v16);
            result = LogicData::getInstanceID(DamageType);
            if ( DamageReduction < 100 )
              *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (int)result) += DamageReduction;
            else
              *(_BYTE *)(*((_QWORD *)this + 9) + (int)result) = 1;
          }
          else
          {
            v26 = LogicDataTables::getTable((LogicDataTables *)8, v24);
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
            if ( (int)result >= 1 )
            {
              v27 = 0;
              do
              {
                if ( DamageReduction < 100 )
                  *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v27) += DamageReduction;
                else
                  *(_BYTE *)(*((_QWORD *)this + 9) + v27) = 1;
                ++v27;
              }
              while ( (_DWORD)result != (_DWORD)v27 );
            }
          }
          ++v10;
        }
        while ( v10 < *((int *)this + 7) );
      }
      *((_DWORD *)this + 20) = v11 * v12 / 100;
      if ( (v13 + v14) / 2 != *((_DWORD *)this + 24) )
      {
        ParentCharacter = LogicComponent::getParentCharacter(this);
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)ParentCharacter + 120LL))(ParentCharacter);
        *((_DWORD *)this + 24) = (v13 + v14) / 2;
        v30 = LogicComponent::getParentCharacter(this);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 120LL))(v30);
        v31 = result;
        if ( v29 != (_DWORD)result )
        {
          v32 = (#1060 *)LogicComponent::getParentCharacter(this);
          return LogicCharacter::onSizeChanged(v32, v29, v31);
        }
      }
      return result;
    }

    __int64 __fastcall LogicCharacterBuffComponent::getProtectionPercentage(FriendListMessage *this, const LogicData *a2)
    {
      return *(unsigned int *)(*((_QWORD *)this + 8) + 4LL * (int)LogicData::getInstanceID(a2));
    }

    __int64 __fastcall LogicCharacterBuffComponent::isImmuneToDamageType(FriendListMessage *this, const LogicData *a2)
    {
      return *(unsigned __int8 *)(*((_QWORD *)this + 9) + (int)LogicData::getInstanceID(a2));
    }

    __int64 __fastcall LogicCharacterBuffComponent::getBuffCount(FriendListMessage *this)
    {
      return *((unsigned int *)this + 7);
    }

    __int64 __fastcall LogicCharacterBuffComponent::getBuff(FriendListMessage *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
    }

    __int64 __fastcall LogicCharacterBuffComponent::getSpawnSpeedMultiplier(
            FriendListMessage *this,
            __int64 a2,
            __int64 a3,
            int a4)
    {
      __int64 v5; // x23
      int v6; // w22
      int v7; // w21
      int SpawnSpeedMultiplier; // w0
    
      if ( *((int *)this + 7) < 1 )
      {
        v6 = 0;
        v7 = 100;
      }
      else
      {
        v5 = 0;
        v6 = 0;
        v7 = 100;
        do
        {
          SpawnSpeedMultiplier = LogicCharacterBuffData::getSpawnSpeedMultiplier(*(BattleResultMessage **)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5) + 16LL));
          if ( SpawnSpeedMultiplier < 1 )
          {
            if ( SpawnSpeedMultiplier < 0 && v6 < -SpawnSpeedMultiplier )
              v6 = -SpawnSpeedMultiplier;
          }
          else if ( SpawnSpeedMultiplier > v7 )
          {
            v7 = SpawnSpeedMultiplier;
          }
          ++v5;
        }
        while ( v5 < *((int *)this + 7) );
      }
      return (unsigned int)((int)(LogicMath::clamp((#1237 *)(unsigned int)(100 - v6), 0, 100, a4) * v7) / 100);
    }

    __int64 __fastcall LogicCharacterBuffComponent::calculateSpeed(FriendListMessage *this, int a2, __int64 a3, int a4)
    {
      __int64 v6; // x24
      int v7; // w22
      int v8; // w23
      __int64 v9; // x25
      LogicDataTables *Panic; // x0
      int v11; // w8
      int SpeedMultiplier; // w0
    
      if ( *((int *)this + 7) < 1 )
      {
        v7 = 0;
        v8 = 100;
      }
      else
      {
        v6 = 0;
        v7 = 0;
        v8 = 100;
        do
        {
          v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v6);
          Panic = (LogicDataTables *)LogicCharacterBuffData::getPanic(*(BattleResultMessage **)(v9 + 16));
          if ( (_DWORD)Panic )
          {
            v11 = *(_DWORD *)(LogicDataTables::getGlobals(Panic) + 68LL);
            if ( v11 > v8 )
              v8 = v11;
          }
          SpeedMultiplier = LogicCharacterBuffData::getSpeedMultiplier(*(BattleResultMessage **)(v9 + 16));
          if ( SpeedMultiplier < 1 )
          {
            if ( SpeedMultiplier < 0 && v7 < -SpeedMultiplier )
              v7 = -SpeedMultiplier;
          }
          else if ( SpeedMultiplier > v8 )
          {
            v8 = SpeedMultiplier;
          }
          ++v6;
        }
        while ( v6 < *((int *)this + 7) );
      }
      return (unsigned int)((int)(LogicMath::clamp((#1237 *)(unsigned int)(100 - v7), 0, 100, a4) * (v8 * a2 / 100)) / 100);
    }

    __int64 __fastcall LogicCharacterBuffComponent::calculateHitSpeed(FriendListMessage *this, int a2, __int64 a3, int a4)
    {
      __int64 v6; // x24
      int v7; // w22
      int v8; // w23
      int HitSpeedMultiplier; // w0
    
      if ( *((int *)this + 7) < 1 )
      {
        v7 = 0;
        v8 = 100;
      }
      else
      {
        v6 = 0;
        v7 = 0;
        v8 = 100;
        do
        {
          HitSpeedMultiplier = LogicCharacterBuffData::getHitSpeedMultiplier(*(BattleResultMessage **)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v6)
                                                                                                     + 16LL));
          if ( HitSpeedMultiplier < 1 )
          {
            if ( HitSpeedMultiplier < 0 && v7 < -HitSpeedMultiplier )
              v7 = -HitSpeedMultiplier;
          }
          else if ( HitSpeedMultiplier > v8 )
          {
            v8 = HitSpeedMultiplier;
          }
          ++v6;
        }
        while ( v6 < *((int *)this + 7) );
      }
      return (unsigned int)((int)(LogicMath::clamp((#1237 *)(unsigned int)(100 - v7), 0, 100, a4) * (v8 * a2 / 100)) / 100);
    }

    __int64 __fastcall LogicCharacterBuffComponent::calculateSize(FriendListMessage *this, int a2, int a3)
    {
      return LogicMath::max((LogicMath *)1, *((_DWORD *)this + 24) * a2 / 100, a3);
    }

    __int64 __fastcall LogicCharacterBuffComponent::isStatic(FriendListMessage *this)
    {
      __int64 v1; // x8
      __int64 v2; // x9
    
      v1 = *((int *)this + 7);
      if ( (int)v1 < 1 )
        return 0;
      v2 = 0;
      while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2) + 16LL) + 204LL) )
      {
        if ( ++v2 >= v1 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall LogicCharacterBuffComponent::onDamageTaken(__int64 this)
    {
      __int64 v1; // x19
      __int64 v2; // x20
      __int64 v3; // x20
    
      v1 = this;
      if ( *(int *)(this + 28) >= 1 )
      {
        v2 = 0;
        do
          this = LogicCharacterBuff::onDamageTaken(*(LogicCharacterBuff **)(*(_QWORD *)(v1 + 16) + 8 * v2++));
        while ( v2 < *(int *)(v1 + 28) );
      }
      if ( *(int *)(v1 + 44) >= 1 )
      {
        v3 = 0;
        do
          this = LogicCharacterBuff::onDamageTaken(*(LogicCharacterBuff **)(*(_QWORD *)(v1 + 32) + 8 * v3++));
        while ( v3 < *(int *)(v1 + 44) );
      }
      return this;
    }

    __int64 __fastcall LogicCharacterBuffComponent::onDeath(__int64 this)
    {
      __int64 v1; // x19
      __int64 v2; // x20
    
      v1 = this;
      if ( *(int *)(this + 28) >= 1 )
      {
        v2 = 0;
        do
          this = LogicCharacterBuff::onCharacterDeath(*(LogicCharacterBuff **)(*(_QWORD *)(v1 + 16) + 8 * v2++));
        while ( v2 < *(int *)(v1 + 28) );
      }
      return this;
    }

    __int64 __fastcall LogicCharacterBuffComponent::isImmuneToBuff(FriendListMessage *this, const BattleResultMessage *a2)
    {
      __int64 v4; // x21
    
      if ( *((int *)this + 7) < 1 )
        return 0;
      v4 = 0;
      while ( !(unsigned int)LogicCharacterBuffData::immuneToBuff(
                               *(BattleResultMessage **)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4) + 16LL),
                               a2) )
      {
        if ( ++v4 >= *((int *)this + 7) )
          return 0;
      }
      return 1;
    }

    bool __fastcall LogicCharacterBuffComponent::isControlChanged(FriendListMessage *this)
    {
      #1060 *ParentCharacter; // x0
    
      ParentCharacter = (#1060 *)LogicComponent::getParentCharacter(this);
      return (LogicCharacter::isLeader(ParentCharacter) & 1) == 0 && *((_DWORD *)this + 12) > 0;
    }

    __int64 __fastcall LogicCharacterBuffComponent::hasBuff(FriendListMessage *this, const BattleResultMessage *a2)
    {
      __int64 v4; // x21
    
      if ( *((int *)this + 7) < 1 )
        return 0;
      v4 = 0;
      while ( !(unsigned int)LogicData::equals(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4) + 16LL), a2) )
      {
        if ( ++v4 >= *((int *)this + 7) )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall LogicCharacterBuffComponent::ignorePushBack(FriendListMessage *this)
    {
      __int64 v2; // x20
    
      if ( *((int *)this + 7) < 1 )
        return 0;
      v2 = 0;
      while ( !(unsigned int)LogicCharacterBuffData::ignorePushBack(*(BattleResultMessage **)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2)
                                                                                            + 16LL)) )
      {
        if ( ++v2 >= *((int *)this + 7) )
          return 0;
      }
      return 1;
    }

    // attributes: thunk
    void __fastcall LogicCharacterBuffComponent::~LogicCharacterBuffComponent(FriendListMessage *this)
    {
      __ZN27LogicCharacterBuffComponentD2Ev(this);
    }

    void __fastcall LogicCharacterBuffComponent::~LogicCharacterBuffComponent(FriendListMessage *this)
    {
      LogicCharacterBuffComponent::~LogicCharacterBuffComponent(this);
      operator delete(this);
    }

    void __fastcall LogicCharacterBuffComponent::~LogicCharacterBuffComponent(FriendListMessage *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)this = off_10045E550;
      v3 = (_QWORD *)((char *)this + 32);
      v2 = *((_QWORD *)this + 4);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = *((_QWORD *)this + 2);
      if ( v4 )
        operator delete[](v4);
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
    }

}; // end class LogicCharacterBuffComponent
