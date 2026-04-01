class LogicReplay
{
public:

    __int64 __fastcall LogicReplay::destruct(DataGained *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 1);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 1);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 1) = 0;
      }
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      return result;
    }

    __int64 __fastcall LogicReplay::recordCommand(DataGained *this, const PvpMatchmakeNotificationMessage *a2)
    {
      __int64 v4; // x21
      __int64 ExecuteTick; // x0
      const char *v6; // x1
      const String *v7; // x1
      #1234 *v8; // x21
      const PvpMatchmakeNotificationMessage *v9; // x2
      String v11; // [xsp+18h] [xbp-38h] BYREF
    
      v4 = (*(__int64 (__fastcall **)(const PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2);
      ExecuteTick = LogicCommand::getExecuteTick(a2);
      String::format((String *)"replay: record command %d tick %d", v6, v4, ExecuteTick);
      Debugger::print((Debugger *)&v11, v7);
      String::~String(&v11);
      v8 = (#1234 *)operator new(40);
      LogicJSONObject::LogicJSONObject(v8);
      LogicCommandManager::saveCommandToJSON(v8, a2, v9);
      return LogicJSONArray::add(*((_QWORD *)this + 4), v8);
    }

    __int64 __fastcall LogicReplay::tick(#1028 **this)
    {
      int v2; // w20
      __int64 result; // x0
    
      v2 = LogicGameMode::getTick(*this) + 1;
      result = LogicJSONNumber::getIntValue(*(this + 2));
      if ( (_DWORD)result != v2 )
        return LogicJSONNumber::setIntValue(*(this + 2), v2);
      return result;
    }

}; // end class LogicReplay
