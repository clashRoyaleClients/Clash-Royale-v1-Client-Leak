class LogicHeatTile
{
public:

    void __fastcall LogicHeatTile::LogicHeatTile(LogicHeatTile *this, int a2, int a3)
    {
      __int64 i; // x8
      _DWORD *v7; // x9
    
      LogicVector2::LogicVector2((LogicHeatTile *)((char *)this + 32));
      for ( i = 8; i != 16; i += 4 )
      {
        v7 = (_DWORD *)((char *)this + i);
        *(v7 - 2) = 0;
        *v7 = 0;
        v7[2] = 0;
        v7[4] = 0;
      }
      *((_DWORD *)this + 8) = a2;
      *((_DWORD *)this + 9) = a3;
    }

    // attributes: thunk
    void __fastcall LogicHeatTile::LogicHeatTile(LogicHeatTile *this, int a2, int a3)
    {
      __ZN13LogicHeatTileC2Eii(this, a2, a3);
    }

    __int64 __fastcall LogicHeatTile::destruct(SendBattleEventMessage *this)
    {
      __int64 result; // x0
      __int64 v3; // x9
      _DWORD *v4; // x10
    
      result = LogicVector2::destruct((SendBattleEventMessage *)((char *)this + 32));
      v3 = -8;
      do
      {
        v4 = (_DWORD *)((char *)this + v3 + 16);
        *(v4 - 2) = 0;
        *v4 = 0;
        v4[2] = 0;
        v4[4] = 0;
        v3 += 4;
      }
      while ( v3 );
      return result;
    }

    __int64 __fastcall LogicHeatTile::clear(__int64 this)
    {
      __int64 v1; // x9
      _DWORD *v2; // x10
    
      v1 = -8;
      do
      {
        v2 = (_DWORD *)(this + 16 + v1);
        *(v2 - 2) = 0;
        *v2 = 0;
        v2[2] = 0;
        v2[4] = 0;
        v1 += 4;
      }
      while ( v1 );
      return this;
    }

    __int64 __fastcall LogicHeatTile::addTile(__int64 this, const SendBattleEventMessage *a2, int a3)
    {
      char *v3; // x8
      __int64 v4; // x9
      __int64 v5; // x10
      _DWORD *v6; // x13
      int v7; // w11
    
      v3 = (char *)a2 + 16;
      v4 = this + 16;
      v5 = -8;
      do
      {
        v6 = (_DWORD *)(v4 + v5);
        *(v6 - 2) = *(_DWORD *)(v4 + v5 - 8) + *(_DWORD *)&v3[v5 - 8] * a3;
        *v6 = *(_DWORD *)(v4 + v5) + *(_DWORD *)&v3[v5] * a3;
        v6[2] = *(_DWORD *)(v4 + v5 + 8) + *(_DWORD *)&v3[v5 + 8] * a3;
        v7 = *(_DWORD *)(v4 + v5 + 16) + *(_DWORD *)&v3[v5 + 16] * a3;
        v5 += 4;
        v6[4] = v7;
      }
      while ( v5 );
      return this;
    }

}; // end class LogicHeatTile
