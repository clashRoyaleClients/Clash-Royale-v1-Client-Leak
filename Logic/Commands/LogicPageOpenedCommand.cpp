class LogicPageOpenedCommand
{
public:

    __int64 __fastcall LogicPageOpenedCommand::LogicPageOpenedCommand(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::LogicCommand(a1);
      *(_QWORD *)result = &off_10046CD88;
      *(_DWORD *)(result + 28) = 0;
      return result;
    }

    __int64 __fastcall LogicPageOpenedCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(a1);
      *(_DWORD *)(a1 + 28) = 0;
      return result;
    }

    __int64 LogicPageOpenedCommand::getCommandType()
    {
      return 539;
    }

    __int64 __fastcall LogicPageOpenedCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 28));
    }

    __int64 __fastcall LogicPageOpenedCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(a1, a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      a1[7] = result;
      return result;
    }

    __int64 __fastcall LogicPageOpenedCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      LogicClientHome *Home; // x0
      int v6; // w1
      __int64 v7; // x8
    
      Home = (LogicClientHome *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 1;
      v6 = *(_DWORD *)(a1 + 28);
      if ( v6 < 1 )
        return 2;
      if ( v6 <= 4 )
        v7 = 0;
      else
        v7 = 3;
      if ( (a3 & 2) != 0 && v6 <= 4 )
      {
        LogicClientHome::setPageOpened(Home, v6);
        return 0;
      }
      return v7;
    }

    __int64 __fastcall LogicPageOpenedCommand::setPageID(__int64 result, int a2)
    {
      *(_DWORD *)(result + 28) = a2;
      return result;
    }

    _QWORD *__fastcall LogicPageOpenedCommand::~LogicPageOpenedCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicPageOpenedCommand::~LogicPageOpenedCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicPageOpenedCommand
