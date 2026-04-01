class LogicArrayList<char>
{
public:

    void __fastcall LogicArrayList<char>::ensureCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x0
      __int64 v5; // x21
      char *v6; // x0
      int v7; // w8
      int v8; // w8
      _BYTE *v9; // x9
      char v10; // t1
    
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
          v9 = (_BYTE *)v5;
          do
          {
            v10 = *v6++;
            *v9++ = v10;
            --v8;
          }
          while ( v8 > 1 );
          v6 = *(char **)a1;
        }
        if ( v6 )
          operator delete[](v6);
        *(_QWORD *)a1 = v5;
        *(_DWORD *)(a1 + 8) = a2;
      }
    }

    void __fastcall LogicArrayList<char>::add(__int64 a1, char *a2)
    {
      int v4; // w8
      int v5; // w8
      int v6; // w1
      char v7; // w9
    
      v4 = *(_DWORD *)(a1 + 12);
      if ( v4 == *(_DWORD *)(a1 + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        LogicArrayList<char>::ensureCapacity(a1, v6);
        v4 = *(_DWORD *)(a1 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(a1 + 12) = v4 + 1;
      *(_BYTE *)(*(_QWORD *)a1 + v4) = v7;
    }

    __int64 __fastcall LogicArrayList<char>::remove(__int64 *a1, __int64 a2)
    {
      __int64 v2; // x8
      __int64 v3; // x10
      char v4; // w9
      _BYTE *v5; // x10
      int v6; // w8
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *((unsigned int *)a1 + 3);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.remove out of bounds %d/%d", (__int64)&v8, a2, v2);
        Debugger::error(&v8);
      }
      v3 = *a1;
      v4 = *(_BYTE *)(*a1 + (int)a2);
      *((_DWORD *)a1 + 3) = v2 - 1;
      if ( (int)v2 - 1 > (int)a2 && (int)v2 - 1 - (int)a2 >= 1 )
      {
        v5 = (_BYTE *)((int)a2 + v3 + 1);
        v6 = v2 - a2;
        do
        {
          *(v5 - 1) = *v5;
          --v6;
          ++v5;
        }
        while ( v6 > 1 );
      }
      return (unsigned int)v4;
    }

}; // end class LogicArrayList<char>
