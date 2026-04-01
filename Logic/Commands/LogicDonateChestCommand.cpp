class LogicDonateChestCommand
{
public:

    LogicServerCommand *__fastcall LogicDonateChestCommand::LogicDonateChestCommand(LogicServerCommand *a1)
    {
      LogicServerCommand *result; // x0
    
      result = LogicServerCommand::LogicServerCommand(a1);
      *(_QWORD *)result = &off_10046FE60;
      *((_QWORD *)result + 4) = 0;
      *((_DWORD *)result + 10) = -1;
      return result;
    }

    void __fastcall LogicDonateChestCommand::destruct(BubbleSprite *this)
    {
      void *v2; // x0
    
      LogicServerCommand::destruct(this);
      v2 = (void *)*((_QWORD *)this + 4);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 4) = 0;
      *((_DWORD *)this + 10) = -1;
    }

    __int64 __fastcall LogicDonateChestCommand::getCommandType(BubbleSprite *this)
    {
      return 215;
    }

    __int64 __fastcall LogicDonateChestCommand::encode(__int64 a1, __int64 a2)
    {
      ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 32));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 40));
      return LogicServerCommand::encode(a1, a2);
    }

    __int64 __fastcall LogicDonateChestCommand::decode(__int64 a1, #1225 *a2)
    {
      *(_QWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *(_DWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      return LogicServerCommand::decode((LogicAllianceRoleData *)a1, a2);
    }

    __int64 __fastcall LogicDonateChestCommand::execute(__int64 a1, UnlockAccountPopup *a2)
    {
      CoOpenStreamEntry *Home; // x0
      __int64 GameListener; // x0
    
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(a2);
      LogicClientHome::addChestToCoOpen(Home, *(#1236 **)(a1 + 32), *(_DWORD *)(a1 + 40));
      GameListener = LogicGameMode::getGameListener(a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 96LL))(GameListener);
      return 0;
    }

    void __fastcall LogicDonateChestCommand::~LogicDonateChestCommand(BubbleSprite *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicDonateChestCommand::~LogicDonateChestCommand(BubbleSprite *this)
    {
      operator delete(this);
    }

}; // end class LogicDonateChestCommand
