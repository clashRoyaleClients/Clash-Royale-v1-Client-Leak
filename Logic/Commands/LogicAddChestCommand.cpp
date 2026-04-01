class LogicAddChestCommand
{
public:

    void __fastcall LogicAddChestCommand::LogicAddChestCommand(LogicAddChestCommand *this)
    {
      LogicServerCommand *v1; // x0
    
      v1 = LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)v1 = &off_10045E788;
      *((_BYTE *)v1 + 32) = 0;
      *((_BYTE *)v1 + 33) = 0;
      *((_QWORD *)v1 + 5) = 0;
    }

    __int64 __fastcall LogicAddChestCommand::destruct(ChangeAllianceMemberRoleMessage *this)
    {
      __int64 result; // x0
    
      result = LogicServerCommand::destruct(this);
      *((_BYTE *)this + 32) = 0;
      *((_BYTE *)this + 33) = 0;
      *((_QWORD *)this + 5) = 0;
      return result;
    }

    __int64 __fastcall LogicAddChestCommand::getCommandType(ChangeAllianceMemberRoleMessage *this)
    {
      return 214;
    }

    __int64 __fastcall LogicAddChestCommand::encode(#916 **this, #1226 *a2)
    {
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 32));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 33));
      ByteStreamHelper::writeDataReference((int)a2, *(this + 5));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicAddChestCommand::decode(ChangeAllianceMemberRoleMessage *this, #1225 *a2)
    {
      int v4; // w2
    
      *((_BYTE *)this + 32) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 33) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_QWORD *)this + 5) = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x36, v4);
      return LogicServerCommand::decode(this, a2);
    }

    __int64 __fastcall LogicAddChestCommand::execute(ChangeAllianceMemberRoleMessage *this, #1028 *a2)
    {
      #962 *PlayerAvatar; // x0
      LogicClientAvatar *v5; // x20
      const #1143 *v6; // x1
      const #941 *NextWinnerChest; // x24
      LogicClientHome *Home; // x22
      #1057 *v9; // x21
      int v10; // w1
      __int64 GameListener; // x0
      int v12; // w23
      __int64 *v13; // x19
      __int64 v14; // x8
      void (__fastcall *v15)(__int64 *, #1057 *, __int64); // x20
      __int64 ChestCnt; // x0
    
      PlayerAvatar = (#962 *)LogicGameMode::getPlayerAvatar(a2);
      v5 = PlayerAvatar;
      v6 = (const #1143 *)*((_QWORD *)this + 5);
      if ( v6 )
      {
        if ( *((_BYTE *)this + 32) )
        {
          NextWinnerChest = (const #941 *)LogicClientAvatar::getNextWinnerChest(PlayerAvatar, v6);
          Home = (LogicClientHome *)LogicGameMode::getHome(a2);
          if ( NextWinnerChest )
          {
            LogicClientAvatar::updateWinnerChestIndex(v5);
            v9 = (#1057 *)operator new(48);
            LogicChest::LogicChest(v9, NextWinnerChest);
            v10 = *((_BYTE *)this + 33) ? 1 : 6;
            LogicChest::setSource(v9, v10);
            LogicChest::setNew(v9, 1);
            LogicClientHome::addChest(Home, v9, -1);
            LogicClientHome::autoOpenChestsIfNeeded(Home);
            GameListener = LogicGameMode::getGameListener(a2);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 96LL))(GameListener);
            if ( LogicClientAvatar::getChangeListener(v5) )
            {
              v12 = *((unsigned __int8 *)this + 33);
              v13 = (__int64 *)LogicClientAvatar::getChangeListener(v5);
              v14 = *v13;
              if ( v12 )
                v15 = *(void (__fastcall **)(__int64 *, #1057 *, __int64))(v14 + 176);
              else
                v15 = *(void (__fastcall **)(__int64 *, #1057 *, __int64))(v14 + 184);
              ChestCnt = LogicClientHome::getChestCnt(Home);
              v15(v13, v9, ChestCnt);
            }
          }
        }
      }
      return 0;
    }

    __int64 __fastcall LogicAddChestCommand::serverCanRunIfNotConnected(ChangeAllianceMemberRoleMessage *this)
    {
      return 1;
    }

    void __fastcall LogicAddChestCommand::~LogicAddChestCommand(ChangeAllianceMemberRoleMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicAddChestCommand::~LogicAddChestCommand(ChangeAllianceMemberRoleMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicAddChestCommand
