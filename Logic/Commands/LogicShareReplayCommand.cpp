class LogicShareReplayCommand
{
public:

    void __fastcall LogicShareReplayCommand::LogicShareReplayCommand(LogicShareReplayCommand *this)
    {
      LogicCommand *v1; // x0
    
      v1 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v1 = &off_1004611C0;
      *((_QWORD *)v1 + 4) = 0;
      *((_QWORD *)v1 + 5) = 0;
    }

    void __fastcall LogicShareReplayCommand::destruct(String **this)
    {
      void *v2; // x20
      void *v3; // x0
      _QWORD *v4; // x19
      void *v5; // t1
    
      LogicCommand::destruct((LogicCommand *)this);
      v2 = *(this + 5);
      if ( v2 )
      {
        String::~String(*(this + 5));
        operator delete(v2);
      }
      *(this + 5) = 0;
      v5 = *(this + 4);
      v4 = this + 4;
      v3 = v5;
      if ( v5 )
        operator delete(v3);
      *v4 = 0;
      v4[1] = 0;
    }

    __int64 __fastcall LogicShareReplayCommand::execute(LogicCharacterBuff *this, #1028 *a2, char a3)
    {
      #962 *PlayerAvatar; // x20
      LogicClientHome *Home; // x21
      int ShareReplayCooldownTime; // w0
      bool v9; // cc
      __int64 result; // x0
      __int64 Globals; // x0
      __int64 v12; // x0
    
      PlayerAvatar = (#962 *)LogicGameMode::getPlayerAvatar(a2);
      Home = (LogicClientHome *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 5;
      if ( !PlayerAvatar )
        return 6;
      if ( !(unsigned int)LogicClientAvatar::isInAlliance(PlayerAvatar) )
        return 2;
      if ( !*((_QWORD *)this + 4) )
        return 3;
      ShareReplayCooldownTime = LogicClientHome::getShareReplayCooldownTime(Home);
      v9 = ShareReplayCooldownTime <= 0;
      result = ShareReplayCooldownTime > 0;
      if ( (a3 & 2) != 0 && v9 )
      {
        Globals = LogicDataTables::getGlobals((LogicDataTables *)result);
        LogicClientHome::setShareReplayCooldownTime(Home, *(_DWORD *)(Globals + 468));
        v12 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 240LL))(
          v12,
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5));
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicShareReplayCommand::getCommandType(LogicCharacterBuff *this)
    {
      return 527;
    }

    __int64 __fastcall LogicShareReplayCommand::encode(LogicCharacterBuff *this, #1226 *a2)
    {
      void (__fastcall *v4)(#1226 *, __int64); // x8
    
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 4));
      v4 = *(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *((_QWORD *)this + 5) )
      {
        v4(a2, 1);
        (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 5));
      }
      else
      {
        v4(a2, 0);
      }
      return LogicCommand::encode(this, a2);
    }

    __int64 __fastcall LogicShareReplayCommand::decode(LogicCharacterBuff *this, #1225 *a2)
    {
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
        *((_QWORD *)this + 5) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      return LogicCommand::decode(this, a2);
    }

    __int64 __fastcall LogicShareReplayCommand::setBattleEntryId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 32) = a2;
      return result;
    }

    __int64 __fastcall LogicShareReplayCommand::setMessage(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 40) = a2;
      return this;
    }

    void __fastcall LogicShareReplayCommand::~LogicShareReplayCommand(LogicCharacterBuff *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicShareReplayCommand::~LogicShareReplayCommand(LogicCharacterBuff *this)
    {
      operator delete(this);
    }

}; // end class LogicShareReplayCommand
