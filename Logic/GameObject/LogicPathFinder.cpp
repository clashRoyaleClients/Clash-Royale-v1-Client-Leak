class LogicPathFinder
{
public:

    void __fastcall LogicPathFinder::LogicPathFinder(LogicPathFinder *this, #1127 *a2)
    {
      int v3; // w9
      int v4; // w10
      unsigned __int64 v5; // x10
      __int64 v6; // x20
    
      *((_DWORD *)this + 16) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *(_QWORD *)((char *)this + 76) = -1;
      *((_DWORD *)this + 24) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 3) = a2;
      v3 = *(_DWORD *)a2;
      *((_DWORD *)this + 17) = *(_DWORD *)a2;
      v4 = *((_DWORD *)a2 + 1);
      *((_DWORD *)this + 18) = v4;
      v5 = v3 * v4;
      if ( is_mul_ok(v5, 4u) )
        v6 = 4 * v5;
      else
        v6 = -1;
      *((_QWORD *)this + 11) = operator new[](v6);
      *((_QWORD *)this + 4) = operator new[](v6);
      *((_QWORD *)this + 5) = operator new[](v6);
      *((_QWORD *)this + 6) = operator new[](v6);
      *((_QWORD *)this + 7) = operator new[](v6);
      *((_DWORD *)this + 4) = 0;
    }

    // attributes: thunk
    void __fastcall LogicPathFinder::LogicPathFinder(LogicPathFinder *this, #1127 *a2)
    {
      __ZN15LogicPathFinderC2EP12LogicTileMap(this, a2);
    }

    __int64 __fastcall LogicPathFinder::aStar(LogicBattleLog *this, int a2, int a3, const #1060 *a4)
    {
      int v5; // w20
      int v8; // w8
      int v9; // w9
      int v10; // w8
      _DWORD *v11; // x9
      _DWORD *v12; // x10
      _DWORD *v13; // x12
      __int64 v14; // x8
      __int64 result; // x0
      __int64 v16; // x8
      int v17; // w0
      __int64 v18; // x8
      int i; // w9
      __int64 v20; // x10
    
      v5 = a3;
      ++*((_DWORD *)this + 4);
      v8 = *((_DWORD *)this + 17);
      v9 = *((_DWORD *)this + 18);
      *((_DWORD *)this + 19) = a3 % v8;
      *((_DWORD *)this + 20) = a3 / v8;
      *((_DWORD *)this + 24) = 0;
      v10 = v9 * v8;
      if ( v10 >= 1 )
      {
        v11 = (_DWORD *)*((_QWORD *)this + 4);
        v12 = (_DWORD *)*((_QWORD *)this + 7);
        v13 = (_DWORD *)*((_QWORD *)this + 11);
        do
        {
          *v11++ = 0;
          *v12++ = 0;
          --v10;
          *v13++ = 0x7FFFFFF;
        }
        while ( v10 );
      }
      *((_DWORD *)this + 16) = 1;
      **((_DWORD **)this + 5) = a2;
      v14 = *((_QWORD *)this + 6);
      *(_DWORD *)(v14 + 4LL * a2) = -1;
      *(_DWORD *)(v14 + 4LL * a3) = -1;
      result = LogicPathFinder::aStarAddTile(this, a2, a4);
      v16 = *((int *)this + 16) - 1LL;
      *((_DWORD *)this + 16) = v16;
      **((_DWORD **)this + 5) = *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v16);
      *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * a2) = 2;
      if ( *((_DWORD *)this + 16) )
      {
        do
        {
          v17 = LogicPathFinder::removeSmallest(this);
          *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * v17) = 2;
          result = LogicPathFinder::aStarAddTile(this, v17, a4);
        }
        while ( *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * v5) != 2 && *((int *)this + 24) > 0 );
        *((_DWORD *)this + 16) = 0;
        if ( v5 != -1 )
        {
          v18 = *((_QWORD *)this + 6);
          for ( i = *(_DWORD *)(v18 + 4LL * v5); i != -1; i = *(_DWORD *)(v18 + 4LL * i) )
          {
            v20 = *((int *)this + 16);
            *((_DWORD *)this + 16) = v20 + 1;
            *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v20) = v5;
            v5 = i;
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicPathFinder::aStarAddTile(LogicBattleLog *this, int a2, const #1060 *a3)
    {
      int v6; // w8
      int v7; // w24
      int v8; // w25
      int v9; // w26
    
      v6 = *((_DWORD *)this + 17);
      v7 = a2 / v6;
      v8 = a2 % v6;
      LogicPathFinder::aStarAddTile(this, a2, a2 % v6, a2 / v6 - 1, a2 - v6, 10, a3);
      LogicPathFinder::aStarAddTile(this, a2, v8, v7 + 1, *((_DWORD *)this + 17) + a2, 10, a3);
      v9 = v8 - 1;
      LogicPathFinder::aStarAddTile(this, a2, v8++ - 1, v7, a2 - 1, 10, a3);
      LogicPathFinder::aStarAddTile(this, a2, v8, v7, a2 + 1, 10, a3);
      LogicPathFinder::aStarAddTile(this, a2, v9, v7 - 1, a2 - 1 - *((_DWORD *)this + 17), 14, a3);
      LogicPathFinder::aStarAddTile(this, a2, v9, v7 + 1, a2 - 1 + *((_DWORD *)this + 17), 14, a3);
      LogicPathFinder::aStarAddTile(this, a2, v8, v7 + 1, a2 + 1 + *((_DWORD *)this + 17), 14, a3);
      return LogicPathFinder::aStarAddTile(this, a2, v8, v7 - 1, a2 + 1 - *((_DWORD *)this + 17), 14, a3);
    }

    __int64 __fastcall LogicPathFinder::aStarAddTile(
            LogicBattleLog *this,
            int a2,
            int a3,
            int a4,
            int a5,
            int a6,
            const #1060 *a7)
    {
      __int64 v13; // x22
      int PathFinderCost; // w0
      int v15; // w22
      int v16; // w23
      const char *v17; // x2
      __int64 v18; // x8
      __int64 v19; // x8
      int v20; // w2
    
      if ( a4 < 0 )
        return 0;
      v13 = 0;
      if ( a3 < 0 || *((_DWORD *)this + 18) <= a4 )
        return v13;
      if ( *((_DWORD *)this + 17) <= a3 )
        return 0;
      PathFinderCost = LogicTileMap::getPathFinderCost(*((#1127 **)this + 3), a3, a4, a7);
      v13 = 0;
      if ( PathFinderCost <= 268435454 && *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * a5) != 2 )
      {
        v15 = *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * a2) + PathFinderCost * a6;
        v16 = v15 + LogicPathFinder::heuristicCost(this, a3, a4);
        Debugger::doAssert((Debugger *)(v16 > 0), (bool)"", v17);
        v18 = *((_QWORD *)this + 4);
        v13 = 1;
        if ( !*(_DWORD *)(v18 + 4LL * a5) )
        {
          *(_DWORD *)(v18 + 4LL * a5) = 1;
          v19 = *((int *)this + 16);
          *((_DWORD *)this + 16) = v19 + 1;
          *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v19) = a5;
          *(_DWORD *)(*((_QWORD *)this + 6) + 4LL * a5) = a2;
          *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * a5) = v16;
          LogicPathFinder::add(this, a5);
          *((_DWORD *)this + 3) = LogicMath::max((LogicMath *)*((unsigned int *)this + 3), *((_DWORD *)this + 24), v20);
          ++*((_DWORD *)this + 1);
        }
      }
      return v13;
    }

    __int64 __fastcall LogicPathFinder::heuristicCost(LogicBattleLog *this, int a2, int a3)
    {
      LogicMath *v5; // x21
      int v6; // w1
      int v7; // w0
      int v8; // w2
    
      v5 = (LogicMath *)LogicMath::abs((#1237 *)(unsigned int)(*((_DWORD *)this + 19) - a2), a2);
      v7 = LogicMath::abs((#1237 *)(unsigned int)(*((_DWORD *)this + 20) - a3), v6);
      return 10 * (unsigned int)LogicMath::max(v5, v7, v8);
    }

    __int64 __fastcall LogicPathFinder::add(__int64 this, __int64 a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      int v4; // w11
      __int64 v5; // x10
      int i; // w14
      int v7; // w12
      int *v8; // x11
      __int64 v9; // x13
    
      v2 = *(int *)(this + 96);
      *(_DWORD *)(this + 96) = v2 + 1;
      v3 = *(_QWORD *)(this + 88);
      *(_DWORD *)(v3 + 4 * v2) = a2;
      v4 = v2 - 1;
      if ( (int)v2 >= 1 )
      {
        v5 = *(_QWORD *)(this + 56);
        for ( i = *(_DWORD *)(v5 + 4LL * (int)a2); ; i = *(_DWORD *)(v5 + 4 * a2) )
        {
          v7 = v4 >> 1;
          v8 = (int *)(v3 + 4LL * (v4 >> 1));
          v9 = *v8;
          if ( i >= *(_DWORD *)(v5 + 4 * v9) )
            break;
          *(_DWORD *)(v3 + 4LL * (int)v2) = v9;
          LODWORD(v2) = v7;
          *v8 = a2;
          v4 = v7 - 1;
          if ( v7 < 1 )
            break;
          a2 = *(int *)(v3 + 4LL * v7);
        }
      }
      return this;
    }

    __int64 __fastcall LogicPathFinder::removeSmallest(LogicBattleLog *this)
    {
      int v1; // w11
      __int64 v2; // x10
      _DWORD *v3; // x9
      __int64 v4; // x8
      int v5; // w11
      int v6; // w11
      unsigned int v7; // w14
      unsigned int v8; // w16
      int v9; // w15
      __int64 v10; // x13
    
      v1 = *((_DWORD *)this + 24);
      if ( !v1 )
        return 0xFFFFFFFFLL;
      v2 = 0;
      v3 = (_DWORD *)*((_QWORD *)this + 11);
      v4 = (unsigned int)*v3;
      v5 = v1 - 1;
      *((_DWORD *)this + 24) = v5;
      v6 = v3[v5];
      *v3 = v6;
      while ( 1 )
      {
        v7 = (2 * v2) | 1;
        v8 = 2 * v2 + 2;
        v9 = *((_DWORD *)this + 24);
        v10 = v2;
        if ( (int)v8 < v9 )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * v6) <= *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * (int)v3[v8]) )
            v10 = (unsigned int)v2;
          else
            v10 = v8;
        }
        if ( (int)v7 < v9 )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * (int)v3[(int)v10]) <= *(_DWORD *)(*((_QWORD *)this + 7)
                                                                                         + 4LL * (int)v3[v7]) )
            v10 = (unsigned int)v10;
          else
            v10 = v7;
        }
        if ( (_DWORD)v10 == (_DWORD)v2 )
          break;
        v3[(int)v2] = v3[(int)v10];
        v3[(int)v10] = v6;
        v2 = v10;
      }
      return v4;
    }

    __int64 __fastcall LogicPathFinder::getPathLength(LogicBattleLog *this)
    {
      return *((unsigned int *)this + 16);
    }

    __int64 __fastcall LogicPathFinder::getPathPoint(LogicBattleLog *this, const char *a2)
    {
      if ( ((unsigned int)a2 & 0x80000000) != 0 || *((_DWORD *)this + 16) <= (int)a2 )
        Debugger::error((__siginfo *)"illegal path index", a2);
      return *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * (int)a2);
    }

    __int64 __fastcall LogicPathFinder::findPath(#1127 **this, int a2, int a3, int a4, int a5, int a6, const #1060 *a7)
    {
      int v11; // w25
      LogicBattleLog *v13; // x19
      const char *v14; // x1
      int v15; // w1
      bool v16; // zf
      int v17; // w0
      #1237 *v18; // x21
      #1237 *v19; // x27
      int v20; // w20
      #1237 *v21; // x22
      int v22; // w3
      int v23; // w3
      int v24; // w26
      int v25; // w3
      int v26; // w28
      int v27; // w3
      __int64 result; // x0
      #1127 **v29; // x25
      const #1060 *v30; // x19
      int v31; // w24
      int v32; // w22
      int v33; // w21
      int v34; // w8
      bool v35; // cc
      int v36; // w9
      int v37; // w10
      int v38; // w27
      int v39; // w20
      int v40; // [xsp+Ch] [xbp-64h]
      int v41; // [xsp+10h] [xbp-60h]
      int v42; // [xsp+18h] [xbp-58h]
      int v43; // [xsp+1Ch] [xbp-54h]
    
      v11 = a3;
      v13 = (LogicBattleLog *)this;
      *this = 0;
      *(this + 1) = 0;
      if ( (LogicTileMap::isPassablePathFinder(*(this + 3), a2, a3) & 1) != 0 )
      {
        v16 = (int)LogicTileMap::getPathFinderCost(*((#1127 **)v13 + 3), a4, a5, a7) >= 0xFFFFFFF && a6 == 1;
        if ( v16 )
        {
          v41 = a2;
          v17 = LogicMath::sqrt((#1237 *)(unsigned int)((a4 - a2) * (a4 - a2) + (a5 - v11) * (a5 - v11)), v15);
          v18 = (#1237 *)(unsigned int)(a5 - v17);
          v19 = (#1237 *)(unsigned int)(v17 + a4);
          v20 = a5;
          v21 = (#1237 *)(unsigned int)(v17 + a5);
          v43 = LogicMath::clamp((#1237 *)(unsigned int)(a4 - v17), 0, *((_DWORD *)v13 + 17), v22);
          v24 = LogicMath::clamp(v18, 0, *((_DWORD *)v13 + 18), v23);
          v26 = LogicMath::clamp(v19, 0, *((_DWORD *)v13 + 17), v25);
          result = LogicMath::clamp(v21, 0, *((_DWORD *)v13 + 18), v27);
          if ( v24 >= (int)result )
            goto LABEL_26;
          v40 = v11;
          v29 = (#1127 **)v13;
          v30 = a7;
          v42 = result - 1;
          v31 = -a4;
          v32 = 0x7FFFFFFF;
          v38 = -1;
          a4 = -1;
          do
          {
            v33 = v43;
            if ( v43 < v26 )
            {
              do
              {
                result = LogicTileMap::getPathFinderCost(v29[3], v33, v24, v30);
                v34 = (v24 - v20) * (v24 - v20) + (v31 + v33) * (v31 + v33);
                v35 = v34 < v32;
                if ( v34 < v32 )
                {
                  v36 = v33;
                }
                else
                {
                  v34 = v32;
                  v36 = a4;
                }
                if ( v35 )
                  v37 = v24;
                else
                  v37 = v38;
                if ( (int)result <= 268435454 )
                {
                  v32 = v34;
                  a4 = v36;
                  v38 = v37;
                }
                ++v33;
              }
              while ( v26 != v33 );
            }
            v16 = v24++ == v42;
          }
          while ( !v16 );
          a7 = v30;
          v13 = (LogicBattleLog *)v29;
          v11 = v40;
          if ( a4 == -1 )
            goto LABEL_26;
        }
        else
        {
          v41 = a2;
          v38 = a5;
        }
        v39 = *((_DWORD *)v13 + 17);
        result = LogicTileMap::getPathFinderCost(*((#1127 **)v13 + 3), a4, v38, a7);
        if ( (int)result < 0xFFFFFFF )
          return LogicPathFinder::aStar(v13, v41 + v39 * v11, a4 + v39 * v38, a7);
      }
      else
      {
        result = Debugger::warning((__siginfo *)"non passable start position in pathfinder", v14);
      }
    LABEL_26:
      *((_DWORD *)v13 + 16) = 0;
      return result;
    }

    void __fastcall LogicPathFinder::destruct(LogicBattleLog *this)
    {
      __int64 v2; // x0
      char *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
    
      v3 = (char *)this + 32;
      v2 = *((_QWORD *)this + 4);
      if ( v2 )
        operator delete[](v2);
      *((_QWORD *)this + 4) = 0;
      v4 = *((_QWORD *)this + 5);
      if ( v4 )
        operator delete[](v4);
      *((_QWORD *)this + 5) = 0;
      v5 = *((_QWORD *)this + 6);
      if ( v5 )
        operator delete[](v5);
      *((_QWORD *)this + 6) = 0;
      v6 = *((_QWORD *)this + 7);
      if ( v6 )
        operator delete[](v6);
      *((_QWORD *)this + 7) = 0;
      v7 = *((_QWORD *)this + 11);
      if ( v7 )
        operator delete[](v7);
      *((_DWORD *)v3 + 8) = 0;
      *((_QWORD *)v3 + 2) = 0;
      *((_QWORD *)v3 + 3) = 0;
      *(_QWORD *)v3 = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_DWORD *)this + 19) = -1;
      *((_DWORD *)this + 20) = -1;
      *((_DWORD *)this + 17) = 0;
      *((_DWORD *)this + 18) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_DWORD *)this + 24) = 0;
      *((_DWORD *)this + 4) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

}; // end class LogicPathFinder
