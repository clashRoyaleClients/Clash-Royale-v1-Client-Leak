class LogicLeaveAllianceCommand
{
public:

    void __fastcall LogicLeaveAllianceCommand::LogicLeaveAllianceCommand(LogicLeaveAllianceCommand *this)
    {
      LogicServerCommand *v1; // x0
    
      v1 = LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)v1 = &off_10045E800;
      *((_BYTE *)v1 + 40) = 0;
      *((_QWORD *)v1 + 4) = 0;
    }

    void __fastcall LogicLeaveAllianceCommand::destruct(JoinAllianceMessage *this)
    {
      void *v2; // x0
    
      LogicServerCommand::destruct(this);
      v2 = (void *)*((_QWORD *)this + 4);
      if ( v2 )
        operator delete(v2);
      *((_BYTE *)this + 40) = 0;
      *((_QWORD *)this + 4) = 0;
    }

    __int64 __fastcall LogicLeaveAllianceCommand::execute(JoinAllianceMessage *this, #1028 *a2)
    {
      #962 *PlayerAvatar; // x22
      LogicClientHome *Home; // x21
      LogicDataTables *AllianceId; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 Globals; // x0
      __int64 GameListener; // x0
      String v12; // [xsp+8h] [xbp-38h] BYREF
    
      PlayerAvatar = (#962 *)LogicGameMode::getPlayerAvatar(a2);
      Home = (LogicClientHome *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 1;
      if ( !PlayerAvatar )
        return 2;
      AllianceId = (LogicDataTables *)LogicClientAvatar::getAllianceId(PlayerAvatar);
      if ( AllianceId )
      {
        v7 = LogicClientAvatar::getAllianceId(PlayerAvatar);
        AllianceId = (LogicDataTables *)LogicLong::equals(v7, *((_QWORD *)this + 4));
        if ( (_DWORD)AllianceId )
        {
          LogicClientAvatar::setAllianceId(PlayerAvatar, 0);
          String::String(&v12, "");
          LogicClientAvatar::setAllianceName(PlayerAvatar, &v12);
          String::~String(&v12);
          LogicClientAvatar::setAllianceBadge(PlayerAvatar, 0);
          v8 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          AllianceId = (LogicDataTables *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8);
        }
      }
      Globals = LogicDataTables::getGlobals(AllianceId);
      LogicClientHome::startDonationCooldown(Home, *(_DWORD *)(Globals + 108));
      GameListener = LogicGameMode::getGameListener(a2);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 144LL))(
        GameListener,
        *((unsigned __int8 *)this + 40));
      return 0;
    }

    __int64 __fastcall LogicLeaveAllianceCommand::getCommandType(JoinAllianceMessage *this)
    {
      return 208;
    }

    __int64 __fastcall LogicLeaveAllianceCommand::encode(JoinAllianceMessage *this, #1226 *a2)
    {
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 4));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 40));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicLeaveAllianceCommand::decode(JoinAllianceMessage *this, #1225 *a2)
    {
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_BYTE *)this + 40) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      return LogicServerCommand::decode(this, a2);
    }

    void __fastcall LogicLeaveAllianceCommand::~LogicLeaveAllianceCommand(JoinAllianceMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicLeaveAllianceCommand::~LogicLeaveAllianceCommand(JoinAllianceMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicLeaveAllianceCommand
