class LogicSellChestCommand
{
public:

    __int64 __fastcall LogicSellChestCommand::LogicSellChestCommand(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::LogicCommand(a1);
      *(_QWORD *)result = &off_10046D450;
      *(_DWORD *)(result + 28) = -1;
      return result;
    }

    __int64 __fastcall LogicSellChestCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(a1);
      *(_DWORD *)(a1 + 28) = -1;
      return result;
    }

    __int64 LogicSellChestCommand::getCommandType()
    {
      return 507;
    }

    __int64 __fastcall LogicSellChestCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 28));
    }

    __int64 __fastcall LogicSellChestCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(a1, a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      a1[7] = result;
      return result;
    }

    __int64 LogicSellChestCommand::execute()
    {
      return 1;
    }

    _QWORD *__fastcall LogicSellChestCommand::~LogicSellChestCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicSellChestCommand::~LogicSellChestCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicSellChestCommand
