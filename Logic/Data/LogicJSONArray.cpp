class LogicJSONArray
{
public:

    LogicChangeAvatarNameCommand *__fastcall LogicJSONArray::LogicJSONArray(LogicChangeAvatarNameCommand *a1)
    {
      LogicJSONNode::LogicJSONNode(a1);
      *(_QWORD *)a1 = off_100475C20;
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 2) = 0;
      LogicArrayList<LogicJSONNode *>::ensureCapacity((char *)a1 + 8, 20);
      return a1;
    }

    LogicChangeAvatarNameCommand *__fastcall LogicJSONArray::LogicJSONArray(LogicChangeAvatarNameCommand *a1)
    {
      LogicJSONArray::LogicJSONArray(a1);
      return a1;
    }

    LogicChangeAvatarNameCommand *__fastcall LogicJSONArray::LogicJSONArray(LogicChangeAvatarNameCommand *a1, __int64 a2)
    {
      LogicJSONNode::LogicJSONNode(a1);
      *(_QWORD *)a1 = off_100475C20;
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 2) = 0;
      LogicArrayList<LogicJSONNode *>::ensureCapacity((char *)a1 + 8, a2);
      return a1;
    }

    LogicChangeAvatarNameCommand *__fastcall LogicJSONArray::LogicJSONArray(LogicChangeAvatarNameCommand *a1, __int64 a2)
    {
      LogicJSONArray::LogicJSONArray(a1, a2);
      return a1;
    }

    __int64 __fastcall LogicJSONArray::destruct(__int64 a1)
    {
      __int64 result; // x0
      __int64 v3; // x8
      __int64 i; // x22
      __int64 v6; // x21
      String v7; // [xsp+18h] [xbp-48h] BYREF
    
      result = LogicJSONNode::destruct((LogicChangeAvatarNameCommand *)a1);
      v3 = *(unsigned int *)(a1 + 20);
      if ( (int)v3 >= 1 )
      {
        for ( i = (int)v3 - 1LL; ; --i )
        {
          if ( (int)i + 1 < 1 || (int)v3 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v7, i, v3);
            Debugger::error(&v7);
          }
          v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
          if ( v6 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          }
          if ( i + 1 < 2 )
            break;
          v3 = *(unsigned int *)(a1 + 20);
        }
      }
      *(_DWORD *)(a1 + 20) = 0;
      return result;
    }

    __int64 __fastcall LogicJSONArray::size(__int64 a1)
    {
      return *(unsigned int *)(a1 + 20);
    }

    __int64 __fastcall LogicJSONArray::get(__int64 a1, __int64 a2)
    {
      __int64 v2; // x8
      String v4; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *(unsigned int *)(a1 + 20);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v4, a2, v2);
        Debugger::error(&v4);
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (int)a2);
    }

    __int64 __fastcall LogicJSONArray::add(__int64 a1, __int64 a2)
    {
      __int64 v3; // [xsp+8h] [xbp-8h] BYREF
    
      v3 = a2;
      return LogicArrayList<LogicJSONNode *>::add(a1 + 8, &v3);
    }

    __int64 LogicJSONArray::getType()
    {
      return 1;
    }

    #1329 *__fastcall LogicJSONArray::writeToString(__int64 a1, #1329 *a2)
    {
      __int64 v4; // x8
      __int64 v5; // x22
      __int64 v6; // x23
      __int64 v7; // x0
      String v9; // [xsp+18h] [xbp-48h] BYREF
    
      StringBuilder::append(a2, 91);
      v4 = *(unsigned int *)(a1 + 20);
      if ( (int)v4 >= 1 )
      {
        v5 = 0;
        v6 = (int)v4 - 1LL;
        while ( 1 )
        {
          if ( (int)v4 <= v5 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v9, v5, v4);
            Debugger::error(&v9);
          }
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5);
          (*(void (__fastcall **)(__int64, #1329 *))(*(_QWORD *)v7 + 32LL))(v7, a2);
          if ( v5 >= v6 )
            break;
          StringBuilder::append(a2, 44);
          ++v5;
          v4 = *(unsigned int *)(a1 + 20);
        }
      }
      return StringBuilder::append(a2, 93);
    }

    __int64 __fastcall LogicJSONArray::getJSONNumber(__int64 a1, __int64 a2)
    {
      __int64 v3; // x20
      __int64 v4; // x0
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = LogicJSONArray::get(a1, a2);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( (_DWORD)v4 != 3 )
      {
        String::format((String *)"LogicJSONArray::getJSONNumber wrong type %d, index %d", (__int64)&v6, v4, a2);
        Debugger::warning(&v6);
        String::~String((__int64)&v6);
        return 0;
      }
      return v3;
    }

    __int64 __fastcall LogicJSONArray::getJSONObject(__int64 a1, __int64 a2)
    {
      __int64 v3; // x20
      __int64 v4; // x0
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = LogicJSONArray::get(a1, a2);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( (_DWORD)v4 != 2 )
      {
        String::format((String *)"LogicJSONArray::getJSONObject wrong type %d, index %d", (__int64)&v6, v4, a2);
        Debugger::warning(&v6);
        String::~String((__int64)&v6);
        return 0;
      }
      return v3;
    }

    _QWORD *__fastcall LogicJSONArray::~LogicJSONArray(_QWORD *a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      *a1 = off_100475C20;
      v3 = a1 + 1;
      v2 = a1[1];
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      return a1;
    }

    void __fastcall LogicJSONArray::~LogicJSONArray(AllianceJoinOkMessage *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100475C20;
      v2 = *((_QWORD *)this + 1);
      if ( v2 )
        operator delete[](v2);
      operator delete(this);
    }

}; // end class LogicJSONArray
