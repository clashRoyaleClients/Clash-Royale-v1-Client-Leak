class LogicArrayList<GameFontMapping>
{
public:

    __int64 __fastcall LogicArrayList<GameFontMapping>::add(__int64 a1)
    {
      int v2; // w8
      unsigned int v3; // w8
      __int64 v4; // x1
      String *v5; // x20
    
      v2 = *(_DWORD *)(a1 + 12);
      if ( v2 == *(_DWORD *)(a1 + 8) )
      {
        v3 = 2 * v2;
        if ( v3 )
          v4 = v3;
        else
          v4 = 5;
        LogicArrayList<GameFontMapping>::ensureCapacity(a1, v4);
        v2 = *(_DWORD *)(a1 + 12);
      }
      *(_DWORD *)(a1 + 12) = v2 + 1;
      v5 = (String *)(*(_QWORD *)a1 + 48LL * v2);
      String::operator=(v5);
      return String::operator=(v5 + 1);
    }

    String *__usercall LogicArrayList<GameFontMapping>::remove@<X0>(__int64 a1@<X0>, const char *a2@<X1>, String *a3@<X8>)
    {
      int v3; // w21
      __int64 v6; // x8
      const String *v7; // x1
      const String *v8; // x23
      String *result; // x0
      int v10; // w8
      String v11; // [xsp+18h] [xbp-48h] BYREF
    
      v3 = (int)a2;
      v6 = *(unsigned int *)(a1 + 12);
      if ( ((unsigned int)a2 & 0x80000000) != 0 || (int)v6 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.remove out of bounds %d/%d", a2, a2, v6);
        Debugger::error((Debugger *)&v11, v7);
      }
      v8 = (const String *)(*(_QWORD *)a1 + 48LL * (int)a2);
      String::String(a3, v8);
      result = String::String(a3 + 1, v8 + 1);
      v10 = *(_DWORD *)(a1 + 12) - 1;
      *(_DWORD *)(a1 + 12) = v10;
      if ( v10 > v3 )
        return (String *)LogicArrayList<GameFontMapping>::arrayCopy(
                           a1,
                           *(_QWORD *)a1 + 48LL * v3,
                           *(_QWORD *)a1 + 48LL * v3 + 48,
                           (unsigned int)(v10 - v3));
      return result;
    }

    __int64 *__fastcall LogicArrayList<GameFontMapping>::~LogicArrayList(__int64 *a1)
    {
      __int64 v2; // x22
      __int64 v3; // x21
      __int64 v4; // x23
    
      v2 = *a1;
      if ( *a1 )
      {
        v3 = *(_QWORD *)(v2 - 8);
        if ( v3 )
        {
          v4 = 0;
          do
          {
            String::~String();
            String::~String();
            v4 -= 48;
          }
          while ( 48 * v3 + v4 );
        }
        operator delete[](v2 - 16);
      }
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

    void __fastcall LogicArrayList<GameFontMapping>::ensureCapacity(__int64 *a1, int a2)
    {
      __int64 v4; // x9
      bool v5; // cf
      __int64 v6; // x9
      __int64 v7; // x0
      _QWORD *v8; // x21
      __int64 v9; // x22
      __int64 v10; // x23
      __int64 v11; // x24
      __int64 v12; // x25
    
      if ( *((_DWORD *)a1 + 2) < a2 )
      {
        v4 = 48LL * a2;
        v5 = __CFADD__(v4, 16);
        v6 = v4 + 16;
        if ( v5 )
          v6 = -1;
        if ( is_mul_ok(a2, 0x30u) )
          v7 = v6;
        else
          v7 = -1;
        v8 = (_QWORD *)operator new[](v7);
        *v8 = 48;
        v8[1] = a2;
        if ( a2 )
        {
          v9 = 0;
          do
          {
            String::String((String *)&v8[v9 + 2]);
            String::String((String *)&v8[v9 + 5]);
            v9 += 6;
          }
          while ( 6LL * a2 != v9 );
        }
        LogicArrayList<GameFontMapping>::arrayCopy(a1, v8 + 2, *a1, *((unsigned int *)a1 + 3));
        v10 = *a1;
        if ( *a1 )
        {
          v11 = *(_QWORD *)(v10 - 8);
          if ( v11 )
          {
            v12 = 0;
            do
            {
              String::~String();
              String::~String();
              v12 -= 48;
            }
            while ( 48 * v11 + v12 );
          }
          operator delete[](v10 - 16);
        }
        *a1 = (__int64)(v8 + 2);
        *((_DWORD *)a1 + 2) = a2;
      }
    }

    __int64 __fastcall LogicArrayList<GameFontMapping>::arrayCopy(__int64 a1, String *a2, __int64 a3, int a4)
    {
      int v6; // w21
      __int64 result; // x0
    
      if ( a4 >= 1 )
      {
        v6 = a4 + 1;
        do
        {
          String::operator=(a2);
          result = String::operator=(a2 + 1);
          --v6;
          a2 += 2;
          a3 += 48;
        }
        while ( v6 > 1 );
      }
      return result;
    }

}; // end class LogicArrayList<GameFontMapping>
