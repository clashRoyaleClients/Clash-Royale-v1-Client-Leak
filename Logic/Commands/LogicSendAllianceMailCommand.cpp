class LogicSendAllianceMailCommand
{
public:

    void __fastcall LogicSendAllianceMailCommand::LogicSendAllianceMailCommand(LogicSendAllianceMailCommand *this)
    {
      LogicCommand *v1; // x0
    
      v1 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v1 = &off_100461790;
      *((_QWORD *)v1 + 4) = 0;
      *((_QWORD *)v1 + 5) = 0;
    }

    void __fastcall LogicSendAllianceMailCommand::destruct(String **this)
    {
      void *v2; // x20
      _QWORD *v3; // x21
      String *v4; // x19
    
      LogicCommand::destruct((LogicCommand *)this);
      v3 = this + 4;
      v2 = *(this + 4);
      if ( v2 )
      {
        String::~String(*(this + 4));
        operator delete(v2);
      }
      *(this + 4) = 0;
      v4 = *(this + 5);
      if ( v4 )
      {
        String::~String(v4);
        operator delete(v4);
      }
      *v3 = 0;
      v3[1] = 0;
    }

    __int64 __fastcall LogicSendAllianceMailCommand::execute(LogicAchievementData *this, #1028 *a2, char a3)
    {
      __int64 PlayerAvatar; // x0
      #962 *v7; // x20
      int v8; // w22
      __int64 Home; // x0
      int SendTeamMailCooldownTime; // w8
      __int64 result; // x0
      LogicDataTables *v12; // x21
      __int64 Globals; // x0
      __int64 v14; // x0
    
      PlayerAvatar = LogicGameMode::getPlayerAvatar(a2);
      v7 = (#962 *)PlayerAvatar;
      if ( !PlayerAvatar )
        return 1;
      if ( !*(_BYTE *)(LogicClientAvatar::getAllianceRoleData(PlayerAvatar) + 105) )
        return 2;
      if ( !*((_QWORD *)this + 4) )
        return 3;
      if ( !*((_QWORD *)this + 5) )
        return 4;
      if ( !LogicGameMode::getHome(a2) )
        return 6;
      v8 = a3 & 2;
      Home = LogicGameMode::getHome(a2);
      SendTeamMailCooldownTime = LogicClientHome::getSendTeamMailCooldownTime(Home);
      if ( SendTeamMailCooldownTime <= 0 )
        result = 0;
      else
        result = 5;
      if ( v8 )
      {
        if ( SendTeamMailCooldownTime <= 0 )
        {
          v12 = (LogicDataTables *)LogicGameMode::getHome(a2);
          Globals = LogicDataTables::getGlobals(v12);
          LogicClientHome::setSendTeamMailCooldownTime(v12, *(_DWORD *)(Globals + 472));
          v14 = LogicClientAvatar::getChangeListener(v7);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 248LL))(
            v14,
            *((_QWORD *)this + 5),
            *((_QWORD *)this + 4));
          return 0;
        }
      }
      return result;
    }

    __int64 __fastcall LogicSendAllianceMailCommand::getCommandType(LogicAchievementData *this)
    {
      return 533;
    }

    __int64 __fastcall LogicSendAllianceMailCommand::encode(LogicAchievementData *this, #1226 *a2)
    {
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 4));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 5));
      return LogicCommand::encode(this, a2);
    }

    __int64 __fastcall LogicSendAllianceMailCommand::decode(LogicAchievementData *this, #1225 *a2)
    {
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 5) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      return LogicCommand::decode(this, a2);
    }

    __int64 __fastcall LogicSendAllianceMailCommand::setMessage(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 32) = a2;
      return this;
    }

    __int64 __fastcall LogicSendAllianceMailCommand::setTitle(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 40) = a2;
      return this;
    }

    void __fastcall LogicSendAllianceMailCommand::~LogicSendAllianceMailCommand(LogicAchievementData *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicSendAllianceMailCommand::~LogicSendAllianceMailCommand(LogicAchievementData *this)
    {
      operator delete(this);
    }

}; // end class LogicSendAllianceMailCommand
