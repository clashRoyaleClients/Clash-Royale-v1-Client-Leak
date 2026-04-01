class LogicJSONHelper
{
public:

    const String *__fastcall LogicJSONHelper::getInt(#1396 *this, const #1234 *a2, const String *a3)
    {
      #1232 *JSONNumber; // x0
    
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(this, a2);
      if ( JSONNumber )
        return (const String *)LogicJSONNumber::getIntValue(JSONNumber);
      else
        return a3;
    }

    __int64 __fastcall LogicJSONHelper::getBool(#1396 *this, const #1234 *a2, const String *a3)
    {
      #1229 *JSONBoolean; // x0
    
      JSONBoolean = (#1229 *)LogicJSONObject::getJSONBoolean(this, a2);
      if ( JSONBoolean )
        return LogicJSONBoolean::isTrue(JSONBoolean);
      else
        return 0;
    }

    String *__usercall LogicJSONHelper::getString@<X0>(
            #1396 *this@<X0>,
            const #1234 *a2@<X1>,
            const String *a3@<X2>,
            const String *a4@<X3>,
            String *a5@<X8>)
    {
      __int64 JSONString; // x0
      __int64 v8; // x21
      const String *StringReference; // x1
      String *v10; // x0
    
      JSONString = LogicJSONObject::getJSONString(this, a2, a3, a4);
      v8 = JSONString;
      if ( JSONString && LogicJSONString::getStringValue(JSONString) )
      {
        StringReference = (const String *)LogicJSONString::getStringReference(v8);
        v10 = a5;
      }
      else
      {
        v10 = a5;
        StringReference = a3;
      }
      return String::String(v10, StringReference);
    }

    void __fastcall LogicJSONHelper::getLogicLong(#1396 *this, String *a2, const String *a3, #1236 *a4)
    {
      #1232 *JSONNumber; // x0
      int IntValue; // w0
      #1232 *v9; // x0
      int v10; // w0
      String v11; // [xsp+0h] [xbp-50h] BYREF
      String v12; // [xsp+18h] [xbp-38h] BYREF
    
      Debugger::doAssert((Debugger *)(a3 != 0), (bool)"pLogicLongOut need to be allocated!", (const char *)a3);
      operator+((__int64 *)&v12.m_length, a2, &LogicJSONHelper::LOGIC_LONG_HI_POSTFIX);
      operator+((__int64 *)&v11.m_length, a2, &LogicJSONHelper::LOGIC_LONG_LO_POSTFIX);
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(this, &v12);
      if ( JSONNumber )
        IntValue = LogicJSONNumber::getIntValue(JSONNumber);
      else
        IntValue = 0;
      a3->m_length = IntValue;
      v9 = (#1232 *)LogicJSONObject::getJSONNumber(this, &v11);
      if ( v9 )
        v10 = LogicJSONNumber::getIntValue(v9);
      else
        v10 = 0;
      a3->m_bytes = v10;
      String::~String(&v11);
      String::~String(&v12);
    }

    __int64 __fastcall LogicJSONHelper::getIntArray(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 result; // x0
      __int64 v7; // x20
      __int64 v8; // x21
      __int64 v9; // x22
      #1232 *JSONNumber; // x0
      const char *v11; // x1
      int *p_IntValue; // x1
      int v13; // [xsp+8h] [xbp-38h] BYREF
      int IntValue; // [xsp+Ch] [xbp-34h] BYREF
    
      Debugger::doAssert((Debugger *)(a3 != 0), (bool)"pArrayOut need to be allocated!", a3);
      result = LogicJSONObject::getJSONArray(a1, a2);
      v7 = result;
      if ( result )
      {
        v8 = LogicJSONArray::size(result);
        result = LogicArrayList<int>::ensureCapacity(a3, v8);
        if ( (int)v8 >= 1 )
        {
          v9 = 0;
          do
          {
            JSONNumber = (#1232 *)LogicJSONArray::getJSONNumber(v7, v9);
            if ( JSONNumber )
            {
              IntValue = LogicJSONNumber::getIntValue(JSONNumber);
              p_IntValue = &IntValue;
            }
            else
            {
              Debugger::warning((__siginfo *)"readIntArray json: array contains objects other than numbers!", v11);
              v13 = 0;
              p_IntValue = &v13;
            }
            result = LogicArrayList<int>::add(a3, p_IntValue);
            v9 = (unsigned int)(v9 + 1);
          }
          while ( (_DWORD)v8 != (_DWORD)v9 );
        }
      }
      return result;
    }

    __int64 __fastcall LogicJSONHelper::getLogicData(#1396 *this, const #1234 *a2, const String *a3)
    {
      #1232 *JSONNumber; // x0
      LogicDataTables *IntValue; // x0
      int v5; // w1
    
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(this, a2);
      if ( JSONNumber && (IntValue = (LogicDataTables *)LogicJSONNumber::getIntValue(JSONNumber), (_DWORD)IntValue) )
        return LogicDataTables::getDataById(IntValue, v5);
      else
        return 0;
    }

    __int64 __fastcall LogicJSONHelper::setInt(__int64 this, #1234 *a2, const String *a3)
    {
      int v3; // w22
      __int64 v5; // x20
      #1232 *v6; // x21
    
      v3 = (int)a3;
      v5 = this;
      if ( (_DWORD)a3 )
      {
        v6 = (#1232 *)operator new(16);
        LogicJSONNumber::LogicJSONNumber(v6, v3);
        return LogicJSONObject::put(v5, a2, v6);
      }
      return this;
    }

    __int64 __fastcall LogicJSONHelper::setBool(#1396 *this, #1234 *a2, const String *a3)
    {
      char v3; // w22
      #1229 *v6; // x21
    
      v3 = (char)a3;
      v6 = (#1229 *)operator new(16);
      LogicJSONBoolean::LogicJSONBoolean(v6, v3);
      return LogicJSONObject::put(this, a2, v6);
    }

    __int64 __fastcall LogicJSONHelper::setString(#1396 *this, #1234 *a2, const String *a3, const String *a4)
    {
      __int64 result; // x0
      #1235 *v8; // x19
      String *v9; // x23
    
      result = String::equals(a3, &LogicJSONHelper::DEFAULT_STRING);
      if ( (result & 1) == 0 )
      {
        v8 = (#1235 *)operator new(16);
        v9 = (String *)operator new(24);
        String::String(v9, a3);
        LogicJSONString::LogicJSONString(v8, v9);
        return LogicJSONObject::put(this, a2, v8);
      }
      return result;
    }

    void __fastcall LogicJSONHelper::setLogicLong(#1396 *this, String *a2, const String *a3, const #1236 *a4)
    {
      String v7; // [xsp+0h] [xbp-50h] BYREF
      String v8; // [xsp+18h] [xbp-38h] BYREF
    
      operator+((__int64 *)&v8.m_length, a2, &LogicJSONHelper::LOGIC_LONG_HI_POSTFIX);
      operator+((__int64 *)&v7.m_length, a2, &LogicJSONHelper::LOGIC_LONG_LO_POSTFIX);
      LogicJSONHelper::setInt((__int64)this, (#1234 *)&v8, (const String *)(unsigned int)a3->m_length);
      LogicJSONHelper::setInt((__int64)this, (#1234 *)&v7, (const String *)(unsigned int)a3->m_bytes);
      String::~String(&v7);
      String::~String(&v8);
    }

    __int64 __fastcall LogicJSONHelper::setIntArray(__int64 result, __int64 a2, __int64 a3)
    {
      __int64 v5; // x21
      __int64 v6; // x22
      LogicJSONArray *v7; // x23
      __int64 i; // x25
      #1232 *v9; // x24
    
      v5 = result;
      if ( a3 )
      {
        v6 = *(int *)(a3 + 12);
        if ( (int)v6 >= 1 )
        {
          v7 = (LogicJSONArray *)operator new(24);
          LogicJSONArray::LogicJSONArray(v7, v6);
          for ( i = 0; i < v6; ++i )
          {
            v9 = (#1232 *)operator new(16);
            LogicJSONNumber::LogicJSONNumber(v9, *(_DWORD *)(*(_QWORD *)a3 + 4 * i));
            LogicJSONArray::add(v7, v9);
          }
          return LogicJSONObject::put(v5, a2, v7);
        }
      }
      return result;
    }

    __int64 __fastcall LogicJSONHelper::setLogicData(__int64 this, #1234 *a2, String *a3, const #916 *a4)
    {
      __int64 v5; // x20
      const String *GlobalID; // x2
    
      v5 = this;
      if ( a3 )
      {
        GlobalID = (const String *)LogicData::getGlobalID((#916 *)a3);
        return LogicJSONHelper::setInt(v5, a2, GlobalID);
      }
      return this;
    }

}; // end class LogicJSONHelper
