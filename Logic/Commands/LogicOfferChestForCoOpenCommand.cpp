class LogicOfferChestForCoOpenCommand
{
public:

    __int64 __fastcall LogicOfferChestForCoOpenCommand::LogicOfferChestForCoOpenCommand(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::LogicCommand(a1);
      *(_QWORD *)result = &off_100467D28;
      *(_DWORD *)(result + 28) = -1;
      *(_QWORD *)(result + 32) = 0;
      return result;
    }

    void __fastcall LogicOfferChestForCoOpenCommand::destruct(__int64 a1)
    {
      void *v2; // x20
    
      LogicCommand::destruct(a1);
      v2 = *(void **)(a1 + 32);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *(_DWORD *)(a1 + 28) = -1;
      *(_QWORD *)(a1 + 32) = 0;
    }

    __int64 LogicOfferChestForCoOpenCommand::getCommandType()
    {
      return 515;
    }

    __int64 __fastcall LogicOfferChestForCoOpenCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 28));
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 32));
    }

    __int64 __fastcall LogicOfferChestForCoOpenCommand::decode(__int64 a1, ByteStreamHelper *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode((_DWORD *)a1, a2);
      *(_DWORD *)(a1 + 28) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_QWORD *)(a1 + 32) = result;
      return result;
    }

    __int64 LogicOfferChestForCoOpenCommand::execute()
    {
      return 1;
    }

    __int64 __fastcall LogicOfferChestForCoOpenCommand::setChestId(__int64 result, int a2)
    {
      *(_DWORD *)(result + 28) = a2;
      return result;
    }

    __int64 __fastcall LogicOfferChestForCoOpenCommand::setMessage(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 32) = a2;
      return result;
    }

    _QWORD *__fastcall LogicOfferChestForCoOpenCommand::~LogicOfferChestForCoOpenCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicOfferChestForCoOpenCommand::~LogicOfferChestForCoOpenCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicOfferChestForCoOpenCommand
