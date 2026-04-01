class LogicAllianceSettingsChangedCommand
{
public:

    LogicServerCommand *__fastcall LogicAllianceSettingsChangedCommand::LogicAllianceSettingsChangedCommand(
            LogicServerCommand *a1)
    {
      LogicServerCommand *result; // x0
    
      result = LogicServerCommand::LogicServerCommand(a1);
      *(_QWORD *)result = &off_100466A30;
      *((_QWORD *)result + 4) = 0;
      *((_QWORD *)result + 5) = 0;
      return result;
    }

    void __fastcall LogicAllianceSettingsChangedCommand::destruct(_QWORD *a1)
    {
      void *v2; // x0
      _QWORD *v3; // x19
      void *v4; // t1
    
      LogicServerCommand::destruct((LogicServerCommand *)a1);
      v4 = (void *)a1[4];
      v3 = a1 + 4;
      v2 = v4;
      if ( v4 )
        operator delete(v2);
      *v3 = 0;
      v3[1] = 0;
    }

    __int64 __fastcall LogicAllianceSettingsChangedCommand::execute(__int64 a1, UnlockAccountPopup *a2)
    {
      tween::Bounce *PlayerAvatar; // x0
      tween::Bounce *v5; // x21
      __int64 AllianceId; // x0
      __int64 GameListener; // x0
    
      if ( !LogicGameMode::getHome(a2) )
        return 1;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      v5 = PlayerAvatar;
      if ( !PlayerAvatar )
        return 2;
      AllianceId = LogicClientAvatar::getAllianceId(PlayerAvatar);
      if ( (unsigned int)LogicLong::equals(AllianceId, *(_QWORD *)(a1 + 32)) )
      {
        LogicClientAvatar::setAllianceBadge(v5, *(_QWORD *)(a1 + 40));
        GameListener = LogicGameMode::getGameListener(a2);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 168LL))(GameListener);
      }
      return 0;
    }

    __int64 __fastcall LogicAllianceSettingsChangedCommand::getCommandType(LogicShareReplayCommand *this)
    {
      return 212;
    }

    __int64 __fastcall LogicAllianceSettingsChangedCommand::encode(__int64 a1, __int64 a2)
    {
      ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 32));
      ByteStreamHelper::writeDataReference(a2, *(AreaEffectObject **)(a1 + 40));
      return LogicServerCommand::encode(a1, a2);
    }

    __int64 __fastcall LogicAllianceSettingsChangedCommand::decode(__int64 a1, #1317 *a2)
    {
      #1225 *v4; // x1
    
      *(_QWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 168LL))(a2);
      *(_QWORD *)(a1 + 40) = ByteStreamHelper::readDataReference(a2, v4);
      return LogicServerCommand::decode((#1156 *)a1, a2);
    }

    void __fastcall LogicAllianceSettingsChangedCommand::~LogicAllianceSettingsChangedCommand(
            LogicShareReplayCommand *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicAllianceSettingsChangedCommand::~LogicAllianceSettingsChangedCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicAllianceSettingsChangedCommand
