class LogicBattleLog
{
public:

    void __fastcall LogicBattleLog::LogicBattleLog(LogicBattleLog *this)
    {
      char *v1; // x19
      int i; // w22
      #893 *v3; // x21
      #893 *v4; // [xsp+8h] [xbp-28h] BYREF
    
      *(_QWORD *)this = off_10045F7E8;
      *((_DWORD *)this + 9) = 0;
      *((_QWORD *)this + 1) = 0;
      v1 = (char *)this + 8;
      *((_BYTE *)this + 32) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      LogicArrayList<LogicBattleLogPlayer *>::ensureCapacity((char *)this + 8, 2);
      for ( i = 0; i < 2; ++i )
      {
        v3 = (#893 *)operator new(128);
        LogicBattleLogPlayer::LogicBattleLogPlayer(v3);
        v4 = v3;
        LogicArrayList<LogicBattleLogPlayer *>::add(v1, &v4);
      }
    }

    // attributes: thunk
    void __fastcall LogicBattleLog::LogicBattleLog(LogicBattleLog *this)
    {
      __ZN14LogicBattleLogC2Ev(this);
    }

    __int64 __fastcall LogicBattleLog::destruct(__int64 this)
    {
      __int64 v1; // x19
      __int64 i; // x21
      __int64 v3; // x20
    
      v1 = this;
      for ( i = 0; i != 16; i += 8 )
      {
        v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + i);
        if ( v3 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
          this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        }
      }
      *(_DWORD *)(v1 + 20) = 0;
      *(_QWORD *)(v1 + 24) = 0;
      *(_BYTE *)(v1 + 32) = 0;
      *(_DWORD *)(v1 + 36) = 0;
      return this;
    }

    __int64 __fastcall LogicBattleLog::getPlayer(LogicJSONParser *this, const char *a2)
    {
      if ( (unsigned int)a2 >= 2 )
        Debugger::error((__siginfo *)"logic battle log: invalid player index!", a2);
      return *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * (int)a2);
    }

    __int64 __fastcall LogicBattleLog::getPlayer(LogicJSONParser *this, const #1236 *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      __int64 AccountId; // x0
    
      v4 = *((int *)this + 5);
      v5 = 8LL * ((int)v4 - 1);
      while ( v4-- >= 1 )
      {
        AccountId = LogicBattleLogPlayer::getAccountId(*(#893 **)(*((_QWORD *)this + 1) + v5));
        v5 -= 8;
        if ( (unsigned int)LogicLong::equals(AccountId, a2) )
          return *(_QWORD *)(*((_QWORD *)this + 1) + v5 + 8);
      }
      return 0;
    }

    #1234 *__fastcall LogicBattleLog::getJSON(LogicJSONParser *this)
    {
      #1234 *v2; // x19
      int v3; // w1
      __int64 i; // x21
      #893 *v5; // x23
      __int64 JSON; // x0
      const #916 *v7; // x3
      String v9; // [xsp+0h] [xbp-60h] BYREF
      String v10; // [xsp+18h] [xbp-48h] BYREF
    
      v2 = (#1234 *)operator new(40);
      LogicJSONObject::LogicJSONObject(v2, 4);
      for ( i = 0; i < 2; ++i )
      {
        String::valueOf(&v10, (String *)i, v3);
        v5 = *(#893 **)(*((_QWORD *)this + 1) + 8 * i);
        operator+((__int64 *)&v9.m_length, &JSON_ATTRIB_PLAYER, &v10);
        JSON = LogicBattleLogPlayer::getJSON(v5);
        LogicJSONObject::put(v2, &v9, JSON);
        String::~String(&v9);
        String::~String(&v10);
      }
      LogicJSONHelper::setLogicData((__int64)v2, (#1234 *)&JSON_ATTRIB_ARENA, *((String **)this + 3), v7);
      LogicJSONHelper::setBool(v2, (#1234 *)&JSON_ATTRIB_CHALLENGE, (const String *)*((unsigned __int8 *)this + 32));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_REPLAY_VALUE, (const String *)*((unsigned int *)this + 9));
      return v2;
    }

    const String *__fastcall LogicBattleLog::loadJSON(LogicJSONParser *this, const #1234 *a2, const char *a3)
    {
      int v5; // w1
      __int64 i; // x21
      const #1234 *JSONObject; // x24
      const String *v8; // x1
      const String *v9; // x2
      const String *v10; // x2
      const String *result; // x0
      __siginfo v12; // [xsp+8h] [xbp-78h] BYREF
    
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", a3);
      for ( i = 0; i < 2; ++i )
      {
        String::valueOf(v12.__pad, (String *)i, v5);
        operator+((__int64 *)&v12.si_addr, &JSON_ATTRIB_PLAYER, (String *)v12.__pad);
        JSONObject = (const #1234 *)LogicJSONObject::getJSONObject(a2, &v12.si_addr);
        String::~String((String *)&v12.si_addr);
        if ( JSONObject )
        {
          LogicBattleLogPlayer::loadJSON(*(#893 **)(*((_QWORD *)this + 1) + 8 * i), JSONObject);
        }
        else
        {
          operator+(&v12, "cannot find json from battle log for player ", v12.__pad);
          Debugger::warning(&v12, v8);
          String::~String((String *)&v12);
        }
        String::~String((String *)v12.__pad);
      }
      *((_QWORD *)this + 3) = LogicJSONHelper::getLogicData(a2, (const #1234 *)&JSON_ATTRIB_ARENA, v9);
      *((_BYTE *)this + 32) = LogicJSONHelper::getBool(a2, (const #1234 *)&JSON_ATTRIB_CHALLENGE, v10);
      result = LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_REPLAY_VALUE, 0);
      *((_DWORD *)this + 9) = (_DWORD)result;
      return result;
    }

    __int64 __fastcall LogicBattleLog::getArenaData(LogicJSONParser *this)
    {
      return *((_QWORD *)this + 3);
    }

    __int64 __fastcall LogicBattleLog::setArenaData(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 24) = a2;
      return result;
    }

    void __fastcall LogicBattleLog::~LogicBattleLog(LogicJSONParser *this)
    {
      __int64 v1; // x0
      _QWORD *v2; // x20
    
      *(_QWORD *)this = off_10045F7E8;
      v2 = (_QWORD *)((char *)this + 8);
      v1 = *((_QWORD *)this + 1);
      if ( v1 )
        operator delete[](v1);
      *v2 = 0;
      v2[1] = 0;
    }

    void __fastcall LogicBattleLog::~LogicBattleLog(LogicJSONParser *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10045F7E8;
      v2 = *((_QWORD *)this + 1);
      if ( v2 )
        operator delete[](v2);
      operator delete(this);
    }

}; // end class LogicBattleLog
