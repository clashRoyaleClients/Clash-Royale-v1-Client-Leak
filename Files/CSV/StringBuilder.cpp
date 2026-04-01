class StringBuilder
{
public:

    #1329 *__fastcall StringBuilder::append(#1329 *a1, __int64 a2)
    {
      int v4; // w8
      int v5; // w9
      int v6; // w11
      const char *v7; // x1
    
      v4 = *(_DWORD *)(a2 + 4);
      v5 = *(_DWORD *)a1;
      v6 = *((_DWORD *)a1 + 1);
      if ( v6 - *(_DWORD *)a1 < v4 + 1 )
      {
        StringBuilder::allocate(a1, 2 * (v6 + v4 + 1));
        v5 = *(_DWORD *)a1;
        v4 = *(_DWORD *)(a2 + 4);
      }
      v7 = (const char *)(a2 + 8);
      if ( v4 + 1 > 8 )
        v7 = *(const char **)v7;
      strcpy((char *)(*((_QWORD *)a1 + 1) + v5 - 1LL), v7);
      *(_DWORD *)a1 += *(_DWORD *)(a2 + 4);
      return a1;
    }

    #1329 *__fastcall StringBuilder::append(#1329 *a1, unsigned int *a2, __int64 a3, int a4)
    {
      __int64 v7; // x8
      int v8; // w20
      int v9; // w22
      int v10; // w8
      int v11; // w10
      void *v12; // x0
      _QWORD *v13; // x8
      __int64 v14; // x8
      const String *v15; // x1
      __int64 v17; // [xsp+18h] [xbp-38h] BYREF
    
      v7 = *a2;
      if ( (int)v7 <= (int)a3 )
      {
        if ( (int)v7 < (int)a3 )
        {
          String::format((String *)"StringBuilder::append invalid start %d/%d", (__int64)&v17, a3, v7);
          Debugger::error((Debugger *)&v17, v15);
        }
      }
      else
      {
        v8 = String::offsetAt((__int64)a2, a3);
        v9 = String::offsetAt((__int64)a2, a4) - v8;
        v10 = *(_DWORD *)a1;
        v11 = *((_DWORD *)a1 + 1);
        if ( v11 - *(_DWORD *)a1 < v9 + 1 )
        {
          StringBuilder::allocate(a1, 2 * (v9 + 1 + v11));
          v10 = *(_DWORD *)a1;
        }
        v12 = (void *)(*((_QWORD *)a1 + 1) + v10 - 1LL);
        v13 = a2 + 2;
        if ( (int)(a2[1] + 1) > 8 )
          v13 = (_QWORD *)*v13;
        memcpy(v12, (char *)v13 + v8, v9);
        v14 = *(int *)a1 + (__int64)v9;
        *(_DWORD *)a1 = v14;
        *(_BYTE *)(v14 + *((_QWORD *)a1 + 1) - 1) = 0;
      }
      return a1;
    }

    void __usercall StringBuilder::createString(__int64 a1@<X0>, String *a2@<X8>)
    {
      String::String(a2, *(const char **)(a1 + 8), *(_DWORD *)a1 - 1);
    }

    _QWORD *__fastcall StringBuilder::~StringBuilder(_QWORD *a1)
    {
      __int64 v2; // x0
    
      v2 = a1[1];
      if ( v2 )
        operator delete[](v2);
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

    void __fastcall StringBuilder::allocate(#1329 *this, int a2)
    {
      __int64 v4; // x0
      void *v5; // x0
      void *v6; // x21
      __int64 v7; // x22
    
      if ( a2 < 0LL )
        v4 = -1;
      else
        v4 = a2;
      v5 = (void *)operator new[](v4);
      v6 = v5;
      v7 = *((_QWORD *)this + 1);
      if ( v7 )
      {
        memcpy(v5, *((const void **)this + 1), *(int *)this);
        operator delete[](v7);
      }
      *((_QWORD *)this + 1) = v6;
      *((_DWORD *)this + 1) = a2;
    }

    void __fastcall StringBuilder::StringBuilder(StringBuilder *this)
    {
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      StringBuilder::allocate(this, 128);
      **((_BYTE **)this + 1) = 0;
      *(_DWORD *)this = 1;
    }

    #1329 *__fastcall StringBuilder::append(#1329 *a1, const char *a2)
    {
      int v4; // w21
      int v5; // w8
      int v6; // w10
    
      v4 = strlen(a2);
      v5 = *(_DWORD *)a1;
      v6 = *((_DWORD *)a1 + 1);
      if ( v6 - *(_DWORD *)a1 < v4 + 1 )
      {
        StringBuilder::allocate(a1, 2 * (v4 + 1 + v6));
        v5 = *(_DWORD *)a1;
      }
      strcpy((char *)(*((_QWORD *)a1 + 1) + v5 - 1LL), a2);
      *(_DWORD *)a1 += v4;
      return a1;
    }

    #1329 *__fastcall StringBuilder::append(#1329 *a1, char a2)
    {
      int v4; // w8
      int v5; // w9
      __int64 v6; // x8
    
      v4 = *(_DWORD *)a1;
      v5 = *((_DWORD *)a1 + 1);
      if ( v5 - *(_DWORD *)a1 <= 1 )
      {
        StringBuilder::allocate(a1, 2 * v5 + 4);
        v4 = *(_DWORD *)a1;
      }
      *(_BYTE *)(*((_QWORD *)a1 + 1) + v4 - 1LL) = a2;
      v6 = *(int *)a1;
      *(_DWORD *)a1 = v6 + 1;
      *(_BYTE *)(*((_QWORD *)a1 + 1) + v6) = 0;
      return a1;
    }

    #1329 *__fastcall StringBuilder::byteOffsetAppend(#1329 *a1, __int64 a2, __int64 a3, int a4)
    {
      int v4; // w20
      __int64 v7; // x8
      int v8; // w22
      int v9; // w10
      int v10; // w9
      int v11; // w11
      void *v12; // x0
      int v13; // w9
      _QWORD *v14; // x8
      __int64 v15; // x8
      const String *v16; // x1
      __int64 v18; // [xsp+18h] [xbp-38h] BYREF
    
      v4 = a3;
      v7 = *(unsigned int *)(a2 + 4);
      if ( (int)v7 <= (int)a3 )
      {
        if ( (int)v7 < (int)a3 )
        {
          String::format((String *)"StringBuilder::byteOffsetAppend invalid beginOffset %d/%d", (__int64)&v18, a3, v7);
          Debugger::error((Debugger *)&v18, v16);
        }
      }
      else
      {
        v8 = a4 - a3;
        v9 = a4 - a3 + 1;
        v10 = *(_DWORD *)a1;
        v11 = *((_DWORD *)a1 + 1);
        if ( v11 - *(_DWORD *)a1 < v9 )
        {
          StringBuilder::allocate(a1, 2 * (v11 + v9));
          v10 = *(_DWORD *)a1;
          LODWORD(v7) = *(_DWORD *)(a2 + 4);
        }
        v12 = (void *)(*((_QWORD *)a1 + 1) + v10 - 1LL);
        v13 = v7 + 1;
        v14 = (_QWORD *)(a2 + 8);
        if ( v13 > 8 )
          v14 = (_QWORD *)*v14;
        memcpy(v12, (char *)v14 + v4, v8);
        v15 = *(int *)a1 + (__int64)v8;
        *(_DWORD *)a1 = v15;
        *(_BYTE *)(v15 + *((_QWORD *)a1 + 1) - 1) = 0;
      }
      return a1;
    }

    #1329 *__fastcall StringBuilder::appendCodePoint(#1329 *a1, unsigned int a2)
    {
      int v3; // w20
      int v4; // w8
      int v5; // w10
      char __s[4]; // [xsp+8h] [xbp-18h] BYREF
      char v8; // [xsp+Ch] [xbp-14h]
    
      v8 = 0;
      *(_DWORD *)__s = 0;
      if ( a2 > 0x7F )
      {
        if ( a2 > 0x7FF )
        {
          if ( HIWORD(a2) )
          {
            if ( !(a2 >> 17) )
            {
              __s[0] = (a2 >> 18) - 16;
              __s[1] = (a2 >> 12) & 0x3F | 0x80;
              __s[2] = (a2 >> 6) & 0x3F | 0x80;
              __s[3] = a2 & 0x3F | 0x80;
            }
          }
          else
          {
            __s[0] = (a2 >> 12) - 32;
            __s[1] = (a2 >> 6) & 0x3F | 0x80;
            __s[2] = a2 & 0x3F | 0x80;
          }
        }
        else
        {
          __s[0] = (a2 >> 6) - 64;
          __s[1] = a2 & 0x3F | 0x80;
        }
      }
      else
      {
        __s[0] = a2;
      }
      v3 = strlen(__s);
      v4 = *(_DWORD *)a1;
      v5 = *((_DWORD *)a1 + 1);
      if ( v5 - *(_DWORD *)a1 < v3 + 1 )
      {
        StringBuilder::allocate(a1, 2 * (v3 + 1 + v5));
        v4 = *(_DWORD *)a1;
      }
      strcpy((char *)(*((_QWORD *)a1 + 1) + v4 - 1LL), __s);
      *(_DWORD *)a1 += v3;
      return a1;
    }

    String *__fastcall StringBuilder::toString(__int64 a1)
    {
      String *v2; // x19
    
      v2 = (String *)operator new(24);
      String::String(v2, *(const char **)(a1 + 8), *(_DWORD *)a1 - 1);
      return v2;
    }

}; // end class StringBuilder
