class LogicChangeAvatarNameCommand
{
public:

    void __fastcall LogicChangeAvatarNameCommand::LogicChangeAvatarNameCommand(LogicChangeAvatarNameCommand *this)
    {
      LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)this = &off_100471DB8;
      String::String((String *)((char *)this + 32));
      String::operator=((char *)this + 32, "");
      *((_DWORD *)this + 14) = 0;
      *((_BYTE *)this + 60) = 0;
    }

    // attributes: thunk
    void __fastcall LogicChangeAvatarNameCommand::LogicChangeAvatarNameCommand(LogicChangeAvatarNameCommand *this)
    {
      __ZN28LogicChangeAvatarNameCommandC2Ev(this);
    }

    __int64 __fastcall LogicChangeAvatarNameCommand::destruct(AllianceEventStreamItem *this)
    {
      __int64 result; // x0
    
      LogicServerCommand::destruct(this);
      result = String::operator=((char *)this + 32, "");
      *((_DWORD *)this + 14) = 0;
      *((_BYTE *)this + 60) = 0;
      return result;
    }

    __int64 __fastcall LogicChangeAvatarNameCommand::execute(
            AllianceEventStreamItem *this,
            UnlockAccountPopup *a2,
            char a3)
    {
      const String *v6; // x22
      tween::Bounce *PlayerAvatar; // x21
      __int64 result; // x0
      __int64 GameListener; // x0
    
      v6 = (const String *)((char *)this + 32);
      if ( !*((_DWORD *)this + 8) )
        return 1;
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar((__int64)a2);
      result = 2 * (unsigned int)(PlayerAvatar == 0);
      if ( (a3 & 2) != 0 )
      {
        if ( PlayerAvatar )
        {
          LogicClientAvatar::setName(PlayerAvatar, v6);
          LogicClientAvatar::setNameSetByUser((__int64)PlayerAvatar, *((_BYTE *)this + 60));
          LogicClientAvatar::setNameChangeState((__int64)PlayerAvatar, *((_DWORD *)this + 14));
          GameListener = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 136LL))(
            GameListener,
            *((unsigned int *)this + 14));
          return 0;
        }
      }
      return result;
    }

    __int64 __fastcall LogicChangeAvatarNameCommand::getCommandType(AllianceEventStreamItem *this)
    {
      return 201;
    }

    __int64 __fastcall LogicChangeAvatarNameCommand::encode(AllianceEventStreamItem *this, ExpBar *a2)
    {
      (*(void (__fastcall **)(ExpBar *, char *))(*(_QWORD *)a2 + 32LL))(a2, (char *)this + 32);
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *((unsigned int *)this + 14));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 60));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicChangeAvatarNameCommand::decode(AllianceEventStreamItem *this, ChallengePopup *a2)
    {
      String *v4; // x21
      String v6; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = (String *)((char *)this + 32);
      (*(void (__fastcall **)(String *__return_ptr, ChallengePopup *, __int64))(*(_QWORD *)a2 + 112LL))(&v6, a2, 60);
      String::operator=(v4);
      String::~String();
      *((_DWORD *)this + 14) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 144LL))(a2);
      *((_BYTE *)this + 60) = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 136LL))(a2);
      return LogicServerCommand::decode(this, a2);
    }

    // attributes: thunk
    void __fastcall LogicChangeAvatarNameCommand::~LogicChangeAvatarNameCommand(AllianceEventStreamItem *this)
    {
      __ZN28LogicChangeAvatarNameCommandD2Ev(this);
    }

    void __fastcall LogicChangeAvatarNameCommand::~LogicChangeAvatarNameCommand(AllianceEventStreamItem *this)
    {
      LogicChangeAvatarNameCommand::~LogicChangeAvatarNameCommand(this);
      operator delete(this);
    }

    void __fastcall LogicChangeAvatarNameCommand::~LogicChangeAvatarNameCommand(AllianceEventStreamItem *this)
    {
      *(_QWORD *)this = &off_100471DB8;
      String::~String();
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

}; // end class LogicChangeAvatarNameCommand
