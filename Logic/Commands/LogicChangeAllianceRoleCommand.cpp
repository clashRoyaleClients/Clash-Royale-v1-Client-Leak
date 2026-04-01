class LogicChangeAllianceRoleCommand
{
public:

    void __fastcall LogicChangeAllianceRoleCommand::LogicChangeAllianceRoleCommand(LogicChangeAllianceRoleCommand *this)
    {
      LogicServerCommand *v1; // x0
    
      v1 = LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)v1 = &off_100462228;
      *((_QWORD *)v1 + 4) = 0;
      *((_DWORD *)v1 + 10) = 0;
    }

    void __fastcall LogicChangeAllianceRoleCommand::destruct(LogicJSONArray *this)
    {
      void *v2; // x0
    
      LogicServerCommand::destruct(this);
      v2 = (void *)*((_QWORD *)this + 4);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 4) = 0;
      *((_DWORD *)this + 10) = 0;
    }

    __int64 __fastcall LogicChangeAllianceRoleCommand::getCommandType(LogicJSONArray *this)
    {
      return 210;
    }

    __int64 __fastcall LogicChangeAllianceRoleCommand::execute(LogicJSONArray *this, #1028 *a2)
    {
      tween::Bounce *PlayerAvatar; // x0
      tween::Bounce *v4; // x20
      __int64 AllianceId; // x0
    
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      v4 = PlayerAvatar;
      if ( !PlayerAvatar )
        return 1;
      if ( LogicClientAvatar::getAllianceId(PlayerAvatar) )
      {
        AllianceId = LogicClientAvatar::getAllianceId(v4);
        if ( (unsigned int)LogicLong::equals(AllianceId, *((_QWORD *)this + 4)) )
          LogicClientAvatar::setAllianceRole(v4, *((_DWORD *)this + 10));
      }
      return 0;
    }

    __int64 __fastcall LogicChangeAllianceRoleCommand::encode(LogicJSONArray *this, #1226 *a2)
    {
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 4));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 10));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicChangeAllianceRoleCommand::decode(LogicJSONArray *this, #1225 *a2)
    {
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_DWORD *)this + 10) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      return LogicServerCommand::decode(this, a2);
    }

    void __fastcall LogicChangeAllianceRoleCommand::~LogicChangeAllianceRoleCommand(LogicJSONArray *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicChangeAllianceRoleCommand::~LogicChangeAllianceRoleCommand(LogicJSONArray *this)
    {
      operator delete(this);
    }

}; // end class LogicChangeAllianceRoleCommand
