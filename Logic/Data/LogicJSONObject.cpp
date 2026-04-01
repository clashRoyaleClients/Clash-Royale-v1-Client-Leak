class LogicJSONObject
{
public:

    void __fastcall LogicJSONObject::LogicJSONObject(LogicJSONObject *this)
    {
      LogicJSONNode::LogicJSONNode(this);
      *(_QWORD *)this = off_100475D38;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    void __fastcall LogicJSONObject::LogicJSONObject(LogicJSONObject *this, int a2)
    {
      LogicJSONNode::LogicJSONNode(this);
      *(_QWORD *)this = off_100475D38;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 2) = 0;
      LogicArrayList<LogicJSONNode *>::ensureCapacity((__int64)this + 8, a2);
      LogicArrayList<String>::ensureCapacity((String **)this + 3, a2);
    }

    void __fastcall LogicJSONObject::LogicJSONObject(LogicJSONObject *this, int a2)
    {
      LogicJSONObject::LogicJSONObject(this, a2);
    }

    void __fastcall LogicJSONObject::destruct(RoyalTVContentMessage *this)
    {
      __int64 v2; // x8
      __int64 i; // x22
      __int64 v5; // x21
      String v6; // [xsp+18h] [xbp-48h] BYREF
    
      LogicJSONNode::destruct(this);
      v2 = *((unsigned int *)this + 5);
      if ( (int)v2 >= 1 )
      {
        for ( i = (int)v2 - 1LL; ; --i )
        {
          if ( (int)i + 1 < 1 || (int)v2 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v6, i, v2);
            Debugger::error(&v6);
          }
          v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
          if ( v5 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          }
          if ( i + 1 < 2 )
            break;
          v2 = *((unsigned int *)this + 5);
        }
      }
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 5) = 0;
    }

    __int64 __fastcall LogicJSONObject::get(__int64 a1, __int64 a2)
    {
      __int64 v3; // x0
      __int64 v4; // x8
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = LogicArrayList<String>::indexOfString(a1 + 24, a2);
      if ( (_DWORD)v3 == -1 )
        return 0;
      v4 = *(unsigned int *)(a1 + 20);
      if ( (v3 & 0x80000000) != 0 || (int)v4 <= (int)v3 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v6, v3, v4);
        Debugger::error(&v6);
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (int)v3);
    }

    __int64 __fastcall LogicJSONObject::put(__int64 a1, __int64 a2, __int64 a3)
    {
      __int64 v6; // x8
      __int64 i; // x9
      __int64 v9; // x10
      String v11; // [xsp+8h] [xbp-58h] BYREF
      String v12; // [xsp+20h] [xbp-40h] BYREF
      __int64 v13; // [xsp+38h] [xbp-28h] BYREF
    
      v13 = a3;
      if ( LogicJSONObject::get(a1, a2) )
      {
        operator+("LogicJSONObject::put already contains key ", a2, (__int64)&v12);
        Debugger::error(&v12);
      }
      v6 = *(int *)(a1 + 20);
      for ( i = 8LL * ((int)v6 - 1); v6-- >= 1; i -= 8 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + i);
        if ( v9 == a3 )
        {
          operator+("LogicJSONObject::put already contains the given JSONNode pointer. Key ", a2, (__int64)&v11);
          Debugger::error(&v11);
        }
      }
      LogicArrayList<LogicJSONNode *>::add(a1 + 8, &v13);
      return LogicArrayList<String>::add(a1 + 24);
    }

    #1329 *__fastcall LogicJSONObject::writeToString(__int64 a1, #1329 *a2)
    {
      StringBuilder *v4; // x2
      __int64 v5; // x8
      __int64 v6; // x23
      __int64 v7; // x24
      __int64 v8; // x25
      LogicJSONParser *v9; // x22
      __int64 v10; // x8
      __int64 v11; // x0
      String v13; // [xsp+10h] [xbp-70h] BYREF
      String v14; // [xsp+28h] [xbp-58h] BYREF
    
      StringBuilder::append(a2, 123);
      v5 = *(unsigned int *)(a1 + 36);
      if ( (int)v5 >= 1 )
      {
        v6 = 0;
        v7 = 0;
        v8 = (int)v5;
        while ( 1 )
        {
          if ( (int)v5 <= v7 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v13, v7, v5);
            Debugger::error(&v13);
          }
          v9 = (LogicJSONParser *)(*(_QWORD *)(a1 + 24) + v6);
          if ( v7 >= 1 )
            StringBuilder::append(a2, 44);
          LogicJSONParser::writeString(v9, (const String *)a2, v4);
          StringBuilder::append(a2, 58);
          v10 = *(int *)(a1 + 20);
          if ( v10 <= v7 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v14, v7, v10);
            Debugger::error(&v14);
          }
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7);
          (*(void (__fastcall **)(__int64, #1329 *))(*(_QWORD *)v11 + 32LL))(v11, a2);
          if ( ++v7 >= v8 )
            break;
          v5 = *(unsigned int *)(a1 + 36);
          v6 += 24;
        }
      }
      return StringBuilder::append(a2, 125);
    }

    __int64 __fastcall LogicJSONObject::getJSONNumber(__int64 a1, __int64 a2)
    {
      __int64 v3; // x0
      __int64 v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x8
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = LogicJSONObject::get(a1, a2);
      v4 = v3;
      if ( !v3 )
        return 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( (_DWORD)v5 != 3 )
      {
        v6 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v6 = (_QWORD *)*v6;
        String::format((String *)"LogicJSONObject::getJSONNumber type is %d, key %s", (__int64)&v8, v5, v6);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
        return 0;
      }
      return v4;
    }

    __int64 __fastcall LogicJSONObject::getJSONBoolean(__int64 a1, __int64 a2)
    {
      __int64 v3; // x0
      __int64 v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x8
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = LogicJSONObject::get(a1, a2);
      v4 = v3;
      if ( !v3 )
        return 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( (_DWORD)v5 != 5 )
      {
        v6 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v6 = (_QWORD *)*v6;
        String::format((String *)"LogicJSONObject::getJSONBoolean type is %d, key %s", (__int64)&v8, v5, v6);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
        return 0;
      }
      return v4;
    }

    __int64 __fastcall LogicJSONObject::getJSONArray(__int64 a1, __int64 a2)
    {
      __int64 v3; // x0
      __int64 v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x8
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = LogicJSONObject::get(a1, a2);
      v4 = v3;
      if ( !v3 )
        return 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( (_DWORD)v5 != 1 )
      {
        v6 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v6 = (_QWORD *)*v6;
        String::format((String *)"LogicJSONObject::getJSONArray type is %d, key %s", (__int64)&v8, v5, v6);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
        return 0;
      }
      return v4;
    }

    __int64 __fastcall LogicJSONObject::getJSONObject(__int64 a1, __int64 a2)
    {
      __int64 v3; // x0
      __int64 v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x8
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = LogicJSONObject::get(a1, a2);
      v4 = v3;
      if ( !v3 )
        return 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( (_DWORD)v5 != 2 )
      {
        v6 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v6 = (_QWORD *)*v6;
        String::format((String *)"LogicJSONObject::getJSONObject type is %d, key %s", (__int64)&v8, v5, v6);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
        return 0;
      }
      return v4;
    }

    __int64 __fastcall LogicJSONObject::getType(RoyalTVContentMessage *this)
    {
      return 2;
    }

    __int64 __fastcall LogicJSONObject::getJSONString(__int64 a1, __int64 a2)
    {
      __int64 v3; // x0
      __int64 v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x8
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = LogicJSONObject::get(a1, a2);
      v4 = v3;
      if ( !v3 )
        return 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( (_DWORD)v5 != 4 )
      {
        v6 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v6 = (_QWORD *)*v6;
        String::format((String *)"LogicJSONObject::getJSONString type is %d, key %s", (__int64)&v8, v5, v6);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
        return 0;
      }
      return v4;
    }

    __int64 __fastcall LogicJSONObject::getObjectCount(RoyalTVContentMessage *this)
    {
      return *((unsigned int *)this + 5);
    }

    _QWORD *__fastcall LogicJSONObject::~LogicJSONObject(_QWORD *a1)
    {
      __int64 v2; // x0
    
      *a1 = off_100475D38;
      LogicArrayList<String>::~LogicArrayList(a1 + 3);
      v2 = a1[1];
      if ( v2 )
        operator delete[](v2);
      a1[1] = 0;
      a1[2] = 0;
      return a1;
    }

    void __fastcall LogicJSONObject::~LogicJSONObject(__int64 *a1)
    {
      __int64 v2; // x0
    
      *a1 = (__int64)off_100475D38;
      LogicArrayList<String>::~LogicArrayList(a1 + 3);
      v2 = a1[1];
      if ( v2 )
        operator delete[](v2);
      operator delete(a1);
    }

}; // end class LogicJSONObject
