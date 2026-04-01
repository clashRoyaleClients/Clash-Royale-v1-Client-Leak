class LogicArrayList<String>
{
public:

    __int64 __fastcall LogicArrayList<String>::add(__int64 a1)
    {
      int v2; // w8
      unsigned int v3; // w8
      __int64 v4; // x1
    
      v2 = *(_DWORD *)(a1 + 12);
      if ( v2 == *(_DWORD *)(a1 + 8) )
      {
        v3 = 2 * v2;
        if ( v3 )
          v4 = v3;
        else
          v4 = 5;
        LogicArrayList<String>::ensureCapacity(a1, v4);
        v2 = *(_DWORD *)(a1 + 12);
      }
      *(_DWORD *)(a1 + 12) = v2 + 1;
      return String::operator=((String *)(*(_QWORD *)a1 + 24LL * v2));
    }

    __int64 *__fastcall LogicArrayList<String>::~LogicArrayList(__int64 *a1)
    {
      __int64 v2; // x21
      __int64 v3; // x8
      __int64 v4; // x22
    
      v2 = *a1;
      if ( *a1 )
      {
        v3 = *(_QWORD *)(v2 - 8);
        if ( v3 )
        {
          v4 = 24 * v3;
          do
          {
            String::~String();
            v4 -= 24;
          }
          while ( v4 );
        }
        operator delete[](v2 - 16);
      }
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

    void __fastcall LogicArrayList<String>::ensureCapacity(String **a1, int a2)
    {
      __int64 v4; // x9
      bool v5; // cf
      __int64 v6; // x9
      __int64 v7; // x0
      _QWORD *v8; // x21
      __int64 v9; // x22
      String *v10; // x23
      String *v11; // x21
      int v12; // w8
      int v13; // w22
      String *v14; // x0
      String *v15; // x24
      __int64 v16; // x8
      __int64 v17; // x24
    
      if ( *((_DWORD *)a1 + 2) < a2 )
      {
        v4 = 24LL * a2;
        v5 = __CFADD__(v4, 16);
        v6 = v4 + 16;
        if ( v5 )
          v6 = -1;
        if ( is_mul_ok(a2, 0x18u) )
          v7 = v6;
        else
          v7 = -1;
        v8 = (_QWORD *)operator new[](v7);
        *v8 = 24;
        v8[1] = a2;
        if ( a2 )
        {
          v9 = 0;
          do
          {
            String::String((String *)&v8[v9 + 2]);
            v9 += 3;
          }
          while ( 3LL * a2 != v9 );
        }
        v10 = (String *)(v8 + 2);
        v11 = *a1;
        v12 = *((_DWORD *)a1 + 3);
        if ( v12 >= 1 )
        {
          v13 = v12 + 1;
          v14 = v10;
          do
          {
            v15 = v14 + 1;
            String::operator=(v14);
            --v13;
            ++v11;
            v14 = v15;
          }
          while ( v13 > 1 );
          v11 = *a1;
        }
        if ( v11 )
        {
          v16 = *(_QWORD *)&v11[-1].m_iteratorCacheByteOffset;
          if ( v16 )
          {
            v17 = 24 * v16;
            do
            {
              String::~String();
              v17 -= 24;
            }
            while ( v17 );
          }
          operator delete[](&v11[-1].internal);
        }
        *a1 = v10;
        *((_DWORD *)a1 + 2) = a2;
      }
    }

    String *__usercall LogicArrayList<String>::remove@<X0>(__int64 a1@<X0>, const char *a2@<X1>, String *a3@<X8>)
    {
      int v3; // w20
      __int64 v6; // x8
      const String *v7; // x1
      String *result; // x0
      int v9; // w8
      int v10; // w21
      String *v11; // x20
      _BYTE v12[24]; // [xsp+18h] [xbp-38h] BYREF
    
      v3 = (int)a2;
      v6 = *(unsigned int *)(a1 + 12);
      if ( ((unsigned int)a2 & 0x80000000) != 0 || (int)v6 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.remove out of bounds %d/%d", a2, a2, v6);
        Debugger::error((Debugger *)v12, v7);
      }
      result = String::String(a3, (const String *)(*(_QWORD *)a1 + 24LL * (int)a2));
      v9 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 12) = v9 - 1;
      if ( v9 - 1 > v3 && v9 - 1 - v3 >= 1 )
      {
        result = (String *)(*(_QWORD *)a1 + 24LL * v3);
        v10 = v9 - v3;
        do
        {
          v11 = result + 1;
          String::operator=(result);
          --v10;
          result = v11;
        }
        while ( v10 > 1 );
      }
      return result;
    }

    String *__fastcall LogicArrayList<String>::set(__int64 a1, __int64 a2, String *a3)
    {
      __int64 v3; // x8
      const String *v4; // x1
      String v6; // [xsp+18h] [xbp-38h] BYREF
    
      v3 = *(unsigned int *)(a1 + 12);
      if ( (a2 & 0x80000000) != 0 || (int)v3 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.set out of bounds %d/%d", (__int64)&v6, a2, v3);
        Debugger::error((Debugger *)&v6, v4);
      }
      return String::operator=((String *)(*(_QWORD *)a1 + 24LL * (int)a2), a3);
    }

    _QWORD *__fastcall LogicArrayList<String>::LogicArrayList(_QWORD *a1, int a2)
    {
      __int64 v4; // x22
      __int64 v5; // x9
      bool v6; // cf
      __int64 v7; // x9
      __int64 v8; // x0
      _QWORD *v9; // x19
      unsigned __int64 v10; // x22
      __int64 v11; // x21
    
      *a1 = 0;
      a1[1] = 0;
      *((_DWORD *)a1 + 2) = a2;
      v4 = a2;
      v5 = 24LL * a2;
      v6 = __CFADD__(v5, 16);
      v7 = v5 + 16;
      if ( v6 )
        v7 = -1;
      if ( is_mul_ok(a2, 0x18u) )
        v8 = v7;
      else
        v8 = -1;
      v9 = (_QWORD *)operator new[](v8);
      *v9 = 24;
      v9[1] = v4;
      if ( a2 )
      {
        v10 = 0;
        v11 = 24LL * a2;
        do
        {
          String::String((__int64)&v9[v10 / 8 + 2]);
          v10 += 24LL;
        }
        while ( v11 != v10 );
      }
      *a1 = v9 + 2;
      return a1;
    }

    __int64 __fastcall LogicArrayList<String>::indexOfString(__int64 a1, __int64 a2)
    {
      __int64 v4; // x22
      __int64 v5; // x19
    
      if ( *(int *)(a1 + 12) < 1 )
        return 0xFFFFFFFFLL;
      v4 = 0;
      v5 = 0;
      while ( !String::equals(*(_QWORD *)a1 + v4, a2) )
      {
        ++v5;
        v4 += 24;
        if ( v5 >= *(int *)(a1 + 12) )
          return 0xFFFFFFFFLL;
      }
      return v5;
    }

    __int64 *__fastcall LogicArrayList<String>::~LogicArrayList(__int64 *a1)
    {
      LogicArrayList<String>::~LogicArrayList(a1);
      return a1;
    }

}; // end class LogicArrayList<String>
