class LogicArrayList<BlockSFX>
{
public:

    __int64 __fastcall LogicArrayList<BlockSFX>::remove(__int64 *a1, int a2)
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

    __int64 __fastcall LogicArrayList<BlockSFX>::add(__int64 result, _QWORD *a2)
    {
      __int64 v3; // x20
      int v4; // w8
      unsigned int v5; // w8
      __int64 v6; // x1
    
      v3 = result;
      v4 = *(_DWORD *)(result + 12);
      if ( v4 == *(_DWORD *)(result + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        result = LogicArrayList<BlockSFX>::ensureCapacity(result, v6);
        v4 = *(_DWORD *)(v3 + 12);
      }
      *(_DWORD *)(v3 + 12) = v4 + 1;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v4) = *a2;
      return result;
    }

    void __fastcall LogicArrayList<BlockSFX>::ensureCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x0
      __int64 v5; // x0
      _QWORD *v6; // x21
      _QWORD *v7; // x9
      __int64 *v8; // x0
      int v9; // w8
      int v10; // w8
      _QWORD *v11; // x9
      __int64 v12; // t1
    
      if ( *(_DWORD *)(a1 + 8) < a2 )
      {
        if ( is_mul_ok(a2, 8u) )
          v4 = 8LL * a2;
        else
          v4 = -1;
        v5 = operator new[](v4);
        v6 = (_QWORD *)v5;
        if ( a2 )
        {
          v7 = (_QWORD *)v5;
          do
            *v7++ = 0;
          while ( v7 != (_QWORD *)(v5 + 8LL * a2) );
        }
        v8 = *(__int64 **)a1;
        v9 = *(_DWORD *)(a1 + 12);
        if ( v9 >= 1 )
        {
          v10 = v9 + 1;
          v11 = v6;
          do
          {
            v12 = *v8++;
            *v11++ = v12;
            --v10;
          }
          while ( v10 > 1 );
          v8 = *(__int64 **)a1;
        }
        if ( v8 )
          operator delete[](v8);
        *(_QWORD *)a1 = v6;
        *(_DWORD *)(a1 + 8) = a2;
      }
    }

}; // end class LogicArrayList<BlockSFX>
