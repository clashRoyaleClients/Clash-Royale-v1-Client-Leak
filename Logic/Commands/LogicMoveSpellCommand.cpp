class LogicMoveSpellCommand
{
public:

    void __fastcall LogicMoveSpellCommand::LogicMoveSpellCommand(LogicMoveSpellCommand *this)
    {
      __int64 v1; // x0
    
      v1 = LogicCommand::LogicCommand((__int64)this);
      *(_QWORD *)v1 = &off_10046C000;
      *(_DWORD *)(v1 + 28) = -1;
      *(_BYTE *)(v1 + 32) = 0;
    }

    __int64 __fastcall LogicMoveSpellCommand::destruct(ReportUserMessage *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_DWORD *)this + 7) = -1;
      *((_BYTE *)this + 32) = 0;
      return result;
    }

    __int64 __fastcall LogicMoveSpellCommand::getCommandType(ReportUserMessage *this)
    {
      return 521;
    }

    __int64 __fastcall LogicMoveSpellCommand::encode(ReportUserMessage *this, #1226 *a2)
    {
      LogicCommand::encode((__int64)this, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 32));
    }

    __int64 __fastcall LogicMoveSpellCommand::decode(ReportUserMessage *this, #1225 *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      *((_DWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 32) = result;
      return result;
    }

    __int64 LogicMoveSpellCommand::execute()
    {
      return 1;
    }

    void __fastcall LogicMoveSpellCommand::~LogicMoveSpellCommand(ReportUserMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicMoveSpellCommand::~LogicMoveSpellCommand(ReportUserMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicMoveSpellCommand
