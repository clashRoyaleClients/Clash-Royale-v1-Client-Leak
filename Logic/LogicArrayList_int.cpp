class LogicArrayList<int>
{
public:

    __int64 __fastcall LogicArrayList<int>::ensureCapacity(__int64 result, int a2)
    {
      __int64 v3; // x20
      __int64 v4; // x0
      __int64 v5; // x21
      int v6; // w8
      int v7; // w8
      int *v8; // x9
      _DWORD *v9; // x10
      int v10; // t1
    
      v3 = result;
      if ( *(_DWORD *)(result + 8) < a2 )
      {
        if ( is_mul_ok(a2, 4u) )
          v4 = 4LL * a2;
        else
          v4 = -1;
        v5 = operator new[](v4);
        result = *(_QWORD *)v3;
        v6 = *(_DWORD *)(v3 + 12);
        if ( v6 >= 1 )
        {
          v7 = v6 + 1;
          v8 = *(int **)v3;
          v9 = (_DWORD *)v5;
          do
          {
            v10 = *v8++;
            *v9++ = v10;
            --v7;
          }
          while ( v7 > 1 );
        }
        if ( result )
          result = operator delete[](result);
        *(_QWORD *)v3 = v5;
        *(_DWORD *)(v3 + 8) = a2;
      }
      return result;
    }

    __int64 __fastcall LogicArrayList<int>::add(__int64 result, int *a2)
    {
      __int64 v3; // x19
      int v4; // w8
      int v5; // w8
      int v6; // w1
      int v7; // w9
    
      v3 = result;
      v4 = *(_DWORD *)(result + 12);
      if ( v4 == *(_DWORD *)(result + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        result = LogicArrayList<int>::ensureCapacity(result, v6);
        v4 = *(_DWORD *)(v3 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(v3 + 12) = v4 + 1;
      *(_DWORD *)(*(_QWORD *)v3 + 4LL * v4) = v7;
      return result;
    }

    __int64 __fastcall LogicArrayList<int>::remove(__int64 *a1, int a2)
    {
      __int64 v3; // x9
      __int64 result; // x0
      int v5; // w10
      _DWORD *v6; // x8
      int v7; // w9
    
      v3 = *a1;
      result = *(unsigned int *)(*a1 + 4LL * a2);
      v5 = *((_DWORD *)a1 + 3);
      *((_DWORD *)a1 + 3) = v5 - 1;
      if ( v5 - 1 > a2 && v5 - 1 - a2 >= 1 )
      {
        v6 = (_DWORD *)(v3 + 4LL * a2 + 4);
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

    __int64 __fastcall LogicArrayList<int>::addAll(__int64 a1, __int64 a2)
    {
      int v4; // w22
      int v5; // w20
      __int64 result; // x0
      int *v7; // x8
      _DWORD *v8; // x9
      int v9; // t1
    
      v4 = *(_DWORD *)(a2 + 12);
      v5 = *(_DWORD *)(a1 + 12) + v4;
      result = LogicArrayList<int>::ensureCapacity(a1, v5);
      if ( v4 >= 1 )
      {
        v7 = *(int **)a2;
        v8 = (_DWORD *)(*(_QWORD *)a1 + 4LL * *(int *)(a1 + 12));
        do
        {
          v9 = *v7++;
          *v8++ = v9;
          --v4;
        }
        while ( v4 );
      }
      *(_DWORD *)(a1 + 12) = v5;
      return result;
    }

    __int64 __fastcall LogicArrayList<int>::add(__int64 result, int a2, _DWORD *a3)
    {
      __int64 v5; // x19
      int v6; // w9
      int v7; // w1
      __int64 v8; // x8
      _DWORD *v9; // x9
    
      v5 = result;
      v6 = *(_DWORD *)(result + 12);
      if ( v6 == *(_DWORD *)(result + 8) )
      {
        if ( 2 * v6 )
          v7 = 2 * v6;
        else
          v7 = 5;
        result = LogicArrayList<int>::ensureCapacity(result, v7);
        v6 = *(_DWORD *)(v5 + 12);
      }
      if ( v6 > a2 )
      {
        v8 = v6;
        v9 = (_DWORD *)(*(_QWORD *)v5 + 4LL * v6);
        do
        {
          --v8;
          *v9 = *(v9 - 1);
          --v9;
        }
        while ( v8 > a2 );
      }
      *(_DWORD *)(*(_QWORD *)v5 + 4LL * a2) = *a3;
      ++*(_DWORD *)(v5 + 12);
      return result;
    }

}; // end class LogicArrayList<int>
