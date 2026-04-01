class LogicArrayList<bool>
{
public:

    __int64 __fastcall LogicArrayList<bool>::add(__int64 result, char *a2)
    {
      __int64 v3; // x19
      int v4; // w8
      unsigned int v5; // w8
      __int64 v6; // x1
      char v7; // w9
    
      v3 = result;
      v4 = *(_DWORD *)(result + 12);
      if ( v4 == *(_DWORD *)(result + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        result = LogicArrayList<bool>::ensureCapacity(result, v6);
        v4 = *(_DWORD *)(v3 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(v3 + 12) = v4 + 1;
      *(_BYTE *)(*(_QWORD *)v3 + v4) = v7;
      return result;
    }

    void __fastcall LogicArrayList<bool>::ensureCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x0
      __int64 v5; // x21
      char *v6; // x0
      int v7; // w8
      int v8; // w8
      char *v9; // x9
      _BYTE *v10; // x10
      char v11; // t1
    
      if ( *(_DWORD *)(a1 + 8) < a2 )
      {
        if ( a2 < 0LL )
          v4 = -1;
        else
          v4 = a2;
        v5 = operator new[](v4);
        v6 = *(char **)a1;
        v7 = *(_DWORD *)(a1 + 12);
        if ( v7 >= 1 )
        {
          v8 = v7 + 1;
          v9 = *(char **)a1;
          v10 = (_BYTE *)v5;
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

    bool __fastcall LogicArrayList<bool>::remove(__int64 *a1, int a2)
    {
      __int64 v2; // x9
      int v3; // w8
      int v4; // w10
      _BYTE *v5; // x9
      int v6; // w10
    
      v2 = *a1;
      v3 = *(unsigned __int8 *)(*a1 + a2);
      v4 = *((_DWORD *)a1 + 3);
      *((_DWORD *)a1 + 3) = v4 - 1;
      if ( v4 - 1 > a2 && v4 - 1 - a2 >= 1 )
      {
        v5 = (_BYTE *)(a2 + v2 + 1);
        v6 = v4 - a2;
        do
        {
          *(v5 - 1) = *v5;
          --v6;
          ++v5;
        }
        while ( v6 > 1 );
      }
      return v3 != 0;
    }

}; // end class LogicArrayList<bool>
