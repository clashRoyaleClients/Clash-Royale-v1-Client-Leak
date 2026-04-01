class LogicArrayList<Buff *>
{
public:

    __int64 __fastcall LogicArrayList<Buff *>::remove(__int64 *a1, int a2)
    {
      __int64 v3; // x9
      __int64 result; // x0
      int v5; // w10
      _QWORD *v6; // x8
      int v7; // w9
    
      v3 = *a1;
      result = *(_QWORD *)(*a1 + 8LL * a2);
      v5 = *((_DWORD *)a1 + 3);
      *((_DWORD *)a1 + 3) = v5 - 1;
      if ( v5 - 1 > a2 && v5 - 1 - a2 >= 1 )
      {
        v6 = (_QWORD *)(v3 + 8LL * a2 + 8);
        v7 = v5 - a2;
        do
        {
          *(v6 - 1) = *v6;
          --v7;
          ++v6;
        }
        while ( v7 > 1 );
      }
      return result;
    }

    void __fastcall LogicArrayList<Buff *>::ensureCapacity(__int64 a1, int a2)
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

    void __fastcall LogicArrayList<Buff *>::add(__int64 a1, int a2, _QWORD *a3)
    {
      int v6; // w8
      int v7; // w8
      int v8; // w1
      __int64 v9; // x10
      _QWORD *v10; // x11
    
      v6 = *(_DWORD *)(a1 + 12);
      if ( v6 == *(_DWORD *)(a1 + 8) )
      {
        v7 = 2 * v6;
        if ( v7 )
          v8 = v7;
        else
          v8 = 5;
        LogicArrayList<Buff *>::ensureCapacity(a1, v8);
        v6 = *(_DWORD *)(a1 + 12);
      }
      if ( v6 > a2 )
      {
        v9 = v6;
        do
        {
          v10 = (_QWORD *)(*(_QWORD *)a1 + 8 * v9--);
          *v10 = *(v10 - 1);
        }
        while ( v9 > a2 );
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) = *a3;
      *(_DWORD *)(a1 + 12) = v6 + 1;
    }

}; // end class LogicArrayList<Buff *>
