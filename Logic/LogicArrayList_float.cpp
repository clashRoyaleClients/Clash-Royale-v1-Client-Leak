class LogicArrayList<float>
{
public:

    __int64 __fastcall LogicArrayList<float>::add(__int64 result, int *a2)
    {
      __int64 v3; // x19
      int v4; // w8
      unsigned int v5; // w8
      __int64 v6; // x1
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
        result = LogicArrayList<float>::ensureCapacity(result, v6);
        v4 = *(_DWORD *)(v3 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(v3 + 12) = v4 + 1;
      *(_DWORD *)(*(_QWORD *)v3 + 4LL * v4) = v7;
      return result;
    }

    __int64 *__fastcall LogicArrayList<float>::remove(__int64 *result, __int64 a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      _DWORD *v4; // x9
      int v5; // w8
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *((unsigned int *)result + 3);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.remove out of bounds %d/%d", (__int64)&v6, a2, v2);
        Debugger::error(&v6);
      }
      v3 = *result;
      *((_DWORD *)result + 3) = v2 - 1;
      if ( (int)v2 - 1 > (int)a2 && (int)v2 - 1 - (int)a2 >= 1 )
      {
        v4 = (_DWORD *)(v3 + 4LL * (int)a2 + 4);
        v5 = v2 - a2;
        do
        {
          *(v4 - 1) = *v4;
          --v5;
          ++v4;
        }
        while ( v5 > 1 );
      }
      return result;
    }

    void __fastcall LogicArrayList<float>::ensureCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x0
      __int64 v5; // x21
      int *v6; // x0
      int v7; // w8
      int v8; // w8
      int *v9; // x9
      _DWORD *v10; // x10
      int v11; // t1
    
      if ( *(_DWORD *)(a1 + 8) < a2 )
      {
        if ( is_mul_ok(a2, 4u) )
          v4 = 4LL * a2;
        else
          v4 = -1;
        v5 = operator new[](v4);
        v6 = *(int **)a1;
        v7 = *(_DWORD *)(a1 + 12);
        if ( v7 >= 1 )
        {
          v8 = v7 + 1;
          v9 = *(int **)a1;
          v10 = (_DWORD *)v5;
          do
          {
            v11 = *v9++;
            *v10++ = v11;
            --v8;
          }
          while ( v8 > 1 );
        }
        if ( v6 )
          operator delete[](v6);
        *(_QWORD *)a1 = v5;
        *(_DWORD *)(a1 + 8) = a2;
      }
    }

}; // end class LogicArrayList<float>
