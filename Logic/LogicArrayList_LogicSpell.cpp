class LogicArrayList<LogicSpell *>
{
public:

    __int64 __fastcall LogicArrayList<LogicSpell *>::add(__int64 result, __int64 *a2)
    {
      __int64 v3; // x19
      int v4; // w8
      unsigned int v5; // w8
      __int64 v6; // x1
      __int64 v7; // x9
    
      v3 = result;
      v4 = *(_DWORD *)(result + 12);
      if ( v4 == *(_DWORD *)(result + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        result = LogicArrayList<LogicSpell *>::ensureCapacity(result, v6);
        v4 = *(_DWORD *)(v3 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(v3 + 12) = v4 + 1;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v4) = v7;
      return result;
    }

    __int64 __fastcall LogicArrayList<LogicSpell *>::ensureCapacity(__int64 result, int a2)
    {
      __int64 v3; // x20
      __int64 v4; // x0
      __int64 v5; // x21
      int v6; // w8
      int v7; // w8
      _QWORD *v8; // x9
      __int64 v9; // t1
    
      v3 = result;
      if ( *(_DWORD *)(result + 8) < a2 )
      {
        if ( is_mul_ok(a2, 8u) )
          v4 = 8LL * a2;
        else
          v4 = -1;
        v5 = operator new[](v4);
        result = *(_QWORD *)v3;
        v6 = *(_DWORD *)(v3 + 12);
        if ( v6 >= 1 )
        {
          v7 = v6 + 1;
          v8 = (_QWORD *)v5;
          do
          {
            v9 = *(_QWORD *)result;
            result += 8;
            *v8++ = v9;
            --v7;
          }
          while ( v7 > 1 );
          result = *(_QWORD *)v3;
        }
        if ( result )
          result = operator delete[](result);
        *(_QWORD *)v3 = v5;
        *(_DWORD *)(v3 + 8) = a2;
      }
      return result;
    }

    __int64 __fastcall LogicArrayList<LogicSpell *>::remove(__int64 *a1, int a2)
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

    __int64 __fastcall LogicArrayList<LogicSpell *>::LogicArrayList(__int64 a1, __int64 a2)
    {
      unsigned __int64 v4; // x21
      __int64 v5; // x0
      _QWORD *v6; // x0
      __int64 *v7; // x8
      int v8; // w9
      __int64 v9; // t1
    
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v4 = *(int *)(a2 + 12);
      *(_DWORD *)(a1 + 8) = v4;
      *(_DWORD *)(a1 + 12) = v4;
      if ( is_mul_ok(v4, 8u) )
        v5 = 8 * v4;
      else
        v5 = -1;
      v6 = (_QWORD *)operator new[](v5);
      *(_QWORD *)a1 = v6;
      if ( (int)v4 >= 1 )
      {
        v7 = *(__int64 **)a2;
        v8 = v4 + 1;
        do
        {
          v9 = *v7++;
          *v6++ = v9;
          --v8;
        }
        while ( v8 > 1 );
      }
      return a1;
    }

}; // end class LogicArrayList<LogicSpell *>
