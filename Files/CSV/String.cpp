class String
{
public:

    void __fastcall String::allocate(__int64 a1, int a2)
    {
      int v4; // w9
      __int64 v6; // x0
      __int64 v7; // x8
      __int64 v8; // x0
    
      v4 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a1 + 4) = a2 - 1;
      if ( a2 - 1 > v4 || a2 < 9 != v4 + 1 < 9 )
      {
        if ( v4 + 1 >= 9 )
        {
          v6 = *(_QWORD *)(a1 + 8);
          if ( v6 )
            operator delete[](v6);
          *(_QWORD *)(a1 + 8) = 0;
        }
        if ( a2 >= 9 )
        {
          v7 = *(int *)(a1 + 4);
          if ( (int)v7 >= -1 )
            v8 = v7 + 1;
          else
            v8 = -1;
          *(_QWORD *)(a1 + 8) = operator new[](v8);
        }
      }
    }

    __int64 __fastcall String::String(__int64 a1)
    {
      _QWORD *v2; // x20
    
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v2 = (_QWORD *)(a1 + 8);
      String::allocate(a1, 1);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v2 = (_QWORD *)*v2;
      *(_BYTE *)v2 = 0;
      return a1;
    }

    __int64 __fastcall String::String(__int64 a1, _DWORD *a2, char a3)
    {
      char **v6; // x22
      char *v7; // x0
      const char *v8; // x1
      int v9; // w21
      __darwin_ct_rune_t v10; // w0
      __darwin_ct_rune_t v11; // w0
    
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v6 = (char **)(a1 + 8);
      String::allocate(a1, a2[1] + 1);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v7 = *v6;
      else
        v7 = (char *)v6;
      v8 = (const char *)(a2 + 2);
      if ( a2[1] + 1 > 8 )
        v8 = *(const char **)v8;
      strcpy(v7, v8);
      *(_DWORD *)a1 = *a2;
      v9 = *(_DWORD *)(a1 + 4);
      if ( v9 + 1 > 8 )
        v6 = (char **)*v6;
      if ( (a3 & 1) != 0 )
      {
        if ( v9 >= 1 )
        {
          do
          {
            v10 = *(char *)v6;
            if ( v10 != 127 )
              *(_BYTE *)v6 = __toupper(v10);
            --v9;
            v6 = (char **)((char *)v6 + 1);
          }
          while ( v9 );
        }
      }
      else if ( v9 > 0 )
      {
        do
        {
          v11 = *(char *)v6;
          if ( v11 != 127 )
            *(_BYTE *)v6 = __tolower(v11);
          --v9;
          v6 = (char **)((char *)v6 + 1);
        }
        while ( v9 );
      }
      return a1;
    }

    void __fastcall String::~String(__int64 a1)
    {
      __int64 v2; // x0
    
      if ( *(_DWORD *)(a1 + 4) + 1 >= 9 )
      {
        v2 = *(_QWORD *)(a1 + 8);
        if ( v2 )
          operator delete[](v2);
      }
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
    }

    __int64 __fastcall String::setContents(__int64 a1, const char *a2, int a3)
    {
      int v5; // w0
      size_t v6; // x2
      char **v7; // x21
      char *v8; // x0
      __int64 v9; // x8
    
      v5 = strnlen(a2, a3);
      String::allocate(a1, v5 + 1);
      v6 = *(int *)(a1 + 4);
      v7 = (char **)(a1 + 8);
      if ( (int)v6 + 1 > 8 )
        v8 = *v7;
      else
        v8 = (char *)(a1 + 8);
      strncpy(v8, a2, v6);
      v9 = *(int *)(a1 + 4);
      if ( (int)v9 + 1 > 8 )
        v7 = (char **)*v7;
      *((_BYTE *)v7 + v9) = 0;
      return String::updateLength(a1);
    }

    _DWORD *__fastcall String::updateLength(_DWORD *result)
    {
      _QWORD *v1; // x8
      unsigned int v2; // w9
      int v3; // w10
      bool v4; // zf
    
      v1 = result + 2;
      v2 = 0;
      v3 = 0;
      if ( result[1] + 1 > 8 )
        v1 = (_QWORD *)*v1;
      while ( *(_BYTE *)v1 )
      {
        v2 = wtf8_utf8d[(wtf8_utf8d[*(unsigned __int8 *)v1] | 0x100LL) + v2];
        v1 = (_QWORD *)((char *)v1 + 1);
        if ( v2 )
          v4 = v2 == 12;
        else
          v4 = 1;
        if ( v4 )
          ++v3;
      }
      *result = v3;
      return result;
    }

    _DWORD *__fastcall String::setContents(_DWORD *a1, const char *a2)
    {
      int v4; // w0
      size_t v5; // x2
      char **v6; // x21
      char *v7; // x0
      __int64 v8; // x8
    
      v4 = strlen(a2);
      String::allocate((__int64)a1, v4 + 1);
      v5 = (int)a1[1];
      v6 = (char **)(a1 + 2);
      if ( (int)v5 + 1 > 8 )
        v7 = *v6;
      else
        v7 = (char *)(a1 + 2);
      strncpy(v7, a2, v5);
      v8 = (int)a1[1];
      if ( (int)v8 + 1 > 8 )
        v6 = (char **)*v6;
      *((_BYTE *)v6 + v8) = 0;
      return String::updateLength(a1);
    }

    void __fastcall String::String(String *this, const char *a2, int a3)
    {
      if ( !a2 )
        __assert_rtn(
          "String",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/String.cpp",
          171,
          "pStr && \"constructing NULL c-string to String\"");
      *(_DWORD *)&this->m_iteratorCacheByteOffset = 0;
      *(_QWORD *)&this->m_length = 0;
      this->internal.pHeap = 0;
      String::setContents((__int64)this, a2, a3);
    }

    void __fastcall String::String(String *this, const char *a2, int a3)
    {
      String::String(this, a2, a3);
    }

    void __fastcall String::String(String *this, const char *a2, int a3, int a4)
    {
      internal_t *p_internal; // x23
      internal_t *pHeap; // x0
    
      *(_DWORD *)&this->m_iteratorCacheByteOffset = 0;
      *(_QWORD *)&this->m_length = 0;
      this->internal.pHeap = 0;
      p_internal = &this->internal;
      String::allocate((__int64)this, a3 + 1);
      if ( this->m_bytes + 1 > 8 )
        pHeap = (internal_t *)p_internal->pHeap;
      else
        pHeap = p_internal;
      memcpy(pHeap, a2, a3);
      if ( this->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      p_internal->stack[a3] = 0;
      this->m_length = a4;
    }

    void __fastcall String::String(String *this, const char *a2)
    {
      if ( !a2 )
        __assert_rtn(
          "String",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/String.cpp",
          191,
          "pStr && \"constructing NULL c-string to String\"");
      *(_DWORD *)&this->m_iteratorCacheByteOffset = 0;
      *(_QWORD *)&this->m_length = 0;
      this->internal.pHeap = 0;
      String::setContents(this, a2);
    }

    void __fastcall String::String(String *this, const char *a2)
    {
      String::String(this, a2);
    }

    __int64 __fastcall String::String(__int64 a1, _DWORD *a2)
    {
      char *v4; // x21
      const char *v5; // x1
    
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v4 = (char *)(a1 + 8);
      String::allocate(a1, a2[1] + 1);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v4 = *(char **)v4;
      v5 = (const char *)(a2 + 2);
      if ( a2[1] + 1 > 8 )
        v5 = *(const char **)v5;
      strcpy(v4, v5);
      *(_DWORD *)a1 = *a2;
      return a1;
    }

    __int64 __fastcall String::String(__int64 a1, _DWORD *a2)
    {
      String::String(a1, a2);
      return a1;
    }

    __int64 __fastcall String::String(__int64 a1, _DWORD *a2, _DWORD *a3)
    {
      int v6; // w2
      const char *v7; // x1
      int v8; // w4
      const char *v9; // x3
    
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v6 = a2[1];
      v7 = (const char *)(a2 + 2);
      if ( v6 + 1 > 8 )
        v7 = *(const char **)v7;
      v8 = a3[1];
      v9 = (const char *)(a3 + 2);
      if ( v8 + 1 > 8 )
        v9 = *(const char **)v9;
      String::combine((String *)a1, v7, v6, v9, v8, 0);
      *(_DWORD *)a1 = *a3 + *a2;
      return a1;
    }

    _DWORD *__fastcall String::combine(_DWORD *a1, const void *a2, int a3, const void *a4, int a5, int a6)
    {
      _QWORD *v12; // x25
      _DWORD *result; // x0
    
      String::allocate((__int64)a1, a3 + a5 + 1);
      v12 = a1 + 2;
      if ( a1[1] + 1 > 8 )
        v12 = (_QWORD *)*v12;
      memcpy(v12, a2, a3);
      result = memcpy((char *)v12 + a3, a4, a5 + 1);
      if ( a6 )
        return String::updateLength(a1);
      return result;
    }

    __int64 __fastcall String::String(__int64 a1, __int64 a2, const char *a3)
    {
      int v5; // w21
      _QWORD *v6; // x22
      int v7; // w0
    
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v5 = *(_DWORD *)(a2 + 4);
      v6 = (_QWORD *)(a2 + 8);
      if ( v5 + 1 > 8 )
        v6 = (_QWORD *)*v6;
      v7 = strlen(a3);
      String::combine((_DWORD *)a1, v6, v5, a3, v7, 1);
      return a1;
    }

    __int64 __fastcall String::String(__int64 a1, const char *a2, __int64 a3)
    {
      int v6; // w2
      int v7; // w4
      _QWORD *v8; // x3
    
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v6 = strlen(a2);
      v7 = *(_DWORD *)(a3 + 4);
      v8 = (_QWORD *)(a3 + 8);
      if ( v7 + 1 > 8 )
        v8 = (_QWORD *)*v8;
      String::combine((_DWORD *)a1, a2, v6, v8, v7, 1);
      return a1;
    }

    _DWORD *__fastcall String::operator=(_DWORD *a1, const char *a2)
    {
      int v4; // w0
      char *v5; // x0
    
      if ( !a2 )
        __assert_rtn(
          "operator=",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/String.cpp",
          228,
          "pStr && \"assigning NULL c-string to String\"");
      a1[4] = 0;
      v4 = strlen(a2);
      String::allocate((__int64)a1, v4 + 1);
      v5 = (char *)(a1 + 2);
      if ( a1[1] + 1 > 8 )
        v5 = *(char **)v5;
      strcpy(v5, a2);
      String::updateLength(a1);
      return a1;
    }

    String *__fastcall String::operator=(String *this, String *a2)
    {
      internal_t *p_internal; // x0
      const char *v5; // x1
    
      if ( this != a2 )
      {
        *(_DWORD *)&this->m_iteratorCacheByteOffset = 0;
        String::allocate((__int64)this, a2->m_bytes + 1);
        p_internal = &this->internal;
        if ( this->m_bytes + 1 > 8 )
          p_internal = (internal_t *)p_internal->pHeap;
        v5 = (const char *)&a2->internal;
        if ( a2->m_bytes + 1 > 8 )
          v5 = *(const char **)v5;
        strcpy((char *)p_internal, v5);
        this->m_length = a2->m_length;
      }
      return this;
    }

    __int64 __fastcall String::charAt(String *this, int a2)
    {
      int m_iteratorCacheCodepointOffset; // w9
      __int64 v3; // x8
      internal_t *p_internal; // x10
      _BYTE *v5; // x11
      int v6; // w12
      unsigned int v7; // w16
      int v8; // w15
      int v9; // w17
      __int64 v10; // x2
      int v11; // w3
    
      m_iteratorCacheCodepointOffset = this->m_iteratorCacheCodepointOffset;
      if ( m_iteratorCacheCodepointOffset > a2 )
      {
        m_iteratorCacheCodepointOffset = 0;
        *(_DWORD *)&this->m_iteratorCacheByteOffset = 0;
      }
      LODWORD(v3) = this->m_bytes;
      p_internal = &this->internal;
      if ( (int)v3 + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      v5 = (char *)p_internal + this->m_iteratorCacheByteOffset;
      if ( !*v5 )
        return 0;
      v6 = (_DWORD)p_internal + v3;
      while ( 1 )
      {
        v7 = 0;
        v8 = (_DWORD)v5 - (_DWORD)p_internal;
        v9 = (_DWORD)v5 - v6;
        while ( v9 )
        {
          v10 = (unsigned __int8)*v5;
          v11 = wtf8_utf8d[v10];
          LODWORD(v3) = ((_DWORD)v3 << 6) | v10 & 0x3F;
          v3 = v7 ? (unsigned int)v3 : (0xFFu >> v11) & (unsigned int)v10;
          v7 = wtf8_utf8d[(v11 | 0x100u) + (unsigned __int64)v7];
          ++v5;
          if ( v7 == 12 )
            break;
          ++v9;
          if ( !v7 )
            goto LABEL_16;
        }
        v3 = 65533;
    LABEL_16:
        if ( m_iteratorCacheCodepointOffset == a2 )
          break;
        ++m_iteratorCacheCodepointOffset;
        if ( !*v5 )
          return 0;
      }
      if ( a2 < 0x10000 && v8 < 0x10000 )
      {
        this->m_iteratorCacheByteOffset = v8;
        this->m_iteratorCacheCodepointOffset = a2;
      }
      return v3;
    }

    int *__fastcall String::operator+=(int *a1, _DWORD *a2)
    {
      int v3; // w8
      int v4; // x9^4
      int v5; // w8
      __int64 v6; // x0
      int v9; // [xsp+8h] [xbp-28h] BYREF
      int v10; // [xsp+Ch] [xbp-24h]
      __int64 v11; // [xsp+10h] [xbp-20h]
    
      String::String((__int64)&v9, a1, a2);
      v3 = *a1;
      v4 = v10;
      *a1 = v9;
      v9 = v3;
      v5 = a1[1];
      a1[1] = v4;
      v10 = v5;
      v6 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v11;
      v11 = v6;
      if ( v5 + 1 >= 9 && v6 != 0 )
        operator delete[](v6);
      return a1;
    }

    bool __fastcall String::equals(__int64 a1, const char *a2)
    {
      int v2; // w8
      const char *v3; // x0
    
      v2 = *(_DWORD *)(a1 + 4) + 1;
      v3 = (const char *)(a1 + 8);
      if ( v2 > 8 )
        v3 = *(const char **)v3;
      return strcmp(v3, a2) == 0;
    }

    bool __fastcall String::equals(__int64 a1, __int64 a2)
    {
      size_t v2; // x2
      _QWORD *v3; // x0
      const void *v4; // x1
    
      v2 = *(int *)(a1 + 4);
      if ( (_DWORD)v2 != *(_DWORD *)(a2 + 4) )
        return 0;
      v3 = (_QWORD *)(a1 + 8);
      if ( (int)v2 + 1 > 8 )
      {
        v3 = (_QWORD *)*v3;
        v4 = *(const void **)(a2 + 8);
      }
      else
      {
        v4 = (const void *)(a2 + 8);
      }
      return memcmp(v3, v4, v2) == 0;
    }

    bool __fastcall String::equalsIgnoreCase(__int64 a1, __int64 a2)
    {
      int v2; // w8
      const char *v3; // x0
      const char *v4; // x1
    
      v2 = *(_DWORD *)(a1 + 4);
      if ( v2 != *(_DWORD *)(a2 + 4) )
        return 0;
      v3 = (const char *)(a1 + 8);
      if ( v2 + 1 > 8 )
      {
        v3 = *(const char **)v3;
        v4 = *(const char **)(a2 + 8);
      }
      else
      {
        v4 = (const char *)(a2 + 8);
      }
      return strcasecmp(v3, v4) == 0;
    }

    bool __fastcall String::equalsIgnoreCase(__int64 a1, const char *a2)
    {
      int v2; // w8
      const char *v3; // x0
    
      v2 = *(_DWORD *)(a1 + 4) + 1;
      v3 = (const char *)(a1 + 8);
      if ( v2 > 8 )
        v3 = *(const char **)v3;
      return strcasecmp(v3, a2) == 0;
    }

    __int64 __fastcall String::indexOf(__int64 a1, int a2, int a3)
    {
      int v3; // w15
      __int64 result; // x0
      int v6; // w11
      _QWORD *v7; // x9
      _BYTE *v8; // x10
      int v9; // w11
      unsigned int v10; // w16
      int v11; // w14
      int v12; // w17
      __int64 v13; // x3
      int v14; // w4
    
      result = *(unsigned __int16 *)(a1 + 18);
      if ( (int)result > a3 )
      {
        result = 0;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v6 = *(_DWORD *)(a1 + 4);
      v7 = (_QWORD *)(a1 + 8);
      if ( v6 + 1 > 8 )
        v7 = (_QWORD *)*v7;
      v8 = (char *)v7 + *(unsigned __int16 *)(a1 + 16);
      if ( !*v8 )
        return 0xFFFFFFFFLL;
      v9 = (_DWORD)v7 + v6;
      while ( 1 )
      {
        v10 = 0;
        v11 = (_DWORD)v8 - (_DWORD)v7;
        v12 = (_DWORD)v8 - v9;
        while ( v12 )
        {
          v13 = (unsigned __int8)*v8;
          v14 = wtf8_utf8d[v13];
          v3 = (v3 << 6) | v13 & 0x3F;
          if ( !v10 )
            v3 = (0xFFu >> v14) & v13;
          v10 = wtf8_utf8d[(v14 | 0x100u) + (unsigned __int64)v10];
          ++v8;
          if ( v10 == 12 )
            break;
          ++v12;
          if ( !v10 )
            goto LABEL_15;
        }
        v3 = 65533;
    LABEL_15:
        if ( (int)result >= a3 && v3 == a2 )
          break;
        result = (unsigned int)(result + 1);
        if ( !*v8 )
          return 0xFFFFFFFFLL;
      }
      if ( (int)result < 0x10000 && v11 < 0x10000 )
      {
        *(_WORD *)(a1 + 16) = v11;
        *(_WORD *)(a1 + 18) = result;
      }
      return result;
    }

    __int64 __fastcall String::indexOf(__int64 a1, __int64 a2)
    {
      return String::indexOf(a1, a2, 0);
    }

    __int64 __fastcall String::indexOf(__int64 a1, String *a2, __int64 a3)
    {
      int v3; // w20
      String *v4; // x21
      int v6; // w25
      int v7; // w10
      _QWORD *v8; // x27
      _BYTE *v9; // x28
      int v10; // w24
      __int64 v11; // x22
      int v12; // w0
      unsigned int v13; // w9
      int v14; // w8
      int v15; // w10
      __int64 v16; // x11
      int v17; // w12
      bool v18; // zf
      String *v20; // [xsp+0h] [xbp-60h]
      int m_length; // [xsp+8h] [xbp-58h]
      int v22; // [xsp+Ch] [xbp-54h]
    
      v3 = a3;
      v4 = a2;
      if ( *(unsigned __int16 *)(a1 + 18) > (int)a3 )
        *(_DWORD *)(a1 + 16) = 0;
      if ( *(_DWORD *)a1 < (int)a3 )
        return 0xFFFFFFFFLL;
      m_length = a2->m_length;
      if ( !a2->m_length )
        return a3;
      v22 = String::charAt(a2, 0);
      v6 = *(unsigned __int16 *)(a1 + 18);
      v7 = *(_DWORD *)(a1 + 4);
      v8 = (_QWORD *)(a1 + 8);
      if ( v7 + 1 > 8 )
        v8 = (_QWORD *)*v8;
      v9 = (char *)v8 + *(unsigned __int16 *)(a1 + 16);
      if ( !*v9 )
        return 0xFFFFFFFFLL;
      v20 = v4;
      v10 = 0;
      LODWORD(v11) = 0;
      v12 = v22;
      while ( 1 )
      {
        v13 = 0;
        v14 = (_DWORD)v9 - (_DWORD)v8;
        v15 = (_DWORD)v9 - ((_DWORD)v8 + v7);
        while ( v15 )
        {
          v16 = (unsigned __int8)*v9;
          v17 = wtf8_utf8d[v16];
          LODWORD(v4) = v13 ? ((_DWORD)v4 << 6) | v16 & 0x3F : (0xFFu >> v17) & (unsigned int)v16;
          v13 = wtf8_utf8d[(v17 | 0x100u) + (unsigned __int64)v13];
          ++v9;
          if ( v13 == 12 )
            break;
          ++v15;
          if ( !v13 )
            goto LABEL_19;
        }
        LODWORD(v4) = 65533;
    LABEL_19:
        if ( v6 >= v3 && (_DWORD)v4 == v12 )
          break;
        if ( v10 >= 1 && v22 == (_DWORD)v4 )
        {
          v10 = 1;
          LODWORD(v11) = v6;
        }
        else
        {
          v18 = v10 == 0;
          v10 = 0;
          if ( !v18 )
            v12 = v22;
        }
    LABEL_31:
        if ( !*v9 )
          return 0xFFFFFFFFLL;
        ++v6;
        v7 = *(_DWORD *)(a1 + 4);
      }
      if ( v10 )
        v11 = (unsigned int)v11;
      else
        v11 = (unsigned int)v6;
      if ( ++v10 != m_length )
      {
        v12 = String::charAt(v20, v10);
        goto LABEL_31;
      }
      if ( v6 < 0x10000 && v14 < 0x10000 )
      {
        *(_WORD *)(a1 + 16) = v14;
        *(_WORD *)(a1 + 18) = v6;
      }
      return v11;
    }

    __int64 __fastcall String::lastIndexOf(__int64 a1, int a2, int a3)
    {
      __int64 v6; // x19
      int v7; // w2
      int v8; // w0
    
      v6 = 0xFFFFFFFFLL;
      if ( a3 >= 1 )
      {
        v7 = 0;
        do
        {
          v8 = String::indexOf(a1, a2, v7);
          if ( v8 == -1 )
            break;
          v6 = v8 <= a3 ? (unsigned int)v8 : (unsigned int)v6;
          v7 = v8 + 1;
        }
        while ( v8 + 1 < a3 );
      }
      return v6;
    }

    __int64 __fastcall String::lastIndexOf(int *a1, int a2)
    {
      return String::lastIndexOf((__int64)a1, a2, *a1);
    }

    __int64 __fastcall String::lastIndexOf(unsigned int *a1, __int64 a2)
    {
      return String::lastIndexOf(a1, a2, *a1);
    }

    __int64 __fastcall String::lastIndexOf(__int64 a1, String *a2, int a3)
    {
      unsigned int v6; // w0
      __int64 v7; // x22
      unsigned int v8; // w8
    
      if ( a3 < 0 )
        return 0xFFFFFFFFLL;
      v6 = String::indexOf(a1, a2, 0);
      v7 = 0xFFFFFFFFLL;
      while ( v6 != -1 )
      {
        if ( (int)v6 > a3 )
          v8 = v7;
        else
          v8 = v6;
        if ( (_DWORD)v7 == -1 )
          v7 = v6;
        else
          v7 = v8;
        v6 = String::indexOf(a1, a2, v6 + 1);
      }
      return v7;
    }

    void __usercall String::trim(__int64 a1@<X0>, __int64 a2@<X8>)
    {
      __int64 v3; // x8
      const char *v4; // x1
      const char *v5; // x9
      bool v6; // zf
      const char *v7; // x8
      _QWORD *v8; // x20
    
      v3 = *(int *)(a1 + 4);
      v4 = (const char *)(a1 + 8);
      if ( (int)v3 + 1 > 8 )
        v4 = *(const char **)v4;
      v5 = &v4[v3];
      v6 = &v4[v3] == v4;
      v7 = v4;
      if ( !v6 )
      {
        v7 = v5;
        do
        {
          if ( *(unsigned __int8 *)v7 > 0x20u )
            goto LABEL_8;
          --v7;
        }
        while ( v4 != v7 );
        v7 = v4;
      }
      do
      {
    LABEL_8:
        if ( (unsigned int)*(unsigned __int8 *)v4 - 1 > 0x1F )
        {
          String::String((String *)a2, v4, (_DWORD)v7 + 1 - (_DWORD)v4);
          return;
        }
        ++v4;
      }
      while ( v7 >= v4 );
      *(_DWORD *)(a2 + 16) = 0;
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v8 = (_QWORD *)(a2 + 8);
      String::allocate(a2, 1);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v8 = (_QWORD *)*v8;
      *(_BYTE *)v8 = 0;
    }

    __int64 __fastcall String::offsetAt(__int64 a1, int a2)
    {
      __int64 v2; // x8
      int v3; // w9
      unsigned __int8 *v4; // x10
      int v5; // w11
      unsigned __int8 *v6; // x12
      unsigned int v7; // w16
      signed __int64 v8; // x15
      int v9; // w17
      int v10; // t1
    
      v2 = *(unsigned __int16 *)(a1 + 18);
      if ( (int)v2 > a2 )
      {
        v2 = 0;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v3 = *(_DWORD *)(a1 + 4);
      v4 = (unsigned __int8 *)(a1 + 8);
      if ( v3 + 1 > 8 )
        v4 = *(unsigned __int8 **)v4;
      if ( v3 >= 1 )
      {
        v5 = 0;
        v6 = &v4[*(unsigned __int16 *)(a1 + 16)];
        while ( 1 )
        {
          v7 = 0;
          v8 = v6 - v4;
          v9 = -(v3 - (_DWORD)v4 + (_DWORD)v6);
          do
          {
            if ( !v9 )
              break;
            v10 = *v6++;
            v7 = wtf8_utf8d[(wtf8_utf8d[v10] | 0x100LL) + v7];
            ++v9;
          }
          while ( v7 && v7 != 12 );
          if ( (_DWORD)v2 == a2 )
            break;
          v2 = (unsigned int)(v2 + 1);
          if ( ++v5 >= v3 )
            return v2;
        }
        if ( a2 < 0x10000 && (int)v8 < 0x10000 )
        {
          *(_WORD *)(a1 + 16) = v8;
          *(_WORD *)(a1 + 18) = a2;
        }
        return v8;
      }
      return v2;
    }

    _QWORD *__usercall String::substring@<X0>(unsigned int *a1@<X0>, __int64 a2@<X1>, _QWORD *a3@<X8>)
    {
      return String::substring(a3, a1, a2, *a1);
    }

    void __usercall String::substring(unsigned int *a1@<X0>, const char *a2@<X1>, __int64 a3@<X2>, __int64 a4@<X8>)
    {
      int v4; // w21
      int v5; // w20
      __int64 v8; // x8
      const String *v9; // x1
      int v10; // w23
      int v11; // w2
      const char *v12; // x8
      const String *v13; // x1
      _QWORD *v14; // x20
      __int64 v15; // [xsp+10h] [xbp-60h] BYREF
      __int64 v16; // [xsp+28h] [xbp-48h] BYREF
    
      v4 = a3;
      v5 = (int)a2;
      v8 = *a1;
      if ( (int)v8 <= (int)a2 )
      {
        if ( (int)v8 < (int)a2 )
        {
          String::format((String *)"String::substring invalid beginIndex %d/%d", a2, a2, v8);
          Debugger::error((Debugger *)&v16, v13);
        }
        *(_DWORD *)(a4 + 16) = 0;
        *(_QWORD *)a4 = 0;
        *(_QWORD *)(a4 + 8) = 0;
        v14 = (_QWORD *)(a4 + 8);
        String::allocate(a4, 1);
        if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
          v14 = (_QWORD *)*v14;
        *(_BYTE *)v14 = 0;
      }
      else
      {
        if ( (int)v8 < (int)a3 )
        {
          String::format((String *)"String::substring String index out of range: %d", a2, a3);
          Debugger::error((Debugger *)&v15, v9);
        }
        v10 = String::offsetAt((__int64)a1, (int)a2);
        v11 = String::offsetAt((__int64)a1, v4) - v10;
        v12 = (const char *)(a1 + 2);
        if ( (int)(a1[1] + 1) > 8 )
          v12 = *(const char **)v12;
        String::String((String *)a4, &v12[v10], v11, v4 - v5);
      }
    }

    _DWORD *__usercall String::format@<X0>(String *this@<X0>, __int64 a2@<X8>, ...)
    {
      char __str[1024]; // [xsp+8h] [xbp-428h] BYREF
      va_list va; // [xsp+440h] [xbp+10h] BYREF
    
      va_start(va, a2);
      vsnprintf(__str, 0x400u, (const char *)this, va);
      *(_DWORD *)(a2 + 16) = 0;
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      return String::setContents((_DWORD *)a2, __str);
    }

    __int64 __fastcall String::byteOffsetSubstring(__int64 a1, __int64 a2, int a3)
    {
      __int64 v3; // x8
      int v4; // w19
      _QWORD *v5; // x9
      unsigned int v6; // w8
      int v7; // w20
      const char *v8; // x22
      int v9; // w10
      const char *i; // x11
      const String *v11; // x1
      __int64 v12; // x21
      _QWORD *v13; // x8
      bool v14; // zf
      __int64 v16; // [xsp+18h] [xbp-38h] BYREF
    
      v3 = *(unsigned int *)(a1 + 4);
      if ( (int)v3 <= (int)a2 )
      {
        if ( (int)v3 < (int)a2 )
        {
          String::format((String *)"String::byteOffsetSubstring invalid beginOffset %d/%d", (__int64)&v16, a2, v3);
          Debugger::error((Debugger *)&v16, v11);
        }
        v12 = operator new(24);
        *(_DWORD *)(v12 + 16) = 0;
        *(_QWORD *)v12 = 0;
        *(_QWORD *)(v12 + 8) = 0;
        String::allocate(v12, 1);
        v13 = (_QWORD *)(v12 + 8);
        if ( *(_DWORD *)(v12 + 4) + 1 >= 9 )
          v13 = (_QWORD *)*v13;
        *(_BYTE *)v13 = 0;
      }
      else
      {
        v4 = a3 - a2;
        v5 = (_QWORD *)(a1 + 8);
        if ( (int)v3 + 1 > 8 )
          v5 = (_QWORD *)*v5;
        v6 = 0;
        v7 = 0;
        v8 = (char *)v5 + (int)a2;
        v9 = a3 - a2;
        for ( i = v8; v9 && *i; ++i )
        {
          --v9;
          v6 = wtf8_utf8d[(wtf8_utf8d[*(unsigned __int8 *)i] | 0x100LL) + v6];
          if ( v6 )
            v14 = v6 == 12;
          else
            v14 = 1;
          if ( v14 )
            ++v7;
        }
        v12 = operator new(24);
        String::String((String *)v12, v8, v4, v7);
      }
      return v12;
    }

    __n128 __usercall String::replace@<Q0>(const String *a1@<X0>, String *a2@<X1>, const String *a3@<X2>, String *a4@<X8>)
    {
      int m_length; // w25
      int v9; // w8
      int v10; // w8
      int v11; // w1
      __int64 v12; // x23
      _BOOL4 v13; // w26
      int v14; // w0
      int v15; // w3
      int v16; // w24
      __n128 result; // q0
      __int64 v18; // [xsp+0h] [xbp-50h] BYREF
      char *v19; // [xsp+8h] [xbp-48h]
    
      m_length = a2->m_length;
      v9 = a3->m_bytes - a2->m_bytes;
      if ( v9 < 0 )
        v9 = 0;
      v10 = a1->m_bytes + v9 + 2;
      v18 = 0;
      v19 = 0;
      if ( v10 >= 16 )
        v11 = v10;
      else
        v11 = 16;
      StringBuilder::allocate((#1329 *)&v18, v11);
      *v19 = 0;
      LODWORD(v18) = 1;
      if ( !m_length )
        StringBuilder::append((StringBuilder *)&v18, a3);
      v12 = 0;
      v13 = m_length == 0;
      while ( 1 )
      {
        v14 = String::indexOf((__int64)a1, a2, v12);
        v15 = a1->m_length;
        if ( v14 == -1 )
          break;
        if ( (_DWORD)v12 == v15 )
        {
          v15 = v12;
          break;
        }
        v16 = v14 + v13;
        StringBuilder::append((StringBuilder *)&v18, a1, v12, v14 + v13);
        v12 = (unsigned int)(v16 + m_length);
        StringBuilder::append((StringBuilder *)&v18, a3);
      }
      StringBuilder::append((StringBuilder *)&v18, a1, v12, v15);
      String::String(a4, v19, v18 - 1);
      if ( v19 )
        return operator delete[](v19);
      return result;
    }

    __int64 __usercall String::toLowerCase@<X0>(_DWORD *a1@<X0>, __int64 a2@<X8>)
    {
      return String::String(a2, a1, 0);
    }

    bool __fastcall String::startsWithInternal(String *this, const char *a2, int a3, int a4)
    {
      int m_bytes; // w9
      int v6; // w10
      internal_t *p_internal; // x9
    
      if ( a4 < 0 )
        return 0;
      m_bytes = this->m_bytes;
      if ( m_bytes - a4 < a3 )
        return 0;
      v6 = m_bytes + 1;
      p_internal = &this->internal;
      if ( v6 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      return memcmp((char *)p_internal + a4, a2, a3) == 0;
    }

    bool __fastcall String::startsWith(String *this, const String *a2)
    {
      int m_bytes; // w2
      internal_t *p_internal; // x1
    
      m_bytes = a2->m_bytes;
      p_internal = &a2->internal;
      if ( m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      return String::startsWithInternal(this, (const char *)p_internal, m_bytes, 0);
    }

    bool __fastcall String::startsWith(String *this, const char *__s)
    {
      int v4; // w2
    
      v4 = strlen(__s);
      return String::startsWithInternal(this, __s, v4, 0);
    }

    bool __fastcall String::endsWith(String *this, const char *__s)
    {
      int v4; // w8
    
      v4 = strlen(__s);
      return String::startsWithInternal(this, __s, v4, this->m_bytes - v4);
    }

    __int64 __fastcall String::contains(String *this, const String *a2)
    {
      int m_bytes; // w2
      internal_t *p_internal; // x1
    
      m_bytes = a2->m_bytes;
      p_internal = &a2->internal;
      if ( m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      return String::containsInternal(this, (const char *)p_internal, m_bytes);
    }

    __int64 __fastcall String::containsInternal(String *this, const char *a2, int a3)
    {
      __int64 m_bytes; // x8
      internal_t *p_internal; // x9
      __int64 result; // x0
      __int64 v6; // x10
      int v7; // w11
      int v8; // w12
    
      m_bytes = this->m_bytes;
      if ( (int)m_bytes < a3 )
        return 0;
      p_internal = &this->internal;
      if ( (int)m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      result = 0;
      if ( (int)m_bytes >= 1 )
      {
        v6 = 0;
        v7 = 0;
        while ( 1 )
        {
          v8 = (unsigned __int8)p_internal->stack[v6];
          if ( (unsigned __int8)a2[v7] == v8 )
          {
            if ( ++v7 == a3 )
              return 1;
          }
          else
          {
            v7 = v7 >= 1 && *(unsigned __int8 *)a2 == v8;
          }
          if ( ++v6 >= m_bytes )
            return 0;
        }
      }
      return result;
    }

    __int64 __fastcall String::contains(String *this, const char *__s)
    {
      int v4; // w2
    
      v4 = strlen(__s);
      return String::containsInternal(this, __s, v4);
    }

    __int64 *__usercall String::getFormatted@<X0>(
            __int64 *__return_ptr a1@<X8>,
            String *this@<X0>,
            const char *a3@<X1>,
            ...)
    {
      char __str[1024]; // [xsp+8h] [xbp-428h] BYREF
      va_list va; // [xsp+440h] [xbp+10h] BYREF
    
      va_start(va, a3);
      vsnprintf(__str, 0x400u, (const char *)this, va);
      *((_DWORD *)a1 + 4) = 0;
      *a1 = 0;
      a1[1] = 0;
      return (__int64 *)String::setContents(a1, __str);
    }

    void __usercall String::valueOf(String *this@<X0>, String *a2@<X8>)
    {
      __int64 v2; // x9
      char *v3; // x1
      bool v4; // cc
      __int64 v5; // [xsp+40h] [xbp-20h] BYREF
    
      HIDWORD(v5) = 0;
      if ( (__int64)this >= 0 )
        v2 = (__int64)this;
      else
        v2 = -(__int64)this;
      v3 = (char *)&v5 + 6;
      do
      {
        *v3-- = (char)v2 % 10 + 48;
        v4 = v2 <= 9;
        v2 /= 10;
      }
      while ( !v4 );
      if ( ((unsigned __int64)this & 0x8000000000000000LL) != 0 )
        *v3 = 45;
      else
        ++v3;
      String::String(a2, v3);
    }

    void __usercall String::valueOf(String *__return_ptr a1@<X8>, String *this@<X0>)
    {
      char *v2; // x1
      int v3; // w9
      bool v4; // cc
      char v5[30]; // [xsp+8h] [xbp-38h] BYREF
      _BYTE v6[2]; // [xsp+26h] [xbp-1Ah] BYREF
    
      v6[1] = 0;
      if ( (_DWORD)this == 0x80000000 )
      {
        v2 = v5;
        strcpy(v5, "-2147483648");
      }
      else
      {
        if ( (int)this >= 0 )
          v3 = (int)this;
        else
          v3 = -(int)this;
        v2 = v6;
        do
        {
          *v2-- = (char)v3 % 10 + 48;
          v4 = v3 <= 9;
          v3 /= 10;
        }
        while ( !v4 );
        if ( ((unsigned int)this & 0x80000000) != 0 )
          *v2 = 45;
        else
          ++v2;
      }
      String::String(a1, v2);
    }

    __int64 *__fastcall String::valueOf(String *this)
    {
      if ( (_DWORD)this )
        return &BOOL_TRUE_STRING;
      else
        return &BOOL_FALSE_STRING;
    }

    void __usercall String::getContainingDirectoryPath(int *a1@<X0>, __int64 a2@<X8>)
    {
      __int64 IndexOf; // x9
    
      IndexOf = String::lastIndexOf((__int64)a1, 47, *a1);
      if ( (_DWORD)IndexOf == -1 && (IndexOf = String::lastIndexOf((__int64)a1, 92, *a1), (_DWORD)IndexOf == -1) )
      {
        *(_DWORD *)(a2 + 16) = 0;
        *(_QWORD *)a2 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        String::setContents((_DWORD *)a2, "");
      }
      else
      {
        String::substring((unsigned int *)a1, 0, IndexOf, a2);
      }
    }

    __int64 __fastcall String::operator<(__int64 a1, __int64 a2)
    {
      int v2; // w8
      const char *v3; // x0
      int v4; // w8
      const char *v5; // x1
    
      v2 = *(_DWORD *)(a1 + 4) + 1;
      v3 = (const char *)(a1 + 8);
      if ( v2 > 8 )
        v3 = *(const char **)v3;
      v4 = *(_DWORD *)(a2 + 4) + 1;
      v5 = (const char *)(a2 + 8);
      if ( v4 > 8 )
        v5 = *(const char **)v5;
      return (unsigned int)strcmp(v3, v5) >> 31;
    }

    __int64 __fastcall String::getCodepoint(String *this, char *a2, int *a3)
    {
      __int64 v3; // x8
      unsigned int v4; // w11
      __int64 v5; // x12
      int v6; // w13
      int v7; // w12
    
      v3 = 0;
      v4 = 0;
      do
      {
        if ( (_DWORD)v3 == 5 )
          break;
        v5 = *((unsigned __int8 *)&this->m_length + v3);
        v6 = wtf8_utf8d[v5];
        if ( v4 )
          v7 = v5 & 0x3F | (*(_DWORD *)a2 << 6);
        else
          v7 = (0xFFu >> v6) & v5;
        *(_DWORD *)a2 = v7;
        v4 = wtf8_utf8d[(v6 | 0x100u) + (unsigned __int64)v4];
        ++v3;
        if ( !v4 )
          return (__int64)this + v3;
      }
      while ( v4 != 12 );
      *(_DWORD *)a2 = 65533;
      return (__int64)this + v3;
    }

    __int64 __fastcall String::getByteLength(String *this)
    {
      return (unsigned int)this->m_bytes;
    }

}; // end class String
