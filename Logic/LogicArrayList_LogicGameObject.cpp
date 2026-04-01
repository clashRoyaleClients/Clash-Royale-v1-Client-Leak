class LogicArrayList<LogicGameObject *>
{
public:

    __int64 __fastcall LogicArrayList<LogicGameObject *>::remove(__int64 *a1, int a2)
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

    __int64 __fastcall LogicArrayList<LogicGameObject *>::add(__int64 result, __int64 *a2)
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
        result = LogicArrayList<LogicGameObject *>::ensureCapacity(result, v6);
        v4 = *(_DWORD *)(v3 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(v3 + 12) = v4 + 1;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v4) = v7;
      return result;
    }

    __int64 __fastcall LogicArrayList<LogicGameObject *>::add(__int64 result, int a2, _QWORD *a3)
    {
      __int64 v5; // x19
      int v6; // w8
      unsigned int v7; // w8
      __int64 v8; // x1
      __int64 v9; // x10
      _QWORD *v10; // x11
    
      v5 = result;
      v6 = *(_DWORD *)(result + 12);
      if ( v6 == *(_DWORD *)(result + 8) )
      {
        v7 = 2 * v6;
        if ( v7 )
          v8 = v7;
        else
          v8 = 5;
        result = LogicArrayList<LogicGameObject *>::ensureCapacity(result, v8);
        v6 = *(_DWORD *)(v5 + 12);
      }
      if ( v6 > a2 )
      {
        v9 = v6;
        do
        {
          v10 = (_QWORD *)(*(_QWORD *)v5 + 8 * v9--);
          *v10 = *(v10 - 1);
        }
        while ( v9 > a2 );
      }
      *(_QWORD *)(*(_QWORD *)v5 + 8LL * a2) = *a3;
      *(_DWORD *)(v5 + 12) = v6 + 1;
      return result;
    }

    __int64 __fastcall LogicArrayList<LogicGameObject *>::addAll(__int64 a1, __int64 a2)
    {
      int v4; // w22
      unsigned int v5; // w21
      __int64 result; // x0
      __int64 v7; // x8
      __int64 v8; // x9
    
      v4 = *(_DWORD *)(a2 + 12);
      v5 = *(_DWORD *)(a1 + 12) + v4;
      result = LogicArrayList<LogicGameObject *>::ensureCapacity(a1, v5);
      if ( v4 >= 1 )
      {
        v7 = 0;
        v8 = 8LL * *(int *)(a1 + 12);
        do
        {
          *(_QWORD *)(*(_QWORD *)a1 + v8 + 8 * v7) = *(_QWORD *)(*(_QWORD *)a2 + 8 * v7);
          ++v7;
        }
        while ( v4 != (_DWORD)v7 );
      }
      *(_DWORD *)(a1 + 12) = v5;
      return result;
    }

    void __fastcall LogicArrayList<LogicGameObject *>::ensureCapacity(__int64 a1, int a2)
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

}; // end class LogicArrayList<LogicGameObject *>
