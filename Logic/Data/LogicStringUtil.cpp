class LogicStringUtil
{
public:

    GLenum *__fastcall LogicStringUtil::getBytes(GLenum *this, const String *a2)
    {
      signed int v2; // w8
      GLenum *result; // x0
    
      v2 = *(this + 1) + 1;
      result = this + 2;
      if ( v2 > 8 )
        return *(GLenum **)result;
      return result;
    }

    String *__fastcall LogicStringUtil::createString(__int64 a1, int a2, int a3)
    {
      String *v6; // x19
    
      v6 = (String *)operator new(24);
      String::String(v6, (const char *)(a1 + a2), a3);
      return v6;
    }

    // attributes: thunk
    __int64 __fastcall LogicStringUtil::substring(__int64 this, __int64 a2, int a3)
    {
      return String::byteOffsetSubstring(this, a2, a3);
    }

    // attributes: thunk
    #1329 *__fastcall LogicStringUtil::append(#1329 *this, __int64 a2, __int64 a3, int a4)
    {
      return StringBuilder::byteOffsetAppend(this, a2, a3, a4);
    }

    void __usercall LogicStringUtil::createStringObject(__int64 a1@<X0>, int a2@<W1>, int a3@<W2>, String *a4@<X8>)
    {
      String::String(a4, (const char *)(a1 + a2), a3);
    }

    __int64 __fastcall LogicStringUtil::convertToInt(LogicStringUtil *a1, __int64 a2, __int64 a3, int a4)
    {
      return LogicStringUtil::convertToInt(a1, 0, *(_DWORD *)a1, a4);
    }

    __int64 __fastcall LogicStringUtil::convertToInt(String *a1, const char *a2, __int64 a3)
    {
      unsigned int v4; // w21
      int v6; // w25
      String *v7; // x0
      char v9; // w0
      __int64 v10; // x24
      int v11; // w0
      String v12; // [xsp+8h] [xbp-C8h] BYREF
      String v13; // [xsp+20h] [xbp-B0h] BYREF
      _BYTE v14[24]; // [xsp+38h] [xbp-98h] BYREF
      String v15; // [xsp+50h] [xbp-80h] BYREF
      char v16[12]; // [xsp+6Ch] [xbp-64h] BYREF
    
      v4 = (unsigned int)a2;
      v6 = a3 - (_DWORD)a2;
      if ( (int)a3 - (int)a2 < 1 )
      {
        Debugger::warning("LogicStringUtil::convertToInt empty String");
        return 0;
      }
      if ( v6 < 12 )
      {
        v9 = String::charAt(a1, (int)a2);
        if ( v9 == 45 )
        {
          v16[0] = v9;
          v10 = 1;
        }
        else
        {
          v10 = 0;
        }
        if ( (int)v10 >= v6 )
        {
    LABEL_11:
          v16[(int)v10] = 0;
          return atoi(v16);
        }
        while ( 1 )
        {
          v11 = String::charAt(a1, v4 + (unsigned int)v10);
          if ( (unsigned int)((v11 << 24) - 788529153) >= 0xAFFFFFF )
            break;
          v16[v10++] = v11;
          if ( v10 >= v6 )
            goto LABEL_11;
        }
        String::substring((unsigned int *)a1, (const char *)v4, a3, (__int64)&v12);
        operator+("LogicStringUtil::convertToInt invalid value: ", (__int64)&v12, (__int64)&v13);
        Debugger::warning(&v13);
        String::~String((__int64)&v13);
        v7 = &v12;
      }
      else
      {
        String::substring((unsigned int *)a1, a2, a3, (__int64)v14);
        operator+("LogicStringUtil::convertToInt too long value: ", (__int64)v14, (__int64)&v15);
        Debugger::warning(&v15);
        String::~String((__int64)&v15);
        v7 = (String *)v14;
      }
      String::~String((__int64)v7);
      return 0;
    }

    void __usercall LogicStringUtil::intToString(String *a1@<X0>, int a2@<W1>, __int64 *a3@<X8>)
    {
      int m_length; // w22
      int v5; // w20
      unsigned __int8 v6; // w8
      int v7; // w23
      int v8; // w24
      unsigned __int64 v9; // x20
      String v10; // [xsp+0h] [xbp-C0h] BYREF
      String v11; // [xsp+18h] [xbp-A8h] BYREF
      String v12; // [xsp+30h] [xbp-90h] BYREF
      String v13; // [xsp+48h] [xbp-78h] BYREF
      String v14; // [xsp+60h] [xbp-60h] BYREF
      String v15; // [xsp+78h] [xbp-48h] BYREF
    
      if ( a2 )
      {
        String::valueOf(&v15, a1);
        m_length = v15.m_length;
        v5 = v15.m_length - 1;
        v6 = atomic_load((unsigned __int8 *)&`guard variable for'LogicStringUtil::intToString(int,bool)::thousandSeparator);
        if ( (v6 & 1) == 0
          && __cxa_guard_acquire((__guard *)&`guard variable for'LogicStringUtil::intToString(int,bool)::thousandSeparator) )
        {
          String::String(&LogicStringUtil::intToString(int,bool)::thousandSeparator, " ");
          __cxa_atexit(
            (void (__fastcall *)(void *))String::~String,
            &LogicStringUtil::intToString(int,bool)::thousandSeparator,
            (void *)&_mh_execute_header);
          __cxa_guard_release((__guard *)&`guard variable for'LogicStringUtil::intToString(int,bool)::thousandSeparator);
        }
        if ( v5 < 3 )
        {
          String::String((__int64)a3, &v15);
        }
        else
        {
          String::String(&v14, "");
          v7 = 0;
          v8 = v5 / 3;
          v9 = (unsigned int)(m_length - 3);
          do
          {
            String::substring((unsigned int *)&v15, (const char *)v9, (unsigned int)(v9 + 3), (__int64)&v11);
            operator+((__int64 *)&v12.m_length, &LogicStringUtil::intToString(int,bool)::thousandSeparator, &v11);
            operator+((__int64 *)&v13.m_length, &v12, &v14);
            String::operator=(&v14, &v13);
            String::~String((__int64)&v13);
            String::~String((__int64)&v12);
            String::~String((__int64)&v11);
            ++v7;
            v9 = (unsigned int)(v9 - 3);
          }
          while ( v7 < v8 );
          String::substring((unsigned int *)&v15, 0, (unsigned int)(m_length - 3 * v8), (__int64)&v10);
          operator+(a3, &v10, &v14);
          String::~String((__int64)&v10);
          String::~String((__int64)&v14);
        }
        String::~String((__int64)&v15);
      }
      else
      {
        String::valueOf((String *)a3, a1);
      }
    }

    __int64 __fastcall LogicStringUtil::split(String *a1, String *a2)
    {
      LogicStringUtil *p_internal; // x20
      const char *v4; // x21
      const char *ByteLength; // x22
      int v6; // w3
      int v7; // w4
    
      p_internal = (LogicStringUtil *)&a1->internal;
      if ( a1->m_bytes + 1 > 8 )
        p_internal = *(LogicStringUtil **)p_internal;
      v4 = (const char *)&a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        v4 = *(const char **)v4;
      ByteLength = (const char *)String::getByteLength(a1);
      v6 = String::getByteLength(a2);
      return LogicStringUtil::split(p_internal, v4, ByteLength, v6, v7);
    }

    __int64 __fastcall LogicStringUtil::split(unsigned __int8 *a1, __int64 a2, int a3, int a4)
    {
      int v8; // w8
      int v9; // w25
      int v10; // w9
      int v11; // w11
      unsigned __int8 *v12; // x10
      int v13; // w13
      bool v14; // zf
      int v15; // w14
      int v16; // w24
      __int64 v17; // x21
      __int64 v18; // x27
      __int64 v19; // x24
      int v20; // w8
      int v21; // w26
      __int64 v22; // x8
      __int64 v23; // x8
      _BYTE v25[24]; // [xsp+18h] [xbp-98h] BYREF
      String v26; // [xsp+30h] [xbp-80h] BYREF
      String v27; // [xsp+48h] [xbp-68h] BYREF
    
      v8 = 0;
      v9 = a4 - 1;
      if ( a3 >= 1 )
      {
        v10 = a3;
        v11 = 0;
        v12 = a1;
        do
        {
          v13 = *(unsigned __int8 *)(a2 + v11);
          v14 = v11 == v9;
          if ( v11 == v9 )
            v11 = 0;
          else
            ++v11;
          if ( v14 )
            v15 = v8 + 1;
          else
            v15 = v8;
          if ( *v12 == v13 )
            v8 = v15;
          else
            v11 = 0;
          ++v12;
          --v10;
        }
        while ( v10 );
      }
      v16 = v8 + 1;
      v17 = operator new(16);
      LogicArrayList<String>::LogicArrayList((_QWORD *)v17, v16);
      String::String((__int64)v25);
      if ( a3 < 1 )
      {
        v19 = 0;
        v21 = 0;
      }
      else
      {
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        do
        {
          if ( a1[v18] == *(unsigned __int8 *)(a2 + v20) )
          {
            if ( v20 == v9 )
            {
              LogicArrayList<String>::add(v17);
              v22 = *(unsigned int *)(v17 + 12);
              if ( (v19 & 0x80000000) != 0 || (int)v22 <= (int)v19 )
              {
                String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v26, v19, v22);
                Debugger::error(&v26);
              }
              String::setContents(*(_QWORD *)v17 + 24LL * (int)v19, (const char *)&a1[v21], 1 - a4 + v18 - v21);
              v20 = 0;
              v19 = (unsigned int)(v19 + 1);
              v21 = v18 + 1;
            }
            else
            {
              ++v20;
            }
          }
          else
          {
            v20 = 0;
          }
          ++v18;
        }
        while ( (int)v18 < a3 );
      }
      if ( v21 < a3 )
      {
        LogicArrayList<String>::add(v17);
        v23 = *(unsigned int *)(v17 + 12);
        if ( (v19 & 0x80000000) != 0 || (int)v23 <= (int)v19 )
        {
          String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v27, v19, v23);
          Debugger::error(&v27);
        }
        String::setContents(*(_QWORD *)v17 + 24LL * (int)v19, (const char *)&a1[v21], a3 - v21);
      }
      String::~String((__int64)v25);
      return v17;
    }

    __int64 __fastcall LogicStringUtil::textContains(__int64 a1, __int64 a2, int a3, int a4)
    {
      __int64 v4; // x8
      __int64 v5; // x8
      int v6; // w10
    
      v4 = 0;
      if ( a3 >= 1 )
      {
        v5 = 0;
        v6 = 0;
        while ( 1 )
        {
          if ( *(unsigned __int8 *)(a1 + v5) == *(unsigned __int8 *)(a2 + v6) )
          {
            if ( v6 == a4 - 1 )
              return 1;
            ++v6;
          }
          else
          {
            v6 = 0;
          }
          if ( (int)++v5 >= a3 )
            return 0;
        }
      }
      return v4;
    }

    __int64 __fastcall LogicStringUtil::rawNextCharAscii(String *a1, int *a2)
    {
      int v4; // w21
      __int64 v5; // x8
      internal_t *p_internal; // x9
      __int64 result; // x0
    
      if ( *a2 < 0 )
        return 32;
      v4 = *a2;
      if ( v4 >= (int)String::getByteLength(a1) )
        return 0xFFFFFFFFLL;
      v5 = *a2;
      p_internal = &a1->internal;
      if ( a1->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      result = (unsigned int)p_internal->stack[v5];
      *a2 = v5 + 1;
      return result;
    }

    __int64 __fastcall LogicStringUtil::rawNextChar(String *a1, int *a2)
    {
      int v4; // w21
      internal_t *p_internal; // x21
      internal_t *v6; // x22
      __int64 result; // x0
      unsigned int v8; // w8
      int v9; // w9
      __int64 v10; // x12
      int v11; // w13
    
      if ( *a2 < 0 )
        return 32;
      v4 = *a2;
      if ( v4 >= (int)String::getByteLength(a1) )
        return 0xFFFFFFFFLL;
      p_internal = &a1->internal;
      if ( a1->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      v6 = (internal_t *)((char *)p_internal + *a2);
      LODWORD(result) = String::getByteLength(a1);
      v8 = 0;
      v9 = *a2 - result;
      while ( v9 )
      {
        v10 = (unsigned __int8)v6->stack[0];
        v11 = wtf8_utf8d[v10];
        result = v8 ? ((_DWORD)result << 6) | (unsigned int)(v10 & 0x3F) : (0xFFu >> v11) & (unsigned int)v10;
        v8 = wtf8_utf8d[(v11 | 0x100u) + (unsigned __int64)v8];
        v6 = (internal_t *)((char *)v6 + 1);
        if ( v8 == 12 )
          break;
        ++v9;
        if ( !v8 )
          goto LABEL_16;
      }
      result = 65533;
    LABEL_16:
      *a2 = (_DWORD)v6 - (_DWORD)p_internal;
      return result;
    }

    String *__fastcall LogicStringUtil::safeString(String *a1, String *a2, const char *a3)
    {
      if ( a2 )
      {
        String::operator=(a1, a2);
        String::~String((__int64)a2);
        operator delete(a2);
      }
      else
      {
        String::operator=(a1, a3);
      }
      return a1;
    }

    __int64 __fastcall LogicStringUtil::strHexToInt(String *a1)
    {
      int v2; // w8
      const char *p_internal; // x20
      size_t v4; // x0
      String v6; // [xsp+0h] [xbp-1B0h] BYREF
      _BYTE v7[16]; // [xsp+18h] [xbp-198h] BYREF
      _QWORD v8[44]; // [xsp+28h] [xbp-188h] BYREF
      unsigned int v9; // [xsp+18Ch] [xbp-24h] BYREF
    
      if ( !a1->m_length )
        return 0;
      v9 = 0;
      if ( !(unsigned int)p_StringUtil_isValidHexStr(a1) )
      {
        operator+("strHexToInt: Invalid hex String: ", (__int64)a1, (__int64)&v6);
        Debugger::error(&v6);
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v7, 24);
      *(_DWORD *)((char *)&v8[3] + *(_QWORD *)(v8[0] - 24LL)) = *(_DWORD *)((_BYTE *)&v8[3] + *(_QWORD *)(v8[0] - 24LL))
                                                              & 0xFFFFFFB5
                                                              | 8;
      v2 = a1->m_bytes + 1;
      p_internal = (const char *)&a1->internal;
      if ( v2 > 8 )
        p_internal = *(const char **)p_internal;
      if ( p_internal )
      {
        v4 = strlen(p_internal);
        std::__ostream_insert<char,std::char_traits<char>>(v8, p_internal, v4);
      }
      else
      {
        std::ios::clear();
      }
      std::istream::_M_extract<unsigned int>(v7, &v9);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v7);
      return v9;
    }

    void *__fastcall LogicStringUtil::byteArrayCopy(__int64 a1, int a2, __int64 a3, int a4, int a5)
    {
      return memcpy((void *)(a1 + a2), (const void *)(a3 + a4), a5);
    }

    // attributes: thunk
    __int64 __fastcall LogicStringUtil::getByteLength(String *this)
    {
      return String::getByteLength(this);
    }

    __int64 __fastcall LogicStringUtil::getByteLength(__int64 a1, String *a2)
    {
      return String::getByteLength(a2);
    }

}; // end class LogicStringUtil
