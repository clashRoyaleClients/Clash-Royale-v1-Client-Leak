class LogicJSONParser
{
public:

    __int64 __fastcall LogicJSONParser::parseJSONNode(LogicJSONParser *a1, const String *a2)
    {
      if ( a1 && *(_DWORD *)a1 )
        return LogicJSONParser::parse(a1, a2);
      else
        return 0;
    }

    __int64 __fastcall LogicJSONParser::parse(String *a1, __int64 a2, int *a3)
    {
      String var14; // [xsp+Ch] [xbp-14h] BYREF
    
      var14.m_length = 0;
      if ( a1->m_length )
        var14.m_length = String::charAt(a1, 0) == 65279;
      return LogicJSONParser::parseValue((#1331 *)a1, &var14, a3);
    }

    void __fastcall LogicJSONParser::parseError(unsigned int *a1, __int64 a2)
    {
      _QWORD *v2; // x9
      String v3; // [xsp+18h] [xbp-28h] BYREF
    
      if ( !LogicJSONParser::s_silenceWarnings )
      {
        v2 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v2 = (_QWORD *)*v2;
        String::format((String *)"JSON Parse error at char %d: %s", (__int64)&v3, *a1, v2);
        Debugger::warning(&v3);
        String::~String((__int64)&v3);
      }
    }

    __int64 __fastcall LogicJSONParser::skipWhitespace(LogicStringUtil *a1, String *a2, int *a3)
    {
      int m_length; // w21
      __int64 result; // x0
      int v8; // w8
    
      m_length = a2->m_length;
      do
        result = LogicStringUtil::rawNextCharAscii(a1, a2, a3);
      while ( (int)result <= 32 && (_DWORD)result != -1 );
      if ( a2->m_length <= m_length )
        v8 = m_length;
      else
        v8 = a2->m_length - 1;
      a2->m_length = v8;
      return result;
    }

    BillingProduct *__fastcall LogicJSONParser::parseString(LogicJSONParser *a1, const String *a2, int *a3)
    {
      String *v3; // x20
      BillingProduct *v4; // x19
    
      v3 = (String *)LogicJSONParser::parseStringValue(a1, a2, a3);
      if ( !v3 )
        return 0;
      v4 = (BillingProduct *)operator new(16);
      LogicJSONString::LogicJSONString(v4, v3);
      return v4;
    }

    __int64 __fastcall LogicJSONParser::parseStringValue(LogicStringUtil *a1, String *a2, int *a3)
    {
      int *v5; // x2
      int *v6; // x2
      const String *m_length; // x21
      int i; // w22
      String *v9; // x0
      int Char; // w0
      int *v11; // x3
      String v13; // [xsp+20h] [xbp-50h] BYREF
      String v14; // [xsp+38h] [xbp-38h] BYREF
    
      LogicJSONParser::skipWhitespace(a1, a2, a3);
      if ( (unsigned int)LogicStringUtil::rawNextCharAscii(a1, a2, v5) == 34 )
      {
        m_length = (const String *)(unsigned int)a2->m_length;
        for ( i = a2->m_length; ; i = a2->m_length )
        {
          Char = LogicStringUtil::rawNextChar(a1, a2, v6);
          if ( Char == -1 )
          {
            String::String(&v13, "Not a string");
            LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v13);
            v9 = &v13;
            goto LABEL_10;
          }
          if ( Char == 92 )
            break;
          if ( Char == 34 )
            return LogicStringUtil::substring(a1, m_length, i, (int)v11);
        }
        a2->m_length = i;
        return LogicJSONParser::parseEscapedString(a1, m_length, (int)a2, v11);
      }
      else
      {
        String::String(&v14, "Not a string");
        LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v14);
        v9 = &v14;
    LABEL_10:
        String::~String((__int64)v9);
        return 0;
      }
    }

    String *__fastcall LogicJSONParser::parseEscapedString(StringBuilder *a1, const String *a2, String *a3)
    {
      int v6; // w4
      int *v7; // x2
      unsigned int Char; // w0
      int *v9; // x2
      unsigned int v10; // w8
      int CharAscii; // w0
      int *v12; // x2
      int v13; // w0
      int *v14; // x2
      int v15; // w22
      int v16; // w0
      int *v17; // x2
      int v18; // w10
      int v19; // w9
      int v20; // w23
      int v21; // w0
      int *v22; // x2
      int v23; // w10
      int v24; // w9
      int v25; // w24
      int v26; // w0
      unsigned int v27; // w8
      unsigned int v28; // w10
      unsigned int v29; // w9
      String *v31; // x19
      String v32; // [xsp+0h] [xbp-70h] BYREF
      String v33; // [xsp+18h] [xbp-58h] BYREF
      _QWORD v34[2]; // [xsp+30h] [xbp-40h] BYREF
    
      StringBuilder::StringBuilder((StringBuilder *)v34);
      LogicStringUtil::append((LogicStringUtil *)v34, a1, a2, a3->m_length, v6);
      while ( 1 )
      {
        Char = LogicStringUtil::rawNextChar(a1, a3, v7);
        v10 = Char;
        if ( Char != 92 )
          break;
        CharAscii = LogicStringUtil::rawNextCharAscii(a1, a3, v9);
        v10 = CharAscii;
        if ( CharAscii > 109 )
        {
          switch ( CharAscii )
          {
            case 'n':
              v10 = 10;
              goto LABEL_55;
            case 'r':
              v10 = 13;
              goto LABEL_55;
            case 't':
              v10 = 9;
              goto LABEL_55;
            case 'u':
              v13 = LogicStringUtil::rawNextCharAscii(a1, a3, v12);
              v15 = v13 - 48;
              if ( (unsigned int)(v13 - 48) >= 0xA )
              {
                if ( (unsigned int)(v13 - 97) > 5 )
                {
                  if ( (unsigned int)(v13 - 65) >= 6 )
                    v15 = 0;
                  else
                    v15 = v13 - 55;
                }
                else
                {
                  v15 = v13 - 87;
                }
              }
              v16 = LogicStringUtil::rawNextCharAscii(a1, a3, v14);
              if ( (unsigned int)(v16 - 65) >= 6 )
                v18 = 0;
              else
                v18 = v16 - 55;
              if ( (unsigned int)(v16 - 97) <= 5 )
                v19 = v16 - 87;
              else
                v19 = v18;
              if ( (unsigned int)(v16 - 48) >= 0xA )
                v20 = v19;
              else
                v20 = v16 - 48;
              v21 = LogicStringUtil::rawNextCharAscii(a1, a3, v17);
              if ( (unsigned int)(v21 - 65) >= 6 )
                v23 = 0;
              else
                v23 = v21 - 55;
              if ( (unsigned int)(v21 - 97) <= 5 )
                v24 = v21 - 87;
              else
                v24 = v23;
              if ( (unsigned int)(v21 - 48) >= 0xA )
                v25 = v24;
              else
                v25 = v21 - 48;
              v26 = LogicStringUtil::rawNextCharAscii(a1, a3, v22);
              v27 = v26 - 48;
              if ( (unsigned int)(v26 - 65) >= 6 )
                v28 = 0;
              else
                v28 = v26 - 55;
              if ( (unsigned int)(v26 - 97) <= 5 )
                v29 = v26 - 87;
              else
                v29 = v28;
              if ( v27 >= 0xA )
                v27 = v29;
              v10 = (v20 << 8) + (v15 << 12) + 16 * v25 + v27;
              goto LABEL_55;
            default:
              goto LABEL_56;
          }
        }
        if ( CharAscii > 46 )
        {
          if ( CharAscii > 97 )
          {
            if ( CharAscii == 98 )
            {
              v10 = 8;
            }
            else
            {
              if ( CharAscii != 102 )
                goto LABEL_56;
              v10 = 12;
            }
          }
          else if ( CharAscii != 47 && CharAscii != 92 )
          {
    LABEL_56:
            String::String(&v33, "Illegal string escape");
            LogicJSONParser::parseError((unsigned int *)a3, (__int64)&v33);
            String::~String((__int64)&v33);
            goto LABEL_57;
          }
        }
        else if ( CharAscii != 34 )
        {
          goto LABEL_56;
        }
    LABEL_55:
        StringBuilder::appendCodePoint((#1329 *)v34, v10);
      }
      if ( Char != -1 )
      {
        if ( Char == 34 )
        {
          v31 = StringBuilder::toString((__int64)v34);
          goto LABEL_58;
        }
        goto LABEL_55;
      }
      String::String(&v32, "Not a string");
      LogicJSONParser::parseError((unsigned int *)a3, (__int64)&v32);
      String::~String((__int64)&v32);
    LABEL_57:
      v31 = 0;
    LABEL_58:
      StringBuilder::~StringBuilder(v34);
      return v31;
    }

    LogicJSONNumber *__fastcall LogicJSONParser::parseNumber(LogicStringUtil *a1, String *a2, int *a3)
    {
      int *v5; // x2
      int CharAscii; // w0
      int *v7; // x2
      __int64 v8; // x21
      __int64 v9; // x22
      LogicJSONNumber *v10; // x20
      int v11; // w8
      String v13; // [xsp+8h] [xbp-48h] BYREF
    
      LogicJSONParser::skipWhitespace(a1, a2, a3);
      CharAscii = LogicStringUtil::rawNextCharAscii(a1, a2, v5);
      v8 = 1;
      if ( CharAscii == 45 )
      {
        CharAscii = LogicStringUtil::rawNextCharAscii(a1, a2, v7);
        v8 = -1;
      }
      v9 = 0;
      if ( CharAscii == -1 )
        goto LABEL_13;
      while ( (unsigned int)(CharAscii - 48) <= 9 )
      {
        v9 = 10 * v9 + CharAscii - 48;
        CharAscii = LogicStringUtil::rawNextCharAscii(a1, a2, v7);
        if ( CharAscii == -1 )
          goto LABEL_13;
      }
      if ( (unsigned int)(CharAscii - 46) > 0x37 || ((1LL << ((unsigned __int8)CharAscii - 46)) & 0x80000000800001LL) == 0 )
      {
        v11 = a2->m_length - 1;
        if ( a2->m_length < 1 )
          v11 = 0;
        a2->m_length = v11;
    LABEL_13:
        v10 = (LogicJSONNumber *)operator new(16);
        LogicJSONNumber::LogicJSONNumber(v10, v9 * v8);
        return v10;
      }
      String::String(&v13, "JSON floats not supported");
      LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v13);
      String::~String((__int64)&v13);
      return 0;
    }

    LogicJSONBoolean *__fastcall LogicJSONParser::parseBoolean(#1331 *this, String *a2, int *a3)
    {
      int *v5; // x2
      int CharAscii; // w0
      int *v7; // x2
      int *v8; // x2
      int *v9; // x2
      int *v10; // x2
      LogicJSONBoolean *v11; // x19
      int *v12; // x2
      int *v13; // x2
      String v15; // [xsp+8h] [xbp-28h] BYREF
    
      LogicJSONParser::skipWhitespace(this, a2, a3);
      CharAscii = LogicStringUtil::rawNextCharAscii(this, a2, v5);
      if ( CharAscii != 102 )
      {
        if ( CharAscii == 116
          && (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v7) == 114
          && (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v12) == 117
          && (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v13) == 101 )
        {
          v11 = (LogicJSONBoolean *)operator new(16);
          LogicJSONBoolean::LogicJSONBoolean(v11, 1);
          return v11;
        }
    LABEL_12:
        String::String(&v15, "Not a boolean");
        LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v15);
        String::~String((__int64)&v15);
        return 0;
      }
      if ( (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v7) != 97
        || (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v8) != 108
        || (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v9) != 115
        || (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v10) != 101 )
      {
        goto LABEL_12;
      }
      v11 = (LogicJSONBoolean *)operator new(16);
      LogicJSONBoolean::LogicJSONBoolean(v11, 0);
      return v11;
    }

    LogicJSONNull *__fastcall LogicJSONParser::parseNull(#1331 *this, String *a2, int *a3)
    {
      int *v5; // x2
      int *v6; // x2
      int *v7; // x2
      int *v8; // x2
      LogicJSONNull *v9; // x20
      String v11; // [xsp+8h] [xbp-28h] BYREF
    
      LogicJSONParser::skipWhitespace(this, a2, a3);
      if ( (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v5) == 110
        && (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v6) == 117
        && (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v7) == 108
        && (unsigned int)LogicStringUtil::rawNextCharAscii(this, a2, v8) == 108 )
      {
        v9 = (LogicJSONNull *)operator new(8);
        LogicJSONNull::LogicJSONNull(v9);
      }
      else
      {
        String::String(&v11, "Not a null");
        LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v11);
        String::~String((__int64)&v11);
        return 0;
      }
      return v9;
    }

    BillingProduct *__fastcall LogicJSONParser::parseValue(#1331 *this, String *a2, int *a3)
    {
      int m_length; // w21
      int *v6; // x2
      int CharAscii; // w0
      int *v8; // x2
      _QWORD *v10; // x8
      String v11; // [xsp+8h] [xbp-38h] BYREF
    
      LogicJSONParser::skipWhitespace(this, a2, a3);
      m_length = a2->m_length;
      CharAscii = LogicStringUtil::rawNextCharAscii(this, a2, v6);
      a2->m_length = m_length;
      if ( CharAscii <= 90 )
      {
        if ( (unsigned int)(CharAscii - 48) < 0xA )
          return LogicJSONParser::parseNumber(this, a2, v8);
        if ( CharAscii == 34 )
          return LogicJSONParser::parseString(this, a2, v8);
        if ( CharAscii == 45 )
          return LogicJSONParser::parseNumber(this, a2, v8);
        goto LABEL_18;
      }
      if ( CharAscii <= 101 )
      {
        if ( CharAscii == 91 )
          return (BillingProduct *)LogicJSONParser::parseArray(this, a2, v8);
        goto LABEL_18;
      }
      if ( CharAscii <= 115 )
      {
        if ( CharAscii != 102 )
        {
          if ( CharAscii == 110 )
            return LogicJSONParser::parseNull(this, a2, v8);
          goto LABEL_18;
        }
        return LogicJSONParser::parseBoolean(this, a2, v8);
      }
      if ( CharAscii == 116 )
        return LogicJSONParser::parseBoolean(this, a2, v8);
      if ( CharAscii == 123 )
        return (BillingProduct *)LogicJSONParser::parseObject(this, a2, v8);
    LABEL_18:
      v10 = (_QWORD *)((char *)this + 8);
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v10 = (_QWORD *)*v10;
      String::format((String *)"Not of any recognized value: %s", (__int64)&v11, v10);
      LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v11);
      String::~String((__int64)&v11);
      return 0;
    }

    LogicJSONObject *__fastcall LogicJSONParser::parseObject(LogicStringUtil *a1, String *a2, int *a3)
    {
      int *v5; // x2
      int *v6; // x2
      int m_length; // w19
      int *v8; // x2
      int *v9; // x2
      int CharAscii; // w22
      LogicJSONObject *v11; // x19
      int *v12; // x2
      void *v13; // x22
      int *v14; // x2
      int *v15; // x2
      int *v16; // x2
      BillingProduct *v17; // x0
      BillingProduct *v18; // x23
      int *v19; // x2
      int *v20; // x2
      int v21; // w0
      String v23; // [xsp+0h] [xbp-60h] BYREF
      String v24; // [xsp+18h] [xbp-48h] BYREF
    
      LogicJSONParser::skipWhitespace(a1, a2, a3);
      if ( (unsigned int)LogicStringUtil::rawNextCharAscii(a1, a2, v5) != 123 )
      {
        String::String(&v24, "Not an object");
        LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v24);
        String::~String((__int64)&v24);
        return 0;
      }
      LogicJSONParser::skipWhitespace(a1, a2, v6);
      m_length = a2->m_length;
      CharAscii = LogicStringUtil::rawNextCharAscii(a1, a2, v8);
      a2->m_length = m_length;
      if ( CharAscii != 125 )
      {
        v11 = (LogicJSONObject *)operator new(40);
        LogicJSONObject::LogicJSONObject(v11);
        if ( CharAscii != -1 )
        {
          do
          {
            v13 = (void *)LogicJSONParser::parseStringValue(a1, a2, v12);
            LogicJSONParser::skipWhitespace(a1, a2, v14);
            if ( (unsigned int)LogicStringUtil::rawNextCharAscii(a1, a2, v15) != 58 )
            {
              if ( v13 )
              {
                String::~String((__int64)v13);
                operator delete(v13);
              }
              goto LABEL_14;
            }
            v17 = LogicJSONParser::parseValue(a1, a2, v16);
            v18 = v17;
            if ( !v13 || !v17 )
            {
              if ( v13 )
              {
                String::~String((__int64)v13);
                operator delete(v13);
              }
              if ( v18 )
              {
                (*(void (__fastcall **)(BillingProduct *))(*(_QWORD *)v18 + 16LL))(v18);
                (*(void (__fastcall **)(BillingProduct *))(*(_QWORD *)v18 + 8LL))(v18);
              }
              goto LABEL_19;
            }
            LogicJSONObject::put((__int64)v11, (__int64)v13, (__int64)v17);
            String::~String((__int64)v13);
            operator delete(v13);
            LogicJSONParser::skipWhitespace(a1, a2, v19);
            v21 = LogicStringUtil::rawNextCharAscii(a1, a2, v20);
          }
          while ( v21 == 44 );
          if ( v21 == 125 )
            return v11;
        }
    LABEL_14:
        String::String(&v23, "Not an object");
        LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v23);
        String::~String((__int64)&v23);
    LABEL_19:
        (*(void (__fastcall **)(LogicJSONObject *))(*(_QWORD *)v11 + 16LL))(v11);
        (*(void (__fastcall **)(LogicJSONObject *))(*(_QWORD *)v11 + 8LL))(v11);
        return 0;
      }
      LogicStringUtil::rawNextCharAscii(a1, a2, v9);
      v11 = (LogicJSONObject *)operator new(40);
      LogicJSONObject::LogicJSONObject(v11, 0);
      return v11;
    }

    LogicChangeAvatarNameCommand *__fastcall LogicJSONParser::parseArray(LogicStringUtil *a1, String *a2, int *a3)
    {
      int *v5; // x2
      int *v6; // x2
      int m_length; // w20
      int *v8; // x2
      int *v9; // x2
      int CharAscii; // w22
      LogicChangeAvatarNameCommand *v11; // x20
      int *v12; // x2
      BillingProduct *v13; // x8
      int *v14; // x2
      int *v15; // x2
      int v16; // w0
      String v18; // [xsp+0h] [xbp-50h] BYREF
      String v19; // [xsp+18h] [xbp-38h] BYREF
    
      LogicJSONParser::skipWhitespace(a1, a2, a3);
      if ( (unsigned int)LogicStringUtil::rawNextCharAscii(a1, a2, v5) != 91 )
      {
        String::String(&v19, "Not an array");
        LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v19);
        String::~String((__int64)&v19);
        return 0;
      }
      LogicJSONParser::skipWhitespace(a1, a2, v6);
      m_length = a2->m_length;
      CharAscii = LogicStringUtil::rawNextCharAscii(a1, a2, v8);
      a2->m_length = m_length;
      if ( CharAscii != 93 )
      {
        v11 = (LogicChangeAvatarNameCommand *)operator new(24);
        LogicJSONArray::LogicJSONArray(v11);
        if ( CharAscii != -1 )
        {
          while ( 1 )
          {
            v13 = LogicJSONParser::parseValue(a1, a2, v12);
            if ( !v13 )
              break;
            LogicJSONArray::add((__int64)v11, (__int64)v13);
            LogicJSONParser::skipWhitespace(a1, a2, v14);
            v16 = LogicStringUtil::rawNextCharAscii(a1, a2, v15);
            if ( v16 != 44 )
            {
              if ( v16 == 93 )
                return v11;
              break;
            }
          }
        }
        String::String(&v18, "Not an array");
        LogicJSONParser::parseError((unsigned int *)a2, (__int64)&v18);
        String::~String((__int64)&v18);
        (*(void (__fastcall **)(LogicChangeAvatarNameCommand *))(*(_QWORD *)v11 + 16LL))(v11);
        (*(void (__fastcall **)(LogicChangeAvatarNameCommand *))(*(_QWORD *)v11 + 8LL))(v11);
        return 0;
      }
      LogicStringUtil::rawNextCharAscii(a1, a2, v9);
      v11 = (LogicChangeAvatarNameCommand *)operator new(24);
      LogicJSONArray::LogicJSONArray(v11, 0);
      return v11;
    }

    #1329 *__fastcall LogicJSONParser::writeString(String *a1, #1329 *a2)
    {
      int m_length; // w23
      int v5; // w21
      signed int v6; // w0
    
      StringBuilder::append(a2, 34);
      m_length = a1->m_length;
      if ( a1->m_length >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = String::charAt(a1, v5);
          if ( v6 > 33 )
          {
            switch ( v6 )
            {
              case '\\':
                StringBuilder::append(a2, "\\\\");
                break;
              case '/':
                StringBuilder::append(a2, "\\/");
                break;
              case '"':
                StringBuilder::append(a2, "\\\"");
                break;
              default:
    LABEL_16:
                StringBuilder::appendCodePoint(a2, v6);
                break;
            }
          }
          else
          {
            switch ( v6 )
            {
              case 8:
                StringBuilder::append(a2, "\\b");
                break;
              case 9:
                StringBuilder::append(a2, "\\t");
                break;
              case 10:
                StringBuilder::append(a2, "\\n");
                break;
              case 12:
                StringBuilder::append(a2, "\\f");
                break;
              case 13:
                StringBuilder::append(a2, "\\r");
                break;
              default:
                goto LABEL_16;
            }
          }
          ++v5;
        }
        while ( m_length != v5 );
      }
      return StringBuilder::append(a2, 34);
    }

    __int64 __fastcall LogicJSONParser::parseJSONObject(String *a1, __int64 a2, int *a3)
    {
      __int64 v3; // x0
      __int64 v4; // x19
    
      if ( !a1 )
        return 0;
      if ( !a1->m_length )
        return 0;
      v3 = LogicJSONParser::parse(a1, a2, a3);
      v4 = v3;
      if ( !v3 )
        return 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        return 0;
      }
      return v4;
    }

}; // end class LogicJSONParser
