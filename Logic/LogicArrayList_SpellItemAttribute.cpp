class LogicArrayList<SpellItemAttribute>
{
public:

    void __fastcall LogicArrayList<SpellItemAttribute>::ensureCapacity(__int64 *a1, int a2)
    {
      __int64 v4; // x9
      bool v5; // cf
      __int64 v6; // x9
      __int64 v7; // x0
      _QWORD *v8; // x21
      __int64 v9; // x22
      _QWORD *v10; // x23
      __int64 v11; // x22
      int v12; // w8
      int v13; // w21
      _QWORD *v14; // x24
      __int64 v15; // x24
      __int64 v16; // x25
      __int64 v17; // x8
      __int64 v18; // x27
      __int64 v19; // x28
    
      if ( *((_DWORD *)a1 + 2) < a2 )
      {
        v4 = 80LL * a2;
        v5 = __CFADD__(v4, 16);
        v6 = v4 + 16;
        if ( v5 )
          v6 = -1;
        if ( is_mul_ok(a2, 0x50u) )
          v7 = v6;
        else
          v7 = -1;
        v8 = (_QWORD *)operator new[](v7);
        *v8 = 80;
        v8[1] = a2;
        if ( a2 )
        {
          v9 = 0;
          do
          {
            String::String((String *)&v8[v9 + 3]);
            String::String((String *)&v8[v9 + 6]);
            v9 += 10;
          }
          while ( 10LL * a2 != v9 );
        }
        v10 = v8 + 2;
        v11 = *a1;
        v12 = *((_DWORD *)a1 + 3);
        if ( v12 >= 1 )
        {
          v13 = v12 + 1;
          v14 = v10;
          do
          {
            *v14 = *(_QWORD *)v11;
            String::operator=((String *)(v14 + 1));
            String::operator=((String *)(v14 + 4));
            *((_DWORD *)v14 + 18) = *(_DWORD *)(v11 + 72);
            *(_OWORD *)(v14 + 7) = *(_OWORD *)(v11 + 56);
            --v13;
            v11 += 80;
            v14 += 10;
          }
          while ( v13 > 1 );
          v11 = *a1;
        }
        if ( v11 )
        {
          v15 = *(_QWORD *)(v11 - 8);
          if ( v15 )
          {
            v16 = 0;
            v17 = 80 * v15 + v11;
            v18 = v17 - 72;
            v19 = v17 - 48;
            do
            {
              String::~String((String *)(v19 + v16));
              String::~String((String *)(v18 + v16));
              v16 -= 80;
            }
            while ( 80 * v15 + v16 );
          }
          operator delete[](v11 - 16);
        }
        *a1 = (__int64)v10;
        *((_DWORD *)a1 + 2) = a2;
      }
    }

    long double __fastcall LogicArrayList<SpellItemAttribute>::add(__int64 a1, __int64 a2)
    {
      int v4; // w8
      int v5; // w8
      int v6; // w1
      __int64 v7; // x20
      long double result; // q0
    
      v4 = *(_DWORD *)(a1 + 12);
      if ( v4 == *(_DWORD *)(a1 + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        LogicArrayList<SpellItemAttribute>::ensureCapacity((__int64 *)a1, v6);
        v4 = *(_DWORD *)(a1 + 12);
      }
      *(_DWORD *)(a1 + 12) = v4 + 1;
      v7 = *(_QWORD *)a1 + 80LL * v4;
      *(_QWORD *)v7 = *(_QWORD *)a2;
      String::operator=((String *)(v7 + 8));
      String::operator=((String *)(v7 + 32));
      *(_DWORD *)(v7 + 72) = *(_DWORD *)(a2 + 72);
      result = *(long double *)(a2 + 56);
      *(long double *)(v7 + 56) = result;
      return result;
    }

    __int64 *__fastcall LogicArrayList<SpellItemAttribute>::~LogicArrayList(__int64 *a1)
    {
      __int64 v2; // x21
      __int64 v3; // x22
      __int64 v4; // x23
      __int64 v5; // x8
      __int64 v6; // x25
      __int64 v7; // x26
    
      v2 = *a1;
      if ( *a1 )
      {
        v3 = *(_QWORD *)(v2 - 8);
        if ( v3 )
        {
          v4 = 0;
          v5 = 80 * v3 + v2;
          v6 = v5 - 72;
          v7 = v5 - 48;
          do
          {
            String::~String((String *)(v7 + v4));
            String::~String((String *)(v6 + v4));
            v4 -= 80;
          }
          while ( 80 * v3 + v4 );
        }
        operator delete[](v2 - 16);
      }
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

}; // end class LogicArrayList<SpellItemAttribute>
