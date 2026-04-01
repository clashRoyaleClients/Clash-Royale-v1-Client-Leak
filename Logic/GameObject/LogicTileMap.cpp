class LogicTileMap
{
public:

    void __fastcall LogicTileMap::LogicTileMap(LogicTileMap *this)
    {
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    void __fastcall LogicTileMap::init(
            RequestSingleSpellPopup *this,
            UnbindFacebookAccountMessage *a2,
            int a3,
            int a4,
            const BillingManager *a5)
    {
      LogicPathFinder *v6; // x20
    
      *(_DWORD *)this = a3;
      *((_DWORD *)this + 1) = a4;
      *((_QWORD *)this + 2) = a2;
      *((_QWORD *)this + 3) = a5;
      v6 = (LogicPathFinder *)operator new(104);
      LogicPathFinder::LogicPathFinder(v6, this);
      *((_QWORD *)this + 1) = v6;
    }

    void __fastcall LogicTileMap::destruct(RequestSingleSpellPopup *this)
    {
      LogicBattleLog *v2; // x0
      void *v3; // x0
    
      v2 = (LogicBattleLog *)*((_QWORD *)this + 1);
      if ( v2 )
      {
        LogicPathFinder::destruct(v2);
        v3 = (void *)*((_QWORD *)this + 1);
        if ( v3 )
          operator delete(v3);
        *((_QWORD *)this + 1) = 0;
      }
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    bool __fastcall LogicTileMap::isPassablePathFinder(RequestSingleSpellPopup *this, int a2, int a3)
    {
      return ((a3 | a2) & 0x80000000) == 0 && *(_DWORD *)this > a2 && *((_DWORD *)this + 1) > a3;
    }

    __int64 __fastcall LogicTileMap::getPathFinderCost(
            RequestSingleSpellPopup *this,
            __int64 a2,
            __int64 a3,
            const AllianceJoinFailedMessage *a4)
    {
      int TileCost; // w0
    
      if ( (((unsigned int)a3 | (unsigned int)a2) & 0x80000000) != 0
        || *(_DWORD *)this <= (int)a2
        || *((_DWORD *)this + 1) <= (int)a3 )
      {
        return 0xFFFFFFF;
      }
      if ( !a4 )
        return 0;
      if ( (unsigned int)LogicTilemapData::isWater(*((BillingManager **)this + 3), a2, a3) )
      {
        if ( *(_BYTE *)(LogicCharacter::getCharacterData(a4) + 408) )
          return 20;
        else
          return 800;
      }
      else
      {
        TileCost = LogicTilemapData::getTileCost(*((BillingManager **)this + 3), a2, a3);
        if ( TileCost )
        {
          if ( *((_DWORD *)a4 + 44) == TileCost )
            return 1;
          else
            return 5;
        }
        else
        {
          return 20;
        }
      }
    }

    __int64 __fastcall LogicTileMap::getPathFinder(RequestSingleSpellPopup *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall LogicTileMap::isValidSpawnPoint(RequestSingleSpellPopup *this, int a2, int a3, const Font *a4)
    {
      int CollisionRadius; // w0
      int v8; // w2
      int v9; // w0
      int v10; // w8
      int v11; // w10
      __int64 v12; // x20
      int v13; // w21
      int v14; // w10
      __int64 result; // x0
      int v16; // w22
      int v17; // w23
      int v18; // w25
      __int64 v19; // x2
      bool v20; // cc
    
      CollisionRadius = LogicCharacterData::getCollisionRadius(a4);
      v9 = LogicMath::min((LogicMath *)1, CollisionRadius, v8);
      v10 = a3 - v9;
      if ( (((a2 - v9) | (a3 - v9)) & 0x80000000) == 0 && v9 + a2 < 500 * *(_DWORD *)this )
      {
        v11 = v9 + a3;
        if ( v9 + a3 < 500 * *((_DWORD *)this + 1) )
        {
          v12 = (unsigned int)((a2 - v9) / 500);
          v13 = (v9 + a2 - 1) / 500;
          v14 = v11 - 1;
          if ( (int)v12 > v13 )
            return 1;
          v16 = v10 / 500;
          v17 = v14 / 500;
          while ( 1 )
          {
            v18 = v16 - 1;
            if ( v16 <= v17 )
              break;
    LABEL_13:
            result = 1;
            v20 = (int)v12 < v13;
            v12 = (unsigned int)(v12 + 1);
            if ( !v20 )
              return result;
          }
          while ( 1 )
          {
            v19 = (unsigned int)(v18 + 1);
            if ( (((unsigned int)v19 | (unsigned int)v12) & 0x80000000) != 0
              || *(_DWORD *)this <= (int)v12
              || *((_DWORD *)this + 1) <= (int)v19
              || (LogicTilemapData::isWater(*((BillingManager **)this + 3), v12, v19) & 1) != 0 )
            {
              break;
            }
            if ( ++v18 >= v17 )
              goto LABEL_13;
          }
        }
      }
      return 0;
    }

    int *__fastcall LogicTileMap::moveObject(int *result, _DWORD *a2, int a3, int a4)
    {
      int v4; // w12
      int v5; // w9
      int v6; // w8
      int v7; // w13
      int v8; // w11
      int v9; // w11
      int v10; // w10
      int v11; // w10
    
      v4 = a2[1];
      v5 = *a2 / 500;
      v6 = v4 / 500;
      v7 = *a2 % 500;
      *a2 += a3;
      a2[1] = v4 + a4;
      v8 = v7 + a3;
      if ( a3 < 0 )
      {
        if ( v8 > 249 )
          goto LABEL_11;
        v9 = v5 - 1;
      }
      else
      {
        if ( a3 < 1 || v8 < 251 )
          goto LABEL_11;
        v9 = v5 + 1;
      }
      if ( (v6 | v9) < 0 || *result <= v9 || result[1] <= v6 )
        *a2 = 500 * v5 + 250;
    LABEL_11:
      v10 = v4 % 500 + a4;
      if ( a4 < 0 )
      {
        if ( v10 > 249 )
          return result;
        v11 = v6 - 1;
      }
      else
      {
        if ( a4 < 1 || v10 < 251 )
          return result;
        v11 = v6 + 1;
      }
      if ( (v11 | v5) < 0 || *result <= v5 || result[1] <= v11 )
        a2[1] = 500 * v6 + 250;
      return result;
    }

}; // end class LogicTileMap
