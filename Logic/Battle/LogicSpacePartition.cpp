class LogicSpacePartition
{
public:

    __int64 __fastcall LogicSpacePartition::LogicSpacePartition(__int64 a1, int a2, int a3)
    {
      int v4; // w10
      int v5; // w8
      int v6; // w22
      signed __int64 v7; // x21
      __int64 v8; // x0
      _QWORD *v9; // x20
      _DWORD *v10; // x8
      signed __int64 v11; // x22
    
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      v4 = (500 * a2 + 1023) >> 10;
      v5 = (500 * a3 + 1023) >> 10;
      *(_DWORD *)a1 = v4;
      *(_DWORD *)(a1 + 4) = v5;
      v6 = v4 * v5;
      v7 = v4 * v5;
      if ( is_mul_ok(v7, 8u) )
        v8 = 8LL * v6;
      else
        v8 = -1;
      *(_QWORD *)(a1 + 8) = operator new[](v8);
      v9 = (_QWORD *)operator new(16);
      *v9 = 0;
      v9[1] = 0;
      v10 = v9 + 1;
      if ( v6 >= 1 )
      {
        v11 = 0;
        do
        {
          *v10 = 32;
          *v9 = operator new[](256);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v11++) = v9;
          v9 = (_QWORD *)operator new(16);
          *v9 = 0;
          v9[1] = 0;
          v10 = v9 + 1;
        }
        while ( v11 < v7 );
      }
      *v10 = 100;
      *v9 = operator new[](800);
      *(_QWORD *)(a1 + 16) = v9;
      return a1;
    }

    // attributes: thunk
    void __fastcall LogicSpacePartition::LogicSpacePartition(LogicSpacePartition *this, int a2, int a3)
    {
      __ZN19LogicSpacePartitionC2Eii((__int64)this, a2, a3);
    }

    void __fastcall LogicSpacePartition::destruct(int *a1)
    {
      int v2; // w8
      __int64 v3; // x0
      __int64 v4; // x21
      _QWORD *v5; // x20
      _QWORD *v6; // x20
    
      v2 = a1[1] * *a1;
      v3 = *((_QWORD *)a1 + 1);
      if ( v2 >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *(_QWORD **)(v3 + 8 * v4);
          do
          {
            if ( v5 )
            {
              if ( *v5 )
                operator delete[](*v5);
              operator delete(v5);
              v3 = *((_QWORD *)a1 + 1);
            }
            *(_QWORD *)(v3 + 8 * v4) = 0;
            v3 = *((_QWORD *)a1 + 1);
            v5 = *(_QWORD **)(v3 + 8 * v4);
          }
          while ( v5 );
          ++v4;
        }
        while ( v4 < a1[1] * (__int64)*a1 );
      }
      if ( v3 )
        operator delete[](v3);
      *((_QWORD *)a1 + 1) = 0;
      v6 = (_QWORD *)*((_QWORD *)a1 + 2);
      if ( v6 )
      {
        if ( *v6 )
          operator delete[](*v6);
        operator delete(v6);
      }
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 2) = 0;
      *(_QWORD *)a1 = 0;
    }

    void __fastcall LogicSpacePartition::update(__int64 a1, LogicSpellListener *a2, char a3)
    {
      __int64 v5; // x9
      __int64 *v6; // x8
      __int64 v7; // t1
      __int64 v8; // x0
      _QWORD *v9; // x21
      int v10; // w23
      __int64 v11; // x24
      const LogicGameObject *v12; // x22
    
      LODWORD(v5) = *(_DWORD *)(a1 + 4) * *(_DWORD *)a1;
      if ( (int)v5 >= 1 )
      {
        v6 = *(__int64 **)(a1 + 8);
        v5 = (int)v5;
        do
        {
          v7 = *v6++;
          *(_DWORD *)(v7 + 12) = 0;
          --v5;
        }
        while ( v5 );
      }
      LogicGameObjectManager::getGameObjects(a2);
      v9 = (_QWORD *)v8;
      v10 = *(_DWORD *)(v8 + 12);
      if ( v10 >= 1 )
      {
        v11 = 0;
        do
        {
          v12 = *(const LogicGameObject **)(*v9 + 8 * v11);
          if ( (a3 & 1) != 0 || !LogicGameObject::getMovementComponent(*(GameMode **)(*v9 + 8 * v11)) )
            LogicSpacePartition::addObject((LogicSpacePartition *)a1, v12);
          ++v11;
        }
        while ( v10 != (_DWORD)v11 );
      }
    }

    int *__fastcall LogicSpacePartition::clear(int *result)
    {
      __int64 v1; // x8
      __int64 v2; // x9
      __int64 v3; // x10
    
      v1 = result[1] * (__int64)*result;
      if ( (int)v1 >= 1 )
      {
        v2 = 0;
        v3 = *((_QWORD *)result + 1);
        do
          *(_DWORD *)(*(_QWORD *)(v3 + 8 * v2++) + 12LL) = 0;
        while ( v2 < v1 );
      }
      return result;
    }

    __int64 __fastcall LogicSpacePartition::addObject(__int64 a1, GameMode *a2)
    {
      __int64 result; // x0
      int v5; // w20
      int v6; // w23
      int v7; // w24
      int v8; // w22
      int v9; // w22
      int v10; // w20
      int v11; // w25
      GameMode *v13; // [xsp+8h] [xbp-48h] BYREF
    
      v13 = a2;
      result = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)a2 + 112LL))(a2);
      v5 = result;
      if ( (int)result >= 1 )
      {
        v6 = (int)(LogicGameObject::getX(a2) - result) >> 10;
        v7 = LogicGameObject::getX(a2) + v5;
        v8 = LogicGameObject::getY(a2);
        result = LogicGameObject::getY(a2);
        if ( v6 <= v7 >> 10 )
        {
          v9 = (v8 - v5) >> 10;
          v10 = ((int)result + v5) >> 10;
          do
          {
            if ( v9 <= v10 )
            {
              v11 = v9 - 1;
              do
              {
                ++v11;
                if ( (v6 & 0x80000000) == 0 && (v11 & 0x80000000) == 0 && *(_DWORD *)a1 > v6 && *(_DWORD *)(a1 + 4) > v11 )
                {
                  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (v6 + *(_DWORD *)a1 * v11));
                  if ( result )
                    result = LogicArrayList<LogicGameObject const*>::add(result, &v13);
                }
              }
              while ( v11 < v10 );
            }
          }
          while ( v6++ < v7 >> 10 );
        }
      }
      return result;
    }

    __int64 __fastcall LogicSpacePartition::getIntersectingObjects(Screen *this, const #1240 *a2, int a3)
    {
      return LogicSpacePartition::getIntersectingObjects(this, *(_DWORD *)a2, *((_DWORD *)a2 + 1), a3);
    }

    __int64 __fastcall LogicSpacePartition::getIntersectingObjects(Screen *this, unsigned int a2, int a3, int a4)
    {
      __int64 result; // x0
      int v7; // w24
      int v8; // w27
      int v9; // w25
      __int64 v10; // x26
      int v11; // w28
      __int64 v12; // x20
      GameMode *v13; // x23
      int v14; // w22
      __int64 Position; // x0
      bool v16; // cc
      int v17; // w8
      __int64 *v18; // x9
      __int64 v19; // t1
      int v20; // [xsp+8h] [xbp-68h]
      int v21; // [xsp+Ch] [xbp-64h]
      GameMode *v23; // [xsp+18h] [xbp-58h] BYREF
    
      result = *((_QWORD *)this + 2);
      *(_DWORD *)(result + 12) = 0;
      v7 = (int)(a2 - a4) >> 10;
      if ( v7 <= (int)(a4 + a2) >> 10 )
      {
        v20 = (int)(a4 + a2) >> 10;
        v21 = (a3 - a4) >> 10;
        v8 = (a4 + a3) >> 10;
        do
        {
          if ( v21 <= v8 )
          {
            v9 = v21;
            do
            {
              if ( (v7 & 0x80000000) == 0 && (v9 & 0x80000000) == 0 && *(_DWORD *)this > v7 && *((_DWORD *)this + 1) > v9 )
              {
                v10 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * (v7 + *(_DWORD *)this * v9));
                if ( v10 )
                {
                  v11 = *(_DWORD *)(v10 + 12);
                  if ( v11 >= 1 )
                  {
                    v12 = 0;
                    do
                    {
                      v13 = *(GameMode **)(*(_QWORD *)v10 + 8 * v12);
                      v23 = v13;
                      if ( !*((_BYTE *)v13 + 21) )
                      {
                        v14 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v13 + 112LL))(v13) + a4;
                        Position = LogicGameObject::getPosition(v13);
                        if ( (int)LogicVector2::getDistanceSquaredTo(Position, a2) < v14 * v14 )
                        {
                          LogicArrayList<LogicGameObject const*>::add(*((_QWORD *)this + 2), &v23);
                          *((_BYTE *)v13 + 21) = 1;
                        }
                      }
                      ++v12;
                    }
                    while ( v11 != (_DWORD)v12 );
                  }
                }
              }
              v16 = v9++ < v8;
            }
            while ( v16 );
          }
          v16 = v7++ < v20;
        }
        while ( v16 );
        result = *((_QWORD *)this + 2);
        v17 = *(_DWORD *)(result + 12);
        if ( v17 >= 1 )
        {
          v18 = *(__int64 **)result;
          do
          {
            v19 = *v18++;
            *(_BYTE *)(v19 + 21) = 0;
            --v17;
          }
          while ( v17 );
        }
      }
      return result;
    }

}; // end class LogicSpacePartition
