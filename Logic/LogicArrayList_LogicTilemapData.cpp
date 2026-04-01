class LogicArrayList<LogicTilemapData *>
{
public:

    __int64 *__fastcall LogicArrayList<LogicTilemapData *>::~LogicArrayList(__int64 *a1)
    {
      __int64 v2; // x0
    
      v2 = *a1;
      if ( v2 )
        operator delete[](v2);
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

    void __fastcall LogicArrayList<LogicTilemapData *>::ensureCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x0
      __int64 v5; // x21
      __int64 *v6; // x0
      int v7; // w8
      int v8; // w8
      _QWORD *v9; // x9
      __int64 v10; // t1
    
      if ( *(_DWORD *)(a1 + 8) < a2 )
      {
        if ( is_mul_ok(a2, 8u) )
          v4 = 8LL * a2;
        else
          v4 = -1;
        v5 = operator new[](v4);
        v6 = *(__int64 **)a1;
        v7 = *(_DWORD *)(a1 + 12);
        if ( v7 >= 1 )
        {
          v8 = v7 + 1;
          v9 = (_QWORD *)v5;
          do
          {
            v10 = *v6++;
            *v9++ = v10;
            --v8;
          }
          while ( v8 > 1 );
          v6 = *(__int64 **)a1;
        }
        if ( v6 )
          operator delete[](v6);
        *(_QWORD *)a1 = v5;
        *(_DWORD *)(a1 + 8) = a2;
      }
    }

    void __fastcall LogicArrayList<LogicTilemapData *>::add(__int64 a1, __int64 *a2)
    {
      int v4; // w8
      int v5; // w8
      int v6; // w1
      __int64 v7; // x9
    
      v4 = *(_DWORD *)(a1 + 12);
      if ( v4 == *(_DWORD *)(a1 + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        LogicArrayList<LogicTilemapData *>::ensureCapacity(a1, v6);
        v4 = *(_DWORD *)(a1 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(a1 + 12) = v4 + 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * v4) = v7;
    }

}; // end class LogicArrayList<LogicTilemapData *>
