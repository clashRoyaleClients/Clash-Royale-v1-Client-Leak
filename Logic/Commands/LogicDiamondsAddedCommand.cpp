class LogicDiamondsAddedCommand
{
public:

    void __fastcall LogicDiamondsAddedCommand::LogicDiamondsAddedCommand(LogicDiamondsAddedCommand *this)
    {
      LogicServerCommand *v1; // x0
    
      v1 = LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)v1 = &off_100464AF0;
      *((_DWORD *)v1 + 10) = 0;
      *((_BYTE *)v1 + 32) = 0;
      *((_DWORD *)v1 + 9) = 0;
      *((_QWORD *)v1 + 6) = 0;
    }

    void __fastcall LogicDiamondsAddedCommand::destruct(String **this)
    {
      void *v2; // x20
    
      LogicServerCommand::destruct((LogicServerCommand *)this);
      v2 = *(this + 6);
      if ( v2 )
      {
        String::~String(*(this + 6));
        operator delete(v2);
      }
      *((_DWORD *)this + 10) = 0;
      *((_BYTE *)this + 32) = 0;
      *((_DWORD *)this + 9) = 0;
      *(this + 6) = 0;
    }

    __int64 __fastcall LogicDiamondsAddedCommand::getCommandType(Popover *this)
    {
      return 202;
    }

    __int64 __fastcall LogicDiamondsAddedCommand::encode(Popover *this, #1226 *a2)
    {
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 32));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 9));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 6));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicDiamondsAddedCommand::decode(Popover *this, #1225 *a2)
    {
      *((_BYTE *)this + 32) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_DWORD *)this + 9) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_QWORD *)this + 6) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 1000);
      return LogicServerCommand::decode(this, a2);
    }

    __int64 __fastcall LogicDiamondsAddedCommand::execute(Popover *this, UnlockAccountPopup *a2, char a3)
    {
      tween::Bounce *PlayerAvatar; // x20
      int v7; // w22
      __int64 Home; // x0
      bool v9; // zf
      int Diamonds; // w0
      int FreeDiamonds; // w0
      __int64 GameListener; // x0
    
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      if ( !PlayerAvatar )
        return 1;
      v7 = a3 & 2;
      Home = LogicGameMode::getHome(a2);
      if ( Home )
        v9 = v7 == 0;
      else
        v9 = 1;
      if ( v9 )
        return 2 * (unsigned int)(Home == 0);
      Diamonds = LogicClientAvatar::getDiamonds(PlayerAvatar);
      LogicClientAvatar::setDiamonds(PlayerAvatar, *((_DWORD *)this + 9) + Diamonds);
      if ( *((_BYTE *)this + 32) )
      {
        FreeDiamonds = LogicClientAvatar::getFreeDiamonds(PlayerAvatar);
        LogicClientAvatar::setFreeDiamonds(PlayerAvatar, *((_DWORD *)this + 9) + FreeDiamonds);
      }
      else
      {
        GameListener = LogicGameMode::getGameListener(a2);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 24LL))(
          GameListener,
          *((unsigned int *)this + 9));
        LogicClientAvatar::addCumulativePurchasedDiamonds(PlayerAvatar, *((_DWORD *)this + 9));
      }
      return 0;
    }

    void __fastcall LogicDiamondsAddedCommand::~LogicDiamondsAddedCommand(Popover *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicDiamondsAddedCommand::~LogicDiamondsAddedCommand(Popover *this)
    {
      operator delete(this);
    }

}; // end class LogicDiamondsAddedCommand
