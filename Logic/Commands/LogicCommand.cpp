class LogicCommand
{
public:

    __int64 __fastcall LogicCommand::isSavedForReplay(PvpMatchmakeNotificationMessage *this)
    {
      return 1;
    }

    __int64 __fastcall LogicCommand::LogicCommand(__int64 a1)
    {
      *(_QWORD *)a1 = &off_1004646C8;
      LogicLong::LogicLong((LogicLong *)(a1 + 20));
      *(_DWORD *)(a1 + 12) = -1;
      *(_DWORD *)(a1 + 16) = -1;
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 20) = 0;
      return a1;
    }

    __int64 __fastcall LogicCommand::destruct(__int64 result)
    {
      *(_DWORD *)(result + 12) = -1;
      *(_DWORD *)(result + 16) = -1;
      *(_BYTE *)(result + 8) = 0;
      *(_QWORD *)(result + 20) = 0;
      return result;
    }

    __int64 __fastcall LogicCommand::setExecuteTick(__int64 result, int a2)
    {
      *(_DWORD *)(result + 12) = a2;
      return result;
    }

    __int64 __fastcall LogicCommand::getExecuteTick(__int64 a1)
    {
      return *(unsigned int *)(a1 + 12);
    }

    __int64 __fastcall LogicCommand::encode(__int64 a1, #1317 *a2)
    {
      const #1236 *v4; // x2
    
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 16));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 12));
      return ByteStreamHelper::encodeLogicLong(a2, (#1226 *)(a1 + 20), v4);
    }

    void __fastcall LogicCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      LogicLong *v4; // x2
      __int64 v5; // x0
      const char *v6; // x1
      const String *v7; // x1
      String v8; // [xsp+8h] [xbp-28h] BYREF
    
      a1[4] = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      a1[3] = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      ByteStreamHelper::decodeLogicLong(a2, (ByteStream *)(a1 + 5), v4);
      if ( a1[4] == -1
        && ((*(int (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 32LL))(a1) < 200
         || (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 32LL))(a1) >= 500) )
      {
        v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 32LL))(a1);
        String::format((String *)"Command's (type = %d) tickWhenGiven is not set", v6, v5);
        Debugger::warning((__siginfo *)&v8, v7);
        String::~String(&v8);
      }
    }

    __int64 __fastcall LogicCommand::setTickWhenGiven(__int64 result, int a2)
    {
      *(_DWORD *)(result + 16) = a2;
      return result;
    }

    __int64 __fastcall LogicCommand::getTickWhenGiven(PvpMatchmakeNotificationMessage *this)
    {
      return *((unsigned int *)this + 4);
    }

    __int64 __fastcall LogicCommand::getAgeInTicks(PvpMatchmakeNotificationMessage *this, int a2)
    {
      return (unsigned int)(a2 - *((_DWORD *)this + 4));
    }

    __int64 __fastcall LogicCommand::setExecutorAccountId(PvpMatchmakeNotificationMessage *this, const #1236 *a2)
    {
      __int64 result; // x0
    
      *((_DWORD *)this + 5) = LogicLong::getHigherInt(a2);
      result = LogicLong::getLowerInt(a2);
      *((_DWORD *)this + 6) = result;
      return result;
    }

    __int64 __fastcall LogicCommand::getExecutorAccountId(PvpMatchmakeNotificationMessage *this)
    {
      return (__int64)this + 20;
    }

    #1234 *__fastcall LogicCommand::getJSONForReplay(PvpMatchmakeNotificationMessage *this)
    {
      #1234 *v2; // x19
      #1232 *v3; // x21
      #1232 *v4; // x21
      #1232 *v5; // x21
      int HigherInt; // w0
      #1232 *v7; // x21
      int LowerInt; // w0
      String v10; // [xsp+0h] [xbp-80h] BYREF
      String v11; // [xsp+18h] [xbp-68h] BYREF
      String v12; // [xsp+30h] [xbp-50h] BYREF
      String v13; // [xsp+48h] [xbp-38h] BYREF
    
      v2 = (#1234 *)operator new(40);
      LogicJSONObject::LogicJSONObject(v2, 4);
      String::String(&v13, "t");
      v3 = (#1232 *)operator new(16);
      LogicJSONNumber::LogicJSONNumber(v3, *((_DWORD *)this + 4));
      LogicJSONObject::put(v2, &v13, v3);
      String::~String(&v13);
      String::String(&v12, "t2");
      v4 = (#1232 *)operator new(16);
      LogicJSONNumber::LogicJSONNumber(v4, *((_DWORD *)this + 3));
      LogicJSONObject::put(v2, &v12, v4);
      String::~String(&v12);
      String::String(&v11, "idHi");
      v5 = (#1232 *)operator new(16);
      this = (PvpMatchmakeNotificationMessage *)((char *)this + 20);
      HigherInt = LogicLong::getHigherInt(this);
      LogicJSONNumber::LogicJSONNumber(v5, HigherInt);
      LogicJSONObject::put(v2, &v11, v5);
      String::~String(&v11);
      String::String(&v10, "idLo");
      v7 = (#1232 *)operator new(16);
      LowerInt = LogicLong::getLowerInt(this);
      LogicJSONNumber::LogicJSONNumber(v7, LowerInt);
      LogicJSONObject::put(v2, &v10, v7);
      String::~String(&v10);
      return v2;
    }

    __int64 __fastcall LogicCommand::loadFromJSON(PvpMatchmakeNotificationMessage *this, #1234 *a2)
    {
      #1232 *JSONNumber; // x20
      #1232 *v5; // x22
      #1232 *v6; // x23
      #1232 *v7; // x21
      const char *v8; // x1
      const char *v9; // x1
      const char *v10; // x1
      const char *v11; // x1
      __int64 result; // x0
      String v13; // [xsp+0h] [xbp-90h] BYREF
      String v14; // [xsp+18h] [xbp-78h] BYREF
      String v15; // [xsp+30h] [xbp-60h] BYREF
      String v16; // [xsp+48h] [xbp-48h] BYREF
    
      String::String(&v16, "t");
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v16);
      String::~String(&v16);
      String::String(&v15, "t2");
      v5 = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v15);
      String::~String(&v15);
      String::String(&v14, "idHi");
      v6 = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v14);
      String::~String(&v14);
      String::String(&v13, "idLo");
      v7 = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v13);
      String::~String(&v13);
      if ( !JSONNumber )
        Debugger::error((__siginfo *)"Replay - Load command from JSON failed! when given tick was not found!", v8);
      *((_DWORD *)this + 4) = LogicJSONNumber::getIntValue(JSONNumber);
      if ( !v5 )
        Debugger::error((__siginfo *)"Replay - Load command from JSON failed! Execute tick was not found!", v9);
      *((_DWORD *)this + 3) = LogicJSONNumber::getIntValue(v5);
      if ( !v6 )
        Debugger::error(
          (__siginfo *)"Replay - Load command from JSON failed! m_executorAccountId.higherInt tick was not found!",
          v10);
      *((_DWORD *)this + 5) = LogicJSONNumber::getIntValue(v6);
      if ( !v7 )
        Debugger::error(
          (__siginfo *)"Replay - Load command from JSON failed! m_executorAccountId.lowerInt was not found!",
          v11);
      result = LogicJSONNumber::getIntValue(v7);
      *((_DWORD *)this + 6) = result;
      return result;
    }

    __int64 LogicCommand::getCommandGoldCost()
    {
      return 0;
    }

    __int64 __fastcall LogicCommand::clone(PvpMatchmakeNotificationMessage *this)
    {
      const LogicCommand *v2; // x2
      bool v3; // w3
      __int64 v4; // x19
      _BYTE v6[48]; // [xsp+0h] [xbp-40h] BYREF
    
      ByteStream::ByteStream((ByteStream *)v6, 128);
      LogicCommandManager::encodeCommand((LogicCommandManager *)v6, this, v2);
      ByteStream::resetOffset((ByteStream *)v6);
      v4 = LogicCommandManager::decodeCommand((Application *)v6, (#1225 *)1, 1, v3);
      ByteStream::destruct((#1225 *)v6);
      return v4;
    }

    __int64 LogicCommand::getCommandDiamondCost()
    {
      return 0;
    }

    void __fastcall LogicCommand::~LogicCommand(PvpMatchmakeNotificationMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicCommand::~LogicCommand(PvpMatchmakeNotificationMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicCommand
